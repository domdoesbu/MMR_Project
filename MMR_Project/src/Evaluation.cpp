#include "Evaluation.h"
namespace fs = filesystem;

void Evaluation::EvaluateDatabase(string databasePath, int k) {

	// I think accuracy is the best choice since it ignores the query size but im gonna do p/r as well for now

	// for every shape in the database, query it
	// Compute the measurement value
	// Aggregate
	// Show final results either as a plot or something here or save in csv to show in .py file later
    // Accuracy = (TP + TN) / d OR 1 - (FP + TN) / d
    // Precision = TP / (TP + FP)
    // Recall = TP / (TP + FN)
    // F1-score = 2 * (precision * recall) / (precision + recall)
            // TP: I queried for A and got A
            // FP I queried for A, and got B labled as A
            // TN: I queried for A, and got B labled as B
            // FN: i queried for A, and an A was incorrectly labled as B

    FileOrganizer fo;
    Querying q;

    std::ofstream csv("evaluation_results.csv");
    csv << "query,accuracy,precision,recall,f1, r1, r2, r3, r4, r5, r6\n";

    int databaseSize = fo.DatabaseSize("feature_extraction_complete_normalized.csv");

    float totalAccuracy = 0.0f;
    float totalPrecision = 0.0f;
    float totalRecall = 0.0f;
    float totalF1 = 0.0f;
    int totalQueries = 0;

    // count how many items per class 
    std::unordered_map<std::string, int> classCounts;
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (fs::is_directory(classDir)) {
            int count = std::distance(fs::directory_iterator(classDir), fs::directory_iterator{});
            classCounts[classDir.path().filename().string()] = count;
        }
    }

    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        std::string className = classDir.path().filename().string();
        int total_A = classCounts[className];

        for (const auto& file : fs::directory_iterator(classDir)) {
            if (!fs::is_regular_file(file)) continue;

            std::string currentFile = file.path().filename().string();
            std::cout << currentFile << std::endl;
            
            std::string path = databasePath + className + "/" + currentFile;
            auto resultsAll = q.ExecuteQuery(path, databasePath, k, 1);
            std::vector<std::string> labels = resultsAll.first;

            int TP = 0;
            int FP = 0;
            int FN = 0;
            int TN = 0;

            for (auto& label : labels) {
                std::string returnedClass = fs::path(label).parent_path().filename().string();
                if (returnedClass == className) {
                    TP++;
                }
                else {
                    FP++;
                }
            }

            FN = total_A - TP;
            TN = (databaseSize - total_A) - FP;

            float accuracy = (float)(TP + TN) / (float)databaseSize;
            float precision = (TP + FP) > 0 ? (float)TP / (TP + FP) : 0.0f;
            float recall = (TP + FN) > 0 ? (float)TP / (TP + FN) : 0.0f;
            float f1 = (precision + recall) > 0 ? 2.0f * (precision * recall) / (precision + recall) : 0.0f;

            totalAccuracy += accuracy;
            totalPrecision += precision;
            totalRecall += recall;
            totalF1 += f1;
            totalQueries++;
            csv << file.path().string() << "," << accuracy << "," << precision << "," << recall << "," << f1 << ","
                << labels[0] << "," << labels[1] << "," << labels[2] << "," << labels[3] << "," << labels[4] << "," << labels[5] << "\n";
        }
    }

    // Compute averages
    if (totalQueries > 0) {
        float avgAccuracy = totalAccuracy / totalQueries;
        float avgPrecision = totalPrecision / totalQueries;
        float avgRecall = totalRecall / totalQueries;
        float avgF1 = totalF1 / totalQueries;

        std::cout << "---- Evaluation Results ----" << std::endl;
        std::cout << "Queries evaluated: " << totalQueries << std::endl;
        std::cout << "Average Accuracy:  " << avgAccuracy << std::endl;
        std::cout << "Average Precision: " << avgPrecision << std::endl;
        std::cout << "Average Recall:    " << avgRecall << std::endl;
        std::cout << "Average F1 Score:  " << avgF1 << std::endl;
    }

}

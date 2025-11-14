# MMR PROJECT 2025 
## Dom Doesburg and Leon Pirazzoli

## Instructions
1. Clone repository
2. Open in Visual Studio 2022
3. Change 'Solution Configuration' to 'Release' and NOT 'Debug'
4. Run **application.cpp**
5. To kill the program, close the terminal, or stop it directly in Visual Studio.
## Object Manipulation
The default setting of object movement is rotation around the origin, using W, A, S, D, Q, and E. Clicking 'O' will toggle from rotation to panning.
'P' will toggle the wireframe.

## Statistics
To run get the plots of different metrics, the files are located in the *statistics* folder, which are all python scripts.

## Notes
This project was built on Windows systems, and was not tested on Mac or Linux systems.
The code is setup to execute queries on the provided database, which is already resampled, normalized, has feature extration completed.
To re-run the set up of the database, you need to uncomment the code in the "DATABASE SETUP" section (Lines 232-270 in **application.cpp**).

### windows-only: [

# Fixes DLL loading paths.

def _init_patch():
    import os
    libs_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), os.pardir))
    os.add_dll_directory(libs_dir)

_init_patch()
del _init_patch

### ]



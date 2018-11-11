# How to 
> meson build
> cd build

## Running tests
> ninja test

## Running app
> ./src/cdemo

## Visual Studio Code integration
You can actually have a great Meson / C integration in Visual Studio Code by adding a few plugins :
 - C/C++ from Microsoft
 - Meson from Ali Sabil for some Sugar

Then open the Commands Palette and choose "Edit Configurations..."

This will create a "c_cpp_properties.json" file.
In the configuration object, add :

    compileCommands": "build/compile_commands.json

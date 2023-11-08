# T7 Zeus
An Engine mod for T7 (Call of Duty: Black Ops 3)

## Compiling the DLL
* Run `./generate` in the terminal
* Open the `./build/` folder and open the Visual Studio Solution (.sln)
* Build the project
* The .dll will be located at `./build/bin/x64/Debug/t7-zeus.dll`

## How to Use
* Put the .lua files from the [user](./user/) folder in to your mod or map folder
* Replace line 10 in `Mods.lua` with the path to your mod/map. The root folder is your Black Ops 3 root folder
* Call `Mods.lua` in CSC like so: `LuiLoad("Mods");`
* Add the .dll to your mod/map folder
* In your zone file add the following lines:
```lua
// Lua
rawfile,Mods.lua
rawfile,zeus-utils.lua
```
* Finally, link the mod/map
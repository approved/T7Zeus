local zeus = require("t7-zeus")
if not zeus then
    Engine.ComError(Enum.errorCode.ERROR_UI, "Could not get Zeus instance")
    return
end

-- locate dll file
local modinfo = {
    modname = "t7zeus",
    mapname = "",
    workshopid = "",
    dllname = "t7-zeus.dll",
    dllpath = [[.\mods\t7zeus\zone\]], -- Path to dll. Only used for maps/mods installed in game directory.
    forcepath = false,
}

zeus.dll_path = zeus.InterpretDllPath(modinfo)

-- initialize
zeus.init()

-- Enable the paralyzer patch
zeus.set_paralyzer_patch_enabled()

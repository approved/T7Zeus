-- LuiLoad this file from CSC at the earliest point you want to load it
EnableGlobals()
require("t7-zeus")

local zeus = GetZeus()
if not zeus then
    Engine.ComError(Enum.errorCode.ERROR_UI, "Could not get Zeus instance")
    return
end

local relative_path = "./"
zeus.dll_path = (relative_path .. zeus.dll_name)
zeus.init()

Enable the paralyzer patch
zeus.set_paralyzer_patch_enabled()
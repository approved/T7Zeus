-- LuiLoad this file from CSC at the earliest point you want to load it
EnableGlobals()
require("t7-zeus")

local zeus = GetZeus()
if not zeus then
    Engine.ComError(Enum.errorCode.ERROR_UI, "Could not get Zeus instance")
    return
end

zeus.dll_path = ("./usermaps/zm_test/" .. zeus.dll_name)
zeus.init()

Enable the paralyzer patch
zeus.set_paralyzer_patch_enabled()
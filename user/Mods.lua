local t7zeus = require("t7-zeus")

local zeus = t7zeus.zeus
if not zeus then
    Engine.ComError(Enum.errorCode.ERROR_UI, "Could not get Zeus instance")
    return
end

local relative_path = "./"
zeus.dll_path = (relative_path .. zeus.dll_name)
zeus.init()

-- Enable the paralyzer patch
zeus.set_paralyzer_patch_enabled()

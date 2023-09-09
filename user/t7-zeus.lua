EnableGlobals()
local package = require("package")

local zeus = {}
zeus.dll_name = "t7-zeus.dll"
zeus.dll_path = ("./" .. zeus.dll_name)

zeus.init = function()
    local init = package.loadlib(zeus.dll_path, "init")
    if not init then
        Engine.ComError(Enum.errorCode.ERROR_UI, "Failed to find " .. zeus.dll_name)
        return
    end

    zeus.init = init
    zeus.init()
end

zeus.set_paralyzer_patch_enabled = function()
    local set_paralyzer_patch_enabled = package.loadlib(zeus.dll_path, "SetParalyzerPatchEnabled")
    
    if not set_paralyzer_patch_enabled then
        Engine.ComError(Enum.errorCode.ERROR_UI, "SetParalyzerPatchEnabled: Failure")
        return
    end

    zeus.set_paralyzer_patch_enabled = set_paralyzer_patch_enabled
    zeus.set_paralyzer_patch_enabled()
end

GetZeus = function()
    return zeus
end

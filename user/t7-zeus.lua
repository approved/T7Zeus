local package = require("package")

local zeus = {}
zeus.dll_name = "t7-zeus.dll"
zeus.dll_path = ("./" .. zeus.dll_name)

zeus.init = function()
    if Engine.DvarInt(nil, "zeus_initialized") == 1 then
        return
    end

    local init = package.loadlib(zeus.dll_path, "init")
    if not init then
        Engine.ComError(Enum.errorCode.ERROR_UI, "Failed to find " .. zeus.dll_name)
        return
    end

    init()
    Engine.SetDvar("zeus_initialized", 1)
end

zeus.set_paralyzer_patch_enabled = function()
    if Engine.DvarInt(nil, "paralyzer_patch_enabled") == 1 then
        return
    end

    local init = package.loadlib(zeus.dll_path, "SetParalyzerPatchEnabled")
    if not init then
        Engine.ComError(Enum.errorCode.ERROR_UI, "SetParalyzerPatchEnabled: Failure")
        return
    end

    init()
    Engine.SetDvar("paralyzer_patch_enabled", 1)
end


return {
    zeus = zeus,
}

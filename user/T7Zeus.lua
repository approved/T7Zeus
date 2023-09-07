local package = require("package")

Zeus = {
    dll_name = "T7Zeus.dll",
    dll_path = "./" .. dll_name,
}

Zeus.init_zeus = nil
function Zeus:new()
    -- loadlib will start from the BO3 root folder
    if not Zeus.set_paralyzer_patch_enabled then
        Zeus.init_zeus = package.loadlib(dll_path, "init")

        if not Zeus.init_zeus then
            Engine.ComError(Enum.errorCode.ERROR_UI, "Failed to find T7Zeus.dll")
            return nil
        end
    end

    Zeus.init_zeus()

    return Zeus
end

Zeus.set_paralyzer_patch_enabled = nil
function Zeus:PatchParalyzerDial(state)
    if not Zeus.set_paralyzer_patch_enabled then
        Zeus.set_paralyzer_patch_enabled = package.loadlib(dll_path, "SetParalyzerPatchEnabled")
       
        if not Zeus.set_paralyzer_patch_enabled then
            Engine.ComError(Enum.errorCode.ERROR_UI, "Failed: SetParalyzerPatchEnabled")
            return false
        end
    end

    if not Zeus.set_paralyzer_patch_enabled() then
        Engine.ComError(Enum.errorCode.ERROR_UI, "SetParalyzerPatchEnabled returned false")
        return false
    end

    return true
end
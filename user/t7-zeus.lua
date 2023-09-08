EnableGlobals()

local zeus = {}
zeus.dll_name = "t7-zeus.dll"
zeus.dll_path = ("./" .. zeus.dll_name)

zeus.init = function()
    local init = require("package").loadlib(zeus.dll_path, "init")
    if not init then
        Engine.ComError(Enum.errorCode.ERROR_UI, "Failed to find " .. zeus.dll_name)
        return
    end
    zeus.init = init
    zeus.init()
end

GetZeus = function()
    return zeus
end
-- zeus.init_zeus = nil
-- function zeus:new()
--     -- loadlib will start from the BO3 root folder
--     if not zeus.set_paralyzer_patch_enabled then
--         zeus.init_zeus = package.loadlib(dll_path, "init")

--         if not zeus.init_zeus then
--             Engine.ComError(Enum.errorCode.ERROR_UI, "Failed to find " .. dll_name)
--             return nil
--         end
--     end

--     zeus.init_zeus()

--     return zeus
-- end

-- zeus.set_paralyzer_patch_enabled = nil
-- function zeus:PatchParalyzerDial(state)
--     if not zeus.set_paralyzer_patch_enabled then
--         zeus.set_paralyzer_patch_enabled = package.loadlib(dll_path, "SetParalyzerPatchEnabled")
       
--         if not zeus.set_paralyzer_patch_enabled then
--             Engine.ComError(Enum.errorCode.ERROR_UI, "Failed: SetParalyzerPatchEnabled")
--             return false
--         end
--     end

--     if not zeus.set_paralyzer_patch_enabled() then
--         Engine.ComError(Enum.errorCode.ERROR_UI, "SetParalyzerPatchEnabled returned false")
--         return false
--     end

--     return true
-- end
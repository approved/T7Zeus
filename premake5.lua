workspace "t7-zeus"
    location "build"

    architecture "x86_64"
    staticruntime "On"
    editandcontinue "On"

    platforms {
        "x64",
    }

    configurations {
        "Debug",
        "Release",
    }

    flags {
        "shadowedvariables",
        "undefinedidentifiers",
        "multiprocessorcompile",
    }

    defines {
        "NOMINMAX",
        "WIN32_LEAN_AND_MEAN",
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        optimize "Off"
        runtime "Debug"
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "Full"
        runtime "Release"
        symbols "Off"
        flags { 
            "linktimeoptimization",
            "noincrementallink",
        }

    filter {}

    project "t7-zeus"
        targetname "t7-zeus"

        kind "SharedLib"
        language "C++"
        cppdialect "C++20"

        pchheader "stdafx.hpp"
        pchsource "./src/stdafx.cpp"

        includedirs {
            "./include/",
            "./include/zeus/",
        }

        files {
            -- PCH
            "./include/stdafx.hpp",

            -- Base Files
            "./src/**.cpp",
            "./include/**.hpp",

            -- Zeus
            "./src/zeus/**.cpp",
            "./include/zeus/**.hpp",
        }

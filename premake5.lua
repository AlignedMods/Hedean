workspace "Hedean"
    configurations { "Debug", "Release" }

    project "Hedean"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++20"

        location "build/"
        files { "src/**.cpp", "src/**.hpp" }

        includedirs {"vendor/raylib/src" }

        libdirs { "vendor/raylib/src" }
        links { "raylib","gdi32", "winmm" }
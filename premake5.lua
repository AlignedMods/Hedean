workspace "Hedean"
    configurations { "Debug", "Release" }

    project "Hedean"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++20"

        location "build/"
        files { "src/**.cpp", "src/**.hpp" }
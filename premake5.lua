solution "minunit"
  configurations { "Debug", "Release" }

  project "test"
    language "C"
    kind "ConsoleApp"
    includedirs { "include" }

    files {
       "*.c",
       "*.h"
    }

    filter "configurations:Debug"
      defines { "DEBUG" }
      flags { "Symbols" }
      optimize "Off"

    filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "Speed"

    filter "system:linux"
      links { "rt" }

target("4-1")
    set_kind("binary")
    add_files("4-1.c")

target("5-6")
    set_kind("binary")
    add_files("5-6.c")

target("1-1kh")
    set_kind("binary")
    add_files("1-1kh.c")

target("5-1-1")
    set_kind("binary")
    add_files("5-1-1.c")

target("5-1kh")
    set_kind("binary")
    add_files("5-1kh.c")

target("4-2")
    set_kind("binary")
    add_files("4-2.c")

target("3-2")
    set_kind("binary")
    add_files("3-2.c")

target("6-3")
    set_kind("binary")
    add_files("6-3.c")

target("3-1")
    set_kind("binary")
    add_files("3-1.c")

target("5-1")
    set_kind("binary")
    add_files("5-1.c")

target("6-2")
    set_kind("binary")
    add_files("6-2.c")

target("5-5")
    set_kind("binary")
    add_files("5-5.c")

target("4-1kc")
    set_kind("binary")
    add_files("4-1kc.c")

target("5-3")
    set_kind("binary")
    add_files("5-3.c")

target("4-4")
    set_kind("binary")
    add_files("4-4.c")

target("Celsius_to_Fahrenheit")
    set_kind("binary")
    add_files("Celsius_to_Fahrenheit.c")

target("6-1")
    set_kind("binary")
    add_files("6-1.c")

target("3-3")
    set_kind("binary")
    add_files("3-3.c")

target("5-8")
    set_kind("binary")
    add_files("5-8.c")

target("4-3")
    set_kind("binary")
    add_files("4-3.c")

target("5-4")
    set_kind("binary")
    add_files("5-4.c")

target("1-1")
    set_kind("binary")
    add_files("1-1.c")

target("4-2kh")
    set_kind("binary")
    add_files("4-2kh.c")

target("5-2kh")
    set_kind("binary")
    add_files("5-2kh.c")

target("5-2")
    set_kind("binary")
    add_files("5-2.c")

target("4-5")
    set_kind("binary")
    add_files("4-5.c")

target("5-7")
    set_kind("binary")
    add_files("5-7.c")

target("love")
    set_kind("binary")
    add_files("love.c")

--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro defination
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--


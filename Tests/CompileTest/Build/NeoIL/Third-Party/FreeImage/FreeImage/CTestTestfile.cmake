# CMake generated Testfile for 
# Source directory: /home/tliao/Documents/NeoIL/NeoIL/Third-Party/FreeImage/FreeImage
# Build directory: /home/tliao/Documents/NeoIL/Tests/CompileTest/Build/NeoIL/Third-Party/FreeImage/FreeImage
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(FreeImagetTest "/home/tliao/Documents/NeoIL/Tests/CompileTest/Binaries/FreeImageTest")
set_tests_properties(FreeImagetTest PROPERTIES  WORKING_DIRECTORY "/home/tliao/Documents/NeoIL/Tests/CompileTest/Build/NeoIL/Third-Party/FreeImage/FreeImage/TestAPI/" _BACKTRACE_TRIPLES "/home/tliao/Documents/NeoIL/NeoIL/Third-Party/FreeImage/FreeImage/CMakeLists.txt;44;add_test;/home/tliao/Documents/NeoIL/NeoIL/Third-Party/FreeImage/FreeImage/CMakeLists.txt;0;")
add_test(FreeImagetPlusTest "/home/tliao/Documents/NeoIL/Tests/CompileTest/Binaries/FreeImagePlusTest")
set_tests_properties(FreeImagetPlusTest PROPERTIES  WORKING_DIRECTORY "/home/tliao/Documents/NeoIL/Tests/CompileTest/Build/NeoIL/Third-Party/FreeImage/FreeImage/Wrapper/FreeImagePlus/test/" _BACKTRACE_TRIPLES "/home/tliao/Documents/NeoIL/NeoIL/Third-Party/FreeImage/FreeImage/CMakeLists.txt;45;add_test;/home/tliao/Documents/NeoIL/NeoIL/Third-Party/FreeImage/FreeImage/CMakeLists.txt;0;")
subdirs("TestAPI")
subdirs("Wrapper/FreeImagePlus")
subdirs("Wrapper/FreeImagePlus/test")

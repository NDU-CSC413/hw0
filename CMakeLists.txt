cmake_minimum_required(VERSION 3.10.0)
project (assign2 LANGUAGES CXX)
add_executable (main main.cpp helpers.h)
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT "main")
set(CMAKE_SUPPRESS_REGENERATION true)
set_target_properties(main PROPERTIES CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

function(config n)
  add_executable("test${n}" "t${n}.cpp" helpers.h)
  set_target_properties(test${n} PROPERTIES CXX_STANDARD 17)
endfunction()

config(0)
config(1)
config(2)
config(3)
config(4)
config(5)
config(6)



cmake_minimum_required(VERSION 3.10.0)
project (CSC413-hw0 LANGUAGES CXX)
add_executable (main main.cpp helpers.h)
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT "main")
set(CMAKE_SUPPRESS_REGENERATION true)
set_target_properties(main PROPERTIES CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

function(config n m)
  add_executable("test${n}" test-main.cpp "t${n}.cpp" helpers.h)
  #pass the option -DPARTIAL if you want partial grades
  set(MYOPT "-DMAX_POINTS=${m};-DTEST_NAME=\"Test${n}\"")
  #  message(${MYOPT})
  #this will set preprocessor flags for ALL of them
  #add_compile_definitions(MAX_POINTS=${m} TEST_NAME="Test${n}")
  set_source_files_properties("t${n}.cpp" PROPERTIES COMPILE_OPTIONS "-DMAX_POINTS=${m};-DTEST_NAME=\"Test${n}\"")
  #set_source_files_properties("t${n}.cpp" PROPERTIES COMPILE_OPTIONS ${MYOPT})
  set_target_properties(test${n} PROPERTIES CXX_STANDARD 17)
endfunction()

config(0 17)
config(1 17)
config(2 17)
config(3 17)
config(4 17)
config(5 10)
config(6 5)
#get_cmake_property(_variableNames VARIABLES)
#list (SORT _variableNames)
#foreach (_variableName ${_variableNames})
#	    message(STATUS "${_variableName}=${${_variableName}}")
#    endforeach()


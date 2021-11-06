# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Inheritance_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Inheritance_autogen.dir\\ParseCache.txt"
  "Inheritance_autogen"
  )
endif()

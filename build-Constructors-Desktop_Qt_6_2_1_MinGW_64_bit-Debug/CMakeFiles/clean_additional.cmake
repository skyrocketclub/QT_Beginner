# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Constructors_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Constructors_autogen.dir\\ParseCache.txt"
  "Constructors_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Array_autogen"
  "CMakeFiles\\Array_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Array_autogen.dir\\ParseCache.txt"
  )
endif()

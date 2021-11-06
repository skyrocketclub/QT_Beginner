# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Dog_calc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Dog_calc_autogen.dir\\ParseCache.txt"
  "Dog_calc_autogen"
  )
endif()

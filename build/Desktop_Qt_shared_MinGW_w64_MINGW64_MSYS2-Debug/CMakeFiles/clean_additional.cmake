# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\cursach_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cursach_autogen.dir\\ParseCache.txt"
  "cursach_autogen"
  )
endif()

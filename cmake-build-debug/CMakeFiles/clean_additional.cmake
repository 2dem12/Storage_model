# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Storage_model_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Storage_model_autogen.dir/ParseCache.txt"
  "Storage_model_autogen"
  )
endif()

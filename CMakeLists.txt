cmake_minimum_required(VERSION 3.25.2)
project(code_lee)

include_directories(./ ./Array)
set(ARRAY_SRC Array/erfen.cpp Array/youxushuzupingfang.cpp Array/youxushuzupingfang.h)

set(CMAKE_CXX_STANDARD 17)
add_executable(code_lee main.cpp ${ARRAY_SRC})
#add_executable(code_lee main.cpp
#        Array/erfen.cpp)
## Add the source in project root directory
#aux_source_directory(. DIRSRCS)
## Add header file include directories


## Add block directories
#add_subdirectory(Array)
#add_subdirectory(world)
## Target
#add_executable(code_lee ${DIRSRCS}
#       main Array/erfen.h)
#target_link_libraries(code_lee hello world)
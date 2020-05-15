add_library(simple pointer_simple.cpp)
add_executable(pointer simple_demo.cpp)
target_link_libraries(pointer simple)

add_library(array pointer_array.cpp)
add_executable(advanced advance_demo.cpp)
target_link_libraries(advanced array)
add_executable(hello_world hello_world.cpp)

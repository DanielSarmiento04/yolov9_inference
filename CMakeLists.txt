cmake_minimum_required(VERSION 3.10)

# set the project name in a variable
set(project_name yolov9_inference)

project(${project_name})

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)

# add the executable
add_executable(${project_name} 
        ./src/main.cpp
)

target_link_libraries(${project_name}  ${OpenCV_LIBS})
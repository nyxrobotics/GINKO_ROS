cmake_minimum_required(VERSION 2.8.3)
# Package name: ginko_joint_controller
project(ginko_joint_controller)

#add_compile_options(-std=c++11)
add_compile_options(-std=c++17 -O3)

# Finding Dependent CMake Packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
)
# let cmake find OpenMP and set some variables(https://stackoverflow.com/questions/17633513/cmake-cannot-find-openmp)
OPTION (USE_OpenMP "Use OpenMP" ON)
IF(USE_OpenMP)
  FIND_PACKAGE(OpenMP REQUIRED)
  IF(OPENMP_FOUND)
    message(STATUS "OPENMP FOUND")
    SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  ENDIF()
ENDIF()
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lpthread")

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs
)

###########
## Build ##
###########


include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_dependencies(
  ${${PROJECT_NAME}_EXPORTED_TARGETS} 
  ${catkin_EXPORTED_TARGETS}
)

file(GLOB MY_SOURCES "src/*.cpp")
#add_executable(${PROJECT_NAME} src/ginko_controller.cpp)
add_executable(${PROJECT_NAME} ${MY_SOURCES})

target_link_libraries(${PROJECT_NAME} 
  ${catkin_LIBRARIES} 
)


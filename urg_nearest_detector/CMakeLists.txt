cmake_minimum_required(VERSION 2.8.3)
# Package name: urg_nearest_detector
project(urg_nearest_detector)

#add_compile_options(-std=c++11)
add_compile_options(-std=c++17 -O3)

# Finding Dependent CMake Packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  nodelet
  dynamic_reconfigure #for rqt_reconfigure
  tf2
  tf2_bullet
  tf2_eigen
  tf2_geometry_msgs
  tf2_kdl
  tf2_msgs
  tf2_py
  tf2_ros
  tf2_sensor_msgs
  tf2_tools
  tf
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
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs nodelet
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

add_dependencies(${PROJECT_NAME}
  ${${PROJECT_NAME}_EXPORTED_TARGETS} 
  ${catkin_EXPORTED_TARGETS}
  urg_nearest_detector_gencfg #for rqt_reconfigure 
)
target_link_libraries(${PROJECT_NAME} 
  ${catkin_LIBRARIES} 
)



#############
## Install ##
#############

install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY include/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
)

install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

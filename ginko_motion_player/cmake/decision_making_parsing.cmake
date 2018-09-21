FILE(MAKE_DIRECTORY "/home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs" )
FILE(GLOB_RECURSE FOR_DEL /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/* )
#message("delete files from /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/ : ${FOR_DEL}")
if( FOR_DEL )
	FILE(REMOVE ${FOR_DEL})
endif()
execute_process(COMMAND /home/gisen/ros/devel/.private/decision_making_parser/lib/decision_making_parser/decision_making_parser -pe -xml -dot -src "/home/gisen/ros/src/ginko_ros/ginko_motion_player" -dst "/home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs" -f "/home/gisen/ros/src/ginko_ros/ginko_motion_player/src/fsm/ginko_fsm.cpp:" RESULT_VARIABLE rv)
FILE(GLOB_RECURSE CREATED_FILES RELATIVE /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/ /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.scxml /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.btxml  /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.taoxml)
message("   -- Created XML files:")
foreach( f ${CREATED_FILES})
     message("      -- ${f} ")
endforeach()
FILE(GLOB_RECURSE CREATED_FILES_ABS /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.scxml /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.btxml /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.taoxml)
execute_process(COMMAND "python" /home/gisen/ros/devel/.private/decision_making_parser/lib/decision_making_parser/decision_making_xml_parser.py -i "/home/gisen/ros/src/ginko_ros/ginko_motion_player" "/home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs" "${CREATED_FILES_ABS}" RESULT_VARIABLE rv)
FILE(GLOB_RECURSE CREATED_FILES RELATIVE /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/ /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.dot /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.xot)
message("   -- Created DOT files:")
foreach( f ${CREATED_FILES})
     message("      -- ${f} ")
endforeach()
FILE(GLOB_RECURSE CREATED_FILES_ABS /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.dot)
foreach( f ${CREATED_FILES_ABS} )
	execute_process(COMMAND "dot" -q1 -Tgif -o${f}.gif  ${f} RESULT_VARIABLE rv)
endforeach()
FILE(GLOB_RECURSE CREATED_FILES RELATIVE /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/ /home/gisen/ros/devel/.private/ginko_motion_player/share/ginko_motion_player/graphs/*.gif)
message("   -- Created GIF files:")
foreach( f ${CREATED_FILES})
     message("      -- ${f} ")
endforeach()

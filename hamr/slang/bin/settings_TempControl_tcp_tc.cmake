add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(TempControl_tcp_tc
                        muslc)
endif()
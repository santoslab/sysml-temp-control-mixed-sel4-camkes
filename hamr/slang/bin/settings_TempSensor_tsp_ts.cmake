add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(TempSensor_tsp_ts
                        muslc)
endif()
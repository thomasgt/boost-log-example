set(SRCS
    main.cpp)

add_executable(${PROJECT_NAME} ${SRCS})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

target_link_libraries(${PROJECT_NAME} Boost::log Boost::program_options)
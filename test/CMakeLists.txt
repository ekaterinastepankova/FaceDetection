set(GTEST_ROOT ${FACEDETECTION_LIBSDIR}/gtest)
find_package(GTest REQUIRED)

add_executable(
    unit_tests
    main.cpp
    test.cpp
)

target_link_libraries(
    unit_tests
    faceDet
    ${GTEST_LIBRARIES}
)

target_include_directories(
    unit_tests
    PRIVATE ${GTEST_INCLUDE_DIRS}
)

add_test(NAME unit COMMAND ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests)
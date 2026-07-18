add_executable(DataStructuresTests
    singly_linked_list_tests.cpp
)

target_link_libraries(DataStructuresTests 
    PRIVATE 
        DataStructures 
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(DataStructuresTests)
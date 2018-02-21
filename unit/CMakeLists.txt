file(GLOB_RECURSE sources "*.cpp")
file(GLOB_RECURSE headers "*.h")
add_executable(jbmc-unit
    ${sources}
    ${headers}
    ${CBMC_SOURCE_DIR}/../unit/unit_tests.cpp
)

target_include_directories(jbmc-unit
    PRIVATE
    ${CBMC_SOURCE_DIR}/../unit
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(jbmc-unit
    jbmc-lib
    testing-utils
)

add_test(
    NAME jbmc-unit
    COMMAND $<TARGET_FILE:jbmc-unit>
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
set_tests_properties(jbmc-unit PROPERTIES LABELS "CORE;JBMC")

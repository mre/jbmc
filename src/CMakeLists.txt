project(TEST_GEN)

#   Set the public include locations for a target.
macro(generic_includes name)
    target_include_directories(${name}
        PUBLIC
        ${TEST_GEN_BINARY_DIR}
        ${TEST_GEN_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}
    )
endmacro(generic_includes)

add_subdirectory(test-c-gen)
add_subdirectory(test-gen-util)
add_subdirectory(test-generator)
add_subdirectory(test-java-gen)
add_subdirectory(java-code-gen)

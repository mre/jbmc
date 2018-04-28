# Library
file(GLOB_RECURSE sources "*.cpp" "*.h")
list(REMOVE_ITEM sources
    ${CMAKE_CURRENT_SOURCE_DIR}/jdiff_main.cpp
)
add_library(jdiff-lib ${sources})

generic_includes(jdiff-lib)

target_link_libraries(jdiff-lib
    ansi-c
    cpp
    linking
    big-int
    pointer-analysis
    goto-diff-lib
    goto-instrument-lib
    goto-programs
    assembler
    analyses
    java_bytecode
    langapi
    xml
    util
    solvers
)

# Executable
add_executable(jdiff goto_diff_main.cpp)
target_link_libraries(jdiff jdiff-lib)

set(test_pl_path "${CBMC_SOURCE_DIR}/../regression/test.pl")

macro(add_test_pl_profile name cmdline flag profile)
    add_test(
        NAME "${name}-${profile}"
        COMMAND ${test_pl_path} -p -c ${cmdline} ${flag}
        WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    )
    set_tests_properties("${name}-${profile}" PROPERTIES
        LABELS "${profile}"
    )
endmacro(add_test_pl_profile)

macro(add_test_pl_tests cmdline)
    get_filename_component(TEST_DIR_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    message(STATUS "Adding tests in directory: ${TEST_DIR_NAME}")
    add_test_pl_profile("${TEST_DIR_NAME}" "${cmdline}" -C CORE)
    add_test_pl_profile("${TEST_DIR_NAME}" "${cmdline}" -T THOROUGH)
    add_test_pl_profile("${TEST_DIR_NAME}" "${cmdline}" -F FUTURE)
    add_test_pl_profile("${TEST_DIR_NAME}" "${cmdline}" -K KNOWNBUG)
endmacro(add_test_pl_tests)

add_subdirectory(jbmc)
add_subdirectory(jbmc-inheritance)
add_subdirectory(jbmc-strings)

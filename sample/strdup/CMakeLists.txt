add_library (strdup SHARED random_minute_generator.c)

target_include_directories(strdup
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
        )

add_executable (strdup_test test.c)
add_link_options("/safeseh:no")  

target_compile_options(strdup_test PRIVATE -fsanitize=address) # /MD will be used implicitly
target_link_directories(strdup_test PRIVATE "C:/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/VC/Tools/Llvm/lib/clang/15.0.1/lib/windows")
target_link_libraries(strdup_test PRIVATE clang_rt.asan_dynamic-i386 clang_rt.asan_dynamic_runtime_thunk-i386 strdup mimick)
target_link_options(strdup_test PRIVATE /wholearchive:clang_rt.asan_dynamic_runtime_thunk-i386.lib)

if (NOT MSVC)
    set_source_files_properties (test.c PROPERTIES COMPILE_FLAGS -O0)
endif ()

add_mimick_sample (strdup_test)

install(
    TARGETS strdup
    COMPONENT strdup # must be here, not any line lower
    # these get default values from GNUInstallDirs, no need to set them
    #RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} # bin
    #LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} # lib
    #ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} # lib
    # except for public headers, as we want them to be inside a library folder
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/strdup
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} # include
)

# dependencies
add_subdirectory(3rdparty/SDL3)
add_subdirectory(3rdparty/spdlog)

add_library(Shadowblade SHARED "include/Shadowblade/Shadowblade.h" "include/Shadowblade/Core/Base.h" "include/Shadowblade/Core/EntryPoint.h" "include/Shadowblade/Core/BaseApplication.h" "src/Shadowblade/Core/BaseApplication.cpp" "include/Shadowblade/Core/AppWindow.h" "src/Shadowblade/Core/AppWindow.cpp")
target_compile_definitions(Shadowblade PRIVATE SB_EXPORT_SYMBOLS)
target_link_libraries(Shadowblade PRIVATE SDL3::SDL3)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_definitions(Shadowblade PUBLIC SB_DEBUG)
endif()

target_include_directories(Shadowblade PUBLIC include)

enable_testing()

add_subdirectory(tests)
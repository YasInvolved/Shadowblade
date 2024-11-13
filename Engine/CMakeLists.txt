add_library(Shadowblade SHARED "include/shadowblade.hpp" "include/Shadowblade/Core/PlatformDependent.h" "include/Shadowblade/Core/Base.h" "include/Shadowblade/Core/EntryPoint.h" "include/Shadowblade/Core/Application.h" "src/Shadowblade/Core/Application.cpp")
target_compile_definitions(Shadowblade PRIVATE EXPORT_SYMBOLS)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_definitions(Shadowblade PUBLIC SB_DEBUG)
endif()

target_include_directories(Shadowblade PUBLIC include)

enable_testing()

add_subdirectory(tests)
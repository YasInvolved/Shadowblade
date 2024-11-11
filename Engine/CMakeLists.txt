add_library(Shadowblade SHARED "src/shadowblade.cpp" "include/shadowblade.hpp" "include/definitions.hpp" "include/Shadowblade/Core/PlatformDependent.h" "include/Shadowblade/Core/Base.h")
target_compile_definitions(Shadowblade PRIVATE EXPORT_SYMBOLS)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_definitions(Shadowblade PUBLIC SB_DEBUG)
endif()

target_include_directories(Shadowblade PUBLIC include)

enable_testing()

add_subdirectory(tests)
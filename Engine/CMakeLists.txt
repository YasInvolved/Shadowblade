add_library(Shadowblade SHARED "src/shadowblade.cpp" "include/Shadowblade.hpp")
target_compile_definitions(Shadowblade PRIVATE EXPORT_SYMBOLS)
target_include_directories(Shadowblade PUBLIC include)

enable_testing()

add_subdirectory(tests)
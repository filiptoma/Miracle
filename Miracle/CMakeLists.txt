# collect files
file(GLOB SOURCES src/Miracle/*.cpp)

# declare the library target
add_library(
    Miracle
    ${SOURCES}
)

add_subdirectory(external/spdlog)

# defines include path for this target (this library)
target_include_directories(Miracle
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src"
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/external/spdlog/include"
)

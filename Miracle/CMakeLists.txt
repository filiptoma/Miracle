# declare the library target
add_library(
    Miracle
    src/Miracle/Application.cpp
)

# defines include path for this target (this library)
target_include_directories(
    Miracle PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

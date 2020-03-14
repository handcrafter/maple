set(HEADER_LIST "${maple_SOURCE_DIR}/include/maple/node.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(node_lib STATIC node.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(node_lib PUBLIC ../include)

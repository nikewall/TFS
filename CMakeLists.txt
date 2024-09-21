
cmake_minimum_required(VERSION 3.16)
project(tls_testing)

add_executable(tls_testing.exe
  main.cpp
  tls.cpp
  tcp_interface.cpp
)

install(TARGETS tls_testing.exe DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/INSTALL)

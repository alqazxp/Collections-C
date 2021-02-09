cmake_minimum_required(VERSION 3.5)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

enable_language(C)
enable_language(CXX)
add_subdirectory(src)
add_subdirectory(test)
IF(CMAKE_SYSTEM_NAME MATCHES "Windows")
 
    add_subdirectory(examples)
ELSEIF(CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(CFLAGS "-Wall -Werror")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CFLAGS}")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CFLAGS}")
    enable_testing()
    
    add_subdirectory(examples)
ENDIF(CMAKE_SYSTEM_NAME MATCHES "Windows")


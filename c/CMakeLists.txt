cmake_minimum_required(VERSION 3.8)
project(awtk_gui)

INCLUDE_DIRECTORIES(
  ../
  ../../../minijvm/c/jvm
  ../../awtk/
  ../../awtk/3rd/
  ../../awtk/src/
  ../../awtk/src/ext_widgets/
  )

set(AWTK_LIB_DIR
  ../../awtk/lib/
  /usr/local/lib/
  )

set(SOURCE_FILES
  jni_awtk.c
  )

set(AWTK_LIBS
  awtk extwidgets widgets base gpinyin tkc linebreak nanovg SDL2 glad stdc++ pthread m dl
  )

add_library(awtk-jni SHARED ${SOURCE_FILES})


#find_package(OpenGL REQUIRED)
MESSAGE(STATUS "CMAKE_SYSTEM :${CMAKE_SYSTEM}")
MESSAGE(STATUS "CMAKE_SYSTEM_NAME :${CMAKE_SYSTEM_NAME}")
MESSAGE(STATUS "CMAKE_SYSTEM_PROCESSOR :${CMAKE_SYSTEM_PROCESSOR}")
MESSAGE(STATUS "WIN32 :${WIN32}")
MESSAGE(STATUS "CMAKE_GENERATOR :${CMAKE_GENERATOR}")
MESSAGE(STATUS "CMAKE_SIZEOF_VOID_P  :${CMAKE_SIZEOF_VOID_P}")
MESSAGE(STATUS "CMAKE_SOURCE_DIR  :${CMAKE_SOURCE_DIR}")


IF (APPLE)
    MESSAGE("apple os here.")
    find_library(COCOA_LIB Cocoa)
    find_library(IOKIT_LIB IOKit)
    find_library(OPENGL_LIB OpenGL)
    find_library(COREFOUNDATION_LIB CoreFoundation)
    find_library(COREVIDEO_LIB CoreVideo)
    SET(EXTRA_LIBS ${COCOA_LIB} ${IOKIT_LIB} ${OPENGL_LIB} ${COREFOUNDATION_LIB} ${COREVIDEO_LIB} ${AWTK_LIBS})
    TARGET_LINK_DIRECTORIES(awtk-jni PUBLIC ${AWTK_LIB_DIR})
    TARGET_LINK_LIBRARIES(awtk-jni ${EXTRA_LIBS})
    SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../../binary/macos)

ELSEIF (UNIX)
    MESSAGE("linux os here.")
    TARGET_LINK_LIBRARIES(awtk-jni ${AWTK_LIBS})
    TARGET_LINK_LIBRARIES(awtk-jni X11 Xi pthread Xcursor Xrandr GL Xinerama)
    SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../../binary/centos_x64)
ELSEIF (MINGW)
    IF (CMAKE_SIZEOF_VOID_P EQUAL 4)
        message("32bit")
        SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../../binary/win32)
    elseif (CMAKE_SIZEOF_VOID_P EQUAL 8)
        message("64bit")
        SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../../../binary/win_x64)
    endif ()
    TARGET_LINK_LIBRARIES(awtk-jni ${AWTK_LIBS})
    set(CMAKE_EXE_LINKER_FLAGS "-mwindows")
ENDIF ()



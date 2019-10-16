

    cmake_minimum_required(VERSION 3.6)
    project(ProgramowanieObiektoweC++)

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    set(SOURCE_FILES main.cpp Board.cpp Board.h Game.cpp Game.h TextureManager.cpp TextureManager.h Stone.cpp Stone.h WhiteStone.cpp WhiteStone.h BlackStone.cpp BlackStone.h Constants.h BoardLogic.cpp BoardLogic.h WinWays.cpp WinWays.h)

    add_executable(ProgramowanieObiektoweC++ ${SOURCE_FILES})
    set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
    find_package(SFML REQUIRED system window graphics network audio)
    if (SFML_FOUND)
        include_directories(${SFML_ROOT})
        target_link_libraries(ProgramowanieObiektoweC++ ${SFML_LIBRARIES})
    endif()


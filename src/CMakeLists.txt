file(GLOB SOURCE_FILES
        "*.h"
        "*.cpp"
        )

add_executable(${PROJECT_NAME} ${EXECUTABLE_FLAG} main.cpp
        ${SOURCE_FILES}
        )
set_property(TARGET ${PROJECT_NAME} PROPERTY RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        ${DROGON_INCLUDE_DIRS}
        )

target_link_libraries(${PROJECT_NAME} PUBLIC
        ${CMAKE_DL_LIBS}
        drogon
        )

install(TARGETS ${PROJECT_NAME}
        DESTINATION ${CMAKE_INSTALL_PREFIX}
        )
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wextra -Wall -Wpedantic -Wconversion -Werror -Wno-padded)

set(lib_headers
    ../include/termic-ui/border.h
    ../include/termic-ui/element.h
    ../include/termic-ui/layout.h
    ../include/termic-ui/panel.h
    ../include/termic-ui/ui.h
    ../include/termic-ui/widget.h
)

# Seems Qt Creator doesn't heed this?
source_group(
  TREE "${termic_ui_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${lib_headers}
)

set(lib_sources
	element.cpp
)

add_library(termic_ui STATIC ${lib_sources} ${lib_headers})

# everyone need these include directories
target_include_directories(termic_ui PUBLIC ../extern/TheWhisp-signals)
target_include_directories(termic_ui PUBLIC ../include)

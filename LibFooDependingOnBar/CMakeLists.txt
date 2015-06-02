
add_library(foo foo.h foo.cxx)
if(TARGET bar)
  message("BAR is a target")
endif()
target_link_libraries(foo bar)

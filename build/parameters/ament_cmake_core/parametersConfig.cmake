# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_parameters_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED parameters_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(parameters_FOUND FALSE)
  elseif(NOT parameters_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(parameters_FOUND FALSE)
  endif()
  return()
endif()
set(_parameters_CONFIG_INCLUDED TRUE)

# output package information
if(NOT parameters_FIND_QUIETLY)
  message(STATUS "Found parameters: 0.0.0 (${parameters_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'parameters' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${parameters_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(parameters_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${parameters_DIR}/${_extra}")
endforeach()

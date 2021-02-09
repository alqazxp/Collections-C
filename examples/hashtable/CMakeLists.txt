cmake_minimum_required(VERSION 3.5)
project(collectc_hashtable_examples)

include_directories(${PROJECT_SOURCE_DIR}/include ${collectc_INCLUDE_DIRS})

add_executable(string_keys initialization/string_keys.c)
target_link_libraries(string_keys collectc_static)
set_target_properties(string_keys PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET string_keys PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(custom_key_types initialization/custom_key_types.c)
target_link_libraries(custom_key_types collectc_static)
set_target_properties(custom_key_types PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET custom_key_types PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(pointer_keys initialization/pointer_keys.c)
target_link_libraries(pointer_keys collectc_static)
set_target_properties(pointer_keys PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET pointer_keys PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(configuration initialization/configuration.c)
target_link_libraries(configuration collectc_static)
set_target_properties(configuration PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET configuration PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(ring_buffer initialization/ring_buf.c)
target_link_libraries(ring_buffer collectc_static)
set_target_properties(ring_buffer PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET ring_buffer PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(iterating_over_pairs operations/iterating_over_pairs.c)
target_link_libraries(iterating_over_pairs collectc_static)
set_target_properties(iterating_over_pairs PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET iterating_over_pairs PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(adding_key_value_pairs operations/adding_key_value_pairs.c)
target_link_libraries(adding_key_value_pairs collectc_static)
set_target_properties(adding_key_value_pairs PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET adding_key_value_pairs PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(removing_key_value_pairs operations/removing_key_value_pairs.c)
target_link_libraries(removing_key_value_pairs collectc_static)
set_target_properties(removing_key_value_pairs PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET removing_key_value_pairs PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(getting_info_about_the_table_and_pairs operations/getting_info_about_the_table_and_pairs.c)
target_link_libraries(getting_info_about_the_table_and_pairs collectc_static)
set_target_properties(getting_info_about_the_table_and_pairs PROPERTIES VS_GLOBAL_VcpkgTriplet x64-windows-static)
set_property(TARGET getting_info_about_the_table_and_pairs PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")




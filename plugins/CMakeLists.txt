cmake_minimum_required(VERSION 3.10)
project(testplugin)
include_directories("../CosmoOrganization.Core/include" "../CosmoOrganization.PluginService/include" "include" ".")

add_library(test1plugin SHARED "test1plugin/Source.cpp")

target_link_libraries(test1plugin CosmoOrganization.Core)
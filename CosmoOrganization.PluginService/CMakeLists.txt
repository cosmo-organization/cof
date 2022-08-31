cmake_minimum_required(VERSION 3.10)
project(CosmoOrganization.PluginService)
include_directories("../CosmoOrganization.Core/include" "include" ".")

add_executable(CosmoOrganization.PluginService "src/main.cpp")

target_link_libraries(CosmoOrganization.PluginService CosmoOrganization.Core)
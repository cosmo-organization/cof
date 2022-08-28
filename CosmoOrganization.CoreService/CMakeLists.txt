cmake_minimum_required(VERSION 3.10)
project(CosmoOrganization.CoreService)
include_directories("include" "../CosmoOrganization.Core/include")
add_library("CosmoOrganization.CoreService" STATIC
	"src/PlatformService.cpp"
)

target_link_libraries(CosmoOrganization.CoreService CosmoOrganization.Core)
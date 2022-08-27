cmake_minimum_required(VERSION 3.10)
project(CosmoOrganization.CoreService)
add_definitions(-DCOSMO_BUILD_DLL=1)
include_directories("include" "../CosmoOrganization.Core/include")
add_library("CosmoOrganization.CoreService" SHARED
	"src/PlatformService.cpp"
)

target_link_libraries(CosmoOrganization.CoreService CosmoOrganization.Core)
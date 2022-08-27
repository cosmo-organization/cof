cmake_minimum_required(VERSION 3.10)
include_directories("include" "../CosmoOrganization.Core/include")
add_library("CosmoOrganization.CoreService" STATIC
	"src/examplelib.cpp"
)
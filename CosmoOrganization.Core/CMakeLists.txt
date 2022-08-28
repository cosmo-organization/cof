cmake_minimum_required(VERSION 3.10)
project(CosmoOrganization.Core)
include_directories("include")

add_library("CosmoOrganization.Core" STATIC
	"src/Dependency.cpp"
	"src/DependencyInjector.cpp"
	"src/INode.cpp"
	"src/IObject.cpp"
	"src/Node.cpp"
	"src/NullSafeCall.cpp"
	"src/Object.cpp"
)
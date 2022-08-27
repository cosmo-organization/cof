#include <PlatformService.h>
#include <iostream>

namespace CosmoOrganization{
	PlatformService::PlatformService(Dependency* dep){}
	void __cdecl PlatformService::greet(){
		std::cout<<"Hello World!"<<std::endl;
	}
}
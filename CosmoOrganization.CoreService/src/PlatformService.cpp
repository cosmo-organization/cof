#include <PlatformService.h>
#include <iostream>

namespace CosmoOrganization{
	PlatformService::PlatformService(Dependency* dep){}
	void  PlatformService::greet(){
		std::cout<<"Hello World!"<<std::endl;
	}
}
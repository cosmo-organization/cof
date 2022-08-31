#include <CosmoOrganization.Core.h>
#include <Windows.h>
#include <PluginService.h>

using namespace CosmoOrganization;



int main(const int argc, const char** argv) {
	
	//if (argc <= 1)return 0x1;

	HMODULE module=nullptr;

	module=LoadLibrary(argv[1]);
	

	if (module==nullptr)return 0x2;
	
	procPointer pluginEntry=nullptr;
	
	pluginEntry = (procPointer)GetProcAddress(module, "onLoad");
	
	if (pluginEntry==nullptr)return 0x3;
	
	pluginEntry(DependencyInjector::GetDefault(nullptr));

	return 0;
}
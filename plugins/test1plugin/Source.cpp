#include <CosmoOrganization.Core.h>

extern "C" __declspec(dllexport) int onLoad(CosmoOrganization::DependencyInjector * Injector) {
	std::cout << __FILE__ << std::endl;
	return 0;
}
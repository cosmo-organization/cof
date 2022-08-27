#include <CosmoOrganization.Core.h>
#include <iostream>
using namespace CosmoOrganization;
class BluetoothService:public IObject<BluetoothService>{
	public:
		BluetoothService(Dependency* dep){}
		void StartBluetooth(){}
		void CloseBluetooth(){}
};
int main(const int argc,const char** argv){
	auto Injector=DependencyInjector::GetDefault();
	try{
	NullSafeCall::Get(Injector->GetService<BluetoothService>(),__FILE__,"NullObjectException","");
	}catch(NullObjectException e){
		std::cerr<<e.what<<std::endl;
	}
	return 0;
}
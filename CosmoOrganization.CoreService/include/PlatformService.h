#include <CosmoOrganization.Core.h>
namespace CosmoOrganization{
	class COSMO_API PlatformService:public IObject<PlatformService>{
		
		public:
			PlatformService(Dependency* dep);
			void greet();
	};
}
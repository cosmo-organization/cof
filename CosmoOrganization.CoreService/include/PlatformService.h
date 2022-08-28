#include <CosmoOrganization.Core.h>
namespace CosmoOrganization{
	class PlatformService:public IObject<PlatformService>{
		public:
			PlatformService(Dependency* dep);
			void greet();
	};
}
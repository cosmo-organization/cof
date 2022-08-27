#include "Object.h"
namespace CosmoOrganization {
	uint32_t Object::id = 0;
	uint32_t Object::GenId() { return Object::id++; }
	
}
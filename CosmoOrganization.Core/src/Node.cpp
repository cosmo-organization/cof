#include "Node.h"
namespace CosmoOrganization {
	uint32_t Node::NodeIdCounter = 0;
	uint32_t Node::GenNodeID() { return Node::NodeIdCounter++; }
}
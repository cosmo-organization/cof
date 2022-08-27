#pragma once
#include "IObject.h"
#include <cstdint>
namespace CosmoOrganization {
    struct Node :public IObject<Node>
    {
        uint32_t NodeId;
        static uint32_t NodeIdCounter;
        static uint32_t GenNodeID();
        
    };

}
#pragma once
#include "Object.h"
namespace CosmoOrganization {
    template<typename T>
    struct IObject :public Object
    {
        static const uint32_t ID;
    };

    template<typename T>
    const uint32_t IObject<T>::ID = Object::GenId();
};
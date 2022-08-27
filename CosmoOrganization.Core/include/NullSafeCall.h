#pragma once
#include "IObject.h"
#include "Dependency.h"
#include <string>
namespace CosmoOrganization {
    class NullObjectException :IObject<NullObjectException>{
    public:
        std::string what;
		NullObjectException(Dependency* dep){}
    public:
        NullObjectException(std::string what) {
            this->what = what;
        }
    };
    class NullSafeCall :public IObject<NullSafeCall>
    {
    public:
        template<typename T>
        static T* Get(T* obj, std::string Where, std::string What, std::string Extra)noexcept(false);
    };
    template<typename T>
    inline T* NullSafeCall::Get(T* obj, std::string File, std::string What, std::string Extra)noexcept(false)
    {
        if (obj != nullptr)return obj;

        throw NullObjectException(File+std::string(" ")+What+std::string(" ")+Extra);

        return nullptr;
    }
}

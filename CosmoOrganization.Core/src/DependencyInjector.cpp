#include "DependencyInjector.h"

namespace CosmoOrganization {
    void DependencyInjector::_AddService(Object* obj, const int ID)
    {
        for (Object* comp : Dependencies) {
            if (comp->ObjectId == ID)return;
        }
        obj->ObjectId = ID;
        Dependencies.push_back(obj);
    }
    void DependencyInjector::_AddTransient(const int ID)
    {
        for (const int id : Transients) {
            if (id == ID)return;
        }
        for (Object* dep : Dependencies) {
            if (dep->ObjectId == ID)return;
        }
        Transients.push_back(ID);
    }
    void DependencyInjector::_AddSingleton(Object* obj, const int ID)
    {
        for (const int id : Transients) {
            if (id == ID)return;
        }
        this->_AddService(obj, ID);
    }
    Object* DependencyInjector::_GetService(const int ID)
    {
        for (Object* obj : Dependencies) {
            if (obj->ObjectId == ID) {
                return obj;
            }
        }
        return nullptr;
    }
    DependencyInjector* DependencyInjector::GetDefault(Dependency* Inject)
    {
        if (Injector)return Injector;
        Injector = new DependencyInjector;
        Injector->Inject = Inject;
        return Injector;
    }
    DependencyInjector* DependencyInjector::Injector = nullptr;
};
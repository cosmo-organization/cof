#pragma once
#include <vector>
#include "Object.h"
#include "Dependency.h"
#include "Dummy.h"
#include <iostream>

namespace CosmoOrganization {
	class DependencyInjector
	{
		std::vector<Object*> Dependencies;
		std::vector<int> Transients;

		static DependencyInjector* Injector;
		Dependency* Inject;
		void _AddService(Object* obj, const int ID);
		void _AddTransient(const int ID);
		void _AddSingleton(Object* obj, const int ID);
		Object* _GetService(const int ID);

	public:
		static DependencyInjector* GetDefault(Dependency* Inject = nullptr);
		template<typename T>
		DependencyInjector* AddService() { _AddService(new T(Inject), T::ID); LOG_DEPRECATE_CALL REMOVABLE_API_CALL return Injector; }
		template<typename T>
		T* GetService() 
		{ 
			T* val = (T*)_GetService(T::ID);
			if (val == nullptr) {
				for (int tid:Transients){
					if (tid==T::ID)
						val = new T(Inject);
				}
			}
			return val; 
		}
		template<typename T>
		DependencyInjector* AddTransient() { _AddTransient(T::ID); return Injector; }

		template<typename T>
		DependencyInjector* AddSingleton() { _AddSingleton(new T(Inject), T::ID); return Injector; }
	};
};
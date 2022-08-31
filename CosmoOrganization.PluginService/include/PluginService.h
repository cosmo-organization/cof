#pragma once
#include <CosmoOrganization.Core.h>

typedef int(*procPointer)(CosmoOrganization::DependencyInjector*);

template<typename T>
struct Pluginable :public CosmoOrganization::IObject<Pluginable<T>> {
public:
	Pluginable(){}
	Pluginable(CosmoOrganization::Dependency* dep){}
	virtual ~Pluginable(){}
	virtual void onLoad() = 0;
	virtual void onUnload() = 0;
};
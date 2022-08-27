#pragma once
#include "IObject.h"
#include "Node.h"
namespace CosmoOrganization {
	template<typename T>
	struct INode :public IObject<INode<T>>
	{
	public:
		static const uint32_t NodeId;
		virtual Object* accept() { return nullptr; }
	};

	template<typename T>
	const uint32_t INode<T>::NodeId = Node::GenId();
}


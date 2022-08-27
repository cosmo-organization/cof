#pragma once
#include <cstdint>
namespace CosmoOrganization {
	struct Object
	{
		uint32_t ObjectId;
		static uint32_t id;
		static uint32_t GenId();
	};
};

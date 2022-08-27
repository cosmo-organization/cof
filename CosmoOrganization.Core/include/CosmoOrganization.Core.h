#pragma once
#define MAJ_VER 1
#define MIN_VER 0
#define PAT_VER 0

#ifdef _WIN32
#ifdef COSMO_BUILD_DLL
#define COSMO_API __declspec(dllexport)
#else
#define COSMO_API __declspec(dllimport)
#endif
#else
#if __cplusplus
#define COSMO_API extern "C"
#else
#define COSMO_API
#endif
#endif


#include "Object.h"
#include "IObject.h"
#include "Dependency.h"
#include "DependencyInjector.h"
#include "INode.h"
#include "Node.h"
#include "NullSafeCall.h"
#include "Dummy.h"
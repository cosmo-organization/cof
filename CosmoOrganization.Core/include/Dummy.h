#pragma once
#include <iostream>
#include "CosmoOrganization.Core.h"
#define LOG_DEPRECATE_CALL std::clog<<"deprecated_api: "<<__FUNCTION__<<" ver("<<MAJ_VER<<"."<<MIN_VER<<"."<<PAT_VER<<")"<<std::endl;
#define REMOVABLE_API_CALL std::clog<<"we will remove it: "<<__FUNCTION__<<" ver("<<MAJ_VER<<"."<<MIN_VER<<"."<<PAT_VER<<")"<<std::endl;
#define IMPROVABLE_API_CALL std::clog<<"we will improve it:"<<__FUNCTION__<<" ver("<<MAJ_VER<<"."<<MIN_VER<<"."<<PAT_VER<<")"<<std::endl;
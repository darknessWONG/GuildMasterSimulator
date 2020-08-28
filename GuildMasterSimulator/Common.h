#pragma once

#define SAFE_DELETE(ptr) { if(ptr != nullptr) delete ptr; }
#define SAFE_DELETE_ARRAY(ptr) { if(ptr != nullptr) delete[] ptr; }

enum SceneList
{
	baseScene = 0,
	titleScene,
	endScene
};
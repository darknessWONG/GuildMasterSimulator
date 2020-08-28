#pragma once

#define SAFE_DELETE(ptr) { if(ptr != nullptr) { delete ptr; ptr = nullptr; }}
#define SAFE_DELETE_ARRAY(ptr) { if(ptr != nullptr) { delete[] ptr; ptr = nullptr; }}

enum SceneList
{
	baseScene = 0,
	titleScene,
	endScene
};
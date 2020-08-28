#include "GameManager.h"
#include <functional>

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
	SAFE_DELETE(this->scene);
}

void GameManager::SetNextScene(SceneList next)
{
	SAFE_DELETE(this->scene);
	switch (next)
	{
	case SceneList::titleScene:
		break;
	case SceneList::endScene:
		break;
	default:
		break;
	}
}

void GameManager::SetScene(GScene * scene)
{
	SAFE_DELETE(this->scene);
	this->scene = scene;
	this->scene->SetNextSceneDelegate(bind(&GameManager::SetNextScene, this, placeholders::_1));
}

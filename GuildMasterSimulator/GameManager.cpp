#include "GameManager.h"
#include <functional>
#include "TitleScene.h"

GameManager::GameManager()
{
	scene = nullptr;
	nextScene = SceneList::baseScene;
}

GameManager::~GameManager()
{
	SAFE_DELETE(this->scene);
}

void GameManager::Play()
{
	while (isFinish != 1)
	{
		if (scene != nullptr)
		{
			scene->Play();
		}
		SceneChange();
	}

}

void GameManager::SceneChange()
{
	SAFE_DELETE(this->scene);
	GScene* newScene = nullptr;
	switch (nextScene)
	{
	case SceneList::titleScene:
		newScene = new TitleScene();
		SetScene(newScene);
		break;
	case SceneList::endScene:
		isFinish = true;
		break;
	default:
		break;
	}
}

void GameManager::SetNextScene(SceneList next)
{
	nextScene = next;
}

void GameManager::SetScene(GScene * scene)
{
	SAFE_DELETE(this->scene);
	this->scene = scene;
	this->scene->SetNextSceneDelegate(bind(&GameManager::SetNextScene, this, placeholders::_1));
}


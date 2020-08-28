#pragma once
#include "Common.h"
#include "GScene.h"


class GameManager
{
public:
	GameManager();
	~GameManager();

	void SetNextScene(SceneList next);

	void SetScene(GScene* scene);

private:
	GScene* scene;
};


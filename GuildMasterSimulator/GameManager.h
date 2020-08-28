#pragma once
#include "Common.h"
#include "GScene.h"


class GameManager
{
public:
	GameManager();
	~GameManager();

	void Play();
	void SceneChange();

	void SetNextScene(SceneList next);
	void SetScene(GScene* scene);

private:
	//The scene that now running
	GScene* scene;
	SceneList nextScene;

	/*
	 * false:The game is running
	 * true:The whole game finished
	 */
	bool isFinish;
};


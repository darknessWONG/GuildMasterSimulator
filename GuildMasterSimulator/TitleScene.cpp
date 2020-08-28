#include "TitleScene.h"
#include "Title.h"
#include "Common.h"

TitleScene::TitleScene()
{
	objects.push_back(new Title());
}

void TitleScene::Play()
{
	Print();
	getchar();
	nextSceneDelegate(SceneList::endScene);
}

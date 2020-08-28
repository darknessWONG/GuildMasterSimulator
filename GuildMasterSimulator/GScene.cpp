#include "GScene.h"
#include "Common.h"

GScene::GScene()
{
}

GScene::~GScene()
{
	system("cls");
	for (auto object : objects)
	{
		SAFE_DELETE(object);
	}
}

void GScene::Print() const
{
	for (auto object : objects)
	{
		if (object->GetIsDraw())
		{
			object->Print();
		}
	}
}

void GScene::SetNextSceneDelegate(NextSceneDelegate delegate)
{
	nextSceneDelegate = delegate;
}

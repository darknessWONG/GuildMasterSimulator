#pragma once
#include "Common.h"
#include "GObject.h"
#include <list>
#include <functional>
using namespace std;

typedef list<GObject*> GObjectPtrList;
typedef function<void(SceneList)> NextSceneDelegate;

class GScene
{
public:
	GScene();
	virtual ~GScene();

	//The entrance of scene
	virtual void Play() = 0;

	//Draw the scene on display
	virtual void Print() const;

	void SetNextSceneDelegate(NextSceneDelegate delegate);

protected:
	//objects in this scene
	GObjectPtrList objects;

	//A delegate to tell game manager that which scene is next
	NextSceneDelegate nextSceneDelegate;
};


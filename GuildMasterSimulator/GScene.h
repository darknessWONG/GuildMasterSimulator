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

	virtual void Print() const;

	void SetNextSceneDelegate(NextSceneDelegate delegate);

protected:
	GObjectPtrList objects;

	NextSceneDelegate nextSceneDelegate;
};


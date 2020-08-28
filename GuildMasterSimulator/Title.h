#pragma once
#include "GObject.h"
class Title :
	public GObject
{
public:
	Title();

	virtual void Print() const override;
};


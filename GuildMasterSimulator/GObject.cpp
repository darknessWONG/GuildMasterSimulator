#include "GObject.h"

GObject::GObject()
{
}

bool GObject::GetIsDraw() const
{
	return isDraw;
}

void GObject::SetIsDraw(bool isDraw)
{
	this->isDraw = isDraw;
}

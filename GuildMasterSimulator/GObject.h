#pragma once
class GObject
{
public:
	GObject();
	virtual ~GObject();

	virtual void Print() const = 0;


	bool GetIsDraw() const;
	void SetIsDraw(bool isDraw);

protected:
	bool isDraw;
};


#pragma once
class Item
{
protected:
	const char* name;

public :
	
	virtual void Use() = 0;

	virtual ~Item();
	
};


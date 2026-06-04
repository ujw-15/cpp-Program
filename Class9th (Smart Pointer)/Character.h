#pragma once
class Character
{
private:
	weak_ptr<Character> character;

public:
	Character();

	void RccruitTcammatc(const weak_ptr<Character> & clone);

	~Character();
};


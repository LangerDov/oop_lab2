#pragma once
#include "animal.h"
class dog :
    public animal
{
	const char* GetKindAnimal() override;
	void Run() override;
	void Jump() override;
	void Go() override;
	void Say() override;
};


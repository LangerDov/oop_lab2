#pragma once
#include "animal.h"
class cat :
    public animal
{
	cat();
    const char* GetKindAnimal() override;
	void Run() override;
	void Jump() override;
	void Go() override;
	void Say() override;
};


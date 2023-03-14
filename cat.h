#pragma once
#include "animal.h"
class cat :
    public animal
{
public:
	cat();
	cat(const char* name);
	cat(cat& const origin);
	~cat();
	void SetName(const char* name);
    const char* GetKindAnimal() override;
	void Run() override;
	void Jump() override;
	void Go() override;
	void Say() override;
};


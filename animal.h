#pragma once
class animal
{
	animal();
	animal(const char* name);
	~animal();
	virtual const char* GetName();
	virtual void SetName(const char* name);
	virtual  const char* GetKindAnimal() = 0;
	virtual void Run() = 0;
	virtual void Jump() = 0;
	virtual void Go() = 0;
	virtual void Say() = 0;
	void GetPos(int* x, int* y);
	
protected:
	const char* name;
	int x, y;
};


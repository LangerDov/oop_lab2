#include "cat.h"
#include  "stdio.h"


cat::cat()
{
    printf("\ncat::Contr without arguments");
    x = 0;
    y = 0;
}

cat::cat(const char* name)
{
    cat();
    printf("\ncat::Constr: &s", name);
    SetName(name);
}

cat::cat(cat& const origin)
{
    printf("\ncat::CopyConstr");
    x = origin.x;
    y = origin.y;
    name = origin.name;
}

cat::~cat()
{
    name = "";
    x = 0;
    y = 0;
    printf("\ncat::destr");
}

void cat::SetName(const char* name)
{
    this->name = name;
    printf("\nCat::SetName: %s", name);
}

const char* cat::GetKindAnimal()
{
    printf("\ncat::GetKindAnimal: Cat");
    return "Cat";
}

void cat::Run()
{
    x += 10;
    printf("\ncat::Run: %d", x);
}

void cat::Jump()
{
    y += 3;
    printf("\ncat::Jump: %d", y);
}

void cat::Go()
{
    x += 1;
    printf("\ncat::Go: %d", x);
}

void cat::Say()
{
    printf("\ncat::Say: Meow");
    printf("\nMeow!!");
}

#include "cat.h"
#include  "stdio.h"


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

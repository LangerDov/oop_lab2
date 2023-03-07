#include "dog.h"

#include  "stdio.h"

const char* dog::GetKindAnimal()
{
    printf("\dog::GetKindAnimal: Dog");
    return "Dog";
}

void dog::Run()
{
    x += 7;
    printf("\ndog::Run: %d", x);
}

void dog::Jump()
{
    y += 1;
    printf("\ndog::Jump: %d", y);
}

void dog::Go()
{
    x += 2;
    printf("\ndog::Go: %d", x);
}

void dog::Say()
{
    printf("\ndog::Say: Woof");
    printf("\nWoof!!");
}

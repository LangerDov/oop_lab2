#include "animal.h"
#include "stdio.h"
animal::animal()
{
    name = "";
    x = 0;
    y = 0;
}

animal::animal(const char* name)
{
    this->name = name;
}

const char* animal::GetName()
{
    printf("\nanimal::GetName: %s", name);
    return name;
}

void animal::SetName(const char* new_name)
{
    name = new_name;
}

void animal::GetPos(int* x, int* y)
{
    printf("\nanimal::GetPos:  x: %d y: %d", this->x, this->y);
    *x = this->x;
    *y = this->y;
}

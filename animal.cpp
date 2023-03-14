#include "animal.h"
#include "stdio.h"


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

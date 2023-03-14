#include <iostream>
#include "animal.h"
#include "cat.h"
#include "dog.h"

#include "list.h"
#include <time.h>
void animal_get_kind(animal* anim)
{
    ((dog*)anim)->Say();
}

int main()
{
    dog* dg = new dog();
    dg->Say();
    dg->Go();
    dg->Jump();
    const char* name = "name";
    cat ct(name);
    ct.Jump();

    animal_get_kind(dg);
    delete dg;

    cat n_ct = ct;

}
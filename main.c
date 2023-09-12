#include <string.h>
#include "lib/c-objects/c-objects.h"

int main() {

    // create animels 
    ANIMAL cat = new_Animel("cat", "meow!");
    ANIMAL dog = new_Animel("dog", "woof!");
    ANIMAL duck = new_Animel("duck", "quack!");

    // make the sounds of the corresponding animals
    Animal(&cat)->make_sound();
    Animal(&dog)->make_sound();
    Animal(&duck)->make_sound();

    return 0;
}

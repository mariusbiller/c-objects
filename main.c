#include <string.h>
#include "lib/c-objects/c-objects.h"

int main() {

    // intit animels and their attributes
    ANIMAL cat = {
        .name = "cat",
        .sound = "meow!"
    };

    ANIMAL dog = {
        .name = "dog",
        .sound = "woof!"
    };

    ANIMAL duck = {
        .name = "duck",
        .sound = "quack!"
    };

    // make the sounds of the corresponding animals
    Animal(&cat)->make_sound();
    Animal(&dog)->make_sound();
    Animal(&duck)->make_sound();

    return 0;
}

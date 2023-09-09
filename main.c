#include <string.h>
#include "lib/c-objects/c-objects.h"

int main() {

    // create animels
    ANIMEL_TYPE cat;
    ANIMEL_TYPE dog;
    ANIMEL_TYPE duck;

    // init animel attributes
    strcpy(cat.name, "cat");
    strcpy(cat.sound,  "meow!");
    cat.makeSound = make_sound;

    strcpy(dog.name,  "dog");
    strcpy(dog.sound, "woof!");
    dog.makeSound = make_sound;

    strcpy(duck.name, "duck");
    strcpy(duck.sound, "quack!");
    duck.makeSound = make_sound;

    // make the sounds of the corresponding animals
    cat.makeSound(&cat);
    dog.makeSound(&dog);
    duck.makeSound(&duck);

    return 0;
}

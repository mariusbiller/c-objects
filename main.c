#include <stdio.h>
#include <string.h>

// prototype declaration of main structure
typedef struct ANIMEL_TYPE ANIMEL_TYPE;

// function pointer type for animel sound
typedef void (*SoundFunction)( ANIMEL_TYPE*);

// the animel structure
typedef struct ANIMEL_TYPE {
    char name[20];
    char sound[20];
    SoundFunction makeSound; // Function pointer for making a sound
} ANIMEL_TYPE;

// function to make an animel sound
void make_sound(ANIMEL_TYPE* animel) {
    printf("the '%s' says '%s'\n", animel->name, animel->sound);
}

//----------------------------------------------------------------------


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

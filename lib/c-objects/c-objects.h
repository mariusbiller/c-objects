#include <stdio.h>

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
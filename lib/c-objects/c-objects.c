#include "c-objects.h"
#include <stdio.h>
#include <string.h>

// global variables
ANIMAL* this;

// constructor
ANIMAL new_Animel(char* name, char* sound) {
    
    // init animel instance
    ANIMAL animel;
    strcpy(animel.name, name);
    strcpy(animel.sound, sound);
    animel.make_sound = make_sound;

    return animel;
}

// function to constuct and enable inherence in member functions 
ANIMAL* Animal(ANIMAL* animel) {
    
    // simulate inheritance by selecting struct instance for 'this' operator 
    this = animel; 

    // make sure functions are referenced
    this->make_sound = make_sound;

    // forward structure to enable function-chainting
    return animel;
}

// function to make an animal sound
void make_sound() {
    printf("The '%s' says '%s'\n", this->name, this->sound);
}

#include "c-objects.h"
#include <stdio.h>

// global variables
ANIMAL_TYPE* this;

// function to constuct and enable inherence in member functions 
ANIMAL_TYPE* Animal(ANIMAL_TYPE* animel) {
    select_instance(animel);
    return animel;
}

// function to inherit sturcture members by using global keyword "this"
void select_instance(ANIMAL_TYPE* animel) {
    // simulate inheritance
    this = animel; 
}

// function to make an animal sound
void make_sound() {
    printf("The '%s' says '%s'\n", this->name, this->sound);
}
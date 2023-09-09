#include "c-objects.h"
#include <stdio.h>

// Function to make an animal sound
void make_sound(ANIMAL_TYPE* animal) {
    printf("The '%s' says '%s'\n", animal->name, animal->sound);
}
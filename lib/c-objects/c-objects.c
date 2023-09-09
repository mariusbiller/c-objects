#ifndef LIB_H
#define LIB_H

// Prototype declaration of main structure
typedef struct ANIMAL_TYPE ANIMAL_TYPE;

// Function pointer type for animal sound
typedef void (*SoundFunction)(ANIMAL_TYPE*);

// The animal structure
typedef struct ANIMAL_TYPE {
    char name[20];
    char sound[20];
    SoundFunction makeSound; // Function pointer for making a sound
} ANIMAL_TYPE;

// Function to make an animal sound
void make_sound(ANIMAL_TYPE* animal);

#endif // LIB_H

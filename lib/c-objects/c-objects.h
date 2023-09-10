#ifndef LIB_H
#define LIB_H

// Prototype declaration of main structure
typedef struct ANIMAL_TYPE ANIMAL_TYPE;

// Function pointer type for animal sound
typedef void (*SoundFunction)(void);

// The animal structure
typedef struct ANIMAL_TYPE {
    char name[20];
    char sound[20];
    SoundFunction makeSound; // Function pointer for making a sound
} ANIMAL_TYPE;

// function to constuct and enable inherence in member functions 
ANIMAL_TYPE* Animal(ANIMAL_TYPE* animel);

// function to inherit sturcture members by using global keyword "this"
void select_instance(ANIMAL_TYPE* animel);

// Function to make an animal sound
void make_sound();

#endif // LIB_H

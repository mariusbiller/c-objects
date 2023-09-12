#ifndef LIB_H
#define LIB_H

// The animal structure
typedef struct ANIMAL_TYPE {
    char name[20];
    char sound[20];
    void (*make_sound)(void);
} ANIMAL;

ANIMAL new_Animel(char* name, char* sound);

// function to constuct and enable inherence in member functions 
ANIMAL* Animal(ANIMAL* animel);

// Function to make an animal sound
void make_sound();

#endif // LIB_H

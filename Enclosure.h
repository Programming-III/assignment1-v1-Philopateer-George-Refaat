#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Enclosure{
    private: 
    Animal* animals;
    int capacity;
    int currentCount;

    public:
    Enclosure();
    Enclosure(int capacity,int currentCount);
    ~Enclosure();

    
    void addAnimals(Animal*a);
    void displayAnimals();


    void setCapacity(int x);
    void setcurrentCount(int x);
    
    int getCapacity();
    int getcurrentCount();
  
    
 

   

};
#endif 

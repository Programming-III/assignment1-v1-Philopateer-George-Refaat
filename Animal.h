#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Animal{
    private: 
    string name;
    int age;
    bool isHungry;

    public:
    Animal();
    Animal(string name , int age , bool isHungry);
    ~Animal();

    void display();
    void feed();


    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool h);
    string getName();
    int getAge();
    bool getIsHungry();
    
 

   

};
#endif 

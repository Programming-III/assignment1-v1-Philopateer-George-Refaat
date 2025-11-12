#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;


   Animal:: Animal(){
        this-> name = "";
        this-> age = 0;
        this-> isHungry = false;
   }
     Animal:: Animal(string name , int age , bool isHungry){
        this-> name = name;
        this-> age = age;
        this-> isHungry = isHungry;
     }
     Animal:: ~Animal(){}

    void  Animal:: display(){
        cout<< name << "(Age:" << age <<","  << isHungry<< ")"<<endl;

    }
    void  Animal:: feed(){
        if(isHungry)
        cout<<"feed the animal"<< endl;
    }

    void  Animal:: setName(string n){
        name = n;
    }
    void  Animal:: setAge(int a){
        age = a;
    }
    void  Animal:: setIsHungry(bool h){
        isHungry = h;
    }
    string  Animal:: getName(){
        return name;
    }
    int  Animal:: getAge(){
        return age;
    }
    bool  Animal:: getIsHungry(){
        return isHungry;
    }



        Mammal:: Mammal(){
        this-> furColor = "";
        }

        Mammal:: Mammal(string furColor) : Animal(getName(),getAge(),getIsHungry()){
            this-> furColor = furColor;

        }

        Mammal:: ~Mammal(){}

        void Mammal:: setFurColor(string fc){
            furColor=fc;
        }

        string Mammal:: getFurColor(){
            return furColor;
        }


    Bird::Bird(){
        this-> wingSpan = 0.0;
    }

    Bird::Bird(float wingSpan) : Animal(getName(),getAge(),getIsHungry()){
        this-> wingSpan = wingSpan;
    }

    Bird::~Bird(){

    }

    void Bird::setWingSpan(float ws){
        wingSpan = ws;
    }

    float Bird::getWingSpan(){
        return wingSpan;
    }

    Reptile::Reptile(){
        this -> isVenomous = false;
    }

    Reptile::Reptile(bool isVenomous) : Animal(getName(),getAge(),getIsHungry()){
        this -> isVenomous = isVenomous;
    }

    Reptile::~Reptile(){

    }

    void Reptile::setIsVenemous(bool iv){
        isVenomous=iv;
    }
    bool Reptile::getIsVenemous(){
        return isVenomous;
    }

    Enclosure:: Enclosure(){
        this -> capacity = 0;
        this-> currentCount = 0;
        this-> animals = nullptr;
    }
    Enclosure:: Enclosure(int capacity,int currentCount){
        this -> capacity = capacity;
        this-> currentCount = currentCount;
        this-> animals = new Animal[capacity];
    }
    Enclosure:: ~Enclosure(){
        delete[] animals;
    }
    
    void Enclosure:: addAnimals(Animal*a){}
    void Enclosure:: displayAnimals(){

        for(int i = 0 ; i < sizeof(animals)/sizeof(Animal) ; i++){
            animals[i].display();
        }
    }


    void Enclosure:: setCapacity(int x){
        capacity =x;
    }
    void Enclosure:: setcurrentCount(int x){
        currentCount=x;
    }
    
    int Enclosure:: getCapacity(){
        return capacity;
    }
    int Enclosure:: getcurrentCount(){
        return currentCount;
    }


    Visitor:: Visitor(){
        this -> visitorName = "";
        this -> ticketsBought = 0;
    } 
    Visitor:: Visitor(string visitorName , int ticketsBought){
        this -> visitorName = visitorName;
        this -> ticketsBought = ticketsBought;
    }
    Visitor:: ~Visitor(){}

    void Visitor:: dipsplayInfo(){
        cout<< "Visitor Info:" <<endl;
        cout << "Name:" << getVisitorName() <<
    }

    void Visitor::setVisitorName(string n){
        visitorName = n;
    }
    void Visitor::setTicketsBought(int x){
        ticketsBought = x;
    }

    string Visitor:: getVisitorName(){
        return visitorName;
    }
    int Visitor::getTicketsbought(){
        return ticketsBought;
    }

    int main(
Enclosure e = new Enclosure{20,8}
Animal a = new Mammal

        return 0;
    )
  

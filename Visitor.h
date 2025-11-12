#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;

    public:

    Visitor();
    Visitor(string visitorName , int ticketsBought);
    ~Visitor();

    void dipsplayInfo();

    void setVisitorName(string n);
    void setTicketsBought(int x);

    string getVisitorName();
    int getTicketsbought();





};
#endif

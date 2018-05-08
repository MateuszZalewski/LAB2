/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2: Restaurant
*/

#ifndef ORDERINTERFACE_H
#define ORDERINTERFACE_H

#include<iostream>

class OrderInterface {
    public:
        int id;
        std::string name;
        OrderInterface(int ii,std::string ss):id(ii),name(ss){}
        virtual ~OrderInterface(){};
        virtual void show(std::ostream& stream) const{}
        friend std::ostream& operator<<(std::ostream& stream,const OrderInterface &order);
};

#endif

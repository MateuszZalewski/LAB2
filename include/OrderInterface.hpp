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
    protected:
        int id;
        std::string name;
    public:
        int getId();
        void setId(int);
        std::string getName();
        void setName(std::string);
        OrderInterface(int ii,std::string ss):id(ii),name(ss){}
        virtual ~OrderInterface(){};
        virtual void show(std::ostream& stream) const{}
        friend std::ostream& operator<<(std::ostream& stream,const OrderInterface &order);
};

#endif

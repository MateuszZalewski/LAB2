/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2: Restaurant
*/

#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include "OrderInterface.hpp"

template<typename T>
class Order:public OrderInterface {
    private:
        T price;
    public:
        void show(std::ostream&)const;
        Order(int id,std::string name,T price_):OrderInterface(id,name),price(price_){};
        ~Order(){};
        friend std::ostream& operator<<(std::ostream& out,const Order<T>& orderObj) {
            orderObj.show(out);
        }
};

template<typename T>
void Order<T>::show(std::ostream& stream) const {
    stream<<"Id: "<<id<<std::endl;
    stream<<"Dish: "<<name<<std::endl;
    stream<<"Price: "<<price<<std::endl;
}

#endif

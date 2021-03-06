/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2: Restaurant
*/

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include<iostream>
#include<vector>
#include "OrderInterface.hpp"
#include "Order.hpp"

class Restaurant{
    private:
        int id;
        void showOrders(std::vector<OrderInterface *>&);
        std::vector<OrderInterface *> completedOrders;
        std::vector<OrderInterface *> incompletedOrders;
    public:
        template<typename T> void addOrder(std::string name, T price) {
            id++;
            Order<T>* new_order=new Order<T>(id,name,price);
            incompletedOrders.push_back(new_order);
        }
        void removeOrder(int);
        void completeOrder(int);
        void showIncomplete();
        void showComplete();
        void showOrders();
        std::vector<OrderInterface *>::iterator findOrderIterById(int,std::vector<OrderInterface *>&);
        Restaurant();
        ~Restaurant();
};

#endif

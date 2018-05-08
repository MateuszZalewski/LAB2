/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2: Restaurant
*/

#ifndef RESTAURANTUI_H
#define RESTAURANTUI_H

#include<iostream>
#include "Restaurant.hpp"

class RestaurantUI{
    private:
        Restaurant& restaurant;
        void showIncomplete();
        void showComplete();
        void showOrders();
        void showById();
        void addOrder();
        void removeOrder();
        void completeOrder();
    public:
        RestaurantUI(Restaurant&);
        ~RestaurantUI();
        void run();
};

#endif

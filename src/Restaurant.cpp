/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2: Restaurant
 * */

#include<iostream>
#include "Restaurant.hpp"

void Restaurant::removeOrder(int id) {
    auto iter=findOrderIterById(id,incompletedOrders);
    if(iter != incompletedOrders.end()) {
        delete (*iter);
        incompletedOrders.erase(iter);
    }
    else
    {
        std::cout<<"Order of id "<<id<<" was not found."<<std::endl;
    }
}

void Restaurant::completeOrder(int id) {
    auto iter=findOrderIterById(id,incompletedOrders);
    if(iter != incompletedOrders.end()) {
        completedOrders.push_back((*iter));
        incompletedOrders.erase(iter);
    }
    else
    {
        std::cout<<"Order of id "<<id<<" was not found."<<std::endl;
    }
}

void Restaurant::showOrders(std::vector<OrderInterface *> &v) {
    if(v.empty())
    {
        std::cout<<"Empty."<<std::endl;
        return;
    }
    for(auto w:v)
    {
        std::cout<<(*w);
    }
}

void Restaurant::showOrders() {
    std::cout<<"Incompleted orders: "<<std::endl;
    showOrders(incompletedOrders);
    std::cout<<"Completed orders: "<<std::endl;
    showOrders(completedOrders);
}

std::vector<OrderInterface *>::iterator Restaurant::findOrderIterById(int id,std::vector<OrderInterface *> &v) {
    for(auto it = v.begin(); it != v.end() ; ++it) {
        if(id==(*it)->id) {
            return it;
        }
    }
    return v.end();
}

Restaurant::~Restaurant()
{
    for(auto it : incompletedOrders){
        delete it;
    }
    for(auto it : completedOrders){
        delete it;
    }
}
Restaurant::Restaurant():id(0){};

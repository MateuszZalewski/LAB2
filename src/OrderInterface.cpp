/*
 * Mateusz Zalewski
 * 293179
 * Wiktor Kuśmirek
 * Project 2:Restaurant
 * */

#include<iostream>
#include "OrderInterface.hpp"

std::ostream& operator<<(std::ostream& stream, const OrderInterface& order) {
    order.show(stream);
    return stream;
}

int OrderInterface::getId()
{
    return id;
}

void OrderInterface::setId(int id)
{
    this->id=id;
}

std::string OrderInterface::getName()
{
    return name;
}

void OrderInterface::setName(std::string name)
{
    this->name=name;
}

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

#include <RestaurantUI.hpp>
#include<Restaurant.hpp>
#include<Order.hpp>

int main()
{
    Restaurant restaurant;
    RestaurantUI interface(restaurant);
    interface.run();
    return 0;
}

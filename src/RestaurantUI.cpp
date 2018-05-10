#include "RestaurantUI.hpp"
#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

RestaurantUI::RestaurantUI(Restaurant& res) : restaurant(res) {};

RestaurantUI::~RestaurantUI() {}
void RestaurantUI::run() {
    int action_choice = 0;
    srand(time(NULL));
    while (1)
    {
      cout << "Choose what you would like to do:" << endl;
      cout << "0. Exit" << endl;
      cout << "1. Make new order" << endl;
      cout << "2. Remove incomplete order" << endl;
      cout << "3. Show incompleted orders" << endl;
      cout << "4. Show complete orders" << endl;
      cout << "5. Show orders" << endl;
      cout << "6. Complete order" << endl;
      cin >> action_choice;
      switch (action_choice)
      {
      case 0:
        return;
        break;
      case 1:
        addOrder();
        break;
      case 2:
        removeOrder();
        break;
      case 3:
        showIncomplete();
        break;
      case 4:
        showComplete();
        break;
      case 5:
        showOrders();
        break;
      case 6:
        completeOrder();
        break;
      }
    }
}

void RestaurantUI::showOrders() {
    restaurant.showOrders();
}

void RestaurantUI::showComplete() {
    restaurant.showComplete();
}

void RestaurantUI::showIncomplete() {
    restaurant.showIncomplete();
}

void RestaurantUI::addOrder() {
    string name;
    int price;
    cout<<"Whats the name of the dish?"<<endl;
    cin>>name;
    price = rand()%30000+1;
    if(price>254)
        restaurant.addOrder<short>(name,(short)price);
    else
        restaurant.addOrder<uint8_t>(name,(uint8_t)price);
}

void RestaurantUI::removeOrder() {
    int id;
    cout<<"Id: ";
    cin>>id;
    restaurant.removeOrder(id);
}
void RestaurantUI::completeOrder() {
    int id;
    cout<<"Enter order id: ";
    cin>>id;
    restaurant.completeOrder(id);
}

#include "class_prod.hpp"
#include <string>
#include <map>
#include <vector>


int day = 1;
int money = 10000;
int k = 0, m = 0, n = 0;


// std::vector<Shop> shops;
std::vector<std::vector<std::vector<Prod>>> all_requests_G(0);

std::map<std::string, std::pair<int, int>> price_prod = {
    {"Egg", {70, 10}},
   {"Apple", {50, 10}},
   {"Milk", {70, 10}},
   {"Porridge", {75, 20}},
   {"Fish", {400, 10}},
   {"Bread", {30, 10}},
   {"Water", {20, 20}},
   {"Doshik", {20, 20}},
   {"Juice", {50, 15}},
   {"Meat", {350, 15}},
   {"Ice Cream", {80, 10}},
   {"Pasta", {60, 20}},
   {"Cheese", {120, 10}},
   {"Cupcake", {150, 10}},
   {"Tea", {100, 25}},
   {"Coffee", {200, 25}},
   {"Sweet", {120, 15}},
   {"Banana", {40, 10}},
   {"Nuts", {500, 25}},
   {"Cherry", {1500, 10}}
};


std::vector<Prod> products = {
    Prod("Egg", day, day + 10, 70),
    Prod("Apple", day, day + 10, 50),
    Prod("Milk", day, day + 10, 70),
    Prod("Porridge", day, day + 20, 75),
    Prod("Fish", day, day + 10, 400),
    Prod("Bread", day, day + 10, 30),
    Prod("Water", day, day + 20, 20),
    Prod("Doshik", day, day + 20, 20),
    Prod("Juice", day, day + 15, 50),
    Prod("Meat", day, day + 15, 350),
    Prod("Ice Cream", day, day + 10, 80),
    Prod("Pasta", day, day + 20, 60),
    Prod("Cheese", day, day + 10, 120),
    Prod("Cupcake", day, day + 10, 150),
    Prod("Tea", day, day + 25, 100),
    Prod("Coffee", day, day + 25, 200),
    Prod("Sweet", day, day + 15, 120),
    Prod("Banana", day, day + 10, 40),
    Prod("Nuts", day, day + 25, 500),
    Prod("Cherry", day, day + 10, 1500)
};
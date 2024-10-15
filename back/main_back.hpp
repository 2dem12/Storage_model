#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "class_prod.hpp"
#include "database.hpp"
#include "help_func.hpp"


std::mt19937 rnd(std::time(nullptr));



std::vector<Prod> request() {
     std::vector<Prod> req;
     int q = rnd() % 10;
     if (q <= 4) {
          q = rnd() % products.size() + 1;
          req.resize(q);
          while (req.size() != q) {
               int w = rnd();
               if (!in(req, products[w].name())) {
                    std::string _name = products[w].name();
                    req.push_back(Prod(_name, day, day + price_prod[_name].second, price_prod[_name].first));
               }
          }
     }
     return req;
}


void run() {
      std::cin >> k >> m;
      products.resize(k);
}

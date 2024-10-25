#include <string>

// #include "main_back.hpp"

void buy(std::string products, int cnt) {
    if (price_prod[products].first) {
        Prod q = Prod(products, day, day + price_prod[products].second, price_prod[products].first);
        products_sklad.push_back(q);
    }
}


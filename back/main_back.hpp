#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "class_prod.hpp"
#include "database.hpp"
#include "help_func.hpp"
#include "shop_request.hpp"
#include "buy_prod.h"


void run() {
      srand(time(0));
      std::cin >> k >> m >> n;
      std::vector<std::vector<std::vector<Prod>>> all_requests_G(n, std::vector<std::vector<Prod>> (m));
      products_sklad.resize(k);
      generate_requests(all_requests_G);
      buy("Apple", 5);
}

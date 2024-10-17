#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "class_prod.hpp"
#include "database.hpp"
#include "help_func.hpp"


void next_day() {
      for (int shop = 0; shop < m; shop++) {
            std::vector<Prod> one_request = request();
            if (one_request.size() != 0) {
                  // all_requests.push_back(one_request);
                  all_requests[0] = one_request;
            }
      }
}


void run() {
      srand(time(0));
      std::cin >> k >> m;
      products.resize(k);
      int q = 1;
      while (q) {
            std::cin >> q;
            next_day();
            for (auto i : all_requests) {
                  for (auto j : i) {
                        std::cout << j.name() << " " << j.cnt_pack() << " " << j.cnt_packaging();
                        std::cout << '\n';
                  }
                  std::cout << '\n';
            }
      }
}

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <ctime>

#include "class_prod.hpp"
#include "database.hpp"
#include "help_func.hpp"


void generate_requests() {
      for (int shop = 0; shop < m; shop++) {
            std::vector<Prod> one_request = request();
            if (one_request.size() != 0) {
                  // all_requests.push_back(one_request);
                  all_requests[day][m] = one_request;
            }
      }
}


void run() {
      srand(time(0));
      std::cin >> k >> m >> n;
      std::vector<std::vector<std::vector<Prod>>> all_requests(n, std::vector<std::vector<Prod>> (m));
      products.resize(k);
      int q = 1;
      while (q) {
            std::cin >> q;
            generate_requests();
      }
}

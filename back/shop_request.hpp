std::vector<Prod> request() {
    std::vector<Prod> req;
    int q = rand() % 10;
    if (q <= 4) {
        q = rand() % products.size() + 1;
        // req.resize(q);
        while (req.size() != q) {
            int w = rand() % k;
            if (!in(req, products[w].name())) {
                std::string _name = products[w].name();
                req.push_back(Prod(_name, day, day + price_prod[_name].second, price_prod[_name].first));
            }
        }
    }
    return req;
}


void generate_requests(std::vector<std::vector<std::vector<Prod>>>& all_request) {
    for (int d = 0; d < n; ++d) {
        for (int shop = 0; shop < m; ++shop) {
            std::vector<Prod> one_request = request();
            if (one_request.size() != 0) {
                all_request[d][shop] = one_request;
            }
        }
    }
}


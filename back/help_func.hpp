bool in(std::vector<Prod>& a, std::string name) {
    for (auto i : a) {
        if (i.name() == name) {
            return true;
        }
    }
    return false;
}

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


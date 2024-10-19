bool in(std::vector<Prod>& a, std::string name) {
    for (auto i : a) {
        if (i.name() == name) {
            return true;
        }
    }
    return false;
}




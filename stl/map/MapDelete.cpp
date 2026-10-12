//
// Created by archana-kumari on 10/13/26.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    std::map<int, std::string> m = {{1, "Geeks"},
                                    {2, "For"},
                                    {3, "Geeks"}};

    // Deleting by key
    m.erase(2);

    // Deleting by iterator
    m.erase(m.begin());

    for (auto i: m)
        std::cout << i.first << " " << i.second
                  << std::endl;
    return 0;
}
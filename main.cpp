#include <iostream>
#include <string>
#include <boost/pfr/core.hpp>

struct Cat {
    int weight;
    char first_letter;
};
Cat c1 {5, 'K'};
auto& r1 = boost::pfr::get<0>(c1);
auto& r2 = boost::pfr::get<1>(c1);
int main() {
    std::cout << "Введите вес котика  ";
    std::cin >> r1;
    std::cout << "Введите первую букву имени котика  ";
    std::cin >> r2;
    std::cout << "Котик весит " << boost::pfr::get<0>(c1) << " кг "
    << "\t На его ошейнике написано: " << boost::pfr::get<1>(c1);
    return 0;
}
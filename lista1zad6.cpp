#include <iostream>
#include <string>

int main() {
    std::string napis;
    std::cout << "wpisz słowo: ";
    std::cin >> napis;
    for (auto litera: napis) {
       std::cout << std::hex << static_cast<int>(litera) << std::dec << ",";

    }
    std::cout << std::endl;
    return 0;
}
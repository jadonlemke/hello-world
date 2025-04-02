#include <iostream>

int main() {
    std::string name;

    std::cout <<"Hello, what's your name?" << std::endl;
    std::getline (std::cin, name);
    std::cout << "Hi " << name << "!" << std::endl;

    return 0;
}
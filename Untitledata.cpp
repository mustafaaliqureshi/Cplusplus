#include <iostream>
int main() {
    int data[] = {1, 4};
    std::cout << "data (address): " << data << '\n';
    std::cout << "&data[0]    : " << &data[0] << '\n';
    std::cout << "data[0]     : " << data[0] << '\n';
    std::cout << "*data       : " << *data << '\n';
    std::cout << "data == &data[0] ? " << (data == &data[0]) << '\n';
    return 0;
}
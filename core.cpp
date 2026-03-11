#include <iostream>
int main() {
    int arck_core_port = 8080;
    char proxy_flag = 'A';
    int* leash_port = &arck_core_port;
    std::cout << sizeof(arck_core_port) << "\n";
    std::cout << sizeof(proxy_flag) << "\n";
    std::cout << &arck_core_port << "\n";
    std::cout << (void*)&proxy_flag << "\n";
    std::cout << sizeof(leash_port) << "\n";
    std::cout << leash_port << "\n";
    std::cout << *leash_port << "\n";
}
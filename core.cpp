#include <iostream>
int main() {
    int arck_core_port = 8080;
    char proxy_flag = 'A';
    std::cout << sizeof(arck_core_port) << "\n";
    std::cout << sizeof(proxy_flag) << "\n";
    std::cout << &arck_core_port << "\n";
    std::cout << (void*)&proxy_flag << "\n";
}
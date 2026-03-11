#include <iostream>
int main() {
    int* heap_leash = new int;
    *heap_leash = 8080;
    std::cout << *heap_leash << "\n";
    std::cout << heap_leash << "\n";
    std::cout << &heap_leash << "\n";
    delete heap_leash;
    std::cout << *heap_leash << "\n";
}
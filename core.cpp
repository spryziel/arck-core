#include <iostream>
#include <sys/socket.h>
int main() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    std::cout << server_fd << "\n";
}
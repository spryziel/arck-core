#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
int main() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    std::cout << server_fd << "\n";
    struct sockaddr_in proxy_address;
    proxy_address.sin_family = AF_INET;
    proxy_address.sin_port = htons(8080);
    proxy_address.sin_addr.s_addr = INADDR_ANY;
    int bind_status = bind(server_fd, (struct sockaddr*)&proxy_address, sizeof(proxy_address));
    std::cout << bind_status << "\n";
}
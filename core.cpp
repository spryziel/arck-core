#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

int main() {
    
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    
    struct sockaddr_in proxy_address;
    proxy_address.sin_family = AF_INET;
    proxy_address.sin_port = htons(8080);
    proxy_address.sin_addr.s_addr = INADDR_ANY;
    
    bind(server_fd, (struct sockaddr*)&proxy_address, sizeof(proxy_address));
    listen(server_fd, 10);
    
    std::cout << "ARCK-CORE LISTENING ON 8080...\n";

    
    while (true) {
        struct sockaddr_in client_address;
        socklen_t client_len = sizeof(client_address);
        
        
        int client_fd = accept(server_fd, (struct sockaddr*)&client_address, &client_len);
        
        char buffer[1024] = {0};
        read(client_fd, buffer, 1024);
        
        std::cout << "INCOMING STRIKE:\n" << buffer << "\n";
        
        const char response[] = "HTTP/1.1 200 OK\r\nContent-Length: 13\r\n\r\nARCK-CORE V1\n";
        send(client_fd, response, sizeof(response) - 1, 0);
        
        
        close(client_fd);
    }

    return 0; 
}
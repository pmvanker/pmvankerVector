//server socket() -> bind() -> listen() -> read() -> write() -> close()
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>
#include <exception>
#include <stdexcept>


class Client: virtual public std::exception
{
    std::string data;
    std::string ip;
    int port,domain,type,protocol,socketFD,err;
    socklen_t len;
    struct sockaddr_in server_socket_add;

    /// @brief 
    /// @return 
    void creatTcpSocket();
    
    /// @brief 
    /// @return 
    void connectSocket();
    
    /// @brief 
    /// @return 
    void readSocket();
    
    /// @brief 
    /// @return 
    void writeSocket();

    void display()
    {
        std::cout << "client Started\n" << "ip:" << ip << " port:"<<port << std::endl;
    }

    public:

    Client():ip("0.0.0.0"), port(3000),
             domain(AF_INET), type(SOCK_STREAM),
             protocol(0), socketFD(0),
             len(10)
    {
        display();
    }

    Client(std::string _ip, int _port, std::string _data):ip(_ip), port(_port), data(_data),
             domain(AF_INET), type(SOCK_STREAM),
             protocol(0), socketFD(0)
    {
        display();
    }

    void start_client()
    {
        this->creatTcpSocket();
        this->connectSocket();
        this->writeSocket();
    }
};

void Client::creatTcpSocket()
{
    try
    {
        socketFD = socket(domain,type,protocol);
        std::cout << "Socket created: " << socketFD << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Client::connectSocket()
{
    try
    {
        server_socket_add.sin_family = domain;
        server_socket_add.sin_port   = htons(port);
	    server_socket_add.sin_addr.s_addr = inet_addr(ip.c_str());
	    len= sizeof(server_socket_add);
        err = connect(socketFD,(struct sockaddr *)&server_socket_add,len);
        std::cout << "connected to server\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }	
}


void Client::readSocket()
{}


void Client::writeSocket()
{
    write(socketFD,data.c_str(),data.size());
    std::cout << "writing to server\n";
}

void usage()
{
    std::cout << "./client ip port data\n";
}

int main(int argc, char* argv[])
{
    if(argc<4)
    {
        usage();
        return 0;
    }

    Client c(argv[1],atoi(argv[2]),argv[3]);
    c.start_client();

}
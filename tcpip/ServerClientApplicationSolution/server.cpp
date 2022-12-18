//server socket() -> bind() -> listen() -> read() -> write() -> close()
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>
#include <cstring>

#include <exception>
#include <stdexcept>

class Server: virtual public std::exception
{
    std::string ip;
    int port,domain,type,protocol,socketFD,maxClient,clientIndex;
    socklen_t clientlen;
    struct sockaddr_in server_socket_add,client_socket_add;

    /// @brief 
    /// @return 
    void creatTcpSocket();
    
    /// @brief 
    /// @return 
    void bindSocket();
    
    /// @brief 
    /// @return 
    void listenToSocket();

    /// @brief 
    /// @return 
    void acceptSocket();
    
    /// @brief 
    /// @return 
    void readSocket(int nsfd);
    
    /// @brief 
    /// @return 
    void writeSocker(std::string & _data);

    void display()
    {
        std::cout << "server Started\n"
                  << "ip:" << ip << " port:"<<port << std::endl;
    }

    public:

    Server():ip("0.0.0.0"), port(3000),
             domain(AF_INET), type(SOCK_STREAM),
             protocol(0), socketFD(0),
             clientIndex(0),clientlen(10),maxClient(10)
    {
        if(clientIndex>10)
        {
            std::cout << "Max connections to 10 at a time\n";
            return;
        }
        display();
    }

    Server(std::string _ip, int _port):ip(_ip), port(_port),
             domain(AF_INET), type(SOCK_STREAM),
             protocol(0), socketFD(0),
             clientIndex(0),clientlen(10),maxClient(10)
    {
        if(clientIndex>10)
        {
            std::cout << "Max connections to 10 at a time\n";
            return;
        }
        display();
    }

    void start_server()
    {
        this->creatTcpSocket();
        this->bindSocket();
        this->listenToSocket();
        this->acceptSocket();
    }
};

void Server::creatTcpSocket()
{
    try
    {
        socketFD = socket(domain,type,protocol);
        std::cout << "socket created\n";
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Server::bindSocket()
{
    try
    {
        server_socket_add.sin_family = domain;
        server_socket_add.sin_port   = htons(port);
	    server_socket_add.sin_addr.s_addr = INADDR_ANY;
	    clientlen= sizeof(server_socket_add);
        std::cout << "bined socket\n";
        bind(socketFD,(struct sockaddr *)&server_socket_add,clientlen);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }	
}

void Server::listenToSocket()
{
    try
    {
        listen(socketFD,maxClient);
        std::cout << "listen socket\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Server::acceptSocket()
{
    try
    {
        std::cout << "waiting for client\n";
        int nsfd=accept(socketFD,(struct sockaddr *)&client_socket_add,&clientlen);
        std::cout << "connected to client ip\n"; 
        readSocket(nsfd);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void Server::readSocket(int nsfd)
{
    char a[50];
    read(nsfd,a,sizeof(a));
    std::cout << a <<std::endl;    
}

void Server::writeSocker(std::string & _data)
{}

void usage()
{
    std::cout << "./server ip port\n";
}

int main(int argc, char* argv[])
{
    if(argc<3)
    {
        usage();
        return 0;
    }
    Server s(argv[1],atoi(argv[2]));
    s.start_server();

}
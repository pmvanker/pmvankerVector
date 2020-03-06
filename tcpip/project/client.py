# Import socket module 
import socket			 

# Create a socket object 
s = socket.socket()		 

# Define the port on which you want to connect 
port = 4000				

# connect to the server on local computer 
s.connect(('127.0.0.1', port)) 

s.send("hello C server from python")
# receive data from the server 
# close the connection 
s.close()	 


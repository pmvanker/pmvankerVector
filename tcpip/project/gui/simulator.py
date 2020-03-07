#!/usr/bin/env python3
from tkinter import *
import socket	
import time

ip = '127.0.0.1'
port = 4000
msg = 'Hi Client i am your server'

mainwindow = Tk()
mainwindow.title("simulator vvdn/2154")
mainwindow.geometry("600x600") 

#output list
output_list = Listbox(mainwindow)

# Label
lbl_ip = Label(mainwindow, text='Ip Address')
lbl_port = Label(mainwindow, text='Port No')

# Entry Form
ent_ip=Entry(mainwindow, textvariable=ip)
ent_port=Entry(mainwindow, textvariable=port)
ent_msg=Entry(mainwindow, textvariable=msg)

#FORM CREATION
lbl_ip.grid(row=0,column=0)
lbl_port.grid(row=1,column=0)
ent_ip.grid(row=0, column=1, ipadx="50")
ent_port.grid(row=1, column=1, ipadx="50")
ent_msg.grid(row=2, column=1, ipadx="50")

ent_ip.insert(0,ip)
ent_port.insert(0,port)
ent_msg.insert(0,msg)

output_list.grid(row=3, column = 1, ipadx="100", ipady="100")


def log(log_str):
    output_list.insert(END,log_str)
    

def about_app():
    about_window = Tk() 
    msg ="Simulator Application\nVersion 1\nDeveloper:Vanker Praful\nEmail:praful.vanker@vvdntech.in"
    messageVar = Message(about_window, text = msg) 
    messageVar.config(bg='lightgreen') 
    messageVar.pack( ) 
    main.mainloop( ) 


def menu_init():
    menu=Menu(mainwindow)
    mainwindow.config(menu=menu)
    helpmenu = Menu(menu)
    menu.add_cascade(label='Help', menu=helpmenu)
    helpmenu.add_command(label='About', command = about_app)

class client_socket:
    def __init__(self, ip, port):
        self.server_socket = 0;
        self.ip=ip
        self.port=port
    def connect_server(self):
        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.port = int(ent_port.get())
        self.ip = ent_ip.get()
        self.server_socket.connect((self.ip,self.port))
        log("connected with server"+" ip = "+self.ip+" port = "+ str(self.port) )
    def disconnect_server(self):
        self.server_socket.shutdown(socket.SHUT_RDWR)
        self.server_socket.close();
        log("disconnected with server"+" ip = "+self.ip+" port = "+ str(self.port) )
    def send_msg(self):
        msg = ent_msg.get()
        log("sended Message"+msg)
        self.server_socket.send(bytes(str(msg),'utf-8'))	
        ent_msg.delete(0,END)
    def start_test(self):
        for i in range(30):
            self.server_socket.send(bytes('command'+str(i),'utf-8'))
#            time.sleep(1/100);

def main():
    client = client_socket(ip,port)
    connect_btn = Button(mainwindow, text="connect", width=10, command=client.connect_server, fg="green")
    connect_btn.grid(row=4,column=0)
    send_btn = Button(mainwindow, text="send", width=10, command=client.send_msg)
    send_btn.grid(row=4,column=1)
    start_test_btn = Button(mainwindow, text="Start Test", width=10, command=client.start_test)
    start_test_btn.grid(row=4,column=2)
    disconnect_btn = Button(mainwindow, text="disconnect", width=10, command=client.disconnect_server, fg="red")
    disconnect_btn.grid(row=5,column=0)
    
if __name__ == "__main__":
    menu_init()
    main()
    mainwindow.mainloop()

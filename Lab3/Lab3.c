 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <sys/socket.h>
 #include <unistd.h>
 #include <netdb.h>
 #include <arpa/inet.h>

 int main(int argc, char const *argv[])
 {
     int socket_d;
     char send[16];
     char receiveline[16];
     struct sockaddr_in servaddr; 

     socket_d = socket(AF_INET, SOCK_STREAM, 0);
     memset(&servaddr,0,sizeof(servaddr));
     servaddr.sin_family = AF_INET;
     servaddr.sin_port = htons(22000);
     inet_pton(AF_INET,"127.0.0.1", &(servaddr.sin_addr));

     connect(socket_d,(struct sockaddr*)&servaddr,sizeof(servaddr));

     memset(&send, 0, sizeof(send));
     printf("Please enter a string: \n");
     scanf("%s", send);
     

     write(socket_d, send, strlen(send)+1);

     read(socket_d,receiveline,100);

     printf("Response from echo server: %s\n", receiveline);



     return 0;
 }

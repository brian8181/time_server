// License:    GPL
// Author:     Brian K Preston
// File Name:  time_server.cpp
// Build Date: Fri Jul 28 07:26:05 PM CDT 2023
// Version:    0.0.1

#include <stdio.h>
#include <iostream>
#include <string>
#include <getopt.h>
#include "main.hpp"
#include "bash_color.h"
#include "time_server.hpp"
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std;

int parse_options(int argc, char* argv[])
{
	 int sockfd, newsockfd, portno, clilen, n;
	 char buffer[256];

	struct sockaddr_in serv_addr, cli_addr;

	if (argc < 2)
 	{
   		fprintf(stderr,"ERROR, no port provided\n");
   		exit(1);
 	}


	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0)
 		printf("ERROR opening socket\n");

	//bzero((char *) &serv_addr, sizeof(serv_addr));
	
	return 0;
}

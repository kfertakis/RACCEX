#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>

#include "common.h"
#include "common.pb-c.h"
#include "protocol.h"
#include "client.h"
#include <scif.h>

int main(int argc, char *argv[]) {
	int client_sock_fd, test_arg, test_res;
	char *server_ip, *server_port;
	size_t buf_size;
	void *buffer = NULL, *result = NULL;
	PhiCmd cmd1 = PHI_CMD__INIT;
	scif_epd_t endPoint;
	
	if(argc > 3) {
		printf("Usage: client <server_ip> <server_port>\n");
		exit(EXIT_FAILURE);
	}
	
	if (argc == 1) {
		printf("No server ip or port defined, using defaults %s:%s\n", DEFAULT_SERVER_IP, DEFAULT_SERVER_PORT);
		server_ip = (char *) DEFAULT_SERVER_IP;
		server_port = (char *) DEFAULT_SERVER_PORT;
	} else if (argc == 2) {
		printf("No server port defined, using default %s\n", DEFAULT_SERVER_PORT);
		server_ip = argv[1];
		server_port = (char *) DEFAULT_SERVER_PORT;
	} else {
		server_ip = argv[1];
		server_port = argv[2];
	}

	client_sock_fd = init_client_connection(server_ip, server_port);
	printf("Connected to server %s on port %s...\n", server_ip, server_port);

	/**
	* cmd1: scif_open()
	**/	
	printf("\n* SCIF_OPEN()\n");
	cmd1.type = OPEN;
	cmd1.arg_count = 0 ;
	
	buf_size = serialise_message(&buffer, PHI_CMD, &cmd1);
	send_message(client_sock_fd, buffer, buf_size);

	free(buffer);
	get_phi_cmd_result(&result, client_sock_fd);
	endPoint = *(int *)result;	
	printf("endpoint is %d\nexiting..\n", endPoint);
	
	close(client_sock_fd);
	return 0;
}
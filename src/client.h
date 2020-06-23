#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <unistd.h> // close()

class client {
	std::string ipAddress;
	unsigned short port;
	int socket;

public:
	client(): ipAddress("127.0.0.1"), port(7878), socket(-1) {}
	~client() {
		if (socket != -1) close(socket);
	}

	bool connect();
	bool run();
};

#endif

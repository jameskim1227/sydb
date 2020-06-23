#include <iostream>

#include "client.h"

using namespace std;

int main(int argc, char *argv[]) {
	client c;

	c.connect();

	c.run();

	return 0;
}

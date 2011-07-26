#include <stdio.h>
#include <string.h>
#include "masstransit.h"

int main () {
	
	Subscription s = {
		"drumsg", 2
	};
	
	mt_pub(s);
	return 0;
}
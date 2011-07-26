#include <stdio.h>
#include <string.h>
#include "masstransit.h"

void mt_pub(Subscription s)
{
	printf("%s\n", s.messageName);
}
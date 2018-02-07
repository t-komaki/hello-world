#include "app/app1.h"
#include "app/app2.h"


void main(void)
{
	for (;;) {
		app1();
		app2();
	}
}

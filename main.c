#include "app/app1.h"
#include "app/app2.h"
#include "app/app3.h"


void main(void)
{
	for (;;) {
		app1();
		app3();
		app2();
	}
}

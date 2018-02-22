#include "app/app1.h"
#include "app/app2.h"
#include "app/app3.h"
#include "app/app4.h"
#include "app/app5.h"


void main(void)
{
	for (;;) {
		app1();
		app1();
		app2();
		app3();
		app4();
		app5();
	}
}

#include "A_wes.h"
#include <stdio.h>
#include <string.h>


main()
{
	A *a = new A();

	puts("1. call summary");
	a->summary();
	puts("");

	puts("2. set visual variable");
	a->set_v_val(10);
	a->set_v_p("ptr");
	a->set_v_arr("arr");
	puts("");

	puts("3. call foo");
	a->foo();
	puts("");

	puts("4. call summary");
	a->summary();
	puts("");

	delete a;
}

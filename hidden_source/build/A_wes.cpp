#include "A_wes.h"
#include <stdio.h>
#include <string.h>


int A::get_v_val() {
	return this->v_val;
}
char* A::get_v_p() {
	return this->v_p;
}
const char* A::get_v_arr() {
	return this->v_arr;
}
void A::set_v_val(int v) {
	this->v_val = v;
}
void A::set_v_p(const char*str) {
	snprintf(this->v_p, 10, "%s", str);
}
void A::set_v_arr(const char*str) {
	snprintf(this->v_arr, 10, "%s", str);
}

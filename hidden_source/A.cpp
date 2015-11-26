#include "A.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


A::A() {
	printf("call A(): constructure\n");
	this->v_val = 0;
	this->h_val = 0;

	this->v_p = (char *)malloc(10);
	this->h_p = (char *)malloc(10);

	memset(this->v_arr, 0, sizeof(v_arr));
	memset(this->h_arr, 0, sizeof(h_arr));
}

A::~A() {
	free(v_p);
	free(h_p);
}

// h_XXX: hidden function list
int A::get_h_val() {
	return this->h_val;
}
char* A::get_h_p() {
	return this->h_p;
}
const char* A::get_h_arr() {
	return this->h_arr;
}
void A::set_h_val(int v) {
	this->h_val = v;
}
void A::set_h_p(const char*str) {
	snprintf(this->h_p, 10, "%s", str);
}
void A::set_h_arr(const char*str) {
	snprintf(this->h_arr, 10, "%s", str);
}

// call visual and hiddent function
void A::foo() {
	char tmp[10];

	set_h_val(get_v_val() * 2);
	printf("h_val = get_v_val() {%d} * 2\n", get_v_val());

	snprintf(tmp, 10, "%s_%s", "foo", get_v_p());
	set_h_p(tmp);
	printf("h_p = %s\n", tmp);

	snprintf(tmp, 10, "%s_%s", "foo", get_v_arr());
	set_h_arr(tmp);
	printf("h_p = %s\n", tmp);
}

void A::summary() {
	printf("v_val = %p, v_val = %d\n", this->v_val, get_v_val());
	printf("h_val = %p, h_val = %d\n", this->h_val, get_h_val());

	printf("v_p = %p, v_p = %s\n", this->v_p, get_v_p());
	printf("h_p = %p, h_p = %s\n", this->h_p, get_h_p());

	printf("v_arr = %p, v_arr = %s\n", this->v_arr, get_v_arr());
	printf("h_arr = %p, h_arr = %s\n", this->h_arr, get_h_arr());
}

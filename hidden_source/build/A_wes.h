

class A {
private:
	// visual variables
	int v_val;
	char *v_p;
	char v_arr[10];

public:
	A();
	~A();

	// v_XXX: visual function list
	int get_v_val();
	char* get_v_p();
	const char* get_v_arr();
	void set_v_val(int v);
	void set_v_p(const char*str);
	void set_v_arr(const char*str);

	// call visual and hiddent function
	void foo();
	void summary();

};



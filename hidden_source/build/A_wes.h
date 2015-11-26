

class A {
private:
	// visual variables
	int v_val;
	char *v_p;
	char v_arr[10];

public:
	//////////////////////////////////////////////////////////////////
	// TODO: 여기서 생성자, 소멸자를 헤더에 명시하지 않으면
	//       A.o의 생성자, 소멸자를 호출 하지 않는다.
	//       A_wes.cpp의 default 생성자, 소멸자를 호출하는 듯하다.
	//////////////////////////////////////////////////////////////////
	A();
	~A();
	//////////////////////////////////////////////////////////////////

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



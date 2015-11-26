# For TEST about hidden sources

compile
```sh
g++ A.cpp
g++ main.cpp A_wes.cpp A.o -o A
```

output
```sh
call A(): constructure
1. call summary
v_val = (nil), v_val = 0
h_val = (nil), h_val = 0
v_p = 0x982e008, v_p = 
h_p = 0x982e018, h_p = 
v_arr = 0x980d010, v_arr = 
h_arr = 0x980d024, h_arr = 

2. set visual variable

3. call foo
h_val = get_v_val() {10} * 2
h_p = foo_ptr
h_p = foo_arr

4. call summary
v_val = 0xa, v_val = 10
h_val = 0x14, h_val = 20
v_p = 0x982e008, v_p = ptr
h_p = 0x982e018, h_p = foo_ptr
v_arr = 0x980d010, v_arr = arr
h_arr = 0x980d024, h_arr = foo_arr
```
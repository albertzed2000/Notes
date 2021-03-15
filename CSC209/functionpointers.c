
/*


*/

// declare a pointer to functions
func_return (*func_ptr_name)(func_params) = func_name;


// for example, if we have a function defined as:
char* myfunc(char* filename){
    //etc etc
}

// we can store this function like so:

char* (*x)(char*) = myfunc;


//we can pass function pointers into other functions:

int newfunc(char* (*x)(char*)){
    // inside function, we can use x:

    char* storesX = x(['a']);
}


// function pointers as a return type

char (*parse_command_line(int argc, char** argv))(int*, int){
    // takes int and char**, returns pointer to a function that takes in int* and int and returns char
}

//typedefs with function pointer

//now we can use SortFunc_t instead of entire expression
typedef void(*SortFunc_t)(int*, int);














/*
Headers declare what functions do and what types they require without defining how they're actually implemented


include header files in a .c file that we need it in using:
    #include "header.h"

    use #include <math.h> if want to look in system library



How to write a header file

-declare functions you're using
eg:
    int return_int(int one);

-can declare typedefs as well
eg:
    typedef struct {
        char *name;
    } sort_info;



Extern:
    Declare extern on a variable in .h file if they're going to be externally defined
        -avoids duplicate variables
    eg:
        extern int NUM_SORTS;


Static:
    1) makes symbol name (variable) in .c file only visible locally (only visible to file itself) 
        - this is IF variable is global to file

    2) makes variable keep its value across function executions
        -this is IF variable is local to a function


Guard conditions:
#ifndef SORTS_H
#define SORTS_H                   // defines stuff below


#endif // (this ends the SORTS_H condition)





















*/
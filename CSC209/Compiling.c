

/*
-------> .c source code

...compile

-------> .s assembly code

...assemble

-------> .o object files

... link

-------> .out executable files

... run

-------> executes program

*/

// ********************** gcc **************************88
/*


gcc -S 
    -turns C code into assembly code (.s)
    eg. gcc -S my_prog.c               -->  my_prog.s


eg. as helloworld.s -o helloworld.c
    -turns assembly code into object file code (machine code)

eg. gcc helloworld.s
    -turns assembly code into output file ---> a.out

gcc -c 
    -turns C code into object files (.0)
     eg. gcc -c helloworld.c                --> helloworld.o (object file)

*/
/*

Check if errors occur before proceeding

for functions that return ints, -1 means failure
for functions that return pointers, NULL means failure

global errno is used to store error types, can be accessed using perror

*/


// writes corresponding error string in errno to stderr
void perror(const char* s);


// can check for errors and call system call on same couple of lines:
if((fp = fopen(argv[2], "r")) == NULL){
    perror(argv[2])
}
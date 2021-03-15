// A file with notes written to prep for test 2



// ******************************FILE IO******************************8

FILE* fopen(const char* pathname, const char* mode);
// opens a file for reading or writing

// Args:
//           string pathname, specifies path to file we want to open
//           string mode: r - read, w-write(OVERWRITES), wb - write binary, rb - read binary, a - append

// Return type: pointer to file




size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
// writes to a file

// Args:
//      ptr  - a pointer (start of data) to the data we want to write TO THE FILE
//      size - each piece of data we want to write is this many bytes long. usually use sizeof(int), etc.
//      nmemb - number of elements from the pointer we want to write, each of size size
//      stream - a pointer to file we want to write to
//

// Return Value: Number of items written. Could indicate errors.

size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream);
// reads from a file

// Args:
//      ptr  - a pointer (start of data) to the data we want to read FROM THE FILE
//      size - each piece of data we want to read is this many bytes long. usually use sizeof(int), etc.
//      nmemb - number of elements from the pointer we want to read, each of size size
//      stream - a pointer to file we want to write to
//
// Return Value: Number of items read. Could indicate errors.



int fseek(FILE *stream, long offset, int whence);
// moves position in file

// Args:
//      stream - pointer to file we want to change position
//      offset - number of bytes to add to, (usually using sizeof) from whence
//      whence - SEEK_SET, SEEK_CUR, SEEK_END - searches from start of file, current position, or end of file
//
// Return value: 0 of success -1 if error + errno is set to indicate error



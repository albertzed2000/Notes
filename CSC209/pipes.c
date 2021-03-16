/*




*/

// initialise a file descriptor of size 2.
// fd[0] represents read, fd[1] represents write
int fd[2];

int pipe(int pipefd[2])
    // creates a pipe held in the fd.
    // returns 0 if successful, or -1 if error and errno is set


// NOTE: calling pipe before fork results in both parent and child having
// same pipe.

// - close file descriptors that aren't needed. eg. close write end if not needed


ssize_t read(int fd, void *buf, size_t count);
    /*
     * Reads count bytes from fd, stores in buf 
     * 
     * Returns num of bytes read if successful, or 0 if end of file 
     * (or all fds closed and nothing more to read)
     * returns -1 and sets errno on error
     */
     
ssize_t write(int fd, const void *buf, size_t count);
    /*
     * Writes up to count bytes from buf to the fd
     * 
     * Returns num of bytes written if successful, 
     * returns -1 and sets errno on error
     */
     
int close(int fd);
    // closes a file descriptor

    // returns 0 on success, -1 on fail and errno is set
    // Note: close ALL file descriptors that are no longer being used.

int dup2(int oldfd, int newfd);
    // makes a copy of oldfd for the new descriptor
    // now, newfd will refer to oldfd. NOTE: should close oldfd since we'll now
    // use newfd
    // essentially, changes definition of newfd to oldfd

    // returns new file descriptor on success or -1 and errno set on error
    // file descriptors changed by dup2 retained after call to exec

    fileno(stdout);
    fileno(stdin);
    fileno(stderr);

int fileno(File *stream);
    // returns file descriptor for the stream

    // eg: fileno(stdout) returns file descriptor for stdout
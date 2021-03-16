/*


Process Control Block (PCB) is associated with every process. Includes Process ID (PID),
stack pointer pointing to top of stack memory, program counter that identies next instruction

Process States:
    -Running
    -Ready (to run)
    -Blocked (waitinf for another event to occur)

OS seems like it's multitasking but actually is switching between ready and running quickly



*/

 pid_t fork();

 // creates a child process

 // in child process, fork's return value is 0. 
 // in parent process, fork's return value is child's PID
 // on error, returns -1, errno is set



 pid_t wait(int* wstatus);

 // takes in wstatus, which it set to terminate status of child block

 // return value: PID of terminated process

 // wait status - status stored in wstatus can be accessed to determine stuff
    WIFEXITED(wstatus)
        // returns true if child terminated normally - exit(3) or return

    WEXITSTATUS(wstatus)
        // returns exit status of child - eg exit(3). should only be used if wifexited already true.

    WIFSIGNALED(wstatus)
        // returns true if child process was terminated by a signal

    WTERMSIG(wstatus)
        // returns signal value - should only be called if WIFSIGNALED alerady true

// NOTE: wait only allows us to deal with child processes. can't work with unrelated or grandchildren processes.


waitpid(pid_t pid, int* wstatus, int options)
    // allows us to wait for a specific child process
    
    //options
    WNOHANG(wstatus)
    // returns exit status or zombie child or returns immediately if no zombies


/*
ZOMBIES

Child terminated but parent still might need info about it (exit status, etc)

Zombie can be 'exorcised' when termination status has been called. We do this by calling wait
for every child process

ORPHANS

Parent terminated first, while child running. Child is adopted by init, which has PID = 1



*/
/*



Rule: has a target, dependencies, recipe

eg. target: dependencies....
        recipe


Target: file to be constructed
Dependencies/preereqs: if one or more dependencies are newer than target, recipe is executed.
                        - if it doesn't exist, only executes recipe if target doesn't exist
                        -also check if there is a rule for the dependency, and executes that first if needed

Recipe: List of commands to execute that create the target

eg:

compare_sorts: compare_sorts.c sorts.c
    gcc compare_sorts.c sorts.c -o compare_sorts


Wildcards

%.o: %.c sorts.h
    gcc -c $< -o $@

% - means  each object file needed to be build depends on source file with same name
    $< - variable containing first name in list of dependencies
    $@ - variable containing name of target

.PHONY - indicates word is not actually a file, but a legal target
eg. .PHONY clean


then, we can do

clean:
    rm compare_sorts *.o


Makefiles can include variables
eg. OBJFILES = compare_sorts.o sorts.o

now, we can do:
    compare_sorts: $(OBJFILES)
        gcc $(OBJFILES) -o compare_sorts


















*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* We will always be using square images */
#ifndef WIDTH
#define WIDTH 28
#endif

#ifndef NUM_PIXELS
#define NUM_PIXELS WIDTH * WIDTH
#endif



int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s filelist\n", argv[0]);
        exit(1);
    }

     FILE *f1 = fopen(argv[1], 'rb');

    int numFiles;
    
    fread(&numFiles, sizeof(int), 1, f1);
    printf('There are %d files\n', numFiles);

    int label;
    char image[NUM_PIXELS]; 

    for(int i = 0; i < numFiles; i++){
        fread(&label, sizeof(unsigned char), 1, f1);
        fread(image, sizeof(unsigned char), NUM_PIXELS, f1);

        printf("Label is %hhu\n", la~bel);
        for(int p = 0; p < NUM_PIXELS; p++){
            printf("%hhu", image[p]);
        }
    }




    fclose(f1); // close the opened file

    return 0;
}
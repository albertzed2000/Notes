char *copy(char *dest, const char *src, int capacity) {

    // capacity: number of bytes allocated to dest
    
    int i;

    for (i = 0; i < capacity - 1 && src[i] != '\0'; i++){
        dest[i] = src[i];
    }

    for (i; i < capacity; i++){
        dest[i] = '\0';
    }

    return dest;
}
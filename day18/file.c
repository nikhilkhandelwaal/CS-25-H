#include <stdio.h>

int main() {

    FILE* fPtr;

    fPtr = fopen("test.txt", "w");
    if (fPtr == NULL) {
        printf("File is not available");
        return 0;
    }
    else {
        fprintf(fPtr, "%d", 10);
    }

    fclose(fPtr);


    return 0;
}
/*
    Types of Files
        text files
        binary Files

    Read  => "r"
    Write => "w"
    append => "a"


*/
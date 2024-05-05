// Splitter
// Splits geographical data into 3 chosen categories using keywords

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char line[101];

    if(argc != 6) {
        fprintf(stderr, "Use: ./splitter [keyword1] [outputFile1] [keyword2] [outputFile2] [outputFile3]\n");
        return 1;
    }

    // FILE* in = fopen("in.csv", "r");
    // FILE* f1 = fopen(argv[2], "w");
    // FILE* f2 = fopen(argv[4], "w");
    // FILE* f3 = fopen(argv[5], "w"); 

    FILE *in, *f1, *f2, *f3;

    if(in = fopen("in.csv", "r") == 0) {
        fprintf(stderr, "Error opening the in.csv file.\n");
        return 1;
    }

    if(in = fopen(argv[2], "w") == 0) {
        fprintf(stderr, "Error opening the %s file.\n", argv[2]);
        return 1;
    }

     if(in = fopen(argv[4], "w") == 0) {
        fprintf(stderr, "Error opening the %s file.\n", argv[4]);
        return 1;
    }

     if(in = fopen(argv[5], "w") == 0) {
        fprintf(stderr, "Error opening the %s file.\n", argv[5]);
        return 1;
    }

    while(fscanf(in, "%100[^\n]\n", line) == 1) {
        if(strstr(line, argv[1])) fprintf(f1, "%s\n", line);
        else if(strstr(line, argv[3])) fprintf(f2, "%s\n", line);
        else fprintf(f3, "%s\n", line);
    }
}
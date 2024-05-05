// Geofilter
// Filters geographical data in .csv format - only the entries in a chosen area will be considered.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if(argc != 5) {
        fprintf(stderr, "Usage: ./geofilter TOP BOTTOM LEFT RIGHT\n");
        return 1;
    }
    float lat, lng;
    char info[101];
    while(scanf("%f, %f, %100[^\n]", &lat, &lng, info) == 3) {
        if((lat > atoi(argv[2]) && lat < atoi(argv[1])) && (lng > atoi(argv[3]) && lng < atoi(argv[4]))) 
            printf("%f, %f, %s\n", lat, lng, info);
    }
    return 0;
}
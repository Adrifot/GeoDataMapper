#include <stdio.h>

int main() {
    float lat, lng;
    char info[80];
    int started = 0;
    puts("locations = [");
    while(scanf("%f, %f, %79[^\n]", &lat, &lng, info) == 3) {
        if(started) printf(", \n");
        else started = 1;
        printf("\t{latitude: %f, longitude: %f, info: \"%s\"}", lat, lng, info);
    }
    puts("\n]");
    return 0;
}
#include <stdio.h>

int main() {
    float lat, lng;
    char info[101];
    int started = 0;
    puts("locationsArray = [");
    while(scanf("%f, %f, %100[^\n]", &lat, &lng, info) == 3) {
        if(started) printf(", \n");
        else started = 1;
        if(lat < -90 || lat > 90) {
           fprintf(stderr, "Invalid latitude: %f", lat);
            return 2;
        }
        if(lng < -180 || lng > 180) {
            fprintf(stderr, "Invalid longitude: %f", lng);
            return 2;
        }
        printf("\t{latitude: %f, longitude: %f, info: \"%s\"}", lat, lng, info);
    }
    puts("\n]");
    return 0;
}
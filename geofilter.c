// Geofilter
// Filters geographical data in .csv format - only the entries in a chosen area will be considered.

#include <stdio.h>

int main() {
    float lat, lng;
    char info[101];
    while(scanf("%f, %f, %100[^\n]", &lat, &lng, info) == 3) {
        if((lat > 26 && lat < 34) && (lng > -76 && lng < -64)) 
            printf("%f, %f, %s\n", lat, lng, info);
    }
    return 0;
}
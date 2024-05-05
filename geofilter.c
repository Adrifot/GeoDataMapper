// Geofilter
// Filters geographical data in .csv format - only the entries in a chosen area will be considered.

#include <stdio.h>

#define LEFT 20
#define RIGHT 20
#define TOP 20
#define BOTTOM 20

int main() {
    float lat, lng;
    char info[101];
    while(scanf("%f, %f, %100[^\n]", &lat, &lng, info) == 3) {
        if((lat > BOTTOM && lat < TOP) && (lng > LEFT && lng < RIGHT)) 
            printf("%f, %f, %s\n", lat, lng, info);
    }
    return 0;
}
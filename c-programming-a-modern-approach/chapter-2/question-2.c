#include <stdio.h>
#define PI 3.14159265358979323846f

int main(void) {
    float sphereRadius = 10.0f;
    float volume = 4.0f/3.0f*PI*sphereRadius*sphereRadius;
    printf("%.3f", volume);
    return 0;
}
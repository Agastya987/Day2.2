#include <stdio.h>
#define PI 3.14159   // Define constant PI

int main() {
    float radius, area, circumference;

    // Input radius
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}

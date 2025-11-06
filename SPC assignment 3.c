#include <stdio.h>

int main(void) {
    const double PI = 3.141592653589793;
    double r, h;
    double volume, surface_area;

    printf("Enter radius (r): ");
    if (scanf("%lf", &r) != 1) {
        fprintf(stderr, "Invalid input for radius.\n");
        return 1;
    }

    printf("Enter height (h): ");
    if (scanf("%lf", &h) != 1) {
        fprintf(stderr, "Invalid input for height.\n");
        return 1;
    }

    if (r < 0 || h < 0) {
        fprintf(stderr, "Radius and height must be non-negative.\n");
        return 1;
    }

    
    volume = PI * r * r * h;
    surface_area = 2.0 * PI * r * r + 2.0 * PI * r * h;

    printf("\nVolume = %.4f\n", volume);
    printf("Surface area = %.4f\n", surface_area);

    return 0;
}
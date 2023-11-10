//calculation the area of circle

#include <stdio.h>
#define PI 3.14159
int main() {
    double r, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    area = PI * r * r;

    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
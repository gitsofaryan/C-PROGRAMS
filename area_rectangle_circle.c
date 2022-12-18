#include <stdio.h>

int main()
{
    float radius, area_c,area_r,length,breadth;
    //INPUT OF PARAMETERS
    printf("Enter the length of rectangle : \n");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle : \n");
    scanf("%f", &breadth);
    printf("Enter the radius of Circle : \n");
    scanf("%f", &radius);
    // OUTPUT OF GIVEN PARAMETERS
    area_c = 3.14 * radius * radius;
    area_r = length * breadth;
    printf("******AREA OF RECTANGLE********\n");
    printf("\nArea of rectangle : %f\n\n", area_r);
    printf("******AREA OF CIRCLE********\n");
    printf("\nArea of Circle : %f\n", area_c);

    return (0);
}
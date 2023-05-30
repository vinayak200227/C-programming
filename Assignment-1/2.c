// 4. WAP to find the area of the circle.Take radius of circle from user as input and print the result
#include<stdio.h>
    int
    main(){
    float r;
    float Area;
    printf("Enter Radius:\n");
    scanf(" %f", &r);
    Area = 3.14*r*r;
    printf("Area of circle is %f having the radius %f .", Area, r);
    return 0;
}
#include<stdio.h>
int main()
{
    int radius ;
    printf("Enter radius :");
    scanf("%d",&radius);
    float area;
    area = 3.14159*radius*radius;
    printf("The area of circle is : %0.3lf",area);


    return 0;

}

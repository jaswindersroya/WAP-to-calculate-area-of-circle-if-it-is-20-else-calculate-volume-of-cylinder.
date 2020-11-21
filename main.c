//WAP to calculate area of circle if it is <20,else calculate volume of cylinder.
//formula area_circle = PI * r * r
//      vol_cylinder = PI *r*r*h
# include <stdio.h>
int main(){
    
    //delcare variables
    float radius,height,area_circle,vol_cylinder;
    const float PI = 3.14;
    
    //user input
    printf("enter the radius and height");
    scanf("%f %f",&radius,&height);
    
    if(radius<10){
        area_circle = PI * radius * radius;
        printf("area of circle for radius %f is %f", radius, area_circle);
    }
    else{
        vol_cylinder = PI *radius *radius * height;
        printf("volume for cylinder for radius %f is %f ",radius,vol_cylinder);
    }
    printf("\nHave a good day!");
    
}
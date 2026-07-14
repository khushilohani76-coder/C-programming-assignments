#include<stdio.h>
int main(){
    int choice;
   float side,width,length,radius,area;
   printf("choose a shape:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
    
    case 1:
        printf("enter the side of square:");
        scanf("%f",&side);
        area=side*side;
        printf("area of square is:%.2f",area);
        break;
    case 2:
        printf("enter the length and width of rectangle:");
        scanf("%f%f",&length,&width);
        area=length*width;
        printf("area of rectangle is:%.2f",area);
        break;
    case 3:
        printf("enter the radius of circle:");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("area of circle is:%.2f",area);
        break;
    default:
        printf("invalid choice");
}
        return 0;
}


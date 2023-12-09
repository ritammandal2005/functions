#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a,float b);

float squareArea(float side){
    return side * side;
 }
    float circleArea(float radius){
      return 3.14 * radius ;
    }
    float rectangleArea(float a, float b){
        return a*b;
    }

int main (){
    float a = 5.0;
    float b = 10.0;

   
    printf("area is : %f",rectangleArea( a, b));

    return 0;
 }
 
 
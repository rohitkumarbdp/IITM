// Complete the program to calculate the volume of a sphere. 
// You are given radius as the double value represents the radius of the sphere.
// Calculate the volume of a sphere and store the result in the double variable volume.

// Note:- For consistency in the output, use π = 3.14 .

// Sample Input

// 5
// Output

// 523.33


#include<stdio.h>
#include<math.h>

int main(){
    double radius, volume, volume2;
    scanf("%lf", &radius);
    volume = (4.0/3.0)* M_PI *(pow(radius, 3));
    volume2 = (4.0/3.0)* 3.14 *(pow(radius, 3));
    printf("Volume using M_PI: %.2lf\nVolume using 3.14 as Pi: %.2lf", volume, volume2);
    return 0;
}

#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} Point;

typedef struct{
    int n_points;
    Point* points;
} Polygon;

float distance(Point p1, Point p2)
{
 //Write function definition
    float dist = sqrt(pow((p1.x-p2.x), 2) + pow((p1.y - p2.y), 2));
    return dist;


}
float perimeter(Polygon* poly)
{
   //Write function definition
    float total_perimeter = 0.0;
    for (int i = 0; i < poly->n_points; i++) {
        // Get the current point and the next point
        Point p1 = poly->points[i];
        Point p2 = poly->points[(i + 1) % poly->n_points]; // Wrap around to the first point
        total_perimeter += distance(p1, p2);
    }
    return total_perimeter;


}
int main(){
    Polygon poly;
    scanf("%d",&poly.n_points);
    Point points[poly.n_points];
    for(int i=0;i<poly.n_points;i++){
        scanf("%f %f", &points[i].x,& points[i].y);
    }
    poly.points = points;
    printf("%.2f", perimeter(&poly));
}
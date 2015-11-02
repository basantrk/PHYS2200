/* Homewok 4,question # 1
 * Find the radius of a circle inscribed in a triangle, r, is
 * -lm is required before compiliation
 */

#include <stdio.h>
#include <math.h>

struct point2d
{
	double x;
	double y;
};

struct triangle
{
	struct point2d a;
	struct point2d b;
	struct point2d c;
};


double distance(struct triangle t);

double distance1 (struct triangle t)
{
	return sqrt((t.c.x-t.a.x)*(t.c.x-t.a.x)+(t.c.y-t.a.y)*(t.c.y-t.a.y));
}

double distance2 (struct triangle t);

double distance2 (struct triangle t)
{
	return sqrt((t.a.x-t.b.x)*(t.a.x-t.b.x)+(t.a.y-t.b.y)*(t.a.y-t.b.y));
}

double distance3 (struct triangle t);

double distance3 (struct triangle t)
{
	return sqrt((t.b.x-t.c.x)*(t.b.x-t.c.x)+(t.b.y-t.c.y)*(t.b.y-t.c.y));
}

double area(struct triangle t);

double area(struct triangle t)
{
	return fabs(0.5*( (t.c.x-t.a.x)*(t.b.y-t.a.y) - (t.c.y-t.a.y)*(t.b.x-t.a.x)));
}

int main(void)
{
	struct triangle t1;
	double s, d1, d2, d3, r;

    t1.a=(struct point2d) {2., 2.};
    t1.b=(struct point2d) {-2.,1.};
    t1.c=(struct point2d) {0.,-3.};

    s=area(t1);
    printf("Area: %14.6f\n", s);

    d1=distance1(t1);
    printf("Distance CA: %14.6f\n", d1);

    d2=distance2(t1);
    printf("Distance AB: %14.6f\n", d2);

    d3=distance3(t1);
    printf("Distance BC:  %14.6f\n", d3);

    r=(2*area(t1))/(d1+d2+d3);
    printf("Radius:  %14.6f\n",r);

return 0;
}



    
    

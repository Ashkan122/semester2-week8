//Ashkan Ramjerdi 
#include <stdbool.h>
#include <math.h>
#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x=x;
    new.y=y;
    return new;
}

Line makeline(Point p1, Point p2){
    Line new;
    new.p[0]=p1;
    new.p[1]=p2;
    return new;
}

Triangle makeTriangle(Point p1, Point p2,Point p3){
    Triangle new;
    new.p[0]=p1;
    new.p[1]=p2;
    new.p[2]=p3;
    return new;
}

float lineLength( Line l ){
    float x1=(l.p[0]).x;
    float y1=(l.p[0]).y;
    float x2=(l.p[1]).x;
    float y2=(l.p[1]).y;
    float length=sqrtf(pow(x2-x1,2)+pow(y2-y1,2));
    return length;
}


float triangleArea( Triangle t ){
    Line LineA=makeline(t.p[0],t.p[1]);
    Line LineB=makeline(t.p[1],t.p[2]);
    Line LineC=makeline(t.p[2],t.p[0]);
    float a =lineLength(LineA);
    float b =lineLength(LineB);
    float c =lineLength(LineC);
    float s =0.5*(a+b+c);
    float Area = sqrtf(s*(s-a)*(s-b)*(s-c));
    return Area;
}  

bool samePoint( Point p1, Point p2 ){
    float x1=p1.x;
    float y1=p1.y;
    float x2=p2.x;
    float y2=p2.y;
    if (fabs(x1-x2)<1.0e-6 && fabs(y1-y2)<1.0e-6){
        return true;
    }
    else{
        return false;
    }
}         // return true only if the point is the same location
bool pointInLine( Point p, Line l){
    if ((samePoint(p,l.p[0]) || samePoint(p,l.p[1]))==true){
        return true;
    }
    else{
        return false;
    }
}           // return true only if the point is one of the line endpoints
bool pointInTriangle( Point p, Triangle t ){
    if (((samePoint(p,t.p[0]) || samePoint(p,t.p[1])) || samePoint(p,t.p[2]))==true){
        return true;
    }
    else{
        return false;
    }

}  // return true only if the point is one of the triangle vertices
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()


#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.5,6.0);
    Point p2 = makePoint(-2.0,7.0);
    Point p3 = makePoint(5.0,1.0);

    Line l = makeLine( p1, p2 );
    Line t = makeTriangle( p1, p2 ,p3);
    // test your code by calling the functions and printing the output 
    
    return 0;
}
#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>
#include <cstdlib>

//using
using std::make_shared;
using std::shared_ptr;
using std::sqrt;

//constraints
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility function
double clamp(double x, double min, double max)
{
    if (x < min)
        return min;
    if (x > max)
        return max;
    return x;
}

double degree_to_radians(double degree)
{
    return degree * pi / 180.0;
}

double random_double()
{
    // returns random number greater and equeal to 0 or less than 1
    return rand() / (RAND_MAX + 1.0);
}

double random_double(double min, double max)
{
    //returns random number between min and max
    return min + (max - min) * random_double();
}
//common header
#include "vec3.h"
#include "ray.h"

#endif
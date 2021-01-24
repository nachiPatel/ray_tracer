#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

//using
using std::make_shared;
using std::shared_ptr;
using std::sqrt;

//constraints
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility function
inline double degree_to_radians(double degree)
{
    return degree * pi / 180.0;
}

//common header
#include "vec3.h"
#include "ray.h"

#endif
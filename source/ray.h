#ifndef RAY_H
#define RAY_H

#include "vec3.h"

using point3 = vec3;

class ray
{

public:
    ray() {}

    ray(const point3 &origin, const vec3 &directioin) : orig(origin), dir(directioin)
    {
    }

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }

    point3 at(double t) const
    {
        return orig + (t * dir);
    }

public:
    point3 orig;
    vec3 dir;
};

#endif
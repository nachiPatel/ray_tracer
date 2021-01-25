#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "rtweekend.h"

using color = vec3;

#include <iostream>

void write_color(std::ostream &out, color pixel_color, int samples_per_pixel)
{
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    //average the color by deviding it by number of sammples
    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    //write the translated [0,255] value of each componenet

    out << static_cast<int>(256 * clamp(r, 0, 0.99)) << " "
        << static_cast<int>(256 * clamp(g, 0, 0.99)) << " "
        << static_cast<int>(256 * clamp(b, 0, 0.99)) << "\n";
}

#endif
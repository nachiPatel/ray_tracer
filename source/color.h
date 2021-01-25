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
<<<<<<< HEAD

    //average the color by deviding it by number of sammples
    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    //write the translated [0,255] value of each componenet

    out << static_cast<int>(256 * clamp(r, 0, 0.99)) << " "
        << static_cast<int>(256 * clamp(g, 0, 0.99)) << " "
        << static_cast<int>(256 * clamp(b, 0, 0.99)) << "\n";
=======

    // Divide the color by the number of samples.
    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(256 * clamp(r, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(g, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(b, 0.0, 0.999)) << '\n';
>>>>>>> old_state
}

#endif
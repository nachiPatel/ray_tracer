#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

using color = vec3;

#include <iostream>

void write_color(std::ostream &out, color pixel_color)
{
    //write the translated [0,255] value of each componenet

    out << static_cast<int>(255.99 * pixel_color.x()) << " "
        << static_cast<int>(255.99 * pixel_color.y()) << " "
        << static_cast<int>(255.99 * pixel_color.z()) << "\n";
}

#endif
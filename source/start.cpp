#include "rtweekend.h"
#include "color.h"
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"

#include <iostream>
#include <bits/stdc++.h>

color ray_color(const ray &r, const hittable &world)
{
    hit_record rec;
    if (world.hit(r, 0, infinity, rec))
    {
        return 0.5 * (rec.normal + color(1, 1, 1));
    }
    vec3 unit_direction = unit_vector(r.direction());
    auto t = 0.5 * (unit_direction.y() + 1.0);
    return (1.0 - t) * color(1.0, 1.0, 1.0) + t * color(0.5, 0.7, 1.0);
}

int main()
{

    //image size
    const auto aspect_ratio = 16.0 / 9.0;
    const int image_width = 400;
    const int image_height = static_cast<int>(image_width / aspect_ratio);
<<<<<<< HEAD
    const int samples_per_pixel = 1;
=======
    const int samples_per_pixel = 100;
>>>>>>> old_state

    //world
    hittable_list world;
    world.add(make_shared<sphere>(point3(0, 0, -1), 0.5));
    world.add(make_shared<sphere>(point3(0, -100.5, -1), 100));

    //camera
    camera cam;
<<<<<<< HEAD

=======
>>>>>>> old_state
    //render
    std::cout << "P3\n";
    std::cout << image_width << " " << image_height << "\n";
    std::cout << "255\n";

    for (int j = image_height - 1; j >= 0; j--)
    {
        for (int i = 0; i < image_width; i++)
        {
            color pixel_color(0, 0, 0);
<<<<<<< HEAD
            for (int s = 0; s < samples_per_pixel; s++)
=======
            for (int s = 0; s < samples_per_pixel; ++s)
>>>>>>> old_state
            {
                auto u = (i + random_double()) / (image_width - 1);
                auto v = (j + random_double()) / (image_height - 1);
                ray r = cam.get_ray(u, v);
                pixel_color += ray_color(r, world);
            }
            write_color(std::cout, pixel_color, samples_per_pixel);
        }
    }

    std::cerr << "done \n";

    return 0;
}
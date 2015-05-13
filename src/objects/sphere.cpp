#include "sphere.h"

namespace objects
{

Sphere::Sphere(util::Vector3& center, double radius) :
    center(center), radius(radius)
{
}


Sphere::~Sphere()
{
}

Intersect Sphere::intersects(const tracer::Ray& ray)
{

}

}

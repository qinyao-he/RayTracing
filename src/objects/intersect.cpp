#include "intersect.h"

namespace objects
{

Intersect Intersect::noHit(null, false, 0, util::Vector3(0, 0, 0), util::Vector3(0, 0, 0));

Intersect::Intersect(Object* object, bool intersects, double distance, util::Vector3 position, util::Vector3 normal) :
    object_ptr(object),
    intersects(intersects),
    distance(distance),
    position(position),
    normal(normal)
{
}

Intersect::~Intersect()
{

}

}
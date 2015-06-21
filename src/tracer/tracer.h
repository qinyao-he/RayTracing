#ifndef TRACER_H
#define TRACER_H

#include "../objects/object.h"
#include "../util/color.h"
#include "../util/vector3.h"
#include "camera.h"
#include "ray.h"
#include "scene.h"

namespace tracer
{

class Tracer
{
public:
    Tracer();
    ~Tracer();

    void set_camera(Camera* camera);
    void set_scene(Scene* scene);

    void run();

private:
    util::Color raytrace(Ray ray, int depth);

    Ray get_reflection_light(Ray ray, objects::Intersect inter);

    Camera* camera;
    Scene* scene;
};

}

#endif // TRACER_H

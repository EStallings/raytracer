#include "ImpliticSurface.h"
#include "math.h"
#include "World.h"
// -------------------------------------------------------------------- default constructor

ImplicitSurface::ImplicitSurface(void)
	: Tracer()
{}


// -------------------------------------------------------------------- constructor

ImplicitSurface::ImplicitSurface(World* _worldPtr)
	: Tracer(_worldPtr)
{}

// -------------------------------------------------------------------- destructor

ImplicitSurface::~ImplicitSurface(void) {}

float ImplicitSurface::eval_func(const float x, const float y) const{
	return 0.5 * (1 + sin(x*x*y*y));
}

// -------------------------------------------------------------------- trace_ray

RGBColor
ImplicitSurface::trace_ray(const Ray& ray) const{
	//float range = 10.83;
	float range = 3.79;
	range *= range;
	float vres = (*world_ptr).vp.vres;
	float hres = (*world_ptr).vp.hres;
	const float x = (ray.o.x + hres/2) / hres * range;
	const float y = (ray.o.y + vres/2) / vres * range;
	float eval = eval_func(x, y);

	return RGBColor(eval, eval, eval);
	//return white;
}

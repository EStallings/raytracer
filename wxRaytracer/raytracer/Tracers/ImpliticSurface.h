#ifndef __IMPLICIT_SURFACE__
#define __IMPLICIT_SURFACE__

#include "Tracer.h"

class ImplicitSurface : public Tracer {
public:

	ImplicitSurface(void);

	ImplicitSurface(World* _world_ptr);

	virtual
		~ImplicitSurface(void);

	virtual RGBColor
		trace_ray(const Ray& ray) const;

	virtual float
		eval_func(const float x, const float y) const;
};

#endif

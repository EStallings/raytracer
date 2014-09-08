void
World::build7(void) {
	vp.set_hres(512);
	vp.set_vres(512);
	vp.set_pixel_size(1.0);
	vp.set_gamma(1.0);
	vp.set_zw(100.0);

	background_color = black;
	tracer_ptr = new ImplicitSurface(this);
}


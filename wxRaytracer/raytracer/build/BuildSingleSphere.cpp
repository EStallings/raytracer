void
World::build1(void) {
	vp.set_hres(200);
	vp.set_vres(200);
	vp.set_pixel_size(1.0);
	vp.set_gamma(1.0);
	vp.set_zw(100.0);

	background_color = black;
	tracer_ptr = new SingleSphere(this);

	sphere.set_center(0.0);
	sphere.set_radius(85);
	sphere.set_color(red);
}

void
World::build4(void) {
	vp.set_hres(200);
	vp.set_vres(200);
	vp.set_pixel_size(1.0);
	vp.set_gamma(1.0);
	vp.set_zw(0.0);

	background_color = black;
	tracer_ptr = new SingleSphere(this);

	sphere.set_center(0.0);
	sphere.set_radius(85);
	sphere.set_color(red);
}


void
World::build6(void) {
	vp.set_hres(200);
	vp.set_vres(200);
	vp.set_pixel_size(1.0);
	vp.set_gamma(1.0);
	vp.set_zw(0.0);

	background_color = red;
	tracer_ptr = new SingleSphere(this);

	sphere.set_center(20);
	sphere.set_radius(30);
	sphere.set_color(white);
}

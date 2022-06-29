package resources;

data interface TrafficLightMessages {
	@a2l_unit_label("m")
	m proximity = 99999.0 [m];
	boolean redLight = false;
	boolean yellowLight = false;
	boolean greenLight = false;
	boolean flashLight = false;
}
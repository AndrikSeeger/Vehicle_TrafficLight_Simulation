package Driver;
import resources.kmh;
import resources.a;
import resources.curve_a_real;
import resources.curve_kmh;
import resources.m;
import resources.s;

class CruiseSpeedControlTestFunction {
	@get
	real power;
	@get
	real brake;
	const a maxDecel = 2.5[a];
	characteristic real fak = 0.9995;
	characteristic curve_kmh AirFriction[6] = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	characteristic curve_a_real BrakePedal[6] = {{0.0[a], 1.0[a], 2.0[a], 3.0[a], 4.0[a]}, {0.0, 40.0, 60.0, 80.0, 100.0}};

	@generated("blockdiagram", "65b42a98")
	public real calc(kmh in targetSpeed, kmh in v) {
		if (v < targetSpeed) {
			power = 100.0; // Main/calc 1/if-then 1
			brake = 0.0; // Main/calc 1/if-then 2
			return power; // Main/calc 1/if-then 3
		} else {
			power = 0.0; // Main/calc 1/if-else 1
			brake = (fak * BrakePedal.getAt((maxDecel + AirFriction.getAt(v)))); // Main/calc 1/if-else 2
			return brake; // Main/calc 1/if-else 3
		} // Main/calc 1
	}
}
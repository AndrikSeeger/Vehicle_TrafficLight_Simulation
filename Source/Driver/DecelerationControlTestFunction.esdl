package Driver;
import resources.a;
import resources.curve_kmh;
import resources.curve_real_a;
import resources.kmh;
import resources.s;
import resources.m;

class DecelerationControlTestFunction {
	kmh oldSpeed;
	a accel;
	boolean accBelowLimit;
	const a limit = -2.5[a];
	characteristic curve_real_a BrakeMomentum[6] = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0[a], 0.0[a], -1.0[a], -2.0[a], -3.0[a], -4.0[a]}};
	characteristic curve_kmh AirFriction[6] = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	boolean accBelowLimitCalc;
	a accelCalc;
	a carAccel;
	boolean accBelowLimitReal;

	@generated("blockdiagram", "44f8554f")
	public integer calc(kmh in velocity, real in brake, a in theorAccel) {
		if (velocity > 0.0[kmh]) {
			carAccel = theorAccel; // Main/calc 1/if-then 1
		} else {
			carAccel = 0.0[a]; // Main/calc 1/if-else 1
		} // Main/calc 1
		accBelowLimitReal = (carAccel >= limit); // Main/calc 2
		if (carAccel == 0.0[a]) {
			return 2; // Main/calc 3/if-then 1
		} // Main/calc 3
		accel = ((velocity - oldSpeed) / (0.01 * 1.0[s])); // Main/calc 4
		accBelowLimit = (accel >= limit); // Main/calc 5
		oldSpeed = velocity; // Main/calc 6
		accelCalc = (AirFriction.getAt(velocity) + BrakeMomentum.getAt(brake)); // Main/calc 7
		accBelowLimitCalc = (accelCalc >= limit); // Main/calc 8
		if ((accBelowLimit && accBelowLimitCalc) && accBelowLimitReal) {
			return 0; // Main/calc 9/if-then 1
		} else {
			return 1; // Main/calc 9/if-else 1
		} // Main/calc 9
	}
}
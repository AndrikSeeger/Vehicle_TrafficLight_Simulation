package Driver;
import resources.CarMessages;
import resources.kmh;
import resources.a;
import SystemLib.Miscellaneous.DeltaTimeService;
import resources.s;
import resources.curve_kmh;
import resources.curve_real_a;
import resources.m;

static class DecelerationControl
reads CarMessages.v, CarMessages.brake, CarMessages.theorAccel {
	kmh oldSpeed;
	a accel;
	characteristic curve_kmh AirFriction[6] = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	boolean accBelowLimit;
	sysconst a limit = -2.5[a];
	characteristic curve_real_a BrakeMomentum[6] = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0[a], 0.0[a], -1.0[a], -2.0[a], -3.0[a], -4.0[a]}};
	boolean accBelowLimitCalc;
	a accelCalc;
	boolean accBelowLimitReal;
	a carAccel;

	@thread
	@generated("blockdiagram", "968fcdfb")
	public void calc() {
		accel = ((CarMessages.v - oldSpeed) / (DeltaTimeService.deltaT * 1.0[s])); // Main/calc 1
		oldSpeed = CarMessages.v; // Main/calc 2
		accBelowLimit = (accel >= limit); // Main/calc 3
		accelCalc = (AirFriction.getAt(CarMessages.v) + BrakeMomentum.getAt(CarMessages.brake)); // Main/calc 4
		accBelowLimitCalc = (accelCalc >= limit); // Main/calc 5
		if (CarMessages.v > 0.0[kmh]) {
			carAccel = CarMessages.theorAccel; // Main/calc 6/if-then 1
		} else {
			carAccel = 0.0[a]; // Main/calc 6/if-else 1
		} // Main/calc 6
		accBelowLimitReal = (carAccel >= limit); // Main/calc 7
	}
}
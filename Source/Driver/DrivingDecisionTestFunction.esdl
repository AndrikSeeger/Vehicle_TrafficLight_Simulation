package Driver;
import resources.m;
import resources.a;
import resources.kmh;

class DrivingDecisionTestFunction {
	m anhalteweg;
	sysconst m deltaBrake = 0.75[m];

	@generated("blockdiagram", "07105a1c")
	public real calc(kmh in velocity, boolean in redLight, boolean in yellowLight, m in proximity) {
		anhalteweg = ((velocity * velocity) / 4.91[a]); // Main/calc 1
		if (((proximity <= (anhalteweg + deltaBrake)) && (proximity > anhalteweg)) && (redLight || yellowLight)) {
			CruiseSpeedControl.calc(0.0[kmh], velocity); // Main/calc 2/if-then 1
			return CruiseSpeedControl.brake; // Main/calc 2/if-then 2
		} else {
			CruiseSpeedControl.calc(50.0[kmh], velocity); // Main/calc 2/if-else 1
			return CruiseSpeedControl.power; // Main/calc 2/if-else 2
		} // Main/calc 2
	}
}
package Driver;
import resources.TrafficLightMessages;
import resources.CarMessages;
import resources.m;
import resources.a;
import resources.kmh;

static class DrivingDecision
reads TrafficLightMessages.proximity, TrafficLightMessages.redLight, TrafficLightMessages.yellowLight, CarMessages.v
writes CarMessages.power, CarMessages.brake {
	m anhalteweg;
	sysconst m deltaBrake = 0.75[m];

	@thread
	@generated("blockdiagram", "2404b3b8")
	public void calc() {
		anhalteweg = ((CarMessages.v * CarMessages.v) / 4.91[a]); // Main/calc 1
		if (((TrafficLightMessages.proximity <= (anhalteweg + deltaBrake)) && (TrafficLightMessages.proximity > anhalteweg)) && (TrafficLightMessages.redLight || TrafficLightMessages.yellowLight)) {
			CruiseSpeedControl.calc(0.0[kmh], CarMessages.v); // Main/calc 2/if-then 1
		} else {
			CruiseSpeedControl.calc(50.0[kmh], CarMessages.v); // Main/calc 2/if-else 1
		} // Main/calc 2
		CarMessages.power = CruiseSpeedControl.power; // Main/calc 3
		CarMessages.brake = CruiseSpeedControl.brake; // Main/calc 4
		CarMessages.brake = CruiseSpeedControl.brake; // Main/calc 5
		CarMessages.power = CruiseSpeedControl.power; // Main/calc 6
	}
}
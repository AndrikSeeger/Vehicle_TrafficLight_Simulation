package TrafficLight;
import SystemLib.CounterTimer.StopWatch;
import resources.TrafficLightMessages;
import resources.m;
import resources.CarMessages;

static class TrafficLight
writes TrafficLightMessages.proximity, TrafficLightMessages.redLight, TrafficLightMessages.yellowLight, TrafficLightMessages.greenLight
reads CarMessages.dist {
	boolean red;
	boolean yellow;
	boolean green;
	StopWatch StopWatch_instance;
	const real yellowTime = 3.0;
	const real redTime = 42.0;
	const real redYellowTime = 44.0;
	const real greenTime = 60.0;
	const m visibilityDistance = 100.0[m];
	const m notVisible = 99999.0[m];
	TrafficLightPositionModel TrafficLightPositionModel_instance;

	@thread
	@generated("blockdiagram", "3b8fbbdc")
	public void calc() {
		yellow = false; // Main/calc 1
		red = false; // Main/calc 2
		green = false; // Main/calc 3
		if (StopWatch_instance.value() < yellowTime) {
			yellow = true; // Main/calc 4/if-then 1
		} else {
			if (StopWatch_instance.value() < redTime) {
				red = true; // Main/calc 4/if-else 1/if-then 1
			} else {
				if (StopWatch_instance.value() < redYellowTime) {
					yellow = true; // Main/calc 4/if-else 1/if-else 1/if-then 1
					red = true; // Main/calc 4/if-else 1/if-else 1/if-then 2
				} else {
					if (StopWatch_instance.value() < greenTime) {
						green = true; // Main/calc 4/if-else 1/if-else 1/if-else 1/if-then 1
					} // Main/calc 4/if-else 1/if-else 1/if-else 1
				} // Main/calc 4/if-else 1/if-else 1
			} // Main/calc 4/if-else 1
		} // Main/calc 4
		StopWatch_instance.compute(); // Main/calc 5
		if (StopWatch_instance.value() >= greenTime) {
			StopWatch_instance.reset(); // Main/calc 6/if-then 1
		} // Main/calc 6
		TrafficLightMessages.greenLight = green; // Main/calc 7
		TrafficLightMessages.yellowLight = yellow; // Main/calc 8
		TrafficLightMessages.redLight = red; // Main/calc 9
		if (TrafficLightPositionModel_instance.proximity(CarMessages.dist) <= visibilityDistance) {
			TrafficLightMessages.proximity = TrafficLightPositionModel_instance.proximity(CarMessages.dist); // Main/calc 10/if-then 1
		} else {
			TrafficLightMessages.proximity = notVisible; // Main/calc 10/if-else 1
		} // Main/calc 10
	}
}
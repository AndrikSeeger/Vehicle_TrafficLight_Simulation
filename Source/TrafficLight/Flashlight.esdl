package TrafficLight;
import resources.TrafficLightMessages;
import RisingEdge.Rising;
import SystemLib.CounterTimer.Timer;

static class Flashlight
reads TrafficLightMessages.proximity, TrafficLightMessages.redLight
writes TrafficLightMessages.flashLight {
	Rising Rising_instance;
	Timer Timer_instance;

	@thread
	@generated("blockdiagram", "825156f1")
	public void calc() {
		Timer_instance.compute(); // Main/calc 1
		if (Rising_instance.calc(TrafficLightMessages.proximity) && TrafficLightMessages.redLight) {
			Timer_instance.begin(1.0); // Main/calc 2/if-then 1
		} // Main/calc 2
		if (Timer_instance.value()) {
			TrafficLightMessages.flashLight = true; // Main/calc 3/if-then 1
		} else {
			TrafficLightMessages.flashLight = false; // Main/calc 3/if-else 1
		} // Main/calc 3
	}
}
package TrafficLight;
import RisingEdge.Rising;
import resources.m;

class FlashlightTestFunction {
	Rising Rising_instance;
	real timeCounter = 0.0;
	const real constDeltaT = 0.01;

	@generated("blockdiagram", "a446a615")
	public boolean calc(m in proximity, boolean in redLight) {
		if (Rising_instance.calc(proximity) && redLight) {
			timeCounter = 1.0; // calc_spec/calc 1/if-then 1
		} // calc_spec/calc 1
		timeCounter = max((timeCounter - constDeltaT), 0.0); // calc_spec/calc 2
		if (timeCounter > 0.0) {
			return true; // calc_spec/calc 3/if-then 1
		} else {
			return false; // calc_spec/calc 3/if-else 1
		} // calc_spec/calc 3
	}
}
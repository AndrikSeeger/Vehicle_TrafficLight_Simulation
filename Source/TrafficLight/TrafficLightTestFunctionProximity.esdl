package TrafficLight;
import resources.m;

class TrafficLightTestFunctionProximity {
	const m notVisible = 99999.0[m];
	const m visibilityDistance = 100.0[m];
	TrafficLightPositionModel TrafficLightPositionModel_instance;

	@generated("blockdiagram", "72f05320")
	public m proximity(m in dist) {
		if (TrafficLightPositionModel_instance.proximity(dist) <= visibilityDistance) {
			return TrafficLightPositionModel_instance.proximity(dist); // Main/proximity 1/if-then 1
		} else {
			return notVisible; // Main/proximity 1/if-else 1
		} // Main/proximity 1
	}
}
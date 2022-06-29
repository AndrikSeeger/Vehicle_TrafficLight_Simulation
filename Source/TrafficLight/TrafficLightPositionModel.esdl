package TrafficLight;
import resources.m;

class TrafficLightPositionModel {
	const m firstTrafficLight = 300.0[m];
	const m secondTrafficLight = 500.0[m];
	const m thirdTrafficLight = 900.0[m];

	@generated("blockdiagram", "62ae1d46")
	public m proximity(m in distance) {
		if (distance > thirdTrafficLight) {
			return((firstTrafficLight + 1000.0[m]) - distance); // Main/proximity 1/if-then 1
		} else {
			if (distance > secondTrafficLight) {
				return(thirdTrafficLight - distance); // Main/proximity 1/if-else 1/if-then 1
			} else {
				if (distance > firstTrafficLight) {
					return(secondTrafficLight - distance); // Main/proximity 1/if-else 1/if-else 1/if-then 1
				} else {
					return(firstTrafficLight - distance); // Main/proximity 1/if-else 1/if-else 1/if-else 1
				} // Main/proximity 1/if-else 1/if-else 1
			} // Main/proximity 1/if-else 1
		} // Main/proximity 1
	}
}
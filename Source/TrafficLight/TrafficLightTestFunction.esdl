package TrafficLight;

class TrafficLightTestFunction {
	boolean red;
	boolean yellow;
	boolean green;
	characteristic real yellowTime = 3.0;
	const real redTime = 42.0;
	sysconst real redYellowTime = 44.0;
	const real greenTime = 60.0;
	real time;

	@generated("blockdiagram", "1b852aed")
	public integer calc(real in stime) {
		time = stime; // Main/calc 1
		if (time < yellowTime) {
			return 1; // Main/calc 2/if-then 1
		} else {
			if (time < redTime) {
				return 2; // Main/calc 2/if-else 1/if-then 1
			} else {
				if (time < redYellowTime) {
					return 3; // Main/calc 2/if-else 1/if-else 1/if-then 1
				} else {
					if (time < greenTime) {
						return 4; // Main/calc 2/if-else 1/if-else 1/if-else 1/if-then 1
					} else {
						return 5; // Main/calc 2/if-else 1/if-else 1/if-else 1/if-else 1
					} // Main/calc 2/if-else 1/if-else 1/if-else 1
				} // Main/calc 2/if-else 1/if-else 1
			} // Main/calc 2/if-else 1
		} // Main/calc 2
	}
}
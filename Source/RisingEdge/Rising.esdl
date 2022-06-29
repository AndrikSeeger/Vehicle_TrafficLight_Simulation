package RisingEdge;
import resources.m;

class Rising {
	m oldSignal = 0.0[m];
	boolean returnValue;

	@generated("blockdiagram", "485929b6")
	public boolean calc(m in arg) {
		if (arg > oldSignal) {
			returnValue = true; // Main/calc 1/if-then 1
		} else {
			returnValue = false; // Main/calc 1/if-else 1
		} // Main/calc 1
		oldSignal = arg; // Main/calc 2
		return returnValue; // Main/calc 3
	}
}
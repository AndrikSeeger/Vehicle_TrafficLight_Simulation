package UnitTests;

import assertLib.Assert;
import TrafficLight.TrafficLightTestFunction;

static class TrafficLightUnitTest {//100% coverage
	
	TrafficLightTestFunction testObj;
	integer stateLight;
	//Ampelzeiten je Zyklus
	const real yellowTime = 3.0;
	const real redTime = 42.0;
	const real redYellowTime = 44.0;
	const real greenTime = 60.0;
	@Test
	public void testForYellow() {//Test auf gelbe Ampel bei 0s
		stateLight = testObj.calc(0.0);
		Assert.assertTrue(stateLight == 1);
	}
	
	@Test
	public void testForRed() {//Test auf rote Ampel bei 3s
		stateLight = testObj.calc(3.0);
		Assert.assertTrue(stateLight == 2);
	}
	
	@Test
	public void testForYellowRed() {//Test auf gelbrote Ampel bei 42.0s
		stateLight = testObj.calc(42.0);
		Assert.assertTrue(stateLight == 3);
	}
	@Test
	public void testForGreen() {//Test auf grüne Ampel bei 44s
		stateLight = testObj.calc(44.0);
		Assert.assertTrue(stateLight == 4);
	}
	@Test
	public void testForReset() {//Test für Reset bei 60s
		stateLight = testObj.calc(60.0);
		Assert.assertTrue(stateLight == 5);
	}
}
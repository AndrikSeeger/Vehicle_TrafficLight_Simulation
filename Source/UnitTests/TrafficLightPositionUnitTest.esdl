package UnitTests;

import assertLib.Assert;
import TrafficLight.TrafficLightPositionModel;
import resources.m;

static class TrafficLightPositionUnitTest {//100% coverage
	
	TrafficLightPositionModel testObj;
	m proximity;
	
	@Test//Test auf korrekte Distanz zu Ampel 3
	public void testForLight3() {
		proximity = testObj.proximity(800.0[m]);
		Assert.assertTrue(proximity==100.0[m]);
	}
	
	@Test//Test auf korrekte Distanz zu Ampel 2
	public void testForLight2() {
		proximity = testObj.proximity(450.0[m]);
		Assert.assertTrue(proximity==50.0[m]);
	}
	
	@Test//Test auf korrekte Distanz zu Ampel 1
	public void testForLight1() {
		proximity = testObj.proximity(297.0[m]);
		Assert.assertTrue(proximity==3.0[m]);
	}
	
	@Test//Test auf korrekte Distanz zu Ampel 1 nach Ampel 3 bevor die Strecke zurückgesetzt wird
	public void testForLight1from3() {
		proximity = testObj.proximity(999.0[m]);
		Assert.assertTrue(proximity==301.0[m]);
	}
}
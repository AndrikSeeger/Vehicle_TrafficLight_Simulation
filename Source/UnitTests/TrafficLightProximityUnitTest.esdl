package UnitTests;

import assertLib.Assert;
import TrafficLight.TrafficLightTestFunctionProximity;
import resources.m;

static class TrafficLightProximityUnitTest {//100% coverage
	
	TrafficLightTestFunctionProximity testObj;
	m proximity;

	@Test
	public void testNotVisible() {//Test auf nicht Ampelerkennung zu Ampel 1
		proximity = testObj.proximity(199.0[m]);
		Assert.assertTrue(proximity == 99999.0[m]);
	}
	
	@Test
	public void testVisible() {//Test auf Ampelerkennung zu Ampel 1
		proximity = testObj.proximity(200.0[m]);
		Assert.assertTrue(proximity == 100.0[m]);
	}
	
	@Test
	public void testNotVisible2() {//Test auf nicht Ampelerkennung zu Ampel 2
		proximity = testObj.proximity(399.0[m]);
		Assert.assertTrue(proximity == 99999.0[m]);
	}
	
	@Test
	public void testVisible2() {//Test auf Ampelerkennung zu Ampel 2
		proximity = testObj.proximity(400.0[m]);
		Assert.assertTrue(proximity == 100.0[m]);
	}
	
	@Test
	public void testNotVisible3() {//Test auf nicht Ampelerkennung zu Ampel 3
		proximity = testObj.proximity(799.0[m]);
		Assert.assertTrue(proximity == 99999.0[m]);
	}
	
	@Test
	public void testVisible3() {//Test auf Ampelerkennung zu Ampel 4
		proximity = testObj.proximity(800.0[m]);
		Assert.assertTrue(proximity == 100.0[m]);
	}
	
	@Test
	public void testNotVisible4() {//Test auf nicht Ampelerkennung zu Ampel 1 von Ende Runde aus
		proximity = testObj.proximity(999.0[m]);
		Assert.assertTrue(proximity == 99999.0[m]);
	}
	
}
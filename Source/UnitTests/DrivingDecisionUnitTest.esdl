package UnitTests;

import assertLib.Assert;
import Driver.DrivingDecisionTestFunction;
import resources.kmh;
import resources.m;

static class DrivingDecisionUnitTest {//100% coverage
	
	DrivingDecisionTestFunction testObj;
	real value;

	@Test//Test das bei einer grünen Ampel Gas gegeben wird
	public void testGreen() {
		value = testObj.calc(40.0[kmh], false, false, 10.0[m]);
		Assert.assertTrue(value == 100.0); // power pedal 100
	}
	@Test//Test das bei einer roten Ampel mit passender Distanz maximal gebremst wird
	public void testRed() {
		value = testObj.calc(50.0[kmh], true, false, 39.5[m]);
		Assert.assertTrue(value <= 67.0);
		Assert.assertTrue(value >= 66.0);// brake pedal  ~66.66		
	}
	
	
}
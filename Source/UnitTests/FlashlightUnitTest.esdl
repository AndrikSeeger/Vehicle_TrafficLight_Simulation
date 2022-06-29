package UnitTests;

import assertLib.Assert;
import TrafficLight.FlashlightTestFunction;
import resources.m;

static class FlashlightUnitTest {//100% coverage
	
	FlashlightTestFunction testObj;
	boolean redLight;
	boolean flash;
	
	@Test//Test auf Flashligt bei überfahren einer roten Ampel
	public void testFlashDrive() {
		redLight = true;
		testObj.calc(0.0[m], redLight);
		flash = testObj.calc(99999.0[m], redLight);
		Assert.assertTrue(flash);
	}
	
	@Test//Test auf kein Flashlight bei überfahren einer grünen Ampel
	public void testNoFlashDrive() {
		redLight = false;
		testObj.calc(40.0[m], redLight);
		flash = testObj.calc(99999.0[m], redLight);
		Assert.assertFalse(flash);
	}
	
	@Test//Test auf kein Flashlight bei nicht überfahren einer roten Ampel
	public void testNoFlashStand() {
		redLight = true;
		testObj.calc(0.0[m], redLight);
		flash = testObj.calc(0.0[m], redLight);
		Assert.assertFalse(flash);
	}
}
package UnitTests;

import assertLib.Assert;
import Driver.CruiseSpeedControlTestFunction;
import resources.kmh;

static class CruiseSpeedControlUnitTest {//100% coverage
	
	CruiseSpeedControlTestFunction testObj;
	real value;
	kmh speed;
	@Test//Test das Gaspedal funktioniert, wenn targetSpeed > currentSpeed
	public void testPower() {
		value = testObj.calc( 50.0[kmh], 0.0[kmh]);
		Assert.assertTrue(value == 100.0);// power pedal 100
	}
	
	@Test//Test das Bremse funktioniert, wenn targetSpeed =< currentSpeed
	public void testBrake() {
		value = testObj.calc( 0.0[kmh],50.0[kmh]);
		Assert.assertTrue(value <= 67.0);
		Assert.assertTrue(value >= 66.0);// brake pedal ~66.66 (nach air friction + Bremsmomentum)
		
	}
	
	
}
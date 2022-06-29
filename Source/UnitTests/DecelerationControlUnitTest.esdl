package UnitTests;

import assertLib.Assert;
import Driver.DecelerationControlTestFunction;
import resources.kmh;
import resources.a;

static class DecelerationControlUnitTest {//100% coverage
	
	DecelerationControlTestFunction testObj;
	integer underLimit;
	kmh speed;
	@Test//Test dass bei einer Bremspedalstellung von 66 der Grenzwert eingehalten wird
	public void testUnderLimit() {
		testObj.calc(49.99999[kmh], 66.0, 1.0[a]);
		underLimit = testObj.calc(50.0[kmh], 66.0, 1.0[a]) ;
		Assert.assertTrue(underLimit==0);// brake < 2.5 m/s^-2
	}
	
	@Test//Test das bei einer Bremspedalstellung von 67 der Grenzwert nicht mehr eingehalten wird
	public void testOverLimit() {
		underLimit = testObj.calc( 50.0[kmh], 67.0, 1.0[a]);
		Assert.assertTrue(underLimit==1);// brake > 2.5 m/s^-2
		
		
	} //--> CruiseSpeedControlUnitTest nutzt maximal Bremsung
	
	@Test//Test, dass die reale Fahrzeugbeschleunigung im Stillstand immer null ist
	public void testStanding() {
		underLimit = testObj.calc(0.0[kmh], 66.0, 1.0[a]);
		Assert.assertTrue(underLimit==2);// brake > 2.5 m/s^-2
		
		
	} 
}
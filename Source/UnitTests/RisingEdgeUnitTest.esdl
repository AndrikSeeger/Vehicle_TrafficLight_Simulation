package UnitTests;

import assertLib.Assert;
import RisingEdge.Rising;
import resources.m;

static class RisingEdgeUnitTest {//100% coverage
	
	Rising testObj;
	boolean rising;
	
	@Test//Test auf nicht steigend
	public void testFalse() {
		rising = testObj.calc(0.0[m]);
		Assert.assertTrue(!rising);
	}
	
	@Test//Test auf steigend
	public void testTrue() {
		rising = testObj.calc(0.0[m]);
		rising = testObj.calc(10.0[m]);
		Assert.assertTrue(rising);
	}
	
	
}
package myCar;
import SystemLib.Math.MathLib;
import resources.kmh;
import resources.m;
import resources.s;

class MyTurn {
	@get
	m x = 0.0 [m];
	@get
	m y = 0.0 [m];
	@get
	real bearing = 0.0;
	characteristic m D = 2.85 [m];
	MathLib Lib;
	real dpi = 6.28318531;
	real pi = 3.141592653; 
	
	public void move(real beta, kmh v, s mydt) {
		bearing = bearing + (v/D)*Lib.tan(beta)*mydt/3.6;
		if (bearing > pi) {
			bearing = bearing - dpi;
		}
		if (bearing < -pi) {
			bearing = bearing + dpi;
		}
		x = x + v*Lib.cos(bearing)*mydt;
		y = y + v*Lib.sin(bearing)*mydt;
	}
}
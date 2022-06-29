package myCar;
import resources.curve_kmh;
import resources.curve_m;
import resources.curve_real_a;
import resources.map_real_kmh;
import resources.velocity;
import resources.m;
import resources.s;
import resources.kmh;
import resources.g;
import resources.a;

class myDrive_3 {
	characteristic curve_real_a BrakeMomentum[6] = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0[a], 0.0[a], -1.0[a], -2.0[a], -3.0[a], -4.0[a]}};
	characteristic map_real_kmh EngineMomentum[6][6] = {{0.0, 5.0, 20.0, 60.126582278481, 80.0, 100.0}, {0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 150.0[kmh], 200.0[kmh]}, {{0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.849999999999999[a], 0.6000000000000001[a], 0.30000000000000004[a], 0.0[a], 0.0[a], 0.0[a]}, {3.1500000000000004[a], 2.3499999999999988[a], 1.5500000000000012[a], 0.8000000000000009[a], 0.399999999999999[a], 0.0[a]}, {4.5[a], 3.5999999999999996[a], 2.7[a], 1.5[a], 0.8999999999999999[a], 0.0[a]}, {5.0[a], 4.5[a], 3.8000000000000096[a], 2.799999999999999[a], 1.899999999999999[a], 0.0[a]}}};
	characteristic curve_kmh AirFriction[6] = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	characteristic curve_m Landscape[128] = {{0.0[m], 100.0[m], 145.569620253165[m], 202.53164556962025[m], 221.51898734177215[m], 240.0[m], 259.49367088607596[m], 300.0[m], 350.0[m], 400.0[m], 450.0[m], 500.0[m], 600.0[m], 700.0[m], 750.0[m], 800.0[m], 810.0[m], 850.0[m], 900.0[m], 1000.0[m], 1100.0[m], 1200.0[m], 1300.0[m], 1400.0[m], 1500.0[m], 1600.0[m], 1700.0[m], 1800.0[m], 1900.0[m], 2000.0[m], 2100.0[m], 2200.0[m], 2300.0[m], 2400.0[m], 2500.0[m], 2600.0[m], 2700.0[m], 2800.0[m], 2900.0[m], 3000.0[m], 3100.0[m], 3200.0[m], 3300.0[m], 3400.0[m], 3500.0[m], 3600.0[m], 3700.0[m], 3800.0[m], 3900.0[m], 4000.0[m], 4100.0[m], 4200.0[m], 4300.0[m], 4400.0[m], 4500.0[m], 4600.0[m], 4700.0[m], 4800.0[m], 4900.0[m], 5000.0[m], 5100.0[m], 5200.0[m], 5300.0[m], 5400.0[m], 5500.0[m], 5600.0[m], 5700.0[m], 5800.0[m], 5900.0[m], 6000.0[m], 6100.0[m], 6200.0[m], 6300.0[m], 6400.0[m], 6500.0[m], 6600.0[m], 6700.0[m], 6800.0[m], 6900.0[m], 7000.0[m], 7100.0[m], 7200.0[m], 7300.0[m], 7400.0[m], 7500.0[m], 7600.0[m], 7700.0[m], 7800.0[m], 7900.0[m], 8000.0[m], 8100.0[m], 8200.0[m], 8300.0[m], 8400.0[m], 8500.0[m], 8600.0[m], 8700.0[m], 8800.0[m], 8900.0[m], 9000.0[m], 9100.0[m], 9200.0[m], 9300.0[m], 9400.0[m], 9500.0[m], 9600.0[m], 9700.0[m], 9800.0[m], 9900.0[m], 10000.0[m], 10100.0[m], 10200.0[m], 10300.0[m], 10400.0[m], 10500.0[m], 10600.0[m], 10700.0[m], 10800.0[m], 10900.0[m], 11000.0[m], 11100.0[m], 11200.0[m], 11300.0[m], 11400.0[m], 11500.0[m], 11600.0[m], 11700.0[m], 11800.0[m]}, {0.0[m], 4.0[m], 7.125[m], 10.375[m], 10.75[m], 10.5[m], 9.0[m], 5.375[m], 2.625[m], 0.625[m], 1.25[m], 0.625[m], 0.0[m], 0.0[m], 1.375[m], 0.75[m], 0.375[m], 0.625[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m], 0.0[m]}};
	m h = 0.0[m];
	m dh = 0.0[m];
	m ds = 0.0[m];
	@get
	a momentum = 0.0[a];
	@get
	m dist = 0.0[m];
	characteristic m TrackSize = 1000.0[m];
	@get
	velocity v = 0.0[kmh];
	MyTurn MyTurn_instance;
	@get
	m x = 0.0[m];
	@get
	m y = 0.0[m];
	@get
	real bearing;
	@get
	a theorAccel = 0.0[a];

	@generated("blockdiagram", "86740027")
	public void move(real in powerCtrl, real in brakeCtrl, s in mydt, g in myg, real in ^delta) {
		if (dist > TrackSize) {
			dist = 0.0[m]; // Main/move 1/if-then 1
		} // Main/move 1
		momentum = EngineMomentum.getAt(powerCtrl, v); // Main/move 2
		dist = (ds + dist); // Main/move 3
		theorAccel = (BrakeMomentum.getAt(brakeCtrl) + momentum + AirFriction.getAt(v) + (myg * (dh / ds))); // Main/move 4
		dh = (h - Landscape.getAt(dist)); // Main/move 5
		h = Landscape.getAt(dist); // Main/move 6
		v = (((BrakeMomentum.getAt(brakeCtrl) + momentum + AirFriction.getAt(v) + (myg * (dh / ds))) * mydt) + v); // Main/move 7
		ds = (v * mydt); // Main/move 8
		MyTurn_instance.move(^delta, v, mydt); // Main/move 9
		bearing = MyTurn_instance.bearing; // Main/move 10
		x = MyTurn_instance.x; // Main/move 11
		y = MyTurn_instance.y; // Main/move 12
	}
}
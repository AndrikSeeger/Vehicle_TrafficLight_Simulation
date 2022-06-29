package myCar;
import resources.CarMessages;
import resources.s;
import resources.a;
import SystemLib.Miscellaneous.DeltaTimeService;

static class myCar
reads CarMessages.power, CarMessages.brake, CarMessages.steering
writes CarMessages.v, CarMessages.x, CarMessages.y, CarMessages.bearing, CarMessages.dist, CarMessages.theorAccel {
	myDrive_3 myVehicle;
	s time = 0.0[s];
	characteristic a g = 0.0[a];

	@thread
	@generated("blockdiagram", "1d296544")
	public void calc() {
		CarMessages.v = myVehicle.v; // Main/calc 1
		CarMessages.x = myVehicle.x; // Main/calc 2
		CarMessages.dist = myVehicle.dist; // Main/calc 3
		CarMessages.y = myVehicle.y; // Main/calc 4
		time = ((DeltaTimeService.deltaT * 1.0[s]) + time); // Main/calc 5
		CarMessages.bearing = myVehicle.bearing; // Main/calc 6
		myVehicle.move(CarMessages.power, CarMessages.brake, (DeltaTimeService.deltaT * 1.0[s]), g, CarMessages.steering); // Main/calc 7
		CarMessages.theorAccel = myVehicle.theorAccel; // Main/calc 8
	}
}
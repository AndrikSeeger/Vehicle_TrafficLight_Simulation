application {
	class myCar.myCar
	class TrafficLight.Flashlight
	class Driver.CruiseSpeedControl
	class Driver.DrivingDecision
	class TrafficLight.TrafficLight
	class Driver.DecelerationControl
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process myCar.myCar.calc
		process TrafficLight.TrafficLight.calc
		process TrafficLight.Flashlight.calc
		process Driver.DrivingDecision.calc
		process Driver.DecelerationControl.calc
	}
}
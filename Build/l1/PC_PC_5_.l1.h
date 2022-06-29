#ifndef ESDL_L1_PC_PC_5_
#define ESDL_L1_PC_PC_5_
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myCar_Automatic.l1.h"
#include "resources_CarMessages_Automatic.l1.h"
#include "TrafficLight_Flashlight_Automatic.l1.h"
#include "resources_TrafficLightMessages_Automatic.l1.h"
#include "Driver_CruiseSpeedControl_Automatic.l1.h"
#include "Driver_DrivingDecision_Automatic.l1.h"
#include "TrafficLight_TrafficLight_Automatic.l1.h"
#include "Driver_DecelerationControl_Automatic.l1.h"

/* local variables object structure */
struct L1_PC_PC_5__Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	struct L1_resources_CarMessages_Automatic_Obj* resources_CarMessages_Automatic;
	struct L1_Driver_CruiseSpeedControl_Automatic_Obj* Driver_CruiseSpeedControl_Automatic;
	struct L1_Driver_DecelerationControl_Automatic_Obj* Driver_DecelerationControl_Automatic;
	struct L1_Driver_DrivingDecision_Automatic_Obj* Driver_DrivingDecision_Automatic;
	struct L1_TrafficLight_Flashlight_Automatic_Obj* TrafficLight_Flashlight_Automatic;
	struct L1_TrafficLight_TrafficLight_Automatic_Obj* TrafficLight_TrafficLight_Automatic;
	struct L1_resources_TrafficLightMessages_Automatic_Obj* resources_TrafficLightMessages_Automatic;
	struct L1_myCar_myCar_Automatic_Obj* myCar_myCar_Automatic;
} L1_PC_PC_5__Class;

extern L1_PC_PC_5__Class L1_PC_PC_5__ClassObj;

/* public L1 init function of this component */
extern struct L1_PC_PC_5__Obj* initInstance_L1_PC_PC_5_(void);

#endif /* ESDL_L1_PC_PC_5_ */

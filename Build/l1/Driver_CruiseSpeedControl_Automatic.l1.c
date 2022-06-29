/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "Driver_CruiseSpeedControl_Automatic.l1.h"
#include "Driver_CruiseSpeedControl_Automatic_private.h"
#include "Driver_CruiseSpeedControl_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_Driver_CruiseSpeedControl_Automatic_Obj* L1_Driver_CruiseSpeedControl_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_Driver_CruiseSpeedControl_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_Driver_CruiseSpeedControl_Automatic_Class L1_Driver_CruiseSpeedControl_Automatic_ClassObj = {{1, {&L1_Driver_CruiseSpeedControl_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_Driver_CruiseSpeedControl_Automatic_Obj* initInstance_L1_Driver_CruiseSpeedControl_Automatic(void)
{
	struct L1_Driver_CruiseSpeedControl_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_Driver_CruiseSpeedControl_Automatic);
	L1_Instance->AirFriction = initInstance_charTable1Wrapper((uint32)&(AirFriction_VAL.xDist), sizeof(float32), (uint32)&(AirFriction_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->BrakePedal = initInstance_charTable1Wrapper((uint32)&(BrakePedal_VAL.xDist), sizeof(float32), (uint32)&(BrakePedal_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->brake = initInstance_scalarWrapper((uint32)&(brake_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->power = initInstance_scalarWrapper((uint32)&(power_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Driver_CruiseSpeedControl_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

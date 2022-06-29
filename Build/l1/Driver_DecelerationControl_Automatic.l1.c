/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "Driver_DecelerationControl_Automatic.l1.h"
#include "Driver_DecelerationControl_Automatic_private.h"
#include "Driver_DecelerationControl_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_Driver_DecelerationControl_Automatic_Obj* L1_Driver_DecelerationControl_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_Driver_DecelerationControl_Automatic_ClassHeader = {
	0, 0, 9, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_Driver_DecelerationControl_Automatic_Class L1_Driver_DecelerationControl_Automatic_ClassObj = {{1, {&L1_Driver_DecelerationControl_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_Driver_DecelerationControl_Automatic_Obj* initInstance_L1_Driver_DecelerationControl_Automatic(void)
{
	struct L1_Driver_DecelerationControl_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_Driver_DecelerationControl_Automatic);
	L1_Instance->AirFriction = initInstance_charTable1Wrapper((uint32)&(AirFriction_VAL.xDist), sizeof(float32), (uint32)&(AirFriction_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->BrakeMomentum = initInstance_charTable1Wrapper((uint32)&(BrakeMomentum_VAL.xDist), sizeof(float32), (uint32)&(BrakeMomentum_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->accBelowLimit = initInstance_scalarWrapper((uint32)&(accBelowLimit_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->accBelowLimitCalc = initInstance_scalarWrapper((uint32)&(accBelowLimitCalc_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->accBelowLimitReal = initInstance_scalarWrapper((uint32)&(accBelowLimitReal_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->accel = initInstance_scalarWrapper((uint32)&(accel_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->accelCalc = initInstance_scalarWrapper((uint32)&(accelCalc_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->carAccel = initInstance_scalarWrapper((uint32)&(carAccel_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->oldSpeed = initInstance_scalarWrapper((uint32)&(oldSpeed_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Driver_DecelerationControl_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

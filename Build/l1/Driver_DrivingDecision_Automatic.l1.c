/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "Driver_DrivingDecision_Automatic.l1.h"
#include "Driver_DrivingDecision_Automatic_private.h"
#include "Driver_DrivingDecision_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_Driver_DrivingDecision_Automatic_Obj* L1_Driver_DrivingDecision_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_Driver_DrivingDecision_Automatic_ClassHeader = {
	0, 0, 2, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_Driver_DrivingDecision_Automatic_Class L1_Driver_DrivingDecision_Automatic_ClassObj = {{1, {&L1_Driver_DrivingDecision_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_Driver_DrivingDecision_Automatic_Obj* initInstance_L1_Driver_DrivingDecision_Automatic(void)
{
	struct L1_Driver_DrivingDecision_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_Driver_DrivingDecision_Automatic);
	L1_Instance->anhalteweg = initInstance_scalarWrapper((uint32)&(anhalteweg_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->lastStateBreaking = initInstance_scalarWrapper((uint32)&(lastStateBreaking_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Driver_DrivingDecision_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

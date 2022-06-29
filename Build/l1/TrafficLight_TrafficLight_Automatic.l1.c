/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "TrafficLight_TrafficLight_Automatic.l1.h"
#include "TrafficLight_TrafficLight_Automatic_private.h"
#include "TrafficLight_TrafficLight_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_TrafficLight_TrafficLight_Automatic_Obj* L1_TrafficLight_TrafficLight_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_TrafficLight_TrafficLight_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_TrafficLight_TrafficLight_Automatic_Class L1_TrafficLight_TrafficLight_Automatic_ClassObj = {{1, {&L1_TrafficLight_TrafficLight_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_TrafficLight_TrafficLight_Automatic_Obj* initInstance_L1_TrafficLight_TrafficLight_Automatic(void)
{
	struct L1_TrafficLight_TrafficLight_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_TrafficLight_TrafficLight_Automatic);
	L1_Instance->StopWatch_instance = initInstance_L1_SystemLib_CounterTimer_StopWatch_Impl(&(StopWatch_instance_VAL));
	L1_Instance->green = initInstance_scalarWrapper((uint32)&(green_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->red = initInstance_scalarWrapper((uint32)&(red_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->yellow = initInstance_scalarWrapper((uint32)&(yellow_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_TrafficLight_TrafficLight_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

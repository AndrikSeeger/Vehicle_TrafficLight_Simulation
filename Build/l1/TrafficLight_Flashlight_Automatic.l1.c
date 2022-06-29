/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "TrafficLight_Flashlight_Automatic.l1.h"
#include "TrafficLight_Flashlight_Automatic_private.h"
#include "TrafficLight_Flashlight_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_TrafficLight_Flashlight_Automatic_Obj* L1_TrafficLight_Flashlight_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_TrafficLight_Flashlight_Automatic_ClassHeader = {
	0, 0, 2, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_TrafficLight_Flashlight_Automatic_Class L1_TrafficLight_Flashlight_Automatic_ClassObj = {{1, {&L1_TrafficLight_Flashlight_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_TrafficLight_Flashlight_Automatic_Obj* initInstance_L1_TrafficLight_Flashlight_Automatic(void)
{
	struct L1_TrafficLight_Flashlight_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_TrafficLight_Flashlight_Automatic);
	L1_Instance->Rising_instance = initInstance_L1_RisingEdge_Rising_Automatic(&(Rising_instance_VAL));
	L1_Instance->Timer_instance = initInstance_L1_SystemLib_CounterTimer_Timer_Impl(&(Timer_instance_VAL));
	L1_TrafficLight_Flashlight_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

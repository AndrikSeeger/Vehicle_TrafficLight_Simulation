/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "SystemLib_CounterTimer_Timer_Impl.l1.h"
#include "SystemLib_CounterTimer_Timer_Impl_private.h"
#include "TrafficLight_Flashlight_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_SystemLib_CounterTimer_Timer_Impl_Obj* L1_SystemLib_CounterTimer_Timer_ImplInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_SystemLib_CounterTimer_Timer_Impl_ClassHeader = {
	0, 0, 1, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_SystemLib_CounterTimer_Timer_Impl_Class L1_SystemLib_CounterTimer_Timer_Impl_ClassObj = {{1, {&L1_SystemLib_CounterTimer_Timer_Impl_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_SystemLib_CounterTimer_Timer_Impl_Obj* initInstance_L1_SystemLib_CounterTimer_Timer_Impl(const struct SystemLib_CounterTimer_Timer_Impl* self)
{
	struct L1_SystemLib_CounterTimer_Timer_Impl_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_SystemLib_CounterTimer_Timer_Impl);
	L1_Instance->timeCounter = initInstance_scalarWrapper((uint32)&(timeCounter_VAL), sizeof(float64), ASD_VARIABLE);
	L1_SystemLib_CounterTimer_Timer_ImplInstance = L1_Instance;
	return L1_Instance;
}

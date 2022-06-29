/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "RisingEdge_Rising_Automatic.l1.h"
#include "RisingEdge_Rising_Automatic_private.h"
#include "TrafficLight_Flashlight_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_RisingEdge_Rising_Automatic_Obj* L1_RisingEdge_Rising_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_RisingEdge_Rising_Automatic_ClassHeader = {
	0, 0, 2, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_RisingEdge_Rising_Automatic_Class L1_RisingEdge_Rising_Automatic_ClassObj = {{1, {&L1_RisingEdge_Rising_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_RisingEdge_Rising_Automatic_Obj* initInstance_L1_RisingEdge_Rising_Automatic(const struct RisingEdge_Rising_Automatic* self)
{
	struct L1_RisingEdge_Rising_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_RisingEdge_Rising_Automatic);
	L1_Instance->oldSignal = initInstance_scalarWrapper((uint32)&(oldSignal_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->returnValue = initInstance_scalarWrapper((uint32)&(returnValue_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_RisingEdge_Rising_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

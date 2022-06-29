/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_myCar_Automatic.l1.h"
#include "myCar_myCar_Automatic_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_myCar_Automatic_Obj* L1_myCar_myCar_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_myCar_Automatic_ClassHeader = {
	0, 0, 3, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_myCar_Automatic_Class L1_myCar_myCar_Automatic_ClassObj = {{1, {&L1_myCar_myCar_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_myCar_Automatic_Obj* initInstance_L1_myCar_myCar_Automatic(void)
{
	struct L1_myCar_myCar_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_myCar_Automatic);
	L1_Instance->myVehicle = initInstance_L1_myCar_myDrive_3_Automatic(&(myVehicle_VAL));
	L1_Instance->g = initInstance_scalarWrapper((uint32)&(g_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->time = initInstance_scalarWrapper((uint32)&(time_VAL), sizeof(float32), ASD_VARIABLE);
	L1_myCar_myCar_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

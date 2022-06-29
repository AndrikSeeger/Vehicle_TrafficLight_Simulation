/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "resources_CarMessages_Automatic.l1.h"
#include "resources_CarMessages_Automatic_private.h"
#include "resources_CarMessages_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_resources_CarMessages_Automatic_Obj* L1_resources_CarMessages_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_resources_CarMessages_Automatic_ClassHeader = {
	0, 0, 0, 9, &_ObjectMethodList, &_ClassMethodList
};
L1_resources_CarMessages_Automatic_Class L1_resources_CarMessages_Automatic_ClassObj = {{1, {&L1_resources_CarMessages_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_resources_CarMessages_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_resources_CarMessages_Automatic (L1_resources_CarMessages_Automatic_Class* _ASCET_class)
{
	_ASCET_class->bearing = initInstance_scalarWrapper((uint32)&(resources_CarMessages_bearing_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->brake = initInstance_scalarWrapper((uint32)&(resources_CarMessages_brake_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->dist = initInstance_scalarWrapper((uint32)&(resources_CarMessages_dist_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->power = initInstance_scalarWrapper((uint32)&(resources_CarMessages_power_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->steering = initInstance_scalarWrapper((uint32)&(resources_CarMessages_steering_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->theorAccel = initInstance_scalarWrapper((uint32)&(resources_CarMessages_theorAccel_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->v = initInstance_scalarWrapper((uint32)&(resources_CarMessages_v_VAL), sizeof(uint16), ASD_VARIABLE);
	_ASCET_class->x = initInstance_scalarWrapper((uint32)&(resources_CarMessages_x_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->y = initInstance_scalarWrapper((uint32)&(resources_CarMessages_y_VAL), sizeof(float32), ASD_VARIABLE);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_resources_CarMessages_Automatic_Obj* initInstance_L1_resources_CarMessages_Automatic(void)
{
	struct L1_resources_CarMessages_Automatic_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_resources_CarMessages_Automatic) {
		initialized_resources_CarMessages_Automatic = true;
		initClass_L1_resources_CarMessages_Automatic(&(L1_resources_CarMessages_Automatic_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_resources_CarMessages_Automatic);
	L1_resources_CarMessages_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

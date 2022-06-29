/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "PC_PC_5_.l1.h"
#include "PC_PC_5_.init.h"
#include "programId_PC_PC_5_.h"

/* L1 protocol function to get program ID */
static uint8 *_L1_getPid (ASDObject *self, uint8 *_ASCET_data)
{
	uint8 defineFlag = true;
	uint32 pid = UNIQUE_PROGRAM_ID;
	addScalar (_ASCET_data, (uint8 *)&pid, sizeof(uint32));
	addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
	return (_ASCET_data);
}

/* L1 protocol function to non-volitile data ID */
static uint8 *_L1_getNVid(ASDObject *self, uint8 *_ASCET_data)
{
	uint8 defineFlag = true;
	uint32 nvid = 0;
	addScalar (_ASCET_data, (uint8 *)&nvid, sizeof(nvid));
	addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
	return (_ASCET_data);
}

static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	_L1_getPid,
	_L1_getNVid
};

/* for singleton components create an L1 instance here */
static struct L1_PC_PC_5__Obj* L1_PC_PC_5_Instance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_PC_PC_5__ClassHeader = {
	0, 2, 0, 8, &_ObjectMethodList, &_ClassMethodList
};
L1_PC_PC_5__Class L1_PC_PC_5__ClassObj = {{1, {&L1_PC_PC_5__ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_PC_PC_5_ = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_PC_PC_5_ (L1_PC_PC_5__Class* _ASCET_class)
{
	_ASCET_class->resources_CarMessages_Automatic = initInstance_L1_resources_CarMessages_Automatic();
	_ASCET_class->Driver_CruiseSpeedControl_Automatic = initInstance_L1_Driver_CruiseSpeedControl_Automatic();
	_ASCET_class->Driver_DecelerationControl_Automatic = initInstance_L1_Driver_DecelerationControl_Automatic();
	_ASCET_class->Driver_DrivingDecision_Automatic = initInstance_L1_Driver_DrivingDecision_Automatic();
	_ASCET_class->TrafficLight_Flashlight_Automatic = initInstance_L1_TrafficLight_Flashlight_Automatic();
	_ASCET_class->TrafficLight_TrafficLight_Automatic = initInstance_L1_TrafficLight_TrafficLight_Automatic();
	_ASCET_class->resources_TrafficLightMessages_Automatic = initInstance_L1_resources_TrafficLightMessages_Automatic();
	_ASCET_class->myCar_myCar_Automatic = initInstance_L1_myCar_myCar_Automatic();
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_PC_PC_5__Obj* initInstance_L1_PC_PC_5_(void)
{
	struct L1_PC_PC_5__Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_PC_PC_5_) {
		initialized_PC_PC_5_ = true;
		initClass_L1_PC_PC_5_(&(L1_PC_PC_5__ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_PC_PC_5_);
	L1_PC_PC_5_Instance = L1_Instance;
	return L1_Instance;
}

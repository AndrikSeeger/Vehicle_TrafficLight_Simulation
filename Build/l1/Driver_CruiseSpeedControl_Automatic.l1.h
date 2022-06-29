#ifndef ESDL_L1_DRIVER_CRUISESPEEDCONTROL_AUTOMATIC
#define ESDL_L1_DRIVER_CRUISESPEEDCONTROL_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "Driver_CruiseSpeedControl_Automatic.h"

/* local variables object structure */
struct L1_Driver_CruiseSpeedControl_Automatic_Obj {
	ASDObjectHeader objectHeader;
	charTable1Wrapper_Obj* AirFriction;
	charTable1Wrapper_Obj* BrakePedal;
	scalarWrapper_Obj* brake;
	scalarWrapper_Obj* power;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_Driver_CruiseSpeedControl_Automatic_Class;

extern L1_Driver_CruiseSpeedControl_Automatic_Class L1_Driver_CruiseSpeedControl_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_Driver_CruiseSpeedControl_Automatic_Obj* initInstance_L1_Driver_CruiseSpeedControl_Automatic(void);

#endif /* ESDL_L1_DRIVER_CRUISESPEEDCONTROL_AUTOMATIC */

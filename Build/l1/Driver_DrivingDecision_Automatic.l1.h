#ifndef ESDL_L1_DRIVER_DRIVINGDECISION_AUTOMATIC
#define ESDL_L1_DRIVER_DRIVINGDECISION_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "Driver_DrivingDecision_Automatic.h"

/* local variables object structure */
struct L1_Driver_DrivingDecision_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* anhalteweg;
	scalarWrapper_Obj* lastStateBreaking;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_Driver_DrivingDecision_Automatic_Class;

extern L1_Driver_DrivingDecision_Automatic_Class L1_Driver_DrivingDecision_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_Driver_DrivingDecision_Automatic_Obj* initInstance_L1_Driver_DrivingDecision_Automatic(void);

#endif /* ESDL_L1_DRIVER_DRIVINGDECISION_AUTOMATIC */

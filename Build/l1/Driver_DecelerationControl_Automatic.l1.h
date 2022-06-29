#ifndef ESDL_L1_DRIVER_DECELERATIONCONTROL_AUTOMATIC
#define ESDL_L1_DRIVER_DECELERATIONCONTROL_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "Driver_DecelerationControl_Automatic.h"

/* local variables object structure */
struct L1_Driver_DecelerationControl_Automatic_Obj {
	ASDObjectHeader objectHeader;
	charTable1Wrapper_Obj* AirFriction;
	charTable1Wrapper_Obj* BrakeMomentum;
	scalarWrapper_Obj* accBelowLimit;
	scalarWrapper_Obj* accBelowLimitCalc;
	scalarWrapper_Obj* accBelowLimitReal;
	scalarWrapper_Obj* accel;
	scalarWrapper_Obj* accelCalc;
	scalarWrapper_Obj* carAccel;
	scalarWrapper_Obj* oldSpeed;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_Driver_DecelerationControl_Automatic_Class;

extern L1_Driver_DecelerationControl_Automatic_Class L1_Driver_DecelerationControl_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_Driver_DecelerationControl_Automatic_Obj* initInstance_L1_Driver_DecelerationControl_Automatic(void);

#endif /* ESDL_L1_DRIVER_DECELERATIONCONTROL_AUTOMATIC */

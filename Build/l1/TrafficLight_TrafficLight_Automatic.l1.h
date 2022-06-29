#ifndef ESDL_L1_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC
#define ESDL_L1_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "TrafficLight_TrafficLight_Automatic.h"
#include "SystemLib_CounterTimer_StopWatch_Impl.l1.h"

/* local variables object structure */
struct L1_TrafficLight_TrafficLight_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_SystemLib_CounterTimer_StopWatch_Impl_Obj* StopWatch_instance;
	scalarWrapper_Obj* green;
	scalarWrapper_Obj* red;
	scalarWrapper_Obj* yellow;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_TrafficLight_TrafficLight_Automatic_Class;

extern L1_TrafficLight_TrafficLight_Automatic_Class L1_TrafficLight_TrafficLight_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_TrafficLight_TrafficLight_Automatic_Obj* initInstance_L1_TrafficLight_TrafficLight_Automatic(void);

#endif /* ESDL_L1_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC */

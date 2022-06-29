#ifndef ESDL_L1_TRAFFICLIGHT_FLASHLIGHT_AUTOMATIC
#define ESDL_L1_TRAFFICLIGHT_FLASHLIGHT_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "TrafficLight_Flashlight_Automatic.h"
#include "RisingEdge_Rising_Automatic.l1.h"
#include "SystemLib_CounterTimer_Timer_Impl.l1.h"

/* local variables object structure */
struct L1_TrafficLight_Flashlight_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_RisingEdge_Rising_Automatic_Obj* Rising_instance;
	struct L1_SystemLib_CounterTimer_Timer_Impl_Obj* Timer_instance;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_TrafficLight_Flashlight_Automatic_Class;

extern L1_TrafficLight_Flashlight_Automatic_Class L1_TrafficLight_Flashlight_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_TrafficLight_Flashlight_Automatic_Obj* initInstance_L1_TrafficLight_Flashlight_Automatic(void);

#endif /* ESDL_L1_TRAFFICLIGHT_FLASHLIGHT_AUTOMATIC */

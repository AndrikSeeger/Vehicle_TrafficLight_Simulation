#ifndef ESDL_L1_SYSTEMLIB_COUNTERTIMER_TIMER_IMPL
#define ESDL_L1_SYSTEMLIB_COUNTERTIMER_TIMER_IMPL
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "SystemLib_CounterTimer_Timer_Impl.h"

/* local variables object structure */
struct L1_SystemLib_CounterTimer_Timer_Impl_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* timeCounter;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_SystemLib_CounterTimer_Timer_Impl_Class;

extern L1_SystemLib_CounterTimer_Timer_Impl_Class L1_SystemLib_CounterTimer_Timer_Impl_ClassObj;

/* public L1 init function of this component */
extern struct L1_SystemLib_CounterTimer_Timer_Impl_Obj* initInstance_L1_SystemLib_CounterTimer_Timer_Impl(const struct SystemLib_CounterTimer_Timer_Impl* self);

#endif /* ESDL_L1_SYSTEMLIB_COUNTERTIMER_TIMER_IMPL */

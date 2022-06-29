#ifndef ESDL_L1_RISINGEDGE_RISING_AUTOMATIC
#define ESDL_L1_RISINGEDGE_RISING_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "RisingEdge_Rising_Automatic.h"

/* local variables object structure */
struct L1_RisingEdge_Rising_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* oldSignal;
	scalarWrapper_Obj* returnValue;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_RisingEdge_Rising_Automatic_Class;

extern L1_RisingEdge_Rising_Automatic_Class L1_RisingEdge_Rising_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_RisingEdge_Rising_Automatic_Obj* initInstance_L1_RisingEdge_Rising_Automatic(const struct RisingEdge_Rising_Automatic* self);

#endif /* ESDL_L1_RISINGEDGE_RISING_AUTOMATIC */

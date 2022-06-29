#ifndef ESDL_L1_RESOURCES_CARMESSAGES_AUTOMATIC
#define ESDL_L1_RESOURCES_CARMESSAGES_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "resources_CarMessages_Automatic.h"

/* local variables object structure */
struct L1_resources_CarMessages_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* bearing;
	scalarWrapper_Obj* brake;
	scalarWrapper_Obj* dist;
	scalarWrapper_Obj* power;
	scalarWrapper_Obj* steering;
	scalarWrapper_Obj* theorAccel;
	scalarWrapper_Obj* v;
	scalarWrapper_Obj* x;
	scalarWrapper_Obj* y;
} L1_resources_CarMessages_Automatic_Class;

extern L1_resources_CarMessages_Automatic_Class L1_resources_CarMessages_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_resources_CarMessages_Automatic_Obj* initInstance_L1_resources_CarMessages_Automatic(void);

#endif /* ESDL_L1_RESOURCES_CARMESSAGES_AUTOMATIC */

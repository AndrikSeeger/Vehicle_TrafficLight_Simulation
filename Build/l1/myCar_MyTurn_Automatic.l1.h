#ifndef ESDL_L1_MYCAR_MYTURN_AUTOMATIC
#define ESDL_L1_MYCAR_MYTURN_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_MyTurn_Automatic.h"

/* local variables object structure */
struct L1_myCar_MyTurn_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* D;
	scalarWrapper_Obj* bearing;
	scalarWrapper_Obj* dpi;
	scalarWrapper_Obj* pi;
	scalarWrapper_Obj* x;
	scalarWrapper_Obj* y;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_MyTurn_Automatic_Class;

extern L1_myCar_MyTurn_Automatic_Class L1_myCar_MyTurn_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_MyTurn_Automatic_Obj* initInstance_L1_myCar_MyTurn_Automatic(const struct myCar_MyTurn_Automatic* self);

#endif /* ESDL_L1_MYCAR_MYTURN_AUTOMATIC */

#ifndef ESDL_L1_MYCAR_MYCAR_AUTOMATIC
#define ESDL_L1_MYCAR_MYCAR_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myCar_Automatic.h"
#include "myCar_myDrive_3_Automatic.l1.h"

/* local variables object structure */
struct L1_myCar_myCar_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_myCar_myDrive_3_Automatic_Obj* myVehicle;
	scalarWrapper_Obj* g;
	scalarWrapper_Obj* time;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_myCar_Automatic_Class;

extern L1_myCar_myCar_Automatic_Class L1_myCar_myCar_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_myCar_Automatic_Obj* initInstance_L1_myCar_myCar_Automatic(void);

#endif /* ESDL_L1_MYCAR_MYCAR_AUTOMATIC */

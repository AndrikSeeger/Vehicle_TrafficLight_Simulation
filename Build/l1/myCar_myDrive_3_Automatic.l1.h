#ifndef ESDL_L1_MYCAR_MYDRIVE_3_AUTOMATIC
#define ESDL_L1_MYCAR_MYDRIVE_3_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myDrive_3_Automatic.h"
#include "myCar_MyTurn_Automatic.l1.h"

/* local variables object structure */
struct L1_myCar_myDrive_3_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_myCar_MyTurn_Automatic_Obj* MyTurn_instance;
	charTable1Wrapper_Obj* AirFriction;
	charTable1Wrapper_Obj* BrakeMomentum;
	columnDirCharTable2Wrapper_Obj* EngineMomentum;
	charTable1Wrapper_Obj* Landscape;
	scalarWrapper_Obj* TrackSize;
	scalarWrapper_Obj* bearing;
	scalarWrapper_Obj* dh;
	scalarWrapper_Obj* dist;
	scalarWrapper_Obj* ds;
	scalarWrapper_Obj* h;
	scalarWrapper_Obj* momentum;
	scalarWrapper_Obj* theorAccel;
	scalarWrapper_Obj* v;
	scalarWrapper_Obj* v_2;
	scalarWrapper_Obj* v_3;
	scalarWrapper_Obj* x;
	scalarWrapper_Obj* y;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_myDrive_3_Automatic_Class;

extern L1_myCar_myDrive_3_Automatic_Class L1_myCar_myDrive_3_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_myDrive_3_Automatic_Obj* initInstance_L1_myCar_myDrive_3_Automatic(const struct myCar_myDrive_3_Automatic* self);

#endif /* ESDL_L1_MYCAR_MYDRIVE_3_AUTOMATIC */

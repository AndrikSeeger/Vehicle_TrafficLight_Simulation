/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_myDrive_3_Automatic.l1.h"
#include "myCar_myDrive_3_Automatic_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_myDrive_3_Automatic_Obj* L1_myCar_myDrive_3_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_myDrive_3_Automatic_ClassHeader = {
	0, 0, 18, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_myDrive_3_Automatic_Class L1_myCar_myDrive_3_Automatic_ClassObj = {{1, {&L1_myCar_myDrive_3_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_myDrive_3_Automatic_Obj* initInstance_L1_myCar_myDrive_3_Automatic(const struct myCar_myDrive_3_Automatic* self)
{
	struct L1_myCar_myDrive_3_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_myDrive_3_Automatic);
	L1_Instance->MyTurn_instance = initInstance_L1_myCar_MyTurn_Automatic(&(MyTurn_instance_VAL));
	L1_Instance->AirFriction = initInstance_charTable1Wrapper((uint32)&(AirFriction_VAL.xDist), sizeof(float32), (uint32)&(AirFriction_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->BrakeMomentum = initInstance_charTable1Wrapper((uint32)&(BrakeMomentum_VAL.xDist), sizeof(float32), (uint32)&(BrakeMomentum_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->EngineMomentum = initInstance_columnDirCharTable2Wrapper((uint32)&(EngineMomentum_VAL.xDist), sizeof(float32), (uint32)&(EngineMomentum_VAL.yDist), sizeof(float32), (uint32)&(EngineMomentum_VAL.values), sizeof(float32), /* dimX */6, /* dimY */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->Landscape = initInstance_charTable1Wrapper((uint32)&(Landscape_VAL.xDist), sizeof(float32), (uint32)&(Landscape_VAL.values), sizeof(float32), /* dim */128, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->TrackSize = initInstance_scalarWrapper((uint32)&(TrackSize_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->bearing = initInstance_scalarWrapper((uint32)&(bearing_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->dh = initInstance_scalarWrapper((uint32)&(dh_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->dist = initInstance_scalarWrapper((uint32)&(dist_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->ds = initInstance_scalarWrapper((uint32)&(ds_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->h = initInstance_scalarWrapper((uint32)&(h_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->momentum = initInstance_scalarWrapper((uint32)&(momentum_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->theorAccel = initInstance_scalarWrapper((uint32)&(theorAccel_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->v = initInstance_scalarWrapper((uint32)&(v_VAL), sizeof(uint16), ASD_VARIABLE);
	L1_Instance->v_2 = initInstance_scalarWrapper((uint32)&(v_2_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->v_3 = initInstance_scalarWrapper((uint32)&(v_3_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->x = initInstance_scalarWrapper((uint32)&(x_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->y = initInstance_scalarWrapper((uint32)&(y_VAL), sizeof(float32), ASD_VARIABLE);
	L1_myCar_myDrive_3_AutomaticInstance = L1_Instance;
	return L1_Instance;
}

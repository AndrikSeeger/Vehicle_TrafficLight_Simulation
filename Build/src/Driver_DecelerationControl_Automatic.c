/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................Driver.DecelerationControl
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "Driver_DecelerationControl_Automatic.h"
#include "PC_PC_5__Automatic.h"
#include "resources_CarMessages_Automatic.h"
#include "ESDL_Linear_Interpolation.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'Driver_DecelerationControl_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'Driver_DecelerationControl'
 * data set:.....................................'DRIVER_DECELERATIONCONTROL_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct Driver_DecelerationControl_Automatic_CAL_MEM_SUBSTRUCT Driver_DecelerationControl_CAL_MEM = {
   /* struct element:'Driver_DecelerationControl_CAL_MEM.AirFriction' (modeled as:'AirFriction.Driver_DecelerationControl') */
   {
      6U,
      {
         0.0F, 30.0F, 60.0F, 90.0F, 120.0F, 150.0F
      },
      {
         0.0F, -0.1F, -0.2F, -0.4F, -0.8F, -1.6F
      }
   },
   /* struct element:'Driver_DecelerationControl_CAL_MEM.BrakeMomentum' (modeled as:'BrakeMomentum.Driver_DecelerationControl') */
   {
      6U,
      {
         0.0F, 1.0F, 40.0F, 60.0F, 80.0F, 100.0F
      },
      {
         0.0F, 0.0F, -1.0F, -2.0F, -3.0F, -4.0F
      }
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'Driver_DecelerationControl_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'Driver_DecelerationControl_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'Driver_DecelerationControl'
 * data set:.....................................'DRIVER_DECELERATIONCONTROL_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct Driver_DecelerationControl_Automatic_RAM_SUBSTRUCT Driver_DecelerationControl_RAM = {
   /* struct element:'Driver_DecelerationControl_RAM.accel' (modeled as:'accel.Driver_DecelerationControl') */
   0.0F,
   /* struct element:'Driver_DecelerationControl_RAM.accelCalc' (modeled as:'accelCalc.Driver_DecelerationControl') */
   0.0F,
   /* struct element:'Driver_DecelerationControl_RAM.carAccel' (modeled as:'carAccel.Driver_DecelerationControl') */
   0.0F,
   /* struct element:'Driver_DecelerationControl_RAM.oldSpeed' (modeled as:'oldSpeed.Driver_DecelerationControl') */
   0.0F,
   /* struct element:'Driver_DecelerationControl_RAM.accBelowLimit' (modeled as:'accBelowLimit.Driver_DecelerationControl') */
   false,
   /* struct element:'Driver_DecelerationControl_RAM.accBelowLimitCalc' (modeled as:'accBelowLimitCalc.Driver_DecelerationControl') */
   false,
   /* struct element:'Driver_DecelerationControl_RAM.accBelowLimitReal' (modeled as:'accBelowLimitReal.Driver_DecelerationControl') */
   false
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'Driver_DecelerationControl_RAM'
 ******************************************************************************/

/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'Driver_DecelerationControl'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/





#define accBelowLimit_VAL (Driver_DecelerationControl_RAM.accBelowLimit)
#define accBelowLimitCalc_VAL (Driver_DecelerationControl_RAM.accBelowLimitCalc)
#define accBelowLimitReal_VAL (Driver_DecelerationControl_RAM.accBelowLimitReal)
#define accel_VAL (Driver_DecelerationControl_RAM.accel)
#define accelCalc_VAL (Driver_DecelerationControl_RAM.accelCalc)
#define AirFriction_REF (&(Driver_DecelerationControl_CAL_MEM.AirFriction))
#define BrakeMomentum_REF (&(Driver_DecelerationControl_CAL_MEM.BrakeMomentum))
#define carAccel_VAL (Driver_DecelerationControl_RAM.carAccel)
#define dT_VAL (ASD_DT_SCALED)
#define oldSpeed_VAL (Driver_DecelerationControl_RAM.oldSpeed)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'Driver_DecelerationControl_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void Driver_DecelerationControl_Automatic_calc (void)
{
   /* temp. variables */
   float32 _t1real32;
   float32 _t2real32;

   /* define local message copies */
   float32 resources_CarMessages_brake__Driver_DecelerationControl_Automatic_calc;
   float32 resources_CarMessages_theorAccel__Driver_DecelerationControl_Automatic_calc;
   uint16 resources_CarMessages_v__Driver_DecelerationControl_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      resources_CarMessages_brake__Driver_DecelerationControl_Automatic_calc = resources_CarMessages_brake;
      resources_CarMessages_theorAccel__Driver_DecelerationControl_Automatic_calc = resources_CarMessages_theorAccel;
      resources_CarMessages_v__Driver_DecelerationControl_Automatic_calc = resources_CarMessages_v;
      EnableAllInterrupts();
   }
   _t1real32
      = (float32)resources_CarMessages_v__Driver_DecelerationControl_Automatic_calc * 0.01F;
   _t2real32 = _t1real32 - oldSpeed_VAL;
   accel_VAL
      = (((dT_VAL == 0.0F) ? _t2real32 : (_t2real32 / dT_VAL))) * 2.77777777777778e-1F;
   oldSpeed_VAL = _t1real32;
   accBelowLimit_VAL = accel_VAL >= DRIVER_DECELERATIONCONTROL_AUTOMATIC_LIMIT;
   accelCalc_VAL
      = ESDL_Linear_CharTable1_getAt_r32r32((AirFriction_REF)->xSize, (AirFriction_REF)->xDist, (AirFriction_REF)->values, _t1real32) + ESDL_Linear_CharTable1_getAt_r32r32((BrakeMomentum_REF)->xSize, (BrakeMomentum_REF)->xDist, (BrakeMomentum_REF)->values, resources_CarMessages_brake__Driver_DecelerationControl_Automatic_calc);
   accBelowLimitCalc_VAL = accelCalc_VAL >= DRIVER_DECELERATIONCONTROL_AUTOMATIC_LIMIT;
   if (resources_CarMessages_v__Driver_DecelerationControl_Automatic_calc > 0U)
   {
      carAccel_VAL
         = resources_CarMessages_theorAccel__Driver_DecelerationControl_Automatic_calc;
   }
   else
   {
      carAccel_VAL = 0.0F;
   } /* end if */
   accBelowLimitReal_VAL = carAccel_VAL >= DRIVER_DECELERATIONCONTROL_AUTOMATIC_LIMIT;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'Driver_DecelerationControl_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



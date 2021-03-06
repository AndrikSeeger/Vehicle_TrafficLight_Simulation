/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................TrafficLight.TrafficLight
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

#include "TrafficLight_TrafficLight_Automatic.h"
#include "resources_CarMessages_Automatic.h"
#include "resources_TrafficLightMessages_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'TrafficLight_TrafficLight_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'TrafficLight_TrafficLight'
 * data set:.....................................'TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct TrafficLight_TrafficLight_Automatic_RAM_SUBSTRUCT TrafficLight_TrafficLight_RAM = {
   /* struct element:'TrafficLight_TrafficLight_RAM.green' (modeled as:'green.TrafficLight_TrafficLight') */
   false,
   /* struct element:'TrafficLight_TrafficLight_RAM.red' (modeled as:'red.TrafficLight_TrafficLight') */
   false,
   /* struct element:'TrafficLight_TrafficLight_RAM.yellow' (modeled as:'yellow.TrafficLight_TrafficLight') */
   false,
   /* substruct: TrafficLight_TrafficLight_RAM.StopWatch_instance (modeled as:'StopWatch_instance.TrafficLight_TrafficLight') */
   {
      /* struct element:'TrafficLight_TrafficLight_RAM.StopWatch_instance.timeCounter' (modeled as:'timeCounter.StopWatch_instance.TrafficLight_TrafficLight') */
      0.0
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'TrafficLight_TrafficLight_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'TrafficLight_TrafficLight'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'TrafficLight_TrafficLight'
 * data set:.....................................'TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct TrafficLight_TrafficLight_Automatic TrafficLight_TrafficLight = {
   /* substruct: TrafficLight_TrafficLight.StopWatch_instance (modeled as:'StopWatch_instance.TrafficLight_TrafficLight') */
   {
      /* type descriptor pointer 'SystemLib_CounterTimer_StopWatch_Impl_RAM' for memory class substruct for 'RAM' */
      &TrafficLight_TrafficLight_RAM.StopWatch_instance
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'TrafficLight_TrafficLight'
 ******************************************************************************/





#define green_VAL (TrafficLight_TrafficLight_RAM.green)
#define red_VAL (TrafficLight_TrafficLight_RAM.red)
#define StopWatch_instance_REF (&(TrafficLight_TrafficLight.StopWatch_instance))
#define yellow_VAL (TrafficLight_TrafficLight_RAM.yellow)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'TrafficLight_TrafficLight_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void TrafficLight_TrafficLight_Automatic_calc (void)
{
   /* define local message copies */
   float32 resources_CarMessages_dist__TrafficLight_TrafficLight_Automatic_calc;
   boolean resources_TrafficLightMessages_greenLight__TrafficLight_TrafficLight_Automatic_calc;
   float32 resources_TrafficLightMessages_proximity__TrafficLight_TrafficLight_Automatic_calc;
   boolean resources_TrafficLightMessages_redLight__TrafficLight_TrafficLight_Automatic_calc;
   boolean resources_TrafficLightMessages_yellowLight__TrafficLight_TrafficLight_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      resources_CarMessages_dist__TrafficLight_TrafficLight_Automatic_calc = resources_CarMessages_dist;
      resources_TrafficLightMessages_greenLight__TrafficLight_TrafficLight_Automatic_calc = resources_TrafficLightMessages_greenLight;
      resources_TrafficLightMessages_proximity__TrafficLight_TrafficLight_Automatic_calc = resources_TrafficLightMessages_proximity;
      resources_TrafficLightMessages_redLight__TrafficLight_TrafficLight_Automatic_calc = resources_TrafficLightMessages_redLight;
      resources_TrafficLightMessages_yellowLight__TrafficLight_TrafficLight_Automatic_calc = resources_TrafficLightMessages_yellowLight;
      EnableAllInterrupts();
   }
   yellow_VAL = false;
   red_VAL = false;
   green_VAL = false;
   if (SystemLib_CounterTimer_StopWatch_Impl_value(StopWatch_instance_REF) < 3.0)
   {
      yellow_VAL = true;
   }
   else
   {
      if (SystemLib_CounterTimer_StopWatch_Impl_value(StopWatch_instance_REF) < 42.0)
      {
         red_VAL = true;
      }
      else
      {
         if (SystemLib_CounterTimer_StopWatch_Impl_value(StopWatch_instance_REF) < 44.0)
         {
            yellow_VAL = true;
            red_VAL = true;
         }
         else
         {
            if (SystemLib_CounterTimer_StopWatch_Impl_value(StopWatch_instance_REF) < 60.0)
            {
               green_VAL = true;
            } /* end if */
         } /* end if */
      } /* end if */
   } /* end if */
   SystemLib_CounterTimer_StopWatch_Impl_compute(StopWatch_instance_REF);
   if (SystemLib_CounterTimer_StopWatch_Impl_value(StopWatch_instance_REF) >= 60.0)
   {
      SystemLib_CounterTimer_StopWatch_Impl_reset(StopWatch_instance_REF);
   } /* end if */
   resources_TrafficLightMessages_greenLight__TrafficLight_TrafficLight_Automatic_calc = green_VAL;
   resources_TrafficLightMessages_yellowLight__TrafficLight_TrafficLight_Automatic_calc = yellow_VAL;
   resources_TrafficLightMessages_redLight__TrafficLight_TrafficLight_Automatic_calc = red_VAL;
   if (TrafficLight_TrafficLightPositionModel_Automatic_proximity(resources_CarMessages_dist__TrafficLight_TrafficLight_Automatic_calc) <= 100.0F)
   {
      resources_TrafficLightMessages_proximity__TrafficLight_TrafficLight_Automatic_calc
         = TrafficLight_TrafficLightPositionModel_Automatic_proximity(resources_CarMessages_dist__TrafficLight_TrafficLight_Automatic_calc);
   }
   else
   {
      resources_TrafficLightMessages_proximity__TrafficLight_TrafficLight_Automatic_calc = 99999.0F;
   } /* end if */
   /* send messages implicitly */
   {
      DisableAllInterrupts();
      resources_TrafficLightMessages_greenLight = resources_TrafficLightMessages_greenLight__TrafficLight_TrafficLight_Automatic_calc;
      resources_TrafficLightMessages_proximity = resources_TrafficLightMessages_proximity__TrafficLight_TrafficLight_Automatic_calc;
      resources_TrafficLightMessages_redLight = resources_TrafficLightMessages_redLight__TrafficLight_TrafficLight_Automatic_calc;
      resources_TrafficLightMessages_yellowLight = resources_TrafficLightMessages_yellowLight__TrafficLight_TrafficLight_Automatic_calc;
      EnableAllInterrupts();
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'TrafficLight_TrafficLight_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/




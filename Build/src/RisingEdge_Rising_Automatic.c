/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................RisingEdge.Rising
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "RisingEdge_Rising_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define oldSignal_VAL (self->RisingEdge_Rising_Automatic_RAM->oldSignal)
#define returnValue_VAL (self->RisingEdge_Rising_Automatic_RAM->returnValue)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'RisingEdge_Rising_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

boolean RisingEdge_Rising_Automatic_calc (
               const struct RisingEdge_Rising_Automatic * self,
   /* IN    */ const float32                              arg
   )
{
   returnValue_VAL = arg > oldSignal_VAL;
   oldSignal_VAL = arg;
   return returnValue_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'RisingEdge_Rising_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/




/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................TrafficLight.TrafficLight
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC_H_
#define _ASD_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "SystemLib_CounterTimer_StopWatch_Impl.h"
#include "TrafficLight_TrafficLightPositionModel_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'TrafficLight_TrafficLight_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct TrafficLight_TrafficLight_Automatic_RAM_SUBSTRUCT {
   boolean green;
   boolean red;
   boolean yellow;
   struct SystemLib_CounterTimer_StopWatch_Impl_RAM_SUBSTRUCT StopWatch_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'TrafficLight_TrafficLight_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'TrafficLight_TrafficLight_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct TrafficLight_TrafficLight_Automatic {
   struct SystemLib_CounterTimer_StopWatch_Impl StopWatch_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'TrafficLight_TrafficLight_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ........TrafficLight_TrafficLight_Automatic */
#define _TrafficLight_TrafficLight_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'TrafficLight_TrafficLight_RAM' */
/* containing 'RAM' memory class tree */
extern struct TrafficLight_TrafficLight_Automatic_RAM_SUBSTRUCT TrafficLight_TrafficLight_RAM;

/* forward declaration of component variable 'TrafficLight_TrafficLight' */
/* containing 'ROM' memory class tree */
extern const struct TrafficLight_TrafficLight_Automatic TrafficLight_TrafficLight;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module TrafficLight_TrafficLight_Automatic
 ******************************************************************************/
extern void TrafficLight_TrafficLight_Automatic_calc (void);



#endif /* _ASD_TRAFFICLIGHT_TRAFFICLIGHT_AUTOMATIC_H_ */
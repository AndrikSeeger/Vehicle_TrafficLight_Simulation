/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................Driver.DrivingDecision
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_DRIVER_DRIVINGDECISION_AUTOMATIC_H_
#define _ASD_DRIVER_DRIVINGDECISION_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"


/******************************************************************************
 * CONSTANTS DEFINED BY MODULE 'Driver_DrivingDecision_Automatic'
 ******************************************************************************/
/* system constant 'DRIVER_DRIVINGDECISION_AUTOMATIC_DELTABRAKE' */
#ifndef DRIVER_DRIVINGDECISION_AUTOMATIC_DELTABRAKE
#define DRIVER_DRIVINGDECISION_AUTOMATIC_DELTABRAKE 0.75F
#endif





/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'Driver_DrivingDecision_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct Driver_DrivingDecision_Automatic_RAM_SUBSTRUCT {
   float32 anhalteweg;
   boolean lastStateBreaking;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'Driver_DrivingDecision_Automatic'
 ******************************************************************************/


/* component structure for module DRIVER_DRIVINGDECISION_AUTOMATIC intentionally not created */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ...........Driver_DrivingDecision_Automatic */
#define _Driver_DrivingDecision_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'Driver_DrivingDecision_RAM' */
/* containing 'RAM' memory class tree */
extern struct Driver_DrivingDecision_Automatic_RAM_SUBSTRUCT Driver_DrivingDecision_RAM;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module Driver_DrivingDecision_Automatic
 ******************************************************************************/
extern void Driver_DrivingDecision_Automatic_calc (void);



#endif /* _ASD_DRIVER_DRIVINGDECISION_AUTOMATIC_H_ */

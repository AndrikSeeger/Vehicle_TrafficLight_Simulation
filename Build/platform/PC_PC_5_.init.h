/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Model initialization code
 ********************************************************************************/
#pragma once

#include "a_basdef.h"
#include "protocol\l1\p_sysdef.h"

/* Initialize L1 instance tree */

/* Definition of the class structure */
typedef struct
{
    ASDObjectHeader objectHeader;
    struct L1_PC_PC_5__Obj* ASCET_TOP_Ptr;
} ROOT_PC_PC_5__Class;

/* Definition of the class instance structure */
struct ROOT_PC_PC_5__Obj
{
    ASDObjectHeader objectHeader;
};

extern ASDObject *initializeRoot_PC_PC_5_(void);
/* main initialize L1 model function */
extern ASDObject *initializeModel (void);

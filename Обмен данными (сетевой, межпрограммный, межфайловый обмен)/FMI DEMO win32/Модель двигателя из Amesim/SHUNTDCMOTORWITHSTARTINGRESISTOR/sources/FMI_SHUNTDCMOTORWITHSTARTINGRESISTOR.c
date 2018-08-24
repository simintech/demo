/*======================================================================
\author AME2FMU version 1
 \date Mon Feb 23 15:11:17 2015
*/
/*!
\file FMI_SHUNTDCMOTORWITHSTARTINGRESISTOR.c.c
*/
/*
======================================================================*/
#define MODEL_IDENTIFIER SHUNTDCMOTORWITHSTARTINGRESISTOR

/* Modelisar headers */
#include "fmiModelFunctions.h"
#include "fmiModelTypes.h"

/* Standard library headers */
#include <string.h> /* For strcmp */
#include <stddef.h> /* For size_t */
#include <assert.h> /* For assert */
#include <setjmp.h> /* For setjmp/longjmp */

/* Runtime includes */
#include "runtime_support.h"
#include "component.h"
#include "state_machine.h"
#include "amesystem_public.h"

/* Include submodel-independant part of the code */
#include "common.c"
#define VERBOSE_LEVEL 1
/*
SUMMARY OF MODEL SHUNTDCMOTORWITHSTARTINGRESISTOR



OUPUT VARIABLES:
 ifield speed

INTERNAL VARIABLES:
 ifield speed BEMF Lfield Pe Pem Rarm Rarm0 Rarm1 Rfield Tem booleantrigger0 booleantrigger1 cvisc x0 x1 i iarm inertia k tswitchoff u

Number of real parameters: 7
Number of integer parameters: 11
Number of text parameters: 1
Number of real stores: 0
Number of integer stores: 0
Number of pointer stores: 1
*/

#ifndef SHUNTDCMOTORWITHSTARTINGRESISTORH
#define SHUNTDCMOTORWITHSTARTINGRESISTORH

/* Declaration of the submodel's initialization function */
void shuntdcmotorwithstartingresistorin_(int* n,        /* Instance number */
                                         double rp[7],  /* Real parameters */
                                         int ip[11],    /* Integer parameters */
                                         char* tp[1],   /* Text parameters */
                                         void* ps[1],   /* Pointer stores */
                                         double* ifield,/* ifield (ifield - Field current) */
                                         double* speed  /* speed (speed - Rotary speed) */);

/* Declaration of the submodel's dynamic function */
void shuntdcmotorwithstartingresistor_(int* n,                 /* Instantiation number */
                                       double* ifield,         /* ifield (ifield - Field current) */
                                       double* derifield,      /* Derivative of variable 'ifield' */
                                       double* speed,          /* speed (speed - Rotary speed) */
                                       double* derspeed,       /* Derivative of variable 'speed' */
                                       double* BEMF,           /* BEMF (BEMF - Back EMF) */
                                       double* Lfield,         /* Lfield (Lfield - Field inductance) */
                                       double* Pe,             /* Pe (Pe - Electrical power) */
                                       double* Pem,            /* Pem (Pem - Electromechanical power) */
                                       double* Rarm,           /* Rarm (Rarm - Armature resistance) */
                                       double* Rarm0,          /* Rarm0 (Rarm0 - Armature resistance at motor start) */
                                       double* Rarm1,          /* Rarm1 (Rarm1 - Steady state value of armature resistance) */
                                       double* Rfield,         /* Rfield (Rfield - Field resistance) */
                                       double* Tem,            /* Tem (Tem - Electromechanical torque) */
                                       double* booleantrigger0,/* booleantrigger0 (boolean_trigger_0 - boolean trigger state) */
                                       double* booleantrigger1,/* booleantrigger1 (boolean_trigger_1 - boolean trigger state) */
                                       double* cvisc,          /* cvisc (cvisc - Viscous friction coefficient) */
                                       double* x0,             /* x0 (der(ifield) - Introduced der variable) */
                                       double* x1,             /* x1 (der(speed) - Introduced der variable) */
                                       double* i,              /* i (i - Output current) */
                                       double* iarm,           /* iarm (iarm - Armature current) */
                                       double* inertia,        /* inertia (inertia - Rotor intertia) */
                                       double* k,              /* k (k - Torque constant) */
                                       double* tswitchoff,     /* tswitchoff (tswitchoff - Switch off time of starting resistor) */
                                       double* u,              /* u (u - Applied voltage) */
                                       double rp[7],           /* Real parameters */
                                       int ip[11],             /* Integer parameters */
                                       char* tp[1],            /* Text parameters */
                                       void* ps[1],            /* Pointer stores */
                                       int* flag,              /* Discontinuity flag */
                                       double* time            /* Time */);
#endif

/*======================================================================
\author AME2FMU version 1
\date Mon Feb 23 15:11:17 2015
*/
/*!
\brief Calls the dynamic part of the submodel
\details This function is the actual wrapper arround the AMESim
SHUNTDCMOTORWITHSTARTINGRESISTOR submodel: it calls the dynamic
calculation routine with the right parameters.
\param component_ fmiComponent Internal structure used to store submodel
information
\return ret fmiStatus fmiOK if everything went OK, fmiFatal otherwise
*/
/*
 Inherits from : -
======================================================================*/
fmiStatus dynamic(fmiComponent component_)
{
   /* Declaration of internal variables */
   fmiComponentStructure* component; /* Internal data structure */
   int flag; /* Discontinuity flag */
   int ip[11]; /* Integer parameters */
   int n; /* Instantiation number */
   int oflag; /* Old discontinuity flag */
   fmiStatus old_status; /* Variable used to detect a change in AME_status by the submodel */
   double rp[7]; /* Real parameters */
   char* tp[1]; /* Text parameters */

   /* Cast the component (fmiComponent is void*) so we can use the internal structure */
   component = (fmiComponentStructure*)(component_);
   flag = component->flag; /* Initialize discontinuity flag */
   oflag = 2; /* Required for discontinuity handling */

   /* Initialize real parameters */
   rp[0] = component->realSVar[0];
   rp[1] = component->realSVar[1];
   rp[2] = component->realSVar[2];
   rp[3] = component->realSVar[3];
   rp[4] = component->realSVar[4];
   rp[5] = component->realSVar[5];
   rp[6] = component->realSVar[6];

   /* Initialize integer parameters */
   ip[0] = component->intSVar[0];
   ip[1] = component->intSVar[1];
   ip[2] = component->intSVar[2];
   ip[3] = component->intSVar[3];
   ip[4] = component->intSVar[4];
   ip[5] = component->intSVar[5];
   ip[6] = component->intSVar[6];
   ip[7] = component->intSVar[7];
   ip[8] = component->intSVar[8];
   ip[9] = component->intSVar[9];
   ip[10] = component->intSVar[10];

   /* Initialize text parameters */
   tp[0] = (char*)component->stringSVar[0];
   n = 1; /* Initialize instantiation number */
   if (!component_ok(component)) return fmiFatal; /* Test component */

   /* Retrieve real parameters */
   component->realSVar[0] = rp[0];
   component->realSVar[1] = rp[1];
   component->realSVar[2] = rp[2];
   component->realSVar[3] = rp[3];
   component->realSVar[4] = rp[4];
   component->realSVar[5] = rp[5];
   component->realSVar[6] = rp[6];

   /* Retrieve integer parameters */
   component->intSVar[0] = ip[0];
   component->intSVar[1] = ip[1];
   component->intSVar[2] = ip[2];
   component->intSVar[3] = ip[3];
   component->intSVar[4] = ip[4];
   component->intSVar[5] = ip[5];
   component->intSVar[6] = ip[6];
   component->intSVar[7] = ip[7];
   component->intSVar[8] = ip[8];
   component->intSVar[9] = ip[9];
   component->intSVar[10] = ip[10];

   /* Retrieve text parameters */
   component->stringSVar[0] = tp[0];

   /* Call submodel's 'dynamic' function */
   disini_(&oflag);
   SetTimeAtLastStep(component->time);
   SetTimeAtThisStep(component->time);
   if (setjmp(jump_env) == 0)
   {
      shuntdcmotorwithstartingresistor_(&n,                                                     /* Instantiation number */
                                     &(component->realSVar[7]),                              /* ifield (ifield - Field current) */
                                     &(component->state_var_deriv[component->deriv_idx[7]]), /* Derivative of variable 'ifield' */
                                     &(component->realSVar[8]),                              /* speed (speed - Rotary speed) */
                                     &(component->state_var_deriv[component->deriv_idx[8]]), /* Derivative of variable 'speed' */
                                     &(component->realSVar[9]),                              /* BEMF (BEMF - Back EMF) */
                                     &(component->realSVar[10]),                             /* Lfield (Lfield - Field inductance) */
                                     &(component->realSVar[11]),                             /* Pe (Pe - Electrical power) */
                                     &(component->realSVar[12]),                             /* Pem (Pem - Electromechanical power) */
                                     &(component->realSVar[13]),                             /* Rarm (Rarm - Armature resistance) */
                                     &(component->realSVar[14]),                             /* Rarm0 (Rarm0 - Armature resistance at motor start) */
                                     &(component->realSVar[15]),                             /* Rarm1 (Rarm1 - Steady state value of armature resistance) */
                                     &(component->realSVar[16]),                             /* Rfield (Rfield - Field resistance) */
                                     &(component->realSVar[17]),                             /* Tem (Tem - Electromechanical torque) */
                                     &(component->realSVar[18]),                             /* booleantrigger0 (boolean_trigger_0 - boolean trigger state) */
                                     &(component->realSVar[19]),                             /* booleantrigger1 (boolean_trigger_1 - boolean trigger state) */
                                     &(component->realSVar[20]),                             /* cvisc (cvisc - Viscous friction coefficient) */
                                     &(component->realSVar[21]),                             /* x0 (der(ifield) - Introduced der variable) */
                                     &(component->realSVar[22]),                             /* x1 (der(speed) - Introduced der variable) */
                                     &(component->realSVar[23]),                             /* i (i - Output current) */
                                     &(component->realSVar[24]),                             /* iarm (iarm - Armature current) */
                                     &(component->realSVar[25]),                             /* inertia (inertia - Rotor intertia) */
                                     &(component->realSVar[26]),                             /* k (k - Torque constant) */
                                     &(component->realSVar[27]),                             /* tswitchoff (tswitchoff - Switch off time of starting resistor) */
                                     &(component->realSVar[28]),                             /* u (u - Applied voltage) */
                                     rp,                                                     /* Real parameters */
                                     ip,                                                     /* Integer parameters */
                                     tp,                                                     /* Text parameters */
                                     component->ps,                                          /* Pointer stores */
                                     &(flag),                                                /* Discontinuity flag */
                                     &(component->time)                                      /* Time */);
   }
   component->evaluated = fmiTrue; /* Model has been evaluated */
   old_status = component->status;
   if ((AME_status != fmiOK) && (component->status != fmiFatal))
   {
      component->status = fmiError;
   }
   if (component->status != old_status)
   {
      component->memory.logger(component, component->instanceName, fmiWarning, "'dynamic' function", "Variable AME_status was changed by submodel.");
   }
   component->status = AME_status;

   /* All went smoothly */
   return component->status;
}
/*======================================================================
\author AME2FMU version 1
\date Mon Feb 23 15:11:17 2015
*/
/*!
\brief Initializes the model
\details Initializes the model, i.e., computes initial values for all
variables. Before calling this function, fmiSetTime() must be called,
and all variables with a "ScalarVariable / <type> / start" attribute or
a setting of ScalarVariable.causality = "input" can be retrieved with
the fmiSetXXX functions
\param component_ fmiComponent Internal structure used to store submodel
information
\param eventInfo fmiEventInfo* This structure is also used as return
value of fmiEventUpdate.
\param relativeTolerance fmiReal Controls integration step size
\param toleranceControlled fmiBoolean If "toleranceControlled = fmiTrue"
then the model is called with a numerical integration scheme where the
step size is controlled by using "relativeTolerance" for error
estimation. In such a case, all numerical algorithms used inside the
model (e.g. to solve non-linear algebraic equations) should also operate
with an error estimation of an appropriate smaller relative tolerance.
\return ret fmiStatus fmiOK if everything went OK, fmiFatal otherwise
*/
/*
 Inherits from : -
======================================================================*/
fmiStatus fmiInitialize(fmiComponent component_,
                        fmiBoolean toleranceControlled,
                        fmiReal relativeTolerance,
                        fmiEventInfo* eventInfo)
{
   /* Declaration of internal variables */
   int i; /* Loop variable */
   int ip[11]; /* Integer parameters */
   int n; /* Size variable */
   fmiStatus old_status;
   double rp[7]; /* Real parameters */
   char* tp[1]; /* Text parameters */

   /* Convert the memory slot 'component_' to an fmiComponentStructure (fmiComponent is void*) */
   fmiComponentStructure* component = component_;
   AMESIMSYSTEM *amesystem = InitGlobalSystem(0, 0, 0, 0);
   amesystem->AmeExit = ModelAmeExit;
   SetGlobalSystem(amesystem);
   ValidateRuntype(8);

   /* Initialize real parameters */
   rp[0] = component->realSVar[0];
   rp[1] = component->realSVar[1];
   rp[2] = component->realSVar[2];
   rp[3] = component->realSVar[3];
   rp[4] = component->realSVar[4];
   rp[5] = component->realSVar[5];
   rp[6] = component->realSVar[6];

   /* Initialize integer parameters */
   ip[0] = component->intSVar[0];
   ip[1] = component->intSVar[1];
   ip[2] = component->intSVar[2];
   ip[3] = component->intSVar[3];
   ip[4] = component->intSVar[4];
   ip[5] = component->intSVar[5];
   ip[6] = component->intSVar[6];
   ip[7] = component->intSVar[7];
   ip[8] = component->intSVar[8];
   ip[9] = component->intSVar[9];
   ip[10] = component->intSVar[10];

   /* Initialize text parameters */
   tp[0] = (char*)component->stringSVar[0];

   /* Set nominal values for continuous states */
   for (i = 0 ; i < component->nb_state_var ; ++i)
   {
      component->nominalContinuousStates[i] = component->realSVar[component->idx_of_state_var[i]] != 0.0 ? component->realSVar[component->idx_of_state_var[i]] : 1.0;
      component->state_var_deriv[i] = 0;
   }
   component->time_or_state_event = fmiFalse;

   /* Finish component initialization */
   if (toleranceControlled)
   {
      relativeTolerance = 1.*relativeTolerance;
   }
   n = 1; /* Initialize instantiation number */
   if ((component->status == fmiFatal) || (component->status == fmiError))
   {
      AME_status = fmiError;
   }
   if (!component_ok(component)) /* Test component */
   {
      return fmiFatal;
   }
   if (update_state(component, T_fmiInitialize, "fmiInitialize", __FILE__, __LINE__) == fmiFalse) /* Update current state (state machine) */
   {
      return fmiError;
   }

   /* Call submodel's 'init' function */
   shuntdcmotorwithstartingresistorin_(&n,                        /* Instance number */
                                       rp,                        /* Real parameters */
                                       ip,                        /* Integer parameters */
                                       tp,                        /* Text parameters */
                                       component->ps,             /* Pointer stores */
                                       &(component->realSVar[7]), /* ifield (ifield - Field current) */
                                       &(component->realSVar[8])  /* speed (speed - Rotary speed) */);

   /* Retrieve real parameters */
   component->realSVar[0] = rp[0];
   component->realSVar[1] = rp[1];
   component->realSVar[2] = rp[2];
   component->realSVar[3] = rp[3];
   component->realSVar[4] = rp[4];
   component->realSVar[5] = rp[5];
   component->realSVar[6] = rp[6];

   /* Retrieve integer parameters */
   component->intSVar[0] = ip[0];
   component->intSVar[1] = ip[1];
   component->intSVar[2] = ip[2];
   component->intSVar[3] = ip[3];
   component->intSVar[4] = ip[4];
   component->intSVar[5] = ip[5];
   component->intSVar[6] = ip[6];
   component->intSVar[7] = ip[7];
   component->intSVar[8] = ip[8];
   component->intSVar[9] = ip[9];
   component->intSVar[10] = ip[10];

   /* Retrieve text parameters */
   component->stringSVar[0] = tp[0];

   /* Call dynamic */
   component->first_call = fmiTrue;
   amesystem->first_call = 1;
   old_status = component->status;
   dynamic(component);
   amesystem->first_call = 0;
   if ((AME_status != fmiOK) && (component->status != fmiFatal))
   {
      component->status = fmiError;
   }
   if (component->status != old_status)
   {
      component->memory.logger(component, component->instanceName, fmiWarning, "fmiInitialize", "Variable AME_status was changed by submodel.");
   }

   /* Fill in event information */
   eventInfo->iterationConverged = fmiTrue;
   eventInfo->stateValueReferencesChanged = fmiFalse;
   eventInfo->stateValuesChanged = fmiTrue;
   eventInfo->terminateSimulation = fmiFalse;
   eventInfo->upcomingTimeEvent = fmiFalse;
   if (GetFutureTimeDiscon() < getfinaltime_()) /* Get first time event */
   {
      eventInfo->upcomingTimeEvent = fmiTrue;
      eventInfo->nextEventTime = GetFutureTimeDiscon();
   }
   component->eventInfo = *eventInfo;

   /* Model has been evaluated */
   component->evaluated = fmiTrue;

   /* All went smoothly */
   return component->status;
}
/*======================================================================
\author AME2FMU version 1
\date Mon Feb 23 15:11:17 2015
*/
/*!
\brief Returns a new instance of a model.
\details Returns a new instance of a model. If a null pointer is
returned, then instantiation failed. In that case, function "functions->
logger" was called. A model can be instantiated many times. This
function must be called successfully, before any of the following
functions can be called.
\param GUID fmiString Used to check that the Model Description File is
compatible with the model functions: GUID is a vendor specific globally
unique identifier of the Model Description File. It is stored in the
description file and in the model equations and the GUID read from the
Model Description File and passed to fmiInstantiateModel must be
identical to the one stored in the function (e.g., it is a "fingerprint"
of the relevant information stored in the description file), otherwise
the model equations and the Model Description File are not consistent to
each other.
\param instanceName fmiString Name the instance, e.g. in error or
information messages generated by one of the fmiXXX functions
\param loggingOn fmiBoolean If loggingOn = fmiTrue, debug logging is
enabled. If loggingOn = fmiFalse, debug logging is disabled.
\param memory fmiCallbackFunctions Provides callback functions to be
used from the model functions to utilize resources from the environment
\return m fmiComponent New model instance
*/
/*
 Inherits from : -
======================================================================*/
fmiComponent fmiInstantiateModel(fmiString instanceName,
                                 fmiString GUID,
                                 fmiCallbackFunctions memory,
                                 fmiBoolean loggingOn)
{
   /* Declaration of internal variables */
   fmiComponentStructure* component; /* Internal data structure */
   init_struct dim_values; /* Structure containing size of variables */
   size_t i; /* Loop variable */

   size_t dim_string[] = {7};
   dim_values.nb_boolSVar = 0;
   dim_values.nb_intSVar = 11;
   dim_values.nb_realSVar = 29;
   dim_values.nb_stringSVar = 1;
   dim_values.nb_state_var = 2;
   dim_values.dim_string = dim_string;
   dim_values.GUID = GUID;
   dim_values.ref_GUID = "5922B96112515EF2";
   dim_values.ModelName = "SHUNTDCMOTORWITHSTARTINGRESISTOR";
   dim_values.memory = memory;
   dim_values.loggingOn = loggingOn;
   dim_values.nb_integer_stores = 0;
   dim_values.nb_real_stores = 0;
   dim_values.nb_pointer_stores = 1;
   component = NULL; /* Initialize pointer to fmiComponentStructure */
   if ((component = commonInit(&dim_values)) == 0) /* Initiate variables */
   {
      if (loggingOn)
      {
         memory.logger(component, instanceName, fmiFatal, "initialization", "Unable to initialize component structure.");
      }
      return NULL;
   }

   /* State variables */
   component->idx_of_state_var[0] = 7;
   component->deriv_idx[7] = 0;
   component->idx_of_state_var[1] = 8;
   component->deriv_idx[8] = 1;

   /* Initialize var types */
   component->real_var_type = (FMITransition*)memory.allocateMemory(29,sizeof(FMITransition));
   for (i = 0 ; i < 29 ; ++i)
   {
      component->real_var_type[i] = T_unknown;
   }
   component->integer_var_type = (FMITransition*)memory.allocateMemory(19,sizeof(FMITransition));
   for (i = 0 ; i < 19 ; ++i)
   {
      component->integer_var_type[i] = T_unknown;
   }
   component->boolean_var_type = NULL;
   component->string_var_type = (FMITransition*)memory.allocateMemory(1,sizeof(FMITransition));
   for (i = 0 ; i < 1 ; ++i)
   {
      component->string_var_type[i] = T_unknown;
   }
   component->real_var_type[0] = T_fmiSetINI;
   component->real_var_type[1] = T_fmiSetINI;
   component->real_var_type[2] = T_fmiSetINI;
   component->real_var_type[3] = T_fmiSetINI;
   component->real_var_type[4] = T_fmiSetINI;
   component->real_var_type[5] = T_fmiSetINI;
   component->real_var_type[6] = T_fmiSetINI;
   component->real_var_type[7] = T_fmiSetINI;
   component->real_var_type[8] = T_fmiSetINI;
   component->integer_var_type[4] = T_fmiSetINI;
   component->integer_var_type[5] = T_fmiSetINI;
   component->integer_var_type[6] = T_fmiSetINI;
   component->string_var_type[0] = T_fmiSetINI;
   component->integer_var_type[0] = T_fmiSetINI;
   component->integer_var_type[1] = T_fmiSetINI;
   component->integer_var_type[2] = T_fmiSetINI;
   component->integer_var_type[3] = T_fmiSetINI;
   component->integer_var_type[7] = T_fmiSetINI;
   component->integer_var_type[8] = T_fmiSetINI;
   component->integer_var_type[9] = T_fmiSetINI;
   component->integer_var_type[10] = T_fmiSetINI;

   /* Initialize integer variables to their start values */
   component->intSVar[0] = 1; /* x3 (event iteration type) */
   component->intSVar[1] = 1; /* x6 (linear system solver logging) */
   component->intSVar[2] = 3; /* x5 (logged events) */
   component->intSVar[3] = 1; /* systemsettingssteploglevel (logged submodel calls) */
   component->intSVar[4] = 10; /* x2 (maximum number of event iterations) */
   component->intSVar[5] = 10; /* x14 (maximum number of mixed system solver iterations) */
   component->intSVar[6] = 100; /* x11 (maximum number of nonlinear system solver iterations) */
   component->intSVar[7] = 1; /* x15 (mixed system solver logging) */
   component->intSVar[8] = 2; /* systemsettingsevalloglevel (model evaluation logging) */
   component->intSVar[9] = 1; /* x13 (nonlinear system solver logging) */
   component->intSVar[10] = 1; /* x12 (use backtraking in nonlinear system solver) */

   /* Initialize enumeration variables to their start values */
   component->intSVar[0] = 1; /* x3 (event iteration type) */
   component->intSVar[1] = 1; /* x6 (linear system solver logging) */
   component->intSVar[2] = 3; /* x5 (logged events) */
   component->intSVar[3] = 1; /* systemsettingssteploglevel (logged submodel calls) */
   component->intSVar[7] = 1; /* x15 (mixed system solver logging) */
   component->intSVar[8] = 2; /* systemsettingsevalloglevel (model evaluation logging) */
   component->intSVar[9] = 1; /* x13 (nonlinear system solver logging) */
   component->intSVar[10] = 1; /* x12 (use backtraking in nonlinear system solver) */

   /* Initialize real variables to their start values */
   component->realSVar[0] =    0.00000000000000e+000; /* ifieldstart (ifield - fixed start value) */
   component->realSVar[1] =    1.00000000000000e-005; /* x7 (nonlinear system solver function evaluation accuracy) */
   component->realSVar[2] =    1.00000000000000e-005; /* x10 (nonlinear system solver gradient tolerance) */
   component->realSVar[3] =    1.00000000000000e-014; /* x9 (nonlinear system solver step tolerance) */
   component->realSVar[4] =    1.00000000000000e-012; /* x8 (nonlinear system solver value tolerance) */
   component->realSVar[5] =    0.00000000000000e+000; /* speedstart (speed - fixed start value) */
   component->realSVar[6] =    1.00000000000000e-015; /* x4 (zero crossing hysteresis) */
   component->realSVar[7] =    0.00000000000000e+000; /* ifield (ifield - Field current) */
   component->realSVar[8] =    0.00000000000000e+000; /* speed (speed - Rotary speed) */

   /* Initialize string variables to their start values */
   assignString(component, 0, "amo.log"); /* systemsettingslogfilename (log file name) */
   component->verbose_level = VERBOSE_LEVEL;
   component->instanceName = component->memory.allocateMemory(strlen(instanceName)+1, sizeof(char));
   strcpy(component->instanceName, instanceName);
   if ((component->status == fmiFatal) || (component->status == fmiError)) /* Update status if necessary */
   {
      AME_status = fmiError;
   }
   return component;
}

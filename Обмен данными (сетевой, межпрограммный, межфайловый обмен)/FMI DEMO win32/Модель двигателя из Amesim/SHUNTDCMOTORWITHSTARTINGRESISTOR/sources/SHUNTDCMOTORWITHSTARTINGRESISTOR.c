/* Generated on Mon Feb 23 15:03:31 2015 using Modelicac v2.0.0 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "ameutils.h"
#include "amo_runtime.h"
#include "amo_context.h"
#include "algorithm.h"

/********************************************************************************

number of real parameters = 7
number of integer parameters = 11
number of string parameters = 1
number of discrete variables = 0
number of continuous variables = 2 (2 state variables)
number of inputs = 0
number of outputs = 0

********************************************************************************/
/* >>>>>>>>>>>>Insert Private Code Here. */

#include "ModelicaUtilities.h"

/* Constants. */
#define TRUE AMORuntime_TRUE
#define FALSE AMORuntime_FALSE

/* Conversion utilities. */
#define BOOLEAN_TO_REAL(b) AMORuntime_boolean_to_real((b))
#define REAL_TO_BOOLEAN(r) AMORuntime_real_to_boolean((r))
#define INTEGER_TO_BOOLEAN(i) ((i) ? TRUE : FALSE)
#define INTEGER_TO_REAL(i) AMORuntime_integer_to_real((i))
#define REAL_TO_INTEGER(i) AMORuntime_real_to_integer((i))
#define AME_ENUM_TO_BOOLEAN(i) AMORuntime_ame_boolean_enum_to_boolean((i))

/* Boolean operators. */
#define BAND(b1, b2) AMORuntime_boolean_bitwise_and((b1), (b2))
#define BOR(b1, b2) AMORuntime_boolean_bitwise_or((b1), (b2))
#define BNOT(b1) ((b1) == FALSE ? TRUE : FALSE)
#define IF(b, x, y) ((b) == TRUE ? (x) : (y))

/* Mathematical functions. */
#define RIPOW(x, i) AMORuntime_real_integer_pow((x), (i))
#define IPOW(i, j) AMORuntime_integer_pow((i), (j))

/* Time accessor. */
#define TIME AMOContext_get_time(submodel_ctx)

/* Variable accessors. */
#define I(i) AMOContext_get_integer_variable(submodel_ctx, (i))
#define I_PRE(i) AMOContext_get_integer_pre(submodel_ctx, (i))
#define SET_I(i, v) AMOContext_set_integer_variable(submodel_ctx, (i), (v))
#define B(i) AMOContext_get_boolean_variable(submodel_ctx, (i))
#define B_PRE(i) AMOContext_get_boolean_pre(submodel_ctx, (i))
#define SET_B(i, v) AMOContext_set_boolean_variable(submodel_ctx, (i), (v))
#define R(i) AMOContext_get_real_variable(submodel_ctx, (i))
#define R_PRE(i) AMOContext_get_real_pre(submodel_ctx, (i))
#define SET_R(i, v) AMOContext_set_real_variable(submodel_ctx, (i), (v))
#define S(i) AMOContext_get_string_variable(submodel_ctx, (i))
#define S_PRE(i) AMOContext_get_string_pre(submodel_ctx, (i))
#define SET_S(i, v) AMOContext_set_string_variable(submodel_ctx, (i), (v))
#define C(i) AMOContext_get_cell_variable(submodel_ctx, (i))
#define SET_C(i, v) AMOContext_set_cell_variable(submodel_ctx, (i), (v))
#define CLOSURE(i)    AMOContext_get_closure_variable(submodel_ctx, (i))
#define SET_CLOSURE(i, v) \
   AMOContext_set_closure_variable(submodel_ctx, (i), (v))

/* When condition handler. */
#define WHEN(i, x) AMOContext_when_condition(submodel_ctx, (i), (x))

/* Integer trigger handlers. */
#define REAL_TO_INTEGER_TRIGGER(i) \
   AMOContext_evaluate_real_to_integer_trigger(submodel_ctx, (i))

/* Boolean trigger handlers. */
#define GE_TRIGGER(i) \
   AMOContext_evaluate_boolean_trigger(submodel_ctx, (i))
#define GT_TRIGGER(i) \
   AMOContext_evaluate_boolean_trigger(submodel_ctx, (i))

/* Real trigger handlers. */
#define CEIL_TRIGGER(i) \
   AMOContext_evaluate_real_trigger(submodel_ctx, (i))
#define FLOOR_TRIGGER(i) \
   AMOContext_evaluate_real_trigger(submodel_ctx, (i))

/* Sample handlers. */
#define SAMPLE(i) \
   AMOContext_evaluate_sample(submodel_ctx, (i))

/* Code generation helpers. */
#define ZERO_SIZE_ARRAY(v) void *v = NULL

/**************************************************************************
   Enumeration field identifiers declaration.
**************************************************************************/

/* Empty enumeration definition. */


/**************************************************************************
   External function declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Modelica function declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Toplevel closure creator declaration.
**************************************************************************/

static void create_toplevel_closures(AMOContext_Context submodel_ctx);


/**************************************************************************
   State expression updater declaration.
**************************************************************************/

static void update_state_expressions(AMOContext_Context submodel_ctx);


/**************************************************************************
   Assertion updater declarations.
**************************************************************************/

static void update_initial_assertions(AMOContext_Context submodel_ctx);

static void update_dynamical_assertions(AMOContext_Context submodel_ctx);


/**************************************************************************
   Initial linear system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial nonlinear system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial nonlinear system updater declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system discrete evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system continuous evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial model evaluator declaration.
**************************************************************************/

static void evaluate_initial_model(AMOContext_Context submodel_ctx);


/**************************************************************************
   Dynamical linear system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical nonlinear system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical nonlinear system updater declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system discrete evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system continuous evaluator declarations.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical model evaluator declaration.
**************************************************************************/

static void evaluate_dynamical_model(AMOContext_Context submodel_ctx);


/**************************************************************************
   Record accessor definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Modelica function definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Toplevel closure creator definition.
**************************************************************************/

static void create_toplevel_closures(AMOContext_Context submodel_ctx)
{
   /* Empty block. */
   {}
   
   return;
}


/**************************************************************************
   State expression updater definition.
**************************************************************************/

static void update_state_expressions(AMOContext_Context submodel_ctx)
{
   /* Updating "when" conditions. */
   {}
   
   /* Updating boolean triggers. */
   AMOContext_update_gt_comparison_trigger(
      submodel_ctx, 1, R(14) /* ifield */, 0.0000000000000000e+000
   );
   AMOContext_update_ge_comparison_trigger(
      submodel_ctx, 0, TIME, R(18) /* tswitchoff */
   );
   
   /* Updating real triggers. */
   {}
   
   /* Updating integer triggers. */
   {}
   
   /* Updating time comparisons. */
   {}
   
   /* Updating samples. */
   {}
   
   return;
}


/**************************************************************************
   Assertion updater definitions.
**************************************************************************/

static void update_initial_assertions(AMOContext_Context submodel_ctx)
{
   /* Updating initial assertions. */
   {}
   
   return;
}

static void update_dynamical_assertions(AMOContext_Context submodel_ctx)
{
   /* Updating dynamical assertions. */
   {}
   
   return;
}


/**************************************************************************
   Initial linear system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial nonlinear system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial nonlinear system updater definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system discrete evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial mixed system continuous evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Initial model evaluator definition.
**************************************************************************/

static void evaluate_initial_model(AMOContext_Context submodel_ctx)
{
   /* Local common sub-expressions. */
   ZERO_SIZE_ARRAY(cs);
   ZERO_SIZE_ARRAY(is);
   ZERO_SIZE_ARRAY(bs);
   ZERO_SIZE_ARRAY(rs);
   ZERO_SIZE_ARRAY(ss);
   
   /* Evaluating toplevel systems. */
   SET_B(0, TIME >= 2.5000000000000000e+000) /* idb__ */;
   SET_B(1, R(14) /* ifield */ > 0.0000000000000000e+000) /* idb___0 */;
   SET_R(
      16,
      IF(
         B(1) /* idb___0 */,
         R(14) /* ifield */ *
         (
            R(14) /* ifield */ *
            (
               5.8160000000000001e-001 * R(14) /* ifield */ +
               - 2.9315000000000002e+000
            ) +
            4.6432000000000002e+000
         ),
         0.0000000000000000e+000
      )
   )
      /* k */;
   SET_R(0, R(16) /* k */ * (1.0471975511999999e-001 * R(17) /* speed */))
      /* BEMF */;
   SET_R(1, 1.0000000000000001e-001) /* Lfield */;
   SET_R(
      4,
      IF(
         BNOT(B(0) /* idb__ */),
         3.6000000000000001e+000 *
         (
            TIME *
            (
               - 1.0000000000000000e+000 *
               RIPOW(2.5000000000000000e+000, - 1)
            ) +
            1.0000000000000000e+000
         ) +
         4.0000000000000002e-001,
         4.0000000000000002e-001
      )
   )
      /* Rarm */;
   SET_R(
      13,
      RIPOW(R(4) /* Rarm */, - 1) *
      (
         - 1.0000000000000000e+000 * R(0) /* BEMF */ +
         1.4000000000000000e+002
      )
   )
      /* iarm */;
   SET_R(12, R(14) /* ifield */ + R(13) /* iarm */) /* i */;
   SET_R(2, 1.4000000000000000e+002 * R(12) /* i */) /* Pe */;
   SET_R(8, R(13) /* iarm */ * R(16) /* k */) /* Tem */;
   SET_R(
      3, R(8) /* Tem */ * (1.0471975511999999e-001 * R(17) /* speed */)
   )
      /* Pem */;
   SET_R(5, 4.0000000000000000e+000) /* Rarm0 */;
   SET_R(6, 4.0000000000000002e-001) /* Rarm1 */;
   SET_R(7, 2.7500000000000000e+002) /* Rfield */;
   SET_R(9, 1.7000000000000001e-002) /* cvisc */;
   SET_R(
      10,
      RIPOW(1.0000000000000001e-001, - 1) *
      (
         - 2.7500000000000000e+002 * R(14) /* ifield */ +
         1.4000000000000000e+002
      )
   )
      /* der(ifield) */;
   SET_R(
      11,
      9.5492965854826952e+000 *
      (- 1.7000000000000001e-002 * R(17) /* speed */ + R(8) /* Tem */)
   )
      /* der(speed) */;
   SET_R(15, 5.9999999999999998e-001) /* inertia */;
   SET_R(18, 2.5000000000000000e+000) /* tswitchoff */;
   SET_R(19, 1.4000000000000000e+002) /* u */;
   
   return;
}


/**************************************************************************
   Dynamical linear system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical nonlinear system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical nonlinear system updater definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system discrete evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical mixed system continuous evaluator definitions.
**************************************************************************/

/* Empty toplevel block. */


/**************************************************************************
   Dynamical model evaluator definition.
**************************************************************************/

static void evaluate_dynamical_model(AMOContext_Context submodel_ctx)
{
   /* Local common sub-expressions. */
   ZERO_SIZE_ARRAY(cs);
   ZERO_SIZE_ARRAY(is);
   ZERO_SIZE_ARRAY(bs);
   ZERO_SIZE_ARRAY(rs);
   ZERO_SIZE_ARRAY(ss);
   
   /* Evaluating toplevel systems. */
   SET_B(0, FALSE) /* idb__ */;
   SET_B(1, FALSE) /* idb___0 */;
   SET_R(
      16,
      IF(
         GT_TRIGGER(1),
         R(14) /* ifield */ *
         (
            R(14) /* ifield */ *
            (
               5.8160000000000001e-001 * R(14) /* ifield */ +
               - 2.9315000000000002e+000
            ) +
            4.6432000000000002e+000
         ),
         0.0000000000000000e+000
      )
   )
      /* k */;
   SET_R(0, R(16) /* k */ * (1.0471975511999999e-001 * R(17) /* speed */))
      /* BEMF */;
   SET_R(
      4,
      IF(
         BNOT(GE_TRIGGER(0)),
         (- 1.0000000000000000e+000 * R(6) /* Rarm1 */ + R(5) /* Rarm0 */) *
         (
            TIME *
            (
               - 1.0000000000000000e+000 *
               RIPOW(R(18) /* tswitchoff */, - 1)
            ) +
            1.0000000000000000e+000
         ) +
         R(6) /* Rarm1 */,
         R(6) /* Rarm1 */
      )
   )
      /* Rarm */;
   SET_R(
      13,
      RIPOW(R(4) /* Rarm */, - 1) *
      (
         - 1.0000000000000000e+000 * R(0) /* BEMF */ +
         1.4000000000000000e+002
      )
   )
      /* iarm */;
   SET_R(12, R(14) /* ifield */ + R(13) /* iarm */) /* i */;
   SET_R(2, 1.4000000000000000e+002 * R(12) /* i */) /* Pe */;
   SET_R(8, R(13) /* iarm */ * R(16) /* k */) /* Tem */;
   SET_R(
      3, R(8) /* Tem */ * (1.0471975511999999e-001 * R(17) /* speed */)
   )
      /* Pem */;
   SET_R(
      10,
      RIPOW(R(1) /* Lfield */, - 1) *
      (
         R(7) /* Rfield */ *
         (- 1.0000000000000000e+000 * R(14) /* ifield */) +
         1.4000000000000000e+002
      )
   )
      /* der(ifield) */;
   SET_R(
      11,
      9.5492965854826952e+000 *
      (
         R(9) /* cvisc */ * (- 1.0000000000000000e+000 * R(17) /* speed */) +
         R(8) /* Tem */
      )
   )
      /* der(speed) */;
   SET_R(19, 1.4000000000000000e+002) /* u */;
   
   return;
}


/**************************************************************************
   Model information creation.
**************************************************************************/

static AMOContext_ModelInformation create_model_information()
{
   /* Variable identifiers. */
   ZERO_SIZE_ARRAY(integer_ids);
   static char *boolean_ids[2] = {"idb__", "idb___0"};
   static char *real_ids[20] =
      {
         "BEMF",
         "Lfield",
         "Pe",
         "Pem",
         "Rarm",
         "Rarm0",
         "Rarm1",
         "Rfield",
         "Tem",
         "cvisc",
         "der(ifield)",
         "der(speed)",
         "i",
         "iarm",
         "ifield",
         "inertia",
         "k",
         "speed",
         "tswitchoff",
         "u"
      };
   ZERO_SIZE_ARRAY(string_ids);
   ZERO_SIZE_ARRAY(cell_ids);
   
   /* Parameter associations. */
   ZERO_SIZE_ARRAY(integer_parameter_assoc);
   ZERO_SIZE_ARRAY(boolean_parameter_assoc);
   ZERO_SIZE_ARRAY(real_parameter_assoc);
   ZERO_SIZE_ARRAY(string_parameter_assoc);
   
   /* Input variable associations. */
   ZERO_SIZE_ARRAY(input_variable_assoc);
   
   /* Fixed variable associations. */
   ZERO_SIZE_ARRAY(integer_fixed_variable_assoc);
   ZERO_SIZE_ARRAY(boolean_fixed_variable_assoc);
   static size_t real_fixed_variable_assoc[2] = {14, 17};
   ZERO_SIZE_ARRAY(string_fixed_variable_assoc);
   
   /* Initial iteration variable associations. */
   ZERO_SIZE_ARRAY(integer_initial_iteration_variable_assoc);
   ZERO_SIZE_ARRAY(boolean_initial_iteration_variable_assoc);
   ZERO_SIZE_ARRAY(real_initial_iteration_variable_assoc);
   ZERO_SIZE_ARRAY(string_initial_iteration_variable_assoc);
   
   /* Memory associations. */
   ZERO_SIZE_ARRAY(real_memory_assoc);
   ZERO_SIZE_ARRAY(boolean_memory_assoc);
   ZERO_SIZE_ARRAY(integer_memory_assoc);
   ZERO_SIZE_ARRAY(string_memory_assoc);
   
   /* Dynamical iteration variable associations. */
   ZERO_SIZE_ARRAY(real_dynamical_iteration_variable_assoc);
   
   /* When condition identifiers. */
   ZERO_SIZE_ARRAY(when_condition_ids);
   
   /* Trigger identifiers. */
   ZERO_SIZE_ARRAY(integer_trigger_ids);
   static char *boolean_trigger_left_ids[2] = {"time", "ifield"};
   static char *boolean_trigger_right_ids[2] = {"tswitchoff", "0."};
   static AMOContext_BooleanTriggerKind boolean_trigger_kinds[2] =
      {AMOContext_GE_BOOLEAN_TRIGGER, AMOContext_GT_BOOLEAN_TRIGGER};
   ZERO_SIZE_ARRAY(real_trigger_ids);
   ZERO_SIZE_ARRAY(real_trigger_kinds);
   
   /* Time comparison identifiers. */
   ZERO_SIZE_ARRAY(time_comparison_ids);
   
   /* Sample identifiers. */
   ZERO_SIZE_ARRAY(sample_ids);
   
   /* Continuous state variable associations. */
   static size_t continuous_state_assoc[2] = {14, 17};
   
   /* State derivative variable associations. */
   static size_t state_derivative_assoc[2] = {10, 11};
   
   /* Reinitialized variable associations. */
   ZERO_SIZE_ARRAY(reinitialized_state_assoc);
   
   AMOContext_ModelInformation model_info;
   
   /* Setting up closure variables. */
   model_info.n_closure = 0;
   
   /* Setting up variables. */
   model_info.n_integer = 0;
   model_info.integer_ids = integer_ids;
   model_info.n_boolean = 2;
   model_info.boolean_ids = boolean_ids;
   model_info.n_real = 20;
   model_info.real_ids = real_ids;
   model_info.n_string = 0;
   model_info.string_ids = string_ids;
   model_info.n_cell = 0;
   model_info.cell_ids = cell_ids;
   
   /* Setting up parameters. */
   model_info.n_integer_parameter = 0;
   model_info.integer_parameter_assoc = integer_parameter_assoc;
   model_info.n_boolean_parameter = 0;
   model_info.boolean_parameter_assoc = boolean_parameter_assoc;
   model_info.n_real_parameter = 0;
   model_info.real_parameter_assoc = real_parameter_assoc;
   model_info.n_string_parameter = 0;
   model_info.string_parameter_assoc = string_parameter_assoc;
   
   /* Setting up input variables. */
   model_info.n_input_variable = 0;
   model_info.input_variable_assoc = input_variable_assoc;
   
   /* Setting up fixed variables. */
   model_info.n_integer_fixed_variable = 0;
   model_info.integer_fixed_variable_assoc = integer_fixed_variable_assoc;
   model_info.n_boolean_fixed_variable = 0;
   model_info.boolean_fixed_variable_assoc = boolean_fixed_variable_assoc;
   model_info.n_real_fixed_variable = 2;
   model_info.real_fixed_variable_assoc = real_fixed_variable_assoc;
   model_info.n_string_fixed_variable = 0;
   model_info.string_fixed_variable_assoc = string_fixed_variable_assoc;
   
   /* Setting up initial iteration variables. */
   model_info.n_integer_initial_iteration_variable = 0;
   model_info.integer_initial_iteration_variable_assoc =
      integer_initial_iteration_variable_assoc;
   model_info.n_boolean_initial_iteration_variable = 0;
   model_info.boolean_initial_iteration_variable_assoc =
      boolean_initial_iteration_variable_assoc;
   model_info.n_real_initial_iteration_variable = 0;
   model_info.real_initial_iteration_variable_assoc =
      real_initial_iteration_variable_assoc;
   model_info.n_string_initial_iteration_variable = 0;
   model_info.string_initial_iteration_variable_assoc =
      string_initial_iteration_variable_assoc;
   
   /* Setting up memory variables. */
   model_info.n_integer_memory = 0;
   model_info.integer_memory_assoc = integer_memory_assoc;
   model_info.n_boolean_memory = 0;
   model_info.boolean_memory_assoc = boolean_memory_assoc;
   model_info.n_real_memory = 0;
   model_info.real_memory_assoc = real_memory_assoc;
   model_info.n_string_memory = 0;
   model_info.string_memory_assoc = string_memory_assoc;
   
   /* Setting up dynamical iteration variables. */
   model_info.n_real_dynamical_iteration_variable = 0;
   model_info.real_dynamical_iteration_variable_assoc =
      real_dynamical_iteration_variable_assoc;
   
   /* Setting up "when" conditions. */
   model_info.n_when_condition = 0;
   model_info.when_condition_ids = when_condition_ids;
   
   /* Setting up triggers. */
   model_info.n_integer_trigger = 0;
   model_info.integer_trigger_ids = integer_trigger_ids;
   model_info.n_boolean_trigger = 2;
   model_info.boolean_trigger_left_ids = boolean_trigger_left_ids;
   model_info.boolean_trigger_right_ids = boolean_trigger_right_ids;
   model_info.boolean_trigger_kinds = boolean_trigger_kinds;
   model_info.n_real_trigger = 0;
   model_info.real_trigger_ids = real_trigger_ids;
   model_info.real_trigger_kinds = real_trigger_kinds;
   
   /* Setting up time comparisons. */
   model_info.n_time_comparison = 0;
   model_info.time_comparison_ids = time_comparison_ids;
   
   /* Setting up sample expressions. */
   model_info.n_sample = 0;
   model_info.sample_ids = sample_ids;
   
   /* Setting up continuous variables. */
   model_info.n_continuous_state = 2;
   model_info.continuous_state_assoc = continuous_state_assoc;
   model_info.state_derivative_assoc = state_derivative_assoc;
   model_info.n_reinitialized_state = 0;
   model_info.reinitialized_state_assoc = reinitialized_state_assoc;
   
   /* Setting up assertions. */
   model_info.n_initial_assertion = 0;
   model_info.n_dynamical_assertion = 0;
   
   /* Setting up evaluation functions. */
   model_info.toplevel_closure_creator = create_toplevel_closures;
   model_info.state_expression_updater = update_state_expressions;
   model_info.initial_model_evaluator = evaluate_initial_model;
   model_info.initial_assertion_updater = update_initial_assertions;
   model_info.dynamical_model_evaluator = evaluate_dynamical_model;
   model_info.dynamical_assertion_updater = update_dynamical_assertions;
   
   return model_info;
}
/* <<<<<<<<<<<<End of Private Code. */


/* LMS Amesim submodel's  entry point */
void shuntdcmotorwithstartingresistorin_(
   int *n,
   double rp[7],
   int ip[11],
   char *tp[1],
   void *ps[1],
   double *x0,
   double *x1
)
{
/* >>>>>>>>>>>>Extra Initialization Function Declarations Here. */
   AMOContext_Context submodel_ctx;
   AMOContext_ModelInformation model_info;
   AMOContext_AMESimInformation amesim_info;
/* <<<<<<<<<<<<End of Extra Initialization declarations. */
/* >>>>>>>>>>>>Initialization Function Check Statements. */
/* <<<<<<<<<<<<End of Initialization Check Statements. */
/* >>>>>>>>>>>>Initialization Function Executable Statements. */
   /* Creating model information. */
   model_info = create_model_information();
   
   /* Submodel identification information. */
   amesim_info.submodel_instance = *n;
   amesim_info.submodel_name = "SHUNTDCMOTORWITHSTARTINGRESISTOR";
   
   /* Continuous nonlinear system handling type. */
   amesim_info.use_implicit_variables = FALSE;
   
   /* Logging settings. */
   amesim_info.log_file_name = tp[0] /* systemsettingslogfilename */;
   amesim_info.call_log_level =
      AMOContext_call_log_level_of_ame_enum(ip[3])
         /* systemsettingssteploglevel */;
   amesim_info.evaluation_log_level =
      AMOContext_evaluation_log_level_of_ame_enum(ip[8])
         /* systemsettingsevalloglevel */;
   
   /* Event handling settings. */
   amesim_info.max_event_iteration_nb =
      AMOContext_size_of_ame_int(ip[4]) /* x2 */;
   amesim_info.event_iteration_type =
      AMOContext_event_iteration_type_of_ame_enum(ip[0]) /* x3 */;
   amesim_info.zero_crossing_hysteresis = rp[6] /* x4 */;
   amesim_info.event_log_level =
      AMOContext_event_log_level_of_ame_enum(ip[2]) /* x5 */;
   
   /* Linear solver settings. */
   amesim_info.linear_solver_log_level =
      AMOContext_linear_solver_log_level_of_ame_enum(ip[1]) /* x6 */;
   
   /* Nonlinear solver settings. */
   amesim_info.nl_solver_function_accuracy = rp[1] /* x7 */;
   amesim_info.nl_solver_value_tolerance = rp[4] /* x8 */;
   amesim_info.nl_solver_step_tolerance = rp[3] /* x9 */;
   amesim_info.nl_solver_gradient_tolerance = rp[2] /* x10 */;
   amesim_info.nl_solver_max_iteration_nb =
      AMOContext_size_of_ame_int(ip[6]) /* x11 */;
   amesim_info.nl_solver_use_backtracking =
      AME_ENUM_TO_BOOLEAN(ip[10]) /* x12 */;
   amesim_info.nl_solver_log_level =
      AMOContext_nl_solver_log_level_of_ame_enum(ip[9]) /* x13 */;
   
   /* Mixed solver settings. */
   amesim_info.mixed_solver_max_iteration_nb =
      AMOContext_size_of_ame_int(ip[5]) /* x14 */;
   amesim_info.mixed_solver_log_level =
      AMOContext_mixed_solver_log_level_of_ame_enum(ip[7]) /* x15 */;
   
   /* Creating an LMS Amesim/Modelica context. */
   submodel_ctx = AMOContext_create(model_info, amesim_info);
   ps[0] = submodel_ctx;
   
   /* Copying integer parameters. */
   {}
   
   /* Copying enumeration parameters. */
   {}
   
   /* Copying boolean parameters. */
   {}
   
   /* Copying real parameters. */
   {}
   
   /* Copying string parameters. */
   {}
   
   /* Copying integer fixed values. */
   {}
   
   /* Copying enumeration fixed values. */
   {}
   
   /* Copying boolean fixed values. */
   {}
   
   /* Copying real fixed values. */
   AMOContext_set_real_fixed_value(
      submodel_ctx, 1, rp[5] /* speedstart */
   )
      /* speed */;
   AMOContext_set_real_fixed_value(
      submodel_ctx, 0, rp[0] /* ifieldstart */
   )
      /* ifield */;
   
   /* Copying string fixed values. */
   {}
   
   /* Copying integer initial guess values. */
   {}
   
   /* Copying enumeration initial guess values. */
   {}
   
   /* Copying boolean initial guess values. */
   {}
   
   /* Copying real initial guess values. */
   {}
   
   /* Copying string initial guess values. */
   {}
/* <<<<<<<<<<<<End of Initialization Executable Statements. */
}

/* The dynamic part of the submodel */
void shuntdcmotorwithstartingresistor_(
   int *n,
   double *x0,
   double *xd0,
   double *x1,
   double *xd1,
   double *w0,
   double *w1,
   double *w2,
   double *w3,
   double *w4,
   double *w5,
   double *w6,
   double *w7,
   double *w8,
   double *w9,
   double *w10,
   double *w11,
   double *w12,
   double *w13,
   double *w14,
   double *w15,
   double *w16,
   double *w17,
   double *w18,
   double *w19,
   double rp[7],
   int ip[11],
   char *tp[1],
   void *ps[1],
   int *flag,
   double *t
)
{
/* >>>>>>>>>>>>Extra Calculation Function Declarations Here. */
   /* Context declaration. */
   AMOContext_Context submodel_ctx;
/* <<<<<<<<<<<<End of Extra Calculation Declarations. */
/* >>>>>>>>>>>>Calculation Function Executable Statements. */
   /* Retrieving the model context. */
   submodel_ctx = ps[0];
   
   /* Initializing the context for a new submodel call. */
   AMOContext_initialize_submodel_call(submodel_ctx, *t, *flag);
   
   /* Copying input variables. */
   {}
   
   /* Copying integer "pre" values. */
   {}
   
   /* Copying enumeration "pre" values. */
   {}
   
   /* Copying boolean "pre" values. */
   {}
   
   /* Copying real "pre" values. */
   {}
   
   /* Copying dynamical real guess values. */
   {}
   
   /* Copying "when" condition states. */
   {}
   
   /* Copying integer trigger states. */
   {}
   
   /* Copying boolean trigger states. */
   AMOContext_set_boolean_trigger_state(
      submodel_ctx, 1, REAL_TO_BOOLEAN(*w10) /* booleantrigger1 */
   );
   AMOContext_set_boolean_trigger_state(
      submodel_ctx, 0, REAL_TO_BOOLEAN(*w9) /* booleantrigger0 */
   );
   
   /* Copying real trigger states. */
   {}
   
   /* Copying time comparison states. */
   {}
   
   /* Copying sample states. */
   {}
   
   /* Copying continuous variables. */
   SET_R(17, *x1 /* speed */) /* speed */;
   SET_R(14, *x0 /* ifield */) /* ifield */;
   
   /* Executing the appropriate computations. */
   AMOContext_execute_submodel_call(submodel_ctx);
   
   /* Updating integer "pre" values. */
   {}
   
   /* Updating enumeration "pre" values. */
   {}
   
   /* Updating boolean "pre" values. */
   {}
   
   /* Updating real "pre" values. */
   {}
   
   /* Updating real dynamical guess values. */
   {}
   
   /* Updating "when" condition states. */
   {}
   
   /* Updating boolean trigger states. */
   *w10 /* booleantrigger1 */ =
      BOOLEAN_TO_REAL(
         AMOContext_get_boolean_trigger_state(submodel_ctx, 1)
      );
   *w9 /* booleantrigger0 */ =
      BOOLEAN_TO_REAL(
         AMOContext_get_boolean_trigger_state(submodel_ctx, 0)
      );
   
   /* Updating integer trigger states. */
   {}
   
   /* Updating real trigger states. */
   {}
   
   /* Updating time comparison states. */
   {}
   
   /* Updating sample states. */
   {}
   
   /* Updating continuous states. */
   *x1 /* speed */ = R(17) /* speed */;
   *x0 /* ifield */ = R(14) /* ifield */;
   
   /* Updating derivatives. */
   *xd1 /* speed */ = R(11) /* der(speed) */;
   *xd0 /* ifield */ = R(10) /* der(ifield) */;
   
   /* Updating residuals. */
   {}
   
   /* Updating integer simple variables. */
   {}
   
   /* Updating boolean simple variables. */
   {}
   
   /* Updating real simple variables. */
   *w19 /* u */ = R(19) /* u */;
   *w18 /* tswitchoff */ = R(18) /* tswitchoff */;
   *w17 /* k */ = R(16) /* k */;
   *w16 /* inertia */ = R(15) /* inertia */;
   *w15 /* iarm */ = R(13) /* iarm */;
   *w14 /* i */ = R(12) /* i */;
   *w13 /* x1 */ = R(11) /* der(speed) */;
   *w12 /* x0 */ = R(10) /* der(ifield) */;
   *w11 /* cvisc */ = R(9) /* cvisc */;
   *w8 /* Tem */ = R(8) /* Tem */;
   *w7 /* Rfield */ = R(7) /* Rfield */;
   *w6 /* Rarm1 */ = R(6) /* Rarm1 */;
   *w5 /* Rarm0 */ = R(5) /* Rarm0 */;
   *w4 /* Rarm */ = R(4) /* Rarm */;
   *w3 /* Pem */ = R(3) /* Pem */;
   *w2 /* Pe */ = R(2) /* Pe */;
   *w1 /* Lfield */ = R(1) /* Lfield */;
   *w0 /* BEMF */ = R(0) /* BEMF */;
   
   /* Updating output variables. */
   {}
   
   /* Finalizing call. */
   AMOContext_finalize_submodel_call(submodel_ctx);
/* <<<<<<<<<<<<End of Calculation Executable Statements. */
}

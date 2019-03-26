
/*  ------------------------------------------------------
     Routine name:  my_diagram
     Description:   
     Project file:  Шаблон привязки к свойствам на Си.prt

------------------------------------------------------  */

/*  --- Base generator data types --- */
/* Real data type */
typedef double g_real_type;
/* Integer data type */
typedef int g_int_type;
/* Boolean data type */
typedef char g_boolean_type;
/* Complex data type */
typedef complex_64 g_complex_type;


/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=1679281830;

const double property_w_default=1;
const double input_0_1__default=0;
const double out_0_1__default=0;
const double my_diagramv0_out_0_default=1;
const double my_diagramv1_out_0_default=0;
const double my_diagramv2_out_0_default=0;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 3
/* Internal state variables count */
#define state_vars_count 3
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.25
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.25
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0.25
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 1E19
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10
/* Real time synchronization flag */
#define MODEL_REAL_TIME_SYNC_FLAG 1
/* Real time synchronization gain */
#define MODEL_REAL_TIME_SYNC_GAIN 1


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"property:w",   vt_double,   {1}, 0,dir_input,"", (void*)&property_w_default, sizeof(double)} ,
{"input:0[1]",   vt_double,   {1}, 1,dir_input,"", (void*)&input_0_1__default, sizeof(double)} ,
{"out:0[1]",   vt_double,   {1}, 2,dir_out,"", (void*)&out_0_1__default, sizeof(double)} 
};
#define property_w (*(double*)(ext_vars_addr[0]))
#define input_0_1_ (*(double*)(ext_vars_addr[1]))
#define out_0_1_ (*(double*)(ext_vars_addr[2]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"my_diagramv0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&my_diagramv0_out_0_default, sizeof(double)} ,
{"my_diagramv1_out_0",   vt_double,   {1}, 8, dir_inout,"Input pin state variable", (void*)&my_diagramv1_out_0_default, sizeof(double)} ,
{"my_diagramv2_out_0",   vt_double,   {1}, 16, dir_inout,"Language out", (void*)&my_diagramv2_out_0_default, sizeof(double)} 
};
   typedef struct {
double my_diagramv0_out_0_;
double my_diagramv1_out_0_;
double my_diagramv2_out_0_;
   } t_state_vars;
  typedef char t_consts;
  typedef char t_local;

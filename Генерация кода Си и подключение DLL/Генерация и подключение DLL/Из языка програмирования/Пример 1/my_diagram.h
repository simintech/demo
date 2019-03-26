
/*  ------------------------------------------------------
     Routine name:  my_diagram
     Description:   
     Project file:  Шаблон.prt

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
const unsigned int sp_sheme_hash_32=1203504743;

const double out_0_default=0;
const double out_1_default=0;
const double v0x_default=0;
const double my_diagramv0_out_0_default=0;
const double my_diagramv0_out_1_default=0;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 2
/* Dynamical variables count */
#define din_vars_count 1
/* Internal state variables count */
#define state_vars_count 2
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.001
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.001
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0.001
/* Model integration method */
#define INTEGRATION_METHOD 5
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 100
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"out:0",   vt_double,   {1}, 0,dir_out,"", (void*)&out_0_default, sizeof(double)} ,
{"out:1",   vt_double,   {1}, 1,dir_out,"", (void*)&out_1_default, sizeof(double)} 
};
#define out_0 (*(double*)(ext_vars_addr[0]))
#define out_1 (*(double*)(ext_vars_addr[1]))

const ext_var_info_record din_vars_names[din_vars_count] = {
{"v0x",   vt_double,   {1}, 0, dir_inout,"", (void*)&v0x_default, sizeof(double)} 
};
#define din_vars_dimension 1
#define v0x din_vars[0]
#define v0x_deri derivates[0]

const ext_var_info_record state_vars_names[state_vars_count] = {
{"my_diagramv0_out_0",   vt_double,   {1}, 0, dir_inout,"Language out", (void*)&my_diagramv0_out_0_default, sizeof(double)} ,
{"my_diagramv0_out_1",   vt_double,   {1}, 8, dir_inout,"Language out", (void*)&my_diagramv0_out_1_default, sizeof(double)} 
};
   typedef struct {
double my_diagramv0_out_0_;
double my_diagramv0_out_1_;
   } t_state_vars;
  typedef char t_consts;
  typedef char t_local;

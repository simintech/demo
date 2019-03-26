
/*  ------------------------------------------------------
     Routine name:  test
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
const unsigned int sp_sheme_hash_32=931763690;

const double _name_x1_1__default=0;
const double property_delta_default=0;
const double _name_y1_default=2;
const double testv0_out_0_default=0;
const double testv1_out_0_default=0;
const double testv2_t_default=0;
const double testv2_out_1_default=0;
const char testv2_out_0_default=0;
const char testv2_timer_default=0;
const double testv2_tau_default=2;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 3
/* Internal state variables count */
#define state_vars_count 6
/* Constants count */
#define const_count 1
/* Local variables count */
#define local_count 1
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
{"%name%x1[1]",   vt_double,   {1}, 0,dir_input,"", (void*)&_name_x1_1__default, sizeof(double)} ,
{"property:delta",   vt_double,   {1}, 1,dir_input,"", (void*)&property_delta_default, sizeof(double)} ,
{"%name%y1",   vt_double,   {1}, 2,dir_out,"", (void*)&_name_y1_default, sizeof(double)} 
};
#define _name_x1_1_ (*(double*)(ext_vars_addr[0]))
#define property_delta (*(double*)(ext_vars_addr[1]))
#define _name_y1 (*(double*)(ext_vars_addr[2]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"testv0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&testv0_out_0_default, sizeof(double)} ,
{"testv1_out_0",   vt_double,   {1}, 8, dir_inout,"Input pin state variable", (void*)&testv1_out_0_default, sizeof(double)} ,
{"testv2_t",   vt_double,   {1}, 16, dir_inout,"TTimeAccept_On curent time", (void*)&testv2_t_default, sizeof(double)} ,
{"testv2_out_1",   vt_double,   {1}, 24, dir_inout,"TTimeAccept_Ontimer out", (void*)&testv2_out_1_default, sizeof(double)} ,
{"testv2_out_0",   vt_bool,   {1}, 32, dir_inout,"TTimeAccept_On out value", (void*)&testv2_out_0_default, sizeof(char)} ,
{"testv2_timer",   vt_bool,   {1}, 33, dir_inout,"TTimeAccept_On timer flags", (void*)&testv2_timer_default, sizeof(char)} 
};
   typedef struct {
double testv0_out_0_;
double testv1_out_0_;
double testv2_t_;
double testv2_out_1_;
char testv2_out_0_;
char testv2_timer_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"testv2_tau",   vt_double,   {1}, 0, dir_input,"TTimeAccept_On Tau", (void*)&testv2_tau_default, sizeof(double)} 
};
   typedef struct {
double testv2_tau_;
   } t_consts;
   typedef struct {
double v3_out_0_;
   } t_local;

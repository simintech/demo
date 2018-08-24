
/*  ------------------------------------------------------
     Routine name:  prog_1
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
const unsigned int sp_sheme_hash_32=810511745;

const double input_0_default=0;
const double input_1_default=0;
const double property_aaa_default=2;
const double out_0_default=0;
const double prog_1v0_out_0_default=0;
const double prog_1v1_out_0_default=0;
const double prog_1v2_out_0_default=2;
const double prog_1v3_out_0_default=0;
const double prog_1v3_my_global_external_var_default=1.5;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 4
/* Internal state variables count */
#define state_vars_count 5
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 1E-5
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 1
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 5
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1
/* Model end time */
#define INTEGRATION_END_TIME 10
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_default, sizeof(double)} ,
{"input:1",   vt_double,   {1}, 1,dir_input,"", (void*)&input_1_default, sizeof(double)} ,
{"property:aaa",   vt_double,   {1}, 2,dir_input,"", (void*)&property_aaa_default, sizeof(double)} ,
{"out:0",   vt_double,   {1}, 3,dir_out,"", (void*)&out_0_default, sizeof(double)} 
};
#define input_0 (*(double*)(ext_vars_addr[0]))
#define input_1 (*(double*)(ext_vars_addr[1]))
#define property_aaa (*(double*)(ext_vars_addr[2]))
#define out_0 (*(double*)(ext_vars_addr[3]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"prog_1v0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&prog_1v0_out_0_default, sizeof(double)} ,
{"prog_1v1_out_0",   vt_double,   {1}, 8, dir_inout,"Input pin state variable", (void*)&prog_1v1_out_0_default, sizeof(double)} ,
{"prog_1v2_out_0",   vt_double,   {1}, 16, dir_inout,"Input pin state variable", (void*)&prog_1v2_out_0_default, sizeof(double)} ,
{"prog_1v3_out_0",   vt_double,   {1}, 24, dir_inout,"Language out", (void*)&prog_1v3_out_0_default, sizeof(double)} ,
{"prog_1v3_my_global_external_var",   vt_double,   {1}, 32, dir_inout,"Наша переменная", (void*)&prog_1v3_my_global_external_var_default, sizeof(double)} 
};
   typedef struct {
double prog_1v0_out_0_;
double prog_1v1_out_0_;
double prog_1v2_out_0_;
double prog_1v3_out_0_;
double prog_1v3_my_global_external_var_;
   } t_state_vars;
#define prog_1v3_my_global_external_var state_vars->prog_1v3_my_global_external_var_
  typedef char t_consts;
  typedef char t_local;

#ifndef my_header
#define my_header

double myproc(double x, double y)
{
	double result;

	result = x + y;

	return result;
};

#endif

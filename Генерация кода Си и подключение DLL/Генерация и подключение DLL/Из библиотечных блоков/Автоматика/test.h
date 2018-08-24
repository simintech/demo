
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

typedef double  double_2[2];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=2449205528;

const double input_0_1__default=0;
const double input_0_2__default=0;
const double input_1_default=0;
const double out_0_1__default=0;
const double out_0_2__default=0;
const double_2 testv2_out_0_default={0,0};
const double_2 testv3_x_default={0,0};
const double_2 testv0_out_0_default={0,0};
const double testv1_out_0_default=0;
const double_2 testv3_out_0_default={0,0};
const double_2 testv2_k_default={1,10};
const double_2 testv2_t_default={1,1};
const double_2 testv3_k_default={10,1};
const double_2 testv3_ymin_default={0,0};
const double_2 testv3_ymax_default={5,5};

/* Main structures defines */
/* External variables count */
#define ext_vars_count 5
/* Dynamical variables count */
#define din_vars_count 2
/* Internal state variables count */
#define state_vars_count 3
/* Constants count */
#define const_count 5
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.01
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.01
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0.01
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 100000
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10
/* Real time synchronization flag */
#define MODEL_REAL_TIME_SYNC_FLAG 1
/* Real time synchronization gain */
#define MODEL_REAL_TIME_SYNC_GAIN 1


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0[1]",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_1__default, sizeof(double)} ,
{"input:0[2]",   vt_double,   {1}, 1,dir_input,"", (void*)&input_0_2__default, sizeof(double)} ,
{"input:1",   vt_double,   {1}, 2,dir_input,"", (void*)&input_1_default, sizeof(double)} ,
{"out:0[1]",   vt_double,   {1}, 3,dir_out,"", (void*)&out_0_1__default, sizeof(double)} ,
{"out:0[2]",   vt_double,   {1}, 4,dir_out,"", (void*)&out_0_2__default, sizeof(double)} 
};
#define input_0_1_ (*(double*)(ext_vars_addr[0]))
#define input_0_2_ (*(double*)(ext_vars_addr[1]))
#define input_1 (*(double*)(ext_vars_addr[2]))
#define out_0_1_ (*(double*)(ext_vars_addr[3]))
#define out_0_2_ (*(double*)(ext_vars_addr[4]))

const ext_var_info_record din_vars_names[din_vars_count] = {
{"testv2_out_0",   vt_double,   {2}, 0, dir_inout,"TAperiodika1 integrator output", (void*)&testv2_out_0_default, sizeof(double_2)} ,
{"testv3_x",   vt_double,   {2}, 2, dir_inout,"TLimitIntegrator state variable", (void*)&testv3_x_default, sizeof(double_2)} 
};
#define din_vars_dimension 4
#define testv2_out_0 (*(double_2*)(&(din_vars[0])))
#define testv2_out_0_deri (*(double_2*)(&(derivates[0])))
#define testv3_x (*(double_2*)(&(din_vars[2])))
#define testv3_x_deri (*(double_2*)(&(derivates[2])))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"testv0_out_0",   vt_double,   {2}, 0, dir_inout,"Input pin state variable", (void*)&testv0_out_0_default, sizeof(double_2)} ,
{"testv1_out_0",   vt_double,   {1}, 16, dir_inout,"Input pin state variable", (void*)&testv1_out_0_default, sizeof(double)} ,
{"testv3_out_0",   vt_double,   {2}, 24, dir_inout,"TLimitIntegrator integrator output", (void*)&testv3_out_0_default, sizeof(double_2)} 
};
   typedef struct {
double_2 testv0_out_0_;
double testv1_out_0_;
double_2 testv3_out_0_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"testv2_k",   vt_double,   {2}, 0, dir_input,"TAperiodika1 gain", (void*)&testv2_k_default, sizeof(double_2)} ,
{"testv2_t",   vt_double,   {2}, 16, dir_input,"Aperiodika T", (void*)&testv2_t_default, sizeof(double_2)} ,
{"testv3_k",   vt_double,   {2}, 32, dir_input,"TLimitIntegrator gain", (void*)&testv3_k_default, sizeof(double_2)} ,
{"testv3_ymin",   vt_double,   {2}, 48, dir_input,"Low limit of integrator", (void*)&testv3_ymin_default, sizeof(double_2)} ,
{"testv3_ymax",   vt_double,   {2}, 64, dir_input,"High limit of integrator", (void*)&testv3_ymax_default, sizeof(double_2)} 
};
   typedef struct {
double_2 testv2_k_;
double_2 testv2_t_;
double_2 testv3_k_;
double_2 testv3_ymin_;
double_2 testv3_ymax_;
   } t_consts;
  typedef char t_local;


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

#include "splae_funcs.h"
typedef double  double_3[3];
typedef double  double_4[4];
typedef int  int_3[3];
typedef int  int_4[4];
typedef double  double_2[2];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=1889550803;

const double input_0_1__default=0;
const double out_0_1__default=0;
const double out_0_2__default=0;
const double out_0_3__default=0;
const double my_diagramv0_out_0_default=0;
const double my_diagramv17_out_0_default=0;
const double my_diagramv18_out_0_default=0;
const double my_diagramv28_out_0_default=0;
const double my_diagramv37_coefs_default=0;
const double my_diagramv39_out_0_default=0;
const double_3 my_diagramv60_coefs_default={0,0,0};
const double my_diagramv67_out_0_default=0;
const double my_diagramv68_out_0_default=0;
const double my_diagramv69_out_0_default=0;
const double my_diagramv70_out_0_default=0;
const double my_diagramv71_out_0_default=0;
const double my_diagramv72_out_0_default=0;
const double_3 my_diagramv75_coefs_default={0,0,0};
const double_4 my_diagramv80_coefs_default={0,0,0,0};
const double_3 my_diagramv84_coefs_default={0,0,0};
const int my_diagramv37_idxs_default=0;
const int_3 my_diagramv60_idxs_default={0,0,0};
const int_3 my_diagramv75_idxs_default={0,0,0};
const int_4 my_diagramv80_idxs_default={0,0,0,0};
const int_3 my_diagramv84_idxs_default={0,0,0};
const double my_diagramv1_a_default=0;
const double my_diagramv2_a_default=1;
const double my_diagramv4_a_default=2;
const double my_diagramv6_a_default=1.5E-6;
const double my_diagramv9_a_default=0.0075;
const double my_diagramv11_a_default=0;
const double my_diagramv12_a_default=10000;
const double my_diagramv15_a_default=0;
const double my_diagramv16_a_default=0.02;
const double my_diagramv23_a_default=-1;
const double my_diagramv26_a_default=2;
const double my_diagramv33_a_default=-1;
const double my_diagramv38_a_default=-1;
const double my_diagramv43_a_default=0;
const double my_diagramv43_b_default=0.778273761431985;
const double my_diagramv44_a_default=1E-9;
const double my_diagramv44_b_default=38.4615384615385;
const double my_diagramv44_c_default=0;
const double my_diagramv47_a_default=38.4615384615385;
const double my_diagramv48_a_default=1E-6;
const double my_diagramv48_b_default=1;
const double my_diagramv50_a_default=-1;
const double my_diagramv53_a_default=-1E-9;
const double my_diagramv53_b_default=1;
const double my_diagramv57_a_default=-1;
const double my_diagramv63_a_default=-1;
const double my_diagramv81_a_default=-1;
const double my_diagramv82_a_default=-1;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 4
/* Internal state variables count */
#define state_vars_count 21
/* Constants count */
#define const_count 28
/* Local variables count */
#define local_count 32
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.0001
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.0001
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0.0001
/* Model integration method */
#define INTEGRATION_METHOD 2
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 0.2
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0[1]",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_1__default, sizeof(double)} ,
{"out:0[1]",   vt_double,   {1}, 1,dir_out,"", (void*)&out_0_1__default, sizeof(double)} ,
{"out:0[2]",   vt_double,   {1}, 2,dir_out,"", (void*)&out_0_2__default, sizeof(double)} ,
{"out:0[3]",   vt_double,   {1}, 3,dir_out,"", (void*)&out_0_3__default, sizeof(double)} 
};
#define input_0_1_ (*(double*)(ext_vars_addr[0]))
#define out_0_1_ (*(double*)(ext_vars_addr[1]))
#define out_0_2_ (*(double*)(ext_vars_addr[2]))
#define out_0_3_ (*(double*)(ext_vars_addr[3]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"my_diagramv0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&my_diagramv0_out_0_default, sizeof(double)} ,
{"my_diagramv17_out_0",   vt_double,   {1}, 8, dir_inout,"LAE result block output", (void*)&my_diagramv17_out_0_default, sizeof(double)} ,
{"my_diagramv18_out_0",   vt_double,   {1}, 16, dir_inout,"LAE result block output", (void*)&my_diagramv18_out_0_default, sizeof(double)} ,
{"my_diagramv28_out_0",   vt_double,   {1}, 24, dir_inout,"LAE result block output", (void*)&my_diagramv28_out_0_default, sizeof(double)} ,
{"my_diagramv37_coefs",   vt_double,   {1}, 32, dir_inout,"LAE line coefs values", (void*)&my_diagramv37_coefs_default, sizeof(double)} ,
{"my_diagramv39_out_0",   vt_double,   {1}, 40, dir_inout,"LAE result block output", (void*)&my_diagramv39_out_0_default, sizeof(double)} ,
{"my_diagramv60_coefs",   vt_double,   {3}, 48, dir_inout,"LAE line coefs values", (void*)&my_diagramv60_coefs_default, sizeof(double_3)} ,
{"my_diagramv67_out_0",   vt_double,   {1}, 72, dir_inout,"Step delay state", (void*)&my_diagramv67_out_0_default, sizeof(double)} ,
{"my_diagramv68_out_0",   vt_double,   {1}, 80, dir_inout,"Step delay state", (void*)&my_diagramv68_out_0_default, sizeof(double)} ,
{"my_diagramv69_out_0",   vt_double,   {1}, 88, dir_inout,"Step delay state", (void*)&my_diagramv69_out_0_default, sizeof(double)} ,
{"my_diagramv70_out_0",   vt_double,   {1}, 96, dir_inout,"Step delay state", (void*)&my_diagramv70_out_0_default, sizeof(double)} ,
{"my_diagramv71_out_0",   vt_double,   {1}, 104, dir_inout,"Step delay state", (void*)&my_diagramv71_out_0_default, sizeof(double)} ,
{"my_diagramv72_out_0",   vt_double,   {1}, 112, dir_inout,"Step delay state", (void*)&my_diagramv72_out_0_default, sizeof(double)} ,
{"my_diagramv75_coefs",   vt_double,   {3}, 120, dir_inout,"LAE line coefs values", (void*)&my_diagramv75_coefs_default, sizeof(double_3)} ,
{"my_diagramv80_coefs",   vt_double,   {4}, 144, dir_inout,"LAE line coefs values", (void*)&my_diagramv80_coefs_default, sizeof(double_4)} ,
{"my_diagramv84_coefs",   vt_double,   {3}, 176, dir_inout,"LAE line coefs values", (void*)&my_diagramv84_coefs_default, sizeof(double_3)} ,
{"my_diagramv37_idxs",   vt_int,   {1}, 200, dir_inout,"LAE line coefs indexes", (void*)&my_diagramv37_idxs_default, sizeof(int)} ,
{"my_diagramv60_idxs",   vt_int,   {3}, 204, dir_inout,"LAE line coefs indexes", (void*)&my_diagramv60_idxs_default, sizeof(int_3)} ,
{"my_diagramv75_idxs",   vt_int,   {3}, 216, dir_inout,"LAE line coefs indexes", (void*)&my_diagramv75_idxs_default, sizeof(int_3)} ,
{"my_diagramv80_idxs",   vt_int,   {4}, 228, dir_inout,"LAE line coefs indexes", (void*)&my_diagramv80_idxs_default, sizeof(int_4)} ,
{"my_diagramv84_idxs",   vt_int,   {3}, 244, dir_inout,"LAE line coefs indexes", (void*)&my_diagramv84_idxs_default, sizeof(int_3)} 
};
   typedef struct {
double my_diagramv0_out_0_;
double my_diagramv17_out_0_;
double my_diagramv18_out_0_;
double my_diagramv28_out_0_;
double my_diagramv37_coefs_;
double my_diagramv39_out_0_;
double_3 my_diagramv60_coefs_;
double my_diagramv67_out_0_;
double my_diagramv68_out_0_;
double my_diagramv69_out_0_;
double my_diagramv70_out_0_;
double my_diagramv71_out_0_;
double my_diagramv72_out_0_;
double_3 my_diagramv75_coefs_;
double_4 my_diagramv80_coefs_;
double_3 my_diagramv84_coefs_;
int my_diagramv37_idxs_;
int_3 my_diagramv60_idxs_;
int_3 my_diagramv75_idxs_;
int_4 my_diagramv80_idxs_;
int_3 my_diagramv84_idxs_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"my_diagramv1_a",   vt_double,   {1}, 0, dir_input,"Constant value", (void*)&my_diagramv1_a_default, sizeof(double)} ,
{"my_diagramv2_a",   vt_double,   {1}, 8, dir_input,"Constant value", (void*)&my_diagramv2_a_default, sizeof(double)} ,
{"my_diagramv4_a",   vt_double,   {1}, 16, dir_input,"Constant value", (void*)&my_diagramv4_a_default, sizeof(double)} ,
{"my_diagramv6_a",   vt_double,   {1}, 24, dir_input,"Constant value", (void*)&my_diagramv6_a_default, sizeof(double)} ,
{"my_diagramv9_a",   vt_double,   {1}, 32, dir_input,"Constant value", (void*)&my_diagramv9_a_default, sizeof(double)} ,
{"my_diagramv11_a",   vt_double,   {1}, 40, dir_input,"Constant value", (void*)&my_diagramv11_a_default, sizeof(double)} ,
{"my_diagramv12_a",   vt_double,   {1}, 48, dir_input,"Constant value", (void*)&my_diagramv12_a_default, sizeof(double)} ,
{"my_diagramv15_a",   vt_double,   {1}, 56, dir_input,"Constant value", (void*)&my_diagramv15_a_default, sizeof(double)} ,
{"my_diagramv16_a",   vt_double,   {1}, 64, dir_input,"Constant value", (void*)&my_diagramv16_a_default, sizeof(double)} ,
{"my_diagramv23_a",   vt_double,   {1}, 72, dir_input,"Ampliefer koefficient", (void*)&my_diagramv23_a_default, sizeof(double)} ,
{"my_diagramv26_a",   vt_double,   {1}, 80, dir_input,"Ampliefer koefficient", (void*)&my_diagramv26_a_default, sizeof(double)} ,
{"my_diagramv33_a",   vt_double,   {1}, 88, dir_input,"Ampliefer koefficient", (void*)&my_diagramv33_a_default, sizeof(double)} ,
{"my_diagramv38_a",   vt_double,   {1}, 96, dir_input,"Ampliefer koefficient", (void*)&my_diagramv38_a_default, sizeof(double)} ,
{"my_diagramv43_a",   vt_double,   {1}, 104, dir_input,"Line convert low", (void*)&my_diagramv43_a_default, sizeof(double)} ,
{"my_diagramv43_b",   vt_double,   {1}, 112, dir_input,"Line convert high", (void*)&my_diagramv43_b_default, sizeof(double)} ,
{"my_diagramv44_a",   vt_double,   {1}, 120, dir_input,"Exp gain a", (void*)&my_diagramv44_a_default, sizeof(double)} ,
{"my_diagramv44_b",   vt_double,   {1}, 128, dir_input,"Exp gain b", (void*)&my_diagramv44_b_default, sizeof(double)} ,
{"my_diagramv44_c",   vt_double,   {1}, 136, dir_input,"Exp gain c", (void*)&my_diagramv44_c_default, sizeof(double)} ,
{"my_diagramv47_a",   vt_double,   {1}, 144, dir_input,"Ampliefer koefficient", (void*)&my_diagramv47_a_default, sizeof(double)} ,
{"my_diagramv48_a",   vt_double,   {1}, 152, dir_input,"Pokaz gain a", (void*)&my_diagramv48_a_default, sizeof(double)} ,
{"my_diagramv48_b",   vt_double,   {1}, 160, dir_input,"Gain b", (void*)&my_diagramv48_b_default, sizeof(double)} ,
{"my_diagramv50_a",   vt_double,   {1}, 168, dir_input,"Ampliefer koefficient", (void*)&my_diagramv50_a_default, sizeof(double)} ,
{"my_diagramv53_a",   vt_double,   {1}, 176, dir_input,"Pokaz gain a", (void*)&my_diagramv53_a_default, sizeof(double)} ,
{"my_diagramv53_b",   vt_double,   {1}, 184, dir_input,"Gain b", (void*)&my_diagramv53_b_default, sizeof(double)} ,
{"my_diagramv57_a",   vt_double,   {1}, 192, dir_input,"Ampliefer koefficient", (void*)&my_diagramv57_a_default, sizeof(double)} ,
{"my_diagramv63_a",   vt_double,   {1}, 200, dir_input,"Ampliefer koefficient", (void*)&my_diagramv63_a_default, sizeof(double)} ,
{"my_diagramv81_a",   vt_double,   {1}, 208, dir_input,"Ampliefer koefficient", (void*)&my_diagramv81_a_default, sizeof(double)} ,
{"my_diagramv82_a",   vt_double,   {1}, 216, dir_input,"Ampliefer koefficient", (void*)&my_diagramv82_a_default, sizeof(double)} 
};
   typedef struct {
double my_diagramv1_a_;
double my_diagramv2_a_;
double my_diagramv4_a_;
double my_diagramv6_a_;
double my_diagramv9_a_;
double my_diagramv11_a_;
double my_diagramv12_a_;
double my_diagramv15_a_;
double my_diagramv16_a_;
double my_diagramv23_a_;
double my_diagramv26_a_;
double my_diagramv33_a_;
double my_diagramv38_a_;
double my_diagramv43_a_;
double my_diagramv43_b_;
double my_diagramv44_a_;
double my_diagramv44_b_;
double my_diagramv44_c_;
double my_diagramv47_a_;
double my_diagramv48_a_;
double my_diagramv48_b_;
double my_diagramv50_a_;
double my_diagramv53_a_;
double my_diagramv53_b_;
double my_diagramv57_a_;
double my_diagramv63_a_;
double my_diagramv81_a_;
double my_diagramv82_a_;
   } t_consts;
   typedef struct {
double v19_out_0_;
double v20_out_0_;
double v21_out_0_;
double_2 v22_out_0_;
double_2 v23_out_0_;
double_3 v25_out_0_;
double v29_out_0_;
double v30_out_0_;
double v31_out_0_;
double_3 v35_out_0_;
double v41_out_0_;
double v43_out_0_;
double v45_out_0_;
double v46_out_0_;
double v47_out_0_;
double v51_out_0_;
double_3 v52_out_0_;
double_3 v63_out_0_;
double_4 v65_out_0_;
int64_t solverid_lsolver1_;
int64_t sparce_solv_intf_lsolver1_;
int laecounter_lsolver1_;
int my_diagramv3_out_0_;
int my_diagramv7_out_0_;
int my_diagramv10_out_0_;
int my_diagramv13_out_0_;
int my_diagramv14_out_0_;
int_3 v27_out_0_;
int_3 v36_out_0_;
int_3 v59_out_0_;
int_4 v66_out_0_;
char first_call_flag_lsolver1_;
   } t_local;

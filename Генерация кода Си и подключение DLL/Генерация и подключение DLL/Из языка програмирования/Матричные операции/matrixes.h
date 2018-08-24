
/*  ------------------------------------------------------
     Routine name:  matrixes
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

#include "matrixes.h"
typedef double  double_2[2];
typedef double  double_4[4];
typedef int  int_2[2];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=701005866;

const double_2 input_0_default={1,2};
const double_2 out_0_default={5,10};
const double out_1_default=-2.5;
const double_2 matrixesv0_out_0_default={1,2};
const double_2 matrixesv1_out_0_default={5,10};
const double matrixesv1_out_1_default=-2.5;
const double_4 v1m_default={1,0.5,7,1};
const double_2 v1zz_default={10,45};
const double_2 v1v1_sinit__func_res_0_default={1,0.5};
const double_2 v1v1_sinit__func_res_2_default={-0.5,1};
const double_4 v1v1_sinit__func_res_4_default={1,0.5,-0.5,1};
const double_4 v1v1___func_res_1_default={2,1,14,2};
const double_4 v1v1___func_res_4_default={3,1.5,21,3};
const double_4 v1v1___func_res_7_default={5,2.5,35,5};
const double_2 v1v1___func_res_10_default={1,2};
const double_2 v1v1___func_res_11_default={10,45};
const double_2 v1v1___func_res_15_default={10,45};
const double_2 v1v1___func_res_18_default={5,10};
const double_4 v1v1___func_data_a_temp_18_default={1,0.5,7,1};
const double_2 v1v1___func_data_a_vv_18_default={0,0};
const double v1v1___func_res_22_default=-2.5;
const double_4 v1v1___func_data_a_temp_22_default={1,0.5,7,1};
const double_2 v1v1___func_data_a_vv_22_default={0,0};
const int_2 v1v1___func_data_indx_18_default={0,0};
const int_2 v1v1___func_data_swap_18_default={0,0};
const int_2 v1v1___func_data_indx_22_default={0,0};
const int_2 v1v1___func_data_swap_22_default={0,0};

/* Main structures defines */
/* External variables count */
#define ext_vars_count 3
/* Internal state variables count */
#define state_vars_count 24
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.001
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.1
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 5
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
{"input:0",   vt_double,   {2}, 0,dir_input,"", (void*)&input_0_default, sizeof(double_2)} ,
{"out:0",   vt_double,   {2}, 1,dir_out,"", (void*)&out_0_default, sizeof(double_2)} ,
{"out:1",   vt_double,   {1}, 2,dir_out,"", (void*)&out_1_default, sizeof(double)} 
};
#define input_0 (*(double_2*)(ext_vars_addr[0]))
#define out_0 (*(double_2*)(ext_vars_addr[1]))
#define out_1 (*(double*)(ext_vars_addr[2]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"matrixesv0_out_0",   vt_double,   {2}, 0, dir_inout,"Input pin state variable", (void*)&matrixesv0_out_0_default, sizeof(double_2)} ,
{"matrixesv1_out_0",   vt_double,   {2}, 16, dir_inout,"Language out", (void*)&matrixesv1_out_0_default, sizeof(double_2)} ,
{"matrixesv1_out_1",   vt_double,   {1}, 32, dir_inout,"Language out", (void*)&matrixesv1_out_1_default, sizeof(double)} ,
{"v1m",   vt_double,   {4}, 40, dir_inout,"", (void*)&v1m_default, sizeof(double_4)} ,
{"v1zz",   vt_double,   {2}, 72, dir_inout,"", (void*)&v1zz_default, sizeof(double_2)} ,
{"v1v1_sinit__func_res_0",   vt_double,   {2}, 88, dir_inout,"", (void*)&v1v1_sinit__func_res_0_default, sizeof(double_2)} ,
{"v1v1_sinit__func_res_2",   vt_double,   {2}, 104, dir_inout,"", (void*)&v1v1_sinit__func_res_2_default, sizeof(double_2)} ,
{"v1v1_sinit__func_res_4",   vt_double,   {4}, 120, dir_inout,"", (void*)&v1v1_sinit__func_res_4_default, sizeof(double_4)} ,
{"v1v1___func_res_1",   vt_double,   {4}, 152, dir_inout,"", (void*)&v1v1___func_res_1_default, sizeof(double_4)} ,
{"v1v1___func_res_4",   vt_double,   {4}, 184, dir_inout,"", (void*)&v1v1___func_res_4_default, sizeof(double_4)} ,
{"v1v1___func_res_7",   vt_double,   {4}, 216, dir_inout,"", (void*)&v1v1___func_res_7_default, sizeof(double_4)} ,
{"v1v1___func_res_10",   vt_double,   {2}, 248, dir_inout,"", (void*)&v1v1___func_res_10_default, sizeof(double_2)} ,
{"v1v1___func_res_11",   vt_double,   {2}, 264, dir_inout,"", (void*)&v1v1___func_res_11_default, sizeof(double_2)} ,
{"v1v1___func_res_15",   vt_double,   {2}, 280, dir_inout,"", (void*)&v1v1___func_res_15_default, sizeof(double_2)} ,
{"v1v1___func_res_18",   vt_double,   {2}, 296, dir_inout,"", (void*)&v1v1___func_res_18_default, sizeof(double_2)} ,
{"v1v1___func_data_a_temp_18",   vt_double,   {4}, 312, dir_inout,"", (void*)&v1v1___func_data_a_temp_18_default, sizeof(double_4)} ,
{"v1v1___func_data_a_vv_18",   vt_double,   {2}, 344, dir_inout,"", (void*)&v1v1___func_data_a_vv_18_default, sizeof(double_2)} ,
{"v1v1___func_res_22",   vt_double,   {1}, 360, dir_inout,"", (void*)&v1v1___func_res_22_default, sizeof(double)} ,
{"v1v1___func_data_a_temp_22",   vt_double,   {4}, 368, dir_inout,"", (void*)&v1v1___func_data_a_temp_22_default, sizeof(double_4)} ,
{"v1v1___func_data_a_vv_22",   vt_double,   {2}, 400, dir_inout,"", (void*)&v1v1___func_data_a_vv_22_default, sizeof(double_2)} ,
{"v1v1___func_data_indx_18",   vt_int,   {2}, 416, dir_inout,"", (void*)&v1v1___func_data_indx_18_default, sizeof(int_2)} ,
{"v1v1___func_data_swap_18",   vt_int,   {2}, 424, dir_inout,"", (void*)&v1v1___func_data_swap_18_default, sizeof(int_2)} ,
{"v1v1___func_data_indx_22",   vt_int,   {2}, 432, dir_inout,"", (void*)&v1v1___func_data_indx_22_default, sizeof(int_2)} ,
{"v1v1___func_data_swap_22",   vt_int,   {2}, 440, dir_inout,"", (void*)&v1v1___func_data_swap_22_default, sizeof(int_2)} 
};
   typedef struct {
double_2 matrixesv0_out_0_;
double_2 matrixesv1_out_0_;
double matrixesv1_out_1_;
double_4 v1m_;
double_2 v1zz_;
double_2 v1v1_sinit__func_res_0_;
double_2 v1v1_sinit__func_res_2_;
double_4 v1v1_sinit__func_res_4_;
double_4 v1v1___func_res_1_;
double_4 v1v1___func_res_4_;
double_4 v1v1___func_res_7_;
double_2 v1v1___func_res_10_;
double_2 v1v1___func_res_11_;
double_2 v1v1___func_res_15_;
double_2 v1v1___func_res_18_;
double_4 v1v1___func_data_a_temp_18_;
double_2 v1v1___func_data_a_vv_18_;
double v1v1___func_res_22_;
double_4 v1v1___func_data_a_temp_22_;
double_2 v1v1___func_data_a_vv_22_;
int_2 v1v1___func_data_indx_18_;
int_2 v1v1___func_data_swap_18_;
int_2 v1v1___func_data_indx_22_;
int_2 v1v1___func_data_swap_22_;
   } t_state_vars;
  typedef char t_consts;
  typedef char t_local;

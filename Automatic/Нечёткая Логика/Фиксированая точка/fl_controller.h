
/*  ------------------------------------------------------
     Routine name:  fl_controller
     Description:   
     Project file:  fl_controller_fp.prt

------------------------------------------------------  */

//  --- Base generator data types ---
//Real data type
typedef double g_real_type;
//Integer data type
typedef int g_int_type;

typedef double  double_3[3];
typedef double  double_5[5];

//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=2800126684;

const double input_0_default=0;
const double input_1_default=0;
const double out_0_default=-0.000380704914383726;
const double fl_controllerv11_out_0_default=0;
const double fl_controllerv12_out_0_default=0;
const double fl_controllerv0_a_default=1;
const double fl_controllerv1_a_default=1;
const double fl_controllerv2_a_default=1;
const double fl_controllerv3_a_default=1;
const double fl_controllerv4_a_default=1;
const double_3 fl_controllerv5_a_default={-1,0,1};
const double_3 fl_controllerv6_a_default={0.3,0.3,0.3};
const double fl_controllerv7_a_default=1;
const double_3 fl_controllerv8_a_default={-0.1,0,0.1};
const double_3 fl_controllerv9_a_default={0.03,0.03,0.03};
const double fl_controllerv10_a_default=1;
const double_5 fl_controllerv13_a_default={-0.9,-0.5,0,0.4,0.9};
const double fl_controllerv14_a_default=1E-9;
const double_3 fl_controllerv15_m_default={1,1,1};
const double_3 fl_controllerv19_a0_default={0,0,0};
const double_3 fl_controllerv19_a1_default={0,0,0};
const double_3 fl_controllerv19_a2_default={-1,-1,-1};
const double_3 fl_controllerv20_a0_default={0,0,0};
const double_3 fl_controllerv20_a1_default={0,0,0};
const double_3 fl_controllerv20_a2_default={2,2,2};
const double_3 fl_controllerv22_a_default={1,1,1};
const double_3 fl_controllerv22_b_default={1,1,1};
const double_3 fl_controllerv22_c_default={0,0,0};
const double fl_controllerv24_k_default=0;
const double fl_controllerv26_k_default=0;
const double_3 fl_controllerv31_m_default={1,1,1};
const double_3 fl_controllerv35_a0_default={0,0,0};
const double_3 fl_controllerv35_a1_default={0,0,0};
const double_3 fl_controllerv35_a2_default={-1,-1,-1};
const double_3 fl_controllerv36_a0_default={0,0,0};
const double_3 fl_controllerv36_a1_default={0,0,0};
const double_3 fl_controllerv36_a2_default={2,2,2};
const double_3 fl_controllerv38_a_default={1,1,1};
const double_3 fl_controllerv38_b_default={1,1,1};
const double_3 fl_controllerv38_c_default={0,0,0};
const double fl_controllerv40_k_default=0;
const double fl_controllerv42_k_default=0;

//Main structures defines
//External variables count
#define ext_vars_count 3
//Internal state variables count
#define state_vars_count 2
//Constants count
#define const_count 37
//Local variables count
#define local_count 15
//  --- Source model preferences ---
//Minimum integration step
#define INTEGRATION_MIN_STEP 0.25
//Maximum integration step
#define INTEGRATION_MAX_STEP 0.25
//Model integration method
#define INTEGRATION_METHOD 0
//Model relative error
#define INTEGRATION_RELATIVE_ERROR 0.0001
//Model absolute error
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
//Model end time
#define INTEGRATION_END_TIME 1E19
//Real time synchronization flag
#define MODEL_REAL_TIME_SYNC_FLAG 1
//Real time synchronization gain
#define MODEL_REAL_TIME_SYNC_GAIN 1


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_default, sizeof(double)} ,
{"input:1",   vt_double,   {1}, 1,dir_input,"", (void*)&input_1_default, sizeof(double)} ,
{"out:0",   vt_double,   {1}, 2,dir_out,"", (void*)&out_0_default, sizeof(double)} 
};
#define input_0 (*(double*)(ext_vars_addr[0]))
#define input_1 (*(double*)(ext_vars_addr[1]))
#define out_0 (*(double*)(ext_vars_addr[2]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"fl_controllerv11_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&fl_controllerv11_out_0_default, sizeof(double)} ,
{"fl_controllerv12_out_0",   vt_double,   {1}, 8, dir_inout,"Input pin state variable", (void*)&fl_controllerv12_out_0_default, sizeof(double)} 
};
   typedef struct {
double fl_controllerv11_out_0_;
double fl_controllerv12_out_0_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"fl_controllerv0_a",   vt_double,   {1}, 0, dir_input,"Constant value", (void*)&fl_controllerv0_a_default, sizeof(double)} ,
{"fl_controllerv1_a",   vt_double,   {1}, 8, dir_input,"Constant value", (void*)&fl_controllerv1_a_default, sizeof(double)} ,
{"fl_controllerv2_a",   vt_double,   {1}, 16, dir_input,"Constant value", (void*)&fl_controllerv2_a_default, sizeof(double)} ,
{"fl_controllerv3_a",   vt_double,   {1}, 24, dir_input,"Constant value", (void*)&fl_controllerv3_a_default, sizeof(double)} ,
{"fl_controllerv4_a",   vt_double,   {1}, 32, dir_input,"Constant value", (void*)&fl_controllerv4_a_default, sizeof(double)} ,
{"fl_controllerv5_a",   vt_double,   {3}, 40, dir_input,"Constant value", (void*)&fl_controllerv5_a_default, sizeof(double_3)} ,
{"fl_controllerv6_a",   vt_double,   {3}, 64, dir_input,"Constant value", (void*)&fl_controllerv6_a_default, sizeof(double_3)} ,
{"fl_controllerv7_a",   vt_double,   {1}, 88, dir_input,"Constant value", (void*)&fl_controllerv7_a_default, sizeof(double)} ,
{"fl_controllerv8_a",   vt_double,   {3}, 96, dir_input,"Constant value", (void*)&fl_controllerv8_a_default, sizeof(double_3)} ,
{"fl_controllerv9_a",   vt_double,   {3}, 120, dir_input,"Constant value", (void*)&fl_controllerv9_a_default, sizeof(double_3)} ,
{"fl_controllerv10_a",   vt_double,   {1}, 144, dir_input,"Constant value", (void*)&fl_controllerv10_a_default, sizeof(double)} ,
{"fl_controllerv13_a",   vt_double,   {5}, 152, dir_input,"Constant value", (void*)&fl_controllerv13_a_default, sizeof(double_5)} ,
{"fl_controllerv14_a",   vt_double,   {1}, 192, dir_input,"Constant value", (void*)&fl_controllerv14_a_default, sizeof(double)} ,
{"fl_controllerv15_m",   vt_double,   {1,3}, 200, dir_input,"Coefficients of demultiplexor", (void*)&fl_controllerv15_m_default, sizeof(double_3)} ,
{"fl_controllerv19_a0",   vt_double,   {3}, 224, dir_input,"Parabolic a0", (void*)&fl_controllerv19_a0_default, sizeof(double_3)} ,
{"fl_controllerv19_a1",   vt_double,   {3}, 248, dir_input,"Parabolic a1", (void*)&fl_controllerv19_a1_default, sizeof(double_3)} ,
{"fl_controllerv19_a2",   vt_double,   {3}, 272, dir_input,"Parabolic a2", (void*)&fl_controllerv19_a2_default, sizeof(double_3)} ,
{"fl_controllerv20_a0",   vt_double,   {3}, 296, dir_input,"Parabolic a0", (void*)&fl_controllerv20_a0_default, sizeof(double_3)} ,
{"fl_controllerv20_a1",   vt_double,   {3}, 320, dir_input,"Parabolic a1", (void*)&fl_controllerv20_a1_default, sizeof(double_3)} ,
{"fl_controllerv20_a2",   vt_double,   {3}, 344, dir_input,"Parabolic a2", (void*)&fl_controllerv20_a2_default, sizeof(double_3)} ,
{"fl_controllerv22_a",   vt_double,   {3}, 368, dir_input,"Exp gain a", (void*)&fl_controllerv22_a_default, sizeof(double_3)} ,
{"fl_controllerv22_b",   vt_double,   {3}, 392, dir_input,"Exp gain b", (void*)&fl_controllerv22_b_default, sizeof(double_3)} ,
{"fl_controllerv22_c",   vt_double,   {3}, 416, dir_input,"Exp gain c", (void*)&fl_controllerv22_c_default, sizeof(double_3)} ,
{"fl_controllerv24_k",   vt_double,   {1}, 440, dir_input,"key 3 gain", (void*)&fl_controllerv24_k_default, sizeof(double)} ,
{"fl_controllerv26_k",   vt_double,   {1}, 448, dir_input,"key 3 gain", (void*)&fl_controllerv26_k_default, sizeof(double)} ,
{"fl_controllerv31_m",   vt_double,   {1,3}, 456, dir_input,"Coefficients of demultiplexor", (void*)&fl_controllerv31_m_default, sizeof(double_3)} ,
{"fl_controllerv35_a0",   vt_double,   {3}, 480, dir_input,"Parabolic a0", (void*)&fl_controllerv35_a0_default, sizeof(double_3)} ,
{"fl_controllerv35_a1",   vt_double,   {3}, 504, dir_input,"Parabolic a1", (void*)&fl_controllerv35_a1_default, sizeof(double_3)} ,
{"fl_controllerv35_a2",   vt_double,   {3}, 528, dir_input,"Parabolic a2", (void*)&fl_controllerv35_a2_default, sizeof(double_3)} ,
{"fl_controllerv36_a0",   vt_double,   {3}, 552, dir_input,"Parabolic a0", (void*)&fl_controllerv36_a0_default, sizeof(double_3)} ,
{"fl_controllerv36_a1",   vt_double,   {3}, 576, dir_input,"Parabolic a1", (void*)&fl_controllerv36_a1_default, sizeof(double_3)} ,
{"fl_controllerv36_a2",   vt_double,   {3}, 600, dir_input,"Parabolic a2", (void*)&fl_controllerv36_a2_default, sizeof(double_3)} ,
{"fl_controllerv38_a",   vt_double,   {3}, 624, dir_input,"Exp gain a", (void*)&fl_controllerv38_a_default, sizeof(double_3)} ,
{"fl_controllerv38_b",   vt_double,   {3}, 648, dir_input,"Exp gain b", (void*)&fl_controllerv38_b_default, sizeof(double_3)} ,
{"fl_controllerv38_c",   vt_double,   {3}, 672, dir_input,"Exp gain c", (void*)&fl_controllerv38_c_default, sizeof(double_3)} ,
{"fl_controllerv40_k",   vt_double,   {1}, 696, dir_input,"key 3 gain", (void*)&fl_controllerv40_k_default, sizeof(double)} ,
{"fl_controllerv42_k",   vt_double,   {1}, 704, dir_input,"key 3 gain", (void*)&fl_controllerv42_k_default, sizeof(double)} 
};
   typedef struct {
double fl_controllerv0_a_;
double fl_controllerv1_a_;
double fl_controllerv2_a_;
double fl_controllerv3_a_;
double fl_controllerv4_a_;
double_3 fl_controllerv5_a_;
double_3 fl_controllerv6_a_;
double fl_controllerv7_a_;
double_3 fl_controllerv8_a_;
double_3 fl_controllerv9_a_;
double fl_controllerv10_a_;
double_5 fl_controllerv13_a_;
double fl_controllerv14_a_;
double_3 fl_controllerv15_m_;
double_3 fl_controllerv19_a0_;
double_3 fl_controllerv19_a1_;
double_3 fl_controllerv19_a2_;
double_3 fl_controllerv20_a0_;
double_3 fl_controllerv20_a1_;
double_3 fl_controllerv20_a2_;
double_3 fl_controllerv22_a_;
double_3 fl_controllerv22_b_;
double_3 fl_controllerv22_c_;
double fl_controllerv24_k_;
double fl_controllerv26_k_;
double_3 fl_controllerv31_m_;
double_3 fl_controllerv35_a0_;
double_3 fl_controllerv35_a1_;
double_3 fl_controllerv35_a2_;
double_3 fl_controllerv36_a0_;
double_3 fl_controllerv36_a1_;
double_3 fl_controllerv36_a2_;
double_3 fl_controllerv38_a_;
double_3 fl_controllerv38_b_;
double_3 fl_controllerv38_c_;
double fl_controllerv40_k_;
double fl_controllerv42_k_;
   } t_consts;
   typedef struct {
double_3 v15_out_0_;
double v16_out_0_;
double v16_out_1_;
double v16_out_2_;
double_3 v18_out_0_;
double_3 v21_out_0_;
double v23_out_1_;
double v23_out_2_;
double v24_out_0_;
double v32_out_2_;
double v39_out_1_;
double v39_out_2_;
double v40_out_0_;
double_5 v50_out_0_;
double_5 v51_out_0_;
   } t_local;

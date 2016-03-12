
/*  ------------------------------------------------------
     Routine name:  fl_controller_fp
     Description:   
     Project file:  fl_controller_fp.prt

------------------------------------------------------  */

//  --- Base generator data types ---
//Real data type
typedef fix16_t g_real_type;
//Integer data type
typedef int g_int_type;

typedef fix16_t  fix16_t_3[3];
typedef fix16_t  fix16_t_5[5];

//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=2800126684;

const fix16_t input_0_default=0;
const fix16_t input_1_default=0;
const fix16_t out_0_default=-24;
const fix16_t fl_controller_fpv11_out_0_default=0;
const fix16_t fl_controller_fpv12_out_0_default=0;
const fix16_t fl_controller_fpv0_a_default=65536;
const fix16_t fl_controller_fpv1_a_default=65536;
const fix16_t fl_controller_fpv2_a_default=65536;
const fix16_t fl_controller_fpv3_a_default=65536;
const fix16_t fl_controller_fpv4_a_default=65536;
const fix16_t_3 fl_controller_fpv5_a_default={-65536,0,65536};
const fix16_t_3 fl_controller_fpv6_a_default={19660,19660,19660};
const fix16_t fl_controller_fpv7_a_default=65536;
const fix16_t_3 fl_controller_fpv8_a_default={-6553,0,6553};
const fix16_t_3 fl_controller_fpv9_a_default={1966,1966,1966};
const fix16_t fl_controller_fpv10_a_default=65536;
const fix16_t_5 fl_controller_fpv13_a_default={-58982,-32768,0,26214,58982};
const fix16_t fl_controller_fpv14_a_default=0;
const fix16_t_3 fl_controller_fpv15_m_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv19_a0_default={0,0,0};
const fix16_t_3 fl_controller_fpv19_a1_default={0,0,0};
const fix16_t_3 fl_controller_fpv19_a2_default={-65536,-65536,-65536};
const fix16_t_3 fl_controller_fpv20_a0_default={0,0,0};
const fix16_t_3 fl_controller_fpv20_a1_default={0,0,0};
const fix16_t_3 fl_controller_fpv20_a2_default={131072,131072,131072};
const fix16_t_3 fl_controller_fpv22_a_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv22_b_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv22_c_default={0,0,0};
const fix16_t fl_controller_fpv24_k_default=0;
const fix16_t fl_controller_fpv26_k_default=0;
const fix16_t_3 fl_controller_fpv31_m_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv35_a0_default={0,0,0};
const fix16_t_3 fl_controller_fpv35_a1_default={0,0,0};
const fix16_t_3 fl_controller_fpv35_a2_default={-65536,-65536,-65536};
const fix16_t_3 fl_controller_fpv36_a0_default={0,0,0};
const fix16_t_3 fl_controller_fpv36_a1_default={0,0,0};
const fix16_t_3 fl_controller_fpv36_a2_default={131072,131072,131072};
const fix16_t_3 fl_controller_fpv38_a_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv38_b_default={65536,65536,65536};
const fix16_t_3 fl_controller_fpv38_c_default={0,0,0};
const fix16_t fl_controller_fpv40_k_default=0;
const fix16_t fl_controller_fpv42_k_default=0;

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
#define INTEGRATION_MIN_STEP 16384
//Maximum integration step
#define INTEGRATION_MAX_STEP 16384
//Model integration method
#define INTEGRATION_METHOD 0
//Model relative error
#define INTEGRATION_RELATIVE_ERROR 6
//Model absolute error
#define INTEGRATION_ABSOLUTE_ERROR 0
//Model end time
#define INTEGRATION_END_TIME 2147483647
//Real time synchronization flag
#define MODEL_REAL_TIME_SYNC_FLAG 1
//Real time synchronization gain
#define MODEL_REAL_TIME_SYNC_GAIN 65536


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0",   vt_fix32,   {1}, 0,dir_input,"", (void*)&input_0_default, sizeof(fix16_t)} ,
{"input:1",   vt_fix32,   {1}, 1,dir_input,"", (void*)&input_1_default, sizeof(fix16_t)} ,
{"out:0",   vt_fix32,   {1}, 2,dir_out,"", (void*)&out_0_default, sizeof(fix16_t)} 
};
#define input_0 (*(fix16_t*)(ext_vars_addr[0]))
#define input_1 (*(fix16_t*)(ext_vars_addr[1]))
#define out_0 (*(fix16_t*)(ext_vars_addr[2]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"fl_controller_fpv11_out_0",   vt_fix32,   {1}, 0, dir_inout,"Input pin state variable", (void*)&fl_controller_fpv11_out_0_default, sizeof(fix16_t)} ,
{"fl_controller_fpv12_out_0",   vt_fix32,   {1}, 4, dir_inout,"Input pin state variable", (void*)&fl_controller_fpv12_out_0_default, sizeof(fix16_t)} 
};
   typedef struct {
fix16_t fl_controller_fpv11_out_0_;
fix16_t fl_controller_fpv12_out_0_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"fl_controller_fpv0_a",   vt_fix32,   {1}, 0, dir_input,"Constant value", (void*)&fl_controller_fpv0_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv1_a",   vt_fix32,   {1}, 4, dir_input,"Constant value", (void*)&fl_controller_fpv1_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv2_a",   vt_fix32,   {1}, 8, dir_input,"Constant value", (void*)&fl_controller_fpv2_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv3_a",   vt_fix32,   {1}, 12, dir_input,"Constant value", (void*)&fl_controller_fpv3_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv4_a",   vt_fix32,   {1}, 16, dir_input,"Constant value", (void*)&fl_controller_fpv4_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv5_a",   vt_fix32,   {3}, 20, dir_input,"Constant value", (void*)&fl_controller_fpv5_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv6_a",   vt_fix32,   {3}, 32, dir_input,"Constant value", (void*)&fl_controller_fpv6_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv7_a",   vt_fix32,   {1}, 44, dir_input,"Constant value", (void*)&fl_controller_fpv7_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv8_a",   vt_fix32,   {3}, 48, dir_input,"Constant value", (void*)&fl_controller_fpv8_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv9_a",   vt_fix32,   {3}, 60, dir_input,"Constant value", (void*)&fl_controller_fpv9_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv10_a",   vt_fix32,   {1}, 72, dir_input,"Constant value", (void*)&fl_controller_fpv10_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv13_a",   vt_fix32,   {5}, 76, dir_input,"Constant value", (void*)&fl_controller_fpv13_a_default, sizeof(fix16_t_5)} ,
{"fl_controller_fpv14_a",   vt_fix32,   {1}, 96, dir_input,"Constant value", (void*)&fl_controller_fpv14_a_default, sizeof(fix16_t)} ,
{"fl_controller_fpv15_m",   vt_fix32,   {1,3}, 100, dir_input,"Coefficients of demultiplexor", (void*)&fl_controller_fpv15_m_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv19_a0",   vt_fix32,   {3}, 112, dir_input,"Parabolic a0", (void*)&fl_controller_fpv19_a0_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv19_a1",   vt_fix32,   {3}, 124, dir_input,"Parabolic a1", (void*)&fl_controller_fpv19_a1_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv19_a2",   vt_fix32,   {3}, 136, dir_input,"Parabolic a2", (void*)&fl_controller_fpv19_a2_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv20_a0",   vt_fix32,   {3}, 148, dir_input,"Parabolic a0", (void*)&fl_controller_fpv20_a0_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv20_a1",   vt_fix32,   {3}, 160, dir_input,"Parabolic a1", (void*)&fl_controller_fpv20_a1_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv20_a2",   vt_fix32,   {3}, 172, dir_input,"Parabolic a2", (void*)&fl_controller_fpv20_a2_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv22_a",   vt_fix32,   {3}, 184, dir_input,"Exp gain a", (void*)&fl_controller_fpv22_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv22_b",   vt_fix32,   {3}, 196, dir_input,"Exp gain b", (void*)&fl_controller_fpv22_b_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv22_c",   vt_fix32,   {3}, 208, dir_input,"Exp gain c", (void*)&fl_controller_fpv22_c_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv24_k",   vt_fix32,   {1}, 220, dir_input,"key 3 gain", (void*)&fl_controller_fpv24_k_default, sizeof(fix16_t)} ,
{"fl_controller_fpv26_k",   vt_fix32,   {1}, 224, dir_input,"key 3 gain", (void*)&fl_controller_fpv26_k_default, sizeof(fix16_t)} ,
{"fl_controller_fpv31_m",   vt_fix32,   {1,3}, 228, dir_input,"Coefficients of demultiplexor", (void*)&fl_controller_fpv31_m_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv35_a0",   vt_fix32,   {3}, 240, dir_input,"Parabolic a0", (void*)&fl_controller_fpv35_a0_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv35_a1",   vt_fix32,   {3}, 252, dir_input,"Parabolic a1", (void*)&fl_controller_fpv35_a1_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv35_a2",   vt_fix32,   {3}, 264, dir_input,"Parabolic a2", (void*)&fl_controller_fpv35_a2_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv36_a0",   vt_fix32,   {3}, 276, dir_input,"Parabolic a0", (void*)&fl_controller_fpv36_a0_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv36_a1",   vt_fix32,   {3}, 288, dir_input,"Parabolic a1", (void*)&fl_controller_fpv36_a1_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv36_a2",   vt_fix32,   {3}, 300, dir_input,"Parabolic a2", (void*)&fl_controller_fpv36_a2_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv38_a",   vt_fix32,   {3}, 312, dir_input,"Exp gain a", (void*)&fl_controller_fpv38_a_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv38_b",   vt_fix32,   {3}, 324, dir_input,"Exp gain b", (void*)&fl_controller_fpv38_b_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv38_c",   vt_fix32,   {3}, 336, dir_input,"Exp gain c", (void*)&fl_controller_fpv38_c_default, sizeof(fix16_t_3)} ,
{"fl_controller_fpv40_k",   vt_fix32,   {1}, 348, dir_input,"key 3 gain", (void*)&fl_controller_fpv40_k_default, sizeof(fix16_t)} ,
{"fl_controller_fpv42_k",   vt_fix32,   {1}, 352, dir_input,"key 3 gain", (void*)&fl_controller_fpv42_k_default, sizeof(fix16_t)} 
};
   typedef struct {
fix16_t fl_controller_fpv0_a_;
fix16_t fl_controller_fpv1_a_;
fix16_t fl_controller_fpv2_a_;
fix16_t fl_controller_fpv3_a_;
fix16_t fl_controller_fpv4_a_;
fix16_t_3 fl_controller_fpv5_a_;
fix16_t_3 fl_controller_fpv6_a_;
fix16_t fl_controller_fpv7_a_;
fix16_t_3 fl_controller_fpv8_a_;
fix16_t_3 fl_controller_fpv9_a_;
fix16_t fl_controller_fpv10_a_;
fix16_t_5 fl_controller_fpv13_a_;
fix16_t fl_controller_fpv14_a_;
fix16_t_3 fl_controller_fpv15_m_;
fix16_t_3 fl_controller_fpv19_a0_;
fix16_t_3 fl_controller_fpv19_a1_;
fix16_t_3 fl_controller_fpv19_a2_;
fix16_t_3 fl_controller_fpv20_a0_;
fix16_t_3 fl_controller_fpv20_a1_;
fix16_t_3 fl_controller_fpv20_a2_;
fix16_t_3 fl_controller_fpv22_a_;
fix16_t_3 fl_controller_fpv22_b_;
fix16_t_3 fl_controller_fpv22_c_;
fix16_t fl_controller_fpv24_k_;
fix16_t fl_controller_fpv26_k_;
fix16_t_3 fl_controller_fpv31_m_;
fix16_t_3 fl_controller_fpv35_a0_;
fix16_t_3 fl_controller_fpv35_a1_;
fix16_t_3 fl_controller_fpv35_a2_;
fix16_t_3 fl_controller_fpv36_a0_;
fix16_t_3 fl_controller_fpv36_a1_;
fix16_t_3 fl_controller_fpv36_a2_;
fix16_t_3 fl_controller_fpv38_a_;
fix16_t_3 fl_controller_fpv38_b_;
fix16_t_3 fl_controller_fpv38_c_;
fix16_t fl_controller_fpv40_k_;
fix16_t fl_controller_fpv42_k_;
   } t_consts;
   typedef struct {
fix16_t_3 v15_out_0_;
fix16_t v16_out_0_;
fix16_t v16_out_1_;
fix16_t v16_out_2_;
fix16_t_3 v18_out_0_;
fix16_t_3 v21_out_0_;
fix16_t v23_out_1_;
fix16_t v23_out_2_;
fix16_t v24_out_0_;
fix16_t v32_out_2_;
fix16_t v39_out_1_;
fix16_t v39_out_2_;
fix16_t v40_out_0_;
fix16_t_5 v50_out_0_;
fix16_t_5 v51_out_0_;
   } t_local;

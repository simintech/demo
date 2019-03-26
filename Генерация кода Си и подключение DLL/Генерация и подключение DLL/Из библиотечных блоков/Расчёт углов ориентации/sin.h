
/*  ------------------------------------------------------
     Routine name:  sin
     Description:   
     Project file:  sins_computer_local_test.prt

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

typedef double  double_3[3];
typedef double  double_8[8];
typedef double  double_4[4];
typedef double  double_9[9];
typedef double  double_2[2];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=58220426;

const double_3 input_0_default={0.175,0.0873,0.262};
const double_3 input_1_default={1,1,1};
const double_3 input_2_default={9.8,0,0};
const double_8 out_3_default={1,1,1,0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806,0};
const double_4 out_4_default={-0.130800644152778,0.457737967207613,0.516269336333544,0.506787053137294};
const double_9 out_0_default={0.962195619089712,0.258026437200845,-0.0871891524789876,-0.240394499335479,0.955053550260135,0.173445094553739,0.128023729416894,-0.145928317474538,0.980976478242593};
const double_3 out_1_default={0.175,0.0873,0.262};
const double_2 out_2_default={1.52564012624345,0};
const double_3 sinv1_out_0_default={0.175,0.0873,0.262};
const double_3 sinv2_out_0_default={1,1,1};
const double_3 sinv3_out_0_default={9.8,0,0};
const double_4 sinv5_out_0_default={0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806};
const double_4 sinv12_loct_default={0,0,0,0};
const double_4 sinv12_out_0_default={0.987196237785634,0.0808789073043519,0.0545010388153988,0.126221342185806};
const double_3 sinv15_out_0_default={0.175,0.0873,0.262};
const double_9 sinv16_out_0_default={0.962195619089712,0.258026437200845,-0.0871891524789876,-0.240394499335479,0.955053550260135,0.173445094553739,0.128023729416894,-0.145928317474538,0.980976478242593};
const double_4 sinv19_out_0_default={-0.130800644152778,0.457737967207613,0.516269336333544,0.506787053137294};
const double v5cosr_default=0.996174316800261;
const double v5sinr_default=0.0873883890887872;
const double v5cosp_default=0.99904749000097;
const double v5sinp_default=0.0436361400992574;
const double v5cosy_default=0.991431763812868;
const double v5siny_default=0.130625639531083;
const double v5w_default=0.987196237785634;
const double v5x_default=0.0808789073043519;
const double v5y_default=0.0545010388153988;
const double v5z_default=0.126221342185806;
const double_3 v5v5_sinit__func_res_0_default={0,0,0};
const double_4 v5v5_sinit__func_res_3_default={0,0,0,0};
const double v15mod_q_default=1;
const double v15q0_default=0.987196237785634;
const double v15q1_default=0.0808789073043519;
const double v15q2_default=0.0545010388153988;
const double v15q3_default=0.126221342185806;
const double_4 v15v15_sinit__func_res_0_default={0,0,0,0};
const double_3 v15v15_sinit__func_res_3_default={0,0,0};
const double v16q0_default=0.987196237785634;
const double v16q1_default=0.0808789073043519;
const double v16q2_default=0.0545010388153988;
const double v16q3_default=0.126221342185806;
const double_4 v16v16_sinit__func_res_0_default={0,0,0,0};
const double_9 v16v16_sinit__func_res_3_default={0,0,0,0,0,0,0,0,0};
const double_8 v19v19_sinit__func_res_0_default={0,0,0,0,0,0,0,0};
const double_4 v19v19_sinit__func_res_3_default={0,0,0,0};
const double sinv0_a_default=1;
const double sinv4_a_default=9.81;
const double sinv8_a_default=1;
const double sinv8_w_default=1;
const double sinv8_f_default=0;
const double sinv9_a_default=1;
const double_4 sinv12_tau_default={0.1,0.1,0.1,0.1};
const double_4 sinv12_k_default={1,1,1,1};
const double sinv17_a_default=1;
const double v8_out_0_default=1.52564012624345;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 8
/* Internal state variables count */
#define state_vars_count 36
/* Constants count */
#define const_count 9
/* Local variables count */
#define local_count 7
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.02
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.02
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 10
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0",   vt_double,   {3}, 0,dir_input,"", (void*)&input_0_default, sizeof(double_3)} ,
{"input:1",   vt_double,   {3}, 1,dir_input,"", (void*)&input_1_default, sizeof(double_3)} ,
{"input:2",   vt_double,   {3}, 2,dir_input,"", (void*)&input_2_default, sizeof(double_3)} ,
{"out:3",   vt_double,   {8}, 3,dir_out,"", (void*)&out_3_default, sizeof(double_8)} ,
{"out:4",   vt_double,   {4}, 4,dir_out,"", (void*)&out_4_default, sizeof(double_4)} ,
{"out:0",   vt_double,   {9}, 5,dir_out,"", (void*)&out_0_default, sizeof(double_9)} ,
{"out:1",   vt_double,   {3}, 6,dir_out,"", (void*)&out_1_default, sizeof(double_3)} ,
{"out:2",   vt_double,   {2}, 7,dir_out,"", (void*)&out_2_default, sizeof(double_2)} 
};
#define input_0 (*(double_3*)(ext_vars_addr[0]))
#define input_1 (*(double_3*)(ext_vars_addr[1]))
#define input_2 (*(double_3*)(ext_vars_addr[2]))
#define out_3 (*(double_8*)(ext_vars_addr[3]))
#define out_4 (*(double_4*)(ext_vars_addr[4]))
#define out_0 (*(double_9*)(ext_vars_addr[5]))
#define out_1 (*(double_3*)(ext_vars_addr[6]))
#define out_2 (*(double_2*)(ext_vars_addr[7]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"sinv1_out_0",   vt_double,   {3}, 0, dir_inout,"Input pin state variable", (void*)&sinv1_out_0_default, sizeof(double_3)} ,
{"sinv2_out_0",   vt_double,   {3}, 24, dir_inout,"Input pin state variable", (void*)&sinv2_out_0_default, sizeof(double_3)} ,
{"sinv3_out_0",   vt_double,   {3}, 48, dir_inout,"Input pin state variable", (void*)&sinv3_out_0_default, sizeof(double_3)} ,
{"sinv5_out_0",   vt_double,   {4}, 72, dir_inout,"Language out", (void*)&sinv5_out_0_default, sizeof(double_4)} ,
{"sinv12_loct",   vt_double,   {4}, 104, dir_inout,"TDisIntegrator local times", (void*)&sinv12_loct_default, sizeof(double_4)} ,
{"sinv12_out_0",   vt_double,   {4}, 136, dir_inout,"TDisIntegrator output", (void*)&sinv12_out_0_default, sizeof(double_4)} ,
{"sinv15_out_0",   vt_double,   {3}, 168, dir_inout,"Language out", (void*)&sinv15_out_0_default, sizeof(double_3)} ,
{"sinv16_out_0",   vt_double,   {9}, 192, dir_inout,"Language out", (void*)&sinv16_out_0_default, sizeof(double_9)} ,
{"sinv19_out_0",   vt_double,   {4}, 264, dir_inout,"Language out", (void*)&sinv19_out_0_default, sizeof(double_4)} ,
{"v5cosr",   vt_double,   {1}, 296, dir_inout,"", (void*)&v5cosr_default, sizeof(double)} ,
{"v5sinr",   vt_double,   {1}, 304, dir_inout,"", (void*)&v5sinr_default, sizeof(double)} ,
{"v5cosp",   vt_double,   {1}, 312, dir_inout,"", (void*)&v5cosp_default, sizeof(double)} ,
{"v5sinp",   vt_double,   {1}, 320, dir_inout,"", (void*)&v5sinp_default, sizeof(double)} ,
{"v5cosy",   vt_double,   {1}, 328, dir_inout,"", (void*)&v5cosy_default, sizeof(double)} ,
{"v5siny",   vt_double,   {1}, 336, dir_inout,"", (void*)&v5siny_default, sizeof(double)} ,
{"v5w",   vt_double,   {1}, 344, dir_inout,"", (void*)&v5w_default, sizeof(double)} ,
{"v5x",   vt_double,   {1}, 352, dir_inout,"", (void*)&v5x_default, sizeof(double)} ,
{"v5y",   vt_double,   {1}, 360, dir_inout,"", (void*)&v5y_default, sizeof(double)} ,
{"v5z",   vt_double,   {1}, 368, dir_inout,"", (void*)&v5z_default, sizeof(double)} ,
{"v5v5_sinit__func_res_0",   vt_double,   {3}, 376, dir_inout,"", (void*)&v5v5_sinit__func_res_0_default, sizeof(double_3)} ,
{"v5v5_sinit__func_res_3",   vt_double,   {4}, 400, dir_inout,"", (void*)&v5v5_sinit__func_res_3_default, sizeof(double_4)} ,
{"v15mod_q",   vt_double,   {1}, 432, dir_inout,"", (void*)&v15mod_q_default, sizeof(double)} ,
{"v15q0",   vt_double,   {1}, 440, dir_inout,"", (void*)&v15q0_default, sizeof(double)} ,
{"v15q1",   vt_double,   {1}, 448, dir_inout,"", (void*)&v15q1_default, sizeof(double)} ,
{"v15q2",   vt_double,   {1}, 456, dir_inout,"", (void*)&v15q2_default, sizeof(double)} ,
{"v15q3",   vt_double,   {1}, 464, dir_inout,"", (void*)&v15q3_default, sizeof(double)} ,
{"v15v15_sinit__func_res_0",   vt_double,   {4}, 472, dir_inout,"", (void*)&v15v15_sinit__func_res_0_default, sizeof(double_4)} ,
{"v15v15_sinit__func_res_3",   vt_double,   {3}, 504, dir_inout,"", (void*)&v15v15_sinit__func_res_3_default, sizeof(double_3)} ,
{"v16q0",   vt_double,   {1}, 528, dir_inout,"", (void*)&v16q0_default, sizeof(double)} ,
{"v16q1",   vt_double,   {1}, 536, dir_inout,"", (void*)&v16q1_default, sizeof(double)} ,
{"v16q2",   vt_double,   {1}, 544, dir_inout,"", (void*)&v16q2_default, sizeof(double)} ,
{"v16q3",   vt_double,   {1}, 552, dir_inout,"", (void*)&v16q3_default, sizeof(double)} ,
{"v16v16_sinit__func_res_0",   vt_double,   {4}, 560, dir_inout,"", (void*)&v16v16_sinit__func_res_0_default, sizeof(double_4)} ,
{"v16v16_sinit__func_res_3",   vt_double,   {9}, 592, dir_inout,"", (void*)&v16v16_sinit__func_res_3_default, sizeof(double_9)} ,
{"v19v19_sinit__func_res_0",   vt_double,   {8}, 664, dir_inout,"", (void*)&v19v19_sinit__func_res_0_default, sizeof(double_8)} ,
{"v19v19_sinit__func_res_3",   vt_double,   {4}, 728, dir_inout,"", (void*)&v19v19_sinit__func_res_3_default, sizeof(double_4)} 
};
   typedef struct {
double_3 sinv1_out_0_;
double_3 sinv2_out_0_;
double_3 sinv3_out_0_;
double_4 sinv5_out_0_;
double_4 sinv12_loct_;
double_4 sinv12_out_0_;
double_3 sinv15_out_0_;
double_9 sinv16_out_0_;
double_4 sinv19_out_0_;
double v5cosr_;
double v5sinr_;
double v5cosp_;
double v5sinp_;
double v5cosy_;
double v5siny_;
double v5w_;
double v5x_;
double v5y_;
double v5z_;
double_3 v5v5_sinit__func_res_0_;
double_4 v5v5_sinit__func_res_3_;
double v15mod_q_;
double v15q0_;
double v15q1_;
double v15q2_;
double v15q3_;
double_4 v15v15_sinit__func_res_0_;
double_3 v15v15_sinit__func_res_3_;
double v16q0_;
double v16q1_;
double v16q2_;
double v16q3_;
double_4 v16v16_sinit__func_res_0_;
double_9 v16v16_sinit__func_res_3_;
double_8 v19v19_sinit__func_res_0_;
double_4 v19v19_sinit__func_res_3_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"sinv0_a",   vt_double,   {1}, 0, dir_input,"Constant value", (void*)&sinv0_a_default, sizeof(double)} ,
{"sinv4_a",   vt_double,   {1}, 8, dir_input,"Constant value", (void*)&sinv4_a_default, sizeof(double)} ,
{"sinv8_a",   vt_double,   {1}, 16, dir_input,"TArcSinFunc gain a", (void*)&sinv8_a_default, sizeof(double)} ,
{"sinv8_w",   vt_double,   {1}, 24, dir_input,"TArcSinFunc gain w", (void*)&sinv8_w_default, sizeof(double)} ,
{"sinv8_f",   vt_double,   {1}, 32, dir_input,"TArcSinFunc gain f", (void*)&sinv8_f_default, sizeof(double)} ,
{"sinv9_a",   vt_double,   {1}, 40, dir_input,"Ampliefer koefficient", (void*)&sinv9_a_default, sizeof(double)} ,
{"sinv12_tau",   vt_double,   {4}, 48, dir_input,"TDisIntegrator tau", (void*)&sinv12_tau_default, sizeof(double_4)} ,
{"sinv12_k",   vt_double,   {4}, 80, dir_input,"TDisIntegrator k", (void*)&sinv12_k_default, sizeof(double_4)} ,
{"sinv17_a",   vt_double,   {1}, 112, dir_input,"Ampliefer koefficient", (void*)&sinv17_a_default, sizeof(double)} 
};
   typedef struct {
double sinv0_a_;
double sinv4_a_;
double sinv8_a_;
double sinv8_w_;
double sinv8_f_;
double sinv9_a_;
double_4 sinv12_tau_;
double_4 sinv12_k_;
double sinv17_a_;
   } t_consts;
   typedef struct {
double v6_out_0_;
double v6_out_1_;
double v6_out_2_;
double v7_out_0_;
double v8_out_0_;
double_2 v11_out_0_;
double_8 v18_out_0_;
   } t_local;

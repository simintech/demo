
/*  ------------------------------------------------------
     Routine name:  my_diagram
        Generated:  02.12.2011 11:54:41
      Description:  
     Project file:  —хема автоматики.prt

------------------------------------------------------  */


//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=2355988097;

const double input_0_1__default=0;
const double out_0_1__default=0;
const double out_0_2__default=0;
const double my_diagramv5_out_0_default=0;
const double my_diagramv6_out_0_default=0;
const double my_diagramv10_out_0_default=0;
const double my_diagramv11_out_0_default=0;
const double my_diagramv12_out_0_default=0;
const double my_diagramv13_out_0_default=0;
const double my_diagramv0_out_0_default=0;
const double my_diagramv1_a_default=0;
const double my_diagramv2_a_default=0;
const double my_diagramv3_a_default=0;
const double my_diagramv5_k_default=1;
const double my_diagramv6_k_default=1000;
const double my_diagramv9_a_default=-1;
const double my_diagramv17_a_default=1;
const double my_diagramv17_b_default=38.4615384615385;
const double my_diagramv17_c_default=0;
const double my_diagramv18_a_default=-1;
const double my_diagramv18_b_default=1;
const double my_diagramv19_a_default=1E-6;
const double my_diagramv20_a_default=1E-6;
const double my_diagramv22_a_default=-1;
const double my_diagramv24_a_default=-1;

//Main structures defines
//External variables count
#define ext_vars_count 3
//Dynamical variables count
#define din_vars_count 2
//Algebraical variables count
#define alg_vars_count 4
//Internal state variables count
#define state_vars_count 1
//Constants count
#define const_count 15
//Local variables count
#define local_count 18

const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0[1]",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_1__default, sizeof(double)} ,
{"out:0[1]",   vt_double,   {1}, 1,dir_out,"", (void*)&out_0_1__default, sizeof(double)} ,
{"out:0[2]",   vt_double,   {1}, 2,dir_out,"", (void*)&out_0_2__default, sizeof(double)} 
};
#define input_0_1_ (*(double*)(*ext_vars_addr)[0])
#define out_0_1_ (*(double*)(*ext_vars_addr)[1])
#define out_0_2_ (*(double*)(*ext_vars_addr)[2])

const ext_var_info_record din_vars_names[din_vars_count] = {
{"my_diagramv5_out_0",   vt_double,   {1}, 0, dir_inout,"Intergrator state", (void*)&my_diagramv5_out_0_default, sizeof(double)} ,
{"my_diagramv6_out_0",   vt_double,   {1}, 1, dir_inout,"Intergrator state", (void*)&my_diagramv6_out_0_default, sizeof(double)} 
};
#define din_vars_dimension 2
#define my_diagramv5_out_0 (*(double*)(&(*din_vars)[0]))
#define my_diagramv5_out_0_deri (*(double*)(&(*derivates)[0]))
#define my_diagramv6_out_0 (*(double*)(&(*din_vars)[1]))
#define my_diagramv6_out_0_deri (*(double*)(&(*derivates)[1]))

const ext_var_info_record alg_vars_names[alg_vars_count] = {
{"my_diagramv10_out_0",   vt_double,   {1}, 0, dir_inout,"NAE state variable", (void*)&my_diagramv10_out_0_default, sizeof(double)} ,
{"my_diagramv11_out_0",   vt_double,   {1}, 1, dir_inout,"NAE state variable", (void*)&my_diagramv11_out_0_default, sizeof(double)} ,
{"my_diagramv12_out_0",   vt_double,   {1}, 2, dir_inout,"NAE state variable", (void*)&my_diagramv12_out_0_default, sizeof(double)} ,
{"my_diagramv13_out_0",   vt_double,   {1}, 3, dir_inout,"NAE state variable", (void*)&my_diagramv13_out_0_default, sizeof(double)} 
};
#define alg_vars_dimension 4
#define my_diagramv10_out_0 (*(double*)(&(*alg_vars)[0]))
#define my_diagramv10_out_0_func (*(double*)(&(*alg_funcs)[0]))
#define my_diagramv11_out_0 (*(double*)(&(*alg_vars)[1]))
#define my_diagramv11_out_0_func (*(double*)(&(*alg_funcs)[1]))
#define my_diagramv12_out_0 (*(double*)(&(*alg_vars)[2]))
#define my_diagramv12_out_0_func (*(double*)(&(*alg_funcs)[2]))
#define my_diagramv13_out_0 (*(double*)(&(*alg_vars)[3]))
#define my_diagramv13_out_0_func (*(double*)(&(*alg_funcs)[3]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"my_diagramv0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&my_diagramv0_out_0_default, sizeof(double)} 
};
   typedef struct {
double my_diagramv0_out_0;
   } t_state_vars;
#define my_diagramv0_out_0 (*state_vars).my_diagramv0_out_0

const ext_var_info_record const_names[const_count] = {
{"my_diagramv1_a",   vt_double,   {1}, 0, dir_input,"Constant value", (void*)&my_diagramv1_a_default, sizeof(double)} ,
{"my_diagramv2_a",   vt_double,   {1}, 8, dir_input,"Constant value", (void*)&my_diagramv2_a_default, sizeof(double)} ,
{"my_diagramv3_a",   vt_double,   {1}, 16, dir_input,"Constant value", (void*)&my_diagramv3_a_default, sizeof(double)} ,
{"my_diagramv5_k",   vt_double,   {1}, 24, dir_input,"Intergator gain", (void*)&my_diagramv5_k_default, sizeof(double)} ,
{"my_diagramv6_k",   vt_double,   {1}, 32, dir_input,"Intergator gain", (void*)&my_diagramv6_k_default, sizeof(double)} ,
{"my_diagramv9_a",   vt_double,   {1}, 40, dir_input,"Ampliefer koefficient", (void*)&my_diagramv9_a_default, sizeof(double)} ,
{"my_diagramv17_a",   vt_double,   {1}, 48, dir_input,"Exp gain a", (void*)&my_diagramv17_a_default, sizeof(double)} ,
{"my_diagramv17_b",   vt_double,   {1}, 56, dir_input,"Exp gain b", (void*)&my_diagramv17_b_default, sizeof(double)} ,
{"my_diagramv17_c",   vt_double,   {1}, 64, dir_input,"Exp gain c", (void*)&my_diagramv17_c_default, sizeof(double)} ,
{"my_diagramv18_a",   vt_double,   {1}, 72, dir_input,"Pokaz gain a", (void*)&my_diagramv18_a_default, sizeof(double)} ,
{"my_diagramv18_b",   vt_double,   {1}, 80, dir_input,"Gain b", (void*)&my_diagramv18_b_default, sizeof(double)} ,
{"my_diagramv19_a",   vt_double,   {1}, 88, dir_input,"Ampliefer koefficient", (void*)&my_diagramv19_a_default, sizeof(double)} ,
{"my_diagramv20_a",   vt_double,   {1}, 96, dir_input,"Ampliefer koefficient", (void*)&my_diagramv20_a_default, sizeof(double)} ,
{"my_diagramv22_a",   vt_double,   {1}, 104, dir_input,"Ampliefer koefficient", (void*)&my_diagramv22_a_default, sizeof(double)} ,
{"my_diagramv24_a",   vt_double,   {1}, 112, dir_input,"Ampliefer koefficient", (void*)&my_diagramv24_a_default, sizeof(double)} 
};
   typedef struct {
double my_diagramv1_a;
double my_diagramv2_a;
double my_diagramv3_a;
double my_diagramv5_k;
double my_diagramv6_k;
double my_diagramv9_a;
double my_diagramv17_a;
double my_diagramv17_b;
double my_diagramv17_c;
double my_diagramv18_a;
double my_diagramv18_b;
double my_diagramv19_a;
double my_diagramv20_a;
double my_diagramv22_a;
double my_diagramv24_a;
   } t_consts;
#define my_diagramv1_a (*consts).my_diagramv1_a
#define my_diagramv2_a (*consts).my_diagramv2_a
#define my_diagramv3_a (*consts).my_diagramv3_a
#define my_diagramv5_k (*consts).my_diagramv5_k
#define my_diagramv6_k (*consts).my_diagramv6_k
#define my_diagramv9_a (*consts).my_diagramv9_a
#define my_diagramv17_a (*consts).my_diagramv17_a
#define my_diagramv17_b (*consts).my_diagramv17_b
#define my_diagramv17_c (*consts).my_diagramv17_c
#define my_diagramv18_a (*consts).my_diagramv18_a
#define my_diagramv18_b (*consts).my_diagramv18_b
#define my_diagramv19_a (*consts).my_diagramv19_a
#define my_diagramv20_a (*consts).my_diagramv20_a
#define my_diagramv22_a (*consts).my_diagramv22_a
#define my_diagramv24_a (*consts).my_diagramv24_a
   typedef struct {
double v4_out_0;
double v7_out_0;
double v8_out_0;
double v9_out_0;
double v14_out_0;
double v15_out_0;
double v16_out_0;
double v17_out_0;
double v18_out_0;
double v19_out_0;
double v20_out_0;
double v21_out_0;
double v22_out_0;
double v23_out_0;
double v24_out_0;
double v25_out_0;
double v26_out_0;
double v27_out_0;
   } t_local;
#define v4_out_0 (*locals).v4_out_0
#define v7_out_0 (*locals).v7_out_0
#define v8_out_0 (*locals).v8_out_0
#define v9_out_0 (*locals).v9_out_0
#define v14_out_0 (*locals).v14_out_0
#define v15_out_0 (*locals).v15_out_0
#define v16_out_0 (*locals).v16_out_0
#define v17_out_0 (*locals).v17_out_0
#define v18_out_0 (*locals).v18_out_0
#define v19_out_0 (*locals).v19_out_0
#define v20_out_0 (*locals).v20_out_0
#define v21_out_0 (*locals).v21_out_0
#define v22_out_0 (*locals).v22_out_0
#define v23_out_0 (*locals).v23_out_0
#define v24_out_0 (*locals).v24_out_0
#define v25_out_0 (*locals).v25_out_0
#define v26_out_0 (*locals).v26_out_0
#define v27_out_0 (*locals).v27_out_0


/*  ------------------------------------------------------
     Routine name:  myblock
        Generated:  02.12.2011 11:55:27
      Description:  
     Project file:  Самогенерирующийся блок.prt

------------------------------------------------------  */


//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=4036582589;

const double input_0_1__default=0;
const double out_0_1__default=-1;
const double myblockv1_dyn_var_default=1;
const double myblockv0_out_0_default=0;
const double myblockv1_out_0_default=-1;

//Main structures defines
//External variables count
#define ext_vars_count 2
//Dynamical variables count
#define din_vars_count 1
//Internal state variables count
#define state_vars_count 2

const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0[1]",   vt_double,   {1}, 0,dir_input,"", (void*)&input_0_1__default, sizeof(double)} ,
{"out:0[1]",   vt_double,   {1}, 1,dir_out,"", (void*)&out_0_1__default, sizeof(double)} 
};
#define input_0_1_ (*(double*)(*ext_vars_addr)[0])
#define out_0_1_ (*(double*)(*ext_vars_addr)[1])

const ext_var_info_record din_vars_names[din_vars_count] = {
{"myblockv1_dyn_var",   vt_double,   {1}, 0, dir_inout,"Динамическая переменная", (void*)&myblockv1_dyn_var_default, sizeof(double)} 
};
#define din_vars_dimension 1
#define myblockv1_dyn_var (*(double*)(&(*din_vars)[0]))
#define myblockv1_dyn_var_deri (*(double*)(&(*derivates)[0]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"myblockv0_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&myblockv0_out_0_default, sizeof(double)} ,
{"myblockv1_out_0",   vt_double,   {1}, 8, dir_inout,"Language out", (void*)&myblockv1_out_0_default, sizeof(double)} 
};
   typedef struct {
double myblockv0_out_0;
double myblockv1_out_0;
   } t_state_vars;
#define myblockv0_out_0 (*state_vars).myblockv0_out_0
#define myblockv1_out_0 (*state_vars).myblockv1_out_0
  typedef char t_consts;
  typedef char t_local;

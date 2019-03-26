
/*  ------------------------------------------------------
     Routine name:  datarcv
        Generated:  29.09.2013 18:45:56
      Description:  
     Project file:  sample_data_source.prt

------------------------------------------------------  */

typedef double  double_3[3];

//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=1130661774;

const double data1_default=0;
const double data2_default=0;
const double data3_default=0;
const double_3 datarcvv0_loct_default={0,0,0};
const double_3 datarcvv0_a_default={1,2,3};
const double_3 datarcvv0_w_default={1,2,3};
const double_3 datarcvv0_f_default={0,0,0};

//Main structures defines
//External variables count
#define ext_vars_count 3
//Internal state variables count
#define state_vars_count 1
//Constants count
#define const_count 3
//Local variables count
#define local_count 1

#define data1 (*(double*)(*ext_vars_addr)[0])
#define data2 (*(double*)(*ext_vars_addr)[1])
#define data3 (*(double*)(*ext_vars_addr)[2])

   typedef struct {
double_3 datarcvv0_loct;
   } t_state_vars;
#define datarcvv0_loct (*state_vars).datarcvv0_loct

   typedef struct {
double_3 datarcvv0_a;
double_3 datarcvv0_w;
double_3 datarcvv0_f;
   } t_consts;
#define datarcvv0_a (*consts).datarcvv0_a
#define datarcvv0_w (*consts).datarcvv0_w
#define datarcvv0_f (*consts).datarcvv0_f
   typedef struct {
double_3 v0_out_0;
   } t_local;
#define v0_out_0 (*locals).v0_out_0

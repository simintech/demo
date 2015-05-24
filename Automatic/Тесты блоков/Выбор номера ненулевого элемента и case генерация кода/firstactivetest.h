
/*  ------------------------------------------------------
     Routine name:  firstactivetest
        Generated:  02.02.2015 20:01:09
      Description:  
     Project file:  Выбор номера ненулевого элемента и case.prt

------------------------------------------------------  */

typedef double  double_5[5];
typedef double  double_3[3];

//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=4092647075;

const double out_0_default=0;
const double_5 out_1_default={0,1.68294196961579,2.72789228047704,0.564480032239469,-3.78401247653964};
const double out_2_default=1;
const double_3 out_3_default={1,0,0};
const double_5 v0_out_0_default={0,1.68294196961579,2.72789228047704,0.564480032239469,-3.78401247653964};
const double_5 firstactivetestv0_loct_default={0,0,0,0,0};
const double firstactivetestv1_out_0_default=1;
const double firstactivetestv1_timer_default=0;
const double firstactivetestv2_out_0_default=0;
const double firstactivetestv2_timer_default=0;
const double firstactivetestv3_out_0_default=0;
const double firstactivetestv3_timer_default=0;
const double_5 firstactivetestv0_a_default={1,2,3,4,5};
const double_5 firstactivetestv0_w_default={5,5,5,5,5};
const double_5 firstactivetestv0_f_default={0,1,2,3,4};
const double firstactivetestv1_t1_default=10;
const double firstactivetestv1_t2_default=20;
const double firstactivetestv1_y1_default=1;
const double firstactivetestv1_y2_default=0;
const double firstactivetestv2_t1_default=10;
const double firstactivetestv2_t2_default=10;
const double firstactivetestv2_y1_default=0;
const double firstactivetestv2_y2_default=1;
const double firstactivetestv3_t1_default=15;
const double firstactivetestv3_t2_default=15;
const double firstactivetestv3_y1_default=0;
const double firstactivetestv3_y2_default=1;

//Main structures defines
//External variables count
#define ext_vars_count 4
//Internal state variables count
#define state_vars_count 8
//Constants count
#define const_count 15
//Local variables count
#define local_count 3

const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"out:0",   vt_double,   {1}, 0,dir_out,"", (void*)&out_0_default, sizeof(double)} ,
{"out:1",   vt_double,   {5}, 1,dir_out,"", (void*)&out_1_default, sizeof(double_5)} ,
{"out:2",   vt_double,   {1}, 2,dir_out,"", (void*)&out_2_default, sizeof(double)} ,
{"out:3",   vt_double,   {3}, 3,dir_out,"", (void*)&out_3_default, sizeof(double_3)} 
};
#define out_0 (*(double*)(ext_vars_addr[0]))
#define out_1 (*(double_5*)(ext_vars_addr[1]))
#define out_2 (*(double*)(ext_vars_addr[2]))
#define out_3 (*(double_3*)(ext_vars_addr[3]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"v0_out_0",   vt_double,   {5}, 0, dir_inout,"TSin output", (void*)&v0_out_0_default, sizeof(double_5)} ,
{"firstactivetestv0_loct",   vt_double,   {5}, 40, dir_inout,"TSin local times", (void*)&firstactivetestv0_loct_default, sizeof(double_5)} ,
{"firstactivetestv1_out_0",   vt_double,   {1}, 80, dir_inout,"TMeandr out", (void*)&firstactivetestv1_out_0_default, sizeof(double)} ,
{"firstactivetestv1_timer",   vt_double,   {1}, 88, dir_inout,"TMeandr timer", (void*)&firstactivetestv1_timer_default, sizeof(double)} ,
{"firstactivetestv2_out_0",   vt_double,   {1}, 96, dir_inout,"TMeandr out", (void*)&firstactivetestv2_out_0_default, sizeof(double)} ,
{"firstactivetestv2_timer",   vt_double,   {1}, 104, dir_inout,"TMeandr timer", (void*)&firstactivetestv2_timer_default, sizeof(double)} ,
{"firstactivetestv3_out_0",   vt_double,   {1}, 112, dir_inout,"TMeandr out", (void*)&firstactivetestv3_out_0_default, sizeof(double)} ,
{"firstactivetestv3_timer",   vt_double,   {1}, 120, dir_inout,"TMeandr timer", (void*)&firstactivetestv3_timer_default, sizeof(double)} 
};
   typedef struct {
double_5 v0_out_0_;
double_5 firstactivetestv0_loct_;
double firstactivetestv1_out_0_;
double firstactivetestv1_timer_;
double firstactivetestv2_out_0_;
double firstactivetestv2_timer_;
double firstactivetestv3_out_0_;
double firstactivetestv3_timer_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"firstactivetestv0_a",   vt_double,   {5}, 0, dir_input,"TSin gain a", (void*)&firstactivetestv0_a_default, sizeof(double_5)} ,
{"firstactivetestv0_w",   vt_double,   {5}, 40, dir_input,"TSin gain w", (void*)&firstactivetestv0_w_default, sizeof(double_5)} ,
{"firstactivetestv0_f",   vt_double,   {5}, 80, dir_input,"TSin gain f", (void*)&firstactivetestv0_f_default, sizeof(double_5)} ,
{"firstactivetestv1_t1",   vt_double,   {1}, 120, dir_input,"TMeandr time 1", (void*)&firstactivetestv1_t1_default, sizeof(double)} ,
{"firstactivetestv1_t2",   vt_double,   {1}, 128, dir_input,"TMeandr time 2", (void*)&firstactivetestv1_t2_default, sizeof(double)} ,
{"firstactivetestv1_y1",   vt_double,   {1}, 136, dir_input,"TMeandr value 1", (void*)&firstactivetestv1_y1_default, sizeof(double)} ,
{"firstactivetestv1_y2",   vt_double,   {1}, 144, dir_input,"TMeandr value 2", (void*)&firstactivetestv1_y2_default, sizeof(double)} ,
{"firstactivetestv2_t1",   vt_double,   {1}, 152, dir_input,"TMeandr time 1", (void*)&firstactivetestv2_t1_default, sizeof(double)} ,
{"firstactivetestv2_t2",   vt_double,   {1}, 160, dir_input,"TMeandr time 2", (void*)&firstactivetestv2_t2_default, sizeof(double)} ,
{"firstactivetestv2_y1",   vt_double,   {1}, 168, dir_input,"TMeandr value 1", (void*)&firstactivetestv2_y1_default, sizeof(double)} ,
{"firstactivetestv2_y2",   vt_double,   {1}, 176, dir_input,"TMeandr value 2", (void*)&firstactivetestv2_y2_default, sizeof(double)} ,
{"firstactivetestv3_t1",   vt_double,   {1}, 184, dir_input,"TMeandr time 1", (void*)&firstactivetestv3_t1_default, sizeof(double)} ,
{"firstactivetestv3_t2",   vt_double,   {1}, 192, dir_input,"TMeandr time 2", (void*)&firstactivetestv3_t2_default, sizeof(double)} ,
{"firstactivetestv3_y1",   vt_double,   {1}, 200, dir_input,"TMeandr value 1", (void*)&firstactivetestv3_y1_default, sizeof(double)} ,
{"firstactivetestv3_y2",   vt_double,   {1}, 208, dir_input,"TMeandr value 2", (void*)&firstactivetestv3_y2_default, sizeof(double)} 
};
   typedef struct {
double_5 firstactivetestv0_a_;
double_5 firstactivetestv0_w_;
double_5 firstactivetestv0_f_;
double firstactivetestv1_t1_;
double firstactivetestv1_t2_;
double firstactivetestv1_y1_;
double firstactivetestv1_y2_;
double firstactivetestv2_t1_;
double firstactivetestv2_t2_;
double firstactivetestv2_y1_;
double firstactivetestv2_y2_;
double firstactivetestv3_t1_;
double firstactivetestv3_t2_;
double firstactivetestv3_y1_;
double firstactivetestv3_y2_;
   } t_consts;
   typedef struct {
double_3 v4_out_0_;
double v6_out_0_;
int v5_out_0_;
   } t_local;

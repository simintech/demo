
/*  ------------------------------------------------------
     Routine name:  vypr
        Generated:  08.12.2014 17:14:43
      Description:  
     Project file:  Выпрямитель.prt

------------------------------------------------------  */

typedef double  double_2[2];
typedef double  double_4[4];
typedef double  double_6[6];
typedef double  double_3[3];
typedef int  int_2[2];
typedef int  int_4[4];
typedef int  int_6[6];
typedef int  int_3[3];
typedef double  double_5[5];

//Default initialization values

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=3128643165;

const double out_0_default=0;
const double v0_out_0_default=0;
const double vyprv0_loct_default=0;
const double v10_out_0_default=-199.185842870421;
const double vyprv10_loct_default=0;
const double v19_out_0_default=199.185842870421;
const double vyprv19_loct_default=0;
const double vyprv48_out_0_default=0;
const double_2 vyprv51_coefs_default={0,0};
const double vyprv52_out_0_default=0;
const double vyprv55_out_0_default=0;
const double vyprv65_coefs_default=0;
const double_2 vyprv66_coefs_default={0,0};
const double vyprv67_out_0_default=0;
const double_4 vyprv81_coefs_default={0,0,0,0};
const double vyprv85_out_0_default=0;
const double vyprv94_out_0_default=0;
const double vyprv98_out_0_default=0;
const double vyprv131_loct_default=0;
const double vyprv131_out_0_default=0;
const double_6 vyprv136_coefs_default={0,0,0,0,0,0};
const double_2 vyprv137_coefs_default={0,0};
const double vyprv153_out_0_default=0;
const double_4 vyprv158_coefs_default={0,0,0,0};
const double_4 vyprv159_coefs_default={0,0,0,0};
const double vyprv162_out_0_default=0;
const double vyprv191_out_0_default=0;
const double vyprv192_out_0_default=0;
const double vyprv193_out_0_default=0;
const double vyprv194_out_0_default=0;
const double_3 vyprv202_coefs_default={0,0,0};
const double_3 vyprv205_coefs_default={0,0,0};
const double_3 vyprv208_coefs_default={0,0,0};
const double_3 vyprv213_coefs_default={0,0,0};
const double_6 vyprv215_coefs_default={0,0,0,0,0,0};
const int_2 vyprv51_idxs_default={0,0};
const int vyprv65_idxs_default=0;
const int_2 vyprv66_idxs_default={0,0};
const int_4 vyprv81_idxs_default={0,0,0,0};
const int_6 vyprv136_idxs_default={0,0,0,0,0,0};
const int_2 vyprv137_idxs_default={0,0};
const int_4 vyprv158_idxs_default={0,0,0,0};
const int_4 vyprv159_idxs_default={0,0,0,0};
const int_3 vyprv202_idxs_default={0,0,0};
const int_3 vyprv205_idxs_default={0,0,0};
const int_3 vyprv208_idxs_default={0,0,0};
const int_3 vyprv213_idxs_default={0,0,0};
const int_6 vyprv215_idxs_default={0,0,0,0,0,0};
const double vyprv0_a_default=230;
const double vyprv0_w_default=314;
const double vyprv0_f_default=0;
const double vyprv1_a_default=1E-9;
const double_2 vyprv2_a_default={1,-1};
const double vyprv5_a_default=0;
const double vyprv6_a_default=1;
const double vyprv7_a_default=0;
const double vyprv8_a_default=1;
const double vyprv10_a_default=230;
const double vyprv10_w_default=314;
const double vyprv10_f_default=-2.0943951023932;
const double vyprv11_a_default=1E-9;
const double_2 vyprv12_a_default={1,-1};
const double vyprv15_a_default=0;
const double vyprv16_a_default=10;
const double vyprv17_a_default=0;
const double vyprv18_a_default=10;
const double vyprv19_a_default=230;
const double vyprv19_w_default=314;
const double vyprv19_f_default=2.0943951023932;
const double vyprv20_a_default=1E-9;
const double_2 vyprv21_a_default={1,-1};
const double vyprv24_a_default=0;
const double vyprv25_a_default=10;
const double vyprv26_a_default=0;
const double vyprv27_a_default=0;
const double vyprv28_a_default=0;
const double vyprv30_a_default=0;
const double vyprv31_a_default=0;
const double vyprv32_a_default=0;
const double vyprv35_a_default=0.0002;
const double vyprv37_a_default=0.0002;
const double vyprv39_a_default=0.0002;
const double vyprv44_a_default=0.005;
const double vyprv47_a_default=0.0001;
const double_5 vyprv54_t_default={-1,0,1,2,3};
const double_5 vyprv54_y_default={0.001,0.01,1,2,3};
const double_5 vyprv57_t_default={-1,0,1,2,3};
const double_5 vyprv57_y_default={0.001,0.01,1,2,3};
const double vyprv60_a_default=-1;
const double_5 vyprv69_t_default={-1,0,1,2,3};
const double_5 vyprv69_y_default={0.001,0.01,1,2,3};
const double_5 vyprv71_t_default={-1,0,1,2,3};
const double_5 vyprv71_y_default={0.001,0.01,1,2,3};
const double vyprv74_a_default=-1;
const double_5 vyprv87_t_default={-1,0,1,2,3};
const double_5 vyprv87_y_default={0.001,0.01,1,2,3};
const double_5 vyprv105_t_default={-1,0,1,2,3};
const double_5 vyprv105_y_default={0.001,0.01,1,2,3};
const double vyprv125_a_default=-1;
const double vyprv131_tau_default=0;
const double vyprv133_a_default=-1;
const double vyprv139_a_default=-1;
const double vyprv147_a_default=-1;
const double vyprv166_a_default=-1;
const double vyprv172_a_default=-1;
const double vyprv177_a_default=-1;
const double vyprv183_a_default=-1;
const double vyprv200_a_default=-1;
const double vyprv206_a_default=-1;
const double vyprv209_a_default=-1;
const double vyprv211_a_default=-1;

//Main structures defines
//External variables count
#define ext_vars_count 1
//Internal state variables count
#define state_vars_count 47
//Constants count
#define const_count 63
//Local variables count
#define local_count 52

const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"out:0",   vt_double,   {1}, 0,dir_out,"", (void*)&out_0_default, sizeof(double)} 
};
#define out_0 (*(double*)(ext_vars_addr[0]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"v0_out_0",   vt_double,   {1}, 0, dir_inout,"TSin output", (void*)&v0_out_0_default, sizeof(double)} ,
{"vyprv0_loct",   vt_double,   {1}, 8, dir_inout,"TSin local times", (void*)&vyprv0_loct_default, sizeof(double)} ,
{"v10_out_0",   vt_double,   {1}, 16, dir_inout,"TSin output", (void*)&v10_out_0_default, sizeof(double)} ,
{"vyprv10_loct",   vt_double,   {1}, 24, dir_inout,"TSin local times", (void*)&vyprv10_loct_default, sizeof(double)} ,
{"v19_out_0",   vt_double,   {1}, 32, dir_inout,"TSin output", (void*)&v19_out_0_default, sizeof(double)} ,
{"vyprv19_loct",   vt_double,   {1}, 40, dir_inout,"TSin local times", (void*)&vyprv19_loct_default, sizeof(double)} ,
{"vyprv48_out_0",   vt_double,   {1}, 48, dir_inout,"LAE result block output", (void*)&vyprv48_out_0_default, sizeof(double)} ,
{"vyprv51_coefs",   vt_double,   {2}, 56, dir_inout,"LAE line coefs values", (void*)&vyprv51_coefs_default, sizeof(double_2)} ,
{"vyprv52_out_0",   vt_double,   {1}, 72, dir_inout,"LAE result block output", (void*)&vyprv52_out_0_default, sizeof(double)} ,
{"vyprv55_out_0",   vt_double,   {1}, 80, dir_inout,"LAE result block output", (void*)&vyprv55_out_0_default, sizeof(double)} ,
{"vyprv65_coefs",   vt_double,   {1}, 88, dir_inout,"LAE line coefs values", (void*)&vyprv65_coefs_default, sizeof(double)} ,
{"vyprv66_coefs",   vt_double,   {2}, 96, dir_inout,"LAE line coefs values", (void*)&vyprv66_coefs_default, sizeof(double_2)} ,
{"vyprv67_out_0",   vt_double,   {1}, 112, dir_inout,"LAE result block output", (void*)&vyprv67_out_0_default, sizeof(double)} ,
{"vyprv81_coefs",   vt_double,   {4}, 120, dir_inout,"LAE line coefs values", (void*)&vyprv81_coefs_default, sizeof(double_4)} ,
{"vyprv85_out_0",   vt_double,   {1}, 152, dir_inout,"LAE result block output", (void*)&vyprv85_out_0_default, sizeof(double)} ,
{"vyprv94_out_0",   vt_double,   {1}, 160, dir_inout,"LAE result block output", (void*)&vyprv94_out_0_default, sizeof(double)} ,
{"vyprv98_out_0",   vt_double,   {1}, 168, dir_inout,"LAE result block output", (void*)&vyprv98_out_0_default, sizeof(double)} ,
{"vyprv131_loct",   vt_double,   {1}, 176, dir_inout,"TExtrapolator local times", (void*)&vyprv131_loct_default, sizeof(double)} ,
{"vyprv131_out_0",   vt_double,   {1}, 184, dir_inout,"TExtrapolator output", (void*)&vyprv131_out_0_default, sizeof(double)} ,
{"vyprv136_coefs",   vt_double,   {6}, 192, dir_inout,"LAE line coefs values", (void*)&vyprv136_coefs_default, sizeof(double_6)} ,
{"vyprv137_coefs",   vt_double,   {2}, 240, dir_inout,"LAE line coefs values", (void*)&vyprv137_coefs_default, sizeof(double_2)} ,
{"vyprv153_out_0",   vt_double,   {1}, 256, dir_inout,"LAE result block output", (void*)&vyprv153_out_0_default, sizeof(double)} ,
{"vyprv158_coefs",   vt_double,   {4}, 264, dir_inout,"LAE line coefs values", (void*)&vyprv158_coefs_default, sizeof(double_4)} ,
{"vyprv159_coefs",   vt_double,   {4}, 296, dir_inout,"LAE line coefs values", (void*)&vyprv159_coefs_default, sizeof(double_4)} ,
{"vyprv162_out_0",   vt_double,   {1}, 328, dir_inout,"LAE result block output", (void*)&vyprv162_out_0_default, sizeof(double)} ,
{"vyprv191_out_0",   vt_double,   {1}, 336, dir_inout,"Step delay state", (void*)&vyprv191_out_0_default, sizeof(double)} ,
{"vyprv192_out_0",   vt_double,   {1}, 344, dir_inout,"Step delay state", (void*)&vyprv192_out_0_default, sizeof(double)} ,
{"vyprv193_out_0",   vt_double,   {1}, 352, dir_inout,"Step delay state", (void*)&vyprv193_out_0_default, sizeof(double)} ,
{"vyprv194_out_0",   vt_double,   {1}, 360, dir_inout,"Step delay state", (void*)&vyprv194_out_0_default, sizeof(double)} ,
{"vyprv202_coefs",   vt_double,   {3}, 368, dir_inout,"LAE line coefs values", (void*)&vyprv202_coefs_default, sizeof(double_3)} ,
{"vyprv205_coefs",   vt_double,   {3}, 392, dir_inout,"LAE line coefs values", (void*)&vyprv205_coefs_default, sizeof(double_3)} ,
{"vyprv208_coefs",   vt_double,   {3}, 416, dir_inout,"LAE line coefs values", (void*)&vyprv208_coefs_default, sizeof(double_3)} ,
{"vyprv213_coefs",   vt_double,   {3}, 440, dir_inout,"LAE line coefs values", (void*)&vyprv213_coefs_default, sizeof(double_3)} ,
{"vyprv215_coefs",   vt_double,   {6}, 464, dir_inout,"LAE line coefs values", (void*)&vyprv215_coefs_default, sizeof(double_6)} ,
{"vyprv51_idxs",   vt_int,   {2}, 512, dir_inout,"LAE line coefs indexes", (void*)&vyprv51_idxs_default, sizeof(int_2)} ,
{"vyprv65_idxs",   vt_int,   {1}, 520, dir_inout,"LAE line coefs indexes", (void*)&vyprv65_idxs_default, sizeof(int)} ,
{"vyprv66_idxs",   vt_int,   {2}, 524, dir_inout,"LAE line coefs indexes", (void*)&vyprv66_idxs_default, sizeof(int_2)} ,
{"vyprv81_idxs",   vt_int,   {4}, 532, dir_inout,"LAE line coefs indexes", (void*)&vyprv81_idxs_default, sizeof(int_4)} ,
{"vyprv136_idxs",   vt_int,   {6}, 548, dir_inout,"LAE line coefs indexes", (void*)&vyprv136_idxs_default, sizeof(int_6)} ,
{"vyprv137_idxs",   vt_int,   {2}, 572, dir_inout,"LAE line coefs indexes", (void*)&vyprv137_idxs_default, sizeof(int_2)} ,
{"vyprv158_idxs",   vt_int,   {4}, 580, dir_inout,"LAE line coefs indexes", (void*)&vyprv158_idxs_default, sizeof(int_4)} ,
{"vyprv159_idxs",   vt_int,   {4}, 596, dir_inout,"LAE line coefs indexes", (void*)&vyprv159_idxs_default, sizeof(int_4)} ,
{"vyprv202_idxs",   vt_int,   {3}, 612, dir_inout,"LAE line coefs indexes", (void*)&vyprv202_idxs_default, sizeof(int_3)} ,
{"vyprv205_idxs",   vt_int,   {3}, 624, dir_inout,"LAE line coefs indexes", (void*)&vyprv205_idxs_default, sizeof(int_3)} ,
{"vyprv208_idxs",   vt_int,   {3}, 636, dir_inout,"LAE line coefs indexes", (void*)&vyprv208_idxs_default, sizeof(int_3)} ,
{"vyprv213_idxs",   vt_int,   {3}, 648, dir_inout,"LAE line coefs indexes", (void*)&vyprv213_idxs_default, sizeof(int_3)} ,
{"vyprv215_idxs",   vt_int,   {6}, 660, dir_inout,"LAE line coefs indexes", (void*)&vyprv215_idxs_default, sizeof(int_6)} 
};
   typedef struct {
double v0_out_0_;
double vyprv0_loct_;
double v10_out_0_;
double vyprv10_loct_;
double v19_out_0_;
double vyprv19_loct_;
double vyprv48_out_0_;
double_2 vyprv51_coefs_;
double vyprv52_out_0_;
double vyprv55_out_0_;
double vyprv65_coefs_;
double_2 vyprv66_coefs_;
double vyprv67_out_0_;
double_4 vyprv81_coefs_;
double vyprv85_out_0_;
double vyprv94_out_0_;
double vyprv98_out_0_;
double vyprv131_loct_;
double vyprv131_out_0_;
double_6 vyprv136_coefs_;
double_2 vyprv137_coefs_;
double vyprv153_out_0_;
double_4 vyprv158_coefs_;
double_4 vyprv159_coefs_;
double vyprv162_out_0_;
double vyprv191_out_0_;
double vyprv192_out_0_;
double vyprv193_out_0_;
double vyprv194_out_0_;
double_3 vyprv202_coefs_;
double_3 vyprv205_coefs_;
double_3 vyprv208_coefs_;
double_3 vyprv213_coefs_;
double_6 vyprv215_coefs_;
int_2 vyprv51_idxs_;
int vyprv65_idxs_;
int_2 vyprv66_idxs_;
int_4 vyprv81_idxs_;
int_6 vyprv136_idxs_;
int_2 vyprv137_idxs_;
int_4 vyprv158_idxs_;
int_4 vyprv159_idxs_;
int_3 vyprv202_idxs_;
int_3 vyprv205_idxs_;
int_3 vyprv208_idxs_;
int_3 vyprv213_idxs_;
int_6 vyprv215_idxs_;
   } t_state_vars;

const ext_var_info_record const_names[const_count] = {
{"vyprv0_a",   vt_double,   {1}, 0, dir_input,"TSin gain a", (void*)&vyprv0_a_default, sizeof(double)} ,
{"vyprv0_w",   vt_double,   {1}, 8, dir_input,"TSin gain w", (void*)&vyprv0_w_default, sizeof(double)} ,
{"vyprv0_f",   vt_double,   {1}, 16, dir_input,"TSin gain f", (void*)&vyprv0_f_default, sizeof(double)} ,
{"vyprv1_a",   vt_double,   {1}, 24, dir_input,"Constant value", (void*)&vyprv1_a_default, sizeof(double)} ,
{"vyprv2_a",   vt_double,   {2}, 32, dir_input,"Constant value", (void*)&vyprv2_a_default, sizeof(double_2)} ,
{"vyprv5_a",   vt_double,   {1}, 48, dir_input,"Constant value", (void*)&vyprv5_a_default, sizeof(double)} ,
{"vyprv6_a",   vt_double,   {1}, 56, dir_input,"Constant value", (void*)&vyprv6_a_default, sizeof(double)} ,
{"vyprv7_a",   vt_double,   {1}, 64, dir_input,"Constant value", (void*)&vyprv7_a_default, sizeof(double)} ,
{"vyprv8_a",   vt_double,   {1}, 72, dir_input,"Constant value", (void*)&vyprv8_a_default, sizeof(double)} ,
{"vyprv10_a",   vt_double,   {1}, 80, dir_input,"TSin gain a", (void*)&vyprv10_a_default, sizeof(double)} ,
{"vyprv10_w",   vt_double,   {1}, 88, dir_input,"TSin gain w", (void*)&vyprv10_w_default, sizeof(double)} ,
{"vyprv10_f",   vt_double,   {1}, 96, dir_input,"TSin gain f", (void*)&vyprv10_f_default, sizeof(double)} ,
{"vyprv11_a",   vt_double,   {1}, 104, dir_input,"Constant value", (void*)&vyprv11_a_default, sizeof(double)} ,
{"vyprv12_a",   vt_double,   {2}, 112, dir_input,"Constant value", (void*)&vyprv12_a_default, sizeof(double_2)} ,
{"vyprv15_a",   vt_double,   {1}, 128, dir_input,"Constant value", (void*)&vyprv15_a_default, sizeof(double)} ,
{"vyprv16_a",   vt_double,   {1}, 136, dir_input,"Constant value", (void*)&vyprv16_a_default, sizeof(double)} ,
{"vyprv17_a",   vt_double,   {1}, 144, dir_input,"Constant value", (void*)&vyprv17_a_default, sizeof(double)} ,
{"vyprv18_a",   vt_double,   {1}, 152, dir_input,"Constant value", (void*)&vyprv18_a_default, sizeof(double)} ,
{"vyprv19_a",   vt_double,   {1}, 160, dir_input,"TSin gain a", (void*)&vyprv19_a_default, sizeof(double)} ,
{"vyprv19_w",   vt_double,   {1}, 168, dir_input,"TSin gain w", (void*)&vyprv19_w_default, sizeof(double)} ,
{"vyprv19_f",   vt_double,   {1}, 176, dir_input,"TSin gain f", (void*)&vyprv19_f_default, sizeof(double)} ,
{"vyprv20_a",   vt_double,   {1}, 184, dir_input,"Constant value", (void*)&vyprv20_a_default, sizeof(double)} ,
{"vyprv21_a",   vt_double,   {2}, 192, dir_input,"Constant value", (void*)&vyprv21_a_default, sizeof(double_2)} ,
{"vyprv24_a",   vt_double,   {1}, 208, dir_input,"Constant value", (void*)&vyprv24_a_default, sizeof(double)} ,
{"vyprv25_a",   vt_double,   {1}, 216, dir_input,"Constant value", (void*)&vyprv25_a_default, sizeof(double)} ,
{"vyprv26_a",   vt_double,   {1}, 224, dir_input,"Constant value", (void*)&vyprv26_a_default, sizeof(double)} ,
{"vyprv27_a",   vt_double,   {1}, 232, dir_input,"Constant value", (void*)&vyprv27_a_default, sizeof(double)} ,
{"vyprv28_a",   vt_double,   {1}, 240, dir_input,"Constant value", (void*)&vyprv28_a_default, sizeof(double)} ,
{"vyprv30_a",   vt_double,   {1}, 248, dir_input,"Constant value", (void*)&vyprv30_a_default, sizeof(double)} ,
{"vyprv31_a",   vt_double,   {1}, 256, dir_input,"Constant value", (void*)&vyprv31_a_default, sizeof(double)} ,
{"vyprv32_a",   vt_double,   {1}, 264, dir_input,"Constant value", (void*)&vyprv32_a_default, sizeof(double)} ,
{"vyprv35_a",   vt_double,   {1}, 272, dir_input,"Constant value", (void*)&vyprv35_a_default, sizeof(double)} ,
{"vyprv37_a",   vt_double,   {1}, 280, dir_input,"Constant value", (void*)&vyprv37_a_default, sizeof(double)} ,
{"vyprv39_a",   vt_double,   {1}, 288, dir_input,"Constant value", (void*)&vyprv39_a_default, sizeof(double)} ,
{"vyprv44_a",   vt_double,   {1}, 296, dir_input,"Constant value", (void*)&vyprv44_a_default, sizeof(double)} ,
{"vyprv47_a",   vt_double,   {1}, 304, dir_input,"Constant value", (void*)&vyprv47_a_default, sizeof(double)} ,
{"vyprv54_t",   vt_double,   {5}, 312, dir_input,"Static times", (void*)&vyprv54_t_default, sizeof(double_5)} ,
{"vyprv54_y",   vt_double,   {5}, 352, dir_input,"Static values", (void*)&vyprv54_y_default, sizeof(double_5)} ,
{"vyprv57_t",   vt_double,   {5}, 392, dir_input,"Static times", (void*)&vyprv57_t_default, sizeof(double_5)} ,
{"vyprv57_y",   vt_double,   {5}, 432, dir_input,"Static values", (void*)&vyprv57_y_default, sizeof(double_5)} ,
{"vyprv60_a",   vt_double,   {1}, 472, dir_input,"Ampliefer koefficient", (void*)&vyprv60_a_default, sizeof(double)} ,
{"vyprv69_t",   vt_double,   {5}, 480, dir_input,"Static times", (void*)&vyprv69_t_default, sizeof(double_5)} ,
{"vyprv69_y",   vt_double,   {5}, 520, dir_input,"Static values", (void*)&vyprv69_y_default, sizeof(double_5)} ,
{"vyprv71_t",   vt_double,   {5}, 560, dir_input,"Static times", (void*)&vyprv71_t_default, sizeof(double_5)} ,
{"vyprv71_y",   vt_double,   {5}, 600, dir_input,"Static values", (void*)&vyprv71_y_default, sizeof(double_5)} ,
{"vyprv74_a",   vt_double,   {1}, 640, dir_input,"Ampliefer koefficient", (void*)&vyprv74_a_default, sizeof(double)} ,
{"vyprv87_t",   vt_double,   {5}, 648, dir_input,"Static times", (void*)&vyprv87_t_default, sizeof(double_5)} ,
{"vyprv87_y",   vt_double,   {5}, 688, dir_input,"Static values", (void*)&vyprv87_y_default, sizeof(double_5)} ,
{"vyprv105_t",   vt_double,   {5}, 728, dir_input,"Static times", (void*)&vyprv105_t_default, sizeof(double_5)} ,
{"vyprv105_y",   vt_double,   {5}, 768, dir_input,"Static values", (void*)&vyprv105_y_default, sizeof(double_5)} ,
{"vyprv125_a",   vt_double,   {1}, 808, dir_input,"Ampliefer koefficient", (void*)&vyprv125_a_default, sizeof(double)} ,
{"vyprv131_tau",   vt_double,   {1}, 816, dir_input,"TExtrapolator tau", (void*)&vyprv131_tau_default, sizeof(double)} ,
{"vyprv133_a",   vt_double,   {1}, 824, dir_input,"Ampliefer koefficient", (void*)&vyprv133_a_default, sizeof(double)} ,
{"vyprv139_a",   vt_double,   {1}, 832, dir_input,"Ampliefer koefficient", (void*)&vyprv139_a_default, sizeof(double)} ,
{"vyprv147_a",   vt_double,   {1}, 840, dir_input,"Ampliefer koefficient", (void*)&vyprv147_a_default, sizeof(double)} ,
{"vyprv166_a",   vt_double,   {1}, 848, dir_input,"Ampliefer koefficient", (void*)&vyprv166_a_default, sizeof(double)} ,
{"vyprv172_a",   vt_double,   {1}, 856, dir_input,"Ampliefer koefficient", (void*)&vyprv172_a_default, sizeof(double)} ,
{"vyprv177_a",   vt_double,   {1}, 864, dir_input,"Ampliefer koefficient", (void*)&vyprv177_a_default, sizeof(double)} ,
{"vyprv183_a",   vt_double,   {1}, 872, dir_input,"Ampliefer koefficient", (void*)&vyprv183_a_default, sizeof(double)} ,
{"vyprv200_a",   vt_double,   {1}, 880, dir_input,"Ampliefer koefficient", (void*)&vyprv200_a_default, sizeof(double)} ,
{"vyprv206_a",   vt_double,   {1}, 888, dir_input,"Ampliefer koefficient", (void*)&vyprv206_a_default, sizeof(double)} ,
{"vyprv209_a",   vt_double,   {1}, 896, dir_input,"Ampliefer koefficient", (void*)&vyprv209_a_default, sizeof(double)} ,
{"vyprv211_a",   vt_double,   {1}, 904, dir_input,"Ampliefer koefficient", (void*)&vyprv211_a_default, sizeof(double)} 
};
   typedef struct {
double vyprv0_a_;
double vyprv0_w_;
double vyprv0_f_;
double vyprv1_a_;
double_2 vyprv2_a_;
double vyprv5_a_;
double vyprv6_a_;
double vyprv7_a_;
double vyprv8_a_;
double vyprv10_a_;
double vyprv10_w_;
double vyprv10_f_;
double vyprv11_a_;
double_2 vyprv12_a_;
double vyprv15_a_;
double vyprv16_a_;
double vyprv17_a_;
double vyprv18_a_;
double vyprv19_a_;
double vyprv19_w_;
double vyprv19_f_;
double vyprv20_a_;
double_2 vyprv21_a_;
double vyprv24_a_;
double vyprv25_a_;
double vyprv26_a_;
double vyprv27_a_;
double vyprv28_a_;
double vyprv30_a_;
double vyprv31_a_;
double vyprv32_a_;
double vyprv35_a_;
double vyprv37_a_;
double vyprv39_a_;
double vyprv44_a_;
double vyprv47_a_;
double_5 vyprv54_t_;
double_5 vyprv54_y_;
double_5 vyprv57_t_;
double_5 vyprv57_y_;
double vyprv60_a_;
double_5 vyprv69_t_;
double_5 vyprv69_y_;
double_5 vyprv71_t_;
double_5 vyprv71_y_;
double vyprv74_a_;
double_5 vyprv87_t_;
double_5 vyprv87_y_;
double_5 vyprv105_t_;
double_5 vyprv105_y_;
double vyprv125_a_;
double vyprv131_tau_;
double vyprv133_a_;
double vyprv139_a_;
double vyprv147_a_;
double vyprv166_a_;
double vyprv172_a_;
double vyprv177_a_;
double vyprv183_a_;
double vyprv200_a_;
double vyprv206_a_;
double vyprv209_a_;
double vyprv211_a_;
   } t_consts;
   typedef struct {
double v50_out_0_;
double v53_out_0_;
double v54_out_0_;
double v57_out_0_;
double_2 v58_out_0_;
double_3 v59_out_0_;
double_3 v60_out_0_;
double v62_out_0_;
double_4 v63_out_0_;
double v69_out_0_;
double v71_out_0_;
double_4 v76_out_0_;
double v80_out_0_;
double v87_out_0_;
double v97_out_0_;
double v101_out_0_;
double_2 v103_out_0_;
double v105_out_0_;
double_2 v109_out_0_;
double v113_out_0_;
double_3 v115_out_0_;
double_3 v121_out_0_;
double_5 v124_out_0_;
double_5 v125_out_0_;
double_6 v127_out_0_;
double v134_out_0_;
double_6 v149_out_0_;
int solverid_lsolver1_;
int laecounter_lsolver1_;
int vyprv3_out_0_;
int vyprv4_out_0_;
int vyprv9_out_0_;
int vyprv13_out_0_;
int vyprv14_out_0_;
int vyprv22_out_0_;
int vyprv23_out_0_;
int vyprv29_out_0_;
int vyprv33_out_0_;
int vyprv40_out_0_;
int vyprv41_out_0_;
int vyprv42_out_0_;
int vyprv45_out_0_;
int_2 v49_out_0_;
int_4 v78_out_0_;
int_2 v93_out_0_;
int_2 v107_out_0_;
int_2 v112_out_0_;
int_2 v116_out_0_;
int_3 v117_out_0_;
int_6 v129_out_0_;
int_6 v152_out_0_;
int_3 v186_out_0_;
   } t_local;
#include "splae_funcs.h"

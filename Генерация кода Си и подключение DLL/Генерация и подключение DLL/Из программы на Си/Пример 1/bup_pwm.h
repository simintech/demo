
/*  ------------------------------------------------------
     Routine name:  bup_pwm
     Description:   
     Project file:  Шаблон для БУП.prt

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


/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=2293132410;

const double input_2_default=0;
const double input_3_default=0;
const double input_4_default=0;
const double out_0_default=0;
const char input_0_default=0;
const char input_5_default=0;
const char input_1_default=0;
const double bup_pwmv3_out_0_default=0;
const double bup_pwmv4_out_0_default=0;
const double bup_pwmv5_out_0_default=0;
const double bup_pwmv6_out_0_default=0;
const int bup_pwmv6_vskor_default=0;
const int bup_pwmv6_vdelta_default=0;
const int bup_pwmv6_pwm_default=0;
const char bup_pwmv0_out_0_default=0;
const char bup_pwmv1_out_0_default=0;
const char bup_pwmv2_out_0_default=0;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 7
/* Internal state variables count */
#define state_vars_count 10
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.001
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.1
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 0
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
{"input:2",   vt_double,   {1}, 0,dir_input,"", (void*)&input_2_default, sizeof(double)} ,
{"input:3",   vt_double,   {1}, 1,dir_input,"", (void*)&input_3_default, sizeof(double)} ,
{"input:4",   vt_double,   {1}, 2,dir_input,"", (void*)&input_4_default, sizeof(double)} ,
{"out:0",   vt_double,   {1}, 3,dir_out,"", (void*)&out_0_default, sizeof(double)} ,
{"input:0",   vt_bool,   {1}, 4,dir_input,"", (void*)&input_0_default, sizeof(char)} ,
{"input:5",   vt_bool,   {1}, 5,dir_input,"", (void*)&input_5_default, sizeof(char)} ,
{"input:1",   vt_bool,   {1}, 6,dir_input,"", (void*)&input_1_default, sizeof(char)} 
};
#define input_2 (*(double*)(ext_vars_addr[0]))
#define input_3 (*(double*)(ext_vars_addr[1]))
#define input_4 (*(double*)(ext_vars_addr[2]))
#define out_0 (*(double*)(ext_vars_addr[3]))
#define input_0 (*(char*)(ext_vars_addr[4]))
#define input_5 (*(char*)(ext_vars_addr[5]))
#define input_1 (*(char*)(ext_vars_addr[6]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"bup_pwmv3_out_0",   vt_double,   {1}, 0, dir_inout,"Input pin state variable", (void*)&bup_pwmv3_out_0_default, sizeof(double)} ,
{"bup_pwmv4_out_0",   vt_double,   {1}, 8, dir_inout,"Input pin state variable", (void*)&bup_pwmv4_out_0_default, sizeof(double)} ,
{"bup_pwmv5_out_0",   vt_double,   {1}, 16, dir_inout,"Input pin state variable", (void*)&bup_pwmv5_out_0_default, sizeof(double)} ,
{"bup_pwmv6_out_0",   vt_double,   {1}, 24, dir_inout,"Language out", (void*)&bup_pwmv6_out_0_default, sizeof(double)} ,
{"bup_pwmv6_vskor",   vt_int,   {1}, 32, dir_inout,"vskor", (void*)&bup_pwmv6_vskor_default, sizeof(int)} ,
{"bup_pwmv6_vdelta",   vt_int,   {1}, 36, dir_inout,"vdelta", (void*)&bup_pwmv6_vdelta_default, sizeof(int)} ,
{"bup_pwmv6_pwm",   vt_int,   {1}, 40, dir_inout,"pwm", (void*)&bup_pwmv6_pwm_default, sizeof(int)} ,
{"bup_pwmv0_out_0",   vt_bool,   {1}, 44, dir_inout,"Input pin state variable", (void*)&bup_pwmv0_out_0_default, sizeof(char)} ,
{"bup_pwmv1_out_0",   vt_bool,   {1}, 45, dir_inout,"Input pin state variable", (void*)&bup_pwmv1_out_0_default, sizeof(char)} ,
{"bup_pwmv2_out_0",   vt_bool,   {1}, 46, dir_inout,"Input pin state variable", (void*)&bup_pwmv2_out_0_default, sizeof(char)} 
};
   typedef struct {
double bup_pwmv3_out_0_;
double bup_pwmv4_out_0_;
double bup_pwmv5_out_0_;
double bup_pwmv6_out_0_;
int bup_pwmv6_vskor_;
int bup_pwmv6_vdelta_;
int bup_pwmv6_pwm_;
char bup_pwmv0_out_0_;
char bup_pwmv1_out_0_;
char bup_pwmv2_out_0_;
   } t_state_vars;
#define bup_pwmv6_vskor state_vars->bup_pwmv6_vskor_
#define bup_pwmv6_vdelta state_vars->bup_pwmv6_vdelta_
#define bup_pwmv6_pwm state_vars->bup_pwmv6_pwm_
  typedef char t_consts;
  typedef char t_local;

#ifndef av_bup_pwm 
#define av_bup_pwm
 
//---------------------------------------------------------------------------

// Для переменных состояния надо сделать доступ по указателям !
//  define VSkor *VSK  Или использовать это !

void PWM_BUP_RUN(
  int  TIM2_FREQ,
  char Startup_time,
  char STATUS_WORD_VM_9,
  int  DOS_RPf,
  int  Delta_DOS_dvig,
  int  SPEEDf,
	char VIP_SHTOK,
	int* VSkor,
	int* VDelta,
  int* PWM)
{
	
int Delta;
int temp;

if( !Startup_time )
{
 if ( STATUS_WORD_VM_9 )
  temp =!VIP_SHTOK;
 else
  temp =VIP_SHTOK;

 if( temp )
 {
  Delta = 132*1024*1024 - DOS_RPf; 

  if (Delta<0) Delta=0;
  if (STATUS_WORD_VM_9 ) Delta=0;
  if (*VSkor<0) *VSkor=0;
  temp = (int)(0.4*1024)*(Delta/1024) + 0.4*1024*1024;
  if (temp > +(int)(2.4*1024*1024) ) temp = +(int)(2.4*1024*1024);
  if ( (temp-*VSkor)> +(int)(1.5*1024*1024/TIM2_FREQ) )
   *VSkor += (int)(1.5*1024*1024/TIM2_FREQ);
  else *VSkor = temp;   

  *VDelta += ( (*VSkor/1024) * (int)(1024*1024/TIM2_FREQ) ) / 1024;

  *VDelta -= Delta_DOS_dvig;
     
  if (*VDelta < 0) *VDelta = 0;
  if (*VDelta > +(int)(2.1*1024*1024) )
   *VDelta = +(int)(2.1*1024*1024);
 }
 else
 {
  Delta = 0*1024*1024 - DOS_RPf; 
  if (Delta>0) Delta=0;
  if (STATUS_WORD_VM_9) Delta=0;
  if (*VSkor>0) *VSkor=0;
  temp = (int)(0.4*1024)*(Delta/1024) - 0.4*1024*1024;
  if (temp < -(int)(2.4*1024*1024) ) temp = -(int)(2.4*1024*1024);
  if ( (temp-*VSkor)< -(int)(1.5*1024*1024/TIM2_FREQ) )
   *VSkor -= (int)(1.5*1024*1024/TIM2_FREQ);
  else *VSkor = temp;
  *VDelta += ( (*VSkor/1024) * (int)(1024*1024/TIM2_FREQ) ) / 1024;
  *VDelta -= Delta_DOS_dvig;
  if (*VDelta > 0) *VDelta = 0;
  if (*VDelta < -(int)(2.1*1024*1024) )
   *VDelta = -(int)(2.1*1024*1024);

  }; //if temp  

 }
 else
 { //Останов
  *VDelta = 0;
  *VSkor = 0;
 };


// ВЫЧИСЛЕНИЕ УПРАВЛЯЮЩЕГО СИГНАЛА
*PWM = (int)(65.0)*(*VDelta/32) - ((int)(10.0)*SPEEDf)/32;

//коэффициент заполнения не должен быть больше 100%
if ( *PWM > 100*1024*32) *PWM = 100*1024*32;
else if ( *PWM <-100*1024*32) *PWM =-100*1024*32;
*PWM = *PWM *32;

};

#endif
 


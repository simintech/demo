/*  ------------------------------------------------------
     Routine name:  bup_pwm
     Description:   
     Project file:  Шаблон для БУП.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
int itmp1;
int itmp2;
double tmp1;
double tmp2;
double tmp3;
double tmp4;
double tmp5;
double tmp6;
double tmp7;
char f;
char tmp_f_1;
char u_s;
char u_r;
int bup_pwmv6_vskor_temp;
int bup_pwmv6_vdelta_temp;
 
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source9
   Type=Входной контакт s3 */

state_vars->bup_pwmv0_out_0_ = ((input_0));

/* Index=1
   UID=1
   GeneratorClassName=TInputPin
   Name=Const_source14
   Type=Входной контакт s3 */

state_vars->bup_pwmv1_out_0_ = ((input_5));

/* Index=2
   UID=2
   GeneratorClassName=TInputPin
   Name=Const_source10
   Type=Входной контакт s3 */

state_vars->bup_pwmv2_out_0_ = ((input_1));

/* Index=3
   UID=3
   GeneratorClassName=TInputPin
   Name=Const_source11
   Type=Входной контакт s3 */

state_vars->bup_pwmv3_out_0_ = ((input_2));

/* Index=4
   UID=4
   GeneratorClassName=TInputPin
   Name=Const_source12
   Type=Входной контакт s3 */

state_vars->bup_pwmv4_out_0_ = ((input_3));

/* Index=5
   UID=5
   GeneratorClassName=TInputPin
   Name=Const_source13
   Type=Входной контакт s3 */

state_vars->bup_pwmv5_out_0_ = ((input_4));

/* Index=6
   UID=6
   GeneratorClassName=TLanguage
   Name=LangBlock10
   Type=Язык программирования */

//Переводим переменные состояния во временные
bup_pwmv6_vskor_temp = bup_pwmv6_vskor;
bup_pwmv6_vdelta_temp = bup_pwmv6_vdelta; 

	//Вызов программы расчёта PWM
PWM_BUP_RUN(
  (int)((1/step)),           // частота в Гц как целое число
  (state_vars->bup_pwmv0_out_0_ > 0.5),           // char Startup_time,
  (state_vars->bup_pwmv2_out_0_ > 0.5),           // char STATUS_WORD_VM_9,
  (int)(state_vars->bup_pwmv3_out_0_*1024*1024),  // int  DOS_RPf,
  (int)(state_vars->bup_pwmv4_out_0_*1024*1024),  // int  Delta_DOS_dvig,
  (int)(state_vars->bup_pwmv5_out_0_*1024*1024),  // int  SPEEDf,
	(state_vars->bup_pwmv1_out_0_ > 0.5),           // char VIP_SHTOK,
	&bup_pwmv6_vskor_temp,
	&bup_pwmv6_vdelta_temp,
  &bup_pwmv6_pwm);

  //Запоминание переменных состояния на хорошем шаге
if((action = f_GoodStep)||(action = f_InitState)) {
  bup_pwmv6_vskor = bup_pwmv6_vskor_temp;
  bup_pwmv6_vdelta = bup_pwmv6_vdelta_temp; 
};
	  
  //Присвоение данных выхода                
state_vars->bup_pwmv6_out_0_ = bup_pwmv6_pwm/(1024*1024);

/* Index=7
   UID=7
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

if(isfinite(state_vars->bup_pwmv6_out_0_)){
out_0 = state_vars->bup_pwmv6_out_0_;
};
};break;
};

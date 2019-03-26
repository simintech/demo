/*  ------------------------------------------------------
     Routine name:  bup_pwm
     Description:   
     Project file:  Шаблон.prt

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
int bup_pwmve33be5_vskor_temp;
int bup_pwmve33be5_vdelta_temp;
 
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
   UID=f52b10
   GeneratorClassName=TInputPin
   Name=Const_source9
   Type=Входной контакт s3 */

state_vars->bup_pwmvf52b10_out_0_ = ((input_0));

/* Index=1
   UID=88b3b3
   GeneratorClassName=TInputPin
   Name=Const_source14
   Type=Входной контакт s3 */

state_vars->bup_pwmv88b3b3_out_0_ = ((input_5));

/* Index=2
   UID=5193f6
   GeneratorClassName=TInputPin
   Name=Const_source10
   Type=Входной контакт s3 */

state_vars->bup_pwmv5193f6_out_0_ = ((input_1));

/* Index=3
   UID=6cd2d8
   GeneratorClassName=TInputPin
   Name=Const_source11
   Type=Входной контакт s3 */

state_vars->bup_pwmv6cd2d8_out_0_ = ((input_2));

/* Index=4
   UID=e62922
   GeneratorClassName=TInputPin
   Name=Const_source12
   Type=Входной контакт s3 */

state_vars->bup_pwmve62922_out_0_ = ((input_3));

/* Index=5
   UID=7db3a6
   GeneratorClassName=TInputPin
   Name=Const_source13
   Type=Входной контакт s3 */

state_vars->bup_pwmv7db3a6_out_0_ = ((input_4));

/* Index=6
   UID=e33be5
   GeneratorClassName=TLanguage
   Name=LangBlock10
   Type=Язык программирования */

//Переводим переменные состояния во временные
bup_pwmve33be5_vskor_temp = bup_pwmve33be5_vskor;
bup_pwmve33be5_vdelta_temp = bup_pwmve33be5_vdelta; 

	//Вызов программы расчёта PWM
PWM_BUP_RUN(
  (int)((1/step)),           // частота в Гц как целое число
  (state_vars->bup_pwmvf52b10_out_0_ > 0.5),           // char Startup_time,
  (state_vars->bup_pwmv5193f6_out_0_ > 0.5),           // char STATUS_WORD_VM_9,
  (int)(state_vars->bup_pwmv6cd2d8_out_0_*1024*1024),  // int  DOS_RPf,
  (int)(state_vars->bup_pwmve62922_out_0_*1024*1024),  // int  Delta_DOS_dvig,
  (int)(state_vars->bup_pwmv7db3a6_out_0_*1024*1024),  // int  SPEEDf,
	(state_vars->bup_pwmv88b3b3_out_0_ > 0.5),           // char VIP_SHTOK,
	&bup_pwmve33be5_vskor_temp,
	&bup_pwmve33be5_vdelta_temp,
  &bup_pwmve33be5_pwm);

  //Запоминание переменных состояния на хорошем шаге
if((action = f_GoodStep)||(action = f_InitState)) {
  bup_pwmve33be5_vskor = bup_pwmve33be5_vskor_temp;
  bup_pwmve33be5_vdelta = bup_pwmve33be5_vdelta_temp; 
};
	  
  //Присвоение данных выхода                
state_vars->bup_pwmve33be5_out_0_ = bup_pwmve33be5_pwm/(1024*1024);

/* Index=7
   UID=cecd03
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

out_0 = state_vars->bup_pwmve33be5_out_0_;
};break;
};

/*  ------------------------------------------------------
     Routine name:  prog_1
     Description:   
     Project file:  Ўаблон.prt

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
   Name=Const_source10
   Type=¬ходной контакт s3 */

state_vars->prog_1v0_out_0_ = input_0;

/* Index=1
   UID=1
   GeneratorClassName=TInputPin
   Name=Const_source11
   Type=¬ходной контакт s3 */

state_vars->prog_1v1_out_0_ = input_1;

/* Index=2
   UID=2
   GeneratorClassName=TInputPin
   Name=Const_source12
   Type=¬ходной контакт s3 */

state_vars->prog_1v2_out_0_ = property_aaa;

/* Index=3
   UID=3
   GeneratorClassName=TLanguage
   Name=LangBlock13
   Type=язык программировани€ */

prog_1v3_my_global_external_var = prog_1v3_my_global_external_var + myproc(  state_vars->prog_1v0_out_0_, state_vars->prog_1v1_out_0_  ); 

state_vars->prog_1v3_out_0_ = state_vars->prog_1v2_out_0_ * prog_1v3_my_global_external_var;



prog_1v3_my_global_external_var = prog_1v3_my_global_external_var + myproc(  state_vars->prog_1v0_out_0_, state_vars->prog_1v1_out_0_  ); 

state_vars->prog_1v3_out_0_ = state_vars->prog_1v2_out_0_ * prog_1v3_my_global_external_var;



prog_1v3_my_global_external_var = prog_1v3_my_global_external_var + myproc(  state_vars->prog_1v0_out_0_, state_vars->prog_1v1_out_0_  ); 

state_vars->prog_1v3_out_0_ = state_vars->prog_1v2_out_0_ * prog_1v3_my_global_external_var;

/* Index=4
   UID=4
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=¬ыходной контакт s3 */

if(isfinite(state_vars->prog_1v3_out_0_)){
out_0 = state_vars->prog_1v3_out_0_;
};
};break;
};

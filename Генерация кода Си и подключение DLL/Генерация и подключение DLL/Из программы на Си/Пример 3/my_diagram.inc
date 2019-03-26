/*  ------------------------------------------------------
     Routine name:  my_diagram
     Description:   
     Project file:  Ўаблон пр€мого написани€ программы на —и.prt

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
  
static double v1_w;
v1_w = 10;
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock4
   Type=язык программировани€ */

my_diagramv1_dyn_var_deri=state_vars->my_diagramv0_out_0_;
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=¬ходной контакт s3 */

state_vars->my_diagramv0_out_0_ = input_0_1_;

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock4
   Type=язык программировани€ */

state_vars->my_diagramv1_out_0_ = sin(my_diagramv1_dyn_var)*v1_w;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=¬ыходной контакт s3 */

if(isfinite(state_vars->my_diagramv1_out_0_)){
out_0_1_ = state_vars->my_diagramv1_out_0_;
};
};break;
};

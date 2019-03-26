/*  ------------------------------------------------------
     Routine name:  my_diagram
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
ret = 0;

switch (action){
case f_Stop:{
/* Index=0
   UID=0
   GeneratorClassName=TLanguage
   Name=LangBlock9
   Type=Язык программирования */

v0_sfinal__0:
;
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{
/* Index=0
   UID=0
   GeneratorClassName=TLanguage
   Name=LangBlock9
   Type=Язык программирования */

state_vars->my_diagramv0_out_0_=sin(modeltime);
v0x_deri=state_vars->my_diagramv0_out_0_;
state_vars->my_diagramv0_out_1_=v0x;
v0___3:
;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

if(isfinite(state_vars->my_diagramv0_out_0_)){
out_0 = state_vars->my_diagramv0_out_0_;
};

/* Index=3
   UID=3
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=Выходной контакт s3 */

if(isfinite(state_vars->my_diagramv0_out_1_)){
out_1 = state_vars->my_diagramv0_out_1_;
};
};break;
};

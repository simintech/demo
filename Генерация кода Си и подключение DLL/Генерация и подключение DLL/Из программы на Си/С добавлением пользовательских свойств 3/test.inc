/*  ------------------------------------------------------
     Routine name:  test
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
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=Входной контакт s3 */

state_vars->testv0_out_0_ = _name_x1_1_;

/* Index=1
   UID=1
   GeneratorClassName=TInputPin
   Name=Const_source6
   Type=Входной контакт s3 */

state_vars->testv1_out_0_ = property_delta;

/* Index=2
   UID=2
   GeneratorClassName=TTimeAccept_On
   Name=timer8
   Type=Задержка по включению */

tmp1 = state_vars->testv2_t_;
u_s = state_vars->testv2_timer_;
if(u_s){
tmp1 = tmp1-step;
if(tmp1<0){tmp1 = 0;}else{
if(tmp1>consts->testv2_tau_){tmp1 = consts->testv2_tau_;};
};
}else{
tmp1 = 0;
};
f = (state_vars->testv0_out_0_ > 0.5);
if(!f){
u_s = 0;
tmp1 = 0;
};
if(f && (!u_s)){
u_s = 1;
tmp1 = consts->testv2_tau_;
};
if(f && (tmp1<=0)){
state_vars->testv2_out_0_ = 1;
}else{
state_vars->testv2_out_0_ = 0;
};
state_vars->testv2_out_1_ = consts->testv2_tau_-tmp1;
if(action==f_GoodStep){
state_vars->testv2_t_ = tmp1;
state_vars->testv2_timer_ = u_s;
};
if((solver_data->fPreciseSrcStep)&&(tmp1>0)){
 solver_data->fsetstep = 1;
 solver_data->newstep  = fmin(solver_data->newstep,fmax(tmp1-(0.5*solver_data->Hmin),0));
};

/* Index=3
   UID=3
   GeneratorClassName=TSumSrc
   Name=Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v3_out_0_ = (1)*state_vars->testv2_out_1_+(-1)*state_vars->testv1_out_0_;

/* Index=4
   UID=4
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

if(isfinite(locals->v3_out_0_)){
_name_y1 = locals->v3_out_0_;
};
};break;
};

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

/* Index=2
   UID=2
   GeneratorClassName=TAperiodika1
   Name=Aperiodika2
   Type=Инерционное звено 1-го порядка */

for(i=0;i<2;i++){
testv2_out_0_deri[i] = (consts->testv2_k_[i]*state_vars->testv0_out_0_[i]-testv2_out_0[i])/consts->testv2_t_[i];

/* Index=3
   UID=3
   GeneratorClassName=TLimitIntegrator
   Name=LimitIntegrator1
   Type=Интегратор с ограничением */

testv3_x_deri[i] = consts->testv3_k_[i]*testv2_out_0[i];
};
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=Входной контакт s3 */

state_vars->testv0_out_0_[0] = input_0_1_;
state_vars->testv0_out_0_[1] = input_0_2_;

/* Index=1
   UID=1
   GeneratorClassName=TInputPin
   Name=Const_source6
   Type=Входной контакт s3 */

state_vars->testv1_out_0_ = input_1;

/* Index=3
   UID=3
   GeneratorClassName=TLimitIntegrator
   Name=LimitIntegrator1
   Type=Интегратор с ограничением */

for(i=0;i<2;i++){
state_vars->testv3_out_0_[i] = testv3_x[i];
if(state_vars->testv3_out_0_[i]<consts->testv3_ymin_[i]){
state_vars->testv3_out_0_[i] = consts->testv3_ymin_[i];
}else{
if(state_vars->testv3_out_0_[i]>consts->testv3_ymax_[i]){
state_vars->testv3_out_0_[i] = consts->testv3_ymax_[i];
}
};
if(action==f_GoodStep) {testv3_x[i] = state_vars->testv3_out_0_[i];};

/* Index=4
   UID=4
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

};
if(isfinite(state_vars->testv3_out_0_[0])){
out_0_1_ = state_vars->testv3_out_0_[0];
};
if(isfinite(state_vars->testv3_out_0_[1])){
out_0_2_ = state_vars->testv3_out_0_[1];
};
};break;
};

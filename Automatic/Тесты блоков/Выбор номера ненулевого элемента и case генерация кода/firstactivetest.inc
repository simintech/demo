/*  ------------------------------------------------------
     Routine name:  firstactivetest
        Generated:  02.02.2015 20:01:09
      Description:  
     Project file:  Выбор номера ненулевого элемента и case.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
double tmp1;
double tmp2;
double tmp3;
double tmp4;
double tmp5;
double tmp6;
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
   GeneratorClassName=TSinSource
   Name=Sinus_source4
   Type=Синусоида */

for(i=0;i<5;i++){
tmp1 = state_vars->firstactivetestv0_loct_[i]+step;
state_vars->v0_out_0_[i] = consts->firstactivetestv0_a_[i]*sin(consts->firstactivetestv0_w_[i]*tmp1+consts->firstactivetestv0_f_[i]);
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(consts->firstactivetestv0_w_[i]!=0)){
tmp2 = fabs(2*M_PI/consts->firstactivetestv0_w_[i]);
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->firstactivetestv0_loct_[i] = tmp1;
};

/* Index=1
   UID=1
   GeneratorClassName=TMeandr
   Name=Meandre_source6
   Type=Меандр */

};
tmp1 = state_vars->firstactivetestv1_timer_+step;
tmp2 = consts->firstactivetestv1_t1_+consts->firstactivetestv1_t2_;
if((tmp2 > 0)&&(fmod(tmp1,tmp2) > consts->firstactivetestv1_t1_)){
state_vars->firstactivetestv1_out_0_ = consts->firstactivetestv1_y2_;
}else{
state_vars->firstactivetestv1_out_0_ = consts->firstactivetestv1_y1_;
};
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(tmp2 > 0)){
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->firstactivetestv1_timer_ = tmp1;
};

/* Index=2
   UID=2
   GeneratorClassName=TMeandr
   Name=Meandre_source7
   Type=Меандр */

tmp1 = state_vars->firstactivetestv2_timer_+step;
tmp2 = consts->firstactivetestv2_t1_+consts->firstactivetestv2_t2_;
if((tmp2 > 0)&&(fmod(tmp1,tmp2) > consts->firstactivetestv2_t1_)){
state_vars->firstactivetestv2_out_0_ = consts->firstactivetestv2_y2_;
}else{
state_vars->firstactivetestv2_out_0_ = consts->firstactivetestv2_y1_;
};
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(tmp2 > 0)){
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->firstactivetestv2_timer_ = tmp1;
};

/* Index=3
   UID=3
   GeneratorClassName=TMeandr
   Name=Meandre_source8
   Type=Меандр */

tmp1 = state_vars->firstactivetestv3_timer_+step;
tmp2 = consts->firstactivetestv3_t1_+consts->firstactivetestv3_t2_;
if((tmp2 > 0)&&(fmod(tmp1,tmp2) > consts->firstactivetestv3_t1_)){
state_vars->firstactivetestv3_out_0_ = consts->firstactivetestv3_y2_;
}else{
state_vars->firstactivetestv3_out_0_ = consts->firstactivetestv3_y1_;
};
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(tmp2 > 0)){
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->firstactivetestv3_timer_ = tmp1;
};

/* Index=4
   UID=4
   GeneratorClassName=TMultiplexor
   Name=Multiplexor_vec4
   Type=Мультиплексор */

locals->v4_out_0_[0] = state_vars->firstactivetestv1_out_0_;
locals->v4_out_0_[1] = state_vars->firstactivetestv2_out_0_;
locals->v4_out_0_[2] = state_vars->firstactivetestv3_out_0_;

/* Index=5
   UID=5
   GeneratorClassName=TFirstActive
   Name=NumberOfActive_0
   Type=Номер активного элемента */

locals->v5_out_0_ = 0;
for(i = 0;i<3;i++){
if((locals->v4_out_0_[i] > 0)){
locals->v5_out_0_ = i + 1;
break;
};
};

/* Index=6
   UID=6
   GeneratorClassName=TCase
   Name=Case_oper4
   Type=Динамическая выборка */

j=locals->v5_out_0_;
if(j<1) j=1;
if(j>5) j=5;
locals->v6_out_0_=state_vars->v0_out_0_[j-1];

/* Index=8
   UID=8
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

if(isfinite(locals->v6_out_0_))
out_0 = locals->v6_out_0_;

/* Index=9
   UID=9
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=Выходной контакт s3 */

for(i = 0;i<5;i++){
if(isfinite(state_vars->v0_out_0_[i]))
out_1[i] = state_vars->v0_out_0_[i];
};

/* Index=10
   UID=10
   GeneratorClassName=TOutPin
   Name=OutPin8
   Type=Выходной контакт s3 */

out_2 = locals->v5_out_0_;

/* Index=11
   UID=11
   GeneratorClassName=TOutPin
   Name=OutPin9
   Type=Выходной контакт s3 */

for(i = 0;i<3;i++){
if(isfinite(locals->v4_out_0_[i]))
out_3[i] = locals->v4_out_0_[i];
};
};break;
};

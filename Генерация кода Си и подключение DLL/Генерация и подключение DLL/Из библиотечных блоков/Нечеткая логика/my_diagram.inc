/*  ------------------------------------------------------
     Routine name:  my_diagram
     Description:   
     Project file:  шаблон.prt

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
/* Index=19
   UID=19
   GeneratorClassName=TLanguage
   Name=Macro10.LangBlock9
   Type=Язык программирования */

v19_sfinal__0:
;
/* Index=53
   UID=53
   GeneratorClassName=TLanguage
   Name=Macro8.Fuzzy_Triangle_process
   Type=Вывод треугольными функциями */

v53_sfinal__0:
;
};break;
case f_GetDeri:{

/* Index=17
   UID=17
   GeneratorClassName=TLimitIntegrator
   Name=Macro9.LimitIntegrator4
   Type=Интегратор с ограничением */

my_diagramv17_x_deri = consts->my_diagramv17_k_*state_vars->my_diagramv53_out_0_;
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TMeandr
   Name=Meandre_source6
   Type=Меандр */

tmp1 = state_vars->my_diagramv0_timer_+step;
tmp2 = consts->my_diagramv0_t1_+consts->my_diagramv0_t2_;
if(tmp2>0){ tmp3=fmod(tmp1,tmp2); }else{ tmp3=0;};
if(tmp3>consts->my_diagramv0_t1_){
state_vars->my_diagramv0_out_0_ = consts->my_diagramv0_y2_;
if(solver_data->fPreciseSrcStep){
 solver_data->fsetstep = 1;
 solver_data->newstep  = fmin(solver_data->newstep,fmax(tmp2-tmp3-(0.5*solver_data->Hmin),0));
};
}else{
state_vars->my_diagramv0_out_0_ = consts->my_diagramv0_y1_;
if(solver_data->fPreciseSrcStep){
 solver_data->fsetstep = 1;
 solver_data->newstep  = fmin(solver_data->newstep,fmax(consts->my_diagramv0_t1_-tmp3-(0.5*solver_data->Hmin),0));
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(tmp1>tmp2) {tmp1 = tmp3;};
state_vars->my_diagramv0_timer_ = tmp1;
};

/* Index=13
   UID=13
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Macro19.Demultiplexor_vec6
   Type=Демультиплексор */

locals->v13_out_0_ = consts->my_diagramv6_a_[0];
locals->v13_out_1_ = consts->my_diagramv6_a_[1];
locals->v13_out_2_ = consts->my_diagramv6_a_[2];

/* Index=14
   UID=14
   GeneratorClassName=TParabola
   Name=Macro8.Macro19.Parab_func8
   Type=Параболическая функция */

for(i=0;i<3;i++){
locals->v14_out_0_[i] = consts->my_diagramv14_a0_[i]+consts->my_diagramv7_a_[i]*consts->my_diagramv14_a1_[i]+consts->my_diagramv7_a_[i]*consts->my_diagramv7_a_[i]*consts->my_diagramv14_a2_[i];

/* Index=15
   UID=15
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Macro24.Demultiplexor_vec6
   Type=Демультиплексор */

};
locals->v13_out_1_ = consts->my_diagramv9_a_[0];
locals->v15_out_1_ = consts->my_diagramv9_a_[1];
locals->v15_out_2_ = consts->my_diagramv9_a_[2];

/* Index=16
   UID=16
   GeneratorClassName=TParabola
   Name=Macro8.Macro24.Parab_func8
   Type=Параболическая функция */

for(i=0;i<3;i++){
locals->v16_out_0_[i] = consts->my_diagramv16_a0_[i]+consts->my_diagramv10_a_[i]*consts->my_diagramv16_a1_[i]+consts->my_diagramv10_a_[i]*consts->my_diagramv10_a_[i]*consts->my_diagramv16_a2_[i];

/* Index=17
   UID=17
   GeneratorClassName=TLimitIntegrator
   Name=Macro9.LimitIntegrator4
   Type=Интегратор с ограничением */

};
state_vars->my_diagramv17_out_0_ = my_diagramv17_x;
if(state_vars->my_diagramv17_out_0_<consts->my_diagramv17_ymin_){
state_vars->my_diagramv17_out_0_ = consts->my_diagramv17_ymin_;
}else{
if(state_vars->my_diagramv17_out_0_>consts->my_diagramv17_ymax_){
state_vars->my_diagramv17_out_0_ = consts->my_diagramv17_ymax_;
}
};
if(action==f_GoodStep) {my_diagramv17_x = state_vars->my_diagramv17_out_0_;};

/* Index=18
   UID=18
   GeneratorClassName=TMulDbl
   Name=Macro9.Mul_oper2
   Type=Перемножитель */

locals->v15_out_1_ = state_vars->my_diagramv17_out_0_*consts->my_diagramv12_a_;
/* Index=19
   UID=19
   GeneratorClassName=TLanguage
   Name=Macro10.LangBlock9
   Type=Язык программирования */

state_vars->v19g_=(9.8);
state_vars->my_diagramv19_out_0_=(v19v/(1));
if((state_vars->my_diagramv19_out_0_<(0))){goto v19___3;} else {goto v19___4;};
v19___3:
state_vars->my_diagramv19_out_0_=(0);
v19___4:
state_vars->my_diagramv19_out_1_=(sqrt((((2)*state_vars->v19g_)*state_vars->my_diagramv19_out_0_))*(0.05));
v19v_deri=(locals->v15_out_1_-state_vars->my_diagramv19_out_1_);
state_vars->my_diagramv19_out_2_=((locals->v15_out_1_-state_vars->my_diagramv19_out_1_)/(1));
v19___7:
;

/* Index=20
   UID=20
   GeneratorClassName=TSumSrc
   Name=Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v20_out_0_ = (1)*state_vars->my_diagramv19_out_0_+(-1)*state_vars->my_diagramv0_out_0_;

/* Index=21
   UID=21
   GeneratorClassName=TRazm
   Name=Macro8.Macro19.Razm_oper4
   Type=Размножитель */

for(j = 0;j<3;j++){
locals->v21_out_0_[j] = consts->my_diagramv21_m_[j]*locals->v20_out_0_;
};

/* Index=22
   UID=22
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro19.Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v22_out_0_ = (1)*locals->v20_out_0_+(-1)*locals->v13_out_0_;

/* Index=23
   UID=23
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro19.Sub_oper2
   Type=Сравнивающее устройтсво */

for(i=0;i<3;i++){
locals->v23_out_0_[i] = (1)*locals->v21_out_0_[i]+(-1)*consts->my_diagramv6_a_[i];

/* Index=24
   UID=24
   GeneratorClassName=TParabola
   Name=Macro8.Macro19.Parab_func9
   Type=Параболическая функция */

locals->v21_out_0_[i] = consts->my_diagramv24_a0_[i]+locals->v23_out_0_[i]*consts->my_diagramv24_a1_[i]+locals->v23_out_0_[i]*locals->v23_out_0_[i]*consts->my_diagramv24_a2_[i];

/* Index=25
   UID=25
   GeneratorClassName=TDivDbl
   Name=Macro8.Macro19.Div_oper2
   Type=Делитель */

if(locals->v14_out_0_[i]!=0){
locals->v23_out_0_[i] = locals->v21_out_0_[i]/locals->v14_out_0_[i];
if(!isfinite(locals->v23_out_0_[i])) {locals->v23_out_0_[i] = 0;};
if(locals->v23_out_0_[i] > 1E20){
locals->v23_out_0_[i] = 1E20;};
if(locals->v23_out_0_[i] < -1E20){
locals->v23_out_0_[i] = -1E20;};
} else {
if(locals->v21_out_0_[i] > 0){
locals->v23_out_0_[i] = 1E20;
} else {
if(locals->v21_out_0_[i] < 0){
locals->v23_out_0_[i] = -1E20;
} else {
locals->v23_out_0_[i] = 0;
};
};
};

/* Index=26
   UID=26
   GeneratorClassName=TExp
   Name=Macro8.Macro19.Exponenta_func4
   Type=Экспоненциальная функция */

locals->v14_out_0_[i] = consts->my_diagramv26_a_[i]*exp(consts->my_diagramv26_b_[i]*locals->v23_out_0_[i]+consts->my_diagramv26_c_[i]);
if(!isfinite(locals->v14_out_0_[i])) {locals->v14_out_0_[i] = 0;};

/* Index=27
   UID=27
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Macro19.Demultiplexor_vec4
   Type=Демультиплексор */

};
locals->v13_out_0_ = locals->v14_out_0_[0];
locals->v27_out_1_ = locals->v14_out_0_[1];
locals->v27_out_2_ = locals->v14_out_0_[2];

/* Index=28
   UID=28
   GeneratorClassName=TKey3
   Name=Macro8.Macro19.Key3_4
   Type=Ключ-3 */

if(locals->v22_out_0_<consts->my_diagramv28_k_){
locals->v28_out_0_ = consts->my_diagramv8_a_;
}else{
locals->v28_out_0_ = locals->v13_out_0_;
};

/* Index=29
   UID=29
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro19.Sub_oper4
   Type=Сравнивающее устройтсво */

locals->v13_out_0_ = (1)*locals->v20_out_0_+(-1)*locals->v13_out_2_;

/* Index=30
   UID=30
   GeneratorClassName=TKey3
   Name=Macro8.Macro19.Key3_5
   Type=Ключ-3 */

if(locals->v13_out_0_<consts->my_diagramv30_k_){
locals->v13_out_2_ = locals->v27_out_2_;
}else{
locals->v13_out_2_ = consts->my_diagramv8_a_;
};

/* Index=31
   UID=31
   GeneratorClassName=TMultiplexor
   Name=Macro8.Macro19.Multiplexor_vec4
   Type=Мультиплексор */

locals->v14_out_0_[0] = locals->v28_out_0_;
locals->v14_out_0_[1] = locals->v27_out_1_;
locals->v14_out_0_[2] = locals->v13_out_2_;

/* Index=32
   UID=32
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Demultiplexor_vec5
   Type=Демультиплексор */

locals->v13_out_0_ = locals->v14_out_0_[0];
locals->v13_out_2_ = locals->v14_out_0_[1];
locals->v20_out_0_ = locals->v14_out_0_[2];

/* Index=33
   UID=33
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro13.Mul_oper2
   Type=Перемножитель */

locals->v22_out_0_ = locals->v20_out_0_*consts->my_diagramv2_a_;

/* Index=34
   UID=34
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro24.Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v20_out_0_ = (1)*state_vars->my_diagramv19_out_2_+(-1)*locals->v13_out_1_;

/* Index=35
   UID=35
   GeneratorClassName=TRazm
   Name=Macro8.Macro24.Razm_oper4
   Type=Размножитель */

for(j = 0;j<3;j++){
locals->v14_out_0_[j] = consts->my_diagramv35_m_[j]*state_vars->my_diagramv19_out_2_;
};

/* Index=36
   UID=36
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro24.Sub_oper2
   Type=Сравнивающее устройтсво */

for(i=0;i<3;i++){
locals->v21_out_0_[i] = (1)*locals->v14_out_0_[i]+(-1)*consts->my_diagramv9_a_[i];

/* Index=37
   UID=37
   GeneratorClassName=TParabola
   Name=Macro8.Macro24.Parab_func9
   Type=Параболическая функция */

locals->v14_out_0_[i] = consts->my_diagramv37_a0_[i]+locals->v21_out_0_[i]*consts->my_diagramv37_a1_[i]+locals->v21_out_0_[i]*locals->v21_out_0_[i]*consts->my_diagramv37_a2_[i];

/* Index=38
   UID=38
   GeneratorClassName=TDivDbl
   Name=Macro8.Macro24.Div_oper2
   Type=Делитель */

if(locals->v16_out_0_[i]!=0){
locals->v21_out_0_[i] = locals->v14_out_0_[i]/locals->v16_out_0_[i];
if(!isfinite(locals->v21_out_0_[i])) {locals->v21_out_0_[i] = 0;};
if(locals->v21_out_0_[i] > 1E20){
locals->v21_out_0_[i] = 1E20;};
if(locals->v21_out_0_[i] < -1E20){
locals->v21_out_0_[i] = -1E20;};
} else {
if(locals->v14_out_0_[i] > 0){
locals->v21_out_0_[i] = 1E20;
} else {
if(locals->v14_out_0_[i] < 0){
locals->v21_out_0_[i] = -1E20;
} else {
locals->v21_out_0_[i] = 0;
};
};
};

/* Index=39
   UID=39
   GeneratorClassName=TExp
   Name=Macro8.Macro24.Exponenta_func4
   Type=Экспоненциальная функция */

locals->v14_out_0_[i] = consts->my_diagramv39_a_[i]*exp(consts->my_diagramv39_b_[i]*locals->v21_out_0_[i]+consts->my_diagramv39_c_[i]);
if(!isfinite(locals->v14_out_0_[i])) {locals->v14_out_0_[i] = 0;};

/* Index=40
   UID=40
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Macro24.Demultiplexor_vec4
   Type=Демультиплексор */

};
locals->v13_out_1_ = locals->v14_out_0_[0];
locals->v27_out_1_ = locals->v14_out_0_[1];
locals->v27_out_2_ = locals->v14_out_0_[2];

/* Index=41
   UID=41
   GeneratorClassName=TKey3
   Name=Macro8.Macro24.Key3_4
   Type=Ключ-3 */

if(locals->v20_out_0_<consts->my_diagramv41_k_){
locals->v28_out_0_ = consts->my_diagramv11_a_;
}else{
locals->v28_out_0_ = locals->v13_out_1_;
};

/* Index=42
   UID=42
   GeneratorClassName=TSumSrc
   Name=Macro8.Macro24.Sub_oper4
   Type=Сравнивающее устройтсво */

locals->v13_out_1_ = (1)*state_vars->my_diagramv19_out_2_+(-1)*locals->v15_out_2_;

/* Index=43
   UID=43
   GeneratorClassName=TKey3
   Name=Macro8.Macro24.Key3_5
   Type=Ключ-3 */

if(locals->v13_out_1_<consts->my_diagramv43_k_){
locals->v15_out_2_ = locals->v27_out_2_;
}else{
locals->v15_out_2_ = consts->my_diagramv11_a_;
};

/* Index=44
   UID=44
   GeneratorClassName=TMultiplexor
   Name=Macro8.Macro24.Multiplexor_vec4
   Type=Мультиплексор */

locals->v14_out_0_[0] = locals->v28_out_0_;
locals->v14_out_0_[1] = locals->v27_out_1_;
locals->v14_out_0_[2] = locals->v15_out_2_;

/* Index=45
   UID=45
   GeneratorClassName=TDeMultiplexor
   Name=Macro8.Demultiplexor_vec6
   Type=Демультиплексор */

locals->v13_out_1_ = locals->v14_out_0_[0];
locals->v15_out_2_ = locals->v14_out_0_[1];
locals->v20_out_0_ = locals->v14_out_0_[2];

/* Index=46
   UID=46
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro15.Mul_oper2
   Type=Перемножитель */

locals->v15_out_2_ = locals->v13_out_2_*locals->v20_out_0_;

/* Index=47
   UID=47
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro8.Mul_oper2
   Type=Перемножитель */

locals->v20_out_0_ = locals->v13_out_0_*consts->my_diagramv1_a_;

/* Index=48
   UID=48
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro14.Mul_oper2
   Type=Перемножитель */

locals->v13_out_0_ = locals->v13_out_2_*consts->my_diagramv3_a_;

/* Index=49
   UID=49
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro15.Mul_oper3
   Type=Перемножитель */

locals->v27_out_1_ = locals->v15_out_2_*consts->my_diagramv5_a_;

/* Index=50
   UID=50
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro11.Mul_oper2
   Type=Перемножитель */

locals->v15_out_2_ = locals->v13_out_2_*locals->v13_out_1_;

/* Index=51
   UID=51
   GeneratorClassName=TMulDbl
   Name=Macro8.Macro11.Mul_oper3
   Type=Перемножитель */

locals->v13_out_1_ = locals->v15_out_2_*consts->my_diagramv4_a_;

/* Index=52
   UID=52
   GeneratorClassName=TMultiplexor
   Name=Macro8.Multiplexor_vec4
   Type=Мультиплексор */

locals->v52_out_0_[0] = locals->v22_out_0_;
locals->v52_out_0_[1] = locals->v27_out_1_;
locals->v52_out_0_[2] = locals->v13_out_0_;
locals->v52_out_0_[3] = locals->v13_out_1_;
locals->v52_out_0_[4] = locals->v20_out_0_;
/* Index=53
   UID=53
   GeneratorClassName=TLanguage
   Name=Macro8.Fuzzy_Triangle_process
   Type=Вывод треугольными функциями */

state_vars->my_diagramv53_out_0_=(0);
state_vars->v53cm_=(0);
state_vars->v53m_=(1E-9);
state_vars->v53l_=(0);
state_vars->v53i_=(1);
state_vars->v53i_=(1);
v53___6:
if(state_vars->v53i_ > (5))
goto v53___9;
state_vars->v53func1x_=state_vars->v53v53____const_1_[state_vars->v53i_ - 1];
if(((0)==(1))){goto v53__func1_1;} else {goto v53__func1_8;};
v53__func1_1:
state_vars->v53func2x_=state_vars->v53func1x_;
state_vars->v53func2a_=state_vars->v53func1v53__func1__const_2_[(1) - 1];
state_vars->v53func2b_=state_vars->v53func1v53__func1__const_3_[(1) - 1];
state_vars->v53func2c_=state_vars->v53func1v53__func1__const_4_[(1) - 1];
if(((state_vars->v53func2x_>state_vars->v53func2a_)&(state_vars->v53func2x_<state_vars->v53func2c_))){goto v53__func2_1;} else {goto v53__func2_6;};
v53__func2_1:
if((state_vars->v53func2x_<state_vars->v53func2b_)){goto v53__func2_2;} else {goto v53__func2_3;};
v53__func2_2:
state_vars->v53func2trianglefm_=(((1)-(state_vars->v53func2b_/(state_vars->v53func2b_-state_vars->v53func2a_)))+(state_vars->v53func2x_/(state_vars->v53func2b_-state_vars->v53func2a_)));
v53__func2_3:
if((state_vars->v53func2x_>=state_vars->v53func2b_)){goto v53__func2_4;} else {goto v53__func2_5;};
v53__func2_4:
state_vars->v53func2trianglefm_=(((1)-(state_vars->v53func2b_/(state_vars->v53func2b_-state_vars->v53func2c_)))+(state_vars->v53func2x_/(state_vars->v53func2b_-state_vars->v53func2c_)));
v53__func2_5:
goto v53__func2_7;
v53__func2_6:
state_vars->v53func2trianglefm_=(0);
v53__func2_7:
;
state_vars->v53func1accprob_=(locals->v52_out_0_[(1) - 1]*state_vars->v53func2trianglefm_);
state_vars->v53func1i_=(2);
state_vars->v53func1i_=(2);
v53__func1_4:
if(state_vars->v53func1i_ > state_vars->v53n_)
goto v53__func1_7;
state_vars->v53func3x_=state_vars->v53func1x_;
state_vars->v53func3a_=state_vars->v53func1v53__func1__const_5_[state_vars->v53func1i_ - 1];
state_vars->v53func3b_=state_vars->v53func1v53__func1__const_6_[state_vars->v53func1i_ - 1];
state_vars->v53func3c_=state_vars->v53func1v53__func1__const_7_[state_vars->v53func1i_ - 1];
if(((state_vars->v53func3x_>state_vars->v53func3a_)&(state_vars->v53func3x_<state_vars->v53func3c_))){goto v53__func3_1;} else {goto v53__func3_6;};
v53__func3_1:
if((state_vars->v53func3x_<state_vars->v53func3b_)){goto v53__func3_2;} else {goto v53__func3_3;};
v53__func3_2:
state_vars->v53func3trianglefm_=(((1)-(state_vars->v53func3b_/(state_vars->v53func3b_-state_vars->v53func3a_)))+(state_vars->v53func3x_/(state_vars->v53func3b_-state_vars->v53func3a_)));
v53__func3_3:
if((state_vars->v53func3x_>=state_vars->v53func3b_)){goto v53__func3_4;} else {goto v53__func3_5;};
v53__func3_4:
state_vars->v53func3trianglefm_=(((1)-(state_vars->v53func3b_/(state_vars->v53func3b_-state_vars->v53func3c_)))+(state_vars->v53func3x_/(state_vars->v53func3b_-state_vars->v53func3c_)));
v53__func3_5:
goto v53__func3_7;
v53__func3_6:
state_vars->v53func3trianglefm_=(0);
v53__func3_7:
;
state_vars->v53func1v53__func1_func_res_56_=state_vars->v53func1accprob_;
state_vars->v53func1v53__func1_func_tmp_56_=(locals->v52_out_0_[state_vars->v53func1i_ - 1]*state_vars->v53func3trianglefm_);
if( state_vars->v53func1v53__func1_func_tmp_56_>state_vars->v53func1v53__func1_func_res_56_ ) state_vars->v53func1v53__func1_func_res_56_=state_vars->v53func1v53__func1_func_tmp_56_;
state_vars->v53func1accprob_=state_vars->v53func1v53__func1_func_res_56_;
state_vars->v53func1i_ = state_vars->v53func1i_ + 1;
goto v53__func1_4;
v53__func1_7:
goto v53__func1_23;
v53__func1_8:
if(((0)==(0))){goto v53__func1_9;} else {goto v53__func1_16;};
v53__func1_9:
state_vars->v53func4x_=state_vars->v53func1x_;
state_vars->v53func4a_=state_vars->v53func1v53__func1__const_8_[(1) - 1];
state_vars->v53func4b_=state_vars->v53func1v53__func1__const_9_[(1) - 1];
state_vars->v53func4c_=state_vars->v53func1v53__func1__const_10_[(1) - 1];
if(((state_vars->v53func4x_>state_vars->v53func4a_)&(state_vars->v53func4x_<state_vars->v53func4c_))){goto v53__func4_1;} else {goto v53__func4_6;};
v53__func4_1:
if((state_vars->v53func4x_<state_vars->v53func4b_)){goto v53__func4_2;} else {goto v53__func4_3;};
v53__func4_2:
state_vars->v53func4trianglefm_=(((1)-(state_vars->v53func4b_/(state_vars->v53func4b_-state_vars->v53func4a_)))+(state_vars->v53func4x_/(state_vars->v53func4b_-state_vars->v53func4a_)));
v53__func4_3:
if((state_vars->v53func4x_>=state_vars->v53func4b_)){goto v53__func4_4;} else {goto v53__func4_5;};
v53__func4_4:
state_vars->v53func4trianglefm_=(((1)-(state_vars->v53func4b_/(state_vars->v53func4b_-state_vars->v53func4c_)))+(state_vars->v53func4x_/(state_vars->v53func4b_-state_vars->v53func4c_)));
v53__func4_5:
goto v53__func4_7;
v53__func4_6:
state_vars->v53func4trianglefm_=(0);
v53__func4_7:
;
state_vars->v53func1v53__func1_func_res_86_=locals->v52_out_0_[(1) - 1];
state_vars->v53func1v53__func1_func_tmp_86_=state_vars->v53func4trianglefm_;
if( state_vars->v53func1v53__func1_func_tmp_86_<state_vars->v53func1v53__func1_func_res_86_ ) state_vars->v53func1v53__func1_func_res_86_=state_vars->v53func1v53__func1_func_tmp_86_;
state_vars->v53func1accprob_=state_vars->v53func1v53__func1_func_res_86_;
state_vars->v53func1i_=(2);
state_vars->v53func1i_=(2);
v53__func1_12:
if(state_vars->v53func1i_ > state_vars->v53n_)
goto v53__func1_15;
state_vars->v53func5x_=state_vars->v53func1x_;
state_vars->v53func5a_=state_vars->v53func1v53__func1__const_11_[state_vars->v53func1i_ - 1];
state_vars->v53func5b_=state_vars->v53func1v53__func1__const_12_[state_vars->v53func1i_ - 1];
state_vars->v53func5c_=state_vars->v53func1v53__func1__const_13_[state_vars->v53func1i_ - 1];
if(((state_vars->v53func5x_>state_vars->v53func5a_)&(state_vars->v53func5x_<state_vars->v53func5c_))){goto v53__func5_1;} else {goto v53__func5_6;};
v53__func5_1:
if((state_vars->v53func5x_<state_vars->v53func5b_)){goto v53__func5_2;} else {goto v53__func5_3;};
v53__func5_2:
state_vars->v53func5trianglefm_=(((1)-(state_vars->v53func5b_/(state_vars->v53func5b_-state_vars->v53func5a_)))+(state_vars->v53func5x_/(state_vars->v53func5b_-state_vars->v53func5a_)));
v53__func5_3:
if((state_vars->v53func5x_>=state_vars->v53func5b_)){goto v53__func5_4;} else {goto v53__func5_5;};
v53__func5_4:
state_vars->v53func5trianglefm_=(((1)-(state_vars->v53func5b_/(state_vars->v53func5b_-state_vars->v53func5c_)))+(state_vars->v53func5x_/(state_vars->v53func5b_-state_vars->v53func5c_)));
v53__func5_5:
goto v53__func5_7;
v53__func5_6:
state_vars->v53func5trianglefm_=(0);
v53__func5_7:
;
state_vars->v53func1v53__func1_func_res_114_=locals->v52_out_0_[state_vars->v53func1i_ - 1];
state_vars->v53func1v53__func1_func_tmp_114_=state_vars->v53func5trianglefm_;
if( state_vars->v53func1v53__func1_func_tmp_114_<state_vars->v53func1v53__func1_func_res_114_ ) state_vars->v53func1v53__func1_func_res_114_=state_vars->v53func1v53__func1_func_tmp_114_;
state_vars->v53func1v53__func1_func_res_117_=state_vars->v53func1accprob_;
state_vars->v53func1v53__func1_func_tmp_117_=state_vars->v53func1v53__func1_func_res_114_;
if( state_vars->v53func1v53__func1_func_tmp_117_>state_vars->v53func1v53__func1_func_res_117_ ) state_vars->v53func1v53__func1_func_res_117_=state_vars->v53func1v53__func1_func_tmp_117_;
state_vars->v53func1accprob_=state_vars->v53func1v53__func1_func_res_117_;
state_vars->v53func1i_ = state_vars->v53func1i_ + 1;
goto v53__func1_12;
v53__func1_15:
goto v53__func1_23;
v53__func1_16:
if(((0)==(2))){goto v53__func1_17;} else {goto v53__func1_23;};
v53__func1_17:
state_vars->v53func6x_=state_vars->v53func1x_;
state_vars->v53func6a_=state_vars->v53func1v53__func1__const_14_[(1) - 1];
state_vars->v53func6b_=state_vars->v53func1v53__func1__const_15_[(1) - 1];
state_vars->v53func6c_=state_vars->v53func1v53__func1__const_16_[(1) - 1];
if(((state_vars->v53func6x_>state_vars->v53func6a_)&(state_vars->v53func6x_<state_vars->v53func6c_))){goto v53__func6_1;} else {goto v53__func6_6;};
v53__func6_1:
if((state_vars->v53func6x_<state_vars->v53func6b_)){goto v53__func6_2;} else {goto v53__func6_3;};
v53__func6_2:
state_vars->v53func6trianglefm_=(((1)-(state_vars->v53func6b_/(state_vars->v53func6b_-state_vars->v53func6a_)))+(state_vars->v53func6x_/(state_vars->v53func6b_-state_vars->v53func6a_)));
v53__func6_3:
if((state_vars->v53func6x_>=state_vars->v53func6b_)){goto v53__func6_4;} else {goto v53__func6_5;};
v53__func6_4:
state_vars->v53func6trianglefm_=(((1)-(state_vars->v53func6b_/(state_vars->v53func6b_-state_vars->v53func6c_)))+(state_vars->v53func6x_/(state_vars->v53func6b_-state_vars->v53func6c_)));
v53__func6_5:
goto v53__func6_7;
v53__func6_6:
state_vars->v53func6trianglefm_=(0);
v53__func6_7:
;
state_vars->v53func1accprob_=((0.5)*(locals->v52_out_0_[(1) - 1]+state_vars->v53func6trianglefm_));
state_vars->v53func1i_=(2);
state_vars->v53func1i_=(2);
v53__func1_20:
if(state_vars->v53func1i_ > state_vars->v53n_)
goto v53__func1_23;
state_vars->v53func7x_=state_vars->v53func1x_;
state_vars->v53func7a_=state_vars->v53func1v53__func1__const_17_[state_vars->v53func1i_ - 1];
state_vars->v53func7b_=state_vars->v53func1v53__func1__const_18_[state_vars->v53func1i_ - 1];
state_vars->v53func7c_=state_vars->v53func1v53__func1__const_19_[state_vars->v53func1i_ - 1];
if(((state_vars->v53func7x_>state_vars->v53func7a_)&(state_vars->v53func7x_<state_vars->v53func7c_))){goto v53__func7_1;} else {goto v53__func7_6;};
v53__func7_1:
if((state_vars->v53func7x_<state_vars->v53func7b_)){goto v53__func7_2;} else {goto v53__func7_3;};
v53__func7_2:
state_vars->v53func7trianglefm_=(((1)-(state_vars->v53func7b_/(state_vars->v53func7b_-state_vars->v53func7a_)))+(state_vars->v53func7x_/(state_vars->v53func7b_-state_vars->v53func7a_)));
v53__func7_3:
if((state_vars->v53func7x_>=state_vars->v53func7b_)){goto v53__func7_4;} else {goto v53__func7_5;};
v53__func7_4:
state_vars->v53func7trianglefm_=(((1)-(state_vars->v53func7b_/(state_vars->v53func7b_-state_vars->v53func7c_)))+(state_vars->v53func7x_/(state_vars->v53func7b_-state_vars->v53func7c_)));
v53__func7_5:
goto v53__func7_7;
v53__func7_6:
state_vars->v53func7trianglefm_=(0);
v53__func7_7:
;
state_vars->v53func1v53__func1_func_res_172_=state_vars->v53func1accprob_;
state_vars->v53func1v53__func1_func_tmp_172_=((0.5)*(locals->v52_out_0_[state_vars->v53func1i_ - 1]+state_vars->v53func7trianglefm_));
if( state_vars->v53func1v53__func1_func_tmp_172_>state_vars->v53func1v53__func1_func_res_172_ ) state_vars->v53func1v53__func1_func_res_172_=state_vars->v53func1v53__func1_func_tmp_172_;
state_vars->v53func1accprob_=state_vars->v53func1v53__func1_func_res_172_;
state_vars->v53func1i_ = state_vars->v53func1i_ + 1;
goto v53__func1_20;
v53__func1_23:
;
state_vars->v53v53____const_20_[state_vars->v53i_ - 1]=state_vars->v53func1accprob_;
state_vars->v53i_ = state_vars->v53i_ + 1;
goto v53___6;
v53___9:
state_vars->v53func8x_=(-1.2);
if(((0)==(1))){goto v53__func8_1;} else {goto v53__func8_8;};
v53__func8_1:
state_vars->v53func9x_=state_vars->v53func8x_;
state_vars->v53func9a_=state_vars->v53func8v53__func8__const_21_[(1) - 1];
state_vars->v53func9b_=state_vars->v53func8v53__func8__const_22_[(1) - 1];
state_vars->v53func9c_=state_vars->v53func8v53__func8__const_23_[(1) - 1];
if(((state_vars->v53func9x_>state_vars->v53func9a_)&(state_vars->v53func9x_<state_vars->v53func9c_))){goto v53__func9_1;} else {goto v53__func9_6;};
v53__func9_1:
if((state_vars->v53func9x_<state_vars->v53func9b_)){goto v53__func9_2;} else {goto v53__func9_3;};
v53__func9_2:
state_vars->v53func9trianglefm_=(((1)-(state_vars->v53func9b_/(state_vars->v53func9b_-state_vars->v53func9a_)))+(state_vars->v53func9x_/(state_vars->v53func9b_-state_vars->v53func9a_)));
v53__func9_3:
if((state_vars->v53func9x_>=state_vars->v53func9b_)){goto v53__func9_4;} else {goto v53__func9_5;};
v53__func9_4:
state_vars->v53func9trianglefm_=(((1)-(state_vars->v53func9b_/(state_vars->v53func9b_-state_vars->v53func9c_)))+(state_vars->v53func9x_/(state_vars->v53func9b_-state_vars->v53func9c_)));
v53__func9_5:
goto v53__func9_7;
v53__func9_6:
state_vars->v53func9trianglefm_=(0);
v53__func9_7:
;
state_vars->v53func8accprob_=(locals->v52_out_0_[(1) - 1]*state_vars->v53func9trianglefm_);
state_vars->v53func8i_=(2);
state_vars->v53func8i_=(2);
v53__func8_4:
if(state_vars->v53func8i_ > state_vars->v53n_)
goto v53__func8_7;
state_vars->v53func10x_=state_vars->v53func8x_;
state_vars->v53func10a_=state_vars->v53func8v53__func8__const_24_[state_vars->v53func8i_ - 1];
state_vars->v53func10b_=state_vars->v53func8v53__func8__const_25_[state_vars->v53func8i_ - 1];
state_vars->v53func10c_=state_vars->v53func8v53__func8__const_26_[state_vars->v53func8i_ - 1];
if(((state_vars->v53func10x_>state_vars->v53func10a_)&(state_vars->v53func10x_<state_vars->v53func10c_))){goto v53__func10_1;} else {goto v53__func10_6;};
v53__func10_1:
if((state_vars->v53func10x_<state_vars->v53func10b_)){goto v53__func10_2;} else {goto v53__func10_3;};
v53__func10_2:
state_vars->v53func10trianglefm_=(((1)-(state_vars->v53func10b_/(state_vars->v53func10b_-state_vars->v53func10a_)))+(state_vars->v53func10x_/(state_vars->v53func10b_-state_vars->v53func10a_)));
v53__func10_3:
if((state_vars->v53func10x_>=state_vars->v53func10b_)){goto v53__func10_4;} else {goto v53__func10_5;};
v53__func10_4:
state_vars->v53func10trianglefm_=(((1)-(state_vars->v53func10b_/(state_vars->v53func10b_-state_vars->v53func10c_)))+(state_vars->v53func10x_/(state_vars->v53func10b_-state_vars->v53func10c_)));
v53__func10_5:
goto v53__func10_7;
v53__func10_6:
state_vars->v53func10trianglefm_=(0);
v53__func10_7:
;
state_vars->v53func8v53__func8_func_res_231_=state_vars->v53func8accprob_;
state_vars->v53func8v53__func8_func_tmp_231_=(locals->v52_out_0_[state_vars->v53func8i_ - 1]*state_vars->v53func10trianglefm_);
if( state_vars->v53func8v53__func8_func_tmp_231_>state_vars->v53func8v53__func8_func_res_231_ ) state_vars->v53func8v53__func8_func_res_231_=state_vars->v53func8v53__func8_func_tmp_231_;
state_vars->v53func8accprob_=state_vars->v53func8v53__func8_func_res_231_;
state_vars->v53func8i_ = state_vars->v53func8i_ + 1;
goto v53__func8_4;
v53__func8_7:
goto v53__func8_23;
v53__func8_8:
if(((0)==(0))){goto v53__func8_9;} else {goto v53__func8_16;};
v53__func8_9:
state_vars->v53func11x_=state_vars->v53func8x_;
state_vars->v53func11a_=state_vars->v53func8v53__func8__const_27_[(1) - 1];
state_vars->v53func11b_=state_vars->v53func8v53__func8__const_28_[(1) - 1];
state_vars->v53func11c_=state_vars->v53func8v53__func8__const_29_[(1) - 1];
if(((state_vars->v53func11x_>state_vars->v53func11a_)&(state_vars->v53func11x_<state_vars->v53func11c_))){goto v53__func11_1;} else {goto v53__func11_6;};
v53__func11_1:
if((state_vars->v53func11x_<state_vars->v53func11b_)){goto v53__func11_2;} else {goto v53__func11_3;};
v53__func11_2:
state_vars->v53func11trianglefm_=(((1)-(state_vars->v53func11b_/(state_vars->v53func11b_-state_vars->v53func11a_)))+(state_vars->v53func11x_/(state_vars->v53func11b_-state_vars->v53func11a_)));
v53__func11_3:
if((state_vars->v53func11x_>=state_vars->v53func11b_)){goto v53__func11_4;} else {goto v53__func11_5;};
v53__func11_4:
state_vars->v53func11trianglefm_=(((1)-(state_vars->v53func11b_/(state_vars->v53func11b_-state_vars->v53func11c_)))+(state_vars->v53func11x_/(state_vars->v53func11b_-state_vars->v53func11c_)));
v53__func11_5:
goto v53__func11_7;
v53__func11_6:
state_vars->v53func11trianglefm_=(0);
v53__func11_7:
;
state_vars->v53func8v53__func8_func_res_261_=locals->v52_out_0_[(1) - 1];
state_vars->v53func8v53__func8_func_tmp_261_=state_vars->v53func11trianglefm_;
if( state_vars->v53func8v53__func8_func_tmp_261_<state_vars->v53func8v53__func8_func_res_261_ ) state_vars->v53func8v53__func8_func_res_261_=state_vars->v53func8v53__func8_func_tmp_261_;
state_vars->v53func8accprob_=state_vars->v53func8v53__func8_func_res_261_;
state_vars->v53func8i_=(2);
state_vars->v53func8i_=(2);
v53__func8_12:
if(state_vars->v53func8i_ > state_vars->v53n_)
goto v53__func8_15;
state_vars->v53func12x_=state_vars->v53func8x_;
state_vars->v53func12a_=state_vars->v53func8v53__func8__const_30_[state_vars->v53func8i_ - 1];
state_vars->v53func12b_=state_vars->v53func8v53__func8__const_31_[state_vars->v53func8i_ - 1];
state_vars->v53func12c_=state_vars->v53func8v53__func8__const_32_[state_vars->v53func8i_ - 1];
if(((state_vars->v53func12x_>state_vars->v53func12a_)&(state_vars->v53func12x_<state_vars->v53func12c_))){goto v53__func12_1;} else {goto v53__func12_6;};
v53__func12_1:
if((state_vars->v53func12x_<state_vars->v53func12b_)){goto v53__func12_2;} else {goto v53__func12_3;};
v53__func12_2:
state_vars->v53func12trianglefm_=(((1)-(state_vars->v53func12b_/(state_vars->v53func12b_-state_vars->v53func12a_)))+(state_vars->v53func12x_/(state_vars->v53func12b_-state_vars->v53func12a_)));
v53__func12_3:
if((state_vars->v53func12x_>=state_vars->v53func12b_)){goto v53__func12_4;} else {goto v53__func12_5;};
v53__func12_4:
state_vars->v53func12trianglefm_=(((1)-(state_vars->v53func12b_/(state_vars->v53func12b_-state_vars->v53func12c_)))+(state_vars->v53func12x_/(state_vars->v53func12b_-state_vars->v53func12c_)));
v53__func12_5:
goto v53__func12_7;
v53__func12_6:
state_vars->v53func12trianglefm_=(0);
v53__func12_7:
;
state_vars->v53func8v53__func8_func_res_289_=locals->v52_out_0_[state_vars->v53func8i_ - 1];
state_vars->v53func8v53__func8_func_tmp_289_=state_vars->v53func12trianglefm_;
if( state_vars->v53func8v53__func8_func_tmp_289_<state_vars->v53func8v53__func8_func_res_289_ ) state_vars->v53func8v53__func8_func_res_289_=state_vars->v53func8v53__func8_func_tmp_289_;
state_vars->v53func8v53__func8_func_res_292_=state_vars->v53func8accprob_;
state_vars->v53func8v53__func8_func_tmp_292_=state_vars->v53func8v53__func8_func_res_289_;
if( state_vars->v53func8v53__func8_func_tmp_292_>state_vars->v53func8v53__func8_func_res_292_ ) state_vars->v53func8v53__func8_func_res_292_=state_vars->v53func8v53__func8_func_tmp_292_;
state_vars->v53func8accprob_=state_vars->v53func8v53__func8_func_res_292_;
state_vars->v53func8i_ = state_vars->v53func8i_ + 1;
goto v53__func8_12;
v53__func8_15:
goto v53__func8_23;
v53__func8_16:
if(((0)==(2))){goto v53__func8_17;} else {goto v53__func8_23;};
v53__func8_17:
state_vars->v53func13x_=state_vars->v53func8x_;
state_vars->v53func13a_=state_vars->v53func8v53__func8__const_33_[(1) - 1];
state_vars->v53func13b_=state_vars->v53func8v53__func8__const_34_[(1) - 1];
state_vars->v53func13c_=state_vars->v53func8v53__func8__const_35_[(1) - 1];
if(((state_vars->v53func13x_>state_vars->v53func13a_)&(state_vars->v53func13x_<state_vars->v53func13c_))){goto v53__func13_1;} else {goto v53__func13_6;};
v53__func13_1:
if((state_vars->v53func13x_<state_vars->v53func13b_)){goto v53__func13_2;} else {goto v53__func13_3;};
v53__func13_2:
state_vars->v53func13trianglefm_=(((1)-(state_vars->v53func13b_/(state_vars->v53func13b_-state_vars->v53func13a_)))+(state_vars->v53func13x_/(state_vars->v53func13b_-state_vars->v53func13a_)));
v53__func13_3:
if((state_vars->v53func13x_>=state_vars->v53func13b_)){goto v53__func13_4;} else {goto v53__func13_5;};
v53__func13_4:
state_vars->v53func13trianglefm_=(((1)-(state_vars->v53func13b_/(state_vars->v53func13b_-state_vars->v53func13c_)))+(state_vars->v53func13x_/(state_vars->v53func13b_-state_vars->v53func13c_)));
v53__func13_5:
goto v53__func13_7;
v53__func13_6:
state_vars->v53func13trianglefm_=(0);
v53__func13_7:
;
state_vars->v53func8accprob_=((0.5)*(locals->v52_out_0_[(1) - 1]+state_vars->v53func13trianglefm_));
state_vars->v53func8i_=(2);
state_vars->v53func8i_=(2);
v53__func8_20:
if(state_vars->v53func8i_ > state_vars->v53n_)
goto v53__func8_23;
state_vars->v53func14x_=state_vars->v53func8x_;
state_vars->v53func14a_=state_vars->v53func8v53__func8__const_36_[state_vars->v53func8i_ - 1];
state_vars->v53func14b_=state_vars->v53func8v53__func8__const_37_[state_vars->v53func8i_ - 1];
state_vars->v53func14c_=state_vars->v53func8v53__func8__const_38_[state_vars->v53func8i_ - 1];
if(((state_vars->v53func14x_>state_vars->v53func14a_)&(state_vars->v53func14x_<state_vars->v53func14c_))){goto v53__func14_1;} else {goto v53__func14_6;};
v53__func14_1:
if((state_vars->v53func14x_<state_vars->v53func14b_)){goto v53__func14_2;} else {goto v53__func14_3;};
v53__func14_2:
state_vars->v53func14trianglefm_=(((1)-(state_vars->v53func14b_/(state_vars->v53func14b_-state_vars->v53func14a_)))+(state_vars->v53func14x_/(state_vars->v53func14b_-state_vars->v53func14a_)));
v53__func14_3:
if((state_vars->v53func14x_>=state_vars->v53func14b_)){goto v53__func14_4;} else {goto v53__func14_5;};
v53__func14_4:
state_vars->v53func14trianglefm_=(((1)-(state_vars->v53func14b_/(state_vars->v53func14b_-state_vars->v53func14c_)))+(state_vars->v53func14x_/(state_vars->v53func14b_-state_vars->v53func14c_)));
v53__func14_5:
goto v53__func14_7;
v53__func14_6:
state_vars->v53func14trianglefm_=(0);
v53__func14_7:
;
state_vars->v53func8v53__func8_func_res_347_=state_vars->v53func8accprob_;
state_vars->v53func8v53__func8_func_tmp_347_=((0.5)*(locals->v52_out_0_[state_vars->v53func8i_ - 1]+state_vars->v53func14trianglefm_));
if( state_vars->v53func8v53__func8_func_tmp_347_>state_vars->v53func8v53__func8_func_res_347_ ) state_vars->v53func8v53__func8_func_res_347_=state_vars->v53func8v53__func8_func_tmp_347_;
state_vars->v53func8accprob_=state_vars->v53func8v53__func8_func_res_347_;
state_vars->v53func8i_ = state_vars->v53func8i_ + 1;
goto v53__func8_20;
v53__func8_23:
;
state_vars->v53r_=state_vars->v53func8accprob_;
if(((0)==(0))){goto v53___11;} else {goto v53___20;};
v53___11:
state_vars->v53val_=(-1.2);
state_vars->v53val_=(-1.2);
v53___13:
if((state_vars->v53dx_ >= 0)&&(state_vars->v53val_ > (1.2))) {
goto v53___19;
} else {
if((state_vars->v53dx_ < 0)&&(state_vars->v53val_ < (1.2)))
goto v53___19;
};
state_vars->v53func15x_=(state_vars->v53val_+state_vars->v53dx_);
if(((0)==(1))){goto v53__func15_1;} else {goto v53__func15_8;};
v53__func15_1:
state_vars->v53func16x_=state_vars->v53func15x_;
state_vars->v53func16a_=state_vars->v53func15v53__func15__const_39_[(1) - 1];
state_vars->v53func16b_=state_vars->v53func15v53__func15__const_40_[(1) - 1];
state_vars->v53func16c_=state_vars->v53func15v53__func15__const_41_[(1) - 1];
if(((state_vars->v53func16x_>state_vars->v53func16a_)&(state_vars->v53func16x_<state_vars->v53func16c_))){goto v53__func16_1;} else {goto v53__func16_6;};
v53__func16_1:
if((state_vars->v53func16x_<state_vars->v53func16b_)){goto v53__func16_2;} else {goto v53__func16_3;};
v53__func16_2:
state_vars->v53func16trianglefm_=(((1)-(state_vars->v53func16b_/(state_vars->v53func16b_-state_vars->v53func16a_)))+(state_vars->v53func16x_/(state_vars->v53func16b_-state_vars->v53func16a_)));
v53__func16_3:
if((state_vars->v53func16x_>=state_vars->v53func16b_)){goto v53__func16_4;} else {goto v53__func16_5;};
v53__func16_4:
state_vars->v53func16trianglefm_=(((1)-(state_vars->v53func16b_/(state_vars->v53func16b_-state_vars->v53func16c_)))+(state_vars->v53func16x_/(state_vars->v53func16b_-state_vars->v53func16c_)));
v53__func16_5:
goto v53__func16_7;
v53__func16_6:
state_vars->v53func16trianglefm_=(0);
v53__func16_7:
;
state_vars->v53func15accprob_=(locals->v52_out_0_[(1) - 1]*state_vars->v53func16trianglefm_);
state_vars->v53func15i_=(2);
state_vars->v53func15i_=(2);
v53__func15_4:
if(state_vars->v53func15i_ > state_vars->v53n_)
goto v53__func15_7;
state_vars->v53func17x_=state_vars->v53func15x_;
state_vars->v53func17a_=state_vars->v53func15v53__func15__const_42_[state_vars->v53func15i_ - 1];
state_vars->v53func17b_=state_vars->v53func15v53__func15__const_43_[state_vars->v53func15i_ - 1];
state_vars->v53func17c_=state_vars->v53func15v53__func15__const_44_[state_vars->v53func15i_ - 1];
if(((state_vars->v53func17x_>state_vars->v53func17a_)&(state_vars->v53func17x_<state_vars->v53func17c_))){goto v53__func17_1;} else {goto v53__func17_6;};
v53__func17_1:
if((state_vars->v53func17x_<state_vars->v53func17b_)){goto v53__func17_2;} else {goto v53__func17_3;};
v53__func17_2:
state_vars->v53func17trianglefm_=(((1)-(state_vars->v53func17b_/(state_vars->v53func17b_-state_vars->v53func17a_)))+(state_vars->v53func17x_/(state_vars->v53func17b_-state_vars->v53func17a_)));
v53__func17_3:
if((state_vars->v53func17x_>=state_vars->v53func17b_)){goto v53__func17_4;} else {goto v53__func17_5;};
v53__func17_4:
state_vars->v53func17trianglefm_=(((1)-(state_vars->v53func17b_/(state_vars->v53func17b_-state_vars->v53func17c_)))+(state_vars->v53func17x_/(state_vars->v53func17b_-state_vars->v53func17c_)));
v53__func17_5:
goto v53__func17_7;
v53__func17_6:
state_vars->v53func17trianglefm_=(0);
v53__func17_7:
;
state_vars->v53func15v53__func15_func_res_414_=state_vars->v53func15accprob_;
state_vars->v53func15v53__func15_func_tmp_414_=(locals->v52_out_0_[state_vars->v53func15i_ - 1]*state_vars->v53func17trianglefm_);
if( state_vars->v53func15v53__func15_func_tmp_414_>state_vars->v53func15v53__func15_func_res_414_ ) state_vars->v53func15v53__func15_func_res_414_=state_vars->v53func15v53__func15_func_tmp_414_;
state_vars->v53func15accprob_=state_vars->v53func15v53__func15_func_res_414_;
state_vars->v53func15i_ = state_vars->v53func15i_ + 1;
goto v53__func15_4;
v53__func15_7:
goto v53__func15_23;
v53__func15_8:
if(((0)==(0))){goto v53__func15_9;} else {goto v53__func15_16;};
v53__func15_9:
state_vars->v53func18x_=state_vars->v53func15x_;
state_vars->v53func18a_=state_vars->v53func15v53__func15__const_45_[(1) - 1];
state_vars->v53func18b_=state_vars->v53func15v53__func15__const_46_[(1) - 1];
state_vars->v53func18c_=state_vars->v53func15v53__func15__const_47_[(1) - 1];
if(((state_vars->v53func18x_>state_vars->v53func18a_)&(state_vars->v53func18x_<state_vars->v53func18c_))){goto v53__func18_1;} else {goto v53__func18_6;};
v53__func18_1:
if((state_vars->v53func18x_<state_vars->v53func18b_)){goto v53__func18_2;} else {goto v53__func18_3;};
v53__func18_2:
state_vars->v53func18trianglefm_=(((1)-(state_vars->v53func18b_/(state_vars->v53func18b_-state_vars->v53func18a_)))+(state_vars->v53func18x_/(state_vars->v53func18b_-state_vars->v53func18a_)));
v53__func18_3:
if((state_vars->v53func18x_>=state_vars->v53func18b_)){goto v53__func18_4;} else {goto v53__func18_5;};
v53__func18_4:
state_vars->v53func18trianglefm_=(((1)-(state_vars->v53func18b_/(state_vars->v53func18b_-state_vars->v53func18c_)))+(state_vars->v53func18x_/(state_vars->v53func18b_-state_vars->v53func18c_)));
v53__func18_5:
goto v53__func18_7;
v53__func18_6:
state_vars->v53func18trianglefm_=(0);
v53__func18_7:
;
state_vars->v53func15v53__func15_func_res_444_=locals->v52_out_0_[(1) - 1];
state_vars->v53func15v53__func15_func_tmp_444_=state_vars->v53func18trianglefm_;
if( state_vars->v53func15v53__func15_func_tmp_444_<state_vars->v53func15v53__func15_func_res_444_ ) state_vars->v53func15v53__func15_func_res_444_=state_vars->v53func15v53__func15_func_tmp_444_;
state_vars->v53func15accprob_=state_vars->v53func15v53__func15_func_res_444_;
state_vars->v53func15i_=(2);
state_vars->v53func15i_=(2);
v53__func15_12:
if(state_vars->v53func15i_ > state_vars->v53n_)
goto v53__func15_15;
state_vars->v53func19x_=state_vars->v53func15x_;
state_vars->v53func19a_=state_vars->v53func15v53__func15__const_48_[state_vars->v53func15i_ - 1];
state_vars->v53func19b_=state_vars->v53func15v53__func15__const_49_[state_vars->v53func15i_ - 1];
state_vars->v53func19c_=state_vars->v53func15v53__func15__const_50_[state_vars->v53func15i_ - 1];
if(((state_vars->v53func19x_>state_vars->v53func19a_)&(state_vars->v53func19x_<state_vars->v53func19c_))){goto v53__func19_1;} else {goto v53__func19_6;};
v53__func19_1:
if((state_vars->v53func19x_<state_vars->v53func19b_)){goto v53__func19_2;} else {goto v53__func19_3;};
v53__func19_2:
state_vars->v53func19trianglefm_=(((1)-(state_vars->v53func19b_/(state_vars->v53func19b_-state_vars->v53func19a_)))+(state_vars->v53func19x_/(state_vars->v53func19b_-state_vars->v53func19a_)));
v53__func19_3:
if((state_vars->v53func19x_>=state_vars->v53func19b_)){goto v53__func19_4;} else {goto v53__func19_5;};
v53__func19_4:
state_vars->v53func19trianglefm_=(((1)-(state_vars->v53func19b_/(state_vars->v53func19b_-state_vars->v53func19c_)))+(state_vars->v53func19x_/(state_vars->v53func19b_-state_vars->v53func19c_)));
v53__func19_5:
goto v53__func19_7;
v53__func19_6:
state_vars->v53func19trianglefm_=(0);
v53__func19_7:
;
state_vars->v53func15v53__func15_func_res_472_=locals->v52_out_0_[state_vars->v53func15i_ - 1];
state_vars->v53func15v53__func15_func_tmp_472_=state_vars->v53func19trianglefm_;
if( state_vars->v53func15v53__func15_func_tmp_472_<state_vars->v53func15v53__func15_func_res_472_ ) state_vars->v53func15v53__func15_func_res_472_=state_vars->v53func15v53__func15_func_tmp_472_;
state_vars->v53func15v53__func15_func_res_475_=state_vars->v53func15accprob_;
state_vars->v53func15v53__func15_func_tmp_475_=state_vars->v53func15v53__func15_func_res_472_;
if( state_vars->v53func15v53__func15_func_tmp_475_>state_vars->v53func15v53__func15_func_res_475_ ) state_vars->v53func15v53__func15_func_res_475_=state_vars->v53func15v53__func15_func_tmp_475_;
state_vars->v53func15accprob_=state_vars->v53func15v53__func15_func_res_475_;
state_vars->v53func15i_ = state_vars->v53func15i_ + 1;
goto v53__func15_12;
v53__func15_15:
goto v53__func15_23;
v53__func15_16:
if(((0)==(2))){goto v53__func15_17;} else {goto v53__func15_23;};
v53__func15_17:
state_vars->v53func20x_=state_vars->v53func15x_;
state_vars->v53func20a_=state_vars->v53func15v53__func15__const_51_[(1) - 1];
state_vars->v53func20b_=state_vars->v53func15v53__func15__const_52_[(1) - 1];
state_vars->v53func20c_=state_vars->v53func15v53__func15__const_53_[(1) - 1];
if(((state_vars->v53func20x_>state_vars->v53func20a_)&(state_vars->v53func20x_<state_vars->v53func20c_))){goto v53__func20_1;} else {goto v53__func20_6;};
v53__func20_1:
if((state_vars->v53func20x_<state_vars->v53func20b_)){goto v53__func20_2;} else {goto v53__func20_3;};
v53__func20_2:
state_vars->v53func20trianglefm_=(((1)-(state_vars->v53func20b_/(state_vars->v53func20b_-state_vars->v53func20a_)))+(state_vars->v53func20x_/(state_vars->v53func20b_-state_vars->v53func20a_)));
v53__func20_3:
if((state_vars->v53func20x_>=state_vars->v53func20b_)){goto v53__func20_4;} else {goto v53__func20_5;};
v53__func20_4:
state_vars->v53func20trianglefm_=(((1)-(state_vars->v53func20b_/(state_vars->v53func20b_-state_vars->v53func20c_)))+(state_vars->v53func20x_/(state_vars->v53func20b_-state_vars->v53func20c_)));
v53__func20_5:
goto v53__func20_7;
v53__func20_6:
state_vars->v53func20trianglefm_=(0);
v53__func20_7:
;
state_vars->v53func15accprob_=((0.5)*(locals->v52_out_0_[(1) - 1]+state_vars->v53func20trianglefm_));
state_vars->v53func15i_=(2);
state_vars->v53func15i_=(2);
v53__func15_20:
if(state_vars->v53func15i_ > state_vars->v53n_)
goto v53__func15_23;
state_vars->v53func21x_=state_vars->v53func15x_;
state_vars->v53func21a_=state_vars->v53func15v53__func15__const_54_[state_vars->v53func15i_ - 1];
state_vars->v53func21b_=state_vars->v53func15v53__func15__const_55_[state_vars->v53func15i_ - 1];
state_vars->v53func21c_=state_vars->v53func15v53__func15__const_56_[state_vars->v53func15i_ - 1];
if(((state_vars->v53func21x_>state_vars->v53func21a_)&(state_vars->v53func21x_<state_vars->v53func21c_))){goto v53__func21_1;} else {goto v53__func21_6;};
v53__func21_1:
if((state_vars->v53func21x_<state_vars->v53func21b_)){goto v53__func21_2;} else {goto v53__func21_3;};
v53__func21_2:
state_vars->v53func21trianglefm_=(((1)-(state_vars->v53func21b_/(state_vars->v53func21b_-state_vars->v53func21a_)))+(state_vars->v53func21x_/(state_vars->v53func21b_-state_vars->v53func21a_)));
v53__func21_3:
if((state_vars->v53func21x_>=state_vars->v53func21b_)){goto v53__func21_4;} else {goto v53__func21_5;};
v53__func21_4:
state_vars->v53func21trianglefm_=(((1)-(state_vars->v53func21b_/(state_vars->v53func21b_-state_vars->v53func21c_)))+(state_vars->v53func21x_/(state_vars->v53func21b_-state_vars->v53func21c_)));
v53__func21_5:
goto v53__func21_7;
v53__func21_6:
state_vars->v53func21trianglefm_=(0);
v53__func21_7:
;
state_vars->v53func15v53__func15_func_res_530_=state_vars->v53func15accprob_;
state_vars->v53func15v53__func15_func_tmp_530_=((0.5)*(locals->v52_out_0_[state_vars->v53func15i_ - 1]+state_vars->v53func21trianglefm_));
if( state_vars->v53func15v53__func15_func_tmp_530_>state_vars->v53func15v53__func15_func_res_530_ ) state_vars->v53func15v53__func15_func_res_530_=state_vars->v53func15v53__func15_func_tmp_530_;
state_vars->v53func15accprob_=state_vars->v53func15v53__func15_func_res_530_;
state_vars->v53func15i_ = state_vars->v53func15i_ + 1;
goto v53__func15_20;
v53__func15_23:
;
state_vars->v53r_=state_vars->v53func15accprob_;
state_vars->v53cm_=(state_vars->v53cm_+((state_vars->v53dx_*((state_vars->v53val_*state_vars->v53l_)+((state_vars->v53val_+state_vars->v53dx_)*state_vars->v53r_)))/(2)));
state_vars->v53m_=(state_vars->v53m_+((state_vars->v53dx_*(state_vars->v53l_+state_vars->v53r_))/(2)));
state_vars->v53l_=state_vars->v53r_;
if(state_vars->v53dx_ != 0){
state_vars->v53val_ = state_vars->v53val_ + state_vars->v53dx_;
goto v53___13;
};
v53___19:
goto v53___30;
v53___20:
state_vars->v53i_=(1);
state_vars->v53i_=(1);
v53___22:
if(state_vars->v53i_ > state_vars->v53n_)
goto v53___25;
state_vars->v53cm_=(state_vars->v53cm_+(locals->v52_out_0_[state_vars->v53i_ - 1]*state_vars->v53v53____const_57_[state_vars->v53i_ - 1]));
state_vars->v53i_ = state_vars->v53i_ + 1;
goto v53___22;
v53___25:
state_vars->v53i_=(1);
state_vars->v53i_=(1);
v53___27:
if(state_vars->v53i_ > state_vars->v53n_)
goto v53___30;
state_vars->v53m_=(state_vars->v53m_+locals->v52_out_0_[state_vars->v53i_ - 1]);
state_vars->v53i_ = state_vars->v53i_ + 1;
goto v53___27;
v53___30:
state_vars->my_diagramv53_out_0_=(state_vars->v53cm_/state_vars->v53m_);
v53___33:
;

/* Index=56
   UID=56
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

if(isfinite(state_vars->my_diagramv0_out_0_)){
out_0 = state_vars->my_diagramv0_out_0_;
};

/* Index=57
   UID=57
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=Выходной контакт s3 */

if(isfinite(state_vars->my_diagramv19_out_0_)){
out_1 = state_vars->my_diagramv19_out_0_;
};

/* Index=59
   UID=59
   GeneratorClassName=TOutPin
   Name=OutPin8
   Type=Выходной контакт s3 */

if(isfinite(state_vars->my_diagramv53_out_0_)){
out_2 = state_vars->my_diagramv53_out_0_;
};
};break;
};

/*  ------------------------------------------------------
     Routine name:  vypr
        Generated:  08.12.2014 17:14:43
      Description:  
     Project file:  Выпрямитель.prt

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
lae_solver_finalization(solver_data);
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TSinSource
   Name=Sinus_source1
   Type=Синусоида */

tmp1 = state_vars->vyprv0_loct_+step;
state_vars->v0_out_0_ = consts->vyprv0_a_*sin(consts->vyprv0_w_*tmp1+consts->vyprv0_f_);
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(consts->vyprv0_w_!=0)){
tmp2 = fabs(2*M_PI/consts->vyprv0_w_);
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->vyprv0_loct_ = tmp1;
};

/* Index=10
   UID=10
   GeneratorClassName=TSinSource
   Name=Sinus_source2
   Type=Синусоида */

tmp1 = state_vars->vyprv10_loct_+step;
state_vars->v10_out_0_ = consts->vyprv10_a_*sin(consts->vyprv10_w_*tmp1+consts->vyprv10_f_);
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(consts->vyprv10_w_!=0)){
tmp2 = fabs(2*M_PI/consts->vyprv10_w_);
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->vyprv10_loct_ = tmp1;
};

/* Index=19
   UID=19
   GeneratorClassName=TSinSource
   Name=Sinus_source3
   Type=Синусоида */

tmp1 = state_vars->vyprv19_loct_+step;
state_vars->v19_out_0_ = consts->vyprv19_a_*sin(consts->vyprv19_w_*tmp1+consts->vyprv19_f_);
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(consts->vyprv19_w_!=0)){
tmp2 = fabs(2*M_PI/consts->vyprv19_w_);
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
state_vars->vyprv19_loct_ = tmp1;
};

/* Index=48
   UID=48
   GeneratorClassName=TLAEResult
   Name=Macro251.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv4_out_0_-1;
state_vars->vyprv48_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=49
   UID=49
   GeneratorClassName=TMultiplexor
   Name=Macro238.Multiplexor_vec1
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv3_out_0_;
locals->v49_out_0_[1] = locals->vyprv9_out_0_;

/* Index=50
   UID=50
   GeneratorClassName=TSumSrc
   Name=Macro238.Add_oper1
   Type=Сумматор */

locals->v50_out_0_ = (1)*state_vars->v0_out_0_+(1)*consts->vyprv7_a_;

/* Index=51
   UID=51
   GeneratorClassName=TLAECoefs
   Name=Macro238.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<2;j++){
i=locals->v49_out_0_[j]-1;
if(i!=state_vars->vyprv51_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv51_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<2;j++){
if(consts->vyprv2_a_[j]!=state_vars->vyprv51_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv51_coefs_[j]=consts->vyprv2_a_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv3_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,state_vars->v0_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,2);
for(j=0;j<2;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv51_idxs_[j*1],consts->vyprv2_a_[j*1],1);
};
};

/* Index=52
   UID=52
   GeneratorClassName=TLAEResult
   Name=Macro303.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv29_out_0_-1;
state_vars->vyprv52_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=53
   UID=53
   GeneratorClassName=TSumSrc
   Name=Macro300.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v53_out_0_ = (1)*state_vars->vyprv52_out_0_+(-1)*state_vars->vyprv48_out_0_;

/* Index=54
   UID=54
   GeneratorClassName=TLomStatic
   Name=Macro300.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v53_out_0_>consts->vyprv54_t_[j])){j++;};
while((j >= 1) && (locals->v53_out_0_<consts->vyprv54_t_[j-1])){j--;};
if(j >= 5){
locals->v54_out_0_ = consts->vyprv54_y_[4];
}else{
if(j<1){
locals->v54_out_0_ = consts->vyprv54_y_[0];
}else{
locals->v54_out_0_ = consts->vyprv54_t_[j]-consts->vyprv54_t_[j-1];
if(locals->v54_out_0_ != 0){
locals->v54_out_0_ = consts->vyprv54_y_[j-1]+(locals->v53_out_0_-consts->vyprv54_t_[j-1])*(consts->vyprv54_y_[j]-consts->vyprv54_y_[j-1])/locals->v54_out_0_;
}else{
locals->v54_out_0_ = consts->vyprv54_y_[j-1];
};
};
};

/* Index=55
   UID=55
   GeneratorClassName=TLAEResult
   Name=Macro311.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv33_out_0_-1;
state_vars->vyprv55_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=56
   UID=56
   GeneratorClassName=TSumSrc
   Name=Macro307.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v53_out_0_ = (1)*state_vars->vyprv48_out_0_+(-1)*state_vars->vyprv55_out_0_;

/* Index=57
   UID=57
   GeneratorClassName=TLomStatic
   Name=Macro307.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v53_out_0_>consts->vyprv57_t_[j])){j++;};
while((j >= 1) && (locals->v53_out_0_<consts->vyprv57_t_[j-1])){j--;};
if(j >= 5){
locals->v57_out_0_ = consts->vyprv57_y_[4];
}else{
if(j<1){
locals->v57_out_0_ = consts->vyprv57_y_[0];
}else{
locals->v57_out_0_ = consts->vyprv57_t_[j]-consts->vyprv57_t_[j-1];
if(locals->v57_out_0_ != 0){
locals->v57_out_0_ = consts->vyprv57_y_[j-1]+(locals->v53_out_0_-consts->vyprv57_t_[j-1])*(consts->vyprv57_y_[j]-consts->vyprv57_y_[j-1])/locals->v57_out_0_;
}else{
locals->v57_out_0_ = consts->vyprv57_y_[j-1];
};
};
};

/* Index=58
   UID=58
   GeneratorClassName=TMultiplexor
   Name=Macro297.Multiplexor_vec1
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v54_out_0_;
locals->v58_out_0_[1] = locals->v57_out_0_;

/* Index=59
   UID=59
   GeneratorClassName=TMultiplexor
   Name=Macro251.Multiplexor_vec3
   Type=Мультиплексор */

locals->v59_out_0_[0] = locals->v58_out_0_[0];
locals->v59_out_0_[1] = locals->v58_out_0_[1];
locals->v59_out_0_[2] = consts->vyprv18_a_;

/* Index=60
   UID=60
   GeneratorClassName=TKx
   Name=Macro251.kx
   Type=Усилитель */

for(i=0;i<3;i++){
locals->v60_out_0_[i] = consts->vyprv60_a_*locals->v59_out_0_[i];

/* Index=61
   UID=61
   GeneratorClassName=TSumSrc
   Name=Macro287.Add_oper1
   Type=Сумматор */

};
locals->v53_out_0_ = (1)*state_vars->v19_out_0_+(1)*consts->vyprv7_a_;

/* Index=62
   UID=62
   GeneratorClassName=TVectorAdd
   Name=Macro251.VecAdd_oper2
   Type=Суммирование элементов вектора */

locals->v62_out_0_ = 0;
for(i = 0;i<3;i++){
locals->v62_out_0_ = (1)*locals->v59_out_0_[i]+locals->v62_out_0_;
};

/* Index=63
   UID=63
   GeneratorClassName=TMultiplexor
   Name=Macro251.Multiplexor_vec1
   Type=Мультиплексор */

locals->v63_out_0_[0] = locals->v60_out_0_[0];
locals->v63_out_0_[1] = locals->v60_out_0_[1];
locals->v63_out_0_[2] = locals->v60_out_0_[2];
locals->v63_out_0_[3] = locals->v62_out_0_;

/* Index=64
   UID=64
   GeneratorClassName=TMultiplexor
   Name=Macro287.Multiplexor_vec1
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv22_out_0_;
locals->v49_out_0_[1] = locals->vyprv9_out_0_;

/* Index=65
   UID=65
   GeneratorClassName=TLAECoefs
   Name=Macro271.equkoefs
   Type=Коэффициенты линейного уравнения */

i=locals->vyprv9_out_0_-1;
if(i!=state_vars->vyprv65_idxs_){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv65_idxs_=i;
tmp_f_1=0;
if(consts->vyprv8_a_!=state_vars->vyprv65_coefs_){
tmp_f_1=1;
};
state_vars->vyprv65_coefs_=consts->vyprv8_a_;
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv9_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,consts->vyprv7_a_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,1);
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv65_idxs_,consts->vyprv8_a_,1);
};

/* Index=66
   UID=66
   GeneratorClassName=TLAECoefs
   Name=Macro287.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<2;j++){
i=locals->v49_out_0_[j]-1;
if(i!=state_vars->vyprv66_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv66_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<2;j++){
if(consts->vyprv21_a_[j]!=state_vars->vyprv66_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv66_coefs_[j]=consts->vyprv21_a_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv22_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,state_vars->v19_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,2);
for(j=0;j<2;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv66_idxs_[j*1],consts->vyprv21_a_[j*1],1);
};
};

/* Index=67
   UID=67
   GeneratorClassName=TLAEResult
   Name=Macro289.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv23_out_0_-1;
state_vars->vyprv67_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=68
   UID=68
   GeneratorClassName=TSumSrc
   Name=Macro298.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v62_out_0_ = (1)*state_vars->vyprv52_out_0_+(-1)*state_vars->vyprv67_out_0_;

/* Index=69
   UID=69
   GeneratorClassName=TLomStatic
   Name=Macro298.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v62_out_0_>consts->vyprv69_t_[j])){j++;};
while((j >= 1) && (locals->v62_out_0_<consts->vyprv69_t_[j-1])){j--;};
if(j >= 5){
locals->v69_out_0_ = consts->vyprv69_y_[4];
}else{
if(j<1){
locals->v69_out_0_ = consts->vyprv69_y_[0];
}else{
locals->v69_out_0_ = consts->vyprv69_t_[j]-consts->vyprv69_t_[j-1];
if(locals->v69_out_0_ != 0){
locals->v69_out_0_ = consts->vyprv69_y_[j-1]+(locals->v62_out_0_-consts->vyprv69_t_[j-1])*(consts->vyprv69_y_[j]-consts->vyprv69_y_[j-1])/locals->v69_out_0_;
}else{
locals->v69_out_0_ = consts->vyprv69_y_[j-1];
};
};
};

/* Index=70
   UID=70
   GeneratorClassName=TSumSrc
   Name=Macro305.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v62_out_0_ = (1)*state_vars->vyprv67_out_0_+(-1)*state_vars->vyprv55_out_0_;

/* Index=71
   UID=71
   GeneratorClassName=TLomStatic
   Name=Macro305.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v62_out_0_>consts->vyprv71_t_[j])){j++;};
while((j >= 1) && (locals->v62_out_0_<consts->vyprv71_t_[j-1])){j--;};
if(j >= 5){
locals->v71_out_0_ = consts->vyprv71_y_[4];
}else{
if(j<1){
locals->v71_out_0_ = consts->vyprv71_y_[0];
}else{
locals->v71_out_0_ = consts->vyprv71_t_[j]-consts->vyprv71_t_[j-1];
if(locals->v71_out_0_ != 0){
locals->v71_out_0_ = consts->vyprv71_y_[j-1]+(locals->v62_out_0_-consts->vyprv71_t_[j-1])*(consts->vyprv71_y_[j]-consts->vyprv71_y_[j-1])/locals->v71_out_0_;
}else{
locals->v71_out_0_ = consts->vyprv71_y_[j-1];
};
};
};

/* Index=72
   UID=72
   GeneratorClassName=TMultiplexor
   Name=Macro295.Multiplexor_vec1
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v69_out_0_;
locals->v58_out_0_[1] = locals->v71_out_0_;

/* Index=73
   UID=73
   GeneratorClassName=TMultiplexor
   Name=Macro289.Multiplexor_vec3
   Type=Мультиплексор */

locals->v59_out_0_[0] = locals->v58_out_0_[0];
locals->v59_out_0_[1] = locals->v58_out_0_[1];
locals->v59_out_0_[2] = consts->vyprv25_a_;

/* Index=74
   UID=74
   GeneratorClassName=TKx
   Name=Macro289.kx
   Type=Усилитель */

for(i=0;i<3;i++){
locals->v60_out_0_[i] = consts->vyprv74_a_*locals->v59_out_0_[i];

/* Index=75
   UID=75
   GeneratorClassName=TVectorAdd
   Name=Macro289.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v62_out_0_ = 0;
for(i = 0;i<3;i++){
locals->v62_out_0_ = (1)*locals->v59_out_0_[i]+locals->v62_out_0_;
};

/* Index=76
   UID=76
   GeneratorClassName=TMultiplexor
   Name=Macro289.Multiplexor_vec1
   Type=Мультиплексор */

locals->v76_out_0_[0] = locals->v60_out_0_[0];
locals->v76_out_0_[1] = locals->v60_out_0_[1];
locals->v76_out_0_[2] = locals->v60_out_0_[2];
locals->v76_out_0_[3] = locals->v62_out_0_;

/* Index=77
   UID=77
   GeneratorClassName=TMultiplexor
   Name=Macro295.Multiplexor_vec2
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv29_out_0_;
locals->v49_out_0_[1] = locals->vyprv33_out_0_;

/* Index=78
   UID=78
   GeneratorClassName=TMultiplexor
   Name=Macro289.Multiplexor_vec2
   Type=Мультиплексор */

locals->v78_out_0_[0] = locals->v49_out_0_[0];
locals->v78_out_0_[1] = locals->v49_out_0_[1];
locals->v78_out_0_[2] = locals->vyprv40_out_0_;
locals->v78_out_0_[3] = locals->vyprv23_out_0_;

/* Index=79
   UID=79
   GeneratorClassName=TSumSrc
   Name=Macro295.Add_oper1
   Type=Сумматор */

locals->v62_out_0_ = (1)*consts->vyprv26_a_+(1)*consts->vyprv30_a_;

/* Index=80
   UID=80
   GeneratorClassName=TSumSrc
   Name=Macro289.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*consts->vyprv24_a_+(1)*locals->v62_out_0_;

/* Index=81
   UID=81
   GeneratorClassName=TLAECoefs
   Name=Macro289.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<4;j++){
i=locals->v78_out_0_[j]-1;
if(i!=state_vars->vyprv81_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv81_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<4;j++){
if(locals->v76_out_0_[j]!=state_vars->vyprv81_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv81_coefs_[j]=locals->v76_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv23_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v80_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,4);
for(j=0;j<4;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv81_idxs_[j*1],locals->v76_out_0_[j*1],1);
};
};

/* Index=82
   UID=82
   GeneratorClassName=TMultiplexor
   Name=Macro297.Multiplexor_vec2
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv29_out_0_;
locals->v49_out_0_[1] = locals->vyprv33_out_0_;

/* Index=83
   UID=83
   GeneratorClassName=TMultiplexor
   Name=Macro251.Multiplexor_vec2
   Type=Мультиплексор */

locals->v78_out_0_[0] = locals->v49_out_0_[0];
locals->v78_out_0_[1] = locals->v49_out_0_[1];
locals->v78_out_0_[2] = locals->vyprv42_out_0_;
locals->v78_out_0_[3] = locals->vyprv4_out_0_;

/* Index=84
   UID=84
   GeneratorClassName=TSumSrc
   Name=Macro277.Add_oper1
   Type=Сумматор */

locals->v62_out_0_ = (1)*state_vars->v10_out_0_+(1)*consts->vyprv7_a_;

/* Index=85
   UID=85
   GeneratorClassName=TLAEResult
   Name=Macro279.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv14_out_0_-1;
state_vars->vyprv85_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=86
   UID=86
   GeneratorClassName=TSumSrc
   Name=Macro306.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v80_out_0_ = (1)*state_vars->vyprv85_out_0_+(-1)*state_vars->vyprv55_out_0_;

/* Index=87
   UID=87
   GeneratorClassName=TLomStatic
   Name=Macro306.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v80_out_0_>consts->vyprv87_t_[j])){j++;};
while((j >= 1) && (locals->v80_out_0_<consts->vyprv87_t_[j-1])){j--;};
if(j >= 5){
locals->v87_out_0_ = consts->vyprv87_y_[4];
}else{
if(j<1){
locals->v87_out_0_ = consts->vyprv87_y_[0];
}else{
locals->v87_out_0_ = consts->vyprv87_t_[j]-consts->vyprv87_t_[j-1];
if(locals->v87_out_0_ != 0){
locals->v87_out_0_ = consts->vyprv87_y_[j-1]+(locals->v80_out_0_-consts->vyprv87_t_[j-1])*(consts->vyprv87_y_[j]-consts->vyprv87_y_[j-1])/locals->v87_out_0_;
}else{
locals->v87_out_0_ = consts->vyprv87_y_[j-1];
};
};
};

/* Index=88
   UID=88
   GeneratorClassName=TMultiplexor
   Name=Macro293.Multiplexor_vec1
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v71_out_0_;
locals->v58_out_0_[1] = locals->v87_out_0_;

/* Index=89
   UID=89
   GeneratorClassName=TMultiplexor
   Name=Macro293.Multiplexor_vec2
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv23_out_0_;
locals->v49_out_0_[1] = locals->vyprv14_out_0_;

/* Index=90
   UID=90
   GeneratorClassName=TSumSrc
   Name=Macro293.Add_oper1
   Type=Сумматор */

locals->v71_out_0_ = (1)*consts->vyprv30_a_+(1)*consts->vyprv31_a_;

/* Index=91
   UID=91
   GeneratorClassName=TMultiplexor
   Name=Macro293.Multiplexor_vec3
   Type=Мультиплексор */

locals->v59_out_0_[0] = state_vars->vyprv67_out_0_;
locals->v59_out_0_[1] = state_vars->vyprv85_out_0_;

/* Index=92
   UID=92
   GeneratorClassName=TMultiplexor
   Name=Macro294.Multiplexor_vec1
   Type=Мультиплексор */

locals->v60_out_0_[0] = consts->vyprv11_a_;
locals->v60_out_0_[1] = consts->vyprv20_a_;

/* Index=93
   UID=93
   GeneratorClassName=TMultiplexor
   Name=Macro294.Multiplexor_vec2
   Type=Мультиплексор */

locals->v93_out_0_[0] = locals->vyprv13_out_0_;
locals->v93_out_0_[1] = locals->vyprv22_out_0_;

/* Index=94
   UID=94
   GeneratorClassName=TLAEResult
   Name=Macro315.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv41_out_0_-1;
state_vars->vyprv94_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=95
   UID=95
   GeneratorClassName=TSumSrc
   Name=Macro312.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v80_out_0_ = (1)*state_vars->vyprv94_out_0_+(-1)*locals->v62_out_0_;

/* Index=96
   UID=96
   GeneratorClassName=TDivDbl
   Name=Macro312.Div_oper1
   Type=Делитель */

locals->v62_out_0_ = step/consts->vyprv37_a_;
if(!isfinite(locals->v62_out_0_)) locals->v62_out_0_ = 0;

/* Index=97
   UID=97
   GeneratorClassName=TMulDbl
   Name=Macro312.Mul_oper1
   Type=Перемножитель */

locals->v97_out_0_ = locals->v80_out_0_*locals->v62_out_0_;

/* Index=98
   UID=98
   GeneratorClassName=TLAEResult
   Name=Macro314.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv40_out_0_-1;
state_vars->vyprv98_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=99
   UID=99
   GeneratorClassName=TSumSrc
   Name=Macro242.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v80_out_0_ = (1)*state_vars->vyprv98_out_0_+(-1)*locals->v53_out_0_;

/* Index=100
   UID=100
   GeneratorClassName=TDivDbl
   Name=Macro242.Div_oper1
   Type=Делитель */

locals->v53_out_0_ = step/consts->vyprv35_a_;
if(!isfinite(locals->v53_out_0_)) locals->v53_out_0_ = 0;

/* Index=101
   UID=101
   GeneratorClassName=TMulDbl
   Name=Macro242.Mul_oper1
   Type=Перемножитель */

locals->v101_out_0_ = locals->v80_out_0_*locals->v53_out_0_;

/* Index=102
   UID=102
   GeneratorClassName=TMultiplexor
   Name=Macro294.Multiplexor_vec3
   Type=Мультиплексор */

locals->v76_out_0_[0] = consts->vyprv7_a_;
locals->v76_out_0_[1] = consts->vyprv7_a_;

/* Index=103
   UID=103
   GeneratorClassName=TMultiplexor
   Name=Macro295.Multiplexor_vec3
   Type=Мультиплексор */

locals->v103_out_0_[0] = state_vars->vyprv52_out_0_;
locals->v103_out_0_[1] = state_vars->vyprv55_out_0_;

/* Index=104
   UID=104
   GeneratorClassName=TSumSrc
   Name=Macro299.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v80_out_0_ = (1)*state_vars->vyprv52_out_0_+(-1)*state_vars->vyprv85_out_0_;

/* Index=105
   UID=105
   GeneratorClassName=TLomStatic
   Name=Macro299.Lom_static1
   Type=Ломаная статическая характеристика */

j = 1;
while((j<5) && (locals->v80_out_0_>consts->vyprv105_t_[j])){j++;};
while((j >= 1) && (locals->v80_out_0_<consts->vyprv105_t_[j-1])){j--;};
if(j >= 5){
locals->v105_out_0_ = consts->vyprv105_y_[4];
}else{
if(j<1){
locals->v105_out_0_ = consts->vyprv105_y_[0];
}else{
locals->v105_out_0_ = consts->vyprv105_t_[j]-consts->vyprv105_t_[j-1];
if(locals->v105_out_0_ != 0){
locals->v105_out_0_ = consts->vyprv105_y_[j-1]+(locals->v80_out_0_-consts->vyprv105_t_[j-1])*(consts->vyprv105_y_[j]-consts->vyprv105_y_[j-1])/locals->v105_out_0_;
}else{
locals->v105_out_0_ = consts->vyprv105_y_[j-1];
};
};
};

/* Index=106
   UID=106
   GeneratorClassName=TMultiplexor
   Name=Macro296.Multiplexor_vec1
   Type=Мультиплексор */

locals->v103_out_0_[0] = locals->v105_out_0_;
locals->v103_out_0_[1] = locals->v87_out_0_;

/* Index=107
   UID=107
   GeneratorClassName=TMultiplexor
   Name=Macro296.Multiplexor_vec2
   Type=Мультиплексор */

locals->v107_out_0_[0] = locals->vyprv29_out_0_;
locals->v107_out_0_[1] = locals->vyprv33_out_0_;

/* Index=108
   UID=108
   GeneratorClassName=TSumSrc
   Name=Macro296.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*consts->vyprv27_a_+(1)*consts->vyprv31_a_;

/* Index=109
   UID=109
   GeneratorClassName=TMultiplexor
   Name=Macro296.Multiplexor_vec3
   Type=Мультиплексор */

locals->v109_out_0_[0] = state_vars->vyprv52_out_0_;
locals->v109_out_0_[1] = state_vars->vyprv55_out_0_;

/* Index=110
   UID=110
   GeneratorClassName=TSumSrc
   Name=Macro297.Add_oper1
   Type=Сумматор */

locals->v87_out_0_ = (1)*consts->vyprv28_a_+(1)*consts->vyprv32_a_;

/* Index=111
   UID=111
   GeneratorClassName=TMultiplexor
   Name=Macro297.Multiplexor_vec3
   Type=Мультиплексор */

locals->v109_out_0_[0] = state_vars->vyprv52_out_0_;
locals->v109_out_0_[1] = state_vars->vyprv55_out_0_;

/* Index=112
   UID=112
   GeneratorClassName=TMultiplexor
   Name=Macro277.Multiplexor_vec1
   Type=Мультиплексор */

locals->v112_out_0_[0] = locals->vyprv13_out_0_;
locals->v112_out_0_[1] = locals->vyprv9_out_0_;

/* Index=113
   UID=113
   GeneratorClassName=TSumSrc
   Name=Macro251.Add_oper1
   Type=Сумматор */

locals->v113_out_0_ = (1)*consts->vyprv17_a_+(1)*locals->v87_out_0_;

/* Index=114
   UID=114
   GeneratorClassName=TMultiplexor
   Name=Macro302.Multiplexor_vec1
   Type=Мультиплексор */

locals->v109_out_0_[0] = locals->v69_out_0_;
locals->v109_out_0_[1] = locals->v105_out_0_;

/* Index=115
   UID=115
   GeneratorClassName=TMultiplexor
   Name=Macro301.Multiplexor_vec1
   Type=Мультиплексор */

locals->v115_out_0_[0] = locals->v109_out_0_[0];
locals->v115_out_0_[1] = locals->v109_out_0_[1];
locals->v115_out_0_[2] = locals->v54_out_0_;

/* Index=116
   UID=116
   GeneratorClassName=TMultiplexor
   Name=Macro302.Multiplexor_vec2
   Type=Мультиплексор */

locals->v116_out_0_[0] = locals->vyprv23_out_0_;
locals->v116_out_0_[1] = locals->vyprv14_out_0_;

/* Index=117
   UID=117
   GeneratorClassName=TMultiplexor
   Name=Macro301.Multiplexor_vec2
   Type=Мультиплексор */

locals->v117_out_0_[0] = locals->v116_out_0_[0];
locals->v117_out_0_[1] = locals->v116_out_0_[1];
locals->v117_out_0_[2] = locals->vyprv4_out_0_;

/* Index=118
   UID=118
   GeneratorClassName=TSumSrc
   Name=Macro302.Add_oper1
   Type=Сумматор */

locals->v54_out_0_ = (1)*consts->vyprv26_a_+(1)*consts->vyprv27_a_;

/* Index=119
   UID=119
   GeneratorClassName=TSumSrc
   Name=Macro301.Add_oper1
   Type=Сумматор */

locals->v69_out_0_ = (1)*locals->v54_out_0_+(1)*consts->vyprv28_a_;

/* Index=120
   UID=120
   GeneratorClassName=TMultiplexor
   Name=Macro302.Multiplexor_vec3
   Type=Мультиплексор */

locals->v109_out_0_[0] = state_vars->vyprv67_out_0_;
locals->v109_out_0_[1] = state_vars->vyprv85_out_0_;

/* Index=121
   UID=121
   GeneratorClassName=TMultiplexor
   Name=Macro301.Multiplexor_vec3
   Type=Мультиплексор */

locals->v121_out_0_[0] = locals->v109_out_0_[0];
locals->v121_out_0_[1] = locals->v109_out_0_[1];
locals->v121_out_0_[2] = state_vars->vyprv48_out_0_;

/* Index=122
   UID=122
   GeneratorClassName=TDivDbl
   Name=Macro324.Div_oper1
   Type=Делитель */

locals->v54_out_0_ = consts->vyprv47_a_/step;
if(!isfinite(locals->v54_out_0_)) locals->v54_out_0_ = 0;

/* Index=123
   UID=123
   GeneratorClassName=TMultiplexor
   Name=Macro320.Multiplexor_vec1
   Type=Мультиплексор */

locals->v109_out_0_[0] = consts->vyprv6_a_;
locals->v109_out_0_[1] = locals->v54_out_0_;

/* Index=124
   UID=124
   GeneratorClassName=TMultiplexor
   Name=Macro303.Multiplexor_vec3
   Type=Мультиплексор */

locals->v124_out_0_[0] = locals->v115_out_0_[0];
locals->v124_out_0_[1] = locals->v115_out_0_[1];
locals->v124_out_0_[2] = locals->v115_out_0_[2];
locals->v124_out_0_[3] = locals->v109_out_0_[0];
locals->v124_out_0_[4] = locals->v109_out_0_[1];

/* Index=125
   UID=125
   GeneratorClassName=TKx
   Name=Macro303.kx
   Type=Усилитель */

for(i=0;i<5;i++){
locals->v125_out_0_[i] = consts->vyprv125_a_*locals->v124_out_0_[i];

/* Index=126
   UID=126
   GeneratorClassName=TVectorAdd
   Name=Macro303.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v87_out_0_ = 0;
for(i = 0;i<5;i++){
locals->v87_out_0_ = (1)*locals->v124_out_0_[i]+locals->v87_out_0_;
};

/* Index=127
   UID=127
   GeneratorClassName=TMultiplexor
   Name=Macro303.Multiplexor_vec1
   Type=Мультиплексор */

locals->v127_out_0_[0] = locals->v125_out_0_[0];
locals->v127_out_0_[1] = locals->v125_out_0_[1];
locals->v127_out_0_[2] = locals->v125_out_0_[2];
locals->v127_out_0_[3] = locals->v125_out_0_[3];
locals->v127_out_0_[4] = locals->v125_out_0_[4];
locals->v127_out_0_[5] = locals->v87_out_0_;

/* Index=128
   UID=128
   GeneratorClassName=TMultiplexor
   Name=Macro320.Multiplexor_vec2
   Type=Мультиплексор */

locals->v116_out_0_[0] = locals->vyprv45_out_0_;
locals->v116_out_0_[1] = locals->vyprv33_out_0_;

/* Index=129
   UID=129
   GeneratorClassName=TMultiplexor
   Name=Macro303.Multiplexor_vec2
   Type=Мультиплексор */

locals->v129_out_0_[0] = locals->v117_out_0_[0];
locals->v129_out_0_[1] = locals->v117_out_0_[1];
locals->v129_out_0_[2] = locals->v117_out_0_[2];
locals->v129_out_0_[3] = locals->v116_out_0_[0];
locals->v129_out_0_[4] = locals->v116_out_0_[1];
locals->v129_out_0_[5] = locals->vyprv29_out_0_;

/* Index=130
   UID=130
   GeneratorClassName=TSumSrc
   Name=Macro324.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v87_out_0_ = (1)*state_vars->vyprv55_out_0_+(-1)*state_vars->vyprv52_out_0_;

/* Index=131
   UID=131
   GeneratorClassName=TExtrapolator
   Name=Macro324.DisExtrapolator1
   Type=Экстраполятор */

tmp1 = state_vars->vyprv131_loct_+step;
if( (action==f_InitState) ){
state_vars->vyprv131_out_0_ = locals->v87_out_0_;
};
if(  (action==f_GoodStep)  ){
if(tmp1>=consts->vyprv131_tau_){
if(consts->vyprv131_tau_>0){tmp1 = fmod(tmp1,consts->vyprv131_tau_);}else{tmp1=0;};
state_vars->vyprv131_out_0_ = locals->v87_out_0_;
};
state_vars->vyprv131_loct_ = tmp1;
};

/* Index=132
   UID=132
   GeneratorClassName=TMulDbl
   Name=Macro324.Mul_oper1
   Type=Перемножитель */

locals->v87_out_0_ = state_vars->vyprv131_out_0_*locals->v54_out_0_;

/* Index=133
   UID=133
   GeneratorClassName=TKx
   Name=Macro324.kx
   Type=Усилитель */

locals->v105_out_0_ = consts->vyprv133_a_*locals->v87_out_0_;

/* Index=134
   UID=134
   GeneratorClassName=TSumSrc
   Name=Macro320.Add_oper1
   Type=Сумматор */

locals->v134_out_0_ = (1)*consts->vyprv5_a_+(1)*locals->v105_out_0_;

/* Index=135
   UID=135
   GeneratorClassName=TSumSrc
   Name=Macro303.Add_oper1
   Type=Сумматор */

locals->v105_out_0_ = (1)*locals->v134_out_0_+(1)*locals->v69_out_0_;

/* Index=136
   UID=136
   GeneratorClassName=TLAECoefs
   Name=Macro303.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<6;j++){
i=locals->v129_out_0_[j]-1;
if(i!=state_vars->vyprv136_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv136_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<6;j++){
if(locals->v127_out_0_[j]!=state_vars->vyprv136_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv136_coefs_[j]=locals->v127_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv29_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v105_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,6);
for(j=0;j<6;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv136_idxs_[j*1],locals->v127_out_0_[j*1],1);
};
};

/* Index=137
   UID=137
   GeneratorClassName=TLAECoefs
   Name=Macro277.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<2;j++){
i=locals->v112_out_0_[j]-1;
if(i!=state_vars->vyprv137_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv137_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<2;j++){
if(consts->vyprv12_a_[j]!=state_vars->vyprv137_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv137_coefs_[j]=consts->vyprv12_a_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv13_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,state_vars->v10_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,2);
for(j=0;j<2;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv137_idxs_[j*1],consts->vyprv12_a_[j*1],1);
};
};

/* Index=138
   UID=138
   GeneratorClassName=TMultiplexor
   Name=Macro279.Multiplexor_vec3
   Type=Мультиплексор */

locals->v115_out_0_[0] = locals->v103_out_0_[0];
locals->v115_out_0_[1] = locals->v103_out_0_[1];
locals->v115_out_0_[2] = consts->vyprv16_a_;

/* Index=139
   UID=139
   GeneratorClassName=TKx
   Name=Macro279.kx
   Type=Усилитель */

for(i=0;i<3;i++){
locals->v121_out_0_[i] = consts->vyprv139_a_*locals->v115_out_0_[i];

/* Index=140
   UID=140
   GeneratorClassName=TVectorAdd
   Name=Macro279.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v69_out_0_ = 0;
for(i = 0;i<3;i++){
locals->v69_out_0_ = (1)*locals->v115_out_0_[i]+locals->v69_out_0_;
};

/* Index=141
   UID=141
   GeneratorClassName=TMultiplexor
   Name=Macro279.Multiplexor_vec1
   Type=Мультиплексор */

locals->v124_out_0_[0] = locals->v121_out_0_[0];
locals->v124_out_0_[1] = locals->v121_out_0_[1];
locals->v124_out_0_[2] = locals->v121_out_0_[2];
locals->v124_out_0_[3] = locals->v69_out_0_;

/* Index=142
   UID=142
   GeneratorClassName=TMultiplexor
   Name=Macro279.Multiplexor_vec2
   Type=Мультиплексор */

locals->v129_out_0_[0] = locals->v107_out_0_[0];
locals->v129_out_0_[1] = locals->v107_out_0_[1];
locals->v129_out_0_[2] = locals->vyprv41_out_0_;
locals->v129_out_0_[3] = locals->vyprv14_out_0_;

/* Index=143
   UID=143
   GeneratorClassName=TMultiplexor
   Name=Macro282.Multiplexor_vec1
   Type=Мультиплексор */

locals->v115_out_0_[0] = locals->v58_out_0_[0];
locals->v115_out_0_[1] = locals->v58_out_0_[1];
locals->v115_out_0_[2] = locals->v57_out_0_;

/* Index=144
   UID=144
   GeneratorClassName=TDivDbl
   Name=Macro317.Div_oper1
   Type=Делитель */

locals->v57_out_0_ = step/consts->vyprv44_a_;
if(!isfinite(locals->v57_out_0_)) locals->v57_out_0_ = 0;

/* Index=145
   UID=145
   GeneratorClassName=TMultiplexor
   Name=Macro319.Multiplexor_vec1
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v54_out_0_;
locals->v58_out_0_[1] = locals->v57_out_0_;

/* Index=146
   UID=146
   GeneratorClassName=TMultiplexor
   Name=Macro311.Multiplexor_vec3
   Type=Мультиплексор */

locals->v125_out_0_[0] = locals->v115_out_0_[0];
locals->v125_out_0_[1] = locals->v115_out_0_[1];
locals->v125_out_0_[2] = locals->v115_out_0_[2];
locals->v125_out_0_[3] = locals->v58_out_0_[0];
locals->v125_out_0_[4] = locals->v58_out_0_[1];

/* Index=147
   UID=147
   GeneratorClassName=TKx
   Name=Macro311.kx
   Type=Усилитель */

for(i=0;i<5;i++){
locals->v127_out_0_[i] = consts->vyprv147_a_*locals->v125_out_0_[i];

/* Index=148
   UID=148
   GeneratorClassName=TVectorAdd
   Name=Macro311.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v54_out_0_ = 0;
for(i = 0;i<5;i++){
locals->v54_out_0_ = (1)*locals->v125_out_0_[i]+locals->v54_out_0_;
};

/* Index=149
   UID=149
   GeneratorClassName=TMultiplexor
   Name=Macro311.Multiplexor_vec1
   Type=Мультиплексор */

locals->v149_out_0_[0] = locals->v127_out_0_[0];
locals->v149_out_0_[1] = locals->v127_out_0_[1];
locals->v149_out_0_[2] = locals->v127_out_0_[2];
locals->v149_out_0_[3] = locals->v127_out_0_[3];
locals->v149_out_0_[4] = locals->v127_out_0_[4];
locals->v149_out_0_[5] = locals->v54_out_0_;

/* Index=150
   UID=150
   GeneratorClassName=TMultiplexor
   Name=Macro282.Multiplexor_vec2
   Type=Мультиплексор */

locals->v117_out_0_[0] = locals->v49_out_0_[0];
locals->v117_out_0_[1] = locals->v49_out_0_[1];
locals->v117_out_0_[2] = locals->vyprv4_out_0_;

/* Index=151
   UID=151
   GeneratorClassName=TMultiplexor
   Name=Macro319.Multiplexor_vec2
   Type=Мультиплексор */

locals->v49_out_0_[0] = locals->vyprv29_out_0_;
locals->v49_out_0_[1] = locals->vyprv45_out_0_;

/* Index=152
   UID=152
   GeneratorClassName=TMultiplexor
   Name=Macro311.Multiplexor_vec2
   Type=Мультиплексор */

locals->v152_out_0_[0] = locals->v117_out_0_[0];
locals->v152_out_0_[1] = locals->v117_out_0_[1];
locals->v152_out_0_[2] = locals->v117_out_0_[2];
locals->v152_out_0_[3] = locals->v49_out_0_[0];
locals->v152_out_0_[4] = locals->v49_out_0_[1];
locals->v152_out_0_[5] = locals->vyprv33_out_0_;

/* Index=153
   UID=153
   GeneratorClassName=TLAEResult
   Name=Macro318.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv45_out_0_-1;
state_vars->vyprv153_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=154
   UID=154
   GeneratorClassName=TSumSrc
   Name=Macro317.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v54_out_0_ = (1)*state_vars->vyprv55_out_0_+(-1)*state_vars->vyprv153_out_0_;

/* Index=155
   UID=155
   GeneratorClassName=TMulDbl
   Name=Macro317.Mul_oper1
   Type=Перемножитель */

locals->v69_out_0_ = locals->v54_out_0_*locals->v57_out_0_;

/* Index=156
   UID=156
   GeneratorClassName=TSumSrc
   Name=Macro282.Add_oper1
   Type=Сумматор */

locals->v54_out_0_ = (1)*locals->v71_out_0_+(1)*consts->vyprv32_a_;

/* Index=157
   UID=157
   GeneratorClassName=TSumSrc
   Name=Macro279.Add_oper1
   Type=Сумматор */

locals->v71_out_0_ = (1)*consts->vyprv15_a_+(1)*locals->v80_out_0_;

/* Index=158
   UID=158
   GeneratorClassName=TLAECoefs
   Name=Macro279.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<4;j++){
i=locals->v129_out_0_[j]-1;
if(i!=state_vars->vyprv158_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv158_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<4;j++){
if(locals->v124_out_0_[j]!=state_vars->vyprv158_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv158_coefs_[j]=locals->v124_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv14_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v71_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,4);
for(j=0;j<4;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv158_idxs_[j*1],locals->v124_out_0_[j*1],1);
};
};

/* Index=159
   UID=159
   GeneratorClassName=TLAECoefs
   Name=Macro251.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<4;j++){
i=locals->v78_out_0_[j]-1;
if(i!=state_vars->vyprv159_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv159_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<4;j++){
if(locals->v63_out_0_[j]!=state_vars->vyprv159_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv159_coefs_[j]=locals->v63_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv4_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v113_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,4);
for(j=0;j<4;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv159_idxs_[j*1],locals->v63_out_0_[j*1],1);
};
};

/* Index=160
   UID=160
   GeneratorClassName=TDivDbl
   Name=Macro313.Div_oper1
   Type=Делитель */

locals->v71_out_0_ = step/consts->vyprv39_a_;
if(!isfinite(locals->v71_out_0_)) locals->v71_out_0_ = 0;

/* Index=161
   UID=161
   GeneratorClassName=TMultiplexor
   Name=Macro281.Multiplexor_vec1
   Type=Мультиплексор */

locals->v63_out_0_[0] = consts->vyprv1_a_;
locals->v63_out_0_[1] = locals->v60_out_0_[0];
locals->v63_out_0_[2] = locals->v60_out_0_[1];

/* Index=162
   UID=162
   GeneratorClassName=TLAEResult
   Name=Macro316.laeresult
   Type=Результаты СЛАУ */

j=locals->vyprv42_out_0_-1;
state_vars->vyprv162_out_0_=lae_solver_getresult(locals->solverid_lsolver1_,j);

/* Index=163
   UID=163
   GeneratorClassName=TSumSrc
   Name=Macro313.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v80_out_0_ = (1)*state_vars->vyprv162_out_0_+(-1)*locals->v50_out_0_;

/* Index=164
   UID=164
   GeneratorClassName=TMulDbl
   Name=Macro313.Mul_oper1
   Type=Перемножитель */

locals->v50_out_0_ = locals->v80_out_0_*locals->v71_out_0_;

/* Index=165
   UID=165
   GeneratorClassName=TMultiplexor
   Name=Macro314.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v53_out_0_;
locals->v58_out_0_[1] = consts->vyprv25_a_;

/* Index=166
   UID=166
   GeneratorClassName=TKx
   Name=Macro314.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v60_out_0_[i] = consts->vyprv166_a_*locals->v58_out_0_[i];

/* Index=167
   UID=167
   GeneratorClassName=TVectorAdd
   Name=Macro314.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v53_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v53_out_0_ = (1)*locals->v58_out_0_[i]+locals->v53_out_0_;
};

/* Index=168
   UID=168
   GeneratorClassName=TMultiplexor
   Name=Macro314.Multiplexor_vec1
   Type=Мультиплексор */

locals->v63_out_0_[0] = locals->v60_out_0_[0];
locals->v63_out_0_[1] = locals->v60_out_0_[1];
locals->v63_out_0_[2] = locals->v53_out_0_;

/* Index=169
   UID=169
   GeneratorClassName=TMultiplexor
   Name=Macro314.Multiplexor_vec2
   Type=Мультиплексор */

locals->v78_out_0_[0] = locals->vyprv22_out_0_;
locals->v78_out_0_[1] = locals->vyprv23_out_0_;
locals->v78_out_0_[2] = locals->vyprv40_out_0_;

/* Index=170
   UID=170
   GeneratorClassName=TMultiplexor
   Name=Macro281.Multiplexor_vec2
   Type=Мультиплексор */

locals->v117_out_0_[0] = locals->vyprv3_out_0_;
locals->v117_out_0_[1] = locals->v93_out_0_[0];
locals->v117_out_0_[2] = locals->v93_out_0_[1];

/* Index=171
   UID=171
   GeneratorClassName=TMultiplexor
   Name=Macro315.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v62_out_0_;
locals->v58_out_0_[1] = consts->vyprv16_a_;

/* Index=172
   UID=172
   GeneratorClassName=TKx
   Name=Macro315.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v60_out_0_[i] = consts->vyprv172_a_*locals->v58_out_0_[i];

/* Index=173
   UID=173
   GeneratorClassName=TVectorAdd
   Name=Macro315.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v53_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v53_out_0_ = (1)*locals->v58_out_0_[i]+locals->v53_out_0_;
};

/* Index=174
   UID=174
   GeneratorClassName=TMultiplexor
   Name=Macro315.Multiplexor_vec1
   Type=Мультиплексор */

locals->v115_out_0_[0] = locals->v60_out_0_[0];
locals->v115_out_0_[1] = locals->v60_out_0_[1];
locals->v115_out_0_[2] = locals->v53_out_0_;

/* Index=175
   UID=175
   GeneratorClassName=TMultiplexor
   Name=Macro315.Multiplexor_vec2
   Type=Мультиплексор */

locals->v117_out_0_[0] = locals->vyprv13_out_0_;
locals->v117_out_0_[1] = locals->vyprv14_out_0_;
locals->v117_out_0_[2] = locals->vyprv41_out_0_;

/* Index=176
   UID=176
   GeneratorClassName=TMultiplexor
   Name=Macro316.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v71_out_0_;
locals->v58_out_0_[1] = consts->vyprv18_a_;

/* Index=177
   UID=177
   GeneratorClassName=TKx
   Name=Macro316.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v60_out_0_[i] = consts->vyprv177_a_*locals->v58_out_0_[i];

/* Index=178
   UID=178
   GeneratorClassName=TVectorAdd
   Name=Macro316.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v53_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v53_out_0_ = (1)*locals->v58_out_0_[i]+locals->v53_out_0_;
};

/* Index=179
   UID=179
   GeneratorClassName=TMultiplexor
   Name=Macro316.Multiplexor_vec1
   Type=Мультиплексор */

locals->v121_out_0_[0] = locals->v60_out_0_[0];
locals->v121_out_0_[1] = locals->v60_out_0_[1];
locals->v121_out_0_[2] = locals->v53_out_0_;

/* Index=180
   UID=180
   GeneratorClassName=TMultiplexor
   Name=Macro316.Multiplexor_vec2
   Type=Мультиплексор */

locals->v129_out_0_[0] = locals->vyprv3_out_0_;
locals->v129_out_0_[1] = locals->vyprv4_out_0_;
locals->v129_out_0_[2] = locals->vyprv42_out_0_;

/* Index=181
   UID=181
   GeneratorClassName=TMultiplexor
   Name=Macro281.Multiplexor_vec3
   Type=Мультиплексор */

locals->v60_out_0_[0] = consts->vyprv7_a_;
locals->v60_out_0_[1] = locals->v76_out_0_[0];
locals->v60_out_0_[2] = locals->v76_out_0_[1];

/* Index=182
   UID=182
   GeneratorClassName=TMultiplexor
   Name=Macro318.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = locals->v57_out_0_;
locals->v58_out_0_[1] = consts->vyprv6_a_;

/* Index=183
   UID=183
   GeneratorClassName=TKx
   Name=Macro318.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v60_out_0_[i] = consts->vyprv183_a_*locals->v58_out_0_[i];

/* Index=184
   UID=184
   GeneratorClassName=TVectorAdd
   Name=Macro318.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v53_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v53_out_0_ = (1)*locals->v58_out_0_[i]+locals->v53_out_0_;
};

/* Index=185
   UID=185
   GeneratorClassName=TMultiplexor
   Name=Macro318.Multiplexor_vec1
   Type=Мультиплексор */

locals->v76_out_0_[0] = locals->v60_out_0_[0];
locals->v76_out_0_[1] = locals->v60_out_0_[1];
locals->v76_out_0_[2] = locals->v53_out_0_;

/* Index=186
   UID=186
   GeneratorClassName=TMultiplexor
   Name=Macro318.Multiplexor_vec2
   Type=Мультиплексор */

locals->v186_out_0_[0] = locals->vyprv33_out_0_;
locals->v186_out_0_[1] = locals->vyprv29_out_0_;
locals->v186_out_0_[2] = locals->vyprv45_out_0_;

/* Index=187
   UID=187
   GeneratorClassName=TMultiplexor
   Name=Macro319.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = state_vars->vyprv52_out_0_;
locals->v58_out_0_[1] = state_vars->vyprv153_out_0_;

/* Index=188
   UID=188
   GeneratorClassName=TMultiplexor
   Name=Macro320.Multiplexor_vec3
   Type=Мультиплексор */

locals->v58_out_0_[0] = state_vars->vyprv153_out_0_;
locals->v58_out_0_[1] = state_vars->vyprv55_out_0_;

/* Index=189
   UID=189
   GeneratorClassName=TSumSrc
   Name=Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v53_out_0_ = (1)*state_vars->vyprv55_out_0_+(-1)*state_vars->vyprv52_out_0_;

/* Index=190
   UID=190
   GeneratorClassName=TMultiplexor
   Name=Macro282.Multiplexor_vec3
   Type=Мультиплексор */

locals->v60_out_0_[0] = locals->v59_out_0_[0];
locals->v60_out_0_[1] = locals->v59_out_0_[1];
locals->v60_out_0_[2] = state_vars->vyprv48_out_0_;

/* Index=195
   UID=195
   GeneratorClassName=TSumSrc
   Name=Macro313.Add_oper1
   Type=Сумматор */

locals->v57_out_0_ = (1)*locals->v50_out_0_+(1)*state_vars->vyprv193_out_0_;

/* Index=196
   UID=196
   GeneratorClassName=TSumSrc
   Name=Macro312.Add_oper1
   Type=Сумматор */

locals->v50_out_0_ = (1)*locals->v97_out_0_+(1)*state_vars->vyprv191_out_0_;

/* Index=197
   UID=197
   GeneratorClassName=TSumSrc
   Name=Macro242.Add_oper1
   Type=Сумматор */

locals->v62_out_0_ = (1)*locals->v101_out_0_+(1)*state_vars->vyprv192_out_0_;

/* Index=198
   UID=198
   GeneratorClassName=TSumSrc
   Name=Macro294.Add_oper1
   Type=Сумматор */

locals->v71_out_0_ = (1)*locals->v50_out_0_+(1)*locals->v62_out_0_;

/* Index=199
   UID=199
   GeneratorClassName=TSumSrc
   Name=Macro281.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*locals->v57_out_0_+(1)*locals->v71_out_0_;

/* Index=200
   UID=200
   GeneratorClassName=TKx
   Name=Macro313.kx
   Type=Усилитель */

locals->v71_out_0_ = consts->vyprv200_a_*locals->v57_out_0_;

/* Index=201
   UID=201
   GeneratorClassName=TSumSrc
   Name=Macro316.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*consts->vyprv17_a_+(1)*locals->v71_out_0_;

/* Index=202
   UID=202
   GeneratorClassName=TLAECoefs
   Name=Macro316.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<3;j++){
i=locals->v129_out_0_[j]-1;
if(i!=state_vars->vyprv202_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv202_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->v121_out_0_[j]!=state_vars->vyprv202_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv202_coefs_[j]=locals->v121_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv42_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v80_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv202_idxs_[j*1],locals->v121_out_0_[j*1],1);
};
};

/* Index=203
   UID=203
   GeneratorClassName=TSumSrc
   Name=Macro317.Add_oper1
   Type=Сумматор */

locals->v71_out_0_ = (1)*locals->v69_out_0_+(1)*state_vars->vyprv194_out_0_;

/* Index=204
   UID=204
   GeneratorClassName=TSumSrc
   Name=Macro318.Add_oper1
   Type=Сумматор */

locals->v69_out_0_ = (1)*consts->vyprv5_a_+(1)*locals->v71_out_0_;

/* Index=205
   UID=205
   GeneratorClassName=TLAECoefs
   Name=Macro318.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<3;j++){
i=locals->v186_out_0_[j]-1;
if(i!=state_vars->vyprv205_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv205_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->v76_out_0_[j]!=state_vars->vyprv205_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv205_coefs_[j]=locals->v76_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv45_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v69_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv205_idxs_[j*1],locals->v76_out_0_[j*1],1);
};
};

/* Index=206
   UID=206
   GeneratorClassName=TKx
   Name=Macro312.kx
   Type=Усилитель */

locals->v69_out_0_ = consts->vyprv206_a_*locals->v50_out_0_;

/* Index=207
   UID=207
   GeneratorClassName=TSumSrc
   Name=Macro315.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*consts->vyprv15_a_+(1)*locals->v69_out_0_;

/* Index=208
   UID=208
   GeneratorClassName=TLAECoefs
   Name=Macro315.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<3;j++){
i=locals->v117_out_0_[j]-1;
if(i!=state_vars->vyprv208_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv208_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->v115_out_0_[j]!=state_vars->vyprv208_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv208_coefs_[j]=locals->v115_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv41_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v80_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv208_idxs_[j*1],locals->v115_out_0_[j*1],1);
};
};

/* Index=209
   UID=209
   GeneratorClassName=TKx
   Name=Macro242.kx
   Type=Усилитель */

locals->v69_out_0_ = consts->vyprv209_a_*locals->v62_out_0_;

/* Index=210
   UID=210
   GeneratorClassName=TSumSrc
   Name=Macro314.Add_oper1
   Type=Сумматор */

locals->v80_out_0_ = (1)*consts->vyprv24_a_+(1)*locals->v69_out_0_;

/* Index=211
   UID=211
   GeneratorClassName=TKx
   Name=Macro317.kx
   Type=Усилитель */

locals->v69_out_0_ = consts->vyprv211_a_*locals->v71_out_0_;

/* Index=212
   UID=212
   GeneratorClassName=TSumSrc
   Name=Macro319.Add_oper1
   Type=Сумматор */

locals->v97_out_0_ = (1)*locals->v87_out_0_+(1)*locals->v69_out_0_;

/* Index=213
   UID=213
   GeneratorClassName=TLAECoefs
   Name=Macro314.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<3;j++){
i=locals->v78_out_0_[j]-1;
if(i!=state_vars->vyprv213_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv213_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->v63_out_0_[j]!=state_vars->vyprv213_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv213_coefs_[j]=locals->v63_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv40_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v80_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv213_idxs_[j*1],locals->v63_out_0_[j*1],1);
};
};

/* Index=214
   UID=214
   GeneratorClassName=TSumSrc
   Name=Macro311.Add_oper1
   Type=Сумматор */

locals->v69_out_0_ = (1)*locals->v97_out_0_+(1)*locals->v54_out_0_;

/* Index=215
   UID=215
   GeneratorClassName=TLAECoefs
   Name=Macro311.equkoefs
   Type=Коэффициенты линейного уравнения */

for(j=0;j<6;j++){
i=locals->v152_out_0_[j]-1;
if(i!=state_vars->vyprv215_idxs_[j]){
lae_solver_setneedsort(locals->solverid_lsolver1_,1);
lae_solver_setneedlu(locals->solverid_lsolver1_,1);
};
state_vars->vyprv215_idxs_[j]=i;
};
tmp_f_1=0;
for(j=0;j<6;j++){
if(locals->v149_out_0_[j]!=state_vars->vyprv215_coefs_[j]){
tmp_f_1=1;
};
state_vars->vyprv215_coefs_[j]=locals->v149_out_0_[j];
};
lae_solver_setneedlu(locals->solverid_lsolver1_,(tmp_f_1||(lae_solver_getneedlu(locals->solverid_lsolver1_)>0)));
c=locals->vyprv33_out_0_-1;
lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v69_out_0_);
if(tmp_f_1){
lae_solver_setmatrixmemo(locals->solverid_lsolver1_,c,6);
for(j=0;j<6;j++){
lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->vyprv215_idxs_[j*1],locals->v149_out_0_[j*1],1);
};
};
if(lae_solver_getlastptr(locals->solverid_lsolver1_)==(&state_vars->vyprv215_coefs_)){
c=0;
if(lae_solver_getneedlu(locals->solverid_lsolver1_)){
c=lae_solver_init(locals->solverid_lsolver1_);
if(c==0) c=lae_solver_ludecomp(locals->solverid_lsolver1_);
};
lae_solver_setneedsort(locals->solverid_lsolver1_,0);
lae_solver_setneedlu(locals->solverid_lsolver1_,0);
if(c==0) c=lae_solver_solve(locals->solverid_lsolver1_);
};

/* Index=217
   UID=217
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

if(isfinite(locals->v53_out_0_))
out_0 = locals->v53_out_0_;
};break;
};

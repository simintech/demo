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
lae_solver_finalization(solver_data);
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{
/* Index=37
   UID=37
   GeneratorClassName=TLAECoefs
   Name=ac_Ground2.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_&&(((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getfirstptr(locals->solverid_lsolver1_)==(&state_vars->my_diagramv84_coefs_))){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_begininit(locals->solverid_lsolver1_);
};

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=Входной контакт s3 */

state_vars->my_diagramv0_out_0_ = input_0_1_;

/* Index=17
   UID=17
   GeneratorClassName=TLAEResult
   Name=ac_node2.laeresult
   Type=Результаты СЛАУ */

j=locals->my_diagramv7_out_0_-1;
if((locals->first_call_flag_lsolver1_)||(action == f_RestoreOuts)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setinitresult(locals->solverid_lsolver1_,j,state_vars->my_diagramv17_out_0_);
}else{
tmp1 = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getresult(locals->solverid_lsolver1_,j);
if((action==f_UpdateOuts)&&(solver_data->NLocalIter <= solver_data->MaxLoopIt)){
  if(solver_data->NLocalIter > 0){
    if(fabs(tmp1)>0){
      tmp2=fabs((state_vars->my_diagramv17_out_0_-tmp1)/tmp1);
    }else{
      tmp2=fabs(state_vars->my_diagramv17_out_0_-tmp1);
    };
    if(tmp2>0.0001) {solver_data->fNeedIter=1;};
  }else{
    solver_data->fNeedIter=1;
  };
};
state_vars->my_diagramv17_out_0_=tmp1;
};

/* Index=18
   UID=18
   GeneratorClassName=TLAEResult
   Name=ac_node3.laeresult
   Type=Результаты СЛАУ */

j=locals->my_diagramv10_out_0_-1;
if((locals->first_call_flag_lsolver1_)||(action == f_RestoreOuts)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setinitresult(locals->solverid_lsolver1_,j,state_vars->my_diagramv18_out_0_);
}else{
tmp1 = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getresult(locals->solverid_lsolver1_,j);
if((action==f_UpdateOuts)&&(solver_data->NLocalIter <= solver_data->MaxLoopIt)){
  if(solver_data->NLocalIter > 0){
    if(fabs(tmp1)>0){
      tmp2=fabs((state_vars->my_diagramv18_out_0_-tmp1)/tmp1);
    }else{
      tmp2=fabs(state_vars->my_diagramv18_out_0_-tmp1);
    };
    if(tmp2>0.0001) {solver_data->fNeedIter=1;};
  }else{
    solver_data->fNeedIter=1;
  };
};
state_vars->my_diagramv18_out_0_=tmp1;
};

/* Index=19
   UID=19
   GeneratorClassName=TSumSrc
   Name=ac_L2.Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v19_out_0_ = (1)*state_vars->my_diagramv17_out_0_+(-1)*state_vars->my_diagramv18_out_0_;

/* Index=20
   UID=20
   GeneratorClassName=TDivDbl
   Name=ac_L2.Div_oper3
   Type=Делитель */

if(consts->my_diagramv6_a_!=0){
locals->v20_out_0_ = step/consts->my_diagramv6_a_;
if(!isfinite(locals->v20_out_0_)) {locals->v20_out_0_ = 0;};
if(locals->v20_out_0_ > 1E20){
locals->v20_out_0_ = 1E20;};
if(locals->v20_out_0_ < -1E20){
locals->v20_out_0_ = -1E20;};
} else {
if(step > 0){
locals->v20_out_0_ = 1E20;
} else {
if(step < 0){
locals->v20_out_0_ = -1E20;
} else {
locals->v20_out_0_ = 0;
};
};
};

/* Index=21
   UID=21
   GeneratorClassName=TMulDbl
   Name=ac_L2.Mul_oper2
   Type=Перемножитель */

locals->v21_out_0_ = locals->v19_out_0_*locals->v20_out_0_;

/* Index=22
   UID=22
   GeneratorClassName=TMultiplexor
   Name=ac_node2.Multiplexor_vec5
   Type=Мультиплексор */

locals->v22_out_0_[0] = consts->my_diagramv4_a_;
locals->v22_out_0_[1] = locals->v20_out_0_;

/* Index=23
   UID=23
   GeneratorClassName=TKx
   Name=ac_node2.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v23_out_0_[i] = consts->my_diagramv23_a_*locals->v22_out_0_[i];

/* Index=24
   UID=24
   GeneratorClassName=TVectorAdd
   Name=ac_node2.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v19_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v19_out_0_ = (1)*locals->v22_out_0_[i]+locals->v19_out_0_;
};

/* Index=25
   UID=25
   GeneratorClassName=TMultiplexor
   Name=ac_node2.Multiplexor_vec1
   Type=Мультиплексор */

locals->v25_out_0_[0] = locals->v23_out_0_[0];
locals->v25_out_0_[1] = locals->v23_out_0_[1];
locals->v25_out_0_[2] = locals->v19_out_0_;

/* Index=26
   UID=26
   GeneratorClassName=TKx
   Name=ac_Uc2.kx1
   Type=Усилитель */

locals->v19_out_0_ = consts->my_diagramv26_a_*state_vars->my_diagramv0_out_0_;

/* Index=27
   UID=27
   GeneratorClassName=TMultiplexor
   Name=ac_node2.Multiplexor_vec4
   Type=Мультиплексор */

locals->v27_out_0_[0] = locals->my_diagramv3_out_0_;
locals->v27_out_0_[1] = locals->my_diagramv10_out_0_;
locals->v27_out_0_[2] = locals->my_diagramv7_out_0_;

/* Index=28
   UID=28
   GeneratorClassName=TLAEResult
   Name=ac_node5.laeresult
   Type=Результаты СЛАУ */

j=locals->my_diagramv14_out_0_-1;
if((locals->first_call_flag_lsolver1_)||(action == f_RestoreOuts)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setinitresult(locals->solverid_lsolver1_,j,state_vars->my_diagramv28_out_0_);
}else{
tmp1 = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getresult(locals->solverid_lsolver1_,j);
if((action==f_UpdateOuts)&&(solver_data->NLocalIter <= solver_data->MaxLoopIt)){
  if(solver_data->NLocalIter > 0){
    if(fabs(tmp1)>0){
      tmp2=fabs((state_vars->my_diagramv28_out_0_-tmp1)/tmp1);
    }else{
      tmp2=fabs(state_vars->my_diagramv28_out_0_-tmp1);
    };
    if(tmp2>0.0001) {solver_data->fNeedIter=1;};
  }else{
    solver_data->fNeedIter=1;
  };
};
state_vars->my_diagramv28_out_0_=tmp1;
};

/* Index=29
   UID=29
   GeneratorClassName=TSumSrc
   Name=ac_PV3.Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v29_out_0_ = (1)*state_vars->my_diagramv28_out_0_+(-1)*consts->my_diagramv1_a_;

/* Index=30
   UID=30
   GeneratorClassName=TSumSrc
   Name=ac_C2.Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v30_out_0_ = (1)*consts->my_diagramv1_a_+(-1)*state_vars->my_diagramv28_out_0_;

/* Index=31
   UID=31
   GeneratorClassName=TDivDbl
   Name=ac_C2.Div_oper4
   Type=Делитель */

if(step!=0){
locals->v31_out_0_ = consts->my_diagramv9_a_/step;
if(!isfinite(locals->v31_out_0_)) {locals->v31_out_0_ = 0;};
if(locals->v31_out_0_ > 1E20){
locals->v31_out_0_ = 1E20;};
if(locals->v31_out_0_ < -1E20){
locals->v31_out_0_ = -1E20;};
} else {
if(consts->my_diagramv9_a_ > 0){
locals->v31_out_0_ = 1E20;
} else {
if(consts->my_diagramv9_a_ < 0){
locals->v31_out_0_ = -1E20;
} else {
locals->v31_out_0_ = 0;
};
};
};

/* Index=32
   UID=32
   GeneratorClassName=TMultiplexor
   Name=ac_node3.Multiplexor_vec5
   Type=Мультиплексор */

locals->v22_out_0_[0] = locals->v20_out_0_;
locals->v22_out_0_[1] = consts->my_diagramv12_a_;

/* Index=33
   UID=33
   GeneratorClassName=TKx
   Name=ac_node3.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v23_out_0_[i] = consts->my_diagramv33_a_*locals->v22_out_0_[i];

/* Index=34
   UID=34
   GeneratorClassName=TVectorAdd
   Name=ac_node3.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v20_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v20_out_0_ = (1)*locals->v22_out_0_[i]+locals->v20_out_0_;
};

/* Index=35
   UID=35
   GeneratorClassName=TMultiplexor
   Name=ac_node3.Multiplexor_vec1
   Type=Мультиплексор */

locals->v35_out_0_[0] = locals->v23_out_0_[0];
locals->v35_out_0_[1] = locals->v23_out_0_[1];
locals->v35_out_0_[2] = locals->v20_out_0_;

/* Index=36
   UID=36
   GeneratorClassName=TMultiplexor
   Name=ac_node3.Multiplexor_vec4
   Type=Мультиплексор */

locals->v36_out_0_[0] = locals->my_diagramv7_out_0_;
locals->v36_out_0_[1] = locals->my_diagramv13_out_0_;
locals->v36_out_0_[2] = locals->my_diagramv10_out_0_;

/* Index=37
   UID=37
   GeneratorClassName=TLAECoefs
   Name=ac_Ground2.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_){
c=locals->my_diagramv3_out_0_-1;
state_vars->my_diagramv37_idxs_ = locals->my_diagramv3_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_initrow(locals->solverid_lsolver1_,c,1,&state_vars->my_diagramv37_idxs_);
};
i=locals->my_diagramv3_out_0_-1;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (i!=state_vars->my_diagramv37_idxs_)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedsort(locals->solverid_lsolver1_);
state_vars->my_diagramv37_idxs_=i;
};
tmp_f_1=0;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (consts->my_diagramv2_a_!=state_vars->my_diagramv37_coefs_)){
tmp_f_1=1;
if((consts->my_diagramv2_a_==0)||(state_vars->my_diagramv37_coefs_==0)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setzeroschange(locals->solverid_lsolver1_);
};
state_vars->my_diagramv37_coefs_=consts->my_diagramv2_a_;
};
if(tmp_f_1){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedlu(locals->solverid_lsolver1_);
};
c=locals->my_diagramv3_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setrightcol(locals->solverid_lsolver1_,c,consts->my_diagramv1_a_);
if(tmp_f_1){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_resetrow(locals->solverid_lsolver1_,c,1);
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->my_diagramv37_idxs_,consts->my_diagramv2_a_,1,0);
};

/* Index=38
   UID=38
   GeneratorClassName=TKx
   Name=ac_Uc2.ac_CCCS1.kx
   Type=Усилитель */

locals->v20_out_0_ = consts->my_diagramv38_a_*locals->v19_out_0_;

/* Index=39
   UID=39
   GeneratorClassName=TLAEResult
   Name=ac_node4.laeresult
   Type=Результаты СЛАУ */

j=locals->my_diagramv13_out_0_-1;
if((locals->first_call_flag_lsolver1_)||(action == f_RestoreOuts)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setinitresult(locals->solverid_lsolver1_,j,state_vars->my_diagramv39_out_0_);
}else{
tmp1 = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getresult(locals->solverid_lsolver1_,j);
if((action==f_UpdateOuts)&&(solver_data->NLocalIter <= solver_data->MaxLoopIt)){
  if(solver_data->NLocalIter > 0){
    if(fabs(tmp1)>0){
      tmp2=fabs((state_vars->my_diagramv39_out_0_-tmp1)/tmp1);
    }else{
      tmp2=fabs(state_vars->my_diagramv39_out_0_-tmp1);
    };
    if(tmp2>0.0001) {solver_data->fNeedIter=1;};
  }else{
    solver_data->fNeedIter=1;
  };
};
state_vars->my_diagramv39_out_0_=tmp1;
};

/* Index=40
   UID=40
   GeneratorClassName=TSumSrc
   Name=ac_PA2.Sub_oper1
   Type=Сравнивающее устройтсво */

locals->v20_out_0_ = (1)*state_vars->my_diagramv18_out_0_+(-1)*state_vars->my_diagramv39_out_0_;

/* Index=41
   UID=41
   GeneratorClassName=TMulDbl
   Name=ac_PA2.Mul_oper1
   Type=Перемножитель */

locals->v41_out_0_ = locals->v20_out_0_*consts->my_diagramv12_a_;

/* Index=42
   UID=42
   GeneratorClassName=TSumSrc
   Name=VD2.Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v20_out_0_ = (1)*state_vars->my_diagramv39_out_0_+(-1)*state_vars->my_diagramv28_out_0_;

/* Index=43
   UID=43
   GeneratorClassName=TLimit
   Name=VD2.Limiter4
   Type=Ограничитель */

if(locals->v20_out_0_>consts->my_diagramv43_b_){
locals->v43_out_0_ = consts->my_diagramv43_b_;
}else{
if(locals->v20_out_0_<consts->my_diagramv43_a_){
locals->v43_out_0_ = consts->my_diagramv43_a_;
}else{
locals->v43_out_0_ = locals->v20_out_0_;
};
};
if(!isfinite(locals->v43_out_0_)) {locals->v43_out_0_ = 0;};

/* Index=44
   UID=44
   GeneratorClassName=TExp
   Name=VD2.Exponenta_func5
   Type=Экспоненциальная функция */

locals->v20_out_0_ = consts->my_diagramv44_a_*exp(consts->my_diagramv44_b_*locals->v43_out_0_+consts->my_diagramv44_c_);
if(!isfinite(locals->v20_out_0_)) {locals->v20_out_0_ = 0;};

/* Index=45
   UID=45
   GeneratorClassName=TSign
   Name=VD2.Sign_oper5
   Type=Знак */

if(locals->v43_out_0_ > 0){
locals->v45_out_0_ = 1;}else{
if(locals->v43_out_0_ < 0){
locals->v45_out_0_ = -1;}else{
locals->v45_out_0_ = 0;}
};

/* Index=46
   UID=46
   GeneratorClassName=TMulDbl
   Name=VD2.Mul_oper4
   Type=Перемножитель */

locals->v46_out_0_ = locals->v20_out_0_*locals->v45_out_0_;

/* Index=47
   UID=47
   GeneratorClassName=TKx
   Name=VD2.Linear_func6
   Type=Усилитель */

locals->v47_out_0_ = consts->my_diagramv47_a_*locals->v46_out_0_;

/* Index=48
   UID=48
   GeneratorClassName=TLinearFunc
   Name=VD2.Linear_func7
   Type=Линейная функция */

locals->v46_out_0_ = consts->my_diagramv48_a_+(locals->v47_out_0_*consts->my_diagramv48_b_);

/* Index=49
   UID=49
   GeneratorClassName=TMultiplexor
   Name=ac_node4.Multiplexor_vec5
   Type=Мультиплексор */

locals->v22_out_0_[0] = consts->my_diagramv12_a_;
locals->v22_out_0_[1] = locals->v46_out_0_;

/* Index=50
   UID=50
   GeneratorClassName=TKx
   Name=ac_node4.kx
   Type=Усилитель */

for(i=0;i<2;i++){
locals->v23_out_0_[i] = consts->my_diagramv50_a_*locals->v22_out_0_[i];

/* Index=51
   UID=51
   GeneratorClassName=TVectorAdd
   Name=ac_node4.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v51_out_0_ = 0;
for(i = 0;i<2;i++){
locals->v51_out_0_ = (1)*locals->v22_out_0_[i]+locals->v51_out_0_;
};

/* Index=52
   UID=52
   GeneratorClassName=TMultiplexor
   Name=ac_node4.Multiplexor_vec1
   Type=Мультиплексор */

locals->v52_out_0_[0] = locals->v23_out_0_[0];
locals->v52_out_0_[1] = locals->v23_out_0_[1];
locals->v52_out_0_[2] = locals->v51_out_0_;

/* Index=53
   UID=53
   GeneratorClassName=TLinearFunc
   Name=VD2.Linear_func5
   Type=Линейная функция */

locals->v51_out_0_ = consts->my_diagramv53_a_+(locals->v20_out_0_*consts->my_diagramv53_b_);

/* Index=54
   UID=54
   GeneratorClassName=TMulDbl
   Name=VD2.Mul_oper3
   Type=Перемножитель */

locals->v20_out_0_ = locals->v43_out_0_*locals->v47_out_0_;

/* Index=55
   UID=55
   GeneratorClassName=TSumSrc
   Name=VD2.Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v43_out_0_ = (1)*locals->v51_out_0_+(-1)*locals->v20_out_0_;

/* Index=56
   UID=56
   GeneratorClassName=TMulDbl
   Name=VD2.Mul_oper5
   Type=Перемножитель */

locals->v20_out_0_ = locals->v43_out_0_*locals->v45_out_0_;

/* Index=57
   UID=57
   GeneratorClassName=TKx
   Name=VD2.kx3
   Type=Усилитель */

locals->v43_out_0_ = consts->my_diagramv57_a_*locals->v20_out_0_;

/* Index=58
   UID=58
   GeneratorClassName=TSumSrc
   Name=ac_node4.Add_oper1
   Type=Сумматор */

locals->v45_out_0_ = (1)*locals->v43_out_0_+(1)*consts->my_diagramv11_a_;

/* Index=59
   UID=59
   GeneratorClassName=TMultiplexor
   Name=ac_node4.Multiplexor_vec4
   Type=Мультиплексор */

locals->v59_out_0_[0] = locals->my_diagramv10_out_0_;
locals->v59_out_0_[1] = locals->my_diagramv14_out_0_;
locals->v59_out_0_[2] = locals->my_diagramv13_out_0_;

/* Index=60
   UID=60
   GeneratorClassName=TLAECoefs
   Name=ac_node4.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_){
c=locals->my_diagramv13_out_0_-1;
for(j=0;j<3;j++){
state_vars->my_diagramv60_idxs_[j] = locals->v59_out_0_[j*1]-1;
};
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_initrow(locals->solverid_lsolver1_,c,3,&state_vars->my_diagramv60_idxs_);
};
for(j=0;j<3;j++){
i=locals->v59_out_0_[j]-1;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (i!=state_vars->my_diagramv60_idxs_[j])){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedsort(locals->solverid_lsolver1_);
state_vars->my_diagramv60_idxs_[j]=i;
};
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (locals->v52_out_0_[j]!=state_vars->my_diagramv60_coefs_[j])){
tmp_f_1=1;
if((locals->v52_out_0_[j]==0)||(state_vars->my_diagramv60_coefs_[j]==0)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setzeroschange(locals->solverid_lsolver1_);
};
state_vars->my_diagramv60_coefs_[j]=locals->v52_out_0_[j];
};
};
if(tmp_f_1){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedlu(locals->solverid_lsolver1_);
};
c=locals->my_diagramv13_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v45_out_0_);
if(tmp_f_1){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_resetrow(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->my_diagramv60_idxs_[j*1],locals->v52_out_0_[j*1],1,j);
};
};

/* Index=61
   UID=61
   GeneratorClassName=TSumSrc
   Name=ac_PV2.Sub_oper2
   Type=Сравнивающее устройтсво */

locals->v43_out_0_ = (1)*state_vars->my_diagramv39_out_0_+(-1)*consts->my_diagramv1_a_;

/* Index=62
   UID=62
   GeneratorClassName=TMultiplexor
   Name=ac_node5.Multiplexor_vec5
   Type=Мультиплексор */

locals->v52_out_0_[0] = locals->v46_out_0_;
locals->v52_out_0_[1] = locals->v31_out_0_;
locals->v52_out_0_[2] = consts->my_diagramv16_a_;

/* Index=63
   UID=63
   GeneratorClassName=TKx
   Name=ac_node5.kx
   Type=Усилитель */

for(i=0;i<3;i++){
locals->v63_out_0_[i] = consts->my_diagramv63_a_*locals->v52_out_0_[i];

/* Index=64
   UID=64
   GeneratorClassName=TVectorAdd
   Name=ac_node5.VecAdd_oper2
   Type=Суммирование элементов вектора */

};
locals->v31_out_0_ = 0;
for(i = 0;i<3;i++){
locals->v31_out_0_ = (1)*locals->v52_out_0_[i]+locals->v31_out_0_;
};

/* Index=65
   UID=65
   GeneratorClassName=TMultiplexor
   Name=ac_node5.Multiplexor_vec1
   Type=Мультиплексор */

locals->v65_out_0_[0] = locals->v63_out_0_[0];
locals->v65_out_0_[1] = locals->v63_out_0_[1];
locals->v65_out_0_[2] = locals->v63_out_0_[2];
locals->v65_out_0_[3] = locals->v31_out_0_;

/* Index=66
   UID=66
   GeneratorClassName=TMultiplexor
   Name=ac_node5.Multiplexor_vec4
   Type=Мультиплексор */

locals->v66_out_0_[0] = locals->my_diagramv13_out_0_;
locals->v66_out_0_[1] = locals->my_diagramv3_out_0_;
locals->v66_out_0_[2] = locals->my_diagramv3_out_0_;
locals->v66_out_0_[3] = locals->my_diagramv14_out_0_;

/* Index=73
   UID=73
   GeneratorClassName=TSumSrc
   Name=ac_L2.Add_oper4
   Type=Сумматор */

locals->v31_out_0_ = (0)*state_vars->my_diagramv72_out_0_+(-0.333333333333333)*state_vars->my_diagramv70_out_0_+(1.33333333333333)*state_vars->my_diagramv71_out_0_;

/* Index=74
   UID=74
   GeneratorClassName=TSumSrc
   Name=ac_node3.Add_oper1
   Type=Сумматор */

locals->v45_out_0_ = (1)*consts->my_diagramv11_a_+(1)*locals->v31_out_0_;

/* Index=75
   UID=75
   GeneratorClassName=TLAECoefs
   Name=ac_node3.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_){
c=locals->my_diagramv10_out_0_-1;
for(j=0;j<3;j++){
state_vars->my_diagramv75_idxs_[j] = locals->v36_out_0_[j*1]-1;
};
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_initrow(locals->solverid_lsolver1_,c,3,&state_vars->my_diagramv75_idxs_);
};
for(j=0;j<3;j++){
i=locals->v36_out_0_[j]-1;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (i!=state_vars->my_diagramv75_idxs_[j])){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedsort(locals->solverid_lsolver1_);
state_vars->my_diagramv75_idxs_[j]=i;
};
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (locals->v35_out_0_[j]!=state_vars->my_diagramv75_coefs_[j])){
tmp_f_1=1;
if((locals->v35_out_0_[j]==0)||(state_vars->my_diagramv75_coefs_[j]==0)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setzeroschange(locals->solverid_lsolver1_);
};
state_vars->my_diagramv75_coefs_[j]=locals->v35_out_0_[j];
};
};
if(tmp_f_1){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedlu(locals->solverid_lsolver1_);
};
c=locals->my_diagramv10_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v45_out_0_);
if(tmp_f_1){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_resetrow(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->my_diagramv75_idxs_[j*1],locals->v35_out_0_[j*1],1,j);
};
};

/* Index=76
   UID=76
   GeneratorClassName=TSumSrc
   Name=ac_L2.Add_oper5
   Type=Сумматор */

locals->v45_out_0_ = (1)*locals->v21_out_0_+(1)*locals->v31_out_0_;

/* Index=77
   UID=77
   GeneratorClassName=TSumSrc
   Name=ac_C2.Add_oper3
   Type=Сумматор */

locals->v21_out_0_ = (0)*state_vars->my_diagramv67_out_0_+(0.0025)*state_vars->my_diagramv68_out_0_+(-0.01)*state_vars->my_diagramv69_out_0_;

/* Index=78
   UID=78
   GeneratorClassName=TDivDbl
   Name=ac_C2.Div_oper3
   Type=Делитель */

if(step!=0){
locals->v46_out_0_ = locals->v21_out_0_/step;
if(!isfinite(locals->v46_out_0_)) {locals->v46_out_0_ = 0;};
if(locals->v46_out_0_ > 1E20){
locals->v46_out_0_ = 1E20;};
if(locals->v46_out_0_ < -1E20){
locals->v46_out_0_ = -1E20;};
} else {
if(locals->v21_out_0_ > 0){
locals->v46_out_0_ = 1E20;
} else {
if(locals->v21_out_0_ < 0){
locals->v46_out_0_ = -1E20;
} else {
locals->v46_out_0_ = 0;
};
};
};

/* Index=79
   UID=79
   GeneratorClassName=TSumSrc
   Name=ac_node5.Add_oper1
   Type=Сумматор */

locals->v21_out_0_ = (1)*locals->v46_out_0_+(1)*consts->my_diagramv15_a_+(1)*locals->v20_out_0_;

/* Index=80
   UID=80
   GeneratorClassName=TLAECoefs
   Name=ac_node5.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_){
c=locals->my_diagramv14_out_0_-1;
for(j=0;j<4;j++){
state_vars->my_diagramv80_idxs_[j] = locals->v66_out_0_[j*1]-1;
};
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_initrow(locals->solverid_lsolver1_,c,4,&state_vars->my_diagramv80_idxs_);
};
for(j=0;j<4;j++){
i=locals->v66_out_0_[j]-1;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (i!=state_vars->my_diagramv80_idxs_[j])){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedsort(locals->solverid_lsolver1_);
state_vars->my_diagramv80_idxs_[j]=i;
};
};
tmp_f_1=0;
for(j=0;j<4;j++){
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (locals->v65_out_0_[j]!=state_vars->my_diagramv80_coefs_[j])){
tmp_f_1=1;
if((locals->v65_out_0_[j]==0)||(state_vars->my_diagramv80_coefs_[j]==0)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setzeroschange(locals->solverid_lsolver1_);
};
state_vars->my_diagramv80_coefs_[j]=locals->v65_out_0_[j];
};
};
if(tmp_f_1){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedlu(locals->solverid_lsolver1_);
};
c=locals->my_diagramv14_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v21_out_0_);
if(tmp_f_1){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_resetrow(locals->solverid_lsolver1_,c,4);
for(j=0;j<4;j++){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->my_diagramv80_idxs_[j*1],locals->v65_out_0_[j*1],1,j);
};
};

/* Index=81
   UID=81
   GeneratorClassName=TKx
   Name=ac_C2.kx
   Type=Усилитель */

locals->v20_out_0_ = consts->my_diagramv81_a_*locals->v46_out_0_;

/* Index=82
   UID=82
   GeneratorClassName=TKx
   Name=ac_L2.kx
   Type=Усилитель */

locals->v20_out_0_ = consts->my_diagramv82_a_*locals->v31_out_0_;

/* Index=83
   UID=83
   GeneratorClassName=TSumSrc
   Name=ac_node2.Add_oper1
   Type=Сумматор */

locals->v21_out_0_ = (1)*locals->v20_out_0_+(1)*locals->v19_out_0_;

/* Index=84
   UID=84
   GeneratorClassName=TLAECoefs
   Name=ac_node2.equkoefs
   Type=Коэффициенты линейного уравнения */

if(locals->first_call_flag_lsolver1_){
c=locals->my_diagramv7_out_0_-1;
for(j=0;j<3;j++){
state_vars->my_diagramv84_idxs_[j] = locals->v27_out_0_[j*1]-1;
};
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_initrow(locals->solverid_lsolver1_,c,3,&state_vars->my_diagramv84_idxs_);
};
for(j=0;j<3;j++){
i=locals->v27_out_0_[j]-1;
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (i!=state_vars->my_diagramv84_idxs_[j])){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedsort(locals->solverid_lsolver1_);
state_vars->my_diagramv84_idxs_[j]=i;
};
};
tmp_f_1=0;
for(j=0;j<3;j++){
if(locals->first_call_flag_lsolver1_ || (action == f_RestoreOuts) || (locals->v25_out_0_[j]!=state_vars->my_diagramv84_coefs_[j])){
tmp_f_1=1;
if((locals->v25_out_0_[j]==0)||(state_vars->my_diagramv84_coefs_[j]==0)){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setzeroschange(locals->solverid_lsolver1_);
};
state_vars->my_diagramv84_coefs_[j]=locals->v25_out_0_[j];
};
};
if(tmp_f_1){
 ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setneedlu(locals->solverid_lsolver1_);
};
c=locals->my_diagramv7_out_0_-1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setrightcol(locals->solverid_lsolver1_,c,locals->v21_out_0_);
if(tmp_f_1){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_resetrow(locals->solverid_lsolver1_,c,3);
for(j=0;j<3;j++){
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_fillitem(locals->solverid_lsolver1_,c,state_vars->my_diagramv84_idxs_[j*1],locals->v25_out_0_[j*1],1,j);
};
};
if(((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getlastptr(locals->solverid_lsolver1_)==(&state_vars->my_diagramv84_coefs_)){
 if(locals->first_call_flag_lsolver1_){
  ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_endinit(locals->solverid_lsolver1_);
 };
 c = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_ludecomp(locals->solverid_lsolver1_);
if(action != f_RestoreOuts){
 if(c==0) {c = ((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_solve(locals->solverid_lsolver1_);};
};
};
locals->first_call_flag_lsolver1_ = 0;

/* Index=85
   UID=85
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

if(isfinite(locals->v41_out_0_)){
out_0_1_ = locals->v41_out_0_;
};

/* Index=86
   UID=86
   GeneratorClassName=TOutPin
   Name=OutPin2
   Type=Выходной контакт s3 */

if(isfinite(locals->v43_out_0_)){
out_0_2_ = locals->v43_out_0_;
};

/* Index=87
   UID=87
   GeneratorClassName=TOutPin
   Name=OutPin3
   Type=Выходной контакт s3 */

if(isfinite(locals->v29_out_0_)){
out_0_3_ = locals->v29_out_0_;
};
};break;
};

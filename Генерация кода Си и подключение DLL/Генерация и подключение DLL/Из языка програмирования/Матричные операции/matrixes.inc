/*  ------------------------------------------------------
     Routine name:  matrixes
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
/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock13
   Type=язык программировани€ */

v1_sfinal__0:
;
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

for(i = 0;i<2;i++){
state_vars->matrixesv0_out_0_[i] = ((input_0[i]));
};
/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock13
   Type=язык программировани€ */

state_vars->v1m_[((2) - 1)*2 + (1) - 1]=(7);
for(i=0;i<4;i++){
state_vars->v1v1___func_res_1_[i]=state_vars->v1m_[i]*(2);
};
for(i=0;i<4;i++){
state_vars->v1v1___func_res_4_[i]=state_vars->v1m_[i]*(3);
};
for(i=0;i<4;i++){
state_vars->v1v1___func_res_7_[i]=state_vars->v1v1___func_res_1_[i]+state_vars->v1v1___func_res_4_[i];
};
matrix_transp(&state_vars->v1v1___func_res_10_,&state_vars->matrixesv0_out_0_,1,2);
matrix_mul(&state_vars->v1v1___func_res_11_,&state_vars->v1v1___func_res_7_,2,2,&state_vars->v1v1___func_res_10_,2,1);
for(i=0;i<2;i++){
state_vars->v1zz_[i]=state_vars->v1v1___func_res_11_[i];
};
for(i=0;i<2;i++){
state_vars->v1v1___func_res_15_[i]=state_vars->v1zz_[i];
};
lsolve(&state_vars->v1v1___func_res_18_,&state_vars->v1m_,2,2,&state_vars->v1v1___func_res_15_,1,2,&state_vars->v1v1___func_data_a_temp_18_, &state_vars->v1v1___func_data_indx_18_, &state_vars->v1v1___func_data_swap_18_, &state_vars->v1v1___func_data_a_vv_18_);
for(i=0;i<2;i++){
state_vars->matrixesv1_out_0_[i]=state_vars->v1v1___func_res_18_[i];
};
det(&state_vars->v1v1___func_res_22_,&state_vars->v1m_,2,2,&state_vars->v1v1___func_data_a_temp_22_, &state_vars->v1v1___func_data_indx_22_, &state_vars->v1v1___func_data_swap_22_, &state_vars->v1v1___func_data_a_vv_22_);
state_vars->matrixesv1_out_1_=state_vars->v1v1___func_res_22_;
v1___4:
;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=¬ыходной контакт s3 */

for(i = 0;i<2;i++){
if(isfinite(state_vars->matrixesv1_out_0_[i])){
out_0[i] = state_vars->matrixesv1_out_0_[i];
};
};

/* Index=3
   UID=3
   GeneratorClassName=TOutPin
   Name=OutPin8
   Type=¬ыходной контакт s3 */

if(isfinite(state_vars->matrixesv1_out_1_)){
out_1 = state_vars->matrixesv1_out_1_;
};
};break;
};

/*  ------------------------------------------------------
     Routine name:  sin
     Description:   
     Project file:  sins_computer_local_test.prt

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


/* Index=12
   UID=12
   GeneratorClassName=TDisIntegrator
   Name=Macro3.DisIntegrator1
   Type=Дискретный интегратор */

for(i=0;i<4;i++){
tmp1 = state_vars->sinv12_loct_[i]+step;
if(tmp1>=consts->sinv12_tau_[i]){
if(consts->sinv12_tau_[i]>0){tmp1 = fmod(tmp1,consts->sinv12_tau_[i]);}else{tmp1=0;};
if(action==f_GoodStep){
state_vars->sinv12_out_0_[i] = (state_vars->sinv19_out_0_[i]*consts->sinv12_k_[i]*consts->sinv12_tau_[i])+state_vars->sinv12_out_0_[i];
};
};
if(action==f_GoodStep) {state_vars->sinv12_loct_[i] = tmp1;};
if((solver_data->fPreciseSrcStep)&&(consts->sinv12_tau_[i]>0)){
 solver_data->fsetstep = 1;
 solver_data->newstep  = fmin(solver_data->newstep,fmin(fmax(consts->sinv12_tau_[i]-tmp1,0),consts->sinv12_tau_[i]));
};
};

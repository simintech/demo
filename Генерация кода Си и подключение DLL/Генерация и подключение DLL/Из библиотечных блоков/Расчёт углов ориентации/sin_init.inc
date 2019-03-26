/*  ------------------------------------------------------
     Routine name:  sin
     Description:   
     Project file:  sins_computer_local_test.prt

------------------------------------------------------  */

int i;
int j;
int c;
ret = 0;
memcpy(&state_vars->sinv1_out_0_,&sinv1_out_0_default,sizeof(sinv1_out_0_default));
memcpy(&state_vars->sinv2_out_0_,&sinv2_out_0_default,sizeof(sinv2_out_0_default));
memcpy(&state_vars->sinv3_out_0_,&sinv3_out_0_default,sizeof(sinv3_out_0_default));
memcpy(&state_vars->sinv5_out_0_,&sinv5_out_0_default,sizeof(sinv5_out_0_default));
memcpy(&state_vars->sinv12_loct_,&sinv12_loct_default,sizeof(sinv12_loct_default));
memcpy(&state_vars->sinv12_out_0_,&sinv12_out_0_default,sizeof(sinv12_out_0_default));
memcpy(&state_vars->sinv15_out_0_,&sinv15_out_0_default,sizeof(sinv15_out_0_default));
memcpy(&state_vars->sinv16_out_0_,&sinv16_out_0_default,sizeof(sinv16_out_0_default));
memcpy(&state_vars->sinv19_out_0_,&sinv19_out_0_default,sizeof(sinv19_out_0_default));
memcpy(&state_vars->v5cosr_,&v5cosr_default,sizeof(v5cosr_default));
memcpy(&state_vars->v5sinr_,&v5sinr_default,sizeof(v5sinr_default));
memcpy(&state_vars->v5cosp_,&v5cosp_default,sizeof(v5cosp_default));
memcpy(&state_vars->v5sinp_,&v5sinp_default,sizeof(v5sinp_default));
memcpy(&state_vars->v5cosy_,&v5cosy_default,sizeof(v5cosy_default));
memcpy(&state_vars->v5siny_,&v5siny_default,sizeof(v5siny_default));
memcpy(&state_vars->v5w_,&v5w_default,sizeof(v5w_default));
memcpy(&state_vars->v5x_,&v5x_default,sizeof(v5x_default));
memcpy(&state_vars->v5y_,&v5y_default,sizeof(v5y_default));
memcpy(&state_vars->v5z_,&v5z_default,sizeof(v5z_default));
memcpy(&state_vars->v5v5_sinit__func_res_0_,&v5v5_sinit__func_res_0_default,sizeof(v5v5_sinit__func_res_0_default));
memcpy(&state_vars->v5v5_sinit__func_res_3_,&v5v5_sinit__func_res_3_default,sizeof(v5v5_sinit__func_res_3_default));
memcpy(&state_vars->v15mod_q_,&v15mod_q_default,sizeof(v15mod_q_default));
memcpy(&state_vars->v15q0_,&v15q0_default,sizeof(v15q0_default));
memcpy(&state_vars->v15q1_,&v15q1_default,sizeof(v15q1_default));
memcpy(&state_vars->v15q2_,&v15q2_default,sizeof(v15q2_default));
memcpy(&state_vars->v15q3_,&v15q3_default,sizeof(v15q3_default));
memcpy(&state_vars->v15v15_sinit__func_res_0_,&v15v15_sinit__func_res_0_default,sizeof(v15v15_sinit__func_res_0_default));
memcpy(&state_vars->v15v15_sinit__func_res_3_,&v15v15_sinit__func_res_3_default,sizeof(v15v15_sinit__func_res_3_default));
memcpy(&state_vars->v16q0_,&v16q0_default,sizeof(v16q0_default));
memcpy(&state_vars->v16q1_,&v16q1_default,sizeof(v16q1_default));
memcpy(&state_vars->v16q2_,&v16q2_default,sizeof(v16q2_default));
memcpy(&state_vars->v16q3_,&v16q3_default,sizeof(v16q3_default));
memcpy(&state_vars->v16v16_sinit__func_res_0_,&v16v16_sinit__func_res_0_default,sizeof(v16v16_sinit__func_res_0_default));
memcpy(&state_vars->v16v16_sinit__func_res_3_,&v16v16_sinit__func_res_3_default,sizeof(v16v16_sinit__func_res_3_default));
memcpy(&state_vars->v19v19_sinit__func_res_0_,&v19v19_sinit__func_res_0_default,sizeof(v19v19_sinit__func_res_0_default));
memcpy(&state_vars->v19v19_sinit__func_res_3_,&v19v19_sinit__func_res_3_default,sizeof(v19v19_sinit__func_res_3_default));
memcpy(&consts->sinv0_a_,&sinv0_a_default,sizeof(sinv0_a_default));
memcpy(&consts->sinv4_a_,&sinv4_a_default,sizeof(sinv4_a_default));
memcpy(&consts->sinv8_a_,&sinv8_a_default,sizeof(sinv8_a_default));
memcpy(&consts->sinv8_w_,&sinv8_w_default,sizeof(sinv8_w_default));
memcpy(&consts->sinv8_f_,&sinv8_f_default,sizeof(sinv8_f_default));
memcpy(&consts->sinv9_a_,&sinv9_a_default,sizeof(sinv9_a_default));
memcpy(&consts->sinv12_tau_,&sinv12_tau_default,sizeof(sinv12_tau_default));
memcpy(&consts->sinv12_k_,&sinv12_k_default,sizeof(sinv12_k_default));
memcpy(&consts->sinv17_a_,&sinv17_a_default,sizeof(sinv17_a_default));
memcpy(&locals->v8_out_0_,&v8_out_0_default,sizeof(v8_out_0_default));
for(i=0;i<3;i++){
state_vars->v5v5_sinit__func_res_0_[i]=(0);
};
for(i=0;i<4;i++){
state_vars->v5v5_sinit__func_res_3_[i]=(0);
};
for(i=0;i<4;i++){
state_vars->sinv5_out_0_[i]=state_vars->v5v5_sinit__func_res_3_[i];
};
v5_sinit__2:
;
for(i=0;i<4;i++){
state_vars->v15v15_sinit__func_res_0_[i]=(0);
};
for(i=0;i<3;i++){
state_vars->v15v15_sinit__func_res_3_[i]=(0);
};
for(i=0;i<3;i++){
state_vars->sinv15_out_0_[i]=state_vars->v15v15_sinit__func_res_3_[i];
};
v15_sinit__2:
;
for(i=0;i<4;i++){
state_vars->v16v16_sinit__func_res_0_[i]=(0);
};
for(i=0;i<9;i++){
state_vars->v16v16_sinit__func_res_3_[i]=(0);
};
for(i=0;i<9;i++){
state_vars->sinv16_out_0_[i]=state_vars->v16v16_sinit__func_res_3_[i];
};
v16_sinit__2:
;
for(i=0;i<8;i++){
state_vars->v19v19_sinit__func_res_0_[i]=(0);
};
for(i=0;i<4;i++){
state_vars->v19v19_sinit__func_res_3_[i]=(0);
};
for(i=0;i<4;i++){
state_vars->sinv19_out_0_[i]=state_vars->v19v19_sinit__func_res_3_[i];
};
v19_sinit__2:
;

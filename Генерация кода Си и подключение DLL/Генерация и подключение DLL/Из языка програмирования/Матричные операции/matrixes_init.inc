/*  ------------------------------------------------------
     Routine name:  matrixes
     Description:   
     Project file:  Шаблон.prt

------------------------------------------------------  */

int i;
int j;
int c;
ret = 0;
memcpy(&state_vars->matrixesv0_out_0_,&matrixesv0_out_0_default,sizeof(matrixesv0_out_0_default));
memcpy(&state_vars->matrixesv1_out_0_,&matrixesv1_out_0_default,sizeof(matrixesv1_out_0_default));
memcpy(&state_vars->matrixesv1_out_1_,&matrixesv1_out_1_default,sizeof(matrixesv1_out_1_default));
memcpy(&state_vars->v1m_,&v1m_default,sizeof(v1m_default));
memcpy(&state_vars->v1zz_,&v1zz_default,sizeof(v1zz_default));
memcpy(&state_vars->v1v1_sinit__func_res_0_,&v1v1_sinit__func_res_0_default,sizeof(v1v1_sinit__func_res_0_default));
memcpy(&state_vars->v1v1_sinit__func_res_2_,&v1v1_sinit__func_res_2_default,sizeof(v1v1_sinit__func_res_2_default));
memcpy(&state_vars->v1v1_sinit__func_res_4_,&v1v1_sinit__func_res_4_default,sizeof(v1v1_sinit__func_res_4_default));
memcpy(&state_vars->v1v1___func_res_1_,&v1v1___func_res_1_default,sizeof(v1v1___func_res_1_default));
memcpy(&state_vars->v1v1___func_res_4_,&v1v1___func_res_4_default,sizeof(v1v1___func_res_4_default));
memcpy(&state_vars->v1v1___func_res_7_,&v1v1___func_res_7_default,sizeof(v1v1___func_res_7_default));
memcpy(&state_vars->v1v1___func_res_10_,&v1v1___func_res_10_default,sizeof(v1v1___func_res_10_default));
memcpy(&state_vars->v1v1___func_res_11_,&v1v1___func_res_11_default,sizeof(v1v1___func_res_11_default));
memcpy(&state_vars->v1v1___func_res_15_,&v1v1___func_res_15_default,sizeof(v1v1___func_res_15_default));
memcpy(&state_vars->v1v1___func_res_18_,&v1v1___func_res_18_default,sizeof(v1v1___func_res_18_default));
memcpy(&state_vars->v1v1___func_data_a_temp_18_,&v1v1___func_data_a_temp_18_default,sizeof(v1v1___func_data_a_temp_18_default));
memcpy(&state_vars->v1v1___func_data_a_vv_18_,&v1v1___func_data_a_vv_18_default,sizeof(v1v1___func_data_a_vv_18_default));
memcpy(&state_vars->v1v1___func_res_22_,&v1v1___func_res_22_default,sizeof(v1v1___func_res_22_default));
memcpy(&state_vars->v1v1___func_data_a_temp_22_,&v1v1___func_data_a_temp_22_default,sizeof(v1v1___func_data_a_temp_22_default));
memcpy(&state_vars->v1v1___func_data_a_vv_22_,&v1v1___func_data_a_vv_22_default,sizeof(v1v1___func_data_a_vv_22_default));
memcpy(&state_vars->v1v1___func_data_indx_18_,&v1v1___func_data_indx_18_default,sizeof(v1v1___func_data_indx_18_default));
memcpy(&state_vars->v1v1___func_data_swap_18_,&v1v1___func_data_swap_18_default,sizeof(v1v1___func_data_swap_18_default));
memcpy(&state_vars->v1v1___func_data_indx_22_,&v1v1___func_data_indx_22_default,sizeof(v1v1___func_data_indx_22_default));
memcpy(&state_vars->v1v1___func_data_swap_22_,&v1v1___func_data_swap_22_default,sizeof(v1v1___func_data_swap_22_default));
state_vars->v1v1_sinit__func_res_0_[0]=(1);
state_vars->v1v1_sinit__func_res_0_[1]=(0.5);
state_vars->v1v1_sinit__func_res_2_[0]=(-0.5);
state_vars->v1v1_sinit__func_res_2_[1]=(1);
c = 0;
for(i=0;i<2;i++){
state_vars->v1v1_sinit__func_res_4_[c]=state_vars->v1v1_sinit__func_res_0_[i];
c = c + 1;
};
for(i=0;i<2;i++){
state_vars->v1v1_sinit__func_res_4_[c]=state_vars->v1v1_sinit__func_res_2_[i];
c = c + 1;
};
for(i=0;i<4;i++){
state_vars->v1m_[i]=state_vars->v1v1_sinit__func_res_4_[i];
};
v1_sinit__3:
;

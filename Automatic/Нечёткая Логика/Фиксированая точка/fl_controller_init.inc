/*  ------------------------------------------------------
     Routine name:  fl_controller
     Description:   
     Project file:  fl_controller_fp.prt

------------------------------------------------------  */

int i;
int c;
ret = 0;
memcpy(&state_vars->fl_controllerv11_out_0_,&fl_controllerv11_out_0_default,sizeof(fl_controllerv11_out_0_default));
memcpy(&state_vars->fl_controllerv12_out_0_,&fl_controllerv12_out_0_default,sizeof(fl_controllerv12_out_0_default));
memcpy(&consts->fl_controllerv0_a_,&fl_controllerv0_a_default,sizeof(fl_controllerv0_a_default));
memcpy(&consts->fl_controllerv1_a_,&fl_controllerv1_a_default,sizeof(fl_controllerv1_a_default));
memcpy(&consts->fl_controllerv2_a_,&fl_controllerv2_a_default,sizeof(fl_controllerv2_a_default));
memcpy(&consts->fl_controllerv3_a_,&fl_controllerv3_a_default,sizeof(fl_controllerv3_a_default));
memcpy(&consts->fl_controllerv4_a_,&fl_controllerv4_a_default,sizeof(fl_controllerv4_a_default));
memcpy(&consts->fl_controllerv5_a_,&fl_controllerv5_a_default,sizeof(fl_controllerv5_a_default));
memcpy(&consts->fl_controllerv6_a_,&fl_controllerv6_a_default,sizeof(fl_controllerv6_a_default));
memcpy(&consts->fl_controllerv7_a_,&fl_controllerv7_a_default,sizeof(fl_controllerv7_a_default));
memcpy(&consts->fl_controllerv8_a_,&fl_controllerv8_a_default,sizeof(fl_controllerv8_a_default));
memcpy(&consts->fl_controllerv9_a_,&fl_controllerv9_a_default,sizeof(fl_controllerv9_a_default));
memcpy(&consts->fl_controllerv10_a_,&fl_controllerv10_a_default,sizeof(fl_controllerv10_a_default));
memcpy(&consts->fl_controllerv13_a_,&fl_controllerv13_a_default,sizeof(fl_controllerv13_a_default));
memcpy(&consts->fl_controllerv14_a_,&fl_controllerv14_a_default,sizeof(fl_controllerv14_a_default));
memcpy(&consts->fl_controllerv15_m_,&fl_controllerv15_m_default,sizeof(fl_controllerv15_m_default));
memcpy(&consts->fl_controllerv19_a0_,&fl_controllerv19_a0_default,sizeof(fl_controllerv19_a0_default));
memcpy(&consts->fl_controllerv19_a1_,&fl_controllerv19_a1_default,sizeof(fl_controllerv19_a1_default));
memcpy(&consts->fl_controllerv19_a2_,&fl_controllerv19_a2_default,sizeof(fl_controllerv19_a2_default));
memcpy(&consts->fl_controllerv20_a0_,&fl_controllerv20_a0_default,sizeof(fl_controllerv20_a0_default));
memcpy(&consts->fl_controllerv20_a1_,&fl_controllerv20_a1_default,sizeof(fl_controllerv20_a1_default));
memcpy(&consts->fl_controllerv20_a2_,&fl_controllerv20_a2_default,sizeof(fl_controllerv20_a2_default));
memcpy(&consts->fl_controllerv22_a_,&fl_controllerv22_a_default,sizeof(fl_controllerv22_a_default));
memcpy(&consts->fl_controllerv22_b_,&fl_controllerv22_b_default,sizeof(fl_controllerv22_b_default));
memcpy(&consts->fl_controllerv22_c_,&fl_controllerv22_c_default,sizeof(fl_controllerv22_c_default));
memcpy(&consts->fl_controllerv24_k_,&fl_controllerv24_k_default,sizeof(fl_controllerv24_k_default));
memcpy(&consts->fl_controllerv26_k_,&fl_controllerv26_k_default,sizeof(fl_controllerv26_k_default));
memcpy(&consts->fl_controllerv31_m_,&fl_controllerv31_m_default,sizeof(fl_controllerv31_m_default));
memcpy(&consts->fl_controllerv35_a0_,&fl_controllerv35_a0_default,sizeof(fl_controllerv35_a0_default));
memcpy(&consts->fl_controllerv35_a1_,&fl_controllerv35_a1_default,sizeof(fl_controllerv35_a1_default));
memcpy(&consts->fl_controllerv35_a2_,&fl_controllerv35_a2_default,sizeof(fl_controllerv35_a2_default));
memcpy(&consts->fl_controllerv36_a0_,&fl_controllerv36_a0_default,sizeof(fl_controllerv36_a0_default));
memcpy(&consts->fl_controllerv36_a1_,&fl_controllerv36_a1_default,sizeof(fl_controllerv36_a1_default));
memcpy(&consts->fl_controllerv36_a2_,&fl_controllerv36_a2_default,sizeof(fl_controllerv36_a2_default));
memcpy(&consts->fl_controllerv38_a_,&fl_controllerv38_a_default,sizeof(fl_controllerv38_a_default));
memcpy(&consts->fl_controllerv38_b_,&fl_controllerv38_b_default,sizeof(fl_controllerv38_b_default));
memcpy(&consts->fl_controllerv38_c_,&fl_controllerv38_c_default,sizeof(fl_controllerv38_c_default));
memcpy(&consts->fl_controllerv40_k_,&fl_controllerv40_k_default,sizeof(fl_controllerv40_k_default));
memcpy(&consts->fl_controllerv42_k_,&fl_controllerv42_k_default,sizeof(fl_controllerv42_k_default));
v56_sinit__1:
;

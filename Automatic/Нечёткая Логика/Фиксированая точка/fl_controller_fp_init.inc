/*  ------------------------------------------------------
     Routine name:  fl_controller_fp
     Description:   
     Project file:  fl_controller_fp.prt

------------------------------------------------------  */

int i;
int c;
ret = 0;
memcpy(&state_vars->fl_controller_fpv11_out_0_,&fl_controller_fpv11_out_0_default,sizeof(fl_controller_fpv11_out_0_default));
memcpy(&state_vars->fl_controller_fpv12_out_0_,&fl_controller_fpv12_out_0_default,sizeof(fl_controller_fpv12_out_0_default));
memcpy(&consts->fl_controller_fpv0_a_,&fl_controller_fpv0_a_default,sizeof(fl_controller_fpv0_a_default));
memcpy(&consts->fl_controller_fpv1_a_,&fl_controller_fpv1_a_default,sizeof(fl_controller_fpv1_a_default));
memcpy(&consts->fl_controller_fpv2_a_,&fl_controller_fpv2_a_default,sizeof(fl_controller_fpv2_a_default));
memcpy(&consts->fl_controller_fpv3_a_,&fl_controller_fpv3_a_default,sizeof(fl_controller_fpv3_a_default));
memcpy(&consts->fl_controller_fpv4_a_,&fl_controller_fpv4_a_default,sizeof(fl_controller_fpv4_a_default));
memcpy(&consts->fl_controller_fpv5_a_,&fl_controller_fpv5_a_default,sizeof(fl_controller_fpv5_a_default));
memcpy(&consts->fl_controller_fpv6_a_,&fl_controller_fpv6_a_default,sizeof(fl_controller_fpv6_a_default));
memcpy(&consts->fl_controller_fpv7_a_,&fl_controller_fpv7_a_default,sizeof(fl_controller_fpv7_a_default));
memcpy(&consts->fl_controller_fpv8_a_,&fl_controller_fpv8_a_default,sizeof(fl_controller_fpv8_a_default));
memcpy(&consts->fl_controller_fpv9_a_,&fl_controller_fpv9_a_default,sizeof(fl_controller_fpv9_a_default));
memcpy(&consts->fl_controller_fpv10_a_,&fl_controller_fpv10_a_default,sizeof(fl_controller_fpv10_a_default));
memcpy(&consts->fl_controller_fpv13_a_,&fl_controller_fpv13_a_default,sizeof(fl_controller_fpv13_a_default));
memcpy(&consts->fl_controller_fpv14_a_,&fl_controller_fpv14_a_default,sizeof(fl_controller_fpv14_a_default));
memcpy(&consts->fl_controller_fpv15_m_,&fl_controller_fpv15_m_default,sizeof(fl_controller_fpv15_m_default));
memcpy(&consts->fl_controller_fpv19_a0_,&fl_controller_fpv19_a0_default,sizeof(fl_controller_fpv19_a0_default));
memcpy(&consts->fl_controller_fpv19_a1_,&fl_controller_fpv19_a1_default,sizeof(fl_controller_fpv19_a1_default));
memcpy(&consts->fl_controller_fpv19_a2_,&fl_controller_fpv19_a2_default,sizeof(fl_controller_fpv19_a2_default));
memcpy(&consts->fl_controller_fpv20_a0_,&fl_controller_fpv20_a0_default,sizeof(fl_controller_fpv20_a0_default));
memcpy(&consts->fl_controller_fpv20_a1_,&fl_controller_fpv20_a1_default,sizeof(fl_controller_fpv20_a1_default));
memcpy(&consts->fl_controller_fpv20_a2_,&fl_controller_fpv20_a2_default,sizeof(fl_controller_fpv20_a2_default));
memcpy(&consts->fl_controller_fpv22_a_,&fl_controller_fpv22_a_default,sizeof(fl_controller_fpv22_a_default));
memcpy(&consts->fl_controller_fpv22_b_,&fl_controller_fpv22_b_default,sizeof(fl_controller_fpv22_b_default));
memcpy(&consts->fl_controller_fpv22_c_,&fl_controller_fpv22_c_default,sizeof(fl_controller_fpv22_c_default));
memcpy(&consts->fl_controller_fpv24_k_,&fl_controller_fpv24_k_default,sizeof(fl_controller_fpv24_k_default));
memcpy(&consts->fl_controller_fpv26_k_,&fl_controller_fpv26_k_default,sizeof(fl_controller_fpv26_k_default));
memcpy(&consts->fl_controller_fpv31_m_,&fl_controller_fpv31_m_default,sizeof(fl_controller_fpv31_m_default));
memcpy(&consts->fl_controller_fpv35_a0_,&fl_controller_fpv35_a0_default,sizeof(fl_controller_fpv35_a0_default));
memcpy(&consts->fl_controller_fpv35_a1_,&fl_controller_fpv35_a1_default,sizeof(fl_controller_fpv35_a1_default));
memcpy(&consts->fl_controller_fpv35_a2_,&fl_controller_fpv35_a2_default,sizeof(fl_controller_fpv35_a2_default));
memcpy(&consts->fl_controller_fpv36_a0_,&fl_controller_fpv36_a0_default,sizeof(fl_controller_fpv36_a0_default));
memcpy(&consts->fl_controller_fpv36_a1_,&fl_controller_fpv36_a1_default,sizeof(fl_controller_fpv36_a1_default));
memcpy(&consts->fl_controller_fpv36_a2_,&fl_controller_fpv36_a2_default,sizeof(fl_controller_fpv36_a2_default));
memcpy(&consts->fl_controller_fpv38_a_,&fl_controller_fpv38_a_default,sizeof(fl_controller_fpv38_a_default));
memcpy(&consts->fl_controller_fpv38_b_,&fl_controller_fpv38_b_default,sizeof(fl_controller_fpv38_b_default));
memcpy(&consts->fl_controller_fpv38_c_,&fl_controller_fpv38_c_default,sizeof(fl_controller_fpv38_c_default));
memcpy(&consts->fl_controller_fpv40_k_,&fl_controller_fpv40_k_default,sizeof(fl_controller_fpv40_k_default));
memcpy(&consts->fl_controller_fpv42_k_,&fl_controller_fpv42_k_default,sizeof(fl_controller_fpv42_k_default));
v56_sinit__1:
;

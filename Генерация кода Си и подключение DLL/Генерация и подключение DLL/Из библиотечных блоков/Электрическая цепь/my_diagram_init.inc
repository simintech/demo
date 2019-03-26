/*  ------------------------------------------------------
     Routine name:  my_diagram
     Description:   
     Project file:  Шаблон.prt

------------------------------------------------------  */

int i;
int j;
int c;
ret = 0;
memcpy(&state_vars->my_diagramv0_out_0_,&my_diagramv0_out_0_default,sizeof(my_diagramv0_out_0_default));
memcpy(&state_vars->my_diagramv17_out_0_,&my_diagramv17_out_0_default,sizeof(my_diagramv17_out_0_default));
memcpy(&state_vars->my_diagramv18_out_0_,&my_diagramv18_out_0_default,sizeof(my_diagramv18_out_0_default));
memcpy(&state_vars->my_diagramv28_out_0_,&my_diagramv28_out_0_default,sizeof(my_diagramv28_out_0_default));
memcpy(&state_vars->my_diagramv37_coefs_,&my_diagramv37_coefs_default,sizeof(my_diagramv37_coefs_default));
memcpy(&state_vars->my_diagramv39_out_0_,&my_diagramv39_out_0_default,sizeof(my_diagramv39_out_0_default));
memcpy(&state_vars->my_diagramv60_coefs_,&my_diagramv60_coefs_default,sizeof(my_diagramv60_coefs_default));
memcpy(&state_vars->my_diagramv67_out_0_,&my_diagramv67_out_0_default,sizeof(my_diagramv67_out_0_default));
memcpy(&state_vars->my_diagramv68_out_0_,&my_diagramv68_out_0_default,sizeof(my_diagramv68_out_0_default));
memcpy(&state_vars->my_diagramv69_out_0_,&my_diagramv69_out_0_default,sizeof(my_diagramv69_out_0_default));
memcpy(&state_vars->my_diagramv70_out_0_,&my_diagramv70_out_0_default,sizeof(my_diagramv70_out_0_default));
memcpy(&state_vars->my_diagramv71_out_0_,&my_diagramv71_out_0_default,sizeof(my_diagramv71_out_0_default));
memcpy(&state_vars->my_diagramv72_out_0_,&my_diagramv72_out_0_default,sizeof(my_diagramv72_out_0_default));
memcpy(&state_vars->my_diagramv75_coefs_,&my_diagramv75_coefs_default,sizeof(my_diagramv75_coefs_default));
memcpy(&state_vars->my_diagramv80_coefs_,&my_diagramv80_coefs_default,sizeof(my_diagramv80_coefs_default));
memcpy(&state_vars->my_diagramv84_coefs_,&my_diagramv84_coefs_default,sizeof(my_diagramv84_coefs_default));
memcpy(&state_vars->my_diagramv37_idxs_,&my_diagramv37_idxs_default,sizeof(my_diagramv37_idxs_default));
memcpy(&state_vars->my_diagramv60_idxs_,&my_diagramv60_idxs_default,sizeof(my_diagramv60_idxs_default));
memcpy(&state_vars->my_diagramv75_idxs_,&my_diagramv75_idxs_default,sizeof(my_diagramv75_idxs_default));
memcpy(&state_vars->my_diagramv80_idxs_,&my_diagramv80_idxs_default,sizeof(my_diagramv80_idxs_default));
memcpy(&state_vars->my_diagramv84_idxs_,&my_diagramv84_idxs_default,sizeof(my_diagramv84_idxs_default));
memcpy(&consts->my_diagramv1_a_,&my_diagramv1_a_default,sizeof(my_diagramv1_a_default));
memcpy(&consts->my_diagramv2_a_,&my_diagramv2_a_default,sizeof(my_diagramv2_a_default));
memcpy(&consts->my_diagramv4_a_,&my_diagramv4_a_default,sizeof(my_diagramv4_a_default));
memcpy(&consts->my_diagramv6_a_,&my_diagramv6_a_default,sizeof(my_diagramv6_a_default));
memcpy(&consts->my_diagramv9_a_,&my_diagramv9_a_default,sizeof(my_diagramv9_a_default));
memcpy(&consts->my_diagramv11_a_,&my_diagramv11_a_default,sizeof(my_diagramv11_a_default));
memcpy(&consts->my_diagramv12_a_,&my_diagramv12_a_default,sizeof(my_diagramv12_a_default));
memcpy(&consts->my_diagramv15_a_,&my_diagramv15_a_default,sizeof(my_diagramv15_a_default));
memcpy(&consts->my_diagramv16_a_,&my_diagramv16_a_default,sizeof(my_diagramv16_a_default));
memcpy(&consts->my_diagramv23_a_,&my_diagramv23_a_default,sizeof(my_diagramv23_a_default));
memcpy(&consts->my_diagramv26_a_,&my_diagramv26_a_default,sizeof(my_diagramv26_a_default));
memcpy(&consts->my_diagramv33_a_,&my_diagramv33_a_default,sizeof(my_diagramv33_a_default));
memcpy(&consts->my_diagramv38_a_,&my_diagramv38_a_default,sizeof(my_diagramv38_a_default));
memcpy(&consts->my_diagramv43_a_,&my_diagramv43_a_default,sizeof(my_diagramv43_a_default));
memcpy(&consts->my_diagramv43_b_,&my_diagramv43_b_default,sizeof(my_diagramv43_b_default));
memcpy(&consts->my_diagramv44_a_,&my_diagramv44_a_default,sizeof(my_diagramv44_a_default));
memcpy(&consts->my_diagramv44_b_,&my_diagramv44_b_default,sizeof(my_diagramv44_b_default));
memcpy(&consts->my_diagramv44_c_,&my_diagramv44_c_default,sizeof(my_diagramv44_c_default));
memcpy(&consts->my_diagramv47_a_,&my_diagramv47_a_default,sizeof(my_diagramv47_a_default));
memcpy(&consts->my_diagramv48_a_,&my_diagramv48_a_default,sizeof(my_diagramv48_a_default));
memcpy(&consts->my_diagramv48_b_,&my_diagramv48_b_default,sizeof(my_diagramv48_b_default));
memcpy(&consts->my_diagramv50_a_,&my_diagramv50_a_default,sizeof(my_diagramv50_a_default));
memcpy(&consts->my_diagramv53_a_,&my_diagramv53_a_default,sizeof(my_diagramv53_a_default));
memcpy(&consts->my_diagramv53_b_,&my_diagramv53_b_default,sizeof(my_diagramv53_b_default));
memcpy(&consts->my_diagramv57_a_,&my_diagramv57_a_default,sizeof(my_diagramv57_a_default));
memcpy(&consts->my_diagramv63_a_,&my_diagramv63_a_default,sizeof(my_diagramv63_a_default));
memcpy(&consts->my_diagramv81_a_,&my_diagramv81_a_default,sizeof(my_diagramv81_a_default));
memcpy(&consts->my_diagramv82_a_,&my_diagramv82_a_default,sizeof(my_diagramv82_a_default));
lae_solver_initialization(solver_data);
locals->first_call_flag_lsolver1_ = 1;
locals->solverid_lsolver1_=lae_solver_register(solver_data,"lsolver1",solver_data->DefaultLAESolverLibraryName,&locals->sparce_solv_intf_lsolver1_);
locals->laecounter_lsolver1_=((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_getlaecount(locals->solverid_lsolver1_);
locals->laecounter_lsolver1_=locals->laecounter_lsolver1_+1;
locals->my_diagramv3_out_0_=locals->laecounter_lsolver1_;
locals->laecounter_lsolver1_=locals->laecounter_lsolver1_+1;
locals->my_diagramv7_out_0_=locals->laecounter_lsolver1_;
locals->laecounter_lsolver1_=locals->laecounter_lsolver1_+1;
locals->my_diagramv10_out_0_=locals->laecounter_lsolver1_;
locals->laecounter_lsolver1_=locals->laecounter_lsolver1_+1;
locals->my_diagramv13_out_0_=locals->laecounter_lsolver1_;
locals->laecounter_lsolver1_=locals->laecounter_lsolver1_+1;
locals->my_diagramv14_out_0_=locals->laecounter_lsolver1_;
solver_data->fNeedUpdateOutsBeforeGoodStep=1;
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_addlaecount(locals->solverid_lsolver1_,5);
((p_sparce_solver_interface)locals->sparce_solv_intf_lsolver1_)->lae_solver_setselfptr(locals->solverid_lsolver1_,&state_vars->my_diagramv84_coefs_);

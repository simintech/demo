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


/* Index=67
   UID=67
   GeneratorClassName=TStepDelay
   Name=ac_C2.StepDelay6
   Type=Задержка на шаг интегрирования */

if(action==f_GoodStep){
if(isfinite(state_vars->my_diagramv68_out_0_)){
state_vars->my_diagramv67_out_0_ = state_vars->my_diagramv68_out_0_;
};

/* Index=68
   UID=68
   GeneratorClassName=TStepDelay
   Name=ac_C2.StepDelay5
   Type=Задержка на шаг интегрирования */

if(isfinite(state_vars->my_diagramv69_out_0_)){
state_vars->my_diagramv68_out_0_ = state_vars->my_diagramv69_out_0_;
};

/* Index=69
   UID=69
   GeneratorClassName=TStepDelay
   Name=ac_C2.StepDelay4
   Type=Задержка на шаг интегрирования */

if(isfinite(locals->v30_out_0_)){
state_vars->my_diagramv69_out_0_ = locals->v30_out_0_;
};

/* Index=70
   UID=70
   GeneratorClassName=TStepDelay
   Name=ac_L2.StepDelay8
   Type=Задержка на шаг интегрирования */

if(isfinite(state_vars->my_diagramv71_out_0_)){
state_vars->my_diagramv70_out_0_ = state_vars->my_diagramv71_out_0_;
};

/* Index=71
   UID=71
   GeneratorClassName=TStepDelay
   Name=ac_L2.StepDelay7
   Type=Задержка на шаг интегрирования */

if(isfinite(locals->v45_out_0_)){
state_vars->my_diagramv71_out_0_ = locals->v45_out_0_;
};

/* Index=72
   UID=72
   GeneratorClassName=TStepDelay
   Name=ac_L2.StepDelay9
   Type=Задержка на шаг интегрирования */

if(isfinite(state_vars->my_diagramv70_out_0_)){
state_vars->my_diagramv72_out_0_ = state_vars->my_diagramv70_out_0_;
};
};

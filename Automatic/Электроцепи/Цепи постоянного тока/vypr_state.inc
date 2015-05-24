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


/* Index=191
   UID=191
   GeneratorClassName=TStepDelay
   Name=Macro312.StepDelay1
   Type=Задержка на шаг интегрирования */

if(action==f_GoodStep){
if(isfinite(locals->v50_out_0_))
state_vars->vyprv191_out_0_ = locals->v50_out_0_;

/* Index=192
   UID=192
   GeneratorClassName=TStepDelay
   Name=Macro242.StepDelay1
   Type=Задержка на шаг интегрирования */

if(isfinite(locals->v62_out_0_))
state_vars->vyprv192_out_0_ = locals->v62_out_0_;

/* Index=193
   UID=193
   GeneratorClassName=TStepDelay
   Name=Macro313.StepDelay1
   Type=Задержка на шаг интегрирования */

if(isfinite(locals->v57_out_0_))
state_vars->vyprv193_out_0_ = locals->v57_out_0_;

/* Index=194
   UID=194
   GeneratorClassName=TStepDelay
   Name=Macro317.StepDelay1
   Type=Задержка на шаг интегрирования */

if(isfinite(locals->v71_out_0_))
state_vars->vyprv194_out_0_ = locals->v71_out_0_;
};

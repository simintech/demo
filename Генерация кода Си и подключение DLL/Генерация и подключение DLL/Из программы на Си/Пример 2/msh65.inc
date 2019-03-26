/*  ------------------------------------------------------
     Routine name:  msh65
     Description:   
     Project file:  Шаблон для msh65.prt

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

 
 SHAR_INPUT_DATA msh65v1_input;
 
 SHAR_INPUT_65DATA msh65v1_out; 
 
 
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source9
   Type=Входной контакт s3 */

for(i = 0;i<7;i++){
state_vars->msh65v0_out_0_[i] = ((input_0[i]));
};

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock10
   Type=Язык программирования */

//Присвоение данных входа
		msh65v1_input.rM = state_vars->msh65v0_out_0_[0];
		msh65v1_input.Vx = state_vars->msh65v0_out_0_[1];			// метры в сек
		msh65v1_input.Vy = state_vars->msh65v0_out_0_[2];			// метры в сек
		msh65v1_input.Vz = state_vars->msh65v0_out_0_[3];			// метры в сек
		msh65v1_input.D[0] = state_vars->msh65v0_out_0_[4];			// радианы
                msh65v1_input.D[1] = state_vars->msh65v0_out_0_[5];
		msh65v1_input.Xv  = state_vars->msh65v0_out_0_[6];
    
                //Вызов функции  
                Msh65Exp_Tsagi(msh65v1_input,&msh65v1_out);
  
                //Присвоение данных выхода                
		state_vars->msh65v1_out_0_[0] = msh65v1_out.rM;
		state_vars->msh65v1_out_0_[1] = msh65v1_out.Vx;			// метры в сек
		state_vars->msh65v1_out_0_[2] = msh65v1_out.Vy;			// метры в сек
		state_vars->msh65v1_out_0_[3] = msh65v1_out.Vz;			// метры в сек
		state_vars->msh65v1_out_0_[4] = msh65v1_out.D1;			// радианы
		state_vars->msh65v1_out_0_[5] = msh65v1_out.D2;			// радианы
		state_vars->msh65v1_out_0_[6] = msh65v1_out.D3;			// радианы
		state_vars->msh65v1_out_0_[7] = msh65v1_out.D4;
		state_vars->msh65v1_out_0_[8] = msh65v1_out.Xv;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

for(i = 0;i<9;i++){
out_0[i] = state_vars->msh65v1_out_0_[i];
};
};break;
};

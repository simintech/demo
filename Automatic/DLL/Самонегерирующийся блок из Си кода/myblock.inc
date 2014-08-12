/*  ------------------------------------------------------
     Routine name:  myblock
        Generated:  02.12.2011 11:55:27
      Description:  
     Project file:  Самогенерирующийся блок.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
double tmp1;
char f;
char u_s;
char u_r;
  
static double v1_w = 100;
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=SelfGenTemplate
   Type=Самогенерирующийся блок */

myblockv1_dyn_var_deri=myblockv0_out_0;
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=Входной контакт s3 */

myblockv0_out_0 = input_0_1_;

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=SelfGenTemplate
   Type=Самогенерирующийся блок */

myblockv1_out_0 = sin(myblockv1_dyn_var)*v1_w;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

out_0_1_ = myblockv1_out_0;
};break;
};

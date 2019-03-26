/*  ------------------------------------------------------
     Routine name:  datarcv
        Generated:  29.09.2013 18:45:56
      Description:  
     Project file:  sample_data_source.prt

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
   GeneratorClassName=TSinSource
   Name=Sinus_source2
   Type=Синусоида */

for(i=0;i<3;i++){
tmp1 = datarcvv0_loct[i]+step;
v0_out_0[i] = datarcvv0_a[i]*sin(datarcvv0_w[i]*tmp1+datarcvv0_f[i]);
if(((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts))&&(datarcvv0_w[i]!=0)){
tmp2 = fabs(2*M_PI/datarcvv0_w[i]);
if(tmp1>tmp2)tmp1 = fmod(tmp1,tmp2);
datarcvv0_loct[i] = tmp1;
};

/* Index=1
   UID=1
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

};
data1 = v0_out_0[0];
data2 = v0_out_0[1];
data3 = v0_out_0[2];
};break;
};

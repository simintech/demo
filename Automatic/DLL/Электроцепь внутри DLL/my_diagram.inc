/*  ------------------------------------------------------
     Routine name:  my_diagram
        Generated:  02.12.2011 11:54:41
      Description:  
     Project file:  Схема автоматики.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
double tmp1;
char f;
char u_s;
char u_r;
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{

/* Index=5
   UID=5
   GeneratorClassName=TIntegrator
   Name=Macro36.Integrator3
   Type=Интегратор */

my_diagramv5_out_0_deri = my_diagramv5_k*v8_out_0;

/* Index=6
   UID=6
   GeneratorClassName=TIntegrator
   Name=Macro38.Integrator3
   Type=Интегратор */

my_diagramv6_out_0_deri = my_diagramv6_k*v27_out_0;
};break;
case f_GetAlgFun:{

/* Index=10
   UID=10
   GeneratorClassName=TFy0
   Name=Macro34.y_f1
   Type=Нелинейное уравнение F(y) = 0 */

my_diagramv10_out_0_func = v26_out_0;

/* Index=11
   UID=11
   GeneratorClassName=TFy0
   Name=Macro41.y_f1
   Type=Нелинейное уравнение F(y) = 0 */

my_diagramv11_out_0_func = v15_out_0;

/* Index=12
   UID=12
   GeneratorClassName=TFy0
   Name=Macro40.Macro13.y_f1
   Type=Нелинейное уравнение F(y) = 0 */

my_diagramv12_out_0_func = v23_out_0;

/* Index=13
   UID=13
   GeneratorClassName=TFy0
   Name=Macro40.Macro14.y_f1
   Type=Нелинейное уравнение F(y) = 0 */

my_diagramv13_out_0_func = v25_out_0;
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source5
   Type=Входной контакт s3 */

my_diagramv0_out_0 = input_0_1_;

/* Index=4
   UID=4
   GeneratorClassName=TSumSrc
   Name=Macro22.Add_oper1
   Type=Сумматор */

v4_out_0 = (1)*my_diagramv1_a+(1)*my_diagramv0_out_0;

/* Index=7
   UID=7
   GeneratorClassName=TSumSrc
   Name=Macro38.Sub_oper1
   Type=Сравнивающее устройтсво */

v7_out_0 = (1)*my_diagramv3_a+(-1)*my_diagramv6_out_0;

/* Index=8
   UID=8
   GeneratorClassName=TSumSrc
   Name=Macro36.Sub_oper1
   Type=Сравнивающее устройтсво */

v8_out_0 = (1)*v4_out_0+(-1E-9)*my_diagramv5_out_0+(-1)*v7_out_0;

/* Index=9
   UID=9
   GeneratorClassName=TKx
   Name=Macro36.kx1
   Type=Усилитель */

v9_out_0 = my_diagramv9_a*my_diagramv5_out_0;

/* Index=14
   UID=14
   GeneratorClassName=TSumSrc
   Name=Macro26.Sub_oper1
   Type=Сравнивающее устройтсво */

v14_out_0 = (1)*v7_out_0+(-1)*my_diagramv11_out_0;

/* Index=15
   UID=15
   GeneratorClassName=TSumSrc
   Name=Macro41.Sub_oper1
   Type=Сравнивающее устройтсво */

v15_out_0 = (1)*v14_out_0+(-1)*my_diagramv13_out_0;

/* Index=16
   UID=16
   GeneratorClassName=TSumSrc
   Name=Macro40.Sub_oper1
   Type=Сравнивающее устройтсво */

v16_out_0 = (1)*my_diagramv13_out_0+(-1)*my_diagramv12_out_0;

/* Index=17
   UID=17
   GeneratorClassName=TExp
   Name=Macro40.Exponenta_func1
   Type=Экспоненциальная функция */

v17_out_0 = my_diagramv17_a*exp(my_diagramv17_b*v16_out_0+my_diagramv17_c);

/* Index=18
   UID=18
   GeneratorClassName=TLinearFunc
   Name=Macro40.Linear_func1
   Type=Линейная функция */

v18_out_0 = my_diagramv18_a+(v17_out_0*my_diagramv18_b);

/* Index=19
   UID=19
   GeneratorClassName=TKx
   Name=Macro40.kx
   Type=Усилитель */

v19_out_0 = my_diagramv19_a*v18_out_0;

/* Index=20
   UID=20
   GeneratorClassName=TKx
   Name=Macro40.kx2
   Type=Усилитель */

v20_out_0 = my_diagramv20_a*v16_out_0;

/* Index=21
   UID=21
   GeneratorClassName=TSumSrc
   Name=Macro40.Add_oper1
   Type=Сумматор */

v21_out_0 = (1)*v19_out_0+(1)*v20_out_0;

/* Index=22
   UID=22
   GeneratorClassName=TKx
   Name=Macro40.kx1
   Type=Усилитель */

v22_out_0 = my_diagramv22_a*v21_out_0;

/* Index=23
   UID=23
   GeneratorClassName=TSumSrc
   Name=Macro40.Macro13.Add_oper1
   Type=Сумматор */

v23_out_0 = (1)*v22_out_0+(1)*my_diagramv10_out_0;

/* Index=24
   UID=24
   GeneratorClassName=TKx
   Name=Macro41.kx1
   Type=Усилитель */

v24_out_0 = my_diagramv24_a*my_diagramv11_out_0;

/* Index=25
   UID=25
   GeneratorClassName=TSumSrc
   Name=Macro40.Macro14.Add_oper1
   Type=Сумматор */

v25_out_0 = (1)*v24_out_0+(1)*v21_out_0;

/* Index=26
   UID=26
   GeneratorClassName=TSumSrc
   Name=Macro34.Sub_oper1
   Type=Сравнивающее устройтсво */

v26_out_0 = (1)*my_diagramv12_out_0+(-1)*my_diagramv2_a;

/* Index=27
   UID=27
   GeneratorClassName=TSumSrc
   Name=Macro39.Add_oper1
   Type=Сумматор */

v27_out_0 = (1)*my_diagramv11_out_0+(1)*v9_out_0;

/* Index=28
   UID=28
   GeneratorClassName=TOutPin
   Name=OutPin1
   Type=Выходной контакт s3 */

out_0_1_ = my_diagramv11_out_0;

/* Index=29
   UID=29
   GeneratorClassName=TOutPin
   Name=OutPin2
   Type=Выходной контакт s3 */

out_0_2_ = v14_out_0;
};break;
};

/*  ------------------------------------------------------
     Routine name:  fl_controller_fp
     Description:   
     Project file:  fl_controller_fp.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
fix16_t tmp1;
fix16_t tmp2;
fix16_t tmp3;
fix16_t tmp4;
fix16_t tmp5;
fix16_t tmp6;
char f;
char tmp_f_1;
char u_s;
char u_r;
ret = 0;

switch (action){
case f_Stop:{
/* Index=56
   UID=56
   GeneratorClassName=TLanguage
   Name=nlTsukamotoOut2.LangBlock10
   Type=Язык программирования */

v56_sfinal__0:
;
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=11
   UID=11
   GeneratorClassName=TInputPin
   Name=Const_source9
   Type=Входной контакт s3 */

state_vars->fl_controller_fpv11_out_0_ = input_0;

/* Index=12
   UID=12
   GeneratorClassName=TInputPin
   Name=Const_source10
   Type=Входной контакт s3 */

state_vars->fl_controller_fpv12_out_0_ = input_1;

/* Index=15
   UID=15
   GeneratorClassName=TRazm
   Name=Macro19.Razm_oper4
   Type=Размножитель */

for(j = 0;j<3;j++){
locals->v15_out_0_[j] = fix16_mul(consts->fl_controller_fpv15_m_[j], state_vars->fl_controller_fpv11_out_0_);
};

/* Index=16
   UID=16
   GeneratorClassName=TDeMultiplexor
   Name=Macro19.Demultiplexor_vec6
   Type=Демультиплексор */

locals->v16_out_0_ = consts->fl_controller_fpv5_a_[0];
locals->v16_out_1_ = consts->fl_controller_fpv5_a_[1];
locals->v16_out_2_ = consts->fl_controller_fpv5_a_[2];

/* Index=17
   UID=17
   GeneratorClassName=TSumSrc
   Name=Macro19.Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v16_out_1_ = fix16_add(fix16_mul((65536), state_vars->fl_controller_fpv11_out_0_), fix16_mul((-65536), locals->v16_out_0_));

/* Index=18
   UID=18
   GeneratorClassName=TSumSrc
   Name=Macro19.Sub_oper2
   Type=Сравнивающее устройтсво */

for(i=0;i<3;i++){
locals->v18_out_0_[i] = fix16_add(fix16_mul((65536), locals->v15_out_0_[i]), fix16_mul((-65536), consts->fl_controller_fpv5_a_[i]));

/* Index=19
   UID=19
   GeneratorClassName=TParabola
   Name=Macro19.Parab_func9
   Type=Параболическая функция */

locals->v15_out_0_[i] = fix16_add(consts->fl_controller_fpv19_a0_[i], fix16_add(fix16_mul(locals->v18_out_0_[i], consts->fl_controller_fpv19_a1_[i]), fix16_mul(fix16_mul(locals->v18_out_0_[i], locals->v18_out_0_[i]), consts->fl_controller_fpv19_a2_[i])));

/* Index=20
   UID=20
   GeneratorClassName=TParabola
   Name=Macro19.Parab_func8
   Type=Параболическая функция */

locals->v18_out_0_[i] = fix16_add(consts->fl_controller_fpv20_a0_[i], fix16_add(fix16_mul(consts->fl_controller_fpv6_a_[i], consts->fl_controller_fpv20_a1_[i]), fix16_mul(fix16_mul(consts->fl_controller_fpv6_a_[i], consts->fl_controller_fpv6_a_[i]), consts->fl_controller_fpv20_a2_[i])));

/* Index=21
   UID=21
   GeneratorClassName=TDivDbl
   Name=Macro19.Div_oper2
   Type=Делитель */

if(locals->v18_out_0_[i]!=0){
locals->v21_out_0_[i] = fix16_div(locals->v15_out_0_[i], locals->v18_out_0_[i]);
if(!fix16_isfinite(locals->v21_out_0_[i])) locals->v21_out_0_[i] = 0;
if(locals->v21_out_0_[i] > 2147483647)
locals->v21_out_0_[i] = 2147483647;
if(locals->v21_out_0_[i] < -2147483647)
locals->v21_out_0_[i] = -2147483647;
} else {
if(locals->v15_out_0_[i] > 0){
locals->v21_out_0_[i] = 2147483647;
} else {
if(locals->v15_out_0_[i] < 0){
locals->v21_out_0_[i] = -2147483647;
} else {
locals->v21_out_0_[i] = 0;
};
};
};

/* Index=22
   UID=22
   GeneratorClassName=TExp
   Name=Macro19.Exponenta_func4
   Type=Экспоненциальная функция */

locals->v15_out_0_[i] = fix16_mul(consts->fl_controller_fpv22_a_[i], fix16_exp(fix16_add(fix16_mul(consts->fl_controller_fpv22_b_[i], locals->v21_out_0_[i]), consts->fl_controller_fpv22_c_[i])));
if(!fix16_isfinite(locals->v15_out_0_[i])) locals->v15_out_0_[i] = 0;

/* Index=23
   UID=23
   GeneratorClassName=TDeMultiplexor
   Name=Macro19.Demultiplexor_vec4
   Type=Демультиплексор */

};
locals->v16_out_0_ = locals->v15_out_0_[0];
locals->v23_out_1_ = locals->v15_out_0_[1];
locals->v23_out_2_ = locals->v15_out_0_[2];

/* Index=24
   UID=24
   GeneratorClassName=TKey3
   Name=Macro19.Key3_4
   Type=Ключ-3 */

if(locals->v16_out_1_<consts->fl_controller_fpv24_k_){
locals->v24_out_0_ = consts->fl_controller_fpv7_a_;
}else{
locals->v24_out_0_ = locals->v16_out_0_;
};

/* Index=25
   UID=25
   GeneratorClassName=TSumSrc
   Name=Macro19.Sub_oper4
   Type=Сравнивающее устройтсво */

locals->v16_out_0_ = fix16_add(fix16_mul((65536), state_vars->fl_controller_fpv11_out_0_), fix16_mul((-65536), locals->v16_out_2_));

/* Index=26
   UID=26
   GeneratorClassName=TKey3
   Name=Macro19.Key3_5
   Type=Ключ-3 */

if(locals->v16_out_0_<consts->fl_controller_fpv26_k_){
locals->v16_out_1_ = locals->v23_out_2_;
}else{
locals->v16_out_1_ = consts->fl_controller_fpv7_a_;
};

/* Index=27
   UID=27
   GeneratorClassName=TMultiplexor
   Name=Macro19.Multiplexor_vec4
   Type=Мультиплексор */

locals->v15_out_0_[0] = locals->v24_out_0_;
locals->v15_out_0_[1] = locals->v23_out_1_;
locals->v15_out_0_[2] = locals->v16_out_1_;

/* Index=28
   UID=28
   GeneratorClassName=TDeMultiplexor
   Name=Demultiplexor_vec5
   Type=Демультиплексор */

locals->v16_out_0_ = locals->v15_out_0_[0];
locals->v16_out_1_ = locals->v15_out_0_[1];
locals->v16_out_2_ = locals->v15_out_0_[2];

/* Index=29
   UID=29
   GeneratorClassName=TMulDbl
   Name=Macro13.Mul_oper2
   Type=Перемножитель */

locals->v23_out_1_ = fix16_mul(locals->v16_out_2_, consts->fl_controller_fpv1_a_);

/* Index=30
   UID=30
   GeneratorClassName=TMulDbl
   Name=Macro14.Mul_oper2
   Type=Перемножитель */

locals->v16_out_2_ = fix16_mul(locals->v16_out_1_, consts->fl_controller_fpv2_a_);

/* Index=31
   UID=31
   GeneratorClassName=TRazm
   Name=Macro24.Razm_oper4
   Type=Размножитель */

for(j = 0;j<3;j++){
locals->v15_out_0_[j] = fix16_mul(consts->fl_controller_fpv31_m_[j], state_vars->fl_controller_fpv12_out_0_);
};

/* Index=32
   UID=32
   GeneratorClassName=TDeMultiplexor
   Name=Macro24.Demultiplexor_vec6
   Type=Демультиплексор */

locals->v23_out_2_ = consts->fl_controller_fpv8_a_[0];
locals->v24_out_0_ = consts->fl_controller_fpv8_a_[1];
locals->v32_out_2_ = consts->fl_controller_fpv8_a_[2];

/* Index=33
   UID=33
   GeneratorClassName=TSumSrc
   Name=Macro24.Sub_oper3
   Type=Сравнивающее устройтсво */

locals->v24_out_0_ = fix16_add(fix16_mul((65536), state_vars->fl_controller_fpv12_out_0_), fix16_mul((-65536), locals->v23_out_2_));

/* Index=34
   UID=34
   GeneratorClassName=TSumSrc
   Name=Macro24.Sub_oper2
   Type=Сравнивающее устройтсво */

for(i=0;i<3;i++){
locals->v18_out_0_[i] = fix16_add(fix16_mul((65536), locals->v15_out_0_[i]), fix16_mul((-65536), consts->fl_controller_fpv8_a_[i]));

/* Index=35
   UID=35
   GeneratorClassName=TParabola
   Name=Macro24.Parab_func9
   Type=Параболическая функция */

locals->v15_out_0_[i] = fix16_add(consts->fl_controller_fpv35_a0_[i], fix16_add(fix16_mul(locals->v18_out_0_[i], consts->fl_controller_fpv35_a1_[i]), fix16_mul(fix16_mul(locals->v18_out_0_[i], locals->v18_out_0_[i]), consts->fl_controller_fpv35_a2_[i])));

/* Index=36
   UID=36
   GeneratorClassName=TParabola
   Name=Macro24.Parab_func8
   Type=Параболическая функция */

locals->v18_out_0_[i] = fix16_add(consts->fl_controller_fpv36_a0_[i], fix16_add(fix16_mul(consts->fl_controller_fpv9_a_[i], consts->fl_controller_fpv36_a1_[i]), fix16_mul(fix16_mul(consts->fl_controller_fpv9_a_[i], consts->fl_controller_fpv9_a_[i]), consts->fl_controller_fpv36_a2_[i])));

/* Index=37
   UID=37
   GeneratorClassName=TDivDbl
   Name=Macro24.Div_oper2
   Type=Делитель */

if(locals->v18_out_0_[i]!=0){
locals->v21_out_0_[i] = fix16_div(locals->v15_out_0_[i], locals->v18_out_0_[i]);
if(!fix16_isfinite(locals->v21_out_0_[i])) locals->v21_out_0_[i] = 0;
if(locals->v21_out_0_[i] > 2147483647)
locals->v21_out_0_[i] = 2147483647;
if(locals->v21_out_0_[i] < -2147483647)
locals->v21_out_0_[i] = -2147483647;
} else {
if(locals->v15_out_0_[i] > 0){
locals->v21_out_0_[i] = 2147483647;
} else {
if(locals->v15_out_0_[i] < 0){
locals->v21_out_0_[i] = -2147483647;
} else {
locals->v21_out_0_[i] = 0;
};
};
};

/* Index=38
   UID=38
   GeneratorClassName=TExp
   Name=Macro24.Exponenta_func4
   Type=Экспоненциальная функция */

locals->v15_out_0_[i] = fix16_mul(consts->fl_controller_fpv38_a_[i], fix16_exp(fix16_add(fix16_mul(consts->fl_controller_fpv38_b_[i], locals->v21_out_0_[i]), consts->fl_controller_fpv38_c_[i])));
if(!fix16_isfinite(locals->v15_out_0_[i])) locals->v15_out_0_[i] = 0;

/* Index=39
   UID=39
   GeneratorClassName=TDeMultiplexor
   Name=Macro24.Demultiplexor_vec4
   Type=Демультиплексор */

};
locals->v23_out_2_ = locals->v15_out_0_[0];
locals->v39_out_1_ = locals->v15_out_0_[1];
locals->v39_out_2_ = locals->v15_out_0_[2];

/* Index=40
   UID=40
   GeneratorClassName=TKey3
   Name=Macro24.Key3_4
   Type=Ключ-3 */

if(locals->v24_out_0_<consts->fl_controller_fpv40_k_){
locals->v40_out_0_ = consts->fl_controller_fpv10_a_;
}else{
locals->v40_out_0_ = locals->v23_out_2_;
};

/* Index=41
   UID=41
   GeneratorClassName=TSumSrc
   Name=Macro24.Sub_oper4
   Type=Сравнивающее устройтсво */

locals->v23_out_2_ = fix16_add(fix16_mul((65536), state_vars->fl_controller_fpv12_out_0_), fix16_mul((-65536), locals->v32_out_2_));

/* Index=42
   UID=42
   GeneratorClassName=TKey3
   Name=Macro24.Key3_5
   Type=Ключ-3 */

if(locals->v23_out_2_<consts->fl_controller_fpv42_k_){
locals->v24_out_0_ = locals->v39_out_2_;
}else{
locals->v24_out_0_ = consts->fl_controller_fpv10_a_;
};

/* Index=43
   UID=43
   GeneratorClassName=TMultiplexor
   Name=Macro24.Multiplexor_vec4
   Type=Мультиплексор */

locals->v15_out_0_[0] = locals->v40_out_0_;
locals->v15_out_0_[1] = locals->v39_out_1_;
locals->v15_out_0_[2] = locals->v24_out_0_;

/* Index=44
   UID=44
   GeneratorClassName=TDeMultiplexor
   Name=Demultiplexor_vec6
   Type=Демультиплексор */

locals->v23_out_2_ = locals->v15_out_0_[0];
locals->v24_out_0_ = locals->v15_out_0_[1];
locals->v32_out_2_ = locals->v15_out_0_[2];

/* Index=45
   UID=45
   GeneratorClassName=TMulDbl
   Name=Macro11.Mul_oper2
   Type=Перемножитель */

locals->v24_out_0_ = fix16_mul(locals->v16_out_1_, locals->v23_out_2_);

/* Index=46
   UID=46
   GeneratorClassName=TMulDbl
   Name=Macro11.Mul_oper3
   Type=Перемножитель */

locals->v23_out_2_ = fix16_mul(locals->v24_out_0_, consts->fl_controller_fpv3_a_);

/* Index=47
   UID=47
   GeneratorClassName=TMulDbl
   Name=Macro8.Mul_oper2
   Type=Перемножитель */

locals->v24_out_0_ = fix16_mul(locals->v16_out_0_, consts->fl_controller_fpv0_a_);

/* Index=48
   UID=48
   GeneratorClassName=TMulDbl
   Name=Macro15.Mul_oper2
   Type=Перемножитель */

locals->v16_out_0_ = fix16_mul(locals->v16_out_1_, locals->v32_out_2_);

/* Index=49
   UID=49
   GeneratorClassName=TMulDbl
   Name=Macro15.Mul_oper3
   Type=Перемножитель */

locals->v16_out_1_ = fix16_mul(locals->v16_out_0_, consts->fl_controller_fpv4_a_);

/* Index=50
   UID=50
   GeneratorClassName=TMultiplexor
   Name=Multiplexor_vec4
   Type=Мультиплексор */

locals->v50_out_0_[0] = locals->v23_out_1_;
locals->v50_out_0_[1] = locals->v16_out_1_;
locals->v50_out_0_[2] = locals->v16_out_2_;
locals->v50_out_0_[3] = locals->v23_out_2_;
locals->v50_out_0_[4] = locals->v24_out_0_;

/* Index=51
   UID=51
   GeneratorClassName=TMulDbl
   Name=nlTsukamotoOut2.Mul_oper2
   Type=Перемножитель */

for(i=0;i<5;i++){
locals->v51_out_0_[i] = fix16_mul(locals->v50_out_0_[i], consts->fl_controller_fpv13_a_[i]);

/* Index=52
   UID=52
   GeneratorClassName=TVectorAdd
   Name=nlTsukamotoOut2.VecAdd_oper7
   Type=Суммирование элементов вектора */

};
locals->v16_out_0_ = 0;
for(i = 0;i<5;i++){
locals->v16_out_0_ = fix16_add(fix16_mul((65536), locals->v51_out_0_[i]), locals->v16_out_0_);
};

/* Index=53
   UID=53
   GeneratorClassName=TVectorAdd
   Name=nlTsukamotoOut2.VecAdd_oper8
   Type=Суммирование элементов вектора */

locals->v16_out_1_ = 0;
for(i = 0;i<5;i++){
locals->v16_out_1_ = fix16_add(fix16_mul((65536), locals->v50_out_0_[i]), locals->v16_out_1_);
};

/* Index=54
   UID=54
   GeneratorClassName=TSumSrc
   Name=nlTsukamotoOut2.Add_oper3
   Type=Сумматор */

locals->v16_out_2_ = fix16_add(fix16_mul((65536), locals->v16_out_1_), fix16_mul((65536), consts->fl_controller_fpv14_a_));

/* Index=55
   UID=55
   GeneratorClassName=TDivDbl
   Name=nlTsukamotoOut2.Div_oper2
   Type=Делитель */

if(locals->v16_out_2_!=0){
locals->v16_out_1_ = fix16_div(locals->v16_out_0_, locals->v16_out_2_);
if(!fix16_isfinite(locals->v16_out_1_)) locals->v16_out_1_ = 0;
if(locals->v16_out_1_ > 2147483647)
locals->v16_out_1_ = 2147483647;
if(locals->v16_out_1_ < -2147483647)
locals->v16_out_1_ = -2147483647;
} else {
if(locals->v16_out_0_ > 0){
locals->v16_out_1_ = 2147483647;
} else {
if(locals->v16_out_0_ < 0){
locals->v16_out_1_ = -2147483647;
} else {
locals->v16_out_1_ = 0;
};
};
};
/* Index=56
   UID=56
   GeneratorClassName=TLanguage
   Name=nlTsukamotoOut2.LangBlock10
   Type=Язык программирования */

v56___2:
;

/* Index=57
   UID=57
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=Выходной контакт s3 */

if(fix16_isfinite(locals->v16_out_1_))
out_0 = locals->v16_out_1_;
};break;
};

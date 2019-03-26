/*  ------------------------------------------------------
     Routine name:  sin
     Description:   
     Project file:  sins_computer_local_test.prt

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

switch (action){
case f_Stop:{
/* Index=5
   UID=5
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock10
   Type=язык программировани€ */

v5_sfinal__0:
;
/* Index=15
   UID=15
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock11
   Type=язык программировани€ */

v15_sfinal__0:
;
/* Index=16
   UID=16
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock12
   Type=язык программировани€ */

v16_sfinal__0:
;
/* Index=19
   UID=19
   GeneratorClassName=TLanguage
   Name=Macro3.Macro2.LangBlock11
   Type=язык программировани€ */

v19_sfinal__0:
;
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=1
   UID=1
   GeneratorClassName=TInputPin
   Name=Const_source9
   Type=¬ходной контакт s3 */

for(i = 0;i<3;i++){
state_vars->sinv1_out_0_[i] = ((input_0[i]));
};

/* Index=2
   UID=2
   GeneratorClassName=TInputPin
   Name=Const_source10
   Type=¬ходной контакт s3 */

for(i = 0;i<3;i++){
state_vars->sinv2_out_0_[i] = ((input_1[i]));
};

/* Index=3
   UID=3
   GeneratorClassName=TInputPin
   Name=Const_source11
   Type=¬ходной контакт s3 */

for(i = 0;i<3;i++){
state_vars->sinv3_out_0_[i] = ((input_2[i]));
};
/* Index=5
   UID=5
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock10
   Type=язык программировани€ */

state_vars->v5cosr_=cos((state_vars->sinv1_out_0_[(1) - 1]/(2)));
state_vars->v5sinr_=sin((state_vars->sinv1_out_0_[(1) - 1]/(2)));
state_vars->v5cosp_=cos((state_vars->sinv1_out_0_[(2) - 1]/(2)));
state_vars->v5sinp_=sin((state_vars->sinv1_out_0_[(2) - 1]/(2)));
state_vars->v5cosy_=cos((state_vars->sinv1_out_0_[(3) - 1]/(2)));
state_vars->v5siny_=sin((state_vars->sinv1_out_0_[(3) - 1]/(2)));
state_vars->v5w_=(((state_vars->v5cosr_*state_vars->v5cosp_)*state_vars->v5cosy_)+((state_vars->v5sinr_*state_vars->v5sinp_)*state_vars->v5siny_));
state_vars->v5x_=(((state_vars->v5sinr_*state_vars->v5cosp_)*state_vars->v5cosy_)-((state_vars->v5cosr_*state_vars->v5sinp_)*state_vars->v5siny_));
state_vars->v5y_=(((state_vars->v5cosr_*state_vars->v5sinp_)*state_vars->v5cosy_)+((state_vars->v5sinr_*state_vars->v5cosp_)*state_vars->v5siny_));
state_vars->v5z_=(((state_vars->v5cosr_*state_vars->v5cosp_)*state_vars->v5siny_)-((state_vars->v5sinr_*state_vars->v5sinp_)*state_vars->v5cosy_));
state_vars->sinv5_out_0_[(1) - 1]=state_vars->v5w_;
state_vars->sinv5_out_0_[(2) - 1]=state_vars->v5x_;
state_vars->sinv5_out_0_[(3) - 1]=state_vars->v5y_;
state_vars->sinv5_out_0_[(4) - 1]=state_vars->v5z_;
v5___14:
;

/* Index=6
   UID=6
   GeneratorClassName=TDeMultiplexor
   Name=Demultiplexor_vec4
   Type=ƒемультиплексор */

locals->v6_out_0_ = state_vars->sinv3_out_0_[0];
locals->v6_out_1_ = state_vars->sinv3_out_0_[1];
locals->v6_out_2_ = state_vars->sinv3_out_0_[2];

/* Index=7
   UID=7
   GeneratorClassName=TDivDbl
   Name=Div_oper3
   Type=ƒелитель */

if(consts->sinv4_a_!=0){
locals->v7_out_0_ = locals->v6_out_0_/consts->sinv4_a_;
if(!isfinite(locals->v7_out_0_)) {locals->v7_out_0_ = 0;};
if(locals->v7_out_0_ > 1E20){
locals->v7_out_0_ = 1E20;};
if(locals->v7_out_0_ < -1E20){
locals->v7_out_0_ = -1E20;};
} else {
if(locals->v6_out_0_ > 0){
locals->v7_out_0_ = 1E20;
} else {
if(locals->v6_out_0_ < 0){
locals->v7_out_0_ = -1E20;
} else {
locals->v7_out_0_ = 0;
};
};
};

/* Index=8
   UID=8
   GeneratorClassName=TASin
   Name=Arcsin_func5
   Type=јрксинус */

tmp1 = consts->sinv8_w_*locals->v7_out_0_+consts->sinv8_f_;
if((tmp1>=-1)&&(tmp1<=1)){
locals->v8_out_0_ = consts->sinv8_a_*asin(tmp1);
}else{
locals->v8_out_0_ = 0;
};

/* Index=9
   UID=9
   GeneratorClassName=TKx
   Name=kx1
   Type=”силитель */

locals->v6_out_0_ = consts->sinv9_a_*locals->v6_out_2_;

/* Index=10
   UID=10
   GeneratorClassName=TAtan2
   Name=ATAN2_func1
   Type=јрктангенс от двух аргументов */

locals->v6_out_2_ = atan2(locals->v6_out_0_,locals->v6_out_1_);

/* Index=11
   UID=11
   GeneratorClassName=TMultiplexor
   Name=Multiplexor_vec4
   Type=ћультиплексор */

locals->v11_out_0_[0] = locals->v8_out_0_;
locals->v11_out_0_[1] = locals->v6_out_2_;

/* Index=13
   UID=13
   GeneratorClassName=TVectorDotProduct
   Name=Macro3.Macro2.VectorDotProduct1
   Type=—кал€рное произведение векторов */

locals->v6_out_0_ = 0;
for(i=0;i<4;i++){
locals->v6_out_0_ = locals->v6_out_0_+(state_vars->sinv12_out_0_[i]*state_vars->sinv12_out_0_[i]);
};

/* Index=14
   UID=14
   GeneratorClassName=TSumSrc
   Name=Macro3.Macro2.Add_oper3
   Type=—умматор */

locals->v6_out_1_ = (1)*consts->sinv0_a_+(-1)*locals->v6_out_0_;
/* Index=15
   UID=15
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock11
   Type=язык программировани€ */

state_vars->v15mod_q_=sqrt((((pow(state_vars->sinv12_out_0_[(1) - 1], (2))+pow(state_vars->sinv12_out_0_[(2) - 1], (2)))+pow(state_vars->sinv12_out_0_[(3) - 1], (2)))+pow(state_vars->sinv12_out_0_[(4) - 1], (2))));
state_vars->v15q0_=(state_vars->sinv12_out_0_[(1) - 1]/state_vars->v15mod_q_);
state_vars->v15q1_=(state_vars->sinv12_out_0_[(2) - 1]/state_vars->v15mod_q_);
state_vars->v15q2_=(state_vars->sinv12_out_0_[(3) - 1]/state_vars->v15mod_q_);
state_vars->v15q3_=(state_vars->sinv12_out_0_[(4) - 1]/state_vars->v15mod_q_);
state_vars->sinv15_out_0_[(1) - 1]=atan2(((2)*((state_vars->v15q0_*state_vars->v15q1_)+(state_vars->v15q2_*state_vars->v15q3_))), ((1)-((2)*(pow(state_vars->v15q1_, (2))+pow(state_vars->v15q2_, (2))))));
state_vars->sinv15_out_0_[(2) - 1]=asin(((2)*((state_vars->v15q0_*state_vars->v15q2_)-(state_vars->v15q3_*state_vars->v15q1_))));
state_vars->sinv15_out_0_[(3) - 1]=atan2(((2)*((state_vars->v15q0_*state_vars->v15q3_)+(state_vars->v15q1_*state_vars->v15q2_))), ((1)-((2)*(pow(state_vars->v15q2_, (2))+pow(state_vars->v15q3_, (2))))));
v15___8:
;
/* Index=16
   UID=16
   GeneratorClassName=TLanguage
   Name=Macro3.LangBlock12
   Type=язык программировани€ */

state_vars->v16q0_=state_vars->sinv12_out_0_[(1) - 1];
state_vars->v16q1_=state_vars->sinv12_out_0_[(2) - 1];
state_vars->v16q2_=state_vars->sinv12_out_0_[(3) - 1];
state_vars->v16q3_=state_vars->sinv12_out_0_[(4) - 1];
state_vars->sinv16_out_0_[(1) - 1]=(((pow(state_vars->v16q0_, (2))+pow(state_vars->v16q1_, (2)))-pow(state_vars->v16q2_, (2)))-pow(state_vars->v16q3_, (2)));
state_vars->sinv16_out_0_[(2) - 1]=((2)*((state_vars->v16q1_*state_vars->v16q2_)+(state_vars->v16q0_*state_vars->v16q3_)));
state_vars->sinv16_out_0_[(3) - 1]=((2)*((state_vars->v16q1_*state_vars->v16q3_)-(state_vars->v16q0_*state_vars->v16q2_)));
state_vars->sinv16_out_0_[(4) - 1]=((2)*((state_vars->v16q1_*state_vars->v16q2_)-(state_vars->v16q0_*state_vars->v16q3_)));
state_vars->sinv16_out_0_[(5) - 1]=(((pow(state_vars->v16q0_, (2))-pow(state_vars->v16q1_, (2)))+pow(state_vars->v16q2_, (2)))-pow(state_vars->v16q3_, (2)));
state_vars->sinv16_out_0_[(6) - 1]=((2)*((state_vars->v16q2_*state_vars->v16q3_)+(state_vars->v16q0_*state_vars->v16q1_)));
state_vars->sinv16_out_0_[(7) - 1]=((2)*((state_vars->v16q1_*state_vars->v16q3_)+(state_vars->v16q0_*state_vars->v16q2_)));
state_vars->sinv16_out_0_[(8) - 1]=((2)*((state_vars->v16q2_*state_vars->v16q3_)-(state_vars->v16q0_*state_vars->v16q1_)));
state_vars->sinv16_out_0_[(9) - 1]=(((pow(state_vars->v16q0_, (2))-pow(state_vars->v16q1_, (2)))-pow(state_vars->v16q2_, (2)))+pow(state_vars->v16q3_, (2)));
v16___13:
;

/* Index=17
   UID=17
   GeneratorClassName=TKx
   Name=Macro3.Macro2.kx1
   Type=”силитель */

locals->v6_out_0_ = consts->sinv17_a_*locals->v6_out_1_;

/* Index=18
   UID=18
   GeneratorClassName=TMultiplexor
   Name=Macro3.Macro2.Multiplexor_vec4
   Type=ћультиплексор */

locals->v18_out_0_[0] = state_vars->sinv2_out_0_[0];
locals->v18_out_0_[1] = state_vars->sinv2_out_0_[1];
locals->v18_out_0_[2] = state_vars->sinv2_out_0_[2];
locals->v18_out_0_[3] = state_vars->sinv12_out_0_[0];
locals->v18_out_0_[4] = state_vars->sinv12_out_0_[1];
locals->v18_out_0_[5] = state_vars->sinv12_out_0_[2];
locals->v18_out_0_[6] = state_vars->sinv12_out_0_[3];
locals->v18_out_0_[7] = locals->v6_out_0_;
/* Index=19
   UID=19
   GeneratorClassName=TLanguage
   Name=Macro3.Macro2.LangBlock11
   Type=язык программировани€ */

state_vars->sinv19_out_0_[(1) - 1]=(((-0.5)*(((locals->v18_out_0_[(5) - 1]*locals->v18_out_0_[(1) - 1])+(locals->v18_out_0_[(6) - 1]*locals->v18_out_0_[(2) - 1]))+(locals->v18_out_0_[(7) - 1]*locals->v18_out_0_[(3) - 1])))+(locals->v18_out_0_[(8) - 1]*locals->v18_out_0_[(4) - 1]));
state_vars->sinv19_out_0_[(2) - 1]=(((0.5)*(((locals->v18_out_0_[(4) - 1]*locals->v18_out_0_[(1) - 1])+(locals->v18_out_0_[(6) - 1]*locals->v18_out_0_[(3) - 1]))-(locals->v18_out_0_[(7) - 1]*locals->v18_out_0_[(2) - 1])))+(locals->v18_out_0_[(8) - 1]*locals->v18_out_0_[(5) - 1]));
state_vars->sinv19_out_0_[(3) - 1]=(((0.5)*(((locals->v18_out_0_[(4) - 1]*locals->v18_out_0_[(2) - 1])+(locals->v18_out_0_[(7) - 1]*locals->v18_out_0_[(1) - 1]))-(locals->v18_out_0_[(5) - 1]*locals->v18_out_0_[(3) - 1])))+(locals->v18_out_0_[(8) - 1]*locals->v18_out_0_[(6) - 1]));
state_vars->sinv19_out_0_[(4) - 1]=(((0.5)*(((locals->v18_out_0_[(4) - 1]*locals->v18_out_0_[(3) - 1])+(locals->v18_out_0_[(5) - 1]*locals->v18_out_0_[(2) - 1]))-(locals->v18_out_0_[(6) - 1]*locals->v18_out_0_[(1) - 1])))+(locals->v18_out_0_[(8) - 1]*locals->v18_out_0_[(7) - 1]));
v19___4:
;

/* Index=20
   UID=20
   GeneratorClassName=TOutPin
   Name=Macro3.Macro2.OutPin6
   Type=¬ыходной контакт s3 */

for(i = 0;i<8;i++){
if(isfinite(locals->v18_out_0_[i])){
out_3[i] = locals->v18_out_0_[i];
};
};

/* Index=21
   UID=21
   GeneratorClassName=TOutPin
   Name=Macro3.Macro2.OutPin7
   Type=¬ыходной контакт s3 */

for(i = 0;i<4;i++){
if(isfinite(state_vars->sinv19_out_0_[i])){
out_4[i] = state_vars->sinv19_out_0_[i];
};
};

/* Index=22
   UID=22
   GeneratorClassName=TOutPin
   Name=OutPin6
   Type=¬ыходной контакт s3 */

for(i = 0;i<9;i++){
if(isfinite(state_vars->sinv16_out_0_[i])){
out_0[i] = state_vars->sinv16_out_0_[i];
};
};

/* Index=23
   UID=23
   GeneratorClassName=TOutPin
   Name=OutPin7
   Type=¬ыходной контакт s3 */

for(i = 0;i<3;i++){
if(isfinite(state_vars->sinv15_out_0_[i])){
out_1[i] = state_vars->sinv15_out_0_[i];
};
};

/* Index=24
   UID=24
   GeneratorClassName=TOutPin
   Name=OutPin8
   Type=¬ыходной контакт s3 */

for(i = 0;i<2;i++){
if(isfinite(locals->v11_out_0_[i])){
out_2[i] = locals->v11_out_0_[i];
};
};
};break;
};


/*  ------------------------------------------------------
     Routine name:  msh65
     Description:   
     Project file:  Шаблон для msh65.prt

------------------------------------------------------  */

/*  --- Base generator data types --- */
/* Real data type */
typedef double g_real_type;
/* Integer data type */
typedef int g_int_type;
/* Boolean data type */
typedef char g_boolean_type;
/* Complex data type */
typedef complex_64 g_complex_type;

typedef double  double_7[7];
typedef double  double_9[9];

/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32=0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=311024896;

const double_7 input_0_default={0,0,0,0,0,0,0};
const double_9 out_0_default={0,0,0,0,0,0,0,0,0};
const double_7 msh65v0_out_0_default={0,0,0,0,0,0,0};
const double_9 msh65v1_out_0_default={0,0,0,0,0,0,0,0,0};

/* Main structures defines */
/* External variables count */
#define ext_vars_count 2
/* Internal state variables count */
#define state_vars_count 2
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.001
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.1
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 1E19
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10
/* Real time synchronization flag */
#define MODEL_REAL_TIME_SYNC_FLAG 1
/* Real time synchronization gain */
#define MODEL_REAL_TIME_SYNC_GAIN 1


const ext_var_info_record ext_vars_names[ext_vars_count] = {
{"input:0",   vt_double,   {7}, 0,dir_input,"", (void*)&input_0_default, sizeof(double_7)} ,
{"out:0",   vt_double,   {9}, 1,dir_out,"", (void*)&out_0_default, sizeof(double_9)} 
};
#define input_0 (*(double_7*)(ext_vars_addr[0]))
#define out_0 (*(double_9*)(ext_vars_addr[1]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"msh65v0_out_0",   vt_double,   {7}, 0, dir_inout,"Input pin state variable", (void*)&msh65v0_out_0_default, sizeof(double_7)} ,
{"msh65v1_out_0",   vt_double,   {9}, 56, dir_inout,"Language out", (void*)&msh65v1_out_0_default, sizeof(double_9)} 
};
   typedef struct {
double_7 msh65v0_out_0_;
double_9 msh65v1_out_0_;
   } t_state_vars;
  typedef char t_consts;
  typedef char t_local;

 
#ifndef msh65h 
#define msh65h

#include <stdio.h>

typedef struct{
		double rM;
		double Vx;			// метры в сек
		double Vy;			// метры в сек
		double Vz;			// метры в сек
		double D[2];			// радианы
		double Xv;
}SHAR_INPUT_DATA;

typedef struct{
		double rM;
		double Vx;			// метры в сек
		double Vy;			// метры в сек
		double Vz;			// метры в сек
		double D1;			// радианы
		double D2;			// радианы
		double D3;			// радианы
		double D4;
		double Xv;
}SHAR_INPUT_65DATA;


typedef struct{
	double Cn[4], Ms[4];
}SHAR_VECTOR;
 
#define NUMBER_OF_MAX		5
#define TRUE			1
#define FALSE			0
#define XV0			(0.446)

static double F_aero( int Ia, int Im, int Nkoe, int N1, double Dat[5][520], double *Fun );
static void Load_Koef_From_DataFile( FILE *KoeFile, int Nkoe, double Buff[5][520] );
static void Msh65Exp_Tsagi( SHAR_INPUT_DATA Input, SHAR_VECTOR *Aero );

static int	key_Read = FALSE;
static int k_Cn, k_ms, k_al;

static double dA1;
static double Cn_Dat[5][520]; // массив для хранения коэффициентов Cx
static double Ms_Dat[5][520]; // массив для хранения коэффициентов Ms
static double const sM[] = { 0.600, 0.900, 1.100, 2.000, 2.500};

static double Z[4];		// весовые коэффициенты в используемых узлах
static double Fcn[40];	// массив для функций разложения Cy
static double Fmsh[40];	// массив для функций разложения Mz

void Msh65Exp( SHAR_INPUT_65DATA Input, SHAR_VECTOR *Aero )
{
	SHAR_INPUT_DATA Input_Tsagi;
	SHAR_VECTOR Aero_Tsagi;
	double sqr2 = 0.5*sqrt(2.0 );

//	входные данные в системе координат где гаргрот вверху
// нумерация рулей по часовой стрелке
// первый руль - верхний правый
// положительное отклонение консолей - задняя кромка вниз при виде с хоста

// система координат ЦАГИ - гаргрот вверху слева (повернули притов часовой стрелки на 45 градусов)
// нумерация рулей по часовой стрелке
// первый руль - верхний вертикальный
// положительное отклонение консолей - создают отрицательный мх

// из программы ЦАГИ берем только первый и второй руль

	Input_Tsagi.rM = Input.rM;
	Input_Tsagi.Xv = Input.Xv;
	Input_Tsagi.Vx = Input.Vx;

	Input_Tsagi.Vy = (Input.Vy + Input.Vz)*sqr2;
	Input_Tsagi.Vz = (Input.Vz - Input.Vy)*sqr2;
	Input_Tsagi.D[0] =  Input.D1;
	Input_Tsagi.D[1] =  Input.D2;

	Msh65Exp_Tsagi( Input_Tsagi, &Aero_Tsagi );

	Aero->Cn[0] = Aero_Tsagi.Cn[0];
	Aero->Ms[0] = Aero_Tsagi.Ms[0];
	Aero->Cn[1] = Aero_Tsagi.Cn[1];
	Aero->Ms[1] = Aero_Tsagi.Ms[1];

// четвертый и третий  руль вычисляем как первый и второй
// при этом надо изменить знак у fip

	Input.Vz = -Input.Vz;
	Input_Tsagi.Vy = (Input.Vy + Input.Vz)*sqr2;
	Input_Tsagi.Vz = (Input.Vz - Input.Vy)*sqr2;
	Input_Tsagi.D[0] =  Input.D4;
	Input_Tsagi.D[1] =  Input.D3;

	Msh65Exp_Tsagi( Input_Tsagi, &Aero_Tsagi );

	Aero->Cn[3] = Aero_Tsagi.Cn[0];
	Aero->Ms[3] = Aero_Tsagi.Ms[0];
	Aero->Cn[2] = Aero_Tsagi.Cn[1];
	Aero->Ms[2] = Aero_Tsagi.Ms[1];
}

static void Msh65Exp_Tsagi( SHAR_INPUT_DATA Input, SHAR_VECTOR *Aero )
{
	char tmp[200];
	int Im, Ia, ik;
	double dXv, a;
	double ap, Da, Dm, Vn, vv1;
	double de, fi, fir;
	double cf, c2f, c3f, c4f, sf, s2f, s3f, dr;
	double drabsdr, dr2, dr2absdr;
	double cfa, sfa;
	FILE *fin;

	if( key_Read == FALSE ){

// Загрузка данных из внешних файлов

		key_Read = TRUE;
		fin = fopen( "Msh65Exp.dat", "rt" );

		fgets( tmp, 200, fin );
		sscanf( tmp, "%d%d", &k_Cn, &k_ms );

		fgets( tmp, 200, fin ); sscanf( tmp, "%d", &k_al );
		fgets( tmp, 200, fin ); sscanf( tmp, "%lf", &a );

		Load_Koef_From_DataFile( fin, k_Cn, Cn_Dat );
		Load_Koef_From_DataFile( fin, k_ms, Ms_Dat );

		fclose( fin);

		dA1 = 180./M_PI /a;
	}

// Поиск узла по числу М

	if( Input.rM < sM[0] )Im = 0;
	else if( Input.rM > sM[3] )Im = 3;
	else{
		for( Im = 0; Im < 3; Im++ )
			if( sM[Im + 1] > Input.rM )break;
	}
	Dm = ( Input.rM - sM[Im] ) / ( sM[Im + 1] - sM[Im] );

	Vn = sqrt( Input.Vy * Input.Vy + Input.Vz * Input.Vz );

	if( Vn > 0.000001 ){
		ap  = atan2( Vn, Input.Vx );
		vv1 = 1. / Vn;
		sfa  = Input.Vz * vv1;
		cfa  =-Input.Vy * vv1;
	}
	else {
		Ia = 0;
		ap  = 0.;
		sfa  = 0.;
		cfa  = 1.;
	}

	Da = ap * dA1;
	Ia = (int)Da;
	if( Ia < 0 )Ia = 0;
	if( Ia > k_al - 2 )Ia = k_al - 2;
	Da = Da - Ia;

	Z[0] = (1. - Da) * ( 1. - Dm);
	Z[1] = Da * (1. - Dm);
	Z[2] = Dm * (1. - Da);
	Z[3] = Da * Dm;

	dXv = Input.Xv - XV0;

	fir=atan2( sfa, cfa );

	for( ik = 0; ik < 2; ik++ ){
// вычисление вспомогательных параметров

		fi = fir + ik * M_PI / 2.;
		de=Input.D[ik];

		cf=cos(fi);
		c2f=cos(fi*2);
		c3f=cos(fi*3);
		c4f=cos(fi*4);
		sf=sin(fi);
		s2f=sin(fi*2);
		s3f=sin(fi*3);
		dr=de;
		drabsdr=dr*fabs(dr);
		dr2=dr*dr;
		dr2absdr=dr2*fabs(dr);

// формирование функций разложения для cn

		Fcn[0] = 1;
		Fcn[1] = cf;
		Fcn[2] = c2f;
		Fcn[3] = c3f;
		Fcn[4] = c4f;
		Fcn[5] = sf;
		Fcn[6] = s2f;
		Fcn[7] = s3f;
		Fcn[8] = dr;
		Fcn[9] = drabsdr;
		Fcn[10] = dr2;
		Fcn[11] = dr2absdr;
		Fcn[12] = cf*dr;
		Fcn[13] = cf*drabsdr;
		Fcn[14] = cf*dr2;
		Fcn[15] = cf*dr2absdr;
		Fcn[16] = c2f*dr;
		Fcn[17] = c2f*drabsdr;
		Fcn[18] = c2f*dr2;
		Fcn[19] = c2f*dr2absdr;
		Fcn[20] = c3f*dr;
		Fcn[21] = c3f*drabsdr;
		Fcn[22] = c3f*dr2;
		Fcn[23] = c3f*dr2absdr;
		Fcn[24] = c4f*dr;
		Fcn[25] = c4f*drabsdr;
		Fcn[26] = c4f*dr2;
		Fcn[27] = c4f*dr2absdr;
		Fcn[28] = sf*dr;
		Fcn[29] = sf*drabsdr;
		Fcn[30] = sf*dr2;
		Fcn[31] = sf*dr2absdr;
		Fcn[32] = s2f*dr;
		Fcn[33] = s2f*drabsdr;
		Fcn[34] = s2f*dr2;
		Fcn[35] = s2f*dr2absdr;
		Fcn[36] = s3f*dr;
		Fcn[37] = s3f*drabsdr;
		Fcn[38] = s3f*dr2;
		Fcn[39] = s3f*dr2absdr;

// формирование функций разложения для msh

		Fmsh[0] = 1;
		Fmsh[1] = cf;
		Fmsh[2] = c2f;
		Fmsh[3] = c3f;
		Fmsh[4] = c4f;
		Fmsh[5] = sf;
		Fmsh[6] = s2f;
		Fmsh[7] = s3f;
		Fmsh[8] = dr;
		Fmsh[9] = drabsdr;
		Fmsh[10] = dr2;
		Fmsh[11] = dr2absdr;
		Fmsh[12] = cf*dr;
		Fmsh[13] = cf*drabsdr;
		Fmsh[14] = cf*dr2;
		Fmsh[15] = cf*dr2absdr;
		Fmsh[16] = c2f*dr;
		Fmsh[17] = c2f*drabsdr;
		Fmsh[18] = c2f*dr2;
		Fmsh[19] = c2f*dr2absdr;
		Fmsh[20] = c3f*dr;
		Fmsh[21] = c3f*drabsdr;
		Fmsh[22] = c3f*dr2;
		Fmsh[23] = c3f*dr2absdr;
		Fmsh[24] = c4f*dr;
		Fmsh[25] = c4f*drabsdr;
		Fmsh[26] = c4f*dr2;
		Fmsh[27] = c4f*dr2absdr;
		Fmsh[28] = sf*dr;
		Fmsh[29] = sf*drabsdr;
		Fmsh[30] = sf*dr2;
		Fmsh[31] = sf*dr2absdr;
		Fmsh[32] = s2f*dr;
		Fmsh[33] = s2f*drabsdr;
		Fmsh[34] = s2f*dr2;
		Fmsh[35] = s2f*dr2absdr;
		Fmsh[36] = s3f*dr;
		Fmsh[37] = s3f*drabsdr;
		Fmsh[38] = s3f*dr2;
		Fmsh[39] = s3f*dr2absdr;

	// Типовой расчет коэффициентов по четырем точкам, угол атаки и число М

		Aero->Cn[ik] = F_aero( Ia, Im, k_Cn, k_Cn, Cn_Dat, Fcn );
		Aero->Ms[ik] = F_aero( Ia, Im, k_ms, k_ms, Ms_Dat, Fmsh );

	// Пересчет на текущую центровку

		Aero->Ms[ik] -= Aero->Cn[ik] * dXv;

	}

}

static double F_aero( int Ia, int Im, int Nkoe, int N1, double Dat[5][520], double *Fun )
{
	int j, i, Na = Ia * Nkoe;
	double Cm = 0, Q, *Pp[4];

	Pp[0] = &Dat[Im][Na];
	Pp[1] = &Dat[Im][Na + Nkoe];
	Pp[2] = &Dat[Im + 1][Na];
	Pp[3] = &Dat[Im + 1][Na + Nkoe];

	for( j = 0; j < 4; j++ ){
		Q = 0;
		for( i = 0; i < N1; i++ )
			Q += Pp[j][i] * Fun[i];

		Cm += Q * Z[j];
	}
	return Cm;
}

#define TMP_LENTH		2000

static void Load_Koef_From_DataFile( FILE *KoeFile, int Nkoe, double Buff[5][520] )
{
	char tmp[TMP_LENTH];
	int k, i, j, l;
	double Dum;

	for( k = 0; k < NUMBER_OF_MAX; k++ ){
		fgets( tmp, TMP_LENTH, KoeFile );
		for( i = 0, l = 0; i < k_al; i++ ){
			fscanf( KoeFile, "%lf", &Dum );
			for( j = 0; j < Nkoe; j++ ){
				fscanf( KoeFile, "%lf", &Dum );
				Buff[k][l++] = Dum;
			}
			fgets( tmp, TMP_LENTH, KoeFile );
		}

	}

} 
 
#endif
 
 

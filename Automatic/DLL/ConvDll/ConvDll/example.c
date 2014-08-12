#include "stdafx.h"
#include "c_types.h"
#include "stdlib.h"
#include "math.h"
#include "prog.h"
#include "windows.h"




//Для начала при вызове библиотеки надо сгенерировать структуры для хранения переменных
//  n_ext_vars     - возвращает к-во необходимых внешних переменных (записей в списке)
//  n_din_vars     - количество динамических переменных (записей в списке)
//  n_alg_vars     - количество алгебраических переменных (записей в списке)
//  n_state_vars   - к-во переменных состояния (записей в списке)
//  n_consts       - к-во констант
//  sizeof_state_vars - размер памяти по переменные состояния (память выделяется упраляющей программой)
//  sizeof_consts  - размер памяти под константы
//  sizeof_local_vars - размер памяти под локальные переменные
//  din_vars_dim   - суммарная размерность массива переменных состояния
//  alg_vars_dim   - ---//--- алгебраических переменных
//  ext_vars_info - возвращает указатель на список имён внешних переменных
//  din_vars_info - возвращает указатель на список имён динамических переменных
//  alg_vars_info - возвращает указатель на список имён алгебраических переменных
//  state_vars_info - возвращает указатель на список имён переменных состояния
//  const_info - возвращает указатель на список имён констант
EXPORTED_FUNC INFO_FUNC(
							 int* n_ext_vars, 
							 int* n_din_vars, 
							 int* n_alg_vars,
							 int* n_state_vars,
							 int* n_consts,
                             int* sizeof_state_vars,
							 int* sizeof_consts,
							 int* sizeof_local_vars,
							 int* din_vars_dim,
							 int* alg_vars_dim,
							 void** ext_vars_info, 
							 void** din_vars_info, 
							 void** alg_vars_info, 
							 void** state_vars_info,
							 void** const_info,
							 p_solver_struct solver_data,
                             unsigned int* sheme_hash32,
                             char*   algo_name,
                             void**  algo_object_id
							 )
{  int ret; 
   ret=0;

   //Внешние переменные (адреса)
   #ifdef ext_vars_count
     *n_ext_vars    = ext_vars_count;
     *ext_vars_info = (void*)&ext_vars_names;
   #else
     *n_ext_vars    = 0;
	 *ext_vars_info = NULL;
   #endif

   //Динамические переменные 
   #ifdef din_vars_count
     *n_din_vars    = din_vars_count;
     *din_vars_info = (void*)&din_vars_names;
	 *din_vars_dim  = din_vars_dimension;
   #else
     *n_din_vars    = 0;
     *din_vars_info = NULL;
	 *din_vars_dim  = 0;
   #endif

    //Алгебраические переменные 
   #ifdef alg_vars_count
     *n_alg_vars    = alg_vars_count;
     *alg_vars_info = (void*)&alg_vars_names;
	 *alg_vars_dim  = alg_vars_dimension;
   #else
     *n_alg_vars    = 0;
     *alg_vars_info = NULL;	 
	 *alg_vars_dim  = 0;
   #endif

   //Переменные состояния  
   #ifdef state_vars_count
	 *n_state_vars = state_vars_count;
     *sizeof_state_vars = sizeof(t_state_vars);
	 *state_vars_info = (void*)&state_vars_names;
   #else
	 *n_state_vars = 0;
     *sizeof_state_vars = 0;
	 *state_vars_info = NULL;
   #endif

   #ifdef const_count
	 *n_consts = const_count;
     *sizeof_consts = sizeof(t_consts);
	 *const_info = (void*)&const_names;
   #else
	 *n_consts = 0;
     *sizeof_consts = 0;
	 *const_info = NULL;     
   #endif

    //Локальные (временные) переменные
   #ifdef local_count
     *sizeof_local_vars = sizeof(t_local);
   #else
     *sizeof_local_vars = 0;
   #endif

   return ret;
};

HANDLE hpipefile;

//Функция установки начального состояния
//step           - шаг расчёта
//time           - текущее модельное время (если не используется - то всегда 0)
//ext_vars_addr  - адрес массива адресов внешних переменных
//din_vars       - адрес массива динамических переменных 
//derivates      - адрес массива производных динамических переменных
//alg_vars       - адрес массива алгебраических переменных
//alg_funcs      - адрес массива значений алгебраических функций
//state_vars     - адрес структуры с внутренними переменными
//consts         - адрес структуры с константами
EXPORTED_FUNC INIT_FUNC( double step,
						 double time,
						 ptr_array*        ext_vars_addr,
						 double_array*     din_vars,
						 double_array*     derivates,
						 double_array*     alg_vars,
						 double_array*     alg_funcs,
						 t_state_vars*     state_vars, 
						 t_consts*         consts,
						 p_solver_struct   solver_data,
						 void*             algo_object_id
					   )
{  int ret; 
   int i;

   LPTSTR lpszPipename = TEXT("\\\\.\\pipe\\data");

   ret = 0;

   //Тут мы делаем присвоение начальных значений
   for(i = 0;i<10000;i++){	
     out_0[i] = readdatadllv0_out_0[i];
   };
  

   //Открываем пайп на запись\чтение как нам надо
   hpipefile = CreateFile( 
         lpszPipename,   // pipe name 
         GENERIC_READ |  // read and write access 
         GENERIC_WRITE, 
         0,              // no sharing 
         NULL,           // default security attributes
         OPEN_EXISTING,  // opens existing pipe 
         0,              // default attributes 
         NULL);          // no template file 

   return ret;
};


//Исполнительная функция  
//action         - текущий тип вызова функции
//step           - шаг расчёта
//time           - текущее модельное время (если не используется - то всегда 0)
//ext_vars_addr  - адрес массива адресов внешних переменных
//din_vars       - адрес массива динамических переменных 
//derivates      - адрес массива производных динамических переменных
//alg_vars       - адрес массива алгебраических переменных
//alg_funcs      - адрес массива алгебраических функций
//state_vars     - адрес структуры с внутренними переменными
//consts         - адрес структуры с константами
//locals         - адрес структуры с временными переменными
EXPORTED_FUNC RUN_FUNC(
						 int action,	
						 double step,
						 double time,
						 ptr_array*        ext_vars_addr,
						 double_array*     din_vars,
						 double_array*     derivates,
						 double_array*     alg_vars,
						 double_array*     alg_funcs,
						 t_state_vars*     state_vars, 
						 t_consts*         consts,
						 t_local*          locals,
						 p_solver_struct   solver_data,
						 void*             algo_object_id
					   )
{  int ret; 


/*  ------------------------------------------------------
    Тут пишем код трансляции данных
------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
double tmp1;
char f;
char u_s;
char u_r;
int byteswritten;
int bytesreaded;

ret = 0;

switch (action){
case f_Stop:{

 //Тут надо закрыть пайп на запись чтение
 CloseHandle(hpipefile);

};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

    WriteFile(hpipefile,&input_0,80000,&byteswritten,0);    
    ReadFile(hpipefile,&out_0,80000,&bytesreaded,0);

};break;
};

   
return ret;
};

EXPORTED_FUNC STATE_FUNC(
						 int action,	
						 double step,
						 double time,
						 ptr_array*        ext_vars_addr,
						 double_array*     din_vars,
						 double_array*     derivates,
						 double_array*     alg_vars,
						 double_array*     alg_funcs,
						 t_state_vars*     state_vars, 
						 t_consts*         consts,
						 t_local*          locals,
						 p_solver_struct   solver_data,
						 void*             algo_object_id
					   )
{  int ret; 
   
   ret = 0;
     
   return ret;
};


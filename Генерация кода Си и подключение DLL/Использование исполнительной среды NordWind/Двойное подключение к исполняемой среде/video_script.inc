
//Эта метка нужна для того, чтобы сориентировать элементы на схеме в каком режиме им работать - локальном или удалённом
define remote_mode

initialization
 //Параметры соединения для каждого из приборов
 src1_host = "192.168.81.4:22375;connecttimeout=4000 timeout=1000";
 src2_host = "192.168.81.4:22375;connecttimeout=4000 timeout=1000";
 load_name = "datarcv#default.conf";
 debugger_unit_name = "$(Root)\avrordbg.dll@debugger";
 //Настройки программы для просмотра графиков переменных по умолчанию
 //Путь к программе просмотра архива
 graphic_prog_path = "d:\DCAD\bin\trendstarter.exe";
 //Настройки по умолчанию для просмотрщика архива при выхове из видеокадра
 default_graphic_config = "d:\DCAD\Demo\Visual\SampleFizpribor\default_gr_conf.xml";
 
 //Создаём объекты для подключения кадра к приборам
 source1 = createextmodule(debugger_unit_name); 
 source2 = createextmodule(debugger_unit_name); 
 
 var connected1: boolean, connected2: boolean, fhash: integer;
 connected1 = 0;
 connected2 = 0;
end;


  //Функция обработки соединения 1
procedure DoProcessConnection1
  if (not connected1) then begin 
     if (dbginitialize(source1,src1_host,load_name,fhash) = 0) then begin
       if dbgstart(source1) = 0 then connected1 = 1; 
     end 
     else 
       connected1 = 0;
  end
  else begin
    if dbgexchange(source1) <> 0 then connected1 = 0;
  end;
end;  

  //Функция обработки соединения 2
procedure DoProcessConnection2
  if (not connected2) then begin 
     if (dbginitialize(source2,src2_host,load_name,fhash) = 0) then begin
       if dbgstart(source2) = 0 then connected2 = 1; 
     end 
     else 
       connected2 = 0;
  end
  else begin
    if dbgexchange(source2) <> 0 then connected2 = 0;
  end;
end; 


  //Установка соединения
if not paintstep then begin

  //Асинхронная обработка соединений в отдельных потоках
asyncprocess
  //Подключение канала 1 
  DoProcessConnection1;  
  //Подключение канала 2
  DoProcessConnection2;
end;  

end;

finalization
 //Уничтожение соединения
 freeobject(source1);
 freeobject(source2);
 source1 = 0;
 source2 = 0;
end;

 //Эта функция выполняет вызов программы для просмотра архивных данных 
procedure ShowGraphic(dataname: string)  
  shellexec("open",graphic_prog_path,chr(34)+default_graphic_config+chr(34) + " /cleardatalist /adddata "+dataname+" /title "+
            chr(34)+"Переменная: "+dataname+chr(34)+" /run /stayontop","");
end; 
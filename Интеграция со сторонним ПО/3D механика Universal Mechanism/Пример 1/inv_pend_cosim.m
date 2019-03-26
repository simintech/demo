function [sys,x0,str,ts] =inv_pend_cosim(t,x,u,flag)
switch flag,
case 0
[sys,x0,str,ts] = mdlInitializeSizes();
case 3
sys = mdlOutputs(t,x,u);
case {1, 2, 4}
sys = [];
case 9;
sys = mdlTerminate(t,x,u);
otherwise
error(['Unhandled flag = ',num2str(flag)]);
end;

function [sys,x0,str,ts] = mdlInitializeSizes()
sizes = simsizes;
sizes.NumContStates= 0;
sizes.NumDiscStates= 0;
sizes.NumOutputs=1;
sizes.NumInputs=1;
sizes.DirFeedthrough=1;
sizes.NumSampleTimes=1;
sys = simsizes(sizes);
x0 = []; % No continuous states
str = []; % No state ordering
ts = [0]; % Inherited sample time
global h1
global errcode
global erroutput
global errinit
global errloadcode
global errload
erroutput=false;
errinit=false;
errcode=0;
errloadcode=0;
errload=false;
if (iscom(h1))==0
  h1=actxserver('UMCoSimulation.UMMatlabCoSimul');
  errloadcode=h1.LoadObjectFromFile('c:\users\public\documents\um software lab\universal mechanism\8\samples\cosimulation\inv_pend_cosim\input.dat');
  if ~(errloadcode==0)
    errload=true;
    errordlg('UM COM Server returns the following error message: "Loading model fails". Simulation is interrupted.','UM COM Server error');
  end
  if ~errload
    h1.LoadMatlabSettings('c:\users\public\documents\um software lab\universal mechanism\8\samples\cosimulation\inv_pend_cosim\inv_pend_cosim.cosim');
    h1.ReadTotalConfiguration('c:\users\public\documents\um software lab\universal mechanism\8\samples\cosimulation\inv_pend_cosim\inv_pend_cosim');
    h1.ShowAnimWindow();
    errcode=h1.PrepareIntegration();
  end
end
if errcode==0
elseif (errcode==1)
  errinit=true;
  errordlg('UM COM Server returns the following error message: "Loading model fails". Simulation is interrupted.','UM COM Server error');
else
  errinit=true;
  errordlg(strcat('UM COM Server returns the following error message: "', h1.GetLastError(), '". Simulation is interrupted.'), 'UM COM Server error');
end
% End of mdlInitializeSizes.

function sys = mdlOutputs(t,x,u)
global h1
global errcode
global erroutput
global errinit
global errload
if errinit || errload set_param(gcs, 'SimulationCommand', 'stop'); sys=[];
elseif erroutput==false
  value=[u(1) 0.0];
  h1.SetValues(value);
  errcode=h1.DoIntegrationInterval(t);
  if errcode==0
  elseif (errcode==1)
    erroutput=true;
    set_param(gcs, 'SimulationCommand', 'stop');
    errordlg('UM COM Server returns the following error message: "Server is busy". Simulation is interrupted.','UM COM Server error');
  elseif (errcode==2)
    erroutput=true;
    set_param(gcs, 'SimulationCommand', 'stop');
    errordlg('UM COM Server returns the following error message: "Preparing integration fails". Simulation is interrupted.','UM COM Server error');
  else
    erroutput=true;
    set_param(gcs, 'SimulationCommand', 'stop');
    errordlg(strcat('UM COM Server returns the following error message: "', h1.GetLastError(), '". Simulation is interrupted.'), 'UM COM Server error');
  end
  sys=h1.GetValues();
else sys=[];
end
% End of mdlOutputs.

function sys = mdlTerminate(t,x,u)
global h1
global errload
global errinit
uiwait(msgbox('Simulation completed. Click OK to close UM windows.', 'Simulation completed'));
if (~errload) && (~errinit)
  h1.FinishIntegration();
end
h1.delete;
sys=[];
% End of mdlTerminate.

#!/bin/bash

module load intel/ics_2013.1.046

#lsfliggghts  -beta /home/fabric/cx2302/~Simulations~/Linear_V_Linear/Dry_Cohesion/Edinburgh_all/ -n 60 -W 10:00 -G fabric -J Edin_CoR_0.9  -untar -i  in.all -var rad 2.5e-3 -var stress 40000 -var CoR 0.9 -log Edin_CoR_0.9.log;

#shopt -s expand_aliases


#num2=$(awk 'BEGIN{for(i=20000;i<=80000;i+=20000)print i}')

#for str in $num2
#	do
#        echo $str       
#	lsfliggghts  -beta /home/fabric/cx2302/~Simulations~/Linear_V_Linear/Dry_Cohesion/Edinburgh_all/ -n 60 -W 10:00 -G fabric -J E_S_$str  -untar -i  in.all -var rad 2.5e-3 -var stress $str -var CoR 0.9 -log Edin_CoR_0.9.log;
#done
lsfliggghts  -beta /home/fabric/cx2302/~Simulations~/Linear_V_Linear/Dry_Cohesion/Edinburgh_all_test/ -n 20 -W 10:00 -G fabric -J E_S_$str  -untar -i  in.all -var rad 2.5e-3 -var stress 20000 -var CoR 0.9 -log Edin_CoR_0.9.log;       


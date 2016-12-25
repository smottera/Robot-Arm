#EF: end effector
#AX1..6 : Axes torque
#EF pan/tilt starts with 1,2
####################################################
EF_Weight = 1.500 #Kgrams
EF_radius = 100 #millimeters
EF_Force = EF_Weight * 9.8 / 1000 #mass times acceleration
EF_Torque = EF_Force * EF_radius
EF_HoldingTorque = EF_Weight * (EF_radius / 10) #kg.cm
print('EF_Torque',EF_Torque)
print('EF_Holding Torque', EF_HoldingTorque)
#include all six axes later


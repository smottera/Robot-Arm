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

print('----------------------------')
vStepper = 3.00 #angular velocity of the stepper motor shaft rad/sec or rev/sec
deg_per_sec = vStepper * 360
vStepperTorque = 13 #Kg .cm
gear_ratio = 1/24.0000 #worm gear ratio
arm_radius = 40.00 #mm
swing = arm_radius * 2.00 * (22.00/7) * vStepper * gear_ratio #angular velocity mm/sec
print('swing',swing)

#sec per 60 degrees rotation
speed = (1/vStepper) * (60.0000/360.0000) * (1/gear_ratio)
print('seconds per 60 degree', speed)

finalTorque = (1/gear_ratio) * vStepperTorque
print('Torque=', finalTorque,'KG.cm')

microstepping = 1 #or maybe 1/32
accuracy = microstepping * arm_radius * 1.8 * gear_ratio
print(accuracy, 'mm per step')

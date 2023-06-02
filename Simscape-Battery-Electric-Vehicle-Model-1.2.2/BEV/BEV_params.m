%% Model Parameters for Battery Electric Vehicle System Model

% Copyright 2020-2022 The MathWorks, Inc.

%% Ambient

% Used when thermal model is enabled. Default setting does not use this.
ambient.temp_K = 273.15 + 20; %MAKE SURE THERMAL MODEL IS DISABLED 

%% Vehicle

vehicle.mass_kg = 200; %FROM https://www.motorcyclespecs.co.za/model/ducati/ducati_900ss%2092.htm
vehicle.tireRollingRadius_m = 0.3; %THIS IS GEOMETERY, MEASURE THIS

%DRAG PARAMS
vehicle.roadLoadA_N = 0.02*vehicle.mass_kg; %rolling resistance?
vehicle.roadLoadB_N_per_kph = 0; %first order b-v
vehicle.roadLoadC_N_per_kph2 = 0.035; %c*v^2 aerodynamic drag
vehicle.roadLoad_gravAccel_m_per_s2 = 9.81;

smoothing.vehicle_speedThreshold_kph = 1;
smoothing.vehicle_axleSpeedThreshold_rpm = 1;

initial.vehicle_speed_kph = 0;

%% High Voltage Battery
% For simplicity, load parameters for three high-voltage battery components at once.

%---
% Basic Battery (isothermal)

batteryHV.nominalVoltage_V = 50;
batteryHV.internalResistance_Ohm = 0.01; %Calculate this
batteryHV.nominalCapacity_kWh = 1.6; %MEASURE THIS
batteryHV.voltagePerCell_V = 3.7;  % Open Circuit Voltage. 3.5V to 3.7V assuming Lithium-ion
batteryHV.nominalCharge_Ahr = ...
  batteryHV.nominalCapacity_kWh / batteryHV.nominalVoltage_V * 1000;

% Initial conditions
initial.hvBattery_SOC_pct = 100;
initial.hvBattery_Charge_Ahr = batteryHV.nominalCharge_Ahr * initial.hvBattery_SOC_pct/100;

%---
% For Thermal HV Battery 1 (Battery block from Driveline)

batteryHV.measuredCharge_Ahr = batteryHV.nominalCharge_Ahr * 0.5;
batteryHV.measuredVoltage_V = batteryHV.nominalVoltage_V * 0.9;
batteryHV.RadiationArea_m2 = 1;
batteryHV.RadiationCoeff_W_per_K4m2 = 3e-9;
batteryHV.thermalMass_kJ_per_K = 0.1;

initial.hvBattery_Temperature_K = ambient.temp_K;

ambient.mass_t = 10000;
ambient.SpecificHeat_J_per_Kkg = 1000;

initial.ambientTemp_K = ambient.temp_K;

%---
% For Thermal HV Battery 2 (Battery block from Electrical)

batteryHV.measurementTemperature_K = 273.15 + 25;
batteryHV.secondMeasurementTemperature_K = 273.15 + 0;
batteryHV.secondNominalVoltage_V = batteryHV.nominalVoltage_V * 0.95;
batteryHV.secondInternalResistance_Ohm = batteryHV.internalResistance_Ohm * 2;
batteryHV.secondMeasuredVoltage_V = batteryHV.nominalVoltage_V * 0.9;

%% Reduction Gear
bevGear.gearRatio = 1.0;
bevGear.efficiency = 0.98;

%% Motor Drive Unit
motorDrive.simplePmsmDrv_trqMax_Nm = 140;
motorDrive.simplePmsmDrv_powMax_W = 34e+3;
motorDrive.simplePmsmDrv_timeConst_s = 0.02;

motorDrive.simplePmsmDrv_spdVec_rpm = [100, 450, 800, 1150, 1500];
motorDrive.simplePmsmDrv_trqVec_Nm = [10, 45, 80, 115, 150];
motorDrive.simplePmsmDrv_LossTbl_W = ...
[ 16.02, 251,   872.8, 2230, 4998; ...
  29.77, 262,   875.7, 2217, 4950; ...
  45.35, 281.2, 900,   2217, 4796; ...
  62.14, 299,   924.8, 2191, 4567; ...
  81.1,  320.9, 943.1, 2146, 4379];

motorDrive.simplePmsmDrv_rotorInertia_kg_m2 = 0.393*0.01^2;
motorDrive.simplePmsmDrv_rotorDamping_Nm_per_radps = 1e-5;
motorDrive.simplePmsmDrv_initialRotorSpd_rpm = 0;

motorDrive.spdCtl_trqMax_Nm = motorDrive.simplePmsmDrv_trqMax_Nm;

motorDrive.gearRatioCompensation = 3/bevGear.gearRatio;

% Used when thermal model is enabled. Default setting does not use this.
motorDrive.AmbTemp_K = ambient.temp_K;

%% Controller & Environment

bevControl.MotorSpdRef_tireRadius_m = vehicle.tireRollingRadius_m;
bevControl.MotorSpdRef_reductionGearRaio = bevGear.gearRatio;

bevControl.MotorSpdRef_Ki = 15;
bevControl.MotorSpdRef_Kp = 15;

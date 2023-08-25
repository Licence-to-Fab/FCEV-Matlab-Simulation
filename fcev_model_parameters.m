% environment (env) ----------------------------------------------------
env_grade = 0; % road grade [%]
env_windx_mps = 0; % wind speed x-dir [m/s]
env_ambtemp_C = 25; % ambient temperature [C]


% driver (drive) ---------------------------------------------------------
% longitudinal driver, control
drive_Kp = 20; % proportional gain []
drive_Ki = 1; % integral gain []
drive_Kff = 0.05; % velocity feed-forward []
drive_Kg = 0.01; % grade angle feed-forward [1/deg]
drive_vnom = 100; % nominal speed [velUnits]
drive_Kaw = 0.1; % anti-windup
drive_tauerr = 0.03; % error filter time constant


% battery (batt) --------------------------------------------------------
% datasheet battery
batt_ChargeMax_Ah = 16; % rated capacity at nominal temperature [Ah]
batt_Em_V = [2.8 3.228 3.284 3.361 3.408 3.427 3.472 3.477 3.493 3.504 3.516 3.528 3.537 3.545 3.555 3.561 3.566 3.576 3.587 3.589 3.594 3.6 3.608 3.61 3.616 3.619 3.626 3.632 3.637 3.64 3.645 3.646 3.652 3.655 3.658 3.661 3.664 3.668 3.673 3.678 3.68 3.681 3.686 3.692 3.699 3.702 3.705 3.71 3.717 3.723 3.728 3.733 3.735 3.742 3.749 3.755 3.761 3.768 3.773 3.78 3.791 3.798 3.798 3.814 3.818 3.825 3.841 3.846 3.855 3.863 3.877 3.885 3.894 3.907 3.919 3.926 3.935 3.944 3.954 3.964 3.974 3.988 3.998 4.014 4.029 4.034 4.047 4.065 4.074 4.086 4.097 4.131 4.126 4.138 4.15 4.18 4.174 4.187 4.207 4.231 4.221]; % open circuit voltage table data [V]
batt_CapLUTBp = [0 0.01 0.02 0.03 0.04 0.05 0.06 0.07 0.08 0.09 0.1 0.11 0.12 0.13 0.14 0.15 0.16 0.17 0.18 0.19 0.2 0.21 0.22 0.23 0.24 0.25 0.26 0.27 0.28 0.29 0.3 0.31 0.32 0.33 0.34 0.35 0.36 0.37 0.38 0.39 0.4 0.41 0.42 0.43 0.44 0.45 0.46 0.47 0.48 0.49 0.5 0.51 0.52 0.53 0.54 0.55 0.56 0.57 0.58 0.59 0.6 0.61 0.62 0.63 0.64 0.65 0.66 0.67 0.68 0.69 0.7 0.71 0.72 0.73 0.74 0.75 0.76 0.77 0.78 0.79 0.8 0.81 0.82 0.83 0.84 0.85 0.86 0.87 0.88 0.89 0.9 0.91 0.92 0.93 0.94 0.95 0.96 0.97 0.98 0.99 1]; % open circuit voltage breakpoints 1 []
batt_RInt = 0.001*[1, 1, 1, 1, 1, 1;1, 1, 1, 1, 1, 1]; % internal resistance table data [Ohms]
batt_TempBp_K = [240, 320]; % battery temperature breakpoints 1 [K]
batt_CapSOCBp = [0 0.2 0.4 0.6 0.8 1]; % battery capacity breakpoints 2 []
batt_Ns = 12; % number of cells in series []
batt_Np = 2; % number of cells in parallel []
batt_CapInit_Ah = 32; % initial battery capacity [Ah]


% hydrogen tank (tank) --------------------------------------------------
tank_fccurr_A = -20; % fuel cell current [A]

% starting H2 mass inside tank AND pressure in the H2 tank
tank_vol_L = 7; % H2 tank volume [L]
tank_Pstart_bar = 350; % starting tank pressure [bar]
tank_Rconst = 4.124; % gas constant for H2 at 300K []
tank_temp_K = 298; % tank temperature [K]

% mass of H2 used by fuel cell
tank_fceff = 0.55; % fuel cell efficiency [%]
tank_engydensH2_MJpkg = 120; % energy density of H2 [MJ/kg]


% motor (mot) ------------------------------------------------------------
% motor reference speed
mot_tirerad_m = 0.31; % tire radius [m]
mot_gearratio = 3.2; % gear ratio []

% mapped motor
mot_rotspd_radps = [0, 100, 200, 300, 400, 500, 600]; % vector of rotational speeds [rad/s]
mot_maxtrq_Nm = [85, 85, 85, 80, 70, 55, 30];
mot_Tc_s = 0.02; % torque control time constant [s]


% vehicle (veh) --------------------------------------------------------------------
% vehicle body, main
veh_mass_kg = 220; % vehicle mass [kg]
veh_wheelpaxle = 1; % number of wheels per axle []
veh_xCGfront_m = 0.7; % horizontal distance from CG to front axle [m]
veh_xCGrear_m = 0.7; % horizontal distance from CG to rear axle [m]
veh_yCG_m = 0.5; % CG height above ground [m]

% vehicle body, drag
veh_frontarea_m2 = 0.5; % frontal area [m^2]
veh_dragcoeff = 1.2; % drag coefficient []
veh_airdens_kgpm3 = 1.18; % air density [kg/m^3]

% tire
veh_tirevertload_N = 3000; % rated vertical load [N]
veh_tirelongload_N = 3500; % peak longitudinal force at rated load [N]

% disc brakes
veh_brake_padrad_m = 0.05; % mean pad radius [m]
veh_brakecylbore_m = 0.05; % cylinder bore [m]
veh_brakepadnum = 2; % number of brake pads []


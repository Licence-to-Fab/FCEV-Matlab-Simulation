%% Code to define parameters for ssc_fuel_cell
% Open Model Workspace in the Model Explorer to view and modify parameter
% values. Click 'Reinitialize from Source' to reset to the parameter values
% in this script.

% Copyright 2020 The MathWorks, Inc.

load ssc_fuel_cell_drive_cycle.mat

% Environment conditions
env_p = 0.101325; % [MPa] Pressure
env_T = 20; % [degC] Temperature
env_RH = 0.5; % [-] Relative humidity
env_yO2 = 0.21; % [-] Oxygen mole fraction

% Hydrogen fuel
tank_p = 70; % [MPa] Fuel tank pressure
tank_yH2 = 1 - 3e-4; % [-] Hydrogen mole fraction
tank_V = 120; % [l] Fuel tank volume

% Fuel cell stack
stack_num_cells = 400; % [-] Number cells
stack_area = 280; % [cm^2] Cell area
stack_t_membrane = 125; % [um] Membrane thickness
stack_t_gdl = 250; % [um] Gas diffusion layer thickness
stack_w_channels = 1; % [cm] Gas channel width/height
stack_num_channels = 8; % [-] Number of gas channels per cell
stack_io = 1e-04; % [A/cm^2] Exchange current density
stack_iL = 1.4; % [A/cm^2] Limiting current density
stack_alpha = 0.7; % [-] Charge transfer coefficient
stack_D_gdl = 0.07; % [cm^2/s] Water diffusivity in GDL
stack_membrane_rho = 2000; % [kg/m^3] Density of dry membrane
stack_membrane_MW = 1.1; % [kg/mol] Equivalent weight of dry membrane
stack_mea_rho = 1800; % [kg/s] Overall density of membrane electrode assembly
stack_mea_cp = 870; % [J/(kg*K)] Overall specific heat of membrane electrode assembly

anode_tube_D = 0.01; % [m] Hydrogen tube diameter
cathode_tube_D = 0.05; % [m] Air tube diameter

% Coolant system
coolant_w_channels = 1; % [cm] Coolant channel width/height
coolant_num_passes = 12; % [-] Number of coolant channel passes per layer
coolant_num_layers = 20; % [-] Number of coolant layers in stack
coolant_tube_D = 0.05; % [m] Coolant tube diameter

% Radiator dimensions
radiator_L = 1; % [m] Overall radiator length
radiator_W = 0.025; % [m] Overall radiator width
radiator_H = 0.5; % [m] Overal radiator height
radiator_N_tubes = 25; % [-] Number of coolant tubes
radiator_tube_H = 0.0015; % [m] Height of each coolant tube
radiator_fin_spacing = 0.002; % [-] Fin spacing
radiator_eta_fin = 0.7; % [-] Fin efficiency
radiator_t_wall = 1e-4; % [m] Material thickness
radiator_rho = 2700; % [kg/s] Radiator material density
radiator_cp = 910; % [J/(kg*K)] Radiator material specific heat

radiator_gap_H = (radiator_H - radiator_N_tubes*radiator_tube_H) / (radiator_N_tubes - 1); % [m] Height between coolant tubes
radiator_air_area_primary = 2 * (radiator_N_tubes - 1) * radiator_W * (radiator_L + radiator_gap_H); % [m^2] Primary air heat transfer surface area
radiator_N_fins = (radiator_N_tubes - 1) * radiator_L / radiator_fin_spacing; % [-] Total number of fins
radiator_air_area_fins = 2 * radiator_N_fins * radiator_W * radiator_gap_H; % [m^2] Total fin surface area
radiator_tube_Leq = 2*(radiator_H + 20*radiator_tube_H*radiator_N_tubes); % [m] Additional equivalent tube length for losses due to manifold and splits

% Compressor map
comp_p_ratio_TLU = [1; 1.25; 1.5; 1.75; 2]; % [-] Pressure ratio vector
comp_rpm_TLU = [0, 1800, 3600]; % [rpm] Shaft speed vector
comp_mdot_corr_TLU = [
    0, 0.05,   0.1;
    0, 0.0375, 0.075;
    0, 0.025,  0.05;
    0, 0.0125, 0.025;
    0, 0,      0] * 4; % [kg/s] Corrected mass flow rate table

% Hydrogen property tables
H2_R = 4124.48151675695; % [J/(kg*K)] Specific gas constant
H2_T = [-56.55, -50:10:-10, -5:1:5, 10:10:350]; % [degC] Temperature vector
H2_h = [2783.66044045879, 2873.94181645932, 3012.62601981068, 3152.22537301871, 3292.62486344326, 3433.72138359680, 3504.50184295996, 3518.67512520997, 3532.85394543712, 3547.03822323045, 3561.22787913325, 3575.42283463482, 3589.62301216223, 3603.82833507219, 3618.03872764290, 3632.25411506595, 3646.47442343830, 3717.64725530348, 3860.32198734890, 4003.38288163040, 4146.77354613486, 4290.44463593559, 4434.35318483605, 4578.46197843019, 4722.73896833090, 4867.15672726297, 5011.69194456718, 5156.32496143709, 5301.03934494342, 5445.82149962224, 5590.66031514150, 5735.54684833147, 5880.47403768083, 6025.43644826542, 6170.43004499140, 6315.45199199528, 6460.50047604533, 6605.57455182556, 6750.67400704912, 6895.79924543541, 7040.95118568927, 7186.13117473630, 7331.34091359044, 7476.58239435534, 7621.85784698693, 7767.16969456766, 7912.52051596217, 8057.91301483815, 8203.34999414341, 8348.83433523064, 8494.36898091475, 8639.95692183309]; % [kJ/kg] Specific enthalpy vector
H2_mu = [7.13280985169147, 7.28192581803172, 7.50683010986396, 7.72860158311813, 7.94743907374985, 8.16352107178216, 8.27057966039486, 8.29191522386247, 8.31322574339419, 8.33451136221049, 8.35577222214406, 8.37700846365822, 8.39822022586488, 8.41940764654233, 8.44057086215268, 8.46171000785900, 8.48282521754219, 8.58804682376172, 8.79676834158601, 9.00329345223078, 9.20773222364170, 9.41018554308578, 9.61074613691738, 9.80949945111700, 10.0065244149257, 10.2018941058184, 10.3956763308132, 10.5879341365094, 10.7787262581519, 10.9681075163184, 11.1561291684380, 11.3428392212160, 11.5282827091027, 11.7125019431712, 11.8955367341236, 12.0774245926121, 12.2582009096067, 12.4378991191677, 12.6165508456572, 12.7941860371557, 12.9708330866186, 13.1465189421111, 13.3212692072909, 13.4951082331655, 13.6680592020247, 13.8401442043429, 14.0113843093520, 14.1817996299056, 14.3514093821846, 14.5202319407340, 14.6882848892642, 14.8555850676093]; % [uPa*s] Dynamic viscosity vector
H2_k = [142.834673487453, 146.602208511061, 152.236222042957, 157.732550941948, 163.097652939664, 168.338595936873, 170.914793442425, 171.426608923333, 171.937300226766, 172.446874689218, 172.955339634979, 173.462702374715, 173.968970204106, 174.474150402550, 174.978250231913, 175.481276935350, 175.983237736166, 178.477304495221, 183.389581255575, 188.206454189023, 192.934525090876, 197.580042887656, 202.148890500710, 206.646585109232, 211.078287130673, 215.448814629342, 219.762660868078, 224.024013435935, 228.236773894856, 232.404577248187, 236.530810785993, 240.618632037420, 244.670985680918, 248.690619345047, 252.680098287219, 256.641818973249, 260.578021602720, 264.490801638200, 268.382120402950, 272.253814814231, 276.107606318911, 279.945109095949, 283.767837587053, 287.577213413001, 291.374571728986, 295.161167068166, 298.938178718576, 302.706715674597, 306.467821200562, 310.222477040649, 313.971607306067, 317.716082067666]; % [mW/(m*K)] Thermal conductivity vector
H2_D = 74; % [mm^2/s] Diffusivity

% Oxygen property tables
O2_R = 259.836612622973; % [J/(kg*K)] Specific gas constant
O2_T = [-56.55, -50:10:-10, -5:1:5, 10:10:350]; % [degC] Temperature vector
O2_h = [196.314045635230, 202.302438242727, 211.445560194021, 220.590899228792, 229.740231593225, 238.895348952500, 243.475641264001, 244.391947430149, 245.308340402054, 246.224821996439, 247.141394030059, 248.058058319568, 248.974816681386, 249.891670931563, 250.808622885637, 251.725674358497, 252.642827164235, 257.230174605453, 266.413508632715, 275.609852765421, 284.820965750972, 294.048557917965, 303.294277512928, 312.559698673577, 321.846311315623, 331.155513043735, 340.488603075706, 349.846778083808, 359.231129801281, 368.642644208585, 378.082202097877, 387.550580810768, 397.048456949970, 406.576409877154, 416.134925824813, 425.724402467528, 435.345153816409, 444.997415318718, 454.681349062211, 464.397049000008, 474.144546126762, 483.923813550211, 493.734771414086, 503.577291638585, 513.451202453549, 523.356292706982, 533.292315937896, 543.258994207727, 553.256021688858, 563.283068012223, 573.339781378746, 583.425791441447]; % [kJ/kg] Specific enthalpy vectdor
O2_mu = [15.7665575307288, 16.1727626078850, 16.7849249433608, 17.3877315055497, 17.9815180942032, 18.5666055809413, 18.8559834763191, 18.9136105724852, 18.9711555251620, 19.0286186248432, 19.0860001606775, 19.1433004204737, 19.2005196907073, 19.2576582565260, 19.3147164017561, 19.3716944089079, 19.4285925591820, 19.7118952084836, 20.2726692662067, 20.8258892364295, 21.3718096794610, 21.9106736606882, 22.4427133237112, 22.9681504449081, 23.4871969666892, 24.0000555077772, 24.5069198496509, 25.0079753988870, 25.5033996255713, 25.9933624782616, 26.4780267762054, 26.9575485796604, 27.4320775392600, 27.9017572254189, 28.3667254387956, 28.8271145028300, 29.2830515393565, 29.7346587282699, 30.1820535521826, 30.6253490269743, 31.0646539190931, 31.5000729504200, 31.9317069914666, 32.3596532436319, 32.7840054111974, 33.2048538637040, 33.6222857893065, 34.0363853396718, 34.4472337669430, 34.8549095532629, 35.2594885333161, 35.6610440103170]; % [uPa*s] Dynamic viscosity vector
O2_k = [19.6661951881093, 20.2224765128182, 21.0645207724504, 21.8980296960484, 22.7232456337983, 23.5404090717681, 23.9460452976483, 24.0269406552993, 24.1077592592045, 24.1885013406030, 24.2691671301751, 24.3497568580346, 24.4302707537208, 24.5107090461917, 24.5910719638169, 24.6713597343701, 24.7515725850235, 25.1515209478718, 25.9459275198455, 26.7331962712293, 27.5135401678269, 28.2871691203210, 29.0542797087419, 29.8150645640764, 30.5697094830221, 31.3183935589296, 32.0612893462030, 32.7985630478626, 33.5303747183955, 34.2568784758844, 34.9782227188418, 35.6945503442869, 36.4059989644644, 37.1127011202719, 37.8147844899821, 38.5123720922485, 39.2055824826964, 39.8945299436419, 40.5793246666704, 41.2600729279479, 41.9368772562485, 42.6098365937651, 43.2790464498297, 43.9445990477190, 44.6065834647486, 45.2650857658856, 45.9201891311213, 46.5719739768538, 47.2205180715361, 47.8658966458414, 48.5081824975986, 49.1474460917422]; % [mW/(m*K)] Thermal conductivity vector
O2_D = 18; % [mm^2/s] Diffusivity

% Nitrogen property tables
N2_R = 296.802103844292; % [J/(kg*K)] Specific gas constant
N2_T = [-56.55, -50:10:-10, -5:1:5, 10:10:350]; % [degC] Temperature vector
N2_h = [224.312019475783, 231.141016528663, 241.564116974996, 251.984329606098, 262.402210767198, 272.818266126753, 278.025759131002, 279.067222480148, 280.108675169779, 281.150117667373, 282.191550440608, 283.232973957487, 284.274388686473, 285.315795096618, 286.357193657682, 287.398584840260, 288.439969115894, 293.646803474573, 304.060229225710, 314.473742203777, 324.887858161051, 335.303123493654, 345.720119003427, 356.139461810715, 366.561805672305, 376.987839945795, 387.418287430292, 397.853901301030, 408.295461341278, 418.743769658649, 429.199646054884, 439.663923199077, 450.137441734658, 460.621045430963, 471.115576471389, 481.621870952319, 492.140754650669, 502.673039103050, 513.219518026408, 523.780964098585, 534.358126107445, 544.951726469054, 555.562459108678, 566.190987693008, 576.837944197865, 587.503927792527, 598.189504019663, 608.895204248440, 619.621525377624, 630.368929765337, 641.137845362314, 651.928666026144]; % [kJ/kg] Specific enthalpy vector
N2_mu = [13.7948920665312, 14.1367187351510, 14.6513506072199, 15.1575394445859, 15.6556177860831, 16.1459023391225, 16.3882166949119, 16.4364580271216, 16.4846261830610, 16.5327214469937, 16.5807441017456, 16.6286944287114, 16.6765727078615, 16.7243792177482, 16.7721142355126, 16.8197780368914, 16.8673708962236, 17.1042805670559, 17.5729330929829, 18.0349108462106, 18.4904598524977, 18.9398140034241, 19.3831957199835, 19.8208165930053, 20.2528779961256, 20.6795716689317, 21.1010802692360, 21.5175778943589, 21.9292305719283, 22.3361967211248, 22.7386275855675, 23.1366676391963, 23.5304549665897, 23.9201216191847, 24.3057939488592, 24.6875929202991, 25.0656344035241, 25.4400294478834, 25.8108845387614, 26.1783018381670, 26.5423794103038, 26.9032114331518, 27.2608883970194, 27.6154972909606, 27.9671217778900, 28.3158423591670, 28.6617365293689, 29.0048789219164, 29.3453414461711, 29.6831934165754, 30.0185016743671, 30.3513307023604]; % [uPa*s] Dynamic viscosity vector
N2_k = [19.6296532607374, 20.1533289725195, 20.9436243615696, 21.7231523445233, 22.4923063139090, 23.2514823266989, 23.6274403302585, 23.7023472871786, 23.7771601872884, 23.8518793809024, 23.9265052168265, 24.0010380423605, 24.0754782033001, 24.1498260439393, 24.2240819070729, 24.2982461339996, 24.3723190645241, 24.7413260601341, 25.4726839899413, 26.1954347636057, 26.9098870600572, 27.6163358040134, 28.3150627088262, 29.0063368423447, 29.6904152006066, 30.3675432785589, 31.0379556302294, 31.7018764131555, 32.3595199136277, 33.0110910505971, 33.6567858570436, 34.2967919382928, 34.9312889072676, 35.5604487970156, 36.1844364511046, 36.8034098926428, 37.4175206727930, 38.0269141997105, 38.6317300488700, 39.2321022557508, 39.8281595918420, 40.4200258249072, 41.0078199644172, 41.5916564930240, 42.1716455849090, 42.7478933117983, 43.3205018373934, 43.8895696009277, 44.4551914905138, 45.0174590069098, 45.5764604182929, 46.1322809065919]; % [mW/(m*K)] Thermal conductivity vector
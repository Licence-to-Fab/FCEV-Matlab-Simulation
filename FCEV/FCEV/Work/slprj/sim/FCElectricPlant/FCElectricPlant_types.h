#ifndef RTW_HEADER_FCElectricPlant_types_h_
#define RTW_HEADER_FCElectricPlant_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
#define DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
typedef struct { real_T DischrgLmt_bpt [ 11 ] ; real_T ChrgLmt_bpt [ 11 ] ;
real_T SOC_bpt [ 11 ] ; real_T BattDischrgMax ; real_T BattChrgMax ; real_T
noLoadV [ 42 ] ; real_T CapSOCBp [ 6 ] ; real_T BattTempBp [ 7 ] ; real_T
CapLUTBp [ 101 ] ; real_T Em [ 101 ] ; real_T Ns ; real_T Np ; real_T
BattChargeMax ; real_T BattCapInit ; real_T AH [ 7 ] ; real_T initSOC ;
real_T RInt [ 42 ] ; real_T R0 [ 42 ] ; real_T thermalMass ; }
struct_AFnjoI7EtZZSooCsoe6EE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_H6WPvM8rfrwYCCVKK0ESLD_
#define DEFINED_TYPEDEF_FOR_struct_H6WPvM8rfrwYCCVKK0ESLD_
typedef struct { real_T Vout ; real_T Plim ; real_T currMax ; real_T eff ;
real_T convLoss ; real_T tc ; real_T Vinit ; real_T thermalMass ; real_T
Vdroop ; real_T avgSwitchResistance ; real_T diodeFwdVolt ; real_T
diodeOnResistance ; real_T diodeOffConductance ; real_T inductance ; real_T
inductorSeriesResistance ; real_T capacitance ; real_T CapEffSeriesResistance
; } struct_H6WPvM8rfrwYCCVKK0ESLD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_DwpI6bQuIOImzafpnoLEKE_
#define DEFINED_TYPEDEF_FOR_struct_DwpI6bQuIOImzafpnoLEKE_
typedef struct { real_T Vout ; real_T Plim ; real_T Vdroop ; real_T currMax ;
real_T eff ; real_T convLoss ; real_T tc ; real_T Vinit ; real_T thermalMass
; real_T conductance ; real_T inductance ; real_T capacitance ; real_T
diodeFwdVolt ; real_T diodeOnResistance ; real_T diodeOffConductance ; real_T
avgSwitchResistance ; real_T inductorSeriesResistance ; real_T
CapEffSeriesResistance ; } struct_DwpI6bQuIOImzafpnoLEKE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_xYTLf9xRBpYnquzooZvpnD_
#define DEFINED_TYPEDEF_FOR_struct_xYTLf9xRBpYnquzooZvpnD_
typedef struct { real_T Kp ; real_T Ki ; } struct_xYTLf9xRBpYnquzooZvpnD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_Wto3791LsPBVcniRoISkOB_
#define DEFINED_TYPEDEF_FOR_struct_Wto3791LsPBVcniRoISkOB_
typedef struct { real_T mass ; real_T sh ; } struct_Wto3791LsPBVcniRoISkOB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_rvnIs9AHVZwu2w35qqPFFB_
#define DEFINED_TYPEDEF_FOR_struct_rvnIs9AHVZwu2w35qqPFFB_
typedef struct { real_T volume ; real_T area ; real_T heightVector [ 2 ] ;
real_T areaVectorA1B1 [ 2 ] ; real_T areaVectorA2B2 [ 2 ] ; }
struct_rvnIs9AHVZwu2w35qqPFFB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_diVjHTnqji583kVRbkkROE_
#define DEFINED_TYPEDEF_FOR_struct_diVjHTnqji583kVRbkkROE_
typedef struct { real_T area ; } struct_diVjHTnqji583kVRbkkROE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_DEUdl9FsF3TZX6EcHkXeP_
#define DEFINED_TYPEDEF_FOR_struct_DEUdl9FsF3TZX6EcHkXeP_
typedef struct { real_T bulkMod ; real_T PressMin ; real_T PressMax ; real_T
volumeFraction ; } struct_DEUdl9FsF3TZX6EcHkXeP ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_3IOgwpfZR8NxolTbeBLhyF_
#define DEFINED_TYPEDEF_FOR_struct_3IOgwpfZR8NxolTbeBLhyF_
typedef struct { real_T area ; real_T areaAB ; real_T cd ; real_T RN ; }
struct_3IOgwpfZR8NxolTbeBLhyF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_AVcjrmtELi3LuatCvvLMfG_
#define DEFINED_TYPEDEF_FOR_struct_AVcjrmtELi3LuatCvvLMfG_
typedef struct { real_T length ; real_T area ; real_T diam ; real_T elevGain
; real_T eqLength ; real_T rough ; real_T lamDarcyFrac ; real_T lamUpp ;
real_T turbLow ; real_T lamNu ; } struct_AVcjrmtELi3LuatCvvLMfG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_T7saNohyACqXXOy3H2fnU_
#define DEFINED_TYPEDEF_FOR_struct_T7saNohyACqXXOy3H2fnU_
typedef struct { struct_xYTLf9xRBpYnquzooZvpnD ctrl ;
struct_Wto3791LsPBVcniRoISkOB TM1 ; struct_rvnIs9AHVZwu2w35qqPFFB Tank ;
struct_diVjHTnqji583kVRbkkROE MassFlowSource ; struct_DEUdl9FsF3TZX6EcHkXeP
TL ; struct_3IOgwpfZR8NxolTbeBLhyF LR1 ; struct_AVcjrmtELi3LuatCvvLMfG P1 ;
struct_AVcjrmtELi3LuatCvvLMfG P2 ; struct_AVcjrmtELi3LuatCvvLMfG P3 ; }
struct_T7saNohyACqXXOy3H2fnU ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_zSfISpRpY6aADD7OgXSulC_
#define DEFINED_TYPEDEF_FOR_struct_zSfISpRpY6aADD7OgXSulC_
typedef struct { real_T area ; real_T thick ; real_T cond ; real_T mass ;
real_T sh ; } struct_zSfISpRpY6aADD7OgXSulC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_JO2GXfI9g1rAenTIGmuhPD_
#define DEFINED_TYPEDEF_FOR_struct_JO2GXfI9g1rAenTIGmuhPD_
typedef struct { real_T maxT [ 12 ] ; real_T w_eff_bp [ 12 ] ; real_T Tc_Mot
; real_T T_eff_bp [ 15 ] ; real_T efficiency_table [ 180 ] ; real_T supplyRes
; real_T inertia ; real_T damping ; real_T thermalMass ;
struct_zSfISpRpY6aADD7OgXSulC winding ; struct_zSfISpRpY6aADD7OgXSulC
windingIron ; struct_zSfISpRpY6aADD7OgXSulC ironStack ; }
struct_JO2GXfI9g1rAenTIGmuhPD ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 30
#endif
#ifndef SS_INT64
#define SS_INT64 31
#endif
typedef struct locdm2fqb0b_ locdm2fqb0b ; typedef struct fjefo04diq
m5e23pbc2h ;
#endif

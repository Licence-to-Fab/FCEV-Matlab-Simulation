#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_m.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t385 , NeDsMethodOutput * t386 ) { ETTS0 ab_efOut ;
ETTS0 b_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 gb_efOut ; ETTS0 h_efOut
; ETTS0 hb_efOut ; ETTS0 m_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ; ETTS0
ob_efOut ; ETTS0 s_efOut ; ETTS0 t11 ; ETTS0 t12 ; ETTS0 t13 ; ETTS0 t_efOut
; ETTS0 y_efOut ; PmRealVector out ; real_T X [ 575 ] ; real_T bb_efOut [ 1 ]
; real_T c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T d_efOut [ 1 ] ;
real_T db_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T
ib_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
k_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
lb_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T t170 [
1 ] ; real_T u_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T w_efOut [ 1 ] ;
real_T x_efOut [ 1 ] ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ; real_T
intrm_sf_mf_1401 ; real_T intrm_sf_mf_1637 ; real_T intrm_sf_mf_1661 ; real_T
intrm_sf_mf_1662 ; real_T intrm_sf_mf_1795 ; real_T intrm_sf_mf_1798 ; real_T
intrm_sf_mf_1799 ; real_T intrm_sf_mf_197 ; real_T t169_idx_0 ; real_T t213 ;
real_T t216 ; real_T t219 ; real_T t222 ; real_T t225 ; real_T t228 ; real_T
t231 ; real_T t234 ; real_T t237 ; real_T t240 ; real_T t243 ; real_T t246 ;
real_T t248 ; real_T t249 ; real_T t251 ; real_T t252 ; real_T t254 ; real_T
t256 ; real_T t257 ; real_T t259 ; real_T t260 ; real_T t261 ; real_T t263 ;
real_T t264 ; real_T t265 ; real_T t266 ; real_T t267 ; real_T t269 ; real_T
t270 ; real_T t271 ; real_T t273 ; real_T t274 ; real_T t275 ; real_T t277 ;
real_T t278 ; real_T t279 ; real_T t280 ; real_T t281 ; real_T t283 ; real_T
t284 ; real_T t285 ; real_T t286 ; real_T t288 ; real_T t289 ; real_T t291 ;
real_T t292 ; real_T t294 ; real_T t296 ; real_T t298 ; real_T t300 ; real_T
t302 ; real_T t304 ; real_T t306 ; real_T t308 ; real_T t313 ; real_T t321 ;
real_T t324 ; real_T t325 ; real_T t330 ; real_T t349 ; real_T t354 ; real_T
t365 ; real_T t366 ; real_T t384 ; size_t t15 [ 1 ] ; size_t t16 [ 1 ] ;
size_t t18 [ 1 ] ; size_t t69 [ 1 ] ; size_t t72 [ 1 ] ; int32_T b ; for ( b
= 0 ; b < 575 ; b ++ ) { X [ b ] = t385 -> mX . mX [ b ] ; } out = t386 -> mM
; t170 [ 0ULL ] = X [ 6ULL ] ; t15 [ 0 ] = 20ULL ; t16 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t170 [ 0ULL ] , & t15 [ 0ULL ] , & t16 [ 0ULL ] ) ; t13 = efOut ;
t170 [ 0ULL ] = ( X [ 110ULL ] + X [ 117ULL ] ) / 2.0 ; t18 [ 0 ] = 19ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t170 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t12
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t15
[ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = c_efOut [ 0 ] ;
t384 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & d_efOut [ 0ULL ] , & t13
. mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , &
t15 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = d_efOut [ 0 ]
; Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & e_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = e_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = f_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I = t169_idx_0 ; t384
= Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I - t384 * t384 * X [
6ULL ] * Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I / (
t169_idx_0 == 0.0 ? 1.0E-16 : t169_idx_0 ) * 100000.0 ; t170 [ 0ULL ] = X [
9ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , &
g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t170 [ 0ULL ] , & t15 [ 0ULL ] ,
& t16 [ 0ULL ] ) ; t13 = g_efOut ; t170 [ 0ULL ] = ( X [ 92ULL ] + X [ 99ULL
] ) / 2.0 ; tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , &
h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t170 [ 0ULL ] , & t18 [ 0ULL ] ,
& t16 [ 0ULL ] ) ; t12 = h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [
0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t15 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t169_idx_0 = i_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = j_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & k_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = k_efOut [ 0 ] ; t288 = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = l_efOut [ 0 ] ; t289 = t169_idx_0 ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I = t288 -
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I *
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I * X [ 9ULL ] *
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I / ( t169_idx_0 == 0.0 ?
1.0E-16 : t169_idx_0 ) * 100000.0 ; t170 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t170 [ 0ULL ] , & t15 [ 0ULL ] , & t16 [ 0ULL ] ) ; t13
= m_efOut ; t170 [ 0ULL ] = ( X [ 101ULL ] + X [ 108ULL ] ) / 2.0 ;
tlu2_linear_linear_prelookup ( & n_efOut . mField0 [ 0ULL ] , & n_efOut .
mField1 [ 0ULL ] , & n_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t170 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t12
= n_efOut ; tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t15
[ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = o_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & p_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = p_efOut [ 0 ] ; t288 = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = q_efOut [ 0 ] ; t254 = t169_idx_0 ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ] ,
& t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t15 [ 0ULL ] , & t18 [
0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = r_efOut [ 0 ] ; t291 = t169_idx_0 ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = t254 -
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I *
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I * X [ 11ULL ] * t288 / (
t169_idx_0 == 0.0 ? 1.0E-16 : t169_idx_0 ) * 100000.0 ; t254 = X [ 152ULL ] *
- 0.2 + 0.2 ; if ( X [ 22ULL ] <= 0.0 ) { t292 = 0.0 ; } else { t292 = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) { t260 = 0.0
; } else { t260 = X [ 23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } t256 = ( ( ( 1.0
- t292 ) - t260 ) * 296.802103844292 + t292 * 461.523 ) + t260 *
4124.48151675695 ; t294 = X [ 20ULL ] * t256 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh = X [ 21ULL ]
/ ( t294 == 0.0 ? 1.0E-16 : t294 ) ; if ( X [ 20ULL ] <= 216.59999999999997 )
{ t294 = 216.59999999999997 ; } else { t294 = X [ 20ULL ] >= 623.15 ? 623.15
: X [ 20ULL ] ; } t213 = t294 * t294 ; if ( X [ 26ULL ] <= 0.0 ) { t264 = 0.0
; } else { t264 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ]
<= 0.0 ) { t266 = 0.0 ; } else { t266 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL
] ; } t259 = ( ( ( 1.0 - t264 ) - t266 ) * 296.802103844292 + t264 * 461.523
) + t266 * 4124.48151675695 ; t296 = X [ 24ULL ] * t259 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 = X [ 30ULL ]
/ ( t296 == 0.0 ? 1.0E-16 : t296 ) ; if ( X [ 24ULL ] <= 216.59999999999997 )
{ t296 = 216.59999999999997 ; } else { t296 = X [ 24ULL ] >= 623.15 ? 623.15
: X [ 24ULL ] ; } t216 = t296 * t296 ; if ( X [ 29ULL ] <= 0.0 ) { t248 = 0.0
; } else { t248 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 28ULL ]
<= 0.0 ) { t249 = 0.0 ; } else { t249 = X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL
] ; } t261 = ( ( ( 1.0 - t248 ) - t249 ) * 296.802103844292 + t248 * 461.523
) + t249 * 4124.48151675695 ; t298 = X [ 27ULL ] * t261 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 = X [ 32ULL ]
/ ( t298 == 0.0 ? 1.0E-16 : t298 ) ; if ( X [ 27ULL ] <= 216.59999999999997 )
{ t298 = 216.59999999999997 ; } else { t298 = X [ 27ULL ] >= 623.15 ? 623.15
: X [ 27ULL ] ; } t219 = t298 * t298 ; if ( X [ 35ULL ] <= 0.0 ) { t251 = 0.0
; } else { t251 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ]
<= 0.0 ) { t252 = 0.0 ; } else { t252 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL
] ; } t263 = ( ( ( 1.0 - t251 ) - t252 ) * 296.802103844292 + t251 * 461.523
) + t252 * 4124.48151675695 ; t300 = X [ 33ULL ] * t263 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 = X [ 36ULL ]
/ ( t300 == 0.0 ? 1.0E-16 : t300 ) ; if ( X [ 33ULL ] <= 216.59999999999997 )
{ t300 = 216.59999999999997 ; } else { t300 = X [ 33ULL ] >= 623.15 ? 623.15
: X [ 33ULL ] ; } t222 = t300 * t300 ; if ( X [ 40ULL ] <= 0.0 ) { t257 = 0.0
; } else { t257 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } if ( X [ 41ULL ]
<= 0.0 ) { t265 = 0.0 ; } else { t265 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL
] ; } t267 = ( ( ( 1.0 - t257 ) - t265 ) * 296.802103844292 + t257 * 461.523
) + t265 * 259.836612622973 ; t302 = X [ 38ULL ] * t267 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 = X [ 39ULL ]
/ ( t302 == 0.0 ? 1.0E-16 : t302 ) ; if ( X [ 38ULL ] <= 216.59999999999997 )
{ t302 = 216.59999999999997 ; } else { t302 = X [ 38ULL ] >= 623.15 ? 623.15
: X [ 38ULL ] ; } t225 = t302 * t302 ; if ( X [ 44ULL ] <= 0.0 ) { t269 = 0.0
; } else { t269 = X [ 44ULL ] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ]
<= 0.0 ) { t270 = 0.0 ; } else { t270 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL
] ; } t271 = ( ( ( 1.0 - t269 ) - t270 ) * 296.802103844292 + t269 * 461.523
) + t270 * 259.836612622973 ; t304 = X [ 42ULL ] * t271 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 = X [ 48ULL ]
/ ( t304 == 0.0 ? 1.0E-16 : t304 ) ; if ( X [ 42ULL ] <= 216.59999999999997 )
{ t304 = 216.59999999999997 ; } else { t304 = X [ 42ULL ] >= 623.15 ? 623.15
: X [ 42ULL ] ; } t228 = t304 * t304 ; if ( X [ 47ULL ] <= 0.0 ) { t273 = 0.0
; } else { t273 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ]
<= 0.0 ) { t280 = 0.0 ; } else { t280 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL
] ; } t274 = ( ( ( 1.0 - t273 ) - t280 ) * 296.802103844292 + t273 * 461.523
) + t280 * 259.836612622973 ; t306 = X [ 45ULL ] * t274 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 = X [ 49ULL ]
/ ( t306 == 0.0 ? 1.0E-16 : t306 ) ; if ( X [ 45ULL ] <= 216.59999999999997 )
{ t306 = 216.59999999999997 ; } else { t306 = X [ 45ULL ] >= 623.15 ? 623.15
: X [ 45ULL ] ; } t231 = t306 * t306 ; if ( X [ 52ULL ] <= 0.0 ) { t284 = 0.0
; } else { t284 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ]
<= 0.0 ) { t286 = 0.0 ; } else { t286 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL
] ; } t275 = ( ( ( 1.0 - t284 ) - t286 ) * 296.802103844292 + t284 * 461.523
) + t286 * 259.836612622973 ; t308 = X [ 50ULL ] * t275 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 = X [ 53ULL ]
/ ( t308 == 0.0 ? 1.0E-16 : t308 ) ; if ( X [ 50ULL ] <= 216.59999999999997 )
{ t308 = 216.59999999999997 ; } else { t308 = X [ 50ULL ] >= 623.15 ? 623.15
: X [ 50ULL ] ; } t234 = t308 * t308 ; t170 [ 0ULL ] = X [ 55ULL ] ; t69 [ 0
] = 11ULL ; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , &
s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t170 [ 0ULL ] , & t69 [ 0ULL ]
, & t16 [ 0ULL ] ) ; t13 = s_efOut ; t170 [ 0ULL ] = 1.01325 ; t72 [ 0 ] =
12ULL ; tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , &
t_efOut . mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField30 , & t170 [ 0ULL ] , & t72 [ 0ULL ]
, & t16 [ 0ULL ] ) ; t12 = t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut
[ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField28 , & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t169_idx_0 = u_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 = t169_idx_0
; tlu2_2d_linear_linear_value ( & v_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ]
, & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t69 [ 0ULL ] , &
t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = v_efOut [ 0 ] ; t288 =
t169_idx_0 ; tlu2_2d_linear_linear_value ( & w_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , &
t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = w_efOut [ 0 ]
; t277 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & x_efOut [ 0ULL ] , &
t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 ,
& t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = x_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 =
t169_idx_0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11
= t277 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 * X [ 55ULL ]
* t288 / ( t169_idx_0 == 0.0 ? 1.0E-16 : t169_idx_0 ) * 100000.0 ; t170 [
0ULL ] = X [ 58ULL ] ; tlu2_linear_linear_prelookup ( & y_efOut . mField0 [
0ULL ] , & y_efOut . mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t170 [ 0ULL ] , & t69 [ 0ULL ]
, & t16 [ 0ULL ] ) ; t13 = y_efOut ; t170 [ 0ULL ] = X [ 57ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t170 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t12 = ab_efOut ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , &
t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = bb_efOut [ 0
] ; t277 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & cb_efOut [ 0ULL ] , &
t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 ,
& t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = cb_efOut [
0 ] ; t278 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & db_efOut [ 0ULL ] ,
& t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL
] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34
, & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = db_efOut
[ 0 ] ; t279 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ]
, & t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 . mField0 [
0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField32 , & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 =
eb_efOut [ 0 ] ; t281 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & fb_efOut
[ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField33 , & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t169_idx_0 = fb_efOut [ 0 ] ; t285 = X [ 57ULL ] / ( t281 == 0.0 ? 1.0E-16 :
t281 ) * 100.0 + t169_idx_0 ; t283 = ( t279 - t277 * t285 * 1000.0 ) * t281 *
0.0040159681273635624 ; t279 = ( t285 * t281 / ( t278 == 0.0 ? 1.0E-16 : t278
) * 0.01 - X [ 58ULL ] * t277 ) * 0.0040159681273635624 ; t170 [ 0ULL ] = X [
60ULL ] ; tlu2_linear_linear_prelookup ( & gb_efOut . mField0 [ 0ULL ] , &
gb_efOut . mField1 [ 0ULL ] , & gb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t170 [ 0ULL ] , & t69 [ 0ULL ]
, & t16 [ 0ULL ] ) ; t11 = gb_efOut ; t170 [ 0ULL ] = X [ 59ULL ] ;
tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [ 0ULL ] , & hb_efOut .
mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t170 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t12 = hb_efOut ; tlu2_2d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t11 .
mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , &
t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = ib_efOut [ 0
] ; t285 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ] , &
t11 . mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 ,
& t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = jb_efOut [
0 ] ; t365 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] ,
& t11 . mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL
] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34
, & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = kb_efOut
[ 0 ] ; t366 = t169_idx_0 ; tlu2_2d_linear_linear_value ( & lb_efOut [ 0ULL ]
, & t11 . mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t12 . mField0 [
0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField32 , & t69 [ 0ULL ] , & t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 =
lb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 = t169_idx_0
; tlu2_2d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t11 . mField0 [ 0ULL
] , & t11 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t69 [ 0ULL ] , &
t72 [ 0ULL ] , & t16 [ 0ULL ] ) ; t169_idx_0 = mb_efOut [ 0 ] ; t354 = X [
59ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) * 100.0 +
t169_idx_0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato18
= ( t366 - t285 * t354 * 1000.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
0.00093750000000000007 ; t366 = ( t354 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 / ( t365 ==
0.0 ? 1.0E-16 : t365 ) * 0.01 - X [ 60ULL ] * t285 ) * 0.00093750000000000007
; if ( X [ 65ULL ] <= 0.0 ) { t354 = 0.0 ; } else { t354 = X [ 65ULL ] >= 1.0
? 1.0 : X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) { t349 = 0.0 ; } else {
t349 = X [ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t313 = ( ( ( 1.0 - t354 ) -
t349 ) * 296.802103844292 + t354 * 461.523 ) + t349 * 4124.48151675695 ; t330
= X [ 62ULL ] * t313 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 = X [ 63ULL ]
/ ( t330 == 0.0 ? 1.0E-16 : t330 ) ; if ( X [ 62ULL ] <= 216.59999999999997 )
{ t330 = 216.59999999999997 ; } else { t330 = X [ 62ULL ] >= 623.15 ? 623.15
: X [ 62ULL ] ; } t237 = t330 * t330 ; if ( X [ 68ULL ] <= 0.0 ) {
intrm_sf_mf_197 = 0.0 ; } else { intrm_sf_mf_197 = X [ 68ULL ] >= 1.0 ? 1.0 :
X [ 68ULL ] ; } if ( X [ 69ULL ] <= 0.0 ) { intrm_sf_mf_1795 = 0.0 ; } else {
intrm_sf_mf_1795 = X [ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; }
intrm_sf_mf_1401 = ( ( ( 1.0 - intrm_sf_mf_197 ) - intrm_sf_mf_1795 ) *
296.802103844292 + intrm_sf_mf_197 * 461.523 ) + intrm_sf_mf_1795 *
4124.48151675695 ; t288 = X [ 66ULL ] * intrm_sf_mf_1401 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 = X [ 67ULL ]
/ ( t288 == 0.0 ? 1.0E-16 : t288 ) ; if ( X [ 66ULL ] <= 216.59999999999997 )
{ t288 = 216.59999999999997 ; } else { t288 = X [ 66ULL ] >= 623.15 ? 623.15
: X [ 66ULL ] ; } t240 = t288 * t288 ; if ( X [ 72ULL ] <= 0.0 ) {
intrm_sf_mf_1798 = 0.0 ; } else { intrm_sf_mf_1798 = X [ 72ULL ] >= 1.0 ? 1.0
: X [ 72ULL ] ; } if ( X [ 71ULL ] <= 0.0 ) { intrm_sf_mf_1799 = 0.0 ; } else
{ intrm_sf_mf_1799 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; }
intrm_sf_mf_1637 = ( ( ( 1.0 - intrm_sf_mf_1798 ) - intrm_sf_mf_1799 ) *
296.802103844292 + intrm_sf_mf_1798 * 461.523 ) + intrm_sf_mf_1799 *
259.836612622973 ; t324 = X [ 70ULL ] * intrm_sf_mf_1637 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 = X [ 54ULL ]
/ ( t324 == 0.0 ? 1.0E-16 : t324 ) ; if ( X [ 70ULL ] <= 216.59999999999997 )
{ t324 = 216.59999999999997 ; } else { t324 = X [ 70ULL ] >= 623.15 ? 623.15
: X [ 70ULL ] ; } t243 = t324 * t324 ; if ( X [ 75ULL ] <= 0.0 ) { t325 = 0.0
; } else { t325 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL ]
<= 0.0 ) { intrm_sf_mf_1661 = 0.0 ; } else { intrm_sf_mf_1661 = X [ 74ULL ]
>= 1.0 ? 1.0 : X [ 74ULL ] ; } intrm_sf_mf_1662 = ( ( ( 1.0 - t325 ) -
intrm_sf_mf_1661 ) * 296.802103844292 + t325 * 461.523 ) + intrm_sf_mf_1661 *
4124.48151675695 ; t321 = X [ 73ULL ] * intrm_sf_mf_1662 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 = X [ 37ULL ]
/ ( t321 == 0.0 ? 1.0E-16 : t321 ) ; if ( X [ 73ULL ] <= 216.59999999999997 )
{ t321 = 216.59999999999997 ; } else { t321 = X [ 73ULL ] >= 623.15 ? 623.15
: X [ 73ULL ] ; } t246 = t321 * t321 ; t169_idx_0 = ( ( ( 1074.1165326382641
+ t306 * - 0.2214565261064495 ) + t231 * 0.00037212980109014541 ) * ( ( 1.0 -
t273 ) - t280 ) + ( ( 1479.6504774711011 + t306 * 1.2002114337048222 ) + t231
* - 0.00038614513167823636 ) * t273 ) + ( ( 900.63941224838356 + t306 * -
0.044484923911382625 ) + t231 * 0.00036936011832044979 ) * t280 ; t273 = ( (
( 1074.1165326382641 + t308 * - 0.2214565261064495 ) + t234 *
0.00037212980109014541 ) * ( ( 1.0 - t284 ) - t286 ) + ( ( 1479.6504774711011
+ t308 * 1.2002114337048222 ) + t234 * - 0.00038614513167823636 ) * t284 ) +
( ( 900.63941224838356 + t308 * - 0.044484923911382625 ) + t234 *
0.00036936011832044979 ) * t286 ; t306 = ( ( ( 1074.1165326382641 + t288 * -
0.2214565261064495 ) + t240 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_197 ) - intrm_sf_mf_1795 ) + ( ( 1479.6504774711011 + t288 *
1.2002114337048222 ) + t240 * - 0.00038614513167823636 ) * intrm_sf_mf_197 )
+ ( ( 12825.281119789837 + t288 * 6.9647057412840034 ) + t240 * -
0.0070524868246844051 ) * intrm_sf_mf_1795 ; t284 = ( ( ( 1074.1165326382641
+ t324 * - 0.2214565261064495 ) + t243 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1798 ) - intrm_sf_mf_1799 ) + ( ( 1479.6504774711011 + t324 *
1.2002114337048222 ) + t243 * - 0.00038614513167823636 ) * intrm_sf_mf_1798 )
+ ( ( 900.63941224838356 + t324 * - 0.044484923911382625 ) + t243 *
0.00036936011832044979 ) * intrm_sf_mf_1799 ; t324 = X [ 7ULL ] * 287.0 ;
t170 [ 0ULL ] = X [ 8ULL ] ; tlu2_linear_linear_prelookup ( & nb_efOut .
mField0 [ 0ULL ] , & nb_efOut . mField1 [ 0ULL ] , & nb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t170 [ 0ULL ] , &
t15 [ 0ULL ] , & t16 [ 0ULL ] ) ; t12 = nb_efOut ; t170 [ 0ULL ] = X [ 14ULL
] ; tlu2_linear_linear_prelookup ( & ob_efOut . mField0 [ 0ULL ] , & ob_efOut
. mField1 [ 0ULL ] , & ob_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t170 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t13 = ob_efOut ; tlu2_2d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , &
t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , &
t15 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t170 [ 0 ] = pb_efOut [ 0
] ; intrm_sf_mf_197 = t170 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
qb_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , &
t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t15 [ 0ULL ] , & t18 [ 0ULL ] , & t16 [ 0ULL ] ) ;
t170 [ 0 ] = qb_efOut [ 0 ] ; intrm_sf_mf_1795 = t170 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & rb_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t15 [ 0ULL ] , &
t18 [ 0ULL ] , & t16 [ 0ULL ] ) ; t170 [ 0 ] = rb_efOut [ 0 ] ; t288 = t170 [
0ULL ] ; intrm_sf_mf_1799 = t254 * X [ 158ULL ] * intrm_sf_mf_197 * 0.005 ;
intrm_sf_mf_197 = ( ( ( 1074.1165326382641 + t294 * - 0.2214565261064495 ) +
t213 * 0.00037212980109014541 ) * ( ( 1.0 - t292 ) - t260 ) + ( (
1479.6504774711011 + t294 * 1.2002114337048222 ) + t213 * -
0.00038614513167823636 ) * t292 ) + ( ( 12825.281119789837 + t294 *
6.9647057412840034 ) + t213 * - 0.0070524868246844051 ) * t260 ; t260 = ( ( (
1074.1165326382641 + t298 * - 0.2214565261064495 ) + t219 *
0.00037212980109014541 ) * ( ( 1.0 - t248 ) - t249 ) + ( ( 1479.6504774711011
+ t298 * 1.2002114337048222 ) + t219 * - 0.00038614513167823636 ) * t248 ) +
( ( 12825.281119789837 + t298 * 6.9647057412840034 ) + t219 * -
0.0070524868246844051 ) * t249 ; t294 = ( ( ( 1074.1165326382641 + t300 * -
0.2214565261064495 ) + t222 * 0.00037212980109014541 ) * ( ( 1.0 - t251 ) -
t252 ) + ( ( 1479.6504774711011 + t300 * 1.2002114337048222 ) + t222 * -
0.00038614513167823636 ) * t251 ) + ( ( 12825.281119789837 + t300 *
6.9647057412840034 ) + t222 * - 0.0070524868246844051 ) * t252 ; t249 = - (
t254 * X [ 155ULL ] * intrm_sf_mf_1795 * 0.005 ) / 1.1843079200592157 ; t298
= - ( ( X [ 7ULL ] + 126.84999999999997 ) * t254 * X [ 155ULL ] *
intrm_sf_mf_1795 * 0.005 ) ; t252 = ( t254 * X [ 155ULL ] * 0.005 / ( t288 ==
0.0 ? 1.0E-16 : t288 ) * 1.0E-5 + X [ 152ULL ] * X [ 155ULL ] * 0.001 / ( X [
14ULL ] == 0.0 ? 1.0E-16 : X [ 14ULL ] ) * 1.0E-5 ) * 100000.0 /
1.1843079200592157 ; t288 = ( ( X [ 7ULL ] + 126.84999999999997 ) * t254 * X
[ 155ULL ] * 0.005 / ( t288 == 0.0 ? 1.0E-16 : t288 ) * 0.01 + ( ( X [ 7ULL ]
+ 126.84999999999997 ) / ( t324 == 0.0 ? 1.0E-16 : t324 ) * 1000.0 - 1.0 ) *
X [ 152ULL ] * 0.001 ) * 100.0 ; t254 = - intrm_sf_mf_1795 * X [ 8ULL ] *
t254 * 0.005 * 100.0 ; t256 = ( intrm_sf_mf_197 - t256 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh *
0.0078539816339744835 / 2246.65922904024 ; t292 = ( ( ( ( (
1074.1165326382641 + t296 * - 0.2214565261064495 ) + t216 *
0.00037212980109014541 ) * ( ( 1.0 - t264 ) - t266 ) + ( ( 1479.6504774711011
+ t296 * 1.2002114337048222 ) + t216 * - 0.00038614513167823636 ) * t264 ) +
( ( 12825.281119789837 + t296 * 6.9647057412840034 ) + t216 * -
0.0070524868246844051 ) * t266 ) - t259 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
2.6773120849090417 / 2246.65922904024 ; t260 = ( t260 - t261 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
2.6773120849090417 / 2448.8207083326588 ; t294 = ( t294 - t263 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
0.049087385212340524 / 2246.65922904024 ; t266 = ( ( ( ( ( 1074.1165326382641
+ t304 * - 0.2214565261064495 ) + t228 * 0.00037212980109014541 ) * ( ( 1.0 -
t269 ) - t270 ) + ( ( 1479.6504774711011 + t304 * 1.2002114337048222 ) + t228
* - 0.00038614513167823636 ) * t269 ) + ( ( 900.63941224838356 + t304 * -
0.044484923911382625 ) + t228 * 0.00036936011832044979 ) * t270 ) - t271 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
2.6773120849090417 / 2172.7681408465714 ; t306 = ( t306 - intrm_sf_mf_1401 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
0.0078539816339744835 / 2246.65922904024 ; t284 = ( t284 - intrm_sf_mf_1637 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 * 0.03 /
2172.7681408465714 ; out . mX [ 0 ] = 0.5 ; out . mX [ 1 ] = 1.0 ; out . mX [
2 ] = 1.0 ; out . mX [ 3 ] = 1.0 ; out . mX [ 4 ] = - 1.0 ; out . mX [ 5 ] =
- 1.0 ; out . mX [ 6 ] = t384 *
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
7.8539816339744831E-8 ; out . mX [ 7 ] = - ( X [ 152ULL ] * 0.001 ) * X [
155ULL ] / ( X [ 7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) / 1.1843079200592157
; out . mX [ 8 ] = ( 1000.0 - ( X [ 7ULL ] + 126.84999999999997 ) / ( X [
7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) * 1000.0 ) * X [ 155ULL ] * X [ 152ULL
] * 0.001 * 0.001 ; out . mX [ 9 ] = t249 ; out . mX [ 10 ] = t298 ; out . mX
[ 11 ] = intrm_sf_mf_1799 * 0.001 ; out . mX [ 12 ] =
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I * t289 *
7.8539816339744831E-8 ; out . mX [ 13 ] = - 1.0 ; out . mX [ 14 ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I * t291 *
7.8539816339744831E-8 ; out . mX [ 15 ] = - 1.0 ; out . mX [ 16 ] = 0.8 ; out
. mX [ 17 ] = t252 ; out . mX [ 18 ] = t288 ; out . mX [ 19 ] = t254 ; out .
mX [ 20 ] = 1.0 ; out . mX [ 21 ] = - 1.0 ; out . mX [ 22 ] = - 1.0 ; out .
mX [ 23 ] = - 0.001 ; out . mX [ 24 ] = - 0.005 ; out . mX [ 25 ] = - ( 1.0 /
( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 26 ] = t256 ; out . mX [
27 ] = 1.0 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 28 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh *
7.8539816339744828 ; out . mX [ 29 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh *
7.8539816339744828 ; out . mX [ 30 ] = - ( 1.0 / ( X [ 24ULL ] == 0.0 ?
1.0E-16 : X [ 24ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
2677.3120849090419 / 12.896402563644669 ; out . mX [ 31 ] = t292 ; out . mX [
32 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
2677.3120849090419 ; out . mX [ 33 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
2677.3120849090419 ; out . mX [ 34 ] = - ( 1.0 / ( X [ 27ULL ] == 0.0 ?
1.0E-16 : X [ 27ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
2677.3120849090419 / 13.896402563644669 ; out . mX [ 35 ] = t260 ; out . mX [
36 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
2677.3120849090419 ; out . mX [ 37 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
2677.3120849090419 ; out . mX [ 38 ] = 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 :
X [ 30ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
2677.3120849090419 / 12.896402563644669 ; out . mX [ 39 ] = - 1.0 ; out . mX
[ 40 ] = 1.0 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
2677.3120849090419 / 13.896402563644669 ; out . mX [ 41 ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
49.087385212340521 / 12.896402563644669 ; out . mX [ 42 ] = t294 ; out . mX [
43 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
49.087385212340521 ; out . mX [ 44 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
49.087385212340521 ; out . mX [ 45 ] = 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 :
X [ 36ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
49.087385212340521 / 12.896402563644669 ; out . mX [ 46 ] = 1.0 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
12.500000000000004 / 12.896402563644669 ; out . mX [ 47 ] = - ( 1.0 / ( X [
38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
196.34954084936209 ; out . mX [ 48 ] = ( ( ( ( ( 1074.1165326382641 + t302 *
- 0.2214565261064495 ) + t225 * 0.00037212980109014541 ) * ( ( 1.0 - t257 ) -
t265 ) + ( ( 1479.6504774711011 + t302 * 1.2002114337048222 ) + t225 * -
0.00038614513167823636 ) * t257 ) + ( ( 900.63941224838356 + t302 * -
0.044484923911382625 ) + t225 * 0.00036936011832044979 ) * t265 ) - t267 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
0.1963495408493621 / 2172.7681408465714 ; out . mX [ 49 ] = 1.0 / ( X [ 39ULL
] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
196.34954084936209 ; out . mX [ 50 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
196.34954084936209 ; out . mX [ 51 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
196.34954084936209 ; out . mX [ 52 ] = - ( 1.0 / ( X [ 42ULL ] == 0.0 ?
1.0E-16 : X [ 42ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
2677.3120849090419 ; out . mX [ 53 ] = t266 ; out . mX [ 54 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
2677.3120849090419 ; out . mX [ 55 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
2677.3120849090419 ; out . mX [ 56 ] = - ( 1.0 / ( X [ 45ULL ] == 0.0 ?
1.0E-16 : X [ 45ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
2677.3120849090419 / 1.5549856083302016 ; out . mX [ 57 ] = ( t169_idx_0 -
t274 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
2.6773120849090417 / 2374.9296201389902 ; out . mX [ 58 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
2677.3120849090419 ; out . mX [ 59 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
2677.3120849090419 ; out . mX [ 60 ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 :
X [ 48ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
2677.3120849090419 ; out . mX [ 61 ] = 1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 :
X [ 49ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
2677.3120849090419 / 1.5549856083302016 ; out . mX [ 62 ] = - ( 1.0 / ( X [
50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
49.087385212340521 ; out . mX [ 63 ] = ( t273 - t275 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
0.049087385212340524 / 2172.7681408465714 ; out . mX [ 64 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
49.087385212340521 ; out . mX [ 65 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
49.087385212340521 ; out . mX [ 66 ] = 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 :
X [ 53ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
49.087385212340521 ; out . mX [ 67 ] = 1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 :
X [ 54ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 *
29.999999999999996 ; out . mX [ 68 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 * ( X [ 56ULL
] * 0.1 + 0.0001 ) * 0.001 / 8385.55841330098 ; out . mX [ 69 ] = 1.0 ; out .
mX [ 70 ] = 1.0 / ( t278 == 0.0 ? 1.0E-16 : t278 ) * t281 *
0.0040159681273635624 ; out . mX [ 71 ] = t279 * 100.0 / 16.703067073570942 ;
out . mX [ 72 ] = - t277 * t281 * 0.0040159681273635624 ; out . mX [ 73 ] =
t283 * 0.001 / 16.703067073570942 ; out . mX [ 74 ] = 1.0 / ( t365 == 0.0 ?
1.0E-16 : t365 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
0.00093750000000000007 ; out . mX [ 75 ] = t366 * 100.0 / 3.8992155527272074
; out . mX [ 76 ] = - t285 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
0.00093750000000000007 ; out . mX [ 77 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato18 * 0.001 /
3.8992155527272074 ; out . mX [ 78 ] = - 1.0 ; out . mX [ 79 ] = - ( 1.0 / (
X [ 62ULL ] == 0.0 ? 1.0E-16 : X [ 62ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 * 12000.0 /
12.896402563644669 ; out . mX [ 80 ] = ( ( ( ( ( 1074.1165326382641 + t330 *
- 0.2214565261064495 ) + t237 * 0.00037212980109014541 ) * ( ( 1.0 - t354 ) -
t349 ) + ( ( 1479.6504774711011 + t330 * 1.2002114337048222 ) + t237 * -
0.00038614513167823636 ) * t354 ) + ( ( 12825.281119789837 + t330 *
6.9647057412840034 ) + t237 * - 0.0070524868246844051 ) * t349 ) - t313 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 * 12.0 /
2246.65922904024 ; out . mX [ 81 ] = 1.0 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X
[ 63ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18
* 12000.0 / 12.896402563644669 ; out . mX [ 82 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 * 12000.0 ;
out . mX [ 83 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 * 12000.0 ;
out . mX [ 84 ] = - ( 1.0 / ( X [ 66ULL ] == 0.0 ? 1.0E-16 : X [ 66ULL ] ) )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 85 ] = t306 ; out . mX [
86 ] = 1.0 / ( X [ 67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 87 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
7.8539816339744828 ; out . mX [ 88 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
7.8539816339744828 ; out . mX [ 89 ] = - ( 1.0 / ( X [ 70ULL ] == 0.0 ?
1.0E-16 : X [ 70ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 *
29.999999999999996 ; out . mX [ 90 ] = t284 ; out . mX [ 91 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 *
29.999999999999996 ; out . mX [ 92 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 *
29.999999999999996 ; out . mX [ 93 ] = - ( 1.0 / ( X [ 73ULL ] == 0.0 ?
1.0E-16 : X [ 73ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
12.500000000000004 / 12.896402563644669 ; out . mX [ 94 ] = ( ( ( ( (
1074.1165326382641 + t321 * - 0.2214565261064495 ) + t246 *
0.00037212980109014541 ) * ( ( 1.0 - t325 ) - intrm_sf_mf_1661 ) + ( (
1479.6504774711011 + t321 * 1.2002114337048222 ) + t246 * -
0.00038614513167823636 ) * t325 ) + ( ( 12825.281119789837 + t321 *
6.9647057412840034 ) + t246 * - 0.0070524868246844051 ) * intrm_sf_mf_1661 )
- intrm_sf_mf_1662 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
0.012500000000000002 / 2246.65922904024 ; out . mX [ 95 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
12.500000000000004 ; out . mX [ 96 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
12.500000000000004 ; out . mX [ 97 ] = 5.0E-6 ; out . mX [ 98 ] = 0.02 ; (
void ) LC ; ( void ) t386 ; return 0 ; }

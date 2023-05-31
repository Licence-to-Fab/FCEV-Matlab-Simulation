#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_obs_act.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_obs_act ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t361 , NeDsMethodOutput * t362 ) { ETTS0 b_efOut
; ETTS0 bb_efOut ; ETTS0 db_efOut ; ETTS0 efOut ; ETTS0 f_efOut ; ETTS0
fb_efOut ; ETTS0 g_efOut ; ETTS0 hb_efOut ; ETTS0 jb_efOut ; ETTS0 k_efOut ;
ETTS0 l_efOut ; ETTS0 lb_efOut ; ETTS0 nb_efOut ; ETTS0 p_efOut ; ETTS0
pb_efOut ; ETTS0 q_efOut ; ETTS0 rb_efOut ; ETTS0 t17 ; ETTS0 t18 ; ETTS0
u_efOut ; ETTS0 w_efOut ; ETTS0 y_efOut ; PmRealVector out ; real_T t141 [
2582 ] ; real_T X [ 575 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 8 ]
; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 8
] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ 8
] ; real_T t154 [ 8 ] ; real_T t159 [ 8 ] ; real_T t164 [ 8 ] ; real_T t166 [
8 ] ; real_T t168 [ 8 ] ; real_T t170 [ 8 ] ; real_T ab_efOut [ 1 ] ; real_T
c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T e_efOut
[ 1 ] ; real_T eb_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T h_efOut [ 1 ]
; real_T i_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T j_efOut [ 1 ] ;
real_T kb_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T
sb_efOut [ 1 ] ; real_T t171 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T v_efOut [
1 ] ; real_T x_efOut [ 1 ] ; real_T Battery_System_Battery_Q ; real_T
Battery_System_DC_DC_Converter_p2_v ; real_T
Electrical_Cooling_System_Tank_Convection_HLiq_Q ; real_T
Electrical_Cooling_System_Tank_Tank_level ; real_T
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co ; real_T
Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 ; real_T
Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi94 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T
U_idx_12 ; real_T U_idx_13 ; real_T U_idx_14 ; real_T U_idx_15 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T t169_idx_0 ; real_T
t206 ; real_T t207 ; real_T t208 ; real_T t209 ; real_T t210 ; real_T t212 ;
real_T t216 ; real_T t217 ; real_T t220 ; real_T t221 ; real_T t222 ; real_T
t225 ; real_T t226 ; real_T t227 ; real_T t228 ; real_T t229 ; real_T t230 ;
real_T t231 ; real_T t232 ; real_T t235 ; real_T t238 ; real_T t242 ; real_T
t250 ; real_T t251 ; real_T t256 ; real_T t258 ; real_T t264 ; real_T t266 ;
real_T t272 ; real_T t273 ; real_T t276 ; real_T t277 ; real_T t279 ; real_T
t282 ; real_T t283 ; real_T t284 ; real_T t285 ; real_T t287 ; real_T t289 ;
real_T t292 ; real_T t293 ; real_T t294 ; real_T t299 ; real_T t301 ; real_T
t303 ; size_t t23 [ 1 ] ; size_t t25 [ 1 ] ; size_t t82 [ 1 ] ; size_t t197 ;
int32_T b ; U_idx_0 = t361 -> mU . mX [ 0 ] ; U_idx_1 = t361 -> mU . mX [ 1 ]
; U_idx_2 = t361 -> mU . mX [ 2 ] ; U_idx_3 = t361 -> mU . mX [ 3 ] ; U_idx_4
= t361 -> mU . mX [ 4 ] ; U_idx_5 = t361 -> mU . mX [ 5 ] ; U_idx_6 = t361 ->
mU . mX [ 6 ] ; U_idx_7 = t361 -> mU . mX [ 7 ] ; U_idx_8 = t361 -> mU . mX [
8 ] ; U_idx_9 = t361 -> mU . mX [ 9 ] ; U_idx_10 = t361 -> mU . mX [ 10 ] ;
U_idx_11 = t361 -> mU . mX [ 11 ] ; U_idx_12 = t361 -> mU . mX [ 12 ] ;
U_idx_13 = t361 -> mU . mX [ 13 ] ; U_idx_14 = t361 -> mU . mX [ 14 ] ;
U_idx_15 = t361 -> mU . mX [ 15 ] ; for ( b = 0 ; b < 575 ; b ++ ) { X [ b ]
= t361 -> mX . mX [ b ] ; } out = t362 -> mOBS_ACT ; Battery_System_Battery_Q
= X [ 0ULL ] * - 0.01 + U_idx_0 * 0.01 ; Battery_System_DC_DC_Converter_p2_v
= X [ 87ULL ] * 0.1 + 650.0 ; t206 = ( X [ 4ULL ] * 0.01 + X [ 5ULL ] * -
0.01 ) + X [ 88ULL ] ; t207 = X [ 4ULL ] * 0.01 + X [ 5ULL ] * - 0.01 ; t208
= ( X [ 7ULL ] * - 0.0002 + X [ 8ULL ] * - 2.0E-6 ) + U_idx_0 * 0.000202 ;
t209 = X [ 135ULL ] - X [ 90ULL ] ; t210 = t209 * X [ 140ULL ] * 0.0001 ;
t212 = X [ 7ULL ] * 0.0002 + U_idx_0 * - 0.0002 ;
Electrical_Cooling_System_Tank_Convection_HLiq_Q = X [ 8ULL ] * 2.0E-6 +
U_idx_0 * - 2.0E-6 ; Electrical_Cooling_System_Tank_Tank_level = X [ 152ULL ]
* - 0.2 + 0.2 ;
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co = X [ 12ULL ]
* 0.89999999999999991 + X [ 17ULL ] * - 0.89999999999999991 ; t171 [ 0ULL ] =
X [ 89ULL ] ; t82 [ 0 ] = 20ULL ; t23 [ 0 ] = 1ULL ;
tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t18 =
efOut ; t171 [ 0ULL ] = X [ 90ULL ] ; t25 [ 0 ] = 19ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t171 [ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t17
= b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , &
t82 [ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = c_efOut [ 0 ]
; Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 =
t169_idx_0 ; tlu2_2d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = d_efOut [ 0 ] ;
t216 = t169_idx_0 ; tlu2_2d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t18
. mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = e_efOut [ 0 ] ;
t217 = t169_idx_0 ; t171 [ 0ULL ] = X [ 98ULL ] ;
tlu2_linear_nearest_prelookup ( & f_efOut . mField0 [ 0ULL ] , & f_efOut .
mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t18
= f_efOut ; t171 [ 0ULL ] = X [ 99ULL ] ; tlu2_linear_nearest_prelookup ( &
g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t171 [
0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t17 = g_efOut ;
tlu2_2d_linear_nearest_value ( & h_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t82 [ 0ULL ] , &
t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = h_efOut [ 0 ] ; t220 =
t169_idx_0 ; tlu2_2d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = i_efOut [ 0 ] ;
t221 = t169_idx_0 ; tlu2_2d_linear_nearest_value ( & j_efOut [ 0ULL ] , & t18
. mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = j_efOut [ 0 ] ;
t222 = t169_idx_0 ; t171 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t18
= k_efOut ; t171 [ 0ULL ] = X [ 108ULL ] ; tlu2_linear_nearest_prelookup ( &
l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t171 [
0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t17 = l_efOut ;
tlu2_2d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t82 [ 0ULL ] , &
t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = m_efOut [ 0 ] ; t225 =
t169_idx_0 ; tlu2_2d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = n_efOut [ 0 ] ;
t226 = t169_idx_0 ; tlu2_2d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t18
. mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = o_efOut [ 0 ] ;
t227 = t169_idx_0 ; t171 [ 0ULL ] = X [ 116ULL ] ;
tlu2_linear_nearest_prelookup ( & p_efOut . mField0 [ 0ULL ] , & p_efOut .
mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t18
= p_efOut ; t171 [ 0ULL ] = X [ 117ULL ] ; tlu2_linear_nearest_prelookup ( &
q_efOut . mField0 [ 0ULL ] , & q_efOut . mField1 [ 0ULL ] , & q_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t171 [
0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t17 = q_efOut ;
tlu2_2d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t82 [ 0ULL ] , &
t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = r_efOut [ 0 ] ; t228 =
t169_idx_0 ; tlu2_2d_linear_nearest_value ( & s_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = s_efOut [ 0 ] ;
t229 = t169_idx_0 ; tlu2_2d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t18
. mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t82
[ 0ULL ] , & t25 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = t_efOut [ 0 ] ;
t230 = t169_idx_0 ; t231 = X [ 166ULL ] * 1.0E-9 + X [ 19ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = X [ 166ULL ] + X [ 167ULL ] ;
Fuel_Cell_Current_Sensor1_I = X [ 87ULL ] + X [ 168ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 = - X [
192ULL ] + U_idx_4 * - 0.01 ; if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 = X [
23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 20ULL ]
* ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 *
4124.48151675695 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 = X [ 21ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
t154 [ 0ULL ] = X [ 21ULL ] * 100000.0 ; t154 [ 1ULL ] = X [ 20ULL ] ; t154 [
2ULL ] = X [ 200ULL ] ; t154 [ 3ULL ] = X [ 22ULL ] ; t154 [ 4ULL ] = X [
195ULL ] ; t154 [ 5ULL ] = X [ 199ULL ] ; t154 [ 6ULL ] = X [ 23ULL ] ; t154
[ 7ULL ] = X [ 196ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ t197 ] =
t154 [ t197 ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 = - X [
201ULL ] + - X [ 202ULL ] ; if ( 1.0 - X [ 22ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = 1.0 - X [
22ULL ] ; } else if ( 1.0 - X [ 22ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = exp ( ( (
1.0 - X [ 22ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 =
1.6701700790245661E-7 ; } t232 = X [ 23ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 ) *
3827.6794129126583 + 296.802103844292 ; t171 [ 0ULL ] = X [ 20ULL ] ; t82 [ 0
] = 52ULL ; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , &
u_efOut . mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ]
, & t23 [ 0ULL ] ) ; t17 = u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut
[ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] )
; t169_idx_0 = v_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = exp (
pmf_log ( X [ 21ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 - 1.0 ) *
461.523 + t232 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t232 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0
; } t238 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = ( X
[ 22ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 )
/ ( t238 == 0.0 ? 1.0E-16 : t238 ) ; if ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = 0.0 ; }
else if ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = X [ 22ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = ( X [ 22ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 = - X [
204ULL ] + - X [ 205ULL ] ; t232 = - X [ 206ULL ] + - X [ 207ULL ] ; t154 [
0ULL ] = X [ 224ULL ] ; t154 [ 1ULL ] = X [ 24ULL ] ; t154 [ 2ULL ] = X [
225ULL ] ; t154 [ 3ULL ] = X [ 26ULL ] ; t154 [ 4ULL ] = X [ 226ULL ] ; t154
[ 5ULL ] = X [ 227ULL ] ; t154 [ 6ULL ] = X [ 25ULL ] ; t154 [ 7ULL ] = X [
228ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
0ULL ] = X [ 229ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 1ULL ] = X [
27ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
2ULL ] = X [ 230ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 3ULL ] = X [
29ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
4ULL ] = X [ 231ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 5ULL ] = X [
232ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
6ULL ] = X [ 28ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 7ULL ] = X [
233ULL ] ; if ( X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 26ULL
] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { t235 = 0.0 ; }
else { t235 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t242 = X [ 24ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
) - t235 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 461.523 ) +
t235 * 4124.48151675695 ) ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) { t238 = 1.0 - X
[ 26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) { t238 = exp ( ( ( 1.0 -
X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t238 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 25ULL ]
/ ( t238 == 0.0 ? 1.0E-16 : t238 ) * 3827.6794129126583 + 296.802103844292 ;
t171 [ 0ULL ] = X [ 24ULL ] ; tlu2_linear_linear_prelookup ( & w_efOut .
mField0 [ 0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [
0ULL ] , & t23 [ 0ULL ] ) ; t17 = w_efOut ; tlu2_1d_linear_linear_value ( &
x_efOut [ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] )
; t169_idx_0 = x_efOut [ 0 ] ; t238 = exp ( pmf_log ( X [ 30ULL ] * 100000.0
) - t169_idx_0 ) ; if ( t238 >= 1.0 ) { t235 = ( t238 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; t235 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 / ( t235 ==
0.0 ? 1.0E-16 : t235 ) ; } else { t235 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t235 * 0.01
; t238 = ( X [ 26ULL ] - t235 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 26ULL ] - t235 <= 0.0 ) { t238 = 0.0 ; } else if ( X [ 26ULL ] -
t235 >= t235 * 0.01 ) { t238 = X [ 26ULL ] - t235 ; } else { t238 = ( X [
26ULL ] - t235 ) * ( t238 * t238 * 3.0 - t238 * t238 * t238 * 2.0 ) ; } if (
X [ 29ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 29ULL
] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) { t235 = 0.0 ; }
else { t235 = X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t251 = X [ 27ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
) - t235 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 461.523 ) +
t235 * 4124.48151675695 ) ; if ( 1.0 - X [ 29ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0 - X [
29ULL ] ; } else if ( 1.0 - X [ 29ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp ( ( (
1.0 - X [ 29ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
1.6701700790245661E-7 ; } t235 = X [ 28ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
3827.6794129126583 + 296.802103844292 ; t171 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t17 = y_efOut ; tlu2_1d_linear_linear_value ( & ab_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = ab_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp (
pmf_log ( X [ 32ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 - 1.0 ) *
461.523 + t235 ; t235 /=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 ; }
else { t235 = 1.0 ; } t256 = t235 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 29ULL
] - t235 ) / ( t256 == 0.0 ? 1.0E-16 : t256 ) ; if ( X [ 29ULL ] - t235 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0
; } else if ( X [ 29ULL ] - t235 >= t235 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 29ULL ]
- t235 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 29ULL
] - t235 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi94 = X [ 32ULL ]
/ ( t251 == 0.0 ? 1.0E-16 : t251 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.026773120849090417 / 0.001 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 0ULL ] = X
[ 280ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0
[ 1ULL ] = X [ 33ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 2ULL ] = X
[ 277ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0
[ 3ULL ] = X [ 35ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 4ULL ] = X
[ 279ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0
[ 5ULL ] = X [ 276ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 6ULL ] = X
[ 34ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [
7ULL ] = X [ 278ULL ] ; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 35ULL
] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t250 = 0.0 ; }
else { t250 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t264 = X [ 33ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
) - t250 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 461.523 ) +
t250 * 4124.48151675695 ) ; if ( 1.0 - X [ 35ULL ] >= 0.01 ) { t250 = 1.0 - X
[ 35ULL ] ; } else if ( 1.0 - X [ 35ULL ] >= - 0.1 ) { t250 = exp ( ( ( 1.0 -
X [ 35ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t250 =
1.6701700790245661E-7 ; } t251 = X [ 34ULL ] / ( t250 == 0.0 ? 1.0E-16 : t250
) * 3827.6794129126583 + 296.802103844292 ; t171 [ 0ULL ] = X [ 33ULL ] ;
tlu2_linear_linear_prelookup ( & bb_efOut . mField0 [ 0ULL ] , & bb_efOut .
mField1 [ 0ULL ] , & bb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t18 = bb_efOut ; tlu2_1d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = cb_efOut [ 0
] ; t250 = exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
t250 >= 1.0 ) { t235 = ( t250 - 1.0 ) * 461.523 + t251 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = t251 / (
t235 == 0.0 ? 1.0E-16 : t235 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 * 0.01 ; t250
= ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 <= 0.0 ) {
t250 = 0.0 ; } else if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 * 0.01 ) {
t250 = X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ; } else {
t250 = ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ) * ( t250 *
t250 * 3.0 - t250 * t250 * t250 * 2.0 ) ; } t251 = ( X [ 316ULL ] *
0.07812500122070315 + U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if ( X [
40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = X [
40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } if ( X [ 41ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 41ULL
] >= 1.0 ? 1.0 : X [ 41ULL ] ; } t273 = X [ 38ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
259.836612622973 ) ; t159 [ 0ULL ] = X [ 39ULL ] * 100000.0 ; t159 [ 1ULL ] =
X [ 38ULL ] ; t159 [ 2ULL ] = X [ 327ULL ] ; t159 [ 3ULL ] = X [ 40ULL ] ;
t159 [ 4ULL ] = X [ 322ULL ] ; t159 [ 5ULL ] = X [ 326ULL ] ; t159 [ 6ULL ] =
X [ 41ULL ] ; t159 [ 7ULL ] = X [ 323ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL
; t197 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5
[ t197 ] = t159 [ t197 ] ; } if ( 1.0 - X [ 40ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0 - X [
40ULL ] ; } else if ( 1.0 - X [ 40ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp ( ( (
1.0 - X [ 40ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 = X [ 41ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
- 36.965491221318985 + 296.802103844292 ; t171 [ 0ULL ] = X [ 38ULL ] ;
tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0ULL ] , & db_efOut .
mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t18 = db_efOut ; tlu2_1d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = eb_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp (
pmf_log ( X [ 39ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >= 1.0 ) {
t276 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26
; t235 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 / (
t276 == 0.0 ? 1.0E-16 : t276 ) ; } else { t235 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t235 * 0.01
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [
40ULL ] - t235 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 40ULL ] - t235 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
if ( X [ 40ULL ] - t235 >= t235 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 40ULL ]
- t235 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 40ULL
] - t235 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = X [ 39ULL ]
/ ( t273 == 0.0 ? 1.0E-16 : t273 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.0019634954084936209 / 0.001 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 = U_idx_7 *
10.0 ; t159 [ 0ULL ] = X [ 348ULL ] ; t159 [ 1ULL ] = X [ 42ULL ] ; t159 [
2ULL ] = X [ 349ULL ] ; t159 [ 3ULL ] = X [ 44ULL ] ; t159 [ 4ULL ] = X [
350ULL ] ; t159 [ 5ULL ] = X [ 351ULL ] ; t159 [ 6ULL ] = X [ 43ULL ] ; t159
[ 7ULL ] = X [ 352ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 0ULL ] = X
[ 353ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 1ULL ] = X [ 45ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 2ULL ] = X
[ 354ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 3ULL ] = X [ 47ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 4ULL ] = X
[ 355ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 5ULL ] = X [ 356ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 6ULL ] = X
[ 46ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
7ULL ] = X [ 357ULL ] ; if ( X [ 44ULL ] <= 0.0 ) { t256 = 0.0 ; } else {
t256 = X [ 44ULL ] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 43ULL
] >= 1.0 ? 1.0 : X [ 43ULL ] ; } t283 = X [ 42ULL ] * ( ( ( ( 1.0 - t256 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
296.802103844292 + t256 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
259.836612622973 ) ; if ( 1.0 - X [ 44ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0 - X [
44ULL ] ; } else if ( 1.0 - X [ 44ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp ( ( (
1.0 - X [ 44ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
1.6701700790245661E-7 ; } t256 = X [ 43ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
- 36.965491221318985 + 296.802103844292 ; t171 [ 0ULL ] = X [ 42ULL ] ;
tlu2_linear_linear_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t17 = fb_efOut ; tlu2_1d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = gb_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp (
pmf_log ( X [ 48ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 - 1.0 ) *
461.523 + t256 ; t235 = t256 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 ) ;
} else { t235 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t235 * 0.01
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [
44ULL ] - t235 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 44ULL ] - t235 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
if ( X [ 44ULL ] - t235 >= t235 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 44ULL ]
- t235 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 44ULL
] - t235 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 2.0 ) ; }
t258 = X [ 48ULL ] / ( t283 == 0.0 ? 1.0E-16 : t283 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.026773120849090417 / 0.001 * 100000.0 ; if ( X [ 47ULL ] <= 0.0 ) { t256 =
0.0 ; } else { t256 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [
46ULL ] <= 0.0 ) { t235 = 0.0 ; } else { t235 = X [ 46ULL ] >= 1.0 ? 1.0 : X
[ 46ULL ] ; } t292 = X [ 45ULL ] * ( ( ( ( 1.0 - t256 ) - t235 ) *
296.802103844292 + t256 * 461.523 ) + t235 * 259.836612622973 ) ; if ( 1.0 -
X [ 47ULL ] >= 0.01 ) { t266 = 1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [
47ULL ] >= - 0.1 ) { t266 = exp ( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { t266 = 1.6701700790245661E-7 ; } t235 = X [ 46ULL ] / ( t266
== 0.0 ? 1.0E-16 : t266 ) * - 36.965491221318985 + 296.802103844292 ; t171 [
0ULL ] = X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [
0ULL ] , & hb_efOut . mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ]
, & t23 [ 0ULL ] ) ; t17 = hb_efOut ; tlu2_1d_linear_linear_value ( &
ib_efOut [ 0ULL ] , & t17 . mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] )
; t169_idx_0 = ib_efOut [ 0 ] ; t266 = exp ( pmf_log ( X [ 49ULL ] * 100000.0
) - t169_idx_0 ) ; if ( t266 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( t266 - 1.0
) * 461.523 + t235 ; t235 /=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; }
else { t235 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t235 * 0.01
; t266 = ( X [ 47ULL ] - t235 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 47ULL ] - t235 <= 0.0 ) { t266 = 0.0 ; } else if ( X [ 47ULL ] -
t235 >= t235 * 0.01 ) { t266 = X [ 47ULL ] - t235 ; } else { t266 = ( X [
47ULL ] - t235 ) * ( t266 * t266 * 3.0 - t266 * t266 * t266 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 0ULL ] = X
[ 405ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 1ULL ] = X [ 50ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 2ULL ] = X
[ 402ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 3ULL ] = X [ 52ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 4ULL ] = X
[ 404ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 5ULL ] = X [ 401ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 6ULL ] = X
[ 51ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [
7ULL ] = X [ 403ULL ] ; if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 = X [
52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ] <= 0.0 ) { t272 = 0.0
; } else { t272 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } t235 = X [ 50ULL
] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 ) - t272 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 * 461.523 ) +
t272 * 259.836612622973 ) ; if ( 1.0 - X [ 52ULL ] >= 0.01 ) { t272 = 1.0 - X
[ 52ULL ] ; } else if ( 1.0 - X [ 52ULL ] >= - 0.1 ) { t272 = exp ( ( ( 1.0 -
X [ 52ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t272 =
1.6701700790245661E-7 ; } t273 = X [ 51ULL ] / ( t272 == 0.0 ? 1.0E-16 : t272
) * - 36.965491221318985 + 296.802103844292 ; t171 [ 0ULL ] = X [ 50ULL ] ;
tlu2_linear_linear_prelookup ( & jb_efOut . mField0 [ 0ULL ] , & jb_efOut .
mField1 [ 0ULL ] , & jb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t18 = jb_efOut ; tlu2_1d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = kb_efOut [ 0
] ; t272 = exp ( pmf_log ( X [ 53ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
t272 >= 1.0 ) { t256 = ( t272 - 1.0 ) * 461.523 + t273 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 = t273 / (
t256 == 0.0 ? 1.0E-16 : t256 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 * 0.01 ; t272
= ( X [ 52ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( X [ 52ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 <= 0.0 ) {
t272 = 0.0 ; } else if ( X [ 52ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 * 0.01 ) {
t272 = X [ 52ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ; } else {
t272 = ( X [ 52ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ) * ( t272 *
t272 * 3.0 - t272 * t272 * t272 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 = X [ 53ULL ]
/ ( t235 == 0.0 ? 1.0E-16 : t235 ) * t272 * 0.00049087385212340522 / 0.001 *
100000.0 ; t272 = - X [ 421ULL ] + - X [ 422ULL ] ; t273 = - X [ 424ULL ] + -
X [ 425ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3
= - X [ 428ULL ] + U_idx_10 * - 2.0 ; t276 = U_idx_10 * 2.0 ; t277 = U_idx_10
* 2.0 ; t279 = ( 1.01325 - X [ 445ULL ] ) * X [ 454ULL ] * 0.0001 ; t282 = (
( ( ( - X [ 246ULL ] + - X [ 263ULL ] ) + - X [ 370ULL ] ) + - X [ 388ULL ] )
+ - X [ 439ULL ] ) + - X [ 457ULL ] ; t283 = - X [ 458ULL ] + X [ 396ULL ] ;
t164 [ 0ULL ] = X [ 63ULL ] * 100000.0 ; t164 [ 1ULL ] = X [ 62ULL ] ; t164 [
2ULL ] = X [ 466ULL ] ; t164 [ 3ULL ] = X [ 65ULL ] ; t164 [ 4ULL ] = X [
468ULL ] ; t164 [ 5ULL ] = X [ 465ULL ] ; t164 [ 6ULL ] = X [ 64ULL ] ; t164
[ 7ULL ] = X [ 467ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ t197 ] =
t164 [ t197 ] ; } if ( X [ 65ULL ] <= 0.0 ) { t284 = 0.0 ; } else { t284 = X
[ 65ULL ] >= 1.0 ? 1.0 : X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) { t285 =
0.0 ; } else { t285 = X [ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t235 = X [
62ULL ] * ( ( ( ( 1.0 - t284 ) - t285 ) * 296.802103844292 + t284 * 461.523 )
+ t285 * 4124.48151675695 ) ; if ( 1.0 - X [ 65ULL ] >= 0.01 ) { t285 = 1.0 -
X [ 65ULL ] ; } else if ( 1.0 - X [ 65ULL ] >= - 0.1 ) { t285 = exp ( ( ( 1.0
- X [ 65ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t285 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = X [ 64ULL ]
/ ( t285 == 0.0 ? 1.0E-16 : t285 ) * 3827.6794129126583 + 296.802103844292 ;
t171 [ 0ULL ] = X [ 62ULL ] ; tlu2_linear_linear_prelookup ( & lb_efOut .
mField0 [ 0ULL ] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t171 [ 0ULL ] , &
t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t18 = lb_efOut ;
tlu2_1d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = mb_efOut [ 0 ] ; t285 = exp
( pmf_log ( X [ 63ULL ] * 100000.0 ) - t169_idx_0 ) ; if ( t285 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( t285 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0
; t287 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
} else { t287 = 1.0 ; } t256 = t287 * 0.01 ; t285 = ( X [ 65ULL ] - t287 ) /
( t256 == 0.0 ? 1.0E-16 : t256 ) ; if ( X [ 65ULL ] - t287 <= 0.0 ) { t285 =
0.0 ; } else if ( X [ 65ULL ] - t287 >= t287 * 0.01 ) { t285 = X [ 65ULL ] -
t287 ; } else { t285 = ( X [ 65ULL ] - t287 ) * ( t285 * t285 * 3.0 - t285 *
t285 * t285 * 2.0 ) ; } t284 = X [ 63ULL ] / ( t235 == 0.0 ? 1.0E-16 : t235 )
* t285 * 0.12 / 0.001 * 100000.0 ; if ( X [ 68ULL ] <= 0.0 ) { t285 = 0.0 ; }
else { t285 = X [ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ] ; } if ( X [ 69ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = X
[ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; } t256 = X [ 66ULL ] * ( ( ( ( 1.0 -
t285 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 ) *
296.802103844292 + t285 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 *
4124.48151675695 ) ; t285 = X [ 67ULL ] / ( t256 == 0.0 ? 1.0E-16 : t256 ) ;
t166 [ 0ULL ] = X [ 67ULL ] * 100000.0 ; t166 [ 1ULL ] = X [ 66ULL ] ; t166 [
2ULL ] = X [ 489ULL ] ; t166 [ 3ULL ] = X [ 68ULL ] ; t166 [ 4ULL ] = X [
483ULL ] ; t166 [ 5ULL ] = X [ 488ULL ] ; t166 [ 6ULL ] = X [ 69ULL ] ; t166
[ 7ULL ] = X [ 484ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t164
[ t197 ] = t166 [ t197 ] ; } if ( 1.0 - X [ 68ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = 1.0 - X [
68ULL ] ; } else if ( 1.0 - X [ 68ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = exp ( ( (
1.0 - X [ 68ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 =
1.6701700790245661E-7 ; } t287 = X [ 69ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 ) *
3827.6794129126583 + 296.802103844292 ; t171 [ 0ULL ] = X [ 66ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t17 = nb_efOut ; tlu2_1d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = ob_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = exp (
pmf_log ( X [ 67ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 - 1.0 ) *
461.523 + t287 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t287 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0
; } t256 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = ( X [
68ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) /
( t256 == 0.0 ? 1.0E-16 : t256 ) ; if ( X [ 68ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = 0.0 ; } else
if ( X [ 68ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = X [ 68ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = ( X [ 68ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 * 2.0 ) ; }
t285 = t285 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0
* 7.8539816339744827E-5 / 0.001 ; t285 *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 = ( X [ 478ULL
] * - 0.7999998 + U_idx_11 * 7.9999980000000006 ) + - 0.039999990000000013 ;
t287 = ( X [ 478ULL ] * - 0.7999998 + U_idx_11 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; t289 = U_idx_11 * 10.0 ; t293 = U_idx_12 *
376.99111843077515 ; t294 = t293 * 0.99999999999999978 / 0.99999999999999978
; t168 [ 0ULL ] = X [ 54ULL ] * 100000.0 ; t168 [ 1ULL ] = X [ 70ULL ] ; t168
[ 2ULL ] = X [ 536ULL ] ; t168 [ 3ULL ] = X [ 72ULL ] ; t168 [ 4ULL ] = X [
538ULL ] ; t168 [ 5ULL ] = X [ 535ULL ] ; t168 [ 6ULL ] = X [ 71ULL ] ; t168
[ 7ULL ] = X [ 537ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t166
[ t197 ] = t168 [ t197 ] ; } if ( X [ 72ULL ] <= 0.0 ) { t299 = 0.0 ; } else
{ t299 = X [ 72ULL ] >= 1.0 ? 1.0 : X [ 72ULL ] ; } if ( X [ 71ULL ] <= 0.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [
71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 70ULL ]
* ( ( ( ( 1.0 - t299 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
296.802103844292 + t299 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
259.836612622973 ) ; t299 = X [ 54ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
if ( 1.0 - X [ 72ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0 - X [
72ULL ] ; } else if ( 1.0 - X [ 72ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp ( ( (
1.0 - X [ 72ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 =
1.6701700790245661E-7 ; } t301 = X [ 71ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
- 36.965491221318985 + 296.802103844292 ; t171 [ 0ULL ] = X [ 70ULL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t17 = pb_efOut ; tlu2_1d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t169_idx_0 = qb_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = exp (
pmf_log ( X [ 54ULL ] * 100000.0 ) - t169_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 - 1.0 ) *
461.523 + t301 ; t235 = t301 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
} else { t235 = 1.0 ; } t256 = t235 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 72ULL
] - t235 ) / ( t256 == 0.0 ? 1.0E-16 : t256 ) ; if ( X [ 72ULL ] - t235 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0
; } else if ( X [ 72ULL ] - t235 >= t235 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 72ULL ]
- t235 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( X [ 72ULL
] - t235 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 2.0 ) ; }
t299 = t299 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0
* 0.0003 / 0.001 ; t299 *= 100000.0 ; t301 = - ( X [ 54ULL ] + - 1.01325 ) *
X [ 545ULL ] * 0.0001 ; t170 [ 0ULL ] = X [ 37ULL ] * 100000.0 ; t170 [ 1ULL
] = X [ 73ULL ] ; t170 [ 2ULL ] = X [ 550ULL ] ; t170 [ 3ULL ] = X [ 75ULL ]
; t170 [ 4ULL ] = X [ 552ULL ] ; t170 [ 5ULL ] = X [ 549ULL ] ; t170 [ 6ULL ]
= X [ 74ULL ] ; t170 [ 7ULL ] = X [ 551ULL ] ; for ( t197 = 0ULL ; t197 <
8ULL ; t197 ++ ) { t168 [ t197 ] = t170 [ t197 ] ; } if ( X [ 75ULL ] <= 0.0
) { t303 = 0.0 ; } else { t303 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; }
if ( X [ 74ULL ] <= 0.0 ) { t169_idx_0 = 0.0 ; } else { t169_idx_0 = X [
74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; } t256 = X [ 73ULL ] * ( ( ( ( 1.0 -
t303 ) - t169_idx_0 ) * 296.802103844292 + t303 * 461.523 ) + t169_idx_0 *
4124.48151675695 ) ; t303 = X [ 37ULL ] / ( t256 == 0.0 ? 1.0E-16 : t256 ) ;
if ( 1.0 - X [ 75ULL ] >= 0.01 ) { t169_idx_0 = 1.0 - X [ 75ULL ] ; } else if
( 1.0 - X [ 75ULL ] >= - 0.1 ) { t169_idx_0 = exp ( ( ( 1.0 - X [ 75ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t169_idx_0 = 1.6701700790245661E-7 ; } t235
= X [ 74ULL ] / ( t169_idx_0 == 0.0 ? 1.0E-16 : t169_idx_0 ) *
3827.6794129126583 + 296.802103844292 ; t171 [ 0ULL ] = X [ 73ULL ] ;
tlu2_linear_linear_prelookup ( & rb_efOut . mField0 [ 0ULL ] , & rb_efOut .
mField1 [ 0ULL ] , & rb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t171 [ 0ULL ] , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ;
t17 = rb_efOut ; tlu2_1d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t82 [ 0ULL ] , & t23 [ 0ULL ] ) ; t171 [ 0 ] = sb_efOut [ 0
] ; t169_idx_0 = exp ( pmf_log ( X [ 37ULL ] * 100000.0 ) - t171 [ 0ULL ] ) ;
if ( t169_idx_0 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = ( t169_idx_0
- 1.0 ) * 461.523 + t235 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = t235 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 1.0
; } t256 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.01 ; t169_idx_0 = ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) / ( t256 ==
0.0 ? 1.0E-16 : t256 ) ; if ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 <= 0.0 ) {
t169_idx_0 = 0.0 ; } else if ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.01 ) {
t169_idx_0 = X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; } else {
t169_idx_0 = ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) * (
t169_idx_0 * t169_idx_0 * 3.0 - t169_idx_0 * t169_idx_0 * t169_idx_0 * 2.0 )
; } t303 = t303 * t169_idx_0 * 0.00012500000000000003 / 0.001 ; t303 *=
100000.0 ; t169_idx_0 = U_idx_4 * 0.01 ; t256 = ( ( X [ 4ULL ] * - 0.01 + X [
5ULL ] * 0.01 ) + X [ 162ULL ] ) + X [ 570ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 173ULL ]
* 0.00062831853071795862 ; t235 = X [ 300ULL ] * 0.0031415926535897937 ; t141
[ 0ULL ] = X [ 0ULL ] ; t141 [ 1ULL ] = Battery_System_Battery_Q * 1000.0 ;
t141 [ 2ULL ] = X [ 0ULL ] ; t141 [ 3ULL ] = X [ 1ULL ] *
0.00027777777777777778 ; t141 [ 4ULL ] = X [ 78ULL ] ; t141 [ 5ULL ] = 0.0 ;
t141 [ 6ULL ] = X [ 2ULL ] ; t141 [ 7ULL ] = X [ 79ULL ] ; t141 [ 8ULL ] = X
[ 80ULL ] * 1000.0 ; t141 [ 9ULL ] = X [ 81ULL ] ; t141 [ 10ULL ] = X [ 81ULL
] ; t141 [ 11ULL ] = X [ 79ULL ] ; t141 [ 12ULL ] = 0.0 ; t141 [ 13ULL ] =
0.0 ; t141 [ 14ULL ] = 0.0 ; t141 [ 15ULL ] = 0.0 ; t141 [ 16ULL ] = 0.0 ;
t141 [ 17ULL ] = 0.0 ; t141 [ 18ULL ] = 0.0 ; t141 [ 19ULL ] = 0.0 ; t141 [
20ULL ] = 0.0 ; t141 [ 21ULL ] = 0.0 ; t141 [ 22ULL ] = 0.0 ; t141 [ 23ULL ]
= X [ 82ULL ] ; t141 [ 24ULL ] = X [ 83ULL ] ; t141 [ 25ULL ] = X [ 84ULL ] ;
t141 [ 26ULL ] = X [ 85ULL ] ; t141 [ 27ULL ] = 1.0 ; t141 [ 28ULL ] = X [
86ULL ] * 0.00027777777777777778 ; t141 [ 29ULL ] = X [ 81ULL ] ; t141 [
30ULL ] = 0.0 ; t141 [ 31ULL ] = 0.0 ; t141 [ 32ULL ] = - X [ 78ULL ] + -
U_idx_1 ; t141 [ 33ULL ] = X [ 87ULL ] ; t141 [ 34ULL ] = 0.0 ; t141 [ 35ULL
] = 0.0 ; t141 [ 36ULL ] = X [ 79ULL ] ; t141 [ 37ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 38ULL ] = - ( - ( X [ 87ULL ] *
X [ 87ULL ] * 0.00010037240412334386 ) + - 0.001 ) * 1000.0 ; t141 [ 39ULL ]
= X [ 3ULL ] ; t141 [ 40ULL ] = X [ 79ULL ] ; t141 [ 41ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 42ULL ] = 0.0 ; t141 [ 43ULL ] =
0.0 ; t141 [ 44ULL ] = X [ 5ULL ] ; t141 [ 45ULL ] = U_idx_0 ; t141 [ 46ULL ]
= 0.0 ; t141 [ 47ULL ] = U_idx_1 ; t141 [ 48ULL ] = U_idx_1 ; t141 [ 49ULL ]
= X [ 79ULL ] ; t141 [ 50ULL ] = X [ 79ULL ] ; t141 [ 51ULL ] = U_idx_1 ;
t141 [ 52ULL ] = X [ 79ULL ] ; t141 [ 53ULL ] = 0.0 ; t141 [ 54ULL ] = - X [
78ULL ] ; t141 [ 55ULL ] = - X [ 78ULL ] ; t141 [ 56ULL ] = X [ 79ULL ] ;
t141 [ 57ULL ] = X [ 79ULL ] ; t141 [ 58ULL ] = - X [ 78ULL ] ; t141 [ 59ULL
] = 0.0 ; t141 [ 60ULL ] = X [ 79ULL ] ; t141 [ 61ULL ] = 0.0 ; t141 [ 62ULL
] = X [ 79ULL ] ; t141 [ 63ULL ] = X [ 79ULL ] ; t141 [ 64ULL ] = X [ 79ULL ]
; t141 [ 65ULL ] = X [ 79ULL ] ; t141 [ 66ULL ] = - X [ 87ULL ] ; t141 [
67ULL ] = - X [ 87ULL ] ; t141 [ 68ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 69ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 70ULL ] = 0.0 ; t141 [ 71ULL ] =
- X [ 87ULL ] ; t141 [ 72ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [
73ULL ] = 0.0 ; t141 [ 74ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [
75ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 76ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 77ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 78ULL ] = 0.0 ; t141 [ 79ULL ] =
X [ 4ULL ] ; t141 [ 80ULL ] = t206 * 1000.0 ; t141 [ 81ULL ] = t206 * 1000.0
; t141 [ 82ULL ] = - X [ 4ULL ] ; t141 [ 83ULL ] = X [ 5ULL ] ; t141 [ 84ULL
] = t206 * 1.0E+6 ; t141 [ 85ULL ] = t206 * 1000.0 ; t141 [ 86ULL ] = - X [
87ULL ] ; t141 [ 87ULL ] = t206 * 1.0E+6 ; t141 [ 88ULL ] = - X [ 87ULL ] ;
t141 [ 89ULL ] = X [ 4ULL ] ; t141 [ 90ULL ] = X [ 88ULL ] * 1000.0 ; t141 [
91ULL ] = X [ 4ULL ] ; t141 [ 92ULL ] = 0.0 ; t141 [ 93ULL ] = X [ 4ULL ] ;
t141 [ 94ULL ] = X [ 5ULL ] ; t141 [ 95ULL ] = t207 * 1000.0 ; t141 [ 96ULL ]
= t207 * 100.0 ; t141 [ 97ULL ] = - X [ 87ULL ] ; t141 [ 98ULL ] = U_idx_0 ;
t141 [ 99ULL ] = X [ 0ULL ] ; t141 [ 100ULL ] = Battery_System_Battery_Q *
1000.0 ; t141 [ 101ULL ] = Battery_System_Battery_Q * 100.0 ; t141 [ 102ULL ]
= Battery_System_DC_DC_Converter_p2_v ; t141 [ 103ULL ] = 0.0 ; t141 [ 104ULL
] = X [ 89ULL ] ; t141 [ 105ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 106ULL ] = X [
91ULL ] ; t141 [ 107ULL ] = X [ 92ULL ] * 0.1 ; t141 [ 108ULL ] = X [ 93ULL ]
; t141 [ 109ULL ] = - X [ 93ULL ] ; t141 [ 110ULL ] = X [ 89ULL ] ; t141 [
111ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 112ULL ] = X [ 93ULL ] ; t141 [ 113ULL
] = X [ 94ULL ] ; t141 [ 114ULL ] = U_idx_2 ; t141 [ 115ULL ] = X [ 95ULL ] ;
t141 [ 116ULL ] = X [ 91ULL ] ; t141 [ 117ULL ] = X [ 92ULL ] * 0.1 ; t141 [
118ULL ] = - X [ 93ULL ] ; t141 [ 119ULL ] = X [ 96ULL ] ; t141 [ 120ULL ] =
- U_idx_2 ; t141 [ 121ULL ] = X [ 95ULL ] ; t141 [ 122ULL ] = 0.0 ; t141 [
123ULL ] = U_idx_2 ; t141 [ 124ULL ] = - U_idx_2 ; t141 [ 125ULL ] = X [
97ULL ] ; t141 [ 126ULL ] = X [ 98ULL ] ; t141 [ 127ULL ] = X [ 99ULL ] * 0.1
; t141 [ 128ULL ] = X [ 100ULL ] ; t141 [ 129ULL ] = X [ 101ULL ] * 0.1 ;
t141 [ 130ULL ] = X [ 102ULL ] ; t141 [ 131ULL ] = - X [ 102ULL ] ; t141 [
132ULL ] = X [ 98ULL ] ; t141 [ 133ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 134ULL
] = X [ 102ULL ] ; t141 [ 135ULL ] = X [ 103ULL ] ; t141 [ 136ULL ] = U_idx_2
; t141 [ 137ULL ] = X [ 104ULL ] ; t141 [ 138ULL ] = X [ 100ULL ] ; t141 [
139ULL ] = X [ 101ULL ] * 0.1 ; t141 [ 140ULL ] = - X [ 102ULL ] ; t141 [
141ULL ] = X [ 105ULL ] ; t141 [ 142ULL ] = - U_idx_2 ; t141 [ 143ULL ] = X [
104ULL ] ; t141 [ 144ULL ] = 0.0 ; t141 [ 145ULL ] = U_idx_2 ; t141 [ 146ULL
] = - U_idx_2 ; t141 [ 147ULL ] = X [ 106ULL ] ; t141 [ 148ULL ] = X [ 107ULL
] ; t141 [ 149ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 150ULL ] = X [ 109ULL ] ;
t141 [ 151ULL ] = X [ 110ULL ] * 0.1 ; t141 [ 152ULL ] = X [ 111ULL ] ; t141
[ 153ULL ] = - X [ 111ULL ] ; t141 [ 154ULL ] = X [ 107ULL ] ; t141 [ 155ULL
] = X [ 108ULL ] * 0.1 ; t141 [ 156ULL ] = X [ 111ULL ] ; t141 [ 157ULL ] = X
[ 112ULL ] ; t141 [ 158ULL ] = U_idx_2 ; t141 [ 159ULL ] = X [ 113ULL ] ;
t141 [ 160ULL ] = X [ 109ULL ] ; t141 [ 161ULL ] = X [ 110ULL ] * 0.1 ; t141
[ 162ULL ] = - X [ 111ULL ] ; t141 [ 163ULL ] = X [ 114ULL ] ; t141 [ 164ULL
] = - U_idx_2 ; t141 [ 165ULL ] = X [ 113ULL ] ; t141 [ 166ULL ] = 0.0 ; t141
[ 167ULL ] = U_idx_2 ; t141 [ 168ULL ] = - U_idx_2 ; t141 [ 169ULL ] = X [
115ULL ] ; t141 [ 170ULL ] = X [ 5ULL ] ; t141 [ 171ULL ] = X [ 13ULL ] ;
t141 [ 172ULL ] = U_idx_0 ; t141 [ 173ULL ] = X [ 109ULL ] ; t141 [ 174ULL ]
= X [ 110ULL ] * 0.1 ; t141 [ 175ULL ] = X [ 116ULL ] ; t141 [ 176ULL ] = X [
117ULL ] * 0.1 ; t141 [ 177ULL ] = 0.0 ; t141 [ 178ULL ] = U_idx_0 ; t141 [
179ULL ] = X [ 109ULL ] ; t141 [ 180ULL ] = X [ 110ULL ] * 0.1 ; t141 [
181ULL ] = X [ 116ULL ] ; t141 [ 182ULL ] = X [ 117ULL ] * 0.1 ; t141 [
183ULL ] = 0.0 ; t141 [ 184ULL ] = U_idx_0 ; t141 [ 185ULL ] = X [ 6ULL ] ;
t141 [ 186ULL ] = U_idx_2 ; t141 [ 187ULL ] = - U_idx_2 ; t141 [ 188ULL ] = X
[ 111ULL ] ; t141 [ 189ULL ] = X [ 118ULL ] ; t141 [ 190ULL ] = X [ 119ULL ]
; t141 [ 191ULL ] = X [ 109ULL ] ; t141 [ 192ULL ] = X [ 110ULL ] * 0.1 ;
t141 [ 193ULL ] = X [ 111ULL ] ; t141 [ 194ULL ] = X [ 120ULL ] ; t141 [
195ULL ] = U_idx_2 ; t141 [ 196ULL ] = X [ 121ULL ] ; t141 [ 197ULL ] = X [
116ULL ] ; t141 [ 198ULL ] = X [ 117ULL ] * 0.1 ; t141 [ 199ULL ] = X [
118ULL ] ; t141 [ 200ULL ] = X [ 122ULL ] ; t141 [ 201ULL ] = - U_idx_2 ;
t141 [ 202ULL ] = X [ 123ULL ] ; t141 [ 203ULL ] = U_idx_0 ; t141 [ 204ULL ]
= U_idx_0 ; t141 [ 205ULL ] = U_idx_0 ; t141 [ 206ULL ] = U_idx_0 ; t141 [
207ULL ] = X [ 119ULL ] * 1000.0 ; t141 [ 208ULL ] = X [ 119ULL ] * 1000.0 ;
t141 [ 209ULL ] = X [ 119ULL ] * 1000.0 ; t141 [ 210ULL ] = U_idx_0 ; t141 [
211ULL ] = 0.0 ; t141 [ 212ULL ] = U_idx_0 ; t141 [ 213ULL ] = 0.0 ; t141 [
214ULL ] = U_idx_0 ; t141 [ 215ULL ] = U_idx_0 ; t141 [ 216ULL ] = U_idx_0 ;
t141 [ 217ULL ] = U_idx_0 ; t141 [ 218ULL ] = t208 * 1000.0 ; t141 [ 219ULL ]
= t208 * 1000.0 ; t141 [ 220ULL ] = t208 * 1000.0 ; t141 [ 221ULL ] = U_idx_0
; t141 [ 222ULL ] = 0.0 ; t141 [ 223ULL ] = U_idx_0 ; t141 [ 224ULL ] = 0.0 ;
t141 [ 225ULL ] = X [ 91ULL ] ; t141 [ 226ULL ] = X [ 92ULL ] * 0.1 ; t141 [
227ULL ] = X [ 98ULL ] ; t141 [ 228ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 229ULL
] = 0.0 ; t141 [ 230ULL ] = X [ 10ULL ] ; t141 [ 231ULL ] = X [ 91ULL ] ;
t141 [ 232ULL ] = X [ 92ULL ] * 0.1 ; t141 [ 233ULL ] = X [ 98ULL ] ; t141 [
234ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 235ULL ] = 0.0 ; t141 [ 236ULL ] = X [
10ULL ] ; t141 [ 237ULL ] = X [ 9ULL ] ; t141 [ 238ULL ] = U_idx_2 ; t141 [
239ULL ] = - U_idx_2 ; t141 [ 240ULL ] = X [ 93ULL ] ; t141 [ 241ULL ] = - X
[ 102ULL ] ; t141 [ 242ULL ] = X [ 124ULL ] ; t141 [ 243ULL ] = X [ 91ULL ] ;
t141 [ 244ULL ] = X [ 92ULL ] * 0.1 ; t141 [ 245ULL ] = X [ 93ULL ] ; t141 [
246ULL ] = X [ 125ULL ] ; t141 [ 247ULL ] = U_idx_2 ; t141 [ 248ULL ] = X [
126ULL ] ; t141 [ 249ULL ] = X [ 98ULL ] ; t141 [ 250ULL ] = X [ 99ULL ] *
0.1 ; t141 [ 251ULL ] = - X [ 102ULL ] ; t141 [ 252ULL ] = X [ 127ULL ] ;
t141 [ 253ULL ] = - U_idx_2 ; t141 [ 254ULL ] = X [ 128ULL ] ; t141 [ 255ULL
] = X [ 100ULL ] ; t141 [ 256ULL ] = X [ 101ULL ] * 0.1 ; t141 [ 257ULL ] = X
[ 107ULL ] ; t141 [ 258ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 259ULL ] = 0.0 ;
t141 [ 260ULL ] = X [ 12ULL ] ; t141 [ 261ULL ] = X [ 100ULL ] ; t141 [
262ULL ] = X [ 101ULL ] * 0.1 ; t141 [ 263ULL ] = X [ 107ULL ] ; t141 [
264ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 265ULL ] = 0.0 ; t141 [ 266ULL ] = X [
12ULL ] ; t141 [ 267ULL ] = X [ 11ULL ] ; t141 [ 268ULL ] = U_idx_2 ; t141 [
269ULL ] = - U_idx_2 ; t141 [ 270ULL ] = X [ 102ULL ] ; t141 [ 271ULL ] = - X
[ 111ULL ] ; t141 [ 272ULL ] = X [ 129ULL ] ; t141 [ 273ULL ] = X [ 100ULL ]
; t141 [ 274ULL ] = X [ 101ULL ] * 0.1 ; t141 [ 275ULL ] = X [ 102ULL ] ;
t141 [ 276ULL ] = X [ 130ULL ] ; t141 [ 277ULL ] = U_idx_2 ; t141 [ 278ULL ]
= X [ 131ULL ] ; t141 [ 279ULL ] = X [ 107ULL ] ; t141 [ 280ULL ] = X [
108ULL ] * 0.1 ; t141 [ 281ULL ] = - X [ 111ULL ] ; t141 [ 282ULL ] = X [
132ULL ] ; t141 [ 283ULL ] = - U_idx_2 ; t141 [ 284ULL ] = X [ 133ULL ] ;
t141 [ 285ULL ] = X [ 134ULL ] ; t141 [ 286ULL ] = X [ 135ULL ] * 0.1 ; t141
[ 287ULL ] = X [ 89ULL ] ; t141 [ 288ULL ] = X [ 90ULL ] * 0.1 ; t141 [
289ULL ] = U_idx_2 ; t141 [ 290ULL ] = X [ 136ULL ] ; t141 [ 291ULL ] = - X [
93ULL ] ; t141 [ 292ULL ] = X [ 134ULL ] ; t141 [ 293ULL ] = X [ 135ULL ] *
0.1 ; t141 [ 294ULL ] = X [ 136ULL ] ; t141 [ 295ULL ] = X [ 137ULL ] ; t141
[ 296ULL ] = U_idx_2 ; t141 [ 297ULL ] = X [ 138ULL ] ; t141 [ 298ULL ] = X [
89ULL ] ; t141 [ 299ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 300ULL ] = - X [ 93ULL
] ; t141 [ 301ULL ] = X [ 139ULL ] ; t141 [ 302ULL ] = - U_idx_2 ; t141 [
303ULL ] = X [ 138ULL ] ; t141 [ 304ULL ] = U_idx_2 ; t141 [ 305ULL ] = -
U_idx_2 ; t141 [ 306ULL ] = U_idx_0 ; t141 [ 307ULL ] = U_idx_0 ; t141 [
308ULL ] = 0.0 ; t141 [ 309ULL ] = U_idx_0 ; t141 [ 310ULL ] = U_idx_0 ; t141
[ 311ULL ] = 0.0 ; t141 [ 312ULL ] = X [ 13ULL ] ; t141 [ 313ULL ] = X [
13ULL ] ; t141 [ 314ULL ] = 0.0 ; t141 [ 315ULL ] = X [ 13ULL ] ; t141 [
316ULL ] = X [ 13ULL ] ; t141 [ 317ULL ] = 0.0 ; t141 [ 318ULL ] = X [ 89ULL
] ; t141 [ 319ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 320ULL ] = X [ 134ULL ] ;
t141 [ 321ULL ] = X [ 135ULL ] * 0.1 ; t141 [ 322ULL ] = 0.9 ; t141 [ 323ULL
] = X [ 89ULL ] ; t141 [ 324ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 325ULL ] =
t210 * 1000.0 ; t141 [ 326ULL ] = 0.9 ; t141 [ 327ULL ] = t210 *
1111.1111111111111 ; t141 [ 328ULL ] = t210 * 1111.1111111111111 ; t141 [
329ULL ] = t209 * 99999.999999999985 ; t141 [ 330ULL ] = X [ 140ULL ] *
1.0E-6 ; t141 [ 331ULL ] = t210 * 1000.0 ; t141 [ 332ULL ] = X [ 134ULL ] ;
t141 [ 333ULL ] = X [ 135ULL ] * 0.1 ; t141 [ 334ULL ] = X [ 89ULL ] ; t141 [
335ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 336ULL ] = t209 * 99999.999999999985 ;
t141 [ 337ULL ] = X [ 134ULL ] - X [ 89ULL ] ; t141 [ 338ULL ] = X [ 89ULL ]
; t141 [ 339ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 340ULL ] = X [ 89ULL ] ; t141
[ 341ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 342ULL ] = X [ 93ULL ] ; t141 [
343ULL ] = X [ 140ULL ] * 1.0E-6 ; t141 [ 344ULL ] = U_idx_2 ; t141 [ 345ULL
] = U_idx_2 ; t141 [ 346ULL ] = X [ 134ULL ] ; t141 [ 347ULL ] = X [ 135ULL ]
* 0.1 ; t141 [ 348ULL ] = 0.0 ; t141 [ 349ULL ] = 0.0 ; t141 [ 350ULL ] = X [
116ULL ] ; t141 [ 351ULL ] = X [ 117ULL ] * 0.1 ; t141 [ 352ULL ] = X [
141ULL ] ; t141 [ 353ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 354ULL ] = X [ 141ULL
] ; t141 [ 355ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 356ULL ] = X [ 7ULL ] ; t141
[ 357ULL ] = U_idx_0 ; t141 [ 358ULL ] = t212 * 1000.0 ; t141 [ 359ULL ] =
t212 * 5000.0 ; t141 [ 360ULL ] = X [ 8ULL ] ; t141 [ 361ULL ] = U_idx_0 ;
t141 [ 362ULL ] = Electrical_Cooling_System_Tank_Convection_HLiq_Q * 1000.0 ;
t141 [ 363ULL ] = Electrical_Cooling_System_Tank_Convection_HLiq_Q * 500000.0
; t141 [ 364ULL ] = X [ 142ULL ] ; t141 [ 365ULL ] = 0.101325 ; t141 [ 366ULL
] = X [ 143ULL ] ; t141 [ 367ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 368ULL ] = X
[ 144ULL ] ; t141 [ 369ULL ] = - X [ 144ULL ] ; t141 [ 370ULL ] = X [ 145ULL
] ; t141 [ 371ULL ] = X [ 146ULL ] ; t141 [ 372ULL ] = X [ 142ULL ] ; t141 [
373ULL ] = 0.101325 ; t141 [ 374ULL ] = X [ 144ULL ] ; t141 [ 375ULL ] = X [
147ULL ] ; t141 [ 376ULL ] = X [ 148ULL ] ; t141 [ 377ULL ] = X [ 143ULL ] ;
t141 [ 378ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 379ULL ] = - X [ 144ULL ] ; t141
[ 380ULL ] = X [ 147ULL ] ; t141 [ 381ULL ] = - X [ 148ULL ] ; t141 [ 382ULL
] = X [ 148ULL ] ; t141 [ 383ULL ] = - X [ 148ULL ] ; t141 [ 384ULL ] =
U_idx_0 ; t141 [ 385ULL ] = U_idx_0 ; t141 [ 386ULL ] = X [ 142ULL ] ; t141 [
387ULL ] = 0.101325 ; t141 [ 388ULL ] = - X [ 144ULL ] ; t141 [ 389ULL ] =
300.0 ; t141 [ 390ULL ] = X [ 142ULL ] ; t141 [ 391ULL ] = 0.101325 ; t141 [
392ULL ] = - X [ 144ULL ] ; t141 [ 393ULL ] = X [ 149ULL ] ; t141 [ 394ULL ]
= - X [ 148ULL ] ; t141 [ 395ULL ] = 0.101325 ; t141 [ 396ULL ] = - X [
148ULL ] ; t141 [ 397ULL ] = X [ 116ULL ] ; t141 [ 398ULL ] = X [ 117ULL ] *
0.1 ; t141 [ 399ULL ] = 0.0 ; t141 [ 400ULL ] = 0.0 ; t141 [ 401ULL ] = X [
117ULL ] * 99999.999999999985 ; t141 [ 402ULL ] = X [ 116ULL ] ; t141 [
403ULL ] = X [ 116ULL ] ; t141 [ 404ULL ] = X [ 143ULL ] ; t141 [ 405ULL ] =
X [ 14ULL ] * 0.1 ; t141 [ 406ULL ] = X [ 134ULL ] ; t141 [ 407ULL ] = X [
135ULL ] * 0.1 ; t141 [ 408ULL ] = X [ 141ULL ] ; t141 [ 409ULL ] = X [ 14ULL
] * 0.1 ; t141 [ 410ULL ] = X [ 116ULL ] ; t141 [ 411ULL ] = X [ 117ULL ] *
0.1 ; t141 [ 412ULL ] = X [ 144ULL ] ; t141 [ 413ULL ] = - X [ 136ULL ] ;
t141 [ 414ULL ] = 0.0 ; t141 [ 415ULL ] = - X [ 118ULL ] ; t141 [ 416ULL ] =
X [ 150ULL ] ; t141 [ 417ULL ] = X [ 151ULL ] ; t141 [ 418ULL ] = X [ 7ULL ]
; t141 [ 419ULL ] = X [ 8ULL ] ; t141 [ 420ULL ] = X [ 7ULL ] +
126.84999999999997 ; t141 [ 421ULL ] = X [ 148ULL ] ; t141 [ 422ULL ] = -
U_idx_2 ; t141 [ 423ULL ] = 0.0 ; t141 [ 424ULL ] = U_idx_2 ; t141 [ 425ULL ]
= X [ 14ULL ] * 0.1 ; t141 [ 426ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 427ULL ] =
X [ 153ULL ] ; t141 [ 428ULL ] = X [ 154ULL ] ; t141 [ 429ULL ] = X [ 155ULL
] ; t141 [ 430ULL ] = X [ 156ULL ] ; t141 [ 431ULL ] = X [ 157ULL ] ; t141 [
432ULL ] = X [ 159ULL ] ; t141 [ 433ULL ] = X [ 160ULL ] ; t141 [ 434ULL ] =
X [ 161ULL ] ; t141 [ 435ULL ] = X [ 7ULL ] ; t141 [ 436ULL ] = X [ 8ULL ] ;
t141 [ 437ULL ] = Electrical_Cooling_System_Tank_Tank_level ; t141 [ 438ULL ]
= - t212 ; t141 [ 439ULL ] = -
Electrical_Cooling_System_Tank_Convection_HLiq_Q ; t141 [ 440ULL ] = X [ 7ULL
] ; t141 [ 441ULL ] = X [ 8ULL ] ; t141 [ 442ULL ] =
Electrical_Cooling_System_Tank_Tank_level * 0.005 ; t141 [ 443ULL ] =
Electrical_Cooling_System_Tank_Tank_level ; t141 [ 444ULL ] = X [ 15ULL ] ;
t141 [ 445ULL ] = X [ 14ULL ] * 0.1 ; t141 [ 446ULL ] = X [ 14ULL ] * 0.1 ;
t141 [ 447ULL ] = X [ 155ULL ] ; t141 [ 448ULL ] = X [ 158ULL ] ; t141 [
449ULL ] = X [ 152ULL ] * 0.001 ; t141 [ 450ULL ] =
Electrical_Cooling_System_Tank_Tank_level * 0.005 ; t141 [ 451ULL ] = X [
5ULL ] ; t141 [ 452ULL ] = X [ 10ULL ] ; t141 [ 453ULL ] = X [ 5ULL ] ; t141
[ 454ULL ] = X [ 10ULL ] ; t141 [ 455ULL ] = X [ 162ULL ] * 1000.0 ; t141 [
456ULL ] = X [ 162ULL ] * 0.5372318754156804 ; t141 [ 457ULL ] = X [ 10ULL ]
; t141 [ 458ULL ] = X [ 10ULL ] ; t141 [ 459ULL ] = X [ 124ULL ] * 1000.0 ;
t141 [ 460ULL ] = X [ 124ULL ] * 1000.0 ; t141 [ 461ULL ] = X [ 124ULL ] *
1000.0 ; t141 [ 462ULL ] = X [ 10ULL ] ; t141 [ 463ULL ] = 0.0 ; t141 [
464ULL ] = X [ 10ULL ] ; t141 [ 465ULL ] = X [ 10ULL ] ; t141 [ 466ULL ] = (
- X [ 124ULL ] + X [ 162ULL ] ) * 1000.0 ; t141 [ 467ULL ] = X [ 10ULL ] ;
t141 [ 468ULL ] = 0.0 ; t141 [ 469ULL ] = X [ 13ULL ] ; t141 [ 470ULL ] = X [
12ULL ] ; t141 [ 471ULL ] = X [ 16ULL ] ; t141 [ 472ULL ] = X [ 16ULL ] ;
t141 [ 473ULL ] = X [ 12ULL ] ; t141 [ 474ULL ] = X [ 12ULL ] ; t141 [ 475ULL
] = X [ 129ULL ] * 1000.0 ; t141 [ 476ULL ] = X [ 129ULL ] * 1000.0 ; t141 [
477ULL ] = X [ 129ULL ] * 1000.0 ; t141 [ 478ULL ] = X [ 12ULL ] ; t141 [
479ULL ] = X [ 16ULL ] ; t141 [ 480ULL ] = X [ 163ULL ] * 1000.0 ; t141 [
481ULL ] = X [ 163ULL ] * 0.28663972253274861 ; t141 [ 482ULL ] = X [ 16ULL ]
; t141 [ 483ULL ] = X [ 163ULL ] * 1000.0 ; t141 [ 484ULL ] = X [ 16ULL ] ;
t141 [ 485ULL ] = X [ 12ULL ] ; t141 [ 486ULL ] = ( ( ( X [ 12ULL ] * -
0.89999999999999991 + X [ 17ULL ] * 0.89999999999999991 ) + - X [ 129ULL ] )
+ - X [ 163ULL ] ) * 1000.0 ; t141 [ 487ULL ] = X [ 12ULL ] ; t141 [ 488ULL ]
= X [ 17ULL ] ; t141 [ 489ULL ] = X [ 13ULL ] ; t141 [ 490ULL ] = X [ 164ULL
] * 1000.0 ; t141 [ 491ULL ] = X [ 164ULL ] * 0.99670886732010888 ; t141 [
492ULL ] = X [ 12ULL ] ; t141 [ 493ULL ] = X [ 17ULL ] ; t141 [ 494ULL ] =
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co * 1000.0 ;
t141 [ 495ULL ] =
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co *
1.1111111111111112 ; t141 [ 496ULL ] = X [ 17ULL ] ; t141 [ 497ULL ] = ( ( X
[ 12ULL ] * 0.89999999999999991 + X [ 17ULL ] * - 0.89999999999999991 ) + - X
[ 164ULL ] ) * 1000.0 ; t141 [ 498ULL ] = X [ 17ULL ] ; t141 [ 499ULL ] = X [
134ULL ] ; t141 [ 500ULL ] = X [ 135ULL ] * 0.1 ; t141 [ 501ULL ] = X [ 89ULL
] ; t141 [ 502ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 503ULL ] = X [ 89ULL ] ;
t141 [ 504ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 505ULL ] = X [ 89ULL ] ; t141 [
506ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 507ULL ] = X [ 89ULL ] ; t141 [ 508ULL
] = X [ 90ULL ] * 0.1 ; t141 [ 509ULL ] = U_idx_2 ; t141 [ 510ULL ] = X [
93ULL ] * 1000.0 ; t141 [ 511ULL ] = X [ 93ULL ] ; t141 [ 512ULL ] = U_idx_2
; t141 [ 513ULL ] = U_idx_2 ; t141 [ 514ULL ] = X [ 93ULL ] * 1000.0 ; t141 [
515ULL ] = X [ 89ULL ] ; t141 [ 516ULL ] = X [ 90ULL ] * 0.1 ; t141 [ 517ULL
] = Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 * 0.001 ;
t141 [ 518ULL ] = t216 ; t141 [ 519ULL ] = t217 ; t141 [ 520ULL ] =
Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 * 0.001 ;
t141 [ 521ULL ] = t217 ; t141 [ 522ULL ] = X [ 98ULL ] ; t141 [ 523ULL ] = X
[ 99ULL ] * 0.1 ; t141 [ 524ULL ] = 0.0 ; t141 [ 525ULL ] = 0.0 ; t141 [
526ULL ] = X [ 98ULL ] ; t141 [ 527ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 528ULL
] = X [ 98ULL ] ; t141 [ 529ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 530ULL ] = X [
98ULL ] ; t141 [ 531ULL ] = X [ 99ULL ] * 0.1 ; t141 [ 532ULL ] = U_idx_2 ;
t141 [ 533ULL ] = X [ 102ULL ] * 1000.0 ; t141 [ 534ULL ] = X [ 102ULL ] ;
t141 [ 535ULL ] = U_idx_2 ; t141 [ 536ULL ] = U_idx_2 ; t141 [ 537ULL ] = X [
102ULL ] * 1000.0 ; t141 [ 538ULL ] = X [ 98ULL ] ; t141 [ 539ULL ] = X [
99ULL ] * 0.1 ; t141 [ 540ULL ] = 0.0 ; t141 [ 541ULL ] = 0.0 ; t141 [ 542ULL
] = X [ 99ULL ] * 99999.999999999985 ; t141 [ 543ULL ] = X [ 98ULL ] ; t141 [
544ULL ] = X [ 98ULL ] ; t141 [ 545ULL ] = X [ 98ULL ] ; t141 [ 546ULL ] = X
[ 99ULL ] * 0.1 ; t141 [ 547ULL ] = t220 * 0.001 ; t141 [ 548ULL ] = t221 ;
t141 [ 549ULL ] = t222 ; t141 [ 550ULL ] = t222 ; t141 [ 551ULL ] = X [
107ULL ] ; t141 [ 552ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 553ULL ] = 0.0 ;
t141 [ 554ULL ] = 0.0 ; t141 [ 555ULL ] = X [ 107ULL ] ; t141 [ 556ULL ] = X
[ 108ULL ] * 0.1 ; t141 [ 557ULL ] = X [ 107ULL ] ; t141 [ 558ULL ] = X [
108ULL ] * 0.1 ; t141 [ 559ULL ] = X [ 107ULL ] ; t141 [ 560ULL ] = X [
108ULL ] * 0.1 ; t141 [ 561ULL ] = U_idx_2 ; t141 [ 562ULL ] = X [ 111ULL ] *
1000.0 ; t141 [ 563ULL ] = X [ 111ULL ] ; t141 [ 564ULL ] = U_idx_2 ; t141 [
565ULL ] = U_idx_2 ; t141 [ 566ULL ] = X [ 111ULL ] * 1000.0 ; t141 [ 567ULL
] = X [ 107ULL ] ; t141 [ 568ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 569ULL ] =
0.0 ; t141 [ 570ULL ] = 0.0 ; t141 [ 571ULL ] = X [ 108ULL ] *
99999.999999999985 ; t141 [ 572ULL ] = X [ 107ULL ] ; t141 [ 573ULL ] = X [
107ULL ] ; t141 [ 574ULL ] = X [ 108ULL ] * 0.1 ; t141 [ 575ULL ] = t225 *
0.001 ; t141 [ 576ULL ] = t226 ; t141 [ 577ULL ] = t227 ; t141 [ 578ULL ] =
t227 ; t141 [ 579ULL ] = X [ 116ULL ] ; t141 [ 580ULL ] = X [ 117ULL ] * 0.1
; t141 [ 581ULL ] = 0.0 ; t141 [ 582ULL ] = 0.0 ; t141 [ 583ULL ] = X [
116ULL ] ; t141 [ 584ULL ] = X [ 117ULL ] * 0.1 ; t141 [ 585ULL ] = X [
116ULL ] ; t141 [ 586ULL ] = X [ 117ULL ] * 0.1 ; t141 [ 587ULL ] = X [
116ULL ] ; t141 [ 588ULL ] = X [ 117ULL ] * 0.1 ; t141 [ 589ULL ] = U_idx_2 ;
t141 [ 590ULL ] = X [ 118ULL ] * - 1000.0 ; t141 [ 591ULL ] = - X [ 118ULL ]
; t141 [ 592ULL ] = U_idx_2 ; t141 [ 593ULL ] = U_idx_2 ; t141 [ 594ULL ] = X
[ 118ULL ] * - 1000.0 ; t141 [ 595ULL ] = X [ 116ULL ] ; t141 [ 596ULL ] = X
[ 117ULL ] * 0.1 ; t141 [ 597ULL ] = 0.0 ; t141 [ 598ULL ] = 0.0 ; t141 [
599ULL ] = X [ 117ULL ] * 99999.999999999985 ; t141 [ 600ULL ] = X [ 116ULL ]
; t141 [ 601ULL ] = X [ 116ULL ] ; t141 [ 602ULL ] = X [ 117ULL ] * 0.1 ;
t141 [ 603ULL ] = t228 * 0.001 ; t141 [ 604ULL ] = t229 ; t141 [ 605ULL ] =
t230 ; t141 [ 606ULL ] = t230 ; t141 [ 607ULL ] = 0.0 ; t141 [ 608ULL ] =
65.0 + ( X [ 18ULL ] * - 0.1 + X [ 87ULL ] * 0.010000000000000002 ) ; t141 [
609ULL ] = 0.0 ; t141 [ 610ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141
[ 611ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 612ULL ] = X [
18ULL ] ; t141 [ 613ULL ] = X [ 165ULL ] ; t141 [ 614ULL ] = U_idx_13 ; t141
[ 615ULL ] = t231 ; t141 [ 616ULL ] = X [ 167ULL ] ; t141 [ 617ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 618ULL ] = X [ 166ULL ] ; t141 [
619ULL ] = X [ 19ULL ] ; t141 [ 620ULL ] = X [ 167ULL ] ; t141 [ 621ULL ] = -
65.0 + ( ( ( ( X [ 18ULL ] * 0.1 + X [ 87ULL ] * - 1.01 ) + X [ 166ULL ] *
1.0E-9 ) + - X [ 168ULL ] ) + X [ 19ULL ] ) ; t141 [ 622ULL ] = X [ 19ULL ] ;
t141 [ 623ULL ] = t231 ; t141 [ 624ULL ] = t231 ; t141 [ 625ULL ] = 0.0 ;
t141 [ 626ULL ] = 0.0 ; t141 [ 627ULL ] = Fuel_Cell_Boost_Converter_L_p_v ;
t141 [ 628ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 629ULL ] = X [
18ULL ] ; t141 [ 630ULL ] = Fuel_Cell_Current_Sensor1_I ; t141 [ 631ULL ] =
Fuel_Cell_Current_Sensor1_I ; t141 [ 632ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 633ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 634ULL ] =
Fuel_Cell_Current_Sensor1_I ; t141 [ 635ULL ] = 0.0 ; t141 [ 636ULL ] = X [
169ULL ] ; t141 [ 637ULL ] = X [ 170ULL ] * 0.1 ; t141 [ 638ULL ] = X [
171ULL ] ; t141 [ 639ULL ] = X [ 172ULL ] ; t141 [ 640ULL ] = X [ 173ULL ] ;
t141 [ 641ULL ] = 293.15 ; t141 [ 642ULL ] = - 184.19157727996955 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 1000.0 ;
t141 [ 643ULL ] = ( X [ 173ULL ] * 0.00062831853071795862 + -
0.18419157727996954 ) * 1591.5494309189535 ; t141 [ 644ULL ] = X [ 174ULL ] ;
t141 [ 645ULL ] = 0.101325 ; t141 [ 646ULL ] = X [ 175ULL ] ; t141 [ 647ULL ]
= X [ 176ULL ] ; t141 [ 648ULL ] = X [ 177ULL ] ; t141 [ 649ULL ] = X [
178ULL ] ; t141 [ 650ULL ] = 0.0 ; t141 [ 651ULL ] = X [ 186ULL ] ; t141 [
652ULL ] = X [ 185ULL ] ; t141 [ 653ULL ] = 293.15 ; t141 [ 654ULL ] = X [
174ULL ] ; t141 [ 655ULL ] = 0.101325 ; t141 [ 656ULL ] = X [ 175ULL ] ; t141
[ 657ULL ] = X [ 176ULL ] ; t141 [ 658ULL ] = X [ 178ULL ] ; t141 [ 659ULL ]
= X [ 179ULL ] ; t141 [ 660ULL ] = X [ 180ULL ] ; t141 [ 661ULL ] = X [
181ULL ] ; t141 [ 662ULL ] = X [ 182ULL ] ; t141 [ 663ULL ] = X [ 183ULL ] ;
t141 [ 664ULL ] = X [ 184ULL ] ; t141 [ 665ULL ] = X [ 180ULL ] ; t141 [
666ULL ] = X [ 181ULL ] ; t141 [ 667ULL ] = X [ 182ULL ] ; t141 [ 668ULL ] =
0.101325 ; t141 [ 669ULL ] = 0.9997 ; t141 [ 670ULL ] = X [ 187ULL ] ; t141 [
671ULL ] = 293.15 ; t141 [ 672ULL ] = - 184.19157727996955 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 1000.0 ;
t141 [ 673ULL ] = U_idx_3 ; t141 [ 674ULL ] = U_idx_3 * 3.1415926535897929E-6
; t141 [ 675ULL ] = X [ 169ULL ] ; t141 [ 676ULL ] = X [ 170ULL ] * 0.1 ;
t141 [ 677ULL ] = X [ 171ULL ] ; t141 [ 678ULL ] = X [ 172ULL ] ; t141 [
679ULL ] = X [ 188ULL ] ; t141 [ 680ULL ] = X [ 189ULL ] * 0.1 ; t141 [
681ULL ] = X [ 190ULL ] ; t141 [ 682ULL ] = X [ 191ULL ] ; t141 [ 683ULL ] =
X [ 23ULL ] ; t141 [ 684ULL ] = X [ 196ULL ] ; t141 [ 685ULL ] = X [ 22ULL ]
; t141 [ 686ULL ] = X [ 193ULL ] ; t141 [ 687ULL ] = X [ 20ULL ] + - 273.15 ;
t141 [ 688ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; t141 [
689ULL ] = X [ 194ULL ] * 0.1 ; t141 [ 690ULL ] = X [ 21ULL ] * 0.1 ; t141 [
691ULL ] = X [ 195ULL ] ; t141 [ 692ULL ] = X [ 197ULL ] ; t141 [ 693ULL ] =
- X [ 180ULL ] ; t141 [ 694ULL ] = X [ 198ULL ] * 0.1 ; for ( t197 = 0ULL ;
t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 695ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ t197 ] ; }
t141 [ 703ULL ] = X [ 173ULL ] ; t141 [ 704ULL ] = X [ 199ULL ] ; t141 [
705ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 ;
t141 [ 706ULL ] = - X [ 178ULL ] ; t141 [ 707ULL ] = 0.0 ; t141 [ 708ULL ] =
0.18419157727996954 + -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; t141 [
709ULL ] = X [ 200ULL ] ; t141 [ 710ULL ] = X [ 20ULL ] ; t141 [ 711ULL ] = X
[ 23ULL ] ; t141 [ 712ULL ] = X [ 22ULL ] ; t141 [ 713ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m5 ; t141 [
714ULL ] = X [ 169ULL ] ; t141 [ 715ULL ] = X [ 170ULL ] * 0.1 ; t141 [
716ULL ] = X [ 171ULL ] ; t141 [ 717ULL ] = X [ 172ULL ] ; t141 [ 718ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_P0 ; t141 [
719ULL ] = X [ 203ULL ] ; t141 [ 720ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; t141 [
721ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 ;
t141 [ 722ULL ] = t232 ; t141 [ 723ULL ] = X [ 208ULL ] ; t141 [ 724ULL ] = X
[ 209ULL ] ; t141 [ 725ULL ] = X [ 188ULL ] ; t141 [ 726ULL ] = X [ 189ULL ]
* 0.1 ; t141 [ 727ULL ] = X [ 190ULL ] ; t141 [ 728ULL ] = X [ 191ULL ] ;
t141 [ 729ULL ] = - X [ 178ULL ] ; t141 [ 730ULL ] = X [ 210ULL ] ; t141 [
731ULL ] = - X [ 180ULL ] ; t141 [ 732ULL ] = - X [ 181ULL ] ; t141 [ 733ULL
] = - X [ 182ULL ] ; t141 [ 734ULL ] = X [ 211ULL ] ; t141 [ 735ULL ] = X [
212ULL ] ; t141 [ 736ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c4 ; t141 [
737ULL ] = - X [ 181ULL ] ; t141 [ 738ULL ] = 0.0 ; t141 [ 739ULL ] = 0.0 ;
t141 [ 740ULL ] = t232 ; t141 [ 741ULL ] = - X [ 182ULL ] ; t141 [ 742ULL ] =
X [ 188ULL ] ; t141 [ 743ULL ] = X [ 189ULL ] * 0.1 ; t141 [ 744ULL ] = X [
190ULL ] ; t141 [ 745ULL ] = X [ 191ULL ] ; t141 [ 746ULL ] = U_idx_3 *
0.031415926535897927 * 0.0001 ; t141 [ 747ULL ] = X [ 174ULL ] ; t141 [
748ULL ] = 0.101325 ; t141 [ 749ULL ] = X [ 175ULL ] ; t141 [ 750ULL ] = X [
176ULL ] ; t141 [ 751ULL ] = X [ 180ULL ] ; t141 [ 752ULL ] = X [ 188ULL ] ;
t141 [ 753ULL ] = X [ 189ULL ] * 0.1 ; t141 [ 754ULL ] = X [ 190ULL ] ; t141
[ 755ULL ] = X [ 191ULL ] ; t141 [ 756ULL ] = X [ 178ULL ] ; t141 [ 757ULL ]
= X [ 219ULL ] ; t141 [ 758ULL ] = X [ 180ULL ] ; t141 [ 759ULL ] = X [
181ULL ] ; t141 [ 760ULL ] = X [ 182ULL ] ; t141 [ 761ULL ] = X [ 216ULL ] ;
t141 [ 762ULL ] = X [ 215ULL ] ; t141 [ 763ULL ] = X [ 213ULL ] ; t141 [
764ULL ] = X [ 214ULL ] * 0.1 ; t141 [ 765ULL ] = X [ 217ULL ] ; t141 [
766ULL ] = X [ 218ULL ] ; t141 [ 767ULL ] = X [ 178ULL ] ; t141 [ 768ULL ] =
- X [ 178ULL ] ; t141 [ 769ULL ] = X [ 174ULL ] ; t141 [ 770ULL ] = 0.101325
; t141 [ 771ULL ] = X [ 175ULL ] ; t141 [ 772ULL ] = X [ 176ULL ] ; t141 [
773ULL ] = - X [ 178ULL ] ; t141 [ 774ULL ] = X [ 219ULL ] ; t141 [ 775ULL ]
= - X [ 180ULL ] ; t141 [ 776ULL ] = - X [ 181ULL ] ; t141 [ 777ULL ] = - X [
182ULL ] ; t141 [ 778ULL ] = X [ 216ULL ] ; t141 [ 779ULL ] = X [ 215ULL ] ;
t141 [ 780ULL ] = - X [ 180ULL ] ; t141 [ 781ULL ] = X [ 181ULL ] ; t141 [
782ULL ] = - X [ 181ULL ] ; t141 [ 783ULL ] = X [ 182ULL ] ; t141 [ 784ULL ]
= - X [ 182ULL ] ; t141 [ 785ULL ] = U_idx_3 ; t141 [ 786ULL ] = X [ 220ULL ]
; t141 [ 787ULL ] = X [ 221ULL ] * 0.1 ; t141 [ 788ULL ] = X [ 222ULL ] ;
t141 [ 789ULL ] = X [ 223ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ )
{ t141 [ t197 + 790ULL ] = t154 [ t197 ] ; } for ( t197 = 0ULL ; t197 < 8ULL
; t197 ++ ) { t141 [ t197 + 798ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t197 ] ; }
t141 [ 806ULL ] = X [ 31ULL ] ; t141 [ 807ULL ] = X [ 234ULL ] ; t141 [
808ULL ] = X [ 235ULL ] * 0.1 ; t141 [ 809ULL ] = X [ 236ULL ] ; t141 [
810ULL ] = X [ 237ULL ] ; t141 [ 811ULL ] = X [ 220ULL ] ; t141 [ 812ULL ] =
X [ 221ULL ] * 0.1 ; t141 [ 813ULL ] = X [ 222ULL ] ; t141 [ 814ULL ] = X [
223ULL ] ; t141 [ 815ULL ] = X [ 25ULL ] ; t141 [ 816ULL ] = X [ 228ULL ] ;
t141 [ 817ULL ] = X [ 26ULL ] ; t141 [ 818ULL ] = X [ 239ULL ] ; t141 [
819ULL ] = X [ 24ULL ] + - 273.15 ; t141 [ 820ULL ] = X [ 238ULL ] ; t141 [
821ULL ] = X [ 240ULL ] * 0.1 ; t141 [ 822ULL ] = X [ 30ULL ] * 0.1 ; t141 [
823ULL ] = X [ 226ULL ] ; t141 [ 824ULL ] = X [ 242ULL ] ; t141 [ 825ULL ] =
X [ 241ULL ] ; t141 [ 826ULL ] = X [ 243ULL ] * 0.1 ; for ( t197 = 0ULL ;
t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 827ULL ] = t154 [ t197 ] ; } t141 [
835ULL ] = X [ 31ULL ] ; t141 [ 836ULL ] = X [ 227ULL ] ; t141 [ 837ULL ] = X
[ 244ULL ] ; t141 [ 838ULL ] = X [ 245ULL ] ; t141 [ 839ULL ] = 0.0 ; t141 [
840ULL ] = X [ 246ULL ] ; t141 [ 841ULL ] = X [ 225ULL ] ; t141 [ 842ULL ] =
X [ 24ULL ] ; t141 [ 843ULL ] = X [ 25ULL ] ; t141 [ 844ULL ] = X [ 26ULL ] ;
t141 [ 845ULL ] = X [ 30ULL ] / ( t242 == 0.0 ? 1.0E-16 : t242 ) * t238 *
0.026773120849090417 / 0.001 * 100000.0 ; t141 [ 846ULL ] = X [ 234ULL ] ;
t141 [ 847ULL ] = X [ 235ULL ] * 0.1 ; t141 [ 848ULL ] = X [ 236ULL ] ; t141
[ 849ULL ] = X [ 237ULL ] ; t141 [ 850ULL ] = X [ 244ULL ] ; t141 [ 851ULL ]
= X [ 247ULL ] ; t141 [ 852ULL ] = X [ 238ULL ] ; t141 [ 853ULL ] = X [
248ULL ] ; t141 [ 854ULL ] = X [ 249ULL ] ; t141 [ 855ULL ] = X [ 250ULL ] ;
t141 [ 856ULL ] = X [ 251ULL ] ; t141 [ 857ULL ] = X [ 220ULL ] ; t141 [
858ULL ] = X [ 221ULL ] * 0.1 ; t141 [ 859ULL ] = X [ 222ULL ] ; t141 [
860ULL ] = X [ 223ULL ] ; t141 [ 861ULL ] = X [ 245ULL ] ; t141 [ 862ULL ] =
X [ 252ULL ] ; t141 [ 863ULL ] = X [ 241ULL ] ; t141 [ 864ULL ] = X [ 253ULL
] ; t141 [ 865ULL ] = X [ 254ULL ] ; t141 [ 866ULL ] = X [ 255ULL ] ; t141 [
867ULL ] = X [ 256ULL ] ; t141 [ 868ULL ] = X [ 248ULL ] ; t141 [ 869ULL ] =
X [ 253ULL ] ; t141 [ 870ULL ] = 0.0 ; t141 [ 871ULL ] = 0.0 ; t141 [ 872ULL
] = X [ 249ULL ] ; t141 [ 873ULL ] = X [ 254ULL ] ; t141 [ 874ULL ] = X [
220ULL ] ; t141 [ 875ULL ] = X [ 221ULL ] * 0.1 ; t141 [ 876ULL ] = X [
222ULL ] ; t141 [ 877ULL ] = X [ 223ULL ] ; t141 [ 878ULL ] = X [ 169ULL ] ;
t141 [ 879ULL ] = X [ 170ULL ] * 0.1 ; t141 [ 880ULL ] = X [ 171ULL ] ; t141
[ 881ULL ] = X [ 172ULL ] ; t141 [ 882ULL ] = X [ 28ULL ] ; t141 [ 883ULL ] =
X [ 233ULL ] ; t141 [ 884ULL ] = X [ 29ULL ] ; t141 [ 885ULL ] = X [ 257ULL ]
; t141 [ 886ULL ] = X [ 27ULL ] + - 273.15 ; t141 [ 887ULL ] = - X [ 241ULL ]
; t141 [ 888ULL ] = X [ 258ULL ] * 0.1 ; t141 [ 889ULL ] = X [ 32ULL ] * 0.1
; t141 [ 890ULL ] = X [ 231ULL ] ; t141 [ 891ULL ] = X [ 259ULL ] ; t141 [
892ULL ] = X [ 192ULL ] ; t141 [ 893ULL ] = X [ 260ULL ] * 0.1 ; for ( t197 =
0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 894ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t197 ] ; }
t141 [ 902ULL ] = X [ 31ULL ] ; t141 [ 903ULL ] = X [ 232ULL ] ; t141 [
904ULL ] = - X [ 245ULL ] ; t141 [ 905ULL ] = X [ 201ULL ] ; t141 [ 906ULL ]
= - X [ 261ULL ] + - X [ 262ULL ] ; t141 [ 907ULL ] = X [ 263ULL ] ; t141 [
908ULL ] = X [ 230ULL ] ; t141 [ 909ULL ] = X [ 27ULL ] ; t141 [ 910ULL ] = X
[ 28ULL ] ; t141 [ 911ULL ] = X [ 29ULL ] ; t141 [ 912ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi94 ; t141 [
913ULL ] = X [ 220ULL ] ; t141 [ 914ULL ] = X [ 221ULL ] * 0.1 ; t141 [
915ULL ] = X [ 222ULL ] ; t141 [ 916ULL ] = X [ 223ULL ] ; t141 [ 917ULL ] =
- X [ 245ULL ] ; t141 [ 918ULL ] = X [ 264ULL ] ; t141 [ 919ULL ] = - X [
241ULL ] ; t141 [ 920ULL ] = - X [ 253ULL ] ; t141 [ 921ULL ] = - X [ 254ULL
] ; t141 [ 922ULL ] = X [ 265ULL ] ; t141 [ 923ULL ] = X [ 266ULL ] ; t141 [
924ULL ] = X [ 169ULL ] ; t141 [ 925ULL ] = X [ 170ULL ] * 0.1 ; t141 [
926ULL ] = X [ 171ULL ] ; t141 [ 927ULL ] = X [ 172ULL ] ; t141 [ 928ULL ] =
X [ 201ULL ] ; t141 [ 929ULL ] = X [ 267ULL ] ; t141 [ 930ULL ] = X [ 192ULL
] ; t141 [ 931ULL ] = X [ 204ULL ] ; t141 [ 932ULL ] = X [ 206ULL ] ; t141 [
933ULL ] = X [ 268ULL ] ; t141 [ 934ULL ] = X [ 269ULL ] ; t141 [ 935ULL ] =
- X [ 253ULL ] ; t141 [ 936ULL ] = X [ 204ULL ] ; t141 [ 937ULL ] = X [
270ULL ] ; t141 [ 938ULL ] = X [ 271ULL ] ; t141 [ 939ULL ] = - X [ 254ULL ]
; t141 [ 940ULL ] = X [ 206ULL ] ; t141 [ 941ULL ] = X [ 27ULL ] ; t141 [
942ULL ] = X [ 28ULL ] ; t141 [ 943ULL ] = X [ 29ULL ] ; t141 [ 944ULL ] = X
[ 234ULL ] ; t141 [ 945ULL ] = X [ 235ULL ] * 0.1 ; t141 [ 946ULL ] = X [
236ULL ] ; t141 [ 947ULL ] = X [ 237ULL ] ; t141 [ 948ULL ] = X [ 169ULL ] ;
t141 [ 949ULL ] = X [ 170ULL ] * 0.1 ; t141 [ 950ULL ] = X [ 171ULL ] ; t141
[ 951ULL ] = X [ 172ULL ] ; t141 [ 952ULL ] = X [ 272ULL ] ; t141 [ 953ULL ]
= X [ 37ULL ] * 0.1 ; t141 [ 954ULL ] = X [ 273ULL ] ; t141 [ 955ULL ] = X [
274ULL ] ; t141 [ 956ULL ] = X [ 234ULL ] ; t141 [ 957ULL ] = X [ 235ULL ] *
0.1 ; t141 [ 958ULL ] = X [ 236ULL ] ; t141 [ 959ULL ] = X [ 237ULL ] ; t141
[ 960ULL ] = U_idx_5 ; t141 [ 961ULL ] = X [ 275ULL ] ; t141 [ 962ULL ] = X [
33ULL ] ; t141 [ 963ULL ] = X [ 34ULL ] ; t141 [ 964ULL ] = X [ 35ULL ] ;
t141 [ 965ULL ] = U_idx_6 ; t141 [ 966ULL ] = - U_idx_5 ; for ( t197 = 0ULL ;
t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 967ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ t197 ] ; }
t141 [ 975ULL ] = X [ 278ULL ] ; t141 [ 976ULL ] = X [ 280ULL ] * 1.0E-5 *
99999.999999999985 ; t141 [ 977ULL ] = X [ 33ULL ] ; t141 [ 978ULL ] = X [
277ULL ] ; t141 [ 979ULL ] = X [ 277ULL ] ; t141 [ 980ULL ] = X [ 281ULL ] ;
t141 [ 981ULL ] = X [ 281ULL ] ; t141 [ 982ULL ] = X [ 272ULL ] ; t141 [
983ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 984ULL ] = X [ 273ULL ] ; t141 [ 985ULL
] = X [ 274ULL ] ; t141 [ 986ULL ] = X [ 234ULL ] ; t141 [ 987ULL ] = X [
235ULL ] * 0.1 ; t141 [ 988ULL ] = X [ 236ULL ] ; t141 [ 989ULL ] = X [
237ULL ] ; t141 [ 990ULL ] = X [ 34ULL ] ; t141 [ 991ULL ] = X [ 278ULL ] ;
t141 [ 992ULL ] = X [ 35ULL ] ; t141 [ 993ULL ] = X [ 283ULL ] ; t141 [
994ULL ] = X [ 33ULL ] + - 273.15 ; t141 [ 995ULL ] = X [ 282ULL ] ; t141 [
996ULL ] = X [ 284ULL ] * 0.1 ; t141 [ 997ULL ] = X [ 36ULL ] * 0.1 ; t141 [
998ULL ] = X [ 279ULL ] ; t141 [ 999ULL ] = X [ 285ULL ] ; t141 [ 1000ULL ] =
- X [ 238ULL ] ; t141 [ 1001ULL ] = X [ 286ULL ] * 0.1 ; for ( t197 = 0ULL ;
t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1002ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ t197 ] ; }
t141 [ 1010ULL ] = X [ 281ULL ] ; t141 [ 1011ULL ] = X [ 276ULL ] ; t141 [
1012ULL ] = X [ 287ULL ] ; t141 [ 1013ULL ] = - X [ 244ULL ] ; t141 [ 1014ULL
] = - X [ 275ULL ] ; t141 [ 1015ULL ] = 0.0 ; t141 [ 1016ULL ] = X [ 277ULL ]
; t141 [ 1017ULL ] = X [ 33ULL ] ; t141 [ 1018ULL ] = X [ 34ULL ] ; t141 [
1019ULL ] = X [ 35ULL ] ; t141 [ 1020ULL ] = X [ 36ULL ] / ( t264 == 0.0 ?
1.0E-16 : t264 ) * t250 * 0.00049087385212340522 / 0.001 * 100000.0 ; t141 [
1021ULL ] = X [ 272ULL ] ; t141 [ 1022ULL ] = X [ 37ULL ] * 0.1 ; t141 [
1023ULL ] = X [ 273ULL ] ; t141 [ 1024ULL ] = X [ 274ULL ] ; t141 [ 1025ULL ]
= X [ 287ULL ] ; t141 [ 1026ULL ] = X [ 288ULL ] ; t141 [ 1027ULL ] = X [
282ULL ] ; t141 [ 1028ULL ] = X [ 289ULL ] ; t141 [ 1029ULL ] = X [ 290ULL ]
; t141 [ 1030ULL ] = X [ 291ULL ] ; t141 [ 1031ULL ] = X [ 292ULL ] ; t141 [
1032ULL ] = X [ 234ULL ] ; t141 [ 1033ULL ] = X [ 235ULL ] * 0.1 ; t141 [
1034ULL ] = X [ 236ULL ] ; t141 [ 1035ULL ] = X [ 237ULL ] ; t141 [ 1036ULL ]
= - X [ 244ULL ] ; t141 [ 1037ULL ] = X [ 293ULL ] ; t141 [ 1038ULL ] = - X [
238ULL ] ; t141 [ 1039ULL ] = - X [ 248ULL ] ; t141 [ 1040ULL ] = - X [
249ULL ] ; t141 [ 1041ULL ] = X [ 294ULL ] ; t141 [ 1042ULL ] = X [ 295ULL ]
; t141 [ 1043ULL ] = X [ 289ULL ] ; t141 [ 1044ULL ] = - X [ 248ULL ] ; t141
[ 1045ULL ] = 0.0 ; t141 [ 1046ULL ] = U_idx_5 ; t141 [ 1047ULL ] = X [
290ULL ] ; t141 [ 1048ULL ] = - X [ 249ULL ] ; t141 [ 1049ULL ] = U_idx_6 ;
t141 [ 1050ULL ] = U_idx_5 ; t141 [ 1051ULL ] = X [ 296ULL ] ; t141 [ 1052ULL
] = X [ 297ULL ] * 0.1 ; t141 [ 1053ULL ] = X [ 298ULL ] ; t141 [ 1054ULL ] =
X [ 299ULL ] ; t141 [ 1055ULL ] = X [ 300ULL ] ; t141 [ 1056ULL ] = 293.15 ;
t141 [ 1057ULL ] = - 920.95788639984789 + t235 * 1000.0 ; t141 [ 1058ULL ] =
( X [ 300ULL ] * 0.0031415926535897937 + - 0.92095788639984788 ) *
318.30988618379064 ; t141 [ 1059ULL ] = X [ 301ULL ] ; t141 [ 1060ULL ] =
0.101325 ; t141 [ 1061ULL ] = X [ 302ULL ] ; t141 [ 1062ULL ] = X [ 303ULL ]
; t141 [ 1063ULL ] = X [ 304ULL ] ; t141 [ 1064ULL ] = X [ 305ULL ] ; t141 [
1065ULL ] = 0.5 ; t141 [ 1066ULL ] = X [ 313ULL ] ; t141 [ 1067ULL ] = X [
312ULL ] ; t141 [ 1068ULL ] = 293.15 ; t141 [ 1069ULL ] = X [ 301ULL ] ; t141
[ 1070ULL ] = 0.101325 ; t141 [ 1071ULL ] = X [ 302ULL ] ; t141 [ 1072ULL ] =
X [ 303ULL ] ; t141 [ 1073ULL ] = X [ 305ULL ] ; t141 [ 1074ULL ] = X [
306ULL ] ; t141 [ 1075ULL ] = X [ 307ULL ] ; t141 [ 1076ULL ] = X [ 308ULL ]
; t141 [ 1077ULL ] = X [ 309ULL ] ; t141 [ 1078ULL ] = X [ 310ULL ] ; t141 [
1079ULL ] = X [ 311ULL ] ; t141 [ 1080ULL ] = X [ 307ULL ] ; t141 [ 1081ULL ]
= X [ 308ULL ] ; t141 [ 1082ULL ] = X [ 309ULL ] ; t141 [ 1083ULL ] =
0.101325 ; t141 [ 1084ULL ] = 0.21 ; t141 [ 1085ULL ] = X [ 314ULL ] ; t141 [
1086ULL ] = 293.15 ; t141 [ 1087ULL ] = - 920.95788639984789 + t235 * 1000.0
; t141 [ 1088ULL ] = X [ 296ULL ] ; t141 [ 1089ULL ] = X [ 297ULL ] * 0.1 ;
t141 [ 1090ULL ] = X [ 298ULL ] ; t141 [ 1091ULL ] = X [ 299ULL ] ; t141 [
1092ULL ] = X [ 315ULL ] ; t141 [ 1093ULL ] = t251 * 0.1 ; t141 [ 1094ULL ] =
X [ 317ULL ] ; t141 [ 1095ULL ] = X [ 318ULL ] ; t141 [ 1096ULL ] = X [ 41ULL
] ; t141 [ 1097ULL ] = X [ 323ULL ] ; t141 [ 1098ULL ] = X [ 40ULL ] ; t141 [
1099ULL ] = X [ 320ULL ] ; t141 [ 1100ULL ] = X [ 38ULL ] + - 273.15 ; t141 [
1101ULL ] = X [ 319ULL ] ; t141 [ 1102ULL ] = X [ 321ULL ] * 0.1 ; t141 [
1103ULL ] = X [ 39ULL ] * 0.1 ; t141 [ 1104ULL ] = X [ 322ULL ] ; t141 [
1105ULL ] = X [ 324ULL ] ; t141 [ 1106ULL ] = - X [ 307ULL ] ; t141 [ 1107ULL
] = X [ 325ULL ] * 0.1 ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [
t197 + 1108ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5 [ t197 ] ; }
t141 [ 1116ULL ] = X [ 300ULL ] ; t141 [ 1117ULL ] = X [ 326ULL ] ; t141 [
1118ULL ] = X [ 328ULL ] ; t141 [ 1119ULL ] = - X [ 305ULL ] ; t141 [ 1120ULL
] = 0.0 ; t141 [ 1121ULL ] = 0.92095788639984788 + - t235 ; t141 [ 1122ULL ]
= X [ 327ULL ] ; t141 [ 1123ULL ] = X [ 38ULL ] ; t141 [ 1124ULL ] = X [
41ULL ] ; t141 [ 1125ULL ] = X [ 40ULL ] ; t141 [ 1126ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ; t141 [
1127ULL ] = X [ 296ULL ] ; t141 [ 1128ULL ] = X [ 297ULL ] * 0.1 ; t141 [
1129ULL ] = X [ 298ULL ] ; t141 [ 1130ULL ] = X [ 299ULL ] ; t141 [ 1131ULL ]
= X [ 328ULL ] ; t141 [ 1132ULL ] = X [ 329ULL ] ; t141 [ 1133ULL ] = X [
319ULL ] ; t141 [ 1134ULL ] = X [ 330ULL ] ; t141 [ 1135ULL ] = X [ 331ULL ]
; t141 [ 1136ULL ] = X [ 332ULL ] ; t141 [ 1137ULL ] = X [ 333ULL ] ; t141 [
1138ULL ] = X [ 315ULL ] ; t141 [ 1139ULL ] = t251 * 0.1 ; t141 [ 1140ULL ] =
X [ 317ULL ] ; t141 [ 1141ULL ] = X [ 318ULL ] ; t141 [ 1142ULL ] = - X [
305ULL ] ; t141 [ 1143ULL ] = X [ 334ULL ] ; t141 [ 1144ULL ] = - X [ 307ULL
] ; t141 [ 1145ULL ] = - X [ 308ULL ] ; t141 [ 1146ULL ] = - X [ 309ULL ] ;
t141 [ 1147ULL ] = X [ 335ULL ] ; t141 [ 1148ULL ] = X [ 336ULL ] ; t141 [
1149ULL ] = X [ 330ULL ] ; t141 [ 1150ULL ] = - X [ 308ULL ] ; t141 [ 1151ULL
] = 0.0 ; t141 [ 1152ULL ] = 0.0 ; t141 [ 1153ULL ] = X [ 331ULL ] ; t141 [
1154ULL ] = - X [ 309ULL ] ; t141 [ 1155ULL ] = X [ 315ULL ] ; t141 [ 1156ULL
] = t251 * 0.1 ; t141 [ 1157ULL ] = X [ 317ULL ] ; t141 [ 1158ULL ] = X [
318ULL ] ; t141 [ 1159ULL ] = 0.0 ; t141 [ 1160ULL ] = 0.0 ; t141 [ 1161ULL ]
= 0.0 ; t141 [ 1162ULL ] = 0.0 ; t141 [ 1163ULL ] = X [ 301ULL ] ; t141 [
1164ULL ] = 0.101325 ; t141 [ 1165ULL ] = X [ 302ULL ] ; t141 [ 1166ULL ] = X
[ 303ULL ] ; t141 [ 1167ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 1.0E+6 ; t141 [
1168ULL ] = 1.0E-8 ; t141 [ 1169ULL ] = X [ 316ULL ] ; t141 [ 1170ULL ] =
1.0E-8 ; t141 [ 1171ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 7812.5001220703134
; t141 [ 1172ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 1.0E+6 ; t141 [ 1173ULL ]
= X [ 316ULL ] ; t141 [ 1174ULL ] = X [ 316ULL ] * 0.0019634954084936209 ;
t141 [ 1175ULL ] = t251 * 99999.999999999985 ; t141 [ 1176ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 * 0.1 ; t141
[ 1177ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 7812.5001220703134 ; t141 [
1178ULL ] = X [ 315ULL ] ; t141 [ 1179ULL ] = t251 * 0.1 ; t141 [ 1180ULL ] =
X [ 317ULL ] ; t141 [ 1181ULL ] = X [ 318ULL ] ; t141 [ 1182ULL ] = 0.0 ;
t141 [ 1183ULL ] = 0.0 ; t141 [ 1184ULL ] = 0.0 ; t141 [ 1185ULL ] = 0.0 ;
t141 [ 1186ULL ] = t251 * 99999.999999999985 ; t141 [ 1187ULL ] = X [ 315ULL
] ; t141 [ 1188ULL ] = X [ 315ULL ] ; t141 [ 1189ULL ] = t251 * 0.1 ; t141 [
1190ULL ] = X [ 317ULL ] ; t141 [ 1191ULL ] = X [ 318ULL ] ; t141 [ 1192ULL ]
= X [ 316ULL ] * 0.0019634954084936209 ; t141 [ 1193ULL ] = X [ 301ULL ] ;
t141 [ 1194ULL ] = 0.101325 ; t141 [ 1195ULL ] = X [ 302ULL ] ; t141 [
1196ULL ] = X [ 303ULL ] ; t141 [ 1197ULL ] = X [ 307ULL ] ; t141 [ 1198ULL ]
= X [ 315ULL ] ; t141 [ 1199ULL ] = t251 * 0.1 ; t141 [ 1200ULL ] = X [
317ULL ] ; t141 [ 1201ULL ] = X [ 318ULL ] ; t141 [ 1202ULL ] = X [ 305ULL ]
; t141 [ 1203ULL ] = X [ 343ULL ] ; t141 [ 1204ULL ] = X [ 307ULL ] ; t141 [
1205ULL ] = X [ 308ULL ] ; t141 [ 1206ULL ] = X [ 309ULL ] ; t141 [ 1207ULL ]
= X [ 340ULL ] ; t141 [ 1208ULL ] = X [ 339ULL ] ; t141 [ 1209ULL ] = X [
337ULL ] ; t141 [ 1210ULL ] = X [ 338ULL ] * 0.1 ; t141 [ 1211ULL ] = X [
341ULL ] ; t141 [ 1212ULL ] = X [ 342ULL ] ; t141 [ 1213ULL ] = X [ 305ULL ]
; t141 [ 1214ULL ] = - X [ 305ULL ] ; t141 [ 1215ULL ] = X [ 301ULL ] ; t141
[ 1216ULL ] = 0.101325 ; t141 [ 1217ULL ] = X [ 302ULL ] ; t141 [ 1218ULL ] =
X [ 303ULL ] ; t141 [ 1219ULL ] = - X [ 305ULL ] ; t141 [ 1220ULL ] = X [
343ULL ] ; t141 [ 1221ULL ] = - X [ 307ULL ] ; t141 [ 1222ULL ] = - X [
308ULL ] ; t141 [ 1223ULL ] = - X [ 309ULL ] ; t141 [ 1224ULL ] = X [ 340ULL
] ; t141 [ 1225ULL ] = X [ 339ULL ] ; t141 [ 1226ULL ] = - X [ 307ULL ] ;
t141 [ 1227ULL ] = X [ 308ULL ] ; t141 [ 1228ULL ] = - X [ 308ULL ] ; t141 [
1229ULL ] = X [ 309ULL ] ; t141 [ 1230ULL ] = - X [ 309ULL ] ; t141 [ 1231ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu26 * 0.1 ;
t141 [ 1232ULL ] = U_idx_7 ; t141 [ 1233ULL ] = X [ 344ULL ] ; t141 [ 1234ULL
] = X [ 345ULL ] * 0.1 ; t141 [ 1235ULL ] = X [ 346ULL ] ; t141 [ 1236ULL ] =
X [ 347ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 +
1237ULL ] = t159 [ t197 ] ; } for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) {
t141 [ t197 + 1245ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ t197 ] ; }
t141 [ 1253ULL ] = X [ 31ULL ] ; t141 [ 1254ULL ] = X [ 358ULL ] ; t141 [
1255ULL ] = X [ 359ULL ] * 0.1 ; t141 [ 1256ULL ] = X [ 360ULL ] ; t141 [
1257ULL ] = X [ 361ULL ] ; t141 [ 1258ULL ] = X [ 344ULL ] ; t141 [ 1259ULL ]
= X [ 345ULL ] * 0.1 ; t141 [ 1260ULL ] = X [ 346ULL ] ; t141 [ 1261ULL ] = X
[ 347ULL ] ; t141 [ 1262ULL ] = X [ 43ULL ] ; t141 [ 1263ULL ] = X [ 352ULL ]
; t141 [ 1264ULL ] = X [ 44ULL ] ; t141 [ 1265ULL ] = X [ 363ULL ] ; t141 [
1266ULL ] = X [ 42ULL ] + - 273.15 ; t141 [ 1267ULL ] = X [ 362ULL ] ; t141 [
1268ULL ] = X [ 364ULL ] * 0.1 ; t141 [ 1269ULL ] = X [ 48ULL ] * 0.1 ; t141
[ 1270ULL ] = X [ 350ULL ] ; t141 [ 1271ULL ] = X [ 366ULL ] ; t141 [ 1272ULL
] = X [ 365ULL ] ; t141 [ 1273ULL ] = X [ 367ULL ] * 0.1 ; for ( t197 = 0ULL
; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1274ULL ] = t159 [ t197 ] ; } t141
[ 1282ULL ] = X [ 31ULL ] ; t141 [ 1283ULL ] = X [ 351ULL ] ; t141 [ 1284ULL
] = X [ 368ULL ] ; t141 [ 1285ULL ] = X [ 369ULL ] ; t141 [ 1286ULL ] = 0.0 ;
t141 [ 1287ULL ] = X [ 370ULL ] ; t141 [ 1288ULL ] = X [ 349ULL ] ; t141 [
1289ULL ] = X [ 42ULL ] ; t141 [ 1290ULL ] = X [ 43ULL ] ; t141 [ 1291ULL ] =
X [ 44ULL ] ; t141 [ 1292ULL ] = t258 ; t141 [ 1293ULL ] = X [ 358ULL ] ;
t141 [ 1294ULL ] = X [ 359ULL ] * 0.1 ; t141 [ 1295ULL ] = X [ 360ULL ] ;
t141 [ 1296ULL ] = X [ 361ULL ] ; t141 [ 1297ULL ] = X [ 368ULL ] ; t141 [
1298ULL ] = X [ 371ULL ] ; t141 [ 1299ULL ] = X [ 362ULL ] ; t141 [ 1300ULL ]
= X [ 372ULL ] ; t141 [ 1301ULL ] = X [ 373ULL ] ; t141 [ 1302ULL ] = X [
374ULL ] ; t141 [ 1303ULL ] = X [ 375ULL ] ; t141 [ 1304ULL ] = X [ 344ULL ]
; t141 [ 1305ULL ] = X [ 345ULL ] * 0.1 ; t141 [ 1306ULL ] = X [ 346ULL ] ;
t141 [ 1307ULL ] = X [ 347ULL ] ; t141 [ 1308ULL ] = X [ 369ULL ] ; t141 [
1309ULL ] = X [ 376ULL ] ; t141 [ 1310ULL ] = X [ 365ULL ] ; t141 [ 1311ULL ]
= X [ 377ULL ] ; t141 [ 1312ULL ] = X [ 378ULL ] ; t141 [ 1313ULL ] = X [
379ULL ] ; t141 [ 1314ULL ] = X [ 380ULL ] ; t141 [ 1315ULL ] = X [ 372ULL ]
; t141 [ 1316ULL ] = X [ 377ULL ] ; t141 [ 1317ULL ] = 0.0 ; t141 [ 1318ULL ]
= 0.0 ; t141 [ 1319ULL ] = X [ 373ULL ] ; t141 [ 1320ULL ] = X [ 378ULL ] ;
t141 [ 1321ULL ] = X [ 344ULL ] ; t141 [ 1322ULL ] = X [ 345ULL ] * 0.1 ;
t141 [ 1323ULL ] = X [ 346ULL ] ; t141 [ 1324ULL ] = X [ 347ULL ] ; t141 [
1325ULL ] = X [ 296ULL ] ; t141 [ 1326ULL ] = X [ 297ULL ] * 0.1 ; t141 [
1327ULL ] = X [ 298ULL ] ; t141 [ 1328ULL ] = X [ 299ULL ] ; t141 [ 1329ULL ]
= X [ 46ULL ] ; t141 [ 1330ULL ] = X [ 357ULL ] ; t141 [ 1331ULL ] = X [
47ULL ] ; t141 [ 1332ULL ] = X [ 381ULL ] ; t141 [ 1333ULL ] = X [ 45ULL ] +
- 273.15 ; t141 [ 1334ULL ] = - X [ 365ULL ] ; t141 [ 1335ULL ] = X [ 382ULL
] * 0.1 ; t141 [ 1336ULL ] = X [ 49ULL ] * 0.1 ; t141 [ 1337ULL ] = X [
355ULL ] ; t141 [ 1338ULL ] = X [ 383ULL ] ; t141 [ 1339ULL ] = - X [ 319ULL
] ; t141 [ 1340ULL ] = X [ 384ULL ] * 0.1 ; for ( t197 = 0ULL ; t197 < 8ULL ;
t197 ++ ) { t141 [ t197 + 1341ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ t197 ] ; }
t141 [ 1349ULL ] = X [ 31ULL ] ; t141 [ 1350ULL ] = X [ 356ULL ] ; t141 [
1351ULL ] = - X [ 369ULL ] ; t141 [ 1352ULL ] = - X [ 328ULL ] ; t141 [
1353ULL ] = ( - X [ 385ULL ] + - X [ 386ULL ] ) + - X [ 387ULL ] ; t141 [
1354ULL ] = X [ 388ULL ] ; t141 [ 1355ULL ] = X [ 354ULL ] ; t141 [ 1356ULL ]
= X [ 45ULL ] ; t141 [ 1357ULL ] = X [ 46ULL ] ; t141 [ 1358ULL ] = X [ 47ULL
] ; t141 [ 1359ULL ] = X [ 49ULL ] / ( t292 == 0.0 ? 1.0E-16 : t292 ) * t266
* 0.026773120849090417 / 0.001 * 100000.0 ; t141 [ 1360ULL ] = X [ 344ULL ] ;
t141 [ 1361ULL ] = X [ 345ULL ] * 0.1 ; t141 [ 1362ULL ] = X [ 346ULL ] ;
t141 [ 1363ULL ] = X [ 347ULL ] ; t141 [ 1364ULL ] = - X [ 369ULL ] ; t141 [
1365ULL ] = X [ 389ULL ] ; t141 [ 1366ULL ] = - X [ 365ULL ] ; t141 [ 1367ULL
] = - X [ 377ULL ] ; t141 [ 1368ULL ] = - X [ 378ULL ] ; t141 [ 1369ULL ] = X
[ 390ULL ] ; t141 [ 1370ULL ] = X [ 391ULL ] ; t141 [ 1371ULL ] = X [ 296ULL
] ; t141 [ 1372ULL ] = X [ 297ULL ] * 0.1 ; t141 [ 1373ULL ] = X [ 298ULL ] ;
t141 [ 1374ULL ] = X [ 299ULL ] ; t141 [ 1375ULL ] = - X [ 328ULL ] ; t141 [
1376ULL ] = X [ 392ULL ] ; t141 [ 1377ULL ] = - X [ 319ULL ] ; t141 [ 1378ULL
] = - X [ 330ULL ] ; t141 [ 1379ULL ] = - X [ 331ULL ] ; t141 [ 1380ULL ] = X
[ 393ULL ] ; t141 [ 1381ULL ] = X [ 394ULL ] ; t141 [ 1382ULL ] = - X [
377ULL ] ; t141 [ 1383ULL ] = - X [ 330ULL ] ; t141 [ 1384ULL ] = X [ 395ULL
] ; t141 [ 1385ULL ] = X [ 396ULL ] ; t141 [ 1386ULL ] = - X [ 378ULL ] ;
t141 [ 1387ULL ] = - X [ 331ULL ] ; t141 [ 1388ULL ] = X [ 45ULL ] ; t141 [
1389ULL ] = X [ 46ULL ] ; t141 [ 1390ULL ] = X [ 47ULL ] ; t141 [ 1391ULL ] =
X [ 358ULL ] ; t141 [ 1392ULL ] = X [ 359ULL ] * 0.1 ; t141 [ 1393ULL ] = X [
360ULL ] ; t141 [ 1394ULL ] = X [ 361ULL ] ; t141 [ 1395ULL ] = X [ 296ULL ]
; t141 [ 1396ULL ] = X [ 297ULL ] * 0.1 ; t141 [ 1397ULL ] = X [ 298ULL ] ;
t141 [ 1398ULL ] = X [ 299ULL ] ; t141 [ 1399ULL ] = X [ 397ULL ] ; t141 [
1400ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 1401ULL ] = X [ 398ULL ] ; t141 [
1402ULL ] = X [ 399ULL ] ; t141 [ 1403ULL ] = X [ 358ULL ] ; t141 [ 1404ULL ]
= X [ 359ULL ] * 0.1 ; t141 [ 1405ULL ] = X [ 360ULL ] ; t141 [ 1406ULL ] = X
[ 361ULL ] ; t141 [ 1407ULL ] = U_idx_8 ; t141 [ 1408ULL ] = X [ 400ULL ] ;
t141 [ 1409ULL ] = X [ 50ULL ] ; t141 [ 1410ULL ] = X [ 51ULL ] ; t141 [
1411ULL ] = X [ 52ULL ] ; t141 [ 1412ULL ] = U_idx_9 ; t141 [ 1413ULL ] = -
U_idx_8 ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1414ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ t197 ]
; } t141 [ 1422ULL ] = X [ 403ULL ] ; t141 [ 1423ULL ] = X [ 405ULL ] *
1.0E-5 * 99999.999999999985 ; t141 [ 1424ULL ] = X [ 50ULL ] ; t141 [ 1425ULL
] = X [ 402ULL ] ; t141 [ 1426ULL ] = X [ 402ULL ] ; t141 [ 1427ULL ] = X [
406ULL ] ; t141 [ 1428ULL ] = X [ 406ULL ] ; t141 [ 1429ULL ] = X [ 397ULL ]
; t141 [ 1430ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 1431ULL ] = X [ 398ULL ] ;
t141 [ 1432ULL ] = X [ 399ULL ] ; t141 [ 1433ULL ] = X [ 358ULL ] ; t141 [
1434ULL ] = X [ 359ULL ] * 0.1 ; t141 [ 1435ULL ] = X [ 360ULL ] ; t141 [
1436ULL ] = X [ 361ULL ] ; t141 [ 1437ULL ] = X [ 51ULL ] ; t141 [ 1438ULL ]
= X [ 403ULL ] ; t141 [ 1439ULL ] = X [ 52ULL ] ; t141 [ 1440ULL ] = X [
408ULL ] ; t141 [ 1441ULL ] = X [ 50ULL ] + - 273.15 ; t141 [ 1442ULL ] = X [
407ULL ] ; t141 [ 1443ULL ] = X [ 409ULL ] * 0.1 ; t141 [ 1444ULL ] = X [
53ULL ] * 0.1 ; t141 [ 1445ULL ] = X [ 404ULL ] ; t141 [ 1446ULL ] = X [
410ULL ] ; t141 [ 1447ULL ] = - X [ 362ULL ] ; t141 [ 1448ULL ] = X [ 411ULL
] * 0.1 ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1449ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ t197 ]
; } t141 [ 1457ULL ] = X [ 406ULL ] ; t141 [ 1458ULL ] = X [ 401ULL ] ; t141
[ 1459ULL ] = X [ 412ULL ] ; t141 [ 1460ULL ] = - X [ 368ULL ] ; t141 [
1461ULL ] = - X [ 400ULL ] ; t141 [ 1462ULL ] = 0.0 ; t141 [ 1463ULL ] = X [
402ULL ] ; t141 [ 1464ULL ] = X [ 50ULL ] ; t141 [ 1465ULL ] = X [ 51ULL ] ;
t141 [ 1466ULL ] = X [ 52ULL ] ; t141 [ 1467ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip36 ; t141 [
1468ULL ] = X [ 397ULL ] ; t141 [ 1469ULL ] = X [ 54ULL ] * 0.1 ; t141 [
1470ULL ] = X [ 398ULL ] ; t141 [ 1471ULL ] = X [ 399ULL ] ; t141 [ 1472ULL ]
= X [ 412ULL ] ; t141 [ 1473ULL ] = X [ 413ULL ] ; t141 [ 1474ULL ] = X [
407ULL ] ; t141 [ 1475ULL ] = X [ 414ULL ] ; t141 [ 1476ULL ] = X [ 415ULL ]
; t141 [ 1477ULL ] = X [ 416ULL ] ; t141 [ 1478ULL ] = X [ 417ULL ] ; t141 [
1479ULL ] = X [ 358ULL ] ; t141 [ 1480ULL ] = X [ 359ULL ] * 0.1 ; t141 [
1481ULL ] = X [ 360ULL ] ; t141 [ 1482ULL ] = X [ 361ULL ] ; t141 [ 1483ULL ]
= - X [ 368ULL ] ; t141 [ 1484ULL ] = X [ 418ULL ] ; t141 [ 1485ULL ] = - X [
362ULL ] ; t141 [ 1486ULL ] = - X [ 372ULL ] ; t141 [ 1487ULL ] = - X [
373ULL ] ; t141 [ 1488ULL ] = X [ 419ULL ] ; t141 [ 1489ULL ] = X [ 420ULL ]
; t141 [ 1490ULL ] = X [ 414ULL ] ; t141 [ 1491ULL ] = - X [ 372ULL ] ; t141
[ 1492ULL ] = 0.0 ; t141 [ 1493ULL ] = U_idx_8 ; t141 [ 1494ULL ] = X [
415ULL ] ; t141 [ 1495ULL ] = - X [ 373ULL ] ; t141 [ 1496ULL ] = U_idx_9 ;
t141 [ 1497ULL ] = U_idx_8 ; t141 [ 1498ULL ] = X [ 61ULL ] ; t141 [ 1499ULL
] = 293.15 ; t141 [ 1500ULL ] = t272 * 1000.0 ; t141 [ 1501ULL ] = t272 *
0.35777375282305851 ; t141 [ 1502ULL ] = X [ 423ULL ] ; t141 [ 1503ULL ] =
0.101325 ; t141 [ 1504ULL ] = X [ 423ULL ] ; t141 [ 1505ULL ] = 0.101325 ;
t141 [ 1506ULL ] = 0.0 ; t141 [ 1507ULL ] = X [ 55ULL ] ; t141 [ 1508ULL ] =
t273 ; t141 [ 1509ULL ] = 0.0 ; t141 [ 1510ULL ] = X [ 426ULL ] ; t141 [
1511ULL ] = X [ 55ULL ] ; t141 [ 1512ULL ] = 0.101325 ; t141 [ 1513ULL ] = X
[ 423ULL ] ; t141 [ 1514ULL ] = 0.101325 ; t141 [ 1515ULL ] = t273 ; t141 [
1516ULL ] = X [ 427ULL ] ; t141 [ 1517ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ; t141 [
1518ULL ] = X [ 429ULL ] ; t141 [ 1519ULL ] = X [ 56ULL ] ; t141 [ 1520ULL ]
= 0.0 ; t141 [ 1521ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant3 ; t141 [
1522ULL ] = 0.0 ; t141 [ 1523ULL ] = 0.0 ; t141 [ 1524ULL ] = X [ 55ULL ] ;
t141 [ 1525ULL ] = X [ 55ULL ] ; t141 [ 1526ULL ] = X [ 423ULL ] ; t141 [
1527ULL ] = 0.101325 ; t141 [ 1528ULL ] = X [ 426ULL ] ; t141 [ 1529ULL ] = X
[ 426ULL ] ; t141 [ 1530ULL ] = 293.15 ; t141 [ 1531ULL ] = t272 * 1000.0 ;
t141 [ 1532ULL ] = X [ 430ULL ] ; t141 [ 1533ULL ] = X [ 431ULL ] * 0.1 ;
t141 [ 1534ULL ] = X [ 432ULL ] ; t141 [ 1535ULL ] = X [ 433ULL ] * 0.1 ;
t141 [ 1536ULL ] = X [ 434ULL ] ; t141 [ 1537ULL ] = - X [ 434ULL ] ; t141 [
1538ULL ] = X [ 430ULL ] ; t141 [ 1539ULL ] = X [ 431ULL ] * 0.1 ; t141 [
1540ULL ] = X [ 434ULL ] ; t141 [ 1541ULL ] = X [ 435ULL ] ; t141 [ 1542ULL ]
= X [ 436ULL ] ; t141 [ 1543ULL ] = X [ 437ULL ] ; t141 [ 1544ULL ] = X [
432ULL ] ; t141 [ 1545ULL ] = X [ 433ULL ] * 0.1 ; t141 [ 1546ULL ] = - X [
434ULL ] ; t141 [ 1547ULL ] = X [ 438ULL ] ; t141 [ 1548ULL ] = - X [ 436ULL
] ; t141 [ 1549ULL ] = X [ 437ULL ] ; t141 [ 1550ULL ] = X [ 436ULL ] ; t141
[ 1551ULL ] = - X [ 436ULL ] ; t141 [ 1552ULL ] = X [ 432ULL ] ; t141 [
1553ULL ] = X [ 433ULL ] * 0.1 ; t141 [ 1554ULL ] = X [ 423ULL ] ; t141 [
1555ULL ] = 0.101325 ; t141 [ 1556ULL ] = X [ 31ULL ] ; t141 [ 1557ULL ] = X
[ 434ULL ] ; t141 [ 1558ULL ] = X [ 424ULL ] ; t141 [ 1559ULL ] = X [ 57ULL ]
* 0.1 ; t141 [ 1560ULL ] = X [ 58ULL ] ; t141 [ 1561ULL ] = X [ 436ULL ] ;
t141 [ 1562ULL ] = X [ 428ULL ] ; t141 [ 1563ULL ] = X [ 439ULL ] ; t141 [
1564ULL ] = X [ 432ULL ] ; t141 [ 1565ULL ] = X [ 433ULL ] * 0.1 ; t141 [
1566ULL ] = X [ 434ULL ] ; t141 [ 1567ULL ] = X [ 440ULL ] ; t141 [ 1568ULL ]
= X [ 436ULL ] ; t141 [ 1569ULL ] = X [ 441ULL ] ; t141 [ 1570ULL ] = X [
423ULL ] ; t141 [ 1571ULL ] = 0.101325 ; t141 [ 1572ULL ] = X [ 424ULL ] ;
t141 [ 1573ULL ] = X [ 442ULL ] ; t141 [ 1574ULL ] = X [ 428ULL ] ; t141 [
1575ULL ] = X [ 443ULL ] ; t141 [ 1576ULL ] = X [ 31ULL ] ; t141 [ 1577ULL ]
= U_idx_10 ; t141 [ 1578ULL ] = t276 ; t141 [ 1579ULL ] = X [ 423ULL ] ; t141
[ 1580ULL ] = 0.101325 ; t141 [ 1581ULL ] = X [ 444ULL ] ; t141 [ 1582ULL ] =
X [ 445ULL ] * 0.1 ; t141 [ 1583ULL ] = t276 ; t141 [ 1584ULL ] = X [ 425ULL
] ; t141 [ 1585ULL ] = X [ 446ULL ] ; t141 [ 1586ULL ] = X [ 423ULL ] ; t141
[ 1587ULL ] = 0.101325 ; t141 [ 1588ULL ] = X [ 425ULL ] ; t141 [ 1589ULL ] =
X [ 447ULL ] ; t141 [ 1590ULL ] = t277 ; t141 [ 1591ULL ] = X [ 448ULL ] ;
t141 [ 1592ULL ] = X [ 444ULL ] ; t141 [ 1593ULL ] = X [ 445ULL ] * 0.1 ;
t141 [ 1594ULL ] = X [ 446ULL ] ; t141 [ 1595ULL ] = X [ 449ULL ] ; t141 [
1596ULL ] = - t277 ; t141 [ 1597ULL ] = X [ 448ULL ] ; t141 [ 1598ULL ] =
t277 ; t141 [ 1599ULL ] = - t277 ; t141 [ 1600ULL ] = X [ 444ULL ] ; t141 [
1601ULL ] = X [ 445ULL ] * 0.1 ; t141 [ 1602ULL ] = X [ 430ULL ] ; t141 [
1603ULL ] = X [ 431ULL ] * 0.1 ; t141 [ 1604ULL ] = X [ 61ULL ] ; t141 [
1605ULL ] = - X [ 446ULL ] ; t141 [ 1606ULL ] = - X [ 434ULL ] ; t141 [
1607ULL ] = X [ 59ULL ] * 0.1 ; t141 [ 1608ULL ] = X [ 60ULL ] ; t141 [
1609ULL ] = t277 ; t141 [ 1610ULL ] = - X [ 436ULL ] ; t141 [ 1611ULL ] = X [
421ULL ] ; t141 [ 1612ULL ] = X [ 444ULL ] ; t141 [ 1613ULL ] = X [ 445ULL ]
* 0.1 ; t141 [ 1614ULL ] = - X [ 446ULL ] ; t141 [ 1615ULL ] = X [ 450ULL ] ;
t141 [ 1616ULL ] = t277 ; t141 [ 1617ULL ] = X [ 451ULL ] ; t141 [ 1618ULL ]
= X [ 430ULL ] ; t141 [ 1619ULL ] = X [ 431ULL ] * 0.1 ; t141 [ 1620ULL ] = -
X [ 434ULL ] ; t141 [ 1621ULL ] = X [ 452ULL ] ; t141 [ 1622ULL ] = - X [
436ULL ] ; t141 [ 1623ULL ] = X [ 453ULL ] ; t141 [ 1624ULL ] = X [ 444ULL ]
; t141 [ 1625ULL ] = X [ 445ULL ] * 0.1 ; t141 [ 1626ULL ] = X [ 423ULL ] ;
t141 [ 1627ULL ] = 0.101325 ; t141 [ 1628ULL ] = 0.9 ; t141 [ 1629ULL ] = X [
444ULL ] ; t141 [ 1630ULL ] = X [ 445ULL ] * 0.1 ; t141 [ 1631ULL ] = t279 *
1000.0 ; t141 [ 1632ULL ] = 0.9 ; t141 [ 1633ULL ] = t279 *
1111.1111111111111 ; t141 [ 1634ULL ] = t279 * 1111.1111111111111 ; t141 [
1635ULL ] = ( 1.01325 - X [ 445ULL ] ) * 99999.999999999985 ; t141 [ 1636ULL
] = X [ 454ULL ] * 1.0E-6 ; t141 [ 1637ULL ] = t279 * 1000.0 ; t141 [ 1638ULL
] = X [ 423ULL ] ; t141 [ 1639ULL ] = 0.101325 ; t141 [ 1640ULL ] = X [
444ULL ] ; t141 [ 1641ULL ] = X [ 445ULL ] * 0.1 ; t141 [ 1642ULL ] = (
1.01325 - X [ 445ULL ] ) * 99999.999999999985 ; t141 [ 1643ULL ] = X [ 423ULL
] - X [ 444ULL ] ; t141 [ 1644ULL ] = X [ 444ULL ] ; t141 [ 1645ULL ] = X [
445ULL ] * 0.1 ; t141 [ 1646ULL ] = X [ 444ULL ] ; t141 [ 1647ULL ] = X [
445ULL ] * 0.1 ; t141 [ 1648ULL ] = - X [ 446ULL ] ; t141 [ 1649ULL ] = X [
454ULL ] * 1.0E-6 ; t141 [ 1650ULL ] = t277 ; t141 [ 1651ULL ] = U_idx_10 ;
t141 [ 1652ULL ] = X [ 31ULL ] ; t141 [ 1653ULL ] = 0.0 ; t141 [ 1654ULL ] =
X [ 31ULL ] ; t141 [ 1655ULL ] = X [ 31ULL ] ; t141 [ 1656ULL ] = X [ 61ULL ]
; t141 [ 1657ULL ] = X [ 422ULL ] * 1000.0 ; t141 [ 1658ULL ] = X [ 61ULL ] +
- 273.15 ; t141 [ 1659ULL ] = 0.0 ; t141 [ 1660ULL ] = X [ 220ULL ] ; t141 [
1661ULL ] = X [ 221ULL ] * 0.1 ; t141 [ 1662ULL ] = X [ 222ULL ] ; t141 [
1663ULL ] = X [ 223ULL ] ; t141 [ 1664ULL ] = X [ 344ULL ] ; t141 [ 1665ULL ]
= X [ 345ULL ] * 0.1 ; t141 [ 1666ULL ] = X [ 346ULL ] ; t141 [ 1667ULL ] = X
[ 347ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 +
1668ULL ] = t154 [ t197 ] ; } for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) {
t141 [ t197 + 1676ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t197 ] ; }
for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1684ULL ] = t159
[ t197 ] ; } for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 +
1692ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
t197 ] ; } t141 [ 1700ULL ] = X [ 31ULL ] ; t141 [ 1701ULL ] = X [ 220ULL ] ;
t141 [ 1702ULL ] = X [ 221ULL ] * 0.1 ; t141 [ 1703ULL ] = X [ 222ULL ] ;
t141 [ 1704ULL ] = X [ 223ULL ] ; t141 [ 1705ULL ] = X [ 344ULL ] ; t141 [
1706ULL ] = X [ 345ULL ] * 0.1 ; t141 [ 1707ULL ] = X [ 346ULL ] ; t141 [
1708ULL ] = X [ 347ULL ] ; t141 [ 1709ULL ] = X [ 455ULL ] ; t141 [ 1710ULL ]
= X [ 456ULL ] ; t141 [ 1711ULL ] = X [ 31ULL ] ; for ( t197 = 0ULL ; t197 <
8ULL ; t197 ++ ) { t141 [ t197 + 1712ULL ] = t154 [ t197 ] ; } for ( t197 =
0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1720ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t197 ] ; }
for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1728ULL ] = t159
[ t197 ] ; } for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 +
1736ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
t197 ] ; } t141 [ 1744ULL ] = - t231 ; t141 [ 1745ULL ] = t282 ; t141 [
1746ULL ] = X [ 27ULL ] ; t141 [ 1747ULL ] = X [ 28ULL ] ; t141 [ 1748ULL ] =
X [ 29ULL ] ; t141 [ 1749ULL ] = X [ 45ULL ] ; t141 [ 1750ULL ] = X [ 46ULL ]
; t141 [ 1751ULL ] = X [ 47ULL ] ; t141 [ 1752ULL ] = 0.0 ; t141 [ 1753ULL ]
= Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 1754ULL ] = X [ 458ULL ] ; t141 [
1755ULL ] = X [ 385ULL ] ; t141 [ 1756ULL ] = X [ 45ULL ] ; t141 [ 1757ULL ]
= X [ 46ULL ] ; t141 [ 1758ULL ] = X [ 47ULL ] ; t141 [ 1759ULL ] = X [ 31ULL
] ; t141 [ 1760ULL ] = - X [ 458ULL ] ; t141 [ 1761ULL ] = X [ 270ULL ] ;
t141 [ 1762ULL ] = X [ 261ULL ] ; t141 [ 1763ULL ] = X [ 27ULL ] ; t141 [
1764ULL ] = X [ 28ULL ] ; t141 [ 1765ULL ] = X [ 29ULL ] ; t141 [ 1766ULL ] =
X [ 31ULL ] ; t141 [ 1767ULL ] = - X [ 270ULL ] ; t141 [ 1768ULL ] = X [
395ULL ] ; t141 [ 1769ULL ] = X [ 386ULL ] ; t141 [ 1770ULL ] = X [ 45ULL ] ;
t141 [ 1771ULL ] = X [ 46ULL ] ; t141 [ 1772ULL ] = X [ 47ULL ] ; t141 [
1773ULL ] = X [ 31ULL ] ; t141 [ 1774ULL ] = - X [ 395ULL ] ; t141 [ 1775ULL
] = X [ 271ULL ] ; t141 [ 1776ULL ] = X [ 262ULL ] ; t141 [ 1777ULL ] = X [
27ULL ] ; t141 [ 1778ULL ] = X [ 28ULL ] ; t141 [ 1779ULL ] = X [ 29ULL ] ;
t141 [ 1780ULL ] = X [ 31ULL ] ; t141 [ 1781ULL ] = - X [ 271ULL ] ; t141 [
1782ULL ] = t283 ; t141 [ 1783ULL ] = X [ 387ULL ] ; t141 [ 1784ULL ] = X [
45ULL ] ; t141 [ 1785ULL ] = X [ 46ULL ] ; t141 [ 1786ULL ] = X [ 47ULL ] ;
t141 [ 1787ULL ] = X [ 31ULL ] ; t141 [ 1788ULL ] = - t283 ; t141 [ 1789ULL ]
= X [ 27ULL ] ; t141 [ 1790ULL ] = X [ 28ULL ] ; t141 [ 1791ULL ] = X [ 29ULL
] ; t141 [ 1792ULL ] = X [ 45ULL ] ; t141 [ 1793ULL ] = X [ 46ULL ] ; t141 [
1794ULL ] = X [ 47ULL ] ; t141 [ 1795ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t141 [ 1796ULL ] = 0.0 ; t141 [ 1797ULL ] = X [ 31ULL ] ; t141 [ 1798ULL ]
= X [ 31ULL ] ; t141 [ 1799ULL ] = X [ 31ULL ] ; t141 [ 1800ULL ] = X [ 31ULL
] ; t141 [ 1801ULL ] = t282 * - 1000.0 ; t141 [ 1802ULL ] = t282 * - 1000.0 ;
t141 [ 1803ULL ] = t282 * - 1000.0 ; t141 [ 1804ULL ] = X [ 459ULL ] ; t141 [
1805ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 1806ULL ] = X [ 460ULL ] ; t141 [
1807ULL ] = X [ 461ULL ] ; t141 [ 1808ULL ] = X [ 462ULL ] ; t141 [ 1809ULL ]
= X [ 63ULL ] * 0.1 ; t141 [ 1810ULL ] = X [ 463ULL ] ; t141 [ 1811ULL ] = X
[ 464ULL ] ; t141 [ 1812ULL ] = X [ 62ULL ] ; t141 [ 1813ULL ] = X [ 63ULL ]
* 0.1 ; t141 [ 1814ULL ] = X [ 64ULL ] ; t141 [ 1815ULL ] = X [ 65ULL ] ;
t141 [ 1816ULL ] = X [ 62ULL ] ; t141 [ 1817ULL ] = X [ 63ULL ] * 0.1 ; t141
[ 1818ULL ] = X [ 64ULL ] ; t141 [ 1819ULL ] = X [ 65ULL ] ; t141 [ 1820ULL ]
= X [ 62ULL ] ; t141 [ 1821ULL ] = X [ 63ULL ] * 0.1 ; t141 [ 1822ULL ] = X [
64ULL ] ; t141 [ 1823ULL ] = X [ 65ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ;
t197 ++ ) { t141 [ t197 + 1824ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ t197 ] ; }
t141 [ 1832ULL ] = X [ 62ULL ] ; t141 [ 1833ULL ] = X [ 465ULL ] ; t141 [
1834ULL ] = X [ 469ULL ] ; t141 [ 1835ULL ] = 0.0 ; t141 [ 1836ULL ] = 0.0 ;
t141 [ 1837ULL ] = 0.0 ; t141 [ 1838ULL ] = 0.0 ; t141 [ 1839ULL ] = X [
62ULL ] + - 273.15 ; t141 [ 1840ULL ] = X [ 64ULL ] ; t141 [ 1841ULL ] = X [
467ULL ] ; t141 [ 1842ULL ] = X [ 65ULL ] ; t141 [ 1843ULL ] = X [ 63ULL ] *
0.1 ; t141 [ 1844ULL ] = 0.0 ; t141 [ 1845ULL ] = X [ 466ULL ] ; t141 [
1846ULL ] = X [ 62ULL ] ; t141 [ 1847ULL ] = X [ 64ULL ] ; t141 [ 1848ULL ] =
X [ 65ULL ] ; t141 [ 1849ULL ] = t284 ; t141 [ 1850ULL ] = X [ 462ULL ] ;
t141 [ 1851ULL ] = X [ 63ULL ] * 0.1 ; t141 [ 1852ULL ] = X [ 463ULL ] ; t141
[ 1853ULL ] = X [ 464ULL ] ; t141 [ 1854ULL ] = X [ 469ULL ] ; t141 [ 1855ULL
] = X [ 470ULL ] ; t141 [ 1856ULL ] = X [ 471ULL ] ; t141 [ 1857ULL ] = X [
472ULL ] ; t141 [ 1858ULL ] = X [ 473ULL ] ; t141 [ 1859ULL ] = X [ 474ULL ]
; t141 [ 1860ULL ] = X [ 475ULL ] ; t141 [ 1861ULL ] = X [ 471ULL ] ; t141 [
1862ULL ] = 0.0 ; t141 [ 1863ULL ] = 0.0 ; t141 [ 1864ULL ] = 0.0 ; t141 [
1865ULL ] = X [ 472ULL ] ; t141 [ 1866ULL ] = 0.0 ; t141 [ 1867ULL ] = 0.0 ;
t141 [ 1868ULL ] = 0.0 ; t141 [ 1869ULL ] = 0.0 ; t141 [ 1870ULL ] = 0.0 ;
t141 [ 1871ULL ] = X [ 473ULL ] ; t141 [ 1872ULL ] = 0.0 ; t141 [ 1873ULL ] =
0.0 ; t141 [ 1874ULL ] = 0.0 ; t141 [ 1875ULL ] = X [ 468ULL ] ; t141 [
1876ULL ] = X [ 459ULL ] ; t141 [ 1877ULL ] = X [ 37ULL ] * 0.1 ; t141 [
1878ULL ] = X [ 460ULL ] ; t141 [ 1879ULL ] = X [ 461ULL ] ; t141 [ 1880ULL ]
= X [ 462ULL ] ; t141 [ 1881ULL ] = X [ 63ULL ] * 0.1 ; t141 [ 1882ULL ] = X
[ 463ULL ] ; t141 [ 1883ULL ] = X [ 464ULL ] ; t141 [ 1884ULL ] = X [ 462ULL
] ; t141 [ 1885ULL ] = X [ 63ULL ] * 0.1 ; t141 [ 1886ULL ] = X [ 463ULL ] ;
t141 [ 1887ULL ] = X [ 464ULL ] ; t141 [ 1888ULL ] = - X [ 471ULL ] ; t141 [
1889ULL ] = - X [ 472ULL ] ; t141 [ 1890ULL ] = - X [ 473ULL ] ; t141 [
1891ULL ] = X [ 469ULL ] * - 1000.0 ; t141 [ 1892ULL ] = - X [ 469ULL ] ;
t141 [ 1893ULL ] = - X [ 471ULL ] ; t141 [ 1894ULL ] = - X [ 472ULL ] ; t141
[ 1895ULL ] = - X [ 473ULL ] ; t141 [ 1896ULL ] = - X [ 471ULL ] ; t141 [
1897ULL ] = X [ 62ULL ] ; t141 [ 1898ULL ] = X [ 62ULL ] ; t141 [ 1899ULL ] =
X [ 476ULL ] ; t141 [ 1900ULL ] = X [ 476ULL ] ; t141 [ 1901ULL ] = X [
477ULL ] ; t141 [ 1902ULL ] = X [ 478ULL ] * 0.1 ; t141 [ 1903ULL ] = X [
479ULL ] ; t141 [ 1904ULL ] = X [ 480ULL ] ; t141 [ 1905ULL ] = X [ 459ULL ]
; t141 [ 1906ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 1907ULL ] = X [ 460ULL ] ;
t141 [ 1908ULL ] = X [ 461ULL ] ; t141 [ 1909ULL ] = X [ 69ULL ] ; t141 [
1910ULL ] = X [ 484ULL ] ; t141 [ 1911ULL ] = X [ 68ULL ] ; t141 [ 1912ULL ]
= X [ 481ULL ] ; t141 [ 1913ULL ] = X [ 66ULL ] + - 273.15 ; t141 [ 1914ULL ]
= - X [ 471ULL ] ; t141 [ 1915ULL ] = X [ 482ULL ] * 0.1 ; t141 [ 1916ULL ] =
X [ 67ULL ] * 0.1 ; t141 [ 1917ULL ] = X [ 483ULL ] ; t141 [ 1918ULL ] = X [
486ULL ] ; t141 [ 1919ULL ] = X [ 485ULL ] ; t141 [ 1920ULL ] = X [ 487ULL ]
* 0.1 ; for ( t197 = 0ULL ; t197 < 8ULL ; t197 ++ ) { t141 [ t197 + 1921ULL ]
= t164 [ t197 ] ; } t141 [ 1929ULL ] = X [ 476ULL ] ; t141 [ 1930ULL ] = X [
488ULL ] ; t141 [ 1931ULL ] = - X [ 469ULL ] ; t141 [ 1932ULL ] = X [ 490ULL
] ; t141 [ 1933ULL ] = 0.0 ; t141 [ 1934ULL ] = 0.0 ; t141 [ 1935ULL ] = X [
489ULL ] ; t141 [ 1936ULL ] = X [ 66ULL ] ; t141 [ 1937ULL ] = X [ 69ULL ] ;
t141 [ 1938ULL ] = X [ 68ULL ] ; t141 [ 1939ULL ] = t285 ; t141 [ 1940ULL ] =
X [ 477ULL ] ; t141 [ 1941ULL ] = X [ 478ULL ] * 0.1 ; t141 [ 1942ULL ] = X [
479ULL ] ; t141 [ 1943ULL ] = X [ 480ULL ] ; t141 [ 1944ULL ] = - X [ 469ULL
] ; t141 [ 1945ULL ] = X [ 491ULL ] ; t141 [ 1946ULL ] = - X [ 471ULL ] ;
t141 [ 1947ULL ] = - X [ 472ULL ] ; t141 [ 1948ULL ] = - X [ 473ULL ] ; t141
[ 1949ULL ] = X [ 492ULL ] ; t141 [ 1950ULL ] = X [ 493ULL ] ; t141 [ 1951ULL
] = X [ 459ULL ] ; t141 [ 1952ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 1953ULL ] =
X [ 460ULL ] ; t141 [ 1954ULL ] = X [ 461ULL ] ; t141 [ 1955ULL ] = X [
490ULL ] ; t141 [ 1956ULL ] = X [ 494ULL ] ; t141 [ 1957ULL ] = X [ 485ULL ]
; t141 [ 1958ULL ] = X [ 495ULL ] ; t141 [ 1959ULL ] = X [ 496ULL ] ; t141 [
1960ULL ] = X [ 497ULL ] ; t141 [ 1961ULL ] = X [ 498ULL ] ; t141 [ 1962ULL ]
= - X [ 472ULL ] ; t141 [ 1963ULL ] = X [ 495ULL ] ; t141 [ 1964ULL ] = 0.0 ;
t141 [ 1965ULL ] = 0.0 ; t141 [ 1966ULL ] = - X [ 473ULL ] ; t141 [ 1967ULL ]
= X [ 496ULL ] ; t141 [ 1968ULL ] = X [ 462ULL ] ; t141 [ 1969ULL ] = X [
63ULL ] * 0.1 ; t141 [ 1970ULL ] = X [ 463ULL ] ; t141 [ 1971ULL ] = X [
464ULL ] ; t141 [ 1972ULL ] = 0.0 ; t141 [ 1973ULL ] = 0.0 ; t141 [ 1974ULL ]
= 0.0 ; t141 [ 1975ULL ] = 0.0 ; t141 [ 1976ULL ] = X [ 477ULL ] ; t141 [
1977ULL ] = X [ 478ULL ] * 0.1 ; t141 [ 1978ULL ] = X [ 479ULL ] ; t141 [
1979ULL ] = X [ 480ULL ] ; t141 [ 1980ULL ] = 0.040000000000000008 ; t141 [
1981ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 *
1.0E+6 ; t141 [ 1982ULL ] = t287 ; t141 [ 1983ULL ] = 0.040000000000000008 ;
t141 [ 1984ULL ] = 0.005000000000000001 ; t141 [ 1985ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 * -
125000.03125000779 ; t141 [ 1986ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 * 1.0E+6 ;
t141 [ 1987ULL ] = t287 ; t141 [ 1988ULL ] = t287 * 7.8539816339744827E-5 ;
t141 [ 1989ULL ] = X [ 478ULL ] * 99999.999999999985 ; t141 [ 1990ULL ] = (
t289 - 0.05000000000000001 ) * 0.1 ; t141 [ 1991ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu0 * -
125000.03125000779 ; t141 [ 1992ULL ] = t289 * 0.1 ; t141 [ 1993ULL ] =
0.005000000000000001 ; t141 [ 1994ULL ] = ( t289 - 0.05000000000000001 ) *
0.1 ; t141 [ 1995ULL ] = X [ 477ULL ] ; t141 [ 1996ULL ] = X [ 478ULL ] * 0.1
; t141 [ 1997ULL ] = X [ 479ULL ] ; t141 [ 1998ULL ] = X [ 480ULL ] ; t141 [
1999ULL ] = 0.0 ; t141 [ 2000ULL ] = 0.0 ; t141 [ 2001ULL ] = 0.0 ; t141 [
2002ULL ] = 0.0 ; t141 [ 2003ULL ] = X [ 478ULL ] * 99999.999999999985 ; t141
[ 2004ULL ] = X [ 477ULL ] ; t141 [ 2005ULL ] = X [ 462ULL ] ; t141 [ 2006ULL
] = X [ 63ULL ] * 0.1 ; t141 [ 2007ULL ] = X [ 463ULL ] ; t141 [ 2008ULL ] =
X [ 464ULL ] ; t141 [ 2009ULL ] = t287 * 7.8539816339744827E-5 ; t141 [
2010ULL ] = X [ 477ULL ] ; t141 [ 2011ULL ] = X [ 478ULL ] * 0.1 ; t141 [
2012ULL ] = X [ 479ULL ] ; t141 [ 2013ULL ] = X [ 480ULL ] ; t141 [ 2014ULL ]
= - X [ 471ULL ] ; t141 [ 2015ULL ] = X [ 462ULL ] ; t141 [ 2016ULL ] = X [
63ULL ] * 0.1 ; t141 [ 2017ULL ] = X [ 463ULL ] ; t141 [ 2018ULL ] = X [
464ULL ] ; t141 [ 2019ULL ] = - X [ 469ULL ] ; t141 [ 2020ULL ] = X [ 505ULL
] ; t141 [ 2021ULL ] = - X [ 471ULL ] ; t141 [ 2022ULL ] = - X [ 472ULL ] ;
t141 [ 2023ULL ] = - X [ 473ULL ] ; t141 [ 2024ULL ] = X [ 502ULL ] ; t141 [
2025ULL ] = X [ 501ULL ] ; t141 [ 2026ULL ] = X [ 499ULL ] ; t141 [ 2027ULL ]
= X [ 500ULL ] * 0.1 ; t141 [ 2028ULL ] = X [ 503ULL ] ; t141 [ 2029ULL ] = X
[ 504ULL ] ; t141 [ 2030ULL ] = - X [ 469ULL ] ; t141 [ 2031ULL ] = X [
469ULL ] ; t141 [ 2032ULL ] = X [ 477ULL ] ; t141 [ 2033ULL ] = X [ 478ULL ]
* 0.1 ; t141 [ 2034ULL ] = X [ 479ULL ] ; t141 [ 2035ULL ] = X [ 480ULL ] ;
t141 [ 2036ULL ] = X [ 469ULL ] ; t141 [ 2037ULL ] = X [ 505ULL ] ; t141 [
2038ULL ] = X [ 471ULL ] ; t141 [ 2039ULL ] = X [ 472ULL ] ; t141 [ 2040ULL ]
= X [ 473ULL ] ; t141 [ 2041ULL ] = X [ 502ULL ] ; t141 [ 2042ULL ] = X [
501ULL ] ; t141 [ 2043ULL ] = X [ 471ULL ] ; t141 [ 2044ULL ] = - X [ 472ULL
] ; t141 [ 2045ULL ] = X [ 472ULL ] ; t141 [ 2046ULL ] = - X [ 473ULL ] ;
t141 [ 2047ULL ] = X [ 473ULL ] ; t141 [ 2048ULL ] = t289 * 0.1 ; t141 [
2049ULL ] = U_idx_11 ; t141 [ 2050ULL ] = X [ 31ULL ] ; t141 [ 2051ULL ] = X
[ 457ULL ] * 1000.0 ; t141 [ 2052ULL ] = X [ 31ULL ] + - 273.15 ; t141 [
2053ULL ] = X [ 506ULL ] ; t141 [ 2054ULL ] = 0.101325 ; t141 [ 2055ULL ] = X
[ 507ULL ] ; t141 [ 2056ULL ] = X [ 508ULL ] ; t141 [ 2057ULL ] = X [ 509ULL
] ; t141 [ 2058ULL ] = X [ 510ULL ] ; t141 [ 2059ULL ] = 0.5 ; t141 [ 2060ULL
] = X [ 518ULL ] ; t141 [ 2061ULL ] = X [ 517ULL ] ; t141 [ 2062ULL ] =
293.15 ; t141 [ 2063ULL ] = X [ 506ULL ] ; t141 [ 2064ULL ] = 0.101325 ; t141
[ 2065ULL ] = X [ 507ULL ] ; t141 [ 2066ULL ] = X [ 508ULL ] ; t141 [ 2067ULL
] = X [ 510ULL ] ; t141 [ 2068ULL ] = X [ 511ULL ] ; t141 [ 2069ULL ] = X [
512ULL ] ; t141 [ 2070ULL ] = X [ 513ULL ] ; t141 [ 2071ULL ] = X [ 514ULL ]
; t141 [ 2072ULL ] = X [ 515ULL ] ; t141 [ 2073ULL ] = X [ 516ULL ] ; t141 [
2074ULL ] = X [ 512ULL ] ; t141 [ 2075ULL ] = X [ 513ULL ] ; t141 [ 2076ULL ]
= X [ 514ULL ] ; t141 [ 2077ULL ] = 0.101325 ; t141 [ 2078ULL ] = 0.21 ; t141
[ 2079ULL ] = X [ 519ULL ] ; t141 [ 2080ULL ] = X [ 520ULL ] ; t141 [ 2081ULL
] = X [ 54ULL ] * 0.1 ; t141 [ 2082ULL ] = X [ 521ULL ] ; t141 [ 2083ULL ] =
X [ 522ULL ] ; t141 [ 2084ULL ] = X [ 506ULL ] ; t141 [ 2085ULL ] = 0.101325
; t141 [ 2086ULL ] = X [ 507ULL ] ; t141 [ 2087ULL ] = X [ 508ULL ] ; t141 [
2088ULL ] = X [ 520ULL ] ; t141 [ 2089ULL ] = X [ 54ULL ] * 0.1 ; t141 [
2090ULL ] = X [ 521ULL ] ; t141 [ 2091ULL ] = X [ 522ULL ] ; t141 [ 2092ULL ]
= X [ 524ULL ] ; t141 [ 2093ULL ] = X [ 527ULL ] ; t141 [ 2094ULL ] = X [
506ULL ] ; t141 [ 2095ULL ] = 0.101325 ; t141 [ 2096ULL ] = X [ 507ULL ] ;
t141 [ 2097ULL ] = X [ 508ULL ] ; t141 [ 2098ULL ] = - X [ 510ULL ] ; t141 [
2099ULL ] = X [ 528ULL ] ; t141 [ 2100ULL ] = - X [ 512ULL ] ; t141 [ 2101ULL
] = - X [ 513ULL ] ; t141 [ 2102ULL ] = - X [ 514ULL ] ; t141 [ 2103ULL ] = X
[ 529ULL ] ; t141 [ 2104ULL ] = X [ 530ULL ] ; t141 [ 2105ULL ] = - X [
512ULL ] ; t141 [ 2106ULL ] = X [ 525ULL ] ; t141 [ 2107ULL ] = X [ 526ULL ]
; t141 [ 2108ULL ] = X [ 520ULL ] ; t141 [ 2109ULL ] = X [ 54ULL ] * 0.1 ;
t141 [ 2110ULL ] = X [ 521ULL ] ; t141 [ 2111ULL ] = X [ 522ULL ] ; t141 [
2112ULL ] = X [ 523ULL ] ; t141 [ 2113ULL ] = X [ 528ULL ] ; t141 [ 2114ULL ]
= X [ 512ULL ] ; t141 [ 2115ULL ] = X [ 513ULL ] ; t141 [ 2116ULL ] = X [
514ULL ] ; t141 [ 2117ULL ] = X [ 529ULL ] ; t141 [ 2118ULL ] = X [ 530ULL ]
; t141 [ 2119ULL ] = X [ 512ULL ] ; t141 [ 2120ULL ] = - X [ 512ULL ] ; t141
[ 2121ULL ] = - X [ 510ULL ] ; t141 [ 2122ULL ] = X [ 523ULL ] ; t141 [
2123ULL ] = - X [ 513ULL ] ; t141 [ 2124ULL ] = X [ 513ULL ] ; t141 [ 2125ULL
] = - X [ 514ULL ] ; t141 [ 2126ULL ] = X [ 514ULL ] ; t141 [ 2127ULL ] = 0.0
; t141 [ 2128ULL ] = 0.0 ; t141 [ 2129ULL ] = 0.0 ; t141 [ 2130ULL ] = 0.0 ;
t141 [ 2131ULL ] = 0.0 ; t141 [ 2132ULL ] = 0.0 ; t141 [ 2133ULL ] = 0.0 ;
t141 [ 2134ULL ] = 0.0 ; t141 [ 2135ULL ] = X [ 531ULL ] ; t141 [ 2136ULL ] =
t294 * 0.99999999999999978 / 0.99999999999999978 * 9.5492965855137211 ; t141
[ 2137ULL ] = X [ 532ULL ] ; t141 [ 2138ULL ] = X [ 54ULL ] *
99999.999999999985 ; t141 [ 2139ULL ] = 101324.99999999999 ; t141 [ 2140ULL ]
= X [ 531ULL ] ; t141 [ 2141ULL ] = X [ 533ULL ] ; t141 [ 2142ULL ] = X [
534ULL ] ; t141 [ 2143ULL ] = - X [ 512ULL ] ; t141 [ 2144ULL ] = 1.0 ; t141
[ 2145ULL ] = X [ 532ULL ] ; t141 [ 2146ULL ] = X [ 533ULL ] ; t141 [ 2147ULL
] = X [ 506ULL ] ; t141 [ 2148ULL ] = 0.101325 ; t141 [ 2149ULL ] = X [
507ULL ] ; t141 [ 2150ULL ] = X [ 508ULL ] ; t141 [ 2151ULL ] = 0.0 ; t141 [
2152ULL ] = 0.0 ; t141 [ 2153ULL ] = 0.0 ; t141 [ 2154ULL ] = 0.0 ; t141 [
2155ULL ] = 101324.99999999999 ; t141 [ 2156ULL ] = X [ 506ULL ] ; t141 [
2157ULL ] = X [ 520ULL ] ; t141 [ 2158ULL ] = X [ 54ULL ] * 0.1 ; t141 [
2159ULL ] = X [ 521ULL ] ; t141 [ 2160ULL ] = X [ 522ULL ] ; t141 [ 2161ULL ]
= 0.0 ; t141 [ 2162ULL ] = 0.0 ; t141 [ 2163ULL ] = 0.0 ; t141 [ 2164ULL ] =
0.0 ; t141 [ 2165ULL ] = X [ 54ULL ] * 99999.999999999985 ; t141 [ 2166ULL ]
= X [ 520ULL ] ; t141 [ 2167ULL ] = X [ 506ULL ] ; t141 [ 2168ULL ] =
0.101325 ; t141 [ 2169ULL ] = X [ 507ULL ] ; t141 [ 2170ULL ] = X [ 508ULL ]
; t141 [ 2171ULL ] = - X [ 512ULL ] ; t141 [ 2172ULL ] = X [ 520ULL ] ; t141
[ 2173ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 2174ULL ] = X [ 521ULL ] ; t141 [
2175ULL ] = X [ 522ULL ] ; t141 [ 2176ULL ] = t294 * 9.5492965855137211 ;
t141 [ 2177ULL ] = X [ 506ULL ] * 0.00347041471455839 ; t141 [ 2178ULL ] = X
[ 534ULL ] ; t141 [ 2179ULL ] = 101324.99999999999 ; t141 [ 2180ULL ] = 1.0 ;
t141 [ 2181ULL ] = X [ 506ULL ] ; t141 [ 2182ULL ] = X [ 506ULL ] *
0.00347041471455839 ; t141 [ 2183ULL ] = X [ 520ULL ] ; t141 [ 2184ULL ] = X
[ 54ULL ] * 0.1 ; t141 [ 2185ULL ] = X [ 521ULL ] ; t141 [ 2186ULL ] = X [
522ULL ] ; t141 [ 2187ULL ] = X [ 397ULL ] ; t141 [ 2188ULL ] = X [ 54ULL ] *
0.1 ; t141 [ 2189ULL ] = X [ 398ULL ] ; t141 [ 2190ULL ] = X [ 399ULL ] ;
t141 [ 2191ULL ] = X [ 70ULL ] ; t141 [ 2192ULL ] = X [ 54ULL ] * 0.1 ; t141
[ 2193ULL ] = X [ 71ULL ] ; t141 [ 2194ULL ] = X [ 72ULL ] ; t141 [ 2195ULL ]
= X [ 70ULL ] ; t141 [ 2196ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 2197ULL ] = X [
71ULL ] ; t141 [ 2198ULL ] = X [ 72ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL ;
t197 ++ ) { t141 [ t197 + 2199ULL ] = t166 [ t197 ] ; } t141 [ 2207ULL ] = X
[ 70ULL ] ; t141 [ 2208ULL ] = X [ 535ULL ] ; t141 [ 2209ULL ] = - X [ 523ULL
] ; t141 [ 2210ULL ] = - X [ 412ULL ] ; t141 [ 2211ULL ] = 0.0 ; t141 [
2212ULL ] = 0.0 ; t141 [ 2213ULL ] = 0.0 ; t141 [ 2214ULL ] = X [ 70ULL ] + -
273.15 ; t141 [ 2215ULL ] = X [ 71ULL ] ; t141 [ 2216ULL ] = X [ 537ULL ] ;
t141 [ 2217ULL ] = X [ 72ULL ] ; t141 [ 2218ULL ] = X [ 54ULL ] * 0.1 ; t141
[ 2219ULL ] = 0.0 ; t141 [ 2220ULL ] = X [ 536ULL ] ; t141 [ 2221ULL ] = X [
70ULL ] ; t141 [ 2222ULL ] = X [ 71ULL ] ; t141 [ 2223ULL ] = X [ 72ULL ] ;
t141 [ 2224ULL ] = t299 ; t141 [ 2225ULL ] = X [ 520ULL ] ; t141 [ 2226ULL ]
= X [ 54ULL ] * 0.1 ; t141 [ 2227ULL ] = X [ 521ULL ] ; t141 [ 2228ULL ] = X
[ 522ULL ] ; t141 [ 2229ULL ] = - X [ 523ULL ] ; t141 [ 2230ULL ] = X [
539ULL ] ; t141 [ 2231ULL ] = - X [ 512ULL ] ; t141 [ 2232ULL ] = - X [
513ULL ] ; t141 [ 2233ULL ] = - X [ 514ULL ] ; t141 [ 2234ULL ] = X [ 540ULL
] ; t141 [ 2235ULL ] = X [ 541ULL ] ; t141 [ 2236ULL ] = X [ 397ULL ] ; t141
[ 2237ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 2238ULL ] = X [ 398ULL ] ; t141 [
2239ULL ] = X [ 399ULL ] ; t141 [ 2240ULL ] = - X [ 412ULL ] ; t141 [ 2241ULL
] = X [ 542ULL ] ; t141 [ 2242ULL ] = - X [ 407ULL ] ; t141 [ 2243ULL ] = - X
[ 414ULL ] ; t141 [ 2244ULL ] = - X [ 415ULL ] ; t141 [ 2245ULL ] = X [
543ULL ] ; t141 [ 2246ULL ] = X [ 544ULL ] ; t141 [ 2247ULL ] = - X [ 512ULL
] ; t141 [ 2248ULL ] = - X [ 407ULL ] ; t141 [ 2249ULL ] = 0.0 ; t141 [
2250ULL ] = 0.0 ; t141 [ 2251ULL ] = - X [ 513ULL ] ; t141 [ 2252ULL ] = - X
[ 414ULL ] ; t141 [ 2253ULL ] = 0.0 ; t141 [ 2254ULL ] = 0.0 ; t141 [ 2255ULL
] = 0.0 ; t141 [ 2256ULL ] = 0.0 ; t141 [ 2257ULL ] = - X [ 514ULL ] ; t141 [
2258ULL ] = - X [ 415ULL ] ; t141 [ 2259ULL ] = 0.0 ; t141 [ 2260ULL ] = 0.0
; t141 [ 2261ULL ] = X [ 538ULL ] ; t141 [ 2262ULL ] = X [ 397ULL ] ; t141 [
2263ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 2264ULL ] = X [ 398ULL ] ; t141 [
2265ULL ] = X [ 399ULL ] ; t141 [ 2266ULL ] = X [ 397ULL ] ; t141 [ 2267ULL ]
= X [ 54ULL ] * 0.1 ; t141 [ 2268ULL ] = X [ 398ULL ] ; t141 [ 2269ULL ] = X
[ 399ULL ] ; t141 [ 2270ULL ] = X [ 407ULL ] ; t141 [ 2271ULL ] = X [ 414ULL
] ; t141 [ 2272ULL ] = X [ 415ULL ] ; t141 [ 2273ULL ] = X [ 412ULL ] *
1000.0 ; t141 [ 2274ULL ] = X [ 412ULL ] ; t141 [ 2275ULL ] = X [ 407ULL ] ;
t141 [ 2276ULL ] = X [ 414ULL ] ; t141 [ 2277ULL ] = X [ 415ULL ] ; t141 [
2278ULL ] = X [ 407ULL ] ; t141 [ 2279ULL ] = U_idx_12 ; t141 [ 2280ULL ] =
t293 * 9.5492965855137211 ; t141 [ 2281ULL ] = X [ 397ULL ] ; t141 [ 2282ULL
] = X [ 54ULL ] * 0.1 ; t141 [ 2283ULL ] = X [ 398ULL ] ; t141 [ 2284ULL ] =
X [ 399ULL ] ; t141 [ 2285ULL ] = X [ 70ULL ] ; t141 [ 2286ULL ] = X [ 70ULL
] ; t141 [ 2287ULL ] = X [ 520ULL ] ; t141 [ 2288ULL ] = X [ 54ULL ] * 0.1 ;
t141 [ 2289ULL ] = X [ 521ULL ] ; t141 [ 2290ULL ] = X [ 522ULL ] ; t141 [
2291ULL ] = X [ 506ULL ] ; t141 [ 2292ULL ] = 0.101325 ; t141 [ 2293ULL ] = X
[ 507ULL ] ; t141 [ 2294ULL ] = X [ 508ULL ] ; t141 [ 2295ULL ] = 0.9 ; t141
[ 2296ULL ] = X [ 520ULL ] ; t141 [ 2297ULL ] = X [ 54ULL ] * 0.1 ; t141 [
2298ULL ] = X [ 521ULL ] ; t141 [ 2299ULL ] = X [ 522ULL ] ; t141 [ 2300ULL ]
= t301 * 1000.0 ; t141 [ 2301ULL ] = 0.9 ; t141 [ 2302ULL ] = t301 *
1111.1111111111111 ; t141 [ 2303ULL ] = t301 * 1111.1111111111111 ; t141 [
2304ULL ] = - ( X [ 54ULL ] + - 1.01325 ) * 99999.999999999985 ; t141 [
2305ULL ] = X [ 545ULL ] * 1.0E-6 ; t141 [ 2306ULL ] = t301 * 1000.0 ; t141 [
2307ULL ] = X [ 506ULL ] ; t141 [ 2308ULL ] = 0.101325 ; t141 [ 2309ULL ] = X
[ 507ULL ] ; t141 [ 2310ULL ] = X [ 508ULL ] ; t141 [ 2311ULL ] = X [ 520ULL
] ; t141 [ 2312ULL ] = X [ 54ULL ] * 0.1 ; t141 [ 2313ULL ] = X [ 521ULL ] ;
t141 [ 2314ULL ] = X [ 522ULL ] ; t141 [ 2315ULL ] = - ( X [ 54ULL ] + -
1.01325 ) * 99999.999999999985 ; t141 [ 2316ULL ] = X [ 506ULL ] - X [ 520ULL
] ; t141 [ 2317ULL ] = X [ 520ULL ] ; t141 [ 2318ULL ] = X [ 54ULL ] * 0.1 ;
t141 [ 2319ULL ] = X [ 521ULL ] ; t141 [ 2320ULL ] = X [ 522ULL ] ; t141 [
2321ULL ] = X [ 520ULL ] ; t141 [ 2322ULL ] = X [ 54ULL ] * 0.1 ; t141 [
2323ULL ] = X [ 521ULL ] ; t141 [ 2324ULL ] = X [ 522ULL ] ; t141 [ 2325ULL ]
= - X [ 523ULL ] ; t141 [ 2326ULL ] = X [ 545ULL ] * 1.0E-6 ; t141 [ 2327ULL
] = - X [ 512ULL ] ; t141 [ 2328ULL ] = - X [ 513ULL ] ; t141 [ 2329ULL ] = -
X [ 514ULL ] ; t141 [ 2330ULL ] = U_idx_12 ; t141 [ 2331ULL ] = X [ 459ULL ]
; t141 [ 2332ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2333ULL ] = X [ 460ULL ] ;
t141 [ 2334ULL ] = X [ 461ULL ] ; t141 [ 2335ULL ] = X [ 272ULL ] ; t141 [
2336ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2337ULL ] = X [ 273ULL ] ; t141 [
2338ULL ] = X [ 274ULL ] ; t141 [ 2339ULL ] = X [ 459ULL ] ; t141 [ 2340ULL ]
= X [ 37ULL ] * 0.1 ; t141 [ 2341ULL ] = X [ 460ULL ] ; t141 [ 2342ULL ] = X
[ 461ULL ] ; t141 [ 2343ULL ] = X [ 546ULL ] ; t141 [ 2344ULL ] = X [ 37ULL ]
* 0.1 ; t141 [ 2345ULL ] = X [ 547ULL ] ; t141 [ 2346ULL ] = X [ 548ULL ] ;
t141 [ 2347ULL ] = X [ 272ULL ] ; t141 [ 2348ULL ] = X [ 37ULL ] * 0.1 ; t141
[ 2349ULL ] = X [ 273ULL ] ; t141 [ 2350ULL ] = X [ 274ULL ] ; t141 [ 2351ULL
] = X [ 73ULL ] ; t141 [ 2352ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2353ULL ] = X
[ 74ULL ] ; t141 [ 2354ULL ] = X [ 75ULL ] ; for ( t197 = 0ULL ; t197 < 8ULL
; t197 ++ ) { t141 [ t197 + 2355ULL ] = t168 [ t197 ] ; } t141 [ 2363ULL ] =
X [ 73ULL ] ; t141 [ 2364ULL ] = X [ 549ULL ] ; t141 [ 2365ULL ] = - X [
490ULL ] ; t141 [ 2366ULL ] = X [ 553ULL ] ; t141 [ 2367ULL ] = - X [ 287ULL
] ; t141 [ 2368ULL ] = 0.0 ; t141 [ 2369ULL ] = 0.0 ; t141 [ 2370ULL ] = X [
73ULL ] + - 273.15 ; t141 [ 2371ULL ] = X [ 74ULL ] ; t141 [ 2372ULL ] = X [
551ULL ] ; t141 [ 2373ULL ] = X [ 75ULL ] ; t141 [ 2374ULL ] = X [ 37ULL ] *
0.1 ; t141 [ 2375ULL ] = 0.0 ; t141 [ 2376ULL ] = X [ 550ULL ] ; t141 [
2377ULL ] = X [ 73ULL ] ; t141 [ 2378ULL ] = X [ 74ULL ] ; t141 [ 2379ULL ] =
X [ 75ULL ] ; t141 [ 2380ULL ] = t303 ; t141 [ 2381ULL ] = X [ 459ULL ] ;
t141 [ 2382ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2383ULL ] = X [ 460ULL ] ; t141
[ 2384ULL ] = X [ 461ULL ] ; t141 [ 2385ULL ] = - X [ 490ULL ] ; t141 [
2386ULL ] = X [ 554ULL ] ; t141 [ 2387ULL ] = - X [ 485ULL ] ; t141 [ 2388ULL
] = - X [ 495ULL ] ; t141 [ 2389ULL ] = - X [ 496ULL ] ; t141 [ 2390ULL ] = X
[ 555ULL ] ; t141 [ 2391ULL ] = X [ 556ULL ] ; t141 [ 2392ULL ] = X [ 546ULL
] ; t141 [ 2393ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2394ULL ] = X [ 547ULL ] ;
t141 [ 2395ULL ] = X [ 548ULL ] ; t141 [ 2396ULL ] = X [ 553ULL ] ; t141 [
2397ULL ] = X [ 557ULL ] ; t141 [ 2398ULL ] = t169_idx_0 ; t141 [ 2399ULL ] =
X [ 205ULL ] ; t141 [ 2400ULL ] = X [ 207ULL ] ; t141 [ 2401ULL ] = X [
558ULL ] ; t141 [ 2402ULL ] = X [ 559ULL ] ; t141 [ 2403ULL ] = X [ 272ULL ]
; t141 [ 2404ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2405ULL ] = X [ 273ULL ] ;
t141 [ 2406ULL ] = X [ 274ULL ] ; t141 [ 2407ULL ] = - X [ 287ULL ] ; t141 [
2408ULL ] = X [ 560ULL ] ; t141 [ 2409ULL ] = - X [ 282ULL ] ; t141 [ 2410ULL
] = - X [ 289ULL ] ; t141 [ 2411ULL ] = - X [ 290ULL ] ; t141 [ 2412ULL ] = X
[ 561ULL ] ; t141 [ 2413ULL ] = X [ 562ULL ] ; t141 [ 2414ULL ] = - X [
485ULL ] ; t141 [ 2415ULL ] = t169_idx_0 ; t141 [ 2416ULL ] = - X [ 282ULL ]
; t141 [ 2417ULL ] = 0.0 ; t141 [ 2418ULL ] = - X [ 495ULL ] ; t141 [ 2419ULL
] = X [ 205ULL ] ; t141 [ 2420ULL ] = - X [ 289ULL ] ; t141 [ 2421ULL ] = 0.0
; t141 [ 2422ULL ] = 0.0 ; t141 [ 2423ULL ] = 0.0 ; t141 [ 2424ULL ] = - X [
496ULL ] ; t141 [ 2425ULL ] = X [ 207ULL ] ; t141 [ 2426ULL ] = - X [ 290ULL
] ; t141 [ 2427ULL ] = 0.0 ; t141 [ 2428ULL ] = X [ 552ULL ] ; t141 [ 2429ULL
] = X [ 169ULL ] ; t141 [ 2430ULL ] = X [ 170ULL ] * 0.1 ; t141 [ 2431ULL ] =
X [ 171ULL ] ; t141 [ 2432ULL ] = X [ 172ULL ] ; t141 [ 2433ULL ] = X [
546ULL ] ; t141 [ 2434ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2435ULL ] = X [
547ULL ] ; t141 [ 2436ULL ] = X [ 548ULL ] ; t141 [ 2437ULL ] = X [ 563ULL ]
; t141 [ 2438ULL ] = X [ 566ULL ] ; t141 [ 2439ULL ] = X [ 169ULL ] ; t141 [
2440ULL ] = X [ 170ULL ] * 0.1 ; t141 [ 2441ULL ] = X [ 171ULL ] ; t141 [
2442ULL ] = X [ 172ULL ] ; t141 [ 2443ULL ] = X [ 202ULL ] ; t141 [ 2444ULL ]
= X [ 567ULL ] ; t141 [ 2445ULL ] = t169_idx_0 ; t141 [ 2446ULL ] = X [
205ULL ] ; t141 [ 2447ULL ] = X [ 207ULL ] ; t141 [ 2448ULL ] = X [ 568ULL ]
; t141 [ 2449ULL ] = X [ 569ULL ] ; t141 [ 2450ULL ] = t169_idx_0 ; t141 [
2451ULL ] = X [ 564ULL ] ; t141 [ 2452ULL ] = X [ 565ULL ] ; t141 [ 2453ULL ]
= X [ 546ULL ] ; t141 [ 2454ULL ] = X [ 37ULL ] * 0.1 ; t141 [ 2455ULL ] = X
[ 547ULL ] ; t141 [ 2456ULL ] = X [ 548ULL ] ; t141 [ 2457ULL ] = - X [
553ULL ] ; t141 [ 2458ULL ] = X [ 567ULL ] ; t141 [ 2459ULL ] = - t169_idx_0
; t141 [ 2460ULL ] = - X [ 205ULL ] ; t141 [ 2461ULL ] = - X [ 207ULL ] ;
t141 [ 2462ULL ] = X [ 568ULL ] ; t141 [ 2463ULL ] = X [ 569ULL ] ; t141 [
2464ULL ] = - t169_idx_0 ; t141 [ 2465ULL ] = t169_idx_0 ; t141 [ 2466ULL ] =
X [ 202ULL ] ; t141 [ 2467ULL ] = - X [ 553ULL ] ; t141 [ 2468ULL ] = X [
205ULL ] ; t141 [ 2469ULL ] = - X [ 205ULL ] ; t141 [ 2470ULL ] = X [ 207ULL
] ; t141 [ 2471ULL ] = - X [ 207ULL ] ; t141 [ 2472ULL ] = U_idx_4 ; t141 [
2473ULL ] = U_idx_4 * 0.01 ; t141 [ 2474ULL ] = X [ 73ULL ] ; t141 [ 2475ULL
] = X [ 73ULL ] ; t141 [ 2476ULL ] = X [ 169ULL ] ; t141 [ 2477ULL ] = X [
170ULL ] * 0.1 ; t141 [ 2478ULL ] = X [ 171ULL ] ; t141 [ 2479ULL ] = X [
172ULL ] ; t141 [ 2480ULL ] = U_idx_4 ; t141 [ 2481ULL ] = t231 ; t141 [
2482ULL ] = t231 ; t141 [ 2483ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t141
[ 2484ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2485ULL ] = t231 ;
t141 [ 2486ULL ] = 0.0 ; t141 [ 2487ULL ] = Fuel_Cell_Boost_Converter_L_p_v ;
t141 [ 2488ULL ] = 0.0 ; t141 [ 2489ULL ] = Fuel_Cell_Boost_Converter_L_p_v ;
t141 [ 2490ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2491ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2492ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2493ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2494ULL ] = 0.0 ; t141 [ 2495ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t141 [ 2496ULL ] = 0.0 ; t141 [ 2497ULL ] =
X [ 5ULL ] ; t141 [ 2498ULL ] = U_idx_13 ; t141 [ 2499ULL ] = 0.0 ; t141 [
2500ULL ] = X [ 5ULL ] ; t141 [ 2501ULL ] = t256 * 1000.0 ; t141 [ 2502ULL ]
= t256 * 1000.0 ; t141 [ 2503ULL ] = - X [ 5ULL ] ; t141 [ 2504ULL ] = X [
5ULL ] ; t141 [ 2505ULL ] = t256 * 1.0E+6 ; t141 [ 2506ULL ] = t256 * 1000.0
; t141 [ 2507ULL ] = Fuel_Cell_Current_Sensor1_I ; t141 [ 2508ULL ] = t256 *
1.0E+6 ; t141 [ 2509ULL ] = X [ 5ULL ] ; t141 [ 2510ULL ] = X [ 570ULL ] *
1000.0 ; t141 [ 2511ULL ] = X [ 5ULL ] ; t141 [ 2512ULL ] = 0.0 ; t141 [
2513ULL ] = Fuel_Cell_Current_Sensor1_I ; t141 [ 2514ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2515ULL ] = 0.0 ; t141 [ 2516ULL
] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 2517ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2518ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2519ULL ] = 0.0 ; t141 [ 2520ULL
] = X [ 168ULL ] ; t141 [ 2521ULL ] = X [ 168ULL ] ; t141 [ 2522ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2523ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2524ULL ] = X [ 168ULL ] ; t141
[ 2525ULL ] = 0.0 ; t141 [ 2526ULL ] = Battery_System_DC_DC_Converter_p2_v ;
t141 [ 2527ULL ] = 0.0 ; t141 [ 2528ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2529ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2530ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2531ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2532ULL ] = X [ 13ULL ] ; t141 [
2533ULL ] = 0.0 ; t141 [ 2534ULL ] = X [ 76ULL ] ; t141 [ 2535ULL ] = X [
76ULL ] ; t141 [ 2536ULL ] = U_idx_14 ; t141 [ 2537ULL ] = 0.0 ; t141 [
2538ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 2539ULL ] = 0.0 ;
t141 [ 2540ULL ] = X [ 13ULL ] ; t141 [ 2541ULL ] = X [ 164ULL ] * 1000.0 ;
t141 [ 2542ULL ] = 0.0 ; t141 [ 2543ULL ] = X [ 168ULL ] ; t141 [ 2544ULL ] =
X [ 571ULL ] * 1000.0 ; t141 [ 2545ULL ] = X [ 572ULL ] ; t141 [ 2546ULL ] =
X [ 13ULL ] ; t141 [ 2547ULL ] = X [ 573ULL ] ; t141 [ 2548ULL ] = X [ 573ULL
] ; t141 [ 2549ULL ] = X [ 574ULL ] ; t141 [ 2550ULL ] = X [ 77ULL ] ; t141 [
2551ULL ] = Battery_System_DC_DC_Converter_p2_v ; t141 [ 2552ULL ] = X [
76ULL ] * 9.5492965855137211 ; t141 [ 2553ULL ] = 0.0 ; t141 [ 2554ULL ] =
0.0 ; t141 [ 2555ULL ] = 0.0 ; t141 [ 2556ULL ] = X [ 76ULL ] ; t141 [
2557ULL ] = U_idx_15 ; t141 [ 2558ULL ] = - X [ 572ULL ] ; t141 [ 2559ULL ] =
U_idx_15 ; t141 [ 2560ULL ] = X [ 76ULL ] ; t141 [ 2561ULL ] = X [ 76ULL ] ;
t141 [ 2562ULL ] = - X [ 572ULL ] ; t141 [ 2563ULL ] = - X [ 572ULL ] ; t141
[ 2564ULL ] = X [ 76ULL ] ; t141 [ 2565ULL ] = X [ 76ULL ] ; t141 [ 2566ULL ]
= - X [ 572ULL ] ; t141 [ 2567ULL ] = - X [ 572ULL ] ; t141 [ 2568ULL ] = - X
[ 572ULL ] ; t141 [ 2569ULL ] = X [ 76ULL ] ; t141 [ 2570ULL ] = U_idx_15 ;
t141 [ 2571ULL ] = U_idx_14 ; t141 [ 2572ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t141 [ 2573ULL ] = 0.0 ; t141 [ 2574ULL
] = U_idx_0 ; t141 [ 2575ULL ] = 0.0 ; t141 [ 2576ULL ] = U_idx_0 ; t141 [
2577ULL ] = ( ( ( ( X [ 0ULL ] * 0.01 + X [ 7ULL ] * 0.0002 ) + X [ 8ULL ] *
2.0E-6 ) + - X [ 119ULL ] ) + U_idx_0 * - 0.010202000000000001 ) * 1000.0 ;
t141 [ 2578ULL ] = U_idx_0 ; t141 [ 2579ULL ] = U_idx_0 ; t141 [ 2580ULL ] =
U_idx_0 ; t141 [ 2581ULL ] = 0.0 ; for ( b = 0 ; b < 2582 ; b ++ ) { out . mX
[ b ] = t141 [ b ] ; } ( void ) LC ; ( void ) t362 ; return 0 ; }

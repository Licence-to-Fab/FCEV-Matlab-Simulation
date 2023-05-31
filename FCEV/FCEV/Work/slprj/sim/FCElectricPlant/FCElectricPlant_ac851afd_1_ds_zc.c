#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_zc.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t566 , NeDsMethodOutput * t567 ) { ETTS0 ab_efOut ;
ETTS0 b_efOut ; ETTS0 cb_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ; ETTS0
e_efOut ; ETTS0 efOut ; ETTS0 fb_efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ;
ETTS0 hb_efOut ; ETTS0 j_efOut ; ETTS0 jb_efOut ; ETTS0 k_efOut ; ETTS0
lb_efOut ; ETTS0 m_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ; ETTS0 p_efOut ;
ETTS0 pb_efOut ; ETTS0 q_efOut ; ETTS0 qb_efOut ; ETTS0 s_efOut ; ETTS0
sb_efOut ; ETTS0 t12 ; ETTS0 t16 ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 t27 ; ETTS0
t28 ; ETTS0 t29 ; ETTS0 t30 ; ETTS0 t5 ; ETTS0 t_efOut ; ETTS0 ub_efOut ;
ETTS0 v_efOut ; ETTS0 w_efOut ; ETTS0 wb_efOut ; ETTS0 xb_efOut ; ETTS0
y_efOut ; PmRealVector out ; real_T X [ 575 ] ; real_T t186 [ 376 ] ; real_T
nonscalar1 [ 7 ] ; real_T bb_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T
eb_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T t180 [
1 ] ; real_T t207 [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T u_efOut [ 1 ] ;
real_T vb_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; real_T
Electrical_Cooling_System_Tank_Tank_level ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ; real_T
U_idx_1 ; real_T U_idx_11 ; real_T U_idx_13 ; real_T U_idx_3 ; real_T U_idx_6
; real_T U_idx_7 ; real_T U_idx_9 ; real_T intrm_sf_mf_1006 ; real_T
intrm_sf_mf_1145 ; real_T intrm_sf_mf_1399 ; real_T intrm_sf_mf_1546 ; real_T
intrm_sf_mf_1577 ; real_T intrm_sf_mf_1637 ; real_T intrm_sf_mf_1662 ; real_T
intrm_sf_mf_1675 ; real_T intrm_sf_mf_1741 ; real_T intrm_sf_mf_1742 ; real_T
intrm_sf_mf_1743 ; real_T intrm_sf_mf_1744 ; real_T intrm_sf_mf_1745 ; real_T
intrm_sf_mf_1746 ; real_T intrm_sf_mf_1747 ; real_T intrm_sf_mf_1775 ; real_T
intrm_sf_mf_1776 ; real_T intrm_sf_mf_1777 ; real_T intrm_sf_mf_1802 ; real_T
intrm_sf_mf_225 ; real_T intrm_sf_mf_234 ; real_T intrm_sf_mf_237 ; real_T
intrm_sf_mf_247 ; real_T intrm_sf_mf_303 ; real_T intrm_sf_mf_403 ; real_T
intrm_sf_mf_682 ; real_T intrm_sf_mf_683 ; real_T intrm_sf_mf_692 ; real_T
intrm_sf_mf_77 ; real_T intrm_sf_mf_837 ; real_T intrm_sf_mf_840 ; real_T
intrm_sf_mf_89 ; real_T intrm_sf_mf_906 ; real_T intrm_sf_mf_910 ; real_T
t220 ; real_T t229 ; real_T t232 ; real_T t241 ; real_T t247 ; real_T t268 ;
real_T t271 ; real_T t274 ; real_T t283 ; real_T t284 ; real_T t285 ; real_T
t287 ; real_T t290 ; real_T t293 ; real_T t296 ; real_T t300 ; real_T t301 ;
real_T t303 ; real_T t304 ; real_T t305 ; real_T t306 ; real_T t308 ; real_T
t310 ; real_T t313 ; real_T t315 ; real_T t316 ; real_T t319 ; real_T t321 ;
real_T t324 ; real_T t325 ; real_T t328 ; real_T t337 ; real_T t338 ; real_T
t339 ; real_T t340 ; real_T t486 ; real_T t488 ; real_T t489 ; real_T t497 ;
real_T t515 ; real_T t516 ; real_T t521 ; real_T t527 ; real_T t529 ; size_t
t37 [ 1 ] ; size_t t38 [ 1 ] ; size_t t40 [ 1 ] ; size_t t210 ; size_t t211 ;
int32_T M [ 356 ] ; int32_T b ; for ( b = 0 ; b < 356 ; b ++ ) { M [ b ] =
t566 -> mM . mX [ b ] ; } U_idx_1 = t566 -> mU . mX [ 1 ] ; U_idx_3 = t566 ->
mU . mX [ 3 ] ; U_idx_6 = t566 -> mU . mX [ 6 ] ; U_idx_7 = t566 -> mU . mX [
7 ] ; U_idx_9 = t566 -> mU . mX [ 9 ] ; U_idx_11 = t566 -> mU . mX [ 11 ] ;
U_idx_13 = t566 -> mU . mX [ 13 ] ; for ( b = 0 ; b < 575 ; b ++ ) { X [ b ]
= t566 -> mX . mX [ b ] ; } out = t567 -> mZC ; nonscalar1 [ 0 ] = 19080.0 ;
nonscalar1 [ 1 ] = 19080.0 ; nonscalar1 [ 2 ] = 19080.0 ; nonscalar1 [ 3 ] =
19080.0 ; nonscalar1 [ 4 ] = 19080.0 ; nonscalar1 [ 5 ] = 19080.0 ;
nonscalar1 [ 6 ] = 19080.0 ; t488 = X [ 87ULL ] * 0.1 + 650.0 ; t486 = ( X [
110ULL ] + X [ 117ULL ] ) / 2.0 ; t180 [ 0ULL ] = X [ 6ULL ] ; t37 [ 0 ] =
20ULL ; t38 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [
0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] ,
& t38 [ 0ULL ] ) ; t30 = efOut ; t180 [ 0ULL ] = t486 ; t40 [ 0 ] = 19ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = c_efOut [ 0 ]
; t489 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 120ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= d_efOut ; t180 [ 0ULL ] = X [ 110ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t23 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , & t40 [
0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = f_efOut [ 0 ] ; t521 = t207 [ 0ULL ]
; t180 [ 0ULL ] = X [ 122ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [
0ULL ] , & t38 [ 0ULL ] ) ; t29 = g_efOut ; t180 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t28
= h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , &
t28 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = i_efOut [ 0 ]
; t497 = t207 [ 0ULL ] ; t527 = ( X [ 92ULL ] + X [ 99ULL ] ) / 2.0 ; t180 [
0ULL ] = X [ 9ULL ] ; tlu2_linear_linear_prelookup ( & j_efOut . mField0 [
0ULL ] , & j_efOut . mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] ,
& t38 [ 0ULL ] ) ; t30 = j_efOut ; t180 [ 0ULL ] = t527 ;
tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= k_efOut ; tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = l_efOut [ 0 ]
; t529 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= m_efOut ; t180 [ 0ULL ] = X [ 92ULL ] ; tlu2_linear_linear_prelookup ( &
n_efOut . mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t12 = n_efOut ;
tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , & t40 [
0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = o_efOut [ 0 ] ; t515 = t207 [ 0ULL ]
; t180 [ 0ULL ] = X [ 127ULL ] ; tlu2_linear_linear_prelookup ( & p_efOut .
mField0 [ 0ULL ] , & p_efOut . mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [
0ULL ] , & t38 [ 0ULL ] ) ; t29 = p_efOut ; t180 [ 0ULL ] = X [ 99ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t24
= q_efOut ; tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = r_efOut [ 0 ]
; t516 = t207 [ 0ULL ] ; Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I
= ( X [ 101ULL ] + X [ 108ULL ] ) / 2.0 ; t180 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t30
= s_efOut ; t180 [ 0ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = u_efOut [ 0 ]
; t283 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 130ULL ] ;
tlu2_linear_linear_prelookup ( & v_efOut . mField0 [ 0ULL ] , & v_efOut .
mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= v_efOut ; t180 [ 0ULL ] = X [ 101ULL ] ; tlu2_linear_linear_prelookup ( &
w_efOut . mField0 [ 0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t16 = w_efOut ;
tlu2_2d_linear_linear_value ( & x_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t16 . mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , & t40 [
0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = x_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A = t207 [ 0ULL
] ; t180 [ 0ULL ] = X [ 132ULL ] ; tlu2_linear_linear_prelookup ( & y_efOut .
mField0 [ 0ULL ] , & y_efOut . mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [
0ULL ] , & t38 [ 0ULL ] ) ; t29 = y_efOut ; t180 [ 0ULL ] = X [ 108ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t180 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t30
= ab_efOut ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , &
t30 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = bb_efOut [ 0
] ; Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B = t207 [
0ULL ] ; Electrical_Cooling_System_Tank_Tank_level = X [ 152ULL ] * - 0.2 +
0.2 ; if ( X [ 185ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
185ULL ] >= 1.0 ? 1.0 : X [ 185ULL ] ; } if ( X [ 186ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = X [
186ULL ] >= 1.0 ? 1.0 : X [ 186ULL ] ; } intrm_sf_mf_77 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 *
4124.48151675695 ; if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 23ULL
] >= 1.0 ? 1.0 : X [ 23ULL ] ; } intrm_sf_mf_89 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
4124.48151675695 ; if ( X [ 193ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 = X [ 193ULL
] >= 623.15 ? 623.15 : X [ 193ULL ] ; } t220 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 ;
intrm_sf_mf_225 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 * -
0.2214565261064495 ) + t220 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
1.2002114337048222 ) + t220 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
6.9647057412840034 ) + t220 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; t284 =
intrm_sf_mf_225 - intrm_sf_mf_89 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 =
intrm_sf_mf_225 / ( t284 == 0.0 ? 1.0E-16 : t284 ) ; if ( X [ 197ULL ] <=
216.59999999999997 ) { intrm_sf_mf_225 = 216.59999999999997 ; } else {
intrm_sf_mf_225 = X [ 197ULL ] >= 623.15 ? 623.15 : X [ 197ULL ] ; } t284 =
intrm_sf_mf_225 * intrm_sf_mf_225 ; t220 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_225 * - 0.2214565261064495 ) + t284 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) + ( (
1479.6504774711011 + intrm_sf_mf_225 * 1.2002114337048222 ) + t284 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) + ( (
12825.281119789837 + intrm_sf_mf_225 * 6.9647057412840034 ) + t284 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; t285 = t220
- intrm_sf_mf_89 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = t220 / (
t285 == 0.0 ? 1.0E-16 : t285 ) ; if ( X [ 172ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 172ULL
] >= 1.0 ? 1.0 : X [ 172ULL ] ; } if ( X [ 171ULL ] <= 0.0 ) {
intrm_sf_mf_225 = 0.0 ; } else { intrm_sf_mf_225 = X [ 171ULL ] >= 1.0 ? 1.0
: X [ 171ULL ] ; } t220 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) -
intrm_sf_mf_225 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 461.523 ) +
intrm_sf_mf_225 * 4124.48151675695 ; if ( X [ 191ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 191ULL
] >= 1.0 ? 1.0 : X [ 191ULL ] ; } if ( X [ 190ULL ] <= 0.0 ) {
intrm_sf_mf_225 = 0.0 ; } else { intrm_sf_mf_225 = X [ 190ULL ] >= 1.0 ? 1.0
: X [ 190ULL ] ; } t284 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) -
intrm_sf_mf_225 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 461.523 ) +
intrm_sf_mf_225 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = U_idx_3 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 0.0001 <=
7.8539816339744857E-13 ) { intrm_sf_mf_225 = 7.8539816339744857E-13 ; } else
if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 0.0001
>= 3.1415926535897929E-6 ) { intrm_sf_mf_225 = 3.1415926535897929E-6 ; } else
{ intrm_sf_mf_225 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 =
intrm_sf_mf_225 / 7.8539816339744827E-5 ; if ( X [ 215ULL ] <= 0.0 ) {
intrm_sf_mf_225 = 0.0 ; } else { intrm_sf_mf_225 = X [ 215ULL ] >= 1.0 ? 1.0
: X [ 215ULL ] ; } if ( X [ 216ULL ] <= 0.0 ) { t285 = 0.0 ; } else { t285 =
X [ 216ULL ] >= 1.0 ? 1.0 : X [ 216ULL ] ; } intrm_sf_mf_234 = ( ( ( 1.0 -
intrm_sf_mf_225 ) - t285 ) * 296.802103844292 + intrm_sf_mf_225 * 461.523 ) +
t285 * 4124.48151675695 ; t287 = X [ 213ULL ] * intrm_sf_mf_234 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 214ULL ]
/ ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) * ( X [ 217ULL ] / ( X [
213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ; t290 = X [ 214ULL ] / 1.01325
* ( X [ 218ULL ] / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = ( X [
189ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t293 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) ;
intrm_sf_mf_303 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 * t293 ;
intrm_sf_mf_237 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t290 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 2.0 ;
intrm_sf_mf_403 = ( X [ 189ULL ] - 1.01325 ) * ( intrm_sf_mf_237 >= t293 ?
intrm_sf_mf_237 : t293 ) ; intrm_sf_mf_237 = ( X [ 189ULL ] - 1.01325 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) ;
t296 = intrm_sf_mf_237 * intrm_sf_mf_237 * 3.0 - intrm_sf_mf_237 *
intrm_sf_mf_237 * intrm_sf_mf_237 * 2.0 ; if ( X [ 189ULL ] - 1.01325 <= 0.0
) { intrm_sf_mf_237 = intrm_sf_mf_303 ; } else if ( X [ 189ULL ] - 1.01325 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) {
intrm_sf_mf_237 = intrm_sf_mf_403 ; } else { intrm_sf_mf_237 = ( 1.0 - t296 )
* intrm_sf_mf_303 + intrm_sf_mf_403 * t296 ; } intrm_sf_mf_403 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t290 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = ( 1.01325 -
X [ 189ULL ] ) * ( intrm_sf_mf_403 >= t293 ? intrm_sf_mf_403 : t293 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = ( 1.01325 -
X [ 189ULL ] ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) ;
t290 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 2.0 ; if (
1.01325 - X [ 189ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 =
intrm_sf_mf_303 ; } else if ( 1.01325 - X [ 189ULL ] >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = ( 1.0 - t290
) * intrm_sf_mf_303 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t290 ; } if
( X [ 189ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 =
intrm_sf_mf_237 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 189ULL ]
< 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 :
intrm_sf_mf_303 ; } if ( X [ 213ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 213ULL ]
>= 623.15 ? 623.15 : X [ 213ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t290 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_225 ) - t285 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.00038614513167823636 ) * intrm_sf_mf_225 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.0070524868246844051 ) * t285 ; t229 = t290 - intrm_sf_mf_234 ;
intrm_sf_mf_225 = t290 / ( t229 == 0.0 ? 1.0E-16 : t229 ) ; if ( X [ 26ULL ]
<= 0.0 ) { t285 = 0.0 ; } else { t285 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL
] ; } if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 25ULL
] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t290 = ( ( ( 1.0 - t285 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) *
296.802103844292 + t285 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
4124.48151675695 ; if ( X [ 239ULL ] <= 216.59999999999997 ) { t293 =
216.59999999999997 ; } else { t293 = X [ 239ULL ] >= 623.15 ? 623.15 : X [
239ULL ] ; } t229 = t293 * t293 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = ( ( (
1074.1165326382641 + t293 * - 0.2214565261064495 ) + t229 *
0.00037212980109014541 ) * ( ( 1.0 - t285 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
1479.6504774711011 + t293 * 1.2002114337048222 ) + t229 * -
0.00038614513167823636 ) * t285 ) + ( ( 12825.281119789837 + t293 *
6.9647057412840034 ) + t229 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t232 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 - t290 ; t293
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 / ( t232 ==
0.0 ? 1.0E-16 : t232 ) ; if ( X [ 242ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = X [ 242ULL
] >= 623.15 ? 623.15 : X [ 242ULL ] ; } t232 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ;
intrm_sf_mf_303 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 * -
0.2214565261064495 ) + t232 * 0.00037212980109014541 ) * ( ( 1.0 - t285 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
1.2002114337048222 ) + t232 * - 0.00038614513167823636 ) * t285 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
6.9647057412840034 ) + t232 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t300 =
intrm_sf_mf_303 - t290 ; t285 = intrm_sf_mf_303 / ( t300 == 0.0 ? 1.0E-16 :
t300 ) ; if ( X [ 237ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 237ULL
] >= 1.0 ? 1.0 : X [ 237ULL ] ; } if ( X [ 236ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = X [
236ULL ] >= 1.0 ? 1.0 : X [ 236ULL ] ; } intrm_sf_mf_303 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
4124.48151675695 ; if ( X [ 223ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 223ULL
] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = X [
222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } intrm_sf_mf_237 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
4124.48151675695 ; if ( X [ 29ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 29ULL
] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = X [
28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } intrm_sf_mf_403 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 *
4124.48151675695 ; if ( X [ 257ULL ] <= 216.59999999999997 ) { t296 =
216.59999999999997 ; } else { t296 = X [ 257ULL ] >= 623.15 ? 623.15 : X [
257ULL ] ; } t300 = t296 * t296 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = ( ( (
1074.1165326382641 + t296 * - 0.2214565261064495 ) + t300 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) + ( (
1479.6504774711011 + t296 * 1.2002114337048222 ) + t300 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
12825.281119789837 + t296 * 6.9647057412840034 ) + t300 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ; t301 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 -
intrm_sf_mf_403 ; t296 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( t301 ==
0.0 ? 1.0E-16 : t301 ) ; if ( X [ 259ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 259ULL
] >= 623.15 ? 623.15 : X [ 259ULL ] ; } t301 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t229 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.2214565261064495 ) + t301 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
1.2002114337048222 ) + t301 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
6.9647057412840034 ) + t301 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ; t241 = t229
- intrm_sf_mf_403 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = t229 / (
t241 == 0.0 ? 1.0E-16 : t241 ) ; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 = X [
35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t229 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
4124.48151675695 ; if ( X [ 283ULL ] <= 216.59999999999997 ) { t232 =
216.59999999999997 ; } else { t232 = X [ 283ULL ] >= 623.15 ? 623.15 : X [
283ULL ] ; } t241 = t232 * t232 ; t300 = ( ( ( 1074.1165326382641 + t232 * -
0.2214565261064495 ) + t241 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t232 * 1.2002114337048222 ) + t241 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) + ( (
12825.281119789837 + t232 * 6.9647057412840034 ) + t241 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t303 = t300
- t229 ; t232 = t300 / ( t303 == 0.0 ? 1.0E-16 : t303 ) ; if ( X [ 285ULL ]
<= 216.59999999999997 ) { t300 = 216.59999999999997 ; } else { t300 = X [
285ULL ] >= 623.15 ? 623.15 : X [ 285ULL ] ; } t303 = t300 * t300 ; t301 = (
( ( 1074.1165326382641 + t300 * - 0.2214565261064495 ) + t303 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t300 * 1.2002114337048222 ) + t303 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 ) + ( (
12825.281119789837 + t300 * 6.9647057412840034 ) + t303 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t304 = t301
- t229 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 =
t301 / ( t304 == 0.0 ? 1.0E-16 : t304 ) ; if ( X [ 274ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
274ULL ] >= 1.0 ? 1.0 : X [ 274ULL ] ; } if ( X [ 273ULL ] <= 0.0 ) { t300 =
0.0 ; } else { t300 = X [ 273ULL ] >= 1.0 ? 1.0 : X [ 273ULL ] ; } t301 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
t300 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
t300 * 4124.48151675695 ; if ( X [ 312ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
312ULL ] >= 1.0 ? 1.0 : X [ 312ULL ] ; } if ( X [ 313ULL ] <= 0.0 ) { t300 =
0.0 ; } else { t300 = X [ 313ULL ] >= 1.0 ? 1.0 : X [ 313ULL ] ; } t241 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
t300 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
t300 * 259.836612622973 ; t300 = ( X [ 316ULL ] * 0.07812500122070315 +
U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if ( X [ 40ULL ] <= 0.0 ) {
t303 = 0.0 ; } else { t303 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } if (
X [ 41ULL ] <= 0.0 ) { t304 = 0.0 ; } else { t304 = X [ 41ULL ] >= 1.0 ? 1.0
: X [ 41ULL ] ; } intrm_sf_mf_692 = ( ( ( 1.0 - t303 ) - t304 ) *
296.802103844292 + t303 * 461.523 ) + t304 * 259.836612622973 ; if ( X [
320ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 = X [ 320ULL
] >= 623.15 ? 623.15 : X [ 320ULL ] ; } t247 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 * -
0.2214565261064495 ) + t247 * 0.00037212980109014541 ) * ( ( 1.0 - t303 ) -
t304 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
1.2002114337048222 ) + t247 * - 0.00038614513167823636 ) * t303 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 * -
0.044484923911382625 ) + t247 * 0.00036936011832044979 ) * t304 ; t305 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 -
intrm_sf_mf_692 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 / ( t305 ==
0.0 ? 1.0E-16 : t305 ) ; if ( X [ 324ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 324ULL ]
>= 623.15 ? 623.15 : X [ 324ULL ] ; } t305 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; t247 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * -
0.2214565261064495 ) + t305 * 0.00037212980109014541 ) * ( ( 1.0 - t303 ) -
t304 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
1.2002114337048222 ) + t305 * - 0.00038614513167823636 ) * t303 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * -
0.044484923911382625 ) + t305 * 0.00036936011832044979 ) * t304 ; t306 = t247
- intrm_sf_mf_692 ; t303 = t247 / ( t306 == 0.0 ? 1.0E-16 : t306 ) ; if ( X [
299ULL ] <= 0.0 ) { t304 = 0.0 ; } else { t304 = X [ 299ULL ] >= 1.0 ? 1.0 :
X [ 299ULL ] ; } if ( X [ 298ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 298ULL
] >= 1.0 ? 1.0 : X [ 298ULL ] ; } t247 = ( ( ( 1.0 - t304 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) *
296.802103844292 + t304 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
259.836612622973 ; if ( X [ 318ULL ] <= 0.0 ) { t304 = 0.0 ; } else { t304 =
X [ 318ULL ] >= 1.0 ? 1.0 : X [ 318ULL ] ; } if ( X [ 317ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 317ULL
] >= 1.0 ? 1.0 : X [ 317ULL ] ; } t305 = ( ( ( 1.0 - t304 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) *
296.802103844292 + t304 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
259.836612622973 ; if ( X [ 316ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { t304 = 1.9634954084936209E-11 ; } else if ( X [
316ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { t304 =
0.0012566370614359179 ; } else { t304 = X [ 316ULL ] * 0.0019634954084936209
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = t304 /
0.0019634954084936209 ; if ( X [ 339ULL ] <= 0.0 ) { t304 = 0.0 ; } else {
t304 = X [ 339ULL ] >= 1.0 ? 1.0 : X [ 339ULL ] ; } if ( X [ 340ULL ] <= 0.0
) { t306 = 0.0 ; } else { t306 = X [ 340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; }
intrm_sf_mf_837 = ( ( ( 1.0 - t304 ) - t306 ) * 296.802103844292 + t304 *
461.523 ) + t306 * 259.836612622973 ; t308 = X [ 337ULL ] * intrm_sf_mf_837 ;
intrm_sf_mf_910 = X [ 338ULL ] / ( t300 == 0.0 ? 1.0E-16 : t300 ) * ( X [
341ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; t310 = X [
338ULL ] / 1.01325 * ( X [ 342ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [
337ULL ] ) ) ; t315 = ( t300 + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t313
= ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) *
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) ;
intrm_sf_mf_906 = t315 * t313 ; intrm_sf_mf_840 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
intrm_sf_mf_910 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t310 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * 2.0 ;
intrm_sf_mf_1006 = ( t300 - 1.01325 ) * ( intrm_sf_mf_840 >= t313 ?
intrm_sf_mf_840 : t313 ) ; intrm_sf_mf_840 = ( t300 - 1.01325 ) / ( t315 ==
0.0 ? 1.0E-16 : t315 ) ; t316 = intrm_sf_mf_840 * intrm_sf_mf_840 * 3.0 -
intrm_sf_mf_840 * intrm_sf_mf_840 * intrm_sf_mf_840 * 2.0 ; if ( t300 -
1.01325 <= 0.0 ) { intrm_sf_mf_840 = intrm_sf_mf_906 ; } else if ( t300 -
1.01325 >= t315 ) { intrm_sf_mf_840 = intrm_sf_mf_1006 ; } else {
intrm_sf_mf_840 = ( 1.0 - t316 ) * intrm_sf_mf_906 + intrm_sf_mf_1006 * t316
; } intrm_sf_mf_1006 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t310 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
intrm_sf_mf_910 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = ( 1.01325 -
t300 ) * ( intrm_sf_mf_1006 >= t313 ? intrm_sf_mf_1006 : t313 ) ;
intrm_sf_mf_910 = ( 1.01325 - t300 ) / ( t315 == 0.0 ? 1.0E-16 : t315 ) ;
t310 = intrm_sf_mf_910 * intrm_sf_mf_910 * 3.0 - intrm_sf_mf_910 *
intrm_sf_mf_910 * intrm_sf_mf_910 * 2.0 ; if ( 1.01325 - t300 <= 0.0 ) {
intrm_sf_mf_910 = intrm_sf_mf_906 ; } else if ( 1.01325 - t300 >= t315 ) {
intrm_sf_mf_910 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; } else {
intrm_sf_mf_910 = ( 1.0 - t310 ) * intrm_sf_mf_906 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t310 ; } if
( t300 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 =
intrm_sf_mf_840 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = t300 <
1.01325 ? intrm_sf_mf_910 : intrm_sf_mf_906 ; } if ( X [ 337ULL ] <=
216.59999999999997 ) { intrm_sf_mf_910 = 216.59999999999997 ; } else {
intrm_sf_mf_910 = X [ 337ULL ] >= 623.15 ? 623.15 : X [ 337ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
intrm_sf_mf_910 * intrm_sf_mf_910 ; t310 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_910 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00037212980109014541 ) * ( ( 1.0 - t304 ) - t306 ) + ( ( 1479.6504774711011
+ intrm_sf_mf_910 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.00038614513167823636 ) * t304 ) + ( ( 900.63941224838356 + intrm_sf_mf_910
* - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00036936011832044979 ) * t306 ; intrm_sf_mf_1145 = t310 - intrm_sf_mf_837 ;
t304 = t310 / ( intrm_sf_mf_1145 == 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) ; if (
X [ 44ULL ] <= 0.0 ) { t306 = 0.0 ; } else { t306 = X [ 44ULL ] >= 1.0 ? 1.0
: X [ 44ULL ] ; } if ( X [ 43ULL ] <= 0.0 ) { intrm_sf_mf_910 = 0.0 ; } else
{ intrm_sf_mf_910 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } t310 = ( ( (
1.0 - t306 ) - intrm_sf_mf_910 ) * 296.802103844292 + t306 * 461.523 ) +
intrm_sf_mf_910 * 259.836612622973 ; if ( X [ 363ULL ] <= 216.59999999999997
) { t313 = 216.59999999999997 ; } else { t313 = X [ 363ULL ] >= 623.15 ?
623.15 : X [ 363ULL ] ; } intrm_sf_mf_1145 = t313 * t313 ; t315 = ( ( (
1074.1165326382641 + t313 * - 0.2214565261064495 ) + intrm_sf_mf_1145 *
0.00037212980109014541 ) * ( ( 1.0 - t306 ) - intrm_sf_mf_910 ) + ( (
1479.6504774711011 + t313 * 1.2002114337048222 ) + intrm_sf_mf_1145 * -
0.00038614513167823636 ) * t306 ) + ( ( 900.63941224838356 + t313 * -
0.044484923911382625 ) + intrm_sf_mf_1145 * 0.00036936011832044979 ) *
intrm_sf_mf_910 ; t319 = t315 - t310 ; t313 = t315 / ( t319 == 0.0 ? 1.0E-16
: t319 ) ; if ( X [ 366ULL ] <= 216.59999999999997 ) { t315 =
216.59999999999997 ; } else { t315 = X [ 366ULL ] >= 623.15 ? 623.15 : X [
366ULL ] ; } t319 = t315 * t315 ; intrm_sf_mf_906 = ( ( ( 1074.1165326382641
+ t315 * - 0.2214565261064495 ) + t319 * 0.00037212980109014541 ) * ( ( 1.0 -
t306 ) - intrm_sf_mf_910 ) + ( ( 1479.6504774711011 + t315 *
1.2002114337048222 ) + t319 * - 0.00038614513167823636 ) * t306 ) + ( (
900.63941224838356 + t315 * - 0.044484923911382625 ) + t319 *
0.00036936011832044979 ) * intrm_sf_mf_910 ; intrm_sf_mf_1399 =
intrm_sf_mf_906 - t310 ; t306 = intrm_sf_mf_906 / ( intrm_sf_mf_1399 == 0.0 ?
1.0E-16 : intrm_sf_mf_1399 ) ; if ( X [ 361ULL ] <= 0.0 ) { intrm_sf_mf_910 =
0.0 ; } else { intrm_sf_mf_910 = X [ 361ULL ] >= 1.0 ? 1.0 : X [ 361ULL ] ; }
if ( X [ 360ULL ] <= 0.0 ) { t315 = 0.0 ; } else { t315 = X [ 360ULL ] >= 1.0
? 1.0 : X [ 360ULL ] ; } intrm_sf_mf_906 = ( ( ( 1.0 - intrm_sf_mf_910 ) -
t315 ) * 296.802103844292 + intrm_sf_mf_910 * 461.523 ) + t315 *
259.836612622973 ; if ( X [ 347ULL ] <= 0.0 ) { intrm_sf_mf_910 = 0.0 ; }
else { intrm_sf_mf_910 = X [ 347ULL ] >= 1.0 ? 1.0 : X [ 347ULL ] ; } if ( X
[ 346ULL ] <= 0.0 ) { t315 = 0.0 ; } else { t315 = X [ 346ULL ] >= 1.0 ? 1.0
: X [ 346ULL ] ; } intrm_sf_mf_840 = ( ( ( 1.0 - intrm_sf_mf_910 ) - t315 ) *
296.802103844292 + intrm_sf_mf_910 * 461.523 ) + t315 * 259.836612622973 ; if
( X [ 47ULL ] <= 0.0 ) { intrm_sf_mf_910 = 0.0 ; } else { intrm_sf_mf_910 = X
[ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t315 =
0.0 ; } else { t315 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
intrm_sf_mf_1006 = ( ( ( 1.0 - intrm_sf_mf_910 ) - t315 ) * 296.802103844292
+ intrm_sf_mf_910 * 461.523 ) + t315 * 259.836612622973 ; if ( X [ 381ULL ]
<= 216.59999999999997 ) { t316 = 216.59999999999997 ; } else { t316 = X [
381ULL ] >= 623.15 ? 623.15 : X [ 381ULL ] ; } intrm_sf_mf_1399 = t316 * t316
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = ( ( (
1074.1165326382641 + t316 * - 0.2214565261064495 ) + intrm_sf_mf_1399 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_910 ) - t315 ) + ( (
1479.6504774711011 + t316 * 1.2002114337048222 ) + intrm_sf_mf_1399 * -
0.00038614513167823636 ) * intrm_sf_mf_910 ) + ( ( 900.63941224838356 + t316
* - 0.044484923911382625 ) + intrm_sf_mf_1399 * 0.00036936011832044979 ) *
t315 ; t321 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5
- intrm_sf_mf_1006 ; t316 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( t321 ==
0.0 ? 1.0E-16 : t321 ) ; if ( X [ 383ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 383ULL
] >= 623.15 ? 623.15 : X [ 383ULL ] ; } t321 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ;
intrm_sf_mf_1145 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.2214565261064495 ) + t321 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_910 ) - t315 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
1.2002114337048222 ) + t321 * - 0.00038614513167823636 ) * intrm_sf_mf_910 )
+ ( ( 900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.044484923911382625 ) + t321 * 0.00036936011832044979 ) * t315 ; t268 =
intrm_sf_mf_1145 - intrm_sf_mf_1006 ; intrm_sf_mf_910 = intrm_sf_mf_1145 / (
t268 == 0.0 ? 1.0E-16 : t268 ) ; if ( X [ 52ULL ] <= 0.0 ) { t315 = 0.0 ; }
else { t315 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } intrm_sf_mf_1145 = ( ( ( 1.0 -
t315 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) *
296.802103844292 + t315 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
259.836612622973 ; if ( X [ 408ULL ] <= 216.59999999999997 ) { t319 =
216.59999999999997 ; } else { t319 = X [ 408ULL ] >= 623.15 ? 623.15 : X [
408ULL ] ; } t268 = t319 * t319 ; intrm_sf_mf_1399 = ( ( ( 1074.1165326382641
+ t319 * - 0.2214565261064495 ) + t268 * 0.00037212980109014541 ) * ( ( 1.0 -
t315 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) +
( ( 1479.6504774711011 + t319 * 1.2002114337048222 ) + t268 * -
0.00038614513167823636 ) * t315 ) + ( ( 900.63941224838356 + t319 * -
0.044484923911382625 ) + t268 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t271 =
intrm_sf_mf_1399 - intrm_sf_mf_1145 ; t319 = intrm_sf_mf_1399 / ( t271 == 0.0
? 1.0E-16 : t271 ) ; if ( X [ 410ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_1399 = 216.59999999999997 ; } else { intrm_sf_mf_1399 = X [
410ULL ] >= 623.15 ? 623.15 : X [ 410ULL ] ; } t271 = intrm_sf_mf_1399 *
intrm_sf_mf_1399 ; t321 = ( ( ( 1074.1165326382641 + intrm_sf_mf_1399 * -
0.2214565261064495 ) + t271 * 0.00037212980109014541 ) * ( ( 1.0 - t315 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + intrm_sf_mf_1399 * 1.2002114337048222 ) + t271 * -
0.00038614513167823636 ) * t315 ) + ( ( 900.63941224838356 + intrm_sf_mf_1399
* - 0.044484923911382625 ) + t271 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t324 = t321
- intrm_sf_mf_1145 ; t315 = t321 / ( t324 == 0.0 ? 1.0E-16 : t324 ) ; if ( X
[ 399ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
399ULL ] >= 1.0 ? 1.0 : X [ 399ULL ] ; } if ( X [ 398ULL ] <= 0.0 ) {
intrm_sf_mf_1399 = 0.0 ; } else { intrm_sf_mf_1399 = X [ 398ULL ] >= 1.0 ?
1.0 : X [ 398ULL ] ; } t321 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
intrm_sf_mf_1399 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
intrm_sf_mf_1399 * 259.836612622973 ; if ( X [ 65ULL ] <= 0.0 ) {
intrm_sf_mf_1399 = 0.0 ; } else { intrm_sf_mf_1399 = X [ 65ULL ] >= 1.0 ? 1.0
: X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X
[ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t271 = ( ( ( 1.0 - intrm_sf_mf_1399
) - t268 ) * 296.802103844292 + intrm_sf_mf_1399 * 461.523 ) + t268 *
4124.48151675695 ; if ( X [ 68ULL ] <= 0.0 ) { intrm_sf_mf_1399 = 0.0 ; }
else { intrm_sf_mf_1399 = X [ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ] ; } if ( X [
69ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X [ 69ULL ] >= 1.0 ? 1.0 : X
[ 69ULL ] ; } t324 = ( ( ( 1.0 - intrm_sf_mf_1399 ) - t268 ) *
296.802103844292 + intrm_sf_mf_1399 * 461.523 ) + t268 * 4124.48151675695 ;
if ( X [ 481ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 = X [ 481ULL
] >= 623.15 ? 623.15 : X [ 481ULL ] ; } t274 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 * -
0.2214565261064495 ) + t274 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1399 ) - t268 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
1.2002114337048222 ) + t274 * - 0.00038614513167823636 ) * intrm_sf_mf_1399 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
6.9647057412840034 ) + t274 * - 0.0070524868246844051 ) * t268 ; t325 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 - t324 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 / ( t325 ==
0.0 ? 1.0E-16 : t325 ) ; if ( X [ 486ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [ 486ULL
] >= 623.15 ? 623.15 : X [ 486ULL ] ; } t325 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ; t274 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 * -
0.2214565261064495 ) + t325 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1399 ) - t268 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
1.2002114337048222 ) + t325 * - 0.00038614513167823636 ) * intrm_sf_mf_1399 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
6.9647057412840034 ) + t325 * - 0.0070524868246844051 ) * t268 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = t274 - t324
; intrm_sf_mf_1399 = t274 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) ;
if ( X [ 480ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X [ 480ULL ] >= 1.0
? 1.0 : X [ 480ULL ] ; } if ( X [ 479ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [
479ULL ] >= 1.0 ? 1.0 : X [ 479ULL ] ; } t274 = ( ( ( 1.0 - t268 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) *
296.802103844292 + t268 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
4124.48151675695 ; if ( X [ 461ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 =
X [ 461ULL ] >= 1.0 ? 1.0 : X [ 461ULL ] ; } if ( X [ 460ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [
460ULL ] >= 1.0 ? 1.0 : X [ 460ULL ] ; } t325 = ( ( ( 1.0 - t268 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) *
296.802103844292 + t268 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
4124.48151675695 ; t268 = ( X [ 478ULL ] * - 0.7999998 + U_idx_11 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t268 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
7.8539816339744857E-13 ; } else if ( t268 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = t268 *
7.8539816339744827E-5 ; } t268 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 /
7.8539816339744827E-5 ; if ( X [ 501ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [
501ULL ] >= 1.0 ? 1.0 : X [ 501ULL ] ; } if ( X [ 502ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
502ULL ] >= 1.0 ? 1.0 : X [ 502ULL ] ; } intrm_sf_mf_1546 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
4124.48151675695 ; t328 = X [ 499ULL ] * intrm_sf_mf_1546 ; intrm_sf_mf_1741
= X [ 500ULL ] / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) * ( X [
503ULL ] / ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ;
intrm_sf_mf_1577 = X [ 500ULL ] / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [
478ULL ] ) * ( X [ 504ULL ] / ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ]
) ) ; t337 = ( X [ 63ULL ] + X [ 478ULL ] ) / 2.0 * 0.0010000000000000009 ;
intrm_sf_mf_1742 = ( 1.0 - t268 ) * ( 1.0 - t268 ) ; intrm_sf_mf_1637 = t337
* intrm_sf_mf_1742 ; intrm_sf_mf_1662 = ( t268 + 1.0 ) * ( 1.0 - t268 *
intrm_sf_mf_1741 ) - ( 1.0 - t268 * intrm_sf_mf_1577 ) * t268 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( X [ 63ULL
] - X [ 478ULL ] ) * ( intrm_sf_mf_1662 >= intrm_sf_mf_1742 ?
intrm_sf_mf_1662 : intrm_sf_mf_1742 ) ; intrm_sf_mf_1662 = ( X [ 63ULL ] - X
[ 478ULL ] ) / ( t337 == 0.0 ? 1.0E-16 : t337 ) ; t338 = intrm_sf_mf_1662 *
intrm_sf_mf_1662 * 3.0 - intrm_sf_mf_1662 * intrm_sf_mf_1662 *
intrm_sf_mf_1662 * 2.0 ; if ( X [ 63ULL ] - X [ 478ULL ] <= 0.0 ) {
intrm_sf_mf_1662 = intrm_sf_mf_1637 ; } else if ( X [ 63ULL ] - X [ 478ULL ]
>= t337 ) { intrm_sf_mf_1662 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; } else {
intrm_sf_mf_1662 = ( 1.0 - t338 ) * intrm_sf_mf_1637 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 * t338 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( t268 +
1.0 ) * ( 1.0 - t268 * intrm_sf_mf_1577 ) - ( 1.0 - t268 * intrm_sf_mf_1741 )
* t268 * 2.0 ; t268 = ( X [ 478ULL ] - X [ 63ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 >=
intrm_sf_mf_1742 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 :
intrm_sf_mf_1742 ) ; intrm_sf_mf_1741 = ( X [ 478ULL ] - X [ 63ULL ] ) / (
t337 == 0.0 ? 1.0E-16 : t337 ) ; intrm_sf_mf_1577 = intrm_sf_mf_1741 *
intrm_sf_mf_1741 * 3.0 - intrm_sf_mf_1741 * intrm_sf_mf_1741 *
intrm_sf_mf_1741 * 2.0 ; if ( X [ 478ULL ] - X [ 63ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = intrm_sf_mf_1637 ; } else if ( X [ 478ULL ] - X [ 63ULL ]
>= t337 ) { intrm_sf_mf_1741 = t268 ; } else { intrm_sf_mf_1741 = ( 1.0 -
intrm_sf_mf_1577 ) * intrm_sf_mf_1637 + t268 * intrm_sf_mf_1577 ; } if ( X [
63ULL ] > X [ 478ULL ] ) { t268 = intrm_sf_mf_1662 ; } else { t268 = X [
63ULL ] < X [ 478ULL ] ? intrm_sf_mf_1741 : intrm_sf_mf_1637 ; } if ( X [
499ULL ] <= 216.59999999999997 ) { intrm_sf_mf_1741 = 216.59999999999997 ; }
else { intrm_sf_mf_1741 = X [ 499ULL ] >= 623.15 ? 623.15 : X [ 499ULL ] ; }
t339 = intrm_sf_mf_1741 * intrm_sf_mf_1741 ; intrm_sf_mf_1577 = ( ( (
1074.1165326382641 + intrm_sf_mf_1741 * - 0.2214565261064495 ) + t339 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + intrm_sf_mf_1741 * 1.2002114337048222 ) + t339 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) + ( (
12825.281119789837 + intrm_sf_mf_1741 * 6.9647057412840034 ) + t339 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t340 =
intrm_sf_mf_1577 - intrm_sf_mf_1546 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
intrm_sf_mf_1577 / ( t340 == 0.0 ? 1.0E-16 : t340 ) ; if ( X [ 517ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
X [ 517ULL ] >= 1.0 ? 1.0 : X [ 517ULL ] ; } if ( X [ 518ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 518ULL ] >= 1.0 ?
1.0 : X [ 518ULL ] ; } intrm_sf_mf_1577 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
intrm_sf_mf_1741 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
intrm_sf_mf_1741 * 259.836612622973 ; if ( X [ 530ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 530ULL ] >= 1.0 ?
1.0 : X [ 530ULL ] ; } if ( X [ 529ULL ] <= 0.0 ) { intrm_sf_mf_1742 = 0.0 ;
} else { intrm_sf_mf_1742 = X [ 529ULL ] >= 1.0 ? 1.0 : X [ 529ULL ] ; } t337
= ( ( ( 1.0 - intrm_sf_mf_1741 ) - intrm_sf_mf_1742 ) * 296.802103844292 +
intrm_sf_mf_1741 * 461.523 ) + intrm_sf_mf_1742 * 259.836612622973 ; if ( X [
72ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [
72ULL ] >= 1.0 ? 1.0 : X [ 72ULL ] ; } if ( X [ 71ULL ] <= 0.0 ) {
intrm_sf_mf_1742 = 0.0 ; } else { intrm_sf_mf_1742 = X [ 71ULL ] >= 1.0 ? 1.0
: X [ 71ULL ] ; } intrm_sf_mf_1637 = ( ( ( 1.0 - intrm_sf_mf_1741 ) -
intrm_sf_mf_1742 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 ) +
intrm_sf_mf_1742 * 259.836612622973 ; if ( X [ 75ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 75ULL ] >= 1.0 ? 1.0
: X [ 75ULL ] ; } if ( X [ 74ULL ] <= 0.0 ) { intrm_sf_mf_1742 = 0.0 ; } else
{ intrm_sf_mf_1742 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; }
intrm_sf_mf_1662 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - intrm_sf_mf_1742 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + intrm_sf_mf_1742 *
4124.48151675695 ; if ( X [ 569ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; }
else { intrm_sf_mf_1741 = X [ 569ULL ] >= 1.0 ? 1.0 : X [ 569ULL ] ; } if ( X
[ 568ULL ] <= 0.0 ) { intrm_sf_mf_1742 = 0.0 ; } else { intrm_sf_mf_1742 = X
[ 568ULL ] >= 1.0 ? 1.0 : X [ 568ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( ( ( 1.0 -
intrm_sf_mf_1741 ) - intrm_sf_mf_1742 ) * 296.802103844292 + intrm_sf_mf_1741
* 461.523 ) + intrm_sf_mf_1742 * 4124.48151675695 ; if ( X [ 464ULL ] <= 0.0
) { intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 464ULL ] >= 1.0
? 1.0 : X [ 464ULL ] ; } if ( X [ 463ULL ] <= 0.0 ) { intrm_sf_mf_1742 = 0.0
; } else { intrm_sf_mf_1742 = X [ 463ULL ] >= 1.0 ? 1.0 : X [ 463ULL ] ; }
t338 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - intrm_sf_mf_1742 ) * 296.802103844292
+ intrm_sf_mf_1741 * 461.523 ) + intrm_sf_mf_1742 * 4124.48151675695 ; if ( X
[ 508ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X
[ 508ULL ] >= 1.0 ? 1.0 : X [ 508ULL ] ; } if ( X [ 507ULL ] <= 0.0 ) {
intrm_sf_mf_1742 = 0.0 ; } else { intrm_sf_mf_1742 = X [ 507ULL ] >= 1.0 ?
1.0 : X [ 507ULL ] ; } t339 = ( ( ( 1.0 - intrm_sf_mf_1741 ) -
intrm_sf_mf_1742 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 ) +
intrm_sf_mf_1742 * 259.836612622973 ; if ( X [ 522ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 522ULL ] >= 1.0 ?
1.0 : X [ 522ULL ] ; } if ( X [ 521ULL ] <= 0.0 ) { intrm_sf_mf_1742 = 0.0 ;
} else { intrm_sf_mf_1742 = X [ 521ULL ] >= 1.0 ? 1.0 : X [ 521ULL ] ; } t340
= ( ( ( 1.0 - intrm_sf_mf_1741 ) - intrm_sf_mf_1742 ) * 296.802103844292 +
intrm_sf_mf_1741 * 461.523 ) + intrm_sf_mf_1742 * 259.836612622973 ; if ( X [
548ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [
548ULL ] >= 1.0 ? 1.0 : X [ 548ULL ] ; } if ( X [ 547ULL ] <= 0.0 ) {
intrm_sf_mf_1742 = 0.0 ; } else { intrm_sf_mf_1742 = X [ 547ULL ] >= 1.0 ?
1.0 : X [ 547ULL ] ; } intrm_sf_mf_1675 = ( ( ( 1.0 - intrm_sf_mf_1741 ) -
intrm_sf_mf_1742 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 ) +
intrm_sf_mf_1742 * 4124.48151675695 ; t180 [ 0ULL ] = X [ 89ULL ] ;
tlu2_linear_linear_prelookup ( & cb_efOut . mField0 [ 0ULL ] , & cb_efOut .
mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t5
= cb_efOut ; t180 [ 0ULL ] = X [ 90ULL ] ; tlu2_linear_linear_prelookup ( &
db_efOut . mField0 [ 0ULL ] , & db_efOut . mField1 [ 0ULL ] , & db_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t27 = db_efOut ;
tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , & t27 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , & t40 [
0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = eb_efOut [ 0 ] ; intrm_sf_mf_1741 =
t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 91ULL ] ; tlu2_linear_linear_prelookup (
& fb_efOut . mField0 [ 0ULL ] , & fb_efOut . mField1 [ 0ULL ] , & fb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t180 [
0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29 = fb_efOut ;
tlu2_2d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , &
t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = gb_efOut [ 0 ] ;
intrm_sf_mf_1742 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 98ULL ] ;
tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [ 0ULL ] , & hb_efOut .
mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t5
= hb_efOut ; tlu2_2d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = ib_efOut [ 0 ] ;
intrm_sf_mf_1743 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 100ULL ] ;
tlu2_linear_linear_prelookup ( & jb_efOut . mField0 [ 0ULL ] , & jb_efOut .
mField1 [ 0ULL ] , & jb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= jb_efOut ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t16 . mField0 [ 0ULL ] , &
t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = kb_efOut [ 0
] ; intrm_sf_mf_1744 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_linear_prelookup ( & lb_efOut . mField0 [ 0ULL ] , & lb_efOut .
mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= lb_efOut ; tlu2_2d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , &
t30 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = mb_efOut [ 0
] ; intrm_sf_mf_1745 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 109ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , &
t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = ob_efOut [ 0
] ; intrm_sf_mf_1746 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 134ULL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t30
= pb_efOut ; t180 [ 0ULL ] = X [ 135ULL ] ; tlu2_linear_linear_prelookup ( &
qb_efOut . mField0 [ 0ULL ] , & qb_efOut . mField1 [ 0ULL ] , & qb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29 = qb_efOut ;
tlu2_2d_linear_linear_value ( & rb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , &
t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = rb_efOut [ 0 ] ;
intrm_sf_mf_1747 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 150ULL ] ;
tlu2_linear_linear_prelookup ( & sb_efOut . mField0 [ 0ULL ] , & sb_efOut .
mField1 [ 0ULL ] , & sb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t30
= sb_efOut ; tlu2_2d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = tb_efOut [ 0
] ; intrm_sf_mf_1775 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 151ULL ] ;
tlu2_linear_linear_prelookup ( & ub_efOut . mField0 [ 0ULL ] , & ub_efOut .
mField1 [ 0ULL ] , & ub_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= ub_efOut ; tlu2_2d_linear_linear_value ( & vb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , &
t28 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t37 [ 0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t207 [ 0 ] = vb_efOut [ 0
] ; intrm_sf_mf_1776 = t207 [ 0ULL ] ; t180 [ 0ULL ] = X [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & wb_efOut . mField0 [ 0ULL ] , & wb_efOut .
mField1 [ 0ULL ] , & wb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t180 [ 0ULL ] , & t37 [ 0ULL ] , & t38 [ 0ULL ] ) ; t29
= wb_efOut ; t180 [ 0ULL ] = X [ 14ULL ] ; tlu2_linear_linear_prelookup ( &
xb_efOut . mField0 [ 0ULL ] , & xb_efOut . mField1 [ 0ULL ] , & xb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t180 [
0ULL ] , & t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t30 = xb_efOut ;
tlu2_2d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , & t30 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t37 [ 0ULL ] , &
t40 [ 0ULL ] , & t38 [ 0ULL ] ) ; t180 [ 0 ] = yb_efOut [ 0 ] ;
intrm_sf_mf_1777 = t180 [ 0ULL ] ; if ( U_idx_13 >= 1.0 ) { intrm_sf_mf_1802
= 1.0 ; } else { intrm_sf_mf_1802 = U_idx_13 <= 0.0 ? 0.0 : U_idx_13 ; } if (
X [ 176ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
176ULL ] >= 1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [ 175ULL ] <= 0.0 ) {
intrm_sf_mf_682 = 0.0 ; } else { intrm_sf_mf_682 = X [ 175ULL ] >= 1.0 ? 1.0
: X [ 175ULL ] ; } intrm_sf_mf_247 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
intrm_sf_mf_682 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
intrm_sf_mf_682 * 4124.48151675695 ; if ( X [ 303ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
303ULL ] >= 1.0 ? 1.0 : X [ 303ULL ] ; } if ( X [ 302ULL ] <= 0.0 ) {
intrm_sf_mf_682 = 0.0 ; } else { intrm_sf_mf_682 = X [ 302ULL ] >= 1.0 ? 1.0
: X [ 302ULL ] ; } intrm_sf_mf_683 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
intrm_sf_mf_682 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
intrm_sf_mf_682 * 259.836612622973 ; if ( M [ 44ULL ] == 0 ) {
intrm_sf_mf_682 = - X [ 573ULL ] - X [ 77ULL ] ; } else { intrm_sf_mf_682 =
0.0 ; } if ( M [ 305ULL ] == 0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = U_idx_6 -
623.15 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; } if
( M [ 350ULL ] == 0 ) { U_idx_3 = U_idx_9 - 623.15 ; } else { U_idx_3 = 0.0 ;
} if ( M [ 6ULL ] == 0 ) { U_idx_7 = X [ 31ULL ] - 623.15 ; } else { U_idx_7
= 0.0 ; } t180 [ 0ULL ] = pmf_get_inf ( ) ; for ( t210 = 0ULL ; t210 < 42ULL
; t210 ++ ) { t211 = t210 / 42ULL ; U_idx_11 = t180 [ t211 > 0ULL ? 0ULL :
t211 ] ; U_idx_13 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t210 ] *
1.0E-5 ; t180 [ t211 > 0ULL ? 0ULL : t211 ] = U_idx_11 > U_idx_13 ? U_idx_13
: U_idx_11 ; } t207 [ 0ULL ] = pmf_get_inf ( ) ; for ( t210 = 0ULL ; t210 <
7ULL ; t210 ++ ) { t211 = t210 / 7ULL ; U_idx_11 = t207 [ t211 > 0ULL ? 0ULL
: t211 ] ; U_idx_13 = nonscalar1 [ t210 ] * 1.0E-5 ; t207 [ t211 > 0ULL ?
0ULL : t211 ] = U_idx_11 > U_idx_13 ? U_idx_13 : U_idx_11 ; } t186 [ 0ULL ] =
4.03416E-7 - X [ 82ULL ] * X [ 85ULL ] ; t186 [ 1ULL ] = t180 [ 0ULL ] - X [
83ULL ] ; t186 [ 2ULL ] = t207 [ 0ULL ] - X [ 84ULL ] * X [ 86ULL ] ; t186 [
3ULL ] = X [ 85ULL ] ; t186 [ 4ULL ] = X [ 84ULL ] ; t186 [ 5ULL ] = X [
82ULL ] ; t186 [ 6ULL ] = X [ 83ULL ] ; t186 [ 7ULL ] = X [ 86ULL ] ; t186 [
8ULL ] = ( ( 0.001 - X [ 87ULL ] * t488 * 0.001 ) + X [ 87ULL ] * X [ 87ULL ]
* 0.00010037240412334386 ) / ( X [ 79ULL ] == 0.0 ? 1.0E-16 : X [ 79ULL ] ) *
1000.0 - 500.0 ; t186 [ 9ULL ] = ( real_T ) ( - X [ 78ULL ] + - U_idx_1 <
500.0 ) ; t186 [ 10ULL ] = ( real_T ) ( X [ 79ULL ] > 0.0 ) ; t186 [ 11ULL ]
= intrm_sf_mf_1741 ; t186 [ 12ULL ] = X [ 90ULL ] - 0.1 ; t186 [ 13ULL ] =
500.0 - X [ 90ULL ] ; t186 [ 14ULL ] = X [ 89ULL ] - 268.4357 ; t186 [ 15ULL
] = 393.15 - X [ 89ULL ] ; t186 [ 16ULL ] = intrm_sf_mf_1742 ; t186 [ 17ULL ]
= X [ 92ULL ] - 0.1 ; t186 [ 18ULL ] = 500.0 - X [ 92ULL ] ; t186 [ 19ULL ] =
X [ 91ULL ] - 268.4357 ; t186 [ 20ULL ] = 393.15 - X [ 91ULL ] ; t186 [ 21ULL
] = intrm_sf_mf_1743 ; t186 [ 22ULL ] = X [ 99ULL ] - 0.1 ; t186 [ 23ULL ] =
500.0 - X [ 99ULL ] ; t186 [ 24ULL ] = X [ 98ULL ] - 268.4357 ; t186 [ 25ULL
] = 393.15 - X [ 98ULL ] ; t186 [ 26ULL ] = intrm_sf_mf_1744 ; t186 [ 27ULL ]
= X [ 101ULL ] - 0.1 ; t186 [ 28ULL ] = 500.0 - X [ 101ULL ] ; t186 [ 29ULL ]
= X [ 100ULL ] - 268.4357 ; t186 [ 30ULL ] = 393.15 - X [ 100ULL ] ; t186 [
31ULL ] = intrm_sf_mf_1745 ; t186 [ 32ULL ] = X [ 108ULL ] - 0.1 ; t186 [
33ULL ] = 500.0 - X [ 108ULL ] ; t186 [ 34ULL ] = X [ 107ULL ] - 268.4357 ;
t186 [ 35ULL ] = 393.15 - X [ 107ULL ] ; t186 [ 36ULL ] = intrm_sf_mf_1746 ;
t186 [ 37ULL ] = X [ 110ULL ] - 0.1 ; t186 [ 38ULL ] = 500.0 - X [ 110ULL ] ;
t186 [ 39ULL ] = X [ 109ULL ] - 268.4357 ; t186 [ 40ULL ] = 393.15 - X [
109ULL ] ; t186 [ 41ULL ] = t489 ; t186 [ 42ULL ] = t486 - 0.1 ; t186 [ 43ULL
] = 500.0 - t486 ; t186 [ 44ULL ] = X [ 6ULL ] - 268.4357 ; t186 [ 45ULL ] =
393.15 - X [ 6ULL ] ; t186 [ 46ULL ] = t521 ; t186 [ 47ULL ] = t497 ; t186 [
48ULL ] = X [ 117ULL ] - 0.1 ; t186 [ 49ULL ] = 500.0 - X [ 117ULL ] ; t186 [
50ULL ] = X [ 116ULL ] - 268.4357 ; t186 [ 51ULL ] = 393.15 - X [ 116ULL ] ;
t186 [ 52ULL ] = t529 ; t186 [ 53ULL ] = t527 - 0.1 ; t186 [ 54ULL ] = 500.0
- t527 ; t186 [ 55ULL ] = X [ 9ULL ] - 268.4357 ; t186 [ 56ULL ] = 393.15 - X
[ 9ULL ] ; t186 [ 57ULL ] = t515 ; t186 [ 58ULL ] = t516 ; t186 [ 59ULL ] =
t283 ; t186 [ 60ULL ] = Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I -
0.1 ; t186 [ 61ULL ] = 500.0 -
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; t186 [ 62ULL ] = X [
11ULL ] - 268.4357 ; t186 [ 63ULL ] = 393.15 - X [ 11ULL ] ; t186 [ 64ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A ; t186 [ 65ULL
] = Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B ; t186 [
66ULL ] = intrm_sf_mf_1747 ; t186 [ 67ULL ] = X [ 135ULL ] - 0.1 ; t186 [
68ULL ] = 500.0 - X [ 135ULL ] ; t186 [ 69ULL ] = X [ 134ULL ] - 268.4357 ;
t186 [ 70ULL ] = 393.15 - X [ 134ULL ] ; t186 [ 71ULL ] = intrm_sf_mf_1741 ;
t186 [ 72ULL ] = X [ 423ULL ] - 273.16 ; t186 [ 73ULL ] = 363.16 - X [ 423ULL
] ; t186 [ 74ULL ] = X [ 445ULL ] - 0.5 ; t186 [ 75ULL ] = 500.0 - X [ 445ULL
] ; t186 [ 76ULL ] = X [ 444ULL ] - 273.16 ; t186 [ 77ULL ] = 363.16 - X [
444ULL ] ; t186 [ 78ULL ] = X [ 142ULL ] - 1.0 ; t186 [ 79ULL ] = pmf_get_inf
( ) - X [ 142ULL ] ; t186 [ 80ULL ] = X [ 14ULL ] - 1.0E-5 ; t186 [ 81ULL ] =
pmf_get_inf ( ) - X [ 14ULL ] ; t186 [ 82ULL ] = X [ 143ULL ] - 1.0 ; t186 [
83ULL ] = pmf_get_inf ( ) - X [ 143ULL ] ; t186 [ 84ULL ] = 0.001 -
Electrical_Cooling_System_Tank_Tank_level * 0.005 ; t186 [ 85ULL ] =
Electrical_Cooling_System_Tank_Tank_level - 0.01 ; t186 [ 86ULL ] = X [
167ULL ] - ( X [ 165ULL ] + 0.8 ) ; t186 [ 87ULL ] = intrm_sf_mf_1802 - 1.0 >
1.0 - intrm_sf_mf_1802 ? 1.0 - intrm_sf_mf_1802 : intrm_sf_mf_1802 - 1.0 ;
t186 [ 88ULL ] = ( 1.0 - X [ 185ULL ] ) - X [ 186ULL ] ; t186 [ 89ULL ] =
intrm_sf_mf_77 * 293.15 / 1.01325 ; t186 [ 90ULL ] = ( 1.0 - X [ 312ULL ] ) -
X [ 313ULL ] ; t186 [ 91ULL ] = t241 * 293.15 / 1.01325 ; t186 [ 92ULL ] = (
1.0 - X [ 517ULL ] ) - X [ 518ULL ] ; t186 [ 93ULL ] = intrm_sf_mf_1577 *
293.15 / 1.01325 ; t186 [ 94ULL ] = X [ 193ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
intrm_sf_mf_89 ; t186 [ 95ULL ] = X [ 194ULL ] * X [ 194ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 193ULL ] == 0.0 ?
1.0E-16 : X [ 193ULL ] ) ; t186 [ 96ULL ] = X [ 197ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 *
intrm_sf_mf_89 ; t186 [ 97ULL ] = X [ 198ULL ] * X [ 198ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 197ULL ] == 0.0 ?
1.0E-16 : X [ 197ULL ] ) ; t186 [ 98ULL ] = X [ 193ULL ] * intrm_sf_mf_89 / (
X [ 194ULL ] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) ; t186 [ 99ULL ] = X [ 197ULL
] * intrm_sf_mf_89 / ( X [ 198ULL ] == 0.0 ? 1.0E-16 : X [ 198ULL ] ) ; t186
[ 100ULL ] = X [ 170ULL ] - 0.01 ; t186 [ 101ULL ] = pmf_get_inf ( ) - X [
170ULL ] ; t186 [ 102ULL ] = X [ 169ULL ] - 216.59999999999997 ; t186 [
103ULL ] = 623.15 - X [ 169ULL ] ; t186 [ 104ULL ] = X [ 189ULL ] - 0.01 ;
t186 [ 105ULL ] = pmf_get_inf ( ) - X [ 189ULL ] ; t186 [ 106ULL ] = X [
188ULL ] - 216.59999999999997 ; t186 [ 107ULL ] = 623.15 - X [ 188ULL ] ;
t186 [ 108ULL ] = X [ 21ULL ] - 0.01 ; t186 [ 109ULL ] = pmf_get_inf ( ) - X
[ 21ULL ] ; t186 [ 110ULL ] = X [ 20ULL ] - 216.59999999999997 ; t186 [
111ULL ] = 623.15 - X [ 20ULL ] ; t186 [ 112ULL ] = X [ 20ULL ] *
intrm_sf_mf_89 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ; t186 [
113ULL ] = X [ 239ULL ] * t293 * t290 ; t186 [ 114ULL ] = X [ 240ULL ] * X [
240ULL ] * t293 / ( t290 == 0.0 ? 1.0E-16 : t290 ) / ( X [ 239ULL ] == 0.0 ?
1.0E-16 : X [ 239ULL ] ) ; t186 [ 115ULL ] = X [ 242ULL ] * t285 * t290 ;
t186 [ 116ULL ] = X [ 243ULL ] * X [ 243ULL ] * t285 / ( t290 == 0.0 ?
1.0E-16 : t290 ) / ( X [ 242ULL ] == 0.0 ? 1.0E-16 : X [ 242ULL ] ) ; t186 [
117ULL ] = X [ 239ULL ] * t290 / ( X [ 240ULL ] == 0.0 ? 1.0E-16 : X [ 240ULL
] ) ; t186 [ 118ULL ] = X [ 242ULL ] * t290 / ( X [ 243ULL ] == 0.0 ? 1.0E-16
: X [ 243ULL ] ) ; t186 [ 119ULL ] = X [ 235ULL ] - 0.01 ; t186 [ 120ULL ] =
pmf_get_inf ( ) - X [ 235ULL ] ; t186 [ 121ULL ] = X [ 234ULL ] -
216.59999999999997 ; t186 [ 122ULL ] = 623.15 - X [ 234ULL ] ; t186 [ 123ULL
] = X [ 221ULL ] - 0.01 ; t186 [ 124ULL ] = pmf_get_inf ( ) - X [ 221ULL ] ;
t186 [ 125ULL ] = X [ 220ULL ] - 216.59999999999997 ; t186 [ 126ULL ] =
623.15 - X [ 220ULL ] ; t186 [ 127ULL ] = X [ 30ULL ] - 0.01 ; t186 [ 128ULL
] = pmf_get_inf ( ) - X [ 30ULL ] ; t186 [ 129ULL ] = X [ 24ULL ] -
216.59999999999997 ; t186 [ 130ULL ] = 623.15 - X [ 24ULL ] ; t186 [ 131ULL ]
= X [ 24ULL ] * t290 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) ; t186
[ 132ULL ] = X [ 257ULL ] * t296 * intrm_sf_mf_403 ; t186 [ 133ULL ] = X [
258ULL ] * X [ 258ULL ] * t296 / ( intrm_sf_mf_403 == 0.0 ? 1.0E-16 :
intrm_sf_mf_403 ) / ( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ; t186 [
134ULL ] = X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
intrm_sf_mf_403 ; t186 [ 135ULL ] = X [ 260ULL ] * X [ 260ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 259ULL ] == 0.0
? 1.0E-16 : X [ 259ULL ] ) ; t186 [ 136ULL ] = X [ 257ULL ] * intrm_sf_mf_403
/ ( X [ 258ULL ] == 0.0 ? 1.0E-16 : X [ 258ULL ] ) ; t186 [ 137ULL ] = X [
259ULL ] * intrm_sf_mf_403 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] )
; t186 [ 138ULL ] = X [ 32ULL ] - 0.01 ; t186 [ 139ULL ] = pmf_get_inf ( ) -
X [ 32ULL ] ; t186 [ 140ULL ] = X [ 27ULL ] - 216.59999999999997 ; t186 [
141ULL ] = 623.15 - X [ 27ULL ] ; t186 [ 142ULL ] = X [ 27ULL ] *
intrm_sf_mf_403 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) ; t186 [
143ULL ] = X [ 283ULL ] * t232 * t229 ; t186 [ 144ULL ] = X [ 284ULL ] * X [
284ULL ] * t232 / ( t229 == 0.0 ? 1.0E-16 : t229 ) / ( X [ 283ULL ] == 0.0 ?
1.0E-16 : X [ 283ULL ] ) ; t186 [ 145ULL ] = X [ 285ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 * t229 ; t186
[ 146ULL ] = X [ 286ULL ] * X [ 286ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_26 / ( t229 ==
0.0 ? 1.0E-16 : t229 ) / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ] ) ;
t186 [ 147ULL ] = X [ 283ULL ] * t229 / ( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [
284ULL ] ) ; t186 [ 148ULL ] = X [ 285ULL ] * t229 / ( X [ 286ULL ] == 0.0 ?
1.0E-16 : X [ 286ULL ] ) ; t186 [ 149ULL ] = X [ 37ULL ] - 0.01 ; t186 [
150ULL ] = pmf_get_inf ( ) - X [ 37ULL ] ; t186 [ 151ULL ] = X [ 272ULL ] -
216.59999999999997 ; t186 [ 152ULL ] = 623.15 - X [ 272ULL ] ; t186 [ 153ULL
] = X [ 36ULL ] - 0.01 ; t186 [ 154ULL ] = pmf_get_inf ( ) - X [ 36ULL ] ;
t186 [ 155ULL ] = X [ 33ULL ] - 216.59999999999997 ; t186 [ 156ULL ] = 623.15
- X [ 33ULL ] ; t186 [ 157ULL ] = X [ 33ULL ] * t229 / ( X [ 36ULL ] == 0.0 ?
1.0E-16 : X [ 36ULL ] ) ; t186 [ 158ULL ] = X [ 320ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
intrm_sf_mf_692 ; t186 [ 159ULL ] = X [ 321ULL ] * X [ 321ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 / (
intrm_sf_mf_692 == 0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [ 320ULL ] == 0.0
? 1.0E-16 : X [ 320ULL ] ) ; t186 [ 160ULL ] = X [ 324ULL ] * t303 *
intrm_sf_mf_692 ; t186 [ 161ULL ] = X [ 325ULL ] * X [ 325ULL ] * t303 / (
intrm_sf_mf_692 == 0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [ 324ULL ] == 0.0
? 1.0E-16 : X [ 324ULL ] ) ; t186 [ 162ULL ] = X [ 320ULL ] * intrm_sf_mf_692
/ ( X [ 321ULL ] == 0.0 ? 1.0E-16 : X [ 321ULL ] ) ; t186 [ 163ULL ] = X [
324ULL ] * intrm_sf_mf_692 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] )
; t186 [ 164ULL ] = X [ 297ULL ] - 0.01 ; t186 [ 165ULL ] = pmf_get_inf ( ) -
X [ 297ULL ] ; t186 [ 166ULL ] = X [ 296ULL ] - 216.59999999999997 ; t186 [
167ULL ] = 623.15 - X [ 296ULL ] ; t186 [ 168ULL ] = t300 - 0.01 ; t186 [
169ULL ] = pmf_get_inf ( ) - t300 ; t186 [ 170ULL ] = X [ 315ULL ] -
216.59999999999997 ; t186 [ 171ULL ] = 623.15 - X [ 315ULL ] ; t186 [ 172ULL
] = X [ 39ULL ] - 0.01 ; t186 [ 173ULL ] = pmf_get_inf ( ) - X [ 39ULL ] ;
t186 [ 174ULL ] = X [ 38ULL ] - 216.59999999999997 ; t186 [ 175ULL ] = 623.15
- X [ 38ULL ] ; t186 [ 176ULL ] = X [ 38ULL ] * intrm_sf_mf_692 / ( X [ 39ULL
] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ; t186 [ 177ULL ] = X [ 363ULL ] * t313 *
t310 ; t186 [ 178ULL ] = X [ 364ULL ] * X [ 364ULL ] * t313 / ( t310 == 0.0 ?
1.0E-16 : t310 ) / ( X [ 363ULL ] == 0.0 ? 1.0E-16 : X [ 363ULL ] ) ; t186 [
179ULL ] = X [ 366ULL ] * t306 * t310 ; t186 [ 180ULL ] = X [ 367ULL ] * X [
367ULL ] * t306 / ( t310 == 0.0 ? 1.0E-16 : t310 ) / ( X [ 366ULL ] == 0.0 ?
1.0E-16 : X [ 366ULL ] ) ; t186 [ 181ULL ] = X [ 363ULL ] * t310 / ( X [
364ULL ] == 0.0 ? 1.0E-16 : X [ 364ULL ] ) ; t186 [ 182ULL ] = X [ 366ULL ] *
t310 / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) ; t186 [ 183ULL ] = X
[ 359ULL ] - 0.01 ; t186 [ 184ULL ] = pmf_get_inf ( ) - X [ 359ULL ] ; t186 [
185ULL ] = X [ 358ULL ] - 216.59999999999997 ; t186 [ 186ULL ] = 623.15 - X [
358ULL ] ; t186 [ 187ULL ] = X [ 345ULL ] - 0.01 ; t186 [ 188ULL ] =
pmf_get_inf ( ) - X [ 345ULL ] ; t186 [ 189ULL ] = X [ 344ULL ] -
216.59999999999997 ; t186 [ 190ULL ] = 623.15 - X [ 344ULL ] ; t186 [ 191ULL
] = X [ 48ULL ] - 0.01 ; t186 [ 192ULL ] = pmf_get_inf ( ) - X [ 48ULL ] ;
t186 [ 193ULL ] = X [ 42ULL ] - 216.59999999999997 ; t186 [ 194ULL ] = 623.15
- X [ 42ULL ] ; t186 [ 195ULL ] = X [ 42ULL ] * t310 / ( X [ 48ULL ] == 0.0 ?
1.0E-16 : X [ 48ULL ] ) ; t186 [ 196ULL ] = X [ 381ULL ] * t316 *
intrm_sf_mf_1006 ; t186 [ 197ULL ] = X [ 382ULL ] * X [ 382ULL ] * t316 / (
intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) ; t186 [ 198ULL ] = X [ 383ULL ] *
intrm_sf_mf_910 * intrm_sf_mf_1006 ; t186 [ 199ULL ] = X [ 384ULL ] * X [
384ULL ] * intrm_sf_mf_910 / ( intrm_sf_mf_1006 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1006 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ] ) ; t186
[ 200ULL ] = X [ 381ULL ] * intrm_sf_mf_1006 / ( X [ 382ULL ] == 0.0 ?
1.0E-16 : X [ 382ULL ] ) ; t186 [ 201ULL ] = X [ 383ULL ] * intrm_sf_mf_1006
/ ( X [ 384ULL ] == 0.0 ? 1.0E-16 : X [ 384ULL ] ) ; t186 [ 202ULL ] = X [
49ULL ] - 0.01 ; t186 [ 203ULL ] = pmf_get_inf ( ) - X [ 49ULL ] ; t186 [
204ULL ] = X [ 45ULL ] - 216.59999999999997 ; t186 [ 205ULL ] = 623.15 - X [
45ULL ] ; t186 [ 206ULL ] = X [ 45ULL ] * intrm_sf_mf_1006 / ( X [ 49ULL ] ==
0.0 ? 1.0E-16 : X [ 49ULL ] ) ; t186 [ 207ULL ] = X [ 408ULL ] * t319 *
intrm_sf_mf_1145 ; t186 [ 208ULL ] = X [ 409ULL ] * X [ 409ULL ] * t319 / (
intrm_sf_mf_1145 == 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) / ( X [ 408ULL ] ==
0.0 ? 1.0E-16 : X [ 408ULL ] ) ; t186 [ 209ULL ] = X [ 410ULL ] * t315 *
intrm_sf_mf_1145 ; t186 [ 210ULL ] = X [ 411ULL ] * X [ 411ULL ] * t315 / (
intrm_sf_mf_1145 == 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) / ( X [ 410ULL ] ==
0.0 ? 1.0E-16 : X [ 410ULL ] ) ; t186 [ 211ULL ] = X [ 408ULL ] *
intrm_sf_mf_1145 / ( X [ 409ULL ] == 0.0 ? 1.0E-16 : X [ 409ULL ] ) ; t186 [
212ULL ] = X [ 410ULL ] * intrm_sf_mf_1145 / ( X [ 411ULL ] == 0.0 ? 1.0E-16
: X [ 411ULL ] ) ; t186 [ 213ULL ] = X [ 54ULL ] - 0.01 ; t186 [ 214ULL ] =
pmf_get_inf ( ) - X [ 54ULL ] ; t186 [ 215ULL ] = X [ 397ULL ] -
216.59999999999997 ; t186 [ 216ULL ] = 623.15 - X [ 397ULL ] ; t186 [ 217ULL
] = X [ 53ULL ] - 0.01 ; t186 [ 218ULL ] = pmf_get_inf ( ) - X [ 53ULL ] ;
t186 [ 219ULL ] = X [ 50ULL ] - 216.59999999999997 ; t186 [ 220ULL ] = 623.15
- X [ 50ULL ] ; t186 [ 221ULL ] = X [ 50ULL ] * intrm_sf_mf_1145 / ( X [
53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) ; t186 [ 222ULL ] = X [ 481ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 * t324 ; t186
[ 223ULL ] = X [ 482ULL ] * X [ 482ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 / ( t324 ==
0.0 ? 1.0E-16 : t324 ) / ( X [ 481ULL ] == 0.0 ? 1.0E-16 : X [ 481ULL ] ) ;
t186 [ 224ULL ] = X [ 486ULL ] * intrm_sf_mf_1399 * t324 ; t186 [ 225ULL ] =
X [ 487ULL ] * X [ 487ULL ] * intrm_sf_mf_1399 / ( t324 == 0.0 ? 1.0E-16 :
t324 ) / ( X [ 486ULL ] == 0.0 ? 1.0E-16 : X [ 486ULL ] ) ; t186 [ 226ULL ] =
X [ 481ULL ] * t324 / ( X [ 482ULL ] == 0.0 ? 1.0E-16 : X [ 482ULL ] ) ; t186
[ 227ULL ] = X [ 486ULL ] * t324 / ( X [ 487ULL ] == 0.0 ? 1.0E-16 : X [
487ULL ] ) ; t186 [ 228ULL ] = X [ 478ULL ] - 0.01 ; t186 [ 229ULL ] =
pmf_get_inf ( ) - X [ 478ULL ] ; t186 [ 230ULL ] = X [ 477ULL ] -
216.59999999999997 ; t186 [ 231ULL ] = 623.15 - X [ 477ULL ] ; t186 [ 232ULL
] = X [ 459ULL ] - 216.59999999999997 ; t186 [ 233ULL ] = 623.15 - X [ 459ULL
] ; t186 [ 234ULL ] = X [ 67ULL ] - 0.01 ; t186 [ 235ULL ] = pmf_get_inf ( )
- X [ 67ULL ] ; t186 [ 236ULL ] = X [ 66ULL ] - 216.59999999999997 ; t186 [
237ULL ] = 623.15 - X [ 66ULL ] ; t186 [ 238ULL ] = X [ 66ULL ] * t324 / ( X
[ 67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) ; t186 [ 239ULL ] = X [ 214ULL ] *
X [ 214ULL ] * intrm_sf_mf_225 / ( intrm_sf_mf_234 == 0.0 ? 1.0E-16 :
intrm_sf_mf_234 ) / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ; t186 [
240ULL ] = X [ 214ULL ] / ( t287 == 0.0 ? 1.0E-16 : t287 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) ;
t186 [ 241ULL ] = X [ 217ULL ] * intrm_sf_mf_234 / ( X [ 189ULL ] == 0.0 ?
1.0E-16 : X [ 189ULL ] ) ; t186 [ 242ULL ] = X [ 218ULL ] * intrm_sf_mf_234 /
1.01325 ; t186 [ 243ULL ] = t287 / ( X [ 214ULL ] == 0.0 ? 1.0E-16 : X [
214ULL ] ) ; t186 [ 244ULL ] = X [ 174ULL ] - 216.59999999999997 ; t186 [
245ULL ] = 623.15 - X [ 174ULL ] ; t186 [ 246ULL ] = X [ 338ULL ] * X [
338ULL ] * t304 / ( intrm_sf_mf_837 == 0.0 ? 1.0E-16 : intrm_sf_mf_837 ) / (
X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ; t186 [ 247ULL ] = X [ 338ULL
] / ( t308 == 0.0 ? 1.0E-16 : t308 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) ;
t186 [ 248ULL ] = X [ 341ULL ] * intrm_sf_mf_837 / ( t300 == 0.0 ? 1.0E-16 :
t300 ) ; t186 [ 249ULL ] = X [ 342ULL ] * intrm_sf_mf_837 / 1.01325 ; t186 [
250ULL ] = t308 / ( X [ 338ULL ] == 0.0 ? 1.0E-16 : X [ 338ULL ] ) ; t186 [
251ULL ] = X [ 301ULL ] - 216.59999999999997 ; t186 [ 252ULL ] = 623.15 - X [
301ULL ] ; t186 [ 253ULL ] = X [ 500ULL ] * X [ 500ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 / (
intrm_sf_mf_1546 == 0.0 ? 1.0E-16 : intrm_sf_mf_1546 ) / ( X [ 499ULL ] ==
0.0 ? 1.0E-16 : X [ 499ULL ] ) ; t186 [ 254ULL ] = X [ 500ULL ] / ( t328 ==
0.0 ? 1.0E-16 : t328 ) * 2.0 / ( t268 == 0.0 ? 1.0E-16 : t268 ) ; t186 [
255ULL ] = X [ 503ULL ] * intrm_sf_mf_1546 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 :
X [ 63ULL ] ) ; t186 [ 256ULL ] = X [ 504ULL ] * intrm_sf_mf_1546 / ( X [
478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ; t186 [ 257ULL ] = t328 / ( X [
500ULL ] == 0.0 ? 1.0E-16 : X [ 500ULL ] ) ; t186 [ 258ULL ] = X [ 63ULL ] -
0.01 ; t186 [ 259ULL ] = pmf_get_inf ( ) - X [ 63ULL ] ; t186 [ 260ULL ] = X
[ 462ULL ] - 216.59999999999997 ; t186 [ 261ULL ] = 623.15 - X [ 462ULL ] ;
t186 [ 262ULL ] = ( X [ 56ULL ] * 0.1 + 0.0001 ) - 1.0E-8 ; t186 [ 263ULL ] =
X [ 55ULL ] - 273.16 ; t186 [ 264ULL ] = 363.16 - X [ 55ULL ] ; t186 [ 265ULL
] = X [ 431ULL ] - 0.5 ; t186 [ 266ULL ] = 500.0 - X [ 431ULL ] ; t186 [
267ULL ] = X [ 430ULL ] - 273.16 ; t186 [ 268ULL ] = 363.16 - X [ 430ULL ] ;
t186 [ 269ULL ] = X [ 433ULL ] - 0.5 ; t186 [ 270ULL ] = 500.0 - X [ 433ULL ]
; t186 [ 271ULL ] = X [ 432ULL ] - 273.16 ; t186 [ 272ULL ] = 363.16 - X [
432ULL ] ; t186 [ 273ULL ] = X [ 57ULL ] - 0.5 ; t186 [ 274ULL ] = 500.0 - X
[ 57ULL ] ; t186 [ 275ULL ] = X [ 58ULL ] - 273.16 ; t186 [ 276ULL ] = 363.16
- X [ 58ULL ] ; t186 [ 277ULL ] = X [ 59ULL ] - 0.5 ; t186 [ 278ULL ] = 500.0
- X [ 59ULL ] ; t186 [ 279ULL ] = X [ 60ULL ] - 273.16 ; t186 [ 280ULL ] =
363.16 - X [ 60ULL ] ; t186 [ 281ULL ] = X [ 62ULL ] - 216.59999999999997 ;
t186 [ 282ULL ] = 623.15 - X [ 62ULL ] ; t186 [ 283ULL ] = X [ 62ULL ] * t271
/ ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ; t186 [ 284ULL ] = X [
70ULL ] - 216.59999999999997 ; t186 [ 285ULL ] = 623.15 - X [ 70ULL ] ; t186
[ 286ULL ] = X [ 70ULL ] * intrm_sf_mf_1637 / ( X [ 54ULL ] == 0.0 ? 1.0E-16
: X [ 54ULL ] ) ; t186 [ 287ULL ] = X [ 73ULL ] - 216.59999999999997 ; t186 [
288ULL ] = 623.15 - X [ 73ULL ] ; t186 [ 289ULL ] = X [ 73ULL ] *
intrm_sf_mf_1662 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [
290ULL ] = X [ 506ULL ] - 216.59999999999997 ; t186 [ 291ULL ] = 623.15 - X [
506ULL ] ; t186 [ 292ULL ] = X [ 520ULL ] - 216.59999999999997 ; t186 [
293ULL ] = 623.15 - X [ 520ULL ] ; t186 [ 294ULL ] = X [ 546ULL ] -
216.59999999999997 ; t186 [ 295ULL ] = 623.15 - X [ 546ULL ] ; t186 [ 296ULL
] = ( real_T ) ( t488 > 0.0 ) ; t186 [ 297ULL ] = X [ 77ULL ] - X [ 573ULL ]
; t186 [ 298ULL ] = intrm_sf_mf_682 ; t186 [ 299ULL ] = X [ 4ULL ] ; t186 [
300ULL ] = X [ 10ULL ] ; t186 [ 301ULL ] = X [ 16ULL ] ; t186 [ 302ULL ] = X
[ 12ULL ] ; t186 [ 303ULL ] = X [ 17ULL ] ; t186 [ 304ULL ] = X [ 61ULL ] ;
t186 [ 305ULL ] = X [ 31ULL ] ; t186 [ 306ULL ] = X [ 5ULL ] ; t186 [ 307ULL
] = X [ 156ULL ] ; t186 [ 308ULL ] = X [ 157ULL ] ; t186 [ 309ULL ] = X [
155ULL ] ; t186 [ 310ULL ] = pmf_get_inf ( ) - X [ 141ULL ] ; t186 [ 311ULL ]
= X [ 141ULL ] - 1.0 ; t186 [ 312ULL ] = pmf_get_inf ( ) - X [ 7ULL ] ; t186
[ 313ULL ] = X [ 7ULL ] - 1.0 ; t186 [ 314ULL ] = intrm_sf_mf_1775 ; t186 [
315ULL ] = 393.15 - X [ 150ULL ] ; t186 [ 316ULL ] = X [ 150ULL ] - 268.4357
; t186 [ 317ULL ] = intrm_sf_mf_1776 ; t186 [ 318ULL ] = 393.15 - X [ 151ULL
] ; t186 [ 319ULL ] = X [ 151ULL ] - 268.4357 ; t186 [ 320ULL ] =
intrm_sf_mf_1777 ; t186 [ 321ULL ] = 500.0 - X [ 14ULL ] ; t186 [ 322ULL ] =
X [ 14ULL ] - 0.1 ; t186 [ 323ULL ] = 393.15 - X [ 8ULL ] ; t186 [ 324ULL ] =
X [ 8ULL ] - 268.4357 ; t186 [ 325ULL ] = 216.59999999999997 - U_idx_6 ; t186
[ 326ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5
; t186 [ 327ULL ] = 216.59999999999997 - U_idx_9 ; t186 [ 328ULL ] = U_idx_3
; t186 [ 329ULL ] = 216.59999999999997 - X [ 31ULL ] ; t186 [ 330ULL ] =
U_idx_7 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X
[ 174ULL ] * intrm_sf_mf_247 ; t186 [ 331ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
t488 = X [ 169ULL ] * t220 ; t186 [ 332ULL ] = t488 / ( X [ 170ULL ] == 0.0 ?
1.0E-16 : X [ 170ULL ] ) ; t521 = X [ 188ULL ] * t284 ; t186 [ 333ULL ] =
t521 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) ; t186 [ 334ULL ] =
t521 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) ; t186 [ 335ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 234ULL
] * intrm_sf_mf_303 ; t186 [ 336ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [
235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] ) ; t497 = X [ 220ULL ] *
intrm_sf_mf_237 ; t186 [ 337ULL ] = t497 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 :
X [ 221ULL ] ) ; t186 [ 338ULL ] = t497 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X
[ 221ULL ] ) ; t186 [ 339ULL ] = t488 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [
170ULL ] ) ; t497 = X [ 272ULL ] * t301 ; t186 [ 340ULL ] = t497 / ( X [
37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 341ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [
235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 301ULL
] * intrm_sf_mf_683 ; t186 [ 342ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
t521 = X [ 296ULL ] * t247 ; t186 [ 343ULL ] = t521 / ( X [ 297ULL ] == 0.0 ?
1.0E-16 : X [ 297ULL ] ) ; t529 = X [ 315ULL ] * t305 ; t186 [ 344ULL ] =
t529 / ( t300 == 0.0 ? 1.0E-16 : t300 ) ; t186 [ 345ULL ] = t529 / ( t300 ==
0.0 ? 1.0E-16 : t300 ) ; t186 [ 346ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 358ULL
] * intrm_sf_mf_906 ; t186 [ 347ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [
359ULL ] == 0.0 ? 1.0E-16 : X [ 359ULL ] ) ; t515 = X [ 344ULL ] *
intrm_sf_mf_840 ; t186 [ 348ULL ] = t515 / ( X [ 345ULL ] == 0.0 ? 1.0E-16 :
X [ 345ULL ] ) ; t186 [ 349ULL ] = t515 / ( X [ 345ULL ] == 0.0 ? 1.0E-16 : X
[ 345ULL ] ) ; t186 [ 350ULL ] = t521 / ( X [ 297ULL ] == 0.0 ? 1.0E-16 : X [
297ULL ] ) ; t521 = X [ 397ULL ] * t321 ; t186 [ 351ULL ] = t521 / ( X [
54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t186 [ 352ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [
359ULL ] == 0.0 ? 1.0E-16 : X [ 359ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 462ULL
] * t338 ; t186 [ 353ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 63ULL
] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ; t527 = X [ 477ULL ] * t274 ; t186 [
354ULL ] = t527 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ; t529 = X
[ 459ULL ] * t325 ; t186 [ 355ULL ] = t529 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 :
X [ 37ULL ] ) ; t186 [ 356ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 63ULL
] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ; t186 [ 357ULL ] = t527 / ( X [ 478ULL ]
== 0.0 ? 1.0E-16 : X [ 478ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 506ULL
] * t339 ; t186 [ 358ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
t186 [ 359ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / 1.01325 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 520ULL
] * t340 ; t186 [ 360ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t186 [ 361ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t186 [ 362ULL ] = t521 / ( X [ 54ULL ]
== 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t186 [ 363ULL ] = t529 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 546ULL
] * intrm_sf_mf_1675 ; t186 [ 364ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 365ULL ] = t497 / ( X [ 37ULL ]
== 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 366ULL ] = t488 / ( X [ 170ULL ] ==
0.0 ? 1.0E-16 : X [ 170ULL ] ) ; t186 [ 367ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 368ULL ] = X [ 524ULL ] * t337 /
1.01325 ; t186 [ 369ULL ] = X [ 527ULL ] * t337 / ( X [ 54ULL ] == 0.0 ?
1.0E-16 : X [ 54ULL ] ) ; t186 [ 370ULL ] = X [ 525ULL ] * t337 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t186 [ 371ULL ] = X [ 526ULL ] * t337 /
1.01325 ; t186 [ 372ULL ] = X [ 563ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ; t186 [ 373ULL ] = X [ 566ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 374ULL ] = X [ 564ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t186 [ 375ULL ] = X [ 565ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ; for ( b = 0 ; b < 376 ; b ++ ) {
out . mX [ b ] = t186 [ b ] ; } ( void ) LC ; ( void ) t567 ; return 0 ; }

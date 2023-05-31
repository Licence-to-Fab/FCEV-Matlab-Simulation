#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_mode.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t526 , NeDsMethodOutput * t527 ) { ETTS0
ab_efOut ; ETTS0 b_efOut ; ETTS0 cb_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ;
ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 fb_efOut ; ETTS0 g_efOut ; ETTS0 h_efOut
; ETTS0 hb_efOut ; ETTS0 j_efOut ; ETTS0 jb_efOut ; ETTS0 k_efOut ; ETTS0
lb_efOut ; ETTS0 m_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ; ETTS0 p_efOut ;
ETTS0 pb_efOut ; ETTS0 q_efOut ; ETTS0 qb_efOut ; ETTS0 s_efOut ; ETTS0
sb_efOut ; ETTS0 t12 ; ETTS0 t16 ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 t27 ; ETTS0
t28 ; ETTS0 t29 ; ETTS0 t30 ; ETTS0 t5 ; ETTS0 t_efOut ; ETTS0 ub_efOut ;
ETTS0 v_efOut ; ETTS0 w_efOut ; ETTS0 wb_efOut ; ETTS0 xb_efOut ; ETTS0
y_efOut ; PmIntVector out ; real_T X [ 575 ] ; real_T nonscalar1 [ 7 ] ;
real_T bb_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T
ib_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
mb_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T t201 [ 1 ] ; real_T t202 [ 1 ]
; real_T tb_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ;
real_T x_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
Battery_System_DC_DC_Converter_p2_v ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_1 ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_2 ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_1 ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_2 ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; real_T
Electrical_Cooling_System_Tank_Tank_level ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ; real_T
U_idx_1 ; real_T U_idx_11 ; real_T U_idx_13 ; real_T U_idx_3 ; real_T U_idx_6
; real_T U_idx_7 ; real_T U_idx_9 ; real_T intrm_sf_mf_1006 ; real_T
intrm_sf_mf_1007 ; real_T intrm_sf_mf_1183 ; real_T intrm_sf_mf_1439 ; real_T
intrm_sf_mf_1546 ; real_T intrm_sf_mf_1637 ; real_T intrm_sf_mf_1662 ; real_T
intrm_sf_mf_1675 ; real_T intrm_sf_mf_1741 ; real_T intrm_sf_mf_1743 ; real_T
intrm_sf_mf_1744 ; real_T intrm_sf_mf_1745 ; real_T intrm_sf_mf_1746 ; real_T
intrm_sf_mf_1747 ; real_T intrm_sf_mf_1775 ; real_T intrm_sf_mf_1776 ; real_T
intrm_sf_mf_1777 ; real_T intrm_sf_mf_225 ; real_T intrm_sf_mf_234 ; real_T
intrm_sf_mf_237 ; real_T intrm_sf_mf_303 ; real_T intrm_sf_mf_403 ; real_T
intrm_sf_mf_692 ; real_T intrm_sf_mf_837 ; real_T intrm_sf_mf_840 ; real_T
intrm_sf_mf_89 ; real_T intrm_sf_mf_906 ; real_T intrm_sf_mf_910 ; real_T
t225 ; real_T t240 ; real_T t249 ; real_T t274 ; real_T t275 ; real_T t276 ;
real_T t280 ; real_T t283 ; real_T t286 ; real_T t288 ; real_T t289 ; real_T
t291 ; real_T t293 ; real_T t294 ; real_T t295 ; real_T t296 ; real_T t297 ;
real_T t298 ; real_T t301 ; real_T t303 ; real_T t306 ; real_T t308 ; real_T
t312 ; real_T t315 ; real_T t317 ; real_T t318 ; real_T t321 ; real_T t324 ;
real_T t328 ; real_T t330 ; real_T t331 ; real_T t332 ; real_T t333 ; real_T
t350 ; real_T t352 ; real_T t365 ; real_T t378 ; real_T t404 ; size_t t32 [ 1
] ; size_t t33 [ 1 ] ; size_t t35 [ 1 ] ; size_t t205 ; size_t t206 ; int32_T
t181 [ 356 ] ; int32_T b ; U_idx_1 = t526 -> mU . mX [ 1 ] ; U_idx_3 = t526
-> mU . mX [ 3 ] ; U_idx_6 = t526 -> mU . mX [ 6 ] ; U_idx_7 = t526 -> mU .
mX [ 7 ] ; U_idx_9 = t526 -> mU . mX [ 9 ] ; U_idx_11 = t526 -> mU . mX [ 11
] ; U_idx_13 = t526 -> mU . mX [ 13 ] ; for ( b = 0 ; b < 575 ; b ++ ) { X [
b ] = t526 -> mX . mX [ b ] ; } out = t527 -> mMODE ; nonscalar1 [ 0 ] =
19080.0 ; nonscalar1 [ 1 ] = 19080.0 ; nonscalar1 [ 2 ] = 19080.0 ;
nonscalar1 [ 3 ] = 19080.0 ; nonscalar1 [ 4 ] = 19080.0 ; nonscalar1 [ 5 ] =
19080.0 ; nonscalar1 [ 6 ] = 19080.0 ; Battery_System_DC_DC_Converter_p2_v =
X [ 87ULL ] * 0.1 + 650.0 ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I = ( X [ 110ULL ] + X
[ 117ULL ] ) / 2.0 ; t201 [ 0ULL ] = X [ 6ULL ] ; t32 [ 0 ] = 20ULL ; t33 [ 0
] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , &
efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] )
; t30 = efOut ; t201 [ 0ULL ] =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I ; t35 [ 0 ] = 19ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = c_efOut [ 0 ]
; t274 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 120ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= d_efOut ; t201 [ 0ULL ] = X [ 110ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t201 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t23 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [ 0ULL ] , & t35 [
0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = f_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_1 = t202 [ 0ULL
] ; t201 [ 0ULL ] = X [ 122ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [
0ULL ] , & t33 [ 0ULL ] ) ; t29 = g_efOut ; t201 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t28
= h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , &
t28 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = i_efOut [ 0 ]
; Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_2 = t202 [
0ULL ] ; Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I = ( X [
92ULL ] + X [ 99ULL ] ) / 2.0 ; t201 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & j_efOut . mField0 [ 0ULL ] , & j_efOut .
mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30
= j_efOut ; t201 [ 0ULL ] =
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= k_efOut ; tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = l_efOut [ 0 ]
; t275 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= m_efOut ; t201 [ 0ULL ] = X [ 92ULL ] ; tlu2_linear_linear_prelookup ( &
n_efOut . mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t201 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t12 = n_efOut ;
tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [ 0ULL ] , & t35 [
0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = o_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_1 = t202 [ 0ULL
] ; t201 [ 0ULL ] = X [ 127ULL ] ; tlu2_linear_linear_prelookup ( & p_efOut .
mField0 [ 0ULL ] , & p_efOut . mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [
0ULL ] , & t33 [ 0ULL ] ) ; t29 = p_efOut ; t201 [ 0ULL ] = X [ 99ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t24
= q_efOut ; tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = r_efOut [ 0 ]
; Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_2 = t202 [
0ULL ] ; Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = ( X [ 101ULL ]
+ X [ 108ULL ] ) / 2.0 ; t201 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30
= s_efOut ; t201 [ 0ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = u_efOut [ 0 ]
; t276 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 130ULL ] ;
tlu2_linear_linear_prelookup ( & v_efOut . mField0 [ 0ULL ] , & v_efOut .
mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= v_efOut ; t201 [ 0ULL ] = X [ 101ULL ] ; tlu2_linear_linear_prelookup ( &
w_efOut . mField0 [ 0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t201 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t16 = w_efOut ;
tlu2_2d_linear_linear_value ( & x_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , & t16 . mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [ 0ULL ] , & t35 [
0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = x_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A = t202 [ 0ULL
] ; t201 [ 0ULL ] = X [ 132ULL ] ; tlu2_linear_linear_prelookup ( & y_efOut .
mField0 [ 0ULL ] , & y_efOut . mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [
0ULL ] , & t33 [ 0ULL ] ) ; t29 = y_efOut ; t201 [ 0ULL ] = X [ 108ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30
= ab_efOut ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , &
t30 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = bb_efOut [ 0
] ; Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B = t202 [
0ULL ] ; Electrical_Cooling_System_Tank_Tank_level = X [ 152ULL ] * - 0.2 +
0.2 ; if ( X [ 185ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
185ULL ] >= 1.0 ? 1.0 : X [ 185ULL ] ; } if ( X [ 186ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = X [
186ULL ] >= 1.0 ? 1.0 : X [ 186ULL ] ; } t404 = ( ( ( 1.0 -
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
] >= 623.15 ? 623.15 : X [ 193ULL ] ; } t350 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 ;
intrm_sf_mf_225 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 * -
0.2214565261064495 ) + t350 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
1.2002114337048222 ) + t350 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
6.9647057412840034 ) + t350 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; t378 =
intrm_sf_mf_225 - intrm_sf_mf_89 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 =
intrm_sf_mf_225 / ( t378 == 0.0 ? 1.0E-16 : t378 ) ; if ( X [ 197ULL ] <=
216.59999999999997 ) { intrm_sf_mf_225 = 216.59999999999997 ; } else {
intrm_sf_mf_225 = X [ 197ULL ] >= 623.15 ? 623.15 : X [ 197ULL ] ; } t378 =
intrm_sf_mf_225 * intrm_sf_mf_225 ; t350 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_225 * - 0.2214565261064495 ) + t378 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) + ( (
1479.6504774711011 + intrm_sf_mf_225 * 1.2002114337048222 ) + t378 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 ) + ( (
12825.281119789837 + intrm_sf_mf_225 * 6.9647057412840034 ) + t378 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 = t350 -
intrm_sf_mf_89 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 = t350 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) ;
if ( X [ 172ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 172ULL
] >= 1.0 ? 1.0 : X [ 172ULL ] ; } if ( X [ 171ULL ] <= 0.0 ) {
intrm_sf_mf_225 = 0.0 ; } else { intrm_sf_mf_225 = X [ 171ULL ] >= 1.0 ? 1.0
: X [ 171ULL ] ; } t350 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) -
intrm_sf_mf_225 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 461.523 ) +
intrm_sf_mf_225 * 4124.48151675695 ; if ( X [ 191ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 191ULL
] >= 1.0 ? 1.0 : X [ 191ULL ] ; } if ( X [ 190ULL ] <= 0.0 ) {
intrm_sf_mf_225 = 0.0 ; } else { intrm_sf_mf_225 = X [ 190ULL ] >= 1.0 ? 1.0
: X [ 190ULL ] ; } t378 = ( ( ( 1.0 -
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
: X [ 215ULL ] ; } if ( X [ 216ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 = X [ 216ULL
] >= 1.0 ? 1.0 : X [ 216ULL ] ; } intrm_sf_mf_234 = ( ( ( 1.0 -
intrm_sf_mf_225 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) *
296.802103844292 + intrm_sf_mf_225 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 *
4124.48151675695 ; t280 = X [ 213ULL ] * intrm_sf_mf_234 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 214ULL ]
/ ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) * ( X [ 217ULL ] / ( X [
213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ; t283 = X [ 214ULL ] / 1.01325
* ( X [ 218ULL ] / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ; t288
= ( X [ 189ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t286 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) ;
intrm_sf_mf_303 = t288 * t286 ; intrm_sf_mf_237 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t283 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 2.0 ;
intrm_sf_mf_403 = ( X [ 189ULL ] - 1.01325 ) * ( intrm_sf_mf_237 >= t286 ?
intrm_sf_mf_237 : t286 ) ; intrm_sf_mf_237 = ( X [ 189ULL ] - 1.01325 ) / (
t288 == 0.0 ? 1.0E-16 : t288 ) ; t289 = intrm_sf_mf_237 * intrm_sf_mf_237 *
3.0 - intrm_sf_mf_237 * intrm_sf_mf_237 * intrm_sf_mf_237 * 2.0 ; if ( X [
189ULL ] - 1.01325 <= 0.0 ) { intrm_sf_mf_237 = intrm_sf_mf_303 ; } else if (
X [ 189ULL ] - 1.01325 >= t288 ) { intrm_sf_mf_237 = intrm_sf_mf_403 ; } else
{ intrm_sf_mf_237 = ( 1.0 - t289 ) * intrm_sf_mf_303 + intrm_sf_mf_403 * t289
; } intrm_sf_mf_403 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t283 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = ( 1.01325 -
X [ 189ULL ] ) * ( intrm_sf_mf_403 >= t286 ? intrm_sf_mf_403 : t286 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = ( 1.01325 -
X [ 189ULL ] ) / ( t288 == 0.0 ? 1.0E-16 : t288 ) ; t283 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 2.0 ; if (
1.01325 - X [ 189ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 =
intrm_sf_mf_303 ; } else if ( 1.01325 - X [ 189ULL ] >= t288 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = ( 1.0 - t283
) * intrm_sf_mf_303 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t283 ; } if
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t283 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_225 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.00038614513167823636 ) * intrm_sf_mf_225 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ; t291 = t283
- intrm_sf_mf_234 ; intrm_sf_mf_225 = t283 / ( t291 == 0.0 ? 1.0E-16 : t291 )
; if ( X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 = X [ 26ULL
] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 25ULL
] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t283 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
4124.48151675695 ; if ( X [ 239ULL ] <= 216.59999999999997 ) { t286 =
216.59999999999997 ; } else { t286 = X [ 239ULL ] >= 623.15 ? 623.15 : X [
239ULL ] ; } t291 = t286 * t286 ; t288 = ( ( ( 1074.1165326382641 + t286 * -
0.2214565261064495 ) + t291 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
1479.6504774711011 + t286 * 1.2002114337048222 ) + t291 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) + ( (
12825.281119789837 + t286 * 6.9647057412840034 ) + t291 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t225 = t288
- t283 ; t286 = t288 / ( t225 == 0.0 ? 1.0E-16 : t225 ) ; if ( X [ 242ULL ]
<= 216.59999999999997 ) { t288 = 216.59999999999997 ; } else { t288 = X [
242ULL ] >= 623.15 ? 623.15 : X [ 242ULL ] ; } t225 = t288 * t288 ;
intrm_sf_mf_303 = ( ( ( 1074.1165326382641 + t288 * - 0.2214565261064495 ) +
t225 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
1479.6504774711011 + t288 * 1.2002114337048222 ) + t225 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 ) + ( (
12825.281119789837 + t288 * 6.9647057412840034 ) + t225 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ; t293 =
intrm_sf_mf_303 - t283 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 =
intrm_sf_mf_303 / ( t293 == 0.0 ? 1.0E-16 : t293 ) ; if ( X [ 237ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [
237ULL ] >= 1.0 ? 1.0 : X [ 237ULL ] ; } if ( X [ 236ULL ] <= 0.0 ) { t288 =
0.0 ; } else { t288 = X [ 236ULL ] >= 1.0 ? 1.0 : X [ 236ULL ] ; }
intrm_sf_mf_303 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) - t288 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
t288 * 4124.48151675695 ; if ( X [ 223ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 223ULL
] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) { t288 = 0.0 ; }
else { t288 = X [ 222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } intrm_sf_mf_237 =
( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 )
- t288 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
t288 * 4124.48151675695 ; if ( X [ 29ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = X [ 29ULL
] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) { t288 = 0.0 ; }
else { t288 = X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } intrm_sf_mf_403 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) -
t288 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 * 461.523 ) +
t288 * 4124.48151675695 ; if ( X [ 257ULL ] <= 216.59999999999997 ) { t289 =
216.59999999999997 ; } else { t289 = X [ 257ULL ] >= 623.15 ? 623.15 : X [
257ULL ] ; } t293 = t289 * t289 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = ( ( (
1074.1165326382641 + t289 * - 0.2214565261064495 ) + t293 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) - t288 ) + (
( 1479.6504774711011 + t289 * 1.2002114337048222 ) + t293 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
12825.281119789837 + t289 * 6.9647057412840034 ) + t293 * -
0.0070524868246844051 ) * t288 ; t294 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 -
intrm_sf_mf_403 ; t289 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / ( t294 ==
0.0 ? 1.0E-16 : t294 ) ; if ( X [ 259ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 259ULL
] >= 623.15 ? 623.15 : X [ 259ULL ] ; } t294 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t291 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.2214565261064495 ) + t294 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) - t288 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
1.2002114337048222 ) + t294 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
6.9647057412840034 ) + t294 * - 0.0070524868246844051 ) * t288 ; t295 = t291
- intrm_sf_mf_403 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 = t291 / (
t295 == 0.0 ? 1.0E-16 : t295 ) ; if ( X [ 35ULL ] <= 0.0 ) { t288 = 0.0 ; }
else { t288 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t291 = ( ( ( 1.0 - t288 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) *
296.802103844292 + t288 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
4124.48151675695 ; if ( X [ 283ULL ] <= 216.59999999999997 ) { t225 =
216.59999999999997 ; } else { t225 = X [ 283ULL ] >= 623.15 ? 623.15 : X [
283ULL ] ; } t295 = t225 * t225 ; t293 = ( ( ( 1074.1165326382641 + t225 * -
0.2214565261064495 ) + t295 * 0.00037212980109014541 ) * ( ( 1.0 - t288 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t225 * 1.2002114337048222 ) + t295 * -
0.00038614513167823636 ) * t288 ) + ( ( 12825.281119789837 + t225 *
6.9647057412840034 ) + t295 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t296 = t293
- t291 ; t225 = t293 / ( t296 == 0.0 ? 1.0E-16 : t296 ) ; if ( X [ 285ULL ]
<= 216.59999999999997 ) { t293 = 216.59999999999997 ; } else { t293 = X [
285ULL ] >= 623.15 ? 623.15 : X [ 285ULL ] ; } t296 = t293 * t293 ; t294 = (
( ( 1074.1165326382641 + t293 * - 0.2214565261064495 ) + t296 *
0.00037212980109014541 ) * ( ( 1.0 - t288 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t293 * 1.2002114337048222 ) + t296 * -
0.00038614513167823636 ) * t288 ) + ( ( 12825.281119789837 + t293 *
6.9647057412840034 ) + t296 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t297 = t294
- t291 ; t288 = t294 / ( t297 == 0.0 ? 1.0E-16 : t297 ) ; if ( X [ 274ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 274ULL
] >= 1.0 ? 1.0 : X [ 274ULL ] ; } if ( X [ 273ULL ] <= 0.0 ) { t293 = 0.0 ; }
else { t293 = X [ 273ULL ] >= 1.0 ? 1.0 : X [ 273ULL ] ; } t294 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) - t293 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
t293 * 4124.48151675695 ; if ( X [ 312ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
312ULL ] >= 1.0 ? 1.0 : X [ 312ULL ] ; } if ( X [ 313ULL ] <= 0.0 ) { t293 =
0.0 ; } else { t293 = X [ 313ULL ] >= 1.0 ? 1.0 : X [ 313ULL ] ; } t295 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
t293 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
t293 * 259.836612622973 ; t293 = ( X [ 316ULL ] * 0.07812500122070315 +
U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if ( X [ 40ULL ] <= 0.0 ) {
t296 = 0.0 ; } else { t296 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } if (
X [ 41ULL ] <= 0.0 ) { t297 = 0.0 ; } else { t297 = X [ 41ULL ] >= 1.0 ? 1.0
: X [ 41ULL ] ; } intrm_sf_mf_692 = ( ( ( 1.0 - t296 ) - t297 ) *
296.802103844292 + t296 * 461.523 ) + t297 * 259.836612622973 ; if ( X [
320ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 = X [ 320ULL
] >= 623.15 ? 623.15 : X [ 320ULL ] ; } t240 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 * -
0.2214565261064495 ) + t240 * 0.00037212980109014541 ) * ( ( 1.0 - t296 ) -
t297 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
1.2002114337048222 ) + t240 * - 0.00038614513167823636 ) * t296 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 * -
0.044484923911382625 ) + t240 * 0.00036936011832044979 ) * t297 ; t298 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 -
intrm_sf_mf_692 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 / ( t298 ==
0.0 ? 1.0E-16 : t298 ) ; if ( X [ 324ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 324ULL ]
>= 623.15 ? 623.15 : X [ 324ULL ] ; } t298 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; t240 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * -
0.2214565261064495 ) + t298 * 0.00037212980109014541 ) * ( ( 1.0 - t296 ) -
t297 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
1.2002114337048222 ) + t298 * - 0.00038614513167823636 ) * t296 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * -
0.044484923911382625 ) + t298 * 0.00036936011832044979 ) * t297 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 = t240 -
intrm_sf_mf_692 ; t296 = t240 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) ;
if ( X [ 299ULL ] <= 0.0 ) { t297 = 0.0 ; } else { t297 = X [ 299ULL ] >= 1.0
? 1.0 : X [ 299ULL ] ; } if ( X [ 298ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 298ULL
] >= 1.0 ? 1.0 : X [ 298ULL ] ; } t240 = ( ( ( 1.0 - t297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) *
296.802103844292 + t297 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
259.836612622973 ; if ( X [ 318ULL ] <= 0.0 ) { t297 = 0.0 ; } else { t297 =
X [ 318ULL ] >= 1.0 ? 1.0 : X [ 318ULL ] ; } if ( X [ 317ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = X [ 317ULL
] >= 1.0 ? 1.0 : X [ 317ULL ] ; } t298 = ( ( ( 1.0 - t297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) *
296.802103844292 + t297 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
259.836612622973 ; if ( X [ 316ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { t297 = 1.9634954084936209E-11 ; } else if ( X [
316ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { t297 =
0.0012566370614359179 ; } else { t297 = X [ 316ULL ] * 0.0019634954084936209
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = t297 /
0.0019634954084936209 ; if ( X [ 339ULL ] <= 0.0 ) { t297 = 0.0 ; } else {
t297 = X [ 339ULL ] >= 1.0 ? 1.0 : X [ 339ULL ] ; } if ( X [ 340ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 = X [
340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } intrm_sf_mf_837 = ( ( ( 1.0 - t297 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) *
296.802103844292 + t297 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 *
259.836612622973 ; t301 = X [ 337ULL ] * intrm_sf_mf_837 ; intrm_sf_mf_910 =
X [ 338ULL ] / ( t293 == 0.0 ? 1.0E-16 : t293 ) * ( X [ 341ULL ] / ( X [
337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; t303 = X [ 338ULL ] / 1.01325
* ( X [ 342ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; t308
= ( t293 + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t306 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) ;
intrm_sf_mf_906 = t308 * t306 ; intrm_sf_mf_840 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
intrm_sf_mf_910 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t303 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * 2.0 ;
intrm_sf_mf_1006 = ( t293 - 1.01325 ) * ( intrm_sf_mf_840 >= t306 ?
intrm_sf_mf_840 : t306 ) ; intrm_sf_mf_840 = ( t293 - 1.01325 ) / ( t308 ==
0.0 ? 1.0E-16 : t308 ) ; intrm_sf_mf_1007 = intrm_sf_mf_840 * intrm_sf_mf_840
* 3.0 - intrm_sf_mf_840 * intrm_sf_mf_840 * intrm_sf_mf_840 * 2.0 ; if ( t293
- 1.01325 <= 0.0 ) { intrm_sf_mf_840 = intrm_sf_mf_906 ; } else if ( t293 -
1.01325 >= t308 ) { intrm_sf_mf_840 = intrm_sf_mf_1006 ; } else {
intrm_sf_mf_840 = ( 1.0 - intrm_sf_mf_1007 ) * intrm_sf_mf_906 +
intrm_sf_mf_1006 * intrm_sf_mf_1007 ; } intrm_sf_mf_1006 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t303 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 *
intrm_sf_mf_910 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = ( 1.01325 -
t293 ) * ( intrm_sf_mf_1006 >= t306 ? intrm_sf_mf_1006 : t306 ) ;
intrm_sf_mf_910 = ( 1.01325 - t293 ) / ( t308 == 0.0 ? 1.0E-16 : t308 ) ;
t303 = intrm_sf_mf_910 * intrm_sf_mf_910 * 3.0 - intrm_sf_mf_910 *
intrm_sf_mf_910 * intrm_sf_mf_910 * 2.0 ; if ( 1.01325 - t293 <= 0.0 ) {
intrm_sf_mf_910 = intrm_sf_mf_906 ; } else if ( 1.01325 - t293 >= t308 ) {
intrm_sf_mf_910 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ; } else {
intrm_sf_mf_910 = ( 1.0 - t303 ) * intrm_sf_mf_906 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 * t303 ; } if
( t293 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 =
intrm_sf_mf_840 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 = t293 <
1.01325 ? intrm_sf_mf_910 : intrm_sf_mf_906 ; } if ( X [ 337ULL ] <=
216.59999999999997 ) { intrm_sf_mf_910 = 216.59999999999997 ; } else {
intrm_sf_mf_910 = X [ 337ULL ] >= 623.15 ? 623.15 : X [ 337ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
intrm_sf_mf_910 * intrm_sf_mf_910 ; t303 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_910 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00037212980109014541 ) * ( ( 1.0 - t297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) + ( (
1479.6504774711011 + intrm_sf_mf_910 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.00038614513167823636 ) * t297 ) + ( ( 900.63941224838356 + intrm_sf_mf_910
* - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ; t249 = t303
- intrm_sf_mf_837 ; t297 = t303 / ( t249 == 0.0 ? 1.0E-16 : t249 ) ; if ( X [
44ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 = X [ 44ULL
] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ] <= 0.0 ) { intrm_sf_mf_910
= 0.0 ; } else { intrm_sf_mf_910 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; }
t303 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) -
intrm_sf_mf_910 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 * 461.523 ) +
intrm_sf_mf_910 * 259.836612622973 ; if ( X [ 363ULL ] <= 216.59999999999997
) { t306 = 216.59999999999997 ; } else { t306 = X [ 363ULL ] >= 623.15 ?
623.15 : X [ 363ULL ] ; } t249 = t306 * t306 ; t308 = ( ( (
1074.1165326382641 + t306 * - 0.2214565261064495 ) + t249 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) -
intrm_sf_mf_910 ) + ( ( 1479.6504774711011 + t306 * 1.2002114337048222 ) +
t249 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) + ( (
900.63941224838356 + t306 * - 0.044484923911382625 ) + t249 *
0.00036936011832044979 ) * intrm_sf_mf_910 ; t312 = t308 - t303 ; t306 = t308
/ ( t312 == 0.0 ? 1.0E-16 : t312 ) ; if ( X [ 366ULL ] <= 216.59999999999997
) { t308 = 216.59999999999997 ; } else { t308 = X [ 366ULL ] >= 623.15 ?
623.15 : X [ 366ULL ] ; } t312 = t308 * t308 ; intrm_sf_mf_906 = ( ( (
1074.1165326382641 + t308 * - 0.2214565261064495 ) + t312 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) -
intrm_sf_mf_910 ) + ( ( 1479.6504774711011 + t308 * 1.2002114337048222 ) +
t312 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 ) + ( (
900.63941224838356 + t308 * - 0.044484923911382625 ) + t312 *
0.00036936011832044979 ) * intrm_sf_mf_910 ; t365 = intrm_sf_mf_906 - t303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 =
intrm_sf_mf_906 / ( t365 == 0.0 ? 1.0E-16 : t365 ) ; if ( X [ 361ULL ] <= 0.0
) { intrm_sf_mf_910 = 0.0 ; } else { intrm_sf_mf_910 = X [ 361ULL ] >= 1.0 ?
1.0 : X [ 361ULL ] ; } if ( X [ 360ULL ] <= 0.0 ) { t308 = 0.0 ; } else {
t308 = X [ 360ULL ] >= 1.0 ? 1.0 : X [ 360ULL ] ; } intrm_sf_mf_906 = ( ( (
1.0 - intrm_sf_mf_910 ) - t308 ) * 296.802103844292 + intrm_sf_mf_910 *
461.523 ) + t308 * 259.836612622973 ; if ( X [ 347ULL ] <= 0.0 ) {
intrm_sf_mf_910 = 0.0 ; } else { intrm_sf_mf_910 = X [ 347ULL ] >= 1.0 ? 1.0
: X [ 347ULL ] ; } if ( X [ 346ULL ] <= 0.0 ) { t308 = 0.0 ; } else { t308 =
X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } intrm_sf_mf_840 = ( ( ( 1.0 -
intrm_sf_mf_910 ) - t308 ) * 296.802103844292 + intrm_sf_mf_910 * 461.523 ) +
t308 * 259.836612622973 ; if ( X [ 47ULL ] <= 0.0 ) { intrm_sf_mf_910 = 0.0 ;
} else { intrm_sf_mf_910 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X
[ 46ULL ] <= 0.0 ) { t308 = 0.0 ; } else { t308 = X [ 46ULL ] >= 1.0 ? 1.0 :
X [ 46ULL ] ; } intrm_sf_mf_1006 = ( ( ( 1.0 - intrm_sf_mf_910 ) - t308 ) *
296.802103844292 + intrm_sf_mf_910 * 461.523 ) + t308 * 259.836612622973 ; if
( X [ 381ULL ] <= 216.59999999999997 ) { intrm_sf_mf_1007 =
216.59999999999997 ; } else { intrm_sf_mf_1007 = X [ 381ULL ] >= 623.15 ?
623.15 : X [ 381ULL ] ; } t365 = intrm_sf_mf_1007 * intrm_sf_mf_1007 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = ( ( (
1074.1165326382641 + intrm_sf_mf_1007 * - 0.2214565261064495 ) + t365 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_910 ) - t308 ) + ( (
1479.6504774711011 + intrm_sf_mf_1007 * 1.2002114337048222 ) + t365 * -
0.00038614513167823636 ) * intrm_sf_mf_910 ) + ( ( 900.63941224838356 +
intrm_sf_mf_1007 * - 0.044484923911382625 ) + t365 * 0.00036936011832044979 )
* t308 ; intrm_sf_mf_1183 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 -
intrm_sf_mf_1006 ; intrm_sf_mf_1007 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 / (
intrm_sf_mf_1183 == 0.0 ? 1.0E-16 : intrm_sf_mf_1183 ) ; if ( X [ 383ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [ 383ULL
] >= 623.15 ? 623.15 : X [ 383ULL ] ; } intrm_sf_mf_1183 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t249 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.2214565261064495 ) + intrm_sf_mf_1183 * 0.00037212980109014541 ) * ( ( 1.0
- intrm_sf_mf_910 ) - t308 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
1.2002114337048222 ) + intrm_sf_mf_1183 * - 0.00038614513167823636 ) *
intrm_sf_mf_910 ) + ( ( 900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * -
0.044484923911382625 ) + intrm_sf_mf_1183 * 0.00036936011832044979 ) * t308 ;
t315 = t249 - intrm_sf_mf_1006 ; intrm_sf_mf_910 = t249 / ( t315 == 0.0 ?
1.0E-16 : t315 ) ; if ( X [ 52ULL ] <= 0.0 ) { t308 = 0.0 ; } else { t308 = X
[ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } t249 = ( ( ( 1.0 - t308 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) *
296.802103844292 + t308 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 *
259.836612622973 ; if ( X [ 408ULL ] <= 216.59999999999997 ) { t312 =
216.59999999999997 ; } else { t312 = X [ 408ULL ] >= 623.15 ? 623.15 : X [
408ULL ] ; } t315 = t312 * t312 ; t365 = ( ( ( 1074.1165326382641 + t312 * -
0.2214565261064495 ) + t315 * 0.00037212980109014541 ) * ( ( 1.0 - t308 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t312 * 1.2002114337048222 ) + t315 * -
0.00038614513167823636 ) * t308 ) + ( ( 900.63941224838356 + t312 * -
0.044484923911382625 ) + t315 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t352 = t365
- t249 ; t312 = t365 / ( t352 == 0.0 ? 1.0E-16 : t352 ) ; if ( X [ 410ULL ]
<= 216.59999999999997 ) { t365 = 216.59999999999997 ; } else { t365 = X [
410ULL ] >= 623.15 ? 623.15 : X [ 410ULL ] ; } t352 = t365 * t365 ;
intrm_sf_mf_1183 = ( ( ( 1074.1165326382641 + t365 * - 0.2214565261064495 ) +
t352 * 0.00037212980109014541 ) * ( ( 1.0 - t308 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + t365 * 1.2002114337048222 ) + t352 * -
0.00038614513167823636 ) * t308 ) + ( ( 900.63941224838356 + t365 * -
0.044484923911382625 ) + t352 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t317 =
intrm_sf_mf_1183 - t249 ; t308 = intrm_sf_mf_1183 / ( t317 == 0.0 ? 1.0E-16 :
t317 ) ; if ( X [ 399ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
399ULL ] >= 1.0 ? 1.0 : X [ 399ULL ] ; } if ( X [ 398ULL ] <= 0.0 ) { t365 =
0.0 ; } else { t365 = X [ 398ULL ] >= 1.0 ? 1.0 : X [ 398ULL ] ; }
intrm_sf_mf_1183 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) - t365 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
t365 * 259.836612622973 ; if ( X [ 65ULL ] <= 0.0 ) { t365 = 0.0 ; } else {
t365 = X [ 65ULL ] >= 1.0 ? 1.0 : X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) {
t315 = 0.0 ; } else { t315 = X [ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t352
= ( ( ( 1.0 - t365 ) - t315 ) * 296.802103844292 + t365 * 461.523 ) + t315 *
4124.48151675695 ; if ( X [ 68ULL ] <= 0.0 ) { t365 = 0.0 ; } else { t365 = X
[ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ] ; } if ( X [ 69ULL ] <= 0.0 ) { t315 =
0.0 ; } else { t315 = X [ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; } t317 = ( ( (
1.0 - t365 ) - t315 ) * 296.802103844292 + t365 * 461.523 ) + t315 *
4124.48151675695 ; if ( X [ 481ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 = X [ 481ULL
] >= 623.15 ? 623.15 : X [ 481ULL ] ; } intrm_sf_mf_1439 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 * -
0.2214565261064495 ) + intrm_sf_mf_1439 * 0.00037212980109014541 ) * ( ( 1.0
- t365 ) - t315 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
1.2002114337048222 ) + intrm_sf_mf_1439 * - 0.00038614513167823636 ) * t365 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 *
6.9647057412840034 ) + intrm_sf_mf_1439 * - 0.0070524868246844051 ) * t315 ;
t318 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 - t317
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 / ( t318 ==
0.0 ? 1.0E-16 : t318 ) ; if ( X [ 486ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [ 486ULL
] >= 623.15 ? 623.15 : X [ 486ULL ] ; } t318 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ;
intrm_sf_mf_1439 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 * -
0.2214565261064495 ) + t318 * 0.00037212980109014541 ) * ( ( 1.0 - t365 ) -
t315 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
1.2002114337048222 ) + t318 * - 0.00038614513167823636 ) * t365 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
6.9647057412840034 ) + t318 * - 0.0070524868246844051 ) * t315 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
intrm_sf_mf_1439 - t317 ; t365 = intrm_sf_mf_1439 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) ;
if ( X [ 480ULL ] <= 0.0 ) { t315 = 0.0 ; } else { t315 = X [ 480ULL ] >= 1.0
? 1.0 : X [ 480ULL ] ; } if ( X [ 479ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [
479ULL ] >= 1.0 ? 1.0 : X [ 479ULL ] ; } intrm_sf_mf_1439 = ( ( ( 1.0 - t315
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) *
296.802103844292 + t315 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
4124.48151675695 ; if ( X [ 461ULL ] <= 0.0 ) { t315 = 0.0 ; } else { t315 =
X [ 461ULL ] >= 1.0 ? 1.0 : X [ 461ULL ] ; } if ( X [ 460ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = X [
460ULL ] >= 1.0 ? 1.0 : X [ 460ULL ] ; } t318 = ( ( ( 1.0 - t315 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) *
296.802103844292 + t315 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 *
4124.48151675695 ; t315 = ( X [ 478ULL ] * - 0.7999998 + U_idx_11 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t315 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
7.8539816339744857E-13 ; } else if ( t315 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = t315 *
7.8539816339744827E-5 ; } t315 =
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
4124.48151675695 ; t321 = X [ 499ULL ] * intrm_sf_mf_1546 ; intrm_sf_mf_1741
= X [ 500ULL ] / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) * ( X [
503ULL ] / ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ; t324 = X [
500ULL ] / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) * ( X [ 504ULL ]
/ ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ; t330 = ( X [ 63ULL ] +
X [ 478ULL ] ) / 2.0 * 0.0010000000000000009 ; t328 = ( 1.0 - t315 ) * ( 1.0
- t315 ) ; intrm_sf_mf_1637 = t330 * t328 ; intrm_sf_mf_1662 = ( t315 + 1.0 )
* ( 1.0 - t315 * intrm_sf_mf_1741 ) - ( 1.0 - t315 * t324 ) * t315 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( X [ 63ULL
] - X [ 478ULL ] ) * ( intrm_sf_mf_1662 >= t328 ? intrm_sf_mf_1662 : t328 ) ;
intrm_sf_mf_1662 = ( X [ 63ULL ] - X [ 478ULL ] ) / ( t330 == 0.0 ? 1.0E-16 :
t330 ) ; t331 = intrm_sf_mf_1662 * intrm_sf_mf_1662 * 3.0 - intrm_sf_mf_1662
* intrm_sf_mf_1662 * intrm_sf_mf_1662 * 2.0 ; if ( X [ 63ULL ] - X [ 478ULL ]
<= 0.0 ) { intrm_sf_mf_1662 = intrm_sf_mf_1637 ; } else if ( X [ 63ULL ] - X
[ 478ULL ] >= t330 ) { intrm_sf_mf_1662 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; } else {
intrm_sf_mf_1662 = ( 1.0 - t331 ) * intrm_sf_mf_1637 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 * t331 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( t315 +
1.0 ) * ( 1.0 - t315 * t324 ) - ( 1.0 - t315 * intrm_sf_mf_1741 ) * t315 *
2.0 ; t315 = ( X [ 478ULL ] - X [ 63ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 >= t328 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 : t328 ) ;
intrm_sf_mf_1741 = ( X [ 478ULL ] - X [ 63ULL ] ) / ( t330 == 0.0 ? 1.0E-16 :
t330 ) ; t324 = intrm_sf_mf_1741 * intrm_sf_mf_1741 * 3.0 - intrm_sf_mf_1741
* intrm_sf_mf_1741 * intrm_sf_mf_1741 * 2.0 ; if ( X [ 478ULL ] - X [ 63ULL ]
<= 0.0 ) { intrm_sf_mf_1741 = intrm_sf_mf_1637 ; } else if ( X [ 478ULL ] - X
[ 63ULL ] >= t330 ) { intrm_sf_mf_1741 = t315 ; } else { intrm_sf_mf_1741 = (
1.0 - t324 ) * intrm_sf_mf_1637 + t315 * t324 ; } if ( X [ 63ULL ] > X [
478ULL ] ) { t315 = intrm_sf_mf_1662 ; } else { t315 = X [ 63ULL ] < X [
478ULL ] ? intrm_sf_mf_1741 : intrm_sf_mf_1637 ; } if ( X [ 499ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1741 = 216.59999999999997 ; } else {
intrm_sf_mf_1741 = X [ 499ULL ] >= 623.15 ? 623.15 : X [ 499ULL ] ; } t332 =
intrm_sf_mf_1741 * intrm_sf_mf_1741 ; t324 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_1741 * - 0.2214565261064495 ) + t332 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) + ( (
1479.6504774711011 + intrm_sf_mf_1741 * 1.2002114337048222 ) + t332 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 ) + ( (
12825.281119789837 + intrm_sf_mf_1741 * 6.9647057412840034 ) + t332 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ; t333 = t324
- intrm_sf_mf_1546 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 = t324 / (
t333 == 0.0 ? 1.0E-16 : t333 ) ; if ( X [ 517ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = X [
517ULL ] >= 1.0 ? 1.0 : X [ 517ULL ] ; } if ( X [ 518ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 518ULL ] >= 1.0 ?
1.0 : X [ 518ULL ] ; } t324 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 ) -
intrm_sf_mf_1741 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 * 461.523 ) +
intrm_sf_mf_1741 * 259.836612622973 ; if ( X [ 530ULL ] <= 0.0 ) {
intrm_sf_mf_1741 = 0.0 ; } else { intrm_sf_mf_1741 = X [ 530ULL ] >= 1.0 ?
1.0 : X [ 530ULL ] ; } if ( X [ 529ULL ] <= 0.0 ) { t328 = 0.0 ; } else {
t328 = X [ 529ULL ] >= 1.0 ? 1.0 : X [ 529ULL ] ; } t330 = ( ( ( 1.0 -
intrm_sf_mf_1741 ) - t328 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 )
+ t328 * 259.836612622973 ; if ( X [ 72ULL ] <= 0.0 ) { intrm_sf_mf_1741 =
0.0 ; } else { intrm_sf_mf_1741 = X [ 72ULL ] >= 1.0 ? 1.0 : X [ 72ULL ] ; }
if ( X [ 71ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 71ULL ] >= 1.0 ?
1.0 : X [ 71ULL ] ; } intrm_sf_mf_1637 = ( ( ( 1.0 - intrm_sf_mf_1741 ) -
t328 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 *
259.836612622973 ; if ( X [ 75ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; }
else { intrm_sf_mf_1741 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [
74ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 74ULL ] >= 1.0 ? 1.0 : X
[ 74ULL ] ; } intrm_sf_mf_1662 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - t328 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 * 4124.48151675695 ;
if ( X [ 569ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else {
intrm_sf_mf_1741 = X [ 569ULL ] >= 1.0 ? 1.0 : X [ 569ULL ] ; } if ( X [
568ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 568ULL ] >= 1.0 ? 1.0 :
X [ 568ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( ( ( 1.0 -
intrm_sf_mf_1741 ) - t328 ) * 296.802103844292 + intrm_sf_mf_1741 * 461.523 )
+ t328 * 4124.48151675695 ; if ( X [ 464ULL ] <= 0.0 ) { intrm_sf_mf_1741 =
0.0 ; } else { intrm_sf_mf_1741 = X [ 464ULL ] >= 1.0 ? 1.0 : X [ 464ULL ] ;
} if ( X [ 463ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 463ULL ] >=
1.0 ? 1.0 : X [ 463ULL ] ; } t331 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - t328 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 * 4124.48151675695 ;
if ( X [ 508ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else {
intrm_sf_mf_1741 = X [ 508ULL ] >= 1.0 ? 1.0 : X [ 508ULL ] ; } if ( X [
507ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 507ULL ] >= 1.0 ? 1.0 :
X [ 507ULL ] ; } t332 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - t328 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 * 259.836612622973 ;
if ( X [ 522ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else {
intrm_sf_mf_1741 = X [ 522ULL ] >= 1.0 ? 1.0 : X [ 522ULL ] ; } if ( X [
521ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 521ULL ] >= 1.0 ? 1.0 :
X [ 521ULL ] ; } t333 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - t328 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 * 259.836612622973 ;
if ( X [ 548ULL ] <= 0.0 ) { intrm_sf_mf_1741 = 0.0 ; } else {
intrm_sf_mf_1741 = X [ 548ULL ] >= 1.0 ? 1.0 : X [ 548ULL ] ; } if ( X [
547ULL ] <= 0.0 ) { t328 = 0.0 ; } else { t328 = X [ 547ULL ] >= 1.0 ? 1.0 :
X [ 547ULL ] ; } intrm_sf_mf_1675 = ( ( ( 1.0 - intrm_sf_mf_1741 ) - t328 ) *
296.802103844292 + intrm_sf_mf_1741 * 461.523 ) + t328 * 4124.48151675695 ;
t201 [ 0ULL ] = X [ 89ULL ] ; tlu2_linear_linear_prelookup ( & cb_efOut .
mField0 [ 0ULL ] , & cb_efOut . mField1 [ 0ULL ] , & cb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t201 [ 0ULL ] , &
t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t5 = cb_efOut ; t201 [ 0ULL ] = X [ 90ULL ]
; tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0ULL ] , & db_efOut .
mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t201 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t27
= db_efOut ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , & t27
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = eb_efOut [ 0 ] ;
intrm_sf_mf_1741 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 91ULL ] ;
tlu2_linear_linear_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= fb_efOut ; tlu2_2d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t12 . mField0 [ 0ULL ] , &
t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = gb_efOut [ 0
] ; t328 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 98ULL ] ;
tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [ 0ULL ] , & hb_efOut .
mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t5
= hb_efOut ; tlu2_2d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = ib_efOut [ 0 ] ;
intrm_sf_mf_1743 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 100ULL ] ;
tlu2_linear_linear_prelookup ( & jb_efOut . mField0 [ 0ULL ] , & jb_efOut .
mField1 [ 0ULL ] , & jb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= jb_efOut ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t16 . mField0 [ 0ULL ] , &
t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = kb_efOut [ 0
] ; intrm_sf_mf_1744 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_linear_prelookup ( & lb_efOut . mField0 [ 0ULL ] , & lb_efOut .
mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= lb_efOut ; tlu2_2d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , &
t30 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = mb_efOut [ 0
] ; intrm_sf_mf_1745 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 109ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , &
t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = ob_efOut [ 0
] ; intrm_sf_mf_1746 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 134ULL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30
= pb_efOut ; t201 [ 0ULL ] = X [ 135ULL ] ; tlu2_linear_linear_prelookup ( &
qb_efOut . mField0 [ 0ULL ] , & qb_efOut . mField1 [ 0ULL ] , & qb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t201 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29 = qb_efOut ;
tlu2_2d_linear_linear_value ( & rb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [ 0ULL ] , &
t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = rb_efOut [ 0 ] ;
intrm_sf_mf_1747 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 150ULL ] ;
tlu2_linear_linear_prelookup ( & sb_efOut . mField0 [ 0ULL ] , & sb_efOut .
mField1 [ 0ULL ] , & sb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30
= sb_efOut ; tlu2_2d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = tb_efOut [ 0
] ; intrm_sf_mf_1775 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 151ULL ] ;
tlu2_linear_linear_prelookup ( & ub_efOut . mField0 [ 0ULL ] , & ub_efOut .
mField1 [ 0ULL ] , & ub_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= ub_efOut ; tlu2_2d_linear_linear_value ( & vb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , &
t28 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t32 [ 0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t202 [ 0 ] = vb_efOut [ 0
] ; intrm_sf_mf_1776 = t202 [ 0ULL ] ; t201 [ 0ULL ] = X [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & wb_efOut . mField0 [ 0ULL ] , & wb_efOut .
mField1 [ 0ULL ] , & wb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t201 [ 0ULL ] , & t32 [ 0ULL ] , & t33 [ 0ULL ] ) ; t29
= wb_efOut ; t201 [ 0ULL ] = X [ 14ULL ] ; tlu2_linear_linear_prelookup ( &
xb_efOut . mField0 [ 0ULL ] , & xb_efOut . mField1 [ 0ULL ] , & xb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t201 [
0ULL ] , & t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t30 = xb_efOut ;
tlu2_2d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t30 . mField0 [ 0ULL ] , & t30 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t32 [ 0ULL ] , &
t35 [ 0ULL ] , & t33 [ 0ULL ] ) ; t201 [ 0 ] = yb_efOut [ 0 ] ;
intrm_sf_mf_1777 = t201 [ 0ULL ] ; if ( U_idx_13 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 = 1.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 =
U_idx_13 <= 0.0 ? 0.0 : U_idx_13 ; } if ( X [ 176ULL ] <= 0.0 ) { U_idx_3 =
0.0 ; } else { U_idx_3 = X [ 176ULL ] >= 1.0 ? 1.0 : X [ 176ULL ] ; } if ( X
[ 175ULL ] <= 0.0 ) { U_idx_7 = 0.0 ; } else { U_idx_7 = X [ 175ULL ] >= 1.0
? 1.0 : X [ 175ULL ] ; } U_idx_11 = ( ( ( 1.0 - U_idx_3 ) - U_idx_7 ) *
296.802103844292 + U_idx_3 * 461.523 ) + U_idx_7 * 4124.48151675695 ; if ( X
[ 303ULL ] <= 0.0 ) { U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 303ULL ] >= 1.0
? 1.0 : X [ 303ULL ] ; } if ( X [ 302ULL ] <= 0.0 ) { U_idx_7 = 0.0 ; } else
{ U_idx_7 = X [ 302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } U_idx_13 = ( ( ( 1.0
- U_idx_3 ) - U_idx_7 ) * 296.802103844292 + U_idx_3 * 461.523 ) + U_idx_7 *
259.836612622973 ; t201 [ 0ULL ] = pmf_get_inf ( ) ; for ( t205 = 0ULL ; t205
< 42ULL ; t205 ++ ) { t206 = t205 / 42ULL ; U_idx_3 = t201 [ t206 > 0ULL ?
0ULL : t206 ] ; U_idx_7 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t205
] * 1.0E-5 ; t201 [ t206 > 0ULL ? 0ULL : t206 ] = U_idx_3 > U_idx_7 ? U_idx_7
: U_idx_3 ; } t202 [ 0ULL ] = pmf_get_inf ( ) ; for ( t205 = 0ULL ; t205 <
7ULL ; t205 ++ ) { t206 = t205 / 7ULL ; U_idx_3 = t202 [ t206 > 0ULL ? 0ULL :
t206 ] ; U_idx_7 = nonscalar1 [ t205 ] * 1.0E-5 ; t202 [ t206 > 0ULL ? 0ULL :
t206 ] = U_idx_3 > U_idx_7 ? U_idx_7 : U_idx_3 ; } t181 [ 0ULL ] = ( int32_T
) ( t201 [ 0ULL ] >= X [ 83ULL ] ) ; t181 [ 1ULL ] = ( int32_T ) ( t202 [
0ULL ] >= X [ 84ULL ] * X [ 86ULL ] ) ; t181 [ 2ULL ] = ( int32_T ) ( t404 *
293.15 / 1.01325 >= 0.0 ) ; t181 [ 3ULL ] = ( int32_T ) ( X [ 408ULL ] * t249
/ ( X [ 409ULL ] == 0.0 ? 1.0E-16 : X [ 409ULL ] ) >= 0.0 ) ; t181 [ 4ULL ] =
( int32_T ) ( X [ 410ULL ] * t249 / ( X [ 411ULL ] == 0.0 ? 1.0E-16 : X [
411ULL ] ) >= 0.0 ) ; t181 [ 5ULL ] = ( int32_T ) ( X [ 50ULL ] * t249 / ( X
[ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) >= 0.0 ) ; t181 [ 6ULL ] = (
int32_T ) ( X [ 31ULL ] <= 216.59999999999997 ) ; t181 [ 7ULL ] = ( int32_T )
( X [ 31ULL ] >= 623.15 ) ; t181 [ 8ULL ] = ( int32_T ) ( X [ 462ULL ] * t331
/ ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) >= 0.0 ) ; t181 [ 9ULL ] = (
int32_T ) ( X [ 62ULL ] * t352 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ]
) >= 0.0 ) ; t181 [ 10ULL ] = ( int32_T ) ( X [ 477ULL ] * intrm_sf_mf_1439 /
( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) >= 0.0 ) ; t181 [ 11ULL ] =
( int32_T ) ( X [ 459ULL ] * t318 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) >= 0.0 ) ; t181 [ 12ULL ] = ( int32_T ) ( X [ 481ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 * t317 >= 0.0
) ; t181 [ 13ULL ] = ( int32_T ) ( X [ 169ULL ] * t350 / ( X [ 170ULL ] ==
0.0 ? 1.0E-16 : X [ 170ULL ] ) >= 0.0 ) ; t181 [ 14ULL ] = ( int32_T ) ( X [
486ULL ] * t365 * t317 >= 0.0 ) ; t181 [ 15ULL ] = ( int32_T ) ( X [ 482ULL ]
* X [ 482ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M26 / ( t317 ==
0.0 ? 1.0E-16 : t317 ) / ( X [ 481ULL ] == 0.0 ? 1.0E-16 : X [ 481ULL ] ) >=
0.0 ) ; t365 = X [ 487ULL ] * X [ 487ULL ] * t365 / ( t317 == 0.0 ? 1.0E-16 :
t317 ) ; t181 [ 16ULL ] = ( int32_T ) ( t365 / ( X [ 486ULL ] == 0.0 ?
1.0E-16 : X [ 486ULL ] ) >= 0.0 ) ; t181 [ 17ULL ] = ( int32_T ) ( X [ 481ULL
] * t317 / ( X [ 482ULL ] == 0.0 ? 1.0E-16 : X [ 482ULL ] ) >= 0.0 ) ; t181 [
18ULL ] = ( int32_T ) ( X [ 486ULL ] * t317 / ( X [ 487ULL ] == 0.0 ? 1.0E-16
: X [ 487ULL ] ) >= 0.0 ) ; t181 [ 19ULL ] = ( int32_T ) ( X [ 66ULL ] * t317
/ ( X [ 67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) >= 0.0 ) ; t181 [ 20ULL ] =
( int32_T ) ( X [ 500ULL ] / ( t321 == 0.0 ? 1.0E-16 : t321 ) * 2.0 / ( t315
== 0.0 ? 1.0E-16 : t315 ) >= 0.0 ) ; t181 [ 21ULL ] = ( int32_T ) ( X [
500ULL ] * X [ 500ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu25 / (
intrm_sf_mf_1546 == 0.0 ? 1.0E-16 : intrm_sf_mf_1546 ) / ( X [ 499ULL ] ==
0.0 ? 1.0E-16 : X [ 499ULL ] ) >= 0.0 ) ; t181 [ 22ULL ] = ( int32_T ) ( X [
188ULL ] * t378 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) >= 0.0 ) ;
t181 [ 23ULL ] = ( int32_T ) ( X [ 503ULL ] * intrm_sf_mf_1546 / ( X [ 63ULL
] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) >= 0.0 ) ; t181 [ 24ULL ] = ( int32_T ) (
X [ 504ULL ] * intrm_sf_mf_1546 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [
478ULL ] ) >= 0.0 ) ; t181 [ 25ULL ] = ( int32_T ) ( t321 / ( X [ 500ULL ] ==
0.0 ? 1.0E-16 : X [ 500ULL ] ) >= 0.0 ) ; t181 [ 26ULL ] = ( int32_T ) ( X [
506ULL ] * t332 / 1.01325 >= 0.0 ) ; t181 [ 27ULL ] = ( int32_T ) ( t324 *
293.15 / 1.01325 >= 0.0 ) ; t181 [ 28ULL ] = ( int32_T ) ( X [ 520ULL ] *
t333 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) >= 0.0 ) ; t181 [ 29ULL
] = ( int32_T ) ( X [ 527ULL ] * t330 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) >= 0.0 ) ; t181 [ 30ULL ] = ( int32_T ) ( X [ 524ULL ] * t330 /
1.01325 >= 0.0 ) ; t181 [ 31ULL ] = ( int32_T ) ( X [ 526ULL ] * t330 /
1.01325 >= 0.0 ) ; t181 [ 32ULL ] = ( int32_T ) ( X [ 193ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 *
intrm_sf_mf_89 >= 0.0 ) ; t181 [ 33ULL ] = ( int32_T ) ( X [ 525ULL ] * t330
/ ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) >= 0.0 ) ; t181 [ 34ULL ] =
( int32_T ) ( X [ 397ULL ] * intrm_sf_mf_1183 / ( X [ 54ULL ] == 0.0 ?
1.0E-16 : X [ 54ULL ] ) >= 0.0 ) ; t181 [ 35ULL ] = ( int32_T ) ( X [ 70ULL ]
* intrm_sf_mf_1637 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) >= 0.0 )
; t181 [ 36ULL ] = ( int32_T ) ( X [ 546ULL ] * intrm_sf_mf_1675 / ( X [
37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) >= 0.0 ) ; t181 [ 37ULL ] = (
int32_T ) ( X [ 272ULL ] * t294 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL
] ) >= 0.0 ) ; t181 [ 38ULL ] = ( int32_T ) ( X [ 73ULL ] * intrm_sf_mf_1662
/ ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) >= 0.0 ) ; t181 [ 39ULL ] =
( int32_T ) ( X [ 197ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 *
intrm_sf_mf_89 >= 0.0 ) ; t181 [ 40ULL ] = ( int32_T ) ( X [ 566ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) >= 0.0 ) ; t181 [ 41ULL ] = ( int32_T ) (
X [ 563ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) >= 0.0 ) ; t181 [ 42ULL ] = (
int32_T ) ( X [ 565ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) >= 0.0 ) ; t181 [ 43ULL ] = (
int32_T ) ( X [ 564ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) >= 0.0 ) ; t181 [ 44ULL ] = ( int32_T ) (
X [ 77ULL ] > X [ 573ULL ] ) ; t181 [ 45ULL ] = ( int32_T ) ( X [ 77ULL ] < -
X [ 573ULL ] ) ; t181 [ 46ULL ] = ( int32_T ) ( X [ 85ULL ] > 0.0 ) ; t181 [
47ULL ] = ( int32_T ) ( X [ 84ULL ] > 0.0 ) ; t181 [ 48ULL ] = ( int32_T ) (
X [ 82ULL ] > 0.0 ) ; t181 [ 49ULL ] = ( int32_T ) ( X [ 83ULL ] >= 0.0 ) ;
t181 [ 50ULL ] = ( int32_T ) ( X [ 194ULL ] * X [ 194ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g0 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 193ULL ] == 0.0 ?
1.0E-16 : X [ 193ULL ] ) >= 0.0 ) ; t181 [ 51ULL ] = ( int32_T ) ( X [ 86ULL
] > 0.0 ) ; t181 [ 52ULL ] = ( int32_T ) ( - X [ 78ULL ] + - U_idx_1 < 500.0
) ; t181 [ 53ULL ] = ( int32_T ) ( X [ 79ULL ] > 0.0 ) ; t181 [ 54ULL ] = (
int32_T ) ( X [ 4ULL ] > 0.0 ) ; t181 [ 55ULL ] = ( int32_T ) (
intrm_sf_mf_1741 > 0.0 ) ; t181 [ 56ULL ] = ( int32_T ) ( X [ 90ULL ] >= 0.1
) ; t181 [ 57ULL ] = ( int32_T ) ( X [ 90ULL ] <= 500.0 ) ; t181 [ 58ULL ] =
( int32_T ) ( X [ 89ULL ] >= 268.4357 ) ; t181 [ 59ULL ] = ( int32_T ) ( X [
89ULL ] <= 393.15 ) ; t181 [ 60ULL ] = ( int32_T ) ( t328 > 0.0 ) ; t181 [
61ULL ] = ( int32_T ) ( X [ 198ULL ] * X [ 198ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_g1 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 197ULL ] == 0.0 ?
1.0E-16 : X [ 197ULL ] ) >= 0.0 ) ; t181 [ 62ULL ] = ( int32_T ) ( X [ 92ULL
] >= 0.1 ) ; t181 [ 63ULL ] = ( int32_T ) ( X [ 92ULL ] <= 500.0 ) ; t181 [
64ULL ] = ( int32_T ) ( X [ 91ULL ] >= 268.4357 ) ; t181 [ 65ULL ] = (
int32_T ) ( X [ 91ULL ] <= 393.15 ) ; t181 [ 66ULL ] = ( int32_T ) (
intrm_sf_mf_1743 > 0.0 ) ; t181 [ 67ULL ] = ( int32_T ) ( X [ 99ULL ] >= 0.1
) ; t181 [ 68ULL ] = ( int32_T ) ( X [ 99ULL ] <= 500.0 ) ; t181 [ 69ULL ] =
( int32_T ) ( X [ 98ULL ] >= 268.4357 ) ; t181 [ 70ULL ] = ( int32_T ) ( X [
98ULL ] <= 393.15 ) ; t181 [ 71ULL ] = ( int32_T ) ( intrm_sf_mf_1744 > 0.0 )
; t181 [ 72ULL ] = ( int32_T ) ( X [ 193ULL ] * intrm_sf_mf_89 / ( X [ 194ULL
] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) >= 0.0 ) ; t181 [ 73ULL ] = ( int32_T ) (
X [ 101ULL ] >= 0.1 ) ; t181 [ 74ULL ] = ( int32_T ) ( X [ 101ULL ] <= 500.0
) ; t181 [ 75ULL ] = ( int32_T ) ( X [ 100ULL ] >= 268.4357 ) ; t181 [ 76ULL
] = ( int32_T ) ( X [ 100ULL ] <= 393.15 ) ; t181 [ 77ULL ] = ( int32_T ) (
intrm_sf_mf_1745 > 0.0 ) ; t181 [ 78ULL ] = ( int32_T ) ( X [ 108ULL ] >= 0.1
) ; t181 [ 79ULL ] = ( int32_T ) ( X [ 108ULL ] <= 500.0 ) ; t181 [ 80ULL ] =
( int32_T ) ( X [ 107ULL ] >= 268.4357 ) ; t181 [ 81ULL ] = ( int32_T ) ( X [
107ULL ] <= 393.15 ) ; t181 [ 82ULL ] = ( int32_T ) ( intrm_sf_mf_1746 > 0.0
) ; t181 [ 83ULL ] = ( int32_T ) ( X [ 197ULL ] * intrm_sf_mf_89 / ( X [
198ULL ] == 0.0 ? 1.0E-16 : X [ 198ULL ] ) >= 0.0 ) ; t181 [ 84ULL ] = (
int32_T ) ( X [ 110ULL ] >= 0.1 ) ; t181 [ 85ULL ] = ( int32_T ) ( X [ 110ULL
] <= 500.0 ) ; t181 [ 86ULL ] = ( int32_T ) ( X [ 109ULL ] >= 268.4357 ) ;
t181 [ 87ULL ] = ( int32_T ) ( X [ 109ULL ] <= 393.15 ) ; t181 [ 88ULL ] = (
int32_T ) ( t274 > 0.0 ) ; t181 [ 89ULL ] = ( int32_T ) (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I >= 0.1 ) ; t181 [
90ULL ] = ( int32_T ) (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I <= 500.0 ) ; t181 [
91ULL ] = ( int32_T ) ( X [ 6ULL ] >= 268.4357 ) ; t181 [ 92ULL ] = ( int32_T
) ( X [ 6ULL ] <= 393.15 ) ; t181 [ 93ULL ] = ( int32_T ) (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_1 > 0.0 ) ;
t181 [ 94ULL ] = ( int32_T ) ( X [ 20ULL ] * intrm_sf_mf_89 / ( X [ 21ULL ]
== 0.0 ? 1.0E-16 : X [ 21ULL ] ) >= 0.0 ) ; t181 [ 95ULL ] = ( int32_T ) (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_indicator_2 > 0.0 ) ;
t181 [ 96ULL ] = ( int32_T ) ( X [ 117ULL ] >= 0.1 ) ; t181 [ 97ULL ] = (
int32_T ) ( X [ 117ULL ] <= 500.0 ) ; t181 [ 98ULL ] = ( int32_T ) ( X [
116ULL ] >= 268.4357 ) ; t181 [ 99ULL ] = ( int32_T ) ( X [ 116ULL ] <=
393.15 ) ; t181 [ 100ULL ] = ( int32_T ) ( t275 > 0.0 ) ; t181 [ 101ULL ] = (
int32_T ) ( Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I >= 0.1 )
; t181 [ 102ULL ] = ( int32_T ) (
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I <= 500.0 ) ; t181 [
103ULL ] = ( int32_T ) ( X [ 9ULL ] >= 268.4357 ) ; t181 [ 104ULL ] = (
int32_T ) ( X [ 9ULL ] <= 393.15 ) ; t181 [ 105ULL ] = ( int32_T ) ( X [
82ULL ] * X [ 85ULL ] <= 4.03416E-7 ) ; t181 [ 106ULL ] = ( int32_T ) (
Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_1 > 0.0 ) ;
t181 [ 107ULL ] = ( int32_T ) (
Electrical_Cooling_System_Pipe_Converter_pipe_model_indicator_2 > 0.0 ) ;
t181 [ 108ULL ] = ( int32_T ) ( t276 > 0.0 ) ; t181 [ 109ULL ] = ( int32_T )
( Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I >= 0.1 ) ; t181 [
110ULL ] = ( int32_T ) ( Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I
<= 500.0 ) ; t181 [ 111ULL ] = ( int32_T ) ( X [ 11ULL ] >= 268.4357 ) ; t181
[ 112ULL ] = ( int32_T ) ( X [ 11ULL ] <= 393.15 ) ; t181 [ 113ULL ] = (
int32_T ) ( Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_A >
0.0 ) ; t181 [ 114ULL ] = ( int32_T ) (
Electrical_Cooling_System_Pipe_Motor_pipe_model_indicator_pT_B > 0.0 ) ; t181
[ 115ULL ] = ( int32_T ) ( intrm_sf_mf_1747 > 0.0 ) ; t181 [ 116ULL ] = (
int32_T ) ( X [ 174ULL ] * U_idx_11 / 1.01325 >= 0.0 ) ; t181 [ 117ULL ] = (
int32_T ) ( X [ 135ULL ] >= 0.1 ) ; t181 [ 118ULL ] = ( int32_T ) ( X [
135ULL ] <= 500.0 ) ; t181 [ 119ULL ] = ( int32_T ) ( X [ 134ULL ] >=
268.4357 ) ; t181 [ 120ULL ] = ( int32_T ) ( X [ 134ULL ] <= 393.15 ) ; t181
[ 121ULL ] = ( int32_T ) ( X [ 142ULL ] >= 1.0 ) ; t181 [ 122ULL ] = (
int32_T ) ( X [ 142ULL ] <= pmf_get_inf ( ) ) ; t181 [ 123ULL ] = ( int32_T )
( X [ 14ULL ] >= 1.0E-5 ) ; t181 [ 124ULL ] = ( int32_T ) ( X [ 14ULL ] <=
pmf_get_inf ( ) ) ; t181 [ 125ULL ] = ( int32_T ) ( X [ 143ULL ] >= 1.0 ) ;
t181 [ 126ULL ] = ( int32_T ) ( X [ 214ULL ] / ( t280 == 0.0 ? 1.0E-16 : t280
) * 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) >= 0.0 ) ;
t181 [ 127ULL ] = ( int32_T ) ( X [ 143ULL ] <= pmf_get_inf ( ) ) ; t181 [
128ULL ] = ( int32_T ) ( X [ 141ULL ] <= pmf_get_inf ( ) ) ; t181 [ 129ULL ]
= ( int32_T ) ( X [ 141ULL ] >= 1.0 ) ; t181 [ 130ULL ] = ( int32_T ) ( X [
7ULL ] <= pmf_get_inf ( ) ) ; t181 [ 131ULL ] = ( int32_T ) ( X [ 7ULL ] >=
1.0 ) ; t181 [ 132ULL ] = ( int32_T ) ( intrm_sf_mf_1775 > 0.0 ) ; t181 [
133ULL ] = ( int32_T ) ( X [ 150ULL ] <= 393.15 ) ; t181 [ 134ULL ] = (
int32_T ) ( X [ 150ULL ] >= 268.4357 ) ; t181 [ 135ULL ] = ( int32_T ) (
intrm_sf_mf_1776 > 0.0 ) ; t181 [ 136ULL ] = ( int32_T ) ( X [ 151ULL ] <=
393.15 ) ; t181 [ 137ULL ] = ( int32_T ) ( X [ 214ULL ] * X [ 214ULL ] *
intrm_sf_mf_225 / ( intrm_sf_mf_234 == 0.0 ? 1.0E-16 : intrm_sf_mf_234 ) / (
X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) >= 0.0 ) ; t181 [ 138ULL ] = (
int32_T ) ( X [ 151ULL ] >= 268.4357 ) ; t181 [ 139ULL ] = ( int32_T ) (
intrm_sf_mf_1777 > 0.0 ) ; t181 [ 140ULL ] = ( int32_T ) ( X [ 14ULL ] <=
500.0 ) ; t181 [ 141ULL ] = ( int32_T ) ( X [ 14ULL ] >= 0.1 ) ; t181 [
142ULL ] = ( int32_T ) ( X [ 8ULL ] <= 393.15 ) ; t181 [ 143ULL ] = ( int32_T
) ( X [ 8ULL ] >= 268.4357 ) ; t181 [ 144ULL ] = ( int32_T ) (
Electrical_Cooling_System_Tank_Tank_level * 0.005 < 0.001 ) ; t181 [ 145ULL ]
= ( int32_T ) ( Electrical_Cooling_System_Tank_Tank_level > 0.01 ) ; t181 [
146ULL ] = ( int32_T ) ( X [ 10ULL ] > 0.0 ) ; t181 [ 147ULL ] = ( int32_T )
( X [ 16ULL ] > 0.0 ) ; t181 [ 148ULL ] = ( int32_T ) ( X [ 217ULL ] *
intrm_sf_mf_234 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) >= 0.0 ) ;
t181 [ 149ULL ] = ( int32_T ) ( X [ 12ULL ] > 0.0 ) ; t181 [ 150ULL ] = (
int32_T ) ( X [ 17ULL ] > 0.0 ) ; t181 [ 151ULL ] = ( int32_T ) ( ( 1.0 - X [
185ULL ] ) - X [ 186ULL ] >= 0.0 ) ; t181 [ 152ULL ] = ( int32_T ) ( X [
170ULL ] >= 0.01 ) ; t181 [ 153ULL ] = ( int32_T ) ( X [ 170ULL ] <=
pmf_get_inf ( ) ) ; t181 [ 154ULL ] = ( int32_T ) ( X [ 169ULL ] >=
216.59999999999997 ) ; t181 [ 155ULL ] = ( int32_T ) ( X [ 169ULL ] <= 623.15
) ; t181 [ 156ULL ] = ( int32_T ) ( X [ 189ULL ] >= 0.01 ) ; t181 [ 157ULL ]
= ( int32_T ) ( X [ 189ULL ] <= pmf_get_inf ( ) ) ; t181 [ 158ULL ] = (
int32_T ) ( X [ 188ULL ] >= 216.59999999999997 ) ; t181 [ 159ULL ] = (
int32_T ) ( X [ 218ULL ] * intrm_sf_mf_234 / 1.01325 >= 0.0 ) ; t181 [ 160ULL
] = ( int32_T ) ( X [ 188ULL ] <= 623.15 ) ; t181 [ 161ULL ] = ( int32_T ) (
X [ 21ULL ] >= 0.01 ) ; t181 [ 162ULL ] = ( int32_T ) ( X [ 21ULL ] <=
pmf_get_inf ( ) ) ; t181 [ 163ULL ] = ( int32_T ) ( X [ 20ULL ] >=
216.59999999999997 ) ; t181 [ 164ULL ] = ( int32_T ) ( X [ 20ULL ] <= 623.15
) ; t181 [ 165ULL ] = ( int32_T ) ( X [ 174ULL ] >= 216.59999999999997 ) ;
t181 [ 166ULL ] = ( int32_T ) ( X [ 174ULL ] <= 623.15 ) ; t181 [ 167ULL ] =
( int32_T ) ( X [ 235ULL ] >= 0.01 ) ; t181 [ 168ULL ] = ( int32_T ) ( X [
235ULL ] <= pmf_get_inf ( ) ) ; t181 [ 169ULL ] = ( int32_T ) ( X [ 234ULL ]
>= 216.59999999999997 ) ; t181 [ 170ULL ] = ( int32_T ) ( t280 / ( X [ 214ULL
] == 0.0 ? 1.0E-16 : X [ 214ULL ] ) >= 0.0 ) ; t181 [ 171ULL ] = ( int32_T )
( X [ 234ULL ] <= 623.15 ) ; t181 [ 172ULL ] = ( int32_T ) ( X [ 221ULL ] >=
0.01 ) ; t181 [ 173ULL ] = ( int32_T ) ( X [ 221ULL ] <= pmf_get_inf ( ) ) ;
t181 [ 174ULL ] = ( int32_T ) ( X [ 220ULL ] >= 216.59999999999997 ) ; t181 [
175ULL ] = ( int32_T ) ( X [ 220ULL ] <= 623.15 ) ; t181 [ 176ULL ] = (
int32_T ) ( X [ 30ULL ] >= 0.01 ) ; t181 [ 177ULL ] = ( int32_T ) ( X [ 30ULL
] <= pmf_get_inf ( ) ) ; t181 [ 178ULL ] = ( int32_T ) ( X [ 24ULL ] >=
216.59999999999997 ) ; t181 [ 179ULL ] = ( int32_T ) ( X [ 24ULL ] <= 623.15
) ; t181 [ 180ULL ] = ( int32_T ) ( X [ 32ULL ] >= 0.01 ) ; t181 [ 181ULL ] =
( int32_T ) ( X [ 234ULL ] * intrm_sf_mf_303 / ( X [ 235ULL ] == 0.0 ?
1.0E-16 : X [ 235ULL ] ) >= 0.0 ) ; t181 [ 182ULL ] = ( int32_T ) ( X [ 32ULL
] <= pmf_get_inf ( ) ) ; t181 [ 183ULL ] = ( int32_T ) ( X [ 27ULL ] >=
216.59999999999997 ) ; t181 [ 184ULL ] = ( int32_T ) ( X [ 27ULL ] <= 623.15
) ; t181 [ 185ULL ] = ( int32_T ) ( X [ 37ULL ] >= 0.01 ) ; t181 [ 186ULL ] =
( int32_T ) ( X [ 37ULL ] <= pmf_get_inf ( ) ) ; t181 [ 187ULL ] = ( int32_T
) ( X [ 272ULL ] >= 216.59999999999997 ) ; t181 [ 188ULL ] = ( int32_T ) ( X
[ 272ULL ] <= 623.15 ) ; t181 [ 189ULL ] = ( int32_T ) ( X [ 36ULL ] >= 0.01
) ; t181 [ 190ULL ] = ( int32_T ) ( X [ 36ULL ] <= pmf_get_inf ( ) ) ; t181 [
191ULL ] = ( int32_T ) ( X [ 33ULL ] >= 216.59999999999997 ) ; t181 [ 192ULL
] = ( int32_T ) ( X [ 220ULL ] * intrm_sf_mf_237 / ( X [ 221ULL ] == 0.0 ?
1.0E-16 : X [ 221ULL ] ) >= 0.0 ) ; t181 [ 193ULL ] = ( int32_T ) ( X [ 33ULL
] <= 623.15 ) ; t181 [ 194ULL ] = ( int32_T ) ( ( 1.0 - X [ 312ULL ] ) - X [
313ULL ] >= 0.0 ) ; t181 [ 195ULL ] = ( int32_T ) ( X [ 297ULL ] >= 0.01 ) ;
t181 [ 196ULL ] = ( int32_T ) ( X [ 297ULL ] <= pmf_get_inf ( ) ) ; t181 [
197ULL ] = ( int32_T ) ( X [ 296ULL ] >= 216.59999999999997 ) ; t181 [ 198ULL
] = ( int32_T ) ( X [ 296ULL ] <= 623.15 ) ; t181 [ 199ULL ] = ( int32_T ) (
t293 >= 0.01 ) ; t181 [ 200ULL ] = ( int32_T ) ( t293 <= pmf_get_inf ( ) ) ;
t181 [ 201ULL ] = ( int32_T ) ( X [ 315ULL ] >= 216.59999999999997 ) ; t181 [
202ULL ] = ( int32_T ) ( X [ 315ULL ] <= 623.15 ) ; t181 [ 203ULL ] = (
int32_T ) ( X [ 239ULL ] * t286 * t283 >= 0.0 ) ; t181 [ 204ULL ] = ( int32_T
) ( X [ 39ULL ] >= 0.01 ) ; t181 [ 205ULL ] = ( int32_T ) ( X [ 39ULL ] <=
pmf_get_inf ( ) ) ; t181 [ 206ULL ] = ( int32_T ) ( X [ 38ULL ] >=
216.59999999999997 ) ; t181 [ 207ULL ] = ( int32_T ) ( X [ 38ULL ] <= 623.15
) ; t181 [ 208ULL ] = ( int32_T ) ( X [ 301ULL ] >= 216.59999999999997 ) ;
t181 [ 209ULL ] = ( int32_T ) ( X [ 301ULL ] <= 623.15 ) ; t181 [ 210ULL ] =
( int32_T ) ( X [ 359ULL ] >= 0.01 ) ; t181 [ 211ULL ] = ( int32_T ) ( X [
359ULL ] <= pmf_get_inf ( ) ) ; t181 [ 212ULL ] = ( int32_T ) ( X [ 358ULL ]
>= 216.59999999999997 ) ; t181 [ 213ULL ] = ( int32_T ) ( X [ 358ULL ] <=
623.15 ) ; t181 [ 214ULL ] = ( int32_T ) ( ( ( 0.001 - X [ 87ULL ] *
Battery_System_DC_DC_Converter_p2_v * 0.001 ) + X [ 87ULL ] * X [ 87ULL ] *
0.00010037240412334386 ) / ( X [ 79ULL ] == 0.0 ? 1.0E-16 : X [ 79ULL ] ) *
1000.0 > 500.0 ) ; t181 [ 215ULL ] = ( int32_T ) ( X [ 242ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 * t283 >= 0.0
) ; t181 [ 216ULL ] = ( int32_T ) ( X [ 345ULL ] >= 0.01 ) ; t181 [ 217ULL ]
= ( int32_T ) ( X [ 345ULL ] <= pmf_get_inf ( ) ) ; t181 [ 218ULL ] = (
int32_T ) ( X [ 344ULL ] >= 216.59999999999997 ) ; t181 [ 219ULL ] = (
int32_T ) ( X [ 344ULL ] <= 623.15 ) ; t181 [ 220ULL ] = ( int32_T ) ( X [
48ULL ] >= 0.01 ) ; t181 [ 221ULL ] = ( int32_T ) ( X [ 48ULL ] <=
pmf_get_inf ( ) ) ; t181 [ 222ULL ] = ( int32_T ) ( X [ 42ULL ] >=
216.59999999999997 ) ; t181 [ 223ULL ] = ( int32_T ) ( X [ 42ULL ] <= 623.15
) ; t181 [ 224ULL ] = ( int32_T ) ( X [ 49ULL ] >= 0.01 ) ; t181 [ 225ULL ] =
( int32_T ) ( X [ 49ULL ] <= pmf_get_inf ( ) ) ; t181 [ 226ULL ] = ( int32_T
) ( X [ 240ULL ] * X [ 240ULL ] * t286 / ( t283 == 0.0 ? 1.0E-16 : t283 ) / (
X [ 239ULL ] == 0.0 ? 1.0E-16 : X [ 239ULL ] ) >= 0.0 ) ; t181 [ 227ULL ] = (
int32_T ) ( X [ 45ULL ] >= 216.59999999999997 ) ; t181 [ 228ULL ] = ( int32_T
) ( X [ 45ULL ] <= 623.15 ) ; t181 [ 229ULL ] = ( int32_T ) ( X [ 54ULL ] >=
0.01 ) ; t181 [ 230ULL ] = ( int32_T ) ( X [ 54ULL ] <= pmf_get_inf ( ) ) ;
t181 [ 231ULL ] = ( int32_T ) ( X [ 397ULL ] >= 216.59999999999997 ) ; t181 [
232ULL ] = ( int32_T ) ( X [ 397ULL ] <= 623.15 ) ; t181 [ 233ULL ] = (
int32_T ) ( X [ 53ULL ] >= 0.01 ) ; t181 [ 234ULL ] = ( int32_T ) ( X [ 53ULL
] <= pmf_get_inf ( ) ) ; t181 [ 235ULL ] = ( int32_T ) ( X [ 50ULL ] >=
216.59999999999997 ) ; t181 [ 236ULL ] = ( int32_T ) ( X [ 50ULL ] <= 623.15
) ; t181 [ 237ULL ] = ( int32_T ) ( X [ 243ULL ] * X [ 243ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi28 / ( t283 ==
0.0 ? 1.0E-16 : t283 ) / ( X [ 242ULL ] == 0.0 ? 1.0E-16 : X [ 242ULL ] ) >=
0.0 ) ; t181 [ 238ULL ] = ( int32_T ) ( X [ 55ULL ] >= 273.16 ) ; t181 [
239ULL ] = ( int32_T ) ( X [ 55ULL ] <= 363.16 ) ; t181 [ 240ULL ] = (
int32_T ) ( X [ 56ULL ] * 0.1 + 0.0001 > 1.0E-8 ) ; t181 [ 241ULL ] = (
int32_T ) ( X [ 431ULL ] >= 0.5 ) ; t181 [ 242ULL ] = ( int32_T ) ( X [
431ULL ] <= 500.0 ) ; t181 [ 243ULL ] = ( int32_T ) ( X [ 430ULL ] >= 273.16
) ; t181 [ 244ULL ] = ( int32_T ) ( X [ 430ULL ] <= 363.16 ) ; t181 [ 245ULL
] = ( int32_T ) ( X [ 433ULL ] >= 0.5 ) ; t181 [ 246ULL ] = ( int32_T ) ( X [
433ULL ] <= 500.0 ) ; t181 [ 247ULL ] = ( int32_T ) ( X [ 432ULL ] >= 273.16
) ; t181 [ 248ULL ] = ( int32_T ) ( X [ 239ULL ] * t283 / ( X [ 240ULL ] ==
0.0 ? 1.0E-16 : X [ 240ULL ] ) >= 0.0 ) ; t181 [ 249ULL ] = ( int32_T ) ( X [
432ULL ] <= 363.16 ) ; t181 [ 250ULL ] = ( int32_T ) ( X [ 423ULL ] >= 273.16
) ; t181 [ 251ULL ] = ( int32_T ) ( X [ 423ULL ] <= 363.16 ) ; t181 [ 252ULL
] = ( int32_T ) ( X [ 57ULL ] >= 0.5 ) ; t181 [ 253ULL ] = ( int32_T ) ( X [
57ULL ] <= 500.0 ) ; t181 [ 254ULL ] = ( int32_T ) ( X [ 58ULL ] >= 273.16 )
; t181 [ 255ULL ] = ( int32_T ) ( X [ 58ULL ] <= 363.16 ) ; t181 [ 256ULL ] =
( int32_T ) ( X [ 445ULL ] >= 0.5 ) ; t181 [ 257ULL ] = ( int32_T ) ( X [
445ULL ] <= 500.0 ) ; t181 [ 258ULL ] = ( int32_T ) ( X [ 444ULL ] >= 273.16
) ; t181 [ 259ULL ] = ( int32_T ) ( X [ 242ULL ] * t283 / ( X [ 243ULL ] ==
0.0 ? 1.0E-16 : X [ 243ULL ] ) >= 0.0 ) ; t181 [ 260ULL ] = ( int32_T ) ( X [
444ULL ] <= 363.16 ) ; t181 [ 261ULL ] = ( int32_T ) ( X [ 59ULL ] >= 0.5 ) ;
t181 [ 262ULL ] = ( int32_T ) ( X [ 59ULL ] <= 500.0 ) ; t181 [ 263ULL ] = (
int32_T ) ( X [ 60ULL ] >= 273.16 ) ; t181 [ 264ULL ] = ( int32_T ) ( X [
60ULL ] <= 363.16 ) ; t181 [ 265ULL ] = ( int32_T ) ( X [ 61ULL ] > 0.0 ) ;
t181 [ 266ULL ] = ( int32_T ) ( X [ 63ULL ] >= 0.01 ) ; t181 [ 267ULL ] = (
int32_T ) ( X [ 63ULL ] <= pmf_get_inf ( ) ) ; t181 [ 268ULL ] = ( int32_T )
( X [ 62ULL ] >= 216.59999999999997 ) ; t181 [ 269ULL ] = ( int32_T ) ( X [
62ULL ] <= 623.15 ) ; t181 [ 270ULL ] = ( int32_T ) ( X [ 24ULL ] * t283 / (
X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) >= 0.0 ) ; t181 [ 271ULL ] = (
int32_T ) ( X [ 478ULL ] >= 0.01 ) ; t181 [ 272ULL ] = ( int32_T ) ( X [
478ULL ] <= pmf_get_inf ( ) ) ; t181 [ 273ULL ] = ( int32_T ) ( X [ 477ULL ]
>= 216.59999999999997 ) ; t181 [ 274ULL ] = ( int32_T ) ( X [ 477ULL ] <=
623.15 ) ; t181 [ 275ULL ] = ( int32_T ) ( X [ 459ULL ] >= 216.59999999999997
) ; t181 [ 276ULL ] = ( int32_T ) ( X [ 459ULL ] <= 623.15 ) ; t181 [ 277ULL
] = ( int32_T ) ( X [ 67ULL ] >= 0.01 ) ; t181 [ 278ULL ] = ( int32_T ) ( X [
67ULL ] <= pmf_get_inf ( ) ) ; t181 [ 279ULL ] = ( int32_T ) ( X [ 66ULL ] >=
216.59999999999997 ) ; t181 [ 280ULL ] = ( int32_T ) ( X [ 66ULL ] <= 623.15
) ; t181 [ 281ULL ] = ( int32_T ) ( X [ 462ULL ] >= 216.59999999999997 ) ;
t181 [ 282ULL ] = ( int32_T ) ( X [ 462ULL ] <= 623.15 ) ; t181 [ 283ULL ] =
( int32_T ) ( X [ 31ULL ] > 0.0 ) ; t181 [ 284ULL ] = ( int32_T ) ( ( 1.0 - X
[ 517ULL ] ) - X [ 518ULL ] >= 0.0 ) ; t181 [ 285ULL ] = ( int32_T ) ( X [
506ULL ] >= 216.59999999999997 ) ; t181 [ 286ULL ] = ( int32_T ) ( X [ 506ULL
] <= 623.15 ) ; t181 [ 287ULL ] = ( int32_T ) ( X [ 520ULL ] >=
216.59999999999997 ) ; t181 [ 288ULL ] = ( int32_T ) ( X [ 520ULL ] <= 623.15
) ; t181 [ 289ULL ] = ( int32_T ) ( X [ 70ULL ] >= 216.59999999999997 ) ;
t181 [ 290ULL ] = ( int32_T ) ( X [ 70ULL ] <= 623.15 ) ; t181 [ 291ULL ] = (
int32_T ) ( X [ 73ULL ] >= 216.59999999999997 ) ; t181 [ 292ULL ] = ( int32_T
) ( X [ 73ULL ] <= 623.15 ) ; t181 [ 293ULL ] = ( int32_T ) ( X [ 546ULL ] >=
216.59999999999997 ) ; t181 [ 294ULL ] = ( int32_T ) ( X [ 546ULL ] <= 623.15
) ; t181 [ 295ULL ] = ( int32_T ) ( X [ 5ULL ] > 0.0 ) ; t181 [ 296ULL ] = (
int32_T ) ( Battery_System_DC_DC_Converter_p2_v > 0.0 ) ; t181 [ 297ULL ] = (
int32_T ) ( X [ 257ULL ] * t289 * intrm_sf_mf_403 >= 0.0 ) ; t181 [ 298ULL ]
= ( int32_T ) ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 *
intrm_sf_mf_403 >= 0.0 ) ; t181 [ 299ULL ] = ( int32_T ) ( X [ 156ULL ] >=
0.0 ) ; t181 [ 300ULL ] = ( int32_T ) ( X [ 258ULL ] * X [ 258ULL ] * t289 /
( intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 257ULL ] ==
0.0 ? 1.0E-16 : X [ 257ULL ] ) >= 0.0 ) ; t181 [ 301ULL ] = ( int32_T ) ( X [
260ULL ] * X [ 260ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi84 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 259ULL ] == 0.0
? 1.0E-16 : X [ 259ULL ] ) >= 0.0 ) ; t181 [ 302ULL ] = ( int32_T ) ( X [
257ULL ] * intrm_sf_mf_403 / ( X [ 258ULL ] == 0.0 ? 1.0E-16 : X [ 258ULL ] )
>= 0.0 ) ; t181 [ 303ULL ] = ( int32_T ) ( X [ 259ULL ] * intrm_sf_mf_403 / (
X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) >= 0.0 ) ; t181 [ 304ULL ] = (
int32_T ) ( X [ 27ULL ] * intrm_sf_mf_403 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 :
X [ 32ULL ] ) >= 0.0 ) ; t181 [ 305ULL ] = ( int32_T ) ( U_idx_6 <=
216.59999999999997 ) ; t181 [ 306ULL ] = ( int32_T ) ( U_idx_6 >= 623.15 ) ;
t181 [ 307ULL ] = ( int32_T ) ( X [ 283ULL ] * t225 * t291 >= 0.0 ) ; t181 [
308ULL ] = ( int32_T ) ( X [ 155ULL ] >= 0.0 ) ; t181 [ 309ULL ] = ( int32_T
) ( X [ 285ULL ] * t288 * t291 >= 0.0 ) ; t181 [ 310ULL ] = ( int32_T ) ( X [
284ULL ] * X [ 284ULL ] * t225 / ( t291 == 0.0 ? 1.0E-16 : t291 ) / ( X [
283ULL ] == 0.0 ? 1.0E-16 : X [ 283ULL ] ) >= 0.0 ) ; t181 [ 311ULL ] = (
int32_T ) ( X [ 286ULL ] * X [ 286ULL ] * t288 / ( t291 == 0.0 ? 1.0E-16 :
t291 ) / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ] ) >= 0.0 ) ; t181 [
312ULL ] = ( int32_T ) ( X [ 283ULL ] * t291 / ( X [ 284ULL ] == 0.0 ?
1.0E-16 : X [ 284ULL ] ) >= 0.0 ) ; t181 [ 313ULL ] = ( int32_T ) ( X [
285ULL ] * t291 / ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) >= 0.0 ) ;
t181 [ 314ULL ] = ( int32_T ) ( X [ 33ULL ] * t291 / ( X [ 36ULL ] == 0.0 ?
1.0E-16 : X [ 36ULL ] ) >= 0.0 ) ; t181 [ 315ULL ] = ( int32_T ) ( X [ 301ULL
] * U_idx_13 / 1.01325 >= 0.0 ) ; t181 [ 316ULL ] = ( int32_T ) ( t295 *
293.15 / 1.01325 >= 0.0 ) ; t181 [ 317ULL ] = ( int32_T ) ( X [ 296ULL ] *
t240 / ( X [ 297ULL ] == 0.0 ? 1.0E-16 : X [ 297ULL ] ) >= 0.0 ) ; t181 [
318ULL ] = ( int32_T ) ( X [ 315ULL ] * t298 / ( t293 == 0.0 ? 1.0E-16 : t293
) >= 0.0 ) ; t181 [ 319ULL ] = ( int32_T ) ( X [ 157ULL ] >= 0.0 ) ; t181 [
320ULL ] = ( int32_T ) ( X [ 320ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 *
intrm_sf_mf_692 >= 0.0 ) ; t181 [ 321ULL ] = ( int32_T ) ( X [ 324ULL ] *
t296 * intrm_sf_mf_692 >= 0.0 ) ; t181 [ 322ULL ] = ( int32_T ) ( X [ 321ULL
] * X [ 321ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M27 / (
intrm_sf_mf_692 == 0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [ 320ULL ] == 0.0
? 1.0E-16 : X [ 320ULL ] ) >= 0.0 ) ; t181 [ 323ULL ] = ( int32_T ) ( X [
325ULL ] * X [ 325ULL ] * t296 / ( intrm_sf_mf_692 == 0.0 ? 1.0E-16 :
intrm_sf_mf_692 ) / ( X [ 324ULL ] == 0.0 ? 1.0E-16 : X [ 324ULL ] ) >= 0.0 )
; t181 [ 324ULL ] = ( int32_T ) ( X [ 320ULL ] * intrm_sf_mf_692 / ( X [
321ULL ] == 0.0 ? 1.0E-16 : X [ 321ULL ] ) >= 0.0 ) ; t181 [ 325ULL ] = (
int32_T ) ( X [ 324ULL ] * intrm_sf_mf_692 / ( X [ 325ULL ] == 0.0 ? 1.0E-16
: X [ 325ULL ] ) >= 0.0 ) ; t181 [ 326ULL ] = ( int32_T ) ( X [ 38ULL ] *
intrm_sf_mf_692 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) >= 0.0 ) ;
t181 [ 327ULL ] = ( int32_T ) ( X [ 338ULL ] / ( t301 == 0.0 ? 1.0E-16 : t301
) * 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu9 ) >= 0.0 ) ;
t181 [ 328ULL ] = ( int32_T ) ( X [ 167ULL ] > X [ 165ULL ] + 0.8 ) ; t181 [
329ULL ] = ( int32_T ) ( X [ 338ULL ] * X [ 338ULL ] * t297 / (
intrm_sf_mf_837 == 0.0 ? 1.0E-16 : intrm_sf_mf_837 ) / ( X [ 337ULL ] == 0.0
? 1.0E-16 : X [ 337ULL ] ) >= 0.0 ) ; t181 [ 330ULL ] = ( int32_T ) ( X [
341ULL ] * intrm_sf_mf_837 / ( t293 == 0.0 ? 1.0E-16 : t293 ) >= 0.0 ) ; t181
[ 331ULL ] = ( int32_T ) ( X [ 342ULL ] * intrm_sf_mf_837 / 1.01325 >= 0.0 )
; t181 [ 332ULL ] = ( int32_T ) ( t301 / ( X [ 338ULL ] == 0.0 ? 1.0E-16 : X
[ 338ULL ] ) >= 0.0 ) ; t181 [ 333ULL ] = ( int32_T ) ( X [ 358ULL ] *
intrm_sf_mf_906 / ( X [ 359ULL ] == 0.0 ? 1.0E-16 : X [ 359ULL ] ) >= 0.0 ) ;
t181 [ 334ULL ] = ( int32_T ) ( X [ 344ULL ] * intrm_sf_mf_840 / ( X [ 345ULL
] == 0.0 ? 1.0E-16 : X [ 345ULL ] ) >= 0.0 ) ; t181 [ 335ULL ] = ( int32_T )
( X [ 363ULL ] * t306 * t303 >= 0.0 ) ; t181 [ 336ULL ] = ( int32_T ) ( X [
366ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 *
t303 >= 0.0 ) ; t181 [ 337ULL ] = ( int32_T ) ( X [ 364ULL ] * X [ 364ULL ] *
t306 / ( t303 == 0.0 ? 1.0E-16 : t303 ) / ( X [ 363ULL ] == 0.0 ? 1.0E-16 : X
[ 363ULL ] ) >= 0.0 ) ; t181 [ 338ULL ] = ( int32_T ) ( X [ 367ULL ] * X [
367ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_28 / (
t303 == 0.0 ? 1.0E-16 : t303 ) / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL
] ) >= 0.0 ) ; t181 [ 339ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Environme5 == 1.0 ) ;
t181 [ 340ULL ] = ( int32_T ) ( X [ 363ULL ] * t303 / ( X [ 364ULL ] == 0.0 ?
1.0E-16 : X [ 364ULL ] ) >= 0.0 ) ; t181 [ 341ULL ] = ( int32_T ) ( X [
366ULL ] * t303 / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) >= 0.0 ) ;
t181 [ 342ULL ] = ( int32_T ) ( X [ 42ULL ] * t303 / ( X [ 48ULL ] == 0.0 ?
1.0E-16 : X [ 48ULL ] ) >= 0.0 ) ; t181 [ 343ULL ] = ( int32_T ) ( X [ 381ULL
] * intrm_sf_mf_1007 * intrm_sf_mf_1006 >= 0.0 ) ; t181 [ 344ULL ] = (
int32_T ) ( X [ 383ULL ] * intrm_sf_mf_910 * intrm_sf_mf_1006 >= 0.0 ) ; t181
[ 345ULL ] = ( int32_T ) ( X [ 382ULL ] * X [ 382ULL ] * intrm_sf_mf_1007 / (
intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) >= 0.0 ) ; t181 [ 346ULL ] = ( int32_T ) ( X [
384ULL ] * X [ 384ULL ] * intrm_sf_mf_910 / ( intrm_sf_mf_1006 == 0.0 ?
1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ]
) >= 0.0 ) ; t181 [ 347ULL ] = ( int32_T ) ( X [ 381ULL ] * intrm_sf_mf_1006
/ ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) >= 0.0 ) ; t181 [ 348ULL ]
= ( int32_T ) ( X [ 383ULL ] * intrm_sf_mf_1006 / ( X [ 384ULL ] == 0.0 ?
1.0E-16 : X [ 384ULL ] ) >= 0.0 ) ; t181 [ 349ULL ] = ( int32_T ) ( X [ 45ULL
] * intrm_sf_mf_1006 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) >= 0.0
) ; t181 [ 350ULL ] = ( int32_T ) ( U_idx_9 <= 216.59999999999997 ) ; t181 [
351ULL ] = ( int32_T ) ( U_idx_9 >= 623.15 ) ; t181 [ 352ULL ] = ( int32_T )
( X [ 408ULL ] * t312 * t249 >= 0.0 ) ; t181 [ 353ULL ] = ( int32_T ) ( X [
410ULL ] * t308 * t249 >= 0.0 ) ; t181 [ 354ULL ] = ( int32_T ) ( X [ 409ULL
] * X [ 409ULL ] * t312 / ( t249 == 0.0 ? 1.0E-16 : t249 ) / ( X [ 408ULL ]
== 0.0 ? 1.0E-16 : X [ 408ULL ] ) >= 0.0 ) ; t181 [ 355ULL ] = ( int32_T ) (
X [ 411ULL ] * X [ 411ULL ] * t308 / ( t249 == 0.0 ? 1.0E-16 : t249 ) / ( X [
410ULL ] == 0.0 ? 1.0E-16 : X [ 410ULL ] ) >= 0.0 ) ; for ( b = 0 ; b < 356 ;
b ++ ) { out . mX [ b ] = t181 [ b ] ; } ( void ) LC ; ( void ) t527 ; return
0 ; }

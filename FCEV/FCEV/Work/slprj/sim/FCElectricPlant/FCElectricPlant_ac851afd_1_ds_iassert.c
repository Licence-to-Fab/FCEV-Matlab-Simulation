#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_iassert.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_iassert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t83 , NeDsMethodOutput * t84 ) { ETTS0 c_efOut ;
ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0 k_efOut ;
ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t0 ;
ETTS0 t8 ; ETTS0 u_efOut ; ETTS0 w_efOut ; PmIntVector out ; real_T X [ 575 ]
; real_T b_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T n_efOut
[ 1 ] ; real_T p_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T t57 [ 1 ] ;
real_T t_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_p_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi96 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_38 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_96 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip38 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T17 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant24 ; real_T
t82_idx_0 ; size_t t13 [ 1 ] ; size_t t14 [ 1 ] ; int32_T b ; for ( b = 0 ; b
< 575 ; b ++ ) { X [ b ] = t83 -> mX . mX [ b ] ; } out = t84 -> mIASSERT ;
t57 [ 0ULL ] = X [ 20ULL ] ; t13 [ 0 ] = 52ULL ; t14 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t8 . mField0 [ 0ULL ] ,
& t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 , &
t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_p_ = exp (
pmf_log ( X [ 21ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 24ULL ]
; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi40 = exp (
pmf_log ( X [ 30ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 27ULL ]
; tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi96 = exp (
pmf_log ( X [ 32ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 33ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_38 = exp (
pmf_log ( X [ 36ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 38ULL ]
; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t0
= i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t0 . mField0
[ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M40 = exp (
pmf_log ( X [ 39ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 42ULL ]
; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= k_efOut ; tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_40 = exp (
pmf_log ( X [ 48ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 45ULL ]
; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = n_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_96 = exp (
pmf_log ( X [ 49ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 50ULL ]
; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = p_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip38 = exp (
pmf_log ( X [ 53ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 62ULL ]
; tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = r_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T17 = exp (
pmf_log ( X [ 63ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 66ULL ]
; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t0
= s_efOut ; tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t0 . mField0
[ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = t_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M39 = exp (
pmf_log ( X [ 67ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 70ULL ]
; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8
= u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t8 . mField0
[ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = v_efOut [ 0 ] ;
t82_idx_0 = exp ( pmf_log ( X [ 54ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [
0ULL ] = X [ 73ULL ] ; tlu2_linear_linear_prelookup ( & w_efOut . mField0 [
0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t57 [ 0ULL ] , & t13 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t8 = w_efOut ; tlu2_1d_linear_linear_value ( & x_efOut [
0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t13 [ 0ULL ] , & t14 [ 0ULL ] )
; t57 [ 0 ] = x_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant24 = exp (
pmf_log ( X [ 37ULL ] * 100000.0 ) - t57 [ 0ULL ] ) ; out . mX [ 0 ] = (
int32_T ) ( X [ 23ULL ] <= 1.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X [ 200ULL
] <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_p_ ) ; out
. mX [ 2 ] = ( int32_T ) ( X [ 200ULL ] <= 1.0 ) ; out . mX [ 3 ] = ( int32_T
) ( X [ 22ULL ] <= 1.0 ) ; out . mX [ 4 ] = ( int32_T ) ( ( 1.0 - X [ 22ULL ]
) - X [ 23ULL ] >= 0.0 ) ; out . mX [ 5 ] = ( int32_T ) ( X [ 25ULL ] <= 1.0
) ; out . mX [ 6 ] = ( int32_T ) ( X [ 225ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi40 ) ; out . mX [
7 ] = ( int32_T ) ( X [ 225ULL ] <= 1.0 ) ; out . mX [ 8 ] = ( int32_T ) ( X
[ 26ULL ] <= 1.0 ) ; out . mX [ 9 ] = ( int32_T ) ( ( 1.0 - X [ 26ULL ] ) - X
[ 25ULL ] >= 0.0 ) ; out . mX [ 10 ] = ( int32_T ) ( X [ 28ULL ] <= 1.0 ) ;
out . mX [ 11 ] = ( int32_T ) ( X [ 230ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi96 ) ; out . mX [
12 ] = ( int32_T ) ( X [ 230ULL ] <= 1.0 ) ; out . mX [ 13 ] = ( int32_T ) (
X [ 29ULL ] <= 1.0 ) ; out . mX [ 14 ] = ( int32_T ) ( ( 1.0 - X [ 29ULL ] )
- X [ 28ULL ] >= 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X [ 34ULL ] <= 1.0 )
; out . mX [ 16 ] = ( int32_T ) ( X [ 277ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_38 ) ; out . mX
[ 17 ] = ( int32_T ) ( X [ 277ULL ] <= 1.0 ) ; out . mX [ 18 ] = ( int32_T )
( X [ 35ULL ] <= 1.0 ) ; out . mX [ 19 ] = ( int32_T ) ( ( 1.0 - X [ 35ULL ]
) - X [ 34ULL ] >= 0.0 ) ; out . mX [ 20 ] = ( int32_T ) ( X [ 41ULL ] <= 1.0
) ; out . mX [ 21 ] = ( int32_T ) ( X [ 327ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M40 ) ; out . mX
[ 22 ] = ( int32_T ) ( X [ 327ULL ] <= 1.0 ) ; out . mX [ 23 ] = ( int32_T )
( X [ 40ULL ] <= 1.0 ) ; out . mX [ 24 ] = ( int32_T ) ( ( 1.0 - X [ 40ULL ]
) - X [ 41ULL ] >= 0.0 ) ; out . mX [ 25 ] = ( int32_T ) ( X [ 43ULL ] <= 1.0
) ; out . mX [ 26 ] = ( int32_T ) ( X [ 349ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_40 ) ; out . mX [
27 ] = ( int32_T ) ( X [ 349ULL ] <= 1.0 ) ; out . mX [ 28 ] = ( int32_T ) (
X [ 44ULL ] <= 1.0 ) ; out . mX [ 29 ] = ( int32_T ) ( ( 1.0 - X [ 44ULL ] )
- X [ 43ULL ] >= 0.0 ) ; out . mX [ 30 ] = ( int32_T ) ( X [ 46ULL ] <= 1.0 )
; out . mX [ 31 ] = ( int32_T ) ( X [ 354ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_96 ) ; out . mX [
32 ] = ( int32_T ) ( X [ 354ULL ] <= 1.0 ) ; out . mX [ 33 ] = ( int32_T ) (
X [ 47ULL ] <= 1.0 ) ; out . mX [ 34 ] = ( int32_T ) ( ( 1.0 - X [ 47ULL ] )
- X [ 46ULL ] >= 0.0 ) ; out . mX [ 35 ] = ( int32_T ) ( X [ 51ULL ] <= 1.0 )
; out . mX [ 36 ] = ( int32_T ) ( X [ 402ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip38 ) ; out . mX
[ 37 ] = ( int32_T ) ( X [ 402ULL ] <= 1.0 ) ; out . mX [ 38 ] = ( int32_T )
( X [ 52ULL ] <= 1.0 ) ; out . mX [ 39 ] = ( int32_T ) ( ( 1.0 - X [ 52ULL ]
) - X [ 51ULL ] >= 0.0 ) ; out . mX [ 40 ] = ( int32_T ) ( X [ 64ULL ] <= 1.0
) ; out . mX [ 41 ] = ( int32_T ) ( X [ 466ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T17 ) ; out . mX
[ 42 ] = ( int32_T ) ( X [ 466ULL ] <= 1.0 ) ; out . mX [ 43 ] = ( int32_T )
( X [ 65ULL ] <= 1.0 ) ; out . mX [ 44 ] = ( int32_T ) ( ( 1.0 - X [ 65ULL ]
) - X [ 64ULL ] >= 0.0 ) ; out . mX [ 45 ] = ( int32_T ) ( X [ 69ULL ] <= 1.0
) ; out . mX [ 46 ] = ( int32_T ) ( X [ 489ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M39 ) ; out . mX
[ 47 ] = ( int32_T ) ( X [ 489ULL ] <= 1.0 ) ; out . mX [ 48 ] = ( int32_T )
( X [ 68ULL ] <= 1.0 ) ; out . mX [ 49 ] = ( int32_T ) ( ( 1.0 - X [ 68ULL ]
) - X [ 69ULL ] >= 0.0 ) ; out . mX [ 50 ] = ( int32_T ) ( X [ 71ULL ] <= 1.0
) ; out . mX [ 51 ] = ( int32_T ) ( X [ 536ULL ] <= t82_idx_0 ) ; out . mX [
52 ] = ( int32_T ) ( X [ 536ULL ] <= 1.0 ) ; out . mX [ 53 ] = ( int32_T ) (
X [ 72ULL ] <= 1.0 ) ; out . mX [ 54 ] = ( int32_T ) ( ( 1.0 - X [ 72ULL ] )
- X [ 71ULL ] >= 0.0 ) ; out . mX [ 55 ] = ( int32_T ) ( X [ 74ULL ] <= 1.0 )
; out . mX [ 56 ] = ( int32_T ) ( X [ 550ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant24 ) ; out . mX
[ 57 ] = ( int32_T ) ( X [ 550ULL ] <= 1.0 ) ; out . mX [ 58 ] = ( int32_T )
( X [ 75ULL ] <= 1.0 ) ; out . mX [ 59 ] = ( int32_T ) ( ( 1.0 - X [ 75ULL ]
) - X [ 74ULL ] >= 0.0 ) ; ( void ) LC ; ( void ) t84 ; return 0 ; }

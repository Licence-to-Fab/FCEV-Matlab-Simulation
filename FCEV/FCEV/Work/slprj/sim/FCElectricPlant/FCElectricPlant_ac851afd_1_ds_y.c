#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_y.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t90 , NeDsMethodOutput * t91 ) { ETTS0 b_efOut ; ETTS0
e_efOut ; ETTS0 efOut ; ETTS0 f_efOut ; ETTS0 h_efOut ; ETTS0 i_efOut ; ETTS0
k_efOut ; ETTS0 l_efOut ; ETTS0 t4 ; ETTS0 t5 ; PmRealVector out ; real_T X [
575 ] ; real_T c_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T g_efOut [ 1 ] ;
real_T j_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T t38 [ 1 ] ; real_T
Battery_System_Sensor_VI1_Voltage_Sensor2_V ; real_T U_idx_0 ; real_T U_idx_2
; real_T t51_idx_0 ; real_T t74 ; real_T t75 ; real_T t77 ; real_T t81 ;
size_t t10 [ 1 ] ; size_t t12 [ 1 ] ; size_t t9 [ 1 ] ; int32_T b ; U_idx_0 =
t90 -> mU . mX [ 0 ] ; U_idx_2 = t90 -> mU . mX [ 2 ] ; for ( b = 0 ; b < 575
; b ++ ) { X [ b ] = t90 -> mX . mX [ b ] ; } out = t91 -> mY ;
Battery_System_Sensor_VI1_Voltage_Sensor2_V = X [ 87ULL ] * 0.1 + 650.0 ; t38
[ 0ULL ] = X [ 89ULL ] ; t9 [ 0 ] = 20ULL ; t10 [ 0 ] = 1ULL ;
tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t38 [ 0ULL ] , & t9 [ 0ULL ] , & t10 [ 0ULL ] ) ; t4 =
efOut ; t38 [ 0ULL ] = X [ 90ULL ] ; t12 [ 0 ] = 19ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t38 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t9 [ 0ULL ] , &
t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t51_idx_0 = c_efOut [ 0 ] ; t74 = t51_idx_0
; tlu2_2d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ]
, & t4 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL
] , & t10 [ 0ULL ] ) ; t51_idx_0 = d_efOut [ 0 ] ; t75 = t51_idx_0 ; t38 [
0ULL ] = X [ 98ULL ] ; tlu2_linear_nearest_prelookup ( & e_efOut . mField0 [
0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t38 [ 0ULL ] , & t9 [ 0ULL ] , &
t10 [ 0ULL ] ) ; t4 = e_efOut ; t38 [ 0ULL ] = X [ 99ULL ] ;
tlu2_linear_nearest_prelookup ( & f_efOut . mField0 [ 0ULL ] , & f_efOut .
mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t38 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5 =
f_efOut ; tlu2_2d_linear_nearest_value ( & g_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , &
t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t51_idx_0 = g_efOut [ 0 ] ; t77 = t51_idx_0
; t38 [ 0ULL ] = X [ 107ULL ] ; tlu2_linear_nearest_prelookup ( & h_efOut .
mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t38 [ 0ULL ] , & t9 [
0ULL ] , & t10 [ 0ULL ] ) ; t4 = h_efOut ; t38 [ 0ULL ] = X [ 108ULL ] ;
tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t38 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5 =
i_efOut ; tlu2_2d_linear_nearest_value ( & j_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , &
t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t51_idx_0 = j_efOut [ 0 ] ; t38 [ 0ULL ] =
X [ 116ULL ] ; tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] ,
& k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t38 [ 0ULL ] , & t9 [ 0ULL ] , &
t10 [ 0ULL ] ) ; t4 = k_efOut ; t38 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_nearest_prelookup ( & l_efOut . mField0 [ 0ULL ] , & l_efOut .
mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t38 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5 =
l_efOut ; tlu2_2d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , &
t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t38 [ 0 ] = m_efOut [ 0 ] ; t81 = - t38 [
0ULL ] ; out . mX [ 0 ] = X [ 81ULL ] ; out . mX [ 1 ] = - X [ 78ULL ] ; out
. mX [ 2 ] = X [ 79ULL ] ; out . mX [ 3 ] =
Battery_System_Sensor_VI1_Voltage_Sensor2_V ; out . mX [ 4 ] = - X [ 87ULL ]
; out . mX [ 5 ] = X [ 119ULL ] * 1000.0 ; out . mX [ 6 ] = ( ( X [ 7ULL ] *
- 0.0002 + X [ 8ULL ] * - 2.0E-6 ) + U_idx_0 * 0.000202 ) * 1000.0 ; out . mX
[ 7 ] = U_idx_0 ; out . mX [ 8 ] = X [ 13ULL ] ; out . mX [ 9 ] = ( X [
135ULL ] - X [ 90ULL ] ) * X [ 140ULL ] * 0.0001 * 1111.1111111111111 ; out .
mX [ 10 ] = X [ 116ULL ] ; out . mX [ 11 ] = X [ 124ULL ] * 1000.0 ; out . mX
[ 12 ] = X [ 129ULL ] * 1000.0 ; out . mX [ 13 ] = U_idx_2 ; out . mX [ 14 ]
= X [ 93ULL ] * 1000.0 ; out . mX [ 15 ] = t74 * 0.001 ; out . mX [ 16 ] =
t75 ; out . mX [ 17 ] = U_idx_2 ; out . mX [ 18 ] = X [ 102ULL ] * 1000.0 ;
out . mX [ 19 ] = X [ 98ULL ] ; out . mX [ 20 ] = t77 ; out . mX [ 21 ] =
U_idx_2 ; out . mX [ 22 ] = X [ 111ULL ] * 1000.0 ; out . mX [ 23 ] =
t51_idx_0 ; out . mX [ 24 ] = U_idx_2 ; out . mX [ 25 ] = X [ 118ULL ] * -
1000.0 ; out . mX [ 26 ] = - t81 ; out . mX [ 27 ] = X [ 87ULL ] + X [ 168ULL
] ; out . mX [ 28 ] = X [ 277ULL ] ; out . mX [ 29 ] = X [ 402ULL ] ; out .
mX [ 30 ] = ( 1.01325 - X [ 445ULL ] ) * X [ 454ULL ] * 0.0001 *
1111.1111111111111 ; out . mX [ 31 ] = X [ 31ULL ] ; out . mX [ 32 ] = ( ( (
( ( - X [ 246ULL ] + - X [ 263ULL ] ) + - X [ 370ULL ] ) + - X [ 388ULL ] ) +
- X [ 439ULL ] ) + - X [ 457ULL ] ) * - 1000.0 ; out . mX [ 33 ] = - X [
471ULL ] ; out . mX [ 34 ] = X [ 407ULL ] ; out . mX [ 35 ] = - ( X [ 54ULL ]
+ - 1.01325 ) * X [ 545ULL ] * 0.0001 * 1111.1111111111111 ; out . mX [ 36 ]
= X [ 166ULL ] * 1.0E-9 + X [ 19ULL ] ; out . mX [ 37 ] = X [ 166ULL ] + X [
167ULL ] ; out . mX [ 38 ] = Battery_System_Sensor_VI1_Voltage_Sensor2_V ;
out . mX [ 39 ] = X [ 168ULL ] ; out . mX [ 40 ] =
Battery_System_Sensor_VI1_Voltage_Sensor2_V ; out . mX [ 41 ] = - X [ 572ULL
] ; ( void ) LC ; ( void ) t91 ; return 0 ; }

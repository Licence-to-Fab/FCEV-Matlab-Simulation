#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_dxy.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_dxy ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t202 , NeDsMethodOutput * t203 ) { ETTS0 b_efOut
; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ; ETTS0 k_efOut ; ETTS0 l_efOut
; ETTS0 o_efOut ; ETTS0 p_efOut ; ETTS0 t2 ; ETTS0 t6 ; PmRealVector out ;
real_T X [ 575 ] ; real_T t62 [ 69 ] ; real_T t73 [ 5 ] ; real_T c_efOut [ 1
] ; real_T d_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T f_efOut [ 1 ] ;
real_T i_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T t72 [ 1
] ; real_T t170 ; real_T t171 ; real_T t172 ; real_T t173 ; real_T t174 ;
real_T t175 ; real_T t176 ; real_T t180 ; real_T t181 ; real_T t70_idx_0 ;
size_t t10 [ 1 ] ; size_t t12 [ 1 ] ; size_t t9 [ 1 ] ; size_t t80 ; int32_T
b ; for ( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t202 -> mX . mX [ b ] ; } out
= t203 -> mDXY ; t72 [ 0ULL ] = X [ 89ULL ] ; t9 [ 0 ] = 20ULL ; t10 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t72 [ 0ULL ] , & t9 [ 0ULL ] , & t10 [ 0ULL ] ) ; t2 =
efOut ; t72 [ 0ULL ] = X [ 90ULL ] ; t12 [ 0 ] = 19ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t72 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t2 . mField1
[ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t9 [ 0ULL ] , &
t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 = c_efOut [ 0 ] ; t170 =
t70_idx_0 ; tlu2_2d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t9 [
0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 = d_efOut [ 0 ] ; t171
= t70_idx_0 ; tlu2_2d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t2 .
mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL
] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 = e_efOut [ 0 ] ; t172 =
t70_idx_0 ; tlu2_2d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL
] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 = f_efOut [ 0 ] ; t173 =
t70_idx_0 ; t72 [ 0ULL ] = X [ 98ULL ] ; tlu2_linear_nearest_prelookup ( &
g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t72 [
0ULL ] , & t9 [ 0ULL ] , & t10 [ 0ULL ] ) ; t2 = g_efOut ; t72 [ 0ULL ] = X [
99ULL ] ; tlu2_linear_nearest_prelookup ( & h_efOut . mField0 [ 0ULL ] , &
h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t72 [ 0ULL ] , & t12 [ 0ULL ] ,
& t10 [ 0ULL ] ) ; t6 = h_efOut ; tlu2_2d_linear_nearest_value ( & i_efOut [
0ULL ] , & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 =
i_efOut [ 0 ] ; t174 = t70_idx_0 ; tlu2_2d_linear_nearest_value ( & j_efOut [
0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField1 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t70_idx_0 =
j_efOut [ 0 ] ; t175 = t70_idx_0 ; t72 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t72 [ 0ULL ] , & t9 [ 0ULL ] , & t10 [ 0ULL ] ) ; t2 =
k_efOut ; t72 [ 0ULL ] = X [ 108ULL ] ; tlu2_linear_nearest_prelookup ( &
l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t72 [
0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 = l_efOut ;
tlu2_2d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t2 . mField1 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ]
, & t10 [ 0ULL ] ) ; t70_idx_0 = m_efOut [ 0 ] ; t176 = t70_idx_0 ;
tlu2_2d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ]
, & t10 [ 0ULL ] ) ; t70_idx_0 = n_efOut [ 0 ] ; t72 [ 0ULL ] = X [ 116ULL ]
; tlu2_linear_nearest_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t72 [ 0ULL ] , & t9 [ 0ULL ] , & t10 [ 0ULL ] ) ; t2 =
o_efOut ; t72 [ 0ULL ] = X [ 117ULL ] ; tlu2_linear_nearest_prelookup ( &
p_efOut . mField0 [ 0ULL ] , & p_efOut . mField1 [ 0ULL ] , & p_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t72 [
0ULL ] , & t12 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 = p_efOut ;
tlu2_2d_linear_nearest_value ( & q_efOut [ 0ULL ] , & t2 . mField1 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ]
, & t10 [ 0ULL ] ) ; t72 [ 0 ] = q_efOut [ 0 ] ; t180 = - t72 [ 0ULL ] ;
tlu2_2d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t9 [ 0ULL ] , & t12 [ 0ULL ]
, & t10 [ 0ULL ] ) ; t72 [ 0 ] = r_efOut [ 0 ] ; t181 = - t72 [ 0ULL ] ; t73
[ 0ULL ] = 0.1 ; t73 [ 1ULL ] = - 1.0 ; t73 [ 2ULL ] = 1.0 ; t73 [ 3ULL ] =
0.1 ; t73 [ 4ULL ] = 0.1 ; t62 [ 0ULL ] = - 0.2 ; t62 [ 1ULL ] = - 0.002 ;
t62 [ 2ULL ] = 1.0 ; t62 [ 3ULL ] = 1.0 ; t62 [ 4ULL ] = 1.0 ; t62 [ 5ULL ] =
0.0 ; t62 [ 6ULL ] = 0.0 ; t62 [ 7ULL ] = 0.0 ; t62 [ 8ULL ] = 0.0 ; t62 [
9ULL ] = 0.0 ; t62 [ 10ULL ] = 0.0 ; t62 [ 11ULL ] = - X [ 545ULL ] * 0.0001
* 1111.1111111111111 ; t62 [ 12ULL ] = - 1.0 ; t62 [ 13ULL ] = 1.0 ; t62 [
14ULL ] = 1.0 ; for ( t80 = 0ULL ; t80 < 5ULL ; t80 ++ ) { t62 [ t80 + 15ULL
] = t73 [ t80 ] ; } out . mX [ 0 ] = t62 [ 0 ] ; out . mX [ 1 ] = t62 [ 1 ] ;
out . mX [ 2 ] = t62 [ 2 ] ; out . mX [ 3 ] = t62 [ 3 ] ; out . mX [ 4 ] =
t62 [ 4 ] ; out . mX [ 5 ] = t62 [ 5 ] ; out . mX [ 6 ] = t62 [ 6 ] ; out .
mX [ 7 ] = t62 [ 7 ] ; out . mX [ 8 ] = t62 [ 8 ] ; out . mX [ 9 ] = t62 [ 9
] ; out . mX [ 10 ] = t62 [ 10 ] ; out . mX [ 11 ] = t62 [ 11 ] ; out . mX [
12 ] = t62 [ 12 ] ; out . mX [ 13 ] = t62 [ 13 ] ; out . mX [ 14 ] = t62 [ 14
] ; out . mX [ 15 ] = t62 [ 15 ] ; out . mX [ 16 ] = t62 [ 16 ] ; out . mX [
17 ] = t62 [ 17 ] ; out . mX [ 18 ] = t62 [ 18 ] ; out . mX [ 19 ] = t62 [ 19
] ; out . mX [ 20 ] = t170 * 0.001 ; out . mX [ 21 ] = t172 ; out . mX [ 22 ]
= - X [ 140ULL ] * 0.0001 * 1111.1111111111111 ; out . mX [ 23 ] = t171 *
0.001 ; out . mX [ 24 ] = t173 ; out . mX [ 25 ] = 1000.0 ; out . mX [ 26 ] =
1.0 ; out . mX [ 27 ] = t174 ; out . mX [ 28 ] = t175 ; out . mX [ 29 ] =
1000.0 ; out . mX [ 30 ] = t176 ; out . mX [ 31 ] = t70_idx_0 ; out . mX [ 32
] = 1000.0 ; out . mX [ 33 ] = 1.0 ; out . mX [ 34 ] = - t180 ; out . mX [ 35
] = - t181 ; out . mX [ 36 ] = - 1000.0 ; out . mX [ 37 ] = 1000.0 ; out . mX
[ 38 ] = 1000.0 ; out . mX [ 39 ] = 1000.0 ; out . mX [ 40 ] = X [ 140ULL ] *
0.0001 * 1111.1111111111111 ; out . mX [ 41 ] = ( X [ 135ULL ] - X [ 90ULL ]
) * 0.0001 * 1111.1111111111111 ; out . mX [ 42 ] = 1.0E-9 ; out . mX [ 43 ]
= 1.0 ; out . mX [ 44 ] = 1.0 ; out . mX [ 45 ] = 1.0 ; out . mX [ 46 ] = 1.0
; out . mX [ 47 ] = 1000.0 ; out . mX [ 48 ] = 1000.0 ; out . mX [ 49 ] = 0.0
; out . mX [ 50 ] = 1.0 ; out . mX [ 51 ] = 0.0 ; out . mX [ 52 ] = 0.0 ; out
. mX [ 53 ] = 0.0 ; out . mX [ 54 ] = 1000.0 ; out . mX [ 55 ] = 1000.0 ; out
. mX [ 56 ] = 0.0 ; out . mX [ 57 ] = 1.0 ; out . mX [ 58 ] = 0.0 ; out . mX
[ 59 ] = 0.0 ; out . mX [ 60 ] = 0.0 ; out . mX [ 61 ] = 1.0 ; out . mX [ 62
] = 1000.0 ; out . mX [ 63 ] = - X [ 454ULL ] * 0.0001 * 1111.1111111111111 ;
out . mX [ 64 ] = ( 1.01325 - X [ 445ULL ] ) * 0.0001 * 1111.1111111111111 ;
out . mX [ 65 ] = 1000.0 ; out . mX [ 66 ] = - 1.0 ; out . mX [ 67 ] = - ( X
[ 54ULL ] + - 1.01325 ) * 0.0001 * 1111.1111111111111 ; out . mX [ 68 ] = -
1.0 ; ( void ) LC ; ( void ) t203 ; return 0 ; }

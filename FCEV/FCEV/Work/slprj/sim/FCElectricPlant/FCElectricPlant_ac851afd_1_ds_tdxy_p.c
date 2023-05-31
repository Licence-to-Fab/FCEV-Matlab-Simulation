#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_tdxy_p.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_tdxy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 576 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 2 , 2 , 2 , 2 , 2
, 3 , 3 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 5 ,
5 , 6 , 7 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 9 ,
10 , 11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12
, 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 13 , 14 , 14 , 15 ,
15 , 15 , 15 , 15 , 15 , 20 , 20 , 22 , 25 , 25 , 25 , 26 , 26 , 26 , 26 , 26
, 28 , 29 , 29 , 29 , 30 , 30 , 30 , 30 , 30 , 31 , 32 , 32 , 32 , 33 , 33 ,
33 , 33 , 33 , 35 , 36 , 37 , 38 , 38 , 38 , 38 , 38 , 39 , 39 , 39 , 39 , 39
, 40 , 40 , 40 , 40 , 40 , 40 , 41 , 41 , 41 , 41 , 41 , 42 , 42 , 42 , 42 ,
42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42
, 42 , 42 , 42 , 42 , 42 , 42 , 44 , 45 , 47 , 47 , 47 , 47 , 47 , 47 , 47 ,
47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47
, 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 ,
47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47
, 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 ,
47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 47 , 48 , 48 , 48 , 48 , 48 , 48 , 48
, 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 ,
49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 50 , 51 , 52 , 53 , 54 , 54 , 54 , 54
, 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 ,
54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54
, 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 ,
54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54
, 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 ,
54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 55 , 55 , 55 , 55 , 55 , 55 , 55
, 55 , 55 , 55 , 55 , 55 , 55 , 55 , 55 , 55 , 55 , 55 , 56 , 56 , 56 , 56 ,
56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 57 , 58 , 59 , 60 , 61 , 61 , 62
, 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 ,
62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62 , 62
, 63 , 63 , 63 , 63 , 63 , 63 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 ,
65 , 65 , 65 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 66
, 66 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 ,
67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67
, 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 ,
67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67
, 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 67 , 68 , 68 ,
68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68
, 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 68 , 69 , 69 , 69 } ;
PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mTDXY_P ; out . mNumCol = 575ULL ; out . mNumRow = 42ULL ; for ( b = 0 ; b <
576 ; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 6 ;
out . mIr [ 1 ] = 6 ; out . mIr [ 2 ] = 8 ; out . mIr [ 3 ] = 36 ; out . mIr
[ 4 ] = 31 ; out . mIr [ 5 ] = 28 ; out . mIr [ 6 ] = 28 ; out . mIr [ 7 ] =
28 ; out . mIr [ 8 ] = 29 ; out . mIr [ 9 ] = 29 ; out . mIr [ 10 ] = 29 ;
out . mIr [ 11 ] = 35 ; out . mIr [ 12 ] = 1 ; out . mIr [ 13 ] = 2 ; out .
mIr [ 14 ] = 0 ; out . mIr [ 15 ] = 3 ; out . mIr [ 16 ] = 4 ; out . mIr [ 17
] = 27 ; out . mIr [ 18 ] = 38 ; out . mIr [ 19 ] = 40 ; out . mIr [ 20 ] =
15 ; out . mIr [ 21 ] = 16 ; out . mIr [ 22 ] = 9 ; out . mIr [ 23 ] = 15 ;
out . mIr [ 24 ] = 16 ; out . mIr [ 25 ] = 14 ; out . mIr [ 26 ] = 19 ; out .
mIr [ 27 ] = 20 ; out . mIr [ 28 ] = 20 ; out . mIr [ 29 ] = 18 ; out . mIr [
30 ] = 23 ; out . mIr [ 31 ] = 23 ; out . mIr [ 32 ] = 22 ; out . mIr [ 33 ]
= 10 ; out . mIr [ 34 ] = 26 ; out . mIr [ 35 ] = 26 ; out . mIr [ 36 ] = 25
; out . mIr [ 37 ] = 5 ; out . mIr [ 38 ] = 11 ; out . mIr [ 39 ] = 12 ; out
. mIr [ 40 ] = 9 ; out . mIr [ 41 ] = 9 ; out . mIr [ 42 ] = 36 ; out . mIr [
43 ] = 37 ; out . mIr [ 44 ] = 37 ; out . mIr [ 45 ] = 27 ; out . mIr [ 46 ]
= 39 ; out . mIr [ 47 ] = 32 ; out . mIr [ 48 ] = 32 ; out . mIr [ 49 ] = 28
; out . mIr [ 50 ] = 28 ; out . mIr [ 51 ] = 28 ; out . mIr [ 52 ] = 28 ; out
. mIr [ 53 ] = 28 ; out . mIr [ 54 ] = 32 ; out . mIr [ 55 ] = 32 ; out . mIr
[ 56 ] = 29 ; out . mIr [ 57 ] = 29 ; out . mIr [ 58 ] = 29 ; out . mIr [ 59
] = 29 ; out . mIr [ 60 ] = 29 ; out . mIr [ 61 ] = 34 ; out . mIr [ 62 ] =
32 ; out . mIr [ 63 ] = 30 ; out . mIr [ 64 ] = 30 ; out . mIr [ 65 ] = 32 ;
out . mIr [ 66 ] = 33 ; out . mIr [ 67 ] = 35 ; out . mIr [ 68 ] = 41 ; (
void ) LC ; ( void ) t2 ; return 0 ; }

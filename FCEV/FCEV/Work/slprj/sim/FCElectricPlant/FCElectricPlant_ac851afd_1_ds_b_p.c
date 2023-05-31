#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_b_p.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_b_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mB_P ; out . mNumCol = 16ULL ;
out . mNumRow = 575ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 3 ; out .
mJc [ 2 ] = 4 ; out . mJc [ 3 ] = 12 ; out . mJc [ 4 ] = 12 ; out . mJc [ 5 ]
= 14 ; out . mJc [ 6 ] = 16 ; out . mJc [ 7 ] = 16 ; out . mJc [ 8 ] = 16 ;
out . mJc [ 9 ] = 18 ; out . mJc [ 10 ] = 18 ; out . mJc [ 11 ] = 21 ; out .
mJc [ 12 ] = 21 ; out . mJc [ 13 ] = 21 ; out . mJc [ 14 ] = 21 ; out . mJc [
15 ] = 22 ; out . mJc [ 16 ] = 23 ; out . mIr [ 0 ] = 2 ; out . mIr [ 1 ] =
10 ; out . mIr [ 2 ] = 11 ; out . mIr [ 3 ] = 86 ; out . mIr [ 4 ] = 5 ; out
. mIr [ 5 ] = 6 ; out . mIr [ 6 ] = 7 ; out . mIr [ 7 ] = 9 ; out . mIr [ 8 ]
= 93 ; out . mIr [ 9 ] = 99 ; out . mIr [ 10 ] = 105 ; out . mIr [ 11 ] = 135
; out . mIr [ 12 ] = 18 ; out . mIr [ 13 ] = 70 ; out . mIr [ 14 ] = 30 ; out
. mIr [ 15 ] = 32 ; out . mIr [ 16 ] = 46 ; out . mIr [ 17 ] = 48 ; out . mIr
[ 18 ] = 54 ; out . mIr [ 19 ] = 405 ; out . mIr [ 20 ] = 434 ; out . mIr [
21 ] = 75 ; out . mIr [ 22 ] = 574 ; ( void ) LC ; ( void ) t2 ; return 0 ; }

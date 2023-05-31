#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_icr.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_icr ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T X [ 575 ] ; real_T P_R_idx_54 ; real_T P_R_idx_55 ; real_T
P_R_idx_56 ; real_T P_R_idx_57 ; real_T P_R_idx_58 ; real_T P_R_idx_59 ;
real_T P_R_idx_60 ; real_T P_R_idx_61 ; real_T P_R_idx_62 ; int32_T b ; (
void ) LC ; for ( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t1 -> mX . mX [ b ] ;
} P_R_idx_54 = t1 -> mP_R . mX [ 54 ] ; P_R_idx_55 = t1 -> mP_R . mX [ 55 ] ;
P_R_idx_56 = t1 -> mP_R . mX [ 56 ] ; P_R_idx_57 = t1 -> mP_R . mX [ 57 ] ;
P_R_idx_58 = t1 -> mP_R . mX [ 58 ] ; P_R_idx_59 = t1 -> mP_R . mX [ 59 ] ;
P_R_idx_60 = t1 -> mP_R . mX [ 60 ] ; P_R_idx_61 = t1 -> mP_R . mX [ 61 ] ;
P_R_idx_62 = t1 -> mP_R . mX [ 62 ] ; out = t2 -> mICR ; out . mX [ 0 ] = 0.0
; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out .
mX [ 4 ] = 0.0 ; out . mX [ 5 ] = ( X [ 152ULL ] * - 0.2 + 0.2 ) - P_R_idx_56
; out . mX [ 6 ] = X [ 19ULL ] - P_R_idx_54 ; out . mX [ 7 ] = X [ 18ULL ] -
P_R_idx_55 ; out . mX [ 8 ] = X [ 228ULL ] - P_R_idx_62 ; out . mX [ 9 ] = X
[ 225ULL ] ; out . mX [ 10 ] = X [ 233ULL ] - P_R_idx_59 ; out . mX [ 11 ] =
X [ 230ULL ] ; out . mX [ 12 ] = X [ 352ULL ] - P_R_idx_58 ; out . mX [ 13 ]
= X [ 349ULL ] - P_R_idx_57 ; out . mX [ 14 ] = X [ 357ULL ] - P_R_idx_61 ;
out . mX [ 15 ] = X [ 354ULL ] - P_R_idx_60 ; ( void ) LC ; ( void ) t2 ;
return 0 ; }

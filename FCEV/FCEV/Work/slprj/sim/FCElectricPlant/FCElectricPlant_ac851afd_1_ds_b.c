#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_b.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_b ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t29 , NeDsMethodOutput * t30 ) { PmRealVector out ;
real_T t0 [ 23 ] ; real_T t2 [ 8 ] ; size_t t8 ; ( void ) t29 ; ( void ) LC ;
out = t30 -> mB ; t2 [ 0ULL ] = - 0.0 ; t2 [ 1ULL ] = - 0.0 ; t2 [ 2ULL ] = -
0.0 ; t2 [ 3ULL ] = 0.0 ; t2 [ 4ULL ] = 1.0 ; t2 [ 5ULL ] = 1.0 ; t2 [ 6ULL ]
= 1.0 ; t2 [ 7ULL ] = - 1.0 ; t0 [ 0ULL ] = 0.01 ; t0 [ 1ULL ] = 0.0002 ; t0
[ 2ULL ] = 2.0E-6 ; t0 [ 3ULL ] = 0.0 ; for ( t8 = 0ULL ; t8 < 8ULL ; t8 ++ )
{ t0 [ t8 + 4ULL ] = t2 [ t8 ] ; } out . mX [ 0 ] = t0 [ 0 ] ; out . mX [ 1 ]
= t0 [ 1 ] ; out . mX [ 2 ] = t0 [ 2 ] ; out . mX [ 3 ] = t0 [ 3 ] ; out . mX
[ 4 ] = t0 [ 4 ] ; out . mX [ 5 ] = t0 [ 5 ] ; out . mX [ 6 ] = t0 [ 6 ] ;
out . mX [ 7 ] = t0 [ 7 ] ; out . mX [ 8 ] = t0 [ 8 ] ; out . mX [ 9 ] = t0 [
9 ] ; out . mX [ 10 ] = t0 [ 10 ] ; out . mX [ 11 ] = t0 [ 11 ] ; out . mX [
12 ] = - 0.00077541003784964728 ; out . mX [ 13 ] = 0.00077541003784964728 ;
out . mX [ 14 ] = 0.077541003784964715 ; out . mX [ 15 ] = 1.0 ; out . mX [
16 ] = 1.0 ; out . mX [ 17 ] = 1.0 ; out . mX [ 18 ] = 2.0 ; out . mX [ 19 ]
= 0.020035944556664052 ; out . mX [ 20 ] = - 2.0 ; out . mX [ 21 ] = 1.0 ;
out . mX [ 22 ] = 1.0 ; ( void ) LC ; ( void ) t30 ; return 0 ; }

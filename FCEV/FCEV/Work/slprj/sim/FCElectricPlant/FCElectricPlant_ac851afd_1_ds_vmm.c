#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_vmm.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_vmm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; ( void ) LC ; out = t2 -> mVMM ; out . mX [ 0 ] = false ; out
. mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out .
mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = true ; out . mX
[ 7 ] = true ; out . mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10
] = true ; out . mX [ 11 ] = true ; out . mX [ 12 ] = true ; out . mX [ 13 ]
= false ; out . mX [ 14 ] = true ; out . mX [ 15 ] = false ; out . mX [ 16 ]
= false ; out . mX [ 17 ] = true ; out . mX [ 18 ] = true ; out . mX [ 19 ] =
true ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; out . mX [ 22 ] =
false ; out . mX [ 23 ] = false ; out . mX [ 24 ] = false ; out . mX [ 25 ] =
true ; out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] =
true ; out . mX [ 29 ] = true ; out . mX [ 30 ] = true ; out . mX [ 31 ] =
true ; out . mX [ 32 ] = true ; out . mX [ 33 ] = true ; out . mX [ 34 ] =
true ; out . mX [ 35 ] = true ; out . mX [ 36 ] = true ; out . mX [ 37 ] =
true ; out . mX [ 38 ] = true ; out . mX [ 39 ] = false ; out . mX [ 40 ] =
true ; out . mX [ 41 ] = true ; out . mX [ 42 ] = true ; out . mX [ 43 ] =
true ; out . mX [ 44 ] = true ; out . mX [ 45 ] = true ; out . mX [ 46 ] =
true ; out . mX [ 47 ] = true ; out . mX [ 48 ] = true ; out . mX [ 49 ] =
true ; out . mX [ 50 ] = true ; out . mX [ 51 ] = true ; out . mX [ 52 ] =
true ; out . mX [ 53 ] = true ; out . mX [ 54 ] = true ; out . mX [ 55 ] =
true ; out . mX [ 56 ] = true ; out . mX [ 57 ] = true ; out . mX [ 58 ] =
true ; out . mX [ 59 ] = true ; out . mX [ 60 ] = true ; out . mX [ 61 ] =
true ; out . mX [ 62 ] = true ; out . mX [ 63 ] = true ; out . mX [ 64 ] =
true ; out . mX [ 65 ] = true ; out . mX [ 66 ] = true ; out . mX [ 67 ] =
true ; out . mX [ 68 ] = true ; out . mX [ 69 ] = false ; out . mX [ 70 ] =
true ; out . mX [ 71 ] = true ; out . mX [ 72 ] = true ; out . mX [ 73 ] =
true ; out . mX [ 74 ] = true ; out . mX [ 75 ] = true ; out . mX [ 76 ] =
true ; out . mX [ 77 ] = true ; out . mX [ 78 ] = false ; out . mX [ 79 ] =
true ; out . mX [ 80 ] = true ; out . mX [ 81 ] = true ; out . mX [ 82 ] =
true ; out . mX [ 83 ] = true ; out . mX [ 84 ] = true ; out . mX [ 85 ] =
true ; out . mX [ 86 ] = true ; out . mX [ 87 ] = true ; out . mX [ 88 ] =
true ; out . mX [ 89 ] = true ; out . mX [ 90 ] = true ; out . mX [ 91 ] =
true ; out . mX [ 92 ] = true ; out . mX [ 93 ] = true ; out . mX [ 94 ] =
true ; out . mX [ 95 ] = true ; out . mX [ 96 ] = true ; out . mX [ 97 ] =
false ; out . mX [ 98 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; }

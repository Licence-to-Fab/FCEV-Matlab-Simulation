#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_duf_p.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_duf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_2 [ 113 ] = { 110 , 86 , 8 , 10 , 11 , 88 , 89 , 90 , 91 , 94 , 95
, 96 , 97 , 100 , 101 , 102 , 103 , 106 , 107 , 108 , 109 , 110 , 113 , 114 ,
115 , 116 , 117 , 118 , 121 , 122 , 123 , 124 , 125 , 126 , 129 , 130 , 131 ,
132 , 133 , 134 , 148 , 149 , 152 , 153 , 157 , 158 , 206 , 207 , 210 , 18 ,
19 , 20 , 21 , 70 , 71 , 72 , 73 , 177 , 178 , 179 , 183 , 184 , 186 , 188 ,
194 , 539 , 540 , 541 , 552 , 558 , 559 , 560 , 561 , 562 , 563 , 564 , 567 ,
568 , 30 , 31 , 32 , 33 , 259 , 259 , 297 , 304 , 317 , 323 , 324 , 325 , 46
, 47 , 48 , 49 , 376 , 376 , 402 , 403 , 420 , 421 , 422 , 423 , 424 , 425 ,
426 , 429 , 432 , 488 , 489 , 492 , 514 , 165 , 166 } ; PmSparsityPattern out
; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUF_P ; out . mNumCol
= 16ULL ; out . mNumRow = 575ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1
; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 46 ; out . mJc [ 4 ] = 49 ; out .
mJc [ 5 ] = 78 ; out . mJc [ 6 ] = 83 ; out . mJc [ 7 ] = 84 ; out . mJc [ 8
] = 90 ; out . mJc [ 9 ] = 95 ; out . mJc [ 10 ] = 96 ; out . mJc [ 11 ] =
107 ; out . mJc [ 12 ] = 110 ; out . mJc [ 13 ] = 111 ; out . mJc [ 14 ] =
113 ; out . mJc [ 15 ] = 113 ; out . mJc [ 16 ] = 113 ; for ( b = 0 ; b < 113
; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; } ( void ) LC ; ( void ) t2
; return 0 ; }

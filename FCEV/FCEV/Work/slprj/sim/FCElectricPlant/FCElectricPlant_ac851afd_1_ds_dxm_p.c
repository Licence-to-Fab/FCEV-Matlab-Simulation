#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_dxm_p.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_dxm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 576 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 5 , 11 , 12 , 12 , 13
, 13 , 13 , 19 , 19 , 19 , 19 , 19 , 19 , 24 , 29 , 34 , 39 , 44 , 49 , 54 ,
59 , 64 , 69 , 74 , 74 , 79 , 84 , 89 , 94 , 99 , 104 , 109 , 114 , 119 , 124
, 129 , 134 , 139 , 144 , 149 , 154 , 159 , 164 , 169 , 174 , 179 , 184 , 189
, 190 , 191 , 195 , 199 , 203 , 207 , 207 , 212 , 217 , 222 , 227 , 232 , 237
, 242 , 247 , 252 , 257 , 262 , 267 , 272 , 277 , 277 , 277 , 277 , 277 , 277
, 277 , 277 , 277 , 277 , 277 , 277 , 277 , 277 , 277 , 277 , 277 , 278 , 278
, 278 , 278 , 278 , 278 , 278 , 279 , 279 , 280 , 280 , 280 , 280 , 280 , 280
, 280 , 281 , 281 , 282 , 282 , 282 , 282 , 282 , 282 , 282 , 283 , 283 , 283
, 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283
, 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283 , 283
, 283 , 283 , 283 , 283 , 283 , 283 , 291 , 291 , 291 , 297 , 297 , 297 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
, 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298 , 298
} ; static int32_T _cg_const_2 [ 298 ] = { 6 , 7 , 8 , 10 , 18 , 9 , 10 , 11
, 17 , 18 , 19 , 12 , 14 , 9 , 10 , 11 , 17 , 18 , 19 , 25 , 26 , 27 , 28 ,
29 , 25 , 26 , 27 , 28 , 29 , 25 , 26 , 27 , 28 , 29 , 25 , 26 , 27 , 28 , 29
, 30 , 31 , 32 , 33 , 38 , 30 , 31 , 32 , 33 , 38 , 30 , 31 , 32 , 33 , 38 ,
34 , 35 , 36 , 37 , 40 , 34 , 35 , 36 , 37 , 40 , 34 , 35 , 36 , 37 , 40 , 30
, 31 , 32 , 33 , 38 , 34 , 35 , 36 , 37 , 40 , 41 , 42 , 43 , 44 , 45 , 41 ,
42 , 43 , 44 , 45 , 41 , 42 , 43 , 44 , 45 , 41 , 42 , 43 , 44 , 45 , 46 , 93
, 94 , 95 , 96 , 47 , 48 , 49 , 50 , 51 , 47 , 48 , 49 , 50 , 51 , 47 , 48 ,
49 , 50 , 51 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 60 , 52 , 53 , 54
, 55 , 60 , 52 , 53 , 54 , 55 , 60 , 56 , 57 , 58 , 59 , 61 , 56 , 57 , 58 ,
59 , 61 , 56 , 57 , 58 , 59 , 61 , 52 , 53 , 54 , 55 , 60 , 56 , 57 , 58 , 59
, 61 , 62 , 63 , 64 , 65 , 66 , 62 , 63 , 64 , 65 , 66 , 62 , 63 , 64 , 65 ,
66 , 62 , 63 , 64 , 65 , 66 , 67 , 89 , 90 , 91 , 92 , 68 , 68 , 70 , 71 , 72
, 73 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 74 , 75 , 76 , 77 , 79 , 80 ,
81 , 82 , 83 , 79 , 80 , 81 , 82 , 83 , 79 , 80 , 81 , 82 , 83 , 79 , 80 , 81
, 82 , 83 , 84 , 85 , 86 , 87 , 88 , 84 , 85 , 86 , 87 , 88 , 84 , 85 , 86 ,
87 , 88 , 84 , 85 , 86 , 87 , 88 , 67 , 89 , 90 , 91 , 92 , 67 , 89 , 90 , 91
, 92 , 67 , 89 , 90 , 91 , 92 , 46 , 93 , 94 , 95 , 96 , 46 , 93 , 94 , 95 ,
96 , 46 , 93 , 94 , 95 , 96 , 12 , 12 , 14 , 14 , 6 , 6 , 7 , 8 , 9 , 10 , 11
, 17 , 18 , 19 , 7 , 8 , 9 , 10 , 17 , 18 , 11 } ; PmSparsityPattern out ;
int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXM_P ; out . mNumCol =
575ULL ; out . mNumRow = 99ULL ; for ( b = 0 ; b < 576 ; b ++ ) { out . mJc [
b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 298 ; b ++ ) { out . mIr [ b ]
= _cg_const_2 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }

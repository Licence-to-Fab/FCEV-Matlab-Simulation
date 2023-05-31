#include "FCEvPowertrainController.h"
#include "rtwtypes.h"
#include "FCEvPowertrainController_private.h"
#include "mwmathutil.h"
#include "FCEvPowertrainController_capi.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_FCEvPowertrainController [ 46 ] = { {
"dif03hcjvgl" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "bzzrkabtjr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "eo2g54aezf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "gf5wxrzqsr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "dbmyxo2m5d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "d1pwx2baxm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ibikp0pgia" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ax0myfw24a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "nzekywx1we" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "empdn44ymi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "blhejuf4nc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "hisuxex301" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "kfczeuvxuu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "izbd5cj1yx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "c0zmftiqzd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "bsdghwadnz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "nlh1gryrx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "otjhyqv5ki" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "edcpavqjru" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "dyjn3zzpfq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "k2oudzyk03" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "hjsbdkg1ln" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "paumcfdnuw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "FCEvPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "d2f0gowvmo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ax55bwwar2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ezkw1qrycv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "struct_IDgMmAocjV2Mcx0AXuhokB" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "cuint64" ,
MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "uint64" } , { "uint64" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "cint64" ,
MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , { "int64" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_FCEvPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCEvPowertrainController" } , {
"mr_FCEvPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "FCEvPowertrainController" } , { "FCEvPowertrainController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"FCEvPowertrainController.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"FCEvPowertrainController" } } ; gdngfg3ibwc gdngfg3ibw = { 0.0 , 0.0 , 0.0 ,
0.0 , 100.0 , 5000.0 , 0.0 , 2.0 , 2.0 , - 1.0 , 1.0 , 0.0 , { 0.0 , 0.35 ,
0.7 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } , { 0.0 , 10.0 , 20.0 ,
30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , { 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } , { 0.0 , 10.0 , 20.0 ,
30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , 0.0 ,
9.5492965855137211 , { 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0
, 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0
, 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 93.0
, 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 90.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0
, 94.0 , 94.0 , 94.0 , 94.0 , 94.0 , 94.0 , 92.0 , 85.0 , 85.0 , 90.0 , 92.0
, 93.0 , 94.0 , 94.0 , 94.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0
, 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0
, 90.0 , 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0
, 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0
, 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0
, 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0
, 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 92.0 , 92.0 , 94.0 , 95.0 , 95.0 , 95.0
, 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0
, 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0
, 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0
, 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0
, 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 } , { 0.0 , 1000.0 , 2000.0
, 3000.0 , 3221.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 ,
10000.0 } , { 0.0 , 23.928571428571427 , 47.857142857142854 ,
71.785714285714278 , 95.714285714285708 , 119.64285714285714 ,
143.57142857142856 , 167.5 , 191.42857142857142 , 215.35714285714286 ,
239.28571428571428 , 263.21428571428572 , 287.14285714285711 ,
311.07142857142856 , 335.0 } , 0.01 , - 1.0 , 9.5492965855137211 , { 335.0 ,
335.0 , 335.0 , 335.0 , 335.0 , 269.7676 , 215.8141 , 179.8451 , 154.1529 ,
134.8838 , 119.8967 , 107.9071 } , { 0.0 , 1000.0 , 2000.0 , 3000.0 , 3221.0
, 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } ,
0.12594458438287154 , - 1.0 , 0.0 , 0.0 , 0.0 , 9.5492965855137211 , { 335.0
, 335.0 , 335.0 , 335.0 , 335.0 , 269.7676 , 215.8141 , 179.8451 , 154.1529 ,
134.8838 , 119.8967 , 107.9071 } , { 0.0 , 1000.0 , 2000.0 , 3000.0 , 3221.0
, 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } ,
9.5492965855137211 , { 335.0 , 335.0 , 335.0 , 335.0 , 335.0 , 269.7676 ,
215.8141 , 179.8451 , 154.1529 , 134.8838 , 119.8967 , 107.9071 } , { 0.0 ,
1000.0 , 2000.0 , 3000.0 , 3221.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0 ,
8000.0 , 9000.0 , 10000.0 } , 7.94 , { 0.0 , 1.0 } , { 5.0 , 9.0 } , { 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } , { 0.0 , 10.0 ,
20.0 , 30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , 0.0 , 1.0 ,
1.0 , 0.0 , 1.0 , 0.01 , 0.01 , - 0.001 , 0.0 , 200.0 , 350.0 , 0.0 , 80.0 ,
0.0 , 0.0 , - 110000.0 , 110000.0 , 5.0E+6 , 1.0 , 0.0 , 60.0 , 1.0 , 1.0 ,
6500.0 , 1.0 , 0.00082466807156732073 , 0.00082466807156732073 , { 11U , 14U
} } ; void dyjn3zzpfq ( real_T * bjusnx4whz , kfczeuvxuu * localDW ) {
localDW -> bg3lclywzp = gdngfg3ibw . P_3 ; localDW -> g1odrjfioq = gdngfg3ibw
. P_2 ; * bjusnx4whz = gdngfg3ibw . P_54 ; } void edcpavqjru ( real_T *
bjusnx4whz , kfczeuvxuu * localDW ) { localDW -> bg3lclywzp = gdngfg3ibw .
P_3 ; localDW -> g1odrjfioq = gdngfg3ibw . P_2 ; * bjusnx4whz = gdngfg3ibw .
P_54 ; } void hjsbdkg1ln ( real_T * bjusnx4whz ) { * bjusnx4whz = gdngfg3ibw
. P_54 ; } void FCEvPowertrainController ( ezkw1qrycv * const jxp0bqrs0w ,
const real_T * pmuomho0oz , const real_T * alvykbvthg , const real_T *
n1wp1ou1xw , const real_T * bdqo4ar2hz , const real_T * lry4q2lo1i , const
real_T * o12aszhwfy , real_T * hz5ahzp5ly , real_T * pwb5wjytv1 , real_T *
pmexk5h2x0 , real_T * bjusnx4whz , izbd5cj1yx * localB , kfczeuvxuu * localDW
) { real_T c3qci12jwl ; real_T epaudbxea0 ; real_T felptuhmla ; real_T
fhmuixpuyr ; real_T flx1slgozo ; real_T gllwqukroy ; real_T gnas53r2id ;
real_T hbm3cdzw32 ; real_T jvunm55ipg ; boolean_T g4gkplaarz ; boolean_T
homkortknc ; if ( gdngfg3ibw . P_61 > gdngfg3ibw . P_30 ) { hbm3cdzw32 =
gdngfg3ibw . P_60 ; } else { hbm3cdzw32 = * alvykbvthg ; } gllwqukroy =
gdngfg3ibw . P_31 * * lry4q2lo1i ; jvunm55ipg = look1_binlcapw ( gllwqukroy ,
gdngfg3ibw . P_33 , gdngfg3ibw . P_32 , 11U ) ; g4gkplaarz = ( * pmuomho0oz >
gdngfg3ibw . P_6 ) ; hbm3cdzw32 = hbm3cdzw32 * gdngfg3ibw . P_59 * gdngfg3ibw
. P_67 ; gllwqukroy = gdngfg3ibw . P_34 * * lry4q2lo1i ; gnas53r2id =
look1_binlcapw ( * n1wp1ou1xw , gdngfg3ibw . P_39 , gdngfg3ibw . P_38 , 1U )
; fhmuixpuyr = look1_binlcapw ( * bdqo4ar2hz , gdngfg3ibw . P_41 , gdngfg3ibw
. P_40 , 10U ) ; gllwqukroy = muDoubleScalarMin ( hbm3cdzw32 , gdngfg3ibw .
P_37 * look1_binlcapw ( gllwqukroy , gdngfg3ibw . P_36 , gdngfg3ibw . P_35 ,
11U ) ) * ( gnas53r2id * fhmuixpuyr ) ; if ( g4gkplaarz ) { gnas53r2id =
gdngfg3ibw . P_23 * * lry4q2lo1i ; gnas53r2id = * pmuomho0oz * look1_binlcapw
( gnas53r2id , gdngfg3ibw . P_25 , gdngfg3ibw . P_24 , 11U ) ; } else {
gnas53r2id = gdngfg3ibw . P_26 * gllwqukroy * gdngfg3ibw . P_27 ; }
fhmuixpuyr = muDoubleScalarAbs ( * lry4q2lo1i ) ; if ( ! ( fhmuixpuyr <
gdngfg3ibw . P_7 ) ) { fhmuixpuyr = look1_binlcapw ( * bdqo4ar2hz ,
gdngfg3ibw . P_13 , gdngfg3ibw . P_12 , 10U ) ; fhmuixpuyr *= gdngfg3ibw .
P_58 ; epaudbxea0 = look1_binlcapw ( * bdqo4ar2hz , gdngfg3ibw . P_15 ,
gdngfg3ibw . P_14 , 10U ) ; epaudbxea0 *= gdngfg3ibw . P_57 ; flx1slgozo = *
lry4q2lo1i * gnas53r2id ; if ( flx1slgozo >= gdngfg3ibw . P_16 ) { felptuhmla
= gdngfg3ibw . P_9 ; } else { felptuhmla = gdngfg3ibw . P_10 ; } c3qci12jwl =
gdngfg3ibw . P_17 * * lry4q2lo1i ; c3qci12jwl = gdngfg3ibw . P_21 *
look2_binlcapw ( muDoubleScalarAbs ( c3qci12jwl ) , muDoubleScalarAbs (
gnas53r2id ) , gdngfg3ibw . P_19 , gdngfg3ibw . P_20 , gdngfg3ibw . P_18 ,
gdngfg3ibw . P_69 , 12U ) ; if ( ( c3qci12jwl < 0.0 ) && ( felptuhmla >
muDoubleScalarFloor ( felptuhmla ) ) ) { felptuhmla = - muDoubleScalarPower (
- c3qci12jwl , felptuhmla ) ; } else { felptuhmla = muDoubleScalarPower (
c3qci12jwl , felptuhmla ) ; } c3qci12jwl = flx1slgozo * felptuhmla ; if ( ( !
( fhmuixpuyr - c3qci12jwl >= gdngfg3ibw . P_28 ) ) || ( ! ( epaudbxea0 -
c3qci12jwl <= gdngfg3ibw . P_29 ) ) ) { g4gkplaarz = ( * lry4q2lo1i <=
gdngfg3ibw . P_8 ) ; homkortknc = ( * lry4q2lo1i >= - gdngfg3ibw . P_8 ) ; if
( homkortknc && g4gkplaarz ) { gnas53r2id = * lry4q2lo1i / 2.0 ; if ( *
lry4q2lo1i >= gdngfg3ibw . P_11 ) { flx1slgozo = gdngfg3ibw . P_66 ; } else {
flx1slgozo = localB -> fqz0pqpsux ; } gnas53r2id = 4.0 / ( 3.0 -
muDoubleScalarPower ( gnas53r2id , 2.0 ) ) * flx1slgozo ; } else { gnas53r2id
= * lry4q2lo1i ; } if ( ! ( c3qci12jwl > fhmuixpuyr ) ) { if ( c3qci12jwl <
epaudbxea0 ) { fhmuixpuyr = epaudbxea0 ; } else { fhmuixpuyr = c3qci12jwl ; }
} gnas53r2id = fhmuixpuyr / felptuhmla / gnas53r2id ; } } if ( gnas53r2id >
jvunm55ipg ) { * hz5ahzp5ly = jvunm55ipg ; } else { jvunm55ipg *= gdngfg3ibw
. P_22 ; if ( gnas53r2id < jvunm55ipg ) { * hz5ahzp5ly = jvunm55ipg ; } else
{ * hz5ahzp5ly = gnas53r2id ; } } fhmuixpuyr = * lry4q2lo1i ; jvunm55ipg = *
bdqo4ar2hz - gdngfg3ibw . P_62 ; if ( rtmGetTaskTime ( jxp0bqrs0w , 0 ) <
gdngfg3ibw . P_44 ) { gnas53r2id = gdngfg3ibw . P_45 ; } else { gnas53r2id =
gdngfg3ibw . P_46 ; } jvunm55ipg *= gnas53r2id ; localB -> hr4pejxjlj = (
gdngfg3ibw . P_0 * jvunm55ipg - localDW -> g1odrjfioq ) * gdngfg3ibw . P_4 ;
if ( fhmuixpuyr > gdngfg3ibw . P_42 ) { fhmuixpuyr = gdngfg3ibw . P_42 ; }
else if ( fhmuixpuyr < gdngfg3ibw . P_43 ) { fhmuixpuyr = gdngfg3ibw . P_43 ;
} gnas53r2id = * hz5ahzp5ly * fhmuixpuyr - ( ( gdngfg3ibw . P_5 * jvunm55ipg
+ localDW -> bg3lclywzp ) + localB -> hr4pejxjlj ) ; fhmuixpuyr = *
o12aszhwfy ; localB -> oyp5ym53qc = gdngfg3ibw . P_1 * jvunm55ipg ; if (
fhmuixpuyr > gdngfg3ibw . P_50 ) { fhmuixpuyr = gdngfg3ibw . P_50 ; } else if
( fhmuixpuyr < gdngfg3ibw . P_51 ) { fhmuixpuyr = gdngfg3ibw . P_51 ; }
fhmuixpuyr = gdngfg3ibw . P_63 / ( muDoubleScalarExp ( ( gnas53r2id -
gdngfg3ibw . P_65 ) * gdngfg3ibw . P_49 ) + gdngfg3ibw . P_64 ) * gnas53r2id
/ fhmuixpuyr ; if ( fhmuixpuyr > gdngfg3ibw . P_52 ) { * pmexk5h2x0 =
gdngfg3ibw . P_52 ; } else if ( fhmuixpuyr < gdngfg3ibw . P_53 ) { *
pmexk5h2x0 = gdngfg3ibw . P_53 ; } else { * pmexk5h2x0 = fhmuixpuyr ; } *
bjusnx4whz = gdngfg3ibw . P_54 ; fhmuixpuyr = hbm3cdzw32 - gllwqukroy ; if (
fhmuixpuyr > gdngfg3ibw . P_55 ) { fhmuixpuyr = gdngfg3ibw . P_55 ; } else if
( fhmuixpuyr < gdngfg3ibw . P_56 ) { fhmuixpuyr = gdngfg3ibw . P_56 ; } *
pwb5wjytv1 = fhmuixpuyr / gdngfg3ibw . P_68 ; } void
FCEvPowertrainControllerTID1 ( izbd5cj1yx * localB ) { localB -> fqz0pqpsux =
- gdngfg3ibw . P_66 ; } void otjhyqv5ki ( izbd5cj1yx * localB , kfczeuvxuu *
localDW ) { localDW -> bg3lclywzp += gdngfg3ibw . P_47 * localB -> oyp5ym53qc
; localDW -> g1odrjfioq += gdngfg3ibw . P_48 * localB -> hr4pejxjlj ; } void
bsdghwadnz ( ezkw1qrycv * const jxp0bqrs0w ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( jxp0bqrs0w ->
_mdlRefSfcnS , "FCEvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void k2oudzyk03 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ezkw1qrycv
* const jxp0bqrs0w , izbd5cj1yx * localB , kfczeuvxuu * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; gdngfg3ibw . P_42 = rtInf ;
gdngfg3ibw . P_50 = rtInf ; gdngfg3ibw . P_55 = rtInf ; ( void ) memset ( (
void * ) jxp0bqrs0w , 0 , sizeof ( ezkw1qrycv ) ) ; jxp0bqrs0w -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; jxp0bqrs0w -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; jxp0bqrs0w -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( jxp0bqrs0w -> _mdlRefSfcnS , "FCEvPowertrainController"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> hr4pejxjlj =
0.0 ; localB -> oyp5ym53qc = 0.0 ; localB -> fqz0pqpsux = 0.0 ; } localDW ->
bg3lclywzp = 0.0 ; localDW -> g1odrjfioq = 0.0 ;
FCEvPowertrainController_InitializeDataMapInfo ( jxp0bqrs0w , localDW ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( jxp0bqrs0w -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
jxp0bqrs0w -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( jxp0bqrs0w -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_FCEvPowertrainController_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_FCEvPowertrainController , 46 ) ; * retVal = 1 ; } static void
mr_FCEvPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_FCEvPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_FCEvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_FCEvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_FCEvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_FCEvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_FCEvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_FCEvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_FCEvPowertrainController_GetDWork (
const dif03hcjvgl * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_FCEvPowertrainController_cacheDataAsMxArray
( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW
-> rtb ) ) ; { static const char * rtdwDataFieldNames [ 2 ] = {
"mdlrefDW->rtdw.bg3lclywzp" , "mdlrefDW->rtdw.g1odrjfioq" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 2 , rtdwDataFieldNames ) ;
mr_FCEvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . bg3lclywzp ) , sizeof ( mdlrefDW -> rtdw .
bg3lclywzp ) ) ; mr_FCEvPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . g1odrjfioq ) , sizeof (
mdlrefDW -> rtdw . g1odrjfioq ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_FCEvPowertrainController_SetDWork ( dif03hcjvgl * mdlrefDW , const mxArray
* ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . bg3lclywzp ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
bg3lclywzp ) ) ; mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . g1odrjfioq ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . g1odrjfioq ) ) ; } } void
mr_FCEvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 468043283U , 3982901605U , 976508539U ,
648972625U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCEvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif

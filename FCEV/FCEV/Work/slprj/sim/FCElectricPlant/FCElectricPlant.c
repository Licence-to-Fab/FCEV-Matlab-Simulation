#include "FCElectricPlant.h"
#include "rtwtypes.h"
#include "FCElectricPlant_private.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include "FCElectricPlant_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
const real_T FCElectricPlant_RGND = 0.0 ; static RegMdlInfo
rtMdlInfo_FCElectricPlant [ 64 ] = { { "g5h05g3u4wx" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"kqptpzakik" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "mclj3ytwnx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "kz4c240slf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "nwplfevrxw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "h1ig1prbuq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "dmzi3aztzd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "fw3fcrujzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "fwt5jlu31r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "km30avrcex" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "bfougxayhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "mieomydsao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "ammy3t1awn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "o4lq13rlvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "eyoe1cz1wp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "mt14yrnbuj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "irfppkdltu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "nslrl0uz53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "abih3gg12y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "bpia4crzhf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "iyhavcqilr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "mscgivy4fk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "imv3dllygl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "czx1gq31fm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "gtrcczzcor" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "k5nsrx2akm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "axkawtnuua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "alwc4n2foq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "irvj0luwjw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "FCElectricPlant" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "klcn51g3hh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "FCElectricPlant" } , { "fjefo04diq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "m5e23pbc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "struct_JO2GXfI9g1rAenTIGmuhPD" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_zSfISpRpY6aADD7OgXSulC" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_T7saNohyACqXXOy3H2fnU" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_AVcjrmtELi3LuatCvvLMfG" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_3IOgwpfZR8NxolTbeBLhyF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_DEUdl9FsF3TZX6EcHkXeP" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_diVjHTnqji583kVRbkkROE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_rvnIs9AHVZwu2w35qqPFFB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_Wto3791LsPBVcniRoISkOB" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_xYTLf9xRBpYnquzooZvpnD" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_DwpI6bQuIOImzafpnoLEKE" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_H6WPvM8rfrwYCCVKK0ESLD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_AFnjoI7EtZZSooCsoe6EE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * )
"uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , {
"int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_FCElectricPlant_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "FCElectricPlant" } , { "mr_FCElectricPlant_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "FCElectricPlant" } , { "FCElectricPlant.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "FCElectricPlant.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "FCElectricPlant" } } ; locdm2fqb0b locdm2fqb0 = { 0.0 , 0.1 ,
0.01 , 0.5 , 0.01 , 0.0 , 0.0 , 0.0 , 1.0 , 0.1 , 0.0 , - 1.0 , 0.0 , 0.0 ,
100.0 , 0.1 , 0.006 , 5.0 , 0.1 , 0.1 , 1.0 , 1.0 , 1.0 , 0.01 , 0.0 , -
1000.0 , 1000.0 , - 1000.0 , 1000.0 , - 1000.0 , 1000.0 , 0.0 , 201.6 , -
10.0 , 10.0 , - 10.0 , 10.0 , - 1.0 , 1.0 , - 0.5 , 0.5 , - 1.0 , 1.0 , - 1.0
, 1.0 , - 1.0 , 1.0 , - 1.0 , 1.0 , - 0.5 , 0.5 , - 0.5 , 0.5 , - 1000.0 ,
1000.0 , - 1000.0 , 1000.0 , 1.0 , 0.0 , - 1000.0 , 1000.0 , - 1.0 , - 1.0 ,
- 1.0 , - 1000.0 , 1000.0 , - 1.0 , 1.0 , 0.0 , - 1.0 , 1.0 , - 1.0 , 0.0 , -
1.0 , 1.0 , 0.0 , - 1000.0 , 1000.0 , - 1.0 , - 1.0 , 1.0 , 1.0 , 100.0 , -
1000.0 , 1.0 , 1000.0 , 0.65 , 0.0 , 1000.0 , 1000.0 , 1000.0 , 1000.0 , -
1000.0 , 1000.0 , 0.0001417340900162064 , 0.1 , 0.0 , 0.0 , 0.1 , 0.0 , 0.0 ,
0.0020408163265306124 , 1.0 , 0.0 , - 1.0 , 1.0 , - 1.0 , 0.0 , - 1.0 , 1.0 ,
- 1.0 , 0.0 , - 1.0 , 1.0 , - 1.0 , 0.0 , - 1.0 , 1.0 , - 1.0 , 0.0 , 300.0 ,
0.0 , 0.6 , 300.0 , 300.0 , 0.1 , 0.0 , 0.0 , 39.199999999999996 , 2.5 , 0.5
, 20.0 , 0.101325 , 0.0 , 0.21 , - 273.15 , 20.0 , 1.0 , 20.0 , 0.101325 ,
0.0 , 0.9997 , 0.0 , 20.0 , 0.101325 , 0.0 , 0.9997 , 20.0 , 0.101325 , 0.0 ,
0.9997 , 20.0 , 0.101325 , 0.0 , 0.9997 , 1.0 , 0.5 , 20.0 , 0.101325 , 0.0 ,
0.21 , 0.101325 , 0.06 , 0.5 , 20.0 , 0.101325 , 0.0 , 0.21 , 0.5 , 20.0 ,
0.101325 , 0.0 , 0.21 , 0.5 , 20.0 , 0.101325 , 0.0 , 0.21 , 0.101325 , 0.06
, 20.0 , 0.101325 , 0.0 , 0.9997 , 20.0 , 70.0 , 0.0 , 0.9997 , 0.2 , 20.0 ,
0.101325 , 0.0 , 0.9997 , 20.0 , 0.0 , 650.0 , 0U , { 0U , 1U } , 0U , { 0U ,
1U } , 0U , { 0U , 1U } , false } ; void irvj0luwjw ( m5e23pbc2h * const
lmamcwn3a2 , ammy3t1awn * localDW ) { if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Battery Power Accounting/Power Accounting Bus Creator" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 3 ] = { "W" , "W" ,
"W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 3 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.Batttransferred" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.BattnotTransferred" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 0 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrStored.Battstored" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo
[ 2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"908a74d8-46e4-4b52-87b1-a5208599d8b5" , 3 , leafElInfo , & localDW ->
osc4woswiv . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswiv . AQHandles [ 0 ] , 3 * sizeof ( & localDW -> osc4woswiv .
AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswiv . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswiv . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswiv . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswiv . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswiv . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswiv .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswiv . AQHandles [ 1 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswiv . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswiv . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswiv . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswiv .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswiv . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswiv . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswiv . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswiv . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswiv .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { }
} } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Motor Power Accounting/Power Accounting Bus Creator" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "W" , "W" ,
"W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 2 ] = { 1 , 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 2 ] = { 1 , 1 }
; int_T childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.DCPwrIn" ) ; leafElInfo [ 0 ] . dims . nDims = 2 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.BoostPwrIn" ) ; leafElInfo [
1 ] . dims . nDims = 2 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.MotPwrIn" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.MotPwrnotTransferred" ) ; leafElInfo [ 3 ] . dims . nDims = 2
; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrStored.MotPwrstored" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ;
leafElInfo [ 4 ] . dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ;
leafElInfo [ 4 ] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits
[ 4 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"82ddf5c0-eefe-4b0b-8708-1d5f4e16e985" , 5 , leafElInfo , & localDW ->
osc4woswivbkkc . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswivbkkc . AQHandles [ 0 ] , 5 * sizeof ( & localDW -> osc4woswivbkkc .
AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswivbkkc . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkc . AQHandles [ 0
] , "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate
( localDW -> osc4woswivbkkc . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkc . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkc .
AQHandles [ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkc . AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkc . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkc . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkc . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkc .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkc . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkc . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkc . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkc . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkc .
AQHandles [ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkc . AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkc . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkc . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkc . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkc .
AQHandles [ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkc . AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkc . AQHandles [ 4 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkc . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkc . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 2
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkc .
AQHandles [ 4 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkc . AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName (
leafElInfo [ 0 ] . signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName
) ; sdiFreeName ( leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 3 ] . signalName ) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if (
! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Boostout" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Boostout" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Boost Converter Power Accounting/Gain3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Boostout" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> edo2yybvgy . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "dde3cef4-27d2-4bf6-bfb0-a91bf5525da9" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> edo2yybvgy . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> edo2yybvgy . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> edo2yybvgy . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> edo2yybvgy . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
edo2yybvgy . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> edo2yybvgy . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> edo2yybvgy . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> edo2yybvgy
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Boostdissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"Boostdissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Boost Converter Power Accounting/Gain4" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Boostdissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> k5lhedc1qi . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "d9bc043c-0b3c-4e86-bf04-2d47c883984f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> k5lhedc1qi . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> k5lhedc1qi . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> k5lhedc1qi . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> k5lhedc1qi . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
k5lhedc1qi . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> k5lhedc1qi . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> k5lhedc1qi . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> k5lhedc1qi
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Boost Converter Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 1 ] = { 1 }
; { sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.BoostIn" ) ; leafElInfo [ 0
] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0
; leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.Boostout" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ; leafElInfo [
1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.Boostdissipated" ) ;
leafElInfo [ 2 ] . dims . nDims = 2 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ;
leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 0 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"a2875cc4-4b40-4d3c-8035-550b8b3a5510" , 4 , leafElInfo , & localDW ->
osc4woswivb . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswivb . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> osc4woswivb .
AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswivb . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswivb . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivb . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivb . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivb . AQHandles
[ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivb .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivb . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivb . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivb . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivb . AQHandles
[ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivb .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivb . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivb . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivb . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivb . AQHandles
[ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivb .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivb . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivb . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivb . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivb . AQHandles
[ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivb .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"dcdcout" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "dcdcout" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/DC-DC Converter  Power Accounting/Gain2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "dcdcout" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> buyjzzgvti . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "92318c77-6bf4-4641-bbc3-ae5cc3489971" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> buyjzzgvti . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> buyjzzgvti . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> buyjzzgvti . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> buyjzzgvti . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
buyjzzgvti . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> buyjzzgvti . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> buyjzzgvti . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> buyjzzgvti
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"dcdcnotTransf" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"dcdcnotTransf" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/DC-DC Converter  Power Accounting/Gain3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "dcdcnotTransf" ) ; sdiAsyncQueueHandle hForEachParent
= ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> edo2yybvgya . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a889b1fc-0bcb-40a2-a968-76f4182fcf17" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> edo2yybvgya . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> edo2yybvgya . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> edo2yybvgya . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> edo2yybvgya . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
edo2yybvgya . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> edo2yybvgya . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> edo2yybvgya . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
edo2yybvgya . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/DC-DC Converter  Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 1 ] = { 1 }
; { sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.dcdcIn" ) ; leafElInfo [ 0 ]
. dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.dcdcout" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ; leafElInfo [
1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.dcdcnotTransf" ) ;
leafElInfo [ 2 ] . dims . nDims = 2 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ;
leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 0 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"35bc9986-471b-4569-9f5a-9f85642f5e4f" , 4 , leafElInfo , & localDW ->
osc4woswivbk . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswivbk . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> osc4woswivbk .
AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswivbk . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswivbk . AQHandles [ 0 ]
, "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbk . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbk . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbk . AQHandles
[ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivbk .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbk . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbk . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbk . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbk . AQHandles
[ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivbk .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbk . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbk . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbk . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbk . AQHandles
[ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivbk .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbk . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbk . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbk . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbk . AQHandles
[ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> osc4woswivbk .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Fuel Cell Power Accounting/Power Accounting Bus Creator" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 3 ] = { "W" , "W" ,
"W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 3 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.FCtransferred" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.FCnottransferred" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrStored" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] .
dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 0 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"06638a0d-a86b-45e8-8b05-7cdf0d6e98d7" , 3 , leafElInfo , & localDW ->
osc4woswivbkk . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswivbkk . AQHandles [ 0 ] , 3 * sizeof ( & localDW -> osc4woswivbkk .
AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswivbkk . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkk . AQHandles [ 0 ]
, "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkk . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkk . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkk .
AQHandles [ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkk . AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkk . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkk . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkk . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkk .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkk . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkk . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkk . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkk . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkk .
AQHandles [ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkk . AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName (
leafElInfo [ 0 ] . signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName
) ; sdiFreeName ( leafElInfo [ 2 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Add1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jhjx45yzf4 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "4c69ac4a-b093-4b1d-af1f-89c8f4057de0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jhjx45yzf4 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> jhjx45yzf4 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jhjx45yzf4 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> jhjx45yzf4 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
jhjx45yzf4 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> jhjx45yzf4 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> jhjx45yzf4 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> jhjx45yzf4
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Add" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsb . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3348dfd4-b48c-457a-9528-77ef241eb0c1" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsb . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> gz2yikcxsb . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsb . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> gz2yikcxsb . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
gz2yikcxsb . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> gz2yikcxsb . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gz2yikcxsb . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> gz2yikcxsb
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"MotPwrnotTransferred" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"MotPwrnotTransferred" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Motor Power Accounting/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "MotPwrnotTransferred" )
; sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> aqh4yyrzcm . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "c9a3e688-7301-418b-8761-2e83460fcf83" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> aqh4yyrzcm . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> aqh4yyrzcm . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> aqh4yyrzcm . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> aqh4yyrzcm . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
aqh4yyrzcm . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> aqh4yyrzcm . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> aqh4yyrzcm . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> aqh4yyrzcm
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"MotPwrIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "MotPwrIn" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Gain" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "MotPwrIn" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dkfsbamwtk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a1c81041-bdd6-48b8-b899-61e56e925115" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dkfsbamwtk . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> dkfsbamwtk . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dkfsbamwtk . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dkfsbamwtk . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
dkfsbamwtk . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dkfsbamwtk . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dkfsbamwtk . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> dkfsbamwtk
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Battery System:2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Battery System:2" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars ( "FCElectricPlant/To Workspace" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Battery System:2" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"i_dcdc" ) ; sdiRegisterWksVariable ( hForEachParent , varName , "timeseries"
) ; sdiFreeLabel ( varName ) ; } sdiAsyncRepoSetBlockPathDomain (
hForEachParent ) ; isStreamoutAlreadyRegistered = true ; } localDW ->
jrwijamgle . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
lmamcwn3a2 -> DataMapInfo . mmi . InstanceMap . fullPath ,
"34919c04-9fd1-4cce-8a93-116aeb0c7228" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "A" ) ; sdiCompleteAsyncioQueueCreation (
localDW -> jrwijamgle . AQHandles , hDT , & srcInfo ) ; if ( localDW ->
jrwijamgle . AQHandles ) { sdiSetSignalSampleTimeString ( localDW ->
jrwijamgle . AQHandles , "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> jrwijamgle . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> jrwijamgle . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jrwijamgle . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jrwijamgle . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( localDW -> jrwijamgle . AQHandles ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jrwijamgle . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"i_dcdc" ) ; sdiRegisterWksVariable ( localDW -> jrwijamgle . AQHandles ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } if ( (
ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Sensing T Amb" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Sensing T Amb" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/To Workspace" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Sensing T Amb" ) ; sdiAsyncQueueHandle hForEachParent
= ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"Tamb" ) ; sdiRegisterWksVariable ( hForEachParent , varName , "timeseries" )
; sdiFreeLabel ( varName ) ; } sdiAsyncRepoSetBlockPathDomain (
hForEachParent ) ; isStreamoutAlreadyRegistered = true ; } localDW ->
jrwijamgle5 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
lmamcwn3a2 -> DataMapInfo . mmi . InstanceMap . fullPath ,
"a0f1ab72-0a0d-429d-9f1d-c5e82dafd45e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "deltaK" ) ; sdiCompleteAsyncioQueueCreation
( localDW -> jrwijamgle5 . AQHandles , hDT , & srcInfo ) ; if ( localDW ->
jrwijamgle5 . AQHandles ) { sdiSetSignalSampleTimeString ( localDW ->
jrwijamgle5 . AQHandles , "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) )
; sdiSetSignalRefRate ( localDW -> jrwijamgle5 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> jrwijamgle5 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jrwijamgle5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jrwijamgle5 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( localDW -> jrwijamgle5 . AQHandles ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jrwijamgle5 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Tamb" ) ; sdiRegisterWksVariable ( localDW -> jrwijamgle5 . AQHandles ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } if ( (
ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Phe" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Phe" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Electrical Cooling System/Heat flow sensor/PS-Simulink Converter2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Phe" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3d7e2964-7336-4950-b1ca-3628805b741c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> dcdtdbr1d3 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
dcdtdbr1d3 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> dcdtdbr1d3
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pconv" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pconv" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Electrical Cooling System/Heat flow sensor1/PS-Simulink Converter2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pconv" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3z . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "b8f448ef-d4cf-415f-b1ac-0152b2214db2" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3z . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> dcdtdbr1d3z . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3z . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3z . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
dcdtdbr1d3z . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3z . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3z . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
dcdtdbr1d3z . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pfc" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pfc" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Electrical Cooling System/Thermal Circuit Converter FC/PS-Simulink Converter4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pfc" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> i2u4vgtwno . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a6576052-ebe2-4762-8df1-cf776f672caa" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> i2u4vgtwno . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> i2u4vgtwno . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> i2u4vgtwno . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> i2u4vgtwno . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
i2u4vgtwno . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> i2u4vgtwno . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> i2u4vgtwno . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> i2u4vgtwno
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Ptcm" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Ptcm" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Electrical Cooling System/Thermal Circuit Motor/PS-Simulink Converter4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Ptcm" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> i2u4vgtwnoa . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "6e1fbd33-f5e1-4204-ba57-89c44c09fc6a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> i2u4vgtwnoa . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> i2u4vgtwnoa . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> i2u4vgtwnoa . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> i2u4vgtwnoa . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
i2u4vgtwnoa . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> i2u4vgtwnoa . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> i2u4vgtwnoa . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
i2u4vgtwnoa . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"u1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "u1" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor1/PS-Simulink Converter2" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "u1" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3z0 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "de14edbc-fb58-43b8-a4c7-230e9eaf2df6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kJ/kg" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3z0 . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> dcdtdbr1d3z0 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3z0 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3z0 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
dcdtdbr1d3z0 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3z0 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3z0 . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
dcdtdbr1d3z0 . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m1" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor1/PS-Simulink Converter7" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m1" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> m2qzuth4hh . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "4040e8f7-203d-4437-affb-49b610f6e27f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kg/s" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> m2qzuth4hh . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> m2qzuth4hh . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> m2qzuth4hh . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> m2qzuth4hh . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
m2qzuth4hh . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> m2qzuth4hh . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> m2qzuth4hh . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> m2qzuth4hh
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"p1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "p1" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor1/Product6" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "p1" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> fasht4sk1b . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "37483e1f-c717-4587-b55d-1ae74275009f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> fasht4sk1b . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> fasht4sk1b . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> fasht4sk1b . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> fasht4sk1b . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
fasht4sk1b . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> fasht4sk1b . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> fasht4sk1b . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> fasht4sk1b
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Phi1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Phi1" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor1/PS-Simulink Converter3" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Phi1" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nkz4go02r3 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "ea346b49-34c0-416a-84c9-2c6b8426b60b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nkz4go02r3 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> nkz4go02r3 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nkz4go02r3 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> nkz4go02r3 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
nkz4go02r3 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> nkz4go02r3 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> nkz4go02r3 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> nkz4go02r3
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"u2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "u2" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor2/PS-Simulink Converter2" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "u2" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3z0r . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "ee49c0a8-0486-4ec8-9826-d7bdea7562e3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kJ/kg" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3z0r . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> dcdtdbr1d3z0r . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3z0r . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3z0r . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> dcdtdbr1d3z0r . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3z0r . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3z0r .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
dcdtdbr1d3z0r . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m2" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor2/PS-Simulink Converter7" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m2" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> m2qzuth4hh2 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3f1a8721-59dd-4f79-83ea-855c7f719a09" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kg/s" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> m2qzuth4hh2 . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> m2qzuth4hh2 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> m2qzuth4hh2 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> m2qzuth4hh2 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
m2qzuth4hh2 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> m2qzuth4hh2 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> m2qzuth4hh2 . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
m2qzuth4hh2 . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"p2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "p2" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor2/Product6" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "p2" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> fasht4sk1bm . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "834dd4f8-a1e3-4940-9598-465589710d79" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> fasht4sk1bm . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> fasht4sk1bm . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> fasht4sk1bm . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> fasht4sk1bm . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
fasht4sk1bm . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> fasht4sk1bm . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> fasht4sk1bm . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
fasht4sk1bm . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m2" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor2/PS-Simulink Converter1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m2" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> j033re5cgt . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "c86779dd-c8fb-4ece-a130-b5978e2c28a8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> j033re5cgt . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> j033re5cgt . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> j033re5cgt . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> j033re5cgt . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
j033re5cgt . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> j033re5cgt . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> j033re5cgt . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> j033re5cgt
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"T2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "T2" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor2/PS-Simulink Converter6" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "T2" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> iuyyqw2ka5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "8e19d933-fa1e-4aae-ac17-c05d10d88f82" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "deltaK" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> iuyyqw2ka5 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> iuyyqw2ka5 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> iuyyqw2ka5 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> iuyyqw2ka5 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
iuyyqw2ka5 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iuyyqw2ka5 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iuyyqw2ka5 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> iuyyqw2ka5
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"u3" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "u3" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor3/PS-Simulink Converter2" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "u3" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3z0re . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3c27e7c9-38b4-475c-809a-400f6ac33fd5" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kJ/kg" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3z0re . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> dcdtdbr1d3z0re . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3z0re . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3z0re . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> dcdtdbr1d3z0re . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3z0re . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3z0re .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
dcdtdbr1d3z0re . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName !=
sigName ) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m3" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m3" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor3/PS-Simulink Converter7" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m3" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> m2qzuth4hh2u . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3c837387-edc3-4a61-9dc4-1196da53151a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kg/s" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> m2qzuth4hh2u . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> m2qzuth4hh2u . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> m2qzuth4hh2u . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> m2qzuth4hh2u . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
m2qzuth4hh2u . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> m2qzuth4hh2u . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> m2qzuth4hh2u . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
m2qzuth4hh2u . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"p3" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "p3" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor3/Product6" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "p3" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> fasht4sk1bmp . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a5afb173-0306-4cc0-a3e5-8225f010fa88" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> fasht4sk1bmp . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> fasht4sk1bmp . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> fasht4sk1bmp . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> fasht4sk1bmp . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
fasht4sk1bmp . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> fasht4sk1bmp . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> fasht4sk1bmp . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
fasht4sk1bmp . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"P3" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "P3" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor3/PS-Simulink Converter1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "P3" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> j033re5cgtw . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3cf86a26-90da-44af-b47d-59b93d0e3205" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> j033re5cgtw . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> j033re5cgtw . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> j033re5cgtw . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> j033re5cgtw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
j033re5cgtw . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> j033re5cgtw . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> j033re5cgtw . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
j033re5cgtw . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"u4" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "u4" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor4/PS-Simulink Converter2" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "u4" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dcdtdbr1d3z0rew . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "0725d424-d3ed-47e0-b243-de9c6936646e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kJ/kg" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dcdtdbr1d3z0rew . AQHandles ,
hDT , & srcInfo ) ; if ( localDW -> dcdtdbr1d3z0rew . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dcdtdbr1d3z0rew . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> dcdtdbr1d3z0rew . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> dcdtdbr1d3z0rew . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dcdtdbr1d3z0rew . AQHandles
, 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dcdtdbr1d3z0rew .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
dcdtdbr1d3z0rew . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName !=
sigName ) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m4" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m4" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor4/PS-Simulink Converter7" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m4" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> m2qzuth4hh2ux . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "ebcac083-500c-4d40-b777-14604ebd1742" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kg/s" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> m2qzuth4hh2ux . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> m2qzuth4hh2ux . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> m2qzuth4hh2ux . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> m2qzuth4hh2ux . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> m2qzuth4hh2ux . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> m2qzuth4hh2ux . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> m2qzuth4hh2ux .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
m2qzuth4hh2ux . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"p4" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "p4" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor4/Product6" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "p4" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> fasht4sk1bmpq . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "f36d75d9-dd16-4107-870f-06e8eeabc008" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> fasht4sk1bmpq . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> fasht4sk1bmpq . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> fasht4sk1bmpq . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> fasht4sk1bmpq . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> fasht4sk1bmpq . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> fasht4sk1bmpq . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> fasht4sk1bmpq .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
fasht4sk1bmpq . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"m4" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "m4" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Electrical Cooling System/sensor4/PS-Simulink Converter1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "m4" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> j033re5cgtw2 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "8f607511-c987-47f9-b65c-efd08b9bd89f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> j033re5cgtw2 . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> j033re5cgtw2 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> j033re5cgtw2 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> j033re5cgtw2 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
j033re5cgtw2 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> j033re5cgtw2 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> j033re5cgtw2 . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
j033re5cgtw2 . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Add" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbr . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "df98737a-a04e-4ef6-8a86-66f2c964cb85" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbr . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> gz2yikcxsbr . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbr . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> gz2yikcxsbr . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
gz2yikcxsbr . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> gz2yikcxsbr . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gz2yikcxsbr . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
gz2yikcxsbr . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/P1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jb5p2yd0pp . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "49dffa9c-6399-4398-9f54-d1f76c2157f4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jb5p2yd0pp . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> jb5p2yd0pp . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jb5p2yd0pp . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> jb5p2yd0pp . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
jb5p2yd0pp . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> jb5p2yd0pp . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> jb5p2yd0pp . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> jb5p2yd0pp
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "W" , "W" ,
"W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 2 ] = { 1 , 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 2 ] = { 1 ,
1 } ; int_T childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT
= sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0
] . hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyIn" ) ; leafElInfo [ 0 ] . dims . nDims = 2 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyOut" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.HeatDissipated" ) ; leafElInfo [ 2 ] . dims . nDims = 2 ;
leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ;
leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits
[ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PowerNotTransferred1" ) ; leafElInfo [ 3 ] . dims . nDims = 2
; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrStored" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] .
dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"aa1dfb7c-9825-4e26-8805-585ef7f79a58" , 5 , leafElInfo , & localDW ->
osc4woswivbkkch . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
osc4woswivbkkch . AQHandles [ 0 ] , 5 * sizeof ( & localDW -> osc4woswivbkkch
. AQHandles [ 0 ] ) ) ; if ( localDW -> osc4woswivbkkch . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkch . AQHandles [ 0
] , "Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate
( localDW -> osc4woswivbkkch . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkch . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 ,
0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkch .
AQHandles [ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkch . AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkch . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkch . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkch . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 ,
0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkch .
AQHandles [ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkch . AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkch . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkch . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkch . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 ,
0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkch .
AQHandles [ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkch . AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkch . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkch . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkch . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 ,
0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkch .
AQHandles [ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkch . AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> osc4woswivbkkch . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> osc4woswivbkkch . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> osc4woswivbkkch . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 ,
1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> osc4woswivbkkch .
AQHandles [ 4 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW ->
osc4woswivbkkch . AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName (
leafElInfo [ 0 ] . signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName
) ; sdiFreeName ( leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 3 ] . signalName ) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if (
! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3a55345b-f6cf-4ff4-be05-c1081544ff81" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> gz2yikcxsbro . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> gz2yikcxsbro . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
gz2yikcxsbro . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> gz2yikcxsbro . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gz2yikcxsbro . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
gz2yikcxsbro . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/P3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nwagfadtz5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "98540f84-2da4-4a4f-a442-f42c19a75941" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nwagfadtz5 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> nwagfadtz5 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nwagfadtz5 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> nwagfadtz5 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
nwagfadtz5 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> nwagfadtz5 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> nwagfadtz5 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> nwagfadtz5
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/P4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> ir3sjqcelg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "dfe2c03f-1f9e-4b51-a931-a00d5a8c9e9c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> ir3sjqcelg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> ir3sjqcelg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> ir3sjqcelg . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> ir3sjqcelg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
ir3sjqcelg . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> ir3sjqcelg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> ir3sjqcelg . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> ir3sjqcelg
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Phe"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> boxtz4t1xz . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "eeccc0d2-1cd3-4ce3-921d-ae01a1e39b59" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> boxtz4t1xz . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> boxtz4t1xz . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> boxtz4t1xz . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> boxtz4t1xz . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
boxtz4t1xz . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> boxtz4t1xz . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> boxtz4t1xz . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> boxtz4t1xz
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "W" , "W" ,
"W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 2 ] = { 1 , 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 2 ] = { 1 ,
1 } ; int_T childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT
= sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0
] . hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyIn" ) ; leafElInfo [ 0 ] . dims . nDims = 2 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyOut" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.HeatDissipated" ) ; leafElInfo [ 2 ] . dims . nDims = 2 ;
leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ;
leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits
[ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PowerNotTransferred1" ) ; leafElInfo [ 3 ] . dims . nDims = 2
; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrStored" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] .
dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"139ddb8a-aa5f-47fb-b901-1be4bf4b79ea" , 5 , leafElInfo , & localDW ->
egl1qa3rz0 . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
egl1qa3rz0 . AQHandles [ 0 ] , 5 * sizeof ( & localDW -> egl1qa3rz0 .
AQHandles [ 0 ] ) ) ; if ( localDW -> egl1qa3rz0 . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> egl1qa3rz0 . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> egl1qa3rz0 . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> egl1qa3rz0 . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> egl1qa3rz0 . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> egl1qa3rz0 .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> egl1qa3rz0 . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> egl1qa3rz0 . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> egl1qa3rz0 . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> egl1qa3rz0 . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> egl1qa3rz0 .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> egl1qa3rz0 . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> egl1qa3rz0 . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> egl1qa3rz0 . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> egl1qa3rz0 . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> egl1qa3rz0 .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> egl1qa3rz0 . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> egl1qa3rz0 . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> egl1qa3rz0 . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> egl1qa3rz0 . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> egl1qa3rz0 .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> egl1qa3rz0 . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> egl1qa3rz0 . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> egl1qa3rz0 . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> egl1qa3rz0 . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> egl1qa3rz0 .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro0 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "27bd3981-706e-4ef0-8167-f0efdb542137" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro0 . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> gz2yikcxsbro0 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro0 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> gz2yikcxsbro0 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> gz2yikcxsbro0 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> gz2yikcxsbro0 . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gz2yikcxsbro0 .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
gz2yikcxsbro0 . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName
) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/P1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jb5p2yd0ppu . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "811447fe-f2d4-4aaa-8f15-528c9ec1041d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jb5p2yd0ppu . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> jb5p2yd0ppu . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jb5p2yd0ppu . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> jb5p2yd0ppu . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
jb5p2yd0ppu . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> jb5p2yd0ppu . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> jb5p2yd0ppu . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
jb5p2yd0ppu . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/P2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> pt2ziyjsco . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a527cb92-3b2e-4b1e-925d-71238c441c33" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> pt2ziyjsco . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> pt2ziyjsco . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> pt2ziyjsco . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> pt2ziyjsco . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
pt2ziyjsco . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> pt2ziyjsco . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> pt2ziyjsco . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> pt2ziyjsco
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Pfc"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "HeatDissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> kesjhajib2 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "7c0fc785-1d78-4b7b-9e24-aa1c751a98af" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> kesjhajib2 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> kesjhajib2 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> kesjhajib2 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> kesjhajib2 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
kesjhajib2 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> kesjhajib2 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kesjhajib2 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> kesjhajib2
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "W" , "W" ,
"W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 2 ] = { 1 , 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 2 ] = { 1 ,
1 } ; int_T childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT
= sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0
] . hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyIn" ) ; leafElInfo [ 0 ] . dims . nDims = 2 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyOut" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.HeatDissipated" ) ; leafElInfo [ 2 ] . dims . nDims = 2 ;
leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ;
leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits
[ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PowerNotTransferred1" ) ; leafElInfo [ 3 ] . dims . nDims = 2
; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrStored" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] .
dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"e39aee06-15a6-4ba5-9fbe-22d6c01ea955" , 5 , leafElInfo , & localDW ->
lgy0uoa1sd . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
lgy0uoa1sd . AQHandles [ 0 ] , 5 * sizeof ( & localDW -> lgy0uoa1sd .
AQHandles [ 0 ] ) ) ; if ( localDW -> lgy0uoa1sd . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> lgy0uoa1sd . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> lgy0uoa1sd . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> lgy0uoa1sd . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> lgy0uoa1sd . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> lgy0uoa1sd .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> lgy0uoa1sd . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> lgy0uoa1sd . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> lgy0uoa1sd . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> lgy0uoa1sd . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> lgy0uoa1sd .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> lgy0uoa1sd . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> lgy0uoa1sd . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> lgy0uoa1sd . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> lgy0uoa1sd . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> lgy0uoa1sd .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> lgy0uoa1sd . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> lgy0uoa1sd . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> lgy0uoa1sd . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> lgy0uoa1sd . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> lgy0uoa1sd .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> lgy0uoa1sd . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> lgy0uoa1sd . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> lgy0uoa1sd . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> lgy0uoa1sd . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> lgy0uoa1sd .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"P diff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "P diff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "P diff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro0p . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "b5d6ed1e-8833-435b-8d55-fca5ef7d8780" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro0p . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> gz2yikcxsbro0p . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro0p . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> gz2yikcxsbro0p . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW
-> gz2yikcxsbro0p . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> gz2yikcxsbro0p . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gz2yikcxsbro0p .
AQHandles , loggedName , origSigName , propName ) ; if ( forEachMdlRefDims .
nDims > 0 ) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
gz2yikcxsbro0p . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName !=
sigName ) { sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/P2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> pt2ziyjsco3 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "1a7464d2-7000-4a6f-b967-8f8204e6321f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> pt2ziyjsco3 . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> pt2ziyjsco3 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> pt2ziyjsco3 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> pt2ziyjsco3 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
pt2ziyjsco3 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> pt2ziyjsco3 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> pt2ziyjsco3 . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
pt2ziyjsco3 . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/P3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nwagfadtz5a . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "6e8dffcc-dbab-491c-bde0-bc06fa1787dc" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nwagfadtz5a . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> nwagfadtz5a . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nwagfadtz5a . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> nwagfadtz5a . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
nwagfadtz5a . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> nwagfadtz5a . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> nwagfadtz5a . AQHandles
, loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0
) { sdiAttachForEachIterationToParent ( hForEachParent , localDW ->
nwagfadtz5a . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 5 ] = { "W" , "W" ,
"W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 5 ] ; int_T
childDimsArray0 [ 2 ] = { 1 , 1 } ; int_T childDimsArray1 [ 2 ] = { 1 , 1 } ;
int_T childDimsArray2 [ 2 ] = { 1 , 1 } ; int_T childDimsArray3 [ 2 ] = { 1 ,
1 } ; int_T childDimsArray4 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT
= sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0
] . hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyIn" ) ; leafElInfo [ 0 ] . dims . nDims = 2 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.InternalEnergyOut" ) ; leafElInfo [ 1 ] . dims . nDims = 2 ;
leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ;
leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits
[ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.HeatDissipated" ) ; leafElInfo [ 2 ] . dims . nDims = 2 ;
leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ;
leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits
[ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PowerNotTransferred1" ) ; leafElInfo [ 3 ] . dims . nDims = 2
; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ;
leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits
[ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrStored" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] .
dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 0 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , lmamcwn3a2
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"ac985bdb-a79f-406c-83ae-3789a6e169bd" , 5 , leafElInfo , & localDW ->
mi0wkvcekx . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS , & localDW ->
mi0wkvcekx . AQHandles [ 0 ] , 5 * sizeof ( & localDW -> mi0wkvcekx .
AQHandles [ 0 ] ) ) ; if ( localDW -> mi0wkvcekx . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> mi0wkvcekx . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> mi0wkvcekx . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> mi0wkvcekx . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> mi0wkvcekx . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mi0wkvcekx .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> mi0wkvcekx . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> mi0wkvcekx . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> mi0wkvcekx . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> mi0wkvcekx . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mi0wkvcekx .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> mi0wkvcekx . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> mi0wkvcekx . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> mi0wkvcekx . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> mi0wkvcekx . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mi0wkvcekx .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> mi0wkvcekx . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> mi0wkvcekx . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> mi0wkvcekx . AQHandles [ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> mi0wkvcekx . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mi0wkvcekx .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> mi0wkvcekx . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> mi0wkvcekx . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> mi0wkvcekx . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> mi0wkvcekx . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> mi0wkvcekx .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Ptcm"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "HeatDissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> li5lvqaaj1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "e787fdf5-c72f-4a88-876e-3c27e376d4b8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> li5lvqaaj1 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> li5lvqaaj1 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> li5lvqaaj1 . AQHandles ,
"Continuous" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ; sdiSetSignalRefRate (
localDW -> li5lvqaaj1 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW ->
li5lvqaaj1 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> li5lvqaaj1 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> li5lvqaaj1 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> li5lvqaaj1
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} } void k5nsrx2akm ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; void * S ; void
* diag ; localX -> bfsuffvrld = 0.0 ; localX -> ll2zpokgiv = 0.0 ; localX ->
o2r5v3x4i0 = 0.0 ; localX -> l4izeu1m2j = 0.0 ; localX -> bsitd53ytf = 0.0 ;
localX -> l5dycs0bvi = locdm2fqb0 . P_5 ; localX -> fqwgy5xfo2 = 0.0 ; localX
-> mspdttcnoi = 0.0 ; localX -> iru3slp4rk = 0.0 ; localX -> gq2lttxonz = 0.0
; localX -> egvmmui2tw = 0.0 ; localX -> p2q3k5uofv = 0.0 ; localX ->
ft42zg3ldp = 0.0 ; localX -> bv3salhmw5 = 0.0 ; localX -> mqbbmlcioe = 0.0 ;
localX -> ovfkya0dec = 0.0 ; localDW -> iendyrbljp = 1 ; if (
rtmIsFirstInitCond ( lmamcwn3a2 ) ) { localX -> fgagg4wluz = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; localDW ->
iendyrbljp = ! tmp ; } else { localDW -> iendyrbljp = 1 ; } localX ->
le0qy3dd51 = 0.0 ; } localDW -> k43gfcul4g = 1 ; if ( rtmIsFirstInitCond (
lmamcwn3a2 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; localDW
-> k43gfcul4g = ! tmp ; } else { localDW -> k43gfcul4g = 1 ; } } localX ->
eh3gmz41df = 0.0 ; tmp = false ; tmp_p = true ; if ( tmp_p || tmp ) { is =
strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "daessc" ) ; tmp_e
= strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode14x" ) ;
tmp_i = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode15s" )
; tmp_m = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode1be"
) ; tmp_g = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) ,
"ode23t" ) ; tmp_j = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS )
, "odeN" ) ; if ( ( boolean_T ) ( ( is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0
) & ( tmp_m != 0 ) & ( tmp_g != 0 ) & ( tmp_j != 0 ) ) ) { S = lmamcwn3a2 ->
_mdlRefSfcnS ; diag = CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "ode23t" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } localX -> pe3foqvhcv = 0.0 ; localX ->
ahqoemcw2g = 0.0 ; localX -> owi0hrxchy = locdm2fqb0 . P_86 ; localDW ->
o0gi1dmk1n = locdm2fqb0 . P_202 ; localX -> ecw01zmuxh = 0.0 ; localX ->
d411ir5utj = locdm2fqb0 . P_6 ; localX -> hqy4omzhyd = locdm2fqb0 . P_7 ; }
void gtrcczzcor ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; void * S ; void
* diag ; localX -> bfsuffvrld = 0.0 ; localX -> ll2zpokgiv = 0.0 ; localX ->
o2r5v3x4i0 = 0.0 ; localX -> l4izeu1m2j = 0.0 ; localX -> bsitd53ytf = 0.0 ;
localX -> l5dycs0bvi = locdm2fqb0 . P_5 ; localX -> fqwgy5xfo2 = 0.0 ; localX
-> mspdttcnoi = 0.0 ; localX -> iru3slp4rk = 0.0 ; localX -> gq2lttxonz = 0.0
; localX -> egvmmui2tw = 0.0 ; localX -> p2q3k5uofv = 0.0 ; localX ->
ft42zg3ldp = 0.0 ; localX -> bv3salhmw5 = 0.0 ; localX -> mqbbmlcioe = 0.0 ;
localX -> ovfkya0dec = 0.0 ; localDW -> iendyrbljp = 1 ; if (
rtmIsFirstInitCond ( lmamcwn3a2 ) ) { localX -> fgagg4wluz = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; localDW ->
iendyrbljp = ! tmp ; } else { localDW -> iendyrbljp = 1 ; } localX ->
le0qy3dd51 = 0.0 ; } localDW -> k43gfcul4g = 1 ; if ( rtmIsFirstInitCond (
lmamcwn3a2 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; localDW
-> k43gfcul4g = ! tmp ; } else { localDW -> k43gfcul4g = 1 ; } } localX ->
eh3gmz41df = 0.0 ; tmp = false ; tmp_p = true ; if ( tmp_p || tmp ) { is =
strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "daessc" ) ; tmp_e
= strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode14x" ) ;
tmp_i = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode15s" )
; tmp_m = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode1be"
) ; tmp_g = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) ,
"ode23t" ) ; tmp_j = strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS )
, "odeN" ) ; if ( ( boolean_T ) ( ( is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0
) & ( tmp_m != 0 ) & ( tmp_g != 0 ) & ( tmp_j != 0 ) ) ) { S = lmamcwn3a2 ->
_mdlRefSfcnS ; diag = CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "ode23t" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } localX -> pe3foqvhcv = 0.0 ; localX ->
ahqoemcw2g = 0.0 ; localX -> owi0hrxchy = locdm2fqb0 . P_86 ; localDW ->
o0gi1dmk1n = locdm2fqb0 . P_202 ; localX -> ecw01zmuxh = 0.0 ; localX ->
d411ir5utj = locdm2fqb0 . P_6 ; localX -> hqy4omzhyd = locdm2fqb0 . P_7 ; }
void alwc4n2foq ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , kz4c240slf * localXPerturbMin ,
mclj3ytwnx * localXPerturbMax ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_e ; NeModelParameters modelParameters_i ;
NeModelParameters modelParameters_p ; NeslRtpManager * manager ;
NeslRtpManager * manager_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp_p ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_m ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_i ; char * msg_m ; char * msg_p ; real_T tmp_m [ 64 ] ; real_T time ;
real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 17 ] ; boolean_T tmp ; boolean_T
val ; localB -> fx43kwv5es = locdm2fqb0 . P_126 ; manager_p =
nesl_lease_rtp_manager ( "FCElectricPlant/Solver Configuration_1" , 0 ) ;
manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp ) {
FCElectricPlant_ac851afd_1_gateway ( ) ; manager = nesl_lease_rtp_manager (
"FCElectricPlant/Solver Configuration_1" , 0 ) ; } localDW -> hmxbw2za12 = (
void * ) manager ; localDW -> kobagp2t5x = true ; tmp_p =
nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1" , 0 , 0 ) ;
localDW -> icqagpp0oe = ( void * ) tmp_p ; tmp = pointer_is_null ( localDW ->
icqagpp0oe ) ; if ( tmp ) { FCElectricPlant_ac851afd_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1" , 0 , 0 ) ;
localDW -> icqagpp0oe = ( void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP
( lmamcwn3a2 -> _mdlRefSfcnS , "FCElectricPlant/Solver Configuration_100" , (
void * * ) ( & localDW -> icqagpp0oe ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; localDW -> nrcoddu4oo = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; localDW ->
dfmft0mmxa = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mSolverAbsTol = 0.001 ; modelParameters . mSolverRelTol =
0.001 ; modelParameters . mVariableStepSolver = true ; modelParameters .
mIsUsingODEN = false ; modelParameters . mSolverModifyAbsTol =
NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mFixedStepSize = 0.001 ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ;
modelParameters . mRTWModifiedTimeStamp = 6.07432202E+8 ; modelParameters .
mZcDisabled = false ; tmp_e = 0.001 ; modelParameters . mSolverTolerance =
tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize = tmp_e ; tmp = true ;
modelParameters . mVariableStepSolver = tmp ; tmp = false ; modelParameters .
mIsUsingODEN = tmp ; val = false ; tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 ->
_mdlRefSfcnS ) ; val = ( tmp && rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) localDW -> dfmft0mmxa
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> icqagpp0oe , & modelParameters , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } simulationData
= ( NeslSimulationData * ) localDW -> nrcoddu4oo ; time = rtmGetTaskTime (
lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 575 ; simulationData -> mData -> mContStates . mX = & localX -> hc0befvp5x
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> jvpu2sz5kh ; simulationData -> mData
-> mModeVector . mN = 356 ; simulationData -> mData -> mModeVector . mX = &
localDW -> jrexd3jabx [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_m [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_m [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_m
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_m [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_m [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_m [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_m [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_m [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_m [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_m [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_m [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_m [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_m [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_m [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_m [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_g [ 5 ] =
20 ; tmp_m [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_m [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_m [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_m [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_m [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_m [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_m [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_m [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_m [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_m [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_m [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_m [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_m [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_m [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_m [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_m [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_g [ 10 ] =
40 ; tmp_m [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_m [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_m [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_m [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_m [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_m [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_m [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_g [ 12 ] = 48 ; tmp_m [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_m [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_m [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_m [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_g [ 13 ] = 52 ; tmp_m [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_m [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_m [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_m [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_g [ 14 ] = 56 ; tmp_m [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_m [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_m [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_m [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_g [ 15 ] =
60 ; tmp_m [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_m [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_m [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_m [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_g [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 575 ; simulationData -> mData
-> mNumjacDxLo . mX = & localXPerturbMin -> hc0befvp5x [ 0 ] ; simulationData
-> mData -> mNumjacDxHi . mN = 575 ; simulationData -> mData -> mNumjacDxHi .
mX = & localXPerturbMax -> hc0befvp5x [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> dfmft0mmxa ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg_p = rtw_diagnostics_msg (
diagnosticTree_p ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_p )
; } } tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1"
, 1 , 0 ) ; localDW -> m2lsrsmett = ( void * ) tmp_p ; tmp = pointer_is_null
( localDW -> m2lsrsmett ) ; if ( tmp ) { FCElectricPlant_ac851afd_1_gateway (
) ; tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1" ,
1 , 0 ) ; localDW -> m2lsrsmett = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS ,
"FCElectricPlant/Solver Configuration_110" , ( void * * ) ( & localDW ->
m2lsrsmett ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
localDW -> m5secpsmnt = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; localDW -> g3dbxdq2jx = ( void * )
diagnosticManager ; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_p . mSolverTolerance = 0.001 ; modelParameters_p .
mSolverAbsTol = 0.001 ; modelParameters_p . mSolverRelTol = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mSolverModifyAbsTol =
NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 6.07432202E+8 ;
modelParameters_p . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp = true ; modelParameters_p . mVariableStepSolver = tmp ; tmp =
false ; modelParameters_p . mIsUsingODEN = tmp ; val = false ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; val = (
tmp && rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; } modelParameters_p .
mLoadInitialState = val ; modelParameters_p . mZcDisabled = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> g3dbxdq2jx ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> m2lsrsmett , & modelParameters_p , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg_e = rtw_diagnostics_msg (
diagnosticTree_e ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_e )
; } } tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1"
, 1 , 1 ) ; localDW -> ogakvee5zl = ( void * ) tmp_p ; tmp = pointer_is_null
( localDW -> ogakvee5zl ) ; if ( tmp ) { FCElectricPlant_ac851afd_1_gateway (
) ; tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1" ,
1 , 1 ) ; localDW -> ogakvee5zl = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS ,
"FCElectricPlant/Solver Configuration_111" , ( void * * ) ( & localDW ->
ogakvee5zl ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
localDW -> grsi0hcpom = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; localDW -> hrog11bqbc = ( void * )
diagnosticManager ; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_e . mSolverTolerance = 0.001 ; modelParameters_e .
mSolverAbsTol = 0.001 ; modelParameters_e . mSolverRelTol = 0.001 ;
modelParameters_e . mVariableStepSolver = true ; modelParameters_e .
mIsUsingODEN = false ; modelParameters_e . mSolverModifyAbsTol =
NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_e . mFixedStepSize = 0.001 ;
modelParameters_e . mStartTime = 0.0 ; modelParameters_e . mLoadInitialState
= false ; modelParameters_e . mUseSimState = false ; modelParameters_e .
mLinTrimCompile = false ; modelParameters_e . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_e . mRTWModifiedTimeStamp = 6.07432202E+8 ;
modelParameters_e . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_e ; tmp = true ; modelParameters_e . mVariableStepSolver = tmp ; tmp =
false ; modelParameters_e . mIsUsingODEN = tmp ; val = false ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; val = (
tmp && rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; } modelParameters_e .
mLoadInitialState = val ; modelParameters_e . mZcDisabled = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> hrog11bqbc ;
diagnosticTree_i = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> ogakvee5zl , & modelParameters_e , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg_i = rtw_diagnostics_msg (
diagnosticTree_i ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_i )
; } } tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1"
, 1 , 2 ) ; localDW -> c0et2sljbx = ( void * ) tmp_p ; tmp = pointer_is_null
( localDW -> c0et2sljbx ) ; if ( tmp ) { FCElectricPlant_ac851afd_1_gateway (
) ; tmp_p = nesl_lease_simulator ( "FCElectricPlant/Solver Configuration_1" ,
1 , 2 ) ; localDW -> c0et2sljbx = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( lmamcwn3a2 -> _mdlRefSfcnS ,
"FCElectricPlant/Solver Configuration_112" , ( void * * ) ( & localDW ->
c0et2sljbx ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
localDW -> ip3im53ih0 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; localDW -> an32etucup = ( void * )
diagnosticManager ; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_i . mSolverTolerance = 0.001 ; modelParameters_i .
mSolverAbsTol = 0.001 ; modelParameters_i . mSolverRelTol = 0.001 ;
modelParameters_i . mVariableStepSolver = true ; modelParameters_i .
mIsUsingODEN = false ; modelParameters_i . mSolverModifyAbsTol =
NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_i . mFixedStepSize = 0.001 ;
modelParameters_i . mStartTime = 0.0 ; modelParameters_i . mLoadInitialState
= false ; modelParameters_i . mUseSimState = false ; modelParameters_i .
mLinTrimCompile = false ; modelParameters_i . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_i . mRTWModifiedTimeStamp = 6.07432202E+8 ;
modelParameters_i . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_e ; tmp = true ; modelParameters_i . mVariableStepSolver = tmp ; tmp =
false ; modelParameters_i . mIsUsingODEN = tmp ; val = false ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ; val = (
tmp && rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; } modelParameters_i .
mLoadInitialState = val ; modelParameters_i . mZcDisabled = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> an32etucup ;
diagnosticTree_m = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> c0et2sljbx , & modelParameters_i , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg_m = rtw_diagnostics_msg (
diagnosticTree_m ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_m )
; } } } void FCElectricPlant ( m5e23pbc2h * const lmamcwn3a2 , const real_T *
nhquhhxexx , const real_T * crmxvln0sn , const real_T * g2vu2rouzu , const
real_T * ooqs53wghs , const real_T * nvlm0heabm , real_T * laajwttrsw ,
real_T * l45wd5pbjh , real_T * pjtg1ua4jf , real_T * jkukrewnlm , real_T *
lwu0tsgovp , real_T * oz3dekjw3t , real_T * ca0lva1ra5 , real_T * csbds3kgit
, o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX ,
km30avrcex * localZCE ) { real_T kynsfyjxhy ; real_T hbwjt2lgfx ; real_T
fuolrvutdw ; real_T mllz3vkg4t ; real_T jiezoh3irw ; real_T gisspxfgoa ;
NeParameterBundle expl_temp ; NeslSimulationData * simulationData ;
NeuDiagnosticManager * diag ; NeuDiagnosticTree * diagTree ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_m ; char * msg_p ;
real_T tmp_p [ 64 ] ; real_T tmp [ 63 ] ; real_T bcstrpzjmc [ 4 ] ; real_T
a5n14jqzrs_p ; real_T beco0jpooh_p ; real_T c3d3bcnoo3_p ; real_T
cemllnpu10_p ; real_T cemllnpu10_tmp ; real_T ci0brte1rv ; real_T
cjse0dqziw_p ; real_T cqrg5czzn3 ; real_T dftg5mfwlq ; real_T fcgazvxoo5_p ;
real_T fthw1ygvk1 ; real_T gqcnv04onp ; real_T hgkcd1aqme ; real_T
k0sa13awap_p ; real_T kfjvmep0su_p ; real_T o2ktfv4mqu_p ; real_T o5aw3xkgct
; real_T time ; real_T time_e ; real_T time_f ; real_T time_g ; real_T time_i
; real_T time_j ; real_T time_m ; real_T time_p ; real_T *
parameterBundle_mRealParameters_mX ; int_T tmp_g [ 18 ] ; int_T tmp_j [ 18 ]
; int_T tmp_m [ 18 ] ; int_T tmp_e [ 17 ] ; int_T iy ; boolean_T
didZcEventOccur ; boolean_T eqsctuf31b_p ; boolean_T tmp_i ; fcgazvxoo5_p =
locdm2fqb0 . P_26 * localX -> bfsuffvrld ; localB -> nvx5lf44af [ 0 ] = *
g2vu2rouzu ; localB -> nvx5lf44af [ 1 ] = 0.0 ; localB -> nvx5lf44af [ 2 ] =
0.0 ; localB -> nvx5lf44af [ 3 ] = 0.0 ; c3d3bcnoo3_p = locdm2fqb0 . P_28 *
localX -> ll2zpokgiv ; if ( fcgazvxoo5_p > locdm2fqb0 . P_31 ) { kfjvmep0su_p
= locdm2fqb0 . P_31 ; } else if ( fcgazvxoo5_p < locdm2fqb0 . P_32 ) {
kfjvmep0su_p = locdm2fqb0 . P_32 ; } else { kfjvmep0su_p = fcgazvxoo5_p ; }
localB -> mdomnmflce = ( locdm2fqb0 . P_30 * localX -> o2r5v3x4i0 +
c3d3bcnoo3_p ) / kfjvmep0su_p ; if ( localDW -> biz2tfyo24 == 0.0 ) { localDW
-> biz2tfyo24 = 1.0 ; localX -> ododiz1doe = localB -> mdomnmflce ; } localB
-> de33fjxukj [ 0 ] = localX -> ododiz1doe ; localB -> de33fjxukj [ 1 ] = (
localB -> mdomnmflce - localX -> ododiz1doe ) * 1000.0 ; localB -> de33fjxukj
[ 2 ] = 0.0 ; localB -> de33fjxukj [ 3 ] = 0.0 ; k0sa13awap_p = locdm2fqb0 .
P_36 * localX -> bsitd53ytf - locdm2fqb0 . P_34 * localX -> l4izeu1m2j ;
c3d3bcnoo3_p = locdm2fqb0 . P_15 * k0sa13awap_p + localX -> l5dycs0bvi ; if (
c3d3bcnoo3_p > locdm2fqb0 . P_19 ) { localB -> dibpyqq1gq = locdm2fqb0 . P_19
; } else if ( c3d3bcnoo3_p < locdm2fqb0 . P_10 ) { localB -> dibpyqq1gq =
locdm2fqb0 . P_10 ; } else { localB -> dibpyqq1gq = c3d3bcnoo3_p ; } if (
localDW -> kvurm2oqxu == 0.0 ) { localDW -> kvurm2oqxu = 1.0 ; localX ->
kao5g3ej40 = localB -> dibpyqq1gq ; } localB -> mcckkqf5na [ 0 ] = localX ->
kao5g3ej40 ; localB -> mcckkqf5na [ 1 ] = localB -> dibpyqq1gq - localX ->
kao5g3ej40 ; localB -> mcckkqf5na [ 2 ] = 0.0 ; localB -> mcckkqf5na [ 3 ] =
0.0 ; localB -> hbtt12nnfa [ 0 ] = locdm2fqb0 . P_38 * localX -> fqwgy5xfo2 ;
localB -> hbtt12nnfa [ 1 ] = 0.0 ; localB -> hbtt12nnfa [ 2 ] = 0.0 ; localB
-> hbtt12nnfa [ 3 ] = 0.0 ; localB -> irb3na42wc [ 0 ] = locdm2fqb0 . P_40 *
localX -> mspdttcnoi ; localB -> irb3na42wc [ 1 ] = 0.0 ; localB ->
irb3na42wc [ 2 ] = 0.0 ; localB -> irb3na42wc [ 3 ] = 0.0 ; localB ->
an253d5vae [ 0 ] = locdm2fqb0 . P_42 * localX -> iru3slp4rk ; localB ->
an253d5vae [ 1 ] = 0.0 ; localB -> an253d5vae [ 2 ] = 0.0 ; localB ->
an253d5vae [ 3 ] = 0.0 ; cemllnpu10_p = locdm2fqb0 . P_44 * localX ->
gq2lttxonz ; localB -> nb1nj1p5c0 [ 0 ] = cemllnpu10_p + 273.15 ; localB ->
nb1nj1p5c0 [ 1 ] = 0.0 ; localB -> nb1nj1p5c0 [ 2 ] = 0.0 ; localB ->
nb1nj1p5c0 [ 3 ] = 0.0 ; localB -> m5of5jfi4b [ 0 ] = localB -> lkaazqtytn ;
localB -> m5of5jfi4b [ 1 ] = 0.0 ; localB -> m5of5jfi4b [ 2 ] = 0.0 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) ) { localDW -> d252k4pf4q [ 0 ] = ! (
localB -> m5of5jfi4b [ 0 ] == localDW -> d252k4pf4q [ 1 ] ) ; localDW ->
d252k4pf4q [ 1 ] = localB -> m5of5jfi4b [ 0 ] ; } localB -> m5of5jfi4b [ 0 ]
= localDW -> d252k4pf4q [ 1 ] ; localB -> m5of5jfi4b [ 3 ] = localDW ->
d252k4pf4q [ 0 ] ; localB -> ls12idsrww [ 0 ] = locdm2fqb0 . P_46 * localX ->
egvmmui2tw ; localB -> ls12idsrww [ 1 ] = 0.0 ; localB -> ls12idsrww [ 2 ] =
0.0 ; localB -> ls12idsrww [ 3 ] = 0.0 ; localB -> dreownda5n [ 0 ] =
locdm2fqb0 . P_48 * localX -> p2q3k5uofv + 273.15 ; localB -> dreownda5n [ 1
] = 0.0 ; localB -> dreownda5n [ 2 ] = 0.0 ; localB -> dreownda5n [ 3 ] = 0.0
; localB -> imxaiqq1q1 = 0.0 ; localB -> imxaiqq1q1 += locdm2fqb0 . P_50 *
localX -> ft42zg3ldp ; localB -> dnb0zj2jmy [ 0 ] = localB -> imxaiqq1q1 ;
localB -> dnb0zj2jmy [ 1 ] = 0.0 ; localB -> dnb0zj2jmy [ 2 ] = 0.0 ; localB
-> dnb0zj2jmy [ 3 ] = 0.0 ; localB -> n1x1pyneng [ 0 ] = localB -> i0bjca5fqd
; localB -> n1x1pyneng [ 1 ] = 0.0 ; localB -> n1x1pyneng [ 2 ] = 0.0 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) ) { localDW -> k34x2xbjft [ 0 ] = ! (
localB -> n1x1pyneng [ 0 ] == localDW -> k34x2xbjft [ 1 ] ) ; localDW ->
k34x2xbjft [ 1 ] = localB -> n1x1pyneng [ 0 ] ; } localB -> n1x1pyneng [ 0 ]
= localDW -> k34x2xbjft [ 1 ] ; localB -> n1x1pyneng [ 3 ] = localDW ->
k34x2xbjft [ 0 ] ; localB -> ckqxpgmujh = 0.0 ; localB -> ckqxpgmujh +=
locdm2fqb0 . P_52 * localX -> bv3salhmw5 ; localB -> pov0qbm2o5 [ 0 ] =
localB -> ckqxpgmujh ; localB -> pov0qbm2o5 [ 1 ] = 0.0 ; localB ->
pov0qbm2o5 [ 2 ] = 0.0 ; localB -> pov0qbm2o5 [ 3 ] = 0.0 ; * oz3dekjw3t =
0.0 ; * oz3dekjw3t += locdm2fqb0 . P_54 * localX -> mqbbmlcioe ; kfjvmep0su_p
= * ooqs53wghs - * oz3dekjw3t ; cjse0dqziw_p = locdm2fqb0 . P_16 *
kfjvmep0su_p ; eqsctuf31b_p = ( * ooqs53wghs <= locdm2fqb0 . P_23 ) ; if (
ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { didZcEventOccur = (
( ! eqsctuf31b_p ) && ( localZCE -> aibuwxlm3p != ZERO_ZCSIG ) ) ; localZCE
-> aibuwxlm3p = eqsctuf31b_p ; if ( didZcEventOccur || ( localDW ->
iendyrbljp != 0 ) ) { localX -> fgagg4wluz = locdm2fqb0 . P_56 * localX ->
ovfkya0dec ; ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 ->
_mdlRefSfcnS ) ; } o2ktfv4mqu_p = localX -> fgagg4wluz ; } else {
o2ktfv4mqu_p = localX -> fgagg4wluz ; } a5n14jqzrs_p = locdm2fqb0 . P_0 *
kfjvmep0su_p ; if ( ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
didZcEventOccur = ( ( ! eqsctuf31b_p ) && ( localZCE -> ivoahwpnyy !=
ZERO_ZCSIG ) ) ; localZCE -> ivoahwpnyy = eqsctuf31b_p ; if ( didZcEventOccur
|| ( localDW -> k43gfcul4g != 0 ) ) { localX -> le0qy3dd51 = localB ->
fx43kwv5es ; ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 ->
_mdlRefSfcnS ) ; } cemllnpu10_p = localX -> le0qy3dd51 ; } else {
cemllnpu10_p = localX -> le0qy3dd51 ; } localB -> mvpzeu1ifa = ( a5n14jqzrs_p
- cemllnpu10_p ) * locdm2fqb0 . P_14 ; localB -> fmxgn1tqno = ( cjse0dqziw_p
+ o2ktfv4mqu_p ) + localB -> mvpzeu1ifa ; if ( ssIsModeUpdateTimeStep (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW -> cxytunchp3 = localB -> fmxgn1tqno
>= locdm2fqb0 . P_20 ? 1 : localB -> fmxgn1tqno > locdm2fqb0 . P_11 ? 0 : - 1
; } localB -> ognofyd5hf = localDW -> cxytunchp3 == 1 ? locdm2fqb0 . P_20 :
localDW -> cxytunchp3 == - 1 ? locdm2fqb0 . P_11 : localB -> fmxgn1tqno ;
cjse0dqziw_p = localB -> ognofyd5hf + locdm2fqb0 . P_127 ; if ( cjse0dqziw_p
> locdm2fqb0 . P_57 ) { localB -> ia12rsbk3j [ 0 ] = locdm2fqb0 . P_57 ; }
else if ( cjse0dqziw_p < locdm2fqb0 . P_58 ) { localB -> ia12rsbk3j [ 0 ] =
locdm2fqb0 . P_58 ; } else { localB -> ia12rsbk3j [ 0 ] = cjse0dqziw_p ; }
localB -> ia12rsbk3j [ 1 ] = 0.0 ; localB -> ia12rsbk3j [ 2 ] = 0.0 ; localB
-> ia12rsbk3j [ 3 ] = 0.0 ; localB -> ca434qngxk [ 0 ] = * nhquhhxexx ;
localB -> ca434qngxk [ 1 ] = 0.0 ; localB -> ca434qngxk [ 2 ] = 0.0 ; localB
-> ca434qngxk [ 3 ] = 0.0 ; localB -> asvtjyjank = 0.0 ; localB -> asvtjyjank
+= locdm2fqb0 . P_60 * localX -> eh3gmz41df ; if ( localDW -> d2nw5osdie ==
0.0 ) { localDW -> d2nw5osdie = 1.0 ; localX -> nnch4zsoe1 = localB ->
asvtjyjank ; } localB -> pcfjo3sryx [ 0 ] = localX -> nnch4zsoe1 ; localB ->
pcfjo3sryx [ 1 ] = ( localB -> asvtjyjank - localX -> nnch4zsoe1 ) * 1000.0 ;
localB -> pcfjo3sryx [ 2 ] = 0.0 ; localB -> pcfjo3sryx [ 3 ] = 0.0 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ if ( localDW -> kobagp2t5x ) { tmp [ 0 ] = locdm2fqb0 . P_120 ; tmp [ 1 ] =
locdm2fqb0 . P_121 ; tmp [ 2 ] = locdm2fqb0 . P_122 ; tmp [ 3 ] = locdm2fqb0
. P_123 ; tmp [ 4 ] = locdm2fqb0 . P_124 ; tmp [ 5 ] = locdm2fqb0 . P_143 ;
tmp [ 6 ] = locdm2fqb0 . P_144 ; tmp [ 7 ] = locdm2fqb0 . P_145 ; tmp [ 8 ] =
locdm2fqb0 . P_146 ; tmp [ 9 ] = locdm2fqb0 . P_151 ; tmp [ 10 ] = locdm2fqb0
. P_153 ; tmp [ 11 ] = locdm2fqb0 . P_147 ; tmp [ 12 ] = locdm2fqb0 . P_149 ;
tmp [ 13 ] = locdm2fqb0 . P_152 ; tmp [ 14 ] = locdm2fqb0 . P_193 ; tmp [ 15
] = locdm2fqb0 . P_148 ; tmp [ 16 ] = locdm2fqb0 . P_138 ; tmp [ 17 ] =
locdm2fqb0 . P_140 ; tmp [ 18 ] = locdm2fqb0 . P_141 ; tmp [ 19 ] =
locdm2fqb0 . P_139 ; tmp [ 20 ] = locdm2fqb0 . P_190 ; tmp [ 21 ] =
locdm2fqb0 . P_164 ; tmp [ 22 ] = locdm2fqb0 . P_165 ; tmp [ 23 ] =
locdm2fqb0 . P_166 ; tmp [ 24 ] = locdm2fqb0 . P_167 ; tmp [ 25 ] =
locdm2fqb0 . P_163 ; tmp [ 26 ] = locdm2fqb0 . P_169 ; tmp [ 27 ] =
locdm2fqb0 . P_171 ; tmp [ 28 ] = locdm2fqb0 . P_174 ; tmp [ 29 ] =
locdm2fqb0 . P_176 ; tmp [ 30 ] = locdm2fqb0 . P_170 ; tmp [ 31 ] =
locdm2fqb0 . P_175 ; tmp [ 32 ] = locdm2fqb0 . P_156 ; tmp [ 33 ] =
locdm2fqb0 . P_157 ; tmp [ 34 ] = locdm2fqb0 . P_159 ; tmp [ 35 ] =
locdm2fqb0 . P_160 ; tmp [ 36 ] = locdm2fqb0 . P_158 ; tmp [ 37 ] =
locdm2fqb0 . P_132 ; tmp [ 38 ] = locdm2fqb0 . P_136 ; tmp [ 39 ] =
locdm2fqb0 . P_184 ; tmp [ 40 ] = locdm2fqb0 . P_185 ; tmp [ 41 ] =
locdm2fqb0 . P_186 ; tmp [ 42 ] = locdm2fqb0 . P_187 ; tmp [ 43 ] =
locdm2fqb0 . P_180 ; tmp [ 44 ] = locdm2fqb0 . P_181 ; tmp [ 45 ] =
locdm2fqb0 . P_182 ; tmp [ 46 ] = locdm2fqb0 . P_183 ; tmp [ 47 ] =
locdm2fqb0 . P_130 ; tmp [ 48 ] = locdm2fqb0 . P_131 ; tmp [ 49 ] =
locdm2fqb0 . P_133 ; tmp [ 50 ] = locdm2fqb0 . P_134 ; tmp [ 51 ] =
locdm2fqb0 . P_189 ; tmp [ 52 ] = locdm2fqb0 . P_191 ; tmp [ 53 ] =
locdm2fqb0 . P_192 ; tmp [ 54 ] = locdm2fqb0 . P_194 ; tmp [ 55 ] =
locdm2fqb0 . P_195 ; tmp [ 56 ] = locdm2fqb0 . P_125 ; tmp [ 57 ] =
locdm2fqb0 . P_168 ; tmp [ 58 ] = locdm2fqb0 . P_172 ; tmp [ 59 ] =
locdm2fqb0 . P_150 ; tmp [ 60 ] = locdm2fqb0 . P_173 ; tmp [ 61 ] =
locdm2fqb0 . P_177 ; tmp [ 62 ] = locdm2fqb0 . P_154 ;
parameterBundle_mRealParameters_mX = & tmp [ 0 ] ; diag =
rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 63 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
eqsctuf31b_p = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) localDW ->
hmxbw2za12 , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , expl_temp , diag ) ; if ( !
eqsctuf31b_p ) { eqsctuf31b_p = error_buffer_is_empty ( ssGetErrorStatus (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( eqsctuf31b_p ) { msg =
rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS , msg ) ; } } } localDW -> kobagp2t5x = false ; } simulationData
= ( NeslSimulationData * ) localDW -> nrcoddu4oo ; o2ktfv4mqu_p =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; time = o2ktfv4mqu_p ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 575 ; simulationData -> mData
-> mContStates . mX = & localX -> hc0befvp5x [ 0 ] ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
localDW -> jvpu2sz5kh ; simulationData -> mData -> mModeVector . mN = 356 ;
simulationData -> mData -> mModeVector . mX = & localDW -> jrexd3jabx [ 0 ] ;
eqsctuf31b_p = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = eqsctuf31b_p ; eqsctuf31b_p =
rtmIsMajorTimeStep ( lmamcwn3a2 ) ; simulationData -> mData ->
mIsMajorTimeStep = eqsctuf31b_p ; didZcEventOccur = _ssGetSolverAssertCheck (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverAssertCheck = didZcEventOccur ; didZcEventOccur =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = didZcEventOccur ; didZcEventOccur =
ssIsSolverComputingJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData
-> mData -> mIsComputingJacobian = didZcEventOccur ; simulationData -> mData
-> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 ->
_mdlRefSfcnS ) != 0 ) ; didZcEventOccur = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = didZcEventOccur ; didZcEventOccur =
ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsModeUpdateTimeStep = didZcEventOccur ; tmp_e [ 0 ] = 0 ; tmp_p [
0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] = localB -> nvx5lf44af [ 1 ] ;
tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p [ 3 ] = localB -> nvx5lf44af
[ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB -> de33fjxukj [ 0 ] ; tmp_p [
5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ] = localB -> de33fjxukj [ 2 ] ;
tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] = localB -> mcckkqf5na [ 1 ] ; tmp_p
[ 10 ] = localB -> mcckkqf5na [ 2 ] ; tmp_p [ 11 ] = localB -> mcckkqf5na [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13
] = localB -> hbtt12nnfa [ 1 ] ; tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ;
tmp_p [ 15 ] = localB -> hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
localB -> irb3na42wc [ 0 ] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ;
tmp_p [ 18 ] = localB -> irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB ->
irb3na42wc [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0
] ; tmp_p [ 21 ] = localB -> an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB ->
an253d5vae [ 2 ] ; tmp_p [ 23 ] = localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] =
24 ; tmp_p [ 24 ] = localB -> nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB ->
nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] = localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] =
localB -> nb1nj1p5c0 [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB ->
m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] = localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] =
localB -> m5of5jfi4b [ 2 ] ; tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ;
tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] =
localB -> ls12idsrww [ 1 ] ; tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ;
tmp_p [ 35 ] = localB -> ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
localB -> dreownda5n [ 0 ] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ;
tmp_p [ 38 ] = localB -> dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB ->
dreownda5n [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [
0 ] ; tmp_p [ 41 ] = localB -> dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB ->
dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] = localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] =
44 ; tmp_p [ 44 ] = localB -> n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB ->
n1x1pyneng [ 1 ] ; tmp_p [ 46 ] = localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] =
localB -> n1x1pyneng [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB ->
pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ] = localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] =
localB -> pov0qbm2o5 [ 2 ] ; tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ;
tmp_e [ 13 ] = 52 ; tmp_p [ 52 ] = localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ]
= localB -> ia12rsbk3j [ 1 ] ; tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ;
tmp_p [ 55 ] = localB -> ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ]
= localB -> ca434qngxk [ 0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ;
tmp_p [ 58 ] = localB -> ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB ->
ca434qngxk [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [
0 ] ; tmp_p [ 61 ] = localB -> pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB ->
pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] = localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] =
64 ; simulationData -> mData -> mInputValues . mN = 64 ; simulationData ->
mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 17 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 931 ; simulationData
-> mData -> mOutputs . mX = & localB -> b2pla4cyor [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; cjse0dqziw_p =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; time_p = cjse0dqziw_p ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; diag = ( NeuDiagnosticManager * ) localDW -> dfmft0mmxa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; iy =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( iy != 0 ) { tmp_i =
error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
if ( tmp_i ) { msg_p = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_p ) ; } } if (
eqsctuf31b_p && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
simulationData = ( NeslSimulationData * ) localDW -> m5secpsmnt ; time_e =
o2ktfv4mqu_p ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN
= 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& localDW -> n1z1jmaon1 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & localDW -> d2oy2gojey ; tmp_i
= ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp_i ; simulationData -> mData -> mIsMajorTimeStep = eqsctuf31b_p ; tmp_i =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_i ; tmp_i = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_i ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_i = ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp_i ; simulationData
-> mData -> mIsModeUpdateTimeStep = didZcEventOccur ; tmp_m [ 0 ] = 0 ;
localB -> dv [ 0 ] = localB -> nvx5lf44af [ 0 ] ; localB -> dv [ 1 ] = localB
-> nvx5lf44af [ 1 ] ; localB -> dv [ 2 ] = localB -> nvx5lf44af [ 2 ] ;
localB -> dv [ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_m [ 1 ] = 4 ; localB ->
dv [ 4 ] = localB -> de33fjxukj [ 0 ] ; localB -> dv [ 5 ] = localB ->
de33fjxukj [ 1 ] ; localB -> dv [ 6 ] = localB -> de33fjxukj [ 2 ] ; localB
-> dv [ 7 ] = localB -> de33fjxukj [ 3 ] ; tmp_m [ 2 ] = 8 ; localB -> dv [ 8
] = localB -> mcckkqf5na [ 0 ] ; localB -> dv [ 9 ] = localB -> mcckkqf5na [
1 ] ; localB -> dv [ 10 ] = localB -> mcckkqf5na [ 2 ] ; localB -> dv [ 11 ]
= localB -> mcckkqf5na [ 3 ] ; tmp_m [ 3 ] = 12 ; localB -> dv [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; localB -> dv [ 13 ] = localB -> hbtt12nnfa [ 1 ]
; localB -> dv [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; localB -> dv [ 15 ] =
localB -> hbtt12nnfa [ 3 ] ; tmp_m [ 4 ] = 16 ; localB -> dv [ 16 ] = localB
-> irb3na42wc [ 0 ] ; localB -> dv [ 17 ] = localB -> irb3na42wc [ 1 ] ;
localB -> dv [ 18 ] = localB -> irb3na42wc [ 2 ] ; localB -> dv [ 19 ] =
localB -> irb3na42wc [ 3 ] ; tmp_m [ 5 ] = 20 ; localB -> dv [ 20 ] = localB
-> an253d5vae [ 0 ] ; localB -> dv [ 21 ] = localB -> an253d5vae [ 1 ] ;
localB -> dv [ 22 ] = localB -> an253d5vae [ 2 ] ; localB -> dv [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_m [ 6 ] = 24 ; localB -> dv [ 24 ] = localB
-> nb1nj1p5c0 [ 0 ] ; localB -> dv [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ;
localB -> dv [ 26 ] = localB -> nb1nj1p5c0 [ 2 ] ; localB -> dv [ 27 ] =
localB -> nb1nj1p5c0 [ 3 ] ; tmp_m [ 7 ] = 28 ; localB -> dv [ 28 ] = localB
-> m5of5jfi4b [ 0 ] ; localB -> dv [ 29 ] = localB -> m5of5jfi4b [ 1 ] ;
localB -> dv [ 30 ] = localB -> m5of5jfi4b [ 2 ] ; localB -> dv [ 31 ] =
localB -> m5of5jfi4b [ 3 ] ; tmp_m [ 8 ] = 32 ; localB -> dv [ 32 ] = localB
-> ls12idsrww [ 0 ] ; localB -> dv [ 33 ] = localB -> ls12idsrww [ 1 ] ;
localB -> dv [ 34 ] = localB -> ls12idsrww [ 2 ] ; localB -> dv [ 35 ] =
localB -> ls12idsrww [ 3 ] ; tmp_m [ 9 ] = 36 ; localB -> dv [ 36 ] = localB
-> dreownda5n [ 0 ] ; localB -> dv [ 37 ] = localB -> dreownda5n [ 1 ] ;
localB -> dv [ 38 ] = localB -> dreownda5n [ 2 ] ; localB -> dv [ 39 ] =
localB -> dreownda5n [ 3 ] ; tmp_m [ 10 ] = 40 ; localB -> dv [ 40 ] = localB
-> dnb0zj2jmy [ 0 ] ; localB -> dv [ 41 ] = localB -> dnb0zj2jmy [ 1 ] ;
localB -> dv [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; localB -> dv [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_m [ 11 ] = 44 ; localB -> dv [ 44 ] = localB
-> n1x1pyneng [ 0 ] ; localB -> dv [ 45 ] = localB -> n1x1pyneng [ 1 ] ;
localB -> dv [ 46 ] = localB -> n1x1pyneng [ 2 ] ; localB -> dv [ 47 ] =
localB -> n1x1pyneng [ 3 ] ; tmp_m [ 12 ] = 48 ; localB -> dv [ 48 ] = localB
-> pov0qbm2o5 [ 0 ] ; localB -> dv [ 49 ] = localB -> pov0qbm2o5 [ 1 ] ;
localB -> dv [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ; localB -> dv [ 51 ] =
localB -> pov0qbm2o5 [ 3 ] ; tmp_m [ 13 ] = 52 ; localB -> dv [ 52 ] = localB
-> ia12rsbk3j [ 0 ] ; localB -> dv [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
localB -> dv [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; localB -> dv [ 55 ] =
localB -> ia12rsbk3j [ 3 ] ; tmp_m [ 14 ] = 56 ; localB -> dv [ 56 ] = localB
-> ca434qngxk [ 0 ] ; localB -> dv [ 57 ] = localB -> ca434qngxk [ 1 ] ;
localB -> dv [ 58 ] = localB -> ca434qngxk [ 2 ] ; localB -> dv [ 59 ] =
localB -> ca434qngxk [ 3 ] ; tmp_m [ 15 ] = 60 ; localB -> dv [ 60 ] = localB
-> pcfjo3sryx [ 0 ] ; localB -> dv [ 61 ] = localB -> pcfjo3sryx [ 1 ] ;
localB -> dv [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; localB -> dv [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_m [ 16 ] = 64 ; memcpy ( & localB -> dv [ 64
] , & localB -> b2pla4cyor [ 0 ] , 931U * sizeof ( real_T ) ) ; tmp_m [ 17 ]
= 995 ; simulationData -> mData -> mInputValues . mN = 995 ; simulationData
-> mData -> mInputValues . mX = & localB -> dv [ 0 ] ; simulationData ->
mData -> mInputOffsets . mN = 18 ; simulationData -> mData -> mInputOffsets .
mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 36 ;
simulationData -> mData -> mOutputs . mX = & localB -> jp1ydpzuo3 [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_i = cjse0dqziw_p ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) localDW -> g3dbxdq2jx ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) localDW -> m2lsrsmett , NESL_SIM_OUTPUTS , simulationData
, diag ) ; if ( iy != 0 ) { tmp_i = error_buffer_is_empty ( ssGetErrorStatus
( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( tmp_i ) { msg_e = rtw_diagnostics_msg
( diagnosticTree_p ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_e
) ; } } if ( eqsctuf31b_p && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
a5n14jqzrs_p = fcgazvxoo5_p * localB -> jp1ydpzuo3 [ 1 ] ; kynsfyjxhy =
locdm2fqb0 . P_61 * a5n14jqzrs_p ; hbwjt2lgfx = locdm2fqb0 . P_62 *
a5n14jqzrs_p ; { if ( 1 ) { if ( localDW -> osc4woswiv . AQHandles [ 0 ] &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
osc4woswiv . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * )
& kynsfyjxhy + 0 ) ; sdiWriteSignal ( localDW -> osc4woswiv . AQHandles [ 2 ]
, rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & hbwjt2lgfx + 0 ) ; } } }
beco0jpooh_p = localB -> jp1ydpzuo3 [ 21 ] * localB -> jp1ydpzuo3 [ 32 ] ;
a5n14jqzrs_p = locdm2fqb0 . P_63 * beco0jpooh_p ; { if ( localDW ->
edo2yybvgy . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> edo2yybvgy . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & a5n14jqzrs_p + 0 ) ; } } * lwu0tsgovp = 0.0 ;
* lwu0tsgovp += locdm2fqb0 . P_65 * localX -> pe3foqvhcv ; cemllnpu10_tmp = *
oz3dekjw3t * * lwu0tsgovp ; cemllnpu10_p = cemllnpu10_tmp ; beco0jpooh_p = (
cemllnpu10_p - beco0jpooh_p ) * locdm2fqb0 . P_66 ; { if ( localDW ->
k5lhedc1qi . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> k5lhedc1qi . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & beco0jpooh_p + 0 ) ; } } cemllnpu10_p *=
locdm2fqb0 . P_67 ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit
( lmamcwn3a2 , 1 , 0 ) ) { fthw1ygvk1 = locdm2fqb0 . P_68 ; } { if ( 1 ) { if
( localDW -> osc4woswivb . AQHandles [ 0 ] && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> osc4woswivb . AQHandles [ 0 ]
, rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & cemllnpu10_p + 0 ) ;
sdiWriteSignal ( localDW -> osc4woswivb . AQHandles [ 1 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & a5n14jqzrs_p + 0 ) ; sdiWriteSignal ( localDW
-> osc4woswivb . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char
* ) & beco0jpooh_p + 0 ) ; } } if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) ) { if ( localDW -> osc4woswivb .
AQHandles [ 3 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> osc4woswivb . AQHandles [ 3 ] , rtmGetTaskTime (
lmamcwn3a2 , 1 ) , ( char * ) & fthw1ygvk1 + 0 ) ; } } } a5n14jqzrs_p =
localB -> jp1ydpzuo3 [ 3 ] * localB -> jp1ydpzuo3 [ 4 ] ; fthw1ygvk1 =
locdm2fqb0 . P_69 * a5n14jqzrs_p ; { if ( localDW -> buyjzzgvti . AQHandles
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> buyjzzgvti . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
fthw1ygvk1 + 0 ) ; } } cemllnpu10_p = localB -> jp1ydpzuo3 [ 1 ] *
fcgazvxoo5_p ; cemllnpu10_p *= locdm2fqb0 . P_70 ; a5n14jqzrs_p = (
cemllnpu10_p - a5n14jqzrs_p ) * locdm2fqb0 . P_71 ; { if ( localDW ->
edo2yybvgya . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> edo2yybvgya . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & a5n14jqzrs_p + 0 ) ; } } if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ gqcnv04onp = locdm2fqb0 . P_72 ; } { if ( 1 ) { if ( localDW ->
osc4woswivbk . AQHandles [ 0 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS
) ) { sdiWriteSignal ( localDW -> osc4woswivbk . AQHandles [ 0 ] ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & cemllnpu10_p + 0 ) ;
sdiWriteSignal ( localDW -> osc4woswivbk . AQHandles [ 1 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & fthw1ygvk1 + 0 ) ; sdiWriteSignal ( localDW
-> osc4woswivbk . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & a5n14jqzrs_p + 0 ) ; } } if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) ) { if ( localDW -> osc4woswivbk .
AQHandles [ 3 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> osc4woswivbk . AQHandles [ 3 ] , rtmGetTaskTime (
lmamcwn3a2 , 1 ) , ( char * ) & gqcnv04onp + 0 ) ; } } } fthw1ygvk1 =
cemllnpu10_tmp ; gqcnv04onp = locdm2fqb0 . P_73 * fthw1ygvk1 ; fthw1ygvk1 *=
locdm2fqb0 . P_74 ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit
( lmamcwn3a2 , 1 , 0 ) ) { ci0brte1rv = locdm2fqb0 . P_75 ; } { if ( 1 ) { if
( localDW -> osc4woswivbkk . AQHandles [ 0 ] && ssGetLogOutput ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> osc4woswivbkk . AQHandles [
0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & gqcnv04onp + 0 ) ;
sdiWriteSignal ( localDW -> osc4woswivbkk . AQHandles [ 1 ] , rtmGetTaskTime
( lmamcwn3a2 , 0 ) , ( char * ) & fthw1ygvk1 + 0 ) ; } } if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ if ( localDW -> osc4woswivbkk . AQHandles [ 2 ] && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> osc4woswivbkk .
AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) , ( char * ) & ci0brte1rv
+ 0 ) ; } } } ci0brte1rv = localB -> jp1ydpzuo3 [ 3 ] * localB -> jp1ydpzuo3
[ 4 ] ; gqcnv04onp = localB -> jp1ydpzuo3 [ 21 ] * localB -> jp1ydpzuo3 [ 32
] ; fthw1ygvk1 = ci0brte1rv + gqcnv04onp ; * jkukrewnlm = 0.0 ; * jkukrewnlm
+= locdm2fqb0 . P_77 * localX -> ahqoemcw2g ; a5n14jqzrs_p = * jkukrewnlm * *
crmxvln0sn ; cemllnpu10_p = fthw1ygvk1 - a5n14jqzrs_p ; { if ( localDW ->
jhjx45yzf4 . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> jhjx45yzf4 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & cemllnpu10_p + 0 ) ; } } { if ( localDW ->
gz2yikcxsb . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> gz2yikcxsb . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & fthw1ygvk1 + 0 ) ; } } fuolrvutdw =
locdm2fqb0 . P_78 * cemllnpu10_p ; { if ( localDW -> aqh4yyrzcm . AQHandles
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> aqh4yyrzcm . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
fuolrvutdw + 0 ) ; } } mllz3vkg4t = locdm2fqb0 . P_79 * a5n14jqzrs_p ; { if (
localDW -> dkfsbamwtk . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> dkfsbamwtk . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & mllz3vkg4t + 0 ) ; } }
jiezoh3irw = locdm2fqb0 . P_80 * ci0brte1rv ; gisspxfgoa = locdm2fqb0 . P_81
* gqcnv04onp ; { if ( 1 ) { if ( localDW -> osc4woswivbkkc . AQHandles [ 0 ]
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> osc4woswivbkkc . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & jiezoh3irw + 0 ) ; sdiWriteSignal ( localDW -> osc4woswivbkkc .
AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & gisspxfgoa
+ 0 ) ; sdiWriteSignal ( localDW -> osc4woswivbkkc . AQHandles [ 2 ] ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & mllz3vkg4t + 0 ) ;
sdiWriteSignal ( localDW -> osc4woswivbkkc . AQHandles [ 3 ] , rtmGetTaskTime
( lmamcwn3a2 , 0 ) , ( char * ) & fuolrvutdw + 0 ) ; } } } { if ( localDW ->
jrwijamgle . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> jrwijamgle . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 4 ] + 0 ) ; } } *
laajwttrsw = locdm2fqb0 . P_82 * localB -> jp1ydpzuo3 [ 0 ] ; localB ->
blkxt1p0nv = muDoubleScalarAbs ( localB -> jp1ydpzuo3 [ 7 ] ) ;
simulationData = ( NeslSimulationData * ) localDW -> grsi0hcpom ; time_m =
o2ktfv4mqu_p ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN
= 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& localDW -> lthorw5noi ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & localDW -> hkmn555nst ; tmp_i
= ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp_i ; simulationData -> mData -> mIsMajorTimeStep = eqsctuf31b_p ; tmp_i =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_i ; tmp_i = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_i ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_i = ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp_i ; simulationData
-> mData -> mIsModeUpdateTimeStep = didZcEventOccur ; tmp_g [ 0 ] = 0 ;
localB -> dv1 [ 0 ] = localB -> nvx5lf44af [ 0 ] ; localB -> dv1 [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; localB -> dv1 [ 2 ] = localB -> nvx5lf44af [ 2 ]
; localB -> dv1 [ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_g [ 1 ] = 4 ; localB
-> dv1 [ 4 ] = localB -> de33fjxukj [ 0 ] ; localB -> dv1 [ 5 ] = localB ->
de33fjxukj [ 1 ] ; localB -> dv1 [ 6 ] = localB -> de33fjxukj [ 2 ] ; localB
-> dv1 [ 7 ] = localB -> de33fjxukj [ 3 ] ; tmp_g [ 2 ] = 8 ; localB -> dv1 [
8 ] = localB -> mcckkqf5na [ 0 ] ; localB -> dv1 [ 9 ] = localB -> mcckkqf5na
[ 1 ] ; localB -> dv1 [ 10 ] = localB -> mcckkqf5na [ 2 ] ; localB -> dv1 [
11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_g [ 3 ] = 12 ; localB -> dv1 [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; localB -> dv1 [ 13 ] = localB -> hbtt12nnfa [ 1
] ; localB -> dv1 [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; localB -> dv1 [ 15 ]
= localB -> hbtt12nnfa [ 3 ] ; tmp_g [ 4 ] = 16 ; localB -> dv1 [ 16 ] =
localB -> irb3na42wc [ 0 ] ; localB -> dv1 [ 17 ] = localB -> irb3na42wc [ 1
] ; localB -> dv1 [ 18 ] = localB -> irb3na42wc [ 2 ] ; localB -> dv1 [ 19 ]
= localB -> irb3na42wc [ 3 ] ; tmp_g [ 5 ] = 20 ; localB -> dv1 [ 20 ] =
localB -> an253d5vae [ 0 ] ; localB -> dv1 [ 21 ] = localB -> an253d5vae [ 1
] ; localB -> dv1 [ 22 ] = localB -> an253d5vae [ 2 ] ; localB -> dv1 [ 23 ]
= localB -> an253d5vae [ 3 ] ; tmp_g [ 6 ] = 24 ; localB -> dv1 [ 24 ] =
localB -> nb1nj1p5c0 [ 0 ] ; localB -> dv1 [ 25 ] = localB -> nb1nj1p5c0 [ 1
] ; localB -> dv1 [ 26 ] = localB -> nb1nj1p5c0 [ 2 ] ; localB -> dv1 [ 27 ]
= localB -> nb1nj1p5c0 [ 3 ] ; tmp_g [ 7 ] = 28 ; localB -> dv1 [ 28 ] =
localB -> m5of5jfi4b [ 0 ] ; localB -> dv1 [ 29 ] = localB -> m5of5jfi4b [ 1
] ; localB -> dv1 [ 30 ] = localB -> m5of5jfi4b [ 2 ] ; localB -> dv1 [ 31 ]
= localB -> m5of5jfi4b [ 3 ] ; tmp_g [ 8 ] = 32 ; localB -> dv1 [ 32 ] =
localB -> ls12idsrww [ 0 ] ; localB -> dv1 [ 33 ] = localB -> ls12idsrww [ 1
] ; localB -> dv1 [ 34 ] = localB -> ls12idsrww [ 2 ] ; localB -> dv1 [ 35 ]
= localB -> ls12idsrww [ 3 ] ; tmp_g [ 9 ] = 36 ; localB -> dv1 [ 36 ] =
localB -> dreownda5n [ 0 ] ; localB -> dv1 [ 37 ] = localB -> dreownda5n [ 1
] ; localB -> dv1 [ 38 ] = localB -> dreownda5n [ 2 ] ; localB -> dv1 [ 39 ]
= localB -> dreownda5n [ 3 ] ; tmp_g [ 10 ] = 40 ; localB -> dv1 [ 40 ] =
localB -> dnb0zj2jmy [ 0 ] ; localB -> dv1 [ 41 ] = localB -> dnb0zj2jmy [ 1
] ; localB -> dv1 [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; localB -> dv1 [ 43 ]
= localB -> dnb0zj2jmy [ 3 ] ; tmp_g [ 11 ] = 44 ; localB -> dv1 [ 44 ] =
localB -> n1x1pyneng [ 0 ] ; localB -> dv1 [ 45 ] = localB -> n1x1pyneng [ 1
] ; localB -> dv1 [ 46 ] = localB -> n1x1pyneng [ 2 ] ; localB -> dv1 [ 47 ]
= localB -> n1x1pyneng [ 3 ] ; tmp_g [ 12 ] = 48 ; localB -> dv1 [ 48 ] =
localB -> pov0qbm2o5 [ 0 ] ; localB -> dv1 [ 49 ] = localB -> pov0qbm2o5 [ 1
] ; localB -> dv1 [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ; localB -> dv1 [ 51 ]
= localB -> pov0qbm2o5 [ 3 ] ; tmp_g [ 13 ] = 52 ; localB -> dv1 [ 52 ] =
localB -> ia12rsbk3j [ 0 ] ; localB -> dv1 [ 53 ] = localB -> ia12rsbk3j [ 1
] ; localB -> dv1 [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; localB -> dv1 [ 55 ]
= localB -> ia12rsbk3j [ 3 ] ; tmp_g [ 14 ] = 56 ; localB -> dv1 [ 56 ] =
localB -> ca434qngxk [ 0 ] ; localB -> dv1 [ 57 ] = localB -> ca434qngxk [ 1
] ; localB -> dv1 [ 58 ] = localB -> ca434qngxk [ 2 ] ; localB -> dv1 [ 59 ]
= localB -> ca434qngxk [ 3 ] ; tmp_g [ 15 ] = 60 ; localB -> dv1 [ 60 ] =
localB -> pcfjo3sryx [ 0 ] ; localB -> dv1 [ 61 ] = localB -> pcfjo3sryx [ 1
] ; localB -> dv1 [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; localB -> dv1 [ 63 ]
= localB -> pcfjo3sryx [ 3 ] ; tmp_g [ 16 ] = 64 ; memcpy ( & localB -> dv1 [
64 ] , & localB -> b2pla4cyor [ 0 ] , 931U * sizeof ( real_T ) ) ; tmp_g [ 17
] = 995 ; simulationData -> mData -> mInputValues . mN = 995 ; simulationData
-> mData -> mInputValues . mX = & localB -> dv1 [ 0 ] ; simulationData ->
mData -> mInputOffsets . mN = 18 ; simulationData -> mData -> mInputOffsets .
mX = & tmp_g [ 0 ] ; simulationData -> mData -> mOutputs . mN = 2 ;
simulationData -> mData -> mOutputs . mX = & localB -> mofh5aef0k [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_g = cjse0dqziw_p ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) localDW -> hrog11bqbc ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) localDW -> ogakvee5zl , NESL_SIM_OUTPUTS , simulationData
, diag ) ; if ( iy != 0 ) { tmp_i = error_buffer_is_empty ( ssGetErrorStatus
( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( tmp_i ) { msg_i = rtw_diagnostics_msg
( diagnosticTree_e ) ; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_i
) ; } } if ( eqsctuf31b_p && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
{ if ( localDW -> jrwijamgle5 . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> jrwijamgle5 . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB -> mofh5aef0k [ 1 ] +
0 ) ; } } if ( c3d3bcnoo3_p > locdm2fqb0 . P_19 ) { ci0brte1rv = c3d3bcnoo3_p
- locdm2fqb0 . P_19 ; } else if ( c3d3bcnoo3_p >= locdm2fqb0 . P_10 ) {
ci0brte1rv = 0.0 ; } else { ci0brte1rv = c3d3bcnoo3_p - locdm2fqb0 . P_10 ; }
k0sa13awap_p *= locdm2fqb0 . P_1 ; fthw1ygvk1 = muDoubleScalarSign (
ci0brte1rv ) ; if ( muDoubleScalarIsNaN ( fthw1ygvk1 ) ) { fthw1ygvk1 = 0.0 ;
} else { fthw1ygvk1 = muDoubleScalarRem ( fthw1ygvk1 , 256.0 ) ; } gqcnv04onp
= muDoubleScalarSign ( k0sa13awap_p ) ; if ( muDoubleScalarIsNaN ( gqcnv04onp
) ) { gqcnv04onp = 0.0 ; } else { gqcnv04onp = muDoubleScalarRem ( gqcnv04onp
, 256.0 ) ; } localB -> erzhvjpwjn = ( ( locdm2fqb0 . P_87 * c3d3bcnoo3_p !=
ci0brte1rv ) && ( ( fthw1ygvk1 < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) (
uint8_T ) - fthw1ygvk1 : ( int32_T ) ( int8_T ) ( uint8_T ) fthw1ygvk1 ) == (
gqcnv04onp < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) -
gqcnv04onp : ( int32_T ) ( int8_T ) ( uint8_T ) gqcnv04onp ) ) ) ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ localB -> jkqs54gz35 = localDW -> o0gi1dmk1n ; } if ( localB -> jkqs54gz35
) { localB -> fjldr12rl2 = locdm2fqb0 . P_24 ; } else { localB -> fjldr12rl2
= k0sa13awap_p ; } { if ( localDW -> dcdtdbr1d3 . AQHandles && ssGetLogOutput
( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> dcdtdbr1d3 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 5 ] + 0 ) ; } } { if ( localDW -> dcdtdbr1d3z . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
dcdtdbr1d3z . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
localB -> mofh5aef0k [ 0 ] + 0 ) ; } } { if ( localDW -> i2u4vgtwno .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> i2u4vgtwno . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & localB -> jp1ydpzuo3 [ 9 ] + 0 ) ; } } { if ( localDW ->
i2u4vgtwnoa . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> i2u4vgtwnoa . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 10 ] + 0 ) ; } } { if
( localDW -> dcdtdbr1d3z0 . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> dcdtdbr1d3z0 . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 13 ]
+ 0 ) ; } } simulationData = ( NeslSimulationData * ) localDW -> ip3im53ih0 ;
time_j = o2ktfv4mqu_p ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_j ; simulationData -> mData ->
mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> ll0ogy1o1p ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> arhujgsczp ; tmp_i = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp_i ; simulationData -> mData
-> mIsMajorTimeStep = eqsctuf31b_p ; tmp_i = _ssGetSolverAssertCheck (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp_i ; tmp_i = ssIsSolverCheckingCIC ( lmamcwn3a2 ->
_mdlRefSfcnS ) ; simulationData -> mData -> mIsSolverCheckingCIC = tmp_i ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; tmp_i = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_i ; simulationData -> mData ->
mIsModeUpdateTimeStep = didZcEventOccur ; tmp_j [ 0 ] = 0 ; localB -> dv2 [ 0
] = localB -> nvx5lf44af [ 0 ] ; localB -> dv2 [ 1 ] = localB -> nvx5lf44af [
1 ] ; localB -> dv2 [ 2 ] = localB -> nvx5lf44af [ 2 ] ; localB -> dv2 [ 3 ]
= localB -> nvx5lf44af [ 3 ] ; tmp_j [ 1 ] = 4 ; localB -> dv2 [ 4 ] = localB
-> de33fjxukj [ 0 ] ; localB -> dv2 [ 5 ] = localB -> de33fjxukj [ 1 ] ;
localB -> dv2 [ 6 ] = localB -> de33fjxukj [ 2 ] ; localB -> dv2 [ 7 ] =
localB -> de33fjxukj [ 3 ] ; tmp_j [ 2 ] = 8 ; localB -> dv2 [ 8 ] = localB
-> mcckkqf5na [ 0 ] ; localB -> dv2 [ 9 ] = localB -> mcckkqf5na [ 1 ] ;
localB -> dv2 [ 10 ] = localB -> mcckkqf5na [ 2 ] ; localB -> dv2 [ 11 ] =
localB -> mcckkqf5na [ 3 ] ; tmp_j [ 3 ] = 12 ; localB -> dv2 [ 12 ] = localB
-> hbtt12nnfa [ 0 ] ; localB -> dv2 [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
localB -> dv2 [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; localB -> dv2 [ 15 ] =
localB -> hbtt12nnfa [ 3 ] ; tmp_j [ 4 ] = 16 ; localB -> dv2 [ 16 ] = localB
-> irb3na42wc [ 0 ] ; localB -> dv2 [ 17 ] = localB -> irb3na42wc [ 1 ] ;
localB -> dv2 [ 18 ] = localB -> irb3na42wc [ 2 ] ; localB -> dv2 [ 19 ] =
localB -> irb3na42wc [ 3 ] ; tmp_j [ 5 ] = 20 ; localB -> dv2 [ 20 ] = localB
-> an253d5vae [ 0 ] ; localB -> dv2 [ 21 ] = localB -> an253d5vae [ 1 ] ;
localB -> dv2 [ 22 ] = localB -> an253d5vae [ 2 ] ; localB -> dv2 [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_j [ 6 ] = 24 ; localB -> dv2 [ 24 ] = localB
-> nb1nj1p5c0 [ 0 ] ; localB -> dv2 [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ;
localB -> dv2 [ 26 ] = localB -> nb1nj1p5c0 [ 2 ] ; localB -> dv2 [ 27 ] =
localB -> nb1nj1p5c0 [ 3 ] ; tmp_j [ 7 ] = 28 ; localB -> dv2 [ 28 ] = localB
-> m5of5jfi4b [ 0 ] ; localB -> dv2 [ 29 ] = localB -> m5of5jfi4b [ 1 ] ;
localB -> dv2 [ 30 ] = localB -> m5of5jfi4b [ 2 ] ; localB -> dv2 [ 31 ] =
localB -> m5of5jfi4b [ 3 ] ; tmp_j [ 8 ] = 32 ; localB -> dv2 [ 32 ] = localB
-> ls12idsrww [ 0 ] ; localB -> dv2 [ 33 ] = localB -> ls12idsrww [ 1 ] ;
localB -> dv2 [ 34 ] = localB -> ls12idsrww [ 2 ] ; localB -> dv2 [ 35 ] =
localB -> ls12idsrww [ 3 ] ; tmp_j [ 9 ] = 36 ; localB -> dv2 [ 36 ] = localB
-> dreownda5n [ 0 ] ; localB -> dv2 [ 37 ] = localB -> dreownda5n [ 1 ] ;
localB -> dv2 [ 38 ] = localB -> dreownda5n [ 2 ] ; localB -> dv2 [ 39 ] =
localB -> dreownda5n [ 3 ] ; tmp_j [ 10 ] = 40 ; localB -> dv2 [ 40 ] =
localB -> dnb0zj2jmy [ 0 ] ; localB -> dv2 [ 41 ] = localB -> dnb0zj2jmy [ 1
] ; localB -> dv2 [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; localB -> dv2 [ 43 ]
= localB -> dnb0zj2jmy [ 3 ] ; tmp_j [ 11 ] = 44 ; localB -> dv2 [ 44 ] =
localB -> n1x1pyneng [ 0 ] ; localB -> dv2 [ 45 ] = localB -> n1x1pyneng [ 1
] ; localB -> dv2 [ 46 ] = localB -> n1x1pyneng [ 2 ] ; localB -> dv2 [ 47 ]
= localB -> n1x1pyneng [ 3 ] ; tmp_j [ 12 ] = 48 ; localB -> dv2 [ 48 ] =
localB -> pov0qbm2o5 [ 0 ] ; localB -> dv2 [ 49 ] = localB -> pov0qbm2o5 [ 1
] ; localB -> dv2 [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ; localB -> dv2 [ 51 ]
= localB -> pov0qbm2o5 [ 3 ] ; tmp_j [ 13 ] = 52 ; localB -> dv2 [ 52 ] =
localB -> ia12rsbk3j [ 0 ] ; localB -> dv2 [ 53 ] = localB -> ia12rsbk3j [ 1
] ; localB -> dv2 [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; localB -> dv2 [ 55 ]
= localB -> ia12rsbk3j [ 3 ] ; tmp_j [ 14 ] = 56 ; localB -> dv2 [ 56 ] =
localB -> ca434qngxk [ 0 ] ; localB -> dv2 [ 57 ] = localB -> ca434qngxk [ 1
] ; localB -> dv2 [ 58 ] = localB -> ca434qngxk [ 2 ] ; localB -> dv2 [ 59 ]
= localB -> ca434qngxk [ 3 ] ; tmp_j [ 15 ] = 60 ; localB -> dv2 [ 60 ] =
localB -> pcfjo3sryx [ 0 ] ; localB -> dv2 [ 61 ] = localB -> pcfjo3sryx [ 1
] ; localB -> dv2 [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; localB -> dv2 [ 63 ]
= localB -> pcfjo3sryx [ 3 ] ; tmp_j [ 16 ] = 64 ; memcpy ( & localB -> dv2 [
64 ] , & localB -> b2pla4cyor [ 0 ] , 931U * sizeof ( real_T ) ) ; tmp_j [ 17
] = 995 ; simulationData -> mData -> mInputValues . mN = 995 ; simulationData
-> mData -> mInputValues . mX = & localB -> dv2 [ 0 ] ; simulationData ->
mData -> mInputOffsets . mN = 18 ; simulationData -> mData -> mInputOffsets .
mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 4 ;
simulationData -> mData -> mOutputs . mX = & bcstrpzjmc [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_f = cjse0dqziw_p ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_f ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) localDW -> an32etucup ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) localDW -> c0et2sljbx , NESL_SIM_OUTPUTS , simulationData
, diag ) ; if ( iy != 0 ) { didZcEventOccur = error_buffer_is_empty (
ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( didZcEventOccur ) {
msg_m = rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus (
lmamcwn3a2 -> _mdlRefSfcnS , msg_m ) ; } } if ( eqsctuf31b_p &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
{ if ( localDW -> m2qzuth4hh . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> m2qzuth4hh . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & bcstrpzjmc [ 0 ] + 0 ) ; } }
c3d3bcnoo3_p = locdm2fqb0 . P_88 * localB -> jp1ydpzuo3 [ 13 ] ; c3d3bcnoo3_p
*= bcstrpzjmc [ 0 ] ; { if ( localDW -> fasht4sk1b . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
fasht4sk1b . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
c3d3bcnoo3_p + 0 ) ; } } { if ( localDW -> nkz4go02r3 . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
nkz4go02r3 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
localB -> jp1ydpzuo3 [ 11 ] + 0 ) ; } } { if ( localDW -> dcdtdbr1d3z0r .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> dcdtdbr1d3z0r . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ,
( char * ) & localB -> jp1ydpzuo3 [ 16 ] + 0 ) ; } } { if ( localDW ->
m2qzuth4hh2 . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> m2qzuth4hh2 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & bcstrpzjmc [ 1 ] + 0 ) ; } } c3d3bcnoo3_p =
locdm2fqb0 . P_89 * localB -> jp1ydpzuo3 [ 16 ] ; c3d3bcnoo3_p *= bcstrpzjmc
[ 1 ] ; { if ( localDW -> fasht4sk1bm . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> fasht4sk1bm .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & c3d3bcnoo3_p + 0
) ; } } { if ( localDW -> j033re5cgt . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> j033re5cgt .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 14 ] + 0 ) ; } } { if ( localDW -> iuyyqw2ka5 . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
iuyyqw2ka5 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
localB -> jp1ydpzuo3 [ 15 ] + 0 ) ; } } { if ( localDW -> dcdtdbr1d3z0re .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> dcdtdbr1d3z0re . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ,
( char * ) & localB -> jp1ydpzuo3 [ 18 ] + 0 ) ; } } { if ( localDW ->
m2qzuth4hh2u . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> m2qzuth4hh2u . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & bcstrpzjmc [ 2 ] + 0 ) ; } } c3d3bcnoo3_p =
locdm2fqb0 . P_90 * localB -> jp1ydpzuo3 [ 18 ] ; c3d3bcnoo3_p *= bcstrpzjmc
[ 2 ] ; { if ( localDW -> fasht4sk1bmp . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> fasht4sk1bmp .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & c3d3bcnoo3_p + 0
) ; } } { if ( localDW -> j033re5cgtw . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> j033re5cgtw .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 17 ] + 0 ) ; } } { if ( localDW -> dcdtdbr1d3z0rew . AQHandles
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> dcdtdbr1d3z0rew . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char *
) & localB -> jp1ydpzuo3 [ 20 ] + 0 ) ; } } { if ( localDW -> m2qzuth4hh2ux .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> m2qzuth4hh2ux . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ,
( char * ) & bcstrpzjmc [ 3 ] + 0 ) ; } } c3d3bcnoo3_p = locdm2fqb0 . P_91 *
localB -> jp1ydpzuo3 [ 20 ] ; c3d3bcnoo3_p *= bcstrpzjmc [ 3 ] ; { if (
localDW -> fasht4sk1bmpq . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> fasht4sk1bmpq . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & c3d3bcnoo3_p + 0 ) ; } } {
if ( localDW -> j033re5cgtw2 . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> j033re5cgtw2 . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 19 ]
+ 0 ) ; } } localB -> b0l5c0ek5s = locdm2fqb0 . P_2 * kfjvmep0su_p ;
kfjvmep0su_p = muDoubleScalarAbs ( localB -> jp1ydpzuo3 [ 24 ] ) ;
c3d3bcnoo3_p = muDoubleScalarAbs ( localB -> jp1ydpzuo3 [ 29 ] ) ; localB ->
fspg4iv5e0 = kfjvmep0su_p + c3d3bcnoo3_p ; * csbds3kgit = 0.0 ; * csbds3kgit
+= locdm2fqb0 . P_93 * localX -> ecw01zmuxh ; kfjvmep0su_p =
muDoubleScalarMax ( * ooqs53wghs , locdm2fqb0 . P_128 ) ; localB ->
fw14jo2wz3 = locdm2fqb0 . P_129 * kfjvmep0su_p * locdm2fqb0 . P_94 ;
kfjvmep0su_p = localB -> fw14jo2wz3 - localB -> jp1ydpzuo3 [ 28 ] ; localB ->
esw33ksp5x = ( kfjvmep0su_p + localX -> d411ir5utj ) * locdm2fqb0 . P_17 ; if
( ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW ->
hytqfgsilq = localB -> esw33ksp5x >= locdm2fqb0 . P_21 ? 1 : localB ->
esw33ksp5x > locdm2fqb0 . P_12 ? 0 : - 1 ; } localB -> oh2tziv2ie = localDW
-> hytqfgsilq == 1 ? locdm2fqb0 . P_21 : localDW -> hytqfgsilq == - 1 ?
locdm2fqb0 . P_12 : localB -> esw33ksp5x ; localB -> pnpai0ecxg = ( localB ->
oh2tziv2ie - localB -> esw33ksp5x ) * locdm2fqb0 . P_8 + locdm2fqb0 . P_3 *
kfjvmep0su_p ; localB -> ghgbigehcu = localB -> jp1ydpzuo3 [ 25 ] +
locdm2fqb0 . P_135 ; kfjvmep0su_p = localB -> ghgbigehcu - * nvlm0heabm ;
localB -> k3ckwtd0wn = ( kfjvmep0su_p + localX -> hqy4omzhyd ) * locdm2fqb0 .
P_18 ; if ( ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW
-> fcwk1cq1s3 = localB -> k3ckwtd0wn >= locdm2fqb0 . P_22 ? 1 : localB ->
k3ckwtd0wn > locdm2fqb0 . P_13 ? 0 : - 1 ; } localB -> no3gaew0sh = localDW
-> fcwk1cq1s3 == 1 ? locdm2fqb0 . P_22 : localDW -> fcwk1cq1s3 == - 1 ?
locdm2fqb0 . P_13 : localB -> k3ckwtd0wn ; localB -> n0usl0lx3o = ( localB ->
no3gaew0sh - localB -> k3ckwtd0wn ) * locdm2fqb0 . P_9 + locdm2fqb0 . P_4 *
kfjvmep0su_p ; kfjvmep0su_p = locdm2fqb0 . P_137 - localB -> jp1ydpzuo3 [ 22
] ; cjse0dqziw_p = locdm2fqb0 . P_95 * kfjvmep0su_p ; if ( cjse0dqziw_p >
locdm2fqb0 . P_96 ) { localB -> gef2pihfya = locdm2fqb0 . P_96 ; } else if (
cjse0dqziw_p < locdm2fqb0 . P_97 ) { localB -> gef2pihfya = locdm2fqb0 . P_97
; } else { localB -> gef2pihfya = cjse0dqziw_p ; } kfjvmep0su_p = locdm2fqb0
. P_155 - localB -> jp1ydpzuo3 [ 23 ] ; cjse0dqziw_p = locdm2fqb0 . P_98 *
kfjvmep0su_p ; if ( cjse0dqziw_p > locdm2fqb0 . P_99 ) { localB -> gc1dhic5yu
= locdm2fqb0 . P_99 ; } else if ( cjse0dqziw_p < locdm2fqb0 . P_100 ) {
localB -> gc1dhic5yu = locdm2fqb0 . P_100 ; } else { localB -> gc1dhic5yu =
cjse0dqziw_p ; } kfjvmep0su_p = locdm2fqb0 . P_101 * localB -> jp1ydpzuo3 [
30 ] ; localB -> h1p1ybnntz = kfjvmep0su_p + locdm2fqb0 . P_188 ; if (
ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW ->
dcyfny35ij = localB -> h1p1ybnntz >= locdm2fqb0 . P_102 ? 1 : localB ->
h1p1ybnntz > locdm2fqb0 . P_103 ? 0 : - 1 ; } localB -> epupyg1odo = localDW
-> dcyfny35ij == 1 ? locdm2fqb0 . P_102 : localDW -> dcyfny35ij == - 1 ?
locdm2fqb0 . P_103 : localB -> h1p1ybnntz ; * l45wd5pbjh = fcgazvxoo5_p *
localB -> jp1ydpzuo3 [ 1 ] ; * ca0lva1ra5 = a5n14jqzrs_p ; * pjtg1ua4jf =
localB -> jp1ydpzuo3 [ 1 ] ; c3d3bcnoo3_p = ( localB -> mofh5aef0k [ 0 ] +
localB -> jp1ydpzuo3 [ 19 ] ) - localB -> jp1ydpzuo3 [ 11 ] ; { if ( localDW
-> gz2yikcxsbr . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) )
{ sdiWriteSignal ( localDW -> gz2yikcxsbr . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & c3d3bcnoo3_p + 0 ) ; } } { if ( localDW ->
jb5p2yd0pp . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> jb5p2yd0pp . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 11 ] + 0 ) ; } }
fcgazvxoo5_p = locdm2fqb0 . P_104 * localB -> jp1ydpzuo3 [ 11 ] ;
kfjvmep0su_p = locdm2fqb0 . P_105 * localB -> mofh5aef0k [ 0 ] ; c3d3bcnoo3_p
*= locdm2fqb0 . P_106 ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) ) { o5aw3xkgct = locdm2fqb0 . P_107 ; }
{ if ( 1 ) { if ( localDW -> osc4woswivbkkch . AQHandles [ 0 ] &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
osc4woswivbkkch . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & localB -> jp1ydpzuo3 [ 19 ] + 0 ) ; sdiWriteSignal ( localDW ->
osc4woswivbkkch . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & fcgazvxoo5_p + 0 ) ; sdiWriteSignal ( localDW -> osc4woswivbkkch .
AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
kfjvmep0su_p + 0 ) ; sdiWriteSignal ( localDW -> osc4woswivbkkch . AQHandles
[ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & c3d3bcnoo3_p + 0 ) ;
} } if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1
, 0 ) ) { if ( localDW -> osc4woswivbkkch . AQHandles [ 4 ] && ssGetLogOutput
( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
osc4woswivbkkch . AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) , (
char * ) & o5aw3xkgct + 0 ) ; } } } kfjvmep0su_p = ( localB -> jp1ydpzuo3 [ 5
] + localB -> jp1ydpzuo3 [ 17 ] ) - localB -> jp1ydpzuo3 [ 19 ] ; { if (
localDW -> gz2yikcxsbro . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> gz2yikcxsbro . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & kfjvmep0su_p + 0 ) ; } } {
if ( localDW -> nwagfadtz5 . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> nwagfadtz5 . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 17 ]
+ 0 ) ; } } { if ( localDW -> ir3sjqcelg . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> ir3sjqcelg .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 19 ] + 0 ) ; } } { if ( localDW -> boxtz4t1xz . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
boxtz4t1xz . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
localB -> jp1ydpzuo3 [ 5 ] + 0 ) ; } } o5aw3xkgct = locdm2fqb0 . P_108 *
localB -> jp1ydpzuo3 [ 19 ] ; fcgazvxoo5_p = locdm2fqb0 . P_109 * localB ->
jp1ydpzuo3 [ 5 ] ; kfjvmep0su_p *= locdm2fqb0 . P_110 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ hgkcd1aqme = locdm2fqb0 . P_111 ; } { if ( 1 ) { if ( localDW -> egl1qa3rz0
. AQHandles [ 0 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> egl1qa3rz0 . AQHandles [ 0 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 17 ] + 0 ) ;
sdiWriteSignal ( localDW -> egl1qa3rz0 . AQHandles [ 1 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & o5aw3xkgct + 0 ) ; sdiWriteSignal ( localDW
-> egl1qa3rz0 . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char
* ) & fcgazvxoo5_p + 0 ) ; sdiWriteSignal ( localDW -> egl1qa3rz0 . AQHandles
[ 3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & kfjvmep0su_p + 0 ) ;
} } if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1
, 0 ) ) { if ( localDW -> egl1qa3rz0 . AQHandles [ 4 ] && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> egl1qa3rz0 .
AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) , ( char * ) & hgkcd1aqme
+ 0 ) ; } } } fcgazvxoo5_p = ( localB -> jp1ydpzuo3 [ 9 ] + localB ->
jp1ydpzuo3 [ 11 ] ) - localB -> jp1ydpzuo3 [ 14 ] ; { if ( localDW ->
gz2yikcxsbro0 . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) )
{ sdiWriteSignal ( localDW -> gz2yikcxsbro0 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & fcgazvxoo5_p + 0 ) ; } } { if ( localDW ->
jb5p2yd0ppu . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> jb5p2yd0ppu . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 11 ] + 0 ) ; } } { if
( localDW -> pt2ziyjsco . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> pt2ziyjsco . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 14 ]
+ 0 ) ; } } { if ( localDW -> kesjhajib2 . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> kesjhajib2 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 9 ] + 0 ) ; } } hgkcd1aqme = locdm2fqb0 . P_112 * localB ->
jp1ydpzuo3 [ 14 ] ; o5aw3xkgct = locdm2fqb0 . P_113 * localB -> jp1ydpzuo3 [
9 ] ; fcgazvxoo5_p *= locdm2fqb0 . P_114 ; if ( rtmIsMajorTimeStep (
lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) ) { cqrg5czzn3 =
locdm2fqb0 . P_115 ; } { if ( 1 ) { if ( localDW -> lgy0uoa1sd . AQHandles [
0 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal (
localDW -> lgy0uoa1sd . AQHandles [ 0 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) ,
( char * ) & localB -> jp1ydpzuo3 [ 11 ] + 0 ) ; sdiWriteSignal ( localDW ->
lgy0uoa1sd . AQHandles [ 1 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * )
& hgkcd1aqme + 0 ) ; sdiWriteSignal ( localDW -> lgy0uoa1sd . AQHandles [ 2 ]
, rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & o5aw3xkgct + 0 ) ;
sdiWriteSignal ( localDW -> lgy0uoa1sd . AQHandles [ 3 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & fcgazvxoo5_p + 0 ) ; } } if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ if ( localDW -> lgy0uoa1sd . AQHandles [ 4 ] && ssGetLogOutput ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> lgy0uoa1sd . AQHandles [ 4
] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) , ( char * ) & cqrg5czzn3 + 0 ) ; } } }
o5aw3xkgct = ( localB -> jp1ydpzuo3 [ 10 ] + localB -> jp1ydpzuo3 [ 14 ] ) -
localB -> jp1ydpzuo3 [ 17 ] ; { if ( localDW -> gz2yikcxsbro0p . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
gz2yikcxsbro0p . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
o5aw3xkgct + 0 ) ; } } { if ( localDW -> pt2ziyjsco3 . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
pt2ziyjsco3 . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
localB -> jp1ydpzuo3 [ 14 ] + 0 ) ; } } { if ( localDW -> nwagfadtz5a .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> nwagfadtz5a . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , (
char * ) & localB -> jp1ydpzuo3 [ 17 ] + 0 ) ; } } cqrg5czzn3 = locdm2fqb0 .
P_116 * localB -> jp1ydpzuo3 [ 17 ] ; hgkcd1aqme = locdm2fqb0 . P_117 *
localB -> jp1ydpzuo3 [ 10 ] ; o5aw3xkgct *= locdm2fqb0 . P_118 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ dftg5mfwlq = locdm2fqb0 . P_119 ; } { if ( 1 ) { if ( localDW -> mi0wkvcekx
. AQHandles [ 0 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> mi0wkvcekx . AQHandles [ 0 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & localB -> jp1ydpzuo3 [ 14 ] + 0 ) ;
sdiWriteSignal ( localDW -> mi0wkvcekx . AQHandles [ 1 ] , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & cqrg5czzn3 + 0 ) ; sdiWriteSignal ( localDW
-> mi0wkvcekx . AQHandles [ 2 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char
* ) & hgkcd1aqme + 0 ) ; sdiWriteSignal ( localDW -> mi0wkvcekx . AQHandles [
3 ] , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & o5aw3xkgct + 0 ) ; } }
if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0
) ) { if ( localDW -> mi0wkvcekx . AQHandles [ 4 ] && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> mi0wkvcekx .
AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 1 ) , ( char * ) & dftg5mfwlq
+ 0 ) ; } } } { if ( localDW -> li5lvqaaj1 . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> li5lvqaaj1 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & localB ->
jp1ydpzuo3 [ 10 ] + 0 ) ; } } } void FCElectricPlantTID2 ( m5e23pbc2h * const
lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ) { if ( localDW ->
osc4woswiv . AQHandles [ 1 ] && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS )
) { sdiWriteSignal ( localDW -> osc4woswiv . AQHandles [ 1 ] , rtmGetTaskTime
( lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T * ) & FCElectricPlant_RGND )
+ 0 ) ; } if ( localDW -> osc4woswivbkkc . AQHandles [ 4 ] && ssGetLogOutput
( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> osc4woswivbkkc
. AQHandles [ 4 ] , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) ( ( const
real_T * ) & FCElectricPlant_RGND ) + 0 ) ; } localB -> fx43kwv5es =
locdm2fqb0 . P_126 ; localB -> lkaazqtytn = locdm2fqb0 . P_162 + locdm2fqb0 .
P_161 ; localB -> i0bjca5fqd = locdm2fqb0 . P_179 + locdm2fqb0 . P_178 ; }
void czx1gq31fm ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 64 ] ; real_T time ; int32_T
tmp_i ; int_T tmp_e [ 17 ] ; boolean_T tmp ; if ( rtmIsMajorTimeStep (
lmamcwn3a2 ) ) { if ( memcmp ( lmamcwn3a2 -> nonContDerivSignal [ 0 ] .
pCurrVal , lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pPrevVal , lmamcwn3a2 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pPrevVal , lmamcwn3a2 ->
nonContDerivSignal [ 0 ] . pCurrVal , lmamcwn3a2 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; } if
( memcmp ( lmamcwn3a2 -> nonContDerivSignal [ 1 ] . pCurrVal , lmamcwn3a2 ->
nonContDerivSignal [ 1 ] . pPrevVal , lmamcwn3a2 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( lmamcwn3a2 -> nonContDerivSignal [
1 ] . pPrevVal , lmamcwn3a2 -> nonContDerivSignal [ 1 ] . pCurrVal ,
lmamcwn3a2 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; } } localDW ->
iendyrbljp = 0 ; localDW -> k43gfcul4g = 0 ; simulationData = (
NeslSimulationData * ) localDW -> nrcoddu4oo ; time = rtmGetTaskTime (
lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 575 ; simulationData -> mData -> mContStates . mX = & localX -> hc0befvp5x
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> jvpu2sz5kh ; simulationData -> mData
-> mModeVector . mN = 356 ; simulationData -> mData -> mModeVector . mX = &
localDW -> jrexd3jabx [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> dfmft0mmxa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS )
) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ localDW -> o0gi1dmk1n = localB -> erzhvjpwjn ; } } void imv3dllygl (
m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 64 ] ; real_T time ; int_T tmp_e [ 17 ] ; int_T is ; uint32_T ri ;
boolean_T tmp ; localXdot -> bfsuffvrld = 0.0 ; localXdot -> bfsuffvrld +=
locdm2fqb0 . P_25 * localX -> bfsuffvrld ; localXdot -> bfsuffvrld += localB
-> jp1ydpzuo3 [ 2 ] ; localXdot -> ll2zpokgiv = 0.0 ; localXdot -> ll2zpokgiv
+= locdm2fqb0 . P_27 * localX -> ll2zpokgiv ; localXdot -> ll2zpokgiv +=
localB -> fspg4iv5e0 ; localXdot -> o2r5v3x4i0 = 0.0 ; localXdot ->
o2r5v3x4i0 += locdm2fqb0 . P_29 * localX -> o2r5v3x4i0 ; localXdot ->
o2r5v3x4i0 += localB -> blkxt1p0nv ; localXdot -> ododiz1doe = ( localB ->
mdomnmflce - localX -> ododiz1doe ) * 1000.0 ; localXdot -> l4izeu1m2j = 0.0
; localXdot -> l4izeu1m2j += locdm2fqb0 . P_33 * localX -> l4izeu1m2j ;
localXdot -> l4izeu1m2j += localB -> mofh5aef0k [ 1 ] ; localXdot ->
bsitd53ytf = 0.0 ; localXdot -> bsitd53ytf += locdm2fqb0 . P_35 * localX ->
bsitd53ytf ; localXdot -> bsitd53ytf += localB -> jp1ydpzuo3 [ 6 ] ;
localXdot -> l5dycs0bvi = localB -> fjldr12rl2 ; localXdot -> kao5g3ej40 =
localB -> dibpyqq1gq - localX -> kao5g3ej40 ; localXdot -> fqwgy5xfo2 = 0.0 ;
localXdot -> fqwgy5xfo2 += locdm2fqb0 . P_37 * localX -> fqwgy5xfo2 ;
localXdot -> fqwgy5xfo2 += locdm2fqb0 . P_142 ; localXdot -> mspdttcnoi = 0.0
; localXdot -> mspdttcnoi += locdm2fqb0 . P_39 * localX -> mspdttcnoi ;
localXdot -> mspdttcnoi += localB -> epupyg1odo ; localXdot -> iru3slp4rk =
0.0 ; localXdot -> iru3slp4rk += locdm2fqb0 . P_41 * localX -> iru3slp4rk ;
localXdot -> iru3slp4rk += localB -> gef2pihfya ; localXdot -> gq2lttxonz =
0.0 ; localXdot -> gq2lttxonz += locdm2fqb0 . P_43 * localX -> gq2lttxonz ;
localXdot -> gq2lttxonz += localB -> ghgbigehcu ; localXdot -> egvmmui2tw =
0.0 ; localXdot -> egvmmui2tw += locdm2fqb0 . P_45 * localX -> egvmmui2tw ;
localXdot -> egvmmui2tw += localB -> gc1dhic5yu ; localXdot -> p2q3k5uofv =
0.0 ; localXdot -> p2q3k5uofv += locdm2fqb0 . P_47 * localX -> p2q3k5uofv ;
localXdot -> p2q3k5uofv += localB -> ghgbigehcu ; localXdot -> ft42zg3ldp =
0.0 ; localXdot -> ft42zg3ldp += locdm2fqb0 . P_49 * localX -> ft42zg3ldp ;
localXdot -> ft42zg3ldp += localB -> no3gaew0sh ; localXdot -> bv3salhmw5 =
0.0 ; localXdot -> bv3salhmw5 += locdm2fqb0 . P_51 * localX -> bv3salhmw5 ;
localXdot -> bv3salhmw5 += localB -> oh2tziv2ie ; localXdot -> mqbbmlcioe =
0.0 ; localXdot -> mqbbmlcioe += locdm2fqb0 . P_53 * localX -> mqbbmlcioe ;
localXdot -> mqbbmlcioe += localB -> jp1ydpzuo3 [ 30 ] ; localXdot ->
ovfkya0dec = 0.0 ; localXdot -> ovfkya0dec += locdm2fqb0 . P_55 * localX ->
ovfkya0dec ; localXdot -> ovfkya0dec += localB -> ognofyd5hf ; localXdot ->
fgagg4wluz = localB -> b0l5c0ek5s ; localXdot -> le0qy3dd51 = localB ->
mvpzeu1ifa ; localXdot -> eh3gmz41df = 0.0 ; localXdot -> eh3gmz41df +=
locdm2fqb0 . P_59 * localX -> eh3gmz41df ; localXdot -> eh3gmz41df += *
crmxvln0sn ; localXdot -> nnch4zsoe1 = ( localB -> asvtjyjank - localX ->
nnch4zsoe1 ) * 1000.0 ; simulationData = ( NeslSimulationData * ) localDW ->
nrcoddu4oo ; time = rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 575 ; simulationData -> mData
-> mContStates . mX = & localX -> hc0befvp5x [ 0 ] ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
localDW -> jvpu2sz5kh ; simulationData -> mData -> mModeVector . mN = 356 ;
simulationData -> mData -> mModeVector . mX = & localDW -> jrexd3jabx [ 0 ] ;
tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 575 ; simulationData -> mData -> mDx .
mX = & localXdot -> hc0befvp5x [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> dfmft0mmxa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS
) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localXdot ->
pe3foqvhcv = 0.0 ; localXdot -> pe3foqvhcv += locdm2fqb0 . P_64 * localX ->
pe3foqvhcv ; localXdot -> pe3foqvhcv += localB -> jp1ydpzuo3 [ 31 ] ;
localXdot -> ahqoemcw2g = 0.0 ; localXdot -> ahqoemcw2g += locdm2fqb0 . P_76
* localX -> ahqoemcw2g ; localXdot -> ahqoemcw2g += localB -> jp1ydpzuo3 [ 35
] ; localXdot -> owi0hrxchy = 0.0 ; for ( ri = locdm2fqb0 . P_197 [ 0U ] ; ri
< locdm2fqb0 . P_197 [ 1U ] ; ri ++ ) { localXdot -> owi0hrxchy += locdm2fqb0
. P_83 * localX -> owi0hrxchy ; } for ( ri = locdm2fqb0 . P_199 [ 0U ] ; ri <
locdm2fqb0 . P_199 [ 1U ] ; ri ++ ) { localXdot -> owi0hrxchy += locdm2fqb0 .
P_84 * localB -> jp1ydpzuo3 [ 3 ] ; } localXdot -> ecw01zmuxh = 0.0 ;
localXdot -> ecw01zmuxh += locdm2fqb0 . P_92 * localX -> ecw01zmuxh ;
localXdot -> ecw01zmuxh += localB -> jp1ydpzuo3 [ 27 ] ; localXdot ->
d411ir5utj = localB -> pnpai0ecxg ; localXdot -> hqy4omzhyd = localB ->
n0usl0lx3o ; } void mscgivy4fk ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 64 ] ; real_T time ; int32_T
tmp_i ; int_T tmp_e [ 17 ] ; boolean_T tmp ; simulationData = (
NeslSimulationData * ) localDW -> nrcoddu4oo ; time = rtmGetTaskTime (
lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 575 ; simulationData -> mData -> mContStates . mX = & localX -> hc0befvp5x
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> jvpu2sz5kh ; simulationData -> mData
-> mModeVector . mN = 356 ; simulationData -> mData -> mModeVector . mX = &
localDW -> jrexd3jabx [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> dfmft0mmxa ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } } void
iyhavcqilr ( m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd
* localXdot ) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 64 ] ; real_T time ; int_T tmp_e [ 17 ] ; int_T is ; uint32_T ri ;
boolean_T tmp ; localXdot -> bfsuffvrld = 0.0 ; localXdot -> bfsuffvrld +=
locdm2fqb0 . P_25 * localX -> bfsuffvrld ; localXdot -> bfsuffvrld += localB
-> jp1ydpzuo3 [ 2 ] ; localXdot -> ll2zpokgiv = 0.0 ; localXdot -> ll2zpokgiv
+= locdm2fqb0 . P_27 * localX -> ll2zpokgiv ; localXdot -> ll2zpokgiv +=
localB -> fspg4iv5e0 ; localXdot -> o2r5v3x4i0 = 0.0 ; localXdot ->
o2r5v3x4i0 += locdm2fqb0 . P_29 * localX -> o2r5v3x4i0 ; localXdot ->
o2r5v3x4i0 += localB -> blkxt1p0nv ; localXdot -> ododiz1doe = ( localB ->
mdomnmflce - localX -> ododiz1doe ) * 1000.0 ; localXdot -> l4izeu1m2j = 0.0
; localXdot -> l4izeu1m2j += locdm2fqb0 . P_33 * localX -> l4izeu1m2j ;
localXdot -> l4izeu1m2j += localB -> mofh5aef0k [ 1 ] ; localXdot ->
bsitd53ytf = 0.0 ; localXdot -> bsitd53ytf += locdm2fqb0 . P_35 * localX ->
bsitd53ytf ; localXdot -> bsitd53ytf += localB -> jp1ydpzuo3 [ 6 ] ;
localXdot -> l5dycs0bvi = localB -> fjldr12rl2 ; localXdot -> kao5g3ej40 =
localB -> dibpyqq1gq - localX -> kao5g3ej40 ; localXdot -> fqwgy5xfo2 = 0.0 ;
localXdot -> fqwgy5xfo2 += locdm2fqb0 . P_37 * localX -> fqwgy5xfo2 ;
localXdot -> fqwgy5xfo2 += locdm2fqb0 . P_142 ; localXdot -> mspdttcnoi = 0.0
; localXdot -> mspdttcnoi += locdm2fqb0 . P_39 * localX -> mspdttcnoi ;
localXdot -> mspdttcnoi += localB -> epupyg1odo ; localXdot -> iru3slp4rk =
0.0 ; localXdot -> iru3slp4rk += locdm2fqb0 . P_41 * localX -> iru3slp4rk ;
localXdot -> iru3slp4rk += localB -> gef2pihfya ; localXdot -> gq2lttxonz =
0.0 ; localXdot -> gq2lttxonz += locdm2fqb0 . P_43 * localX -> gq2lttxonz ;
localXdot -> gq2lttxonz += localB -> ghgbigehcu ; localXdot -> egvmmui2tw =
0.0 ; localXdot -> egvmmui2tw += locdm2fqb0 . P_45 * localX -> egvmmui2tw ;
localXdot -> egvmmui2tw += localB -> gc1dhic5yu ; localXdot -> p2q3k5uofv =
0.0 ; localXdot -> p2q3k5uofv += locdm2fqb0 . P_47 * localX -> p2q3k5uofv ;
localXdot -> p2q3k5uofv += localB -> ghgbigehcu ; localXdot -> ft42zg3ldp =
0.0 ; localXdot -> ft42zg3ldp += locdm2fqb0 . P_49 * localX -> ft42zg3ldp ;
localXdot -> ft42zg3ldp += localB -> no3gaew0sh ; localXdot -> bv3salhmw5 =
0.0 ; localXdot -> bv3salhmw5 += locdm2fqb0 . P_51 * localX -> bv3salhmw5 ;
localXdot -> bv3salhmw5 += localB -> oh2tziv2ie ; localXdot -> mqbbmlcioe =
0.0 ; localXdot -> mqbbmlcioe += locdm2fqb0 . P_53 * localX -> mqbbmlcioe ;
localXdot -> mqbbmlcioe += localB -> jp1ydpzuo3 [ 30 ] ; localXdot ->
ovfkya0dec = 0.0 ; localXdot -> ovfkya0dec += locdm2fqb0 . P_55 * localX ->
ovfkya0dec ; localXdot -> ovfkya0dec += localB -> ognofyd5hf ; localXdot ->
fgagg4wluz = localB -> b0l5c0ek5s ; localXdot -> le0qy3dd51 = localB ->
mvpzeu1ifa ; localXdot -> eh3gmz41df = 0.0 ; localXdot -> eh3gmz41df +=
locdm2fqb0 . P_59 * localX -> eh3gmz41df ; localXdot -> eh3gmz41df += *
crmxvln0sn ; localXdot -> nnch4zsoe1 = ( localB -> asvtjyjank - localX ->
nnch4zsoe1 ) * 1000.0 ; simulationData = ( NeslSimulationData * ) localDW ->
nrcoddu4oo ; time = rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 575 ; simulationData -> mData
-> mContStates . mX = & localX -> hc0befvp5x [ 0 ] ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
localDW -> jvpu2sz5kh ; simulationData -> mData -> mModeVector . mN = 356 ;
simulationData -> mData -> mModeVector . mX = & localDW -> jrexd3jabx [ 0 ] ;
tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 575 ; simulationData -> mData -> mDx .
mX = & localXdot -> hc0befvp5x [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> dfmft0mmxa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localXdot ->
pe3foqvhcv = 0.0 ; localXdot -> pe3foqvhcv += locdm2fqb0 . P_64 * localX ->
pe3foqvhcv ; localXdot -> pe3foqvhcv += localB -> jp1ydpzuo3 [ 31 ] ;
localXdot -> ahqoemcw2g = 0.0 ; localXdot -> ahqoemcw2g += locdm2fqb0 . P_76
* localX -> ahqoemcw2g ; localXdot -> ahqoemcw2g += localB -> jp1ydpzuo3 [ 35
] ; localXdot -> owi0hrxchy = 0.0 ; for ( ri = locdm2fqb0 . P_197 [ 0U ] ; ri
< locdm2fqb0 . P_197 [ 1U ] ; ri ++ ) { localXdot -> owi0hrxchy += locdm2fqb0
. P_83 * localX -> owi0hrxchy ; } for ( ri = locdm2fqb0 . P_199 [ 0U ] ; ri <
locdm2fqb0 . P_199 [ 1U ] ; ri ++ ) { localXdot -> owi0hrxchy += locdm2fqb0 .
P_84 * localB -> jp1ydpzuo3 [ 3 ] ; } localXdot -> ecw01zmuxh = 0.0 ;
localXdot -> ecw01zmuxh += locdm2fqb0 . P_92 * localX -> ecw01zmuxh ;
localXdot -> ecw01zmuxh += localB -> jp1ydpzuo3 [ 27 ] ; localXdot ->
d411ir5utj = localB -> pnpai0ecxg ; localXdot -> hqy4omzhyd = localB ->
n0usl0lx3o ; } void bpia4crzhf ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 64 ] ; real_T time ; real_T *
tmp_i ; real_T * tmp_m ; int32_T tmp_g ; int_T tmp_e [ 17 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) localDW -> nrcoddu4oo ; time =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1
; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 575 ; simulationData -> mData -> mContStates . mX = &
localX -> hc0befvp5x [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & localDW -> jvpu2sz5kh ;
simulationData -> mData -> mModeVector . mN = 356 ; simulationData -> mData
-> mModeVector . mX = & localDW -> jrexd3jabx [ 0 ] ; tmp = (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
lmamcwn3a2 -> massMatrixBasePr ; tmp_m = double_pointer_shift ( tmp_i ,
localDW -> nl5wf2yj2y ) ; simulationData -> mData -> mMassMatrixPr . mN = 100
; simulationData -> mData -> mMassMatrixPr . mX = tmp_m ; diagnosticManager =
( NeuDiagnosticManager * ) localDW -> dfmft0mmxa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_g =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } } void
abih3gg12y ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn
* localDW , fw3fcrujzt * localX , kqptpzakik * localZCSV ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 64 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 17 ] ; boolean_T
tmp ; localZCSV -> jmyj0demqc = localB -> fmxgn1tqno - locdm2fqb0 . P_20 ;
localZCSV -> lhsrndrv3n = localB -> fmxgn1tqno - locdm2fqb0 . P_11 ;
simulationData = ( NeslSimulationData * ) localDW -> nrcoddu4oo ; time =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1
; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 575 ; simulationData -> mData -> mContStates . mX = &
localX -> hc0befvp5x [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & localDW -> jvpu2sz5kh ;
simulationData -> mData -> mModeVector . mN = 356 ; simulationData -> mData
-> mModeVector . mX = & localDW -> jrexd3jabx [ 0 ] ; tmp = (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> nvx5lf44af [ 0 ] ; tmp_p [ 1 ] =
localB -> nvx5lf44af [ 1 ] ; tmp_p [ 2 ] = localB -> nvx5lf44af [ 2 ] ; tmp_p
[ 3 ] = localB -> nvx5lf44af [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> de33fjxukj [ 0 ] ; tmp_p [ 5 ] = localB -> de33fjxukj [ 1 ] ; tmp_p [ 6 ]
= localB -> de33fjxukj [ 2 ] ; tmp_p [ 7 ] = localB -> de33fjxukj [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> mcckkqf5na [ 0 ] ; tmp_p [ 9 ] =
localB -> mcckkqf5na [ 1 ] ; tmp_p [ 10 ] = localB -> mcckkqf5na [ 2 ] ;
tmp_p [ 11 ] = localB -> mcckkqf5na [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> hbtt12nnfa [ 0 ] ; tmp_p [ 13 ] = localB -> hbtt12nnfa [ 1 ] ;
tmp_p [ 14 ] = localB -> hbtt12nnfa [ 2 ] ; tmp_p [ 15 ] = localB ->
hbtt12nnfa [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> irb3na42wc [ 0
] ; tmp_p [ 17 ] = localB -> irb3na42wc [ 1 ] ; tmp_p [ 18 ] = localB ->
irb3na42wc [ 2 ] ; tmp_p [ 19 ] = localB -> irb3na42wc [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> an253d5vae [ 0 ] ; tmp_p [ 21 ] = localB ->
an253d5vae [ 1 ] ; tmp_p [ 22 ] = localB -> an253d5vae [ 2 ] ; tmp_p [ 23 ] =
localB -> an253d5vae [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
nb1nj1p5c0 [ 0 ] ; tmp_p [ 25 ] = localB -> nb1nj1p5c0 [ 1 ] ; tmp_p [ 26 ] =
localB -> nb1nj1p5c0 [ 2 ] ; tmp_p [ 27 ] = localB -> nb1nj1p5c0 [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> m5of5jfi4b [ 0 ] ; tmp_p [ 29 ] =
localB -> m5of5jfi4b [ 1 ] ; tmp_p [ 30 ] = localB -> m5of5jfi4b [ 2 ] ;
tmp_p [ 31 ] = localB -> m5of5jfi4b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> ls12idsrww [ 0 ] ; tmp_p [ 33 ] = localB -> ls12idsrww [ 1 ] ;
tmp_p [ 34 ] = localB -> ls12idsrww [ 2 ] ; tmp_p [ 35 ] = localB ->
ls12idsrww [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dreownda5n [ 0
] ; tmp_p [ 37 ] = localB -> dreownda5n [ 1 ] ; tmp_p [ 38 ] = localB ->
dreownda5n [ 2 ] ; tmp_p [ 39 ] = localB -> dreownda5n [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> dnb0zj2jmy [ 0 ] ; tmp_p [ 41 ] = localB ->
dnb0zj2jmy [ 1 ] ; tmp_p [ 42 ] = localB -> dnb0zj2jmy [ 2 ] ; tmp_p [ 43 ] =
localB -> dnb0zj2jmy [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
n1x1pyneng [ 0 ] ; tmp_p [ 45 ] = localB -> n1x1pyneng [ 1 ] ; tmp_p [ 46 ] =
localB -> n1x1pyneng [ 2 ] ; tmp_p [ 47 ] = localB -> n1x1pyneng [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> pov0qbm2o5 [ 0 ] ; tmp_p [ 49 ]
= localB -> pov0qbm2o5 [ 1 ] ; tmp_p [ 50 ] = localB -> pov0qbm2o5 [ 2 ] ;
tmp_p [ 51 ] = localB -> pov0qbm2o5 [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> ia12rsbk3j [ 0 ] ; tmp_p [ 53 ] = localB -> ia12rsbk3j [ 1 ] ;
tmp_p [ 54 ] = localB -> ia12rsbk3j [ 2 ] ; tmp_p [ 55 ] = localB ->
ia12rsbk3j [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> ca434qngxk [
0 ] ; tmp_p [ 57 ] = localB -> ca434qngxk [ 1 ] ; tmp_p [ 58 ] = localB ->
ca434qngxk [ 2 ] ; tmp_p [ 59 ] = localB -> ca434qngxk [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> pcfjo3sryx [ 0 ] ; tmp_p [ 61 ] = localB ->
pcfjo3sryx [ 1 ] ; tmp_p [ 62 ] = localB -> pcfjo3sryx [ 2 ] ; tmp_p [ 63 ] =
localB -> pcfjo3sryx [ 3 ] ; tmp_e [ 16 ] = 64 ; simulationData -> mData ->
mInputValues . mN = 64 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 17 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 376 ; simulationData ->
mData -> mNonSampledZCs . mX = & localZCSV -> mffrz0shfo ; diagnosticManager
= ( NeuDiagnosticManager * ) localDW -> dfmft0mmxa ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> icqagpp0oe ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localZCSV ->
hcpo4kt42l = localB -> esw33ksp5x - locdm2fqb0 . P_21 ; localZCSV ->
k14uhom4gg = localB -> esw33ksp5x - locdm2fqb0 . P_12 ; localZCSV ->
gvat22lpxv = localB -> k3ckwtd0wn - locdm2fqb0 . P_22 ; localZCSV ->
atksag0vir = localB -> k3ckwtd0wn - locdm2fqb0 . P_13 ; localZCSV ->
as1oct3n5m = localB -> h1p1ybnntz - locdm2fqb0 . P_102 ; localZCSV ->
cypxykntcs = localB -> h1p1ybnntz - locdm2fqb0 . P_103 ; } void irfppkdltu (
m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ) { if ( ( ssGetSimMode
( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> osc4woswiv .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswiv .
AQHandles [ 0 ] ) ; } if ( localDW -> osc4woswiv . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswiv . AQHandles [ 1 ] ) ; } if (
localDW -> osc4woswiv . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW
-> osc4woswiv . AQHandles [ 2 ] ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> osc4woswivbkkc . AQHandles [ 0 ] ) { sdiTerminateStreaming ( &
localDW -> osc4woswivbkkc . AQHandles [ 0 ] ) ; } if ( localDW ->
osc4woswivbkkc . AQHandles [ 1 ] ) { sdiTerminateStreaming ( & localDW ->
osc4woswivbkkc . AQHandles [ 1 ] ) ; } if ( localDW -> osc4woswivbkkc .
AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivbkkc .
AQHandles [ 2 ] ) ; } if ( localDW -> osc4woswivbkkc . AQHandles [ 3 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswivbkkc . AQHandles [ 3 ] ) ; }
if ( localDW -> osc4woswivbkkc . AQHandles [ 4 ] ) { sdiTerminateStreaming (
& localDW -> osc4woswivbkkc . AQHandles [ 4 ] ) ; } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> edo2yybvgy .
AQHandles ) { sdiTerminateStreaming ( & localDW -> edo2yybvgy . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> k5lhedc1qi .
AQHandles ) { sdiTerminateStreaming ( & localDW -> k5lhedc1qi . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> osc4woswivb .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivb .
AQHandles [ 0 ] ) ; } if ( localDW -> osc4woswivb . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswivb . AQHandles [ 1 ] ) ; } if (
localDW -> osc4woswivb . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> osc4woswivb . AQHandles [ 2 ] ) ; } if ( localDW -> osc4woswivb .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivb .
AQHandles [ 3 ] ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
buyjzzgvti . AQHandles ) { sdiTerminateStreaming ( & localDW -> buyjzzgvti .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
edo2yybvgya . AQHandles ) { sdiTerminateStreaming ( & localDW -> edo2yybvgya
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
osc4woswivbk . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
osc4woswivbk . AQHandles [ 0 ] ) ; } if ( localDW -> osc4woswivbk . AQHandles
[ 1 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivbk . AQHandles [ 1 ]
) ; } if ( localDW -> osc4woswivbk . AQHandles [ 2 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswivbk . AQHandles [ 2 ] ) ; } if
( localDW -> osc4woswivbk . AQHandles [ 3 ] ) { sdiTerminateStreaming ( &
localDW -> osc4woswivbk . AQHandles [ 3 ] ) ; } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> osc4woswivbkk .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivbkk .
AQHandles [ 0 ] ) ; } if ( localDW -> osc4woswivbkk . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswivbkk . AQHandles [ 1 ] ) ; } if
( localDW -> osc4woswivbkk . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> osc4woswivbkk . AQHandles [ 2 ] ) ; } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> jhjx45yzf4 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> jhjx45yzf4 . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gz2yikcxsb .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gz2yikcxsb . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> aqh4yyrzcm .
AQHandles ) { sdiTerminateStreaming ( & localDW -> aqh4yyrzcm . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> dkfsbamwtk .
AQHandles ) { sdiTerminateStreaming ( & localDW -> dkfsbamwtk . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> jrwijamgle .
AQHandles ) { sdiTerminateStreaming ( & localDW -> jrwijamgle . AQHandles ) ;
} } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> jrwijamgle5 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> jrwijamgle5 . AQHandles )
; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
dcdtdbr1d3 . AQHandles ) { sdiTerminateStreaming ( & localDW -> dcdtdbr1d3 .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
dcdtdbr1d3z . AQHandles ) { sdiTerminateStreaming ( & localDW -> dcdtdbr1d3z
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
i2u4vgtwno . AQHandles ) { sdiTerminateStreaming ( & localDW -> i2u4vgtwno .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
i2u4vgtwnoa . AQHandles ) { sdiTerminateStreaming ( & localDW -> i2u4vgtwnoa
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
dcdtdbr1d3z0 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dcdtdbr1d3z0 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> m2qzuth4hh . AQHandles ) { sdiTerminateStreaming ( & localDW ->
m2qzuth4hh . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> fasht4sk1b . AQHandles ) { sdiTerminateStreaming ( & localDW ->
fasht4sk1b . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> nkz4go02r3 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
nkz4go02r3 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dcdtdbr1d3z0r . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dcdtdbr1d3z0r . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> m2qzuth4hh2 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
m2qzuth4hh2 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> fasht4sk1bm . AQHandles ) { sdiTerminateStreaming ( & localDW ->
fasht4sk1bm . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> j033re5cgt . AQHandles ) { sdiTerminateStreaming ( & localDW ->
j033re5cgt . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> iuyyqw2ka5 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
iuyyqw2ka5 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dcdtdbr1d3z0re . AQHandles ) { sdiTerminateStreaming ( & localDW
-> dcdtdbr1d3z0re . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> m2qzuth4hh2u . AQHandles ) { sdiTerminateStreaming ( & localDW ->
m2qzuth4hh2u . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> fasht4sk1bmp . AQHandles ) { sdiTerminateStreaming ( & localDW ->
fasht4sk1bmp . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> j033re5cgtw . AQHandles ) { sdiTerminateStreaming ( & localDW ->
j033re5cgtw . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dcdtdbr1d3z0rew . AQHandles ) { sdiTerminateStreaming ( & localDW
-> dcdtdbr1d3z0rew . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> m2qzuth4hh2ux . AQHandles ) { sdiTerminateStreaming ( & localDW ->
m2qzuth4hh2ux . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> fasht4sk1bmpq . AQHandles ) { sdiTerminateStreaming ( & localDW ->
fasht4sk1bmpq . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> j033re5cgtw2 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
j033re5cgtw2 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> gz2yikcxsbr . AQHandles ) { sdiTerminateStreaming ( & localDW ->
gz2yikcxsbr . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> jb5p2yd0pp . AQHandles ) { sdiTerminateStreaming ( & localDW ->
jb5p2yd0pp . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> osc4woswivbkkch . AQHandles [ 0 ] ) { sdiTerminateStreaming ( &
localDW -> osc4woswivbkkch . AQHandles [ 0 ] ) ; } if ( localDW ->
osc4woswivbkkch . AQHandles [ 1 ] ) { sdiTerminateStreaming ( & localDW ->
osc4woswivbkkch . AQHandles [ 1 ] ) ; } if ( localDW -> osc4woswivbkkch .
AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW -> osc4woswivbkkch .
AQHandles [ 2 ] ) ; } if ( localDW -> osc4woswivbkkch . AQHandles [ 3 ] ) {
sdiTerminateStreaming ( & localDW -> osc4woswivbkkch . AQHandles [ 3 ] ) ; }
if ( localDW -> osc4woswivbkkch . AQHandles [ 4 ] ) { sdiTerminateStreaming (
& localDW -> osc4woswivbkkch . AQHandles [ 4 ] ) ; } } if ( ( ssGetSimMode (
lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gz2yikcxsbro .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gz2yikcxsbro . AQHandles )
; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
nwagfadtz5 . AQHandles ) { sdiTerminateStreaming ( & localDW -> nwagfadtz5 .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
ir3sjqcelg . AQHandles ) { sdiTerminateStreaming ( & localDW -> ir3sjqcelg .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
boxtz4t1xz . AQHandles ) { sdiTerminateStreaming ( & localDW -> boxtz4t1xz .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
egl1qa3rz0 . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
egl1qa3rz0 . AQHandles [ 0 ] ) ; } if ( localDW -> egl1qa3rz0 . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> egl1qa3rz0 . AQHandles [ 1 ] ) ; }
if ( localDW -> egl1qa3rz0 . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> egl1qa3rz0 . AQHandles [ 2 ] ) ; } if ( localDW -> egl1qa3rz0 .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> egl1qa3rz0 .
AQHandles [ 3 ] ) ; } if ( localDW -> egl1qa3rz0 . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> egl1qa3rz0 . AQHandles [ 4 ] ) ; } } if
( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && (
( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gz2yikcxsbro0 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gz2yikcxsbro0 . AQHandles
) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
jb5p2yd0ppu . AQHandles ) { sdiTerminateStreaming ( & localDW -> jb5p2yd0ppu
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
pt2ziyjsco . AQHandles ) { sdiTerminateStreaming ( & localDW -> pt2ziyjsco .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
kesjhajib2 . AQHandles ) { sdiTerminateStreaming ( & localDW -> kesjhajib2 .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
lgy0uoa1sd . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
lgy0uoa1sd . AQHandles [ 0 ] ) ; } if ( localDW -> lgy0uoa1sd . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> lgy0uoa1sd . AQHandles [ 1 ] ) ; }
if ( localDW -> lgy0uoa1sd . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> lgy0uoa1sd . AQHandles [ 2 ] ) ; } if ( localDW -> lgy0uoa1sd .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> lgy0uoa1sd .
AQHandles [ 3 ] ) ; } if ( localDW -> lgy0uoa1sd . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> lgy0uoa1sd . AQHandles [ 4 ] ) ; } } if
( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && (
( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gz2yikcxsbro0p .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gz2yikcxsbro0p . AQHandles
) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
pt2ziyjsco3 . AQHandles ) { sdiTerminateStreaming ( & localDW -> pt2ziyjsco3
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
nwagfadtz5a . AQHandles ) { sdiTerminateStreaming ( & localDW -> nwagfadtz5a
. AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
mi0wkvcekx . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
mi0wkvcekx . AQHandles [ 0 ] ) ; } if ( localDW -> mi0wkvcekx . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> mi0wkvcekx . AQHandles [ 1 ] ) ; }
if ( localDW -> mi0wkvcekx . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> mi0wkvcekx . AQHandles [ 2 ] ) ; } if ( localDW -> mi0wkvcekx .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> mi0wkvcekx .
AQHandles [ 3 ] ) ; } if ( localDW -> mi0wkvcekx . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> mi0wkvcekx . AQHandles [ 4 ] ) ; } } if
( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && (
( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> li5lvqaaj1 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> li5lvqaaj1 . AQHandles ) ;
} } } void mt14yrnbuj ( ammy3t1awn * localDW , m5e23pbc2h * const lmamcwn3a2
) { neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
dfmft0mmxa ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> nrcoddu4oo ) ; nesl_erase_simulator (
"FCElectricPlant/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
g3dbxdq2jx ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> m5secpsmnt ) ; nesl_erase_simulator (
"FCElectricPlant/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
hrog11bqbc ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> grsi0hcpom ) ; nesl_erase_simulator (
"FCElectricPlant/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
an32etucup ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> ip3im53ih0 ) ; nesl_erase_simulator (
"FCElectricPlant/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ; if (
! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( lmamcwn3a2 ->
_mdlRefSfcnS , "FCElectricPlant" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void axkawtnuua (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , km30avrcex * localZCE , real_T *
localMM , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; locdm2fqb0 . P_31 =
rtInf ; locdm2fqb0 . P_96 = rtInf ; locdm2fqb0 . P_99 = rtInf ; ( void )
memset ( ( void * ) lmamcwn3a2 , 0 , sizeof ( m5e23pbc2h ) ) ; lmamcwn3a2 ->
Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; lmamcwn3a2 -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; lmamcwn3a2 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; lmamcwn3a2 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lmamcwn3a2 -> _mdlRefSfcnS , "FCElectricPlant" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( o4lq13rlvq ) ) ; { int32_T i ; for ( i = 0 ; i <
931 ; i ++ ) { localB -> b2pla4cyor [ i ] = 0.0 ; } for ( i = 0 ; i < 36 ; i
++ ) { localB -> jp1ydpzuo3 [ i ] = 0.0 ; } localB -> nvx5lf44af [ 0 ] = 0.0
; localB -> nvx5lf44af [ 1 ] = 0.0 ; localB -> nvx5lf44af [ 2 ] = 0.0 ;
localB -> nvx5lf44af [ 3 ] = 0.0 ; localB -> mdomnmflce = 0.0 ; localB ->
de33fjxukj [ 0 ] = 0.0 ; localB -> de33fjxukj [ 1 ] = 0.0 ; localB ->
de33fjxukj [ 2 ] = 0.0 ; localB -> de33fjxukj [ 3 ] = 0.0 ; localB ->
dibpyqq1gq = 0.0 ; localB -> mcckkqf5na [ 0 ] = 0.0 ; localB -> mcckkqf5na [
1 ] = 0.0 ; localB -> mcckkqf5na [ 2 ] = 0.0 ; localB -> mcckkqf5na [ 3 ] =
0.0 ; localB -> hbtt12nnfa [ 0 ] = 0.0 ; localB -> hbtt12nnfa [ 1 ] = 0.0 ;
localB -> hbtt12nnfa [ 2 ] = 0.0 ; localB -> hbtt12nnfa [ 3 ] = 0.0 ; localB
-> irb3na42wc [ 0 ] = 0.0 ; localB -> irb3na42wc [ 1 ] = 0.0 ; localB ->
irb3na42wc [ 2 ] = 0.0 ; localB -> irb3na42wc [ 3 ] = 0.0 ; localB ->
an253d5vae [ 0 ] = 0.0 ; localB -> an253d5vae [ 1 ] = 0.0 ; localB ->
an253d5vae [ 2 ] = 0.0 ; localB -> an253d5vae [ 3 ] = 0.0 ; localB ->
nb1nj1p5c0 [ 0 ] = 0.0 ; localB -> nb1nj1p5c0 [ 1 ] = 0.0 ; localB ->
nb1nj1p5c0 [ 2 ] = 0.0 ; localB -> nb1nj1p5c0 [ 3 ] = 0.0 ; localB ->
m5of5jfi4b [ 0 ] = 0.0 ; localB -> m5of5jfi4b [ 1 ] = 0.0 ; localB ->
m5of5jfi4b [ 2 ] = 0.0 ; localB -> m5of5jfi4b [ 3 ] = 0.0 ; localB ->
ls12idsrww [ 0 ] = 0.0 ; localB -> ls12idsrww [ 1 ] = 0.0 ; localB ->
ls12idsrww [ 2 ] = 0.0 ; localB -> ls12idsrww [ 3 ] = 0.0 ; localB ->
dreownda5n [ 0 ] = 0.0 ; localB -> dreownda5n [ 1 ] = 0.0 ; localB ->
dreownda5n [ 2 ] = 0.0 ; localB -> dreownda5n [ 3 ] = 0.0 ; localB ->
imxaiqq1q1 = 0.0 ; localB -> dnb0zj2jmy [ 0 ] = 0.0 ; localB -> dnb0zj2jmy [
1 ] = 0.0 ; localB -> dnb0zj2jmy [ 2 ] = 0.0 ; localB -> dnb0zj2jmy [ 3 ] =
0.0 ; localB -> n1x1pyneng [ 0 ] = 0.0 ; localB -> n1x1pyneng [ 1 ] = 0.0 ;
localB -> n1x1pyneng [ 2 ] = 0.0 ; localB -> n1x1pyneng [ 3 ] = 0.0 ; localB
-> ckqxpgmujh = 0.0 ; localB -> pov0qbm2o5 [ 0 ] = 0.0 ; localB -> pov0qbm2o5
[ 1 ] = 0.0 ; localB -> pov0qbm2o5 [ 2 ] = 0.0 ; localB -> pov0qbm2o5 [ 3 ] =
0.0 ; localB -> mvpzeu1ifa = 0.0 ; localB -> fmxgn1tqno = 0.0 ; localB ->
ognofyd5hf = 0.0 ; localB -> ia12rsbk3j [ 0 ] = 0.0 ; localB -> ia12rsbk3j [
1 ] = 0.0 ; localB -> ia12rsbk3j [ 2 ] = 0.0 ; localB -> ia12rsbk3j [ 3 ] =
0.0 ; localB -> ca434qngxk [ 0 ] = 0.0 ; localB -> ca434qngxk [ 1 ] = 0.0 ;
localB -> ca434qngxk [ 2 ] = 0.0 ; localB -> ca434qngxk [ 3 ] = 0.0 ; localB
-> asvtjyjank = 0.0 ; localB -> pcfjo3sryx [ 0 ] = 0.0 ; localB -> pcfjo3sryx
[ 1 ] = 0.0 ; localB -> pcfjo3sryx [ 2 ] = 0.0 ; localB -> pcfjo3sryx [ 3 ] =
0.0 ; localB -> eauwjsjeoh = 0.0 ; localB -> blkxt1p0nv = 0.0 ; localB ->
mofh5aef0k [ 0 ] = 0.0 ; localB -> mofh5aef0k [ 1 ] = 0.0 ; localB ->
fjldr12rl2 = 0.0 ; localB -> b0l5c0ek5s = 0.0 ; localB -> fspg4iv5e0 = 0.0 ;
localB -> fw14jo2wz3 = 0.0 ; localB -> esw33ksp5x = 0.0 ; localB ->
oh2tziv2ie = 0.0 ; localB -> pnpai0ecxg = 0.0 ; localB -> ghgbigehcu = 0.0 ;
localB -> k3ckwtd0wn = 0.0 ; localB -> no3gaew0sh = 0.0 ; localB ->
n0usl0lx3o = 0.0 ; localB -> gef2pihfya = 0.0 ; localB -> gc1dhic5yu = 0.0 ;
localB -> h1p1ybnntz = 0.0 ; localB -> epupyg1odo = 0.0 ; localB ->
fx43kwv5es = 0.0 ; localB -> lkaazqtytn = 0.0 ; localB -> i0bjca5fqd = 0.0 ;
} ( void ) memset ( ( void * ) localDW , 0 , sizeof ( ammy3t1awn ) ) ;
localDW -> jg0pa544mj [ 0 ] = 0.0 ; localDW -> jg0pa544mj [ 1 ] = 0.0 ;
localDW -> bens2xo0mt = 0.0 ; localDW -> biz2tfyo24 = 0.0 ; localDW ->
iy1jghvlve = 0.0 ; localDW -> kvurm2oqxu = 0.0 ; localDW -> c0wsiqhgrt [ 0 ]
= 0.0 ; localDW -> c0wsiqhgrt [ 1 ] = 0.0 ; localDW -> pisj2y40n3 [ 0 ] = 0.0
; localDW -> pisj2y40n3 [ 1 ] = 0.0 ; localDW -> jp2nm55itc [ 0 ] = 0.0 ;
localDW -> jp2nm55itc [ 1 ] = 0.0 ; localDW -> gkehphfcto [ 0 ] = 0.0 ;
localDW -> gkehphfcto [ 1 ] = 0.0 ; localDW -> d252k4pf4q [ 0 ] = 0.0 ;
localDW -> d252k4pf4q [ 1 ] = 0.0 ; localDW -> hntw41r4fh [ 0 ] = 0.0 ;
localDW -> hntw41r4fh [ 1 ] = 0.0 ; localDW -> jjdma1xftq [ 0 ] = 0.0 ;
localDW -> jjdma1xftq [ 1 ] = 0.0 ; localDW -> mbqrzctqwx [ 0 ] = 0.0 ;
localDW -> mbqrzctqwx [ 1 ] = 0.0 ; localDW -> k34x2xbjft [ 0 ] = 0.0 ;
localDW -> k34x2xbjft [ 1 ] = 0.0 ; localDW -> cl1v2os4aw [ 0 ] = 0.0 ;
localDW -> cl1v2os4aw [ 1 ] = 0.0 ; localDW -> brcmfntiiy [ 0 ] = 0.0 ;
localDW -> brcmfntiiy [ 1 ] = 0.0 ; localDW -> fkcmhgm1js [ 0 ] = 0.0 ;
localDW -> fkcmhgm1js [ 1 ] = 0.0 ; localDW -> d5qyo22zjn = 0.0 ; localDW ->
d2nw5osdie = 0.0 ; localDW -> jvpu2sz5kh = 0.0 ; localDW -> n1z1jmaon1 = 0.0
; localDW -> lthorw5noi = 0.0 ; localDW -> ll0ogy1o1p = 0.0 ;
FCElectricPlant_InitializeDataMapInfo ( lmamcwn3a2 , localDW , localX ,
sysRanPtr , contextTid ) ; { lmamcwn3a2 -> massMatrixBasePr = localMM ;
localDW -> nl5wf2yj2y = 22 ; } if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( lmamcwn3a2 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
lmamcwn3a2 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( lmamcwn3a2 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) lmamcwn3a2 -> NonContDerivMemory . mr_nonContSig0 ; lmamcwn3a2 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> jkqs54gz35 ) ; ; lmamcwn3a2 -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) lmamcwn3a2 -> NonContDerivMemory . mr_nonContSig1 ; lmamcwn3a2 ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
lmamcwn3a2 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> eauwjsjeoh ) ; ; localZCE -> aibuwxlm3p = UNINITIALIZED_ZCSIG ; localZCE
-> ivoahwpnyy = UNINITIALIZED_ZCSIG ; localZCE -> ogp13prhht =
UNINITIALIZED_ZCSIG ; localZCE -> g05dofgbat = UNINITIALIZED_ZCSIG ; localZCE
-> axanv5rhut = UNINITIALIZED_ZCSIG ; localZCE -> ikie0laeze =
UNINITIALIZED_ZCSIG ; localZCE -> mbflijr0mq = UNINITIALIZED_ZCSIG ; localZCE
-> egt2adhpml = UNINITIALIZED_ZCSIG ; localZCE -> c205fdfx3p =
UNINITIALIZED_ZCSIG ; localZCE -> mzqs3vvz3w = UNINITIALIZED_ZCSIG ; localZCE
-> ell4erk0sk = UNINITIALIZED_ZCSIG ; localZCE -> blkrl4wyrp =
UNINITIALIZED_ZCSIG ; localZCE -> ciwthtzwmm = UNINITIALIZED_ZCSIG ; localZCE
-> khdueowxpt = UNINITIALIZED_ZCSIG ; localZCE -> gjlhnwpk2n =
UNINITIALIZED_ZCSIG ; localZCE -> hby5eedglw = UNINITIALIZED_ZCSIG ; localZCE
-> bolhd0jqiw = UNINITIALIZED_ZCSIG ; localZCE -> fggtsnat1c =
UNINITIALIZED_ZCSIG ; localZCE -> gi14efm01f = UNINITIALIZED_ZCSIG ; localZCE
-> kns3j5h3ab = UNINITIALIZED_ZCSIG ; localZCE -> k0yliegmct =
UNINITIALIZED_ZCSIG ; localZCE -> hpvxasutiw = UNINITIALIZED_ZCSIG ; localZCE
-> emno1ljux3 = UNINITIALIZED_ZCSIG ; localZCE -> apyotjnx0z =
UNINITIALIZED_ZCSIG ; localZCE -> gw5x5hz5uw = UNINITIALIZED_ZCSIG ; localZCE
-> gl0qzajmvz = UNINITIALIZED_ZCSIG ; localZCE -> ftnlfo3hjp =
UNINITIALIZED_ZCSIG ; localZCE -> a5izgxnbqu = UNINITIALIZED_ZCSIG ; localZCE
-> k2s2qikekq = UNINITIALIZED_ZCSIG ; localZCE -> jilfmyzub4 =
UNINITIALIZED_ZCSIG ; localZCE -> hp3rdefxw3 = UNINITIALIZED_ZCSIG ; localZCE
-> d2fdrfwao4 = UNINITIALIZED_ZCSIG ; localZCE -> k0klgjuold =
UNINITIALIZED_ZCSIG ; localZCE -> lueabr3lpw = UNINITIALIZED_ZCSIG ; localZCE
-> glextpek1j = UNINITIALIZED_ZCSIG ; localZCE -> oacbhr1wjl =
UNINITIALIZED_ZCSIG ; localZCE -> bvax4lks05 = UNINITIALIZED_ZCSIG ; localZCE
-> ghqk0gkhfd = UNINITIALIZED_ZCSIG ; localZCE -> p1rjnvbvez =
UNINITIALIZED_ZCSIG ; localZCE -> l0pot1rnmz = UNINITIALIZED_ZCSIG ; localZCE
-> huxsn35hwj = UNINITIALIZED_ZCSIG ; localZCE -> giw0ztvj0h =
UNINITIALIZED_ZCSIG ; localZCE -> p3sx2bobax = UNINITIALIZED_ZCSIG ; localZCE
-> lws1x0rujh = UNINITIALIZED_ZCSIG ; localZCE -> l423hgbgu4 =
UNINITIALIZED_ZCSIG ; localZCE -> cbrbrtbbky = UNINITIALIZED_ZCSIG ; localZCE
-> jmrrzqvtdz = UNINITIALIZED_ZCSIG ; localZCE -> btiicyjbxz =
UNINITIALIZED_ZCSIG ; localZCE -> pecgvhyeej = UNINITIALIZED_ZCSIG ; localZCE
-> gr53qdetyk = UNINITIALIZED_ZCSIG ; localZCE -> axgchkuxdu =
UNINITIALIZED_ZCSIG ; localZCE -> emt14iznd5 = UNINITIALIZED_ZCSIG ; localZCE
-> dwp4f20mru = UNINITIALIZED_ZCSIG ; localZCE -> ipv5yfqz4v =
UNINITIALIZED_ZCSIG ; localZCE -> l33c5a0lf0 = UNINITIALIZED_ZCSIG ; localZCE
-> htbif0iz3k = UNINITIALIZED_ZCSIG ; localZCE -> f5x0qgxlmp =
UNINITIALIZED_ZCSIG ; localZCE -> lx5k42kash = UNINITIALIZED_ZCSIG ; localZCE
-> bx5q2ndzkm = UNINITIALIZED_ZCSIG ; localZCE -> pwfbsguak1 =
UNINITIALIZED_ZCSIG ; localZCE -> ibntx1rkxr = UNINITIALIZED_ZCSIG ; localZCE
-> m2w5vst21d = UNINITIALIZED_ZCSIG ; localZCE -> mu0hchlf1a =
UNINITIALIZED_ZCSIG ; localZCE -> kc54lyoiha = UNINITIALIZED_ZCSIG ; localZCE
-> fxgo3cyi1b = UNINITIALIZED_ZCSIG ; localZCE -> micma0p54b =
UNINITIALIZED_ZCSIG ; localZCE -> c23tiat4wk = UNINITIALIZED_ZCSIG ; localZCE
-> bppjuo4mbc = UNINITIALIZED_ZCSIG ; localZCE -> ok2xazgyrd =
UNINITIALIZED_ZCSIG ; localZCE -> cbnocy1rrk = UNINITIALIZED_ZCSIG ; localZCE
-> na3d13meir = UNINITIALIZED_ZCSIG ; localZCE -> dq1tgbbrhm =
UNINITIALIZED_ZCSIG ; localZCE -> jeglk3eron = UNINITIALIZED_ZCSIG ; localZCE
-> gkt505dktu = UNINITIALIZED_ZCSIG ; localZCE -> acu01rzglp =
UNINITIALIZED_ZCSIG ; localZCE -> cv04o0e132 = UNINITIALIZED_ZCSIG ; localZCE
-> c3pafj5avb = UNINITIALIZED_ZCSIG ; localZCE -> g0snx2e5wc =
UNINITIALIZED_ZCSIG ; localZCE -> mwvsfftopu = UNINITIALIZED_ZCSIG ; localZCE
-> mnunsr2yhu = UNINITIALIZED_ZCSIG ; localZCE -> l2yy3nel1b =
UNINITIALIZED_ZCSIG ; localZCE -> kjto5yb5in = UNINITIALIZED_ZCSIG ; localZCE
-> hi221om1ow = UNINITIALIZED_ZCSIG ; localZCE -> p11fuaico2 =
UNINITIALIZED_ZCSIG ; localZCE -> brfoytrayt = UNINITIALIZED_ZCSIG ; localZCE
-> nujxmx3szv = UNINITIALIZED_ZCSIG ; localZCE -> jfheumb0nr =
UNINITIALIZED_ZCSIG ; localZCE -> cov0y35ymp = UNINITIALIZED_ZCSIG ; localZCE
-> bi0m5mawzv = UNINITIALIZED_ZCSIG ; localZCE -> ixx4ynuqlg =
UNINITIALIZED_ZCSIG ; localZCE -> nvbxoxx224 = UNINITIALIZED_ZCSIG ; localZCE
-> kzydm3ddp2 = UNINITIALIZED_ZCSIG ; localZCE -> otxwrkrtba =
UNINITIALIZED_ZCSIG ; localZCE -> hq1gar3vs0 = UNINITIALIZED_ZCSIG ; localZCE
-> pie41va4bp = UNINITIALIZED_ZCSIG ; localZCE -> j0aarv1lxq =
UNINITIALIZED_ZCSIG ; localZCE -> df0wbertv3 = UNINITIALIZED_ZCSIG ; localZCE
-> fvwzmdwk2j = UNINITIALIZED_ZCSIG ; localZCE -> mnkiil2kvm =
UNINITIALIZED_ZCSIG ; localZCE -> gggzfrfayb = UNINITIALIZED_ZCSIG ; localZCE
-> a4aj0aimqu = UNINITIALIZED_ZCSIG ; localZCE -> bpm5rgibed =
UNINITIALIZED_ZCSIG ; localZCE -> ooawiw21da = UNINITIALIZED_ZCSIG ; localZCE
-> pf1tw2zmuh = UNINITIALIZED_ZCSIG ; localZCE -> cbkho5ygd1 =
UNINITIALIZED_ZCSIG ; localZCE -> kttbju2lxt = UNINITIALIZED_ZCSIG ; localZCE
-> oalbt1z5br = UNINITIALIZED_ZCSIG ; localZCE -> gj0wgerqit =
UNINITIALIZED_ZCSIG ; localZCE -> f0iyz2kv0c = UNINITIALIZED_ZCSIG ; localZCE
-> o3ey23heuz = UNINITIALIZED_ZCSIG ; localZCE -> l0nhdci3ih =
UNINITIALIZED_ZCSIG ; localZCE -> codymqi2kd = UNINITIALIZED_ZCSIG ; localZCE
-> ozl3auwbpt = UNINITIALIZED_ZCSIG ; localZCE -> k2wlu1df31 =
UNINITIALIZED_ZCSIG ; localZCE -> jy31zjv15w = UNINITIALIZED_ZCSIG ; localZCE
-> le25zatomx = UNINITIALIZED_ZCSIG ; localZCE -> llb13jkw15 =
UNINITIALIZED_ZCSIG ; localZCE -> orxcc1fagz = UNINITIALIZED_ZCSIG ; localZCE
-> e1txio3mf2 = UNINITIALIZED_ZCSIG ; localZCE -> nzxlwxugin =
UNINITIALIZED_ZCSIG ; localZCE -> birgxqbsa2 = UNINITIALIZED_ZCSIG ; localZCE
-> eos1zjuo3u = UNINITIALIZED_ZCSIG ; localZCE -> pwrjl4a455 =
UNINITIALIZED_ZCSIG ; localZCE -> prprimmkip = UNINITIALIZED_ZCSIG ; localZCE
-> dpvzote3qo = UNINITIALIZED_ZCSIG ; localZCE -> oqo5luk1te =
UNINITIALIZED_ZCSIG ; localZCE -> kyqq1soyc2 = UNINITIALIZED_ZCSIG ; localZCE
-> k34kroagoz = UNINITIALIZED_ZCSIG ; localZCE -> jttfs5x30c =
UNINITIALIZED_ZCSIG ; localZCE -> nz501m0qzi = UNINITIALIZED_ZCSIG ; localZCE
-> lnq41f0vh3 = UNINITIALIZED_ZCSIG ; localZCE -> fhi3evc5q2 =
UNINITIALIZED_ZCSIG ; localZCE -> jkuq4dzrjx = UNINITIALIZED_ZCSIG ; localZCE
-> i415j3rmwd = UNINITIALIZED_ZCSIG ; localZCE -> ipa0duplny =
UNINITIALIZED_ZCSIG ; localZCE -> gdzkl2fadm = UNINITIALIZED_ZCSIG ; localZCE
-> hlfggixqq2 = UNINITIALIZED_ZCSIG ; localZCE -> plyczguqeo =
UNINITIALIZED_ZCSIG ; localZCE -> ha2rntohn4 = UNINITIALIZED_ZCSIG ; localZCE
-> odj2rx0dmv = UNINITIALIZED_ZCSIG ; localZCE -> okm5kcvmpa =
UNINITIALIZED_ZCSIG ; localZCE -> aukzafmiua = UNINITIALIZED_ZCSIG ; localZCE
-> jpqq3jznlw = UNINITIALIZED_ZCSIG ; localZCE -> nta31a52ao =
UNINITIALIZED_ZCSIG ; localZCE -> d1f3aazf1j = UNINITIALIZED_ZCSIG ; localZCE
-> i4ayscecd5 = UNINITIALIZED_ZCSIG ; localZCE -> cpuiij1pyf =
UNINITIALIZED_ZCSIG ; localZCE -> a2bmzjjyk4 = UNINITIALIZED_ZCSIG ; localZCE
-> oq1dholwqd = UNINITIALIZED_ZCSIG ; localZCE -> pwkwxbdgxz =
UNINITIALIZED_ZCSIG ; localZCE -> gel20ftm4d = UNINITIALIZED_ZCSIG ; localZCE
-> oggsibkgxh = UNINITIALIZED_ZCSIG ; localZCE -> gqm0yxe3nv =
UNINITIALIZED_ZCSIG ; localZCE -> ggk1khsatt = UNINITIALIZED_ZCSIG ; localZCE
-> kxu4pgq0fr = UNINITIALIZED_ZCSIG ; localZCE -> fxclhj2tb4 =
UNINITIALIZED_ZCSIG ; localZCE -> cworzk41qx = UNINITIALIZED_ZCSIG ; localZCE
-> giahfdhywp = UNINITIALIZED_ZCSIG ; localZCE -> kaigjcxakz =
UNINITIALIZED_ZCSIG ; localZCE -> o4bezjzwal = UNINITIALIZED_ZCSIG ; localZCE
-> i3nekyunfk = UNINITIALIZED_ZCSIG ; localZCE -> imns4vxnkp =
UNINITIALIZED_ZCSIG ; localZCE -> cq5rn3dqot = UNINITIALIZED_ZCSIG ; localZCE
-> ok5bdip3lk = UNINITIALIZED_ZCSIG ; localZCE -> dkr2tuhceb =
UNINITIALIZED_ZCSIG ; localZCE -> kmfhsmhdqa = UNINITIALIZED_ZCSIG ; localZCE
-> gzjgrcxzqn = UNINITIALIZED_ZCSIG ; localZCE -> j43ow12wjf =
UNINITIALIZED_ZCSIG ; localZCE -> m0y142ssw2 = UNINITIALIZED_ZCSIG ; localZCE
-> cjymgkbmjz = UNINITIALIZED_ZCSIG ; localZCE -> efr0khlgve =
UNINITIALIZED_ZCSIG ; localZCE -> msj0d0vu5g = UNINITIALIZED_ZCSIG ; localZCE
-> mp5gnbdg12 = UNINITIALIZED_ZCSIG ; localZCE -> bwlmkmxgbg =
UNINITIALIZED_ZCSIG ; localZCE -> dcq1xypibv = UNINITIALIZED_ZCSIG ; localZCE
-> nhkkv5vwxv = UNINITIALIZED_ZCSIG ; localZCE -> n0mlqwweiq =
UNINITIALIZED_ZCSIG ; localZCE -> oaazgr032f = UNINITIALIZED_ZCSIG ; localZCE
-> e5h4madwa2 = UNINITIALIZED_ZCSIG ; localZCE -> atnxmv2k5v =
UNINITIALIZED_ZCSIG ; localZCE -> h24ylvw50q = UNINITIALIZED_ZCSIG ; localZCE
-> e0zu43c1ps = UNINITIALIZED_ZCSIG ; localZCE -> eix5fxr3ua =
UNINITIALIZED_ZCSIG ; localZCE -> oiqp4qfds1 = UNINITIALIZED_ZCSIG ; localZCE
-> nlam0wj2j5 = UNINITIALIZED_ZCSIG ; localZCE -> nrcw0fea4x =
UNINITIALIZED_ZCSIG ; localZCE -> o24zhi5n4l = UNINITIALIZED_ZCSIG ; localZCE
-> d40zsp1arl = UNINITIALIZED_ZCSIG ; localZCE -> nzk3tjyu1l =
UNINITIALIZED_ZCSIG ; localZCE -> d0zocg0oix = UNINITIALIZED_ZCSIG ; localZCE
-> oshsqx3to0 = UNINITIALIZED_ZCSIG ; localZCE -> ennngowrid =
UNINITIALIZED_ZCSIG ; localZCE -> cudued0i0x = UNINITIALIZED_ZCSIG ; localZCE
-> aqyyt5ztbu = UNINITIALIZED_ZCSIG ; localZCE -> b1rjbvvq4m =
UNINITIALIZED_ZCSIG ; localZCE -> nbkpt0gngl = UNINITIALIZED_ZCSIG ; localZCE
-> nukuajknpf = UNINITIALIZED_ZCSIG ; localZCE -> mqr2sl121y =
UNINITIALIZED_ZCSIG ; localZCE -> cbdytl3qsi = UNINITIALIZED_ZCSIG ; localZCE
-> eadue2snhj = UNINITIALIZED_ZCSIG ; localZCE -> p5okicbomp =
UNINITIALIZED_ZCSIG ; localZCE -> fgnonh2yia = UNINITIALIZED_ZCSIG ; localZCE
-> gtzwjv5zzd = UNINITIALIZED_ZCSIG ; localZCE -> ntxdvrkbvh =
UNINITIALIZED_ZCSIG ; localZCE -> lahdpmju4o = UNINITIALIZED_ZCSIG ; localZCE
-> pg34f1mwbq = UNINITIALIZED_ZCSIG ; localZCE -> memqsv355n =
UNINITIALIZED_ZCSIG ; localZCE -> fczlaf1kub = UNINITIALIZED_ZCSIG ; localZCE
-> law4smtitu = UNINITIALIZED_ZCSIG ; localZCE -> mhiyeia54g =
UNINITIALIZED_ZCSIG ; localZCE -> o2z5nvndgu = UNINITIALIZED_ZCSIG ; localZCE
-> bm0nujoxg4 = UNINITIALIZED_ZCSIG ; localZCE -> hl1nfpo5nn =
UNINITIALIZED_ZCSIG ; localZCE -> i0molcudzu = UNINITIALIZED_ZCSIG ; localZCE
-> gudn1zfgm2 = UNINITIALIZED_ZCSIG ; localZCE -> ghqzwtxwnh =
UNINITIALIZED_ZCSIG ; localZCE -> gws2wqfpiu = UNINITIALIZED_ZCSIG ; localZCE
-> fc5w5rknz5 = UNINITIALIZED_ZCSIG ; localZCE -> c4mjbvd2yx =
UNINITIALIZED_ZCSIG ; localZCE -> oc5qqarmkr = UNINITIALIZED_ZCSIG ; localZCE
-> hvvua5ov4q = UNINITIALIZED_ZCSIG ; localZCE -> ngjeqrutki =
UNINITIALIZED_ZCSIG ; localZCE -> kfi1l1v2f3 = UNINITIALIZED_ZCSIG ; localZCE
-> ciefhwmedm = UNINITIALIZED_ZCSIG ; localZCE -> ehymkfvztd =
UNINITIALIZED_ZCSIG ; localZCE -> kdxcwxpf0x = UNINITIALIZED_ZCSIG ; localZCE
-> kxxelsraas = UNINITIALIZED_ZCSIG ; localZCE -> gdmizrslv3 =
UNINITIALIZED_ZCSIG ; localZCE -> i1ddg34elv = UNINITIALIZED_ZCSIG ; localZCE
-> ldjg5livdp = UNINITIALIZED_ZCSIG ; localZCE -> ilitxwbry0 =
UNINITIALIZED_ZCSIG ; localZCE -> dmghweupqu = UNINITIALIZED_ZCSIG ; localZCE
-> o1xwr5bs1y = UNINITIALIZED_ZCSIG ; localZCE -> dij5stdmh0 =
UNINITIALIZED_ZCSIG ; localZCE -> bk4kbfsmi3 = UNINITIALIZED_ZCSIG ; localZCE
-> o4gr5j2yrt = UNINITIALIZED_ZCSIG ; localZCE -> d12zhhvlsi =
UNINITIALIZED_ZCSIG ; localZCE -> c42eqoahoy = UNINITIALIZED_ZCSIG ; localZCE
-> o5fv02j3fr = UNINITIALIZED_ZCSIG ; localZCE -> jfhpkkbfry =
UNINITIALIZED_ZCSIG ; localZCE -> idnmd3tbbz = UNINITIALIZED_ZCSIG ; localZCE
-> i10lxfspl5 = UNINITIALIZED_ZCSIG ; localZCE -> pyzxbrrolo =
UNINITIALIZED_ZCSIG ; localZCE -> iqrzxzm4xn = UNINITIALIZED_ZCSIG ; localZCE
-> i4gyfrz5d5 = UNINITIALIZED_ZCSIG ; localZCE -> bjwpdwgnim =
UNINITIALIZED_ZCSIG ; localZCE -> lma4prgyyi = UNINITIALIZED_ZCSIG ; localZCE
-> gbx01qtamf = UNINITIALIZED_ZCSIG ; localZCE -> bvv1n4onwl =
UNINITIALIZED_ZCSIG ; localZCE -> a0oamcoghs = UNINITIALIZED_ZCSIG ; localZCE
-> euongquvbq = UNINITIALIZED_ZCSIG ; localZCE -> g1ycopgkce =
UNINITIALIZED_ZCSIG ; localZCE -> k20xxuocsv = UNINITIALIZED_ZCSIG ; localZCE
-> dtp0lc30bx = UNINITIALIZED_ZCSIG ; localZCE -> jzss3k3jj0 =
UNINITIALIZED_ZCSIG ; localZCE -> blebkmlqak = UNINITIALIZED_ZCSIG ; localZCE
-> kehlwzwyqk = UNINITIALIZED_ZCSIG ; localZCE -> h5zhxdgja4 =
UNINITIALIZED_ZCSIG ; localZCE -> hfxbjhvqwj = UNINITIALIZED_ZCSIG ; localZCE
-> jkxrwjxjtf = UNINITIALIZED_ZCSIG ; localZCE -> etnpvfy4nh =
UNINITIALIZED_ZCSIG ; localZCE -> lktyxf3o1v = UNINITIALIZED_ZCSIG ; localZCE
-> clipwgmul0 = UNINITIALIZED_ZCSIG ; localZCE -> k4vaslmdfg =
UNINITIALIZED_ZCSIG ; localZCE -> eh5p1wnopv = UNINITIALIZED_ZCSIG ; localZCE
-> lqxaxywfub = UNINITIALIZED_ZCSIG ; localZCE -> k4wdqtaod5 =
UNINITIALIZED_ZCSIG ; localZCE -> nt1x3idivh = UNINITIALIZED_ZCSIG ; localZCE
-> h1yomvqxzj = UNINITIALIZED_ZCSIG ; localZCE -> pztltgirzf =
UNINITIALIZED_ZCSIG ; localZCE -> iclnpmucn5 = UNINITIALIZED_ZCSIG ; localZCE
-> nwou521fz2 = UNINITIALIZED_ZCSIG ; localZCE -> ihwuyragf1 =
UNINITIALIZED_ZCSIG ; localZCE -> j2ms4m0uxa = UNINITIALIZED_ZCSIG ; localZCE
-> j5co1d2mkf = UNINITIALIZED_ZCSIG ; localZCE -> gt3ks5tp20 =
UNINITIALIZED_ZCSIG ; localZCE -> eobnenxn2a = UNINITIALIZED_ZCSIG ; localZCE
-> mespb22al3 = UNINITIALIZED_ZCSIG ; localZCE -> f0vhreev5h =
UNINITIALIZED_ZCSIG ; localZCE -> kr5fxs3p50 = UNINITIALIZED_ZCSIG ; localZCE
-> ezprd5mqs2 = UNINITIALIZED_ZCSIG ; localZCE -> izp55wrine =
UNINITIALIZED_ZCSIG ; localZCE -> pr301zchew = UNINITIALIZED_ZCSIG ; localZCE
-> fzndlcmuux = UNINITIALIZED_ZCSIG ; localZCE -> hn4jgibo3v =
UNINITIALIZED_ZCSIG ; localZCE -> b3noegu4rd = UNINITIALIZED_ZCSIG ; localZCE
-> i3ikoueyta = UNINITIALIZED_ZCSIG ; localZCE -> fezzh2qf0q =
UNINITIALIZED_ZCSIG ; localZCE -> awvhwcyazs = UNINITIALIZED_ZCSIG ; localZCE
-> iqz435csjt = UNINITIALIZED_ZCSIG ; localZCE -> amal0cjyok =
UNINITIALIZED_ZCSIG ; localZCE -> ggbbkccyni = UNINITIALIZED_ZCSIG ; localZCE
-> mtsio5cjf4 = UNINITIALIZED_ZCSIG ; localZCE -> eukok4famq =
UNINITIALIZED_ZCSIG ; localZCE -> p4hn1jqiec = UNINITIALIZED_ZCSIG ; localZCE
-> jcc3jsnn5u = UNINITIALIZED_ZCSIG ; localZCE -> pcxghl5gzc =
UNINITIALIZED_ZCSIG ; localZCE -> dfwqsc0mux = UNINITIALIZED_ZCSIG ; localZCE
-> aoavnvs0qf = UNINITIALIZED_ZCSIG ; localZCE -> hbxovnlfj0 =
UNINITIALIZED_ZCSIG ; localZCE -> ph2sh2mrhx = UNINITIALIZED_ZCSIG ; localZCE
-> clankoimaq = UNINITIALIZED_ZCSIG ; localZCE -> j3v00atjeg =
UNINITIALIZED_ZCSIG ; localZCE -> aqbvrh14ig = UNINITIALIZED_ZCSIG ; localZCE
-> hayowy40lc = UNINITIALIZED_ZCSIG ; localZCE -> feeppha5cj =
UNINITIALIZED_ZCSIG ; localZCE -> k2hvmgh215 = UNINITIALIZED_ZCSIG ; localZCE
-> msdfzetwse = UNINITIALIZED_ZCSIG ; localZCE -> nibjq3y2lc =
UNINITIALIZED_ZCSIG ; localZCE -> kdzfvpytqd = UNINITIALIZED_ZCSIG ; localZCE
-> nvht33ygx5 = UNINITIALIZED_ZCSIG ; localZCE -> oiw4qbtzpv =
UNINITIALIZED_ZCSIG ; localZCE -> n31c2mr03q = UNINITIALIZED_ZCSIG ; localZCE
-> iqpeqwzcyp = UNINITIALIZED_ZCSIG ; localZCE -> lydmvalssd =
UNINITIALIZED_ZCSIG ; localZCE -> fm2141gsfo = UNINITIALIZED_ZCSIG ; localZCE
-> pkxuk4ks1l = UNINITIALIZED_ZCSIG ; localZCE -> l21el2i41r =
UNINITIALIZED_ZCSIG ; localZCE -> j2fxckwzuo = UNINITIALIZED_ZCSIG ; localZCE
-> no1udyasvx = UNINITIALIZED_ZCSIG ; localZCE -> ps4r01kkcs =
UNINITIALIZED_ZCSIG ; localZCE -> hg5g3yh15v = UNINITIALIZED_ZCSIG ; localZCE
-> melb3wqvzq = UNINITIALIZED_ZCSIG ; localZCE -> pt53sqrkrx =
UNINITIALIZED_ZCSIG ; localZCE -> aomh0drl30 = UNINITIALIZED_ZCSIG ; localZCE
-> jjgqbppklu = UNINITIALIZED_ZCSIG ; localZCE -> mf0uuabthq =
UNINITIALIZED_ZCSIG ; localZCE -> at0kegq5n3 = UNINITIALIZED_ZCSIG ; localZCE
-> bripksqkos = UNINITIALIZED_ZCSIG ; localZCE -> jwulcnjqr4 =
UNINITIALIZED_ZCSIG ; localZCE -> ficzyin1pf = UNINITIALIZED_ZCSIG ; localZCE
-> hdmwqy5bex = UNINITIALIZED_ZCSIG ; localZCE -> huzbpjw5yf =
UNINITIALIZED_ZCSIG ; localZCE -> iwo2g4uhjh = UNINITIALIZED_ZCSIG ; localZCE
-> aw0cvkykqc = UNINITIALIZED_ZCSIG ; localZCE -> iszlxquxog =
UNINITIALIZED_ZCSIG ; localZCE -> lo2i2whiny = UNINITIALIZED_ZCSIG ; localZCE
-> nmoctnpyhd = UNINITIALIZED_ZCSIG ; localZCE -> nibjnon2be =
UNINITIALIZED_ZCSIG ; localZCE -> pjhhqi21pn = UNINITIALIZED_ZCSIG ; localZCE
-> d1r0inusfl = UNINITIALIZED_ZCSIG ; localZCE -> e0321o5nvp =
UNINITIALIZED_ZCSIG ; localZCE -> erfbul1on2 = UNINITIALIZED_ZCSIG ; localZCE
-> gon3hwlzxx = UNINITIALIZED_ZCSIG ; localZCE -> nr1nygzsxo =
UNINITIALIZED_ZCSIG ; localZCE -> ckjolme5wr = UNINITIALIZED_ZCSIG ; localZCE
-> k4grd1c1ge = UNINITIALIZED_ZCSIG ; localZCE -> fesludxitw =
UNINITIALIZED_ZCSIG ; localZCE -> b2znlbrdm0 = UNINITIALIZED_ZCSIG ; localZCE
-> o4pvh1rtmr = UNINITIALIZED_ZCSIG ; localZCE -> p4l5cjfhvv =
UNINITIALIZED_ZCSIG ; localZCE -> isk34pg0k5 = UNINITIALIZED_ZCSIG ; localZCE
-> eqfd5ijbi5 = UNINITIALIZED_ZCSIG ; localZCE -> lngr4oitab =
UNINITIALIZED_ZCSIG ; localZCE -> icvjajjg1u = UNINITIALIZED_ZCSIG ; localZCE
-> gta1xnnntt = UNINITIALIZED_ZCSIG ; localZCE -> d4kvvk1xjb =
UNINITIALIZED_ZCSIG ; localZCE -> ikyf5sqcgz = UNINITIALIZED_ZCSIG ; localZCE
-> iturgbyziw = UNINITIALIZED_ZCSIG ; localZCE -> h4pz1xs101 =
UNINITIALIZED_ZCSIG ; localZCE -> crbujq5gbs = UNINITIALIZED_ZCSIG ; localZCE
-> i41h4scgw5 = UNINITIALIZED_ZCSIG ; localZCE -> imupenht5b =
UNINITIALIZED_ZCSIG ; localZCE -> f2qv542noq = UNINITIALIZED_ZCSIG ; localZCE
-> gt1lkoaxmn = UNINITIALIZED_ZCSIG ; localZCE -> dplkvbjbok =
UNINITIALIZED_ZCSIG ; localZCE -> nq5f3xidgt = UNINITIALIZED_ZCSIG ; localZCE
-> hiphdwjhge = UNINITIALIZED_ZCSIG ; localZCE -> gtdk35rjve =
UNINITIALIZED_ZCSIG ; localZCE -> kwghelen2f = UNINITIALIZED_ZCSIG ; localZCE
-> h4on550y5g = UNINITIALIZED_ZCSIG ; localZCE -> jzktihlahc =
UNINITIALIZED_ZCSIG ; localZCE -> eigwp3ejcc = UNINITIALIZED_ZCSIG ; localZCE
-> mcuj04xwbv = UNINITIALIZED_ZCSIG ; localZCE -> k4ghhdbohc =
UNINITIALIZED_ZCSIG ; localZCE -> nocqltw0fi = UNINITIALIZED_ZCSIG ; localZCE
-> glimnphpje = UNINITIALIZED_ZCSIG ; localZCE -> pptqwiysn2 =
UNINITIALIZED_ZCSIG ; } void mr_FCElectricPlant_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_FCElectricPlant , 64 ) ; * retVal = 1 ; } static void
mr_FCElectricPlant_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_FCElectricPlant_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_FCElectricPlant_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_FCElectricPlant_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_FCElectricPlant_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_FCElectricPlant_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_FCElectricPlant_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_FCElectricPlant_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_FCElectricPlant_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_FCElectricPlant_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_FCElectricPlant_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_FCElectricPlant_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_FCElectricPlant_GetDWork ( const
g5h05g3u4wx * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_FCElectricPlant_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char * rtdwDataFieldNames [ 40 ] = { "mdlrefDW->rtdw.jg0pa544mj"
, "mdlrefDW->rtdw.bens2xo0mt" , "mdlrefDW->rtdw.biz2tfyo24" ,
"mdlrefDW->rtdw.iy1jghvlve" , "mdlrefDW->rtdw.kvurm2oqxu" ,
"mdlrefDW->rtdw.c0wsiqhgrt" , "mdlrefDW->rtdw.pisj2y40n3" ,
"mdlrefDW->rtdw.jp2nm55itc" , "mdlrefDW->rtdw.gkehphfcto" ,
"mdlrefDW->rtdw.d252k4pf4q" , "mdlrefDW->rtdw.hntw41r4fh" ,
"mdlrefDW->rtdw.jjdma1xftq" , "mdlrefDW->rtdw.mbqrzctqwx" ,
"mdlrefDW->rtdw.k34x2xbjft" , "mdlrefDW->rtdw.cl1v2os4aw" ,
"mdlrefDW->rtdw.brcmfntiiy" , "mdlrefDW->rtdw.fkcmhgm1js" ,
"mdlrefDW->rtdw.d5qyo22zjn" , "mdlrefDW->rtdw.d2nw5osdie" ,
"mdlrefDW->rtdw.jvpu2sz5kh" , "mdlrefDW->rtdw.n1z1jmaon1" ,
"mdlrefDW->rtdw.lthorw5noi" , "mdlrefDW->rtdw.ll0ogy1o1p" ,
"mdlrefDW->rtdw.iendyrbljp" , "mdlrefDW->rtdw.k43gfcul4g" ,
"mdlrefDW->rtdw.jrexd3jabx" , "mdlrefDW->rtdw.d2oy2gojey" ,
"mdlrefDW->rtdw.hkmn555nst" , "mdlrefDW->rtdw.arhujgsczp" ,
"mdlrefDW->rtdw.cxytunchp3" , "mdlrefDW->rtdw.hytqfgsilq" ,
"mdlrefDW->rtdw.fcwk1cq1s3" , "mdlrefDW->rtdw.dcyfny35ij" ,
"mdlrefDW->rtdw.nl5wf2yj2y" , "mdlrefDW->rtdw.kobagp2t5x" ,
"mdlrefDW->rtdw.oazibmcxg4" , "mdlrefDW->rtdw.bc3j1x4g4s" ,
"mdlrefDW->rtdw.p5doavn2gc" , "mdlrefDW->rtdw.o0gi1dmk1n" ,
"mdlrefDW->rtdw.hre0cpkqyo" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 40 , rtdwDataFieldNames ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . jg0pa544mj ) ,
sizeof ( mdlrefDW -> rtdw . jg0pa544mj ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . bens2xo0mt ) , sizeof ( mdlrefDW -> rtdw . bens2xo0mt )
) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . biz2tfyo24 ) , sizeof ( mdlrefDW -> rtdw .
biz2tfyo24 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const void * ) & ( mdlrefDW -> rtdw . iy1jghvlve ) , sizeof ( mdlrefDW ->
rtdw . iy1jghvlve ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 4 , ( const void * ) & ( mdlrefDW -> rtdw . kvurm2oqxu ) , sizeof (
mdlrefDW -> rtdw . kvurm2oqxu ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . c0wsiqhgrt ) ,
sizeof ( mdlrefDW -> rtdw . c0wsiqhgrt ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( mdlrefDW -> rtdw . pisj2y40n3 ) , sizeof ( mdlrefDW -> rtdw . pisj2y40n3 )
) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( mdlrefDW -> rtdw . jp2nm55itc ) , sizeof ( mdlrefDW -> rtdw .
jp2nm55itc ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( mdlrefDW -> rtdw . gkehphfcto ) , sizeof ( mdlrefDW ->
rtdw . gkehphfcto ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 9 , ( const void * ) & ( mdlrefDW -> rtdw . d252k4pf4q ) , sizeof (
mdlrefDW -> rtdw . d252k4pf4q ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW -> rtdw . hntw41r4fh ) ,
sizeof ( mdlrefDW -> rtdw . hntw41r4fh ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( mdlrefDW -> rtdw . jjdma1xftq ) , sizeof ( mdlrefDW -> rtdw . jjdma1xftq
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( mdlrefDW -> rtdw . mbqrzctqwx ) , sizeof ( mdlrefDW -> rtdw .
mbqrzctqwx ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 13 ,
( const void * ) & ( mdlrefDW -> rtdw . k34x2xbjft ) , sizeof ( mdlrefDW ->
rtdw . k34x2xbjft ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 14 , ( const void * ) & ( mdlrefDW -> rtdw . cl1v2os4aw ) , sizeof (
mdlrefDW -> rtdw . cl1v2os4aw ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . brcmfntiiy ) ,
sizeof ( mdlrefDW -> rtdw . brcmfntiiy ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( mdlrefDW -> rtdw . fkcmhgm1js ) , sizeof ( mdlrefDW -> rtdw . fkcmhgm1js
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( mdlrefDW -> rtdw . d5qyo22zjn ) , sizeof ( mdlrefDW -> rtdw .
d5qyo22zjn ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 18 ,
( const void * ) & ( mdlrefDW -> rtdw . d2nw5osdie ) , sizeof ( mdlrefDW ->
rtdw . d2nw5osdie ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 19 , ( const void * ) & ( mdlrefDW -> rtdw . jvpu2sz5kh ) , sizeof (
mdlrefDW -> rtdw . jvpu2sz5kh ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . n1z1jmaon1 ) ,
sizeof ( mdlrefDW -> rtdw . n1z1jmaon1 ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( mdlrefDW -> rtdw . lthorw5noi ) , sizeof ( mdlrefDW -> rtdw . lthorw5noi
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( mdlrefDW -> rtdw . ll0ogy1o1p ) , sizeof ( mdlrefDW -> rtdw .
ll0ogy1o1p ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 23 ,
( const void * ) & ( mdlrefDW -> rtdw . iendyrbljp ) , sizeof ( mdlrefDW ->
rtdw . iendyrbljp ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 24 , ( const void * ) & ( mdlrefDW -> rtdw . k43gfcul4g ) , sizeof (
mdlrefDW -> rtdw . k43gfcul4g ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( mdlrefDW -> rtdw . jrexd3jabx ) ,
sizeof ( mdlrefDW -> rtdw . jrexd3jabx ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * )
& ( mdlrefDW -> rtdw . d2oy2gojey ) , sizeof ( mdlrefDW -> rtdw . d2oy2gojey
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( mdlrefDW -> rtdw . hkmn555nst ) , sizeof ( mdlrefDW -> rtdw .
hkmn555nst ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 28 ,
( const void * ) & ( mdlrefDW -> rtdw . arhujgsczp ) , sizeof ( mdlrefDW ->
rtdw . arhujgsczp ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 29 , ( const void * ) & ( mdlrefDW -> rtdw . cxytunchp3 ) , sizeof (
mdlrefDW -> rtdw . cxytunchp3 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( mdlrefDW -> rtdw . hytqfgsilq ) ,
sizeof ( mdlrefDW -> rtdw . hytqfgsilq ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * )
& ( mdlrefDW -> rtdw . fcwk1cq1s3 ) , sizeof ( mdlrefDW -> rtdw . fcwk1cq1s3
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( mdlrefDW -> rtdw . dcyfny35ij ) , sizeof ( mdlrefDW -> rtdw .
dcyfny35ij ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 33 ,
( const void * ) & ( mdlrefDW -> rtdw . nl5wf2yj2y ) , sizeof ( mdlrefDW ->
rtdw . nl5wf2yj2y ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 34 , ( const void * ) & ( mdlrefDW -> rtdw . kobagp2t5x ) , sizeof (
mdlrefDW -> rtdw . kobagp2t5x ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( mdlrefDW -> rtdw . oazibmcxg4 ) ,
sizeof ( mdlrefDW -> rtdw . oazibmcxg4 ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * )
& ( mdlrefDW -> rtdw . bc3j1x4g4s ) , sizeof ( mdlrefDW -> rtdw . bc3j1x4g4s
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( mdlrefDW -> rtdw . p5doavn2gc ) , sizeof ( mdlrefDW -> rtdw .
p5doavn2gc ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 38 ,
( const void * ) & ( mdlrefDW -> rtdw . o0gi1dmk1n ) , sizeof ( mdlrefDW ->
rtdw . o0gi1dmk1n ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 39 , ( const void * ) & ( mdlrefDW -> rtdw . hre0cpkqyo ) , sizeof (
mdlrefDW -> rtdw . hre0cpkqyo ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } mr_FCElectricPlant_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void )
mdlrefDW ; return ssDW ; } void mr_FCElectricPlant_SetDWork ( g5h05g3u4wx *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jg0pa544mj ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . jg0pa544mj ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. bens2xo0mt ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . bens2xo0mt )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . biz2tfyo24 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
biz2tfyo24 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iy1jghvlve ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . iy1jghvlve ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . kvurm2oqxu ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . kvurm2oqxu ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . c0wsiqhgrt ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . c0wsiqhgrt ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . pisj2y40n3 ) , rtdwData , 0 , 6 , sizeof
( mdlrefDW -> rtdw . pisj2y40n3 ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jp2nm55itc ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . jp2nm55itc ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. gkehphfcto ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . gkehphfcto )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . d252k4pf4q ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw .
d252k4pf4q ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hntw41r4fh ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . hntw41r4fh ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . jjdma1xftq ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW
-> rtdw . jjdma1xftq ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . mbqrzctqwx ) , rtdwData , 0 , 12 , sizeof (
mdlrefDW -> rtdw . mbqrzctqwx ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . k34x2xbjft ) , rtdwData , 0 , 13 , sizeof
( mdlrefDW -> rtdw . k34x2xbjft ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
cl1v2os4aw ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . cl1v2os4aw ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. brcmfntiiy ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . brcmfntiiy )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . fkcmhgm1js ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
fkcmhgm1js ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d5qyo22zjn ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . d5qyo22zjn ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . d2nw5osdie ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW
-> rtdw . d2nw5osdie ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . jvpu2sz5kh ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . jvpu2sz5kh ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . n1z1jmaon1 ) , rtdwData , 0 , 20 , sizeof
( mdlrefDW -> rtdw . n1z1jmaon1 ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
lthorw5noi ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . lthorw5noi ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. ll0ogy1o1p ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . ll0ogy1o1p )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . iendyrbljp ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW -> rtdw .
iendyrbljp ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . k43gfcul4g ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW ->
rtdw . k43gfcul4g ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . jrexd3jabx ) , rtdwData , 0 , 25 , sizeof ( mdlrefDW
-> rtdw . jrexd3jabx ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . d2oy2gojey ) , rtdwData , 0 , 26 , sizeof (
mdlrefDW -> rtdw . d2oy2gojey ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . hkmn555nst ) , rtdwData , 0 , 27 , sizeof
( mdlrefDW -> rtdw . hkmn555nst ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
arhujgsczp ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW -> rtdw . arhujgsczp ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. cxytunchp3 ) , rtdwData , 0 , 29 , sizeof ( mdlrefDW -> rtdw . cxytunchp3 )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . hytqfgsilq ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw .
hytqfgsilq ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fcwk1cq1s3 ) , rtdwData , 0 , 31 , sizeof ( mdlrefDW ->
rtdw . fcwk1cq1s3 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . dcyfny35ij ) , rtdwData , 0 , 32 , sizeof ( mdlrefDW
-> rtdw . dcyfny35ij ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . nl5wf2yj2y ) , rtdwData , 0 , 33 , sizeof (
mdlrefDW -> rtdw . nl5wf2yj2y ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . kobagp2t5x ) , rtdwData , 0 , 34 , sizeof
( mdlrefDW -> rtdw . kobagp2t5x ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
oazibmcxg4 ) , rtdwData , 0 , 35 , sizeof ( mdlrefDW -> rtdw . oazibmcxg4 ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. bc3j1x4g4s ) , rtdwData , 0 , 36 , sizeof ( mdlrefDW -> rtdw . bc3j1x4g4s )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . p5doavn2gc ) , rtdwData , 0 , 37 , sizeof ( mdlrefDW -> rtdw .
p5doavn2gc ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . o0gi1dmk1n ) , rtdwData , 0 , 38 , sizeof ( mdlrefDW ->
rtdw . o0gi1dmk1n ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . hre0cpkqyo ) , rtdwData , 0 , 39 , sizeof ( mdlrefDW
-> rtdw . hre0cpkqyo ) ) ; } mr_FCElectricPlant_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_FCElectricPlant_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 285175666U , 2749868255U , 2524515431U ,
2319633068U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCElectricPlant" , & chksum [ 0 ] ) ; } mxArray *
mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 9 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 9 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 9 ] = {
"FCElectricPlant/Solver Configuration/RTP_1" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/STATE_1" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_2" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/OUTPUT_1_2" ,
"FCElectricPlant/Solver Configuration/EVAL_KEY/STATE_1" , } ; static const
int reason [ 9 ] = { 0 , 0 , 0 , 0 , 0 , 6 , 6 , 6 , 6 , } ; for ( subs [ 0 ]
= 0 ; subs [ 0 ] < 9 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif

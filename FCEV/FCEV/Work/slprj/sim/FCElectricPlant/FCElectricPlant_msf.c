#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME FCElectricPlant_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "FCElectricPlant_types.h"
#include "FCElectricPlant.h"
#include "FCElectricPlant_private.h"
#define MDL_INIT_SYSTEM_MATRICES
static void mdlInitSystemMatrices ( SimStruct * S ) { static int_T
modelMassMatrixIr [ 128 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 24 , 22 , 23 , 25 , 26 ,
96 , 27 , 30 , 32 , 30 , 32 , 33 , 28 , 34 , 29 , 36 , 98 , 30 , 32 , 33 , 31
, 35 , 37 , 38 , 39 , 40 , 41 , 40 , 42 , 43 , 44 , 45 , 47 , 46 , 48 , 49 ,
51 , 50 , 44 , 87 , 48 , 52 , 53 , 55 , 54 , 52 , 92 , 56 , 57 , 56 , 58 , 59
, 60 , 61 , 63 , 62 , 64 , 65 , 67 , 66 , 60 , 64 , 68 , 69 , 71 , 70 , 68 ,
88 , 72 , 73 , 74 , 75 , 74 , 75 , 76 , 77 , 76 , 77 , 78 , 79 , 80 , 79 , 82
, 81 , 83 , 84 , 83 , 85 , 86 , 88 , 89 , 91 , 90 , 92 , 93 , 95 , 94 , 99 ,
596 , 97 , 597 , 598 , 599 , 600 , 601 , 602 } ; static int_T
modelMassMatrixJc [ 604 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 ,
27 , 28 , 29 , 31 , 34 , 35 , 36 , 37 , 38 , 39 , 42 , 43 , 44 , 45 , 46 , 47
, 49 , 50 , 51 , 52 , 54 , 55 , 56 , 58 , 59 , 60 , 61 , 62 , 63 , 65 , 66 ,
67 , 68 , 69 , 71 , 72 , 73 , 74 , 76 , 77 , 78 , 80 , 81 , 82 , 83 , 84 , 86
, 87 , 88 , 89 , 90 , 91 , 92 , 94 , 96 , 98 , 100 , 101 , 103 , 104 , 105 ,
106 , 108 , 109 , 110 , 111 , 113 , 114 , 115 , 117 , 118 , 119 , 121 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 , 122 ,
122 , 122 , 122 , 123 , 124 , 125 , 126 , 127 , 128 } ; static real_T
modelMassMatrixPr [ 128 ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
int_T * massMatrixIr = ssGetMassMatrixIr ( S ) ; int_T * massMatrixJc =
ssGetMassMatrixJc ( S ) ; real_T * massMatrixPr = ssGetMassMatrixPr ( S ) ; (
void ) memcpy ( massMatrixIr , modelMassMatrixIr , 128 * sizeof ( int_T ) ) ;
( void ) memcpy ( massMatrixJc , modelMassMatrixJc , 604 * sizeof ( int_T ) )
; ( void ) memcpy ( massMatrixPr , modelMassMatrixPr , 128 * sizeof ( real_T
) ) ; } const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ;
} const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; }
void * rt_GetOSigstreamManager ( void ) { return NULL ; } void *
rt_slioCatalogue ( void ) { return NULL ; } void * rtwGetPointerFromUniquePtr
( void * uniquePtr ) { return NULL ; } void * CreateDiagnosticAsVoidPtr (
const char * id , int nargs , ... ) { void * voidPtrDiagnostic = NULL ;
va_list args ; va_start ( args , nargs ) ; slmrCreateDiagnostic ( id , nargs
, args , & voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ;
} void rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut =
( SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; real_T * localMM = ( real_T * )
ssGetMassMatrixPr ( S ) ; kz4c240slf * localXPerturbMinlocalXPerturbMin = (
kz4c240slf * ) ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx *
localXPerturbMaxlocalXPerturbMax = ( mclj3ytwnx * )
ssGetJacobianPerturbationBoundsMaxVec ( S ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; k5nsrx2akm ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlReset ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; gtrcczzcor ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid
) { g5h05g3u4wx * dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const
* i_alps4cqvbe = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T const *
i_i_i_broznjvo0f = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; real_T const
* i_kjpz42xdiy = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; real_T const *
i_bav2fyyxpd = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; real_T const *
i_islo11352b = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; real_T * o_B_1_1
= ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_1_2 = ( real_T
* ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_1_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_1_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_1_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_1_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_1_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_1_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; if ( tid == 0 ) { FCElectricPlant ( & ( dw -> rtm ) ,
i_alps4cqvbe , i_i_i_broznjvo0f , i_kjpz42xdiy , i_bav2fyyxpd , i_islo11352b
, o_B_1_1 , o_B_1_2 , o_B_1_3 , o_B_1_4 , o_B_1_5 , o_B_1_6 , o_B_1_7 ,
o_B_1_8 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) ) ;
czx1gq31fm ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX )
; } } static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo
-> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 603 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 0 ) ;
ssSetMassMatrixType ( S , 3 ) ; ssSetMassMatrixNzMax ( S , 128 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
5 , 8 ) ; if ( ! ssSetNumInputPorts ( S , 5 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 8 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 2 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_FCElectricPlant_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S ,
3 ) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Reset" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_DISC ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL_DN ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_DN ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S ,
zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "Battery_System.Battery.xxR0.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery.xxVint.zc_2" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.Battery.xxqnom.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery.zc_4" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.Battery.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery.zc_6" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.Battery.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery.zc_8" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.DC_DC_Converter.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.DC_DC_Converter.zc_2" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.DC_DC_Converter.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_Converter_Motor.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pump.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Pump.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pump.zc_3" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Pump.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_Converter_Motor.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_Converter_MotorR.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_Converter_MotorR.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_1" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_2" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_3" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_4" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_MotorR_HX.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_5" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_6" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_7" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_8" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Flow_Restriction_MotorR_HX.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_2" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Heat_Exchanger.pipe_model.zc_13" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_13" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_14" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Converter.pipe_model.zc_15" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_9" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_10" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_11" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_12" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_13" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_14" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pipe_Motor.pipe_model.zc_15" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Pump.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_3" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_4" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pump.zc_6" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Pump.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Pump.zc_8" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Flow_Resistance_G.zc_1" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Flow_Resistance_G.zc_2" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_5" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_6" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_7" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_8" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_9" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_10" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Fuel_Cell.Boost_Converter.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Boost_Converter.zc_2" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Environment.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Environment.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Environment.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Environment.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Air_Intake.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Air_Intake.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.delta_vel_pos_AI.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.mdot_A_choked.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.delta_vel_pos_BI.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.mdot_B_choked.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.delta_vel_pos_AI.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.mdot_A_choked.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.delta_vel_pos_BI.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.mdot_B_choked.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.delta_vel_pos_AI.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.mdot_A_choked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.delta_vel_pos_BI.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.mdot_B_choked.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_10" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_11" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_12" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_13" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_14" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.zc_15" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.delta_vel_pos_AI.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.mdot_A_choked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.delta_vel_pos_BI.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.mdot_B_choked.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_13" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_14" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_15" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_16" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.zc_17" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.delta_vel_pos_AI.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.mdot_A_choked.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.delta_vel_pos_BI.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.mdot_B_choked.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_1" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_2" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_3" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_4" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.delta_vel_pos_AI.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.mdot_A_choked.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.delta_vel_pos_BI.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.mdot_B_choked.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_5" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_6" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_5" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_6" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_7" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_8" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_7" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_8" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_9" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_10" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.zc_11" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.delta_vel_pos_AI.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.mdot_A_choked.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.delta_vel_pos_BI.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.mdot_B_choked.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_14"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_15"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_16"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_17"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_18"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.zc_19"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.delta_vel_pos_AI.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.mdot_A_choked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.delta_vel_pos_BI.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.mdot_B_choked.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_13" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_14" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_15" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_16" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.zc_17" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.delta_vel_pos_AI.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.mdot_A_choked.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.delta_vel_pos_BI.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.mdot_B_choked.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.zc_13" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.mdot_choked.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.mdot_unchoked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.mdot_choked.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.mdot_unchoked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.mdot_choked.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.mdot_unchoked.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Coolant_Tank.Coolant_Volume.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Coolant_Tank.Coolant_Volume.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Coolant_Tank.Coolant_Volume.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_7" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_8" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Fuel_Cell_Coolant_Channels.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_9" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_10" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_11" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Radiator.zc_12" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor_Volume.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor_Volume.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor_Volume.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_3" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_4" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_5" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.zc_6" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_2" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_3" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Thermal.Thermal_Mass.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Thermal_Circuit_Converter_FC.Thermal_Mass.zc_1" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Thermal_Circuit_Motor.Motor_Case_Thermal_Mass.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Thermal_Circuit_Motor.Stator_Iron_Thermal_Mass.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Thermal_Circuit_Motor.Winding_Thermal_Mass.zc_1" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cooling_System.Thermal_Mass.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.MEA_Thermal_Mass.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Thermal1.Thermal_Mass.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_12" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_14" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_15"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_16" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_17"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_18" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_19"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_20" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_21"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_22" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_23"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_24" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_25"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_26" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Electrical_Cooling_System.Tank.Tank.zc_27"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Electrical_Cooling_System.Tank.Tank.zc_28" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Controlled_Moisture_Source_MA.T_out.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Controlled_Moisture_Source_MA.T_out.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Controlled_Moisture_Source_MA.T_out.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Controlled_Moisture_Source_MA.T_out.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Fuel_Cell_Stack.Membrane_Electrode_Assembly.transport_H2O_C.T_out.zc_1"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Fuel_Cell_Stack.Membrane_Electrode_Assembly.transport_H2O_C.T_out.zc_2"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Environment.convection_A.ht_in.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Pipe_MA.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Exhaust.Purge_Valve.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.convection_A.ht_in.zc_16"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Gas_Channels.Pipe_MA1.convection_B.ht_in.zc_17"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.convection_A.ht_in.zc_18"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Anode_Humidifier.Pipe_MA.convection_B.ht_in.zc_19"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Environment.convection_A.ht_in.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pipe_MA.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Exhaust.Pressure_Relief_Valve.Valve.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.convection_A.ht_in.zc_20"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Gas_Channels.Pipe_MA1.convection_B.ht_in.zc_21"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.convection_A.ht_in.zc_18"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Cathode_Humidifier.Pipe_MA.convection_B.ht_in.zc_19"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Fuel_Tank.convection_A.ht_in.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.convection_A.ht_in.zc_14"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pipe_MA.convection_B.ht_in.zc_15"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.convection_A.ht_in.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Hydrogen_Source.Pressure_Reducing_Valve.Valve.convection_B.ht_in.zc_13"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Air_Intake.convection_A.ht_in.zc_3"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.convection_A.ht_in.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.convection_B.ht_in.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor_Volume.convection_A.ht_in.zc_4"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor_Volume.convection_B.ht_in.zc_5"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.convection_A.ht_in.zc_6"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.convection_B.ht_in.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Constant_Volume_Chamber_MA.convection_C.ht_in.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.convection_A.ht_in.zc_7"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.convection_B.ht_in.zc_8"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.Ds_AB.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.Ds_AB.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.Ds_BA.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Oxygen_Source.Compressor.Ds_BA.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.Ds_AB.zc_9"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.Ds_AB.zc_10"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.Ds_BA.zc_11"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
 "Fuel_Cell.Fuel_Cell.Simscape_Fuel_Cell.Recirculation.Controlled_Mass_Flow_Rate_Source_MA.Ds_BA.zc_12"
) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"UprLim" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
} ssSetZCCacheNeedsReset ( S , 1 ) ; ssSetOutputPortIsNonContinuous ( S , 0 ,
0 ) ; ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 0 ) ; ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:LoggingBlockDoesNotSupportMultiExecInstancesWithCustomMsg\" pr=\"d\"><arguments><arg type=\"encoded\">RgBDAEUAbABlAGMAdAByAGkAYwBQAGwAYQBuAHQALwBCAGEAdAB0AGUAcgB5ACAAUABvAHcAZQByACAAQQBjAGMAbwB1AG4AdABpAG4AZwAvAFAAbwB3AGUAcgAgAEEAYwBjAG8AdQBuAHQAaQBuAGcAIABCAHUAcwAgAEMAcgBlAGEAdABvAHIAAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AACAAGDJ9UBb</h></hs><causes><diag id=\"Simulink:logLoadBlocks:SigLogMultiExecInsNoBusSupportMsg\" pr=\"d\"><msg encoded=\"yes\">TwBuAGwAeQAgAG4AbwBuAC0AYgB1AHMAIABzAGkAZwBuAGEAbABzACAAYwBhAG4AIABiAGUAIABsAG8AZwBnAGUAZAAgAGkAbgBzAGkAZABlACAARgBvAHIAIABFAGEAYwBoACAAcwB1AGIAcwB5AHMAdABlAG0AcwAuAAAA</msg></diag></causes></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_FCElectricPlant_MdlInfoRegFcn ( S , "FCElectricPlant" , & retVal ) ; if (
! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( g5h05g3u4wx ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.5" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0 ) ; ssSetOffsetTime ( S , 1 , 1 ) ;
ssSetSampleTime ( S , 2 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; real_T * localMM = ( real_T * ) ssGetMassMatrixPr ( S
) ; kz4c240slf * localXPerturbMinlocalXPerturbMin = ( kz4c240slf * )
ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx *
localXPerturbMaxlocalXPerturbMax = ( mclj3ytwnx * )
ssGetJacobianPerturbationBoundsMaxVec ( S ) ; void * sysRanPtr = ( NULL ) ;
int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ;
ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid
= 0 ; } axkawtnuua ( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , localMM ,
sysRanPtr , sysTid , ( ( NULL ) ) , ( ( NULL ) ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo ->
genericFcn ; } irvj0luwjw ( & ( dw -> rtm ) , & ( dw -> rtdw ) ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { g5h05g3u4wx * dw = ( g5h05g3u4wx * )
ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * ) ssGetContStates
( S ) ; kz4c240slf * localXPerturbMinlocalXPerturbMin = ( kz4c240slf * )
ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx *
localXPerturbMaxlocalXPerturbMax = ( mclj3ytwnx * )
ssGetJacobianPerturbationBoundsMaxVec ( S ) ; alwc4n2foq ( & ( dw -> rtm ) ,
& ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
localXPerturbMinlocalXPerturbMin , localXPerturbMaxlocalXPerturbMax ) ; }
static void mdlOutputs ( SimStruct * S , int_T tid ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_alps4cqvbe = ( real_T
* ) ssGetInputPortSignal ( S , 0 ) ; real_T const * i_i_i_broznjvo0f = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; real_T const * i_kjpz42xdiy = (
real_T * ) ssGetInputPortSignal ( S , 2 ) ; real_T const * i_bav2fyyxpd = (
real_T * ) ssGetInputPortSignal ( S , 3 ) ; real_T const * i_islo11352b = (
real_T * ) ssGetInputPortSignal ( S , 4 ) ; real_T * o_B_1_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_1_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_1_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_1_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_1_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_1_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_1_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_1_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; if ( tid == PARAMETER_TUNING_TID ) {
FCElectricPlantTID2 ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) )
; } if ( tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { if (
ssIsSampleHit ( S , 0 , tid ) || ssIsMinorTimeStep ( S ) ) { FCElectricPlant
( & ( dw -> rtm ) , i_alps4cqvbe , i_i_i_broznjvo0f , i_kjpz42xdiy ,
i_bav2fyyxpd , i_islo11352b , o_B_1_1 , o_B_1_2 , o_B_1_3 , o_B_1_4 , o_B_1_5
, o_B_1_6 , o_B_1_7 , o_B_1_8 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
& ( dw -> rtzce ) ) ; } } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; czx1gq31fm ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; kqptpzakik * localZCSV = ( kqptpzakik * )
ssGetNonsampledZCs ( S ) ; abih3gg12y ( & ( dw -> rtm ) , & ( dw -> rtb ) , &
( dw -> rtdw ) , localX , localZCSV ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_i_i_broznjvo0f = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; dmzi3aztzd * localXdot = ( dmzi3aztzd
* ) ssGetdX ( S ) ; imv3dllygl ( & ( dw -> rtm ) , i_i_i_broznjvo0f , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , localXdot ) ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; mscgivy4fk ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; }
#define MDL_FORCINGFUNCTION
static void mdlForcingFunction ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_i_i_broznjvo0f = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; dmzi3aztzd * localXdot = ( dmzi3aztzd
* ) ssGetdX ( S ) ; iyhavcqilr ( & ( dw -> rtm ) , i_i_i_broznjvo0f , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , localXdot ) ; }
#define MDL_MASSMATRIX
static void mdlMassMatrix ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; bpia4crzhf ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; } static void mdlTerminate ( SimStruct * S ) {
g5h05g3u4wx * dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; mt14yrnbuj ( & (
dw -> rtdw ) , & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { g5h05g3u4wx * dw =
( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; irfppkdltu ( & ( dw -> rtm ) , & (
dw -> rtdw ) ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { const fw3fcrujzt
* localX = ( const fw3fcrujzt * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fw3fcrujzt ) ; mxArray * storedX = mxCreateNumericMatrix
( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T * rawData = ( UINT8_T * )
mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] , localX , numBytes ) ;
mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } { mxArray * mdlrefDW =
mr_FCElectricPlant_GetDWork ( ssGetDWork ( S , 0 ) ) ; mxSetFieldByNumber (
ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; { g5h05g3u4wx *
dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; m5e23pbc2h * rtm = & ( dw ->
rtm ) ; mxArray * nonContDerivSigInfo = mxCreateCellMatrix ( 2 , 1 ) ; for (
int i = 0 ; i < 2 ; ++ i ) { mxArray * prevValmxArray = mxCreateNumericMatrix
( 1 , rtm -> nonContDerivSignal [ i ] . sizeInBytes , mxUINT8_CLASS , mxREAL
) ; memcpy ( ( uint8_T * ) mxGetData ( prevValmxArray ) , ( const uint8_T * )
rtm -> nonContDerivSignal [ i ] . pPrevVal , rtm -> nonContDerivSignal [ i ]
. sizeInBytes ) ; mxSetCell ( nonContDerivSigInfo , i , prevValmxArray ) ; }
mxSetFieldByNumber ( ss , 0 , 5 , nonContDerivSigInfo ) ; } return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
fw3fcrujzt * localX = ( fw3fcrujzt * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fw3fcrujzt ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_FCElectricPlant_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber (
ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber
( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; { mxArray * nonContDerivSigInfo =
mxGetFieldByNumber ( ss , 0 , 5 ) ; g5h05g3u4wx * dw = ( g5h05g3u4wx * )
ssGetDWork ( S , 0 ) ; m5e23pbc2h * rtm = & ( dw -> rtm ) ; for ( int i = 0 ;
i < 2 ; ++ i ) { mxArray * prevValmxArray = mxGetCell ( nonContDerivSigInfo ,
i ) ; ( void ) memcpy ( rtm -> nonContDerivSignal [ i ] . pPrevVal , ( char *
) mxGetData ( prevValmxArray ) , rtm -> nonContDerivSignal [ i ] .
sizeInBytes ) ; } } }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif

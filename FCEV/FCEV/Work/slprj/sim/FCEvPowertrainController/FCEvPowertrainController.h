#ifndef RTW_HEADER_FCEvPowertrainController_h_
#define RTW_HEADER_FCEvPowertrainController_h_
#ifndef FCEvPowertrainController_COMMON_INCLUDES_
#define FCEvPowertrainController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "FCEvPowertrainController_types.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T hr4pejxjlj ; real_T oyp5ym53qc ; real_T fqz0pqpsux ;
} izbd5cj1yx ; typedef struct { real_T bg3lclywzp ; real_T g1odrjfioq ; }
kfczeuvxuu ; struct gdngfg3ibwc_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ;
real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 [ 11 ] ; real_T P_13 [
11 ] ; real_T P_14 [ 11 ] ; real_T P_15 [ 11 ] ; real_T P_16 ; real_T P_17 ;
real_T P_18 [ 180 ] ; real_T P_19 [ 12 ] ; real_T P_20 [ 15 ] ; real_T P_21 ;
real_T P_22 ; real_T P_23 ; real_T P_24 [ 12 ] ; real_T P_25 [ 12 ] ; real_T
P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ;
real_T P_32 [ 12 ] ; real_T P_33 [ 12 ] ; real_T P_34 ; real_T P_35 [ 12 ] ;
real_T P_36 [ 12 ] ; real_T P_37 ; real_T P_38 [ 2 ] ; real_T P_39 [ 2 ] ;
real_T P_40 [ 11 ] ; real_T P_41 [ 11 ] ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T
P_66 ; real_T P_67 ; real_T P_68 ; uint32_T P_69 [ 2 ] ; } ; struct
ax55bwwar2 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 11 ] ;
int_T systemTid [ 11 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2
] ; } Timing ; } ; typedef struct { izbd5cj1yx rtb ; kfczeuvxuu rtdw ;
ezkw1qrycv rtm ; } dif03hcjvgl ; extern void k2oudzyk03 ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ezkw1qrycv * const
jxp0bqrs0w , izbd5cj1yx * localB , kfczeuvxuu * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_FCEvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_FCEvPowertrainController_GetDWork ( const dif03hcjvgl * mdlrefDW ) ;
extern void mr_FCEvPowertrainController_SetDWork ( dif03hcjvgl * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_FCEvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
FCEvPowertrainController_GetCAPIStaticMap ( void ) ; extern void dyjn3zzpfq (
real_T * bjusnx4whz , kfczeuvxuu * localDW ) ; extern void edcpavqjru (
real_T * bjusnx4whz , kfczeuvxuu * localDW ) ; extern void hjsbdkg1ln (
real_T * bjusnx4whz ) ; extern void otjhyqv5ki ( izbd5cj1yx * localB ,
kfczeuvxuu * localDW ) ; extern void FCEvPowertrainController ( ezkw1qrycv *
const jxp0bqrs0w , const real_T * pmuomho0oz , const real_T * alvykbvthg ,
const real_T * n1wp1ou1xw , const real_T * bdqo4ar2hz , const real_T *
lry4q2lo1i , const real_T * o12aszhwfy , real_T * hz5ahzp5ly , real_T *
pwb5wjytv1 , real_T * pmexk5h2x0 , real_T * bjusnx4whz , izbd5cj1yx * localB
, kfczeuvxuu * localDW ) ; extern void FCEvPowertrainControllerTID1 (
izbd5cj1yx * localB ) ; extern void bsdghwadnz ( ezkw1qrycv * const
jxp0bqrs0w ) ;
#endif

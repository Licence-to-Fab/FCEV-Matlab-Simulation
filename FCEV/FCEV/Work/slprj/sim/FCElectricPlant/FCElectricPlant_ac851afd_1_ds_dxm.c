#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_dxm.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_dxm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1132 , NeDsMethodOutput * t1133 ) { ETTS0
ab_efOut ; ETTS0 b_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 gb_efOut ;
ETTS0 h_efOut ; ETTS0 hb_efOut ; ETTS0 m_efOut ; ETTS0 n_efOut ; ETTS0
nb_efOut ; ETTS0 ob_efOut ; ETTS0 s_efOut ; ETTS0 t10 ; ETTS0 t12 ; ETTS0 t14
; ETTS0 t16 ; ETTS0 t19 ; ETTS0 t20 ; ETTS0 t26 ; ETTS0 t27 ; ETTS0 t28 ;
ETTS0 t29 ; ETTS0 t30 ; ETTS0 t31 ; ETTS0 t7 ; ETTS0 t9 ; ETTS0 t_efOut ;
ETTS0 y_efOut ; PmRealVector out ; real_T X [ 575 ] ; real_T t323 [ 298 ] ;
real_T t462 [ 8 ] ; real_T t408 [ 6 ] ; real_T t409 [ 6 ] ; real_T t463 [ 6 ]
; real_T t410 [ 5 ] ; real_T t411 [ 5 ] ; real_T t412 [ 5 ] ; real_T t413 [ 5
] ; real_T t414 [ 5 ] ; real_T t415 [ 5 ] ; real_T t416 [ 5 ] ; real_T t417 [
5 ] ; real_T t418 [ 5 ] ; real_T t419 [ 5 ] ; real_T t420 [ 5 ] ; real_T t421
[ 5 ] ; real_T t422 [ 5 ] ; real_T t423 [ 5 ] ; real_T t424 [ 5 ] ; real_T
t425 [ 5 ] ; real_T t426 [ 5 ] ; real_T t427 [ 5 ] ; real_T t428 [ 5 ] ;
real_T t429 [ 5 ] ; real_T t430 [ 5 ] ; real_T t431 [ 5 ] ; real_T t432 [ 5 ]
; real_T t433 [ 5 ] ; real_T t434 [ 5 ] ; real_T t435 [ 5 ] ; real_T t436 [ 5
] ; real_T t437 [ 5 ] ; real_T t438 [ 5 ] ; real_T t439 [ 5 ] ; real_T t440 [
5 ] ; real_T t441 [ 5 ] ; real_T t442 [ 5 ] ; real_T t443 [ 5 ] ; real_T t448
[ 5 ] ; real_T t449 [ 5 ] ; real_T t450 [ 5 ] ; real_T t451 [ 5 ] ; real_T
t452 [ 5 ] ; real_T t453 [ 5 ] ; real_T t454 [ 5 ] ; real_T t455 [ 5 ] ;
real_T t456 [ 5 ] ; real_T t457 [ 5 ] ; real_T t458 [ 5 ] ; real_T t459 [ 5 ]
; real_T t460 [ 5 ] ; real_T t461 [ 5 ] ; real_T t407 [ 4 ] ; real_T t444 [ 4
] ; real_T t445 [ 4 ] ; real_T t446 [ 4 ] ; real_T t447 [ 4 ] ; real_T t548 [
2 ] ; real_T t549 [ 2 ] ; real_T t551 [ 2 ] ; real_T t555 [ 2 ] ; real_T t557
[ 2 ] ; real_T t560 [ 2 ] ; real_T t561 [ 2 ] ; real_T ac_efOut [ 1 ] ;
real_T ad_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ;
real_T bd_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T
cc_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T
db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T
e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T
ed_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T
fc_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T
gd_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
jc_efOut [ 1 ] ; real_T jd_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T
kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
ld_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
md_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T nd_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T
pd_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
qc_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T t360
[ 1 ] ; real_T t361 [ 1 ] ; real_T t362 [ 1 ] ; real_T t406 [ 1 ] ; real_T
tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ; real_T td_efOut [ 1 ] ; real_T
u_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ; real_T uc_efOut [ 1 ] ; real_T
ud_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T
vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
xb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
yc_efOut [ 1 ] ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_cv_I ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_cv_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ; real_T
intermediate_der1464 ; real_T intermediate_der1507 ; real_T
intermediate_der1509 ; real_T intermediate_der1510 ; real_T
intermediate_der1813 ; real_T intermediate_der1814 ; real_T
intermediate_der1815 ; real_T intermediate_der1858 ; real_T
intermediate_der1860 ; real_T intermediate_der1861 ; real_T
intermediate_der2152 ; real_T intermediate_der2153 ; real_T
intermediate_der2154 ; real_T intermediate_der2197 ; real_T
intermediate_der2199 ; real_T intermediate_der2200 ; real_T
intermediate_der242 ; real_T intermediate_der243 ; real_T intermediate_der244
; real_T intermediate_der245 ; real_T intermediate_der246 ; real_T
intermediate_der2608 ; real_T intermediate_der2609 ; real_T
intermediate_der2610 ; real_T intermediate_der2653 ; real_T
intermediate_der2655 ; real_T intermediate_der2656 ; real_T
intermediate_der2939 ; real_T intermediate_der2940 ; real_T
intermediate_der2983 ; real_T intermediate_der2985 ; real_T
intermediate_der2986 ; real_T intermediate_der3290 ; real_T
intermediate_der3291 ; real_T intermediate_der3334 ; real_T
intermediate_der3336 ; real_T intermediate_der3337 ; real_T
intermediate_der3627 ; real_T intermediate_der3633 ; real_T
intermediate_der3673 ; real_T intermediate_der3674 ; real_T
intermediate_der3675 ; real_T intermediate_der3699 ; real_T
intermediate_der3701 ; real_T intermediate_der3702 ; real_T
intermediate_der3757 ; real_T intermediate_der3758 ; real_T
intermediate_der3784 ; real_T intermediate_der3786 ; real_T
intermediate_der3787 ; real_T intermediate_der380 ; real_T
intermediate_der381 ; real_T intermediate_der382 ; real_T
intermediate_der4474 ; real_T intermediate_der4549 ; real_T
intermediate_der4550 ; real_T intermediate_der4593 ; real_T
intermediate_der4595 ; real_T intermediate_der4596 ; real_T
intermediate_der491 ; real_T intermediate_der5094 ; real_T
intermediate_der5095 ; real_T intermediate_der5096 ; real_T
intermediate_der5098 ; real_T intermediate_der5099 ; real_T
intermediate_der511 ; real_T intermediate_der513 ; real_T
intermediate_der5188 ; real_T intermediate_der5189 ; real_T
intermediate_der5190 ; real_T intermediate_der5192 ; real_T
intermediate_der5193 ; real_T intermediate_der5679 ; real_T
intermediate_der5680 ; real_T intermediate_der6072 ; real_T
intermediate_der6073 ; real_T intermediate_der6074 ; real_T
intermediate_der6637 ; real_T intermediate_der6638 ; real_T
intermediate_der6639 ; real_T intermediate_der669 ; real_T
intermediate_der670 ; real_T intermediate_der6945 ; real_T
intermediate_der6946 ; real_T intermediate_der6947 ; real_T
intermediate_der699 ; real_T intermediate_der700 ; real_T intermediate_der701
; real_T intermediate_der7187 ; real_T intermediate_der7188 ; real_T
intermediate_der7189 ; real_T intermediate_der7221 ; real_T
intermediate_der7222 ; real_T intermediate_der7223 ; real_T
intermediate_der7407 ; real_T intermediate_der7408 ; real_T
intermediate_der7409 ; real_T intermediate_der7412 ; real_T
intermediate_der7415 ; real_T intermediate_der7421 ; real_T
intermediate_der7427 ; real_T intermediate_der7432 ; real_T
intermediate_der7433 ; real_T intermediate_der7717 ; real_T
intermediate_der8165 ; real_T intermediate_der8537 ; real_T
intermediate_der8538 ; real_T intermediate_der8539 ; real_T
intermediate_der8924 ; real_T intermediate_der8925 ; real_T
intermediate_der8926 ; real_T intermediate_der9283 ; real_T
intermediate_der9284 ; real_T intermediate_der9285 ; real_T
intermediate_der9634 ; real_T intermediate_der9635 ; real_T
intermediate_der9636 ; real_T intrm_sf_mf_1006 ; real_T intrm_sf_mf_1114 ;
real_T intrm_sf_mf_1145 ; real_T intrm_sf_mf_1253 ; real_T intrm_sf_mf_1382 ;
real_T intrm_sf_mf_1395 ; real_T intrm_sf_mf_1401 ; real_T intrm_sf_mf_1509 ;
real_T intrm_sf_mf_1637 ; real_T intrm_sf_mf_1656 ; real_T intrm_sf_mf_1662 ;
real_T intrm_sf_mf_1687 ; real_T intrm_sf_mf_1795 ; real_T intrm_sf_mf_1796 ;
real_T intrm_sf_mf_197 ; real_T intrm_sf_mf_265 ; real_T intrm_sf_mf_373 ;
real_T intrm_sf_mf_403 ; real_T intrm_sf_mf_511 ; real_T intrm_sf_mf_542 ;
real_T intrm_sf_mf_650 ; real_T intrm_sf_mf_692 ; real_T intrm_sf_mf_800 ;
real_T intrm_sf_mf_868 ; real_T intrm_sf_mf_976 ; real_T t1085 ; real_T t1090
; real_T t1110 ; real_T t1118 ; real_T t1128 ; real_T t1130 ; real_T t1131 ;
real_T t348_idx_0 ; real_T t565 ; real_T t568 ; real_T t571 ; real_T t574 ;
real_T t577 ; real_T t580 ; real_T t583 ; real_T t586 ; real_T t589 ; real_T
t643 ; real_T t646 ; real_T t649 ; real_T t652 ; real_T t655 ; real_T t658 ;
real_T t667 ; real_T t670 ; real_T t673 ; real_T t676 ; real_T t678 ; real_T
t679 ; real_T t681 ; real_T t682 ; real_T t686 ; real_T t688 ; real_T t690 ;
real_T t692 ; real_T t694 ; real_T t696 ; real_T t698 ; real_T t699 ; real_T
t700 ; real_T t703 ; real_T t705 ; real_T t707 ; real_T t709 ; real_T t711 ;
real_T t712 ; real_T t715 ; real_T t718 ; real_T t719 ; real_T t720 ; real_T
t721 ; real_T t724 ; real_T t727 ; real_T t728 ; real_T t729 ; real_T t730 ;
real_T t733 ; real_T t736 ; real_T t738 ; real_T t739 ; real_T t745 ; real_T
t746 ; real_T t752 ; real_T t753 ; real_T t759 ; real_T t760 ; real_T t766 ;
real_T t767 ; real_T t773 ; real_T t780 ; real_T t781 ; real_T t787 ; real_T
t794 ; real_T t796 ; real_T t797 ; real_T t800 ; real_T t801 ; real_T t802 ;
real_T t805 ; real_T t806 ; real_T t807 ; real_T t810 ; real_T t811 ; real_T
t812 ; real_T t815 ; real_T t817 ; real_T t825 ; real_T t831 ; real_T t832 ;
real_T t838 ; real_T t839 ; real_T t845 ; real_T t847 ; real_T t850 ; real_T
t857 ; real_T t858 ; real_T t875 ; real_T t878 ; real_T t889 ; real_T t892 ;
size_t t33 [ 1 ] ; size_t t34 [ 1 ] ; size_t t36 [ 1 ] ; size_t t547 [ 1 ] ;
size_t t550 [ 1 ] ; size_t t553 [ 1 ] ; size_t t556 [ 1 ] ; size_t t559 [ 1 ]
; size_t t562 [ 1 ] ; size_t t87 [ 1 ] ; size_t t90 [ 1 ] ; size_t t519 ;
int32_T b ; for ( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t1132 -> mX . mX [ b ]
; } out = t1133 -> mDXM ; t406 [ 0ULL ] = X [ 6ULL ] ; t33 [ 0 ] = 20ULL ;
t34 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ]
, & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [ 0ULL ] , & t33 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t31 = efOut ; t560 [ 0ULL ] = t31 . mField0 [ 0ULL ] ;
t560 [ 1ULL ] = t31 . mField0 [ 1ULL ] ; t561 [ 0ULL ] = t31 . mField1 [ 0ULL
] ; t561 [ 1ULL ] = t31 . mField1 [ 1ULL ] ; t562 [ 0ULL ] = t31 . mField2 [
0ULL ] ; t362 [ 0ULL ] = ( X [ 110ULL ] + X [ 117ULL ] ) / 2.0 ; t36 [ 0 ] =
19ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t362 [ 0ULL ] , & t36 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t30 = b_efOut ; t557 [ 0ULL ] = t30 . mField0 [ 0ULL ] ;
t557 [ 1ULL ] = t30 . mField0 [ 1ULL ] ; t559 [ 0ULL ] = t30 . mField2 [ 0ULL
] ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t560 [ 0ULL ] , &
t562 [ 0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t361 [ 0 ] = c_efOut [ 0 ] ; t1130 = t361 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & d_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t562 [
0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t360 [ 0
] = d_efOut [ 0 ] ; intermediate_der382 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & e_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t562 [
0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = e_efOut [ 0 ] ; intermediate_der513 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t562 [
0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = f_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I = t348_idx_0 ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_cv_I =
intermediate_der513 - t1130 * t1130 * X [ 6ULL ] * intermediate_der382 / (
t348_idx_0 == 0.0 ? 1.0E-16 : t348_idx_0 ) * 100000.0 ; t361 [ 0ULL ] = X [
9ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , &
g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t361 [ 0ULL ] , & t33 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t29 = g_efOut ; t560 [ 0ULL ] = t29 . mField0 [ 0ULL ] ;
t560 [ 1ULL ] = t29 . mField0 [ 1ULL ] ; t555 [ 0ULL ] = t29 . mField1 [ 0ULL
] ; t555 [ 1ULL ] = t29 . mField1 [ 1ULL ] ; t556 [ 0ULL ] = t29 . mField2 [
0ULL ] ; t360 [ 0ULL ] = ( X [ 92ULL ] + X [ 99ULL ] ) / 2.0 ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t360 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t28
= h_efOut ; t551 [ 0ULL ] = t28 . mField0 [ 0ULL ] ; t551 [ 1ULL ] = t28 .
mField0 [ 1ULL ] ; t553 [ 0ULL ] = t28 . mField2 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t556 [
0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = i_efOut [ 0 ] ; intermediate_der513 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t556 [
0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = j_efOut [ 0 ] ; t678 = t348_idx_0 ; tlu2_2d_linear_linear_value
( & k_efOut [ 0ULL ] , & t560 [ 0ULL ] , & t556 [ 0ULL ] , & t551 [ 0ULL ] ,
& t553 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [
0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = k_efOut [ 0 ] ;
t679 = t348_idx_0 ; tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL ] , & t560
[ 0ULL ] , & t556 [ 0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t348_idx_0 = l_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I = t348_idx_0 ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I = t679 -
intermediate_der513 * intermediate_der513 * X [ 9ULL ] * t678 / ( t348_idx_0
== 0.0 ? 1.0E-16 : t348_idx_0 ) * 100000.0 ; t360 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t360 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t27
= m_efOut ; t548 [ 0ULL ] = t27 . mField0 [ 0ULL ] ; t548 [ 1ULL ] = t27 .
mField0 [ 1ULL ] ; t549 [ 0ULL ] = t27 . mField1 [ 0ULL ] ; t549 [ 1ULL ] =
t27 . mField1 [ 1ULL ] ; t550 [ 0ULL ] = t27 . mField2 [ 0ULL ] ; t360 [ 0ULL
] = ( X [ 101ULL ] + X [ 108ULL ] ) / 2.0 ; tlu2_linear_linear_prelookup ( &
n_efOut . mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t360 [
0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t26 = n_efOut ; t560 [ 0ULL ] =
t26 . mField0 [ 0ULL ] ; t560 [ 1ULL ] = t26 . mField0 [ 1ULL ] ; t547 [ 0ULL
] = t26 . mField2 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ]
, & t548 [ 0ULL ] , & t550 [ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t348_idx_0 = o_efOut [ 0 ] ; t679 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & p_efOut [ 0ULL ] , & t548 [ 0ULL ] , & t550 [
0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = p_efOut [ 0 ] ; t1128 = t348_idx_0 ; tlu2_2d_linear_linear_value
( & q_efOut [ 0ULL ] , & t548 [ 0ULL ] , & t550 [ 0ULL ] , & t560 [ 0ULL ] ,
& t547 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [
0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = q_efOut [ 0 ] ;
t681 = t348_idx_0 ; tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t548
[ 0ULL ] , & t550 [ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t348_idx_0 = r_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I = t348_idx_0 ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_cv_I = t681 - t679 * t679 * X
[ 11ULL ] * t1128 / ( t348_idx_0 == 0.0 ? 1.0E-16 : t348_idx_0 ) * 100000.0 ;
t682 = X [ 152ULL ] * - 0.2 + 0.2 ; if ( X [ 22ULL ] <= 0.0 ) { t1118 = 0.0 ;
} else { t1118 = X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ]
<= 0.0 ) { t1110 = 0.0 ; } else { t1110 = X [ 23ULL ] >= 1.0 ? 1.0 : X [
23ULL ] ; } t1090 = ( ( ( 1.0 - t1118 ) - t1110 ) * 296.802103844292 + t1118
* 461.523 ) + t1110 * 4124.48151675695 ; t875 = X [ 20ULL ] * t1090 ; t1085 =
X [ 21ULL ] / ( t875 == 0.0 ? 1.0E-16 : t875 ) ; if ( X [ 20ULL ] <=
216.59999999999997 ) { intermediate_der8165 = 216.59999999999997 ; } else {
intermediate_der8165 = X [ 20ULL ] >= 623.15 ? 623.15 : X [ 20ULL ] ; } t565
= intermediate_der8165 * intermediate_der8165 ; if ( X [ 26ULL ] <= 0.0 ) {
intermediate_der8537 = 0.0 ; } else { intermediate_der8537 = X [ 26ULL ] >=
1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { intermediate_der8538
= 0.0 ; } else { intermediate_der8538 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL
] ; } intrm_sf_mf_265 = ( ( ( 1.0 - intermediate_der8537 ) -
intermediate_der8538 ) * 296.802103844292 + intermediate_der8537 * 461.523 )
+ intermediate_der8538 * 4124.48151675695 ; t686 = X [ 24ULL ] *
intrm_sf_mf_265 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 = X [ 30ULL ]
/ ( t686 == 0.0 ? 1.0E-16 : t686 ) ; if ( X [ 24ULL ] <= 216.59999999999997 )
{ intermediate_der8539 = 216.59999999999997 ; } else { intermediate_der8539 =
X [ 24ULL ] >= 623.15 ? 623.15 : X [ 24ULL ] ; } t568 = intermediate_der8539
* intermediate_der8539 ; if ( X [ 29ULL ] <= 0.0 ) { intermediate_der8924 =
0.0 ; } else { intermediate_der8924 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ]
; } if ( X [ 28ULL ] <= 0.0 ) { intermediate_der8925 = 0.0 ; } else {
intermediate_der8925 = X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; }
intrm_sf_mf_403 = ( ( ( 1.0 - intermediate_der8924 ) - intermediate_der8925 )
* 296.802103844292 + intermediate_der8924 * 461.523 ) + intermediate_der8925
* 4124.48151675695 ; t688 = X [ 27ULL ] * intrm_sf_mf_403 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 = X [ 32ULL ]
/ ( t688 == 0.0 ? 1.0E-16 : t688 ) ; if ( X [ 27ULL ] <= 216.59999999999997 )
{ intermediate_der8926 = 216.59999999999997 ; } else { intermediate_der8926 =
X [ 27ULL ] >= 623.15 ? 623.15 : X [ 27ULL ] ; } t571 = intermediate_der8926
* intermediate_der8926 ; if ( X [ 35ULL ] <= 0.0 ) { intermediate_der9283 =
0.0 ; } else { intermediate_der9283 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ]
; } if ( X [ 34ULL ] <= 0.0 ) { intermediate_der9284 = 0.0 ; } else {
intermediate_der9284 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; }
intrm_sf_mf_542 = ( ( ( 1.0 - intermediate_der9283 ) - intermediate_der9284 )
* 296.802103844292 + intermediate_der9283 * 461.523 ) + intermediate_der9284
* 4124.48151675695 ; t690 = X [ 33ULL ] * intrm_sf_mf_542 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 = X [ 36ULL ]
/ ( t690 == 0.0 ? 1.0E-16 : t690 ) ; if ( X [ 33ULL ] <= 216.59999999999997 )
{ intermediate_der9285 = 216.59999999999997 ; } else { intermediate_der9285 =
X [ 33ULL ] >= 623.15 ? 623.15 : X [ 33ULL ] ; } t574 = intermediate_der9285
* intermediate_der9285 ; if ( X [ 40ULL ] <= 0.0 ) { intermediate_der9634 =
0.0 ; } else { intermediate_der9634 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ]
; } if ( X [ 41ULL ] <= 0.0 ) { intermediate_der9635 = 0.0 ; } else {
intermediate_der9635 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; }
intrm_sf_mf_692 = ( ( ( 1.0 - intermediate_der9634 ) - intermediate_der9635 )
* 296.802103844292 + intermediate_der9634 * 461.523 ) + intermediate_der9635
* 259.836612622973 ; t692 = X [ 38ULL ] * intrm_sf_mf_692 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 = X [ 39ULL ]
/ ( t692 == 0.0 ? 1.0E-16 : t692 ) ; if ( X [ 38ULL ] <= 216.59999999999997 )
{ intermediate_der9636 = 216.59999999999997 ; } else { intermediate_der9636 =
X [ 38ULL ] >= 623.15 ? 623.15 : X [ 38ULL ] ; } t577 = intermediate_der9636
* intermediate_der9636 ; if ( X [ 44ULL ] <= 0.0 ) { t878 = 0.0 ; } else {
t878 = X [ 44ULL ] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ] <= 0.0 ) {
t892 = 0.0 ; } else { t892 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; }
intrm_sf_mf_868 = ( ( ( 1.0 - t878 ) - t892 ) * 296.802103844292 + t878 *
461.523 ) + t892 * 259.836612622973 ; t694 = X [ 42ULL ] * intrm_sf_mf_868 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 = X [ 48ULL ]
/ ( t694 == 0.0 ? 1.0E-16 : t694 ) ; if ( X [ 42ULL ] <= 216.59999999999997 )
{ t889 = 216.59999999999997 ; } else { t889 = X [ 42ULL ] >= 623.15 ? 623.15
: X [ 42ULL ] ; } t580 = t889 * t889 ; if ( X [ 47ULL ] <= 0.0 ) {
intermediate_der6072 = 0.0 ; } else { intermediate_der6072 = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { intermediate_der6073
= 0.0 ; } else { intermediate_der6073 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL
] ; } intrm_sf_mf_1006 = ( ( ( 1.0 - intermediate_der6072 ) -
intermediate_der6073 ) * 296.802103844292 + intermediate_der6072 * 461.523 )
+ intermediate_der6073 * 259.836612622973 ; t696 = X [ 45ULL ] *
intrm_sf_mf_1006 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 = X [ 49ULL ]
/ ( t696 == 0.0 ? 1.0E-16 : t696 ) ; if ( X [ 45ULL ] <= 216.59999999999997 )
{ intermediate_der5680 = 216.59999999999997 ; } else { intermediate_der5680 =
X [ 45ULL ] >= 623.15 ? 623.15 : X [ 45ULL ] ; } t583 = intermediate_der5680
* intermediate_der5680 ; if ( X [ 52ULL ] <= 0.0 ) { intermediate_der6637 =
0.0 ; } else { intermediate_der6637 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ]
; } if ( X [ 51ULL ] <= 0.0 ) { intermediate_der6638 = 0.0 ; } else {
intermediate_der6638 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; }
intrm_sf_mf_1145 = ( ( ( 1.0 - intermediate_der6637 ) - intermediate_der6638
) * 296.802103844292 + intermediate_der6637 * 461.523 ) +
intermediate_der6638 * 259.836612622973 ; t698 = X [ 50ULL ] *
intrm_sf_mf_1145 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 = X [ 53ULL ]
/ ( t698 == 0.0 ? 1.0E-16 : t698 ) ; if ( X [ 50ULL ] <= 216.59999999999997 )
{ intermediate_der6074 = 216.59999999999997 ; } else { intermediate_der6074 =
X [ 50ULL ] >= 623.15 ? 623.15 : X [ 50ULL ] ; } t586 = intermediate_der6074
* intermediate_der6074 ; t360 [ 0ULL ] = X [ 55ULL ] ; t87 [ 0 ] = 11ULL ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t360 [ 0ULL ] , & t87 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t12 = s_efOut ; t360 [ 0ULL ] = 1.01325 ; t90 [ 0 ] = 12ULL ;
tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t360 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t14 = t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , &
t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , &
t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = u_efOut [ 0 ]
; t1131 = t348_idx_0 ; tlu2_2d_linear_linear_value ( & v_efOut [ 0ULL ] , &
t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ]
, & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 ,
& t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = v_efOut [ 0
] ; intermediate_der3633 = t348_idx_0 ; tlu2_2d_linear_linear_value ( &
w_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , &
t14 . mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField34 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = w_efOut [ 0 ] ; t681 = t348_idx_0 ; tlu2_2d_linear_linear_value
( & x_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] ,
& t14 . mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField32 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = x_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 = t348_idx_0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 = t681 -
t1131 * t1131 * X [ 55ULL ] * intermediate_der3633 / ( t348_idx_0 == 0.0 ?
1.0E-16 : t348_idx_0 ) * 100000.0 ; t360 [ 0ULL ] = X [ 58ULL ] ;
tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t360 [ 0ULL ] , & t87 [ 0ULL ] , & t34 [ 0ULL ] ) ; t7
= y_efOut ; t360 [ 0ULL ] = X [ 57ULL ] ; tlu2_linear_linear_prelookup ( &
ab_efOut . mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t360 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t9 = ab_efOut ;
tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t87 [ 0ULL ] , & t90 [ 0ULL
] , & t34 [ 0ULL ] ) ; t348_idx_0 = bb_efOut [ 0 ] ; t699 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t87 [ 0ULL ] , & t90 [ 0ULL
] , & t34 [ 0ULL ] ) ; t348_idx_0 = cb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & db_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87 [ 0ULL ] , & t90 [ 0ULL
] , & t34 [ 0ULL ] ) ; t348_idx_0 = db_efOut [ 0 ] ; intermediate_der3701 =
t348_idx_0 ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t87 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = eb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 = t348_idx_0
; tlu2_2d_linear_linear_value ( & fb_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ]
, & t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t87 [ 0ULL ] , & t90 [
0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = fb_efOut [ 0 ] ;
intermediate_der3702 = X [ 57ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ) *
100.0 + t348_idx_0 ; t360 [ 0ULL ] = X [ 60ULL ] ;
tlu2_linear_linear_prelookup ( & gb_efOut . mField0 [ 0ULL ] , & gb_efOut .
mField1 [ 0ULL ] , & gb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t360 [ 0ULL ] , & t87 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t20 = gb_efOut ; t360 [ 0ULL ] = X [ 59ULL ] ; tlu2_linear_linear_prelookup (
& hb_efOut . mField0 [ 0ULL ] , & hb_efOut . mField1 [ 0ULL ] , & hb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t360 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t10 = hb_efOut ;
tlu2_2d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = ib_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 = t348_idx_0 ;
tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = jb_efOut [ 0 ] ; t700 =
t348_idx_0 ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t20 .
mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , &
t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , &
t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = kb_efOut [ 0
] ; intermediate_der3786 = t348_idx_0 ; tlu2_2d_linear_linear_value ( &
lb_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , &
t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t348_idx_0 = lb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 = t348_idx_0
; tlu2_2d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL
] , & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t348_idx_0 = mb_efOut [ 0 ] ;
intermediate_der3787 = X [ 59ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) *
100.0 + t348_idx_0 ; if ( X [ 65ULL ] <= 0.0 ) { intermediate_der6945 = 0.0 ;
} else { intermediate_der6945 = X [ 65ULL ] >= 1.0 ? 1.0 : X [ 65ULL ] ; } if
( X [ 64ULL ] <= 0.0 ) { intermediate_der6946 = 0.0 ; } else {
intermediate_der6946 = X [ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; }
intrm_sf_mf_1382 = ( ( ( 1.0 - intermediate_der6945 ) - intermediate_der6946
) * 296.802103844292 + intermediate_der6945 * 461.523 ) +
intermediate_der6946 * 4124.48151675695 ; t703 = X [ 62ULL ] *
intrm_sf_mf_1382 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 = X [ 63ULL ]
/ ( t703 == 0.0 ? 1.0E-16 : t703 ) ; if ( X [ 62ULL ] <= 216.59999999999997 )
{ intermediate_der6639 = 216.59999999999997 ; } else { intermediate_der6639 =
X [ 62ULL ] >= 623.15 ? 623.15 : X [ 62ULL ] ; } t589 = intermediate_der6639
* intermediate_der6639 ; if ( X [ 68ULL ] <= 0.0 ) { intermediate_der7187 =
0.0 ; } else { intermediate_der7187 = X [ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ]
; } if ( X [ 69ULL ] <= 0.0 ) { intermediate_der7188 = 0.0 ; } else {
intermediate_der7188 = X [ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; }
intrm_sf_mf_1401 = ( ( ( 1.0 - intermediate_der7187 ) - intermediate_der7188
) * 296.802103844292 + intermediate_der7187 * 461.523 ) +
intermediate_der7188 * 4124.48151675695 ; t705 = X [ 66ULL ] *
intrm_sf_mf_1401 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 = X [ 67ULL ]
/ ( t705 == 0.0 ? 1.0E-16 : t705 ) ; if ( X [ 66ULL ] <= 216.59999999999997 )
{ intermediate_der6947 = 216.59999999999997 ; } else { intermediate_der6947 =
X [ 66ULL ] >= 623.15 ? 623.15 : X [ 66ULL ] ; } t850 = intermediate_der6947
* intermediate_der6947 ; if ( X [ 72ULL ] <= 0.0 ) { intermediate_der7221 =
0.0 ; } else { intermediate_der7221 = X [ 72ULL ] >= 1.0 ? 1.0 : X [ 72ULL ]
; } if ( X [ 71ULL ] <= 0.0 ) { intermediate_der7222 = 0.0 ; } else {
intermediate_der7222 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; }
intrm_sf_mf_1637 = ( ( ( 1.0 - intermediate_der7221 ) - intermediate_der7222
) * 296.802103844292 + intermediate_der7221 * 461.523 ) +
intermediate_der7222 * 259.836612622973 ; t707 = X [ 70ULL ] *
intrm_sf_mf_1637 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 = X [ 54ULL ]
/ ( t707 == 0.0 ? 1.0E-16 : t707 ) ; if ( X [ 70ULL ] <= 216.59999999999997 )
{ intermediate_der7189 = 216.59999999999997 ; } else { intermediate_der7189 =
X [ 70ULL ] >= 623.15 ? 623.15 : X [ 70ULL ] ; } t845 = intermediate_der7189
* intermediate_der7189 ; if ( X [ 75ULL ] <= 0.0 ) { intermediate_der7407 =
0.0 ; } else { intermediate_der7407 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ]
; } if ( X [ 74ULL ] <= 0.0 ) { intermediate_der7408 = 0.0 ; } else {
intermediate_der7408 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; }
intrm_sf_mf_1662 = ( ( ( 1.0 - intermediate_der7407 ) - intermediate_der7408
) * 296.802103844292 + intermediate_der7407 * 461.523 ) +
intermediate_der7408 * 4124.48151675695 ; t709 = X [ 73ULL ] *
intrm_sf_mf_1662 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 = X [ 37ULL ]
/ ( t709 == 0.0 ? 1.0E-16 : t709 ) ; if ( X [ 73ULL ] <= 216.59999999999997 )
{ intermediate_der7223 = 216.59999999999997 ; } else { intermediate_der7223 =
X [ 73ULL ] >= 623.15 ? 623.15 : X [ 73ULL ] ; } t847 = intermediate_der7223
* intermediate_der7223 ; intrm_sf_mf_1114 = ( ( ( 1074.1165326382641 +
intermediate_der5680 * - 0.2214565261064495 ) + t583 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der6072 ) - intermediate_der6073 ) + ( (
1479.6504774711011 + intermediate_der5680 * 1.2002114337048222 ) + t583 * -
0.00038614513167823636 ) * intermediate_der6072 ) + ( ( 900.63941224838356 +
intermediate_der5680 * - 0.044484923911382625 ) + t583 *
0.00036936011832044979 ) * intermediate_der6073 ; intrm_sf_mf_1253 = ( ( (
1074.1165326382641 + intermediate_der6074 * - 0.2214565261064495 ) + t586 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der6637 ) -
intermediate_der6638 ) + ( ( 1479.6504774711011 + intermediate_der6074 *
1.2002114337048222 ) + t586 * - 0.00038614513167823636 ) *
intermediate_der6637 ) + ( ( 900.63941224838356 + intermediate_der6074 * -
0.044484923911382625 ) + t586 * 0.00036936011832044979 ) *
intermediate_der6638 ; intrm_sf_mf_1395 = ( ( ( 1074.1165326382641 +
intermediate_der6639 * - 0.2214565261064495 ) + t589 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der6945 ) - intermediate_der6946 ) + ( (
1479.6504774711011 + intermediate_der6639 * 1.2002114337048222 ) + t589 * -
0.00038614513167823636 ) * intermediate_der6945 ) + ( ( 12825.281119789837 +
intermediate_der6639 * 6.9647057412840034 ) + t589 * - 0.0070524868246844051
) * intermediate_der6946 ; intrm_sf_mf_1509 = ( ( ( 1074.1165326382641 +
intermediate_der6947 * - 0.2214565261064495 ) + t850 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der7187 ) - intermediate_der7188 ) + ( (
1479.6504774711011 + intermediate_der6947 * 1.2002114337048222 ) + t850 * -
0.00038614513167823636 ) * intermediate_der7187 ) + ( ( 12825.281119789837 +
intermediate_der6947 * 6.9647057412840034 ) + t850 * - 0.0070524868246844051
) * intermediate_der7188 ; intrm_sf_mf_1656 = ( ( ( 1074.1165326382641 +
intermediate_der7189 * - 0.2214565261064495 ) + t845 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der7221 ) - intermediate_der7222 ) + ( (
1479.6504774711011 + intermediate_der7189 * 1.2002114337048222 ) + t845 * -
0.00038614513167823636 ) * intermediate_der7221 ) + ( ( 900.63941224838356 +
intermediate_der7189 * - 0.044484923911382625 ) + t845 *
0.00036936011832044979 ) * intermediate_der7222 ; intrm_sf_mf_1687 = ( ( (
1074.1165326382641 + intermediate_der7223 * - 0.2214565261064495 ) + t847 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der7407 ) -
intermediate_der7408 ) + ( ( 1479.6504774711011 + intermediate_der7223 *
1.2002114337048222 ) + t847 * - 0.00038614513167823636 ) *
intermediate_der7407 ) + ( ( 12825.281119789837 + intermediate_der7223 *
6.9647057412840034 ) + t847 * - 0.0070524868246844051 ) *
intermediate_der7408 ; t360 [ 0ULL ] = X [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t360 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t16
= nb_efOut ; t360 [ 0ULL ] = X [ 14ULL ] ; tlu2_linear_linear_prelookup ( &
ob_efOut . mField0 [ 0ULL ] , & ob_efOut . mField1 [ 0ULL ] , & ob_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t360 [
0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t19 = ob_efOut ;
tlu2_2d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t360 [ 0 ] = pb_efOut [ 0 ] ;
intermediate_der7717 = t360 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
qb_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , &
t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t360 [ 0 ] = qb_efOut [ 0 ] ; intrm_sf_mf_1795 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & rb_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t360 [ 0 ] = rb_efOut [ 0 ] ;
intrm_sf_mf_1796 = t360 [ 0ULL ] ; intrm_sf_mf_197 = ( ( ( 1074.1165326382641
+ intermediate_der8165 * - 0.2214565261064495 ) + t565 *
0.00037212980109014541 ) * ( ( 1.0 - t1118 ) - t1110 ) + ( (
1479.6504774711011 + intermediate_der8165 * 1.2002114337048222 ) + t565 * -
0.00038614513167823636 ) * t1118 ) + ( ( 12825.281119789837 +
intermediate_der8165 * 6.9647057412840034 ) + t565 * - 0.0070524868246844051
) * t1110 ; intrm_sf_mf_373 = ( ( ( 1074.1165326382641 + intermediate_der8539
* - 0.2214565261064495 ) + t568 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der8537 ) - intermediate_der8538 ) + ( ( 1479.6504774711011 +
intermediate_der8539 * 1.2002114337048222 ) + t568 * - 0.00038614513167823636
) * intermediate_der8537 ) + ( ( 12825.281119789837 + intermediate_der8539 *
6.9647057412840034 ) + t568 * - 0.0070524868246844051 ) *
intermediate_der8538 ; intrm_sf_mf_511 = ( ( ( 1074.1165326382641 +
intermediate_der8926 * - 0.2214565261064495 ) + t571 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der8924 ) - intermediate_der8925 ) + ( (
1479.6504774711011 + intermediate_der8926 * 1.2002114337048222 ) + t571 * -
0.00038614513167823636 ) * intermediate_der8924 ) + ( ( 12825.281119789837 +
intermediate_der8926 * 6.9647057412840034 ) + t571 * - 0.0070524868246844051
) * intermediate_der8925 ; intrm_sf_mf_650 = ( ( ( 1074.1165326382641 +
intermediate_der9285 * - 0.2214565261064495 ) + t574 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der9283 ) - intermediate_der9284 ) + ( (
1479.6504774711011 + intermediate_der9285 * 1.2002114337048222 ) + t574 * -
0.00038614513167823636 ) * intermediate_der9283 ) + ( ( 12825.281119789837 +
intermediate_der9285 * 6.9647057412840034 ) + t574 * - 0.0070524868246844051
) * intermediate_der9284 ; intrm_sf_mf_800 = ( ( ( 1074.1165326382641 +
intermediate_der9636 * - 0.2214565261064495 ) + t577 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der9634 ) - intermediate_der9635 ) + ( (
1479.6504774711011 + intermediate_der9636 * 1.2002114337048222 ) + t577 * -
0.00038614513167823636 ) * intermediate_der9634 ) + ( ( 900.63941224838356 +
intermediate_der9636 * - 0.044484923911382625 ) + t577 *
0.00036936011832044979 ) * intermediate_der9635 ; intrm_sf_mf_976 = ( ( (
1074.1165326382641 + t889 * - 0.2214565261064495 ) + t580 *
0.00037212980109014541 ) * ( ( 1.0 - t878 ) - t892 ) + ( ( 1479.6504774711011
+ t889 * 1.2002114337048222 ) + t580 * - 0.00038614513167823636 ) * t878 ) +
( ( 900.63941224838356 + t889 * - 0.044484923911382625 ) + t580 *
0.00036936011832044979 ) * t892 ; tlu2_2d_linear_linear_value ( & sb_efOut [
0ULL ] , & t561 [ 0ULL ] , & t562 [ 0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [ 0ULL ] , & t36 [
0ULL ] , & t34 [ 0ULL ] ) ; t360 [ 0 ] = sb_efOut [ 0 ] ; intermediate_der381
= t360 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t31 .
mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , & t30 . mField1 [ 0ULL ] , &
t30 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33
[ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = tb_efOut [ 0 ] ;
intermediate_der246 = t406 [ 0ULL ] * 0.5 ; intermediate_der245 = t406 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t561 [ 0ULL ]
, & t562 [ 0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = ub_efOut [ 0 ] ; intermediate_der380 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & vb_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t30 . mField1 [ 0ULL ] , & t30 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = vb_efOut [ 0 ] ;
intermediate_der491 = t406 [ 0ULL ] * 0.5 ; intermediate_der669 = t406 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t561 [ 0ULL ]
, & t562 [ 0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = wb_efOut [ 0 ] ; intermediate_der670 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & xb_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t30 . mField1 [ 0ULL ] , & t30 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [ 0 ] = xb_efOut [ 0 ] ;
intermediate_der699 = t362 [ 0ULL ] * 0.5 ; intermediate_der700 = t362 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t561 [ 0ULL ]
, & t562 [ 0ULL ] , & t557 [ 0ULL ] , & t559 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = yb_efOut [ 0 ] ; intermediate_der242 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & ac_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t30 . mField1 [ 0ULL ] , & t30 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [ 0 ] = ac_efOut [ 0 ] ;
intermediate_der243 = t362 [ 0ULL ] * 0.5 ; intermediate_der244 = t362 [ 0ULL
] * 0.5 ; intermediate_der701 = - ( t1130 * t1130 * X [ 6ULL ] *
intermediate_der382 ) ; t711 =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ;
intermediate_der245 = intermediate_der700 - ( intermediate_der701 / ( t711 ==
0.0 ? 1.0E-16 : t711 ) * intermediate_der244 + ( t1130 * t1130 *
intermediate_der669 + t1130 * intermediate_der382 * intermediate_der245 * 2.0
) * X [ 6ULL ] / ( Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I
== 0.0 ? 1.0E-16 : Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I
) ) * 100000.0 ; intermediate_der246 = intermediate_der699 - (
intermediate_der701 / ( t711 == 0.0 ? 1.0E-16 : t711 ) * intermediate_der243
+ ( t1130 * t1130 * intermediate_der491 + t1130 * intermediate_der382 *
intermediate_der246 * 2.0 ) * X [ 6ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ) ) * 100000.0 ;
t1130 = intermediate_der670 - ( intermediate_der701 / ( t711 == 0.0 ? 1.0E-16
: t711 ) * intermediate_der242 + ( ( t1130 * t1130 * intermediate_der380 +
t1130 * intermediate_der382 * intermediate_der381 * 2.0 ) * X [ 6ULL ] +
t1130 * t1130 * intermediate_der382 ) / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ) ) * 100000.0 ;
tlu2_2d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t555 [ 0ULL ] , & t556
[ 0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t360 [
0 ] = bc_efOut [ 0 ] ; intermediate_der382 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t28 . mField1 [ 0ULL ] , & t28 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = cc_efOut [ 0 ] ;
intermediate_der381 = t406 [ 0ULL ] * 0.5 ; intermediate_der380 = t406 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t555 [ 0ULL ]
, & t556 [ 0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = dc_efOut [ 0 ] ; intermediate_der491 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & ec_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t28 . mField1 [ 0ULL ] , & t28 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = ec_efOut [ 0 ] ;
intermediate_der669 = t406 [ 0ULL ] * 0.5 ; intermediate_der670 = t406 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & fc_efOut [ 0ULL ] , & t555 [ 0ULL ]
, & t556 [ 0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = fc_efOut [ 0 ] ; intermediate_der699 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & gc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t28 . mField1 [ 0ULL ] , & t28 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [ 0 ] = gc_efOut [ 0 ] ;
intermediate_der700 = t362 [ 0ULL ] * 0.5 ; intermediate_der701 = t362 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t555 [ 0ULL ]
, & t556 [ 0ULL ] , & t551 [ 0ULL ] , & t553 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t360 [ 0 ] = hc_efOut [ 0 ] ; t711 = t360 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & ic_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t28 . mField1 [ 0ULL ] , & t28 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t361 [ 0 ] = ic_efOut [ 0 ] ; t712 = t361 [
0ULL ] * 0.5 ; t715 = t361 [ 0ULL ] * 0.5 ; t719 = - ( intermediate_der513 *
intermediate_der513 * X [ 9ULL ] * t678 ) ; t720 =
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I ;
intermediate_der380 = intermediate_der701 - ( t719 / ( t720 == 0.0 ? 1.0E-16
: t720 ) * t715 + ( intermediate_der513 * intermediate_der513 *
intermediate_der670 + intermediate_der513 * t678 * intermediate_der380 * 2.0
) * X [ 9ULL ] / ( Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I
== 0.0 ? 1.0E-16 : Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I
) ) * 100000.0 ; intermediate_der381 = intermediate_der700 - ( t719 / ( t720
== 0.0 ? 1.0E-16 : t720 ) * t712 + ( intermediate_der513 *
intermediate_der513 * intermediate_der669 + intermediate_der513 * t678 *
intermediate_der381 * 2.0 ) * X [ 9ULL ] / (
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I ) ) * 100000.0 ;
intermediate_der382 = intermediate_der699 - ( t719 / ( t720 == 0.0 ? 1.0E-16
: t720 ) * t711 + ( ( intermediate_der513 * intermediate_der513 *
intermediate_der491 + intermediate_der513 * t678 * intermediate_der382 * 2.0
) * X [ 9ULL ] + intermediate_der513 * intermediate_der513 * t678 ) / (
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I ) ) * 100000.0 ;
tlu2_2d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t549 [ 0ULL ] , & t550
[ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField9 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t361 [
0 ] = jc_efOut [ 0 ] ; intermediate_der513 = t361 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , & t26 . mField1 [ 0ULL ] , & t26 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [ 0 ] = kc_efOut [ 0 ] ; t678 = t362 [
0ULL ] * 0.5 ; intermediate_der491 = t362 [ 0ULL ] * 0.5 ;
tlu2_2d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t549 [ 0ULL ] , & t550
[ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [
0 ] = lc_efOut [ 0 ] ; intermediate_der669 = t362 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & mc_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , & t26 . mField1 [ 0ULL ] , & t26 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = mc_efOut [ 0 ] ;
intermediate_der670 = t406 [ 0ULL ] * 0.5 ; intermediate_der699 = t406 [ 0ULL
] * 0.5 ; tlu2_2d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t549 [ 0ULL ]
, & t550 [ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] )
; t362 [ 0 ] = nc_efOut [ 0 ] ; intermediate_der700 = t362 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & oc_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , & t26 . mField1 [ 0ULL ] , & t26 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = oc_efOut [ 0 ] ;
intermediate_der701 = t406 [ 0ULL ] * 0.5 ; t718 = t406 [ 0ULL ] * 0.5 ;
tlu2_2d_linear_linear_value ( & pc_efOut [ 0ULL ] , & t549 [ 0ULL ] , & t550
[ 0ULL ] , & t560 [ 0ULL ] , & t547 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t362 [
0 ] = pc_efOut [ 0 ] ; t719 = t362 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
qc_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ] , & t27 . mField2 [ 0ULL ] , &
t26 . mField1 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = qc_efOut [ 0 ] ; t720 = t406 [ 0ULL ] * 0.5 ; t721 = t406 [ 0ULL
] * 0.5 ; t728 = - ( t679 * t679 * X [ 11ULL ] * t1128 ) ; t729 =
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I *
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ; intermediate_der511 =
t718 - ( t728 / ( t729 == 0.0 ? 1.0E-16 : t729 ) * t721 + ( t679 * t679 *
intermediate_der699 + t679 * t1128 * intermediate_der491 * 2.0 ) * X [ 11ULL
] / ( Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I == 0.0 ? 1.0E-16
: Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ) ) * 100000.0 ; t678
= intermediate_der701 - ( t728 / ( t729 == 0.0 ? 1.0E-16 : t729 ) * t720 + (
t679 * t679 * intermediate_der670 + t679 * t1128 * t678 * 2.0 ) * X [ 11ULL ]
/ ( Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ) ) * 100000.0 ;
intermediate_der513 = intermediate_der700 - ( t728 / ( t729 == 0.0 ? 1.0E-16
: t729 ) * t719 + ( ( t679 * t679 * intermediate_der669 + t679 * t1128 *
intermediate_der513 * 2.0 ) * X [ 11ULL ] + t679 * t679 * t1128 ) / (
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ) ) * 100000.0 ; if ( X
[ 22ULL ] <= 0.0 ) { t1128 = 0.0 ; } else { t1128 = ( real_T ) ! ( X [ 22ULL
] >= 1.0 ) ; } if ( X [ 23ULL ] <= 0.0 ) { intermediate_der491 = 0.0 ; } else
{ intermediate_der491 = ( real_T ) ! ( X [ 23ULL ] >= 1.0 ) ; }
intermediate_der669 = - intermediate_der491 * 296.802103844292 +
intermediate_der491 * 4124.48151675695 ; intermediate_der670 = - t1128 *
296.802103844292 + t1128 * 461.523 ; intermediate_der699 = 1.0 / ( t875 ==
0.0 ? 1.0E-16 : t875 ) ; t739 = X [ 20ULL ] * X [ 20ULL ] * t1090 * t1090 ;
intermediate_der700 = - X [ 21ULL ] / ( t739 == 0.0 ? 1.0E-16 : t739 ) * X [
20ULL ] * intermediate_der670 ; intermediate_der701 = - X [ 21ULL ] / ( t739
== 0.0 ? 1.0E-16 : t739 ) * X [ 20ULL ] * intermediate_der669 ; t718 = - X [
21ULL ] / ( t739 == 0.0 ? 1.0E-16 : t739 ) * t1090 ; if ( X [ 20ULL ] <=
216.59999999999997 ) { t875 = 0.0 ; } else { t875 = ( real_T ) ! ( X [ 20ULL
] >= 623.15 ) ; } t643 = intermediate_der8165 * t875 * 2.0 ; if ( X [ 26ULL ]
<= 0.0 ) { t724 = 0.0 ; } else { t724 = ( real_T ) ! ( X [ 26ULL ] >= 1.0 ) ;
} if ( X [ 25ULL ] <= 0.0 ) { t727 = 0.0 ; } else { t727 = ( real_T ) ! ( X [
25ULL ] >= 1.0 ) ; } t728 = - t727 * 296.802103844292 + t727 *
4124.48151675695 ; t729 = - t724 * 296.802103844292 + t724 * 461.523 ; t730 =
1.0 / ( t686 == 0.0 ? 1.0E-16 : t686 ) ; t746 = X [ 24ULL ] * X [ 24ULL ] *
intrm_sf_mf_265 * intrm_sf_mf_265 ; t686 = - X [ 30ULL ] / ( t746 == 0.0 ?
1.0E-16 : t746 ) * X [ 24ULL ] * t729 ; t733 = - X [ 30ULL ] / ( t746 == 0.0
? 1.0E-16 : t746 ) * intrm_sf_mf_265 ; t736 = - X [ 30ULL ] / ( t746 == 0.0 ?
1.0E-16 : t746 ) * X [ 24ULL ] * t728 ; if ( X [ 24ULL ] <=
216.59999999999997 ) { t738 = 0.0 ; } else { t738 = ( real_T ) ! ( X [ 24ULL
] >= 623.15 ) ; } t646 = intermediate_der8539 * t738 * 2.0 ; if ( X [ 29ULL ]
<= 0.0 ) { t739 = 0.0 ; } else { t739 = ( real_T ) ! ( X [ 29ULL ] >= 1.0 ) ;
} if ( X [ 28ULL ] <= 0.0 ) { t745 = 0.0 ; } else { t745 = ( real_T ) ! ( X [
28ULL ] >= 1.0 ) ; } t746 = - t745 * 296.802103844292 + t745 *
4124.48151675695 ; intermediate_der1464 = - t739 * 296.802103844292 + t739 *
461.523 ; intermediate_der1507 = 1.0 / ( t688 == 0.0 ? 1.0E-16 : t688 ) ;
t753 = X [ 27ULL ] * X [ 27ULL ] * intrm_sf_mf_403 * intrm_sf_mf_403 ; t688 =
- X [ 32ULL ] / ( t753 == 0.0 ? 1.0E-16 : t753 ) * X [ 27ULL ] *
intermediate_der1464 ; intermediate_der1509 = - X [ 32ULL ] / ( t753 == 0.0 ?
1.0E-16 : t753 ) * X [ 27ULL ] * t746 ; intermediate_der1510 = - X [ 32ULL ]
/ ( t753 == 0.0 ? 1.0E-16 : t753 ) * intrm_sf_mf_403 ; if ( X [ 27ULL ] <=
216.59999999999997 ) { t752 = 0.0 ; } else { t752 = ( real_T ) ! ( X [ 27ULL
] >= 623.15 ) ; } t649 = intermediate_der8926 * t752 * 2.0 ; if ( X [ 35ULL ]
<= 0.0 ) { t753 = 0.0 ; } else { t753 = ( real_T ) ! ( X [ 35ULL ] >= 1.0 ) ;
} if ( X [ 34ULL ] <= 0.0 ) { intermediate_der1813 = 0.0 ; } else {
intermediate_der1813 = ( real_T ) ! ( X [ 34ULL ] >= 1.0 ) ; }
intermediate_der1814 = - intermediate_der1813 * 296.802103844292 +
intermediate_der1813 * 4124.48151675695 ; intermediate_der1815 = - t753 *
296.802103844292 + t753 * 461.523 ; intermediate_der1858 = 1.0 / ( t690 ==
0.0 ? 1.0E-16 : t690 ) ; t760 = X [ 33ULL ] * X [ 33ULL ] * intrm_sf_mf_542 *
intrm_sf_mf_542 ; t690 = - X [ 36ULL ] / ( t760 == 0.0 ? 1.0E-16 : t760 ) * X
[ 33ULL ] * intermediate_der1815 ; intermediate_der1860 = - X [ 36ULL ] / (
t760 == 0.0 ? 1.0E-16 : t760 ) * X [ 33ULL ] * intermediate_der1814 ;
intermediate_der1861 = - X [ 36ULL ] / ( t760 == 0.0 ? 1.0E-16 : t760 ) *
intrm_sf_mf_542 ; if ( X [ 33ULL ] <= 216.59999999999997 ) { t759 = 0.0 ; }
else { t759 = ( real_T ) ! ( X [ 33ULL ] >= 623.15 ) ; } t652 =
intermediate_der9285 * t759 * 2.0 ; if ( X [ 40ULL ] <= 0.0 ) { t760 = 0.0 ;
} else { t760 = ( real_T ) ! ( X [ 40ULL ] >= 1.0 ) ; } if ( X [ 41ULL ] <=
0.0 ) { intermediate_der2152 = 0.0 ; } else { intermediate_der2152 = ( real_T
) ! ( X [ 41ULL ] >= 1.0 ) ; } intermediate_der2153 = - intermediate_der2152
* 296.802103844292 + intermediate_der2152 * 259.836612622973 ;
intermediate_der2154 = - t760 * 296.802103844292 + t760 * 461.523 ;
intermediate_der2197 = 1.0 / ( t692 == 0.0 ? 1.0E-16 : t692 ) ; t767 = X [
38ULL ] * X [ 38ULL ] * intrm_sf_mf_692 * intrm_sf_mf_692 ; t692 = - X [
39ULL ] / ( t767 == 0.0 ? 1.0E-16 : t767 ) * X [ 38ULL ] *
intermediate_der2154 ; intermediate_der2199 = - X [ 39ULL ] / ( t767 == 0.0 ?
1.0E-16 : t767 ) * X [ 38ULL ] * intermediate_der2153 ; intermediate_der2200
= - X [ 39ULL ] / ( t767 == 0.0 ? 1.0E-16 : t767 ) * intrm_sf_mf_692 ; if ( X
[ 38ULL ] <= 216.59999999999997 ) { t766 = 0.0 ; } else { t766 = ( real_T ) !
( X [ 38ULL ] >= 623.15 ) ; } t655 = intermediate_der9636 * t766 * 2.0 ; if (
X [ 44ULL ] <= 0.0 ) { t767 = 0.0 ; } else { t767 = ( real_T ) ! ( X [ 44ULL
] >= 1.0 ) ; } if ( X [ 43ULL ] <= 0.0 ) { intermediate_der2608 = 0.0 ; }
else { intermediate_der2608 = ( real_T ) ! ( X [ 43ULL ] >= 1.0 ) ; }
intermediate_der2609 = - intermediate_der2608 * 296.802103844292 +
intermediate_der2608 * 259.836612622973 ; intermediate_der2610 = - t767 *
296.802103844292 + t767 * 461.523 ; intermediate_der2653 = 1.0 / ( t694 ==
0.0 ? 1.0E-16 : t694 ) ; intermediate_der7409 = X [ 42ULL ] * X [ 42ULL ] *
intrm_sf_mf_868 * intrm_sf_mf_868 ; t694 = - X [ 48ULL ] / (
intermediate_der7409 == 0.0 ? 1.0E-16 : intermediate_der7409 ) * X [ 42ULL ]
* intermediate_der2610 ; intermediate_der2655 = - X [ 48ULL ] / (
intermediate_der7409 == 0.0 ? 1.0E-16 : intermediate_der7409 ) * X [ 42ULL ]
* intermediate_der2609 ; intermediate_der2656 = - X [ 48ULL ] / (
intermediate_der7409 == 0.0 ? 1.0E-16 : intermediate_der7409 ) *
intrm_sf_mf_868 ; if ( X [ 42ULL ] <= 216.59999999999997 ) { t773 = 0.0 ; }
else { t773 = ( real_T ) ! ( X [ 42ULL ] >= 623.15 ) ; } t658 = t889 * t773 *
2.0 ; if ( X [ 47ULL ] <= 0.0 ) { intermediate_der7409 = 0.0 ; } else {
intermediate_der7409 = ( real_T ) ! ( X [ 47ULL ] >= 1.0 ) ; } if ( X [ 46ULL
] <= 0.0 ) { intermediate_der5679 = 0.0 ; } else { intermediate_der5679 = (
real_T ) ! ( X [ 46ULL ] >= 1.0 ) ; } intermediate_der2939 = -
intermediate_der5679 * 296.802103844292 + intermediate_der5679 *
259.836612622973 ; intermediate_der2940 = - intermediate_der7409 *
296.802103844292 + intermediate_der7409 * 461.523 ; intermediate_der2983 =
1.0 / ( t696 == 0.0 ? 1.0E-16 : t696 ) ; t781 = X [ 45ULL ] * X [ 45ULL ] *
intrm_sf_mf_1006 * intrm_sf_mf_1006 ; t696 = - X [ 49ULL ] / ( t781 == 0.0 ?
1.0E-16 : t781 ) * X [ 45ULL ] * intermediate_der2940 ; intermediate_der2985
= - X [ 49ULL ] / ( t781 == 0.0 ? 1.0E-16 : t781 ) * intrm_sf_mf_1006 ;
intermediate_der2986 = - X [ 49ULL ] / ( t781 == 0.0 ? 1.0E-16 : t781 ) * X [
45ULL ] * intermediate_der2939 ; if ( X [ 45ULL ] <= 216.59999999999997 ) {
t780 = 0.0 ; } else { t780 = ( real_T ) ! ( X [ 45ULL ] >= 623.15 ) ; } t857
= intermediate_der5680 * t780 * 2.0 ; if ( X [ 52ULL ] <= 0.0 ) { t781 = 0.0
; } else { t781 = ( real_T ) ! ( X [ 52ULL ] >= 1.0 ) ; } if ( X [ 51ULL ] <=
0.0 ) { intermediate_der7412 = 0.0 ; } else { intermediate_der7412 = ( real_T
) ! ( X [ 51ULL ] >= 1.0 ) ; } intermediate_der3290 = - intermediate_der7412
* 296.802103844292 + intermediate_der7412 * 259.836612622973 ;
intermediate_der3291 = - t781 * 296.802103844292 + t781 * 461.523 ;
intermediate_der3334 = 1.0 / ( t698 == 0.0 ? 1.0E-16 : t698 ) ;
intermediate_der3673 = X [ 50ULL ] * X [ 50ULL ] * intrm_sf_mf_1145 *
intrm_sf_mf_1145 ; t698 = - X [ 53ULL ] / ( intermediate_der3673 == 0.0 ?
1.0E-16 : intermediate_der3673 ) * X [ 50ULL ] * intermediate_der3291 ;
intermediate_der3336 = - X [ 53ULL ] / ( intermediate_der3673 == 0.0 ?
1.0E-16 : intermediate_der3673 ) * X [ 50ULL ] * intermediate_der3290 ;
intermediate_der3337 = - X [ 53ULL ] / ( intermediate_der3673 == 0.0 ?
1.0E-16 : intermediate_der3673 ) * intrm_sf_mf_1145 ; if ( X [ 50ULL ] <=
216.59999999999997 ) { t787 = 0.0 ; } else { t787 = ( real_T ) ! ( X [ 50ULL
] >= 623.15 ) ; } t858 = intermediate_der6074 * t787 * 2.0 ;
tlu2_2d_linear_linear_value ( & rc_efOut [ 0ULL ] , & t12 . mField1 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , & t14 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = rc_efOut [ 0 ] ;
intermediate_der3673 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
sc_efOut [ 0ULL ] , & t12 . mField1 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , &
t14 . mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField31 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = sc_efOut [ 0 ] ; intermediate_der3674 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t12 . mField1 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , & t14 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = tc_efOut [ 0 ] ;
intermediate_der3675 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
uc_efOut [ 0ULL ] , & t12 . mField1 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , &
t14 . mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = uc_efOut [ 0 ] ; intermediate_der3627 = t406 [ 0ULL ] ; t794 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 ; t1131 =
intermediate_der3675 - ( - ( t1131 * t1131 * X [ 55ULL ] *
intermediate_der3633 ) / ( t794 == 0.0 ? 1.0E-16 : t794 ) *
intermediate_der3627 + ( ( t1131 * t1131 * intermediate_der3674 + t1131 *
intermediate_der3633 * intermediate_der3673 * 2.0 ) * X [ 55ULL ] + t1131 *
t1131 * intermediate_der3633 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 ) )
* 100000.0 ; tlu2_2d_linear_linear_value ( & vc_efOut [ 0ULL ] , & t7 .
mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t87 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = vc_efOut [ 0 ] ;
intermediate_der3673 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
wc_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9
. mField1 [ 0ULL ] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField28 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [
0 ] = wc_efOut [ 0 ] ; intermediate_der3674 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t7 . mField1 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t87 [ 0ULL ] , & t90 [ 0ULL
] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = xc_efOut [ 0 ] ; intermediate_der3675 =
t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & yc_efOut [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField1 [ 0ULL ] , & t9 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t87 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = yc_efOut [ 0 ] ;
t681 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & ad_efOut [ 0ULL ] , &
t7 . mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL ] , &
t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87
[ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = ad_efOut [ 0 ] ;
t794 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & bd_efOut [ 0ULL ] , &
t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField1 [ 0ULL ] , &
t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87
[ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = bd_efOut [ 0 ] ;
t348_idx_0 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & cd_efOut [ 0ULL
] , & t7 . mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField0 [ 0ULL
] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 ,
& t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = cd_efOut [
0 ] ; t679 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & dd_efOut [ 0ULL
] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9 . mField1 [ 0ULL
] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 ,
& t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = dd_efOut [
0 ] ; intermediate_der3633 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
ed_efOut [ 0ULL ] , & t7 . mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t9
. mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField33 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [
0 ] = ed_efOut [ 0 ] ; intermediate_der3757 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & fd_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t9 . mField1 [ 0ULL ] , & t9 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t87 [ 0ULL ] , & t90 [ 0ULL
] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = fd_efOut [ 0 ] ; intermediate_der3699 =
t406 [ 0ULL ] ; t797 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ;
intermediate_der3758 = - X [ 57ULL ] / ( t797 == 0.0 ? 1.0E-16 : t797 ) *
t679 * 100.0 + intermediate_der3757 ; intermediate_der3757 = ( - X [ 57ULL ]
/ ( t797 == 0.0 ? 1.0E-16 : t797 ) * intermediate_der3633 + 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ) )
* 100.0 + intermediate_der3699 ; intermediate_der3699 = ( ( t348_idx_0 - (
t699 * intermediate_der3757 + intermediate_der3702 * intermediate_der3674 ) *
1000.0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 +
( intermediate_der3701 - t699 * intermediate_der3702 * 1000.0 ) *
intermediate_der3633 ) * 0.0040159681273635624 ; t348_idx_0 = ( ( t794 - (
t699 * intermediate_der3758 + intermediate_der3702 * intermediate_der3673 ) *
1000.0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 +
( intermediate_der3701 - t699 * intermediate_der3702 * 1000.0 ) * t679 ) *
0.0040159681273635624 ; t800 = - ( intermediate_der3702 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ) ; t801 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ;
intermediate_der3701 = ( ( t800 / ( t801 == 0.0 ? 1.0E-16 : t801 ) * t681 + (
intermediate_der3702 * intermediate_der3633 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 *
intermediate_der3757 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ) )
* 0.01 - X [ 58ULL ] * intermediate_der3674 ) * 0.0040159681273635624 ;
intermediate_der3702 = ( ( t800 / ( t801 == 0.0 ? 1.0E-16 : t801 ) *
intermediate_der3675 + ( intermediate_der3702 * t679 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 *
intermediate_der3758 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ) )
* 0.01 - ( X [ 58ULL ] * intermediate_der3673 + t699 ) ) *
0.0040159681273635624 ; tlu2_2d_linear_linear_value ( & gd_efOut [ 0ULL ] , &
t20 . mField1 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 ,
& t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = gd_efOut [
0 ] ; t794 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & hd_efOut [ 0ULL
] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField1 [
0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField28 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] =
hd_efOut [ 0 ] ; intermediate_der3757 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & id_efOut [ 0ULL ] , & t20 . mField1 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField31 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = id_efOut [ 0 ] ;
intermediate_der3758 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
jd_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , &
t10 . mField1 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField31 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = jd_efOut [ 0 ] ; t796 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & kd_efOut [ 0ULL ] , & t20 . mField1 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = kd_efOut [ 0 ] ; t797 = t406 [
0ULL ] ; tlu2_2d_linear_linear_value ( & ld_efOut [ 0ULL ] , & t20 . mField0
[ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField1 [ 0ULL ] , & t10 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField34 , & t87 [
0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = ld_efOut [ 0 ] ;
t800 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & md_efOut [ 0ULL ] , &
t20 . mField1 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 ,
& t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = md_efOut [
0 ] ; t802 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & nd_efOut [ 0ULL
] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t10 . mField1 [
0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField32 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] =
nd_efOut [ 0 ] ; t805 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
od_efOut [ 0ULL ] , & t20 . mField1 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , &
t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField33 , & t87 [ 0ULL ] , & t90 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = od_efOut [ 0 ] ; intermediate_der7415 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & pd_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t10 . mField1 [ 0ULL ] , & t10 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t87 [ 0ULL ] , &
t90 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = pd_efOut [ 0 ] ;
intermediate_der3784 = t406 [ 0ULL ] ; t807 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ;
intermediate_der4474 = - X [ 59ULL ] / ( t807 == 0.0 ? 1.0E-16 : t807 ) *
t802 * 100.0 + intermediate_der7415 ; intermediate_der7415 = ( - X [ 59ULL ]
/ ( t807 == 0.0 ? 1.0E-16 : t807 ) * t805 + 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) )
* 100.0 + intermediate_der3784 ; intermediate_der3784 = ( ( t800 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 *
intermediate_der7415 + intermediate_der3787 * intermediate_der3757 ) * 1000.0
) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 + (
intermediate_der3786 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 *
intermediate_der3787 * 1000.0 ) * t805 ) * 0.00093750000000000007 ; t800 = (
( t797 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 *
intermediate_der4474 + intermediate_der3787 * t794 ) * 1000.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 + (
intermediate_der3786 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 *
intermediate_der3787 * 1000.0 ) * t802 ) * 0.00093750000000000007 ; t810 = -
( intermediate_der3787 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) ; t811 =
t700 * t700 ; intermediate_der3786 = ( ( t810 / ( t811 == 0.0 ? 1.0E-16 :
t811 ) * t796 + ( intermediate_der3787 * t805 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
intermediate_der7415 ) / ( t700 == 0.0 ? 1.0E-16 : t700 ) ) * 0.01 - X [
60ULL ] * intermediate_der3757 ) * 0.00093750000000000007 ;
intermediate_der3787 = ( ( t810 / ( t811 == 0.0 ? 1.0E-16 : t811 ) *
intermediate_der3758 + ( intermediate_der3787 * t802 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
intermediate_der4474 ) / ( t700 == 0.0 ? 1.0E-16 : t700 ) ) * 0.01 - ( X [
60ULL ] * t794 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 ) ) *
0.00093750000000000007 ; if ( X [ 65ULL ] <= 0.0 ) { t797 = 0.0 ; } else {
t797 = ( real_T ) ! ( X [ 65ULL ] >= 1.0 ) ; } if ( X [ 64ULL ] <= 0.0 ) {
intermediate_der7415 = 0.0 ; } else { intermediate_der7415 = ( real_T ) ! ( X
[ 64ULL ] >= 1.0 ) ; } intermediate_der4474 = - intermediate_der7415 *
296.802103844292 + intermediate_der7415 * 4124.48151675695 ; t806 = - t797 *
296.802103844292 + t797 * 461.523 ; t807 = 1.0 / ( t703 == 0.0 ? 1.0E-16 :
t703 ) ; intermediate_der7432 = X [ 62ULL ] * X [ 62ULL ] * intrm_sf_mf_1382
* intrm_sf_mf_1382 ; t703 = - X [ 63ULL ] / ( intermediate_der7432 == 0.0 ?
1.0E-16 : intermediate_der7432 ) * X [ 62ULL ] * t806 ; t810 = - X [ 63ULL ]
/ ( intermediate_der7432 == 0.0 ? 1.0E-16 : intermediate_der7432 ) * X [
62ULL ] * intermediate_der4474 ; t812 = - X [ 63ULL ] / (
intermediate_der7432 == 0.0 ? 1.0E-16 : intermediate_der7432 ) *
intrm_sf_mf_1382 ; if ( X [ 62ULL ] <= 216.59999999999997 ) { t815 = 0.0 ; }
else { t815 = ( real_T ) ! ( X [ 62ULL ] >= 623.15 ) ; } t667 =
intermediate_der6639 * t815 * 2.0 ; if ( X [ 68ULL ] <= 0.0 ) { t817 = 0.0 ;
} else { t817 = ( real_T ) ! ( X [ 68ULL ] >= 1.0 ) ; } if ( X [ 69ULL ] <=
0.0 ) { intermediate_der7432 = 0.0 ; } else { intermediate_der7432 = ( real_T
) ! ( X [ 69ULL ] >= 1.0 ) ; } intermediate_der4549 = - intermediate_der7432
* 296.802103844292 + intermediate_der7432 * 4124.48151675695 ;
intermediate_der4550 = - t817 * 296.802103844292 + t817 * 461.523 ;
intermediate_der4593 = 1.0 / ( t705 == 0.0 ? 1.0E-16 : t705 ) ; t825 = X [
66ULL ] * X [ 66ULL ] * intrm_sf_mf_1401 * intrm_sf_mf_1401 ; t705 = - X [
67ULL ] / ( t825 == 0.0 ? 1.0E-16 : t825 ) * X [ 66ULL ] *
intermediate_der4550 ; intermediate_der4595 = - X [ 67ULL ] / ( t825 == 0.0 ?
1.0E-16 : t825 ) * X [ 66ULL ] * intermediate_der4549 ; intermediate_der4596
= - X [ 67ULL ] / ( t825 == 0.0 ? 1.0E-16 : t825 ) * intrm_sf_mf_1401 ; if (
X [ 66ULL ] <= 216.59999999999997 ) { intermediate_der7433 = 0.0 ; } else {
intermediate_der7433 = ( real_T ) ! ( X [ 66ULL ] >= 623.15 ) ; } t670 =
intermediate_der6947 * intermediate_der7433 * 2.0 ; if ( X [ 72ULL ] <= 0.0 )
{ t825 = 0.0 ; } else { t825 = ( real_T ) ! ( X [ 72ULL ] >= 1.0 ) ; } if ( X
[ 71ULL ] <= 0.0 ) { intermediate_der7421 = 0.0 ; } else {
intermediate_der7421 = ( real_T ) ! ( X [ 71ULL ] >= 1.0 ) ; }
intermediate_der5094 = - intermediate_der7421 * 296.802103844292 +
intermediate_der7421 * 259.836612622973 ; intermediate_der5095 = - t825 *
296.802103844292 + t825 * 461.523 ; intermediate_der5096 = 1.0 / ( t707 ==
0.0 ? 1.0E-16 : t707 ) ; t832 = X [ 70ULL ] * X [ 70ULL ] * intrm_sf_mf_1637
* intrm_sf_mf_1637 ; t707 = - X [ 54ULL ] / ( t832 == 0.0 ? 1.0E-16 : t832 )
* X [ 70ULL ] * intermediate_der5094 ; intermediate_der5098 = - X [ 54ULL ] /
( t832 == 0.0 ? 1.0E-16 : t832 ) * X [ 70ULL ] * intermediate_der5095 ;
intermediate_der5099 = - X [ 54ULL ] / ( t832 == 0.0 ? 1.0E-16 : t832 ) *
intrm_sf_mf_1637 ; if ( X [ 70ULL ] <= 216.59999999999997 ) { t831 = 0.0 ; }
else { t831 = ( real_T ) ! ( X [ 70ULL ] >= 623.15 ) ; } t673 =
intermediate_der7189 * t831 * 2.0 ; if ( X [ 75ULL ] <= 0.0 ) { t832 = 0.0 ;
} else { t832 = ( real_T ) ! ( X [ 75ULL ] >= 1.0 ) ; } if ( X [ 74ULL ] <=
0.0 ) { intermediate_der7427 = 0.0 ; } else { intermediate_der7427 = ( real_T
) ! ( X [ 74ULL ] >= 1.0 ) ; } intermediate_der5188 = - intermediate_der7427
* 296.802103844292 + intermediate_der7427 * 4124.48151675695 ;
intermediate_der5189 = - t832 * 296.802103844292 + t832 * 461.523 ;
intermediate_der5190 = 1.0 / ( t709 == 0.0 ? 1.0E-16 : t709 ) ; t839 = X [
73ULL ] * X [ 73ULL ] * intrm_sf_mf_1662 * intrm_sf_mf_1662 ; t709 = - X [
37ULL ] / ( t839 == 0.0 ? 1.0E-16 : t839 ) * X [ 73ULL ] *
intermediate_der5189 ; intermediate_der5192 = - X [ 37ULL ] / ( t839 == 0.0 ?
1.0E-16 : t839 ) * X [ 73ULL ] * intermediate_der5188 ; intermediate_der5193
= - X [ 37ULL ] / ( t839 == 0.0 ? 1.0E-16 : t839 ) * intrm_sf_mf_1662 ; if (
X [ 73ULL ] <= 216.59999999999997 ) { t838 = 0.0 ; } else { t838 = ( real_T )
! ( X [ 73ULL ] >= 623.15 ) ; } t676 = intermediate_der7223 * t838 * 2.0 ;
t839 = - intermediate_der5679 * ( ( 1074.1165326382641 + intermediate_der5680
* - 0.2214565261064495 ) + t583 * 0.00037212980109014541 ) + ( (
900.63941224838356 + intermediate_der5680 * - 0.044484923911382625 ) + t583 *
0.00036936011832044979 ) * intermediate_der5679 ; intermediate_der5679 = -
intermediate_der7409 * ( ( 1074.1165326382641 + intermediate_der5680 * -
0.2214565261064495 ) + t583 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der5680 * 1.2002114337048222 ) + t583 * -
0.00038614513167823636 ) * intermediate_der7409 ; intermediate_der5680 = ( (
t780 * - 0.2214565261064495 + t857 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der6072 ) - intermediate_der6073 ) + ( t780 * 1.2002114337048222
+ t857 * - 0.00038614513167823636 ) * intermediate_der6072 ) + ( t780 * -
0.044484923911382625 + t857 * 0.00036936011832044979 ) * intermediate_der6073
; intermediate_der6072 = - intermediate_der7412 * ( ( 1074.1165326382641 +
intermediate_der6074 * - 0.2214565261064495 ) + t586 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der6074 * - 0.044484923911382625 )
+ t586 * 0.00036936011832044979 ) * intermediate_der7412 ;
intermediate_der6073 = - t781 * ( ( 1074.1165326382641 + intermediate_der6074
* - 0.2214565261064495 ) + t586 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der6074 * 1.2002114337048222 ) + t586 * -
0.00038614513167823636 ) * t781 ; intermediate_der6074 = ( ( t787 * -
0.2214565261064495 + t858 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der6637 ) - intermediate_der6638 ) + ( t787 * 1.2002114337048222
+ t858 * - 0.00038614513167823636 ) * intermediate_der6637 ) + ( t787 * -
0.044484923911382625 + t858 * 0.00036936011832044979 ) * intermediate_der6638
; intermediate_der6637 = - intermediate_der7415 * ( ( 1074.1165326382641 +
intermediate_der6639 * - 0.2214565261064495 ) + t589 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der6639 * 6.9647057412840034 ) +
t589 * - 0.0070524868246844051 ) * intermediate_der7415 ;
intermediate_der6638 = - t797 * ( ( 1074.1165326382641 + intermediate_der6639
* - 0.2214565261064495 ) + t589 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der6639 * 1.2002114337048222 ) + t589 * -
0.00038614513167823636 ) * t797 ; intermediate_der6639 = ( ( t815 * -
0.2214565261064495 + t667 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der6945 ) - intermediate_der6946 ) + ( t815 * 1.2002114337048222
+ t667 * - 0.00038614513167823636 ) * intermediate_der6945 ) + ( t815 *
6.9647057412840034 + t667 * - 0.0070524868246844051 ) * intermediate_der6946
; intermediate_der6945 = - intermediate_der7432 * ( ( 1074.1165326382641 +
intermediate_der6947 * - 0.2214565261064495 ) + t850 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der6947 * 6.9647057412840034 ) +
t850 * - 0.0070524868246844051 ) * intermediate_der7432 ;
intermediate_der6946 = - t817 * ( ( 1074.1165326382641 + intermediate_der6947
* - 0.2214565261064495 ) + t850 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der6947 * 1.2002114337048222 ) + t850 * -
0.00038614513167823636 ) * t817 ; intermediate_der6947 = ( (
intermediate_der7433 * - 0.2214565261064495 + t670 * 0.00037212980109014541 )
* ( ( 1.0 - intermediate_der7187 ) - intermediate_der7188 ) + (
intermediate_der7433 * 1.2002114337048222 + t670 * - 0.00038614513167823636 )
* intermediate_der7187 ) + ( intermediate_der7433 * 6.9647057412840034 + t670
* - 0.0070524868246844051 ) * intermediate_der7188 ; intermediate_der7187 = -
intermediate_der7421 * ( ( 1074.1165326382641 + intermediate_der7189 * -
0.2214565261064495 ) + t845 * 0.00037212980109014541 ) + ( (
900.63941224838356 + intermediate_der7189 * - 0.044484923911382625 ) + t845 *
0.00036936011832044979 ) * intermediate_der7421 ; intermediate_der7188 = -
t825 * ( ( 1074.1165326382641 + intermediate_der7189 * - 0.2214565261064495 )
+ t845 * 0.00037212980109014541 ) + ( ( 1479.6504774711011 +
intermediate_der7189 * 1.2002114337048222 ) + t845 * - 0.00038614513167823636
) * t825 ; intermediate_der7189 = ( ( t831 * - 0.2214565261064495 + t673 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der7221 ) -
intermediate_der7222 ) + ( t831 * 1.2002114337048222 + t673 * -
0.00038614513167823636 ) * intermediate_der7221 ) + ( t831 * -
0.044484923911382625 + t673 * 0.00036936011832044979 ) * intermediate_der7222
; intermediate_der7221 = - intermediate_der7427 * ( ( 1074.1165326382641 +
intermediate_der7223 * - 0.2214565261064495 ) + t847 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der7223 * 6.9647057412840034 ) +
t847 * - 0.0070524868246844051 ) * intermediate_der7427 ;
intermediate_der7222 = - t832 * ( ( 1074.1165326382641 + intermediate_der7223
* - 0.2214565261064495 ) + t847 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der7223 * 1.2002114337048222 ) + t847 * -
0.00038614513167823636 ) * t832 ; intermediate_der7223 = ( ( t838 * -
0.2214565261064495 + t676 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7407 ) - intermediate_der7408 ) + ( t838 * 1.2002114337048222
+ t676 * - 0.00038614513167823636 ) * intermediate_der7407 ) + ( t838 *
6.9647057412840034 + t676 * - 0.0070524868246844051 ) * intermediate_der7408
; t847 = X [ 14ULL ] * X [ 14ULL ] ; intermediate_der7408 = - ( X [ 152ULL ]
* X [ 155ULL ] * 0.001 ) / ( t847 == 0.0 ? 1.0E-16 : t847 ) * 1.0E-5 ; t847 =
X [ 7ULL ] * X [ 7ULL ] ; t850 = X [ 7ULL ] * 287.0 ; t858 = X [ 7ULL ] * X [
7ULL ] * 82369.0 ; tlu2_2d_linear_linear_value ( & qd_efOut [ 0ULL ] , & t16
. mField1 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , &
t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , &
t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = qd_efOut [ 0
] ; intermediate_der7432 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
rd_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , &
t19 . mField1 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField11 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = rd_efOut [ 0 ] ; intermediate_der7433 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & sd_efOut [ 0ULL ] , & t16 . mField1 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = sd_efOut [ 0 ] ; t825 = t406 [
0ULL ] ; tlu2_2d_linear_linear_value ( & td_efOut [ 0ULL ] , & t16 . mField0
[ 0ULL ] , & t16 . mField2 [ 0ULL ] , & t19 . mField1 [ 0ULL ] , & t19 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t33 [
0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = td_efOut [ 0 ] ;
intermediate_der7421 = t406 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
ud_efOut [ 0ULL ] , & t16 . mField1 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , &
t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField10 , & t33 [ 0ULL ] , & t36 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t406 [ 0 ] = ud_efOut [ 0 ] ; t831 = t406 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & vd_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , & t19 . mField1 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t33 [ 0ULL ] , &
t36 [ 0ULL ] , & t34 [ 0ULL ] ) ; t406 [ 0 ] = vd_efOut [ 0 ] ; t832 = t406 [
0ULL ] ; t586 = t682 * intermediate_der7717 * 0.005 ; t589 = t682 * X [
158ULL ] * intermediate_der7432 * 0.005 ; intermediate_der7432 = t682 * X [
158ULL ] * intermediate_der7433 * 0.005 ; intermediate_der7433 = X [ 158ULL ]
* - 0.2 * intermediate_der7717 * 0.005 ; intermediate_der7717 = -
intermediate_der491 * ( ( 1074.1165326382641 + intermediate_der8165 * -
0.2214565261064495 ) + t565 * 0.00037212980109014541 ) + ( (
12825.281119789837 + intermediate_der8165 * 6.9647057412840034 ) + t565 * -
0.0070524868246844051 ) * intermediate_der491 ; intermediate_der491 = ( (
t875 * - 0.2214565261064495 + t643 * 0.00037212980109014541 ) * ( ( 1.0 -
t1118 ) - t1110 ) + ( t875 * 1.2002114337048222 + t643 * -
0.00038614513167823636 ) * t1118 ) + ( t875 * 6.9647057412840034 + t643 * -
0.0070524868246844051 ) * t1110 ; t1118 = - t1128 * ( ( 1074.1165326382641 +
intermediate_der8165 * - 0.2214565261064495 ) + t565 * 0.00037212980109014541
) + ( ( 1479.6504774711011 + intermediate_der8165 * 1.2002114337048222 ) +
t565 * - 0.00038614513167823636 ) * t1128 ; t1128 = - t727 * ( (
1074.1165326382641 + intermediate_der8539 * - 0.2214565261064495 ) + t568 *
0.00037212980109014541 ) + ( ( 12825.281119789837 + intermediate_der8539 *
6.9647057412840034 ) + t568 * - 0.0070524868246844051 ) * t727 ; t1110 = -
t724 * ( ( 1074.1165326382641 + intermediate_der8539 * - 0.2214565261064495 )
+ t568 * 0.00037212980109014541 ) + ( ( 1479.6504774711011 +
intermediate_der8539 * 1.2002114337048222 ) + t568 * - 0.00038614513167823636
) * t724 ; intermediate_der8165 = ( ( t738 * - 0.2214565261064495 + t646 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der8537 ) -
intermediate_der8538 ) + ( t738 * 1.2002114337048222 + t646 * -
0.00038614513167823636 ) * intermediate_der8537 ) + ( t738 *
6.9647057412840034 + t646 * - 0.0070524868246844051 ) * intermediate_der8538
; intermediate_der8537 = - t745 * ( ( 1074.1165326382641 +
intermediate_der8926 * - 0.2214565261064495 ) + t571 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der8926 * 6.9647057412840034 ) +
t571 * - 0.0070524868246844051 ) * t745 ; intermediate_der8538 = - t739 * ( (
1074.1165326382641 + intermediate_der8926 * - 0.2214565261064495 ) + t571 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + intermediate_der8926 *
1.2002114337048222 ) + t571 * - 0.00038614513167823636 ) * t739 ;
intermediate_der8539 = ( ( t752 * - 0.2214565261064495 + t649 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der8924 ) -
intermediate_der8925 ) + ( t752 * 1.2002114337048222 + t649 * -
0.00038614513167823636 ) * intermediate_der8924 ) + ( t752 *
6.9647057412840034 + t649 * - 0.0070524868246844051 ) * intermediate_der8925
; intermediate_der8924 = - intermediate_der1813 * ( ( 1074.1165326382641 +
intermediate_der9285 * - 0.2214565261064495 ) + t574 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der9285 * 6.9647057412840034 ) +
t574 * - 0.0070524868246844051 ) * intermediate_der1813 ;
intermediate_der8925 = - t753 * ( ( 1074.1165326382641 + intermediate_der9285
* - 0.2214565261064495 ) + t574 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der9285 * 1.2002114337048222 ) + t574 * -
0.00038614513167823636 ) * t753 ; intermediate_der8926 = ( ( t759 * -
0.2214565261064495 + t652 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der9283 ) - intermediate_der9284 ) + ( t759 * 1.2002114337048222
+ t652 * - 0.00038614513167823636 ) * intermediate_der9283 ) + ( t759 *
6.9647057412840034 + t652 * - 0.0070524868246844051 ) * intermediate_der9284
; intermediate_der9283 = - intermediate_der2152 * ( ( 1074.1165326382641 +
intermediate_der9636 * - 0.2214565261064495 ) + t577 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der9636 * - 0.044484923911382625 )
+ t577 * 0.00036936011832044979 ) * intermediate_der2152 ;
intermediate_der9284 = - t760 * ( ( 1074.1165326382641 + intermediate_der9636
* - 0.2214565261064495 ) + t577 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der9636 * 1.2002114337048222 ) + t577 * -
0.00038614513167823636 ) * t760 ; intermediate_der9285 = ( ( t766 * -
0.2214565261064495 + t655 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der9634 ) - intermediate_der9635 ) + ( t766 * 1.2002114337048222
+ t655 * - 0.00038614513167823636 ) * intermediate_der9634 ) + ( t766 * -
0.044484923911382625 + t655 * 0.00036936011832044979 ) * intermediate_der9635
; intermediate_der9634 = - intermediate_der2608 * ( ( 1074.1165326382641 +
t889 * - 0.2214565261064495 ) + t580 * 0.00037212980109014541 ) + ( (
900.63941224838356 + t889 * - 0.044484923911382625 ) + t580 *
0.00036936011832044979 ) * intermediate_der2608 ; intermediate_der9635 = -
t767 * ( ( 1074.1165326382641 + t889 * - 0.2214565261064495 ) + t580 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + t889 * 1.2002114337048222
) + t580 * - 0.00038614513167823636 ) * t767 ; intermediate_der9636 = ( (
t773 * - 0.2214565261064495 + t658 * 0.00037212980109014541 ) * ( ( 1.0 -
t878 ) - t892 ) + ( t773 * 1.2002114337048222 + t658 * -
0.00038614513167823636 ) * t878 ) + ( t773 * - 0.044484923911382625 + t658 *
0.00036936011832044979 ) * t892 ; t407 [ 0ULL ] = - ( - ( X [ 152ULL ] *
0.001 ) * X [ 155ULL ] ) / ( t847 == 0.0 ? 1.0E-16 : t847 ) /
1.1843079200592157 ; t407 [ 1ULL ] = - ( ( 1.0 / ( X [ 7ULL ] == 0.0 ?
1.0E-16 : X [ 7ULL ] ) + - ( X [ 7ULL ] + 126.84999999999997 ) / ( t847 ==
0.0 ? 1.0E-16 : t847 ) ) * 1000.0 ) * X [ 155ULL ] * X [ 152ULL ] * 0.001 *
0.001 ; t407 [ 2ULL ] = - ( t682 * X [ 155ULL ] * intrm_sf_mf_1795 * 0.005 )
; t407 [ 3ULL ] = ( t682 * X [ 155ULL ] * 0.005 / ( intrm_sf_mf_1796 == 0.0 ?
1.0E-16 : intrm_sf_mf_1796 ) * 0.01 + ( - ( X [ 7ULL ] + 126.84999999999997 )
/ ( t858 == 0.0 ? 1.0E-16 : t858 ) * 287.0 + 1.0 / ( t850 == 0.0 ? 1.0E-16 :
t850 ) ) * X [ 152ULL ] ) * 100.0 ; t408 [ 0ULL ] = - ( t682 * X [ 155ULL ] *
t825 * 0.005 ) / 1.1843079200592157 ; t408 [ 1ULL ] = - ( ( X [ 7ULL ] +
126.84999999999997 ) * t682 * X [ 155ULL ] * t825 * 0.005 ) ; t408 [ 2ULL ] =
t589 * 0.001 ; t878 = - ( t682 * X [ 155ULL ] * 0.005 ) ; t892 =
intrm_sf_mf_1796 * intrm_sf_mf_1796 ; t408 [ 3ULL ] = t878 / ( t892 == 0.0 ?
1.0E-16 : t892 ) * t831 / 1.1843079200592157 ; t889 = - ( ( X [ 7ULL ] +
126.84999999999997 ) * t682 * X [ 155ULL ] * 0.005 ) ; t408 [ 4ULL ] = t889 /
( t892 == 0.0 ? 1.0E-16 : t892 ) * t831 ; t408 [ 5ULL ] = ( -
intrm_sf_mf_1795 + - t825 * X [ 8ULL ] ) * t682 * 0.005 * 100.0 ; t409 [ 0ULL
] = - ( t682 * X [ 155ULL ] * intermediate_der7421 * 0.005 ) /
1.1843079200592157 ; t409 [ 1ULL ] = - ( ( X [ 7ULL ] + 126.84999999999997 )
* t682 * X [ 155ULL ] * intermediate_der7421 * 0.005 ) ; t409 [ 2ULL ] =
intermediate_der7432 * 0.001 ; t409 [ 3ULL ] = ( t878 / ( t892 == 0.0 ?
1.0E-16 : t892 ) * t832 * 1.0E-5 + intermediate_der7408 ) * 100000.0 /
1.1843079200592157 ; t409 [ 4ULL ] = t889 / ( t892 == 0.0 ? 1.0E-16 : t892 )
* t832 ; t409 [ 5ULL ] = - intermediate_der7421 * X [ 8ULL ] * t682 * 0.005 *
100.0 ; t892 = X [ 20ULL ] * X [ 20ULL ] ; t410 [ 0ULL ] = ( - ( 1.0 / ( X [
20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * t718 + - ( - 1.0 / ( t892 == 0.0
? 1.0E-16 : t892 ) ) * t1085 ) * 7.8539816339744828 / 12.896402563644669 ;
t410 [ 1ULL ] = ( ( intrm_sf_mf_197 - t1090 ) * t718 + t1085 *
intermediate_der491 ) * 0.0078539816339744835 / 2246.65922904024 ; t410 [
2ULL ] = 1.0 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) * t718 *
7.8539816339744828 / 12.896402563644669 ; t410 [ 3ULL ] = t718 *
7.8539816339744828 ; t410 [ 4ULL ] = t718 * 7.8539816339744828 ; t411 [ 0ULL
] = - ( 1.0 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) *
intermediate_der699 * 7.8539816339744828 / 12.896402563644669 ; t411 [ 1ULL ]
= ( intrm_sf_mf_197 - t1090 ) * intermediate_der699 * 0.0078539816339744835 /
2246.65922904024 ; t892 = X [ 21ULL ] * X [ 21ULL ] ; t411 [ 2ULL ] = ( 1.0 /
( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) * intermediate_der699 + - 1.0
/ ( t892 == 0.0 ? 1.0E-16 : t892 ) * t1085 ) * 7.8539816339744828 /
12.896402563644669 ; t411 [ 3ULL ] = intermediate_der699 * 7.8539816339744828
; t411 [ 4ULL ] = intermediate_der699 * 7.8539816339744828 ; t412 [ 0ULL ] =
- ( 1.0 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) *
intermediate_der700 * 7.8539816339744828 / 12.896402563644669 ; t412 [ 1ULL ]
= ( ( intrm_sf_mf_197 - t1090 ) * intermediate_der700 + ( t1118 -
intermediate_der670 ) * t1085 ) * 0.0078539816339744835 / 2246.65922904024 ;
t412 [ 2ULL ] = 1.0 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) *
intermediate_der700 * 7.8539816339744828 / 12.896402563644669 ; t412 [ 3ULL ]
= intermediate_der700 * 7.8539816339744828 ; t412 [ 4ULL ] =
intermediate_der700 * 7.8539816339744828 ; t413 [ 0ULL ] = - ( 1.0 / ( X [
20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * intermediate_der701 *
7.8539816339744828 / 12.896402563644669 ; t413 [ 1ULL ] = ( ( intrm_sf_mf_197
- t1090 ) * intermediate_der701 + ( intermediate_der7717 -
intermediate_der669 ) * t1085 ) * 0.0078539816339744835 / 2246.65922904024 ;
t413 [ 2ULL ] = 1.0 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) *
intermediate_der701 * 7.8539816339744828 / 12.896402563644669 ; t413 [ 3ULL ]
= intermediate_der701 * 7.8539816339744828 ; t413 [ 4ULL ] =
intermediate_der701 * 7.8539816339744828 ; t1090 = X [ 24ULL ] * X [ 24ULL ]
; t414 [ 0ULL ] = ( - ( 1.0 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] )
) * t733 + - ( - 1.0 / ( t1090 == 0.0 ? 1.0E-16 : t1090 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ) *
2677.3120849090419 / 12.896402563644669 ; t414 [ 1ULL ] = ( ( intrm_sf_mf_373
- intrm_sf_mf_265 ) * t733 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 *
intermediate_der8165 ) * 2.6773120849090417 / 2246.65922904024 ; t414 [ 2ULL
] = t733 * 2677.3120849090419 ; t414 [ 3ULL ] = t733 * 2677.3120849090419 ;
t414 [ 4ULL ] = 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) * t733 *
2677.3120849090419 / 12.896402563644669 ; t415 [ 0ULL ] = - ( 1.0 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * t736 * 2677.3120849090419 /
12.896402563644669 ; t415 [ 1ULL ] = ( ( intrm_sf_mf_373 - intrm_sf_mf_265 )
* t736 + ( t1128 - t728 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ) *
2.6773120849090417 / 2246.65922904024 ; t415 [ 2ULL ] = t736 *
2677.3120849090419 ; t415 [ 3ULL ] = t736 * 2677.3120849090419 ; t415 [ 4ULL
] = 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) * t736 *
2677.3120849090419 / 12.896402563644669 ; t416 [ 0ULL ] = - ( 1.0 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * t686 * 2677.3120849090419 /
12.896402563644669 ; t416 [ 1ULL ] = ( ( intrm_sf_mf_373 - intrm_sf_mf_265 )
* t686 + ( t1110 - t729 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ) *
2.6773120849090417 / 2246.65922904024 ; t416 [ 2ULL ] = t686 *
2677.3120849090419 ; t416 [ 3ULL ] = t686 * 2677.3120849090419 ; t416 [ 4ULL
] = 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) * t686 *
2677.3120849090419 / 12.896402563644669 ; t1110 = X [ 27ULL ] * X [ 27ULL ] ;
t417 [ 0ULL ] = ( - ( 1.0 / ( X [ 27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) )
* intermediate_der1510 + - ( - 1.0 / ( t1110 == 0.0 ? 1.0E-16 : t1110 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ) *
2677.3120849090419 / 13.896402563644669 ; t417 [ 1ULL ] = ( ( intrm_sf_mf_511
- intrm_sf_mf_403 ) * intermediate_der1510 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 *
intermediate_der8539 ) * 2.6773120849090417 / 2448.8207083326588 ; t417 [
2ULL ] = intermediate_der1510 * 2677.3120849090419 ; t417 [ 3ULL ] =
intermediate_der1510 * 2677.3120849090419 ; t417 [ 4ULL ] = 1.0 / ( X [ 32ULL
] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) * intermediate_der1510 *
2677.3120849090419 / 13.896402563644669 ; t418 [ 0ULL ] = - ( 1.0 / ( X [
27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) * intermediate_der1509 *
2677.3120849090419 / 13.896402563644669 ; t418 [ 1ULL ] = ( ( intrm_sf_mf_511
- intrm_sf_mf_403 ) * intermediate_der1509 + ( intermediate_der8537 - t746 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ) *
2.6773120849090417 / 2448.8207083326588 ; t418 [ 2ULL ] =
intermediate_der1509 * 2677.3120849090419 ; t418 [ 3ULL ] =
intermediate_der1509 * 2677.3120849090419 ; t418 [ 4ULL ] = 1.0 / ( X [ 32ULL
] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) * intermediate_der1509 *
2677.3120849090419 / 13.896402563644669 ; t419 [ 0ULL ] = - ( 1.0 / ( X [
27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) * t688 * 2677.3120849090419 /
13.896402563644669 ; t419 [ 1ULL ] = ( ( intrm_sf_mf_511 - intrm_sf_mf_403 )
* t688 + ( intermediate_der8538 - intermediate_der1464 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ) *
2.6773120849090417 / 2448.8207083326588 ; t419 [ 2ULL ] = t688 *
2677.3120849090419 ; t419 [ 3ULL ] = t688 * 2677.3120849090419 ; t419 [ 4ULL
] = 1.0 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) * t688 *
2677.3120849090419 / 13.896402563644669 ; t420 [ 0ULL ] = - ( 1.0 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * t730 * 2677.3120849090419 /
12.896402563644669 ; t420 [ 1ULL ] = ( intrm_sf_mf_373 - intrm_sf_mf_265 ) *
t730 * 2.6773120849090417 / 2246.65922904024 ; t420 [ 2ULL ] = t730 *
2677.3120849090419 ; t420 [ 3ULL ] = t730 * 2677.3120849090419 ; t1118 = X [
30ULL ] * X [ 30ULL ] ; t420 [ 4ULL ] = ( 1.0 / ( X [ 30ULL ] == 0.0 ?
1.0E-16 : X [ 30ULL ] ) * t730 + - 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi41 ) *
2677.3120849090419 / 12.896402563644669 ; t421 [ 0ULL ] = - ( 1.0 / ( X [
27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) * intermediate_der1507 *
2677.3120849090419 / 13.896402563644669 ; t421 [ 1ULL ] = ( intrm_sf_mf_511 -
intrm_sf_mf_403 ) * intermediate_der1507 * 2.6773120849090417 /
2448.8207083326588 ; t421 [ 2ULL ] = intermediate_der1507 *
2677.3120849090419 ; t421 [ 3ULL ] = intermediate_der1507 *
2677.3120849090419 ; t1128 = X [ 32ULL ] * X [ 32ULL ] ; t421 [ 4ULL ] = (
1.0 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) * intermediate_der1507 +
- 1.0 / ( t1128 == 0.0 ? 1.0E-16 : t1128 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi97 ) *
2677.3120849090419 / 13.896402563644669 ; t1118 = X [ 33ULL ] * X [ 33ULL ] ;
t422 [ 0ULL ] = ( - ( 1.0 / ( X [ 33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) )
* intermediate_der1861 + - ( - 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ) *
49.087385212340521 / 12.896402563644669 ; t422 [ 1ULL ] = ( ( intrm_sf_mf_650
- intrm_sf_mf_542 ) * intermediate_der1861 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 *
intermediate_der8926 ) * 0.049087385212340524 / 2246.65922904024 ; t422 [
2ULL ] = intermediate_der1861 * 49.087385212340521 ; t422 [ 3ULL ] =
intermediate_der1861 * 49.087385212340521 ; t422 [ 4ULL ] = 1.0 / ( X [ 36ULL
] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) * intermediate_der1861 *
49.087385212340521 / 12.896402563644669 ; t423 [ 0ULL ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) * intermediate_der1860 *
49.087385212340521 / 12.896402563644669 ; t423 [ 1ULL ] = ( ( intrm_sf_mf_650
- intrm_sf_mf_542 ) * intermediate_der1860 + ( intermediate_der8924 -
intermediate_der1814 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ) *
0.049087385212340524 / 2246.65922904024 ; t423 [ 2ULL ] =
intermediate_der1860 * 49.087385212340521 ; t423 [ 3ULL ] =
intermediate_der1860 * 49.087385212340521 ; t423 [ 4ULL ] = 1.0 / ( X [ 36ULL
] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) * intermediate_der1860 *
49.087385212340521 / 12.896402563644669 ; t424 [ 0ULL ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) * t690 * 49.087385212340521 /
12.896402563644669 ; t424 [ 1ULL ] = ( ( intrm_sf_mf_650 - intrm_sf_mf_542 )
* t690 + ( intermediate_der8925 - intermediate_der1815 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ) *
0.049087385212340524 / 2246.65922904024 ; t424 [ 2ULL ] = t690 *
49.087385212340521 ; t424 [ 3ULL ] = t690 * 49.087385212340521 ; t424 [ 4ULL
] = 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) * t690 *
49.087385212340521 / 12.896402563644669 ; t425 [ 0ULL ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) * intermediate_der1858 *
49.087385212340521 / 12.896402563644669 ; t425 [ 1ULL ] = ( intrm_sf_mf_650 -
intrm_sf_mf_542 ) * intermediate_der1858 * 0.049087385212340524 /
2246.65922904024 ; t425 [ 2ULL ] = intermediate_der1858 * 49.087385212340521
; t425 [ 3ULL ] = intermediate_der1858 * 49.087385212340521 ; t1128 = X [
36ULL ] * X [ 36ULL ] ; t425 [ 4ULL ] = ( 1.0 / ( X [ 36ULL ] == 0.0 ?
1.0E-16 : X [ 36ULL ] ) * intermediate_der1858 + - 1.0 / ( t1128 == 0.0 ?
1.0E-16 : t1128 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ) *
49.087385212340521 / 12.896402563644669 ; t1128 = X [ 37ULL ] * X [ 37ULL ] ;
t426 [ 0ULL ] = ( 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) *
intermediate_der5190 + - 1.0 / ( t1128 == 0.0 ? 1.0E-16 : t1128 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ) *
12.500000000000004 / 12.896402563644669 ; t426 [ 1ULL ] = - ( 1.0 / ( X [
73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * intermediate_der5190 *
12.500000000000004 / 12.896402563644669 ; t426 [ 2ULL ] = ( intrm_sf_mf_1687
- intrm_sf_mf_1662 ) * intermediate_der5190 * 0.012500000000000002 /
2246.65922904024 ; t426 [ 3ULL ] = intermediate_der5190 * 12.500000000000004
; t426 [ 4ULL ] = intermediate_der5190 * 12.500000000000004 ; t1110 = X [
38ULL ] * X [ 38ULL ] ; t427 [ 0ULL ] = ( - ( 1.0 / ( X [ 38ULL ] == 0.0 ?
1.0E-16 : X [ 38ULL ] ) ) * intermediate_der2200 + - ( - 1.0 / ( t1110 == 0.0
? 1.0E-16 : t1110 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ) *
196.34954084936209 ; t427 [ 1ULL ] = ( ( intrm_sf_mf_800 - intrm_sf_mf_692 )
* intermediate_der2200 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
intermediate_der9285 ) * 0.1963495408493621 / 2172.7681408465714 ; t427 [
2ULL ] = 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) *
intermediate_der2200 * 196.34954084936209 ; t427 [ 3ULL ] =
intermediate_der2200 * 196.34954084936209 ; t427 [ 4ULL ] =
intermediate_der2200 * 196.34954084936209 ; t428 [ 0ULL ] = - ( 1.0 / ( X [
38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * intermediate_der2197 *
196.34954084936209 ; t428 [ 1ULL ] = ( intrm_sf_mf_800 - intrm_sf_mf_692 ) *
intermediate_der2197 * 0.1963495408493621 / 2172.7681408465714 ; t1110 = X [
39ULL ] * X [ 39ULL ] ; t428 [ 2ULL ] = ( 1.0 / ( X [ 39ULL ] == 0.0 ?
1.0E-16 : X [ 39ULL ] ) * intermediate_der2197 + - 1.0 / ( t1110 == 0.0 ?
1.0E-16 : t1110 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ) *
196.34954084936209 ; t428 [ 3ULL ] = intermediate_der2197 *
196.34954084936209 ; t428 [ 4ULL ] = intermediate_der2197 *
196.34954084936209 ; t429 [ 0ULL ] = - ( 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16
: X [ 38ULL ] ) ) * t692 * 196.34954084936209 ; t429 [ 1ULL ] = ( (
intrm_sf_mf_800 - intrm_sf_mf_692 ) * t692 + ( intermediate_der9284 -
intermediate_der2154 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ) *
0.1963495408493621 / 2172.7681408465714 ; t429 [ 2ULL ] = 1.0 / ( X [ 39ULL ]
== 0.0 ? 1.0E-16 : X [ 39ULL ] ) * t692 * 196.34954084936209 ; t429 [ 3ULL ]
= t692 * 196.34954084936209 ; t429 [ 4ULL ] = t692 * 196.34954084936209 ;
t430 [ 0ULL ] = - ( 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) *
intermediate_der2199 * 196.34954084936209 ; t430 [ 1ULL ] = ( (
intrm_sf_mf_800 - intrm_sf_mf_692 ) * intermediate_der2199 + (
intermediate_der9283 - intermediate_der2153 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ) *
0.1963495408493621 / 2172.7681408465714 ; t430 [ 2ULL ] = 1.0 / ( X [ 39ULL ]
== 0.0 ? 1.0E-16 : X [ 39ULL ] ) * intermediate_der2199 * 196.34954084936209
; t430 [ 3ULL ] = intermediate_der2199 * 196.34954084936209 ; t430 [ 4ULL ] =
intermediate_der2199 * 196.34954084936209 ; t1110 = X [ 42ULL ] * X [ 42ULL ]
; t431 [ 0ULL ] = ( - ( 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] )
) * intermediate_der2656 + - ( - 1.0 / ( t1110 == 0.0 ? 1.0E-16 : t1110 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ) *
2677.3120849090419 ; t431 [ 1ULL ] = ( ( intrm_sf_mf_976 - intrm_sf_mf_868 )
* intermediate_der2656 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 *
intermediate_der9636 ) * 2.6773120849090417 / 2172.7681408465714 ; t431 [
2ULL ] = intermediate_der2656 * 2677.3120849090419 ; t431 [ 3ULL ] =
intermediate_der2656 * 2677.3120849090419 ; t431 [ 4ULL ] = 1.0 / ( X [ 48ULL
] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * intermediate_der2656 *
2677.3120849090419 ; t432 [ 0ULL ] = - ( 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16
: X [ 42ULL ] ) ) * intermediate_der2655 * 2677.3120849090419 ; t432 [ 1ULL ]
= ( ( intrm_sf_mf_976 - intrm_sf_mf_868 ) * intermediate_der2655 + (
intermediate_der9634 - intermediate_der2609 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ) *
2.6773120849090417 / 2172.7681408465714 ; t432 [ 2ULL ] =
intermediate_der2655 * 2677.3120849090419 ; t432 [ 3ULL ] =
intermediate_der2655 * 2677.3120849090419 ; t432 [ 4ULL ] = 1.0 / ( X [ 48ULL
] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * intermediate_der2655 *
2677.3120849090419 ; t433 [ 0ULL ] = - ( 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16
: X [ 42ULL ] ) ) * t694 * 2677.3120849090419 ; t433 [ 1ULL ] = ( (
intrm_sf_mf_976 - intrm_sf_mf_868 ) * t694 + ( intermediate_der9635 -
intermediate_der2610 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ) *
2.6773120849090417 / 2172.7681408465714 ; t433 [ 2ULL ] = t694 *
2677.3120849090419 ; t433 [ 3ULL ] = t694 * 2677.3120849090419 ; t433 [ 4ULL
] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * t694 *
2677.3120849090419 ; t1090 = X [ 45ULL ] * X [ 45ULL ] ; t434 [ 0ULL ] = ( -
( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16 : X [ 45ULL ] ) ) *
intermediate_der2985 + - ( - 1.0 / ( t1090 == 0.0 ? 1.0E-16 : t1090 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ) *
2677.3120849090419 / 1.5549856083302016 ; t434 [ 1ULL ] = ( (
intrm_sf_mf_1114 - intrm_sf_mf_1006 ) * intermediate_der2985 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 *
intermediate_der5680 ) * 2.6773120849090417 / 2374.9296201389902 ; t434 [
2ULL ] = intermediate_der2985 * 2677.3120849090419 ; t434 [ 3ULL ] =
intermediate_der2985 * 2677.3120849090419 ; t434 [ 4ULL ] = 1.0 / ( X [ 49ULL
] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) * intermediate_der2985 *
2677.3120849090419 / 1.5549856083302016 ; t435 [ 0ULL ] = - ( 1.0 / ( X [
45ULL ] == 0.0 ? 1.0E-16 : X [ 45ULL ] ) ) * intermediate_der2986 *
2677.3120849090419 / 1.5549856083302016 ; t435 [ 1ULL ] = ( (
intrm_sf_mf_1114 - intrm_sf_mf_1006 ) * intermediate_der2986 + ( t839 -
intermediate_der2939 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ) *
2.6773120849090417 / 2374.9296201389902 ; t435 [ 2ULL ] =
intermediate_der2986 * 2677.3120849090419 ; t435 [ 3ULL ] =
intermediate_der2986 * 2677.3120849090419 ; t435 [ 4ULL ] = 1.0 / ( X [ 49ULL
] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) * intermediate_der2986 *
2677.3120849090419 / 1.5549856083302016 ; t436 [ 0ULL ] = - ( 1.0 / ( X [
45ULL ] == 0.0 ? 1.0E-16 : X [ 45ULL ] ) ) * t696 * 2677.3120849090419 /
1.5549856083302016 ; t436 [ 1ULL ] = ( ( intrm_sf_mf_1114 - intrm_sf_mf_1006
) * t696 + ( intermediate_der5679 - intermediate_der2940 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ) *
2.6773120849090417 / 2374.9296201389902 ; t436 [ 2ULL ] = t696 *
2677.3120849090419 ; t436 [ 3ULL ] = t696 * 2677.3120849090419 ; t436 [ 4ULL
] = 1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) * t696 *
2677.3120849090419 / 1.5549856083302016 ; t437 [ 0ULL ] = - ( 1.0 / ( X [
42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ) * intermediate_der2653 *
2677.3120849090419 ; t437 [ 1ULL ] = ( intrm_sf_mf_976 - intrm_sf_mf_868 ) *
intermediate_der2653 * 2.6773120849090417 / 2172.7681408465714 ; t437 [ 2ULL
] = intermediate_der2653 * 2677.3120849090419 ; t437 [ 3ULL ] =
intermediate_der2653 * 2677.3120849090419 ; t1118 = X [ 48ULL ] * X [ 48ULL ]
; t437 [ 4ULL ] = ( 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) *
intermediate_der2653 + - 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_41 ) *
2677.3120849090419 ; t438 [ 0ULL ] = - ( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16
: X [ 45ULL ] ) ) * intermediate_der2983 * 2677.3120849090419 /
1.5549856083302016 ; t438 [ 1ULL ] = ( intrm_sf_mf_1114 - intrm_sf_mf_1006 )
* intermediate_der2983 * 2.6773120849090417 / 2374.9296201389902 ; t438 [
2ULL ] = intermediate_der2983 * 2677.3120849090419 ; t438 [ 3ULL ] =
intermediate_der2983 * 2677.3120849090419 ; t1118 = X [ 49ULL ] * X [ 49ULL ]
; t438 [ 4ULL ] = ( 1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) *
intermediate_der2983 + - 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_97 ) *
2677.3120849090419 / 1.5549856083302016 ; t1110 = X [ 50ULL ] * X [ 50ULL ] ;
t439 [ 0ULL ] = ( - ( 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) )
* intermediate_der3337 + - ( - 1.0 / ( t1110 == 0.0 ? 1.0E-16 : t1110 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ) *
49.087385212340521 ; t439 [ 1ULL ] = ( ( intrm_sf_mf_1253 - intrm_sf_mf_1145
) * intermediate_der3337 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 *
intermediate_der6074 ) * 0.049087385212340524 / 2172.7681408465714 ; t439 [
2ULL ] = intermediate_der3337 * 49.087385212340521 ; t439 [ 3ULL ] =
intermediate_der3337 * 49.087385212340521 ; t439 [ 4ULL ] = 1.0 / ( X [ 53ULL
] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) * intermediate_der3337 *
49.087385212340521 ; t440 [ 0ULL ] = - ( 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16
: X [ 50ULL ] ) ) * intermediate_der3336 * 49.087385212340521 ; t440 [ 1ULL ]
= ( ( intrm_sf_mf_1253 - intrm_sf_mf_1145 ) * intermediate_der3336 + (
intermediate_der6072 - intermediate_der3290 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ) *
0.049087385212340524 / 2172.7681408465714 ; t440 [ 2ULL ] =
intermediate_der3336 * 49.087385212340521 ; t440 [ 3ULL ] =
intermediate_der3336 * 49.087385212340521 ; t440 [ 4ULL ] = 1.0 / ( X [ 53ULL
] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) * intermediate_der3336 *
49.087385212340521 ; t441 [ 0ULL ] = - ( 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16
: X [ 50ULL ] ) ) * t698 * 49.087385212340521 ; t441 [ 1ULL ] = ( (
intrm_sf_mf_1253 - intrm_sf_mf_1145 ) * t698 + ( intermediate_der6073 -
intermediate_der3291 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ) *
0.049087385212340524 / 2172.7681408465714 ; t441 [ 2ULL ] = t698 *
49.087385212340521 ; t441 [ 3ULL ] = t698 * 49.087385212340521 ; t441 [ 4ULL
] = 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) * t698 *
49.087385212340521 ; t442 [ 0ULL ] = - ( 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16
: X [ 50ULL ] ) ) * intermediate_der3334 * 49.087385212340521 ; t442 [ 1ULL ]
= ( intrm_sf_mf_1253 - intrm_sf_mf_1145 ) * intermediate_der3334 *
0.049087385212340524 / 2172.7681408465714 ; t442 [ 2ULL ] =
intermediate_der3334 * 49.087385212340521 ; t442 [ 3ULL ] =
intermediate_der3334 * 49.087385212340521 ; t1118 = X [ 53ULL ] * X [ 53ULL ]
; t442 [ 4ULL ] = ( 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) *
intermediate_der3334 + - 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip39 ) *
49.087385212340521 ; t1118 = X [ 54ULL ] * X [ 54ULL ] ; t443 [ 0ULL ] = (
1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) * intermediate_der5096 +
- 1.0 / ( t1118 == 0.0 ? 1.0E-16 : t1118 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ) *
29.999999999999996 ; t443 [ 1ULL ] = - ( 1.0 / ( X [ 70ULL ] == 0.0 ? 1.0E-16
: X [ 70ULL ] ) ) * intermediate_der5096 * 29.999999999999996 ; t443 [ 2ULL ]
= ( intrm_sf_mf_1656 - intrm_sf_mf_1637 ) * intermediate_der5096 * 0.03 /
2172.7681408465714 ; t443 [ 3ULL ] = intermediate_der5096 *
29.999999999999996 ; t443 [ 4ULL ] = intermediate_der5096 *
29.999999999999996 ; t444 [ 0ULL ] = ( 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ) *
intermediate_der3633 + - 1.0 / ( t801 == 0.0 ? 1.0E-16 : t801 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 * t681 ) *
0.0040159681273635624 ; t444 [ 1ULL ] = intermediate_der3701 * 100.0 /
16.703067073570942 ; t444 [ 2ULL ] = ( - t699 * intermediate_der3633 + -
intermediate_der3674 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ) *
0.0040159681273635624 ; t444 [ 3ULL ] = intermediate_der3699 * 0.001 /
16.703067073570942 ; t445 [ 0ULL ] = ( 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce6 ) *
t679 + - 1.0 / ( t801 == 0.0 ? 1.0E-16 : t801 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 *
intermediate_der3675 ) * 0.0040159681273635624 ; t445 [ 1ULL ] =
intermediate_der3702 * 100.0 / 16.703067073570942 ; t445 [ 2ULL ] = ( - t699
* t679 + - intermediate_der3673 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce28 ) *
0.0040159681273635624 ; t445 [ 3ULL ] = t348_idx_0 * 0.001 /
16.703067073570942 ; t446 [ 0ULL ] = ( 1.0 / ( t700 == 0.0 ? 1.0E-16 : t700 )
* t805 + - 1.0 / ( t811 == 0.0 ? 1.0E-16 : t811 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 * t796 ) *
0.00093750000000000007 ; t446 [ 1ULL ] = intermediate_der3786 * 100.0 /
3.8992155527272074 ; t446 [ 2ULL ] = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 * t805 + -
intermediate_der3757 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) *
0.00093750000000000007 ; t446 [ 3ULL ] = intermediate_der3784 * 0.001 /
3.8992155527272074 ; t447 [ 0ULL ] = ( 1.0 / ( t700 == 0.0 ? 1.0E-16 : t700 )
* t802 + - 1.0 / ( t811 == 0.0 ? 1.0E-16 : t811 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 *
intermediate_der3758 ) * 0.00093750000000000007 ; t447 [ 1ULL ] =
intermediate_der3787 * 100.0 / 3.8992155527272074 ; t447 [ 2ULL ] = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato5 * t802 + -
t794 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato28 ) *
0.00093750000000000007 ; t447 [ 3ULL ] = t800 * 0.001 / 3.8992155527272074 ;
t1090 = X [ 62ULL ] * X [ 62ULL ] ; t448 [ 0ULL ] = ( - ( 1.0 / ( X [ 62ULL ]
== 0.0 ? 1.0E-16 : X [ 62ULL ] ) ) * t812 + - ( - 1.0 / ( t1090 == 0.0 ?
1.0E-16 : t1090 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ) * 12000.0 /
12.896402563644669 ; t448 [ 1ULL ] = ( ( intrm_sf_mf_1395 - intrm_sf_mf_1382
) * t812 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 *
intermediate_der6639 ) * 12.0 / 2246.65922904024 ; t448 [ 2ULL ] = 1.0 / ( X
[ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) * t812 * 12000.0 /
12.896402563644669 ; t448 [ 3ULL ] = t812 * 12000.0 ; t448 [ 4ULL ] = t812 *
12000.0 ; t449 [ 0ULL ] = - ( 1.0 / ( X [ 62ULL ] == 0.0 ? 1.0E-16 : X [
62ULL ] ) ) * t807 * 12000.0 / 12.896402563644669 ; t449 [ 1ULL ] = (
intrm_sf_mf_1395 - intrm_sf_mf_1382 ) * t807 * 12.0 / 2246.65922904024 ;
t1090 = X [ 63ULL ] * X [ 63ULL ] ; t449 [ 2ULL ] = ( 1.0 / ( X [ 63ULL ] ==
0.0 ? 1.0E-16 : X [ 63ULL ] ) * t807 + - 1.0 / ( t1090 == 0.0 ? 1.0E-16 :
t1090 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ) *
12000.0 / 12.896402563644669 ; t449 [ 3ULL ] = t807 * 12000.0 ; t449 [ 4ULL ]
= t807 * 12000.0 ; t450 [ 0ULL ] = - ( 1.0 / ( X [ 62ULL ] == 0.0 ? 1.0E-16 :
X [ 62ULL ] ) ) * t810 * 12000.0 / 12.896402563644669 ; t450 [ 1ULL ] = ( (
intrm_sf_mf_1395 - intrm_sf_mf_1382 ) * t810 + ( intermediate_der6637 -
intermediate_der4474 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ) * 12.0 /
2246.65922904024 ; t450 [ 2ULL ] = 1.0 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [
63ULL ] ) * t810 * 12000.0 / 12.896402563644669 ; t450 [ 3ULL ] = t810 *
12000.0 ; t450 [ 4ULL ] = t810 * 12000.0 ; t451 [ 0ULL ] = - ( 1.0 / ( X [
62ULL ] == 0.0 ? 1.0E-16 : X [ 62ULL ] ) ) * t703 * 12000.0 /
12.896402563644669 ; t451 [ 1ULL ] = ( ( intrm_sf_mf_1395 - intrm_sf_mf_1382
) * t703 + ( intermediate_der6638 - t806 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T18 ) * 12.0 /
2246.65922904024 ; t451 [ 2ULL ] = 1.0 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [
63ULL ] ) * t703 * 12000.0 / 12.896402563644669 ; t451 [ 3ULL ] = t703 *
12000.0 ; t451 [ 4ULL ] = t703 * 12000.0 ; t1090 = X [ 66ULL ] * X [ 66ULL ]
; t452 [ 0ULL ] = ( - ( 1.0 / ( X [ 66ULL ] == 0.0 ? 1.0E-16 : X [ 66ULL ] )
) * intermediate_der4596 + - ( - 1.0 / ( t1090 == 0.0 ? 1.0E-16 : t1090 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ) *
7.8539816339744828 / 12.896402563644669 ; t452 [ 1ULL ] = ( (
intrm_sf_mf_1509 - intrm_sf_mf_1401 ) * intermediate_der4596 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 *
intermediate_der6947 ) * 0.0078539816339744835 / 2246.65922904024 ; t452 [
2ULL ] = 1.0 / ( X [ 67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) *
intermediate_der4596 * 7.8539816339744828 / 12.896402563644669 ; t452 [ 3ULL
] = intermediate_der4596 * 7.8539816339744828 ; t452 [ 4ULL ] =
intermediate_der4596 * 7.8539816339744828 ; t453 [ 0ULL ] = - ( 1.0 / ( X [
66ULL ] == 0.0 ? 1.0E-16 : X [ 66ULL ] ) ) * intermediate_der4593 *
7.8539816339744828 / 12.896402563644669 ; t453 [ 1ULL ] = ( intrm_sf_mf_1509
- intrm_sf_mf_1401 ) * intermediate_der4593 * 0.0078539816339744835 /
2246.65922904024 ; t1090 = X [ 67ULL ] * X [ 67ULL ] ; t453 [ 2ULL ] = ( 1.0
/ ( X [ 67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) * intermediate_der4593 + -
1.0 / ( t1090 == 0.0 ? 1.0E-16 : t1090 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ) *
7.8539816339744828 / 12.896402563644669 ; t453 [ 3ULL ] =
intermediate_der4593 * 7.8539816339744828 ; t453 [ 4ULL ] =
intermediate_der4593 * 7.8539816339744828 ; t454 [ 0ULL ] = - ( 1.0 / ( X [
66ULL ] == 0.0 ? 1.0E-16 : X [ 66ULL ] ) ) * t705 * 7.8539816339744828 /
12.896402563644669 ; t454 [ 1ULL ] = ( ( intrm_sf_mf_1509 - intrm_sf_mf_1401
) * t705 + ( intermediate_der6946 - intermediate_der4550 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ) *
0.0078539816339744835 / 2246.65922904024 ; t454 [ 2ULL ] = 1.0 / ( X [ 67ULL
] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) * t705 * 7.8539816339744828 /
12.896402563644669 ; t454 [ 3ULL ] = t705 * 7.8539816339744828 ; t454 [ 4ULL
] = t705 * 7.8539816339744828 ; t455 [ 0ULL ] = - ( 1.0 / ( X [ 66ULL ] ==
0.0 ? 1.0E-16 : X [ 66ULL ] ) ) * intermediate_der4595 * 7.8539816339744828 /
12.896402563644669 ; t455 [ 1ULL ] = ( ( intrm_sf_mf_1509 - intrm_sf_mf_1401
) * intermediate_der4595 + ( intermediate_der6945 - intermediate_der4549 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ) *
0.0078539816339744835 / 2246.65922904024 ; t455 [ 2ULL ] = 1.0 / ( X [ 67ULL
] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) * intermediate_der4595 *
7.8539816339744828 / 12.896402563644669 ; t455 [ 3ULL ] =
intermediate_der4595 * 7.8539816339744828 ; t455 [ 4ULL ] =
intermediate_der4595 * 7.8539816339744828 ; t456 [ 0ULL ] = 1.0 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) * intermediate_der5099 *
29.999999999999996 ; t1110 = X [ 70ULL ] * X [ 70ULL ] ; t456 [ 1ULL ] = ( -
( 1.0 / ( X [ 70ULL ] == 0.0 ? 1.0E-16 : X [ 70ULL ] ) ) *
intermediate_der5099 + - ( - 1.0 / ( t1110 == 0.0 ? 1.0E-16 : t1110 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ) *
29.999999999999996 ; t456 [ 2ULL ] = ( ( intrm_sf_mf_1656 - intrm_sf_mf_1637
) * intermediate_der5099 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 *
intermediate_der7189 ) * 0.03 / 2172.7681408465714 ; t456 [ 3ULL ] =
intermediate_der5099 * 29.999999999999996 ; t456 [ 4ULL ] =
intermediate_der5099 * 29.999999999999996 ; t457 [ 0ULL ] = 1.0 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) * t707 * 29.999999999999996 ; t457 [ 1ULL
] = - ( 1.0 / ( X [ 70ULL ] == 0.0 ? 1.0E-16 : X [ 70ULL ] ) ) * t707 *
29.999999999999996 ; t457 [ 2ULL ] = ( ( intrm_sf_mf_1656 - intrm_sf_mf_1637
) * t707 + ( intermediate_der7187 - intermediate_der5094 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ) * 0.03 /
2172.7681408465714 ; t457 [ 3ULL ] = t707 * 29.999999999999996 ; t457 [ 4ULL
] = t707 * 29.999999999999996 ; t458 [ 0ULL ] = 1.0 / ( X [ 54ULL ] == 0.0 ?
1.0E-16 : X [ 54ULL ] ) * intermediate_der5098 * 29.999999999999996 ; t458 [
1ULL ] = - ( 1.0 / ( X [ 70ULL ] == 0.0 ? 1.0E-16 : X [ 70ULL ] ) ) *
intermediate_der5098 * 29.999999999999996 ; t458 [ 2ULL ] = ( (
intrm_sf_mf_1656 - intrm_sf_mf_1637 ) * intermediate_der5098 + (
intermediate_der7188 - intermediate_der5095 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress27 ) * 0.03 /
2172.7681408465714 ; t458 [ 3ULL ] = intermediate_der5098 *
29.999999999999996 ; t458 [ 4ULL ] = intermediate_der5098 *
29.999999999999996 ; t459 [ 0ULL ] = 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X
[ 37ULL ] ) * intermediate_der5193 * 12.500000000000004 / 12.896402563644669
; t1118 = X [ 73ULL ] * X [ 73ULL ] ; t459 [ 1ULL ] = ( - ( 1.0 / ( X [ 73ULL
] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * intermediate_der5193 + - ( - 1.0 / (
t1118 == 0.0 ? 1.0E-16 : t1118 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ) *
12.500000000000004 / 12.896402563644669 ; t459 [ 2ULL ] = ( (
intrm_sf_mf_1687 - intrm_sf_mf_1662 ) * intermediate_der5193 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 *
intermediate_der7223 ) * 0.012500000000000002 / 2246.65922904024 ; t459 [
3ULL ] = intermediate_der5193 * 12.500000000000004 ; t459 [ 4ULL ] =
intermediate_der5193 * 12.500000000000004 ; t460 [ 0ULL ] = 1.0 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) * intermediate_der5192 *
12.500000000000004 / 12.896402563644669 ; t460 [ 1ULL ] = - ( 1.0 / ( X [
73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * intermediate_der5192 *
12.500000000000004 / 12.896402563644669 ; t460 [ 2ULL ] = ( (
intrm_sf_mf_1687 - intrm_sf_mf_1662 ) * intermediate_der5192 + (
intermediate_der7221 - intermediate_der5188 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ) *
0.012500000000000002 / 2246.65922904024 ; t460 [ 3ULL ] =
intermediate_der5192 * 12.500000000000004 ; t460 [ 4ULL ] =
intermediate_der5192 * 12.500000000000004 ; t461 [ 0ULL ] = 1.0 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) * t709 * 12.500000000000004 /
12.896402563644669 ; t461 [ 1ULL ] = - ( 1.0 / ( X [ 73ULL ] == 0.0 ? 1.0E-16
: X [ 73ULL ] ) ) * t709 * 12.500000000000004 / 12.896402563644669 ; t461 [
2ULL ] = ( ( intrm_sf_mf_1687 - intrm_sf_mf_1662 ) * t709 + (
intermediate_der7222 - intermediate_der5189 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant25 ) *
0.012500000000000002 / 2246.65922904024 ; t461 [ 3ULL ] = t709 *
12.500000000000004 ; t461 [ 4ULL ] = t709 * 12.500000000000004 ; t462 [ 0ULL
] = X [ 155ULL ] * - 0.001 / ( X [ 7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) /
1.1843079200592157 ; t462 [ 1ULL ] = ( 1000.0 - ( X [ 7ULL ] +
126.84999999999997 ) / ( X [ 7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) * 1000.0
) * X [ 155ULL ] * 0.001 * 0.001 ; t462 [ 2ULL ] = - ( X [ 155ULL ] * - 0.2 *
intrm_sf_mf_1795 * 0.005 ) / 1.1843079200592157 ; t462 [ 3ULL ] = - ( ( X [
7ULL ] + 126.84999999999997 ) * X [ 155ULL ] * - 0.2 * intrm_sf_mf_1795 *
0.005 ) ; t462 [ 4ULL ] = intermediate_der7433 * 0.001 ; t462 [ 5ULL ] = ( X
[ 155ULL ] * - 0.2 * 0.005 / ( intrm_sf_mf_1796 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1796 ) * 1.0E-5 + X [ 155ULL ] * 0.001 / ( X [ 14ULL ] == 0.0 ?
1.0E-16 : X [ 14ULL ] ) * 1.0E-5 ) * 100000.0 / 1.1843079200592157 ; t462 [
6ULL ] = ( ( X [ 7ULL ] + 126.84999999999997 ) * X [ 155ULL ] * - 0.2 * 0.005
/ ( intrm_sf_mf_1796 == 0.0 ? 1.0E-16 : intrm_sf_mf_1796 ) * 0.01 + ( ( X [
7ULL ] + 126.84999999999997 ) / ( t850 == 0.0 ? 1.0E-16 : t850 ) * 1000.0 -
1.0 ) * 0.001 ) * 100.0 ; t462 [ 7ULL ] = - intrm_sf_mf_1795 * X [ 8ULL ] * -
0.2 * 0.005 * 100.0 ; t463 [ 0ULL ] = - ( X [ 152ULL ] * 0.001 ) / ( X [ 7ULL
] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) / 1.1843079200592157 ; t463 [ 1ULL ] = (
1000.0 - ( X [ 7ULL ] + 126.84999999999997 ) / ( X [ 7ULL ] == 0.0 ? 1.0E-16
: X [ 7ULL ] ) * 1000.0 ) * X [ 152ULL ] * 0.001 * 0.001 ; t463 [ 2ULL ] = -
( t682 * intrm_sf_mf_1795 * 0.005 ) / 1.1843079200592157 ; t463 [ 3ULL ] = -
( ( X [ 7ULL ] + 126.84999999999997 ) * t682 * intrm_sf_mf_1795 * 0.005 ) ;
t463 [ 4ULL ] = ( t682 * 0.005 / ( intrm_sf_mf_1796 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1796 ) * 1.0E-5 + X [ 152ULL ] * 0.001 / ( X [ 14ULL ] == 0.0 ?
1.0E-16 : X [ 14ULL ] ) * 1.0E-5 ) * 100000.0 / 1.1843079200592157 ; t463 [
5ULL ] = ( X [ 7ULL ] + 126.84999999999997 ) * t682 * 0.005 / (
intrm_sf_mf_1796 == 0.0 ? 1.0E-16 : intrm_sf_mf_1796 ) ; t323 [ 0ULL ] = (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_cv_I *
intermediate_der242 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I * t1130 ) *
7.8539816339744831E-8 ; for ( t519 = 0ULL ; t519 < 4ULL ; t519 ++ ) { t323 [
t519 + 1ULL ] = t407 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 6ULL ; t519 ++ )
{ t323 [ t519 + 5ULL ] = t408 [ t519 ] ; } t323 [ 11ULL ] = (
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I * t711 +
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
intermediate_der382 ) * 7.8539816339744831E-8 ; t323 [ 12ULL ] = (
Electrical_Cooling_System_Pipe_Motor_pipe_model_cv_I * t719 +
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I * intermediate_der513 )
* 7.8539816339744831E-8 ; for ( t519 = 0ULL ; t519 < 6ULL ; t519 ++ ) { t323
[ t519 + 13ULL ] = t409 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519
++ ) { t323 [ t519 + 19ULL ] = t410 [ t519 ] ; } for ( t519 = 0ULL ; t519 <
5ULL ; t519 ++ ) { t323 [ t519 + 24ULL ] = t411 [ t519 ] ; } for ( t519 =
0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 29ULL ] = t412 [ t519 ] ; }
for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 34ULL ] = t413 [
t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 39ULL
] = t414 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [
t519 + 44ULL ] = t415 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++
) { t323 [ t519 + 49ULL ] = t416 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL
; t519 ++ ) { t323 [ t519 + 54ULL ] = t417 [ t519 ] ; } for ( t519 = 0ULL ;
t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 59ULL ] = t418 [ t519 ] ; } for (
t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 64ULL ] = t419 [ t519 ]
; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 69ULL ] =
t420 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 +
74ULL ] = t421 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) {
t323 [ t519 + 79ULL ] = t422 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ;
t519 ++ ) { t323 [ t519 + 84ULL ] = t423 [ t519 ] ; } for ( t519 = 0ULL ;
t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 89ULL ] = t424 [ t519 ] ; } for (
t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 94ULL ] = t425 [ t519 ]
; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 99ULL ] =
t426 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 +
104ULL ] = t427 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) {
t323 [ t519 + 109ULL ] = t428 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ;
t519 ++ ) { t323 [ t519 + 114ULL ] = t429 [ t519 ] ; } for ( t519 = 0ULL ;
t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 119ULL ] = t430 [ t519 ] ; } for (
t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 124ULL ] = t431 [ t519
] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 129ULL ] =
t432 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 +
134ULL ] = t433 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) {
t323 [ t519 + 139ULL ] = t434 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ;
t519 ++ ) { t323 [ t519 + 144ULL ] = t435 [ t519 ] ; } for ( t519 = 0ULL ;
t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 149ULL ] = t436 [ t519 ] ; } for (
t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 154ULL ] = t437 [ t519
] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 159ULL ] =
t438 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 +
164ULL ] = t439 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) {
t323 [ t519 + 169ULL ] = t440 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ;
t519 ++ ) { t323 [ t519 + 174ULL ] = t441 [ t519 ] ; } for ( t519 = 0ULL ;
t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 179ULL ] = t442 [ t519 ] ; } for (
t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 184ULL ] = t443 [ t519
] ; } t323 [ 189ULL ] = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 *
intermediate_der3627 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 * t1131 ) * (
X [ 56ULL ] * 0.1 + 0.0001 ) * 0.001 / 8385.55841330098 ; t323 [ 190ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant11 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant15 * 0.1 * 0.001
/ 8385.55841330098 ; for ( t519 = 0ULL ; t519 < 4ULL ; t519 ++ ) { t323 [
t519 + 191ULL ] = t444 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 4ULL ; t519 ++
) { t323 [ t519 + 195ULL ] = t445 [ t519 ] ; } for ( t519 = 0ULL ; t519 <
4ULL ; t519 ++ ) { t323 [ t519 + 199ULL ] = t446 [ t519 ] ; } for ( t519 =
0ULL ; t519 < 4ULL ; t519 ++ ) { t323 [ t519 + 203ULL ] = t447 [ t519 ] ; }
for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 207ULL ] = t448 [
t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 212ULL
] = t449 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [
t519 + 217ULL ] = t450 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++
) { t323 [ t519 + 222ULL ] = t451 [ t519 ] ; } for ( t519 = 0ULL ; t519 <
5ULL ; t519 ++ ) { t323 [ t519 + 227ULL ] = t452 [ t519 ] ; } for ( t519 =
0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 232ULL ] = t453 [ t519 ] ; }
for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 237ULL ] = t454 [
t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 242ULL
] = t455 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [
t519 + 247ULL ] = t456 [ t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++
) { t323 [ t519 + 252ULL ] = t457 [ t519 ] ; } for ( t519 = 0ULL ; t519 <
5ULL ; t519 ++ ) { t323 [ t519 + 257ULL ] = t458 [ t519 ] ; } for ( t519 =
0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 262ULL ] = t459 [ t519 ] ; }
for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 267ULL ] = t460 [
t519 ] ; } for ( t519 = 0ULL ; t519 < 5ULL ; t519 ++ ) { t323 [ t519 + 272ULL
] = t461 [ t519 ] ; } t323 [ 277ULL ] = (
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I * t712 +
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
intermediate_der381 ) * 7.8539816339744831E-8 ; t323 [ 278ULL ] = (
Electrical_Cooling_System_Pipe_Converter_pipe_model_cv_I * t715 +
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
intermediate_der380 ) * 7.8539816339744831E-8 ; t323 [ 279ULL ] = (
Electrical_Cooling_System_Pipe_Motor_pipe_model_cv_I * t720 +
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I * t678 ) *
7.8539816339744831E-8 ; t323 [ 280ULL ] = (
Electrical_Cooling_System_Pipe_Motor_pipe_model_cv_I * t721 +
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I * intermediate_der511 )
* 7.8539816339744831E-8 ; t323 [ 281ULL ] = (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_cv_I *
intermediate_der243 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
intermediate_der246 ) * 7.8539816339744831E-8 ; t323 [ 282ULL ] = (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_cv_I *
intermediate_der244 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
intermediate_der245 ) * 7.8539816339744831E-8 ; for ( t519 = 0ULL ; t519 <
8ULL ; t519 ++ ) { t323 [ t519 + 283ULL ] = t462 [ t519 ] ; } for ( t519 =
0ULL ; t519 < 6ULL ; t519 ++ ) { t323 [ t519 + 291ULL ] = t463 [ t519 ] ; }
t323 [ 297ULL ] = t586 * 0.001 ; for ( b = 0 ; b < 298 ; b ++ ) { out . mX [
b ] = t323 [ b ] ; } ( void ) LC ; ( void ) t1133 ; return 0 ; }

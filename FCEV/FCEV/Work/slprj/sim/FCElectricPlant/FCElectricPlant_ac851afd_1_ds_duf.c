#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_duf.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1930 , NeDsMethodOutput * t1931 ) { ETTS0
ab_efOut ; ETTS0 ad_efOut ; ETTS0 ae_efOut ; ETTS0 ag_efOut ; ETTS0 b_efOut ;
ETTS0 bb_efOut ; ETTS0 bc_efOut ; ETTS0 be_efOut ; ETTS0 cd_efOut ; ETTS0
ch_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ; ETTS0 dc_efOut ; ETTS0 de_efOut ;
ETTS0 efOut ; ETTS0 eg_efOut ; ETTS0 f_efOut ; ETTS0 fb_efOut ; ETTS0
fc_efOut ; ETTS0 fe_efOut ; ETTS0 ff_efOut ; ETTS0 g_efOut ; ETTS0 gb_efOut ;
ETTS0 gd_efOut ; ETTS0 gh_efOut ; ETTS0 he_efOut ; ETTS0 i_efOut ; ETTS0
ic_efOut ; ETTS0 ie_efOut ; ETTS0 ih_efOut ; ETTS0 jc_efOut ; ETTS0 jf_efOut
; ETTS0 k_efOut ; ETTS0 kb_efOut ; ETTS0 ke_efOut ; ETTS0 l_efOut ; ETTS0
mb_efOut ; ETTS0 me_efOut ; ETTS0 mh_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ;
ETTS0 nc_efOut ; ETTS0 nd_efOut ; ETTS0 ne_efOut ; ETTS0 nf_efOut ; ETTS0
nh_efOut ; ETTS0 p_efOut ; ETTS0 pb_efOut ; ETTS0 pc_efOut ; ETTS0 pe_efOut ;
ETTS0 q_efOut ; ETTS0 rb_efOut ; ETTS0 rc_efOut ; ETTS0 rd_efOut ; ETTS0
re_efOut ; ETTS0 rf_efOut ; ETTS0 s_efOut ; ETTS0 t13 ; ETTS0 t35 ; ETTS0 t46
; ETTS0 t54 ; ETTS0 t58 ; ETTS0 t64 ; ETTS0 t65 ; ETTS0 t66 ; ETTS0 t67 ;
ETTS0 t68 ; ETTS0 u_efOut ; ETTS0 uc_efOut ; ETTS0 v_efOut ; ETTS0 vb_efOut ;
ETTS0 vc_efOut ; ETTS0 vd_efOut ; ETTS0 ve_efOut ; ETTS0 vf_efOut ; ETTS0
wb_efOut ; ETTS0 x_efOut ; ETTS0 xc_efOut ; ETTS0 xe_efOut ; ETTS0 xg_efOut ;
ETTS0 ye_efOut ; PmRealVector out ; real_T X [ 575 ] ; real_T t578 [ 113 ] ;
real_T t697 [ 44 ] ; real_T t699 [ 29 ] ; real_T t703 [ 11 ] ; real_T t701 [
6 ] ; real_T t700 [ 5 ] ; real_T t702 [ 5 ] ; real_T nonscalar64 [ 3 ] ;
real_T ac_efOut [ 1 ] ; real_T af_efOut [ 1 ] ; real_T ah_efOut [ 1 ] ;
real_T bd_efOut [ 1 ] ; real_T bf_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ;
real_T bh_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T
cc_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ; real_T cf_efOut [ 1 ] ; real_T
cg_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T
dg_efOut [ 1 ] ; real_T dh_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T
eb_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T
ee_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T eh_efOut [ 1 ] ; real_T
fd_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ; real_T fh_efOut [ 1 ] ; real_T
gc_efOut [ 1 ] ; real_T ge_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T
gg_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T hf_efOut [ 1 ] ; real_T
hg_efOut [ 1 ] ; real_T hh_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T
j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T jd_efOut [ 1 ] ; real_T
je_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T jh_efOut [ 1 ] ; real_T
kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T
kg_efOut [ 1 ] ; real_T kh_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T
lc_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T
lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T lh_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T
mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T
od_efOut [ 1 ] ; real_T oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T
og_efOut [ 1 ] ; real_T oh_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T
pf_efOut [ 1 ] ; real_T pg_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
qc_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T qe_efOut [ 1 ] ; real_T
qf_efOut [ 1 ] ; real_T qg_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rg_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T
sd_efOut [ 1 ] ; real_T se_efOut [ 1 ] ; real_T sf_efOut [ 1 ] ; real_T
sg_efOut [ 1 ] ; real_T t572 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut [
1 ] ; real_T tc_efOut [ 1 ] ; real_T td_efOut [ 1 ] ; real_T te_efOut [ 1 ] ;
real_T tf_efOut [ 1 ] ; real_T tg_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ;
real_T ud_efOut [ 1 ] ; real_T ue_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ;
real_T ug_efOut [ 1 ] ; real_T vg_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T
wc_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T we_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T wg_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T
xd_efOut [ 1 ] ; real_T xf_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T
yf_efOut [ 1 ] ; real_T yg_efOut [ 1 ] ; real_T
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 ; real_T
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_I ; real_T
Electrical_Cooling_System_Pump_convection_A_u_in ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 ; real_T
U_idx_0 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_13 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5
; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T
intermediate_der10340 ; real_T intermediate_der10350 ; real_T
intermediate_der10423 ; real_T intermediate_der10900 ; real_T
intermediate_der10956 ; real_T intermediate_der11572 ; real_T
intermediate_der11599 ; real_T intermediate_der11675 ; real_T
intermediate_der11685 ; real_T intermediate_der11705 ; real_T
intermediate_der11719 ; real_T intermediate_der11822 ; real_T
intermediate_der123 ; real_T intermediate_der190 ; real_T
intermediate_der2150 ; real_T intermediate_der227 ; real_T
intermediate_der232 ; real_T intermediate_der235 ; real_T intermediate_der342
; real_T intermediate_der3615 ; real_T intermediate_der3618 ; real_T
intermediate_der3622 ; real_T intermediate_der3624 ; real_T
intermediate_der366 ; real_T intermediate_der3716 ; real_T
intermediate_der3723 ; real_T intermediate_der3760 ; real_T
intermediate_der3763 ; real_T intermediate_der3766 ; real_T
intermediate_der3767 ; real_T intermediate_der4892 ; real_T
intermediate_der497 ; real_T intermediate_der502 ; real_T
intermediate_der5079 ; real_T intermediate_der5241 ; real_T
intermediate_der5275 ; real_T intermediate_der5276 ; real_T
intermediate_der532 ; real_T intermediate_der539 ; real_T intermediate_der546
; real_T intermediate_der6496 ; real_T intermediate_der7398 ; real_T
intermediate_der7437 ; real_T intermediate_der7446 ; real_T
intermediate_der7917 ; real_T intermediate_der8271 ; real_T
intermediate_der8645 ; real_T intermediate_der8698 ; real_T
intermediate_der964 ; real_T intermediate_der966 ; real_T
intermediate_der9819 ; real_T intrm_sf_mf_130 ; real_T intrm_sf_mf_1326 ;
real_T intrm_sf_mf_1329 ; real_T intrm_sf_mf_1334 ; real_T intrm_sf_mf_1338 ;
real_T intrm_sf_mf_1339 ; real_T intrm_sf_mf_1358 ; real_T intrm_sf_mf_150 ;
real_T intrm_sf_mf_1537 ; real_T intrm_sf_mf_1546 ; real_T intrm_sf_mf_168 ;
real_T intrm_sf_mf_179 ; real_T intrm_sf_mf_244 ; real_T intrm_sf_mf_3 ;
real_T intrm_sf_mf_4 ; real_T intrm_sf_mf_540 ; real_T intrm_sf_mf_542 ;
real_T intrm_sf_mf_828 ; real_T intrm_sf_mf_89 ; real_T intrm_sf_mf_9 ;
real_T t1001 ; real_T t1002 ; real_T t1003 ; real_T t1004 ; real_T t1005 ;
real_T t1006 ; real_T t1007 ; real_T t1009 ; real_T t1011 ; real_T t1013 ;
real_T t1014 ; real_T t1015 ; real_T t1016 ; real_T t1017 ; real_T t1019 ;
real_T t1020 ; real_T t1021 ; real_T t1022 ; real_T t1023 ; real_T t1025 ;
real_T t1028 ; real_T t1029 ; real_T t1030 ; real_T t1031 ; real_T t1032 ;
real_T t1034 ; real_T t1035 ; real_T t1039 ; real_T t1041 ; real_T t1042 ;
real_T t1044 ; real_T t1047 ; real_T t1049 ; real_T t1051 ; real_T t1052 ;
real_T t1053 ; real_T t1055 ; real_T t1056 ; real_T t1057 ; real_T t1058 ;
real_T t1061 ; real_T t1062 ; real_T t1067 ; real_T t1069 ; real_T t1070 ;
real_T t1071 ; real_T t1073 ; real_T t1074 ; real_T t1075 ; real_T t1079 ;
real_T t1086 ; real_T t1087 ; real_T t1089 ; real_T t1091 ; real_T t1093 ;
real_T t1101 ; real_T t1103 ; real_T t1104 ; real_T t1106 ; real_T t1107 ;
real_T t1108 ; real_T t1110 ; real_T t1128 ; real_T t1178 ; real_T t1187 ;
real_T t1196 ; real_T t1235 ; real_T t1241 ; real_T t1313 ; real_T t1365 ;
real_T t1367 ; real_T t1375 ; real_T t1384 ; real_T t1393 ; real_T t1408 ;
real_T t1421 ; real_T t1423 ; real_T t1427 ; real_T t1456 ; real_T t1465 ;
real_T t1483 ; real_T t1485 ; real_T t1486 ; real_T t1509 ; real_T t1513 ;
real_T t1533 ; real_T t1552 ; real_T t1581 ; real_T t1582 ; real_T t1583 ;
real_T t1624 ; real_T t1648 ; real_T t1659 ; real_T t1660 ; real_T t1668 ;
real_T t1678 ; real_T t1681 ; real_T t1692 ; real_T t1707 ; real_T t1738 ;
real_T t1747 ; real_T t1752 ; real_T t1768 ; real_T t1774 ; real_T t1786 ;
real_T t1866 ; real_T t1867 ; real_T t1868 ; real_T t1872 ; real_T t1901 ;
real_T t1924 ; real_T t1926 ; real_T t1928 ; real_T t1929 ; real_T t688_idx_0
; real_T t692_idx_0 ; real_T t693_idx_0 ; real_T t71 ; real_T t761 ; real_T
t764 ; real_T t770 ; real_T t773 ; real_T t782 ; real_T t783 ; real_T t784 ;
real_T t785 ; real_T t787 ; real_T t788 ; real_T t791 ; real_T t796 ; real_T
t799 ; real_T t800 ; real_T t802 ; real_T t803 ; real_T t805 ; real_T t807 ;
real_T t808 ; real_T t811 ; real_T t812 ; real_T t814 ; real_T t815 ; real_T
t817 ; real_T t818 ; real_T t825 ; real_T t826 ; real_T t827 ; real_T t830 ;
real_T t831 ; real_T t832 ; real_T t833 ; real_T t834 ; real_T t836 ; real_T
t837 ; real_T t838 ; real_T t839 ; real_T t841 ; real_T t844 ; real_T t845 ;
real_T t846 ; real_T t848 ; real_T t850 ; real_T t851 ; real_T t857 ; real_T
t860 ; real_T t861 ; real_T t863 ; real_T t864 ; real_T t866 ; real_T t870 ;
real_T t872 ; real_T t873 ; real_T t876 ; real_T t877 ; real_T t878 ; real_T
t879 ; real_T t881 ; real_T t883 ; real_T t884 ; real_T t895 ; real_T t896 ;
real_T t899 ; real_T t900 ; real_T t901 ; real_T t902 ; real_T t903 ; real_T
t905 ; real_T t907 ; real_T t908 ; real_T t911 ; real_T t914 ; real_T t915 ;
real_T t916 ; real_T t917 ; real_T t918 ; real_T t919 ; real_T t921 ; real_T
t922 ; real_T t923 ; real_T t924 ; real_T t925 ; real_T t926 ; real_T t927 ;
real_T t928 ; real_T t929 ; real_T t930 ; real_T t931 ; real_T t932 ; real_T
t933 ; real_T t935 ; real_T t937 ; real_T t938 ; real_T t939 ; real_T t940 ;
real_T t941 ; real_T t942 ; real_T t943 ; real_T t944 ; real_T t946 ; real_T
t947 ; real_T t948 ; real_T t949 ; real_T t950 ; real_T t951 ; real_T t952 ;
real_T t953 ; real_T t954 ; real_T t956 ; real_T t957 ; real_T t958 ; real_T
t959 ; real_T t960 ; real_T t961 ; real_T t962 ; real_T t963 ; real_T t964 ;
real_T t965 ; real_T t966 ; real_T t968 ; real_T t969 ; real_T t971 ; real_T
t972 ; real_T t973 ; real_T t974 ; real_T t976 ; real_T t978 ; real_T t979 ;
real_T t980 ; real_T t982 ; real_T t983 ; real_T t984 ; real_T t985 ; real_T
t986 ; real_T t987 ; real_T t988 ; real_T t990 ; real_T t991 ; real_T t992 ;
real_T t993 ; real_T t996 ; real_T t997 ; real_T t998 ; real_T t999 ; real_T
zc_int116 ; real_T zc_int180 ; real_T zc_int189 ; real_T zc_int360 ; real_T
zc_int362 ; real_T zc_int365 ; real_T zc_int366 ; real_T zc_int367 ; real_T
zc_int42 ; real_T zc_int43 ; size_t t358 [ 1 ] ; size_t t570 [ 1 ] ; size_t
t573 [ 1 ] ; size_t t74 [ 1 ] ; size_t t712 ; int32_T M [ 356 ] ; int32_T b ;
for ( b = 0 ; b < 356 ; b ++ ) { M [ b ] = t1930 -> mM . mX [ b ] ; } U_idx_0
= t1930 -> mU . mX [ 0 ] ; U_idx_2 = t1930 -> mU . mX [ 2 ] ; U_idx_3 = t1930
-> mU . mX [ 3 ] ; U_idx_4 = t1930 -> mU . mX [ 4 ] ; U_idx_5 = t1930 -> mU .
mX [ 5 ] ; U_idx_6 = t1930 -> mU . mX [ 6 ] ; U_idx_7 = t1930 -> mU . mX [ 7
] ; U_idx_8 = t1930 -> mU . mX [ 8 ] ; U_idx_9 = t1930 -> mU . mX [ 9 ] ;
U_idx_10 = t1930 -> mU . mX [ 10 ] ; U_idx_11 = t1930 -> mU . mX [ 11 ] ;
U_idx_12 = t1930 -> mU . mX [ 12 ] ; U_idx_13 = t1930 -> mU . mX [ 13 ] ; for
( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t1930 -> mX . mX [ b ] ; } out = t1931
-> mDUF ; t700 [ 0 ] = 1.0 ; t700 [ 1 ] = 1.25 ; t700 [ 2 ] = 1.5 ; t700 [ 3
] = 1.75 ; t700 [ 4 ] = 2.0 ; nonscalar64 [ 0 ] = 0.0 ; nonscalar64 [ 1 ] =
188.49555921538757 ; nonscalar64 [ 2 ] = 376.99111843077515 ;
intermediate_der7398 = pmf_sqrt ( U_idx_2 * U_idx_2 + 4.5311819630628225E-12
) ; t572 [ 0ULL ] = X [ 94ULL ] ; t570 [ 0 ] = 20ULL ; t74 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = efOut
; t572 [ 0ULL ] = X [ 90ULL ] ; t573 [ 0 ] = 19ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t66 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , &
t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = c_efOut [ 0
] ; t1929 = t693_idx_0 ; t572 [ 0ULL ] = X [ 89ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = d_efOut ; tlu2_2d_linear_linear_value ( & e_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , &
t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = e_efOut [ 0
] ; t1924 = t693_idx_0 ; t572 [ 0ULL ] = X [ 96ULL ] ;
tlu2_linear_linear_prelookup ( & f_efOut . mField0 [ 0ULL ] , & f_efOut .
mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = f_efOut ; t572 [ 0ULL ] = X [ 92ULL ] ; tlu2_linear_linear_prelookup (
& g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t13 = g_efOut ;
tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] ,
& t58 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [
0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = h_efOut [ 0 ] ; t1926 = t693_idx_0 ;
t572 [ 0ULL ] = X [ 91ULL ] ; tlu2_linear_linear_prelookup ( & i_efOut .
mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [
0ULL ] , & t74 [ 0ULL ] ) ; t58 = i_efOut ; tlu2_2d_linear_linear_value ( &
j_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , &
t13 . mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = j_efOut [ 0 ] ; t1928 = t693_idx_0 ; t572 [ 0ULL ] = X [ 103ULL
] ; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = k_efOut ; t572 [ 0ULL ] = X [ 99ULL ] ; tlu2_linear_linear_prelookup (
& l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t65 = l_efOut ;
tlu2_2d_linear_linear_value ( & m_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] ,
& t58 . mField2 [ 0ULL ] , & t65 . mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [
0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = m_efOut [ 0 ] ; t1901 = t693_idx_0 ;
t572 [ 0ULL ] = X [ 98ULL ] ; tlu2_linear_linear_prelookup ( & n_efOut .
mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [
0ULL ] , & t74 [ 0ULL ] ) ; t58 = n_efOut ; tlu2_2d_linear_linear_value ( &
o_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , &
t65 . mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = o_efOut [ 0 ] ; t1866 = t693_idx_0 ; t572 [ 0ULL ] = X [ 105ULL
] ; tlu2_linear_linear_prelookup ( & p_efOut . mField0 [ 0ULL ] , & p_efOut .
mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = p_efOut ; t572 [ 0ULL ] = X [ 101ULL ] ; tlu2_linear_linear_prelookup (
& q_efOut . mField0 [ 0ULL ] , & q_efOut . mField1 [ 0ULL ] , & q_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t46 = q_efOut ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] ,
& t68 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [
0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = r_efOut [ 0 ] ; t1867 = t693_idx_0 ;
t572 [ 0ULL ] = X [ 100ULL ] ; tlu2_linear_linear_prelookup ( & s_efOut .
mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [
0ULL ] , & t74 [ 0ULL ] ) ; t58 = s_efOut ; tlu2_2d_linear_linear_value ( &
t_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , &
t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = t_efOut [ 0 ] ; t1868 = t693_idx_0 ; t572 [ 0ULL ] = X [ 112ULL
] ; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = u_efOut ; t572 [ 0ULL ] = X [ 108ULL ] ; tlu2_linear_linear_prelookup (
& v_efOut . mField0 [ 0ULL ] , & v_efOut . mField1 [ 0ULL ] , & v_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t54 = v_efOut ;
tlu2_2d_linear_linear_value ( & w_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] ,
& t68 . mField2 [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [
0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = w_efOut [ 0 ] ; t1872 = t693_idx_0 ;
t572 [ 0ULL ] = X [ 107ULL ] ; tlu2_linear_linear_prelookup ( & x_efOut .
mField0 [ 0ULL ] , & x_efOut . mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [
0ULL ] , & t74 [ 0ULL ] ) ; t35 = x_efOut ; tlu2_2d_linear_linear_value ( &
y_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , &
t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = y_efOut [ 0 ] ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 = t693_idx_0
; t572 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_linear_prelookup ( & ab_efOut .
mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , &
t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t68 = ab_efOut ; t572 [ 0ULL ] = X [
110ULL ] ; tlu2_linear_linear_prelookup ( & bb_efOut . mField0 [ 0ULL ] , &
bb_efOut . mField1 [ 0ULL ] , & bb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [ 0ULL ] , & t573 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t35 = bb_efOut ; tlu2_2d_linear_linear_value ( &
cb_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , &
t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = cb_efOut [ 0 ] ; intermediate_der123 = t693_idx_0 ; t572 [ 0ULL
] = X [ 109ULL ] ; tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0ULL
] , & db_efOut . mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t58 = db_efOut ; tlu2_2d_linear_linear_value ( &
eb_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , &
t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = eb_efOut [ 0 ] ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 = t693_idx_0
; intermediate_der190 = ( U_idx_2 - ( - U_idx_2 ) ) / 2.0 ; t782 =
intermediate_der190 >= 0.0 ? X [ 109ULL ] : X [ 116ULL ] ; t572 [ 0ULL ] = (
X [ 6ULL ] + t782 ) / 2.0 ; tlu2_linear_linear_prelookup ( & fb_efOut .
mField0 [ 0ULL ] , & fb_efOut . mField1 [ 0ULL ] , & fb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , &
t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t67 = fb_efOut ; t572 [ 0ULL ] = ( X [
110ULL ] + X [ 117ULL ] ) / 2.0 ; tlu2_linear_linear_prelookup ( & gb_efOut .
mField0 [ 0ULL ] , & gb_efOut . mField1 [ 0ULL ] , & gb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t68 = gb_efOut ;
tlu2_2d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = hb_efOut [ 0 ] ;
intermediate_der227 = t693_idx_0 ; tlu2_2d_linear_linear_value ( & ib_efOut [
0ULL ] , & t67 . mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = ib_efOut [ 0 ] ; t785 = ( intermediate_der190 >= 0.0 ?
intermediate_der190 : - intermediate_der190 ) * 0.01 ; t1235 = t693_idx_0 *
7.8539816339744827E-5 ; t783 = t785 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) ;
t784 = t783 > 1000.0 ? t783 : 1000.0 ; intermediate_der232 = t783 >= 2000.0 ?
t783 : 1.0 ; t787 = pmf_log10 ( 6.9 / ( intermediate_der232 == 0.0 ? 1.0E-16
: intermediate_der232 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intermediate_der232 == 0.0 ? 1.0E-16 : intermediate_der232 ) +
0.00017169489553429715 ) * 3.24 ; intermediate_der235 = 1.0 / ( t787 == 0.0 ?
1.0E-16 : t787 ) ; t1313 = ( pmf_pow ( intermediate_der227 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intermediate_der235 / 8.0 ) * 12.7
+ 1.0 ; t787 = ( t784 - 1000.0 ) * ( intermediate_der235 / 8.0 ) *
intermediate_der227 / ( t1313 == 0.0 ? 1.0E-16 : t1313 ) ; t788 = ( t783 -
2000.0 ) / 2000.0 ; intermediate_der366 = t788 * t788 * 3.0 - t788 * t788 *
t788 * 2.0 ; if ( t783 <= 2000.0 ) { intermediate_der342 = 3.66 ; } else if (
t783 >= 4000.0 ) { intermediate_der342 = t787 ; } else { intermediate_der342
= ( 1.0 - intermediate_der366 ) * 3.66 + t787 * intermediate_der366 ; } t791
= intermediate_der342 * 0.031415926535897927 / ( t783 + 1.0 == 0.0 ? 1.0E-16
: t783 + 1.0 ) / 7.8539816339744827E-5 / ( intermediate_der227 == 0.0 ?
1.0E-16 : intermediate_der227 ) ; intermediate_der497 = ( U_idx_0 - t782 ) *
( 1.0 - exp ( - t791 ) ) ; tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ]
, & t67 . mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t68 . mField0 [
0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 =
jb_efOut [ 0 ] ; intermediate_der502 = t693_idx_0 ; intermediate_der532 =
pmf_sqrt ( U_idx_2 * U_idx_2 + 1.8124727852251287E-13 ) ; t572 [ 0ULL ] = X [
120ULL ] ; tlu2_linear_linear_prelookup ( & kb_efOut . mField0 [ 0ULL ] , &
kb_efOut . mField1 [ 0ULL ] , & kb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t64 = kb_efOut ; tlu2_2d_linear_linear_value ( &
lb_efOut [ 0ULL ] , & t64 . mField0 [ 0ULL ] , & t64 . mField2 [ 0ULL ] , &
t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = lb_efOut [ 0 ] ; intermediate_der539 = t693_idx_0 ; t572 [ 0ULL
] = X [ 122ULL ] ; tlu2_linear_linear_prelookup ( & mb_efOut . mField0 [ 0ULL
] , & mb_efOut . mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t58 = mb_efOut ; t572 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t64 = nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t64 . mField0 [ 0ULL ] , &
t64 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ob_efOut [
0 ] ; intermediate_der546 = t693_idx_0 ; t572 [ 0ULL ] = X [ 116ULL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = pb_efOut ; tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t64 . mField0 [ 0ULL ] , &
t64 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = qb_efOut [
0 ] ; Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 =
t693_idx_0 ; t572 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup ( &
rb_efOut . mField0 [ 0ULL ] , & rb_efOut . mField1 [ 0ULL ] , & rb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [
0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t35 = rb_efOut ;
tlu2_2d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = sb_efOut [ 0 ] ;
intermediate_der8698 = t693_idx_0 ; tlu2_2d_linear_linear_value ( & tb_efOut
[ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = tb_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_I = t693_idx_0 ;
tlu2_2d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ub_efOut [ 0 ] ;
intermediate_der10956 = t693_idx_0 ; intermediate_der9819 =
intermediate_der190 >= 0.0 ? X [ 91ULL ] : X [ 98ULL ] ; t572 [ 0ULL ] = ( X
[ 9ULL ] + intermediate_der9819 ) / 2.0 ; tlu2_linear_linear_prelookup ( &
vb_efOut . mField0 [ 0ULL ] , & vb_efOut . mField1 [ 0ULL ] , & vb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [
0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t68 = vb_efOut ; t572 [ 0ULL ]
= ( X [ 92ULL ] + X [ 99ULL ] ) / 2.0 ; tlu2_linear_linear_prelookup ( &
wb_efOut . mField0 [ 0ULL ] , & wb_efOut . mField1 [ 0ULL ] , & wb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = wb_efOut ;
tlu2_2d_linear_linear_value ( & xb_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = xb_efOut [ 0 ] ;
intermediate_der8645 = t693_idx_0 ; tlu2_2d_linear_linear_value ( & yb_efOut
[ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = yb_efOut [ 0 ] ; t1423 = t693_idx_0 * 7.8539816339744827E-5 ;
intermediate_der7437 = t785 / ( t1423 == 0.0 ? 1.0E-16 : t1423 ) ; t796 =
intermediate_der7437 > 1000.0 ? intermediate_der7437 : 1000.0 ;
intermediate_der964 = intermediate_der7437 >= 2000.0 ? intermediate_der7437 :
1.0 ; t799 = pmf_log10 ( 6.9 / ( intermediate_der964 == 0.0 ? 1.0E-16 :
intermediate_der964 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intermediate_der964 == 0.0 ? 1.0E-16 : intermediate_der964 ) +
0.00017169489553429715 ) * 3.24 ; intermediate_der966 = 1.0 / ( t799 == 0.0 ?
1.0E-16 : t799 ) ; t1365 = ( pmf_pow ( intermediate_der8645 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intermediate_der966 / 8.0 ) * 12.7
+ 1.0 ; t799 = ( t796 - 1000.0 ) * ( intermediate_der966 / 8.0 ) *
intermediate_der8645 / ( t1365 == 0.0 ? 1.0E-16 : t1365 ) ; t800 = (
intermediate_der7437 - 2000.0 ) / 2000.0 ; t802 = t800 * t800 * 3.0 - t800 *
t800 * t800 * 2.0 ; if ( intermediate_der7437 <= 2000.0 ) {
intermediate_der2150 = 3.66 ; } else if ( intermediate_der7437 >= 4000.0 ) {
intermediate_der2150 = t799 ; } else { intermediate_der2150 = ( 1.0 - t802 )
* 3.66 + t799 * t802 ; } t803 = intermediate_der2150 * 0.031415926535897927 /
( intermediate_der7437 + 1.0 == 0.0 ? 1.0E-16 : intermediate_der7437 + 1.0 )
/ 7.8539816339744827E-5 / ( intermediate_der8645 == 0.0 ? 1.0E-16 :
intermediate_der8645 ) ; t805 = ( X [ 10ULL ] - intermediate_der9819 ) * (
1.0 - exp ( - t803 ) ) ; tlu2_2d_linear_linear_value ( & ac_efOut [ 0ULL ] ,
& t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t58 . mField0 [ 0ULL
] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 ,
& t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ac_efOut
[ 0 ] ; intermediate_der3624 = t693_idx_0 ; t572 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_linear_prelookup ( & bc_efOut . mField0 [ 0ULL ] , & bc_efOut .
mField1 [ 0ULL ] , & bc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = bc_efOut ; tlu2_2d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , &
t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = cc_efOut [
0 ] ; intermediate_der10340 = t693_idx_0 ; t572 [ 0ULL ] = X [ 127ULL ] ;
tlu2_linear_linear_prelookup ( & dc_efOut . mField0 [ 0ULL ] , & dc_efOut .
mField1 [ 0ULL ] , & dc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t13 = dc_efOut ; tlu2_2d_linear_linear_value ( & ec_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t65 . mField0 [ 0ULL ] , &
t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ec_efOut [
0 ] ; intermediate_der3615 = t693_idx_0 ; t572 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & fc_efOut . mField0 [ 0ULL ] , & fc_efOut .
mField1 [ 0ULL ] , & fc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = fc_efOut ; tlu2_2d_linear_linear_value ( & gc_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t58 . mField0 [ 0ULL ] , &
t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = gc_efOut [
0 ] ; intermediate_der10350 = t693_idx_0 ; tlu2_2d_linear_linear_value ( &
hc_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , &
t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = hc_efOut [ 0 ] ; intermediate_der8271 = t693_idx_0 ;
intermediate_der3618 = intermediate_der190 >= 0.0 ? X [ 100ULL ] : X [ 107ULL
] ; t572 [ 0ULL ] = ( X [ 11ULL ] + intermediate_der3618 ) / 2.0 ;
tlu2_linear_linear_prelookup ( & ic_efOut . mField0 [ 0ULL ] , & ic_efOut .
mField1 [ 0ULL ] , & ic_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t65 = ic_efOut ; t572 [ 0ULL ] = ( X [ 101ULL ] + X [ 108ULL ] ) / 2.0 ;
tlu2_linear_linear_prelookup ( & jc_efOut . mField0 [ 0ULL ] , & jc_efOut .
mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = jc_efOut ; tlu2_2d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t65 .
mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , &
t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = kc_efOut [
0 ] ; intermediate_der3622 = t693_idx_0 ; tlu2_2d_linear_linear_value ( &
lc_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , &
t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = lc_efOut [ 0 ] ; t1367 = t693_idx_0 * 7.8539816339744827E-5 ;
t807 = t785 / ( t1367 == 0.0 ? 1.0E-16 : t1367 ) ; t785 = t807 > 1000.0 ?
t807 : 1000.0 ; t808 = t807 >= 2000.0 ? t807 : 1.0 ; t811 = pmf_log10 ( 6.9 /
( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * 3.24 ;
intermediate_der3716 = 1.0 / ( t811 == 0.0 ? 1.0E-16 : t811 ) ; t1427 = (
pmf_pow ( intermediate_der3622 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der3716 / 8.0 ) * 12.7 + 1.0 ; t811 = ( t785 - 1000.0 ) * (
intermediate_der3716 / 8.0 ) * intermediate_der3622 / ( t1427 == 0.0 ?
1.0E-16 : t1427 ) ; t812 = ( t807 - 2000.0 ) / 2000.0 ; t814 = t812 * t812 *
3.0 - t812 * t812 * t812 * 2.0 ; if ( t807 <= 2000.0 ) { intermediate_der3723
= 3.66 ; } else if ( t807 >= 4000.0 ) { intermediate_der3723 = t811 ; } else
{ intermediate_der3723 = ( 1.0 - t814 ) * 3.66 + t811 * t814 ; } t815 =
intermediate_der3723 * 0.031415926535897927 / ( t807 + 1.0 == 0.0 ? 1.0E-16 :
t807 + 1.0 ) / 7.8539816339744827E-5 / ( intermediate_der3622 == 0.0 ?
1.0E-16 : intermediate_der3622 ) ; t817 = ( X [ 12ULL ] -
intermediate_der3618 ) * ( 1.0 - exp ( - t815 ) ) ;
tlu2_2d_linear_linear_value ( & mc_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = mc_efOut [ 0 ] ; t818 =
t693_idx_0 ; t572 [ 0ULL ] = X [ 130ULL ] ; tlu2_linear_linear_prelookup ( &
nc_efOut . mField0 [ 0ULL ] , & nc_efOut . mField1 [ 0ULL ] , & nc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [
0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = nc_efOut ;
tlu2_2d_linear_linear_value ( & oc_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = oc_efOut [ 0 ] ;
intermediate_der3760 = t693_idx_0 ; t572 [ 0ULL ] = X [ 132ULL ] ;
tlu2_linear_linear_prelookup ( & pc_efOut . mField0 [ 0ULL ] , & pc_efOut .
mField1 [ 0ULL ] , & pc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = pc_efOut ; tlu2_2d_linear_linear_value ( & qc_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t54 . mField0 [ 0ULL ] , &
t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = qc_efOut [
0 ] ; intermediate_der3763 = t693_idx_0 ; t572 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & rc_efOut . mField0 [ 0ULL ] , & rc_efOut .
mField1 [ 0ULL ] , & rc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = rc_efOut ; tlu2_2d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , &
t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = sc_efOut [
0 ] ; intermediate_der10900 = t693_idx_0 ; tlu2_2d_linear_linear_value ( &
tc_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , &
t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = tc_efOut [ 0 ] ; intermediate_der10423 = t693_idx_0 ; t572 [
0ULL ] = X [ 137ULL ] ; tlu2_linear_linear_prelookup ( & uc_efOut . mField0 [
0ULL ] , & uc_efOut . mField1 [ 0ULL ] , & uc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t65 = uc_efOut ; t572 [ 0ULL ] = X [ 135ULL ] ;
tlu2_linear_linear_prelookup ( & vc_efOut . mField0 [ 0ULL ] , & vc_efOut .
mField1 [ 0ULL ] , & vc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = vc_efOut ; tlu2_2d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t65 .
mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , &
t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = wc_efOut [
0 ] ; intermediate_der3766 = t693_idx_0 ; t572 [ 0ULL ] = X [ 134ULL ] ;
tlu2_linear_linear_prelookup ( & xc_efOut . mField0 [ 0ULL ] , & xc_efOut .
mField1 [ 0ULL ] , & xc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = xc_efOut ; tlu2_2d_linear_linear_value ( & yc_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , &
t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = yc_efOut [
0 ] ; Electrical_Cooling_System_Pump_convection_A_u_in = t693_idx_0 ; t572 [
0ULL ] = X [ 139ULL ] ; tlu2_linear_linear_prelookup ( & ad_efOut . mField0 [
0ULL ] , & ad_efOut . mField1 [ 0ULL ] , & ad_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t58 = ad_efOut ; tlu2_2d_linear_linear_value ( &
bd_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , &
t66 . mField0 [ 0ULL ] , & t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t570 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = bd_efOut [ 0 ] ; intermediate_der3767 = t693_idx_0 ;
intermediate_der11675 = ( intermediate_der3766 + t693_idx_0 ) / 2.0 ; t1768 =
X [ 152ULL ] * - 0.2 + 0.2 ; Fuel_Cell_Boost_Converter_L_i = X [ 166ULL ] *
1.0E-9 + X [ 19ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 = - X [
192ULL ] + U_idx_4 * - 0.01 ; if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 = X [
23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } intrm_sf_mf_89 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 *
4124.48151675695 ; intermediate_der11685 = ( X [ 20ULL ] / ( X [ 21ULL ] ==
0.0 ? 1.0E-16 : X [ 21ULL ] ) - X [ 193ULL ] / ( X [ 194ULL ] == 0.0 ?
1.0E-16 : X [ 194ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
intrm_sf_mf_89 / 7.8539816339744827E-5 ; if ( X [ 193ULL ] <=
216.59999999999997 ) { intermediate_der11572 = 216.59999999999997 ; } else {
intermediate_der11572 = X [ 193ULL ] >= 623.15 ? 623.15 : X [ 193ULL ] ; }
t761 = intermediate_der11572 * intermediate_der11572 ; intermediate_der11599
= ( ( ( 1074.1165326382641 + intermediate_der11572 * - 0.2214565261064495 ) +
t761 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ) + ( (
1479.6504774711011 + intermediate_der11572 * 1.2002114337048222 ) + t761 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ) + ( (
12825.281119789837 + intermediate_der11572 * 6.9647057412840034 ) + t761 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ; t825 =
intermediate_der11599 - intrm_sf_mf_89 ; intermediate_der11572 =
intermediate_der11599 / ( t825 == 0.0 ? 1.0E-16 : t825 ) ;
intermediate_der11599 = pmf_sqrt ( intermediate_der11685 *
intermediate_der11685 * 9.999999999999999E-14 + fabs ( X [ 193ULL ] *
intermediate_der11572 * intrm_sf_mf_89 ) * 1.0E-9 ) ; t826 = X [ 194ULL ] * X
[ 194ULL ] * intermediate_der11572 ; t761 = - pmf_sqrt ( fabs ( t826 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 193ULL ] == 0.0 ?
1.0E-16 : X [ 193ULL ] ) ) ) * 7.8539816339744827E-5 ; t830 = X [ 20ULL ] *
intrm_sf_mf_89 ; t825 = X [ 21ULL ] / ( t830 == 0.0 ? 1.0E-16 : t830 ) ; if (
X [ 195ULL ] <= 0.0 ) { t827 = 0.0 ; } else { t827 = X [ 195ULL ] >= 1.0 ?
1.0 : X [ 195ULL ] ; } if ( X [ 196ULL ] <= 0.0 ) { intermediate_der7917 =
0.0 ; } else { intermediate_der7917 = X [ 196ULL ] >= 1.0 ? 1.0 : X [ 196ULL
] ; } t572 [ 0ULL ] = X [ 20ULL ] ; t570 [ 0 ] = 52ULL ;
tlu2_linear_nearest_prelookup ( & cd_efOut . mField0 [ 0ULL ] , & cd_efOut .
mField1 [ 0ULL ] , & cd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t46 = cd_efOut ; tlu2_1d_linear_nearest_value ( & dd_efOut [ 0ULL ] , & t46 .
mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = dd_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t46 . mField0 [
0ULL ] , & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = ed_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t46 . mField0 [ 0ULL ]
, & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = fd_efOut [ 0 ] ; t71 = ( (
( 1.0 - t827 ) - intermediate_der7917 ) * t693_idx_0 + t688_idx_0 * t827 ) +
t692_idx_0 * intermediate_der7917 ; t832 = t825 * 1.5707963267948965E-8 ;
intermediate_der11705 = t761 * t71 * 35.2 / ( t832 == 0.0 ? 1.0E-16 : t832 )
; if ( t761 >= 0.0 ) { t831 = t761 * 100000.0 ; } else { t831 = - t761 *
100000.0 ; } t834 = t71 * 7.8539816339744827E-5 ; intermediate_der11719 =
t831 * 0.01 / ( t834 == 0.0 ? 1.0E-16 : t834 ) ; t833 = intermediate_der11719
>= 1.0 ? intermediate_der11719 : 1.0 ; intermediate_der11822 = pmf_log10 (
6.9 / ( t833 == 0.0 ? 1.0E-16 : t833 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t833 == 0.0 ? 1.0E-16 : t833 ) + 0.00017169489553429715 ) * 3.24 ;
t837 = t825 * 1.2337005501361697E-10 ; t825 = t761 * ( 1.0 / (
intermediate_der11822 == 0.0 ? 1.0E-16 : intermediate_der11822 ) ) * t831 *
0.55 / ( t837 == 0.0 ? 1.0E-16 : t837 ) ; t831 = ( intermediate_der11719 -
2000.0 ) / 2000.0 ; t833 = t831 * t831 * 3.0 - t831 * t831 * t831 * 2.0 ; if
( intermediate_der11719 <= 2000.0 ) { t831 = intermediate_der11705 * 1.0E-5 ;
} else if ( intermediate_der11719 >= 4000.0 ) { t831 = t825 * 1.0E-5 ; } else
{ t831 = ( ( 1.0 - t833 ) * intermediate_der11705 + t825 * t833 ) * 1.0E-5 ;
} intermediate_der11599 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
intermediate_der11599 / 7.8539816339744827E-5 * 0.00031622776601683789 + t831
; t825 = X [ 170ULL ] - X [ 21ULL ] ; t572 [ 0ULL ] = X [ 20ULL ] ;
tlu2_linear_linear_prelookup ( & gd_efOut . mField0 [ 0ULL ] , & gd_efOut .
mField1 [ 0ULL ] , & gd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t54 = gd_efOut ; tlu2_1d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = hd_efOut [
0 ] ; intermediate_der11705 = t693_idx_0 ; tlu2_1d_linear_nearest_value ( &
id_efOut [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = id_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & jd_efOut [
0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField21 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t688_idx_0 = jd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & kd_efOut [
0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField22 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t692_idx_0 = kd_efOut [ 0 ] ; t831 = ( ( ( 1.0 - t827 ) -
intermediate_der7917 ) * t693_idx_0 + t688_idx_0 * t827 ) + t692_idx_0 *
intermediate_der7917 ; t833 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 - ( - X [
180ULL ] ) ) / 2.0 ; t841 = t833 * 0.01 ; intermediate_der11822 = t841 / (
t834 == 0.0 ? 1.0E-16 : t834 ) ; t836 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 +
1.6409606283812411E-14 ) ; tlu2_1d_linear_linear_value ( & ld_efOut [ 0ULL ]
, & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 =
ld_efOut [ 0 ] ; t838 = t693_idx_0 ; tlu2_1d_linear_linear_value ( & md_efOut
[ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = md_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 = ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ) * t838 +
intermediate_der11705 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 ) +
t693_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1
) - X [ 20ULL ] * intrm_sf_mf_89 * 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 = t838 - X [
20ULL ] * 0.296802103844292 ; t838 = t693_idx_0 - X [ 20ULL ] *
4.12448151675695 ; t839 = intermediate_der11705 - X [ 20ULL ] * 0.461523 ; if
( X [ 172ULL ] <= 0.0 ) { intermediate_der11705 = 0.0 ; } else {
intermediate_der11705 = X [ 172ULL ] >= 1.0 ? 1.0 : X [ 172ULL ] ; } if ( X [
171ULL ] <= 0.0 ) { t1774 = 0.0 ; } else { t1774 = X [ 171ULL ] >= 1.0 ? 1.0
: X [ 171ULL ] ; } zc_int362 = ( ( ( 1.0 - intermediate_der11705 ) - t1774 )
* 296.802103844292 + intermediate_der11705 * 461.523 ) + t1774 *
4124.48151675695 ; t1786 = X [ 171ULL ] * 4124.48151675695 / ( zc_int362 ==
0.0 ? 1.0E-16 : zc_int362 ) ; if ( X [ 191ULL ] <= 0.0 ) {
intermediate_der6496 = 0.0 ; } else { intermediate_der6496 = X [ 191ULL ] >=
1.0 ? 1.0 : X [ 191ULL ] ; } if ( X [ 190ULL ] <= 0.0 ) {
intermediate_der7446 = 0.0 ; } else { intermediate_der7446 = X [ 190ULL ] >=
1.0 ? 1.0 : X [ 190ULL ] ; } intermediate_der4892 = ( ( ( 1.0 -
intermediate_der6496 ) - intermediate_der7446 ) * 296.802103844292 +
intermediate_der6496 * 461.523 ) + intermediate_der7446 * 4124.48151675695 ;
intermediate_der6496 = X [ 190ULL ] * 4124.48151675695 / (
intermediate_der4892 == 0.0 ? 1.0E-16 : intermediate_der4892 ) ;
intermediate_der7446 = X [ 172ULL ] * 461.523 / ( zc_int362 == 0.0 ? 1.0E-16
: zc_int362 ) ; t844 = X [ 191ULL ] * 461.523 / ( intermediate_der4892 == 0.0
? 1.0E-16 : intermediate_der4892 ) ; intermediate_der4892 = U_idx_3 *
0.031415926535897927 ; if ( intermediate_der4892 * 0.0001 <=
7.8539816339744857E-13 ) { t845 = 7.8539816339744857E-13 ; } else if (
intermediate_der4892 * 0.0001 >= 3.1415926535897929E-6 ) { t845 =
3.1415926535897929E-6 ; } else { t845 = intermediate_der4892 * 0.0001 ; }
t846 = t845 / 7.8539816339744827E-5 ; if ( X [ 215ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 = X [
215ULL ] >= 1.0 ? 1.0 : X [ 215ULL ] ; } if ( X [ 216ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 = X [
216ULL ] >= 1.0 ? 1.0 : X [ 216ULL ] ; } t1747 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 *
4124.48151675695 ; t848 = X [ 213ULL ] * t1747 ; t1752 = X [ 214ULL ] / (
t848 == 0.0 ? 1.0E-16 : t848 ) ; intermediate_der5079 = X [ 214ULL ] / ( X [
189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) * ( X [ 217ULL ] / ( X [ 213ULL ]
== 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ; t850 = X [ 214ULL ] / 1.01325 * ( X [
218ULL ] / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ;
intermediate_der5241 = ( X [ 189ULL ] + 1.01325 ) / 2.0 *
0.0010000000000000009 ; t851 = ( 1.0 - t846 ) * ( 1.0 - t846 ) ;
intrm_sf_mf_540 = intermediate_der5241 * t851 ; intermediate_der5275 = ( t846
+ 1.0 ) * ( 1.0 - t846 * intermediate_der5079 ) - ( 1.0 - t846 * t850 ) *
t846 * 2.0 ; intermediate_der5276 = ( X [ 189ULL ] - 1.01325 ) * (
intermediate_der5275 >= t851 ? intermediate_der5275 : t851 ) ;
intrm_sf_mf_244 = ( X [ 189ULL ] - 1.01325 ) / ( intermediate_der5241 == 0.0
? 1.0E-16 : intermediate_der5241 ) ; t857 = intrm_sf_mf_244 * intrm_sf_mf_244
* 3.0 - intrm_sf_mf_244 * intrm_sf_mf_244 * intrm_sf_mf_244 * 2.0 ; if ( X [
189ULL ] - 1.01325 <= 0.0 ) { intrm_sf_mf_244 = intrm_sf_mf_540 ; } else if (
X [ 189ULL ] - 1.01325 >= intermediate_der5241 ) { intrm_sf_mf_244 =
intermediate_der5276 ; } else { intrm_sf_mf_244 = ( 1.0 - t857 ) *
intrm_sf_mf_540 + intermediate_der5276 * t857 ; } intermediate_der5276 = (
t846 + 1.0 ) * ( 1.0 - t846 * t850 ) - ( 1.0 - t846 * intermediate_der5079 )
* t846 * 2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3
= ( 1.01325 - X [ 189ULL ] ) * ( intermediate_der5276 >= t851 ?
intermediate_der5276 : t851 ) ; intrm_sf_mf_542 = ( 1.01325 - X [ 189ULL ] )
/ ( intermediate_der5241 == 0.0 ? 1.0E-16 : intermediate_der5241 ) ; t1678 =
intrm_sf_mf_542 * intrm_sf_mf_542 * 3.0 - intrm_sf_mf_542 * intrm_sf_mf_542 *
intrm_sf_mf_542 * 2.0 ; if ( 1.01325 - X [ 189ULL ] <= 0.0 ) {
intrm_sf_mf_542 = intrm_sf_mf_540 ; } else if ( 1.01325 - X [ 189ULL ] >=
intermediate_der5241 ) { intrm_sf_mf_542 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; } else {
intrm_sf_mf_542 = ( 1.0 - t1678 ) * intrm_sf_mf_540 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 * t1678 ; } if
( X [ 189ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 =
intrm_sf_mf_244 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 = X [ 189ULL ]
< 1.01325 ? intrm_sf_mf_542 : intrm_sf_mf_540 ; } if ( X [ 213ULL ] <=
216.59999999999997 ) { intrm_sf_mf_540 = 216.59999999999997 ; } else {
intrm_sf_mf_540 = X [ 213ULL ] >= 623.15 ? 623.15 : X [ 213ULL ] ; } t764 =
intrm_sf_mf_540 * intrm_sf_mf_540 ; intrm_sf_mf_244 = ( ( (
1074.1165326382641 + intrm_sf_mf_540 * - 0.2214565261064495 ) + t764 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 ) + ( (
1479.6504774711011 + intrm_sf_mf_540 * 1.2002114337048222 ) + t764 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ) + ( (
12825.281119789837 + intrm_sf_mf_540 * 6.9647057412840034 ) + t764 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 =
intrm_sf_mf_244 - t1747 ; t860 = X [ 214ULL ] * X [ 214ULL ] * (
intrm_sf_mf_244 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 ) )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 = pmf_sqrt
( fabs ( t860 / ( t1747 == 0.0 ? 1.0E-16 : t1747 ) / ( X [ 213ULL ] == 0.0 ?
1.0E-16 : X [ 213ULL ] ) ) ) * t845 * 0.64 ; t863 = t1752 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 = ( X [
189ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t863 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) )
) * t845 * 0.64 ; if ( X [ 35ULL ] <= 0.0 ) { intrm_sf_mf_540 = 0.0 ; } else
{ intrm_sf_mf_540 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL
] <= 0.0 ) { intrm_sf_mf_244 = 0.0 ; } else { intrm_sf_mf_244 = X [ 34ULL ]
>= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_542 = ( ( ( 1.0 - intrm_sf_mf_540
) - intrm_sf_mf_244 ) * 296.802103844292 + intrm_sf_mf_540 * 461.523 ) +
intrm_sf_mf_244 * 4124.48151675695 ; t572 [ 0ULL ] = X [ 33ULL ] ;
tlu2_linear_linear_prelookup ( & nd_efOut . mField0 [ 0ULL ] , & nd_efOut .
mField1 [ 0ULL ] , & nd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = nd_efOut ; tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = od_efOut [
0 ] ; t764 = t693_idx_0 ; tlu2_1d_linear_linear_value ( & pd_efOut [ 0ULL ] ,
& t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 =
pd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 = t693_idx_0
; tlu2_1d_linear_linear_value ( & qd_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL
] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24
, & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = qd_efOut [ 0 ] ;
intrm_sf_mf_540 = ( ( ( ( 1.0 - intrm_sf_mf_540 ) - intrm_sf_mf_244 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 + t764 *
intrm_sf_mf_540 ) + t693_idx_0 * intrm_sf_mf_244 ) - X [ 33ULL ] *
intrm_sf_mf_542 * 0.001 ; intrm_sf_mf_244 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 - X [ 33ULL ]
* 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 = t693_idx_0
- X [ 33ULL ] * 4.12448151675695 ; t861 = t764 - X [ 33ULL ] * 0.461523 ;
t764 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] + 3.6921614138577926E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 = ( X [ 316ULL
] * 0.07812500122070315 + U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if (
X [ 40ULL ] <= 0.0 ) { t1707 = 0.0 ; } else { t1707 = X [ 40ULL ] >= 1.0 ?
1.0 : X [ 40ULL ] ; } if ( X [ 41ULL ] <= 0.0 ) { t1668 = 0.0 ; } else {
t1668 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } t1738 = ( ( ( 1.0 - t1707
) - t1668 ) * 296.802103844292 + t1707 * 461.523 ) + t1668 * 259.836612622973
; if ( X [ 322ULL ] <= 0.0 ) { t1692 = 0.0 ; } else { t1692 = X [ 322ULL ] >=
1.0 ? 1.0 : X [ 322ULL ] ; } if ( X [ 323ULL ] <= 0.0 ) { t1681 = 0.0 ; }
else { t1681 = X [ 323ULL ] >= 1.0 ? 1.0 : X [ 323ULL ] ; } t572 [ 0ULL ] = X
[ 38ULL ] ; tlu2_linear_nearest_prelookup ( & rd_efOut . mField0 [ 0ULL ] , &
rd_efOut . mField1 [ 0ULL ] , & rd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t68 = rd_efOut ; tlu2_1d_linear_nearest_value ( &
sd_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = sd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & td_efOut [
0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t688_idx_0 = td_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ud_efOut [
0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField25 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t692_idx_0 = ud_efOut [ 0 ] ; zc_int180 = ( ( ( 1.0 - t1692 ) - t1681 ) *
t693_idx_0 + t688_idx_0 * t1692 ) + t692_idx_0 * t1681 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = X [ 38ULL ]
* t1738 ; t1692 = X [ 39ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 ) ;
t1681 = - ( ( X [ 38ULL ] / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) -
X [ 324ULL ] / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * X [
307ULL ] * t1738 ) / 0.0019634954084936209 ; if ( X [ 324ULL ] <=
216.59999999999997 ) { t864 = 216.59999999999997 ; } else { t864 = X [ 324ULL
] >= 623.15 ? 623.15 : X [ 324ULL ] ; } t866 = t864 * t864 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = ( ( (
1074.1165326382641 + t864 * - 0.2214565261064495 ) + t866 *
0.00037212980109014541 ) * ( ( 1.0 - t1707 ) - t1668 ) + ( (
1479.6504774711011 + t864 * 1.2002114337048222 ) + t866 * -
0.00038614513167823636 ) * t1707 ) + ( ( 900.63941224838356 + t864 * -
0.044484923911382625 ) + t866 * 0.00036936011832044979 ) * t1668 ; t1660 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 - t1738 ;
t1707 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 / (
t1660 == 0.0 ? 1.0E-16 : t1660 ) ; t1668 = pmf_sqrt ( t1681 * t1681 *
9.999999999999999E-14 + fabs ( X [ 324ULL ] * t1707 * t1738 ) * 1.0E-9 ) ;
t872 = X [ 325ULL ] * X [ 325ULL ] * t1707 ; t864 = - pmf_sqrt ( fabs ( t872
/ ( t1738 == 0.0 ? 1.0E-16 : t1738 ) / ( X [ 324ULL ] == 0.0 ? 1.0E-16 : X [
324ULL ] ) ) ) * 0.0019634954084936209 ; if ( t864 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = t864 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = - t864 *
100000.0 ; } t876 = zc_int180 * 0.0019634954084936209 ; t866 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 * 0.05 / (
t876 == 0.0 ? 1.0E-16 : t876 ) ; t878 = t1692 * 9.8174770424681068E-6 ;
intrm_sf_mf_828 = t864 * zc_int180 * 35.2 / ( t878 == 0.0 ? 1.0E-16 : t878 )
; t870 = t866 >= 1.0 ? t866 : 1.0 ; t879 = pmf_log10 ( 6.9 / ( t870 == 0.0 ?
1.0E-16 : t870 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t870 == 0.0
? 1.0E-16 : t870 ) + 2.8767404433520813E-5 ) * 3.24 ; t881 = t1692 *
3.855314219175531E-7 ; t1692 = t864 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 * ( 1.0 / (
t879 == 0.0 ? 1.0E-16 : t879 ) ) * 0.55 / ( t881 == 0.0 ? 1.0E-16 : t881 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = ( t866 -
2000.0 ) / 2000.0 ; t870 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 * 2.0 ; if (
t866 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 =
intrm_sf_mf_828 * 1.0E-5 ; } else if ( t866 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = t1692 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = ( ( 1.0 -
t870 ) * intrm_sf_mf_828 + t1692 * t870 ) * 1.0E-5 ; } t1668 = - ( X [ 307ULL
] * t1668 ) / 0.0019634954084936209 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 ; t1692 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - X [ 39ULL ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 = pmf_sqrt
( X [ 307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 ) ; if ( X [ 318ULL ]
<= 0.0 ) { intrm_sf_mf_828 = 0.0 ; } else { intrm_sf_mf_828 = X [ 318ULL ] >=
1.0 ? 1.0 : X [ 318ULL ] ; } if ( X [ 317ULL ] <= 0.0 ) { t870 = 0.0 ; } else
{ t870 = X [ 317ULL ] >= 1.0 ? 1.0 : X [ 317ULL ] ; } t1660 = ( ( ( 1.0 -
intrm_sf_mf_828 ) - t870 ) * 296.802103844292 + intrm_sf_mf_828 * 461.523 ) +
t870 * 259.836612622973 ; if ( X [ 316ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { intrm_sf_mf_828 = 1.9634954084936209E-11 ; } else
if ( X [ 316ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) {
intrm_sf_mf_828 = 0.0012566370614359179 ; } else { intrm_sf_mf_828 = X [
316ULL ] * 0.0019634954084936209 ; } t870 = intrm_sf_mf_828 /
0.0019634954084936209 ; if ( X [ 339ULL ] <= 0.0 ) { t873 = 0.0 ; } else {
t873 = X [ 339ULL ] >= 1.0 ? 1.0 : X [ 339ULL ] ; } if ( X [ 340ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 = X [
340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t877 = ( ( ( 1.0 - t873 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ) *
296.802103844292 + t873 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 *
259.836612622973 ; t1624 = X [ 337ULL ] * t877 ; t879 = X [ 338ULL ] / (
t1624 == 0.0 ? 1.0E-16 : t1624 ) ; t1648 = X [ 338ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) *
( X [ 341ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; t1659 =
X [ 338ULL ] / 1.01325 * ( X [ 342ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X
[ 337ULL ] ) ) ; t884 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 + 1.01325 ) /
2.0 * 0.0010000000000000009 ; t883 = ( 1.0 - t870 ) * ( 1.0 - t870 ) ; t1624
= t884 * t883 ; t1533 = ( t870 + 1.0 ) * ( 1.0 - t870 * t1648 ) - ( 1.0 -
t870 * t1659 ) * t870 * 2.0 ; t1509 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) *
( t1533 >= t883 ? t1533 : t883 ) ; t1581 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) /
( t884 == 0.0 ? 1.0E-16 : t884 ) ; t1456 = t1581 * t1581 * 3.0 - t1581 *
t1581 * t1581 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 =
t1624 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 >=
t884 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 =
t1509 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 = ( 1.0 -
t1456 ) * t1624 + t1509 * t1456 ; } t1465 = ( t870 + 1.0 ) * ( 1.0 - t870 *
t1659 ) - ( 1.0 - t870 * t1648 ) * t870 * 2.0 ; t1648 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) * ( t1465 >=
t883 ? t1465 : t883 ) ; t1659 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) / ( t884 ==
0.0 ? 1.0E-16 : t884 ) ; t1582 = t1659 * t1659 * 3.0 - t1659 * t1659 * t1659
* 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = t1624 ; }
else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 >= t884 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = t1648 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = (
1.0 - t1582 ) * t1624 + t1648 * t1582 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 < 1.01325 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 : t1624 ; }
if ( X [ 337ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 = X [ 337ULL
] >= 623.15 ? 623.15 : X [ 337ULL ] ; } t770 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 * -
0.2214565261064495 ) + t770 * 0.00037212980109014541 ) * ( ( 1.0 - t873 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 *
1.2002114337048222 ) + t770 * - 0.00038614513167823636 ) * t873 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 * -
0.044484923911382625 ) + t770 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ; t895 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 - t877 ; t896
= X [ 338ULL ] * X [ 338ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 / ( t895 ==
0.0 ? 1.0E-16 : t895 ) ) ; t873 = pmf_sqrt ( fabs ( t896 / ( t877 == 0.0 ?
1.0E-16 : t877 ) / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ) *
intrm_sf_mf_828 * 0.64 ; t899 = t879 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) *
pmf_sqrt ( fabs ( t899 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ) )
) * intrm_sf_mf_828 * 0.64 ; if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 = X [
52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = X [
51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } t770 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 *
259.836612622973 ; t572 [ 0ULL ] = X [ 50ULL ] ; tlu2_linear_linear_prelookup
( & vd_efOut . mField0 [ 0ULL ] , & vd_efOut . mField1 [ 0ULL ] , & vd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [
0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = vd_efOut ;
tlu2_1d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = wd_efOut [ 0 ] ; t895 =
t693_idx_0 ; tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = xd_efOut [
0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 =
t693_idx_0 ; tlu2_1d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField27 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = yd_efOut [
0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 = ( ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 + t895 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ) +
t693_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41
) - X [ 50ULL ] * t770 * 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 - X [ 50ULL ]
* 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 = t693_idx_0
- X [ 50ULL ] * 0.25983661262297303 ; t1375 = - X [ 428ULL ] + U_idx_10 * -
2.0 ; t1384 = pmf_sqrt ( t1375 * t1375 + 6.4274470286298274E-9 ) ; t572 [
0ULL ] = X [ 427ULL ] ; t573 [ 0 ] = 11ULL ; tlu2_linear_linear_prelookup ( &
ae_efOut . mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t54 = ae_efOut ; t572 [ 0ULL ]
= 1.01325 ; t358 [ 0 ] = 12ULL ; tlu2_linear_linear_prelookup ( & be_efOut .
mField0 [ 0ULL ] , & be_efOut . mField1 [ 0ULL ] , & be_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t572 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t67 = be_efOut ;
tlu2_2d_linear_linear_value ( & ce_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t67 . mField0 [ 0ULL ] , & t67 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ce_efOut [ 0 ] ; t1583 =
t693_idx_0 ; t572 [ 0ULL ] = X [ 423ULL ] ; tlu2_linear_linear_prelookup ( &
de_efOut . mField0 [ 0ULL ] , & de_efOut . mField1 [ 0ULL ] , & de_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t54 = de_efOut ;
tlu2_2d_linear_linear_value ( & ee_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t67 . mField0 [ 0ULL ] , & t67 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ee_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 = t693_idx_0 ;
t1552 = U_idx_10 * 2.0 ; t1408 = pmf_sqrt ( t1552 * t1552 +
1.2620262729050631E-10 ) ; t572 [ 0ULL ] = X [ 447ULL ] ;
tlu2_linear_linear_prelookup ( & fe_efOut . mField0 [ 0ULL ] , & fe_efOut .
mField1 [ 0ULL ] , & fe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = fe_efOut ; tlu2_2d_linear_linear_value ( & ge_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t67 . mField0 [ 0ULL ] , &
t67 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t573 [ 0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ge_efOut [
0 ] ; t1393 = t693_idx_0 ; t572 [ 0ULL ] = X [ 449ULL ] ;
tlu2_linear_linear_prelookup ( & he_efOut . mField0 [ 0ULL ] , & he_efOut .
mField1 [ 0ULL ] , & he_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = he_efOut ; t572 [ 0ULL ] = X [ 445ULL ] ; tlu2_linear_linear_prelookup
( & ie_efOut . mField0 [ 0ULL ] , & ie_efOut . mField1 [ 0ULL ] , & ie_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t572 [
0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t13 = ie_efOut ;
tlu2_2d_linear_linear_value ( & je_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = je_efOut [ 0 ] ; t1483 =
t693_idx_0 ; t572 [ 0ULL ] = X [ 444ULL ] ; tlu2_linear_linear_prelookup ( &
ke_efOut . mField0 [ 0ULL ] , & ke_efOut . mField1 [ 0ULL ] , & ke_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = ke_efOut ;
tlu2_2d_linear_linear_value ( & le_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , & t13 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = le_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 = t693_idx_0
; t1513 = ( t1393 + t1483 ) / 2.0 ; t572 [ 0ULL ] = X [ 444ULL ] ;
tlu2_linear_nearest_prelookup ( & me_efOut . mField0 [ 0ULL ] , & me_efOut .
mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t54 = me_efOut ; t572 [ 0ULL ] = X [ 59ULL ] ; tlu2_linear_nearest_prelookup
( & ne_efOut . mField0 [ 0ULL ] , & ne_efOut . mField1 [ 0ULL ] , & ne_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t572 [
0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t68 = ne_efOut ;
tlu2_2d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = oe_efOut [ 0 ] ; t900 =
t693_idx_0 ; t572 [ 0ULL ] = X [ 430ULL ] ; tlu2_linear_nearest_prelookup ( &
pe_efOut . mField0 [ 0ULL ] , & pe_efOut . mField1 [ 0ULL ] , & pe_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t572 [
0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t65 = pe_efOut ;
tlu2_2d_linear_nearest_value ( & qe_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = qe_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 = t693_idx_0 ;
t572 [ 0ULL ] = X [ 60ULL ] ; tlu2_linear_nearest_prelookup ( & re_efOut .
mField0 [ 0ULL ] , & re_efOut . mField1 [ 0ULL ] , & re_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t572 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t67 = re_efOut ;
tlu2_2d_linear_nearest_value ( & se_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = se_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 = t693_idx_0 ;
tlu2_2d_linear_nearest_value ( & te_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = te_efOut [ 0 ] ; U_idx_10 =
t693_idx_0 ; intrm_sf_mf_1338 = ( t1552 - ( - X [ 436ULL ] ) ) / 2.0 ;
tlu2_2d_linear_nearest_value ( & ue_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ue_efOut [ 0 ] ; t901 =
t693_idx_0 ; t902 = intrm_sf_mf_1338 * 0.0028301886792452828 ; t903 =
t693_idx_0 * 0.00093750000000000007 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato4 = t902 / (
t903 == 0.0 ? 1.0E-16 : t903 ) ; t1485 = pmf_sqrt ( t1552 * t1552 +
2.4102926357361849E-12 ) ; t572 [ 0ULL ] = X [ 450ULL ] ;
tlu2_linear_linear_prelookup ( & ve_efOut . mField0 [ 0ULL ] , & ve_efOut .
mField1 [ 0ULL ] , & ve_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = ve_efOut ; tlu2_2d_linear_linear_value ( & we_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t13 . mField0 [ 0ULL ] , &
t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t573 [ 0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = we_efOut [
0 ] ; t1486 = t693_idx_0 ; t572 [ 0ULL ] = X [ 60ULL ] ;
tlu2_linear_linear_prelookup ( & xe_efOut . mField0 [ 0ULL ] , & xe_efOut .
mField1 [ 0ULL ] , & xe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = xe_efOut ; t572 [ 0ULL ] = X [ 59ULL ] ; tlu2_linear_linear_prelookup (
& ye_efOut . mField0 [ 0ULL ] , & ye_efOut . mField1 [ 0ULL ] , & ye_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t572 [
0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 = ye_efOut ;
tlu2_2d_linear_linear_value ( & af_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = af_efOut [ 0 ] ;
intrm_sf_mf_1358 = t693_idx_0 ; tlu2_2d_linear_nearest_value ( & bf_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField36 , & t573 [ 0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = bf_efOut [ 0 ] ; U_idx_7 = t693_idx_0 ;
tlu2_2d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = cf_efOut [ 0 ] ;
intrm_sf_mf_168 = t693_idx_0 ; tlu2_2d_linear_nearest_value ( & df_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField37 , & t573 [ 0ULL ] , & t358 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t693_idx_0 = df_efOut [ 0 ] ; intrm_sf_mf_1326 = t693_idx_0 ;
tlu2_2d_linear_nearest_value ( & ef_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t573 [ 0ULL ] , &
t358 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ef_efOut [ 0 ] ;
intrm_sf_mf_1339 = t693_idx_0 ; t1421 = ( X [ 478ULL ] * - 0.7999998 +
U_idx_11 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t1421 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_1537 =
7.8539816339744857E-13 ; } else if ( t1421 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intrm_sf_mf_1537 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_1537 = t1421 * 7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 =
intrm_sf_mf_1537 / 7.8539816339744827E-5 ; if ( X [ 501ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 = X [
501ULL ] >= 1.0 ? 1.0 : X [ 501ULL ] ; } if ( X [ 502ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 = X [
502ULL ] >= 1.0 ? 1.0 : X [ 502ULL ] ; } intrm_sf_mf_1546 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 *
4124.48151675695 ; t905 = X [ 499ULL ] * intrm_sf_mf_1546 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 = X [ 500ULL
] / ( t905 == 0.0 ? 1.0E-16 : t905 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 = X [ 500ULL
] / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) * ( X [ 503ULL ] / ( X [
499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ; t907 = X [ 500ULL ] / ( X [
478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) * ( X [ 504ULL ] / ( X [ 499ULL ]
== 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ; t911 = ( X [ 63ULL ] + X [ 478ULL ] ) /
2.0 * 0.0010000000000000009 ; t908 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 ) ; U_idx_3 =
t911 * t908 ; t914 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * t907 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = ( X [ 63ULL
] - X [ 478ULL ] ) * ( t914 >= t908 ? t914 : t908 ) ; intrm_sf_mf_3 = ( X [
63ULL ] - X [ 478ULL ] ) / ( t911 == 0.0 ? 1.0E-16 : t911 ) ; t915 =
intrm_sf_mf_3 * intrm_sf_mf_3 * 3.0 - intrm_sf_mf_3 * intrm_sf_mf_3 *
intrm_sf_mf_3 * 2.0 ; if ( X [ 63ULL ] - X [ 478ULL ] <= 0.0 ) {
intrm_sf_mf_3 = U_idx_3 ; } else if ( X [ 63ULL ] - X [ 478ULL ] >= t911 ) {
intrm_sf_mf_3 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 ; } else {
intrm_sf_mf_3 = ( 1.0 - t915 ) * U_idx_3 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 * t915 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * t907
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 = ( X [
478ULL ] - X [ 63ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 >= t908 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18 : t908 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = ( X [
478ULL ] - X [ 63ULL ] ) / ( t911 == 0.0 ? 1.0E-16 : t911 ) ; t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 * 2.0 ; if (
X [ 478ULL ] - X [ 63ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = U_idx_3 ; }
else if ( X [ 478ULL ] - X [ 63ULL ] >= t911 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = ( 1.0 -
t916 ) * U_idx_3 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 * t916 ; } if
( X [ 63ULL ] > X [ 478ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 =
intrm_sf_mf_3 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 = X [ 63ULL ]
< X [ 478ULL ] ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 : U_idx_3 ; }
if ( X [ 499ULL ] <= 216.59999999999997 ) { U_idx_3 = 216.59999999999997 ; }
else { U_idx_3 = X [ 499ULL ] >= 623.15 ? 623.15 : X [ 499ULL ] ; } t773 =
U_idx_3 * U_idx_3 ; intrm_sf_mf_3 = ( ( ( 1074.1165326382641 + U_idx_3 * -
0.2214565261064495 ) + t773 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ) + ( (
1479.6504774711011 + U_idx_3 * 1.2002114337048222 ) + t773 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ) + ( (
12825.281119789837 + U_idx_3 * 6.9647057412840034 ) + t773 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ; t917 =
intrm_sf_mf_3 - intrm_sf_mf_1546 ; t918 = X [ 500ULL ] * X [ 500ULL ] * (
intrm_sf_mf_3 / ( t917 == 0.0 ? 1.0E-16 : t917 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 = pmf_sqrt (
fabs ( t918 / ( intrm_sf_mf_1546 == 0.0 ? 1.0E-16 : intrm_sf_mf_1546 ) / ( X
[ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) * intrm_sf_mf_1537 * 0.64 ;
t921 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 * 2.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 = ( X [
63ULL ] - X [ 478ULL ] ) * pmf_sqrt ( fabs ( t921 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ) )
) * intrm_sf_mf_1537 * 0.64 ; t572 [ 0ULL ] = X [ 73ULL ] ;
tlu2_linear_linear_prelookup ( & ff_efOut . mField0 [ 0ULL ] , & ff_efOut .
mField1 [ 0ULL ] , & ff_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = ff_efOut ; tlu2_1d_linear_linear_value ( & gf_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = gf_efOut [
0 ] ; intrm_sf_mf_3 = t693_idx_0 ; if ( X [ 75ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = X [
75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL ] <= 0.0 ) { t773 = 0.0
; } else { t773 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; } t917 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 ) - t773 )
* 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 * 461.523 ) +
t773 * 4124.48151675695 ; t919 = U_idx_4 * 0.01 ; t922 = pmf_sqrt ( t919 *
t919 + 1.4768645655431171E-13 ) ; tlu2_1d_linear_linear_value ( & hf_efOut [
0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = hf_efOut [ 0 ] ; t923 = t693_idx_0 ;
tlu2_1d_linear_linear_value ( & if_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = if_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 = ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 ) - t773 )
* t923 + intrm_sf_mf_3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 ) +
t693_idx_0 * t773 ) - X [ 73ULL ] * t917 * 0.001 ; t773 = t923 - X [ 73ULL ]
* 0.296802103844292 ; t923 = t693_idx_0 - X [ 73ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 =
intrm_sf_mf_3 - X [ 73ULL ] * 0.461523 ; if ( X [ 569ULL ] <= 0.0 ) {
intrm_sf_mf_3 = 0.0 ; } else { intrm_sf_mf_3 = X [ 569ULL ] >= 1.0 ? 1.0 : X
[ 569ULL ] ; } if ( X [ 568ULL ] <= 0.0 ) { intrm_sf_mf_4 = 0.0 ; } else {
intrm_sf_mf_4 = X [ 568ULL ] >= 1.0 ? 1.0 : X [ 568ULL ] ; } zc_int367 = ( (
( 1.0 - intrm_sf_mf_3 ) - intrm_sf_mf_4 ) * 296.802103844292 + intrm_sf_mf_3
* 461.523 ) + intrm_sf_mf_4 * 4124.48151675695 ; t572 [ 0ULL ] = X [ 563ULL ]
; tlu2_linear_linear_prelookup ( & jf_efOut . mField0 [ 0ULL ] , & jf_efOut .
mField1 [ 0ULL ] , & jf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t65 = jf_efOut ; tlu2_1d_linear_linear_value ( & kf_efOut [ 0ULL ] , & t65 .
mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = kf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & lf_efOut [ 0ULL ] , & t65 . mField0 [
0ULL ] , & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = lf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = mf_efOut [ 0 ] ; zc_int366
= ( ( ( 1.0 - intrm_sf_mf_3 ) - intrm_sf_mf_4 ) * t693_idx_0 + t688_idx_0 *
intrm_sf_mf_3 ) + t692_idx_0 * intrm_sf_mf_4 ; t572 [ 0ULL ] = X [ 566ULL ] ;
tlu2_linear_linear_prelookup ( & nf_efOut . mField0 [ 0ULL ] , & nf_efOut .
mField1 [ 0ULL ] , & nf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = nf_efOut ; tlu2_1d_linear_linear_value ( & of_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = of_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & pf_efOut [ 0ULL ] , & t58 . mField0 [
0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = pf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qf_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = qf_efOut [ 0 ] ; zc_int365
= ( ( ( 1.0 - intrm_sf_mf_3 ) - intrm_sf_mf_4 ) * t693_idx_0 + t688_idx_0 *
intrm_sf_mf_3 ) + t692_idx_0 * intrm_sf_mf_4 ; t572 [ 0ULL ] = X [ 564ULL ] ;
tlu2_linear_linear_prelookup ( & rf_efOut . mField0 [ 0ULL ] , & rf_efOut .
mField1 [ 0ULL ] , & rf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t58 = rf_efOut ; tlu2_1d_linear_linear_value ( & sf_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = sf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & tf_efOut [ 0ULL ] , & t58 . mField0 [
0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = tf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = uf_efOut [ 0 ] ; zc_int42 =
( ( ( 1.0 - intrm_sf_mf_3 ) - intrm_sf_mf_4 ) * t693_idx_0 + t688_idx_0 *
intrm_sf_mf_3 ) + t692_idx_0 * intrm_sf_mf_4 ; t572 [ 0ULL ] = X [ 565ULL ] ;
tlu2_linear_linear_prelookup ( & vf_efOut . mField0 [ 0ULL ] , & vf_efOut .
mField1 [ 0ULL ] , & vf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t65 = vf_efOut ; tlu2_1d_linear_linear_value ( & wf_efOut [ 0ULL ] , & t65 .
mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = wf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & xf_efOut [ 0ULL ] , & t65 . mField0 [
0ULL ] , & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = xf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yf_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = yf_efOut [ 0 ] ; zc_int43 =
( ( ( 1.0 - intrm_sf_mf_3 ) - intrm_sf_mf_4 ) * t693_idx_0 + t688_idx_0 *
intrm_sf_mf_3 ) + t692_idx_0 * intrm_sf_mf_4 ; intrm_sf_mf_3 = U_idx_2 >= 0.0
? U_idx_2 : - U_idx_2 ; t924 = intrm_sf_mf_3 * 0.01 ; t925 =
intermediate_der10956 * 7.8539816339744827E-5 ; intrm_sf_mf_4 = t924 / ( t925
== 0.0 ? 1.0E-16 : t925 ) ; intrm_sf_mf_9 = ( intrm_sf_mf_4 - 2000.0 ) /
2000.0 ; t926 = intrm_sf_mf_9 * intrm_sf_mf_9 * 3.0 - intrm_sf_mf_9 *
intrm_sf_mf_9 * intrm_sf_mf_9 * 2.0 ; t928 = intermediate_der8698 *
1.5707963267948965E-8 ; t927 = intrm_sf_mf_4 >= 2000.0 ? intrm_sf_mf_4 : 1.0
; t929 = pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16 : t927 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16 : t927 )
+ 0.00017169489553429715 ) * 3.24 ; t929 = 1.0 / ( t929 == 0.0 ? 1.0E-16 :
t929 ) * 0.55 / 0.01 ; t932 = intermediate_der8698 * 1.2337005501361696E-8 ;
if ( - U_idx_2 >= 0.0 ) { t930 = - U_idx_2 ; } else { t930 = U_idx_2 ; } if (
intermediate_der7446 <= 0.0 ) { t931 = 0.0 ; } else { t931 =
intermediate_der7446 >= 1.0 ? 1.0 : intermediate_der7446 ; } if ( t1786 <=
0.0 ) { intermediate_der7446 = 0.0 ; } else { intermediate_der7446 = t1786 >=
1.0 ? 1.0 : t1786 ; } t933 = t930 * 0.01 ; t1786 = t933 / ( t925 == 0.0 ?
1.0E-16 : t925 ) ; t572 [ 0ULL ] = X [ 169ULL ] ;
tlu2_linear_nearest_prelookup ( & ag_efOut . mField0 [ 0ULL ] , & ag_efOut .
mField1 [ 0ULL ] , & ag_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t68 = ag_efOut ; tlu2_1d_linear_nearest_value ( & bg_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField38 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = bg_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & cg_efOut [ 0ULL ] , & t68 . mField0 [
0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField39 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = cg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & dg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField41 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = dg_efOut [ 0 ] ;
intrm_sf_mf_130 = ( ( ( 1.0 - t931 ) - intermediate_der7446 ) * t693_idx_0 +
t688_idx_0 * t931 ) + t692_idx_0 * intermediate_der7446 ; t935 =
intrm_sf_mf_1326 + t901 ; t937 = t935 / 2.0 * 0.00093750000000000007 ;
intrm_sf_mf_1326 = t902 / ( t937 == 0.0 ? 1.0E-16 : t937 ) ; t902 =
intrm_sf_mf_1326 >= 0.0 ? intrm_sf_mf_1326 : - intrm_sf_mf_1326 ; t937 = t902
> 1000.0 ? t902 : 1000.0 ; t938 = t900 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ; if ( t938 /
2.0 > 0.5 ) { intrm_sf_mf_1329 = ( t900 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) / 2.0 ; }
else { intrm_sf_mf_1329 = 0.5 ; } t940 = pmf_log10 ( 6.9 / ( t937 == 0.0 ?
1.0E-16 : t937 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( t937 == 0.0
? 1.0E-16 : t937 ) + 0.00069701528436089772 ) * 3.24 ; t939 = 1.0 / ( t940 ==
0.0 ? 1.0E-16 : t940 ) ; t942 = ( pmf_pow ( intrm_sf_mf_1329 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t939 / 8.0 ) * 12.7 + 1.0 ; t940 =
( t937 - 1000.0 ) * ( t939 / 8.0 ) * intrm_sf_mf_1329 / ( t942 == 0.0 ?
1.0E-16 : t942 ) ; t941 = ( t902 - 2000.0 ) / 2000.0 ; t943 = t941 * t941 *
3.0 - t941 * t941 * t941 * 2.0 ; if ( t902 <= 2000.0 ) { intrm_sf_mf_1334 =
3.66 ; } else if ( t902 >= 4000.0 ) { intrm_sf_mf_1334 = t940 ; } else {
intrm_sf_mf_1334 = ( 1.0 - t943 ) * 3.66 + t940 * t943 ; } t944 =
intrm_sf_mf_1334 * 1.3250000000000002 ; t947 = t938 / 2.0 ; if ( t902 > t944
/ 0.00093750000000000007 / ( t947 == 0.0 ? 1.0E-16 : t947 ) / 30.0 ) { t953 =
( t900 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) /
2.0 ; t946 = intrm_sf_mf_1334 * 1.3250000000000002 / ( t902 == 0.0 ? 1.0E-16
: t902 ) / 0.00093750000000000007 / ( t953 == 0.0 ? 1.0E-16 : t953 ) ; } else
{ t946 = 30.0 ; } t947 = ( X [ 61ULL ] - X [ 444ULL ] ) * ( 1.0 - exp ( -
t946 ) ) ; t954 = intrm_sf_mf_1326 * 0.00093750000000000007 ; t956 = U_idx_7
+ U_idx_10 ; t957 = intrm_sf_mf_1339 + t901 ; t959 = t957 / 2.0 *
0.00093750000000000007 ; intrm_sf_mf_1338 = - intrm_sf_mf_1338 *
0.0028301886792452828 / ( t959 == 0.0 ? 1.0E-16 : t959 ) ; intrm_sf_mf_1339 =
intrm_sf_mf_1338 >= 0.0 ? intrm_sf_mf_1338 : - intrm_sf_mf_1338 ; if ( t844
<= 0.0 ) { t948 = 0.0 ; } else { t948 = t844 >= 1.0 ? 1.0 : t844 ; } t844 =
intrm_sf_mf_1339 > 1000.0 ? intrm_sf_mf_1339 : 1000.0 ; t960 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ; if ( t960 /
2.0 > 0.5 ) { t949 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) / 2.0 ; }
else { t949 = 0.5 ; } t962 = pmf_log10 ( 6.9 / ( t844 == 0.0 ? 1.0E-16 : t844
) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( t844 == 0.0 ? 1.0E-16 :
t844 ) + 0.00069701528436089772 ) * 3.24 ; t950 = 1.0 / ( t962 == 0.0 ?
1.0E-16 : t962 ) ; t964 = ( pmf_pow ( t949 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t950 / 8.0 ) * 12.7 + 1.0 ; t951 = ( t844 - 1000.0 ) * ( t950 /
8.0 ) * t949 / ( t964 == 0.0 ? 1.0E-16 : t964 ) ; t952 = ( intrm_sf_mf_1339 -
2000.0 ) / 2000.0 ; t953 = t952 * t952 * 3.0 - t952 * t952 * t952 * 2.0 ; if
( intrm_sf_mf_1339 <= 2000.0 ) { t958 = 3.66 ; } else if ( intrm_sf_mf_1339
>= 4000.0 ) { t958 = t951 ; } else { t958 = ( 1.0 - t953 ) * 3.66 + t951 *
t953 ; } t966 = t958 * 1.3250000000000002 ; t969 = t960 / 2.0 ; if (
intrm_sf_mf_1339 > t966 / 0.00093750000000000007 / ( t969 == 0.0 ? 1.0E-16 :
t969 ) / 30.0 ) { intrm_sf_mf_150 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) / 2.0 ; t959
= t958 * 1.3250000000000002 / ( intrm_sf_mf_1339 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1339 ) / 0.00093750000000000007 / ( intrm_sf_mf_150 == 0.0 ?
1.0E-16 : intrm_sf_mf_150 ) ; } else { t959 = 30.0 ; } t961 = ( X [ 61ULL ] -
X [ 430ULL ] ) * ( 1.0 - exp ( - t959 ) ) ; t976 = intrm_sf_mf_1338 *
0.00093750000000000007 ; t978 = intrm_sf_mf_168 + U_idx_10 ; if (
intermediate_der6496 <= 0.0 ) { intrm_sf_mf_168 = 0.0 ; } else {
intrm_sf_mf_168 = intermediate_der6496 >= 1.0 ? 1.0 : intermediate_der6496 ;
} intermediate_der6496 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato4 - - 20.0 ) /
40.0 ; t962 = intermediate_der6496 * intermediate_der6496 * 3.0 -
intermediate_der6496 * intermediate_der6496 * intermediate_der6496 * 2.0 ;
t963 = t1552 >= 0.0 ? t1552 : - t1552 ; t965 = t963 * 0.0028301886792452828 /
( t903 == 0.0 ? 1.0E-16 : t903 ) ; t968 = t965 >= 1.0 ? t965 : 1.0 ; t982 =
pmf_log10 ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772 )
* pmf_log10 ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772
) * 3.24 ; t969 = 1.0 / ( t982 == 0.0 ? 1.0E-16 : t982 ) ; t984 =
intrm_sf_mf_1358 * 1.50186899252403E-8 ; t986 = intrm_sf_mf_1358 *
4.97494103773585E-9 ; t971 = ( t965 - 2000.0 ) / 2000.0 ; t572 [ 0ULL ] = X [
188ULL ] ; tlu2_linear_nearest_prelookup ( & eg_efOut . mField0 [ 0ULL ] , &
eg_efOut . mField1 [ 0ULL ] , & eg_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ]
, & t74 [ 0ULL ] ) ; t58 = eg_efOut ; tlu2_1d_linear_nearest_value ( &
fg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField38 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = fg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gg_efOut [
0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField39 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t688_idx_0 = gg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hg_efOut [
0ULL ] , & t58 . mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField41 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t692_idx_0 = hg_efOut [ 0 ] ; t972 = ( ( ( 1.0 - t948 ) - intrm_sf_mf_168
) * t693_idx_0 + t688_idx_0 * t948 ) + t692_idx_0 * intrm_sf_mf_168 ; t973 =
t971 * t971 * 3.0 - t971 * t971 * t971 * 2.0 ; tlu2_1d_linear_nearest_value (
& ig_efOut [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t570 [ 0ULL ] , & t74 [ 0ULL
] ) ; t693_idx_0 = ig_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & jg_efOut
[ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField39 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t688_idx_0 = jg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & kg_efOut [
0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField41 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t692_idx_0 = kg_efOut [ 0 ] ; t974 = ( ( ( 1.0 - t827 ) -
intermediate_der7917 ) * t693_idx_0 + t688_idx_0 * t827 ) + t692_idx_0 *
intermediate_der7917 ; t827 = t1786 >= 2000.0 ? t1786 : 1.0 ;
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = lg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = mg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ng_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = ng_efOut [ 0 ] ;
intermediate_der7917 = ( ( ( 1.0 - t931 ) - intermediate_der7446 ) *
t693_idx_0 + t688_idx_0 * t931 ) + t692_idx_0 * intermediate_der7446 ;
tlu2_1d_linear_nearest_value ( & og_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = og_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = pg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = qg_efOut [ 0 ] ; t988 = ( (
( ( 1.0 - t931 ) - intermediate_der7446 ) * t693_idx_0 + t688_idx_0 * t931 )
+ t692_idx_0 * intermediate_der7446 ) + t71 ; t990 = t988 / 2.0 *
7.8539816339744827E-5 ; intermediate_der7446 = t841 / ( t990 == 0.0 ? 1.0E-16
: t990 ) ; t991 = pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16 : t827 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16 : t827 )
+ 0.00017169489553429715 ) * 3.24 ; t931 = 1.0 / ( t991 == 0.0 ? 1.0E-16 :
t991 ) * 0.55 / 0.01 ; intrm_sf_mf_150 = intermediate_der7446 >= 0.0 ?
intermediate_der7446 : - intermediate_der7446 ; t841 = intrm_sf_mf_150 >
1000.0 ? intrm_sf_mf_150 : 1000.0 ; t993 = intrm_sf_mf_130 + t974 ; if ( t993
/ 2.0 > 0.5 ) { t979 = ( intrm_sf_mf_130 + t974 ) / 2.0 ; } else { t979 = 0.5
; } zc_int360 = pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16 : t841 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16 : t841 )
+ 0.00017169489553429715 ) * 3.24 ; t980 = 1.0 / ( zc_int360 == 0.0 ? 1.0E-16
: zc_int360 ) ; t997 = ( pmf_pow ( t979 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t980 / 8.0 ) * 12.7 + 1.0 ; t982 = ( t841 - 1000.0 ) * ( t980 /
8.0 ) * t979 / ( t997 == 0.0 ? 1.0E-16 : t997 ) ; t983 = ( intrm_sf_mf_150 -
2000.0 ) / 2000.0 ; t985 = t983 * t983 * 3.0 - t983 * t983 * t983 * 2.0 ; if
( intrm_sf_mf_150 <= 2000.0 ) { t987 = 3.66 ; } else if ( intrm_sf_mf_150 >=
4000.0 ) { t987 = t982 ; } else { t987 = ( 1.0 - t985 ) * 3.66 + t982 * t985
; } t999 = t987 * 0.031415926535897927 ; t1002 = t993 / 2.0 ; if (
intrm_sf_mf_150 > t999 / 7.8539816339744827E-5 / ( t1002 == 0.0 ? 1.0E-16 :
t1002 ) / 30.0 ) { U_idx_3 = ( intrm_sf_mf_130 + t974 ) / 2.0 ; t990 = t987 *
0.031415926535897927 / ( intrm_sf_mf_150 == 0.0 ? 1.0E-16 : intrm_sf_mf_150 )
/ 7.8539816339744827E-5 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; } else {
t990 = 30.0 ; } t991 = ( X [ 173ULL ] - X [ 169ULL ] ) * ( 1.0 - exp ( - t990
) ) ; t992 = U_idx_2 * intermediate_der10956 * - 35.2 / ( t928 == 0.0 ?
1.0E-16 : t928 ) * 1.0E-5 ; t1011 = intermediate_der7446 *
7.8539816339744827E-5 ; t1013 = intermediate_der7917 + t831 ;
tlu2_1d_linear_nearest_value ( & rg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = rg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = sg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = tg_efOut [ 0 ] ;
intrm_sf_mf_179 = ( ( ( 1.0 - t948 ) - intrm_sf_mf_168 ) * t693_idx_0 +
t688_idx_0 * t948 ) + t692_idx_0 * intrm_sf_mf_168 ;
tlu2_1d_linear_nearest_value ( & ug_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = ug_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = vg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wg_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = wg_efOut [ 0 ] ; t1014 = (
( ( ( 1.0 - t948 ) - intrm_sf_mf_168 ) * t693_idx_0 + t688_idx_0 * t948 ) +
t692_idx_0 * intrm_sf_mf_168 ) + t71 ; t1016 = t1014 / 2.0 *
7.8539816339744827E-5 ; t833 = - t833 * 0.01 / ( t1016 == 0.0 ? 1.0E-16 :
t1016 ) ; if ( X [ 548ULL ] <= 0.0 ) { intrm_sf_mf_168 = 0.0 ; } else {
intrm_sf_mf_168 = X [ 548ULL ] >= 1.0 ? 1.0 : X [ 548ULL ] ; } if ( X [
547ULL ] <= 0.0 ) { t948 = 0.0 ; } else { t948 = X [ 547ULL ] >= 1.0 ? 1.0 :
X [ 547ULL ] ; } zc_int360 = ( ( ( 1.0 - intrm_sf_mf_168 ) - t948 ) *
296.802103844292 + intrm_sf_mf_168 * 461.523 ) + t948 * 4124.48151675695 ;
t572 [ 0ULL ] = X [ 546ULL ] ; tlu2_linear_linear_prelookup ( & xg_efOut .
mField0 [ 0ULL ] , & xg_efOut . mField1 [ 0ULL ] , & xg_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [ 0ULL ] , &
t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t65 = xg_efOut ;
tlu2_1d_linear_linear_value ( & yg_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = yg_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ah_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t688_idx_0 = ah_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & bh_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t692_idx_0 = bh_efOut [ 0 ] ; t996 = ( (
( 1.0 - intrm_sf_mf_168 ) - t948 ) * t693_idx_0 + t688_idx_0 *
intrm_sf_mf_168 ) + t692_idx_0 * t948 ; intrm_sf_mf_168 = t833 >= 0.0 ? t833
: - t833 ; t948 = intrm_sf_mf_168 > 1000.0 ? intrm_sf_mf_168 : 1000.0 ; t572
[ 0ULL ] = X [ 169ULL ] ; tlu2_linear_linear_prelookup ( & ch_efOut . mField0
[ 0ULL ] , & ch_efOut . mField1 [ 0ULL ] , & ch_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL
] , & t74 [ 0ULL ] ) ; t35 = ch_efOut ; tlu2_1d_linear_linear_value ( &
dh_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = dh_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & eh_efOut [
0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t688_idx_0 = eh_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fh_efOut [
0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t692_idx_0 = fh_efOut [ 0 ] ; t998 = ( ( ( 1.0 - intermediate_der11705 )
- t1774 ) * t693_idx_0 + t688_idx_0 * intermediate_der11705 ) + t692_idx_0 *
t1774 ; t1019 = t972 + t974 ; if ( t1019 / 2.0 > 0.5 ) { t1774 = ( t972 +
t974 ) / 2.0 ; } else { t1774 = 0.5 ; } t1021 = pmf_log10 ( 6.9 / ( t948 ==
0.0 ? 1.0E-16 : t948 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t948
== 0.0 ? 1.0E-16 : t948 ) + 0.00017169489553429715 ) * 3.24 ; t1001 = 1.0 / (
t1021 == 0.0 ? 1.0E-16 : t1021 ) ; t1023 = ( pmf_pow ( t1774 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1001 / 8.0 ) * 12.7 + 1.0 ; t1002
= ( t948 - 1000.0 ) * ( t1001 / 8.0 ) * t1774 / ( t1023 == 0.0 ? 1.0E-16 :
t1023 ) ; t1003 = ( intrm_sf_mf_168 - 2000.0 ) / 2000.0 ; t1004 = t1003 *
t1003 * 3.0 - t1003 * t1003 * t1003 * 2.0 ; if ( intrm_sf_mf_168 <= 2000.0 )
{ t1005 = 3.66 ; } else if ( intrm_sf_mf_168 >= 4000.0 ) { t1005 = t1002 ; }
else { t1005 = ( 1.0 - t1004 ) * 3.66 + t1002 * t1004 ; } t1025 = t1005 *
0.031415926535897927 ; t1028 = t1019 / 2.0 ; if ( intrm_sf_mf_168 > t1025 /
7.8539816339744827E-5 / ( t1028 == 0.0 ? 1.0E-16 : t1028 ) / 30.0 ) { t1034 =
( t972 + t974 ) / 2.0 ; t1006 = t1005 * 0.031415926535897927 / (
intrm_sf_mf_168 == 0.0 ? 1.0E-16 : intrm_sf_mf_168 ) / 7.8539816339744827E-5
/ ( t1034 == 0.0 ? 1.0E-16 : t1034 ) ; } else { t1006 = 30.0 ; } t1007 = ( X
[ 173ULL ] - X [ 188ULL ] ) * ( 1.0 - exp ( - t1006 ) ) ; t1035 = t833 *
7.8539816339744827E-5 ; intermediate_der7917 = t831 + intrm_sf_mf_179 ;
intrm_sf_mf_179 = ( intermediate_der11822 - - 20.0 ) / 40.0 ; t1009 = ( t1786
- 2000.0 ) / 2000.0 ; t1015 = intrm_sf_mf_179 * intrm_sf_mf_179 * 3.0 -
intrm_sf_mf_179 * intrm_sf_mf_179 * intrm_sf_mf_179 * 2.0 ; t1016 = t1009 *
t1009 * 3.0 - t1009 * t1009 * t1009 * 2.0 ; t1017 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; t1020 =
t1017 * 0.01 / ( t834 == 0.0 ? 1.0E-16 : t834 ) ; t1021 = t1020 >= 1.0 ?
t1020 : 1.0 ; t1044 = pmf_log10 ( 6.9 / ( t1021 == 0.0 ? 1.0E-16 : t1021 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1021 == 0.0 ? 1.0E-16 : t1021
) + 0.00017169489553429715 ) * 3.24 ; t1022 = 1.0 / ( t1044 == 0.0 ? 1.0E-16
: t1044 ) ; t1028 = ( t1020 - 2000.0 ) / 2000.0 ; t1029 = t1028 * t1028 * 3.0
- t1028 * t1028 * t1028 * 2.0 ; t1051 = intermediate_der8271 *
7.8539816339744827E-5 ; t1030 = t924 / ( t1051 == 0.0 ? 1.0E-16 : t1051 ) ;
t1031 = t1030 >= 2000.0 ? t1030 : 1.0 ; t1052 = pmf_log10 ( 6.9 / ( t1031 ==
0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1031 == 0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715 ) * 3.24 ; t1032 =
1.0 / ( t1052 == 0.0 ? 1.0E-16 : t1052 ) * 0.55 / 0.01 ; t1055 =
intermediate_der10350 * 1.5707963267948965E-8 ; t1057 = intermediate_der10350
* 1.2337005501361696E-8 ; t1034 = ( t1030 - 2000.0 ) / 2000.0 ;
intermediate_der10350 = t1034 * t1034 * 3.0 - t1034 * t1034 * t1034 * 2.0 ;
t1039 = t933 / ( t1051 == 0.0 ? 1.0E-16 : t1051 ) ; t1041 = t1039 >= 2000.0 ?
t1039 : 1.0 ; t1061 = pmf_log10 ( 6.9 / ( t1041 == 0.0 ? 1.0E-16 : t1041 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1041 == 0.0 ? 1.0E-16 : t1041
) + 0.00017169489553429715 ) * 3.24 ; t1042 = 1.0 / ( t1061 == 0.0 ? 1.0E-16
: t1061 ) * 0.55 / 0.01 ; t1044 = U_idx_2 * intermediate_der8271 * - 35.2 / (
t1055 == 0.0 ? 1.0E-16 : t1055 ) * 1.0E-5 ; t1047 = ( t1039 - 2000.0 ) /
2000.0 ; t1049 = t1047 * t1047 * 3.0 - t1047 * t1047 * t1047 * 2.0 ; t1069 =
intermediate_der10423 * 7.8539816339744827E-5 ; t1052 = t924 / ( t1069 == 0.0
? 1.0E-16 : t1069 ) ; t924 = t1052 >= 2000.0 ? t1052 : 1.0 ; t1070 =
pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16 : t924 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16 : t924 ) + 0.00017169489553429715
) * 3.24 ; t1053 = 1.0 / ( t1070 == 0.0 ? 1.0E-16 : t1070 ) * 0.55 / 0.01 ;
t1073 = intermediate_der10900 * 1.5707963267948965E-8 ; t1075 =
intermediate_der10900 * 1.2337005501361696E-8 ; t1056 = ( t1052 - 2000.0 ) /
2000.0 ; t1058 = t1056 * t1056 * 3.0 - t1056 * t1056 * t1056 * 2.0 ; t1061 =
t933 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) ; t933 = t1061 >= 2000.0 ? t1061 :
1.0 ; t1079 = pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 )
+ 0.00017169489553429715 ) * 3.24 ; t1062 = 1.0 / ( t1079 == 0.0 ? 1.0E-16 :
t1079 ) * 0.55 / 0.01 ; t1067 = ( t1061 - 2000.0 ) / 2000.0 ; t1070 = t1067 *
t1067 * 3.0 - t1067 * t1067 * t1067 * 2.0 ; t1087 = t884 - ( - t884 ) ; t1071
= ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 -
1.01325 ) - ( - t884 ) ) / ( t1087 == 0.0 ? 1.0E-16 : t1087 ) ; t1074 =
pmf_sqrt ( intermediate_der11685 * intermediate_der11685 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 32ULL ] != 0 ) * 2.0 - 1.0 ) * X [
193ULL ] * intermediate_der11572 * intrm_sf_mf_89 * 1.0E-9 ) ; if ( M [
305ULL ] != 0 ) { zc_int116 = 216.59999999999997 ; } else { zc_int116 = M [
306ULL ] != 0 ? 623.15 : U_idx_6 ; } t572 [ 0ULL ] = U_idx_5 >= 0.0 ?
zc_int116 : X [ 33ULL ] ; tlu2_linear_linear_prelookup ( & gh_efOut . mField0
[ 0ULL ] , & gh_efOut . mField1 [ 0ULL ] , & gh_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL
] , & t74 [ 0ULL ] ) ; t68 = gh_efOut ; tlu2_1d_linear_linear_value ( &
hh_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ]
) ; t693_idx_0 = hh_efOut [ 0 ] ; zc_int116 = t693_idx_0 ; t1079 = - pmf_sqrt
( ( ( real_T ) ( M [ 50ULL ] != 0 ) * 2.0 - 1.0 ) * ( t826 / ( intrm_sf_mf_89
== 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) / ( X [ 193ULL ] == 0.0 ? 1.0E-16 : X [
193ULL ] ) ) ) * 7.8539816339744827E-5 ; t826 = t71 * t1079 * 35.2 / ( t832
== 0.0 ? 1.0E-16 : t832 ) ; if ( t761 >= 0.0 ) { U_idx_10 = t1079 * 100000.0
; } else { U_idx_10 = - t1079 * 100000.0 ; } t761 = U_idx_10 * 0.01 / ( t834
== 0.0 ? 1.0E-16 : t834 ) ; zc_int189 = pmf_sqrt ( t1681 * t1681 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 321ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 324ULL ] * t1707 * t1738 * 1.0E-9 ) ; t1707 = intermediate_der11719 >= 1.0
? t761 : 1.0 ; t1738 = - pmf_sqrt ( ( ( real_T ) ( M [ 323ULL ] != 0 ) * 2.0
- 1.0 ) * ( t872 / ( t1738 == 0.0 ? 1.0E-16 : t1738 ) / ( X [ 324ULL ] == 0.0
? 1.0E-16 : X [ 324ULL ] ) ) ) * 0.0019634954084936209 ; t1681 = zc_int180 *
t1738 * 35.2 / ( t878 == 0.0 ? 1.0E-16 : t878 ) ; U_idx_7 = pmf_log10 ( 6.9 /
( t1707 == 0.0 ? 1.0E-16 : t1707 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1707 == 0.0 ? 1.0E-16 : t1707 ) + 0.00017169489553429715 ) * 3.24 ;
if ( t864 >= 0.0 ) { zc_int180 = t1738 * 100000.0 ; } else { zc_int180 = -
t1738 * 100000.0 ; } t864 = zc_int180 * 0.05 / ( t876 == 0.0 ? 1.0E-16 : t876
) ; U_idx_3 = t866 >= 1.0 ? t864 : 1.0 ; t1103 = pmf_log10 ( 6.9 / ( U_idx_3
== 0.0 ? 1.0E-16 : U_idx_3 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) + 2.8767404433520813E-5 ) * 3.24 ; t1738
= t1738 * zc_int180 * ( 1.0 / ( t1103 == 0.0 ? 1.0E-16 : t1103 ) ) * 0.55 / (
t881 == 0.0 ? 1.0E-16 : t881 ) ; zc_int180 = ( t864 - 2000.0 ) / 2000.0 ;
t864 = zc_int180 * zc_int180 * 3.0 - zc_int180 * zc_int180 * zc_int180 * 2.0
; if ( t866 <= 2000.0 ) { zc_int180 = t1681 * 1.0E-5 ; } else if ( t866 >=
4000.0 ) { zc_int180 = t1738 * 1.0E-5 ; } else { zc_int180 = ( ( 1.0 - t864 )
* t1681 + t1738 * t864 ) * 1.0E-5 ; } t1738 = - ( X [ 307ULL ] * zc_int189 )
/ 0.0019634954084936209 * 0.00031622776601683789 + zc_int180 ;
intermediate_der10900 = - t1738 - t1738 * - 0.95 ; t1681 = ( - t1692 - t1738
* - 0.95 ) / ( intermediate_der10900 == 0.0 ? 1.0E-16 : intermediate_der10900
) ; t1707 = t1079 * U_idx_10 * ( 1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 )
) * 0.55 / ( t837 == 0.0 ? 1.0E-16 : t837 ) ; t864 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) *
pmf_sqrt ( ( ( real_T ) ( M [ 327ULL ] != 0 ) * 2.0 - 1.0 ) * ( t899 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ) )
) * intrm_sf_mf_828 * 0.64 ; t866 = pmf_sqrt ( ( ( real_T ) ( M [ 329ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t896 / ( t877 == 0.0 ? 1.0E-16 : t877 ) / ( X [ 337ULL
] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ) * intrm_sf_mf_828 * 0.64 ; zc_int180
= t866 - t866 * 0.95 ; t1079 = ( t864 - t866 * 0.95 ) / ( zc_int180 == 0.0 ?
1.0E-16 : zc_int180 ) ; zc_int189 = ( - t864 - t866 * 0.95 ) / ( zc_int180 ==
0.0 ? 1.0E-16 : zc_int180 ) ; t761 = ( t761 - 2000.0 ) / 2000.0 ; t872 = t761
* t761 * 3.0 - t761 * t761 * t761 * 2.0 ; if ( intermediate_der11719 <=
2000.0 ) { t761 = t826 * 1.0E-5 ; } else if ( intermediate_der11719 >= 4000.0
) { t761 = t1707 * 1.0E-5 ; } else { t761 = ( ( 1.0 - t872 ) * t826 + t1707 *
t872 ) * 1.0E-5 ; } intermediate_der11719 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * t1074 /
7.8539816339744827E-5 * 0.00031622776601683789 + t761 ; intermediate_der11705
= - intermediate_der11719 - intermediate_der11719 * - 0.95 ; t761 = ( - t825
- intermediate_der11719 * - 0.95 ) / ( intermediate_der11705 == 0.0 ? 1.0E-16
: intermediate_der11705 ) ; if ( M [ 350ULL ] != 0 ) { t826 =
216.59999999999997 ; } else { t826 = M [ 351ULL ] != 0 ? 623.15 : U_idx_9 ; }
t572 [ 0ULL ] = U_idx_8 >= 0.0 ? t826 : X [ 50ULL ] ;
tlu2_linear_linear_prelookup ( & ih_efOut . mField0 [ 0ULL ] , & ih_efOut .
mField1 [ 0ULL ] , & ih_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ;
t35 = ih_efOut ; tlu2_1d_linear_linear_value ( & jh_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = jh_efOut [
0 ] ; t826 = t693_idx_0 ; t872 = ( X [ 63ULL ] - X [ 478ULL ] ) * pmf_sqrt (
( ( real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0 ) * ( t921 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ) )
) * intrm_sf_mf_1537 * 0.64 ; t876 = pmf_sqrt ( ( ( real_T ) ( M [ 21ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t918 / ( intrm_sf_mf_1546 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1546 ) / ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) *
intrm_sf_mf_1537 * 0.64 ; t688_idx_0 = t876 - t876 * 0.95 ; t878 = ( t872 -
t876 * 0.95 ) / ( t688_idx_0 == 0.0 ? 1.0E-16 : t688_idx_0 ) ; t881 = t878 *
t878 * 3.0 - t878 * t878 * t878 * 2.0 ; t896 = ( - t872 - t876 * 0.95 ) / (
t688_idx_0 == 0.0 ? 1.0E-16 : t688_idx_0 ) ; t692_idx_0 = t896 * t896 * 3.0 -
t896 * t896 * t896 * 2.0 ; t1128 = X [ 546ULL ] * zc_int360 ; zc_int360 = ( (
real_T ) ( M [ 36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1128 / ( X [ 37ULL ] == 0.0
? 1.0E-16 : X [ 37ULL ] ) ) * ( t1128 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) * ( t919 / 7.8539816339744827E-5 ) * ( t919 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t996 ; U_idx_9 = X [
169ULL ] * zc_int362 ; zc_int362 = ( ( real_T ) ( M [ 36ULL ] != 0 ) * 2.0 -
1.0 ) * ( t1128 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t1128
/ ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( - t919 /
7.8539816339744827E-5 ) * ( - t919 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t996 ; U_idx_11 = X [ 566ULL ] * zc_int367 ; t996 = (
( real_T ) ( M [ 40ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_11 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( U_idx_11 / ( X [ 37ULL ] == 0.0 ? 1.0E-16
: X [ 37ULL ] ) ) * ( t919 / 7.8539816339744827E-5 ) * ( t919 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int365 ; t831 = X
[ 563ULL ] * zc_int367 ; zc_int365 = ( ( real_T ) ( M [ 41ULL ] != 0 ) * 2.0
- 1.0 ) * ( t831 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * (
t831 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t919 /
7.8539816339744827E-5 ) * ( t919 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + zc_int366 ; U_idx_4 = X [ 565ULL ] * zc_int367 ;
zc_int366 = ( ( real_T ) ( M [ 42ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_4 / ( X
[ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( U_idx_4 / ( X [ 170ULL ]
== 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( - t919 / 7.8539816339744827E-5 ) * (
- t919 / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int43 ;
U_idx_6 = X [ 564ULL ] * zc_int367 ; zc_int367 = ( ( real_T ) ( M [ 43ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( U_idx_6 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL
] ) ) * ( U_idx_6 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( -
t919 / 7.8539816339744827E-5 ) * ( - t919 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + zc_int42 ; zc_int42 = ( X [ 189ULL ] - 1.01325 ) *
pmf_sqrt ( ( ( real_T ) ( M [ 126ULL ] != 0 ) * 2.0 - 1.0 ) * ( t863 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) )
) * t845 * 0.64 ; zc_int43 = pmf_sqrt ( ( ( real_T ) ( M [ 137ULL ] != 0 ) *
2.0 - 1.0 ) * ( t860 / ( t1747 == 0.0 ? 1.0E-16 : t1747 ) / ( X [ 213ULL ] ==
0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ) * t845 * 0.64 ; t1178 = zc_int43 -
zc_int43 * 0.95 ; t1086 = ( zc_int42 - zc_int43 * 0.95 ) / ( t1178 == 0.0 ?
1.0E-16 : t1178 ) ; t1089 = t1086 * t1086 * 3.0 - t1086 * t1086 * t1086 * 2.0
; t1091 = ( - zc_int42 - zc_int43 * 0.95 ) / ( t1178 == 0.0 ? 1.0E-16 : t1178
) ; t1093 = t1091 * t1091 * 3.0 - t1091 * t1091 * t1091 * 2.0 ; t1107 =
pmf_sqrt ( U_idx_2 * U_idx_2 + 4.5311819630628225E-12 ) * 2.0 ; t1101 = 1.0 /
( t1107 == 0.0 ? 1.0E-16 : t1107 ) * U_idx_2 * 2.0 ; t1187 =
intermediate_der7398 * intermediate_der7398 ; t1103 = ( - U_idx_2 / ( t1187
== 0.0 ? 1.0E-16 : t1187 ) * t1101 + 1.0 / ( intermediate_der7398 == 0.0 ?
1.0E-16 : intermediate_der7398 ) ) * X [ 90ULL ] / ( t1929 == 0.0 ? 1.0E-16 :
t1929 ) ; t1929 = - ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101
+ 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) /
2.0 ; t1104 = ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 + 1.0
/ ( intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) / 2.0 ;
t1106 = 1.0 / ( t1107 == 0.0 ? 1.0E-16 : t1107 ) * U_idx_2 * 2.0 ; t1196 =
intermediate_der7398 * intermediate_der7398 ; t1107 = ( U_idx_2 / ( t1196 ==
0.0 ? 1.0E-16 : t1196 ) * t1106 + - 1.0 / ( intermediate_der7398 == 0.0 ?
1.0E-16 : intermediate_der7398 ) ) * X [ 92ULL ] / ( t1926 == 0.0 ? 1.0E-16 :
t1926 ) ; t1926 = - ( U_idx_2 / ( t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 +
- 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) /
2.0 ; t1108 = ( U_idx_2 / ( t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 + - 1.0
/ ( intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) / 2.0 ;
t1110 = ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 + 1.0 / (
intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) * X [ 99ULL
] / ( t1901 == 0.0 ? 1.0E-16 : t1901 ) ; t1901 = ( U_idx_2 / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) * t1106 + - 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 :
intermediate_der7398 ) ) * X [ 101ULL ] / ( t1867 == 0.0 ? 1.0E-16 : t1867 )
; t1867 = ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 + 1.0 / (
intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398 ) ) * X [ 108ULL
] / ( t1872 == 0.0 ? 1.0E-16 : t1872 ) ; t1872 = ( U_idx_2 / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) * t1106 + - 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 :
intermediate_der7398 ) ) * X [ 110ULL ] / ( intermediate_der123 == 0.0 ?
1.0E-16 : intermediate_der123 ) ; intermediate_der123 = 1.0 ; U_idx_10 = (
intermediate_der190 >= 0.0 ? intermediate_der123 : - intermediate_der123 ) *
0.01 ; intermediate_der123 = U_idx_10 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) ;
t1241 = ( 6.9 / ( intermediate_der232 == 0.0 ? 1.0E-16 : intermediate_der232
) + 0.00017169489553429715 ) * 2.3025850929940459 ; U_idx_7 = pmf_log10 ( 6.9
/ ( intermediate_der232 == 0.0 ? 1.0E-16 : intermediate_der232 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der232 == 0.0 ?
1.0E-16 : intermediate_der232 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( intermediate_der232 == 0.0 ? 1.0E-16 : intermediate_der232 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der232 == 0.0 ?
1.0E-16 : intermediate_der232 ) + 0.00017169489553429715 ) *
10.497600000000002 ; U_idx_3 = intermediate_der232 * intermediate_der232 ;
t1235 = - 1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) * ( - 6.9 / ( U_idx_3
== 0.0 ? 1.0E-16 : U_idx_3 ) ) * ( 1.0 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) )
* pmf_log10 ( 6.9 / ( intermediate_der232 == 0.0 ? 1.0E-16 :
intermediate_der232 ) + 0.00017169489553429715 ) * ( t783 >= 2000.0 ?
intermediate_der123 : 0.0 ) * 6.48 ; U_idx_3 = pmf_sqrt ( intermediate_der235
/ 8.0 ) * 2.0 ; U_idx_7 = ( ( pmf_pow ( intermediate_der227 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intermediate_der235 / 8.0 ) * 12.7
+ 1.0 ) * ( ( pmf_pow ( intermediate_der227 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intermediate_der235 / 8.0 ) * 12.7 + 1.0 ) ; intermediate_der190 =
( pmf_pow ( intermediate_der227 , 0.66666666666666663 ) - 1.0 ) * ( - ( (
t784 - 1000.0 ) * ( intermediate_der235 / 8.0 ) * intermediate_der227 ) / (
U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * ( t1235 / 8.0 ) * ( 1.0 / ( U_idx_3
== 0.0 ? 1.0E-16 : U_idx_3 ) ) * 12.7 + ( ( t784 - 1000.0 ) * ( t1235 / 8.0 )
+ intermediate_der235 / 8.0 * ( t783 > 1000.0 ? intermediate_der123 : 0.0 ) )
* intermediate_der227 / ( t1313 == 0.0 ? 1.0E-16 : t1313 ) ; t784 =
intermediate_der123 / 2000.0 ; intermediate_der232 = t784 * t788 * 6.0 - t788
* t788 * t784 * 6.0 ; if ( t783 <= 2000.0 ) { t784 = 0.0 ; } else if ( t783
>= 4000.0 ) { t784 = intermediate_der190 ; } else { t784 = ( -
intermediate_der232 * 3.66 + t787 * intermediate_der232 ) +
intermediate_der190 * intermediate_der366 ; } t1241 = ( t783 + 1.0 ) * ( t783
+ 1.0 ) ; t1235 = ( - ( intermediate_der342 * 0.031415926535897927 ) / (
t1241 == 0.0 ? 1.0E-16 : t1241 ) * intermediate_der123 + t784 *
0.031415926535897927 / ( t783 + 1.0 == 0.0 ? 1.0E-16 : t783 + 1.0 ) ) /
7.8539816339744827E-5 ; t784 = 1.0 - exp ( - t791 ) ; intermediate_der232 = -
( - ( t1235 / ( intermediate_der227 == 0.0 ? 1.0E-16 : intermediate_der227 )
) * exp ( - t791 ) ) * ( U_idx_0 - t782 ) ; t1241 = t783 *
7.8539816339744827E-5 ; intrm_sf_mf_1358 = intermediate_der123 *
7.8539816339744827E-5 / 0.01 * intermediate_der227 * intermediate_der497 *
intermediate_der502 + t1241 / 0.01 * intermediate_der227 *
intermediate_der502 * intermediate_der232 ; intermediate_der123 = t1241 /
0.01 * intermediate_der227 * intermediate_der502 * t784 ; U_idx_3 = pmf_sqrt
( U_idx_2 * U_idx_2 + 1.8124727852251287E-13 ) * 2.0 ; intermediate_der190 =
1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * U_idx_2 * 2.0 ; t1235 =
intermediate_der532 * intermediate_der532 ; t782 = ( - U_idx_2 / ( t1235 ==
0.0 ? 1.0E-16 : t1235 ) * intermediate_der190 + 1.0 / ( intermediate_der532
== 0.0 ? 1.0E-16 : intermediate_der532 ) ) * X [ 110ULL ] / (
intermediate_der539 == 0.0 ? 1.0E-16 : intermediate_der539 ) ;
intermediate_der227 = - ( - U_idx_2 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) *
intermediate_der190 + 1.0 / ( intermediate_der532 == 0.0 ? 1.0E-16 :
intermediate_der532 ) ) / 2.0 ; t783 = ( - U_idx_2 / ( t1235 == 0.0 ? 1.0E-16
: t1235 ) * intermediate_der190 + 1.0 / ( intermediate_der532 == 0.0 ?
1.0E-16 : intermediate_der532 ) ) / 2.0 ; t784 = 1.0 / ( U_idx_3 == 0.0 ?
1.0E-16 : U_idx_3 ) * U_idx_2 * 2.0 ; t1241 = intermediate_der532 *
intermediate_der532 ; intermediate_der232 = ( U_idx_2 / ( t1241 == 0.0 ?
1.0E-16 : t1241 ) * t784 + - 1.0 / ( intermediate_der532 == 0.0 ? 1.0E-16 :
intermediate_der532 ) ) * X [ 117ULL ] / ( intermediate_der546 == 0.0 ?
1.0E-16 : intermediate_der546 ) ; intermediate_der235 = - ( U_idx_2 / ( t1241
== 0.0 ? 1.0E-16 : t1241 ) * t784 + - 1.0 / ( intermediate_der532 == 0.0 ?
1.0E-16 : intermediate_der532 ) ) / 2.0 ; t787 = ( U_idx_2 / ( t1241 == 0.0 ?
1.0E-16 : t1241 ) * t784 + - 1.0 / ( intermediate_der532 == 0.0 ? 1.0E-16 :
intermediate_der532 ) ) / 2.0 ; t788 = U_idx_10 / ( t1423 == 0.0 ? 1.0E-16 :
t1423 ) ; U_idx_3 = ( 6.9 / ( intermediate_der964 == 0.0 ? 1.0E-16 :
intermediate_der964 ) + 0.00017169489553429715 ) * 2.3025850929940459 ; t1313
= pmf_log10 ( 6.9 / ( intermediate_der964 == 0.0 ? 1.0E-16 :
intermediate_der964 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intermediate_der964 == 0.0 ? 1.0E-16 : intermediate_der964 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der964 == 0.0 ?
1.0E-16 : intermediate_der964 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( intermediate_der964 == 0.0 ? 1.0E-16 : intermediate_der964 ) +
0.00017169489553429715 ) * 10.497600000000002 ; U_idx_7 = intermediate_der964
* intermediate_der964 ; t791 = - 1.0 / ( t1313 == 0.0 ? 1.0E-16 : t1313 ) * (
- 6.9 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * ( 1.0 / ( U_idx_3 == 0.0 ?
1.0E-16 : U_idx_3 ) ) * pmf_log10 ( 6.9 / ( intermediate_der964 == 0.0 ?
1.0E-16 : intermediate_der964 ) + 0.00017169489553429715 ) * (
intermediate_der7437 >= 2000.0 ? t788 : 0.0 ) * 6.48 ; U_idx_3 = pmf_sqrt (
intermediate_der966 / 8.0 ) * 2.0 ; U_idx_7 = ( ( pmf_pow (
intermediate_der8645 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der966 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow (
intermediate_der8645 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der966 / 8.0 ) * 12.7 + 1.0 ) ; intermediate_der366 = ( pmf_pow
( intermediate_der8645 , 0.66666666666666663 ) - 1.0 ) * ( - ( ( t796 -
1000.0 ) * ( intermediate_der966 / 8.0 ) * intermediate_der8645 ) / ( U_idx_7
== 0.0 ? 1.0E-16 : U_idx_7 ) ) * ( t791 / 8.0 ) * ( 1.0 / ( U_idx_3 == 0.0 ?
1.0E-16 : U_idx_3 ) ) * 12.7 + ( ( t796 - 1000.0 ) * ( t791 / 8.0 ) +
intermediate_der966 / 8.0 * ( intermediate_der7437 > 1000.0 ? t788 : 0.0 ) )
* intermediate_der8645 / ( t1365 == 0.0 ? 1.0E-16 : t1365 ) ;
intermediate_der342 = t788 / 2000.0 ; t791 = intermediate_der342 * t800 * 6.0
- t800 * t800 * intermediate_der342 * 6.0 ; if ( intermediate_der7437 <=
2000.0 ) { intermediate_der342 = 0.0 ; } else if ( intermediate_der7437 >=
4000.0 ) { intermediate_der342 = intermediate_der366 ; } else {
intermediate_der342 = ( - t791 * 3.66 + t799 * t791 ) + intermediate_der366 *
t802 ; } U_idx_7 = ( intermediate_der7437 + 1.0 ) * ( intermediate_der7437 +
1.0 ) ; intermediate_der342 = - ( - ( ( - ( intermediate_der2150 *
0.031415926535897927 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) * t788 +
intermediate_der342 * 0.031415926535897927 / ( intermediate_der7437 + 1.0 ==
0.0 ? 1.0E-16 : intermediate_der7437 + 1.0 ) ) / 7.8539816339744827E-5 / (
intermediate_der8645 == 0.0 ? 1.0E-16 : intermediate_der8645 ) ) * exp ( -
t803 ) ) * ( X [ 10ULL ] - intermediate_der9819 ) ; t788 = t788 *
7.8539816339744827E-5 / 0.01 * intermediate_der8645 * t805 *
intermediate_der3624 + intermediate_der7437 * 7.8539816339744827E-5 / 0.01 *
intermediate_der8645 * intermediate_der3624 * intermediate_der342 ;
intermediate_der366 = ( - U_idx_2 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) *
intermediate_der190 + 1.0 / ( intermediate_der532 == 0.0 ? 1.0E-16 :
intermediate_der532 ) ) * X [ 92ULL ] / ( intermediate_der10340 == 0.0 ?
1.0E-16 : intermediate_der10340 ) ; intermediate_der342 = ( U_idx_2 / ( t1241
== 0.0 ? 1.0E-16 : t1241 ) * t784 + - 1.0 / ( intermediate_der532 == 0.0 ?
1.0E-16 : intermediate_der532 ) ) * X [ 99ULL ] / ( intermediate_der3615 ==
0.0 ? 1.0E-16 : intermediate_der3615 ) ; t791 = U_idx_10 / ( t1367 == 0.0 ?
1.0E-16 : t1367 ) ; U_idx_3 = ( 6.9 / ( t808 == 0.0 ? 1.0E-16 : t808 ) +
0.00017169489553429715 ) * 2.3025850929940459 ; t1313 = pmf_log10 ( 6.9 / (
t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) *
10.497600000000002 ; U_idx_7 = t808 * t808 ; intermediate_der539 = - 1.0 / (
t1313 == 0.0 ? 1.0E-16 : t1313 ) * ( - 6.9 / ( U_idx_7 == 0.0 ? 1.0E-16 :
U_idx_7 ) ) * ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * pmf_log10 (
6.9 / ( t808 == 0.0 ? 1.0E-16 : t808 ) + 0.00017169489553429715 ) * ( t807 >=
2000.0 ? t791 : 0.0 ) * 6.48 ; U_idx_3 = pmf_sqrt ( intermediate_der3716 /
8.0 ) * 2.0 ; U_idx_7 = ( ( pmf_pow ( intermediate_der3622 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intermediate_der3716 / 8.0 ) *
12.7 + 1.0 ) * ( ( pmf_pow ( intermediate_der3622 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( intermediate_der3716 / 8.0 ) * 12.7 + 1.0 ) ;
intermediate_der497 = ( pmf_pow ( intermediate_der3622 , 0.66666666666666663
) - 1.0 ) * ( - ( ( t785 - 1000.0 ) * ( intermediate_der3716 / 8.0 ) *
intermediate_der3622 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * (
intermediate_der539 / 8.0 ) * ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 )
) * 12.7 + ( ( t785 - 1000.0 ) * ( intermediate_der539 / 8.0 ) +
intermediate_der3716 / 8.0 * ( t807 > 1000.0 ? t791 : 0.0 ) ) *
intermediate_der3622 / ( t1427 == 0.0 ? 1.0E-16 : t1427 ) ;
intermediate_der502 = t791 / 2000.0 ; intermediate_der539 =
intermediate_der502 * t812 * 6.0 - t812 * t812 * intermediate_der502 * 6.0 ;
if ( t807 <= 2000.0 ) { intermediate_der502 = 0.0 ; } else if ( t807 >=
4000.0 ) { intermediate_der502 = intermediate_der497 ; } else {
intermediate_der502 = ( - intermediate_der539 * 3.66 + t811 *
intermediate_der539 ) + intermediate_der497 * t814 ; } U_idx_7 = ( t807 + 1.0
) * ( t807 + 1.0 ) ; intermediate_der502 = - ( - ( ( - ( intermediate_der3723
* 0.031415926535897927 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) * t791 +
intermediate_der502 * 0.031415926535897927 / ( t807 + 1.0 == 0.0 ? 1.0E-16 :
t807 + 1.0 ) ) / 7.8539816339744827E-5 / ( intermediate_der3622 == 0.0 ?
1.0E-16 : intermediate_der3622 ) ) * exp ( - t815 ) ) * ( X [ 12ULL ] -
intermediate_der3618 ) ; t791 = t791 * 7.8539816339744827E-5 / 0.01 *
intermediate_der3622 * t817 * t818 + t807 * 7.8539816339744827E-5 / 0.01 *
intermediate_der3622 * t818 * intermediate_der502 ; intermediate_der497 = ( -
U_idx_2 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) * intermediate_der190 + 1.0 / (
intermediate_der532 == 0.0 ? 1.0E-16 : intermediate_der532 ) ) * X [ 101ULL ]
/ ( intermediate_der3760 == 0.0 ? 1.0E-16 : intermediate_der3760 ) ;
intermediate_der502 = ( U_idx_2 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) * t784 +
- 1.0 / ( intermediate_der532 == 0.0 ? 1.0E-16 : intermediate_der532 ) ) * X
[ 108ULL ] / ( intermediate_der3763 == 0.0 ? 1.0E-16 : intermediate_der3763 )
; intermediate_der532 = ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) *
t1101 + 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 : intermediate_der7398
) ) * X [ 135ULL ] / ( intermediate_der3766 == 0.0 ? 1.0E-16 :
intermediate_der3766 ) ; intermediate_der539 = ( U_idx_2 / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) * t1106 + - 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 :
intermediate_der7398 ) ) * X [ 90ULL ] / ( intermediate_der3767 == 0.0 ?
1.0E-16 : intermediate_der3767 ) ; intermediate_der546 = ( X [ 90ULL ] - X [
135ULL ] ) / ( intermediate_der11675 == 0.0 ? 1.0E-16 : intermediate_der11675
) ; intermediate_der8645 = - 0.005 ; t1313 = intermediate_der8645 * 0.01 ;
U_idx_3 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 +
2.0360111955237585E-13 ) * 2.0 ; t796 = 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 :
U_idx_3 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
- 0.01 * 2.0 ; U_idx_3 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 +
2.3237892571262758E-14 ) * 2.0 ; intermediate_der964 = 1.0 / ( U_idx_3 == 0.0
? 1.0E-16 : U_idx_3 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * - 0.01 *
2.0 ; U_idx_3 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 +
1.6409606283812411E-14 ) * 2.0 ; intermediate_der966 = 1.0 / ( U_idx_3 == 0.0
? 1.0E-16 : U_idx_3 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * - 0.01 *
2.0 ; if ( intermediate_der4892 * 0.0001 <= 7.8539816339744857E-13 ) { t800 =
0.0 ; } else if ( intermediate_der4892 * 0.0001 >= 3.1415926535897929E-6 ) {
t800 = 0.0 ; } else { t800 = 3.1415926535897929E-6 ; } t799 = t800 /
7.8539816339744827E-5 ; if ( X [ 180ULL ] > 0.0 ) { U_idx_3 = t845 * t845 ;
t802 = ( ( ( t846 + 1.0 ) * ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 :
t845 ) * ( - ( X [ 180ULL ] / 0.64 ) / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 )
) * t800 * 2.0 / 2.0 / ( t1752 == 0.0 ? 1.0E-16 : t1752 ) ) + X [ 180ULL ] /
0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) * ( X [ 180ULL ] / 0.64 / ( t845 ==
0.0 ? 1.0E-16 : t845 ) ) / 2.0 / ( t1752 == 0.0 ? 1.0E-16 : t1752 ) * t799 )
* ( 1.0 - t846 * intermediate_der5079 ) + - ( intermediate_der5079 * t799 ) *
( t846 + 1.0 ) * ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) * (
X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) ) / 2.0 / ( t1752 ==
0.0 ? 1.0E-16 : t1752 ) ) ) * 9.9999999999999991E-11 ; } else if ( X [ 180ULL
] < 0.0 ) { U_idx_3 = t845 * t845 ; t802 = ( ( ( t846 + 1.0 ) * ( X [ 180ULL
] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) * ( - ( X [ 180ULL ] / 0.64 ) / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * t800 * 2.0 / 2.0 / ( t1752 == 0.0 ?
1.0E-16 : t1752 ) ) + X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 )
* ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) ) / 2.0 / ( t1752
== 0.0 ? 1.0E-16 : t1752 ) * t799 ) * ( 1.0 - t846 * t850 ) + - ( t850 * t799
) * ( t846 + 1.0 ) * ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 )
* ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) ) / 2.0 / ( t1752
== 0.0 ? 1.0E-16 : t1752 ) ) ) * 9.9999999999999991E-11 ; } else { t802 = 0.0
; } intermediate_der2150 = - t799 * ( 1.0 - t846 ) * 2.0 ; t803 =
intermediate_der5241 * intermediate_der2150 ; intermediate_der3624 = ( X [
189ULL ] - 1.01325 ) * ( intermediate_der5275 >= t851 ? ( ( 1.0 - t846 *
intermediate_der5079 ) * t799 + - ( intermediate_der5079 * t799 ) * ( t846 +
1.0 ) ) - ( ( 1.0 - t846 * t850 ) * t799 * 2.0 + - ( t850 * t799 ) * t846 *
2.0 ) : intermediate_der2150 ) ; if ( X [ 189ULL ] - 1.01325 <= 0.0 ) { t805
= t803 ; } else if ( X [ 189ULL ] - 1.01325 >= intermediate_der5241 ) { t805
= intermediate_der3624 ; } else { t805 = ( 1.0 - t857 ) * t803 +
intermediate_der3624 * t857 ; } t799 = ( 1.01325 - X [ 189ULL ] ) * (
intermediate_der5276 >= t851 ? ( ( 1.0 - t846 * t850 ) * t799 + - ( t850 *
t799 ) * ( t846 + 1.0 ) ) - ( ( 1.0 - t846 * intermediate_der5079 ) * t799 *
2.0 + - ( intermediate_der5079 * t799 ) * t846 * 2.0 ) : intermediate_der2150
) ; if ( 1.01325 - X [ 189ULL ] <= 0.0 ) { intermediate_der2150 = t803 ; }
else if ( 1.01325 - X [ 189ULL ] >= intermediate_der5241 ) {
intermediate_der2150 = t799 ; } else { intermediate_der2150 = ( 1.0 - t1678 )
* t803 + t799 * t1678 ; } if ( X [ 189ULL ] > 1.01325 ) { t799 = t805 ; }
else { t799 = X [ 189ULL ] < 1.01325 ? intermediate_der2150 : t803 ; }
U_idx_7 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ; t803 = X [
341ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) * ( - X [ 338ULL
] / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 ; if ( X [ 307ULL ] > 0.0
) { t805 = - ( t870 * t803 ) * ( t870 + 1.0 ) * ( X [ 307ULL ] / 0.64 / (
intrm_sf_mf_828 == 0.0 ? 1.0E-16 : intrm_sf_mf_828 ) * ( X [ 307ULL ] / 0.64
/ ( intrm_sf_mf_828 == 0.0 ? 1.0E-16 : intrm_sf_mf_828 ) ) / 2.0 / ( t879 ==
0.0 ? 1.0E-16 : t879 ) ) * 9.9999999999999991E-11 ; } else { t805 = 0.0 ; }
intermediate_der10340 = 0.0050000000000000044 ; intermediate_der3624 = t883 *
intermediate_der10340 ; intermediate_der3618 = ( t1533 >= t883 ? t1533 : t883
) * 10.0 + ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 -
1.01325 ) * ( t1533 >= t883 ? - ( t870 * t803 ) * ( t870 + 1.0 ) : 0.0 ) ;
t1423 = t884 * t884 ; intermediate_der3615 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) /
( t1423 == 0.0 ? 1.0E-16 : t1423 ) * intermediate_der10340 + 10.0 / ( t884 ==
0.0 ? 1.0E-16 : t884 ) ; intermediate_der3622 = intermediate_der3615 * t1581
* 6.0 - t1581 * t1581 * intermediate_der3615 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 <=
0.0 ) { intermediate_der3615 = intermediate_der3624 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 >=
t884 ) { intermediate_der3615 = intermediate_der3618 ; } else {
intermediate_der3615 = ( ( - intermediate_der3622 * t1624 + ( 1.0 - t1456 ) *
intermediate_der3624 ) + t1509 * intermediate_der3622 ) +
intermediate_der3618 * t1456 ; } t803 = - 10.0 * ( t1465 >= t883 ? t1465 :
t883 ) + ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) * ( t1465 >=
t883 ? - ( - ( t870 * t803 ) * t870 * 2.0 ) : 0.0 ) ; intermediate_der3618 =
- ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0
) / ( t1423 == 0.0 ? 1.0E-16 : t1423 ) * intermediate_der10340 + - 10.0 / (
t884 == 0.0 ? 1.0E-16 : t884 ) ; intermediate_der3622 = intermediate_der3618
* t1659 * 6.0 - t1659 * t1659 * intermediate_der3618 * 6.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 <= 0.0 ) {
intermediate_der3618 = intermediate_der3624 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 >= t884 ) {
intermediate_der3618 = t803 ; } else { intermediate_der3618 = ( ( -
intermediate_der3622 * t1624 + ( 1.0 - t1582 ) * intermediate_der3624 ) +
t1648 * intermediate_der3622 ) + t803 * t1582 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 > 1.01325 ) {
t803 = intermediate_der3615 ; } else { t803 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 < 1.01325 ?
intermediate_der3618 : intermediate_der3624 ; } t1581 = pmf_sqrt ( t1375 *
t1375 + 6.4274470286298274E-9 ) * 2.0 ; intermediate_der3615 = 1.0 / ( t1581
== 0.0 ? 1.0E-16 : t1581 ) * t1375 * - 2.0 * 2.0 ; t1582 = - t1375 ; t1375 =
t1384 * t1384 ; intermediate_der3618 = ( t1582 / ( t1375 == 0.0 ? 1.0E-16 :
t1375 ) * intermediate_der3615 + - 2.0 / ( t1384 == 0.0 ? 1.0E-16 : t1384 ) )
* 1.01325 / ( t1583 == 0.0 ? 1.0E-16 : t1583 ) ; intermediate_der3622 = - (
t1582 / ( t1375 == 0.0 ? 1.0E-16 : t1375 ) * intermediate_der3615 + - 2.0 / (
t1384 == 0.0 ? 1.0E-16 : t1384 ) ) / 2.0 ; intermediate_der3624 = ( t1582 / (
t1375 == 0.0 ? 1.0E-16 : t1375 ) * intermediate_der3615 + - 2.0 / ( t1384 ==
0.0 ? 1.0E-16 : t1384 ) ) / 2.0 ; t1581 = pmf_sqrt ( t1552 * t1552 +
1.2620262729050631E-10 ) * 2.0 ; t808 = 1.0 / ( t1581 == 0.0 ? 1.0E-16 :
t1581 ) * t1552 * 2.0 * 2.0 ; t1384 = t1408 * t1408 ; intermediate_der3716 =
( - t1552 / ( t1384 == 0.0 ? 1.0E-16 : t1384 ) * t808 + 2.0 / ( t1408 == 0.0
? 1.0E-16 : t1408 ) ) * 1.01325 / ( t1393 == 0.0 ? 1.0E-16 : t1393 ) ; t811 =
- ( - t1552 / ( t1384 == 0.0 ? 1.0E-16 : t1384 ) * t808 + 2.0 / ( t1408 ==
0.0 ? 1.0E-16 : t1408 ) ) / 2.0 ; t812 = ( - t1552 / ( t1384 == 0.0 ? 1.0E-16
: t1384 ) * t808 + 2.0 / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) ) / 2.0 ; t814 =
1.0 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) * t1552 * 2.0 * 2.0 ; t1393 = t1408
* t1408 ; intermediate_der3723 = ( t1552 / ( t1393 == 0.0 ? 1.0E-16 : t1393 )
* t814 + - 2.0 / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) ) * X [ 445ULL ] / (
t1483 == 0.0 ? 1.0E-16 : t1483 ) ; t815 = - ( t1552 / ( t1393 == 0.0 ?
1.0E-16 : t1393 ) * t814 + - 2.0 / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) ) / 2.0
; t817 = ( t1552 / ( t1393 == 0.0 ? 1.0E-16 : t1393 ) * t814 + - 2.0 / (
t1408 == 0.0 ? 1.0E-16 : t1408 ) ) / 2.0 ; t807 = 1.0 ; t1583 = t807 *
0.0028301886792452828 ; t818 = t1583 / ( t903 == 0.0 ? 1.0E-16 : t903 ) ;
t1581 = pmf_sqrt ( t1552 * t1552 + 2.4102926357361849E-12 ) * 2.0 ;
intermediate_der3760 = 1.0 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) * t1552 * 2.0
* 2.0 ; t1408 = t1485 * t1485 ; intermediate_der3763 = ( - t1552 / ( t1408 ==
0.0 ? 1.0E-16 : t1408 ) * intermediate_der3760 + 2.0 / ( t1485 == 0.0 ?
1.0E-16 : t1485 ) ) * X [ 445ULL ] / ( t1486 == 0.0 ? 1.0E-16 : t1486 ) ;
intermediate_der3766 = - ( - t1552 / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) *
intermediate_der3760 + 2.0 / ( t1485 == 0.0 ? 1.0E-16 : t1485 ) ) / 2.0 ;
intermediate_der3767 = ( - t1552 / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) *
intermediate_der3760 + 2.0 / ( t1485 == 0.0 ? 1.0E-16 : t1485 ) ) / 2.0 ; if
( t1421 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
intermediate_der4892 = 0.0 ; } else if ( t1421 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intermediate_der4892 = 0.0 ; } else {
intermediate_der4892 = 0.000628318373638326 ; } intermediate_der11675 =
intermediate_der4892 / 7.8539816339744827E-5 ; if ( - X [ 471ULL ] > 0.0 ) {
t1486 = intrm_sf_mf_1537 * intrm_sf_mf_1537 ; t846 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * ( -
X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537
) * ( - ( - X [ 471ULL ] / 0.64 ) / ( t1486 == 0.0 ? 1.0E-16 : t1486 ) ) *
intermediate_der4892 * 2.0 / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) )
+ - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1537 ) * ( - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ?
1.0E-16 : intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) *
intermediate_der11675 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ) + - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 *
intermediate_der11675 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * ( -
X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537
) * ( - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) )
) * 9.9999999999999991E-11 ; } else if ( - X [ 471ULL ] < 0.0 ) { U_idx_3 =
intrm_sf_mf_1537 * intrm_sf_mf_1537 ; t846 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * ( -
X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537
) * ( - ( - X [ 471ULL ] / 0.64 ) / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) )
* intermediate_der4892 * 2.0 / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) )
+ - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1537 ) * ( - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ?
1.0E-16 : intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) *
intermediate_der11675 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * t907 ) + -
( t907 * intermediate_der11675 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) * ( -
X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537
) * ( - X [ 471ULL ] / 0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 ) )
) * 9.9999999999999991E-11 ; } else { t846 = 0.0 ; } intermediate_der5079 = -
intermediate_der11675 * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 ) * 2.0 ;
t850 = t911 * intermediate_der5079 ; intermediate_der5241 = ( X [ 63ULL ] - X
[ 478ULL ] ) * ( t914 >= t908 ? ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ) *
intermediate_der11675 + - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 *
intermediate_der11675 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) ) - (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
t907 ) * intermediate_der11675 * 2.0 + - ( t907 * intermediate_der11675 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * 2.0 ) :
intermediate_der5079 ) ; if ( X [ 63ULL ] - X [ 478ULL ] <= 0.0 ) { t851 =
t850 ; } else if ( X [ 63ULL ] - X [ 478ULL ] >= t911 ) { t851 =
intermediate_der5241 ; } else { t851 = ( 1.0 - t915 ) * t850 +
intermediate_der5241 * t915 ; } intermediate_der11675 = ( X [ 478ULL ] - X [
63ULL ] ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu18
>= t908 ? ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * t907 ) *
intermediate_der11675 + - ( t907 * intermediate_der11675 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 + 1.0 ) ) - (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 ) *
intermediate_der11675 * 2.0 + - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu30 *
intermediate_der11675 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu21 * 2.0 ) :
intermediate_der5079 ) ; if ( X [ 478ULL ] - X [ 63ULL ] <= 0.0 ) {
intermediate_der5079 = t850 ; } else if ( X [ 478ULL ] - X [ 63ULL ] >= t911
) { intermediate_der5079 = intermediate_der11675 ; } else {
intermediate_der5079 = ( 1.0 - t916 ) * t850 + intermediate_der11675 * t916 ;
} if ( X [ 63ULL ] > X [ 478ULL ] ) { intermediate_der11675 = t851 ; } else {
intermediate_der11675 = X [ 63ULL ] < X [ 478ULL ] ? intermediate_der5079 :
t850 ; } t1581 = pmf_sqrt ( t919 * t919 + 1.8324100759713822E-12 ) * 2.0 ;
t850 = 1.0 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) * t919 * 0.01 * 2.0 ; t1456 =
pmf_sqrt ( t919 * t919 + 2.0914103314136477E-13 ) * 2.0 ; t851 = 1.0 / (
t1456 == 0.0 ? 1.0E-16 : t1456 ) * t919 * 0.01 * 2.0 ; t1465 = pmf_sqrt (
t919 * t919 + 1.4768645655431171E-13 ) * 2.0 ; intermediate_der5241 = 1.0 / (
t1465 == 0.0 ? 1.0E-16 : t1465 ) * t919 * 0.01 * 2.0 ; intermediate_der5275 =
1.0 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) * t919 * 0.01 * 2.0 ;
intermediate_der5276 = 1.0 / ( t1456 == 0.0 ? 1.0E-16 : t1456 ) * t919 * 0.01
* 2.0 ; t857 = 1.0 / ( t1465 == 0.0 ? 1.0E-16 : t1465 ) * t919 * 0.01 * 2.0 ;
t1678 = U_idx_2 >= 0.0 ? 1.0 : - 1.0 ; t1456 = t1678 * 0.01 ; t870 = t1456 /
( t925 == 0.0 ? 1.0E-16 : t925 ) ; t1648 = t870 / 2000.0 ; t1659 = t1648 *
intrm_sf_mf_9 * 6.0 - intrm_sf_mf_9 * intrm_sf_mf_9 * t1648 * 6.0 ; t1648 =
intermediate_der10956 * 35.2 / ( t928 == 0.0 ? 1.0E-16 : t928 ) * 1.0E-5 ;
t1581 = ( 6.9 / ( t927 == 0.0 ? 1.0E-16 : t927 ) + 0.00017169489553429715 ) *
2.3025850929940459 ; t1465 = pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16 : t927
) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16 :
t927 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16
: t927 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t927 == 0.0 ?
1.0E-16 : t927 ) + 0.00017169489553429715 ) * 10.497600000000002 ; t1582 =
t927 * t927 ; t1483 = - 1.0 / ( t1465 == 0.0 ? 1.0E-16 : t1465 ) * ( - 6.9 /
( t1582 == 0.0 ? 1.0E-16 : t1582 ) ) * ( 1.0 / ( t1581 == 0.0 ? 1.0E-16 :
t1581 ) ) * pmf_log10 ( 6.9 / ( t927 == 0.0 ? 1.0E-16 : t927 ) +
0.00017169489553429715 ) * ( intrm_sf_mf_4 >= 2000.0 ? t870 : 0.0 ) *
3.5640000000000005 ; t870 = ( ( intrm_sf_mf_3 + U_idx_2 * t1678 ) * t929 +
U_idx_2 * ( t1483 / 0.01 ) * intrm_sf_mf_3 ) / ( t932 == 0.0 ? 1.0E-16 : t932
) * 1.0E-5 ; if ( intrm_sf_mf_4 <= 2000.0 ) { t883 = t1648 ; } else if (
intrm_sf_mf_4 >= 4000.0 ) { t883 = t870 ; } else { t883 = ( ( - t1659 * (
U_idx_2 * intermediate_der10956 * 35.2 / ( t928 == 0.0 ? 1.0E-16 : t928 ) *
1.0E-5 ) + ( 1.0 - t926 ) * t1648 ) + t1659 * ( U_idx_2 * intrm_sf_mf_3 *
t929 / ( t932 == 0.0 ? 1.0E-16 : t932 ) * 1.0E-5 ) ) + t870 * t926 ; } if ( -
U_idx_2 >= 0.0 ) { intermediate_der8698 = - 1.0 ; } else {
intermediate_der8698 = 1.0 ; } t1465 = intermediate_der8698 * 0.01 ; t870 =
t1465 / ( t925 == 0.0 ? 1.0E-16 : t925 ) ; t1582 = t935 / 2.0 *
0.00093750000000000007 ; t1648 = t1583 / ( t1582 == 0.0 ? 1.0E-16 : t1582 ) ;
t1659 = intrm_sf_mf_1326 >= 0.0 ? t1648 : - t1648 ; t1624 = t902 > 1000.0 ?
t1659 : 0.0 ; t1581 = ( 6.9 / ( t937 == 0.0 ? 1.0E-16 : t937 ) +
0.00069701528436089772 ) * 2.3025850929940459 ; t1582 = pmf_log10 ( 6.9 / (
t937 == 0.0 ? 1.0E-16 : t937 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 /
( t937 == 0.0 ? 1.0E-16 : t937 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9
/ ( t937 == 0.0 ? 1.0E-16 : t937 ) + 0.00069701528436089772 ) * pmf_log10 (
6.9 / ( t937 == 0.0 ? 1.0E-16 : t937 ) + 0.00069701528436089772 ) *
10.497600000000002 ; t1583 = t937 * t937 ; t1533 = - 1.0 / ( t1582 == 0.0 ?
1.0E-16 : t1582 ) * ( - 6.9 / ( t1583 == 0.0 ? 1.0E-16 : t1583 ) ) * ( 1.0 /
( t1581 == 0.0 ? 1.0E-16 : t1581 ) ) * pmf_log10 ( 6.9 / ( t937 == 0.0 ?
1.0E-16 : t937 ) + 0.00069701528436089772 ) * t1624 * 6.48 ; t1581 = pmf_sqrt
( t939 / 8.0 ) * 2.0 ; t1583 = ( ( pmf_pow ( intrm_sf_mf_1329 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t939 / 8.0 ) * 12.7 + 1.0 ) * ( (
pmf_pow ( intrm_sf_mf_1329 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t939
/ 8.0 ) * 12.7 + 1.0 ) ; t1624 = ( pmf_pow ( intrm_sf_mf_1329 ,
0.66666666666666663 ) - 1.0 ) * ( - ( ( t937 - 1000.0 ) * ( t939 / 8.0 ) *
intrm_sf_mf_1329 ) / ( t1583 == 0.0 ? 1.0E-16 : t1583 ) ) * ( t1533 / 8.0 ) *
( 1.0 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) ) * 12.7 + ( ( t937 - 1000.0 ) * (
t1533 / 8.0 ) + t939 / 8.0 * t1624 ) * intrm_sf_mf_1329 / ( t942 == 0.0 ?
1.0E-16 : t942 ) ; t1533 = t1659 / 2000.0 ; t1509 = t1533 * t941 * 6.0 - t941
* t941 * t1533 * 6.0 ; if ( t902 <= 2000.0 ) { t1533 = 0.0 ; } else if ( t902
>= 4000.0 ) { t1533 = t1624 ; } else { t1533 = ( - t1509 * 3.66 + t1509 *
t940 ) + t1624 * t943 ; } t1582 = t938 / 2.0 ; if ( t902 > t944 /
0.00093750000000000007 / ( t1582 == 0.0 ? 1.0E-16 : t1582 ) / 30.0 ) { t1582
= t902 * t902 ; intrm_sf_mf_1326 = ( t900 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) / 2.0 ;
t1624 = ( - ( intrm_sf_mf_1334 * 1.3250000000000002 ) / ( t1582 == 0.0 ?
1.0E-16 : t1582 ) * t1659 + t1533 * 1.3250000000000002 / ( t902 == 0.0 ?
1.0E-16 : t902 ) ) / 0.00093750000000000007 / ( intrm_sf_mf_1326 == 0.0 ?
1.0E-16 : intrm_sf_mf_1326 ) ; } else { t1624 = 0.0 ; } t1659 = - ( - t1624 *
exp ( - t946 ) ) * ( X [ 61ULL ] - X [ 444ULL ] ) ; t1648 = t956 / 2.0 * (
t938 / 2.0 ) * ( t1648 * 0.00093750000000000007 / 0.0028301886792452828 ) *
t947 + t954 / 0.0028301886792452828 * ( t938 / 2.0 ) * ( t956 / 2.0 ) * t1659
; t1582 = t957 / 2.0 * 0.00093750000000000007 ; t807 = - t807 *
0.0028301886792452828 / ( t1582 == 0.0 ? 1.0E-16 : t1582 ) ; t1659 =
intrm_sf_mf_1338 >= 0.0 ? t807 : - t807 ; t1624 = intrm_sf_mf_1339 > 1000.0 ?
t1659 : 0.0 ; t1509 = ( 6.9 / ( t844 == 0.0 ? 1.0E-16 : t844 ) +
0.00069701528436089772 ) * 2.3025850929940459 ; t1581 = pmf_log10 ( 6.9 / (
t844 == 0.0 ? 1.0E-16 : t844 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 /
( t844 == 0.0 ? 1.0E-16 : t844 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9
/ ( t844 == 0.0 ? 1.0E-16 : t844 ) + 0.00069701528436089772 ) * pmf_log10 (
6.9 / ( t844 == 0.0 ? 1.0E-16 : t844 ) + 0.00069701528436089772 ) *
10.497600000000002 ; t1582 = t844 * t844 ; t1533 = - 1.0 / ( t1581 == 0.0 ?
1.0E-16 : t1581 ) * ( - 6.9 / ( t1582 == 0.0 ? 1.0E-16 : t1582 ) ) * ( 1.0 /
( t1509 == 0.0 ? 1.0E-16 : t1509 ) ) * pmf_log10 ( 6.9 / ( t844 == 0.0 ?
1.0E-16 : t844 ) + 0.00069701528436089772 ) * t1624 * 6.48 ; t1509 = pmf_sqrt
( t950 / 8.0 ) * 2.0 ; t1582 = ( ( pmf_pow ( t949 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( t950 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow ( t949 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t950 / 8.0 ) * 12.7 + 1.0 ) ; t844
= ( pmf_pow ( t949 , 0.66666666666666663 ) - 1.0 ) * ( - ( ( t844 - 1000.0 )
* ( t950 / 8.0 ) * t949 ) / ( t1582 == 0.0 ? 1.0E-16 : t1582 ) ) * ( t1533 /
8.0 ) * ( 1.0 / ( t1509 == 0.0 ? 1.0E-16 : t1509 ) ) * 12.7 + ( ( t844 -
1000.0 ) * ( t1533 / 8.0 ) + t950 / 8.0 * t1624 ) * t949 / ( t964 == 0.0 ?
1.0E-16 : t964 ) ; t1624 = t1659 / 2000.0 ; t1533 = t1624 * t952 * 6.0 - t952
* t952 * t1624 * 6.0 ; if ( intrm_sf_mf_1339 <= 2000.0 ) { t1624 = 0.0 ; }
else if ( intrm_sf_mf_1339 >= 4000.0 ) { t1624 = t844 ; } else { t1624 = ( -
t1533 * 3.66 + t1533 * t951 ) + t844 * t953 ; } t1509 = t960 / 2.0 ; if (
intrm_sf_mf_1339 > t966 / 0.00093750000000000007 / ( t1509 == 0.0 ? 1.0E-16 :
t1509 ) / 30.0 ) { t1509 = intrm_sf_mf_1339 * intrm_sf_mf_1339 ; t900 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato2 ) / 2.0 ; t844
= ( - ( t958 * 1.3250000000000002 ) / ( t1509 == 0.0 ? 1.0E-16 : t1509 ) *
t1659 + t1624 * 1.3250000000000002 / ( intrm_sf_mf_1339 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1339 ) ) / 0.00093750000000000007 / ( t900 == 0.0 ? 1.0E-16 :
t900 ) ; } else { t844 = 0.0 ; } t1659 = - ( - t844 * exp ( - t959 ) ) * ( X
[ 61ULL ] - X [ 430ULL ] ) ; t807 = t978 / 2.0 * ( t960 / 2.0 ) * ( t807 *
0.00093750000000000007 / 0.0028301886792452828 ) * t961 + t976 /
0.0028301886792452828 * ( t960 / 2.0 ) * ( t978 / 2.0 ) * t1659 ; t844 = t818
/ 40.0 ; t818 = t844 * intermediate_der6496 * 6.0 - intermediate_der6496 *
intermediate_der6496 * t844 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato4 <= - 20.0 ) {
intermediate_der6496 = t807 * 0.001 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato4 >= 20.0 ) {
intermediate_der6496 = t1648 * 0.001 ; } else { intermediate_der6496 = ( ( (
- t818 * ( t976 / 0.0028301886792452828 * ( t960 / 2.0 ) * ( t978 / 2.0 ) *
t961 ) + ( 1.0 - t962 ) * t807 ) + t818 * ( t954 / 0.0028301886792452828 * (
t938 / 2.0 ) * ( t956 / 2.0 ) * t947 ) ) + t1648 * t962 ) * 0.001 ; } t807 =
t1552 >= 0.0 ? 2.0 : - 2.0 ; t818 = t807 * 0.0028301886792452828 / ( t903 ==
0.0 ? 1.0E-16 : t903 ) ; t1659 = ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) +
0.00069701528436089772 ) * 2.3025850929940459 ; t1624 = pmf_log10 ( 6.9 / (
t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 /
( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9
/ ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772 ) * pmf_log10 (
6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00069701528436089772 ) *
10.497600000000002 ; t1533 = t968 * t968 ; t1648 = - 1.0 / ( t1624 == 0.0 ?
1.0E-16 : t1624 ) * ( - 6.9 / ( t1533 == 0.0 ? 1.0E-16 : t1533 ) ) * ( 1.0 /
( t1659 == 0.0 ? 1.0E-16 : t1659 ) ) * pmf_log10 ( 6.9 / ( t968 == 0.0 ?
1.0E-16 : t968 ) + 0.00069701528436089772 ) * ( t965 >= 1.0 ? t818 : 0.0 ) *
6.48 ; t844 = t901 * 2.0 * 112.0 / ( t984 == 0.0 ? 1.0E-16 : t984 ) ; t807 =
( ( 2.0 * t963 + t1552 * t807 ) * t969 + t1552 * t1648 * t963 ) * 1.75 / (
t986 == 0.0 ? 1.0E-16 : t986 ) ; t785 = t818 / 2000.0 ; t818 = t785 * t971 *
6.0 - t971 * t971 * t785 * 6.0 ; if ( t965 <= 2000.0 ) { t785 = t844 * 1.0E-5
; } else if ( t965 >= 4000.0 ) { t785 = t807 * 1.0E-5 ; } else { t785 = ( ( (
- t818 * ( t1552 * t901 * 112.0 / ( t984 == 0.0 ? 1.0E-16 : t984 ) ) + ( 1.0
- t973 ) * t844 ) + t818 * ( t1552 * t963 * t969 * 1.75 / ( t986 == 0.0 ?
1.0E-16 : t986 ) ) ) + t807 * t973 ) * 1.0E-5 ; } t1624 = t988 / 2.0 *
7.8539816339744827E-5 ; t818 = t1313 / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) ;
t1659 = ( 6.9 / ( t827 == 0.0 ? 1.0E-16 : t827 ) + 0.00017169489553429715 ) *
2.3025850929940459 ; t1624 = pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16 : t827
) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16 :
t827 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16
: t827 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t827 == 0.0 ?
1.0E-16 : t827 ) + 0.00017169489553429715 ) * 10.497600000000002 ; t1533 =
t827 * t827 ; t1509 = - 1.0 / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) * ( - 6.9 /
( t1533 == 0.0 ? 1.0E-16 : t1533 ) ) * ( 1.0 / ( t1659 == 0.0 ? 1.0E-16 :
t1659 ) ) * pmf_log10 ( 6.9 / ( t827 == 0.0 ? 1.0E-16 : t827 ) +
0.00017169489553429715 ) * ( t1786 >= 2000.0 ? t870 : 0.0 ) *
3.5640000000000005 ; t827 = intermediate_der7446 >= 0.0 ? t818 : - t818 ;
intermediate_der7446 = intrm_sf_mf_150 > 1000.0 ? t827 : 0.0 ; t1659 = ( 6.9
/ ( t841 == 0.0 ? 1.0E-16 : t841 ) + 0.00017169489553429715 ) *
2.3025850929940459 ; t1624 = pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16 : t841
) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16 :
t841 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16
: t841 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t841 == 0.0 ?
1.0E-16 : t841 ) + 0.00017169489553429715 ) * 10.497600000000002 ; t1533 =
t841 * t841 ; t844 = - 1.0 / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) * ( - 6.9 / (
t1533 == 0.0 ? 1.0E-16 : t1533 ) ) * ( 1.0 / ( t1659 == 0.0 ? 1.0E-16 : t1659
) ) * pmf_log10 ( 6.9 / ( t841 == 0.0 ? 1.0E-16 : t841 ) +
0.00017169489553429715 ) * intermediate_der7446 * 6.48 ; t1659 = pmf_sqrt (
t980 / 8.0 ) * 2.0 ; t1533 = ( ( pmf_pow ( t979 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t980 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow ( t979 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t980 / 8.0 ) * 12.7 + 1.0 ) ;
intermediate_der7446 = ( pmf_pow ( t979 , 0.66666666666666663 ) - 1.0 ) * ( -
( ( t841 - 1000.0 ) * ( t980 / 8.0 ) * t979 ) / ( t1533 == 0.0 ? 1.0E-16 :
t1533 ) ) * ( t844 / 8.0 ) * ( 1.0 / ( t1659 == 0.0 ? 1.0E-16 : t1659 ) ) *
12.7 + ( ( t841 - 1000.0 ) * ( t844 / 8.0 ) + t980 / 8.0 *
intermediate_der7446 ) * t979 / ( t997 == 0.0 ? 1.0E-16 : t997 ) ; t844 =
t827 / 2000.0 ; t1648 = t844 * t983 * 6.0 - t983 * t983 * t844 * 6.0 ; if (
intrm_sf_mf_150 <= 2000.0 ) { t844 = 0.0 ; } else if ( intrm_sf_mf_150 >=
4000.0 ) { t844 = intermediate_der7446 ; } else { t844 = ( - t1648 * 3.66 +
t1648 * t982 ) + intermediate_der7446 * t985 ; } t1624 = t993 / 2.0 ; if (
intrm_sf_mf_150 > t999 / 7.8539816339744827E-5 / ( t1624 == 0.0 ? 1.0E-16 :
t1624 ) / 30.0 ) { t1624 = intrm_sf_mf_150 * intrm_sf_mf_150 ; t1552 = (
intrm_sf_mf_130 + t974 ) / 2.0 ; intermediate_der7446 = ( - ( t987 *
0.031415926535897927 ) / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) * t827 + t844 *
0.031415926535897927 / ( intrm_sf_mf_150 == 0.0 ? 1.0E-16 : intrm_sf_mf_150 )
) / 7.8539816339744827E-5 / ( t1552 == 0.0 ? 1.0E-16 : t1552 ) ; } else {
intermediate_der7446 = 0.0 ; } t827 = - ( - intermediate_der7446 * exp ( -
t990 ) ) * ( X [ 173ULL ] - X [ 169ULL ] ) ; intermediate_der10956 =
intermediate_der10956 * - 35.2 / ( t928 == 0.0 ? 1.0E-16 : t928 ) * 1.0E-5 ;
t818 = t1013 / 2.0 * ( t993 / 2.0 ) * ( t818 * 7.8539816339744827E-5 / 0.01 )
* t991 + t1011 / 0.01 * ( t993 / 2.0 ) * ( t1013 / 2.0 ) * t827 ; t1624 =
t1014 / 2.0 * 7.8539816339744827E-5 ; intermediate_der8645 = -
intermediate_der8645 * 0.01 / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) ; t827 =
t833 >= 0.0 ? intermediate_der8645 : - intermediate_der8645 ; t833 =
intrm_sf_mf_168 > 1000.0 ? t827 : 0.0 ; t807 = ( ( - t930 + - ( U_idx_2 *
intermediate_der8698 ) ) * t931 + - ( U_idx_2 * ( t1509 / 0.01 ) * t930 ) ) /
( t932 == 0.0 ? 1.0E-16 : t932 ) * 1.0E-5 ; t1648 = ( 6.9 / ( t948 == 0.0 ?
1.0E-16 : t948 ) + 0.00017169489553429715 ) * 2.3025850929940459 ; t1659 =
pmf_log10 ( 6.9 / ( t948 == 0.0 ? 1.0E-16 : t948 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t948 == 0.0 ? 1.0E-16 : t948 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t948 == 0.0 ? 1.0E-16 : t948 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t948 == 0.0 ? 1.0E-16 : t948 )
+ 0.00017169489553429715 ) * 10.497600000000002 ; t1624 = t948 * t948 ;
intermediate_der7446 = - 1.0 / ( t1659 == 0.0 ? 1.0E-16 : t1659 ) * ( - 6.9 /
( t1624 == 0.0 ? 1.0E-16 : t1624 ) ) * ( 1.0 / ( t1648 == 0.0 ? 1.0E-16 :
t1648 ) ) * pmf_log10 ( 6.9 / ( t948 == 0.0 ? 1.0E-16 : t948 ) +
0.00017169489553429715 ) * t833 * 6.48 ; t1648 = pmf_sqrt ( t1001 / 8.0 ) *
2.0 ; t1624 = ( ( pmf_pow ( t1774 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( t1001 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow ( t1774 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1001 / 8.0 ) * 12.7 + 1.0 ) ; t833 = ( pmf_pow ( t1774
, 0.66666666666666663 ) - 1.0 ) * ( - ( ( t948 - 1000.0 ) * ( t1001 / 8.0 ) *
t1774 ) / ( t1624 == 0.0 ? 1.0E-16 : t1624 ) ) * ( intermediate_der7446 / 8.0
) * ( 1.0 / ( t1648 == 0.0 ? 1.0E-16 : t1648 ) ) * 12.7 + ( ( t948 - 1000.0 )
* ( intermediate_der7446 / 8.0 ) + t1001 / 8.0 * t833 ) * t1774 / ( t1023 ==
0.0 ? 1.0E-16 : t1023 ) ; t1774 = t827 / 2000.0 ; intermediate_der7446 =
t1774 * t1003 * 6.0 - t1003 * t1003 * t1774 * 6.0 ; if ( intrm_sf_mf_168 <=
2000.0 ) { t1774 = 0.0 ; } else if ( intrm_sf_mf_168 >= 4000.0 ) { t1774 =
t833 ; } else { t1774 = ( - intermediate_der7446 * 3.66 +
intermediate_der7446 * t1002 ) + t833 * t1004 ; } t1659 = t1019 / 2.0 ; if (
intrm_sf_mf_168 > t1025 / 7.8539816339744827E-5 / ( t1659 == 0.0 ? 1.0E-16 :
t1659 ) / 30.0 ) { t1659 = intrm_sf_mf_168 * intrm_sf_mf_168 ; t1583 = ( t972
+ t974 ) / 2.0 ; t833 = ( - ( t1005 * 0.031415926535897927 ) / ( t1659 == 0.0
? 1.0E-16 : t1659 ) * t827 + t1774 * 0.031415926535897927 / ( intrm_sf_mf_168
== 0.0 ? 1.0E-16 : intrm_sf_mf_168 ) ) / 7.8539816339744827E-5 / ( t1583 ==
0.0 ? 1.0E-16 : t1583 ) ; } else { t833 = 0.0 ; } t827 = - ( - t833 * exp ( -
t1006 ) ) * ( X [ 173ULL ] - X [ 188ULL ] ) ; intermediate_der8645 =
intermediate_der7917 / 2.0 * ( t1019 / 2.0 ) * ( intermediate_der8645 *
7.8539816339744827E-5 / 0.01 ) * t1007 + t1035 / 0.01 * ( t1019 / 2.0 ) * (
intermediate_der7917 / 2.0 ) * t827 ; t827 = ( U_idx_2 / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) * t1106 + - 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 :
intermediate_der7398 ) ) * X [ 135ULL ] / ( X [ 153ULL ] == 0.0 ? 1.0E-16 : X
[ 153ULL ] ) ; intermediate_der7398 = ( - U_idx_2 / ( t1187 == 0.0 ? 1.0E-16
: t1187 ) * t1101 + 1.0 / ( intermediate_der7398 == 0.0 ? 1.0E-16 :
intermediate_der7398 ) ) * X [ 117ULL ] / ( X [ 154ULL ] == 0.0 ? 1.0E-16 : X
[ 154ULL ] ) ; t833 = t1313 / ( t834 == 0.0 ? 1.0E-16 : t834 ) / 40.0 ;
intermediate_der7437 = t870 / 2000.0 ; t1774 = t833 * intrm_sf_mf_179 * 6.0 -
intrm_sf_mf_179 * intrm_sf_mf_179 * t833 * 6.0 ; if ( - U_idx_2 >= 0.0 ) {
t833 = 0.0 ; } else { t1659 = X [ 153ULL ] * 1.2337005501361696E-8 ; t833 =
U_idx_2 * 2.0 / ( t1659 == 0.0 ? 1.0E-16 : t1659 ) * 1.0E-5 ; } if ( U_idx_2
>= 0.0 ) { intermediate_der7446 = 0.0 ; } else { t1659 = X [ 154ULL ] *
1.2337005501361696E-8 ; intermediate_der7446 = U_idx_2 * 2.0 / ( t1659 == 0.0
? 1.0E-16 : t1659 ) * 1.0E-5 ; } if ( U_idx_13 >= 1.0 ) { t844 = 0.0 ; } else
{ t844 = ( real_T ) ! ( U_idx_13 <= 0.0 ) ; } if ( intermediate_der11822 <= -
20.0 ) { t870 = intermediate_der8645 * 0.001 ; } else if (
intermediate_der11822 >= 20.0 ) { t870 = t818 * 0.001 ; } else { t870 = ( ( (
- t1774 * ( t1035 / 0.01 * ( t1019 / 2.0 ) * ( intermediate_der7917 / 2.0 ) *
t1007 ) + ( 1.0 - t1015 ) * intermediate_der8645 ) + t1774 * ( t1011 / 0.01 *
( t993 / 2.0 ) * ( t1013 / 2.0 ) * t991 ) ) + t818 * t1015 ) * 0.001 ; }
intermediate_der8645 = intermediate_der7437 * t1009 * 6.0 - t1009 * t1009 *
intermediate_der7437 * 6.0 ; if ( t1786 <= 2000.0 ) { intermediate_der7437 =
intermediate_der10956 ; } else if ( t1786 >= 4000.0 ) { intermediate_der7437
= t807 ; } else { intermediate_der7437 = ( ( - intermediate_der8645 * t992 +
( 1.0 - t1016 ) * intermediate_der10956 ) + intermediate_der8645 * ( - (
U_idx_2 * t930 * t931 ) / ( t932 == 0.0 ? 1.0E-16 : t932 ) * 1.0E-5 ) ) +
t807 * t1016 ; } intermediate_der10956 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 >= 0.0 ? -
0.01 : 0.01 ; intermediate_der8645 = intermediate_der10956 * 0.01 / ( t834 ==
0.0 ? 1.0E-16 : t834 ) ; t1786 = ( 6.9 / ( t1021 == 0.0 ? 1.0E-16 : t1021 ) +
0.00017169489553429715 ) * 2.3025850929940459 ; t1648 = pmf_log10 ( 6.9 / (
t1021 == 0.0 ? 1.0E-16 : t1021 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1021 == 0.0 ? 1.0E-16 : t1021 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1021 == 0.0 ? 1.0E-16 : t1021 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1021 == 0.0 ? 1.0E-16 : t1021 ) + 0.00017169489553429715
) * 10.497600000000002 ; t1659 = t1021 * t1021 ; t818 = - 1.0 / ( t1648 ==
0.0 ? 1.0E-16 : t1648 ) * ( - 6.9 / ( t1659 == 0.0 ? 1.0E-16 : t1659 ) ) * (
1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786 ) ) * pmf_log10 ( 6.9 / ( t1021 == 0.0
? 1.0E-16 : t1021 ) + 0.00017169489553429715 ) * ( t1020 >= 1.0 ?
intermediate_der8645 : 0.0 ) * 6.48 ; t807 = - 0.01 * t71 * 35.2 / ( t832 ==
0.0 ? 1.0E-16 : t832 ) ; intermediate_der10956 = ( ( - 0.01 * t1017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
intermediate_der10956 ) * t1022 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * t818 *
t1017 ) * 0.55 / ( t837 == 0.0 ? 1.0E-16 : t837 ) ; t818 =
intermediate_der8645 / 2000.0 ; intermediate_der8645 = t818 * t1028 * 6.0 -
t1028 * t1028 * t818 * 6.0 ; if ( t1020 <= 2000.0 ) { t818 = t807 *
9.9999999999999991E-11 ; } else if ( t1020 >= 4000.0 ) { t818 =
intermediate_der10956 * 9.9999999999999991E-11 ; } else { t818 = ( ( ( -
intermediate_der8645 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * t71 * 35.2
/ ( t832 == 0.0 ? 1.0E-16 : t832 ) ) + ( 1.0 - t1029 ) * t807 ) +
intermediate_der8645 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 * t1017 *
t1022 * 0.55 / ( t837 == 0.0 ? 1.0E-16 : t837 ) ) ) + intermediate_der10956 *
t1029 ) * 9.9999999999999991E-11 ; } intermediate_der10956 = t1456 / ( t1051
== 0.0 ? 1.0E-16 : t1051 ) ; t1786 = ( 6.9 / ( t1031 == 0.0 ? 1.0E-16 : t1031
) + 0.00017169489553429715 ) * 2.3025850929940459 ; t1648 = pmf_log10 ( 6.9 /
( t1031 == 0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1031 == 0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1031 == 0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t1031 == 0.0 ? 1.0E-16 : t1031 ) +
0.00017169489553429715 ) * 10.497600000000002 ; t1659 = t1031 * t1031 ; t1624
= - 1.0 / ( t1648 == 0.0 ? 1.0E-16 : t1648 ) * ( - 6.9 / ( t1659 == 0.0 ?
1.0E-16 : t1659 ) ) * ( 1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786 ) ) *
pmf_log10 ( 6.9 / ( t1031 == 0.0 ? 1.0E-16 : t1031 ) + 0.00017169489553429715
) * ( t1030 >= 2000.0 ? intermediate_der10956 : 0.0 ) * 3.5640000000000005 ;
t807 = intermediate_der8271 * 35.2 / ( t1055 == 0.0 ? 1.0E-16 : t1055 ) *
1.0E-5 ; intermediate_der8645 = ( ( intrm_sf_mf_3 + U_idx_2 * t1678 ) * t1032
+ U_idx_2 * ( t1624 / 0.01 ) * intrm_sf_mf_3 ) / ( t1057 == 0.0 ? 1.0E-16 :
t1057 ) * 1.0E-5 ; intermediate_der7917 = intermediate_der10956 / 2000.0 ;
intermediate_der10956 = intermediate_der7917 * t1034 * 6.0 - t1034 * t1034 *
intermediate_der7917 * 6.0 ; if ( t1030 <= 2000.0 ) { intermediate_der7917 =
t807 ; } else if ( t1030 >= 4000.0 ) { intermediate_der7917 =
intermediate_der8645 ; } else { intermediate_der7917 = ( ( -
intermediate_der10956 * ( U_idx_2 * intermediate_der8271 * 35.2 / ( t1055 ==
0.0 ? 1.0E-16 : t1055 ) * 1.0E-5 ) + ( 1.0 - intermediate_der10350 ) * t807 )
+ intermediate_der10956 * ( U_idx_2 * t1032 * intrm_sf_mf_3 / ( t1057 == 0.0
? 1.0E-16 : t1057 ) * 1.0E-5 ) ) + intermediate_der8645 *
intermediate_der10350 ; } intermediate_der10956 = t1465 / ( t1051 == 0.0 ?
1.0E-16 : t1051 ) ; t1786 = ( 6.9 / ( t1041 == 0.0 ? 1.0E-16 : t1041 ) +
0.00017169489553429715 ) * 2.3025850929940459 ; t1648 = pmf_log10 ( 6.9 / (
t1041 == 0.0 ? 1.0E-16 : t1041 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1041 == 0.0 ? 1.0E-16 : t1041 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1041 == 0.0 ? 1.0E-16 : t1041 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1041 == 0.0 ? 1.0E-16 : t1041 ) + 0.00017169489553429715
) * 10.497600000000002 ; t1659 = t1041 * t1041 ; t1624 = - 1.0 / ( t1648 ==
0.0 ? 1.0E-16 : t1648 ) * ( - 6.9 / ( t1659 == 0.0 ? 1.0E-16 : t1659 ) ) * (
1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786 ) ) * pmf_log10 ( 6.9 / ( t1041 == 0.0
? 1.0E-16 : t1041 ) + 0.00017169489553429715 ) * ( t1039 >= 2000.0 ?
intermediate_der10956 : 0.0 ) * 3.5640000000000005 ; intermediate_der10350 =
intermediate_der8271 * - 35.2 / ( t1055 == 0.0 ? 1.0E-16 : t1055 ) * 1.0E-5 ;
intermediate_der8645 = ( ( - t930 + - ( U_idx_2 * intermediate_der8698 ) ) *
t1042 + - ( U_idx_2 * ( t1624 / 0.01 ) * t930 ) ) / ( t1057 == 0.0 ? 1.0E-16
: t1057 ) * 1.0E-5 ; intermediate_der8271 = intermediate_der10956 / 2000.0 ;
intermediate_der10956 = intermediate_der8271 * t1047 * 6.0 - t1047 * t1047 *
intermediate_der8271 * 6.0 ; if ( t1039 <= 2000.0 ) { intermediate_der8271 =
intermediate_der10350 ; } else if ( t1039 >= 4000.0 ) { intermediate_der8271
= intermediate_der8645 ; } else { intermediate_der8271 = ( ( -
intermediate_der10956 * t1044 + ( 1.0 - t1049 ) * intermediate_der10350 ) +
intermediate_der10956 * ( - ( U_idx_2 * t930 * t1042 ) / ( t1057 == 0.0 ?
1.0E-16 : t1057 ) * 1.0E-5 ) ) + intermediate_der8645 * t1049 ; }
intermediate_der10956 = t1456 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) ; t1786 =
( 6.9 / ( t924 == 0.0 ? 1.0E-16 : t924 ) + 0.00017169489553429715 ) *
2.3025850929940459 ; t1648 = pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16 : t924
) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16 :
t924 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16
: t924 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t924 == 0.0 ?
1.0E-16 : t924 ) + 0.00017169489553429715 ) * 10.497600000000002 ; t1659 =
t924 * t924 ; t1624 = - 1.0 / ( t1648 == 0.0 ? 1.0E-16 : t1648 ) * ( - 6.9 /
( t1659 == 0.0 ? 1.0E-16 : t1659 ) ) * ( 1.0 / ( t1786 == 0.0 ? 1.0E-16 :
t1786 ) ) * pmf_log10 ( 6.9 / ( t924 == 0.0 ? 1.0E-16 : t924 ) +
0.00017169489553429715 ) * ( t1052 >= 2000.0 ? intermediate_der10956 : 0.0 )
* 3.5640000000000005 ; intermediate_der10350 = intermediate_der10423 * 35.2 /
( t1073 == 0.0 ? 1.0E-16 : t1073 ) * 1.0E-5 ; intermediate_der8645 = ( (
intrm_sf_mf_3 + U_idx_2 * t1678 ) * t1053 + U_idx_2 * ( t1624 / 0.01 ) *
intrm_sf_mf_3 ) / ( t1075 == 0.0 ? 1.0E-16 : t1075 ) * 1.0E-5 ; t807 =
intermediate_der10956 / 2000.0 ; intermediate_der10956 = t807 * t1056 * 6.0 -
t1056 * t1056 * t807 * 6.0 ; if ( t1052 <= 2000.0 ) { t807 =
intermediate_der10350 ; } else if ( t1052 >= 4000.0 ) { t807 =
intermediate_der8645 ; } else { t807 = ( ( - intermediate_der10956 * (
U_idx_2 * intermediate_der10423 * 35.2 / ( t1073 == 0.0 ? 1.0E-16 : t1073 ) *
1.0E-5 ) + ( 1.0 - t1058 ) * intermediate_der10350 ) + intermediate_der10956
* ( U_idx_2 * intrm_sf_mf_3 * t1053 / ( t1075 == 0.0 ? 1.0E-16 : t1075 ) *
1.0E-5 ) ) + intermediate_der8645 * t1058 ; } intermediate_der10956 = t1465 /
( t1069 == 0.0 ? 1.0E-16 : t1069 ) ; t1786 = ( 6.9 / ( t933 == 0.0 ? 1.0E-16
: t933 ) + 0.00017169489553429715 ) * 2.3025850929940459 ; t1678 = pmf_log10
( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) +
0.00017169489553429715 ) * 10.497600000000002 ; t1648 = t933 * t933 ; t1659 =
- 1.0 / ( t1678 == 0.0 ? 1.0E-16 : t1678 ) * ( - 6.9 / ( t1648 == 0.0 ?
1.0E-16 : t1648 ) ) * ( 1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786 ) ) *
pmf_log10 ( 6.9 / ( t933 == 0.0 ? 1.0E-16 : t933 ) + 0.00017169489553429715 )
* ( t1061 >= 2000.0 ? intermediate_der10956 : 0.0 ) * 3.5640000000000005 ;
intermediate_der10350 = intermediate_der10423 * - 35.2 / ( t1073 == 0.0 ?
1.0E-16 : t1073 ) * 1.0E-5 ; U_idx_3 = ( ( - t930 + - ( U_idx_2 *
intermediate_der8698 ) ) * t1062 + - ( U_idx_2 * ( t1659 / 0.01 ) * t930 ) )
/ ( t1075 == 0.0 ? 1.0E-16 : t1075 ) * 1.0E-5 ; intermediate_der8698 =
intermediate_der10956 / 2000.0 ; intermediate_der10956 = intermediate_der8698
* t1067 * 6.0 - t1067 * t1067 * intermediate_der8698 * 6.0 ; if ( t1061 <=
2000.0 ) { intermediate_der8698 = intermediate_der10350 ; } else if ( t1061
>= 4000.0 ) { intermediate_der8698 = U_idx_3 ; } else { intermediate_der8698
= ( ( - intermediate_der10956 * ( U_idx_2 * intermediate_der10423 * - 35.2 /
( t1073 == 0.0 ? 1.0E-16 : t1073 ) * 1.0E-5 ) + ( 1.0 - t1070 ) *
intermediate_der10350 ) + intermediate_der10956 * ( - ( U_idx_2 * t930 *
t1062 ) / ( t1075 == 0.0 ? 1.0E-16 : t1075 ) * 1.0E-5 ) ) + U_idx_3 * t1070 ;
} t1648 = ( t884 - ( - t884 ) ) * ( t884 - ( - t884 ) ) ; U_idx_3 = (
intermediate_der10340 - ( - intermediate_der10340 ) ) * ( - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) -
( - t884 ) ) / ( t1648 == 0.0 ? 1.0E-16 : t1648 ) ) + ( 10.0 - ( -
intermediate_der10340 ) ) / ( t1087 == 0.0 ? 1.0E-16 : t1087 ) ;
intermediate_der10956 = U_idx_3 * t1071 * 6.0 - t1071 * t1071 * U_idx_3 * 6.0
; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 -
1.01325 <= - t884 ) { U_idx_3 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 >=
t884 ) { U_idx_3 = 10.0 ; } else { U_idx_3 = ( - intermediate_der10956 *
1.01325 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 *
intermediate_der10956 ) + 10.0 * ( t1071 * t1071 * 3.0 - t1071 * t1071 *
t1071 * 2.0 ) ; } t1786 = pmf_sqrt ( intermediate_der11685 *
intermediate_der11685 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 32ULL ] !=
0 ) * 2.0 - 1.0 ) * X [ 193ULL ] * intermediate_der11572 * intrm_sf_mf_89 *
1.0E-9 ) * 2.0 ; intermediate_der10956 = 1.0 / ( t1786 == 0.0 ? 1.0E-16 :
t1786 ) * intermediate_der11685 * ( ( X [ 20ULL ] / ( X [ 21ULL ] == 0.0 ?
1.0E-16 : X [ 21ULL ] ) - X [ 193ULL ] / ( X [ 194ULL ] == 0.0 ? 1.0E-16 : X
[ 194ULL ] ) ) * - 0.01 * intrm_sf_mf_89 / 7.8539816339744827E-5 ) *
1.9999999999999998E-13 ; if ( M [ 305ULL ] != 0 ) { intermediate_der9819 =
0.0 ; } else { intermediate_der9819 = ( real_T ) ( M [ 306ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & kh_efOut [ 0ULL ] , & t68 . mField1 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 = kh_efOut [ 0 ] ;
intermediate_der9819 = t693_idx_0 * ( U_idx_5 >= 0.0 ? intermediate_der9819 :
0.0 ) ; t1678 = X [ 315ULL ] * t1660 ; t1648 = - ( X [ 315ULL ] * t1660 ) ;
t1659 = ( ( ( real_T ) ( M [ 318ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1678 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) )
* ( t1648 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 + ( ( real_T ) (
M [ 318ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1678 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) )
* ( t1648 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 ) * ( - X [
307ULL ] / 0.0019634954084936209 ) * ( - X [ 307ULL ] / 0.0019634954084936209
) ; intermediate_der10340 = - 10.0 / ( intermediate_der10900 == 0.0 ? 1.0E-16
: intermediate_der10900 ) ; intermediate_der10350 = intermediate_der10340 *
t1681 * 6.0 - t1681 * t1681 * intermediate_der10340 * 6.0 ; if ( - t1692 <=
t1668 * - 0.95 ) { intermediate_der10340 = 10.0 ; } else if ( - t1692 >= -
t1668 ) { intermediate_der10340 = 0.0 ; } else { intermediate_der10340 = ( -
intermediate_der10350 * t1692 + ( 1.0 - ( t1681 * t1681 * 3.0 - t1681 * t1681
* t1681 * 2.0 ) ) * 10.0 ) + intermediate_der10350 * t1738 ; }
intermediate_der10350 = ( ( ( real_T ) ( M [ 318ULL ] != 0 ) * 2.0 - 1.0 ) *
( t1678 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) ) * ( t1648
/ ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 + ( ( real_T ) ( M [ 318ULL
] != 0 ) * 2.0 - 1.0 ) * ( t1678 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) )
* ( t1648 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 ) * ( X [ 307ULL
] / 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.0019634954084936209 ) / 2.0
* 9.999999999999999E-14 ; t1786 = pmf_sqrt ( ( ( real_T ) ( M [ 327ULL ] != 0
) * 2.0 - 1.0 ) * ( t899 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ) )
) ; t1738 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ;
intermediate_der10900 = pmf_sqrt ( ( ( real_T ) ( M [ 327ULL ] != 0 ) * 2.0 -
1.0 ) * ( t899 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu6 ) )
) * 10.0 * intrm_sf_mf_828 * 0.64 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 - 1.01325 ) *
( ( real_T ) ( M [ 327ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t879 * 2.0 ) / (
t1738 == 0.0 ? 1.0E-16 : t1738 ) ) * ( 1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786
) ) * t803 * intrm_sf_mf_828 * 0.32 ; t803 = intermediate_der10900 / (
zc_int180 == 0.0 ? 1.0E-16 : zc_int180 ) ; intermediate_der10423 = t803 *
t1079 * 6.0 - t1079 * t1079 * t803 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 <= t873 *
0.95 ) { t803 = intermediate_der10900 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 >= t873 ) {
t803 = 0.0 ; } else { t803 = ( ( - intermediate_der10423 * t864 + ( 1.0 - (
t1079 * t1079 * 3.0 - t1079 * t1079 * t1079 * 2.0 ) ) * intermediate_der10900
) + intermediate_der10423 * t866 ) * 100000.0 ; } intermediate_der10423 = -
intermediate_der10900 / ( zc_int180 == 0.0 ? 1.0E-16 : zc_int180 ) ;
intermediate_der11685 = intermediate_der10423 * zc_int189 * 6.0 - zc_int189 *
zc_int189 * intermediate_der10423 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 <= t873 *
0.95 ) { intermediate_der10423 = intermediate_der10900 * 100000.0 ; } else if
( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 >= t873 )
{ intermediate_der10423 = 0.0 ; } else { intermediate_der10423 = ( ( -
intermediate_der11685 * t864 + ( 1.0 - ( zc_int189 * zc_int189 * 3.0 -
zc_int189 * zc_int189 * zc_int189 * 2.0 ) ) * intermediate_der10900 ) + -
t866 * intermediate_der11685 ) * 100000.0 ; } t1678 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 *
intermediate_der10956 + - 0.01 * t1074 ; intermediate_der10956 = t1678 /
7.8539816339744827E-5 * 0.00031622776601683789 ; t1692 = ( -
intermediate_der11719 - intermediate_der11719 * - 0.95 ) * ( -
intermediate_der11719 - intermediate_der11719 * - 0.95 ) ;
intermediate_der10900 = ( - intermediate_der10956 - intermediate_der10956 * -
0.95 ) * ( - ( - t825 - intermediate_der11719 * - 0.95 ) / ( t1692 == 0.0 ?
1.0E-16 : t1692 ) ) + - ( intermediate_der10956 * - 0.95 ) / (
intermediate_der11705 == 0.0 ? 1.0E-16 : intermediate_der11705 ) ;
intermediate_der11685 = intermediate_der10900 * t761 * 6.0 - t761 * t761 *
intermediate_der10900 * 6.0 ; if ( - t825 <= intermediate_der11599 * - 0.95 )
{ intermediate_der10900 = 0.0 ; } else if ( - t825 >= - intermediate_der11599
) { intermediate_der10900 = intermediate_der10956 ; } else {
intermediate_der10900 = ( - intermediate_der11685 * t825 +
intermediate_der11685 * intermediate_der11719 ) + intermediate_der10956 * (
t761 * t761 * 3.0 - t761 * t761 * t761 * 2.0 ) ; } if ( M [ 350ULL ] != 0 ) {
intermediate_der10956 = 0.0 ; } else { intermediate_der10956 = ( real_T ) ( M
[ 351ULL ] == 0 ) ; } tlu2_1d_linear_linear_value ( & lh_efOut [ 0ULL ] , &
t35 . mField1 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField18 , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t693_idx_0 =
lh_efOut [ 0 ] ; intermediate_der10956 = t693_idx_0 * ( U_idx_8 >= 0.0 ?
intermediate_der10956 : 0.0 ) ; t1786 = pmf_sqrt ( ( ( real_T ) ( M [ 20ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t921 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ) )
) ; t1738 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ;
intermediate_der11685 = ( X [ 63ULL ] - X [ 478ULL ] ) * pmf_sqrt ( ( (
real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0 ) * ( t921 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu12 ) )
) * intermediate_der4892 * 0.64 + ( X [ 63ULL ] - X [ 478ULL ] ) * ( ( real_T
) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0 ) * ( - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu29 * 2.0 ) / (
t1738 == 0.0 ? 1.0E-16 : t1738 ) ) * ( 1.0 / ( t1786 == 0.0 ? 1.0E-16 : t1786
) ) * intermediate_der11675 * intrm_sf_mf_1537 * 0.32 ; intermediate_der11675
= pmf_sqrt ( ( ( real_T ) ( M [ 21ULL ] != 0 ) * 2.0 - 1.0 ) * ( t918 / (
intrm_sf_mf_1546 == 0.0 ? 1.0E-16 : intrm_sf_mf_1546 ) / ( X [ 499ULL ] ==
0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) * intermediate_der4892 * 0.64 ; t1738 = (
t876 - t876 * 0.95 ) * ( t876 - t876 * 0.95 ) ; intermediate_der11572 = (
intermediate_der11675 - intermediate_der11675 * 0.95 ) * ( - ( t872 - t876 *
0.95 ) / ( t1738 == 0.0 ? 1.0E-16 : t1738 ) ) + ( intermediate_der11685 -
intermediate_der11675 * 0.95 ) / ( t688_idx_0 == 0.0 ? 1.0E-16 : t688_idx_0 )
; intermediate_der11599 = intermediate_der11572 * t878 * 6.0 - t878 * t878 *
intermediate_der11572 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 * 0.95 ) {
intermediate_der11572 = intermediate_der11685 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ) {
intermediate_der11572 = intermediate_der11675 * 100000.0 ; } else {
intermediate_der11572 = ( ( ( - intermediate_der11599 * t872 + ( 1.0 - t881 )
* intermediate_der11685 ) + intermediate_der11599 * t876 ) +
intermediate_der11675 * t881 ) * 100000.0 ; } intermediate_der11599 = (
intermediate_der11675 - intermediate_der11675 * 0.95 ) * ( - ( - t872 - t876
* 0.95 ) / ( t1738 == 0.0 ? 1.0E-16 : t1738 ) ) + ( - intermediate_der11685 -
intermediate_der11675 * 0.95 ) / ( t688_idx_0 == 0.0 ? 1.0E-16 : t688_idx_0 )
; t761 = intermediate_der11599 * t896 * 6.0 - t896 * t896 *
intermediate_der11599 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 * 0.95 ) {
intermediate_der11599 = intermediate_der11685 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu26 ) {
intermediate_der11599 = - intermediate_der11675 * 100000.0 ; } else {
intermediate_der11599 = ( ( ( - t761 * t872 + ( 1.0 - t692_idx_0 ) *
intermediate_der11685 ) + - t876 * t761 ) + - intermediate_der11675 *
t692_idx_0 ) * 100000.0 ; } t825 = ( ( real_T ) ( M [ 40ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_11 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * (
U_idx_11 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t919 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ; intermediate_der11705 = ( ( real_T ) ( M [ 42ULL ] !=
0 ) * 2.0 - 1.0 ) * ( U_idx_4 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL
] ) ) * ( U_idx_4 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( -
t919 / 7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ; if ( t919 >= 0.0 ) { intermediate_der11719 = ( t996 -
zc_int365 ) * 0.01 + ( t825 - ( ( real_T ) ( M [ 41ULL ] != 0 ) * 2.0 - 1.0 )
* ( t831 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t831 / ( X
[ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t919 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) * t919 ; } else { intermediate_der11719 = - ( (
zc_int366 - zc_int367 ) * 0.01 ) + - ( ( intermediate_der11705 - ( ( real_T )
( M [ 43ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_6 / ( X [ 37ULL ] == 0.0 ?
1.0E-16 : X [ 37ULL ] ) ) * ( U_idx_6 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) * ( - t919 / 7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0
/ 2.0 * 9.999999999999999E-14 ) * t919 ) ; } t1786 = pmf_sqrt ( ( ( real_T )
( M [ 126ULL ] != 0 ) * 2.0 - 1.0 ) * ( t863 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) )
) ; t1707 = - ( t1752 * 2.0 ) ; t1752 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ; t71 = ( X [
189ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 126ULL ] != 0 ) * 2.0 -
1.0 ) * ( t863 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va3 ) )
) * t800 * 0.64 + ( X [ 189ULL ] - 1.01325 ) * ( ( real_T ) ( M [ 126ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t1707 / ( t1752 == 0.0 ? 1.0E-16 : t1752 ) ) * ( 1.0 /
( t1786 == 0.0 ? 1.0E-16 : t1786 ) ) * t799 * t845 * 0.32 ; t799 = pmf_sqrt (
( ( real_T ) ( M [ 137ULL ] != 0 ) * 2.0 - 1.0 ) * ( t860 / ( t1747 == 0.0 ?
1.0E-16 : t1747 ) / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ) *
t800 * 0.64 ; t1747 = ( zc_int43 - zc_int43 * 0.95 ) * ( zc_int43 - zc_int43
* 0.95 ) ; t831 = ( t799 - t799 * 0.95 ) * ( - ( zc_int42 - zc_int43 * 0.95 )
/ ( t1747 == 0.0 ? 1.0E-16 : t1747 ) ) + ( t71 - t799 * 0.95 ) / ( t1178 ==
0.0 ? 1.0E-16 : t1178 ) ; intermediate_der11822 = t831 * t1086 * 6.0 - t1086
* t1086 * t831 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 * 0.95 ) {
t831 = t71 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ) { t831 =
t799 * 100000.0 ; } else { t831 = ( ( ( - intermediate_der11822 * zc_int42 +
( 1.0 - t1089 ) * t71 ) + intermediate_der11822 * zc_int43 ) + t799 * t1089 )
* 100000.0 ; } intermediate_der11822 = ( t799 - t799 * 0.95 ) * ( - ( -
zc_int42 - zc_int43 * 0.95 ) / ( t1747 == 0.0 ? 1.0E-16 : t1747 ) ) + ( - t71
- t799 * 0.95 ) / ( t1178 == 0.0 ? 1.0E-16 : t1178 ) ; t1774 =
intermediate_der11822 * t1091 * 6.0 - t1091 * t1091 * intermediate_der11822 *
6.0 ; if ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18
<= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 * 0.95 ) {
intermediate_der11822 = t71 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va17 ) {
intermediate_der11822 = - t799 * 100000.0 ; } else { intermediate_der11822 =
( ( ( - t1774 * zc_int42 + ( 1.0 - t1093 ) * t71 ) + - zc_int43 * t1774 ) + -
t799 * t1093 ) * 100000.0 ; } t572 [ 0ULL ] = X [ 531ULL ] ; t570 [ 0 ] =
5ULL ; tlu2_linear_nearest_prelookup ( & mh_efOut . mField0 [ 0ULL ] , &
mh_efOut . mField1 [ 0ULL ] , & mh_efOut . mField2 [ 0ULL ] , & t700 [ 0ULL ]
, & t572 [ 0ULL ] , & t570 [ 0ULL ] , & t74 [ 0ULL ] ) ; t68 = mh_efOut ;
t572 [ 0ULL ] = U_idx_12 * 376.99111843077515 * 0.99999999999999978 /
0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t573 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & nh_efOut . mField0 [ 0ULL ] , &
nh_efOut . mField1 [ 0ULL ] , & nh_efOut . mField2 [ 0ULL ] , & nonscalar64 [
0ULL ] , & t572 [ 0ULL ] , & t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t58 =
nh_efOut ; if ( M [ 339ULL ] != 0 ) { t71 = - ( ( ( ( ( ( ( X [ 18ULL ] * 0.1
+ X [ 87ULL ] * - 1.01 ) + X [ 166ULL ] * 1.0E-9 ) + - X [ 168ULL ] ) + X [
19ULL ] ) + - 65.0 ) - Fuel_Cell_Boost_Converter_L_i ) * t844 * 0.001 ) ; }
else { t71 = - ( ( Fuel_Cell_Boost_Converter_L_i * 0.001 + ( X [ 87ULL ] *
0.1 + 650.0 ) ) * t844 ) ; } t697 [ 0ULL ] = - ( - ( 0.0 * ( X [ 155ULL ] / (
X [ 158ULL ] == 0.0 ? 1.0E-16 : X [ 158ULL ] ) ) ) / 1.1843079200592157 ) ;
t697 [ 1ULL ] = 0.0 * ( X [ 155ULL ] / ( X [ 158ULL ] == 0.0 ? 1.0E-16 : X [
158ULL ] ) ) * ( X [ 7ULL ] + 126.84999999999997 ) ; t697 [ 2ULL ] = ( ( 0.01
- t1768 ) * - 0.009810000000000001 + ( 0.01 - t1768 ) * 0.009810000000000001
) - 0.0 * ( X [ 14ULL ] / ( X [ 158ULL ] == 0.0 ? 1.0E-16 : X [ 158ULL ] ) *
100.0 + X [ 161ULL ] ) ; t697 [ 3ULL ] = ( - X [ 93ULL ] / ( t1187 == 0.0 ?
1.0E-16 : t1187 ) * t1101 - ( ( t1924 * t1104 - X [ 95ULL ] * t1929 ) + t1103
* 100.0 ) ) / 2.6578958850679178E+7 ; t697 [ 4ULL ] = - ( t1924 * t1104 + X [
95ULL ] * t1929 ) / 1.3398809999599461E+7 ; t697 [ 5ULL ] = ( X [ 93ULL ] / (
t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 - ( ( t1928 * t1108 - X [ 95ULL ] *
t1926 ) + t1107 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [ 6ULL ] = - (
t1928 * t1108 + X [ 95ULL ] * t1926 ) / 1.3398809999599461E+7 ; t697 [ 7ULL ]
= ( - X [ 102ULL ] / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 - ( ( t1866 *
t1104 - X [ 104ULL ] * t1929 ) + t1110 * 100.0 ) ) / 2.6578958850679178E+7 ;
t697 [ 8ULL ] = - ( t1866 * t1104 + X [ 104ULL ] * t1929 ) /
1.3398809999599461E+7 ; t697 [ 9ULL ] = ( X [ 102ULL ] / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) * t1106 - ( ( t1868 * t1108 - X [ 104ULL ] * t1926 ) +
t1901 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [ 10ULL ] = - ( t1868 *
t1108 + X [ 104ULL ] * t1926 ) / 1.3398809999599461E+7 ; t697 [ 11ULL ] = ( -
X [ 111ULL ] / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 - ( (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 * t1104 - X [
113ULL ] * t1929 ) + t1867 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [ 12ULL
] = - ( Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 *
t1104 + X [ 113ULL ] * t1929 ) / 1.3398809999599461E+7 ; t697 [ 13ULL ] = ( X
[ 111ULL ] / ( t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 - ( (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 * t1108 - X [
113ULL ] * t1926 ) + t1872 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [ 14ULL
] = - ( Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 *
t1108 + X [ 113ULL ] * t1926 ) / 1.3398809999599461E+7 ; t697 [ 15ULL ] = ( -
X [ 111ULL ] / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) * intermediate_der190 - ( (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 * t783 - X [
121ULL ] * intermediate_der227 ) + t782 * 100.0 ) ) / 1.328947942533959E+8 ;
t697 [ 16ULL ] = - (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio5 * t783 + X [
121ULL ] * intermediate_der227 ) / 6.6994049997997306E+7 ; t697 [ 17ULL ] = (
- X [ 118ULL ] / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) * t784 - ( (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 * t787 - X [
123ULL ] * intermediate_der235 ) + intermediate_der232 * 100.0 ) ) /
1.328947942533959E+8 ; t697 [ 18ULL ] = - (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 * t787 + X [
123ULL ] * intermediate_der235 ) / 6.6994049997997306E+7 ; t697 [ 19ULL ] = -
( intrm_sf_mf_1358 * 0.001 ) / 28.173600337531049 ; t697 [ 20ULL ] = - ( t883
- intermediate_der7437 ) ; t697 [ 21ULL ] = ( - X [ 93ULL ] / ( t1235 == 0.0
? 1.0E-16 : t1235 ) * intermediate_der190 - ( ( t1928 * t783 - X [ 126ULL ] *
intermediate_der227 ) + intermediate_der366 * 100.0 ) ) /
1.328947942533959E+8 ; t697 [ 22ULL ] = - ( t1928 * t783 + X [ 126ULL ] *
intermediate_der227 ) / 6.6994049997997306E+7 ; t697 [ 23ULL ] = ( X [ 102ULL
] / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) * t784 - ( ( t1866 * t787 - X [ 128ULL
] * intermediate_der235 ) + intermediate_der342 * 100.0 ) ) /
1.328947942533959E+8 ; t697 [ 24ULL ] = - ( t1866 * t787 + X [ 128ULL ] *
intermediate_der235 ) / 6.6994049997997306E+7 ; t697 [ 25ULL ] = - ( t788 *
0.001 ) ; t697 [ 26ULL ] = - ( intermediate_der7917 - intermediate_der8271 )
; t697 [ 27ULL ] = ( - X [ 102ULL ] / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) *
intermediate_der190 - ( ( t1868 * t783 - X [ 131ULL ] * intermediate_der227 )
+ intermediate_der497 * 100.0 ) ) / 1.328947942533959E+8 ; t697 [ 28ULL ] = -
( t1868 * t783 + X [ 131ULL ] * intermediate_der227 ) / 6.6994049997997306E+7
; t697 [ 29ULL ] = ( X [ 111ULL ] / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) * t784
- ( ( Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 * t787
- X [ 133ULL ] * intermediate_der235 ) + intermediate_der502 * 100.0 ) ) /
1.328947942533959E+8 ; t697 [ 30ULL ] = - (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio2 * t787 + X [
133ULL ] * intermediate_der235 ) / 6.6994049997997306E+7 ; t697 [ 31ULL ] = -
( t791 * 0.001 ) ; t697 [ 32ULL ] = - ( t807 - intermediate_der8698 ) ; t697
[ 33ULL ] = ( - X [ 136ULL ] / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 - (
( Electrical_Cooling_System_Pump_convection_A_u_in * t1104 - X [ 138ULL ] *
t1929 ) + intermediate_der532 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [
34ULL ] = - ( Electrical_Cooling_System_Pump_convection_A_u_in * t1104 + X [
138ULL ] * t1929 ) / 1.3398809999599461E+7 ; t697 [ 35ULL ] = ( X [ 93ULL ] /
( t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 - ( ( t1924 * t1108 - X [ 138ULL ]
* t1926 ) + intermediate_der539 * 100.0 ) ) / 2.6578958850679178E+7 ; t697 [
36ULL ] = - ( t1924 * t1108 + X [ 138ULL ] * t1926 ) / 1.3398809999599461E+7
; t697 [ 37ULL ] = intermediate_der546 * 100.0 ; t697 [ 38ULL ] = ( X [
136ULL ] / ( t1196 == 0.0 ? 1.0E-16 : t1196 ) * t1106 - ( (
Electrical_Cooling_System_Pump_convection_A_u_in * t1108 - X [ 161ULL ] *
t1926 ) + t827 * 100.0 ) ) / 2.65794426837838E+7 ; t697 [ 39ULL ] = ( X [
118ULL ] / ( t1187 == 0.0 ? 1.0E-16 : t1187 ) * t1101 - ( (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 * t1104 - X [
161ULL ] * t1929 ) + intermediate_der7398 * 100.0 ) ) / 2.65794426837838E+7 ;
t697 [ 40ULL ] = - ( Electrical_Cooling_System_Pump_convection_A_u_in * t1108
+ X [ 161ULL ] * t1926 ) / 1.3398809999599461E+7 ; t697 [ 41ULL ] = - (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio10 * t1104 + X [
161ULL ] * t1929 ) / 1.3398809999599461E+7 ; t697 [ 42ULL ] = t833 ; t697 [
43ULL ] = intermediate_der7446 ; t1929 = t845 * t845 ; intrm_sf_mf_1358 = - (
( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * ( t848 / ( X [ 214ULL ] ==
0.0 ? 1.0E-16 : X [ 214ULL ] ) ) * ( t848 / ( X [ 214ULL ] == 0.0 ? 1.0E-16 :
X [ 214ULL ] ) ) * ( X [ 180ULL ] / 0.64 / ( t845 == 0.0 ? 1.0E-16 : t845 ) )
* ( - ( X [ 180ULL ] / 0.64 ) / ( t1929 == 0.0 ? 1.0E-16 : t1929 ) ) * t800 *
2.0 / 2.0 * 9.999999999999999E-14 ) ; t699 [ 0ULL ] = - ( ( - ( X [ 22ULL ] *
- 0.01 ) * ( - 164.72089615570803 / ( intrm_sf_mf_89 == 0.0 ? 1.0E-16 :
intrm_sf_mf_89 ) ) + - ( X [ 23ULL ] * - 0.01 ) * ( - 3827.6794129126583 / (
intrm_sf_mf_89 == 0.0 ? 1.0E-16 : intrm_sf_mf_89 ) ) ) / 12.896402563644669 )
; t699 [ 1ULL ] = - ( ( ( - ( X [ 22ULL ] * - 0.01 ) * ( t839 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ) + - ( X [
23ULL ] * - 0.01 ) * ( t838 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u1 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_u0 * - 0.01 ) /
2246.65922904024 ) ; t699 [ 2ULL ] = - ( X [ 22ULL ] * - 0.01 ) ; t699 [ 3ULL
] = - ( X [ 23ULL ] * - 0.01 ) ; t699 [ 4ULL ] = - ( ( - ( X [ 75ULL ] * 0.01
) * ( - 164.72089615570803 / ( t917 == 0.0 ? 1.0E-16 : t917 ) ) + - ( X [
74ULL ] * 0.01 ) * ( - 3827.6794129126583 / ( t917 == 0.0 ? 1.0E-16 : t917 )
) ) / 12.896402563644669 ) ; t699 [ 5ULL ] = - ( ( ( - ( X [ 75ULL ] * 0.01 )
* ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 - t773 )
+ - ( X [ 74ULL ] * 0.01 ) * ( t923 - t773 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant26 * 0.01 ) /
2246.65922904024 ) ; t699 [ 6ULL ] = - ( X [ 75ULL ] * 0.01 ) ; t699 [ 7ULL ]
= - ( X [ 74ULL ] * 0.01 ) ; t699 [ 8ULL ] = - ( ( ( - 0.01 +
intermediate_der966 ) / 2.0 * ( ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * (
U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 /
7.8539816339744827E-5 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t998 ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 + t836 ) /
2.0 * ( ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_9 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( U_idx_9 / ( X [ 170ULL ] ==
0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 /
7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( intermediate_der966 - - 0.01 ) / 2.0 * X [
203ULL ] ) ; t699 [ 9ULL ] = - ( ( - 0.01 + intermediate_der964 ) / 2.0 * X [
172ULL ] - ( intermediate_der964 - - 0.01 ) / 2.0 * X [ 209ULL ] ) ; t699 [
10ULL ] = - ( ( - 0.01 + t796 ) / 2.0 * X [ 171ULL ] - ( t796 - - 0.01 ) /
2.0 * X [ 208ULL ] ) ; t699 [ 11ULL ] = - t870 ; t699 [ 12ULL ] = - ( t1678 /
7.8539816339744827E-5 * 0.00031622776601683789 + t818 ) ; t699 [ 13ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 >= 0.0 ? 0.0
: - intermediate_der10900 ; t1929 = X [ 193ULL ] * intrm_sf_mf_89 ; t699 [
14ULL ] = - ( ( ( real_T ) ( M [ 72ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1929 / ( X
[ 194ULL ] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) ) * ( t1929 / ( X [ 194ULL ] ==
0.0 ? 1.0E-16 : X [ 194ULL ] ) ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 /
7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ; t699 [ 15ULL ] = - ( ( ( real_T ) ( M [ 94ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t830 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) )
* ( t830 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 /
7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ; t1924 = t919 + t922 ; t699 [ 16ULL ] = - ( ( ( 0.01
+ intermediate_der5241 ) / 2.0 * zc_int360 + t1924 / 2.0 * ( ( ( real_T ) ( M
[ 36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1128 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X
[ 37ULL ] ) ) * ( t1128 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) *
( t919 / 7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( intermediate_der5241 - 0.01 ) / 2.0 * X [
557ULL ] ) ; t699 [ 17ULL ] = - ( ( 0.01 + t851 ) / 2.0 * X [ 548ULL ] - (
t851 - 0.01 ) / 2.0 * X [ 559ULL ] ) ; t699 [ 18ULL ] = - ( ( 0.01 + t850 ) /
2.0 * X [ 547ULL ] - ( t850 - 0.01 ) / 2.0 * X [ 558ULL ] ) ; t1868 = X [
73ULL ] * t917 ; t699 [ 19ULL ] = - ( ( ( real_T ) ( M [ 38ULL ] != 0 ) * 2.0
- 1.0 ) * ( t1868 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * (
t1868 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t919 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ; t699 [ 20ULL ] = - ( ( ( 0.01 +
intermediate_der5241 ) / 2.0 * ( ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * (
U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t919 /
7.8539816339744827E-5 ) * ( t919 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t998 ) + t1924 / 2.0 * ( ( ( real_T ) ( M [ 13ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [
170ULL ] ) ) * ( U_idx_9 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) )
* ( t919 / 7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( intermediate_der5241 - 0.01 ) / 2.0 * X [
567ULL ] ) ; t699 [ 21ULL ] = - ( ( 0.01 + t851 ) / 2.0 * X [ 172ULL ] - (
t851 - 0.01 ) / 2.0 * X [ 569ULL ] ) ; t699 [ 22ULL ] = - ( ( 0.01 + t850 ) /
2.0 * X [ 171ULL ] - ( t850 - 0.01 ) / 2.0 * X [ 568ULL ] ) ; t699 [ 23ULL ]
= - ( ( ( - 0.01 + t857 ) / 2.0 * zc_int362 + ( - t919 + t922 ) / 2.0 * ( ( (
real_T ) ( M [ 36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1128 / ( X [ 37ULL ] == 0.0
? 1.0E-16 : X [ 37ULL ] ) ) * ( t1128 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) * ( - t919 / 7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0
/ 2.0 * 9.999999999999999E-14 ) ) - ( t857 - - 0.01 ) / 2.0 * X [ 567ULL ] )
; t699 [ 24ULL ] = - ( ( - 0.01 + intermediate_der5276 ) / 2.0 * X [ 548ULL ]
- ( intermediate_der5276 - - 0.01 ) / 2.0 * X [ 569ULL ] ) ; t699 [ 25ULL ] =
- ( ( - 0.01 + intermediate_der5275 ) / 2.0 * X [ 547ULL ] - (
intermediate_der5275 - - 0.01 ) / 2.0 * X [ 568ULL ] ) ; t699 [ 26ULL ] =
intermediate_der11719 ; t699 [ 27ULL ] = intermediate_der11705 ; t699 [ 28ULL
] = t825 ; t700 [ 0ULL ] = - ( ( ( 1.0 - X [ 35ULL ] ) * ( -
164.72089615570803 / ( intrm_sf_mf_542 == 0.0 ? 1.0E-16 : intrm_sf_mf_542 ) )
+ - X [ 34ULL ] * ( - 3827.6794129126583 / ( intrm_sf_mf_542 == 0.0 ? 1.0E-16
: intrm_sf_mf_542 ) ) ) / 12.896402563644669 ) ; t700 [ 1ULL ] = - ( ( ( (
t861 - intrm_sf_mf_244 ) * ( 1.0 - X [ 35ULL ] ) + - X [ 34ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_42 -
intrm_sf_mf_244 ) ) + intrm_sf_mf_540 ) / 2246.65922904024 ) ; t700 [ 2ULL ]
= - X [ 35ULL ] ; t700 [ 3ULL ] = - X [ 34ULL ] ; t700 [ 4ULL ] = zc_int116 ;
t701 [ 0ULL ] = - ( ( - X [ 307ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M22 ) / 2.0 * (
t1659 / 2.0 * 9.999999999999999E-14 ) ) ; t701 [ 1ULL ] = - X [ 307ULL ] >=
0.0 ? - 10.0 : - intermediate_der10340 ; t701 [ 2ULL ] = - ( ( X [ 307ULL ] +
t764 ) / 2.0 * intermediate_der10350 ) ; t701 [ 3ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 >= 0.0 ? -
t803 : - intermediate_der10423 ; t701 [ 4ULL ] = - ( U_idx_3 - t805 ) ; t1929
= X [ 341ULL ] * t877 ; t1924 = - ( X [ 341ULL ] * t877 ) ; t701 [ 5ULL ] = -
( ( ( ( real_T ) ( M [ 330ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1929 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) )
* ( t1924 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 + ( ( real_T ) (
M [ 330ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1929 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M0 ) )
* ( t1924 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 10.0 ) * ( X [ 307ULL
] / 0.64 / 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.64 /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 ) ; t702 [ 0ULL ] = - (
( 1.0 - X [ 52ULL ] ) * ( - 164.72089615570803 / ( t770 == 0.0 ? 1.0E-16 :
t770 ) ) + - X [ 51ULL ] * ( 36.965491221318985 / ( t770 == 0.0 ? 1.0E-16 :
t770 ) ) ) ; t702 [ 1ULL ] = - ( ( ( ( ( t895 - X [ 50ULL ] * 0.461523 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) * ( 1.0 - X
[ 52ULL ] ) + - X [ 51ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip42 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip40 ) /
2172.7681408465714 ) ; t702 [ 2ULL ] = - X [ 52ULL ] ; t702 [ 3ULL ] = - X [
51ULL ] ; t702 [ 4ULL ] = t826 ; t703 [ 0ULL ] = ( - ( - X [ 424ULL ] + - X [
425ULL ] ) / ( t1375 == 0.0 ? 1.0E-16 : t1375 ) * intermediate_der3615 - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 *
intermediate_der3624 - X [ 429ULL ] * intermediate_der3622 ) +
intermediate_der3618 * 100.0 ) ) / 1.233284047215034E+6 ; t703 [ 1ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 *
intermediate_der3624 + X [ 429ULL ] * intermediate_der3622 ) /
171803.29647667333 ; t703 [ 2ULL ] = ( - X [ 425ULL ] / ( t1384 == 0.0 ?
1.0E-16 : t1384 ) * t808 - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 * t812 - X [
448ULL ] * t811 ) + intermediate_der3716 * 100.0 ) ) / 8.80132724281134E+6 ;
t703 [ 3ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant9 * t812 + X [
448ULL ] * t811 ) / 1.2260736179143097E+6 ; t703 [ 4ULL ] = ( - X [ 446ULL ]
/ ( t1393 == 0.0 ? 1.0E-16 : t1393 ) * t814 - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 * t817 - X [
448ULL ] * t815 ) + intermediate_der3723 * 100.0 ) ) / 8.80132724281134E+6 ;
t703 [ 5ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 * t817 + X [
448ULL ] * t815 ) / 1.2260736179143097E+6 ; t703 [ 6ULL ] = ( X [ 445ULL ] -
1.01325 ) * 2.0 / ( t1513 == 0.0 ? 1.0E-16 : t1513 ) * 100.0 ; t703 [ 7ULL ]
= ( X [ 446ULL ] / ( t1408 == 0.0 ? 1.0E-16 : t1408 ) * intermediate_der3760
- ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 *
intermediate_der3767 - X [ 451ULL ] * intermediate_der3766 ) +
intermediate_der3763 * 100.0 ) ) / 6.3686514346761458E+7 ; t703 [ 8ULL ] = -
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co11 *
intermediate_der3767 + X [ 451ULL ] * intermediate_der3766 ) /
8.87188408103589E+6 ; t703 [ 9ULL ] = - intermediate_der6496 ; t703 [ 10ULL ]
= - t785 ; t1929 = intrm_sf_mf_1537 * intrm_sf_mf_1537 ;
tlu2_2d_linear_nearest_value ( & oh_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t58 . mField1 [ 0ULL ] , & t58 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField51 , & t570 [ 0ULL ] , &
t573 [ 0ULL ] , & t74 [ 0ULL ] ) ; t572 [ 0 ] = oh_efOut [ 0 ] ; t578 [ 0ULL
] = - ( ( Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_I *
0.031415926535897927 / 0.01 + intermediate_der123 ) * 0.001 ) /
28.173600337531049 ; t578 [ 1ULL ] = - 1.0 ; for ( t712 = 0ULL ; t712 < 44ULL
; t712 ++ ) { t578 [ t712 + 2ULL ] = t697 [ t712 ] ; } t578 [ 46ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va18 >= 0.0 ? -
t831 : - intermediate_der11822 ; t578 [ 47ULL ] = t802 ; t578 [ 48ULL ] =
intrm_sf_mf_1358 ; for ( t712 = 0ULL ; t712 < 29ULL ; t712 ++ ) { t578 [ t712
+ 49ULL ] = t699 [ t712 ] ; } for ( t712 = 0ULL ; t712 < 5ULL ; t712 ++ ) {
t578 [ t712 + 78ULL ] = t700 [ t712 ] ; } t578 [ 83ULL ] = U_idx_5 *
intermediate_der9819 ; for ( t712 = 0ULL ; t712 < 6ULL ; t712 ++ ) { t578 [
t712 + 84ULL ] = t701 [ t712 ] ; } for ( t712 = 0ULL ; t712 < 5ULL ; t712 ++
) { t578 [ t712 + 90ULL ] = t702 [ t712 ] ; } t578 [ 95ULL ] = U_idx_8 *
intermediate_der10956 ; for ( t712 = 0ULL ; t712 < 11ULL ; t712 ++ ) { t578 [
t712 + 96ULL ] = t703 [ t712 ] ; } t578 [ 107ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >= 0.0 ? -
intermediate_der11572 : - intermediate_der11599 ; t578 [ 108ULL ] = t846 ;
t578 [ 109ULL ] = - ( ( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) * (
t905 / ( X [ 500ULL ] == 0.0 ? 1.0E-16 : X [ 500ULL ] ) ) * ( t905 / ( X [
500ULL ] == 0.0 ? 1.0E-16 : X [ 500ULL ] ) ) * ( - X [ 471ULL ] / 0.64 / (
intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) ) * ( - ( - X [ 471ULL
] / 0.64 ) / ( t1929 == 0.0 ? 1.0E-16 : t1929 ) ) * intermediate_der4892 *
2.0 / 2.0 * 9.999999999999999E-14 ) ; t578 [ 110ULL ] = - ( t572 [ 0ULL ] *
376.99111843077515 ) ; t578 [ 111ULL ] = t71 ; t578 [ 112ULL ] = - (
Fuel_Cell_Boost_Converter_L_i * t844 ) ; for ( b = 0 ; b < 113 ; b ++ ) { out
. mX [ b ] = t578 [ b ] ; } ( void ) LC ; ( void ) t1931 ; return 0 ; }

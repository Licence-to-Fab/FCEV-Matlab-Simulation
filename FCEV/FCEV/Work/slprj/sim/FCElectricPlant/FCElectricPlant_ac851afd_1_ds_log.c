#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_log.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1242 , NeDsMethodOutput * t1243 ) { ETTS0
ab_efOut ; ETTS0 ac_efOut ; ETTS0 ae_efOut ; ETTS0 b_efOut ; ETTS0 bb_efOut ;
ETTS0 bf_efOut ; ETTS0 cg_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ; ETTS0
de_efOut ; ETTS0 dh_efOut ; ETTS0 e_efOut ; ETTS0 eb_efOut ; ETTS0 ec_efOut ;
ETTS0 ed_efOut ; ETTS0 ee_efOut ; ETTS0 efOut ; ETTS0 fc_efOut ; ETTS0
g_efOut ; ETTS0 ge_efOut ; ETTS0 gf_efOut ; ETTS0 h_efOut ; ETTS0 he_efOut ;
ETTS0 hg_efOut ; ETTS0 ib_efOut ; ETTS0 jb_efOut ; ETTS0 jc_efOut ; ETTS0
jd_efOut ; ETTS0 ke_efOut ; ETTS0 l_efOut ; ETTS0 lb_efOut ; ETTS0 lf_efOut ;
ETTS0 m_efOut ; ETTS0 mb_efOut ; ETTS0 me_efOut ; ETTS0 mg_efOut ; ETTS0
ne_efOut ; ETTS0 o_efOut ; ETTS0 ob_efOut ; ETTS0 oc_efOut ; ETTS0 od_efOut ;
ETTS0 p_efOut ; ETTS0 pb_efOut ; ETTS0 pe_efOut ; ETTS0 pf_efOut ; ETTS0
qe_efOut ; ETTS0 qg_efOut ; ETTS0 r_efOut ; ETTS0 s_efOut ; ETTS0 se_efOut ;
ETTS0 t42 ; ETTS0 t59 ; ETTS0 t60 ; ETTS0 t63 ; ETTS0 t68 ; ETTS0 t70 ; ETTS0
tb_efOut ; ETTS0 tc_efOut ; ETTS0 td_efOut ; ETTS0 te_efOut ; ETTS0 tf_efOut
; ETTS0 ub_efOut ; ETTS0 ug_efOut ; ETTS0 w_efOut ; ETTS0 we_efOut ; ETTS0
x_efOut ; ETTS0 xf_efOut ; ETTS0 yb_efOut ; ETTS0 yc_efOut ; ETTS0 yd_efOut ;
ETTS0 ye_efOut ; ETTS0 yg_efOut ; PmRealVector out ; real_T t545 [ 2444 ] ;
real_T X [ 575 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 8 ]
; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 8
] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ 8
] ; real_T t575 [ 8 ] ; real_T t592 [ 8 ] ; real_T t620 [ 8 ] ; real_T t625 [
8 ] ; real_T t642 [ 8 ] ; real_T t647 [ 8 ] ; real_T t699 [ 2 ] ; real_T
ad_efOut [ 1 ] ; real_T af_efOut [ 1 ] ; real_T ag_efOut [ 1 ] ; real_T
ah_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T
be_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T bh_efOut [ 1 ] ; real_T
c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T
cd_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ; real_T cf_efOut [ 1 ] ; real_T
ch_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T
df_efOut [ 1 ] ; real_T dg_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T
eg_efOut [ 1 ] ; real_T eh_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fb_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T
ff_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ; real_T fh_efOut [ 1 ] ; real_T
gb_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T
gg_efOut [ 1 ] ; real_T gh_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T hf_efOut [ 1 ] ; real_T
hh_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T
ig_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T
jf_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T
kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T
kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
ld_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T
mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T
nd_efOut [ 1 ] ; real_T nf_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T
oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T og_efOut [ 1 ] ; real_T
pc_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T pg_efOut [ 1 ] ; real_T
q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
qd_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T
rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T re_efOut [ 1 ] ; real_T
rf_efOut [ 1 ] ; real_T rg_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T
sc_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T sf_efOut [ 1 ] ; real_T
sg_efOut [ 1 ] ; real_T t525 [ 1 ] ; real_T t546 [ 1 ] ; real_T t74 [ 1 ] ;
real_T t77 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tg_efOut [ 1 ] ; real_T
u_efOut [ 1 ] ; real_T uc_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T
ue_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T
vb_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T
ve_efOut [ 1 ] ; real_T vf_efOut [ 1 ] ; real_T vg_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T wg_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T
xc_efOut [ 1 ] ; real_T xd_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
xg_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T
Battery_System_Battery_Q ; real_T Battery_System_DC_DC_Converter_p2_v ;
real_T Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio7 ;
real_T Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_u_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_convection3 ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_u_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_convection_B_rh ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_u_I ; real_T
Electrical_Cooling_System_Pump_rho_avg ; real_T
Electrical_Cooling_System_Tank_Tank_level ; real_T
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co ; real_T
Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 ; real_T
Fuel_Cell_Boost_Converter_C_power_dissipated ; real_T
Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Boost_Converter_vc ;
real_T Fuel_Cell_Current_Sensor1_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 ; real_T
Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_13 ; real_T U_idx_14 ; real_T U_idx_15 ; real_T U_idx_2 ; real_T
U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ;
real_T U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1323 ; real_T
intrm_sf_mf_1361 ; real_T intrm_sf_mf_1586 ; real_T intrm_sf_mf_18 ; real_T
intrm_sf_mf_297 ; real_T intrm_sf_mf_433 ; real_T intrm_sf_mf_574 ; real_T
intrm_sf_mf_689 ; real_T intrm_sf_mf_723 ; real_T intrm_sf_mf_724 ; real_T
intrm_sf_mf_898 ; real_T piece346 ; real_T piece6 ; real_T piece7 ; real_T
t1132 ; real_T t1141 ; real_T t1191 ; real_T t1194 ; real_T t1217 ; real_T
t1225 ; real_T t1234 ; real_T t1241 ; real_T t651_idx_0 ; real_T t702 ;
real_T t704 ; real_T t707 ; real_T t725 ; real_T t740 ; real_T t743 ; real_T
t769 ; real_T t770 ; real_T t771 ; real_T t772 ; real_T t773 ; real_T t774 ;
real_T t775 ; real_T t776 ; real_T t778 ; real_T t779 ; real_T t784 ; real_T
t785 ; real_T t788 ; real_T t789 ; real_T t790 ; real_T t793 ; real_T t794 ;
real_T t795 ; real_T t796 ; real_T t797 ; real_T t798 ; real_T t799 ; real_T
t800 ; real_T t801 ; real_T t803 ; real_T t804 ; real_T t805 ; real_T t806 ;
real_T t807 ; real_T t812 ; real_T t814 ; real_T t819 ; real_T t822 ; real_T
t824 ; real_T t826 ; real_T t830 ; real_T t834 ; real_T t837 ; real_T t838 ;
real_T t840 ; real_T t842 ; real_T t845 ; real_T t848 ; real_T t851 ; real_T
t852 ; real_T t856 ; real_T t865 ; real_T t866 ; real_T t869 ; real_T t871 ;
real_T t877 ; real_T t879 ; real_T t880 ; real_T t882 ; real_T t883 ; real_T
t885 ; real_T t886 ; real_T t887 ; real_T t889 ; real_T t890 ; real_T t893 ;
real_T t894 ; real_T t895 ; real_T t897 ; real_T t898 ; real_T t901 ; real_T
t902 ; real_T t903 ; real_T t904 ; real_T t908 ; real_T t911 ; real_T t912 ;
real_T t920 ; real_T t921 ; real_T t922 ; real_T t923 ; real_T t925 ; real_T
t928 ; real_T t930 ; real_T t931 ; real_T t936 ; real_T t939 ; real_T t940 ;
real_T t946 ; real_T t947 ; real_T t948 ; real_T t951 ; real_T t953 ; real_T
t954 ; real_T t955 ; real_T t956 ; real_T t959 ; real_T t971 ; real_T t972 ;
size_t t252 [ 1 ] ; size_t t340 [ 1 ] ; size_t t343 [ 1 ] ; size_t t75 [ 1 ]
; size_t t76 [ 1 ] ; size_t t691 ; int32_T b ; U_idx_0 = t1242 -> mU . mX [ 0
] ; U_idx_1 = t1242 -> mU . mX [ 1 ] ; U_idx_2 = t1242 -> mU . mX [ 2 ] ;
U_idx_3 = t1242 -> mU . mX [ 3 ] ; U_idx_4 = t1242 -> mU . mX [ 4 ] ; U_idx_5
= t1242 -> mU . mX [ 5 ] ; U_idx_6 = t1242 -> mU . mX [ 6 ] ; U_idx_7 = t1242
-> mU . mX [ 7 ] ; U_idx_8 = t1242 -> mU . mX [ 8 ] ; U_idx_9 = t1242 -> mU .
mX [ 9 ] ; U_idx_10 = t1242 -> mU . mX [ 10 ] ; U_idx_11 = t1242 -> mU . mX [
11 ] ; U_idx_12 = t1242 -> mU . mX [ 12 ] ; U_idx_13 = t1242 -> mU . mX [ 13
] ; U_idx_14 = t1242 -> mU . mX [ 14 ] ; U_idx_15 = t1242 -> mU . mX [ 15 ] ;
for ( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t1242 -> mX . mX [ b ] ; } out =
t1243 -> mLOG ; Battery_System_Battery_Q = X [ 0ULL ] * - 0.01 + U_idx_0 *
0.01 ; Battery_System_DC_DC_Converter_p2_v = X [ 87ULL ] * 0.1 + 650.0 ; t769
= ( X [ 4ULL ] * 0.01 + X [ 5ULL ] * - 0.01 ) + X [ 88ULL ] ; t770 = X [ 4ULL
] * 0.01 + X [ 5ULL ] * - 0.01 ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I = ( X [ 110ULL ] + X
[ 117ULL ] ) / 2.0 ; t74 [ 0ULL ] = X [ 120ULL ] ; t75 [ 0 ] = 20ULL ; t76 [
0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , &
efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField2 , & t74 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] )
; t68 = efOut ; t77 [ 0ULL ] = X [ 110ULL ] ; t252 [ 0 ] = 19ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t77 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t546 [ 0 ] = c_efOut [ 0 ] ;
t771 = t546 [ 0ULL ] ; t546 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t546 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63
= d_efOut ; t525 [ 0ULL ] = X [ 117ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] ,
& t63 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75 [ 0ULL ] , & t252 [
0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = f_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio7 = t651_idx_0 ;
t525 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [
0ULL ] , & t76 [ 0ULL ] ) ; t68 = g_efOut ; t525 [ 0ULL ] =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = i_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I = t651_idx_0 ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] ,
& t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75 [ 0ULL ] , & t252 [
0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = j_efOut [ 0 ] ; intrm_sf_mf_433 =
t651_idx_0 ; tlu2_2d_linear_linear_value ( & k_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = k_efOut [ 0 ] ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_u_I = t651_idx_0 ; t772 =
( X [ 7ULL ] * - 0.0002 + X [ 8ULL ] * - 2.0E-6 ) + U_idx_0 * 0.000202 ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I = ( X [ 92ULL ] + X [
99ULL ] ) / 2.0 ; t525 [ 0ULL ] = X [ 125ULL ] ; tlu2_linear_linear_prelookup
( & l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68 = l_efOut ; t525 [ 0ULL ] =
X [ 92ULL ] ; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , &
m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ]
, & t76 [ 0ULL ] ) ; t63 = m_efOut ; tlu2_2d_linear_linear_value ( & n_efOut
[ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t651_idx_0 = n_efOut [ 0 ] ; t773 = t651_idx_0 ; t525 [ 0ULL ] = X [ 127ULL ]
; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63
= o_efOut ; t525 [ 0ULL ] = X [ 99ULL ] ; tlu2_linear_linear_prelookup ( &
p_efOut . mField0 [ 0ULL ] , & p_efOut . mField1 [ 0ULL ] , & p_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = p_efOut ;
tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] ,
& t63 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75 [ 0ULL ] , & t252 [
0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = q_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_convection3 = t651_idx_0
; t525 [ 0ULL ] = X [ 9ULL ] ; tlu2_linear_linear_prelookup ( & r_efOut .
mField0 [ 0ULL ] , & r_efOut . mField1 [ 0ULL ] , & r_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [
0ULL ] , & t76 [ 0ULL ] ) ; t60 = r_efOut ; t525 [ 0ULL ] =
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = s_efOut ; tlu2_2d_linear_linear_value ( & t_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = t_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I = t651_idx_0 ;
tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ] ,
& t60 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75 [ 0ULL ] , & t252 [
0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = u_efOut [ 0 ] ; intrm_sf_mf_689 =
t651_idx_0 ; tlu2_2d_linear_linear_value ( & v_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = v_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_u_I = t651_idx_0 ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I = ( X [ 101ULL ] + X [
108ULL ] ) / 2.0 ; t525 [ 0ULL ] = X [ 130ULL ] ;
tlu2_linear_linear_prelookup ( & w_efOut . mField0 [ 0ULL ] , & w_efOut .
mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63
= w_efOut ; t525 [ 0ULL ] = X [ 101ULL ] ; tlu2_linear_linear_prelookup ( &
x_efOut . mField0 [ 0ULL ] , & x_efOut . mField1 [ 0ULL ] , & x_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68 = x_efOut ;
tlu2_2d_linear_linear_value ( & y_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] ,
& t63 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75 [ 0ULL ] , & t252 [
0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = y_efOut [ 0 ] ; t774 = t651_idx_0 ;
t525 [ 0ULL ] = X [ 132ULL ] ; tlu2_linear_linear_prelookup ( & ab_efOut .
mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = ab_efOut ; t525 [ 0ULL ] = X [ 108ULL
] ; tlu2_linear_linear_prelookup ( & bb_efOut . mField0 [ 0ULL ] , & bb_efOut
. mField1 [ 0ULL ] , & bb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = bb_efOut ; tlu2_2d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = cb_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_convection_B_rh = t651_idx_0
; t525 [ 0ULL ] = X [ 11ULL ] ; tlu2_linear_linear_prelookup ( & db_efOut .
mField0 [ 0ULL ] , & db_efOut . mField1 [ 0ULL ] , & db_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68 = db_efOut ; t525 [ 0ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ;
tlu2_linear_linear_prelookup ( & eb_efOut . mField0 [ 0ULL ] , & eb_efOut .
mField1 [ 0ULL ] , & eb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = eb_efOut ; tlu2_2d_linear_linear_value ( & fb_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = fb_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I = t651_idx_0 ;
tlu2_2d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = gb_efOut [ 0 ] ;
intrm_sf_mf_724 = t651_idx_0 ; tlu2_2d_linear_linear_value ( & hb_efOut [
0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t651_idx_0 = hb_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_u_I = t651_idx_0 ; t525 [
0ULL ] = X [ 137ULL ] ; tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [
0ULL ] , & ib_efOut . mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t68 = ib_efOut ; t525 [ 0ULL ] = X [ 135ULL ] ;
tlu2_linear_linear_prelookup ( & jb_efOut . mField0 [ 0ULL ] , & jb_efOut .
mField1 [ 0ULL ] , & jb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = jb_efOut ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = kb_efOut [ 0 ] ;
Electrical_Cooling_System_Pump_rho_avg = t651_idx_0 ; t525 [ 0ULL ] = X [
139ULL ] ; tlu2_linear_linear_prelookup ( & lb_efOut . mField0 [ 0ULL ] , &
lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t63 = lb_efOut ; t525 [ 0ULL ] = X [ 90ULL ] ;
tlu2_linear_linear_prelookup ( & mb_efOut . mField0 [ 0ULL ] , & mb_efOut .
mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t59 = mb_efOut ; tlu2_2d_linear_linear_value ( & nb_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , & t59 . mField0 [ 0ULL ] , &
t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = nb_efOut [ 0 ] ;
Electrical_Cooling_System_Pump_rho_avg = (
Electrical_Cooling_System_Pump_rho_avg + t651_idx_0 ) / 2.0 ; t775 = X [
135ULL ] - X [ 90ULL ] ; t776 = t775 * X [ 140ULL ] * 0.0001 ; t778 = X [
7ULL ] * 0.0002 + U_idx_0 * - 0.0002 ; t779 = X [ 8ULL ] * 2.0E-6 + U_idx_0 *
- 2.0E-6 ; Electrical_Cooling_System_Tank_Tank_level = X [ 152ULL ] * - 0.2 +
0.2 ; Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co = X [
12ULL ] * 0.89999999999999991 + X [ 17ULL ] * - 0.89999999999999991 ; t525 [
0ULL ] = X [ 89ULL ] ; tlu2_linear_nearest_prelookup ( & ob_efOut . mField0 [
0ULL ] , & ob_efOut . mField1 [ 0ULL ] , & ob_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t42 = ob_efOut ; t525 [ 0ULL ] = X [ 90ULL ] ;
tlu2_linear_nearest_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = pb_efOut ; tlu2_2d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , &
t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = qb_efOut [ 0
] ; Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 =
t651_idx_0 ; tlu2_2d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = rb_efOut [ 0 ] ;
t784 = t651_idx_0 ; tlu2_2d_linear_nearest_value ( & sb_efOut [ 0ULL ] , &
t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = sb_efOut [ 0
] ; t785 = t651_idx_0 ; t525 [ 0ULL ] = X [ 98ULL ] ;
tlu2_linear_nearest_prelookup ( & tb_efOut . mField0 [ 0ULL ] , & tb_efOut .
mField1 [ 0ULL ] , & tb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68
= tb_efOut ; t525 [ 0ULL ] = X [ 99ULL ] ; tlu2_linear_nearest_prelookup ( &
ub_efOut . mField0 [ 0ULL ] , & ub_efOut . mField1 [ 0ULL ] , & ub_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = ub_efOut ;
tlu2_2d_linear_nearest_value ( & vb_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t75 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = vb_efOut [ 0 ] ; t788 =
t651_idx_0 ; tlu2_2d_linear_nearest_value ( & wb_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , &
t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = wb_efOut [ 0 ] ;
t789 = t651_idx_0 ; tlu2_2d_linear_nearest_value ( & xb_efOut [ 0ULL ] , &
t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = xb_efOut [ 0
] ; t790 = t651_idx_0 ; t525 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_nearest_prelookup ( & yb_efOut . mField0 [ 0ULL ] , & yb_efOut .
mField1 [ 0ULL ] , & yb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68
= yb_efOut ; t525 [ 0ULL ] = X [ 108ULL ] ; tlu2_linear_nearest_prelookup ( &
ac_efOut . mField0 [ 0ULL ] , & ac_efOut . mField1 [ 0ULL ] , & ac_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = ac_efOut ;
tlu2_2d_linear_nearest_value ( & bc_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t75 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = bc_efOut [ 0 ] ; t793 =
t651_idx_0 ; tlu2_2d_linear_nearest_value ( & cc_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , &
t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = cc_efOut [ 0 ] ;
t794 = t651_idx_0 ; tlu2_2d_linear_nearest_value ( & dc_efOut [ 0ULL ] , &
t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = dc_efOut [ 0
] ; t795 = t651_idx_0 ; t525 [ 0ULL ] = X [ 116ULL ] ;
tlu2_linear_nearest_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t525 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t59
= ec_efOut ; t525 [ 0ULL ] = X [ 117ULL ] ; tlu2_linear_nearest_prelookup ( &
fc_efOut . mField0 [ 0ULL ] , & fc_efOut . mField1 [ 0ULL ] , & fc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = fc_efOut ;
tlu2_2d_linear_nearest_value ( & gc_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t75 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = gc_efOut [ 0 ] ; t796 =
t651_idx_0 ; tlu2_2d_linear_nearest_value ( & hc_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , &
t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t75
[ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = hc_efOut [ 0 ] ;
t797 = t651_idx_0 ; tlu2_2d_linear_nearest_value ( & ic_efOut [ 0ULL ] , &
t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t75 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ic_efOut [ 0
] ; t798 = t651_idx_0 ; t799 = ( X [ 18ULL ] * - 0.1 + X [ 87ULL ] *
0.010000000000000002 ) + 65.0 ; Fuel_Cell_Boost_Converter_C_power_dissipated
= t799 * t799 * 0.01 ; t799 = X [ 166ULL ] * 1.0E-9 + X [ 19ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = X [ 166ULL ] + X [ 167ULL ] ;
Fuel_Cell_Boost_Converter_vc = ( ( ( ( X [ 18ULL ] * 0.1 + X [ 87ULL ] * -
1.01 ) + X [ 166ULL ] * 1.0E-9 ) + - X [ 168ULL ] ) + X [ 19ULL ] ) + - 65.0
; Fuel_Cell_Current_Sensor1_I = X [ 87ULL ] + X [ 168ULL ] ; if ( X [ 185ULL
] <= 0.0 ) { intrm_sf_mf_898 = 0.0 ; } else { intrm_sf_mf_898 = X [ 185ULL ]
>= 1.0 ? 1.0 : X [ 185ULL ] ; } if ( X [ 186ULL ] <= 0.0 ) { piece6 = 0.0 ; }
else { piece6 = X [ 186ULL ] >= 1.0 ? 1.0 : X [ 186ULL ] ; } t800 = ( ( ( (
1.0 - intrm_sf_mf_898 ) - piece6 ) * 296.802103844292 + intrm_sf_mf_898 *
461.523 ) + piece6 * 4124.48151675695 ) * 293.15 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 = - X [
192ULL ] + U_idx_4 * - 0.01 ; if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = X [ 23ULL
] >= 1.0 ? 1.0 : X [ 23ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
4124.48151675695 ; if ( X [ 193ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_723 = 216.59999999999997 ; } else { intrm_sf_mf_723 = X [ 193ULL
] >= 623.15 ? 623.15 : X [ 193ULL ] ; } t704 = intrm_sf_mf_723 *
intrm_sf_mf_723 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh = ( ( (
1074.1165326382641 + intrm_sf_mf_723 * - 0.2214565261064495 ) + t704 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) + ( (
1479.6504774711011 + intrm_sf_mf_723 * 1.2002114337048222 ) + t704 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
12825.281119789837 + intrm_sf_mf_723 * 6.9647057412840034 ) + t704 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; t801 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ;
intrm_sf_mf_723 = - pmf_sqrt ( fabs ( X [ 194ULL ] * X [ 194ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh / ( t801 ==
0.0 ? 1.0E-16 : t801 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ) /
( X [ 193ULL ] == 0.0 ? 1.0E-16 : X [ 193ULL ] ) ) ) * 7.8539816339744827E-5
; t806 = X [ 20ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh = X [ 21ULL ]
/ ( t806 == 0.0 ? 1.0E-16 : t806 ) ; if ( X [ 197ULL ] <= 216.59999999999997
) { t704 = 216.59999999999997 ; } else { t704 = X [ 197ULL ] >= 623.15 ?
623.15 : X [ 197ULL ] ; } t707 = t704 * t704 ; t801 = ( ( (
1074.1165326382641 + t704 * - 0.2214565261064495 ) + t707 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) + ( (
1479.6504774711011 + t704 * 1.2002114337048222 ) + t707 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
12825.281119789837 + t704 * 6.9647057412840034 ) + t707 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ; t807 = t801
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 = - pmf_sqrt
( fabs ( X [ 198ULL ] * X [ 198ULL ] * ( t801 / ( t807 == 0.0 ? 1.0E-16 :
t807 ) ) / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ) / ( X [
197ULL ] == 0.0 ? 1.0E-16 : X [ 197ULL ] ) ) ) * 7.8539816339744827E-5 ; t575
[ 0ULL ] = X [ 21ULL ] * 100000.0 ; t575 [ 1ULL ] = X [ 20ULL ] ; t575 [ 2ULL
] = X [ 200ULL ] ; t575 [ 3ULL ] = X [ 22ULL ] ; t575 [ 4ULL ] = X [ 195ULL ]
; t575 [ 5ULL ] = X [ 199ULL ] ; t575 [ 6ULL ] = X [ 23ULL ] ; t575 [ 7ULL ]
= X [ 196ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ t691 ] =
t575 [ t691 ] ; } t704 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 / (
intrm_sf_mf_723 == 0.0 ? 1.0E-16 : intrm_sf_mf_723 ) ; intrm_sf_mf_723 = - X
[ 180ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 = - X [
201ULL ] + - X [ 202ULL ] ; t525 [ 0ULL ] = X [ 20ULL ] ; t252 [ 0 ] = 52ULL
; tlu2_linear_linear_prelookup ( & jc_efOut . mField0 [ 0ULL ] , & jc_efOut .
mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = jc_efOut ; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = kc_efOut [
0 ] ; t801 = t651_idx_0 ; if ( 1.0 - X [ 22ULL ] >= 0.01 ) { t707 = 1.0 - X [
22ULL ] ; } else if ( 1.0 - X [ 22ULL ] >= - 0.1 ) { t707 = exp ( ( ( 1.0 - X
[ 22ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t707 = 1.6701700790245661E-7
; } t803 = X [ 23ULL ] / ( t707 == 0.0 ? 1.0E-16 : t707 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
lc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = lc_efOut [ 0 ] ; t707 = exp ( pmf_log ( X [ 21ULL ] *
100000.0 ) - t651_idx_0 ) ; if ( t707 >= 1.0 ) { t814 = ( t707 - 1.0 ) *
461.523 + t803 ; t804 = t803 / ( t814 == 0.0 ? 1.0E-16 : t814 ) ; } else {
t804 = 1.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10
= t804 * 0.01 ; t707 = ( X [ 22ULL ] - t804 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
if ( X [ 22ULL ] - t804 <= 0.0 ) { t707 = 0.0 ; } else if ( X [ 22ULL ] -
t804 >= t804 * 0.01 ) { t707 = X [ 22ULL ] - t804 ; } else { t707 = ( X [
22ULL ] - t804 ) * ( t707 * t707 * 3.0 - t707 * t707 * t707 * 2.0 ) ; } t707
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh * t707 *
7.8539816339744827E-5 / 0.001 ; t707 *= 100000.0 ; t803 = - X [ 204ULL ] + -
X [ 205ULL ] ; t804 = - X [ 206ULL ] + - X [ 207ULL ] ;
tlu2_1d_linear_linear_value ( & mc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = mc_efOut [ 0 ] ; t805 =
t651_idx_0 ; tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = nc_efOut [
0 ] ; t807 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ) * t805 +
t801 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) +
t651_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 = U_idx_3 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.0001 <=
7.8539816339744857E-13 ) { t801 = 7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.0001 >=
3.1415926535897929E-6 ) { t801 = 3.1415926535897929E-6 ; } else { t801 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 * 0.0001 ; }
if ( X [ 215ULL ] <= 0.0 ) { t805 = 0.0 ; } else { t805 = X [ 215ULL ] >= 1.0
? 1.0 : X [ 215ULL ] ; } if ( X [ 216ULL ] <= 0.0 ) { t806 = 0.0 ; } else {
t806 = X [ 216ULL ] >= 1.0 ? 1.0 : X [ 216ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = ( ( ( 1.0 -
t805 ) - t806 ) * 296.802103844292 + t805 * 461.523 ) + t806 *
4124.48151675695 ; if ( X [ 213ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = X [ 213ULL ]
>= 623.15 ? 623.15 : X [ 213ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00037212980109014541 ) * ( ( 1.0 - t805 ) - t806 ) + ( ( 1479.6504774711011
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.00038614513167823636 ) * t805 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.0070524868246844051 ) * t806 ; t819 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; t805 =
pmf_sqrt ( fabs ( X [ 214ULL ] * X [ 214ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / ( t819 ==
0.0 ? 1.0E-16 : t819 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) /
( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ) * t801 * 0.64 ; if ( X [
180ULL ] >= 0.0 ) { t801 = X [ 180ULL ] / ( t805 == 0.0 ? 1.0E-16 : t805 ) *
1.0E-5 ; } else { t801 = - X [ 180ULL ] / ( t805 == 0.0 ? 1.0E-16 : t805 ) *
1.0E-5 ; } t575 [ 0ULL ] = X [ 224ULL ] ; t575 [ 1ULL ] = X [ 24ULL ] ; t575
[ 2ULL ] = X [ 225ULL ] ; t575 [ 3ULL ] = X [ 26ULL ] ; t575 [ 4ULL ] = X [
226ULL ] ; t575 [ 5ULL ] = X [ 227ULL ] ; t575 [ 6ULL ] = X [ 25ULL ] ; t575
[ 7ULL ] = X [ 228ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 0ULL ] = X [
229ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
1ULL ] = X [ 27ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 2ULL ] = X [
230ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
3ULL ] = X [ 29ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 4ULL ] = X [
231ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
5ULL ] = X [ 232ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ 6ULL ] = X [
28ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [
7ULL ] = X [ 233ULL ] ; if ( X [ 26ULL ] <= 0.0 ) { t805 = 0.0 ; } else {
t805 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) {
t806 = 0.0 ; } else { t806 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = ( ( ( 1.0 -
t805 ) - t806 ) * 296.802103844292 + t805 * 461.523 ) + t806 *
4124.48151675695 ; if ( X [ 239ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = X [ 239ULL ]
>= 623.15 ? 623.15 : X [ 239ULL ] ; } t812 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * -
0.2214565261064495 ) + t812 * 0.00037212980109014541 ) * ( ( 1.0 - t805 ) -
t806 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
1.2002114337048222 ) + t812 * - 0.00038614513167823636 ) * t805 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
6.9647057412840034 ) + t812 * - 0.0070524868246844051 ) * t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = - pmf_sqrt (
fabs ( X [ 240ULL ] * X [ 240ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) )
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) /
( X [ 239ULL ] == 0.0 ? 1.0E-16 : X [ 239ULL ] ) ) ) * 0.32 ; t830 = X [
24ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
t812 = X [ 30ULL ] / ( t830 == 0.0 ? 1.0E-16 : t830 ) ; if ( X [ 242ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 242ULL
] >= 623.15 ? 623.15 : X [ 242ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t814 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *
0.00037212980109014541 ) * ( ( 1.0 - t805 ) - t806 ) + ( ( 1479.6504774711011
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 * -
0.00038614513167823636 ) * t805 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 * -
0.0070524868246844051 ) * t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t814 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = - pmf_sqrt
( fabs ( X [ 243ULL ] * X [ 243ULL ] * ( t814 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) )
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) /
( X [ 242ULL ] == 0.0 ? 1.0E-16 : X [ 242ULL ] ) ) ) * 0.32 ; t814 = X [
238ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6
) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = X [
241ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) ; t525 [
0ULL ] = X [ 24ULL ] ; tlu2_linear_linear_prelookup ( & oc_efOut . mField0 [
0ULL ] , & oc_efOut . mField1 [ 0ULL ] , & oc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ]
, & t76 [ 0ULL ] ) ; t63 = oc_efOut ; tlu2_1d_linear_linear_value ( &
pc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = pc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = t651_idx_0
; if ( 1.0 - X [ 26ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = 1.0 - X [
26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = exp ( ( (
1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = X [ 25ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
qc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = qc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = exp (
pmf_log ( X [ 30ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ) ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 1.0
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = ( X [ 26ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
if ( X [ 26ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = 0.0 ; } else
if ( X [ 26ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = X [ 26ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = ( X [ 26ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 = t812 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & rc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = rc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = t651_idx_0 ;
tlu2_1d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = sc_efOut [ 0 ] ; t819 = ( (
( 1.0 - t805 ) - t806 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 * t805 ) +
t651_idx_0 * t806 ; if ( X [ 29ULL ] <= 0.0 ) { t806 = 0.0 ; } else { t806 =
X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = X [
28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = ( ( ( 1.0 -
t806 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) *
296.802103844292 + t806 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
4124.48151675695 ; if ( X [ 257ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_574 = 216.59999999999997 ; } else { intrm_sf_mf_574 = X [ 257ULL
] >= 623.15 ? 623.15 : X [ 257ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
intrm_sf_mf_574 * intrm_sf_mf_574 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = ( ( (
1074.1165326382641 + intrm_sf_mf_574 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00037212980109014541 ) * ( ( 1.0 - t806 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
1479.6504774711011 + intrm_sf_mf_574 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.00038614513167823636 ) * t806 ) + ( ( 12825.281119789837 + intrm_sf_mf_574
* 6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; t805 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ;
intrm_sf_mf_574 = - pmf_sqrt ( fabs ( X [ 258ULL ] * X [ 258ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / ( t805 ==
0.0 ? 1.0E-16 : t805 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) /
( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ) ) * 0.32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = X [ 27ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ; t822 = X [
32ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ) ; if ( X [
259ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 259ULL
] >= 623.15 ? 623.15 : X [ 259ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t824 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 *
0.00037212980109014541 ) * ( ( 1.0 - t806 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * -
0.00038614513167823636 ) * t806 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t824 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = - pmf_sqrt (
fabs ( X [ 260ULL ] * X [ 260ULL ] * ( t824 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) )
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) /
( X [ 259ULL ] == 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) ) * 0.32 ; t824 = - X [
241ULL ] / ( intrm_sf_mf_574 == 0.0 ? 1.0E-16 : intrm_sf_mf_574 ) ;
intrm_sf_mf_574 = X [ 192ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) ;
t525 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup ( & tc_efOut .
mField0 [ 0ULL ] , & tc_efOut . mField1 [ 0ULL ] , & tc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = tc_efOut ;
tlu2_1d_linear_linear_value ( & uc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = uc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t651_idx_0 ;
if ( 1.0 - X [ 29ULL ] >= 0.01 ) { t826 = 1.0 - X [ 29ULL ] ; } else if ( 1.0
- X [ 29ULL ] >= - 0.1 ) { t826 = exp ( ( ( 1.0 - X [ 29ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t826 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 28ULL ]
/ ( t826 == 0.0 ? 1.0E-16 : t826 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & vc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = vc_efOut [ 0 ] ; t826 = exp
( pmf_log ( X [ 32ULL ] * 100000.0 ) - t651_idx_0 ) ; if ( t826 >= 1.0 ) {
t805 = ( t826 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 /= t805 ==
0.0 ? 1.0E-16 : t805 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 1.0 ; }
t805 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 0.01
; t826 = ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) / ( t805 ==
0.0 ? 1.0E-16 : t805 ) ; if ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 <= 0.0 ) {
t826 = 0.0 ; } else if ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 0.01 ) {
t826 = X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; } else {
t826 = ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * ( t826 *
t826 * 3.0 - t826 * t826 * t826 * 2.0 ) ; } t826 = t822 * t826 *
0.026773120849090417 / 0.001 ; t826 *= 100000.0 ; tlu2_1d_linear_linear_value
( & wc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t252 [ 0ULL ] , & t76 [
0ULL ] ) ; t651_idx_0 = wc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL
] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = xc_efOut [ 0 ] ; t830 = (
( ( 1.0 - t806 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * t806 ) +
t651_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 0ULL ] =
X [ 280ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 1ULL ] = X
[ 33ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [
2ULL ] = X [ 277ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 3ULL ] = X
[ 35ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [
4ULL ] = X [ 279ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 5ULL ] = X
[ 276ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0
[ 6ULL ] = X [ 34ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ 7ULL ] = X
[ 278ULL ] ; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = X [ 35ULL
] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [
34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } piece7 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
4124.48151675695 ; if ( X [ 283ULL ] <= 216.59999999999997 ) { t834 =
216.59999999999997 ; } else { t834 = X [ 283ULL ] >= 623.15 ? 623.15 : X [
283ULL ] ; } t725 = t834 * t834 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 = ( ( (
1074.1165326382641 + t834 * - 0.2214565261064495 ) + t725 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
1479.6504774711011 + t834 * 1.2002114337048222 ) + t725 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) + ( (
12825.281119789837 + t834 * 6.9647057412840034 ) + t725 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t805 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 - piece7 ;
t834 = - pmf_sqrt ( fabs ( X [ 284ULL ] * X [ 284ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 / ( t805 ==
0.0 ? 1.0E-16 : t805 ) ) / ( piece7 == 0.0 ? 1.0E-16 : piece7 ) / ( X [
283ULL ] == 0.0 ? 1.0E-16 : X [ 283ULL ] ) ) ) * 0.0019634954084936209 ; t805
= X [ 33ULL ] * piece7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 = X [ 36ULL ]
/ ( t805 == 0.0 ? 1.0E-16 : t805 ) ; if ( X [ 285ULL ] <= 216.59999999999997
) { t725 = 216.59999999999997 ; } else { t725 = X [ 285ULL ] >= 623.15 ?
623.15 : X [ 285ULL ] ; } t838 = t725 * t725 ; t837 = ( ( (
1074.1165326382641 + t725 * - 0.2214565261064495 ) + t838 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
1479.6504774711011 + t725 * 1.2002114337048222 ) + t838 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) + ( (
12825.281119789837 + t725 * 6.9647057412840034 ) + t838 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = t837 -
piece7 ; piece7 = - pmf_sqrt ( fabs ( X [ 286ULL ] * X [ 286ULL ] * ( t837 /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 ) )
/ ( piece7 == 0.0 ? 1.0E-16 : piece7 ) / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X
[ 285ULL ] ) ) ) * 0.0019634954084936209 ; t725 = X [ 282ULL ] / ( t834 ==
0.0 ? 1.0E-16 : t834 ) ; t834 = - X [ 238ULL ] / ( piece7 == 0.0 ? 1.0E-16 :
piece7 ) ; t525 [ 0ULL ] = X [ 33ULL ] ; tlu2_linear_linear_prelookup ( &
yc_efOut . mField0 [ 0ULL ] , & yc_efOut . mField1 [ 0ULL ] , & yc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = yc_efOut ;
tlu2_1d_linear_linear_value ( & ad_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ad_efOut [ 0 ] ; piece7 =
t651_idx_0 ; if ( 1.0 - X [ 35ULL ] >= 0.01 ) { t837 = 1.0 - X [ 35ULL ] ; }
else if ( 1.0 - X [ 35ULL ] >= - 0.1 ) { t837 = exp ( ( ( 1.0 - X [ 35ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t837 = 1.6701700790245661E-7 ; } t838 = X
[ 34ULL ] / ( t837 == 0.0 ? 1.0E-16 : t837 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & bd_efOut [ 0ULL ] , & t63
. mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = bd_efOut
[ 0 ] ; t837 = exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
t837 >= 1.0 ) { t1234 = ( t837 - 1.0 ) * 461.523 + t838 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 = t838 / (
t1234 == 0.0 ? 1.0E-16 : t1234 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 = 1.0 ; }
t883 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 * 0.01
; t837 = ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ) / ( t883 ==
0.0 ? 1.0E-16 : t883 ) ; if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 <= 0.0 ) {
t837 = 0.0 ; } else if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 * 0.01 ) {
t837 = X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ; } else {
t837 = ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ) * ( t837 *
t837 * 3.0 - t837 * t837 * t837 * 2.0 ) ; } t837 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 * t837 *
0.00049087385212340522 / 0.001 ; t837 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & cd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = cd_efOut [ 0 ] ; t838 =
t651_idx_0 ; tlu2_1d_linear_linear_value ( & dd_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = dd_efOut [
0 ] ; t840 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * t838 +
piece7 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) +
t651_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
; if ( X [ 312ULL ] <= 0.0 ) { piece7 = 0.0 ; } else { piece7 = X [ 312ULL ]
>= 1.0 ? 1.0 : X [ 312ULL ] ; } if ( X [ 313ULL ] <= 0.0 ) { t838 = 0.0 ; }
else { t838 = X [ 313ULL ] >= 1.0 ? 1.0 : X [ 313ULL ] ; } t886 = ( ( ( ( 1.0
- piece7 ) - t838 ) * 296.802103844292 + piece7 * 461.523 ) + t838 *
259.836612622973 ) * 293.15 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 = 1.01325 / (
t886 == 0.0 ? 1.0E-16 : t886 ) ; t842 = ( X [ 316ULL ] * 0.07812500122070315
+ U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if ( X [ 40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = X [ 40ULL
] >= 1.0 ? 1.0 : X [ 40ULL ] ; } if ( X [ 41ULL ] <= 0.0 ) { t805 = 0.0 ; }
else { t805 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } t845 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) - t805 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 461.523 ) +
t805 * 259.836612622973 ; if ( X [ 320ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 = X [ 320ULL ]
>= 623.15 ? 623.15 : X [ 320ULL ] ; } t848 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 * -
0.2214565261064495 ) + t848 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) - t805 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 *
1.2002114337048222 ) + t848 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 * -
0.044484923911382625 ) + t848 * 0.00036936011832044979 ) * t805 ; t887 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 - t845 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 = - pmf_sqrt (
fabs ( X [ 321ULL ] * X [ 321ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 / ( t887 ==
0.0 ? 1.0E-16 : t887 ) ) / ( t845 == 0.0 ? 1.0E-16 : t845 ) / ( X [ 320ULL ]
== 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) ) * 0.0019634954084936209 ;
intrm_sf_mf_1361 = X [ 38ULL ] * t845 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 = X [ 39ULL ]
/ ( intrm_sf_mf_1361 == 0.0 ? 1.0E-16 : intrm_sf_mf_1361 ) ; if ( X [ 324ULL
] <= 216.59999999999997 ) { t848 = 216.59999999999997 ; } else { t848 = X [
324ULL ] >= 623.15 ? 623.15 : X [ 324ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t848 * t848
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = ( ( (
1074.1165326382641 + t848 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) - t805 ) + (
( 1479.6504774711011 + t848 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) + ( (
900.63941224838356 + t848 * - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00036936011832044979 ) * t805 ; t893 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 - t845 ; t845
= - pmf_sqrt ( fabs ( X [ 325ULL ] * X [ 325ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 / ( t893 ==
0.0 ? 1.0E-16 : t893 ) ) / ( t845 == 0.0 ? 1.0E-16 : t845 ) / ( X [ 324ULL ]
== 0.0 ? 1.0E-16 : X [ 324ULL ] ) ) ) * 0.0019634954084936209 ; t592 [ 0ULL ]
= X [ 39ULL ] * 100000.0 ; t592 [ 1ULL ] = X [ 38ULL ] ; t592 [ 2ULL ] = X [
327ULL ] ; t592 [ 3ULL ] = X [ 40ULL ] ; t592 [ 4ULL ] = X [ 322ULL ] ; t592
[ 5ULL ] = X [ 326ULL ] ; t592 [ 6ULL ] = X [ 41ULL ] ; t592 [ 7ULL ] = X [
323ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5 [ t691 ] =
t592 [ t691 ] ; } t848 = X [ 319ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 = - X [ 307ULL
] / ( t845 == 0.0 ? 1.0E-16 : t845 ) ; t525 [ 0ULL ] = X [ 38ULL ] ;
tlu2_linear_linear_prelookup ( & ed_efOut . mField0 [ 0ULL ] , & ed_efOut .
mField1 [ 0ULL ] , & ed_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = ed_efOut ; tlu2_1d_linear_linear_value ( & fd_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = fd_efOut [
0 ] ; t845 = t651_idx_0 ; if ( 1.0 - X [ 40ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = 1.0 - X [
40ULL ] ; } else if ( 1.0 - X [ 40ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = exp ( ( (
1.0 - X [ 40ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 41ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
gd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = gd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = exp (
pmf_log ( X [ 39ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 >= 1.0 ) {
t901 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 -
1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t851 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / ( t901 ==
0.0 ? 1.0E-16 : t901 ) ; } else { t851 = 1.0 ; } t903 = t851 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = ( X [ 40ULL
] - t851 ) / ( t903 == 0.0 ? 1.0E-16 : t903 ) ; if ( X [ 40ULL ] - t851 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = 0.0
; } else if ( X [ 40ULL ] - t851 >= t851 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = X [ 40ULL ]
- t851 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 = ( X [ 40ULL
] - t851 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 *
0.0019634954084936209 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = hd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; tlu2_1d_linear_linear_value ( & id_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL
] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = id_efOut [ 0 ] ; t852 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
t805 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 +
t845 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) +
t651_idx_0 * t805 ; t845 = U_idx_7 * 10.0 ; if ( X [ 316ULL ] *
0.0019634954084936209 <= 1.9634954084936209E-11 ) { t851 =
1.9634954084936209E-11 ; } else if ( X [ 316ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t851 = 0.0012566370614359179 ; } else { t851 = X [
316ULL ] * 0.0019634954084936209 ; } if ( X [ 339ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = X [ 339ULL
] >= 1.0 ? 1.0 : X [ 339ULL ] ; } if ( X [ 340ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = X [
340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t806 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
259.836612622973 ; if ( X [ 337ULL ] <= 216.59999999999997 ) { t856 =
216.59999999999997 ; } else { t856 = X [ 337ULL ] >= 623.15 ? 623.15 : X [
337ULL ] ; } t805 = t856 * t856 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = ( ( (
1074.1165326382641 + t856 * - 0.2214565261064495 ) + t805 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
1479.6504774711011 + t856 * 1.2002114337048222 ) + t805 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + ( (
900.63941224838356 + t856 * - 0.044484923911382625 ) + t805 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 - t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = pmf_sqrt (
fabs ( X [ 338ULL ] * X [ 338ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ) )
/ ( t806 == 0.0 ? 1.0E-16 : t806 ) / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [
337ULL ] ) ) ) * t851 * 0.64 ; if ( X [ 307ULL ] >= 0.0 ) { t851 = X [ 307ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) *
1.0E-5 ; } else { t851 = - X [ 307ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) *
1.0E-5 ; } t592 [ 0ULL ] = X [ 348ULL ] ; t592 [ 1ULL ] = X [ 42ULL ] ; t592
[ 2ULL ] = X [ 349ULL ] ; t592 [ 3ULL ] = X [ 44ULL ] ; t592 [ 4ULL ] = X [
350ULL ] ; t592 [ 5ULL ] = X [ 351ULL ] ; t592 [ 6ULL ] = X [ 43ULL ] ; t592
[ 7ULL ] = X [ 352ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 0ULL ] = X
[ 353ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 1ULL ] = X [ 45ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 2ULL ] = X
[ 354ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 3ULL ] = X [ 47ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 4ULL ] = X
[ 355ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo
[ 5ULL ] = X [ 356ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ 6ULL ] = X
[ 46ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
7ULL ] = X [ 357ULL ] ; if ( X [ 44ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = X [ 44ULL
] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = X [
43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } t806 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
259.836612622973 ; if ( X [ 363ULL ] <= 216.59999999999997 ) { t856 =
216.59999999999997 ; } else { t856 = X [ 363ULL ] >= 623.15 ? 623.15 : X [
363ULL ] ; } t740 = t856 * t856 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = ( ( (
1074.1165326382641 + t856 * - 0.2214565261064495 ) + t740 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
1479.6504774711011 + t856 * 1.2002114337048222 ) + t740 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + ( (
900.63941224838356 + t856 * - 0.044484923911382625 ) + t740 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 - t806 ; t856
= - pmf_sqrt ( fabs ( X [ 364ULL ] * X [ 364ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) )
/ ( t806 == 0.0 ? 1.0E-16 : t806 ) / ( X [ 363ULL ] == 0.0 ? 1.0E-16 : X [
363ULL ] ) ) ) * 0.32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 42ULL ]
* t806 ; t740 = X [ 48ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
if ( X [ 366ULL ] <= 216.59999999999997 ) { t805 = 216.59999999999997 ; }
else { t805 = X [ 366ULL ] >= 623.15 ? 623.15 : X [ 366ULL ] ; } t743 = t805
* t805 ; piece346 = ( ( ( 1074.1165326382641 + t805 * - 0.2214565261064495 )
+ t743 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
1479.6504774711011 + t805 * 1.2002114337048222 ) + t743 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + ( (
900.63941224838356 + t805 * - 0.044484923911382625 ) + t743 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; t805 =
piece346 - t806 ; t806 = - pmf_sqrt ( fabs ( X [ 367ULL ] * X [ 367ULL ] * (
piece346 / ( t805 == 0.0 ? 1.0E-16 : t805 ) ) / ( t806 == 0.0 ? 1.0E-16 :
t806 ) / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) ) ) * 0.32 ;
piece346 = X [ 362ULL ] / ( t856 == 0.0 ? 1.0E-16 : t856 ) ; t856 = X [
365ULL ] / ( t806 == 0.0 ? 1.0E-16 : t806 ) ; t525 [ 0ULL ] = X [ 42ULL ] ;
tlu2_linear_linear_prelookup ( & jd_efOut . mField0 [ 0ULL ] , & jd_efOut .
mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = jd_efOut ; tlu2_1d_linear_linear_value ( & kd_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = kd_efOut [
0 ] ; t806 = t651_idx_0 ; if ( 1.0 - X [ 44ULL ] >= 0.01 ) { t743 = 1.0 - X [
44ULL ] ; } else if ( 1.0 - X [ 44ULL ] >= - 0.1 ) { t743 = exp ( ( ( 1.0 - X
[ 44ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t743 = 1.6701700790245661E-7
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [
43ULL ] / ( t743 == 0.0 ? 1.0E-16 : t743 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & ld_efOut [ 0ULL ] , & t63
. mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ld_efOut
[ 0 ] ; t743 = exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
t743 >= 1.0 ) { intrm_sf_mf_18 = ( t743 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / (
intrm_sf_mf_18 == 0.0 ? 1.0E-16 : intrm_sf_mf_18 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 0.01 ; t743
= ( X [ 44ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
if ( X [ 44ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 <= 0.0 ) {
t743 = 0.0 ; } else if ( X [ 44ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 0.01 ) {
t743 = X [ 44ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ; } else {
t743 = ( X [ 44ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) * ( t743 *
t743 * 3.0 - t743 * t743 * t743 * 2.0 ) ; } t743 = t740 * t743 *
0.026773120849090417 / 0.001 ; t743 *= 100000.0 ; tlu2_1d_linear_linear_value
( & md_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t252 [ 0ULL ] , & t76 [
0ULL ] ) ; t651_idx_0 = md_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t651_idx_0 ;
tlu2_1d_linear_linear_value ( & nd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = nd_efOut [ 0 ] ; t866 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 + t806 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t651_idx_0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; if ( X [
47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = X [
47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t806 = 0.0
; } else { t806 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) - t806 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 * 461.523 ) +
t806 * 259.836612622973 ; if ( X [ 381ULL ] <= 216.59999999999997 ) { t865 =
216.59999999999997 ; } else { t865 = X [ 381ULL ] >= 623.15 ? 623.15 : X [
381ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
= t865 * t865 ; t805 = ( ( ( 1074.1165326382641 + t865 * - 0.2214565261064495
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) - t806 ) +
( ( 1479.6504774711011 + t865 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
900.63941224838356 + t865 * - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00036936011832044979 ) * t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t805 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ; t865 = -
pmf_sqrt ( fabs ( X [ 382ULL ] * X [ 382ULL ] * ( t805 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) )
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) /
( X [ 381ULL ] == 0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 45ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ; t869 = X [
49ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ; if ( X [
383ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 383ULL
] >= 623.15 ? 623.15 : X [ 383ULL ] ; } t805 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t871 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.2214565261064495 ) + t805 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) - t806 ) +
( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
1.2002114337048222 ) + t805 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.044484923911382625 ) + t805 * 0.00036936011832044979 ) * t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = t871 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = - pmf_sqrt (
fabs ( X [ 384ULL ] * X [ 384ULL ] * ( t871 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) )
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) /
( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ] ) ) ) * 0.32 ; t871 = - X [
365ULL ] / ( t865 == 0.0 ? 1.0E-16 : t865 ) ; t865 = - X [ 319ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
t525 [ 0ULL ] = X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & od_efOut .
mField0 [ 0ULL ] , & od_efOut . mField1 [ 0ULL ] , & od_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = od_efOut ;
tlu2_1d_linear_linear_value ( & pd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = pd_efOut [ 0 ] ; t805 =
t651_idx_0 ; if ( 1.0 - X [ 47ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = 1.0 - X [
47ULL ] ; } else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = exp ( ( (
1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 46ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
qd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = qd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = exp (
pmf_log ( X [ 49ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 >= 1.0 ) {
t946 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 /= t946 ==
0.0 ? 1.0E-16 : t946 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 1.0 ; }
t948 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 0.01
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = ( X [
47ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) /
( t948 == 0.0 ? 1.0E-16 : t948 ) ; if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = 0.0 ; } else
if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = X [ 47ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = ( X [ 47ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 = t869 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & rd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = rd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; tlu2_1d_linear_linear_value ( & sd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL
] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = sd_efOut [ 0 ] ; t877 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) -
t806 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 +
t805 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) +
t651_idx_0 * t806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 0ULL ] = X
[ 405ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 1ULL ] = X [ 50ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 2ULL ] = X
[ 402ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 3ULL ] = X [ 52ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 4ULL ] = X
[ 404ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0
[ 5ULL ] = X [ 401ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ 6ULL ] = X
[ 51ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [
7ULL ] = X [ 403ULL ] ; if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [
52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } if ( X [ 51ULL ] <= 0.0 ) { t879 = 0.0
; } else { t879 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } t880 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) - t879 )
* 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 461.523 ) +
t879 * 259.836612622973 ; if ( X [ 408ULL ] <= 216.59999999999997 ) { t1234 =
216.59999999999997 ; } else { t1234 = X [ 408ULL ] >= 623.15 ? 623.15 : X [
408ULL ] ; } t883 = t1234 * t1234 ; t882 = ( ( ( 1074.1165326382641 + t1234 *
- 0.2214565261064495 ) + t883 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) - t879 ) +
( ( 1479.6504774711011 + t1234 * 1.2002114337048222 ) + t883 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
900.63941224838356 + t1234 * - 0.044484923911382625 ) + t883 *
0.00036936011832044979 ) * t879 ; t955 = t882 - t880 ; t1234 = - pmf_sqrt (
fabs ( X [ 409ULL ] * X [ 409ULL ] * ( t882 / ( t955 == 0.0 ? 1.0E-16 : t955
) ) / ( t880 == 0.0 ? 1.0E-16 : t880 ) / ( X [ 408ULL ] == 0.0 ? 1.0E-16 : X
[ 408ULL ] ) ) ) * 0.0019634954084936209 ;
Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q = X [ 50ULL ] * t880 ;
t882 = X [ 53ULL ] / ( Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q
== 0.0 ? 1.0E-16 : Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q ) ;
if ( X [ 410ULL ] <= 216.59999999999997 ) { t883 = 216.59999999999997 ; }
else { t883 = X [ 410ULL ] >= 623.15 ? 623.15 : X [ 410ULL ] ; } t885 = t883
* t883 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = (
( ( 1074.1165326382641 + t883 * - 0.2214565261064495 ) + t885 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) - t879 ) +
( ( 1479.6504774711011 + t883 * 1.2002114337048222 ) + t885 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + ( (
900.63941224838356 + t883 * - 0.044484923911382625 ) + t885 *
0.00036936011832044979 ) * t879 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 - t880 ; t880
= - pmf_sqrt ( fabs ( X [ 411ULL ] * X [ 411ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) )
/ ( t880 == 0.0 ? 1.0E-16 : t880 ) / ( X [ 410ULL ] == 0.0 ? 1.0E-16 : X [
410ULL ] ) ) ) * 0.0019634954084936209 ; t883 = X [ 407ULL ] / ( t1234 == 0.0
? 1.0E-16 : t1234 ) ; t1234 = - X [ 362ULL ] / ( t880 == 0.0 ? 1.0E-16 : t880
) ; t525 [ 0ULL ] = X [ 50ULL ] ; tlu2_linear_linear_prelookup ( & td_efOut .
mField0 [ 0ULL ] , & td_efOut . mField1 [ 0ULL ] , & td_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = td_efOut ;
tlu2_1d_linear_linear_value ( & ud_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ud_efOut [ 0 ] ; t880 =
t651_idx_0 ; if ( 1.0 - X [ 52ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = 1.0 - X [
52ULL ] ; } else if ( 1.0 - X [ 52ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = exp ( ( (
1.0 - X [ 52ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 =
1.6701700790245661E-7 ; } t885 = X [ 51ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
vd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ]
) ; t651_idx_0 = vd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = exp (
pmf_log ( X [ 53ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 >= 1.0 ) {
intrm_sf_mf_1323 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 - 1.0 ) *
461.523 + t885 ; t886 = t885 / ( intrm_sf_mf_1323 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1323 ) ; } else { t886 = 1.0 ; } t971 = t886 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = ( X [ 52ULL
] - t886 ) / ( t971 == 0.0 ? 1.0E-16 : t971 ) ; if ( X [ 52ULL ] - t886 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = 0.0
; } else if ( X [ 52ULL ] - t886 >= t886 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = X [ 52ULL ]
- t886 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = ( X [ 52ULL
] - t886 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 = t882 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 *
0.00049087385212340522 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = wd_efOut [ 0 ] ; t885 =
t651_idx_0 ; tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField27 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = xd_efOut [
0 ] ; t887 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) - t879 ) *
t885 + t880 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
) + t651_idx_0 * t879 ; t879 = - X [ 421ULL ] + - X [ 422ULL ] ; t880 = - X [
424ULL ] + - X [ 425ULL ] ; t885 = - X [ 428ULL ] + U_idx_10 * - 2.0 ; t525 [
0ULL ] = X [ 55ULL ] ; t340 [ 0 ] = 11ULL ; tlu2_linear_linear_prelookup ( &
yd_efOut . mField0 [ 0ULL ] , & yd_efOut . mField1 [ 0ULL ] , & yd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t525 [
0ULL ] , & t340 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = yd_efOut ; t525 [ 0ULL ]
= 1.01325 ; t343 [ 0 ] = 12ULL ; tlu2_linear_linear_prelookup ( & ae_efOut .
mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t525 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = ae_efOut ;
tlu2_2d_linear_linear_value ( & be_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t340 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = be_efOut [ 0 ] ; t886 =
t651_idx_0 ; tlu2_2d_linear_linear_value ( & ce_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , &
t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , &
t340 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ce_efOut [
0 ] ; t889 = t651_idx_0 ; t890 = 1.01325 / ( t886 == 0.0 ? 1.0E-16 : t886 ) *
100.0 + t651_idx_0 ; t525 [ 0ULL ] = X [ 58ULL ] ;
tlu2_linear_nearest_prelookup ( & de_efOut . mField0 [ 0ULL ] , & de_efOut .
mField1 [ 0ULL ] , & de_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t68 = de_efOut ; t525 [ 0ULL ] = X [ 57ULL ] ; tlu2_linear_nearest_prelookup
( & ee_efOut . mField0 [ 0ULL ] , & ee_efOut . mField1 [ 0ULL ] , & ee_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t525 [
0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = ee_efOut ;
tlu2_2d_linear_nearest_value ( & fe_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t340 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = fe_efOut [ 0 ] ;
intrm_sf_mf_1361 = t651_idx_0 ; t525 [ 0ULL ] = X [ 58ULL ] ;
tlu2_linear_linear_prelookup ( & ge_efOut . mField0 [ 0ULL ] , & ge_efOut .
mField1 [ 0ULL ] , & ge_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t59 = ge_efOut ; t525 [ 0ULL ] = X [ 57ULL ] ; tlu2_linear_linear_prelookup (
& he_efOut . mField0 [ 0ULL ] , & he_efOut . mField1 [ 0ULL ] , & he_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t525 [
0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = he_efOut ;
tlu2_2d_linear_linear_value ( & ie_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t340 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ie_efOut [ 0 ] ; t893 =
t651_idx_0 ; tlu2_2d_linear_linear_value ( & je_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , &
t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , &
t340 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = je_efOut [
0 ] ; t894 = t651_idx_0 ; t895 = X [ 57ULL ] / ( t893 == 0.0 ? 1.0E-16 : t893
) * 100.0 + t651_idx_0 ; t897 = U_idx_10 * 2.0 ; t898 = U_idx_10 * 2.0 ; t525
[ 0ULL ] = X [ 447ULL ] ; tlu2_linear_linear_prelookup ( & ke_efOut . mField0
[ 0ULL ] , & ke_efOut . mField1 [ 0ULL ] , & ke_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL
] , & t76 [ 0ULL ] ) ; t63 = ke_efOut ; tlu2_2d_linear_linear_value ( &
le_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , &
t60 . mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t340 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t651_idx_0 = le_efOut [ 0 ] ; t1241 = t651_idx_0 ; t525 [ 0ULL ] = X [ 449ULL
] ; tlu2_linear_linear_prelookup ( & me_efOut . mField0 [ 0ULL ] , & me_efOut
. mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t59 = me_efOut ; t525 [ 0ULL ] = X [ 445ULL ] ; tlu2_linear_linear_prelookup
( & ne_efOut . mField0 [ 0ULL ] , & ne_efOut . mField1 [ 0ULL ] , & ne_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t525 [
0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = ne_efOut ;
tlu2_2d_linear_linear_value ( & oe_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t340 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = oe_efOut [ 0 ] ; t1241 = (
t1241 + t651_idx_0 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe = ( X [
445ULL ] - 1.01325 ) * t897 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) ; t525 [
0ULL ] = X [ 60ULL ] ; tlu2_linear_nearest_prelookup ( & pe_efOut . mField0 [
0ULL ] , & pe_efOut . mField1 [ 0ULL ] , & pe_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL ]
, & t76 [ 0ULL ] ) ; t59 = pe_efOut ; t525 [ 0ULL ] = X [ 59ULL ] ;
tlu2_linear_nearest_prelookup ( & qe_efOut . mField0 [ 0ULL ] , & qe_efOut .
mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t525 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t60 = qe_efOut ; tlu2_2d_linear_nearest_value ( & re_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , &
t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , &
t340 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = re_efOut [
0 ] ; t1241 = t651_idx_0 ; t525 [ 0ULL ] = X [ 60ULL ] ;
tlu2_linear_linear_prelookup ( & se_efOut . mField0 [ 0ULL ] , & se_efOut .
mField1 [ 0ULL ] , & se_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t525 [ 0ULL ] , & t340 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t68 = se_efOut ; t525 [ 0ULL ] = X [ 59ULL ] ; tlu2_linear_linear_prelookup (
& te_efOut . mField0 [ 0ULL ] , & te_efOut . mField1 [ 0ULL ] , & te_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t525 [
0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = te_efOut ;
tlu2_2d_linear_linear_value ( & ue_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t340 [ 0ULL ] , &
t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ue_efOut [ 0 ] ; t901 =
t651_idx_0 ; tlu2_2d_linear_linear_value ( & ve_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , &
t340 [ 0ULL ] , & t343 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ve_efOut [
0 ] ; t902 = t651_idx_0 ; t903 = X [ 59ULL ] / ( t901 == 0.0 ? 1.0E-16 : t901
) * 100.0 + t651_idx_0 ; t904 = ( 1.01325 - X [ 445ULL ] ) * X [ 454ULL ] *
0.0001 ; if ( X [ 455ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = X [ 455ULL
] * 17.81 + 0.043 ; } else if ( X [ 455ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = ( ( X [
455ULL ] * 17.81 + 0.043 ) - X [ 455ULL ] * X [ 455ULL ] * 39.85 ) + X [
455ULL ] * X [ 455ULL ] * X [ 455ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = ( X [
455ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 456ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = X [ 456ULL ]
* 17.81 + 0.043 ; } else if ( X [ 456ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( ( X [
456ULL ] * 17.81 + 0.043 ) - X [ 456ULL ] * X [ 456ULL ] * 39.85 ) + X [
456ULL ] * X [ 456ULL ] * X [ 456ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( X [ 456ULL
] - 1.0 ) * 1.4 + 14.003 ; } t911 = exp ( ( 0.003298697014679202 - 1.0 / ( X
[ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * 2416.0 ) * 1.25E-10 ; if ( -
t799 <= 0.0 ) { t912 = t799 / 0.028 ; } else { t912 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.0029 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.05 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.05 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t912 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / 96485.33212
; t525 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_nearest_prelookup ( & we_efOut .
mField0 [ 0ULL ] , & we_efOut . mField1 [ 0ULL ] , & we_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = we_efOut ;
tlu2_1d_linear_nearest_value ( & xe_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = xe_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = ( X [ 224ULL
] + X [ 229ULL ] ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = ( X [
348ULL ] + X [ 353ULL ] ) / 2.0 ; t525 [ 0ULL ] = X [ 31ULL ] ;
tlu2_linear_linear_prelookup ( & ye_efOut . mField0 [ 0ULL ] , & ye_efOut .
mField1 [ 0ULL ] , & ye_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t70 = ye_efOut ; tlu2_1d_linear_linear_value ( & af_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t74 [ 0 ] = af_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = exp (
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) -
t74 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = X [ 455ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = exp (
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) -
t74 [ 0ULL ] ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) { t805 =
t651_idx_0 * X [ 31ULL ] * 0.001039307827269155 ; t805 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * 1.58E-18 / (
t805 == 0.0 ? 1.0E-16 : t805 ) ; } else { t1191 = t651_idx_0 * X [ 31ULL ] *
0.001039307827269155 ; t805 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 * ( X [
456ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) ) *
1.58E-18 / ( t1191 == 0.0 ? 1.0E-16 : t1191 ) ; } t911 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
1818.181818181818 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
1818.181818181818 ) * t911 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) + t805 ) *
0.20177105219743391 ; t908 = t912 * 0.022577863652674921 / 192970.66424 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( ( ( ( - X
[ 246ULL ] + - X [ 263ULL ] ) + - X [ 370ULL ] ) + - X [ 388ULL ] ) + - X [
439ULL ] ) + - X [ 457ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ) / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.005139 -
0.00326 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
0.0018790000000000005 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = exp ( (
0.003298697014679202 - 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) )
* 1268.0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = 0.000125 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 * ( ( X [
350ULL ] + X [ 355ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 >= 1.0E-9 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 : 1.0E-6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * ( ( X [
228ULL ] + X [ 233ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 1.0E-5 >=
1.0E-9 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 * ( ( X [
352ULL ] + X [ 357ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 1.0E-5 >=
1.0E-9 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 =
1.0E-6 ; } t1217 = X [ 31ULL ] * 8.31446261815324 ; if ( t912 >= 1.0 ) { t805
= pmf_log ( t912 ) * ( t1217 / 135079.46496800001 ) ; } else { t805 = 0.0 ; }
if ( t912 <= 13986.0 ) { t920 = pmf_log ( 1.0 - t912 / 14000.0 ) ; } else {
t920 = - 6.9077552789821359 - ( t912 / 14000.0 - 0.999 ) /
0.0010000000000000009 ; } t1194 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = t1217 /
192970.66424 * pmf_log ( t1194 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ) )
+ 1.228891453185164 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 - t805 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 * t912 * 0.01
) - X [ 31ULL ] * - 8.31446261815324 / 192970.66424 * t920 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t912 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 *
11.200000000000001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = - X [
458ULL ] + X [ 396ULL ] ; t620 [ 0ULL ] = X [ 63ULL ] * 100000.0 ; t620 [
1ULL ] = X [ 62ULL ] ; t620 [ 2ULL ] = X [ 466ULL ] ; t620 [ 3ULL ] = X [
65ULL ] ; t620 [ 4ULL ] = X [ 468ULL ] ; t620 [ 5ULL ] = X [ 465ULL ] ; t620
[ 6ULL ] = X [ 64ULL ] ; t620 [ 7ULL ] = X [ 467ULL ] ; for ( t691 = 0ULL ;
t691 < 8ULL ; t691 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ t691 ] =
t620 [ t691 ] ; } t525 [ 0ULL ] = X [ 62ULL ] ; tlu2_linear_linear_prelookup
( & bf_efOut . mField0 [ 0ULL ] , & bf_efOut . mField1 [ 0ULL ] , & bf_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = bf_efOut ;
tlu2_1d_linear_linear_value ( & cf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = cf_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; if ( X [ 65ULL ] <= 0.0 ) { t805 = 0.0 ; } else { t805 = X [ 65ULL ] >= 1.0
? 1.0 : X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) { t920 = 0.0 ; } else {
t920 = X [ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t1194 = X [ 62ULL ] * ( ( (
( 1.0 - t805 ) - t920 ) * 296.802103844292 + t805 * 461.523 ) + t920 *
4124.48151675695 ) ; t921 = X [ 63ULL ] / ( t1194 == 0.0 ? 1.0E-16 : t1194 )
; if ( 1.0 - X [ 65ULL ] >= 0.01 ) { t922 = 1.0 - X [ 65ULL ] ; } else if (
1.0 - X [ 65ULL ] >= - 0.1 ) { t922 = exp ( ( ( 1.0 - X [ 65ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t922 = 1.6701700790245661E-7 ; } t923 = X [ 64ULL
] / ( t922 == 0.0 ? 1.0E-16 : t922 ) * 3827.6794129126583 + 296.802103844292
; tlu2_1d_linear_linear_value ( & df_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL
] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = df_efOut [ 0 ] ; t922 =
exp ( pmf_log ( X [ 63ULL ] * 100000.0 ) - t651_idx_0 ) ; if ( t922 >= 1.0 )
{ t1217 = ( t922 - 1.0 ) * 461.523 + t923 ; intrm_sf_mf_1586 = t923 / ( t1217
== 0.0 ? 1.0E-16 : t1217 ) ; } else { intrm_sf_mf_1586 = 1.0 ; } t1194 =
intrm_sf_mf_1586 * 0.01 ; t922 = ( X [ 65ULL ] - intrm_sf_mf_1586 ) / ( t1194
== 0.0 ? 1.0E-16 : t1194 ) ; if ( X [ 65ULL ] - intrm_sf_mf_1586 <= 0.0 ) {
t922 = 0.0 ; } else if ( X [ 65ULL ] - intrm_sf_mf_1586 >= intrm_sf_mf_1586 *
0.01 ) { t922 = X [ 65ULL ] - intrm_sf_mf_1586 ; } else { t922 = ( X [ 65ULL
] - intrm_sf_mf_1586 ) * ( t922 * t922 * 3.0 - t922 * t922 * t922 * 2.0 ) ; }
t922 = t921 * t922 * 0.12 / 0.001 ; t922 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & ef_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ef_efOut [ 0 ] ; t923 =
t651_idx_0 ; tlu2_1d_linear_linear_value ( & ff_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ff_efOut [
0 ] ; t925 = ( ( ( 1.0 - t805 ) - t920 ) * t923 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * t805 ) +
t651_idx_0 * t920 ; if ( X [ 68ULL ] <= 0.0 ) { t805 = 0.0 ; } else { t805 =
X [ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ] ; } if ( X [ 69ULL ] <= 0.0 ) { t920 =
0.0 ; } else { t920 = X [ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; } t923 = ( ( (
1.0 - t805 ) - t920 ) * 296.802103844292 + t805 * 461.523 ) + t920 *
4124.48151675695 ; if ( X [ 481ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_1586 = 216.59999999999997 ; } else { intrm_sf_mf_1586 = X [
481ULL ] >= 623.15 ? 623.15 : X [ 481ULL ] ; } intrm_sf_mf_18 =
intrm_sf_mf_1586 * intrm_sf_mf_1586 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 = ( ( (
1074.1165326382641 + intrm_sf_mf_1586 * - 0.2214565261064495 ) +
intrm_sf_mf_18 * 0.00037212980109014541 ) * ( ( 1.0 - t805 ) - t920 ) + ( (
1479.6504774711011 + intrm_sf_mf_1586 * 1.2002114337048222 ) + intrm_sf_mf_18
* - 0.00038614513167823636 ) * t805 ) + ( ( 12825.281119789837 +
intrm_sf_mf_1586 * 6.9647057412840034 ) + intrm_sf_mf_18 * -
0.0070524868246844051 ) * t920 ; t1217 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 - t923 ;
intrm_sf_mf_1586 = - pmf_sqrt ( fabs ( X [ 482ULL ] * X [ 482ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 / ( t1217 ==
0.0 ? 1.0E-16 : t1217 ) ) / ( t923 == 0.0 ? 1.0E-16 : t923 ) / ( X [ 481ULL ]
== 0.0 ? 1.0E-16 : X [ 481ULL ] ) ) ) * 7.8539816339744827E-5 ; t1194 = X [
66ULL ] * t923 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 = X [ 67ULL ]
/ ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ; if ( X [ 486ULL ] <=
216.59999999999997 ) { intrm_sf_mf_18 = 216.59999999999997 ; } else {
intrm_sf_mf_18 = X [ 486ULL ] >= 623.15 ? 623.15 : X [ 486ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
intrm_sf_mf_18 * intrm_sf_mf_18 ; t928 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_18 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.00037212980109014541 ) * ( ( 1.0 - t805 ) - t920 ) + ( ( 1479.6504774711011
+ intrm_sf_mf_18 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.00038614513167823636 ) * t805 ) + ( ( 12825.281119789837 + intrm_sf_mf_18 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.0070524868246844051 ) * t920 ; t1217 = t928 - t923 ; t923 = - pmf_sqrt (
fabs ( X [ 487ULL ] * X [ 487ULL ] * ( t928 / ( t1217 == 0.0 ? 1.0E-16 :
t1217 ) ) / ( t923 == 0.0 ? 1.0E-16 : t923 ) / ( X [ 486ULL ] == 0.0 ?
1.0E-16 : X [ 486ULL ] ) ) ) * 7.8539816339744827E-5 ; t625 [ 0ULL ] = X [
67ULL ] * 100000.0 ; t625 [ 1ULL ] = X [ 66ULL ] ; t625 [ 2ULL ] = X [ 489ULL
] ; t625 [ 3ULL ] = X [ 68ULL ] ; t625 [ 4ULL ] = X [ 483ULL ] ; t625 [ 5ULL
] = X [ 488ULL ] ; t625 [ 6ULL ] = X [ 69ULL ] ; t625 [ 7ULL ] = X [ 484ULL ]
; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t620 [ t691 ] = t625 [ t691 ]
; } intrm_sf_mf_18 = - X [ 471ULL ] / ( intrm_sf_mf_1586 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1586 ) ; intrm_sf_mf_1586 = X [ 485ULL ] / ( t923 == 0.0 ?
1.0E-16 : t923 ) ; t525 [ 0ULL ] = X [ 66ULL ] ; tlu2_linear_linear_prelookup
( & gf_efOut . mField0 [ 0ULL ] , & gf_efOut . mField1 [ 0ULL ] , & gf_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t59 = gf_efOut ;
tlu2_1d_linear_linear_value ( & hf_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = hf_efOut [ 0 ] ; t923 =
t651_idx_0 ; if ( 1.0 - X [ 68ULL ] >= 0.01 ) { t928 = 1.0 - X [ 68ULL ] ; }
else if ( 1.0 - X [ 68ULL ] >= - 0.1 ) { t928 = exp ( ( ( 1.0 - X [ 68ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t928 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 69ULL ]
/ ( t928 == 0.0 ? 1.0E-16 : t928 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & if_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = if_efOut [ 0 ] ; t928 = exp
( pmf_log ( X [ 67ULL ] * 100000.0 ) - t651_idx_0 ) ; if ( t928 >= 1.0 ) {
t1217 = ( t928 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; t930 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / ( t1217 ==
0.0 ? 1.0E-16 : t1217 ) ; } else { t930 = 1.0 ; } t1194 = t930 * 0.01 ; t928
= ( X [ 68ULL ] - t930 ) / ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ; if ( X [
68ULL ] - t930 <= 0.0 ) { t928 = 0.0 ; } else if ( X [ 68ULL ] - t930 >= t930
* 0.01 ) { t928 = X [ 68ULL ] - t930 ; } else { t928 = ( X [ 68ULL ] - t930 )
* ( t928 * t928 * 3.0 - t928 * t928 * t928 * 2.0 ) ; } t928 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 * t928 *
7.8539816339744827E-5 / 0.001 ; t928 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & jf_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = jf_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; tlu2_1d_linear_linear_value ( & kf_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL
] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = kf_efOut [ 0 ] ; t931 = (
( ( 1.0 - t805 ) - t920 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 + t923 * t805
) + t651_idx_0 * t920 ; t920 = ( X [ 478ULL ] * - 0.7999998 + U_idx_11 *
7.9999980000000006 ) + - 0.039999990000000013 ; t923 = ( X [ 478ULL ] * -
0.7999998 + U_idx_11 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; t930 =
U_idx_11 * 10.0 ; if ( t923 * 7.8539816339744827E-5 <= 7.8539816339744857E-13
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 =
7.8539816339744857E-13 ; } else if ( t923 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 = t923 *
7.8539816339744827E-5 ; } if ( X [ 501ULL ] <= 0.0 ) { intrm_sf_mf_297 = 0.0
; } else { intrm_sf_mf_297 = X [ 501ULL ] >= 1.0 ? 1.0 : X [ 501ULL ] ; } if
( X [ 502ULL ] <= 0.0 ) { t1225 = 0.0 ; } else { t1225 = X [ 502ULL ] >= 1.0
? 1.0 : X [ 502ULL ] ; } t936 = ( ( ( 1.0 - intrm_sf_mf_297 ) - t1225 ) *
296.802103844292 + intrm_sf_mf_297 * 461.523 ) + t1225 * 4124.48151675695 ;
if ( X [ 499ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 499ULL
] >= 623.15 ? 623.15 : X [ 499ULL ] ; } t939 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * -
0.2214565261064495 ) + t939 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_297 ) - t1225 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
1.2002114337048222 ) + t939 * - 0.00038614513167823636 ) * intrm_sf_mf_297 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
6.9647057412840034 ) + t939 * - 0.0070524868246844051 ) * t1225 ; t1217 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 - t936 ;
intrm_sf_mf_297 = pmf_sqrt ( fabs ( X [ 500ULL ] * X [ 500ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 / ( t1217 ==
0.0 ? 1.0E-16 : t1217 ) ) / ( t936 == 0.0 ? 1.0E-16 : t936 ) / ( X [ 499ULL ]
== 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 * 0.64 ; if (
- X [ 471ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 = - X [
471ULL ] / ( intrm_sf_mf_297 == 0.0 ? 1.0E-16 : intrm_sf_mf_297 ) * 1.0E-5 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 = X
[ 471ULL ] / ( intrm_sf_mf_297 == 0.0 ? 1.0E-16 : intrm_sf_mf_297 ) * 1.0E-5
; } if ( X [ 517ULL ] <= 0.0 ) { intrm_sf_mf_297 = 0.0 ; } else {
intrm_sf_mf_297 = X [ 517ULL ] >= 1.0 ? 1.0 : X [ 517ULL ] ; } if ( X [
518ULL ] <= 0.0 ) { t1225 = 0.0 ; } else { t1225 = X [ 518ULL ] >= 1.0 ? 1.0
: X [ 518ULL ] ; } t1217 = ( ( ( ( 1.0 - intrm_sf_mf_297 ) - t1225 ) *
296.802103844292 + intrm_sf_mf_297 * 461.523 ) + t1225 * 259.836612622973 ) *
293.15 ; t936 = 1.01325 / ( t1217 == 0.0 ? 1.0E-16 : t1217 ) ; if ( X [
530ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = X [ 530ULL
] >= 1.0 ? 1.0 : X [ 530ULL ] ; } if ( X [ 529ULL ] <= 0.0 ) { t702 = 0.0 ; }
else { t702 = X [ 529ULL ] >= 1.0 ? 1.0 : X [ 529ULL ] ; } t939 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t702 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 461.523 ) +
t702 * 259.836612622973 ; t525 [ 0ULL ] = X [ 524ULL ] ;
tlu2_linear_linear_prelookup ( & lf_efOut . mField0 [ 0ULL ] , & lf_efOut .
mField1 [ 0ULL ] , & lf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t63 = lf_efOut ; tlu2_1d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = mf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & nf_efOut [ 0ULL ] , & t63 . mField0 [
0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = nf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & of_efOut [ 0ULL ] , & t63 . mField0 [
0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = of_efOut [ 0 ] ; t1217
= X [ 524ULL ] * t939 ; t805 = t1217 / 1.01325 * ( - X [ 512ULL ] /
0.0019634954084936209 ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) * fabs (
t1217 / 1.01325 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t805 / 2.0
* 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t702 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t702 ) ; t525 [ 0ULL ] = X [ 527ULL ] ; tlu2_linear_linear_prelookup ( &
pf_efOut . mField0 [ 0ULL ] , & pf_efOut . mField1 [ 0ULL ] , & pf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = pf_efOut ;
tlu2_1d_linear_linear_value ( & qf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = qf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = rf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & sf_efOut [ 0ULL ] , & t42 . mField0 [
0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = sf_efOut [ 0 ] ; t1217
= X [ 527ULL ] * t939 ; t1141 = t1217 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) * ( - X [ 512ULL ] /
0.0019634954084936209 ) * fabs ( t1217 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10
= t1141 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t702 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t702 ) ; t525 [ 0ULL ] = X [ 525ULL ] ; tlu2_linear_linear_prelookup ( &
tf_efOut . mField0 [ 0ULL ] , & tf_efOut . mField1 [ 0ULL ] , & tf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t42 = tf_efOut ;
tlu2_1d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = uf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & vf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = vf_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & wf_efOut [ 0ULL ] , & t42 . mField0 [
0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = wf_efOut [ 0 ] ; t1217
= X [ 525ULL ] * t939 ; t1141 = t1217 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) * ( X [ 512ULL ] / 0.0019634954084936209 ) * ( X [ 512ULL ] /
0.0019634954084936209 ) * fabs ( t1217 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) ) ; t805 = t1141 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t702 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t702 ) ; t525 [ 0ULL ] = X [ 526ULL ] ; tlu2_linear_linear_prelookup ( &
xf_efOut . mField0 [ 0ULL ] , & xf_efOut . mField1 [ 0ULL ] , & xf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = xf_efOut ;
tlu2_1d_linear_linear_value ( & yf_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = yf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ag_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = ag_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & bg_efOut [ 0ULL ] , & t63 . mField0 [
0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = bg_efOut [ 0 ] ; t1217
= X [ 526ULL ] * t939 ; t1141 = t1217 / 1.01325 * ( X [ 512ULL ] /
0.0019634954084936209 ) * ( X [ 512ULL ] / 0.0019634954084936209 ) * fabs (
t1217 / 1.01325 ) ; if ( - X [ 512ULL ] >= 0.0 ) { t702 = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * X [
512ULL ] ) ; } else { t702 = ( ( t1141 / 2.0 * 9.999999999999999E-14 + ( ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) -
t702 ) * t651_idx_0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t702 ) ) - t805 ) * X [ 512ULL ] ; } t939 = U_idx_12 * 376.99111843077515 ;
t940 = t939 * 0.99999999999999978 / 0.99999999999999978 ; t642 [ 0ULL ] = X [
54ULL ] * 100000.0 ; t642 [ 1ULL ] = X [ 70ULL ] ; t642 [ 2ULL ] = X [ 536ULL
] ; t642 [ 3ULL ] = X [ 72ULL ] ; t642 [ 4ULL ] = X [ 538ULL ] ; t642 [ 5ULL
] = X [ 535ULL ] ; t642 [ 6ULL ] = X [ 71ULL ] ; t642 [ 7ULL ] = X [ 537ULL ]
; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t625 [ t691 ] = t642 [ t691 ]
; } t525 [ 0ULL ] = X [ 70ULL ] ; tlu2_linear_linear_prelookup ( & cg_efOut .
mField0 [ 0ULL ] , & cg_efOut . mField1 [ 0ULL ] , & cg_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = cg_efOut ;
tlu2_1d_linear_linear_value ( & dg_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = dg_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t651_idx_0 ;
if ( X [ 72ULL ] <= 0.0 ) { t805 = 0.0 ; } else { t805 = X [ 72ULL ] >= 1.0 ?
1.0 : X [ 72ULL ] ; } if ( X [ 71ULL ] <= 0.0 ) { t946 = 0.0 ; } else { t946
= X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } t1217 = X [ 70ULL ] * ( ( ( (
1.0 - t805 ) - t946 ) * 296.802103844292 + t805 * 461.523 ) + t946 *
259.836612622973 ) ; t947 = X [ 54ULL ] / ( t1217 == 0.0 ? 1.0E-16 : t1217 )
; if ( 1.0 - X [ 72ULL ] >= 0.01 ) { t948 = 1.0 - X [ 72ULL ] ; } else if (
1.0 - X [ 72ULL ] >= - 0.1 ) { t948 = exp ( ( ( 1.0 - X [ 72ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t948 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = X [ 71ULL ]
/ ( t948 == 0.0 ? 1.0E-16 : t948 ) * - 36.965491221318985 + 296.802103844292
; tlu2_1d_linear_linear_value ( & eg_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL
] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = eg_efOut [ 0 ] ; t948 =
exp ( pmf_log ( X [ 54ULL ] * 100000.0 ) - t651_idx_0 ) ; if ( t948 >= 1.0 )
{ t1217 = ( t948 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 /= t1217 ==
0.0 ? 1.0E-16 : t1217 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = 1.0 ; }
t1194 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
0.01 ; t948 = ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) / ( t1194
== 0.0 ? 1.0E-16 : t1194 ) ; if ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 <= 0.0 ) {
t948 = 0.0 ; } else if ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 * 0.01 ) {
t948 = X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ; } else {
t948 = ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * ( t948 *
t948 * 3.0 - t948 * t948 * t948 * 2.0 ) ; } t948 = t947 * t948 * 0.0003 /
0.001 ; t948 *= 100000.0 ; tlu2_1d_linear_linear_value ( & fg_efOut [ 0ULL ]
, & t63 . mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField23 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 =
fg_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t651_idx_0
; tlu2_1d_linear_linear_value ( & gg_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL
] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = gg_efOut [ 0 ] ; t951 = (
( ( 1.0 - t805 ) - t946 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 * t805 ) +
t651_idx_0 * t946 ; t946 = - ( X [ 54ULL ] + - 1.01325 ) * X [ 545ULL ] *
0.0001 ; t647 [ 0ULL ] = X [ 37ULL ] * 100000.0 ; t647 [ 1ULL ] = X [ 73ULL ]
; t647 [ 2ULL ] = X [ 550ULL ] ; t647 [ 3ULL ] = X [ 75ULL ] ; t647 [ 4ULL ]
= X [ 552ULL ] ; t647 [ 5ULL ] = X [ 549ULL ] ; t647 [ 6ULL ] = X [ 74ULL ] ;
t647 [ 7ULL ] = X [ 551ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) {
t642 [ t691 ] = t647 [ t691 ] ; } t525 [ 0ULL ] = X [ 73ULL ] ;
tlu2_linear_linear_prelookup ( & hg_efOut . mField0 [ 0ULL ] , & hg_efOut .
mField1 [ 0ULL ] , & hg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t60 = hg_efOut ; tlu2_1d_linear_linear_value ( & ig_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ig_efOut [
0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
t651_idx_0 ; if ( X [ 75ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = X [ 75ULL
] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL ] <= 0.0 ) { t953 = 0.0 ; }
else { t953 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; } t1194 = X [ 73ULL ]
* ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 461.523 ) +
t953 * 4124.48151675695 ) ; t954 = X [ 37ULL ] / ( t1194 == 0.0 ? 1.0E-16 :
t1194 ) ; if ( 1.0 - X [ 75ULL ] >= 0.01 ) { t955 = 1.0 - X [ 75ULL ] ; }
else if ( 1.0 - X [ 75ULL ] >= - 0.1 ) { t955 = exp ( ( ( 1.0 - X [ 75ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t955 = 1.6701700790245661E-7 ; } t956 = X
[ 74ULL ] / ( t955 == 0.0 ? 1.0E-16 : t955 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & jg_efOut [ 0ULL ] , & t60
. mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField14 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = jg_efOut
[ 0 ] ; t955 = exp ( pmf_log ( X [ 37ULL ] * 100000.0 ) - t651_idx_0 ) ; if (
t955 >= 1.0 ) { t1194 = ( t955 - 1.0 ) * 461.523 + t956 ; t805 = t956 / (
t1194 == 0.0 ? 1.0E-16 : t1194 ) ; } else { t805 = 1.0 ; } t1141 = t805 *
0.01 ; t955 = ( X [ 75ULL ] - t805 ) / ( t1141 == 0.0 ? 1.0E-16 : t1141 ) ;
if ( X [ 75ULL ] - t805 <= 0.0 ) { t955 = 0.0 ; } else if ( X [ 75ULL ] -
t805 >= t805 * 0.01 ) { t955 = X [ 75ULL ] - t805 ; } else { t955 = ( X [
75ULL ] - t805 ) * ( t955 * t955 * 3.0 - t955 * t955 * t955 * 2.0 ) ; } t955
= t954 * t955 * 0.00012500000000000003 / 0.001 ; t955 *= 100000.0 ; t956 =
U_idx_4 * 0.01 ; tlu2_1d_linear_linear_value ( & kg_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = kg_efOut [
0 ] ; t805 = t651_idx_0 ; tlu2_1d_linear_linear_value ( & lg_efOut [ 0ULL ] ,
& t60 . mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 =
lg_efOut [ 0 ] ; t959 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
t805 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t651_idx_0
* t953 ; if ( X [ 569ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = X [ 569ULL
] >= 1.0 ? 1.0 : X [ 569ULL ] ; } if ( X [ 568ULL ] <= 0.0 ) { t953 = 0.0 ; }
else { t953 = X [ 568ULL ] >= 1.0 ? 1.0 : X [ 568ULL ] ; } t805 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 461.523 ) +
t953 * 4124.48151675695 ; t525 [ 0ULL ] = X [ 563ULL ] ;
tlu2_linear_linear_prelookup ( & mg_efOut . mField0 [ 0ULL ] , & mg_efOut .
mField1 [ 0ULL ] , & mg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t525 [ 0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t60 = mg_efOut ; tlu2_1d_linear_linear_value ( & ng_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField23 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ng_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & og_efOut [ 0ULL ] , & t60 . mField0 [
0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = og_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & pg_efOut [ 0ULL ] , & t60 . mField0 [
0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = pg_efOut [ 0 ] ; t1194
= X [ 563ULL ] * t805 ; t1191 = t1194 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [
170ULL ] ) * ( t956 / 7.8539816339744827E-5 ) * ( t956 /
7.8539816339744827E-5 ) * fabs ( t1194 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X
[ 170ULL ] ) ) ; Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q =
t1191 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t953 ) ; t525 [ 0ULL ] = X [ 566ULL ] ; tlu2_linear_linear_prelookup ( &
qg_efOut . mField0 [ 0ULL ] , & qg_efOut . mField1 [ 0ULL ] , & qg_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t68 = qg_efOut ;
tlu2_1d_linear_linear_value ( & rg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = rg_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & sg_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = sg_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & tg_efOut [ 0ULL ] , & t68 . mField0 [
0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = tg_efOut [ 0 ] ; t1194
= X [ 566ULL ] * t805 ; t1191 = t1194 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) * ( t956 / 7.8539816339744827E-5 ) * ( t956 / 7.8539816339744827E-5
) * fabs ( t1194 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t1191 / 2.0
* 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t953 ) ; t525 [ 0ULL ] = X [ 564ULL ] ; tlu2_linear_linear_prelookup ( &
ug_efOut . mField0 [ 0ULL ] , & ug_efOut . mField1 [ 0ULL ] , & ug_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = ug_efOut ;
tlu2_1d_linear_linear_value ( & vg_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = vg_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & wg_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = wg_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & xg_efOut [ 0ULL ] , & t63 . mField0 [
0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = xg_efOut [ 0 ] ; t1194
= X [ 564ULL ] * t805 ; t1132 = t1194 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) * ( - t956 / 7.8539816339744827E-5 ) * ( - t956 /
7.8539816339744827E-5 ) * fabs ( t1194 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0
= t1132 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t953 ) ; t525 [ 0ULL ] = X [ 565ULL ] ; tlu2_linear_linear_prelookup ( &
yg_efOut . mField0 [ 0ULL ] , & yg_efOut . mField1 [ 0ULL ] , & yg_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [
0ULL ] , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = yg_efOut ;
tlu2_1d_linear_linear_value ( & ah_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = ah_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & bh_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = bh_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & ch_efOut [ 0ULL ] , & t63 . mField0 [
0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t806 = ch_efOut [ 0 ] ; t1217
= X [ 565ULL ] * t805 ; t1194 = t1217 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [
170ULL ] ) * ( - t956 / 7.8539816339744827E-5 ) * ( - t956 /
7.8539816339744827E-5 ) * fabs ( t1217 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X
[ 170ULL ] ) ) ; if ( t956 >= 0.0 ) { t953 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 -
Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q ) * t956 ; } else {
t953 = - ( ( ( t1194 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) - t953 ) *
t651_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) + t806 *
t953 ) ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 )
* t956 ) ; } Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q = ( ( X [
4ULL ] * - 0.01 + X [ 5ULL ] * 0.01 ) + X [ 162ULL ] ) + X [ 570ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 = U_idx_2 >=
0.0 ? U_idx_2 : - U_idx_2 ; t1217 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * 0.01 ; t1194
= intrm_sf_mf_433 * 7.8539816339744827E-5 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = t1217 / (
t1194 == 0.0 ? 1.0E-16 : t1194 ) ; t806 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1323 = t806 * t806 * 3.0 - t806 * t806 * t806 * 2.0 ;
t1141 = t865 - t871 ; t806 = ( t1141 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ;
t651_idx_0 = t806 * t806 * 3.0 - t806 * t806 * t806 * 2.0 ; if ( t1141 / 2.0
* 1.0E-5 <= - 0.01 ) { t806 = t871 * 1.0E-5 ; } else if ( ( t865 - t871 ) /
2.0 * 1.0E-5 >= 0.01 ) { t806 = t865 * 1.0E-5 ; } else { t806 = ( ( 1.0 -
t651_idx_0 ) * t871 + t865 * t651_idx_0 ) * 1.0E-5 ; } t1191 =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
1.5707963267948965E-8 ; t865 = U_idx_2 * intrm_sf_mf_433 * 35.2 / ( t1191 ==
0.0 ? 1.0E-16 : t1191 ) * 1.0E-5 ; t871 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 >= 2000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 : 1.0 ; t1141
= pmf_log10 ( 6.9 / ( t871 == 0.0 ? 1.0E-16 : t871 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t871 == 0.0 ? 1.0E-16 : t871 ) +
0.00017169489553429715 ) * 3.24 ; t1132 =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I *
1.2337005501361696E-8 ; t871 = U_idx_2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * ( 1.0 / (
t1141 == 0.0 ? 1.0E-16 : t1141 ) * 0.55 / 0.01 ) / ( t1132 == 0.0 ? 1.0E-16 :
t1132 ) * 1.0E-5 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 <= 2000.0 ) {
t651_idx_0 = t865 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 >= 4000.0 ) {
t651_idx_0 = t871 ; } else { t651_idx_0 = ( 1.0 - intrm_sf_mf_1323 ) * t865 +
intrm_sf_mf_1323 * t871 ; } t1141 = t1234 - t883 ; t865 = ( t1141 / 2.0 *
1.0E-5 - - 0.01 ) / 0.02 ; t871 = t865 * t865 * 3.0 - t865 * t865 * t865 *
2.0 ; if ( t1141 / 2.0 * 1.0E-5 <= - 0.01 ) { t865 = t883 * 1.0E-5 ; } else
if ( ( t1234 - t883 ) / 2.0 * 1.0E-5 >= 0.01 ) { t865 = t1234 * 1.0E-5 ; }
else { t865 = ( ( 1.0 - t871 ) * t883 + t1234 * t871 ) * 1.0E-5 ; } t1141 =
intrm_sf_mf_723 - t704 ; t871 = ( t1141 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; if
( - U_idx_2 >= 0.0 ) { t1234 = - U_idx_2 ; } else { t1234 = U_idx_2 ; } t883
= t871 * t871 * 3.0 - t871 * t871 * t871 * 2.0 ; if ( t1141 / 2.0 * 1.0E-5 <=
- 0.01 ) { t871 = t704 * 1.0E-5 ; } else if ( ( intrm_sf_mf_723 - t704 ) /
2.0 * 1.0E-5 >= 0.01 ) { t871 = intrm_sf_mf_723 * 1.0E-5 ; } else { t871 = (
( 1.0 - t883 ) * t704 + intrm_sf_mf_723 * t883 ) * 1.0E-5 ; } t1141 = t1234 *
0.01 ; intrm_sf_mf_723 = t1141 / ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ; t704 =
X [ 436ULL ] >= 0.0 ? X [ 436ULL ] : - X [ 436ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
intrm_sf_mf_1361 * 0.002 ; t883 = t704 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = t883 >= 1.0
? t883 : 1.0 ; t1194 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t893 *
4.0000000000000003E-7 ; intrm_sf_mf_1323 = X [ 436ULL ] * intrm_sf_mf_1361 *
67.455490037817 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
t805 = t893 * 8.0E-8 ; t704 = X [ 436ULL ] * t704 * ( 1.0 / ( t1194 == 0.0 ?
1.0E-16 : t1194 ) ) * 1.0539920318408906 / ( t805 == 0.0 ? 1.0E-16 : t805 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = ( t883 -
2000.0 ) / 2000.0 ; t971 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 * 2.0 ; if (
t883 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 =
intrm_sf_mf_1323 * 1.0E-5 ; } else if ( t883 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = t704 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 = ( ( 1.0 -
t971 ) * intrm_sf_mf_1323 + t704 * t971 ) * 1.0E-5 ; } t704 = X [ 428ULL ] >=
0.0 ? X [ 428ULL ] : - X [ 428ULL ] ; t883 = t704 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
intrm_sf_mf_1323 = t883 >= 1.0 ? t883 : 1.0 ; t1194 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1323 == 0.0 ? 1.0E-16 : intrm_sf_mf_1323 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1323 == 0.0 ?
1.0E-16 : intrm_sf_mf_1323 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_1361 = X [ 428ULL ] * intrm_sf_mf_1361 * 67.455490037817 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
t704 = X [ 428ULL ] * t704 * ( 1.0 / ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ) *
1.0539920318408906 / ( t805 == 0.0 ? 1.0E-16 : t805 ) ; intrm_sf_mf_1323 = (
t883 - 2000.0 ) / 2000.0 ; t971 = intrm_sf_mf_1323 * intrm_sf_mf_1323 * 3.0 -
intrm_sf_mf_1323 * intrm_sf_mf_1323 * intrm_sf_mf_1323 * 2.0 ; if ( t883 <=
2000.0 ) { intrm_sf_mf_1323 = intrm_sf_mf_1361 * 1.0E-5 ; } else if ( t883 >=
4000.0 ) { intrm_sf_mf_1323 = t704 * 1.0E-5 ; } else { intrm_sf_mf_1323 = ( (
1.0 - t971 ) * intrm_sf_mf_1361 + t704 * t971 ) * 1.0E-5 ; } t704 = t898 >=
0.0 ? t898 : - t898 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t1241 *
0.00093750000000000007 ; t883 = t704 * 0.0028301886792452828 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
intrm_sf_mf_1361 = t883 >= 1.0 ? t883 : 1.0 ; t1194 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1361 == 0.0 ? 1.0E-16 : intrm_sf_mf_1361 ) +
0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1361 == 0.0 ?
1.0E-16 : intrm_sf_mf_1361 ) + 0.00069701528436089772 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 = t901 *
1.50186899252403E-8 ; t971 = t898 * t1241 * 112.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
t805 = t901 * 4.97494103773585E-9 ; t704 = t898 * t704 * ( 1.0 / ( t1194 ==
0.0 ? 1.0E-16 : t1194 ) ) * 1.75 / ( t805 == 0.0 ? 1.0E-16 : t805 ) ;
intrm_sf_mf_1361 = ( t883 - 2000.0 ) / 2000.0 ; t972 = intrm_sf_mf_1361 *
intrm_sf_mf_1361 * 3.0 - intrm_sf_mf_1361 * intrm_sf_mf_1361 *
intrm_sf_mf_1361 * 2.0 ; if ( t883 <= 2000.0 ) { intrm_sf_mf_1361 = t971 *
1.0E-5 ; } else if ( t883 >= 4000.0 ) { intrm_sf_mf_1361 = t704 * 1.0E-5 ; }
else { intrm_sf_mf_1361 = ( ( 1.0 - t972 ) * t971 + t704 * t972 ) * 1.0E-5 ;
} if ( - X [ 436ULL ] >= 0.0 ) { t704 = - X [ 436ULL ] ; } else { t704 = X [
436ULL ] ; } t883 = t704 * 0.0028301886792452828 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
t971 = t883 >= 1.0 ? t883 : 1.0 ; t1194 = pmf_log10 ( 6.9 / ( t971 == 0.0 ?
1.0E-16 : t971 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( t971 == 0.0
? 1.0E-16 : t971 ) + 0.00069701528436089772 ) * 3.24 ; t1241 = X [ 436ULL ] *
t1241 * - 112.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi10 ) ;
t704 = X [ 436ULL ] * t704 * ( 1.0 / ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ) * -
1.75 / ( t805 == 0.0 ? 1.0E-16 : t805 ) ; t971 = ( t883 - 2000.0 ) / 2000.0 ;
t972 = t971 * t971 * 3.0 - t971 * t971 * t971 * 2.0 ; if ( t883 <= 2000.0 ) {
t971 = t1241 * 1.0E-5 ; } else if ( t883 >= 4000.0 ) { t971 = t704 * 1.0E-5 ;
} else { t971 = ( ( 1.0 - t972 ) * t1241 + t704 * t972 ) * 1.0E-5 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 <= 0.0 ) { t704 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 >= 1.0 ) { t704 = 1.0 ; } else { t704 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 <= 0.0 ) { t883 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 >= 1.0 ) { t883 = 1.0 ; } else { t883 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 ; } t1241 = intrm_sf_mf_723 >= 2000.0 ? intrm_sf_mf_723 :
1.0 ; t1194 = intrm_sf_mf_1586 - intrm_sf_mf_18 ; t972 = ( t1194 / 2.0 *
1.0E-5 - - 0.01 ) / 0.02 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = t972 * t972
* 3.0 - t972 * t972 * t972 * 2.0 ; if ( t1194 / 2.0 * 1.0E-5 <= - 0.01 ) {
t972 = intrm_sf_mf_18 * 1.0E-5 ; } else if ( ( intrm_sf_mf_1586 -
intrm_sf_mf_18 ) / 2.0 * 1.0E-5 >= 0.01 ) { t972 = intrm_sf_mf_1586 * 1.0E-5
; } else { t972 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) *
intrm_sf_mf_18 + intrm_sf_mf_1586 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) * 1.0E-5 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = pmf_log10
( 6.9 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) + 0.00017169489553429715
) * 3.24 ; t525 [ 0 ] = 293.15 ; tlu2_linear_linear_prelookup ( & dh_efOut .
mField0 [ 0ULL ] , & dh_efOut . mField1 [ 0ULL ] , & dh_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t525 [ 0ULL ] , &
t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t63 = dh_efOut ;
tlu2_1d_linear_linear_value ( & eh_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t546 [ 0 ] = eh_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & fh_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t77 [ 0 ] = fh_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & gh_efOut [ 0ULL ] , & t63 . mField0 [ 0ULL ]
, & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 ,
& t252 [ 0ULL ] , & t76 [ 0ULL ] ) ; t74 [ 0 ] = gh_efOut [ 0 ] ;
intrm_sf_mf_1586 = ( ( ( 1.0 - intrm_sf_mf_297 ) - t1225 ) * t546 [ 0ULL ] +
t77 [ 0ULL ] * intrm_sf_mf_297 ) + t74 [ 0ULL ] * t1225 ; intrm_sf_mf_433 =
U_idx_2 * intrm_sf_mf_433 * - 35.2 / ( t1191 == 0.0 ? 1.0E-16 : t1191 ) *
1.0E-5 ; t1241 = - ( U_idx_2 * t1234 * ( 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) *
0.55 / 0.01 ) ) / ( t1132 == 0.0 ? 1.0E-16 : t1132 ) * 1.0E-5 ;
intrm_sf_mf_18 = ( intrm_sf_mf_723 - 2000.0 ) / 2000.0 ; intrm_sf_mf_297 =
intrm_sf_mf_18 * intrm_sf_mf_18 * 3.0 - intrm_sf_mf_18 * intrm_sf_mf_18 *
intrm_sf_mf_18 * 2.0 ; if ( intrm_sf_mf_723 <= 2000.0 ) { intrm_sf_mf_18 =
intrm_sf_mf_433 ; } else if ( intrm_sf_mf_723 >= 4000.0 ) { intrm_sf_mf_18 =
t1241 ; } else { intrm_sf_mf_18 = ( 1.0 - intrm_sf_mf_297 ) * intrm_sf_mf_433
+ t1241 * intrm_sf_mf_297 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 =
intrm_sf_mf_689 * 7.8539816339744827E-5 ; intrm_sf_mf_433 = t1217 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
intrm_sf_mf_723 = intrm_sf_mf_433 >= 2000.0 ? intrm_sf_mf_433 : 1.0 ; t1194 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ? 1.0E-16 : intrm_sf_mf_723 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ?
1.0E-16 : intrm_sf_mf_723 ) + 0.00017169489553429715 ) * 3.24 ; t1191 =
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
1.5707963267948965E-8 ; t1241 = U_idx_2 * intrm_sf_mf_689 * 35.2 / ( t1191 ==
0.0 ? 1.0E-16 : t1191 ) * 1.0E-5 ; t1132 =
Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I *
1.2337005501361696E-8 ; intrm_sf_mf_723 = U_idx_2 * ( 1.0 / ( t1194 == 0.0 ?
1.0E-16 : t1194 ) * 0.55 / 0.01 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 / ( t1132 ==
0.0 ? 1.0E-16 : t1132 ) * 1.0E-5 ; t1194 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 - t814 ;
intrm_sf_mf_297 = ( t1194 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; t1225 =
intrm_sf_mf_297 * intrm_sf_mf_297 * 3.0 - intrm_sf_mf_297 * intrm_sf_mf_297 *
intrm_sf_mf_297 * 2.0 ; if ( t1194 / 2.0 * 1.0E-5 <= - 0.01 ) {
intrm_sf_mf_297 = t814 * 1.0E-5 ; } else if ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 - t814 ) / 2.0
* 1.0E-5 >= 0.01 ) { intrm_sf_mf_297 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * 1.0E-5 ; }
else { intrm_sf_mf_297 = ( ( 1.0 - t1225 ) * t814 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * t1225 ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = (
intrm_sf_mf_433 - 2000.0 ) / 2000.0 ; t814 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 * 2.0 ; if (
intrm_sf_mf_433 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = t1241 ; }
else if ( intrm_sf_mf_433 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 =
intrm_sf_mf_723 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 = ( 1.0 - t814
) * t1241 + intrm_sf_mf_723 * t814 ; } intrm_sf_mf_433 = t1141 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) ;
intrm_sf_mf_723 = intrm_sf_mf_433 >= 2000.0 ? intrm_sf_mf_433 : 1.0 ; t1225 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ? 1.0E-16 : intrm_sf_mf_723 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ?
1.0E-16 : intrm_sf_mf_723 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_689 = U_idx_2 * intrm_sf_mf_689 * - 35.2 / ( t1191 == 0.0 ?
1.0E-16 : t1191 ) * 1.0E-5 ; intrm_sf_mf_723 = - ( U_idx_2 * t1234 * ( 1.0 /
( t1225 == 0.0 ? 1.0E-16 : t1225 ) * 0.55 / 0.01 ) ) / ( t1132 == 0.0 ?
1.0E-16 : t1132 ) * 1.0E-5 ; t814 = ( intrm_sf_mf_433 - 2000.0 ) / 2000.0 ;
t1241 = t814 * t814 * 3.0 - t814 * t814 * t814 * 2.0 ; if ( intrm_sf_mf_433
<= 2000.0 ) { t814 = intrm_sf_mf_689 ; } else if ( intrm_sf_mf_433 >= 4000.0
) { t814 = intrm_sf_mf_723 ; } else { t814 = ( 1.0 - t1241 ) *
intrm_sf_mf_689 + intrm_sf_mf_723 * t1241 ; } t1225 = intrm_sf_mf_574 - t824
; intrm_sf_mf_433 = ( t1225 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ;
intrm_sf_mf_689 = intrm_sf_mf_433 * intrm_sf_mf_433 * 3.0 - intrm_sf_mf_433 *
intrm_sf_mf_433 * intrm_sf_mf_433 * 2.0 ; if ( t1225 / 2.0 * 1.0E-5 <= - 0.01
) { intrm_sf_mf_433 = t824 * 1.0E-5 ; } else if ( ( intrm_sf_mf_574 - t824 )
/ 2.0 * 1.0E-5 >= 0.01 ) { intrm_sf_mf_433 = intrm_sf_mf_574 * 1.0E-5 ; }
else { intrm_sf_mf_433 = ( ( 1.0 - intrm_sf_mf_689 ) * t824 + intrm_sf_mf_574
* intrm_sf_mf_689 ) * 1.0E-5 ; } t1225 = intrm_sf_mf_724 *
7.8539816339744827E-5 ; intrm_sf_mf_689 = t1217 / ( t1225 == 0.0 ? 1.0E-16 :
t1225 ) ; intrm_sf_mf_723 = intrm_sf_mf_689 >= 2000.0 ? intrm_sf_mf_689 : 1.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = pmf_log10
( 6.9 / ( intrm_sf_mf_723 == 0.0 ? 1.0E-16 : intrm_sf_mf_723 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ?
1.0E-16 : intrm_sf_mf_723 ) + 0.00017169489553429715 ) * 3.24 ; t1217 =
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I * 1.5707963267948965E-8
; intrm_sf_mf_574 = U_idx_2 * intrm_sf_mf_724 * 35.2 / ( t1217 == 0.0 ?
1.0E-16 : t1217 ) * 1.0E-5 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 = U_idx_2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 * ( 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 ) *
0.55 / 0.01 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 =
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I * 1.2337005501361696E-8
; intrm_sf_mf_723 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_x0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) *
1.0E-5 ; t824 = ( intrm_sf_mf_689 - 2000.0 ) / 2000.0 ; t1241 = t824 * t824 *
3.0 - t824 * t824 * t824 * 2.0 ; if ( intrm_sf_mf_689 <= 2000.0 ) { t824 =
intrm_sf_mf_574 ; } else if ( intrm_sf_mf_689 >= 4000.0 ) { t824 =
intrm_sf_mf_723 ; } else { t824 = ( 1.0 - t1241 ) * intrm_sf_mf_574 +
intrm_sf_mf_723 * t1241 ; } intrm_sf_mf_689 = t1141 / ( t1225 == 0.0 ?
1.0E-16 : t1225 ) ; intrm_sf_mf_723 = intrm_sf_mf_689 >= 2000.0 ?
intrm_sf_mf_689 : 1.0 ; t1225 = pmf_log10 ( 6.9 / ( intrm_sf_mf_723 == 0.0 ?
1.0E-16 : intrm_sf_mf_723 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_723 == 0.0 ? 1.0E-16 : intrm_sf_mf_723 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_723 = 1.0 / ( t1225 == 0.0 ? 1.0E-16 : t1225 ) * 0.55
/ 0.01 ; t1225 = t834 - t725 ; intrm_sf_mf_574 = ( t1225 / 2.0 * 1.0E-5 - -
0.01 ) / 0.02 ; t1241 = intrm_sf_mf_574 * intrm_sf_mf_574 * 3.0 -
intrm_sf_mf_574 * intrm_sf_mf_574 * intrm_sf_mf_574 * 2.0 ; if ( t1225 / 2.0
* 1.0E-5 <= - 0.01 ) { intrm_sf_mf_574 = t725 * 1.0E-5 ; } else if ( ( t834 -
t725 ) / 2.0 * 1.0E-5 >= 0.01 ) { intrm_sf_mf_574 = t834 * 1.0E-5 ; } else {
intrm_sf_mf_574 = ( ( 1.0 - t1241 ) * t725 + t834 * t1241 ) * 1.0E-5 ; }
intrm_sf_mf_724 = U_idx_2 * intrm_sf_mf_724 * - 35.2 / ( t1217 == 0.0 ?
1.0E-16 : t1217 ) * 1.0E-5 ; intrm_sf_mf_723 = - ( U_idx_2 * t1234 *
intrm_sf_mf_723 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi62 ) *
1.0E-5 ; t834 = ( intrm_sf_mf_689 - 2000.0 ) / 2000.0 ; t725 = t834 * t834 *
3.0 - t834 * t834 * t834 * 2.0 ; if ( intrm_sf_mf_689 <= 2000.0 ) { t834 =
intrm_sf_mf_724 ; } else if ( intrm_sf_mf_689 >= 4000.0 ) { t834 =
intrm_sf_mf_723 ; } else { t834 = ( 1.0 - t725 ) * intrm_sf_mf_724 +
intrm_sf_mf_723 * t725 ; } intrm_sf_mf_689 = ( ( ( 1.0 - piece7 ) - t838 ) *
t546 [ 0ULL ] + t77 [ 0ULL ] * piece7 ) + t74 [ 0ULL ] * t838 ; t1234 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 - t848 ;
intrm_sf_mf_724 = ( t1234 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; intrm_sf_mf_723
= intrm_sf_mf_724 * intrm_sf_mf_724 * 3.0 - intrm_sf_mf_724 * intrm_sf_mf_724
* intrm_sf_mf_724 * 2.0 ; if ( t1234 / 2.0 * 1.0E-5 <= - 0.01 ) {
intrm_sf_mf_724 = t848 * 1.0E-5 ; } else if ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 - t848 ) / 2.0
* 1.0E-5 >= 0.01 ) { intrm_sf_mf_724 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 * 1.0E-5 ; }
else { intrm_sf_mf_724 = ( ( 1.0 - intrm_sf_mf_723 ) * t848 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M7 *
intrm_sf_mf_723 ) * 1.0E-5 ; } t699 [ 0ULL ] = t63 . mField0 [ 0ULL ] ; t699
[ 1ULL ] = t63 . mField0 [ 1ULL ] ; t75 [ 0ULL ] = t63 . mField2 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & hh_efOut [ 0ULL ] , & t699 [ 0ULL ] , & t75 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t252 [ 0ULL ] , &
t76 [ 0ULL ] ) ; t74 [ 0 ] = hh_efOut [ 0 ] ; intrm_sf_mf_723 = ( ( ( 1.0 -
intrm_sf_mf_898 ) - piece6 ) * t546 [ 0ULL ] + t77 [ 0ULL ] * intrm_sf_mf_898
) + t74 [ 0ULL ] * piece6 ; t1234 = t856 - piece346 ; intrm_sf_mf_898 = (
t1234 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; piece6 = intrm_sf_mf_898 *
intrm_sf_mf_898 * 3.0 - intrm_sf_mf_898 * intrm_sf_mf_898 * intrm_sf_mf_898 *
2.0 ; if ( t1234 / 2.0 * 1.0E-5 <= - 0.01 ) { intrm_sf_mf_898 = piece346 *
1.0E-5 ; } else if ( ( t856 - piece346 ) / 2.0 * 1.0E-5 >= 0.01 ) {
intrm_sf_mf_898 = t856 * 1.0E-5 ; } else { intrm_sf_mf_898 = ( ( 1.0 - piece6
) * piece346 + t856 * piece6 ) * 1.0E-5 ; } t838 = X [ 173ULL ] *
0.00062831853071795862 ; t848 = X [ 300ULL ] * 0.0031415926535897937 ; t545 [
0ULL ] = X [ 0ULL ] ; t545 [ 1ULL ] = Battery_System_Battery_Q * 1000.0 ;
t545 [ 2ULL ] = X [ 0ULL ] ; t545 [ 3ULL ] = X [ 1ULL ] *
0.00027777777777777778 ; t545 [ 4ULL ] = X [ 78ULL ] ; t545 [ 5ULL ] = X [
2ULL ] ; t545 [ 6ULL ] = X [ 79ULL ] ; t545 [ 7ULL ] = X [ 80ULL ] * 1000.0 ;
t545 [ 8ULL ] = X [ 81ULL ] ; t545 [ 9ULL ] = X [ 81ULL ] ; t545 [ 10ULL ] =
X [ 79ULL ] ; t545 [ 11ULL ] = X [ 82ULL ] ; t545 [ 12ULL ] = X [ 83ULL ] ;
t545 [ 13ULL ] = X [ 84ULL ] ; t545 [ 14ULL ] = X [ 85ULL ] ; t545 [ 15ULL ]
= X [ 86ULL ] * 0.00027777777777777778 ; t545 [ 16ULL ] = X [ 81ULL ] ; t545
[ 17ULL ] = - X [ 78ULL ] + - U_idx_1 ; t545 [ 18ULL ] = X [ 87ULL ] ; t545 [
19ULL ] = X [ 79ULL ] ; t545 [ 20ULL ] = Battery_System_DC_DC_Converter_p2_v
; t545 [ 21ULL ] = - ( - ( X [ 87ULL ] * X [ 87ULL ] * 0.00010037240412334386
) + - 0.001 ) * 1000.0 ; t545 [ 22ULL ] = X [ 3ULL ] ; t545 [ 23ULL ] = X [
79ULL ] ; t545 [ 24ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [ 25ULL
] = X [ 5ULL ] ; t545 [ 26ULL ] = U_idx_0 ; t545 [ 27ULL ] = U_idx_1 ; t545 [
28ULL ] = U_idx_1 ; t545 [ 29ULL ] = X [ 79ULL ] ; t545 [ 30ULL ] = X [ 79ULL
] ; t545 [ 31ULL ] = U_idx_1 ; t545 [ 32ULL ] = X [ 79ULL ] ; t545 [ 33ULL ]
= - X [ 78ULL ] ; t545 [ 34ULL ] = - X [ 78ULL ] ; t545 [ 35ULL ] = X [ 79ULL
] ; t545 [ 36ULL ] = X [ 79ULL ] ; t545 [ 37ULL ] = - X [ 78ULL ] ; t545 [
38ULL ] = X [ 79ULL ] ; t545 [ 39ULL ] = X [ 79ULL ] ; t545 [ 40ULL ] = X [
79ULL ] ; t545 [ 41ULL ] = X [ 79ULL ] ; t545 [ 42ULL ] = X [ 79ULL ] ; t545
[ 43ULL ] = - X [ 87ULL ] ; t545 [ 44ULL ] = - X [ 87ULL ] ; t545 [ 45ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 46ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 47ULL ] = - X [ 87ULL ] ; t545 [
48ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [ 49ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 50ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 51ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 52ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 53ULL ] = X [ 4ULL ] ; t545 [
54ULL ] = t769 * 1000.0 ; t545 [ 55ULL ] = t769 * 1000.0 ; t545 [ 56ULL ] = -
X [ 4ULL ] ; t545 [ 57ULL ] = X [ 5ULL ] ; t545 [ 58ULL ] = t769 * 1.0E+6 ;
t545 [ 59ULL ] = t769 * 1000.0 ; t545 [ 60ULL ] = - X [ 87ULL ] ; t545 [
61ULL ] = t769 * 1.0E+6 ; t545 [ 62ULL ] = - X [ 87ULL ] ; t545 [ 63ULL ] = X
[ 4ULL ] ; t545 [ 64ULL ] = X [ 88ULL ] * 1000.0 ; t545 [ 65ULL ] = X [ 4ULL
] ; t545 [ 66ULL ] = X [ 4ULL ] ; t545 [ 67ULL ] = X [ 5ULL ] ; t545 [ 68ULL
] = t770 * 1000.0 ; t545 [ 69ULL ] = t770 * 100.0 ; t545 [ 70ULL ] = - X [
87ULL ] ; t545 [ 71ULL ] = U_idx_0 ; t545 [ 72ULL ] = X [ 0ULL ] ; t545 [
73ULL ] = Battery_System_Battery_Q * 1000.0 ; t545 [ 74ULL ] =
Battery_System_Battery_Q * 100.0 ; t545 [ 75ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 76ULL ] = X [ 89ULL ] ; t545 [
77ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 78ULL ] = X [ 91ULL ] ; t545 [ 79ULL ] =
X [ 92ULL ] * 0.1 ; t545 [ 80ULL ] = X [ 93ULL ] ; t545 [ 81ULL ] = - X [
93ULL ] ; t545 [ 82ULL ] = X [ 89ULL ] ; t545 [ 83ULL ] = X [ 90ULL ] * 0.1 ;
t545 [ 84ULL ] = X [ 93ULL ] ; t545 [ 85ULL ] = X [ 94ULL ] ; t545 [ 86ULL ]
= U_idx_2 ; t545 [ 87ULL ] = X [ 95ULL ] ; t545 [ 88ULL ] = X [ 91ULL ] ;
t545 [ 89ULL ] = X [ 92ULL ] * 0.1 ; t545 [ 90ULL ] = - X [ 93ULL ] ; t545 [
91ULL ] = X [ 96ULL ] ; t545 [ 92ULL ] = - U_idx_2 ; t545 [ 93ULL ] = X [
95ULL ] ; t545 [ 94ULL ] = U_idx_2 ; t545 [ 95ULL ] = - U_idx_2 ; t545 [
96ULL ] = X [ 97ULL ] ; t545 [ 97ULL ] = X [ 98ULL ] ; t545 [ 98ULL ] = X [
99ULL ] * 0.1 ; t545 [ 99ULL ] = X [ 100ULL ] ; t545 [ 100ULL ] = X [ 101ULL
] * 0.1 ; t545 [ 101ULL ] = X [ 102ULL ] ; t545 [ 102ULL ] = - X [ 102ULL ] ;
t545 [ 103ULL ] = X [ 98ULL ] ; t545 [ 104ULL ] = X [ 99ULL ] * 0.1 ; t545 [
105ULL ] = X [ 102ULL ] ; t545 [ 106ULL ] = X [ 103ULL ] ; t545 [ 107ULL ] =
U_idx_2 ; t545 [ 108ULL ] = X [ 104ULL ] ; t545 [ 109ULL ] = X [ 100ULL ] ;
t545 [ 110ULL ] = X [ 101ULL ] * 0.1 ; t545 [ 111ULL ] = - X [ 102ULL ] ;
t545 [ 112ULL ] = X [ 105ULL ] ; t545 [ 113ULL ] = - U_idx_2 ; t545 [ 114ULL
] = X [ 104ULL ] ; t545 [ 115ULL ] = U_idx_2 ; t545 [ 116ULL ] = - U_idx_2 ;
t545 [ 117ULL ] = X [ 106ULL ] ; t545 [ 118ULL ] = X [ 107ULL ] ; t545 [
119ULL ] = X [ 108ULL ] * 0.1 ; t545 [ 120ULL ] = X [ 109ULL ] ; t545 [
121ULL ] = X [ 110ULL ] * 0.1 ; t545 [ 122ULL ] = X [ 111ULL ] ; t545 [
123ULL ] = - X [ 111ULL ] ; t545 [ 124ULL ] = X [ 107ULL ] ; t545 [ 125ULL ]
= X [ 108ULL ] * 0.1 ; t545 [ 126ULL ] = X [ 111ULL ] ; t545 [ 127ULL ] = X [
112ULL ] ; t545 [ 128ULL ] = U_idx_2 ; t545 [ 129ULL ] = X [ 113ULL ] ; t545
[ 130ULL ] = X [ 109ULL ] ; t545 [ 131ULL ] = X [ 110ULL ] * 0.1 ; t545 [
132ULL ] = - X [ 111ULL ] ; t545 [ 133ULL ] = X [ 114ULL ] ; t545 [ 134ULL ]
= - U_idx_2 ; t545 [ 135ULL ] = X [ 113ULL ] ; t545 [ 136ULL ] = U_idx_2 ;
t545 [ 137ULL ] = - U_idx_2 ; t545 [ 138ULL ] = X [ 115ULL ] ; t545 [ 139ULL
] = X [ 5ULL ] ; t545 [ 140ULL ] = X [ 13ULL ] ; t545 [ 141ULL ] = U_idx_0 ;
t545 [ 142ULL ] = X [ 109ULL ] ; t545 [ 143ULL ] = X [ 110ULL ] * 0.1 ; t545
[ 144ULL ] = X [ 116ULL ] ; t545 [ 145ULL ] = X [ 117ULL ] * 0.1 ; t545 [
146ULL ] = U_idx_0 ; t545 [ 147ULL ] = X [ 109ULL ] ; t545 [ 148ULL ] = X [
110ULL ] * 0.1 ; t545 [ 149ULL ] = X [ 116ULL ] ; t545 [ 150ULL ] = X [
117ULL ] * 0.1 ; t545 [ 151ULL ] = U_idx_0 ; t545 [ 152ULL ] = X [ 6ULL ] ;
t545 [ 153ULL ] = U_idx_2 ; t545 [ 154ULL ] = - U_idx_2 ; t545 [ 155ULL ] =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_p_I ; t545 [ 156ULL ] = X
[ 111ULL ] ; t545 [ 157ULL ] = X [ 118ULL ] ; t545 [ 158ULL ] = X [ 119ULL ]
; t545 [ 159ULL ] = X [ 109ULL ] ; t545 [ 160ULL ] = X [ 110ULL ] * 0.1 ;
t545 [ 161ULL ] = X [ 111ULL ] ; t545 [ 162ULL ] = X [ 120ULL ] ; t545 [
163ULL ] = U_idx_2 ; t545 [ 164ULL ] = X [ 121ULL ] ; t545 [ 165ULL ] = X [
120ULL ] ; t545 [ 166ULL ] = X [ 116ULL ] ; t545 [ 167ULL ] = X [ 117ULL ] *
0.1 ; t545 [ 168ULL ] = X [ 118ULL ] ; t545 [ 169ULL ] = X [ 122ULL ] ; t545
[ 170ULL ] = - U_idx_2 ; t545 [ 171ULL ] = X [ 123ULL ] ; t545 [ 172ULL ] = X
[ 122ULL ] ; t545 [ 173ULL ] =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_rho_I ; t545 [ 174ULL ] =
Electrical_Cooling_System_Heat_Exchanger_pipe_model_u_I ; t545 [ 175ULL ] =
t651_idx_0 ; t545 [ 176ULL ] = intrm_sf_mf_18 ; t545 [ 177ULL ] = t771 ; t545
[ 178ULL ] = Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio7 ;
t545 [ 179ULL ] = U_idx_0 ; t545 [ 180ULL ] = U_idx_0 ; t545 [ 181ULL ] =
U_idx_0 ; t545 [ 182ULL ] = U_idx_0 ; t545 [ 183ULL ] = X [ 119ULL ] * 1000.0
; t545 [ 184ULL ] = X [ 119ULL ] * 1000.0 ; t545 [ 185ULL ] = X [ 119ULL ] *
1000.0 ; t545 [ 186ULL ] = U_idx_0 ; t545 [ 187ULL ] = U_idx_0 ; t545 [
188ULL ] = U_idx_0 ; t545 [ 189ULL ] = U_idx_0 ; t545 [ 190ULL ] = U_idx_0 ;
t545 [ 191ULL ] = U_idx_0 ; t545 [ 192ULL ] = t772 * 1000.0 ; t545 [ 193ULL ]
= t772 * 1000.0 ; t545 [ 194ULL ] = t772 * 1000.0 ; t545 [ 195ULL ] = U_idx_0
; t545 [ 196ULL ] = U_idx_0 ; t545 [ 197ULL ] = X [ 91ULL ] ; t545 [ 198ULL ]
= X [ 92ULL ] * 0.1 ; t545 [ 199ULL ] = X [ 98ULL ] ; t545 [ 200ULL ] = X [
99ULL ] * 0.1 ; t545 [ 201ULL ] = X [ 10ULL ] ; t545 [ 202ULL ] = X [ 91ULL ]
; t545 [ 203ULL ] = X [ 92ULL ] * 0.1 ; t545 [ 204ULL ] = X [ 98ULL ] ; t545
[ 205ULL ] = X [ 99ULL ] * 0.1 ; t545 [ 206ULL ] = X [ 10ULL ] ; t545 [
207ULL ] = X [ 9ULL ] ; t545 [ 208ULL ] = U_idx_2 ; t545 [ 209ULL ] = -
U_idx_2 ; t545 [ 210ULL ] =
Electrical_Cooling_System_Pipe_Converter_pipe_model_p_I ; t545 [ 211ULL ] = X
[ 93ULL ] ; t545 [ 212ULL ] = - X [ 102ULL ] ; t545 [ 213ULL ] = X [ 124ULL ]
; t545 [ 214ULL ] = X [ 91ULL ] ; t545 [ 215ULL ] = X [ 92ULL ] * 0.1 ; t545
[ 216ULL ] = X [ 93ULL ] ; t545 [ 217ULL ] = X [ 125ULL ] ; t545 [ 218ULL ] =
U_idx_2 ; t545 [ 219ULL ] = X [ 126ULL ] ; t545 [ 220ULL ] = X [ 125ULL ] ;
t545 [ 221ULL ] = X [ 98ULL ] ; t545 [ 222ULL ] = X [ 99ULL ] * 0.1 ; t545 [
223ULL ] = - X [ 102ULL ] ; t545 [ 224ULL ] = X [ 127ULL ] ; t545 [ 225ULL ]
= - U_idx_2 ; t545 [ 226ULL ] = X [ 128ULL ] ; t545 [ 227ULL ] = X [ 127ULL ]
; t545 [ 228ULL ] = Electrical_Cooling_System_Pipe_Converter_pipe_model_rho_I
; t545 [ 229ULL ] = Electrical_Cooling_System_Pipe_Converter_pipe_model_u_I ;
t545 [ 230ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi6 ; t545 [ 231ULL
] = t814 ; t545 [ 232ULL ] = t773 ; t545 [ 233ULL ] =
Electrical_Cooling_System_Pipe_Converter_pipe_model_convection3 ; t545 [
234ULL ] = X [ 100ULL ] ; t545 [ 235ULL ] = X [ 101ULL ] * 0.1 ; t545 [
236ULL ] = X [ 107ULL ] ; t545 [ 237ULL ] = X [ 108ULL ] * 0.1 ; t545 [
238ULL ] = X [ 12ULL ] ; t545 [ 239ULL ] = X [ 100ULL ] ; t545 [ 240ULL ] = X
[ 101ULL ] * 0.1 ; t545 [ 241ULL ] = X [ 107ULL ] ; t545 [ 242ULL ] = X [
108ULL ] * 0.1 ; t545 [ 243ULL ] = X [ 12ULL ] ; t545 [ 244ULL ] = X [ 11ULL
] ; t545 [ 245ULL ] = U_idx_2 ; t545 [ 246ULL ] = - U_idx_2 ; t545 [ 247ULL ]
= Electrical_Cooling_System_Pipe_Motor_pipe_model_p_I ; t545 [ 248ULL ] = X [
102ULL ] ; t545 [ 249ULL ] = - X [ 111ULL ] ; t545 [ 250ULL ] = X [ 129ULL ]
; t545 [ 251ULL ] = X [ 100ULL ] ; t545 [ 252ULL ] = X [ 101ULL ] * 0.1 ;
t545 [ 253ULL ] = X [ 102ULL ] ; t545 [ 254ULL ] = X [ 130ULL ] ; t545 [
255ULL ] = U_idx_2 ; t545 [ 256ULL ] = X [ 131ULL ] ; t545 [ 257ULL ] = X [
130ULL ] ; t545 [ 258ULL ] = X [ 107ULL ] ; t545 [ 259ULL ] = X [ 108ULL ] *
0.1 ; t545 [ 260ULL ] = - X [ 111ULL ] ; t545 [ 261ULL ] = X [ 132ULL ] ;
t545 [ 262ULL ] = - U_idx_2 ; t545 [ 263ULL ] = X [ 133ULL ] ; t545 [ 264ULL
] = X [ 132ULL ] ; t545 [ 265ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_rho_I ; t545 [ 266ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_u_I ; t545 [ 267ULL ] = t824
; t545 [ 268ULL ] = t834 ; t545 [ 269ULL ] = t774 ; t545 [ 270ULL ] =
Electrical_Cooling_System_Pipe_Motor_pipe_model_convection_B_rh ; t545 [
271ULL ] = X [ 134ULL ] ; t545 [ 272ULL ] = X [ 135ULL ] * 0.1 ; t545 [
273ULL ] = X [ 89ULL ] ; t545 [ 274ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 275ULL
] = U_idx_2 ; t545 [ 276ULL ] = X [ 136ULL ] ; t545 [ 277ULL ] = - X [ 93ULL
] ; t545 [ 278ULL ] = X [ 134ULL ] ; t545 [ 279ULL ] = X [ 135ULL ] * 0.1 ;
t545 [ 280ULL ] = X [ 136ULL ] ; t545 [ 281ULL ] = X [ 137ULL ] ; t545 [
282ULL ] = U_idx_2 ; t545 [ 283ULL ] = X [ 138ULL ] ; t545 [ 284ULL ] = X [
89ULL ] ; t545 [ 285ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 286ULL ] = - X [ 93ULL
] ; t545 [ 287ULL ] = X [ 139ULL ] ; t545 [ 288ULL ] = - U_idx_2 ; t545 [
289ULL ] = X [ 138ULL ] ; t545 [ 290ULL ] = U_idx_2 ; t545 [ 291ULL ] = -
U_idx_2 ; t545 [ 292ULL ] = ( X [ 90ULL ] - X [ 135ULL ] ) * U_idx_2 / (
Electrical_Cooling_System_Pump_rho_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pump_rho_avg ) ; t545 [ 293ULL ] = U_idx_0 ; t545 [
294ULL ] = U_idx_0 ; t545 [ 295ULL ] = U_idx_0 ; t545 [ 296ULL ] = U_idx_0 ;
t545 [ 297ULL ] = X [ 13ULL ] ; t545 [ 298ULL ] = X [ 13ULL ] ; t545 [ 299ULL
] = X [ 13ULL ] ; t545 [ 300ULL ] = X [ 13ULL ] ; t545 [ 301ULL ] = X [ 89ULL
] ; t545 [ 302ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 303ULL ] = X [ 134ULL ] ;
t545 [ 304ULL ] = X [ 135ULL ] * 0.1 ; t545 [ 305ULL ] = X [ 89ULL ] ; t545 [
306ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 307ULL ] = t776 * 1000.0 ; t545 [
308ULL ] = t776 * 1111.1111111111111 ; t545 [ 309ULL ] = t776 *
1111.1111111111111 ; t545 [ 310ULL ] = t775 * 99999.999999999985 ; t545 [
311ULL ] = X [ 140ULL ] * 1.0E-6 ; t545 [ 312ULL ] = t776 * 1000.0 ; t545 [
313ULL ] = X [ 134ULL ] ; t545 [ 314ULL ] = X [ 135ULL ] * 0.1 ; t545 [
315ULL ] = X [ 89ULL ] ; t545 [ 316ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 317ULL
] = t775 * 99999.999999999985 ; t545 [ 318ULL ] = X [ 134ULL ] - X [ 89ULL ]
; t545 [ 319ULL ] = X [ 89ULL ] ; t545 [ 320ULL ] = X [ 90ULL ] * 0.1 ; t545
[ 321ULL ] = X [ 89ULL ] ; t545 [ 322ULL ] = X [ 90ULL ] * 0.1 ; t545 [
323ULL ] = X [ 93ULL ] ; t545 [ 324ULL ] = X [ 140ULL ] * 1.0E-6 ; t545 [
325ULL ] = U_idx_2 ; t545 [ 326ULL ] = U_idx_2 ; t545 [ 327ULL ] = X [ 134ULL
] ; t545 [ 328ULL ] = X [ 135ULL ] * 0.1 ; t545 [ 329ULL ] = X [ 116ULL ] ;
t545 [ 330ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 331ULL ] = X [ 141ULL ] ; t545
[ 332ULL ] = X [ 14ULL ] * 0.1 ; t545 [ 333ULL ] = X [ 141ULL ] ; t545 [
334ULL ] = X [ 14ULL ] * 0.1 ; t545 [ 335ULL ] = X [ 7ULL ] ; t545 [ 336ULL ]
= U_idx_0 ; t545 [ 337ULL ] = t778 * 1000.0 ; t545 [ 338ULL ] = t778 * 5000.0
; t545 [ 339ULL ] = X [ 8ULL ] ; t545 [ 340ULL ] = U_idx_0 ; t545 [ 341ULL ]
= t779 * 1000.0 ; t545 [ 342ULL ] = t779 * 500000.0 ; t545 [ 343ULL ] = X [
142ULL ] ; t545 [ 344ULL ] = X [ 143ULL ] ; t545 [ 345ULL ] = X [ 14ULL ] *
0.1 ; t545 [ 346ULL ] = X [ 144ULL ] ; t545 [ 347ULL ] = - X [ 144ULL ] ;
t545 [ 348ULL ] = X [ 145ULL ] ; t545 [ 349ULL ] = X [ 146ULL ] ; t545 [
350ULL ] = X [ 142ULL ] ; t545 [ 351ULL ] = X [ 144ULL ] ; t545 [ 352ULL ] =
X [ 147ULL ] ; t545 [ 353ULL ] = X [ 148ULL ] ; t545 [ 354ULL ] = X [ 143ULL
] ; t545 [ 355ULL ] = X [ 14ULL ] * 0.1 ; t545 [ 356ULL ] = - X [ 144ULL ] ;
t545 [ 357ULL ] = X [ 147ULL ] ; t545 [ 358ULL ] = - X [ 148ULL ] ; t545 [
359ULL ] = X [ 148ULL ] ; t545 [ 360ULL ] = - X [ 148ULL ] ; t545 [ 361ULL ]
= U_idx_0 ; t545 [ 362ULL ] = U_idx_0 ; t545 [ 363ULL ] = X [ 142ULL ] ; t545
[ 364ULL ] = - X [ 144ULL ] ; t545 [ 365ULL ] = X [ 142ULL ] ; t545 [ 366ULL
] = - X [ 144ULL ] ; t545 [ 367ULL ] = X [ 149ULL ] ; t545 [ 368ULL ] = - X [
148ULL ] ; t545 [ 369ULL ] = - X [ 148ULL ] ; t545 [ 370ULL ] = X [ 116ULL ]
; t545 [ 371ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 372ULL ] = X [ 117ULL ] *
99999.999999999985 ; t545 [ 373ULL ] = X [ 116ULL ] ; t545 [ 374ULL ] = X [
116ULL ] ; t545 [ 375ULL ] = X [ 143ULL ] ; t545 [ 376ULL ] = X [ 14ULL ] *
0.1 ; t545 [ 377ULL ] = X [ 134ULL ] ; t545 [ 378ULL ] = X [ 135ULL ] * 0.1 ;
t545 [ 379ULL ] = X [ 141ULL ] ; t545 [ 380ULL ] = X [ 14ULL ] * 0.1 ; t545 [
381ULL ] = X [ 116ULL ] ; t545 [ 382ULL ] = X [ 117ULL ] * 0.1 ; t545 [
383ULL ] = X [ 144ULL ] ; t545 [ 384ULL ] = - X [ 136ULL ] ; t545 [ 385ULL ]
= - X [ 118ULL ] ; t545 [ 386ULL ] = X [ 150ULL ] ; t545 [ 387ULL ] = X [
151ULL ] ; t545 [ 388ULL ] = X [ 7ULL ] ; t545 [ 389ULL ] = X [ 8ULL ] ; t545
[ 390ULL ] = X [ 7ULL ] + 126.84999999999997 ; t545 [ 391ULL ] = X [ 148ULL ]
; t545 [ 392ULL ] = - U_idx_2 ; t545 [ 393ULL ] = U_idx_2 ; t545 [ 394ULL ] =
X [ 14ULL ] * 0.1 ; t545 [ 395ULL ] = X [ 14ULL ] * 0.1 ; t545 [ 396ULL ] = X
[ 153ULL ] ; t545 [ 397ULL ] = X [ 154ULL ] ; t545 [ 398ULL ] = X [ 155ULL ]
; t545 [ 399ULL ] = X [ 156ULL ] ; t545 [ 400ULL ] = X [ 157ULL ] ; t545 [
401ULL ] = X [ 159ULL ] ; t545 [ 402ULL ] = X [ 160ULL ] ; t545 [ 403ULL ] =
X [ 161ULL ] ; t545 [ 404ULL ] = X [ 7ULL ] ; t545 [ 405ULL ] = X [ 8ULL ] ;
t545 [ 406ULL ] = Electrical_Cooling_System_Tank_Tank_level ; t545 [ 407ULL ]
= - t778 ; t545 [ 408ULL ] = - t779 ; t545 [ 409ULL ] = X [ 7ULL ] ; t545 [
410ULL ] = X [ 8ULL ] ; t545 [ 411ULL ] =
Electrical_Cooling_System_Tank_Tank_level * 0.005 ; t545 [ 412ULL ] =
Electrical_Cooling_System_Tank_Tank_level ; t545 [ 413ULL ] = X [ 15ULL ] ;
t545 [ 414ULL ] = X [ 14ULL ] * 0.1 ; t545 [ 415ULL ] = X [ 14ULL ] * 0.1 ;
t545 [ 416ULL ] = X [ 155ULL ] ; t545 [ 417ULL ] = X [ 158ULL ] ; t545 [
418ULL ] = X [ 152ULL ] * 0.001 ; t545 [ 419ULL ] =
Electrical_Cooling_System_Tank_Tank_level * 0.005 ; t545 [ 420ULL ] = X [
5ULL ] ; t545 [ 421ULL ] = X [ 10ULL ] ; t545 [ 422ULL ] = X [ 5ULL ] ; t545
[ 423ULL ] = X [ 10ULL ] ; t545 [ 424ULL ] = X [ 162ULL ] * 1000.0 ; t545 [
425ULL ] = X [ 162ULL ] * 0.5372318754156804 ; t545 [ 426ULL ] = X [ 10ULL ]
; t545 [ 427ULL ] = X [ 10ULL ] ; t545 [ 428ULL ] = X [ 124ULL ] * 1000.0 ;
t545 [ 429ULL ] = X [ 124ULL ] * 1000.0 ; t545 [ 430ULL ] = X [ 124ULL ] *
1000.0 ; t545 [ 431ULL ] = X [ 10ULL ] ; t545 [ 432ULL ] = X [ 10ULL ] ; t545
[ 433ULL ] = X [ 10ULL ] ; t545 [ 434ULL ] = ( - X [ 124ULL ] + X [ 162ULL ]
) * 1000.0 ; t545 [ 435ULL ] = X [ 10ULL ] ; t545 [ 436ULL ] = X [ 13ULL ] ;
t545 [ 437ULL ] = X [ 12ULL ] ; t545 [ 438ULL ] = X [ 16ULL ] ; t545 [ 439ULL
] = X [ 16ULL ] ; t545 [ 440ULL ] = X [ 12ULL ] ; t545 [ 441ULL ] = X [ 12ULL
] ; t545 [ 442ULL ] = X [ 129ULL ] * 1000.0 ; t545 [ 443ULL ] = X [ 129ULL ]
* 1000.0 ; t545 [ 444ULL ] = X [ 129ULL ] * 1000.0 ; t545 [ 445ULL ] = X [
12ULL ] ; t545 [ 446ULL ] = X [ 16ULL ] ; t545 [ 447ULL ] = X [ 163ULL ] *
1000.0 ; t545 [ 448ULL ] = X [ 163ULL ] * 0.28663972253274861 ; t545 [ 449ULL
] = X [ 16ULL ] ; t545 [ 450ULL ] = X [ 163ULL ] * 1000.0 ; t545 [ 451ULL ] =
X [ 16ULL ] ; t545 [ 452ULL ] = X [ 12ULL ] ; t545 [ 453ULL ] = ( ( ( X [
12ULL ] * - 0.89999999999999991 + X [ 17ULL ] * 0.89999999999999991 ) + - X [
129ULL ] ) + - X [ 163ULL ] ) * 1000.0 ; t545 [ 454ULL ] = X [ 12ULL ] ; t545
[ 455ULL ] = X [ 17ULL ] ; t545 [ 456ULL ] = X [ 13ULL ] ; t545 [ 457ULL ] =
X [ 164ULL ] * 1000.0 ; t545 [ 458ULL ] = X [ 164ULL ] * 0.99670886732010888
; t545 [ 459ULL ] = X [ 12ULL ] ; t545 [ 460ULL ] = X [ 17ULL ] ; t545 [
461ULL ] = Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co *
1000.0 ; t545 [ 462ULL ] =
Electrical_Cooling_System_Thermal_Circuit_Motor_Winding_Iron_Co *
1.1111111111111112 ; t545 [ 463ULL ] = X [ 17ULL ] ; t545 [ 464ULL ] = ( ( X
[ 12ULL ] * 0.89999999999999991 + X [ 17ULL ] * - 0.89999999999999991 ) + - X
[ 164ULL ] ) * 1000.0 ; t545 [ 465ULL ] = X [ 17ULL ] ; t545 [ 466ULL ] = X [
134ULL ] ; t545 [ 467ULL ] = X [ 135ULL ] * 0.1 ; t545 [ 468ULL ] = X [ 89ULL
] ; t545 [ 469ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 470ULL ] = X [ 89ULL ] ;
t545 [ 471ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 472ULL ] = X [ 89ULL ] ; t545 [
473ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 474ULL ] = X [ 89ULL ] ; t545 [ 475ULL
] = X [ 90ULL ] * 0.1 ; t545 [ 476ULL ] = U_idx_2 ; t545 [ 477ULL ] = X [
93ULL ] * 1000.0 ; t545 [ 478ULL ] = X [ 93ULL ] ; t545 [ 479ULL ] = U_idx_2
; t545 [ 480ULL ] = U_idx_2 ; t545 [ 481ULL ] = X [ 93ULL ] * 1000.0 ; t545 [
482ULL ] = X [ 89ULL ] ; t545 [ 483ULL ] = X [ 90ULL ] * 0.1 ; t545 [ 484ULL
] = Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 * 0.001 ;
t545 [ 485ULL ] = t784 ; t545 [ 486ULL ] = t785 ; t545 [ 487ULL ] =
Electrical_Cooling_System_sensor1_Thermodynamic_Properties_Sen0 * 0.001 ;
t545 [ 488ULL ] = t785 ; t545 [ 489ULL ] = X [ 98ULL ] ; t545 [ 490ULL ] = X
[ 99ULL ] * 0.1 ; t545 [ 491ULL ] = X [ 98ULL ] ; t545 [ 492ULL ] = X [ 99ULL
] * 0.1 ; t545 [ 493ULL ] = X [ 98ULL ] ; t545 [ 494ULL ] = X [ 99ULL ] * 0.1
; t545 [ 495ULL ] = X [ 98ULL ] ; t545 [ 496ULL ] = X [ 99ULL ] * 0.1 ; t545
[ 497ULL ] = U_idx_2 ; t545 [ 498ULL ] = X [ 102ULL ] * 1000.0 ; t545 [
499ULL ] = X [ 102ULL ] ; t545 [ 500ULL ] = U_idx_2 ; t545 [ 501ULL ] =
U_idx_2 ; t545 [ 502ULL ] = X [ 102ULL ] * 1000.0 ; t545 [ 503ULL ] = X [
98ULL ] ; t545 [ 504ULL ] = X [ 99ULL ] * 0.1 ; t545 [ 505ULL ] = X [ 99ULL ]
* 99999.999999999985 ; t545 [ 506ULL ] = X [ 98ULL ] ; t545 [ 507ULL ] = X [
98ULL ] ; t545 [ 508ULL ] = X [ 98ULL ] ; t545 [ 509ULL ] = X [ 99ULL ] * 0.1
; t545 [ 510ULL ] = t788 * 0.001 ; t545 [ 511ULL ] = t789 ; t545 [ 512ULL ] =
t790 ; t545 [ 513ULL ] = t790 ; t545 [ 514ULL ] = X [ 107ULL ] ; t545 [
515ULL ] = X [ 108ULL ] * 0.1 ; t545 [ 516ULL ] = X [ 107ULL ] ; t545 [
517ULL ] = X [ 108ULL ] * 0.1 ; t545 [ 518ULL ] = X [ 107ULL ] ; t545 [
519ULL ] = X [ 108ULL ] * 0.1 ; t545 [ 520ULL ] = X [ 107ULL ] ; t545 [
521ULL ] = X [ 108ULL ] * 0.1 ; t545 [ 522ULL ] = U_idx_2 ; t545 [ 523ULL ] =
X [ 111ULL ] * 1000.0 ; t545 [ 524ULL ] = X [ 111ULL ] ; t545 [ 525ULL ] =
U_idx_2 ; t545 [ 526ULL ] = U_idx_2 ; t545 [ 527ULL ] = X [ 111ULL ] * 1000.0
; t545 [ 528ULL ] = X [ 107ULL ] ; t545 [ 529ULL ] = X [ 108ULL ] * 0.1 ;
t545 [ 530ULL ] = X [ 108ULL ] * 99999.999999999985 ; t545 [ 531ULL ] = X [
107ULL ] ; t545 [ 532ULL ] = X [ 107ULL ] ; t545 [ 533ULL ] = X [ 108ULL ] *
0.1 ; t545 [ 534ULL ] = t793 * 0.001 ; t545 [ 535ULL ] = t794 ; t545 [ 536ULL
] = t795 ; t545 [ 537ULL ] = t795 ; t545 [ 538ULL ] = X [ 116ULL ] ; t545 [
539ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 540ULL ] = X [ 116ULL ] ; t545 [
541ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 542ULL ] = X [ 116ULL ] ; t545 [
543ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 544ULL ] = X [ 116ULL ] ; t545 [
545ULL ] = X [ 117ULL ] * 0.1 ; t545 [ 546ULL ] = U_idx_2 ; t545 [ 547ULL ] =
X [ 118ULL ] * - 1000.0 ; t545 [ 548ULL ] = - X [ 118ULL ] ; t545 [ 549ULL ]
= U_idx_2 ; t545 [ 550ULL ] = U_idx_2 ; t545 [ 551ULL ] = X [ 118ULL ] * -
1000.0 ; t545 [ 552ULL ] = X [ 116ULL ] ; t545 [ 553ULL ] = X [ 117ULL ] *
0.1 ; t545 [ 554ULL ] = X [ 117ULL ] * 99999.999999999985 ; t545 [ 555ULL ] =
X [ 116ULL ] ; t545 [ 556ULL ] = X [ 116ULL ] ; t545 [ 557ULL ] = X [ 117ULL
] * 0.1 ; t545 [ 558ULL ] = t796 * 0.001 ; t545 [ 559ULL ] = t797 ; t545 [
560ULL ] = t798 ; t545 [ 561ULL ] = t798 ; t545 [ 562ULL ] = 65.0 + ( X [
18ULL ] * - 0.1 + X [ 87ULL ] * 0.010000000000000002 ) ; t545 [ 563ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 564ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 565ULL ] = X [ 18ULL ] ; t545 [
566ULL ] = Fuel_Cell_Boost_Converter_C_power_dissipated ; t545 [ 567ULL ] = X
[ 165ULL ] ; t545 [ 568ULL ] = U_idx_13 ; t545 [ 569ULL ] = t799 ; t545 [
570ULL ] = X [ 167ULL ] ; t545 [ 571ULL ] = Fuel_Cell_Boost_Converter_L_p_v ;
t545 [ 572ULL ] = X [ 166ULL ] ; t545 [ 573ULL ] = X [ 19ULL ] ; t545 [
574ULL ] = X [ 166ULL ] * X [ 166ULL ] * 1.0000000000000002E-12 ; t545 [
575ULL ] = X [ 167ULL ] ; t545 [ 576ULL ] = - 65.0 + ( ( ( ( X [ 18ULL ] *
0.1 + X [ 87ULL ] * - 1.01 ) + X [ 166ULL ] * 1.0E-9 ) + - X [ 168ULL ] ) + X
[ 19ULL ] ) ; t545 [ 577ULL ] = X [ 19ULL ] ; t545 [ 578ULL ] = t799 ; t545 [
579ULL ] = t799 ; t545 [ 580ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t545 [
581ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [ 582ULL ] = X [ 167ULL
] * Fuel_Cell_Boost_Converter_vc + ( X [ 167ULL ] - X [ 165ULL ] ) * ( t799 -
Fuel_Cell_Boost_Converter_vc ) ; t545 [ 583ULL ] = X [ 18ULL ] ; t545 [
584ULL ] = Fuel_Cell_Current_Sensor1_I ; t545 [ 585ULL ] =
Fuel_Cell_Current_Sensor1_I ; t545 [ 586ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 587ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 588ULL ] =
Fuel_Cell_Current_Sensor1_I ; t545 [ 589ULL ] = X [ 169ULL ] ; t545 [ 590ULL
] = X [ 170ULL ] * 0.1 ; t545 [ 591ULL ] = X [ 171ULL ] ; t545 [ 592ULL ] = X
[ 172ULL ] ; t545 [ 593ULL ] = X [ 173ULL ] ; t545 [ 594ULL ] = -
184.19157727996955 + t838 * 1000.0 ; t545 [ 595ULL ] = ( X [ 173ULL ] *
0.00062831853071795862 + - 0.18419157727996954 ) * 1591.5494309189535 ; t545
[ 596ULL ] = X [ 174ULL ] ; t545 [ 597ULL ] = X [ 175ULL ] ; t545 [ 598ULL ]
= X [ 176ULL ] ; t545 [ 599ULL ] = X [ 177ULL ] ; t545 [ 600ULL ] = X [
178ULL ] ; t545 [ 601ULL ] = X [ 186ULL ] ; t545 [ 602ULL ] = X [ 185ULL ] ;
t545 [ 603ULL ] = X [ 174ULL ] ; t545 [ 604ULL ] = X [ 175ULL ] ; t545 [
605ULL ] = X [ 176ULL ] ; t545 [ 606ULL ] = X [ 178ULL ] ; t545 [ 607ULL ] =
X [ 179ULL ] ; t545 [ 608ULL ] = X [ 180ULL ] ; t545 [ 609ULL ] = X [ 181ULL
] ; t545 [ 610ULL ] = X [ 182ULL ] ; t545 [ 611ULL ] = X [ 183ULL ] ; t545 [
612ULL ] = X [ 184ULL ] ; t545 [ 613ULL ] = intrm_sf_mf_723 ; t545 [ 614ULL ]
= X [ 180ULL ] ; t545 [ 615ULL ] = X [ 181ULL ] ; t545 [ 616ULL ] = X [
182ULL ] ; t545 [ 617ULL ] = 1.01325 / ( t800 == 0.0 ? 1.0E-16 : t800 ) ;
t545 [ 618ULL ] = ( 1.0 - X [ 185ULL ] ) - X [ 186ULL ] ; t545 [ 619ULL ] = X
[ 187ULL ] ; t545 [ 620ULL ] = - 184.19157727996955 + t838 * 1000.0 ; t545 [
621ULL ] = U_idx_3 ; t545 [ 622ULL ] = U_idx_3 * 3.1415926535897929E-6 ; t545
[ 623ULL ] = X [ 169ULL ] ; t545 [ 624ULL ] = X [ 170ULL ] * 0.1 ; t545 [
625ULL ] = X [ 171ULL ] ; t545 [ 626ULL ] = X [ 172ULL ] ; t545 [ 627ULL ] =
X [ 188ULL ] ; t545 [ 628ULL ] = X [ 189ULL ] * 0.1 ; t545 [ 629ULL ] = X [
190ULL ] ; t545 [ 630ULL ] = X [ 191ULL ] ; t545 [ 631ULL ] = X [ 23ULL ] ;
t545 [ 632ULL ] = X [ 196ULL ] ; t545 [ 633ULL ] = X [ 22ULL ] ; t545 [
634ULL ] = X [ 193ULL ] ; t545 [ 635ULL ] = X [ 20ULL ] + - 273.15 ; t545 [
636ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ;
t545 [ 637ULL ] = X [ 194ULL ] * 0.1 ; t545 [ 638ULL ] = X [ 21ULL ] * 0.1 ;
t545 [ 639ULL ] = X [ 195ULL ] ; t545 [ 640ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_rh ; t545 [
641ULL ] = X [ 197ULL ] ; t545 [ 642ULL ] = - X [ 180ULL ] ; t545 [ 643ULL ]
= X [ 198ULL ] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [
t691 + 644ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_F [ t691 ] ; }
t545 [ 652ULL ] = X [ 173ULL ] ; t545 [ 653ULL ] = X [ 199ULL ] ; t545 [
654ULL ] = t871 ; t545 [ 655ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ; t545 [
656ULL ] = - X [ 178ULL ] ; t545 [ 657ULL ] = 0.18419157727996954 + - t838 ;
t545 [ 658ULL ] = X [ 200ULL ] ; t545 [ 659ULL ] = X [ 20ULL ] ; t545 [
660ULL ] = X [ 23ULL ] ; t545 [ 661ULL ] = X [ 22ULL ] ; t545 [ 662ULL ] =
t707 ; t545 [ 663ULL ] = X [ 169ULL ] ; t545 [ 664ULL ] = X [ 170ULL ] * 0.1
; t545 [ 665ULL ] = X [ 171ULL ] ; t545 [ 666ULL ] = X [ 172ULL ] ; t545 [
667ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_m1 ;
t545 [ 668ULL ] = X [ 203ULL ] ; t545 [ 669ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_c0 ; t545 [
670ULL ] = t803 ; t545 [ 671ULL ] = t804 ; t545 [ 672ULL ] = X [ 208ULL ] ;
t545 [ 673ULL ] = X [ 209ULL ] ; t545 [ 674ULL ] = X [ 188ULL ] ; t545 [
675ULL ] = X [ 189ULL ] * 0.1 ; t545 [ 676ULL ] = X [ 190ULL ] ; t545 [
677ULL ] = X [ 191ULL ] ; t545 [ 678ULL ] = - X [ 178ULL ] ; t545 [ 679ULL ]
= X [ 210ULL ] ; t545 [ 680ULL ] = - X [ 180ULL ] ; t545 [ 681ULL ] = - X [
181ULL ] ; t545 [ 682ULL ] = - X [ 182ULL ] ; t545 [ 683ULL ] = X [ 211ULL ]
; t545 [ 684ULL ] = X [ 212ULL ] ; t545 [ 685ULL ] = t807 ; t545 [ 686ULL ] =
t803 ; t545 [ 687ULL ] = - X [ 181ULL ] ; t545 [ 688ULL ] = t804 ; t545 [
689ULL ] = - X [ 182ULL ] ; t545 [ 690ULL ] = ( 1.0 - X [ 22ULL ] ) - X [
23ULL ] ; t545 [ 691ULL ] = X [ 188ULL ] ; t545 [ 692ULL ] = X [ 189ULL ] *
0.1 ; t545 [ 693ULL ] = X [ 190ULL ] ; t545 [ 694ULL ] = X [ 191ULL ] ; t545
[ 695ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Purge_Va0 *
0.0001 ; t545 [ 696ULL ] = X [ 174ULL ] ; t545 [ 697ULL ] = X [ 175ULL ] ;
t545 [ 698ULL ] = X [ 176ULL ] ; t545 [ 699ULL ] = X [ 180ULL ] ; t545 [
700ULL ] = X [ 188ULL ] ; t545 [ 701ULL ] = X [ 189ULL ] * 0.1 ; t545 [
702ULL ] = X [ 190ULL ] ; t545 [ 703ULL ] = X [ 191ULL ] ; t545 [ 704ULL ] =
X [ 178ULL ] ; t545 [ 705ULL ] = X [ 219ULL ] ; t545 [ 706ULL ] = X [ 180ULL
] ; t545 [ 707ULL ] = X [ 181ULL ] ; t545 [ 708ULL ] = X [ 182ULL ] ; t545 [
709ULL ] = X [ 216ULL ] ; t545 [ 710ULL ] = X [ 215ULL ] ; t545 [ 711ULL ] =
X [ 213ULL ] ; t545 [ 712ULL ] = X [ 214ULL ] * 0.1 ; t545 [ 713ULL ] = X [
217ULL ] ; t545 [ 714ULL ] = X [ 218ULL ] ; t545 [ 715ULL ] = t801 ; t545 [
716ULL ] = X [ 178ULL ] ; t545 [ 717ULL ] = - X [ 178ULL ] ; t545 [ 718ULL ]
= X [ 174ULL ] ; t545 [ 719ULL ] = X [ 175ULL ] ; t545 [ 720ULL ] = X [
176ULL ] ; t545 [ 721ULL ] = - X [ 178ULL ] ; t545 [ 722ULL ] = X [ 219ULL ]
; t545 [ 723ULL ] = - X [ 180ULL ] ; t545 [ 724ULL ] = - X [ 181ULL ] ; t545
[ 725ULL ] = - X [ 182ULL ] ; t545 [ 726ULL ] = X [ 216ULL ] ; t545 [ 727ULL
] = X [ 215ULL ] ; t545 [ 728ULL ] = - X [ 180ULL ] ; t545 [ 729ULL ] = X [
181ULL ] ; t545 [ 730ULL ] = - X [ 181ULL ] ; t545 [ 731ULL ] = X [ 182ULL ]
; t545 [ 732ULL ] = - X [ 182ULL ] ; t545 [ 733ULL ] = U_idx_3 ; t545 [
734ULL ] = X [ 220ULL ] ; t545 [ 735ULL ] = X [ 221ULL ] * 0.1 ; t545 [
736ULL ] = X [ 222ULL ] ; t545 [ 737ULL ] = X [ 223ULL ] ; for ( t691 = 0ULL
; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 738ULL ] = t575 [ t691 ] ; } for (
t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 746ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t691 ] ; }
t545 [ 754ULL ] = X [ 31ULL ] ; t545 [ 755ULL ] = X [ 234ULL ] ; t545 [
756ULL ] = X [ 235ULL ] * 0.1 ; t545 [ 757ULL ] = X [ 236ULL ] ; t545 [
758ULL ] = X [ 237ULL ] ; t545 [ 759ULL ] = X [ 220ULL ] ; t545 [ 760ULL ] =
X [ 221ULL ] * 0.1 ; t545 [ 761ULL ] = X [ 222ULL ] ; t545 [ 762ULL ] = X [
223ULL ] ; t545 [ 763ULL ] = X [ 25ULL ] ; t545 [ 764ULL ] = X [ 228ULL ] ;
t545 [ 765ULL ] = X [ 26ULL ] ; t545 [ 766ULL ] = X [ 239ULL ] ; t545 [
767ULL ] = X [ 24ULL ] + - 273.15 ; t545 [ 768ULL ] = X [ 238ULL ] ; t545 [
769ULL ] = X [ 240ULL ] * 0.1 ; t545 [ 770ULL ] = X [ 30ULL ] * 0.1 ; t545 [
771ULL ] = X [ 226ULL ] ; t545 [ 772ULL ] = t812 ; t545 [ 773ULL ] = X [
242ULL ] ; t545 [ 774ULL ] = X [ 241ULL ] ; t545 [ 775ULL ] = X [ 243ULL ] *
0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 776ULL ] =
t575 [ t691 ] ; } t545 [ 784ULL ] = X [ 31ULL ] ; t545 [ 785ULL ] = X [
227ULL ] ; t545 [ 786ULL ] = intrm_sf_mf_297 ; t545 [ 787ULL ] = X [ 244ULL ]
; t545 [ 788ULL ] = X [ 245ULL ] ; t545 [ 789ULL ] = X [ 246ULL ] ; t545 [
790ULL ] = X [ 225ULL ] ; t545 [ 791ULL ] = X [ 24ULL ] ; t545 [ 792ULL ] = X
[ 25ULL ] ; t545 [ 793ULL ] = X [ 26ULL ] ; t545 [ 794ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi16 ; t545 [
795ULL ] = X [ 234ULL ] ; t545 [ 796ULL ] = X [ 235ULL ] * 0.1 ; t545 [
797ULL ] = X [ 236ULL ] ; t545 [ 798ULL ] = X [ 237ULL ] ; t545 [ 799ULL ] =
X [ 244ULL ] ; t545 [ 800ULL ] = X [ 247ULL ] ; t545 [ 801ULL ] = X [ 238ULL
] ; t545 [ 802ULL ] = X [ 248ULL ] ; t545 [ 803ULL ] = X [ 249ULL ] ; t545 [
804ULL ] = X [ 250ULL ] ; t545 [ 805ULL ] = X [ 251ULL ] ; t545 [ 806ULL ] =
X [ 220ULL ] ; t545 [ 807ULL ] = X [ 221ULL ] * 0.1 ; t545 [ 808ULL ] = X [
222ULL ] ; t545 [ 809ULL ] = X [ 223ULL ] ; t545 [ 810ULL ] = X [ 245ULL ] ;
t545 [ 811ULL ] = X [ 252ULL ] ; t545 [ 812ULL ] = X [ 241ULL ] ; t545 [
813ULL ] = X [ 253ULL ] ; t545 [ 814ULL ] = X [ 254ULL ] ; t545 [ 815ULL ] =
X [ 255ULL ] ; t545 [ 816ULL ] = X [ 256ULL ] ; t545 [ 817ULL ] = t819 ; t545
[ 818ULL ] = X [ 248ULL ] ; t545 [ 819ULL ] = X [ 253ULL ] ; t545 [ 820ULL ]
= X [ 249ULL ] ; t545 [ 821ULL ] = X [ 254ULL ] ; t545 [ 822ULL ] = ( 1.0 - X
[ 26ULL ] ) - X [ 25ULL ] ; t545 [ 823ULL ] = X [ 220ULL ] ; t545 [ 824ULL ]
= X [ 221ULL ] * 0.1 ; t545 [ 825ULL ] = X [ 222ULL ] ; t545 [ 826ULL ] = X [
223ULL ] ; t545 [ 827ULL ] = X [ 169ULL ] ; t545 [ 828ULL ] = X [ 170ULL ] *
0.1 ; t545 [ 829ULL ] = X [ 171ULL ] ; t545 [ 830ULL ] = X [ 172ULL ] ; t545
[ 831ULL ] = X [ 28ULL ] ; t545 [ 832ULL ] = X [ 233ULL ] ; t545 [ 833ULL ] =
X [ 29ULL ] ; t545 [ 834ULL ] = X [ 257ULL ] ; t545 [ 835ULL ] = X [ 27ULL ]
+ - 273.15 ; t545 [ 836ULL ] = - X [ 241ULL ] ; t545 [ 837ULL ] = X [ 258ULL
] * 0.1 ; t545 [ 838ULL ] = X [ 32ULL ] * 0.1 ; t545 [ 839ULL ] = X [ 231ULL
] ; t545 [ 840ULL ] = t822 ; t545 [ 841ULL ] = X [ 259ULL ] ; t545 [ 842ULL ]
= X [ 192ULL ] ; t545 [ 843ULL ] = X [ 260ULL ] * 0.1 ; for ( t691 = 0ULL ;
t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 844ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t691 ] ; }
t545 [ 852ULL ] = X [ 31ULL ] ; t545 [ 853ULL ] = X [ 232ULL ] ; t545 [
854ULL ] = intrm_sf_mf_433 ; t545 [ 855ULL ] = - X [ 245ULL ] ; t545 [ 856ULL
] = X [ 201ULL ] ; t545 [ 857ULL ] = - X [ 261ULL ] + - X [ 262ULL ] ; t545 [
858ULL ] = X [ 263ULL ] ; t545 [ 859ULL ] = X [ 230ULL ] ; t545 [ 860ULL ] =
X [ 27ULL ] ; t545 [ 861ULL ] = X [ 28ULL ] ; t545 [ 862ULL ] = X [ 29ULL ] ;
t545 [ 863ULL ] = t826 ; t545 [ 864ULL ] = X [ 220ULL ] ; t545 [ 865ULL ] = X
[ 221ULL ] * 0.1 ; t545 [ 866ULL ] = X [ 222ULL ] ; t545 [ 867ULL ] = X [
223ULL ] ; t545 [ 868ULL ] = - X [ 245ULL ] ; t545 [ 869ULL ] = X [ 264ULL ]
; t545 [ 870ULL ] = - X [ 241ULL ] ; t545 [ 871ULL ] = - X [ 253ULL ] ; t545
[ 872ULL ] = - X [ 254ULL ] ; t545 [ 873ULL ] = X [ 265ULL ] ; t545 [ 874ULL
] = X [ 266ULL ] ; t545 [ 875ULL ] = X [ 169ULL ] ; t545 [ 876ULL ] = X [
170ULL ] * 0.1 ; t545 [ 877ULL ] = X [ 171ULL ] ; t545 [ 878ULL ] = X [
172ULL ] ; t545 [ 879ULL ] = X [ 201ULL ] ; t545 [ 880ULL ] = X [ 267ULL ] ;
t545 [ 881ULL ] = X [ 192ULL ] ; t545 [ 882ULL ] = X [ 204ULL ] ; t545 [
883ULL ] = X [ 206ULL ] ; t545 [ 884ULL ] = X [ 268ULL ] ; t545 [ 885ULL ] =
X [ 269ULL ] ; t545 [ 886ULL ] = t830 ; t545 [ 887ULL ] = - X [ 253ULL ] ;
t545 [ 888ULL ] = X [ 204ULL ] ; t545 [ 889ULL ] = X [ 270ULL ] ; t545 [
890ULL ] = X [ 271ULL ] ; t545 [ 891ULL ] = - X [ 254ULL ] ; t545 [ 892ULL ]
= X [ 206ULL ] ; t545 [ 893ULL ] = ( 1.0 - X [ 29ULL ] ) - X [ 28ULL ] ; t545
[ 894ULL ] = X [ 27ULL ] ; t545 [ 895ULL ] = X [ 28ULL ] ; t545 [ 896ULL ] =
X [ 29ULL ] ; t545 [ 897ULL ] = X [ 234ULL ] ; t545 [ 898ULL ] = X [ 235ULL ]
* 0.1 ; t545 [ 899ULL ] = X [ 236ULL ] ; t545 [ 900ULL ] = X [ 237ULL ] ;
t545 [ 901ULL ] = X [ 169ULL ] ; t545 [ 902ULL ] = X [ 170ULL ] * 0.1 ; t545
[ 903ULL ] = X [ 171ULL ] ; t545 [ 904ULL ] = X [ 172ULL ] ; t545 [ 905ULL ]
= X [ 272ULL ] ; t545 [ 906ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 907ULL ] = X [
273ULL ] ; t545 [ 908ULL ] = X [ 274ULL ] ; t545 [ 909ULL ] = X [ 234ULL ] ;
t545 [ 910ULL ] = X [ 235ULL ] * 0.1 ; t545 [ 911ULL ] = X [ 236ULL ] ; t545
[ 912ULL ] = X [ 237ULL ] ; t545 [ 913ULL ] = U_idx_5 ; t545 [ 914ULL ] = X [
275ULL ] ; t545 [ 915ULL ] = X [ 33ULL ] ; t545 [ 916ULL ] = X [ 34ULL ] ;
t545 [ 917ULL ] = X [ 35ULL ] ; t545 [ 918ULL ] = U_idx_6 ; t545 [ 919ULL ] =
- U_idx_5 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 +
920ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [
t691 ] ; } t545 [ 928ULL ] = X [ 278ULL ] ; t545 [ 929ULL ] = X [ 280ULL ] *
1.0E-5 * 99999.999999999985 ; t545 [ 930ULL ] = X [ 33ULL ] ; t545 [ 931ULL ]
= X [ 277ULL ] ; t545 [ 932ULL ] = X [ 277ULL ] ; t545 [ 933ULL ] = X [
281ULL ] ; t545 [ 934ULL ] = X [ 281ULL ] ; t545 [ 935ULL ] = X [ 272ULL ] ;
t545 [ 936ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 937ULL ] = X [ 273ULL ] ; t545 [
938ULL ] = X [ 274ULL ] ; t545 [ 939ULL ] = X [ 234ULL ] ; t545 [ 940ULL ] =
X [ 235ULL ] * 0.1 ; t545 [ 941ULL ] = X [ 236ULL ] ; t545 [ 942ULL ] = X [
237ULL ] ; t545 [ 943ULL ] = X [ 34ULL ] ; t545 [ 944ULL ] = X [ 278ULL ] ;
t545 [ 945ULL ] = X [ 35ULL ] ; t545 [ 946ULL ] = X [ 283ULL ] ; t545 [
947ULL ] = X [ 33ULL ] + - 273.15 ; t545 [ 948ULL ] = X [ 282ULL ] ; t545 [
949ULL ] = X [ 284ULL ] * 0.1 ; t545 [ 950ULL ] = X [ 36ULL ] * 0.1 ; t545 [
951ULL ] = X [ 279ULL ] ; t545 [ 952ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_39 ; t545 [
953ULL ] = X [ 285ULL ] ; t545 [ 954ULL ] = - X [ 238ULL ] ; t545 [ 955ULL ]
= X [ 286ULL ] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [
t691 + 956ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur0 [ t691 ] ; }
t545 [ 964ULL ] = X [ 281ULL ] ; t545 [ 965ULL ] = X [ 276ULL ] ; t545 [
966ULL ] = intrm_sf_mf_574 ; t545 [ 967ULL ] = X [ 287ULL ] ; t545 [ 968ULL ]
= - X [ 244ULL ] ; t545 [ 969ULL ] = - X [ 275ULL ] ; t545 [ 970ULL ] = X [
277ULL ] ; t545 [ 971ULL ] = X [ 33ULL ] ; t545 [ 972ULL ] = X [ 34ULL ] ;
t545 [ 973ULL ] = X [ 35ULL ] ; t545 [ 974ULL ] = t837 ; t545 [ 975ULL ] = X
[ 272ULL ] ; t545 [ 976ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 977ULL ] = X [
273ULL ] ; t545 [ 978ULL ] = X [ 274ULL ] ; t545 [ 979ULL ] = X [ 287ULL ] ;
t545 [ 980ULL ] = X [ 288ULL ] ; t545 [ 981ULL ] = X [ 282ULL ] ; t545 [
982ULL ] = X [ 289ULL ] ; t545 [ 983ULL ] = X [ 290ULL ] ; t545 [ 984ULL ] =
X [ 291ULL ] ; t545 [ 985ULL ] = X [ 292ULL ] ; t545 [ 986ULL ] = X [ 234ULL
] ; t545 [ 987ULL ] = X [ 235ULL ] * 0.1 ; t545 [ 988ULL ] = X [ 236ULL ] ;
t545 [ 989ULL ] = X [ 237ULL ] ; t545 [ 990ULL ] = - X [ 244ULL ] ; t545 [
991ULL ] = X [ 293ULL ] ; t545 [ 992ULL ] = - X [ 238ULL ] ; t545 [ 993ULL ]
= - X [ 248ULL ] ; t545 [ 994ULL ] = - X [ 249ULL ] ; t545 [ 995ULL ] = X [
294ULL ] ; t545 [ 996ULL ] = X [ 295ULL ] ; t545 [ 997ULL ] = t840 ; t545 [
998ULL ] = X [ 289ULL ] ; t545 [ 999ULL ] = - X [ 248ULL ] ; t545 [ 1000ULL ]
= U_idx_5 ; t545 [ 1001ULL ] = X [ 290ULL ] ; t545 [ 1002ULL ] = - X [ 249ULL
] ; t545 [ 1003ULL ] = ( 1.0 - X [ 35ULL ] ) - X [ 34ULL ] ; t545 [ 1004ULL ]
= U_idx_6 ; t545 [ 1005ULL ] = U_idx_5 ; t545 [ 1006ULL ] = X [ 296ULL ] ;
t545 [ 1007ULL ] = X [ 297ULL ] * 0.1 ; t545 [ 1008ULL ] = X [ 298ULL ] ;
t545 [ 1009ULL ] = X [ 299ULL ] ; t545 [ 1010ULL ] = X [ 300ULL ] ; t545 [
1011ULL ] = - 920.95788639984789 + t848 * 1000.0 ; t545 [ 1012ULL ] = ( X [
300ULL ] * 0.0031415926535897937 + - 0.92095788639984788 ) *
318.30988618379064 ; t545 [ 1013ULL ] = X [ 301ULL ] ; t545 [ 1014ULL ] = X [
302ULL ] ; t545 [ 1015ULL ] = X [ 303ULL ] ; t545 [ 1016ULL ] = X [ 304ULL ]
; t545 [ 1017ULL ] = X [ 305ULL ] ; t545 [ 1018ULL ] = X [ 313ULL ] ; t545 [
1019ULL ] = X [ 312ULL ] ; t545 [ 1020ULL ] = X [ 301ULL ] ; t545 [ 1021ULL ]
= X [ 302ULL ] ; t545 [ 1022ULL ] = X [ 303ULL ] ; t545 [ 1023ULL ] = X [
305ULL ] ; t545 [ 1024ULL ] = X [ 306ULL ] ; t545 [ 1025ULL ] = X [ 307ULL ]
; t545 [ 1026ULL ] = X [ 308ULL ] ; t545 [ 1027ULL ] = X [ 309ULL ] ; t545 [
1028ULL ] = X [ 310ULL ] ; t545 [ 1029ULL ] = X [ 311ULL ] ; t545 [ 1030ULL ]
= intrm_sf_mf_689 ; t545 [ 1031ULL ] = X [ 307ULL ] ; t545 [ 1032ULL ] = X [
308ULL ] ; t545 [ 1033ULL ] = X [ 309ULL ] ; t545 [ 1034ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ3 ; t545 [
1035ULL ] = ( 1.0 - X [ 312ULL ] ) - X [ 313ULL ] ; t545 [ 1036ULL ] = X [
314ULL ] ; t545 [ 1037ULL ] = - 920.95788639984789 + t848 * 1000.0 ; t545 [
1038ULL ] = X [ 296ULL ] ; t545 [ 1039ULL ] = X [ 297ULL ] * 0.1 ; t545 [
1040ULL ] = X [ 298ULL ] ; t545 [ 1041ULL ] = X [ 299ULL ] ; t545 [ 1042ULL ]
= X [ 315ULL ] ; t545 [ 1043ULL ] = t842 * 0.1 ; t545 [ 1044ULL ] = X [
317ULL ] ; t545 [ 1045ULL ] = X [ 318ULL ] ; t545 [ 1046ULL ] = X [ 41ULL ] ;
t545 [ 1047ULL ] = X [ 323ULL ] ; t545 [ 1048ULL ] = X [ 40ULL ] ; t545 [
1049ULL ] = X [ 320ULL ] ; t545 [ 1050ULL ] = X [ 38ULL ] + - 273.15 ; t545 [
1051ULL ] = X [ 319ULL ] ; t545 [ 1052ULL ] = X [ 321ULL ] * 0.1 ; t545 [
1053ULL ] = X [ 39ULL ] * 0.1 ; t545 [ 1054ULL ] = X [ 322ULL ] ; t545 [
1055ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M41 ;
t545 [ 1056ULL ] = X [ 324ULL ] ; t545 [ 1057ULL ] = - X [ 307ULL ] ; t545 [
1058ULL ] = X [ 325ULL ] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ )
{ t545 [ t691 + 1059ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M5 [ t691 ] ; }
t545 [ 1067ULL ] = X [ 300ULL ] ; t545 [ 1068ULL ] = X [ 326ULL ] ; t545 [
1069ULL ] = intrm_sf_mf_724 ; t545 [ 1070ULL ] = X [ 328ULL ] ; t545 [
1071ULL ] = - X [ 305ULL ] ; t545 [ 1072ULL ] = 0.92095788639984788 + - t848
; t545 [ 1073ULL ] = X [ 327ULL ] ; t545 [ 1074ULL ] = X [ 38ULL ] ; t545 [
1075ULL ] = X [ 41ULL ] ; t545 [ 1076ULL ] = X [ 40ULL ] ; t545 [ 1077ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M16 ; t545 [
1078ULL ] = X [ 296ULL ] ; t545 [ 1079ULL ] = X [ 297ULL ] * 0.1 ; t545 [
1080ULL ] = X [ 298ULL ] ; t545 [ 1081ULL ] = X [ 299ULL ] ; t545 [ 1082ULL ]
= X [ 328ULL ] ; t545 [ 1083ULL ] = X [ 329ULL ] ; t545 [ 1084ULL ] = X [
319ULL ] ; t545 [ 1085ULL ] = X [ 330ULL ] ; t545 [ 1086ULL ] = X [ 331ULL ]
; t545 [ 1087ULL ] = X [ 332ULL ] ; t545 [ 1088ULL ] = X [ 333ULL ] ; t545 [
1089ULL ] = X [ 315ULL ] ; t545 [ 1090ULL ] = t842 * 0.1 ; t545 [ 1091ULL ] =
X [ 317ULL ] ; t545 [ 1092ULL ] = X [ 318ULL ] ; t545 [ 1093ULL ] = - X [
305ULL ] ; t545 [ 1094ULL ] = X [ 334ULL ] ; t545 [ 1095ULL ] = - X [ 307ULL
] ; t545 [ 1096ULL ] = - X [ 308ULL ] ; t545 [ 1097ULL ] = - X [ 309ULL ] ;
t545 [ 1098ULL ] = X [ 335ULL ] ; t545 [ 1099ULL ] = X [ 336ULL ] ; t545 [
1100ULL ] = t852 ; t545 [ 1101ULL ] = X [ 330ULL ] ; t545 [ 1102ULL ] = - X [
308ULL ] ; t545 [ 1103ULL ] = X [ 331ULL ] ; t545 [ 1104ULL ] = - X [ 309ULL
] ; t545 [ 1105ULL ] = ( 1.0 - X [ 40ULL ] ) - X [ 41ULL ] ; t545 [ 1106ULL ]
= X [ 315ULL ] ; t545 [ 1107ULL ] = t842 * 0.1 ; t545 [ 1108ULL ] = X [
317ULL ] ; t545 [ 1109ULL ] = X [ 318ULL ] ; t545 [ 1110ULL ] = X [ 301ULL ]
; t545 [ 1111ULL ] = X [ 302ULL ] ; t545 [ 1112ULL ] = X [ 303ULL ] ; t545 [
1113ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 1.0E+6 ; t545 [ 1114ULL ] = X [
316ULL ] ; t545 [ 1115ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) *
7812.5001220703134 ; t545 [ 1116ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) * 1.0E+6
; t545 [ 1117ULL ] = X [ 316ULL ] ; t545 [ 1118ULL ] = X [ 316ULL ] *
0.0019634954084936209 ; t545 [ 1119ULL ] = t842 * 99999.999999999985 ; t545 [
1120ULL ] = t845 * 0.1 ; t545 [ 1121ULL ] = ( X [ 316ULL ] + - 1.0E-8 ) *
7812.5001220703134 ; t545 [ 1122ULL ] = X [ 315ULL ] ; t545 [ 1123ULL ] =
t842 * 0.1 ; t545 [ 1124ULL ] = X [ 317ULL ] ; t545 [ 1125ULL ] = X [ 318ULL
] ; t545 [ 1126ULL ] = t842 * 99999.999999999985 ; t545 [ 1127ULL ] = X [
315ULL ] ; t545 [ 1128ULL ] = X [ 315ULL ] ; t545 [ 1129ULL ] = t842 * 0.1 ;
t545 [ 1130ULL ] = X [ 317ULL ] ; t545 [ 1131ULL ] = X [ 318ULL ] ; t545 [
1132ULL ] = X [ 316ULL ] * 0.0019634954084936209 ; t545 [ 1133ULL ] = X [
301ULL ] ; t545 [ 1134ULL ] = X [ 302ULL ] ; t545 [ 1135ULL ] = X [ 303ULL ]
; t545 [ 1136ULL ] = X [ 307ULL ] ; t545 [ 1137ULL ] = X [ 315ULL ] ; t545 [
1138ULL ] = t842 * 0.1 ; t545 [ 1139ULL ] = X [ 317ULL ] ; t545 [ 1140ULL ] =
X [ 318ULL ] ; t545 [ 1141ULL ] = X [ 305ULL ] ; t545 [ 1142ULL ] = X [
343ULL ] ; t545 [ 1143ULL ] = X [ 307ULL ] ; t545 [ 1144ULL ] = X [ 308ULL ]
; t545 [ 1145ULL ] = X [ 309ULL ] ; t545 [ 1146ULL ] = X [ 340ULL ] ; t545 [
1147ULL ] = X [ 339ULL ] ; t545 [ 1148ULL ] = X [ 337ULL ] ; t545 [ 1149ULL ]
= X [ 338ULL ] * 0.1 ; t545 [ 1150ULL ] = X [ 341ULL ] ; t545 [ 1151ULL ] = X
[ 342ULL ] ; t545 [ 1152ULL ] = t851 ; t545 [ 1153ULL ] = X [ 305ULL ] ; t545
[ 1154ULL ] = - X [ 305ULL ] ; t545 [ 1155ULL ] = X [ 301ULL ] ; t545 [
1156ULL ] = X [ 302ULL ] ; t545 [ 1157ULL ] = X [ 303ULL ] ; t545 [ 1158ULL ]
= - X [ 305ULL ] ; t545 [ 1159ULL ] = X [ 343ULL ] ; t545 [ 1160ULL ] = - X [
307ULL ] ; t545 [ 1161ULL ] = - X [ 308ULL ] ; t545 [ 1162ULL ] = - X [
309ULL ] ; t545 [ 1163ULL ] = X [ 340ULL ] ; t545 [ 1164ULL ] = X [ 339ULL ]
; t545 [ 1165ULL ] = - X [ 307ULL ] ; t545 [ 1166ULL ] = X [ 308ULL ] ; t545
[ 1167ULL ] = - X [ 308ULL ] ; t545 [ 1168ULL ] = X [ 309ULL ] ; t545 [
1169ULL ] = - X [ 309ULL ] ; t545 [ 1170ULL ] = t845 * 0.1 ; t545 [ 1171ULL ]
= U_idx_7 ; t545 [ 1172ULL ] = X [ 344ULL ] ; t545 [ 1173ULL ] = X [ 345ULL ]
* 0.1 ; t545 [ 1174ULL ] = X [ 346ULL ] ; t545 [ 1175ULL ] = X [ 347ULL ] ;
for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1176ULL ] = t592
[ t691 ] ; } for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 +
1184ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
t691 ] ; } t545 [ 1192ULL ] = X [ 31ULL ] ; t545 [ 1193ULL ] = X [ 358ULL ] ;
t545 [ 1194ULL ] = X [ 359ULL ] * 0.1 ; t545 [ 1195ULL ] = X [ 360ULL ] ;
t545 [ 1196ULL ] = X [ 361ULL ] ; t545 [ 1197ULL ] = X [ 344ULL ] ; t545 [
1198ULL ] = X [ 345ULL ] * 0.1 ; t545 [ 1199ULL ] = X [ 346ULL ] ; t545 [
1200ULL ] = X [ 347ULL ] ; t545 [ 1201ULL ] = X [ 43ULL ] ; t545 [ 1202ULL ]
= X [ 352ULL ] ; t545 [ 1203ULL ] = X [ 44ULL ] ; t545 [ 1204ULL ] = X [
363ULL ] ; t545 [ 1205ULL ] = X [ 42ULL ] + - 273.15 ; t545 [ 1206ULL ] = X [
362ULL ] ; t545 [ 1207ULL ] = X [ 364ULL ] * 0.1 ; t545 [ 1208ULL ] = X [
48ULL ] * 0.1 ; t545 [ 1209ULL ] = X [ 350ULL ] ; t545 [ 1210ULL ] = t740 ;
t545 [ 1211ULL ] = X [ 366ULL ] ; t545 [ 1212ULL ] = X [ 365ULL ] ; t545 [
1213ULL ] = X [ 367ULL ] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ )
{ t545 [ t691 + 1214ULL ] = t592 [ t691 ] ; } t545 [ 1222ULL ] = X [ 31ULL ]
; t545 [ 1223ULL ] = X [ 351ULL ] ; t545 [ 1224ULL ] = intrm_sf_mf_898 ; t545
[ 1225ULL ] = X [ 368ULL ] ; t545 [ 1226ULL ] = X [ 369ULL ] ; t545 [ 1227ULL
] = X [ 370ULL ] ; t545 [ 1228ULL ] = X [ 349ULL ] ; t545 [ 1229ULL ] = X [
42ULL ] ; t545 [ 1230ULL ] = X [ 43ULL ] ; t545 [ 1231ULL ] = X [ 44ULL ] ;
t545 [ 1232ULL ] = t743 ; t545 [ 1233ULL ] = X [ 358ULL ] ; t545 [ 1234ULL ]
= X [ 359ULL ] * 0.1 ; t545 [ 1235ULL ] = X [ 360ULL ] ; t545 [ 1236ULL ] = X
[ 361ULL ] ; t545 [ 1237ULL ] = X [ 368ULL ] ; t545 [ 1238ULL ] = X [ 371ULL
] ; t545 [ 1239ULL ] = X [ 362ULL ] ; t545 [ 1240ULL ] = X [ 372ULL ] ; t545
[ 1241ULL ] = X [ 373ULL ] ; t545 [ 1242ULL ] = X [ 374ULL ] ; t545 [ 1243ULL
] = X [ 375ULL ] ; t545 [ 1244ULL ] = X [ 344ULL ] ; t545 [ 1245ULL ] = X [
345ULL ] * 0.1 ; t545 [ 1246ULL ] = X [ 346ULL ] ; t545 [ 1247ULL ] = X [
347ULL ] ; t545 [ 1248ULL ] = X [ 369ULL ] ; t545 [ 1249ULL ] = X [ 376ULL ]
; t545 [ 1250ULL ] = X [ 365ULL ] ; t545 [ 1251ULL ] = X [ 377ULL ] ; t545 [
1252ULL ] = X [ 378ULL ] ; t545 [ 1253ULL ] = X [ 379ULL ] ; t545 [ 1254ULL ]
= X [ 380ULL ] ; t545 [ 1255ULL ] = t866 ; t545 [ 1256ULL ] = X [ 372ULL ] ;
t545 [ 1257ULL ] = X [ 377ULL ] ; t545 [ 1258ULL ] = X [ 373ULL ] ; t545 [
1259ULL ] = X [ 378ULL ] ; t545 [ 1260ULL ] = ( 1.0 - X [ 44ULL ] ) - X [
43ULL ] ; t545 [ 1261ULL ] = X [ 344ULL ] ; t545 [ 1262ULL ] = X [ 345ULL ] *
0.1 ; t545 [ 1263ULL ] = X [ 346ULL ] ; t545 [ 1264ULL ] = X [ 347ULL ] ;
t545 [ 1265ULL ] = X [ 296ULL ] ; t545 [ 1266ULL ] = X [ 297ULL ] * 0.1 ;
t545 [ 1267ULL ] = X [ 298ULL ] ; t545 [ 1268ULL ] = X [ 299ULL ] ; t545 [
1269ULL ] = X [ 46ULL ] ; t545 [ 1270ULL ] = X [ 357ULL ] ; t545 [ 1271ULL ]
= X [ 47ULL ] ; t545 [ 1272ULL ] = X [ 381ULL ] ; t545 [ 1273ULL ] = X [
45ULL ] + - 273.15 ; t545 [ 1274ULL ] = - X [ 365ULL ] ; t545 [ 1275ULL ] = X
[ 382ULL ] * 0.1 ; t545 [ 1276ULL ] = X [ 49ULL ] * 0.1 ; t545 [ 1277ULL ] =
X [ 355ULL ] ; t545 [ 1278ULL ] = t869 ; t545 [ 1279ULL ] = X [ 383ULL ] ;
t545 [ 1280ULL ] = - X [ 319ULL ] ; t545 [ 1281ULL ] = X [ 384ULL ] * 0.1 ;
for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1282ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [ t691 ] ; }
t545 [ 1290ULL ] = X [ 31ULL ] ; t545 [ 1291ULL ] = X [ 356ULL ] ; t545 [
1292ULL ] = t806 ; t545 [ 1293ULL ] = - X [ 369ULL ] ; t545 [ 1294ULL ] = - X
[ 328ULL ] ; t545 [ 1295ULL ] = ( - X [ 385ULL ] + - X [ 386ULL ] ) + - X [
387ULL ] ; t545 [ 1296ULL ] = X [ 388ULL ] ; t545 [ 1297ULL ] = X [ 354ULL ]
; t545 [ 1298ULL ] = X [ 45ULL ] ; t545 [ 1299ULL ] = X [ 46ULL ] ; t545 [
1300ULL ] = X [ 47ULL ] ; t545 [ 1301ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_72 ; t545 [
1302ULL ] = X [ 344ULL ] ; t545 [ 1303ULL ] = X [ 345ULL ] * 0.1 ; t545 [
1304ULL ] = X [ 346ULL ] ; t545 [ 1305ULL ] = X [ 347ULL ] ; t545 [ 1306ULL ]
= - X [ 369ULL ] ; t545 [ 1307ULL ] = X [ 389ULL ] ; t545 [ 1308ULL ] = - X [
365ULL ] ; t545 [ 1309ULL ] = - X [ 377ULL ] ; t545 [ 1310ULL ] = - X [
378ULL ] ; t545 [ 1311ULL ] = X [ 390ULL ] ; t545 [ 1312ULL ] = X [ 391ULL ]
; t545 [ 1313ULL ] = X [ 296ULL ] ; t545 [ 1314ULL ] = X [ 297ULL ] * 0.1 ;
t545 [ 1315ULL ] = X [ 298ULL ] ; t545 [ 1316ULL ] = X [ 299ULL ] ; t545 [
1317ULL ] = - X [ 328ULL ] ; t545 [ 1318ULL ] = X [ 392ULL ] ; t545 [ 1319ULL
] = - X [ 319ULL ] ; t545 [ 1320ULL ] = - X [ 330ULL ] ; t545 [ 1321ULL ] = -
X [ 331ULL ] ; t545 [ 1322ULL ] = X [ 393ULL ] ; t545 [ 1323ULL ] = X [
394ULL ] ; t545 [ 1324ULL ] = t877 ; t545 [ 1325ULL ] = - X [ 377ULL ] ; t545
[ 1326ULL ] = - X [ 330ULL ] ; t545 [ 1327ULL ] = X [ 395ULL ] ; t545 [
1328ULL ] = X [ 396ULL ] ; t545 [ 1329ULL ] = - X [ 378ULL ] ; t545 [ 1330ULL
] = - X [ 331ULL ] ; t545 [ 1331ULL ] = ( 1.0 - X [ 47ULL ] ) - X [ 46ULL ] ;
t545 [ 1332ULL ] = X [ 45ULL ] ; t545 [ 1333ULL ] = X [ 46ULL ] ; t545 [
1334ULL ] = X [ 47ULL ] ; t545 [ 1335ULL ] = X [ 358ULL ] ; t545 [ 1336ULL ]
= X [ 359ULL ] * 0.1 ; t545 [ 1337ULL ] = X [ 360ULL ] ; t545 [ 1338ULL ] = X
[ 361ULL ] ; t545 [ 1339ULL ] = X [ 296ULL ] ; t545 [ 1340ULL ] = X [ 297ULL
] * 0.1 ; t545 [ 1341ULL ] = X [ 298ULL ] ; t545 [ 1342ULL ] = X [ 299ULL ] ;
t545 [ 1343ULL ] = X [ 397ULL ] ; t545 [ 1344ULL ] = X [ 54ULL ] * 0.1 ; t545
[ 1345ULL ] = X [ 398ULL ] ; t545 [ 1346ULL ] = X [ 399ULL ] ; t545 [ 1347ULL
] = X [ 358ULL ] ; t545 [ 1348ULL ] = X [ 359ULL ] * 0.1 ; t545 [ 1349ULL ] =
X [ 360ULL ] ; t545 [ 1350ULL ] = X [ 361ULL ] ; t545 [ 1351ULL ] = U_idx_8 ;
t545 [ 1352ULL ] = X [ 400ULL ] ; t545 [ 1353ULL ] = X [ 50ULL ] ; t545 [
1354ULL ] = X [ 51ULL ] ; t545 [ 1355ULL ] = X [ 52ULL ] ; t545 [ 1356ULL ] =
U_idx_9 ; t545 [ 1357ULL ] = - U_idx_8 ; for ( t691 = 0ULL ; t691 < 8ULL ;
t691 ++ ) { t545 [ t691 + 1358ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ t691 ] ; }
t545 [ 1366ULL ] = X [ 403ULL ] ; t545 [ 1367ULL ] = X [ 405ULL ] * 1.0E-5 *
99999.999999999985 ; t545 [ 1368ULL ] = X [ 50ULL ] ; t545 [ 1369ULL ] = X [
402ULL ] ; t545 [ 1370ULL ] = X [ 402ULL ] ; t545 [ 1371ULL ] = X [ 406ULL ]
; t545 [ 1372ULL ] = X [ 406ULL ] ; t545 [ 1373ULL ] = X [ 397ULL ] ; t545 [
1374ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 1375ULL ] = X [ 398ULL ] ; t545 [
1376ULL ] = X [ 399ULL ] ; t545 [ 1377ULL ] = X [ 358ULL ] ; t545 [ 1378ULL ]
= X [ 359ULL ] * 0.1 ; t545 [ 1379ULL ] = X [ 360ULL ] ; t545 [ 1380ULL ] = X
[ 361ULL ] ; t545 [ 1381ULL ] = X [ 51ULL ] ; t545 [ 1382ULL ] = X [ 403ULL ]
; t545 [ 1383ULL ] = X [ 52ULL ] ; t545 [ 1384ULL ] = X [ 408ULL ] ; t545 [
1385ULL ] = X [ 50ULL ] + - 273.15 ; t545 [ 1386ULL ] = X [ 407ULL ] ; t545 [
1387ULL ] = X [ 409ULL ] * 0.1 ; t545 [ 1388ULL ] = X [ 53ULL ] * 0.1 ; t545
[ 1389ULL ] = X [ 404ULL ] ; t545 [ 1390ULL ] = t882 ; t545 [ 1391ULL ] = X [
410ULL ] ; t545 [ 1392ULL ] = - X [ 362ULL ] ; t545 [ 1393ULL ] = X [ 411ULL
] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1394ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Meas0 [ t691 ]
; } t545 [ 1402ULL ] = X [ 406ULL ] ; t545 [ 1403ULL ] = X [ 401ULL ] ; t545
[ 1404ULL ] = t865 ; t545 [ 1405ULL ] = X [ 412ULL ] ; t545 [ 1406ULL ] = - X
[ 368ULL ] ; t545 [ 1407ULL ] = - X [ 400ULL ] ; t545 [ 1408ULL ] = X [
402ULL ] ; t545 [ 1409ULL ] = X [ 50ULL ] ; t545 [ 1410ULL ] = X [ 51ULL ] ;
t545 [ 1411ULL ] = X [ 52ULL ] ; t545 [ 1412ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip14 ; t545 [
1413ULL ] = X [ 397ULL ] ; t545 [ 1414ULL ] = X [ 54ULL ] * 0.1 ; t545 [
1415ULL ] = X [ 398ULL ] ; t545 [ 1416ULL ] = X [ 399ULL ] ; t545 [ 1417ULL ]
= X [ 412ULL ] ; t545 [ 1418ULL ] = X [ 413ULL ] ; t545 [ 1419ULL ] = X [
407ULL ] ; t545 [ 1420ULL ] = X [ 414ULL ] ; t545 [ 1421ULL ] = X [ 415ULL ]
; t545 [ 1422ULL ] = X [ 416ULL ] ; t545 [ 1423ULL ] = X [ 417ULL ] ; t545 [
1424ULL ] = X [ 358ULL ] ; t545 [ 1425ULL ] = X [ 359ULL ] * 0.1 ; t545 [
1426ULL ] = X [ 360ULL ] ; t545 [ 1427ULL ] = X [ 361ULL ] ; t545 [ 1428ULL ]
= - X [ 368ULL ] ; t545 [ 1429ULL ] = X [ 418ULL ] ; t545 [ 1430ULL ] = - X [
362ULL ] ; t545 [ 1431ULL ] = - X [ 372ULL ] ; t545 [ 1432ULL ] = - X [
373ULL ] ; t545 [ 1433ULL ] = X [ 419ULL ] ; t545 [ 1434ULL ] = X [ 420ULL ]
; t545 [ 1435ULL ] = t887 ; t545 [ 1436ULL ] = X [ 414ULL ] ; t545 [ 1437ULL
] = - X [ 372ULL ] ; t545 [ 1438ULL ] = U_idx_8 ; t545 [ 1439ULL ] = X [
415ULL ] ; t545 [ 1440ULL ] = - X [ 373ULL ] ; t545 [ 1441ULL ] = ( 1.0 - X [
52ULL ] ) - X [ 51ULL ] ; t545 [ 1442ULL ] = U_idx_9 ; t545 [ 1443ULL ] =
U_idx_8 ; t545 [ 1444ULL ] = X [ 61ULL ] ; t545 [ 1445ULL ] = t879 * 1000.0 ;
t545 [ 1446ULL ] = t879 * 0.35777375282305851 ; t545 [ 1447ULL ] = X [ 423ULL
] ; t545 [ 1448ULL ] = X [ 423ULL ] ; t545 [ 1449ULL ] = X [ 55ULL ] ; t545 [
1450ULL ] = t880 ; t545 [ 1451ULL ] = X [ 426ULL ] ; t545 [ 1452ULL ] = X [
55ULL ] ; t545 [ 1453ULL ] = X [ 423ULL ] ; t545 [ 1454ULL ] = t880 ; t545 [
1455ULL ] = X [ 427ULL ] ; t545 [ 1456ULL ] = t885 ; t545 [ 1457ULL ] = X [
429ULL ] ; t545 [ 1458ULL ] = t886 ; t545 [ 1459ULL ] = t889 ; t545 [ 1460ULL
] = t890 ; t545 [ 1461ULL ] = X [ 56ULL ] ; t545 [ 1462ULL ] = X [ 56ULL ] *
0.1 + 0.0001 ; t545 [ 1463ULL ] = X [ 426ULL ] ; t545 [ 1464ULL ] = t885 ;
t545 [ 1465ULL ] = X [ 55ULL ] ; t545 [ 1466ULL ] = X [ 55ULL ] ; t545 [
1467ULL ] = X [ 423ULL ] ; t545 [ 1468ULL ] = X [ 426ULL ] ; t545 [ 1469ULL ]
= X [ 426ULL ] ; t545 [ 1470ULL ] = t879 * 1000.0 ; t545 [ 1471ULL ] = X [
430ULL ] ; t545 [ 1472ULL ] = X [ 431ULL ] * 0.1 ; t545 [ 1473ULL ] = X [
432ULL ] ; t545 [ 1474ULL ] = X [ 433ULL ] * 0.1 ; t545 [ 1475ULL ] = X [
434ULL ] ; t545 [ 1476ULL ] = - X [ 434ULL ] ; t545 [ 1477ULL ] = X [ 430ULL
] ; t545 [ 1478ULL ] = X [ 431ULL ] * 0.1 ; t545 [ 1479ULL ] = X [ 434ULL ] ;
t545 [ 1480ULL ] = X [ 435ULL ] ; t545 [ 1481ULL ] = X [ 436ULL ] ; t545 [
1482ULL ] = X [ 437ULL ] ; t545 [ 1483ULL ] = X [ 432ULL ] ; t545 [ 1484ULL ]
= X [ 433ULL ] * 0.1 ; t545 [ 1485ULL ] = - X [ 434ULL ] ; t545 [ 1486ULL ] =
X [ 438ULL ] ; t545 [ 1487ULL ] = - X [ 436ULL ] ; t545 [ 1488ULL ] = X [
437ULL ] ; t545 [ 1489ULL ] = X [ 436ULL ] ; t545 [ 1490ULL ] = - X [ 436ULL
] ; t545 [ 1491ULL ] = X [ 432ULL ] ; t545 [ 1492ULL ] = X [ 433ULL ] * 0.1 ;
t545 [ 1493ULL ] = X [ 423ULL ] ; t545 [ 1494ULL ] = X [ 31ULL ] ; t545 [
1495ULL ] = X [ 434ULL ] ; t545 [ 1496ULL ] = X [ 424ULL ] ; t545 [ 1497ULL ]
= X [ 57ULL ] * 0.1 ; t545 [ 1498ULL ] = X [ 58ULL ] ; t545 [ 1499ULL ] = X [
436ULL ] ; t545 [ 1500ULL ] = X [ 428ULL ] ; t545 [ 1501ULL ] = X [ 439ULL ]
; t545 [ 1502ULL ] = X [ 432ULL ] ; t545 [ 1503ULL ] = X [ 433ULL ] * 0.1 ;
t545 [ 1504ULL ] = X [ 434ULL ] ; t545 [ 1505ULL ] = X [ 440ULL ] ; t545 [
1506ULL ] = X [ 436ULL ] ; t545 [ 1507ULL ] = X [ 441ULL ] ; t545 [ 1508ULL ]
= X [ 423ULL ] ; t545 [ 1509ULL ] = X [ 424ULL ] ; t545 [ 1510ULL ] = X [
442ULL ] ; t545 [ 1511ULL ] = X [ 428ULL ] ; t545 [ 1512ULL ] = X [ 443ULL ]
; t545 [ 1513ULL ] = t893 ; t545 [ 1514ULL ] = t894 ; t545 [ 1515ULL ] = t895
; t545 [ 1516ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Measur1 ; t545 [
1517ULL ] = intrm_sf_mf_1323 ; t545 [ 1518ULL ] = X [ 31ULL ] ; t545 [
1519ULL ] = U_idx_10 ; t545 [ 1520ULL ] = t897 ; t545 [ 1521ULL ] = X [
423ULL ] ; t545 [ 1522ULL ] = X [ 444ULL ] ; t545 [ 1523ULL ] = X [ 445ULL ]
* 0.1 ; t545 [ 1524ULL ] = t897 ; t545 [ 1525ULL ] = X [ 425ULL ] ; t545 [
1526ULL ] = X [ 446ULL ] ; t545 [ 1527ULL ] = X [ 423ULL ] ; t545 [ 1528ULL ]
= X [ 425ULL ] ; t545 [ 1529ULL ] = X [ 447ULL ] ; t545 [ 1530ULL ] = t898 ;
t545 [ 1531ULL ] = X [ 448ULL ] ; t545 [ 1532ULL ] = X [ 444ULL ] ; t545 [
1533ULL ] = X [ 445ULL ] * 0.1 ; t545 [ 1534ULL ] = X [ 446ULL ] ; t545 [
1535ULL ] = X [ 449ULL ] ; t545 [ 1536ULL ] = - t898 ; t545 [ 1537ULL ] = X [
448ULL ] ; t545 [ 1538ULL ] = t898 ; t545 [ 1539ULL ] = - t898 ; t545 [
1540ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe ;
t545 [ 1541ULL ] = X [ 444ULL ] ; t545 [ 1542ULL ] = X [ 445ULL ] * 0.1 ;
t545 [ 1543ULL ] = X [ 430ULL ] ; t545 [ 1544ULL ] = X [ 431ULL ] * 0.1 ;
t545 [ 1545ULL ] = X [ 61ULL ] ; t545 [ 1546ULL ] = - X [ 446ULL ] ; t545 [
1547ULL ] = - X [ 434ULL ] ; t545 [ 1548ULL ] = X [ 59ULL ] * 0.1 ; t545 [
1549ULL ] = X [ 60ULL ] ; t545 [ 1550ULL ] = t898 ; t545 [ 1551ULL ] = - X [
436ULL ] ; t545 [ 1552ULL ] = X [ 421ULL ] ; t545 [ 1553ULL ] = X [ 444ULL ]
; t545 [ 1554ULL ] = X [ 445ULL ] * 0.1 ; t545 [ 1555ULL ] = - X [ 446ULL ] ;
t545 [ 1556ULL ] = X [ 450ULL ] ; t545 [ 1557ULL ] = t898 ; t545 [ 1558ULL ]
= X [ 451ULL ] ; t545 [ 1559ULL ] = X [ 430ULL ] ; t545 [ 1560ULL ] = X [
431ULL ] * 0.1 ; t545 [ 1561ULL ] = - X [ 434ULL ] ; t545 [ 1562ULL ] = X [
452ULL ] ; t545 [ 1563ULL ] = - X [ 436ULL ] ; t545 [ 1564ULL ] = X [ 453ULL
] ; t545 [ 1565ULL ] = t901 ; t545 [ 1566ULL ] = t902 ; t545 [ 1567ULL ] =
t903 ; t545 [ 1568ULL ] = intrm_sf_mf_1361 ; t545 [ 1569ULL ] = t971 ; t545 [
1570ULL ] = X [ 444ULL ] ; t545 [ 1571ULL ] = X [ 445ULL ] * 0.1 ; t545 [
1572ULL ] = X [ 423ULL ] ; t545 [ 1573ULL ] = X [ 444ULL ] ; t545 [ 1574ULL ]
= X [ 445ULL ] * 0.1 ; t545 [ 1575ULL ] = t904 * 1000.0 ; t545 [ 1576ULL ] =
t904 * 1111.1111111111111 ; t545 [ 1577ULL ] = t904 * 1111.1111111111111 ;
t545 [ 1578ULL ] = ( 1.01325 - X [ 445ULL ] ) * 99999.999999999985 ; t545 [
1579ULL ] = X [ 454ULL ] * 1.0E-6 ; t545 [ 1580ULL ] = t904 * 1000.0 ; t545 [
1581ULL ] = X [ 423ULL ] ; t545 [ 1582ULL ] = X [ 444ULL ] ; t545 [ 1583ULL ]
= X [ 445ULL ] * 0.1 ; t545 [ 1584ULL ] = ( 1.01325 - X [ 445ULL ] ) *
99999.999999999985 ; t545 [ 1585ULL ] = X [ 423ULL ] - X [ 444ULL ] ; t545 [
1586ULL ] = X [ 444ULL ] ; t545 [ 1587ULL ] = X [ 445ULL ] * 0.1 ; t545 [
1588ULL ] = X [ 444ULL ] ; t545 [ 1589ULL ] = X [ 445ULL ] * 0.1 ; t545 [
1590ULL ] = - X [ 446ULL ] ; t545 [ 1591ULL ] = X [ 454ULL ] * 1.0E-6 ; t545
[ 1592ULL ] = t898 ; t545 [ 1593ULL ] = U_idx_10 ; t545 [ 1594ULL ] = X [
31ULL ] ; t545 [ 1595ULL ] = X [ 31ULL ] ; t545 [ 1596ULL ] = X [ 31ULL ] ;
t545 [ 1597ULL ] = X [ 61ULL ] ; t545 [ 1598ULL ] = X [ 422ULL ] * 1000.0 ;
t545 [ 1599ULL ] = X [ 61ULL ] + - 273.15 ; t545 [ 1600ULL ] = X [ 220ULL ] ;
t545 [ 1601ULL ] = X [ 221ULL ] * 0.1 ; t545 [ 1602ULL ] = X [ 222ULL ] ;
t545 [ 1603ULL ] = X [ 223ULL ] ; t545 [ 1604ULL ] = X [ 344ULL ] ; t545 [
1605ULL ] = X [ 345ULL ] * 0.1 ; t545 [ 1606ULL ] = X [ 346ULL ] ; t545 [
1607ULL ] = X [ 347ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545
[ t691 + 1608ULL ] = t575 [ t691 ] ; } for ( t691 = 0ULL ; t691 < 8ULL ; t691
++ ) { t545 [ t691 + 1616ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t691 ] ; }
for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1624ULL ] = t592
[ t691 ] ; } for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 +
1632ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
t691 ] ; } t545 [ 1640ULL ] = X [ 31ULL ] ; t545 [ 1641ULL ] = X [ 220ULL ] ;
t545 [ 1642ULL ] = X [ 221ULL ] * 0.1 ; t545 [ 1643ULL ] = X [ 222ULL ] ;
t545 [ 1644ULL ] = X [ 223ULL ] ; t545 [ 1645ULL ] = X [ 344ULL ] ; t545 [
1646ULL ] = X [ 345ULL ] * 0.1 ; t545 [ 1647ULL ] = X [ 346ULL ] ; t545 [
1648ULL ] = X [ 347ULL ] ; t545 [ 1649ULL ] = X [ 455ULL ] ; t545 [ 1650ULL ]
= X [ 456ULL ] ; t545 [ 1651ULL ] = X [ 31ULL ] ; for ( t691 = 0ULL ; t691 <
8ULL ; t691 ++ ) { t545 [ t691 + 1652ULL ] = t575 [ t691 ] ; } for ( t691 =
0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1660ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_FAo [ t691 ] ; }
for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1668ULL ] = t592
[ t691 ] ; } for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 +
1676ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_FCo [
t691 ] ; } t545 [ 1684ULL ] = - t799 ; t545 [ 1685ULL ] = t912 * 0.0001 ;
t545 [ 1686ULL ] = t912 * 0.20177105219743391 / 192970.66424 * 1000.0 ; t545
[ 1687ULL ] = t911 * 1000.0 ; t545 [ 1688ULL ] = t908 * 1000.0 ; t545 [
1689ULL ] = t912 * 0.3583866814737065 / 385941.32848 * 1000.0 ; t545 [
1690ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ;
t545 [ 1691ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 * 100.0 ; t545
[ 1692ULL ] = X [ 27ULL ] ; t545 [ 1693ULL ] = X [ 28ULL ] ; t545 [ 1694ULL ]
= X [ 29ULL ] ; t545 [ 1695ULL ] = X [ 45ULL ] ; t545 [ 1696ULL ] = X [ 46ULL
] ; t545 [ 1697ULL ] = X [ 47ULL ] ; t545 [ 1698ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; t545 [
1699ULL ] = t704 ; t545 [ 1700ULL ] = t883 ; t545 [ 1701ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 1702ULL ] = X [ 458ULL ] ; t545 [
1703ULL ] = X [ 385ULL ] ; t545 [ 1704ULL ] = X [ 45ULL ] ; t545 [ 1705ULL ]
= X [ 46ULL ] ; t545 [ 1706ULL ] = X [ 47ULL ] ; t545 [ 1707ULL ] = X [ 31ULL
] ; t545 [ 1708ULL ] = - X [ 458ULL ] ; t545 [ 1709ULL ] = X [ 270ULL ] ;
t545 [ 1710ULL ] = X [ 261ULL ] ; t545 [ 1711ULL ] = X [ 27ULL ] ; t545 [
1712ULL ] = X [ 28ULL ] ; t545 [ 1713ULL ] = X [ 29ULL ] ; t545 [ 1714ULL ] =
X [ 31ULL ] ; t545 [ 1715ULL ] = - X [ 270ULL ] ; t545 [ 1716ULL ] = X [
395ULL ] ; t545 [ 1717ULL ] = X [ 386ULL ] ; t545 [ 1718ULL ] = X [ 45ULL ] ;
t545 [ 1719ULL ] = X [ 46ULL ] ; t545 [ 1720ULL ] = X [ 47ULL ] ; t545 [
1721ULL ] = X [ 31ULL ] ; t545 [ 1722ULL ] = - X [ 395ULL ] ; t545 [ 1723ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.001 ;
t545 [ 1724ULL ] = X [ 271ULL ] ; t545 [ 1725ULL ] = X [ 262ULL ] ; t545 [
1726ULL ] = X [ 27ULL ] ; t545 [ 1727ULL ] = X [ 28ULL ] ; t545 [ 1728ULL ] =
X [ 29ULL ] ; t545 [ 1729ULL ] = X [ 31ULL ] ; t545 [ 1730ULL ] = - X [
271ULL ] ; t545 [ 1731ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; t545 [
1732ULL ] = X [ 387ULL ] ; t545 [ 1733ULL ] = X [ 45ULL ] ; t545 [ 1734ULL ]
= X [ 46ULL ] ; t545 [ 1735ULL ] = X [ 47ULL ] ; t545 [ 1736ULL ] = X [ 31ULL
] ; t545 [ 1737ULL ] = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; t545 [
1738ULL ] = ( ( t908 * 241812.2160511087 / 0.0020158806832745466 * 0.001 + (
( ( X [ 261ULL ] - X [ 270ULL ] * - 3931.85243448965 ) + ( X [ 386ULL ] - X [
395ULL ] * - 271.011680699068 ) ) + ( X [ 385ULL ] - X [ 458ULL ] * -
2546.6190535198302 ) ) ) + ( X [ 262ULL ] + X [ 387ULL ] ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.001 ;
t545 [ 1739ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 1740ULL ] = X [
27ULL ] ; t545 [ 1741ULL ] = X [ 28ULL ] ; t545 [ 1742ULL ] = X [ 29ULL ] ;
t545 [ 1743ULL ] = X [ 45ULL ] ; t545 [ 1744ULL ] = X [ 46ULL ] ; t545 [
1745ULL ] = X [ 47ULL ] ; t545 [ 1746ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t545 [ 1747ULL ] = X [ 31ULL ] ; t545 [ 1748ULL ] = X [ 31ULL ] ; t545 [
1749ULL ] = X [ 31ULL ] ; t545 [ 1750ULL ] = X [ 31ULL ] ; t545 [ 1751ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * - 1000.0 ;
t545 [ 1752ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * - 1000.0 ;
t545 [ 1753ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * - 1000.0 ;
t545 [ 1754ULL ] = X [ 459ULL ] ; t545 [ 1755ULL ] = X [ 37ULL ] * 0.1 ; t545
[ 1756ULL ] = X [ 460ULL ] ; t545 [ 1757ULL ] = X [ 461ULL ] ; t545 [ 1758ULL
] = X [ 462ULL ] ; t545 [ 1759ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1760ULL ] =
X [ 463ULL ] ; t545 [ 1761ULL ] = X [ 464ULL ] ; t545 [ 1762ULL ] = X [ 62ULL
] ; t545 [ 1763ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1764ULL ] = X [ 64ULL ] ;
t545 [ 1765ULL ] = X [ 65ULL ] ; t545 [ 1766ULL ] = X [ 62ULL ] ; t545 [
1767ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1768ULL ] = X [ 64ULL ] ; t545 [
1769ULL ] = X [ 65ULL ] ; t545 [ 1770ULL ] = X [ 62ULL ] ; t545 [ 1771ULL ] =
X [ 63ULL ] * 0.1 ; t545 [ 1772ULL ] = X [ 64ULL ] ; t545 [ 1773ULL ] = X [
65ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 1774ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T0 [ t691 ] ;
} t545 [ 1782ULL ] = X [ 62ULL ] ; t545 [ 1783ULL ] = X [ 465ULL ] ; t545 [
1784ULL ] = X [ 469ULL ] ; t545 [ 1785ULL ] = X [ 62ULL ] + - 273.15 ; t545 [
1786ULL ] = X [ 64ULL ] ; t545 [ 1787ULL ] = X [ 467ULL ] ; t545 [ 1788ULL ]
= X [ 65ULL ] ; t545 [ 1789ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1790ULL ] =
t921 ; t545 [ 1791ULL ] = X [ 466ULL ] ; t545 [ 1792ULL ] = X [ 62ULL ] ;
t545 [ 1793ULL ] = X [ 64ULL ] ; t545 [ 1794ULL ] = X [ 65ULL ] ; t545 [
1795ULL ] = t922 ; t545 [ 1796ULL ] = X [ 462ULL ] ; t545 [ 1797ULL ] = X [
63ULL ] * 0.1 ; t545 [ 1798ULL ] = X [ 463ULL ] ; t545 [ 1799ULL ] = X [
464ULL ] ; t545 [ 1800ULL ] = X [ 469ULL ] ; t545 [ 1801ULL ] = X [ 470ULL ]
; t545 [ 1802ULL ] = X [ 471ULL ] ; t545 [ 1803ULL ] = X [ 472ULL ] ; t545 [
1804ULL ] = X [ 473ULL ] ; t545 [ 1805ULL ] = X [ 474ULL ] ; t545 [ 1806ULL ]
= X [ 475ULL ] ; t545 [ 1807ULL ] = t925 ; t545 [ 1808ULL ] = X [ 471ULL ] ;
t545 [ 1809ULL ] = X [ 472ULL ] ; t545 [ 1810ULL ] = X [ 473ULL ] ; t545 [
1811ULL ] = ( 1.0 - X [ 65ULL ] ) - X [ 64ULL ] ; t545 [ 1812ULL ] = X [
468ULL ] ; t545 [ 1813ULL ] = X [ 459ULL ] ; t545 [ 1814ULL ] = X [ 37ULL ] *
0.1 ; t545 [ 1815ULL ] = X [ 460ULL ] ; t545 [ 1816ULL ] = X [ 461ULL ] ;
t545 [ 1817ULL ] = X [ 462ULL ] ; t545 [ 1818ULL ] = X [ 63ULL ] * 0.1 ; t545
[ 1819ULL ] = X [ 463ULL ] ; t545 [ 1820ULL ] = X [ 464ULL ] ; t545 [ 1821ULL
] = X [ 462ULL ] ; t545 [ 1822ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1823ULL ] =
X [ 463ULL ] ; t545 [ 1824ULL ] = X [ 464ULL ] ; t545 [ 1825ULL ] = - X [
471ULL ] ; t545 [ 1826ULL ] = - X [ 472ULL ] ; t545 [ 1827ULL ] = - X [
473ULL ] ; t545 [ 1828ULL ] = X [ 469ULL ] * - 1000.0 ; t545 [ 1829ULL ] = -
X [ 469ULL ] ; t545 [ 1830ULL ] = - X [ 471ULL ] ; t545 [ 1831ULL ] = - X [
472ULL ] ; t545 [ 1832ULL ] = - X [ 473ULL ] ; t545 [ 1833ULL ] = - X [
471ULL ] ; t545 [ 1834ULL ] = X [ 62ULL ] ; t545 [ 1835ULL ] = X [ 62ULL ] ;
t545 [ 1836ULL ] = X [ 476ULL ] ; t545 [ 1837ULL ] = X [ 476ULL ] ; t545 [
1838ULL ] = X [ 477ULL ] ; t545 [ 1839ULL ] = X [ 478ULL ] * 0.1 ; t545 [
1840ULL ] = X [ 479ULL ] ; t545 [ 1841ULL ] = X [ 480ULL ] ; t545 [ 1842ULL ]
= X [ 459ULL ] ; t545 [ 1843ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 1844ULL ] = X
[ 460ULL ] ; t545 [ 1845ULL ] = X [ 461ULL ] ; t545 [ 1846ULL ] = X [ 69ULL ]
; t545 [ 1847ULL ] = X [ 484ULL ] ; t545 [ 1848ULL ] = X [ 68ULL ] ; t545 [
1849ULL ] = X [ 481ULL ] ; t545 [ 1850ULL ] = X [ 66ULL ] + - 273.15 ; t545 [
1851ULL ] = - X [ 471ULL ] ; t545 [ 1852ULL ] = X [ 482ULL ] * 0.1 ; t545 [
1853ULL ] = X [ 67ULL ] * 0.1 ; t545 [ 1854ULL ] = X [ 483ULL ] ; t545 [
1855ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M40 ;
t545 [ 1856ULL ] = X [ 486ULL ] ; t545 [ 1857ULL ] = X [ 485ULL ] ; t545 [
1858ULL ] = X [ 487ULL ] * 0.1 ; for ( t691 = 0ULL ; t691 < 8ULL ; t691 ++ )
{ t545 [ t691 + 1859ULL ] = t620 [ t691 ] ; } t545 [ 1867ULL ] = X [ 476ULL ]
; t545 [ 1868ULL ] = X [ 488ULL ] ; t545 [ 1869ULL ] = t972 ; t545 [ 1870ULL
] = - X [ 469ULL ] ; t545 [ 1871ULL ] = X [ 490ULL ] ; t545 [ 1872ULL ] = X [
489ULL ] ; t545 [ 1873ULL ] = X [ 66ULL ] ; t545 [ 1874ULL ] = X [ 69ULL ] ;
t545 [ 1875ULL ] = X [ 68ULL ] ; t545 [ 1876ULL ] = t928 ; t545 [ 1877ULL ] =
X [ 477ULL ] ; t545 [ 1878ULL ] = X [ 478ULL ] * 0.1 ; t545 [ 1879ULL ] = X [
479ULL ] ; t545 [ 1880ULL ] = X [ 480ULL ] ; t545 [ 1881ULL ] = - X [ 469ULL
] ; t545 [ 1882ULL ] = X [ 491ULL ] ; t545 [ 1883ULL ] = - X [ 471ULL ] ;
t545 [ 1884ULL ] = - X [ 472ULL ] ; t545 [ 1885ULL ] = - X [ 473ULL ] ; t545
[ 1886ULL ] = X [ 492ULL ] ; t545 [ 1887ULL ] = X [ 493ULL ] ; t545 [ 1888ULL
] = X [ 459ULL ] ; t545 [ 1889ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 1890ULL ] =
X [ 460ULL ] ; t545 [ 1891ULL ] = X [ 461ULL ] ; t545 [ 1892ULL ] = X [
490ULL ] ; t545 [ 1893ULL ] = X [ 494ULL ] ; t545 [ 1894ULL ] = X [ 485ULL ]
; t545 [ 1895ULL ] = X [ 495ULL ] ; t545 [ 1896ULL ] = X [ 496ULL ] ; t545 [
1897ULL ] = X [ 497ULL ] ; t545 [ 1898ULL ] = X [ 498ULL ] ; t545 [ 1899ULL ]
= t931 ; t545 [ 1900ULL ] = - X [ 472ULL ] ; t545 [ 1901ULL ] = X [ 495ULL ]
; t545 [ 1902ULL ] = - X [ 473ULL ] ; t545 [ 1903ULL ] = X [ 496ULL ] ; t545
[ 1904ULL ] = ( 1.0 - X [ 68ULL ] ) - X [ 69ULL ] ; t545 [ 1905ULL ] = X [
462ULL ] ; t545 [ 1906ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1907ULL ] = X [
463ULL ] ; t545 [ 1908ULL ] = X [ 464ULL ] ; t545 [ 1909ULL ] = X [ 477ULL ]
; t545 [ 1910ULL ] = X [ 478ULL ] * 0.1 ; t545 [ 1911ULL ] = X [ 479ULL ] ;
t545 [ 1912ULL ] = X [ 480ULL ] ; t545 [ 1913ULL ] = t920 * 1.0E+6 ; t545 [
1914ULL ] = t923 ; t545 [ 1915ULL ] = t920 * - 125000.03125000779 ; t545 [
1916ULL ] = t920 * 1.0E+6 ; t545 [ 1917ULL ] = t923 ; t545 [ 1918ULL ] = t923
* 7.8539816339744827E-5 ; t545 [ 1919ULL ] = X [ 478ULL ] *
99999.999999999985 ; t545 [ 1920ULL ] = ( t930 - 0.05000000000000001 ) * 0.1
; t545 [ 1921ULL ] = t920 * - 125000.03125000779 ; t545 [ 1922ULL ] = t930 *
0.1 ; t545 [ 1923ULL ] = ( t930 - 0.05000000000000001 ) * 0.1 ; t545 [
1924ULL ] = X [ 477ULL ] ; t545 [ 1925ULL ] = X [ 478ULL ] * 0.1 ; t545 [
1926ULL ] = X [ 479ULL ] ; t545 [ 1927ULL ] = X [ 480ULL ] ; t545 [ 1928ULL ]
= X [ 478ULL ] * 99999.999999999985 ; t545 [ 1929ULL ] = X [ 477ULL ] ; t545
[ 1930ULL ] = X [ 462ULL ] ; t545 [ 1931ULL ] = X [ 63ULL ] * 0.1 ; t545 [
1932ULL ] = X [ 463ULL ] ; t545 [ 1933ULL ] = X [ 464ULL ] ; t545 [ 1934ULL ]
= t923 * 7.8539816339744827E-5 ; t545 [ 1935ULL ] = X [ 477ULL ] ; t545 [
1936ULL ] = X [ 478ULL ] * 0.1 ; t545 [ 1937ULL ] = X [ 479ULL ] ; t545 [
1938ULL ] = X [ 480ULL ] ; t545 [ 1939ULL ] = - X [ 471ULL ] ; t545 [ 1940ULL
] = X [ 462ULL ] ; t545 [ 1941ULL ] = X [ 63ULL ] * 0.1 ; t545 [ 1942ULL ] =
X [ 463ULL ] ; t545 [ 1943ULL ] = X [ 464ULL ] ; t545 [ 1944ULL ] = - X [
469ULL ] ; t545 [ 1945ULL ] = X [ 505ULL ] ; t545 [ 1946ULL ] = - X [ 471ULL
] ; t545 [ 1947ULL ] = - X [ 472ULL ] ; t545 [ 1948ULL ] = - X [ 473ULL ] ;
t545 [ 1949ULL ] = X [ 502ULL ] ; t545 [ 1950ULL ] = X [ 501ULL ] ; t545 [
1951ULL ] = X [ 499ULL ] ; t545 [ 1952ULL ] = X [ 500ULL ] * 0.1 ; t545 [
1953ULL ] = X [ 503ULL ] ; t545 [ 1954ULL ] = X [ 504ULL ] ; t545 [ 1955ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu19 ; t545 [
1956ULL ] = - X [ 469ULL ] ; t545 [ 1957ULL ] = X [ 469ULL ] ; t545 [ 1958ULL
] = X [ 477ULL ] ; t545 [ 1959ULL ] = X [ 478ULL ] * 0.1 ; t545 [ 1960ULL ] =
X [ 479ULL ] ; t545 [ 1961ULL ] = X [ 480ULL ] ; t545 [ 1962ULL ] = X [
469ULL ] ; t545 [ 1963ULL ] = X [ 505ULL ] ; t545 [ 1964ULL ] = X [ 471ULL ]
; t545 [ 1965ULL ] = X [ 472ULL ] ; t545 [ 1966ULL ] = X [ 473ULL ] ; t545 [
1967ULL ] = X [ 502ULL ] ; t545 [ 1968ULL ] = X [ 501ULL ] ; t545 [ 1969ULL ]
= X [ 471ULL ] ; t545 [ 1970ULL ] = - X [ 472ULL ] ; t545 [ 1971ULL ] = X [
472ULL ] ; t545 [ 1972ULL ] = - X [ 473ULL ] ; t545 [ 1973ULL ] = X [ 473ULL
] ; t545 [ 1974ULL ] = t930 * 0.1 ; t545 [ 1975ULL ] = U_idx_11 ; t545 [
1976ULL ] = X [ 31ULL ] ; t545 [ 1977ULL ] = X [ 457ULL ] * 1000.0 ; t545 [
1978ULL ] = X [ 31ULL ] + - 273.15 ; t545 [ 1979ULL ] = X [ 506ULL ] ; t545 [
1980ULL ] = X [ 507ULL ] ; t545 [ 1981ULL ] = X [ 508ULL ] ; t545 [ 1982ULL ]
= X [ 509ULL ] ; t545 [ 1983ULL ] = X [ 510ULL ] ; t545 [ 1984ULL ] = X [
518ULL ] ; t545 [ 1985ULL ] = X [ 517ULL ] ; t545 [ 1986ULL ] = X [ 506ULL ]
; t545 [ 1987ULL ] = X [ 507ULL ] ; t545 [ 1988ULL ] = X [ 508ULL ] ; t545 [
1989ULL ] = X [ 510ULL ] ; t545 [ 1990ULL ] = X [ 511ULL ] ; t545 [ 1991ULL ]
= X [ 512ULL ] ; t545 [ 1992ULL ] = X [ 513ULL ] ; t545 [ 1993ULL ] = X [
514ULL ] ; t545 [ 1994ULL ] = X [ 515ULL ] ; t545 [ 1995ULL ] = X [ 516ULL ]
; t545 [ 1996ULL ] = intrm_sf_mf_1586 ; t545 [ 1997ULL ] = X [ 512ULL ] ;
t545 [ 1998ULL ] = X [ 513ULL ] ; t545 [ 1999ULL ] = X [ 514ULL ] ; t545 [
2000ULL ] = t936 ; t545 [ 2001ULL ] = ( 1.0 - X [ 517ULL ] ) - X [ 518ULL ] ;
t545 [ 2002ULL ] = X [ 519ULL ] ; t545 [ 2003ULL ] = X [ 520ULL ] ; t545 [
2004ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2005ULL ] = X [ 521ULL ] ; t545 [
2006ULL ] = X [ 522ULL ] ; t545 [ 2007ULL ] = X [ 506ULL ] ; t545 [ 2008ULL ]
= X [ 507ULL ] ; t545 [ 2009ULL ] = X [ 508ULL ] ; t545 [ 2010ULL ] = X [
520ULL ] ; t545 [ 2011ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2012ULL ] = X [
521ULL ] ; t545 [ 2013ULL ] = X [ 522ULL ] ; t545 [ 2014ULL ] = X [ 524ULL ]
; t545 [ 2015ULL ] = X [ 527ULL ] ; t545 [ 2016ULL ] = X [ 506ULL ] ; t545 [
2017ULL ] = X [ 507ULL ] ; t545 [ 2018ULL ] = X [ 508ULL ] ; t545 [ 2019ULL ]
= - X [ 510ULL ] ; t545 [ 2020ULL ] = X [ 528ULL ] ; t545 [ 2021ULL ] = - X [
512ULL ] ; t545 [ 2022ULL ] = - X [ 513ULL ] ; t545 [ 2023ULL ] = - X [
514ULL ] ; t545 [ 2024ULL ] = X [ 529ULL ] ; t545 [ 2025ULL ] = X [ 530ULL ]
; t545 [ 2026ULL ] = - X [ 512ULL ] ; t545 [ 2027ULL ] = X [ 525ULL ] ; t545
[ 2028ULL ] = X [ 526ULL ] ; t545 [ 2029ULL ] = X [ 520ULL ] ; t545 [ 2030ULL
] = X [ 54ULL ] * 0.1 ; t545 [ 2031ULL ] = X [ 521ULL ] ; t545 [ 2032ULL ] =
X [ 522ULL ] ; t545 [ 2033ULL ] = X [ 523ULL ] ; t545 [ 2034ULL ] = X [
528ULL ] ; t545 [ 2035ULL ] = X [ 512ULL ] ; t545 [ 2036ULL ] = X [ 513ULL ]
; t545 [ 2037ULL ] = X [ 514ULL ] ; t545 [ 2038ULL ] = X [ 529ULL ] ; t545 [
2039ULL ] = X [ 530ULL ] ; t545 [ 2040ULL ] = X [ 512ULL ] ; t545 [ 2041ULL ]
= - X [ 512ULL ] ; t545 [ 2042ULL ] = - X [ 510ULL ] ; t545 [ 2043ULL ] = X [
523ULL ] ; t545 [ 2044ULL ] = - X [ 513ULL ] ; t545 [ 2045ULL ] = X [ 513ULL
] ; t545 [ 2046ULL ] = - X [ 514ULL ] ; t545 [ 2047ULL ] = X [ 514ULL ] ;
t545 [ 2048ULL ] = t702 ; t545 [ 2049ULL ] = X [ 531ULL ] ; t545 [ 2050ULL ]
= t940 * 0.99999999999999978 / 0.99999999999999978 * 9.5492965855137211 ;
t545 [ 2051ULL ] = X [ 532ULL ] ; t545 [ 2052ULL ] = X [ 54ULL ] *
99999.999999999985 ; t545 [ 2053ULL ] = X [ 531ULL ] ; t545 [ 2054ULL ] = X [
533ULL ] ; t545 [ 2055ULL ] = X [ 534ULL ] ; t545 [ 2056ULL ] = - X [ 512ULL
] ; t545 [ 2057ULL ] = X [ 532ULL ] ; t545 [ 2058ULL ] = X [ 533ULL ] ; t545
[ 2059ULL ] = X [ 506ULL ] ; t545 [ 2060ULL ] = X [ 507ULL ] ; t545 [ 2061ULL
] = X [ 508ULL ] ; t545 [ 2062ULL ] = X [ 506ULL ] ; t545 [ 2063ULL ] = X [
520ULL ] ; t545 [ 2064ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2065ULL ] = X [
521ULL ] ; t545 [ 2066ULL ] = X [ 522ULL ] ; t545 [ 2067ULL ] = X [ 54ULL ] *
99999.999999999985 ; t545 [ 2068ULL ] = X [ 520ULL ] ; t545 [ 2069ULL ] = X [
506ULL ] ; t545 [ 2070ULL ] = X [ 507ULL ] ; t545 [ 2071ULL ] = X [ 508ULL ]
; t545 [ 2072ULL ] = - X [ 512ULL ] ; t545 [ 2073ULL ] = X [ 520ULL ] ; t545
[ 2074ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2075ULL ] = X [ 521ULL ] ; t545 [
2076ULL ] = X [ 522ULL ] ; t545 [ 2077ULL ] = t940 * 9.5492965855137211 ;
t545 [ 2078ULL ] = X [ 506ULL ] * 0.00347041471455839 ; t545 [ 2079ULL ] = X
[ 534ULL ] ; t545 [ 2080ULL ] = X [ 506ULL ] ; t545 [ 2081ULL ] = X [ 506ULL
] * 0.00347041471455839 ; t545 [ 2082ULL ] = X [ 520ULL ] ; t545 [ 2083ULL ]
= X [ 54ULL ] * 0.1 ; t545 [ 2084ULL ] = X [ 521ULL ] ; t545 [ 2085ULL ] = X
[ 522ULL ] ; t545 [ 2086ULL ] = X [ 397ULL ] ; t545 [ 2087ULL ] = X [ 54ULL ]
* 0.1 ; t545 [ 2088ULL ] = X [ 398ULL ] ; t545 [ 2089ULL ] = X [ 399ULL ] ;
t545 [ 2090ULL ] = X [ 70ULL ] ; t545 [ 2091ULL ] = X [ 54ULL ] * 0.1 ; t545
[ 2092ULL ] = X [ 71ULL ] ; t545 [ 2093ULL ] = X [ 72ULL ] ; t545 [ 2094ULL ]
= X [ 70ULL ] ; t545 [ 2095ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2096ULL ] = X [
71ULL ] ; t545 [ 2097ULL ] = X [ 72ULL ] ; for ( t691 = 0ULL ; t691 < 8ULL ;
t691 ++ ) { t545 [ t691 + 2098ULL ] = t625 [ t691 ] ; } t545 [ 2106ULL ] = X
[ 70ULL ] ; t545 [ 2107ULL ] = X [ 535ULL ] ; t545 [ 2108ULL ] = - X [ 523ULL
] ; t545 [ 2109ULL ] = - X [ 412ULL ] ; t545 [ 2110ULL ] = X [ 70ULL ] + -
273.15 ; t545 [ 2111ULL ] = X [ 71ULL ] ; t545 [ 2112ULL ] = X [ 537ULL ] ;
t545 [ 2113ULL ] = X [ 72ULL ] ; t545 [ 2114ULL ] = X [ 54ULL ] * 0.1 ; t545
[ 2115ULL ] = t947 ; t545 [ 2116ULL ] = X [ 536ULL ] ; t545 [ 2117ULL ] = X [
70ULL ] ; t545 [ 2118ULL ] = X [ 71ULL ] ; t545 [ 2119ULL ] = X [ 72ULL ] ;
t545 [ 2120ULL ] = t948 ; t545 [ 2121ULL ] = X [ 520ULL ] ; t545 [ 2122ULL ]
= X [ 54ULL ] * 0.1 ; t545 [ 2123ULL ] = X [ 521ULL ] ; t545 [ 2124ULL ] = X
[ 522ULL ] ; t545 [ 2125ULL ] = - X [ 523ULL ] ; t545 [ 2126ULL ] = X [
539ULL ] ; t545 [ 2127ULL ] = - X [ 512ULL ] ; t545 [ 2128ULL ] = - X [
513ULL ] ; t545 [ 2129ULL ] = - X [ 514ULL ] ; t545 [ 2130ULL ] = X [ 540ULL
] ; t545 [ 2131ULL ] = X [ 541ULL ] ; t545 [ 2132ULL ] = X [ 397ULL ] ; t545
[ 2133ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2134ULL ] = X [ 398ULL ] ; t545 [
2135ULL ] = X [ 399ULL ] ; t545 [ 2136ULL ] = - X [ 412ULL ] ; t545 [ 2137ULL
] = X [ 542ULL ] ; t545 [ 2138ULL ] = - X [ 407ULL ] ; t545 [ 2139ULL ] = - X
[ 414ULL ] ; t545 [ 2140ULL ] = - X [ 415ULL ] ; t545 [ 2141ULL ] = X [
543ULL ] ; t545 [ 2142ULL ] = X [ 544ULL ] ; t545 [ 2143ULL ] = t951 ; t545 [
2144ULL ] = - X [ 512ULL ] ; t545 [ 2145ULL ] = - X [ 407ULL ] ; t545 [
2146ULL ] = - X [ 513ULL ] ; t545 [ 2147ULL ] = - X [ 414ULL ] ; t545 [
2148ULL ] = - X [ 514ULL ] ; t545 [ 2149ULL ] = - X [ 415ULL ] ; t545 [
2150ULL ] = ( 1.0 - X [ 72ULL ] ) - X [ 71ULL ] ; t545 [ 2151ULL ] = X [
538ULL ] ; t545 [ 2152ULL ] = X [ 397ULL ] ; t545 [ 2153ULL ] = X [ 54ULL ] *
0.1 ; t545 [ 2154ULL ] = X [ 398ULL ] ; t545 [ 2155ULL ] = X [ 399ULL ] ;
t545 [ 2156ULL ] = X [ 397ULL ] ; t545 [ 2157ULL ] = X [ 54ULL ] * 0.1 ; t545
[ 2158ULL ] = X [ 398ULL ] ; t545 [ 2159ULL ] = X [ 399ULL ] ; t545 [ 2160ULL
] = X [ 407ULL ] ; t545 [ 2161ULL ] = X [ 414ULL ] ; t545 [ 2162ULL ] = X [
415ULL ] ; t545 [ 2163ULL ] = X [ 412ULL ] * 1000.0 ; t545 [ 2164ULL ] = X [
412ULL ] ; t545 [ 2165ULL ] = X [ 407ULL ] ; t545 [ 2166ULL ] = X [ 414ULL ]
; t545 [ 2167ULL ] = X [ 415ULL ] ; t545 [ 2168ULL ] = X [ 407ULL ] ; t545 [
2169ULL ] = U_idx_12 ; t545 [ 2170ULL ] = t939 * 9.5492965855137211 ; t545 [
2171ULL ] = X [ 397ULL ] ; t545 [ 2172ULL ] = X [ 54ULL ] * 0.1 ; t545 [
2173ULL ] = X [ 398ULL ] ; t545 [ 2174ULL ] = X [ 399ULL ] ; t545 [ 2175ULL ]
= X [ 70ULL ] ; t545 [ 2176ULL ] = X [ 70ULL ] ; t545 [ 2177ULL ] = X [
520ULL ] ; t545 [ 2178ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2179ULL ] = X [
521ULL ] ; t545 [ 2180ULL ] = X [ 522ULL ] ; t545 [ 2181ULL ] = X [ 506ULL ]
; t545 [ 2182ULL ] = X [ 507ULL ] ; t545 [ 2183ULL ] = X [ 508ULL ] ; t545 [
2184ULL ] = X [ 520ULL ] ; t545 [ 2185ULL ] = X [ 54ULL ] * 0.1 ; t545 [
2186ULL ] = X [ 521ULL ] ; t545 [ 2187ULL ] = X [ 522ULL ] ; t545 [ 2188ULL ]
= t946 * 1000.0 ; t545 [ 2189ULL ] = t946 * 1111.1111111111111 ; t545 [
2190ULL ] = t946 * 1111.1111111111111 ; t545 [ 2191ULL ] = - ( X [ 54ULL ] +
- 1.01325 ) * 99999.999999999985 ; t545 [ 2192ULL ] = X [ 545ULL ] * 1.0E-6 ;
t545 [ 2193ULL ] = t946 * 1000.0 ; t545 [ 2194ULL ] = X [ 506ULL ] ; t545 [
2195ULL ] = X [ 507ULL ] ; t545 [ 2196ULL ] = X [ 508ULL ] ; t545 [ 2197ULL ]
= X [ 520ULL ] ; t545 [ 2198ULL ] = X [ 54ULL ] * 0.1 ; t545 [ 2199ULL ] = X
[ 521ULL ] ; t545 [ 2200ULL ] = X [ 522ULL ] ; t545 [ 2201ULL ] = - ( X [
54ULL ] + - 1.01325 ) * 99999.999999999985 ; t545 [ 2202ULL ] = X [ 506ULL ]
- X [ 520ULL ] ; t545 [ 2203ULL ] = X [ 520ULL ] ; t545 [ 2204ULL ] = X [
54ULL ] * 0.1 ; t545 [ 2205ULL ] = X [ 521ULL ] ; t545 [ 2206ULL ] = X [
522ULL ] ; t545 [ 2207ULL ] = X [ 520ULL ] ; t545 [ 2208ULL ] = X [ 54ULL ] *
0.1 ; t545 [ 2209ULL ] = X [ 521ULL ] ; t545 [ 2210ULL ] = X [ 522ULL ] ;
t545 [ 2211ULL ] = - X [ 523ULL ] ; t545 [ 2212ULL ] = X [ 545ULL ] * 1.0E-6
; t545 [ 2213ULL ] = - X [ 512ULL ] ; t545 [ 2214ULL ] = - X [ 513ULL ] ;
t545 [ 2215ULL ] = - X [ 514ULL ] ; t545 [ 2216ULL ] = U_idx_12 ; t545 [
2217ULL ] = X [ 459ULL ] ; t545 [ 2218ULL ] = X [ 37ULL ] * 0.1 ; t545 [
2219ULL ] = X [ 460ULL ] ; t545 [ 2220ULL ] = X [ 461ULL ] ; t545 [ 2221ULL ]
= X [ 272ULL ] ; t545 [ 2222ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 2223ULL ] = X
[ 273ULL ] ; t545 [ 2224ULL ] = X [ 274ULL ] ; t545 [ 2225ULL ] = X [ 459ULL
] ; t545 [ 2226ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 2227ULL ] = X [ 460ULL ] ;
t545 [ 2228ULL ] = X [ 461ULL ] ; t545 [ 2229ULL ] = X [ 546ULL ] ; t545 [
2230ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 2231ULL ] = X [ 547ULL ] ; t545 [
2232ULL ] = X [ 548ULL ] ; t545 [ 2233ULL ] = X [ 272ULL ] ; t545 [ 2234ULL ]
= X [ 37ULL ] * 0.1 ; t545 [ 2235ULL ] = X [ 273ULL ] ; t545 [ 2236ULL ] = X
[ 274ULL ] ; t545 [ 2237ULL ] = X [ 73ULL ] ; t545 [ 2238ULL ] = X [ 37ULL ]
* 0.1 ; t545 [ 2239ULL ] = X [ 74ULL ] ; t545 [ 2240ULL ] = X [ 75ULL ] ; for
( t691 = 0ULL ; t691 < 8ULL ; t691 ++ ) { t545 [ t691 + 2241ULL ] = t642 [
t691 ] ; } t545 [ 2249ULL ] = X [ 73ULL ] ; t545 [ 2250ULL ] = X [ 549ULL ] ;
t545 [ 2251ULL ] = - X [ 490ULL ] ; t545 [ 2252ULL ] = X [ 553ULL ] ; t545 [
2253ULL ] = - X [ 287ULL ] ; t545 [ 2254ULL ] = X [ 73ULL ] + - 273.15 ; t545
[ 2255ULL ] = X [ 74ULL ] ; t545 [ 2256ULL ] = X [ 551ULL ] ; t545 [ 2257ULL
] = X [ 75ULL ] ; t545 [ 2258ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 2259ULL ] =
t954 ; t545 [ 2260ULL ] = X [ 550ULL ] ; t545 [ 2261ULL ] = X [ 73ULL ] ;
t545 [ 2262ULL ] = X [ 74ULL ] ; t545 [ 2263ULL ] = X [ 75ULL ] ; t545 [
2264ULL ] = t955 ; t545 [ 2265ULL ] = X [ 459ULL ] ; t545 [ 2266ULL ] = X [
37ULL ] * 0.1 ; t545 [ 2267ULL ] = X [ 460ULL ] ; t545 [ 2268ULL ] = X [
461ULL ] ; t545 [ 2269ULL ] = - X [ 490ULL ] ; t545 [ 2270ULL ] = X [ 554ULL
] ; t545 [ 2271ULL ] = - X [ 485ULL ] ; t545 [ 2272ULL ] = - X [ 495ULL ] ;
t545 [ 2273ULL ] = - X [ 496ULL ] ; t545 [ 2274ULL ] = X [ 555ULL ] ; t545 [
2275ULL ] = X [ 556ULL ] ; t545 [ 2276ULL ] = X [ 546ULL ] ; t545 [ 2277ULL ]
= X [ 37ULL ] * 0.1 ; t545 [ 2278ULL ] = X [ 547ULL ] ; t545 [ 2279ULL ] = X
[ 548ULL ] ; t545 [ 2280ULL ] = X [ 553ULL ] ; t545 [ 2281ULL ] = X [ 557ULL
] ; t545 [ 2282ULL ] = t956 ; t545 [ 2283ULL ] = X [ 205ULL ] ; t545 [
2284ULL ] = X [ 207ULL ] ; t545 [ 2285ULL ] = X [ 558ULL ] ; t545 [ 2286ULL ]
= X [ 559ULL ] ; t545 [ 2287ULL ] = X [ 272ULL ] ; t545 [ 2288ULL ] = X [
37ULL ] * 0.1 ; t545 [ 2289ULL ] = X [ 273ULL ] ; t545 [ 2290ULL ] = X [
274ULL ] ; t545 [ 2291ULL ] = - X [ 287ULL ] ; t545 [ 2292ULL ] = X [ 560ULL
] ; t545 [ 2293ULL ] = - X [ 282ULL ] ; t545 [ 2294ULL ] = - X [ 289ULL ] ;
t545 [ 2295ULL ] = - X [ 290ULL ] ; t545 [ 2296ULL ] = X [ 561ULL ] ; t545 [
2297ULL ] = X [ 562ULL ] ; t545 [ 2298ULL ] = t959 ; t545 [ 2299ULL ] = - X [
485ULL ] ; t545 [ 2300ULL ] = t956 ; t545 [ 2301ULL ] = - X [ 282ULL ] ; t545
[ 2302ULL ] = - X [ 495ULL ] ; t545 [ 2303ULL ] = X [ 205ULL ] ; t545 [
2304ULL ] = - X [ 289ULL ] ; t545 [ 2305ULL ] = - X [ 496ULL ] ; t545 [
2306ULL ] = X [ 207ULL ] ; t545 [ 2307ULL ] = - X [ 290ULL ] ; t545 [ 2308ULL
] = ( 1.0 - X [ 75ULL ] ) - X [ 74ULL ] ; t545 [ 2309ULL ] = X [ 552ULL ] ;
t545 [ 2310ULL ] = X [ 169ULL ] ; t545 [ 2311ULL ] = X [ 170ULL ] * 0.1 ;
t545 [ 2312ULL ] = X [ 171ULL ] ; t545 [ 2313ULL ] = X [ 172ULL ] ; t545 [
2314ULL ] = X [ 546ULL ] ; t545 [ 2315ULL ] = X [ 37ULL ] * 0.1 ; t545 [
2316ULL ] = X [ 547ULL ] ; t545 [ 2317ULL ] = X [ 548ULL ] ; t545 [ 2318ULL ]
= X [ 563ULL ] ; t545 [ 2319ULL ] = X [ 566ULL ] ; t545 [ 2320ULL ] = X [
169ULL ] ; t545 [ 2321ULL ] = X [ 170ULL ] * 0.1 ; t545 [ 2322ULL ] = X [
171ULL ] ; t545 [ 2323ULL ] = X [ 172ULL ] ; t545 [ 2324ULL ] = X [ 202ULL ]
; t545 [ 2325ULL ] = X [ 567ULL ] ; t545 [ 2326ULL ] = t956 ; t545 [ 2327ULL
] = X [ 205ULL ] ; t545 [ 2328ULL ] = X [ 207ULL ] ; t545 [ 2329ULL ] = X [
568ULL ] ; t545 [ 2330ULL ] = X [ 569ULL ] ; t545 [ 2331ULL ] = t956 ; t545 [
2332ULL ] = X [ 564ULL ] ; t545 [ 2333ULL ] = X [ 565ULL ] ; t545 [ 2334ULL ]
= X [ 546ULL ] ; t545 [ 2335ULL ] = X [ 37ULL ] * 0.1 ; t545 [ 2336ULL ] = X
[ 547ULL ] ; t545 [ 2337ULL ] = X [ 548ULL ] ; t545 [ 2338ULL ] = - X [
553ULL ] ; t545 [ 2339ULL ] = X [ 567ULL ] ; t545 [ 2340ULL ] = - t956 ; t545
[ 2341ULL ] = - X [ 205ULL ] ; t545 [ 2342ULL ] = - X [ 207ULL ] ; t545 [
2343ULL ] = X [ 568ULL ] ; t545 [ 2344ULL ] = X [ 569ULL ] ; t545 [ 2345ULL ]
= - t956 ; t545 [ 2346ULL ] = t956 ; t545 [ 2347ULL ] = X [ 202ULL ] ; t545 [
2348ULL ] = - X [ 553ULL ] ; t545 [ 2349ULL ] = X [ 205ULL ] ; t545 [ 2350ULL
] = - X [ 205ULL ] ; t545 [ 2351ULL ] = X [ 207ULL ] ; t545 [ 2352ULL ] = - X
[ 207ULL ] ; t545 [ 2353ULL ] = t953 ; t545 [ 2354ULL ] = U_idx_4 ; t545 [
2355ULL ] = U_idx_4 * 0.01 ; t545 [ 2356ULL ] = X [ 73ULL ] ; t545 [ 2357ULL
] = X [ 73ULL ] ; t545 [ 2358ULL ] = X [ 169ULL ] ; t545 [ 2359ULL ] = X [
170ULL ] * 0.1 ; t545 [ 2360ULL ] = X [ 171ULL ] ; t545 [ 2361ULL ] = X [
172ULL ] ; t545 [ 2362ULL ] = U_idx_4 ; t545 [ 2363ULL ] = t799 ; t545 [
2364ULL ] = t799 ; t545 [ 2365ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t545
[ 2366ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2367ULL ] = t799 ;
t545 [ 2368ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2369ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2370ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2371ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2372ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2373ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2374ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t545 [ 2375ULL ] = X [ 5ULL ] ; t545 [
2376ULL ] = U_idx_13 ; t545 [ 2377ULL ] = X [ 5ULL ] ; t545 [ 2378ULL ] =
Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q * 1000.0 ; t545 [
2379ULL ] = Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q * 1000.0 ;
t545 [ 2380ULL ] = - X [ 5ULL ] ; t545 [ 2381ULL ] = X [ 5ULL ] ; t545 [
2382ULL ] = Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q * 1.0E+6 ;
t545 [ 2383ULL ] = Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q *
1000.0 ; t545 [ 2384ULL ] = Fuel_Cell_Current_Sensor1_I ; t545 [ 2385ULL ] =
Fuel_Cell_Thermal1_Controlled_Heat_Flow_Rate_Source_Q * 1.0E+6 ; t545 [
2386ULL ] = X [ 5ULL ] ; t545 [ 2387ULL ] = X [ 570ULL ] * 1000.0 ; t545 [
2388ULL ] = X [ 5ULL ] ; t545 [ 2389ULL ] = Fuel_Cell_Current_Sensor1_I ;
t545 [ 2390ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [ 2391ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2392ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2393ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2394ULL ] = X [ 168ULL ] ; t545
[ 2395ULL ] = X [ 168ULL ] ; t545 [ 2396ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2397ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2398ULL ] = X [ 168ULL ] ; t545
[ 2399ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [ 2400ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2401ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2402ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2403ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2404ULL ] = X [ 13ULL ] ; t545 [
2405ULL ] = X [ 76ULL ] ; t545 [ 2406ULL ] = X [ 76ULL ] ; t545 [ 2407ULL ] =
U_idx_14 ; t545 [ 2408ULL ] = Battery_System_DC_DC_Converter_p2_v ; t545 [
2409ULL ] = X [ 13ULL ] ; t545 [ 2410ULL ] = X [ 164ULL ] * 1000.0 ; t545 [
2411ULL ] = X [ 168ULL ] ; t545 [ 2412ULL ] = X [ 571ULL ] * 1000.0 ; t545 [
2413ULL ] = X [ 572ULL ] ; t545 [ 2414ULL ] = X [ 13ULL ] ; t545 [ 2415ULL ]
= X [ 573ULL ] ; t545 [ 2416ULL ] = X [ 573ULL ] ; t545 [ 2417ULL ] = X [
574ULL ] ; t545 [ 2418ULL ] = X [ 77ULL ] ; t545 [ 2419ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2420ULL ] = X [ 76ULL ] *
9.5492965855137211 ; t545 [ 2421ULL ] = X [ 76ULL ] ; t545 [ 2422ULL ] =
U_idx_15 ; t545 [ 2423ULL ] = - X [ 572ULL ] ; t545 [ 2424ULL ] = U_idx_15 ;
t545 [ 2425ULL ] = X [ 76ULL ] ; t545 [ 2426ULL ] = X [ 76ULL ] ; t545 [
2427ULL ] = - X [ 572ULL ] ; t545 [ 2428ULL ] = - X [ 572ULL ] ; t545 [
2429ULL ] = X [ 76ULL ] ; t545 [ 2430ULL ] = X [ 76ULL ] ; t545 [ 2431ULL ] =
- X [ 572ULL ] ; t545 [ 2432ULL ] = - X [ 572ULL ] ; t545 [ 2433ULL ] = - X [
572ULL ] ; t545 [ 2434ULL ] = X [ 76ULL ] ; t545 [ 2435ULL ] = U_idx_15 ;
t545 [ 2436ULL ] = U_idx_14 ; t545 [ 2437ULL ] =
Battery_System_DC_DC_Converter_p2_v ; t545 [ 2438ULL ] = U_idx_0 ; t545 [
2439ULL ] = U_idx_0 ; t545 [ 2440ULL ] = ( ( ( ( X [ 0ULL ] * 0.01 + X [ 7ULL
] * 0.0002 ) + X [ 8ULL ] * 2.0E-6 ) + - X [ 119ULL ] ) + U_idx_0 * -
0.010202000000000001 ) * 1000.0 ; t545 [ 2441ULL ] = U_idx_0 ; t545 [ 2442ULL
] = U_idx_0 ; t545 [ 2443ULL ] = U_idx_0 ; for ( b = 0 ; b < 2444 ; b ++ ) {
out . mX [ b ] = t545 [ b ] ; } ( void ) LC ; ( void ) t1243 ; return 0 ; }

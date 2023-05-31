#include "ne_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_sys_struct.h"
#include "FCElectricPlant_ac851afd_1_ds_f.h"
#include "FCElectricPlant_ac851afd_1_ds.h"
#include "FCElectricPlant_ac851afd_1_ds_externals.h"
#include "FCElectricPlant_ac851afd_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_ac851afd_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t5723 , NeDsMethodOutput * t5724 ) { ETTS0 ae_efOut ;
ETTS0 aj_efOut ; ETTS0 ak_efOut ; ETTS0 al_efOut ; ETTS0 aq_efOut ; ETTS0
b_efOut ; ETTS0 bb_efOut ; ETTS0 bcb_efOut ; ETTS0 bdb_efOut ; ETTS0 bf_efOut
; ETTS0 bk_efOut ; ETTS0 bn_efOut ; ETTS0 bt_efOut ; ETTS0 bx_efOut ; ETTS0
cb_efOut ; ETTS0 cg_efOut ; ETTS0 cj_efOut ; ETTS0 cm_efOut ; ETTS0 cp_efOut
; ETTS0 cr_efOut ; ETTS0 cw_efOut ; ETTS0 d_efOut ; ETTS0 dc_efOut ; ETTS0
ddb_efOut ; ETTS0 dh_efOut ; ETTS0 dk_efOut ; ETTS0 dy_efOut ; ETTS0 eb_efOut
; ETTS0 ed_efOut ; ETTS0 ee_efOut ; ETTS0 efOut ; ETTS0 ei_efOut ; ETTS0
eq_efOut ; ETTS0 f_efOut ; ETTS0 fb_efOut ; ETTS0 fc_efOut ; ETTS0 fcb_efOut
; ETTS0 fd_efOut ; ETTS0 fdb_efOut ; ETTS0 ff_efOut ; ETTS0 fi_efOut ; ETTS0
fk_efOut ; ETTS0 fn_efOut ; ETTS0 ft_efOut ; ETTS0 g_efOut ; ETTS0 gc_efOut ;
ETTS0 gg_efOut ; ETTS0 gj_efOut ; ETTS0 gl_efOut ; ETTS0 gm_efOut ; ETTS0
gp_efOut ; ETTS0 gw_efOut ; ETTS0 hb_efOut ; ETTS0 hdb_efOut ; ETTS0 hh_efOut
; ETTS0 hi_efOut ; ETTS0 hy_efOut ; ETTS0 i_efOut ; ETTS0 ib_efOut ; ETTS0
ic_efOut ; ETTS0 ij_efOut ; ETTS0 iq_efOut ; ETTS0 jd_efOut ; ETTS0 jdb_efOut
; ETTS0 ji_efOut ; ETTS0 jk_efOut ; ETTS0 jn_efOut ; ETTS0 jr_efOut ; ETTS0
jt_efOut ; ETTS0 k_efOut ; ETTS0 kab_efOut ; ETTS0 kb_efOut ; ETTS0 kbb_efOut
; ETTS0 kc_efOut ; ETTS0 kj_efOut ; ETTS0 kl_efOut ; ETTS0 km_efOut ; ETTS0
ks_efOut ; ETTS0 kw_efOut ; ETTS0 l_efOut ; ETTS0 ld_efOut ; ETTS0 lj_efOut ;
ETTS0 lk_efOut ; ETTS0 lo_efOut ; ETTS0 mb_efOut ; ETTS0 mcb_efOut ; ETTS0
mi_efOut ; ETTS0 mq_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ; ETTS0 nd_efOut ;
ETTS0 ne_efOut ; ETTS0 ni_efOut ; ETTS0 nk_efOut ; ETTS0 nn_efOut ; ETTS0
nr_efOut ; ETTS0 nt_efOut ; ETTS0 o_efOut ; ETTS0 oab_efOut ; ETTS0 obb_efOut
; ETTS0 odb_efOut ; ETTS0 of_efOut ; ETTS0 ok_efOut ; ETTS0 os_efOut ; ETTS0
ou_efOut ; ETTS0 ow_efOut ; ETTS0 oy_efOut ; ETTS0 pb_efOut ; ETTS0 pc_efOut
; ETTS0 pdb_efOut ; ETTS0 pg_efOut ; ETTS0 pi_efOut ; ETTS0 po_efOut ; ETTS0
pv_efOut ; ETTS0 q_efOut ; ETTS0 qc_efOut ; ETTS0 qcb_efOut ; ETTS0 qdb_efOut
; ETTS0 qh_efOut ; ETTS0 qm_efOut ; ETTS0 qq_efOut ; ETTS0 qv_efOut ; ETTS0
r_efOut ; ETTS0 rb_efOut ; ETTS0 rdb_efOut ; ETTS0 re_efOut ; ETTS0 ri_efOut
; ETTS0 rn_efOut ; ETTS0 sab_efOut ; ETTS0 sb_efOut ; ETTS0 sbb_efOut ; ETTS0
sd_efOut ; ETTS0 sdb_efOut ; ETTS0 sf_efOut ; ETTS0 si_efOut ; ETTS0 sj_efOut
; ETTS0 ss_efOut ; ETTS0 su_efOut ; ETTS0 sw_efOut ; ETTS0 sy_efOut ; ETTS0
t0 ; ETTS0 t104 ; ETTS0 t105 ; ETTS0 t116 ; ETTS0 t118 ; ETTS0 t124 ; ETTS0
t125 ; ETTS0 t126 ; ETTS0 t128 ; ETTS0 t136 ; ETTS0 t137 ; ETTS0 t143 ; ETTS0
t145 ; ETTS0 t146 ; ETTS0 t148 ; ETTS0 t149 ; ETTS0 t151 ; ETTS0 t152 ; ETTS0
t153 ; ETTS0 t154 ; ETTS0 t156 ; ETTS0 t157 ; ETTS0 t158 ; ETTS0 t162 ; ETTS0
t165 ; ETTS0 t168 ; ETTS0 t170 ; ETTS0 t172 ; ETTS0 t173 ; ETTS0 t177 ; ETTS0
t180 ; ETTS0 t181 ; ETTS0 t182 ; ETTS0 t183 ; ETTS0 t185 ; ETTS0 t186 ; ETTS0
t187 ; ETTS0 t188 ; ETTS0 t189 ; ETTS0 t190 ; ETTS0 t192 ; ETTS0 t26 ; ETTS0
t27 ; ETTS0 t49 ; ETTS0 t50 ; ETTS0 t54 ; ETTS0 t6 ; ETTS0 t67 ; ETTS0 t68 ;
ETTS0 t73 ; ETTS0 t74 ; ETTS0 t77 ; ETTS0 t79 ; ETTS0 t80 ; ETTS0 t82 ; ETTS0
t83 ; ETTS0 t85 ; ETTS0 t86 ; ETTS0 t89 ; ETTS0 t_efOut ; ETTS0 td_efOut ;
ETTS0 tdb_efOut ; ETTS0 tg_efOut ; ETTS0 tl_efOut ; ETTS0 to_efOut ; ETTS0
tv_efOut ; ETTS0 ub_efOut ; ETTS0 uc_efOut ; ETTS0 ucb_efOut ; ETTS0
udb_efOut ; ETTS0 uh_efOut ; ETTS0 ui_efOut ; ETTS0 uj_efOut ; ETTS0 uq_efOut
; ETTS0 ux_efOut ; ETTS0 v_efOut ; ETTS0 vb_efOut ; ETTS0 vd_efOut ; ETTS0
vdb_efOut ; ETTS0 vj_efOut ; ETTS0 vk_efOut ; ETTS0 w_efOut ; ETTS0 wab_efOut
; ETTS0 wbb_efOut ; ETTS0 wc_efOut ; ETTS0 wcb_efOut ; ETTS0 wdb_efOut ;
ETTS0 wi_efOut ; ETTS0 wm_efOut ; ETTS0 ws_efOut ; ETTS0 wu_efOut ; ETTS0
ww_efOut ; ETTS0 wy_efOut ; ETTS0 xb_efOut ; ETTS0 xd_efOut ; ETTS0 xi_efOut
; ETTS0 xj_efOut ; ETTS0 xk_efOut ; ETTS0 xl_efOut ; ETTS0 xo_efOut ; ETTS0
xt_efOut ; ETTS0 xv_efOut ; ETTS0 y_efOut ; ETTS0 yb_efOut ; ETTS0 yc_efOut ;
ETTS0 ycb_efOut ; ETTS0 yx_efOut ; PmRealVector out ; real_T X [ 575 ] ;
real_T t2045 [ 575 ] ; real_T nonscalar1 [ 7 ] ; real_T nonscalar59 [ 7 ] ;
real_T nonscalar58 [ 6 ] ; real_T nonscalar63 [ 5 ] ; real_T nonscalar64 [ 3
] ; real_T t2624 [ 2 ] ; real_T aab_efOut [ 1 ] ; real_T ab_efOut [ 1 ] ;
real_T abb_efOut [ 1 ] ; real_T ac_efOut [ 1 ] ; real_T acb_efOut [ 1 ] ;
real_T ad_efOut [ 1 ] ; real_T adb_efOut [ 1 ] ; real_T aeb_efOut [ 1 ] ;
real_T af_efOut [ 1 ] ; real_T afb_efOut [ 1 ] ; real_T ag_efOut [ 1 ] ;
real_T ah_efOut [ 1 ] ; real_T ai_efOut [ 1 ] ; real_T am_efOut [ 1 ] ;
real_T an_efOut [ 1 ] ; real_T ao_efOut [ 1 ] ; real_T ap_efOut [ 1 ] ;
real_T ar_efOut [ 1 ] ; real_T as_efOut [ 1 ] ; real_T at_efOut [ 1 ] ;
real_T au_efOut [ 1 ] ; real_T av_efOut [ 1 ] ; real_T aw_efOut [ 1 ] ;
real_T ax_efOut [ 1 ] ; real_T ay_efOut [ 1 ] ; real_T bab_efOut [ 1 ] ;
real_T bbb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ;
real_T be_efOut [ 1 ] ; real_T beb_efOut [ 1 ] ; real_T bfb_efOut [ 1 ] ;
real_T bg_efOut [ 1 ] ; real_T bh_efOut [ 1 ] ; real_T bi_efOut [ 1 ] ;
real_T bj_efOut [ 1 ] ; real_T bl_efOut [ 1 ] ; real_T bm_efOut [ 1 ] ;
real_T bo_efOut [ 1 ] ; real_T bp_efOut [ 1 ] ; real_T bq_efOut [ 1 ] ;
real_T br_efOut [ 1 ] ; real_T bs_efOut [ 1 ] ; real_T bu_efOut [ 1 ] ;
real_T bv_efOut [ 1 ] ; real_T bw_efOut [ 1 ] ; real_T by_efOut [ 1 ] ;
real_T c_efOut [ 1 ] ; real_T cab_efOut [ 1 ] ; real_T cbb_efOut [ 1 ] ;
real_T cc_efOut [ 1 ] ; real_T ccb_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ;
real_T cdb_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ; real_T ceb_efOut [ 1 ] ;
real_T cf_efOut [ 1 ] ; real_T cfb_efOut [ 1 ] ; real_T ch_efOut [ 1 ] ;
real_T ci_efOut [ 1 ] ; real_T ck_efOut [ 1 ] ; real_T cl_efOut [ 1 ] ;
real_T cn_efOut [ 1 ] ; real_T co_efOut [ 1 ] ; real_T cq_efOut [ 1 ] ;
real_T cs_efOut [ 1 ] ; real_T ct_efOut [ 1 ] ; real_T cu_efOut [ 1 ] ;
real_T cv_efOut [ 1 ] ; real_T cx_efOut [ 1 ] ; real_T cy_efOut [ 1 ] ;
real_T dab_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T dbb_efOut [ 1 ] ;
real_T dcb_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ;
real_T deb_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T dfb_efOut [ 1 ] ;
real_T dg_efOut [ 1 ] ; real_T di_efOut [ 1 ] ; real_T dj_efOut [ 1 ] ;
real_T dl_efOut [ 1 ] ; real_T dm_efOut [ 1 ] ; real_T dn_efOut [ 1 ] ;
real_T do_efOut [ 1 ] ; real_T dp_efOut [ 1 ] ; real_T dq_efOut [ 1 ] ;
real_T dr_efOut [ 1 ] ; real_T ds_efOut [ 1 ] ; real_T dt_efOut [ 1 ] ;
real_T du_efOut [ 1 ] ; real_T dv_efOut [ 1 ] ; real_T dw_efOut [ 1 ] ;
real_T dx_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T eab_efOut [ 1 ] ;
real_T ebb_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T ecb_efOut [ 1 ] ;
real_T edb_efOut [ 1 ] ; real_T eeb_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ;
real_T efb_efOut [ 1 ] ; real_T eg_efOut [ 1 ] ; real_T eh_efOut [ 1 ] ;
real_T ej_efOut [ 1 ] ; real_T ek_efOut [ 1 ] ; real_T el_efOut [ 1 ] ;
real_T em_efOut [ 1 ] ; real_T en_efOut [ 1 ] ; real_T eo_efOut [ 1 ] ;
real_T ep_efOut [ 1 ] ; real_T er_efOut [ 1 ] ; real_T es_efOut [ 1 ] ;
real_T et_efOut [ 1 ] ; real_T eu_efOut [ 1 ] ; real_T ev_efOut [ 1 ] ;
real_T ew_efOut [ 1 ] ; real_T ex_efOut [ 1 ] ; real_T ey_efOut [ 1 ] ;
real_T fab_efOut [ 1 ] ; real_T fbb_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ;
real_T feb_efOut [ 1 ] ; real_T ffb_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ;
real_T fh_efOut [ 1 ] ; real_T fj_efOut [ 1 ] ; real_T fl_efOut [ 1 ] ;
real_T fm_efOut [ 1 ] ; real_T fo_efOut [ 1 ] ; real_T fp_efOut [ 1 ] ;
real_T fq_efOut [ 1 ] ; real_T fr_efOut [ 1 ] ; real_T fs_efOut [ 1 ] ;
real_T fu_efOut [ 1 ] ; real_T fv_efOut [ 1 ] ; real_T fw_efOut [ 1 ] ;
real_T fx_efOut [ 1 ] ; real_T fy_efOut [ 1 ] ; real_T gab_efOut [ 1 ] ;
real_T gb_efOut [ 1 ] ; real_T gbb_efOut [ 1 ] ; real_T gcb_efOut [ 1 ] ;
real_T gd_efOut [ 1 ] ; real_T gdb_efOut [ 1 ] ; real_T ge_efOut [ 1 ] ;
real_T geb_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T gfb_efOut [ 1 ] ;
real_T gh_efOut [ 1 ] ; real_T gi_efOut [ 1 ] ; real_T gk_efOut [ 1 ] ;
real_T gn_efOut [ 1 ] ; real_T go_efOut [ 1 ] ; real_T gq_efOut [ 1 ] ;
real_T gr_efOut [ 1 ] ; real_T gs_efOut [ 1 ] ; real_T gt_efOut [ 1 ] ;
real_T gu_efOut [ 1 ] ; real_T gv_efOut [ 1 ] ; real_T gx_efOut [ 1 ] ;
real_T gy_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T hab_efOut [ 1 ] ;
real_T hbb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hcb_efOut [ 1 ] ;
real_T hd_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T heb_efOut [ 1 ] ;
real_T hf_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T hj_efOut [ 1 ] ;
real_T hk_efOut [ 1 ] ; real_T hl_efOut [ 1 ] ; real_T hm_efOut [ 1 ] ;
real_T hn_efOut [ 1 ] ; real_T ho_efOut [ 1 ] ; real_T hp_efOut [ 1 ] ;
real_T hq_efOut [ 1 ] ; real_T hr_efOut [ 1 ] ; real_T hs_efOut [ 1 ] ;
real_T ht_efOut [ 1 ] ; real_T hu_efOut [ 1 ] ; real_T hv_efOut [ 1 ] ;
real_T hw_efOut [ 1 ] ; real_T hx_efOut [ 1 ] ; real_T iab_efOut [ 1 ] ;
real_T ibb_efOut [ 1 ] ; real_T icb_efOut [ 1 ] ; real_T id_efOut [ 1 ] ;
real_T idb_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T ieb_efOut [ 1 ] ;
real_T if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T ih_efOut [ 1 ] ;
real_T ii_efOut [ 1 ] ; real_T ik_efOut [ 1 ] ; real_T il_efOut [ 1 ] ;
real_T im_efOut [ 1 ] ; real_T in_efOut [ 1 ] ; real_T io_efOut [ 1 ] ;
real_T ip_efOut [ 1 ] ; real_T ir_efOut [ 1 ] ; real_T is_efOut [ 1 ] ;
real_T it_efOut [ 1 ] ; real_T iu_efOut [ 1 ] ; real_T iv_efOut [ 1 ] ;
real_T iw_efOut [ 1 ] ; real_T ix_efOut [ 1 ] ; real_T iy_efOut [ 1 ] ;
real_T j_efOut [ 1 ] ; real_T jab_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ;
real_T jbb_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T jcb_efOut [ 1 ] ;
real_T je_efOut [ 1 ] ; real_T jeb_efOut [ 1 ] ; real_T jf_efOut [ 1 ] ;
real_T jg_efOut [ 1 ] ; real_T jh_efOut [ 1 ] ; real_T jj_efOut [ 1 ] ;
real_T jl_efOut [ 1 ] ; real_T jm_efOut [ 1 ] ; real_T jo_efOut [ 1 ] ;
real_T jp_efOut [ 1 ] ; real_T jq_efOut [ 1 ] ; real_T js_efOut [ 1 ] ;
real_T ju_efOut [ 1 ] ; real_T jv_efOut [ 1 ] ; real_T jw_efOut [ 1 ] ;
real_T jx_efOut [ 1 ] ; real_T jy_efOut [ 1 ] ; real_T kcb_efOut [ 1 ] ;
real_T kd_efOut [ 1 ] ; real_T kdb_efOut [ 1 ] ; real_T ke_efOut [ 1 ] ;
real_T keb_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ;
real_T kh_efOut [ 1 ] ; real_T ki_efOut [ 1 ] ; real_T kk_efOut [ 1 ] ;
real_T kn_efOut [ 1 ] ; real_T ko_efOut [ 1 ] ; real_T kp_efOut [ 1 ] ;
real_T kq_efOut [ 1 ] ; real_T kr_efOut [ 1 ] ; real_T kt_efOut [ 1 ] ;
real_T ku_efOut [ 1 ] ; real_T kv_efOut [ 1 ] ; real_T kx_efOut [ 1 ] ;
real_T ky_efOut [ 1 ] ; real_T lab_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ;
real_T lbb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T lcb_efOut [ 1 ] ;
real_T ldb_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T leb_efOut [ 1 ] ;
real_T lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T lh_efOut [ 1 ] ;
real_T li_efOut [ 1 ] ; real_T ll_efOut [ 1 ] ; real_T lm_efOut [ 1 ] ;
real_T ln_efOut [ 1 ] ; real_T lp_efOut [ 1 ] ; real_T lq_efOut [ 1 ] ;
real_T lr_efOut [ 1 ] ; real_T ls_efOut [ 1 ] ; real_T lt_efOut [ 1 ] ;
real_T lu_efOut [ 1 ] ; real_T lv_efOut [ 1 ] ; real_T lw_efOut [ 1 ] ;
real_T lx_efOut [ 1 ] ; real_T ly_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T
mab_efOut [ 1 ] ; real_T mbb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
md_efOut [ 1 ] ; real_T mdb_efOut [ 1 ] ; real_T me_efOut [ 1 ] ; real_T
meb_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T
mh_efOut [ 1 ] ; real_T mj_efOut [ 1 ] ; real_T mk_efOut [ 1 ] ; real_T
ml_efOut [ 1 ] ; real_T mm_efOut [ 1 ] ; real_T mn_efOut [ 1 ] ; real_T
mo_efOut [ 1 ] ; real_T mp_efOut [ 1 ] ; real_T mr_efOut [ 1 ] ; real_T
ms_efOut [ 1 ] ; real_T mt_efOut [ 1 ] ; real_T mu_efOut [ 1 ] ; real_T
mv_efOut [ 1 ] ; real_T mw_efOut [ 1 ] ; real_T mx_efOut [ 1 ] ; real_T
my_efOut [ 1 ] ; real_T nab_efOut [ 1 ] ; real_T nbb_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T ncb_efOut [ 1 ] ; real_T ndb_efOut [ 1 ] ; real_T
neb_efOut [ 1 ] ; real_T nf_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T
nh_efOut [ 1 ] ; real_T nj_efOut [ 1 ] ; real_T nl_efOut [ 1 ] ; real_T
nm_efOut [ 1 ] ; real_T no_efOut [ 1 ] ; real_T np_efOut [ 1 ] ; real_T
nq_efOut [ 1 ] ; real_T ns_efOut [ 1 ] ; real_T nu_efOut [ 1 ] ; real_T
nv_efOut [ 1 ] ; real_T nw_efOut [ 1 ] ; real_T nx_efOut [ 1 ] ; real_T
ny_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T
ocb_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T oe_efOut [ 1 ] ; real_T
oeb_efOut [ 1 ] ; real_T og_efOut [ 1 ] ; real_T oh_efOut [ 1 ] ; real_T
oi_efOut [ 1 ] ; real_T oj_efOut [ 1 ] ; real_T ol_efOut [ 1 ] ; real_T
om_efOut [ 1 ] ; real_T on_efOut [ 1 ] ; real_T oo_efOut [ 1 ] ; real_T
op_efOut [ 1 ] ; real_T oq_efOut [ 1 ] ; real_T or_efOut [ 1 ] ; real_T
ot_efOut [ 1 ] ; real_T ov_efOut [ 1 ] ; real_T ox_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pab_efOut [ 1 ] ; real_T pbb_efOut [ 1 ] ; real_T
pcb_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T pe_efOut [ 1 ] ; real_T
peb_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T ph_efOut [ 1 ] ; real_T
pj_efOut [ 1 ] ; real_T pk_efOut [ 1 ] ; real_T pl_efOut [ 1 ] ; real_T
pm_efOut [ 1 ] ; real_T pn_efOut [ 1 ] ; real_T pp_efOut [ 1 ] ; real_T
pq_efOut [ 1 ] ; real_T pr_efOut [ 1 ] ; real_T ps_efOut [ 1 ] ; real_T
pt_efOut [ 1 ] ; real_T pu_efOut [ 1 ] ; real_T pw_efOut [ 1 ] ; real_T
px_efOut [ 1 ] ; real_T py_efOut [ 1 ] ; real_T qab_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T qbb_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T
qe_efOut [ 1 ] ; real_T qeb_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T
qg_efOut [ 1 ] ; real_T qi_efOut [ 1 ] ; real_T qj_efOut [ 1 ] ; real_T
qk_efOut [ 1 ] ; real_T ql_efOut [ 1 ] ; real_T qn_efOut [ 1 ] ; real_T
qo_efOut [ 1 ] ; real_T qp_efOut [ 1 ] ; real_T qr_efOut [ 1 ] ; real_T
qs_efOut [ 1 ] ; real_T qt_efOut [ 1 ] ; real_T qu_efOut [ 1 ] ; real_T
qw_efOut [ 1 ] ; real_T qx_efOut [ 1 ] ; real_T qy_efOut [ 1 ] ; real_T
rab_efOut [ 1 ] ; real_T rbb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T
rcb_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T reb_efOut [ 1 ] ; real_T
rf_efOut [ 1 ] ; real_T rg_efOut [ 1 ] ; real_T rh_efOut [ 1 ] ; real_T
rj_efOut [ 1 ] ; real_T rk_efOut [ 1 ] ; real_T rl_efOut [ 1 ] ; real_T
rm_efOut [ 1 ] ; real_T ro_efOut [ 1 ] ; real_T rp_efOut [ 1 ] ; real_T
rq_efOut [ 1 ] ; real_T rr_efOut [ 1 ] ; real_T rs_efOut [ 1 ] ; real_T
rt_efOut [ 1 ] ; real_T ru_efOut [ 1 ] ; real_T rv_efOut [ 1 ] ; real_T
rw_efOut [ 1 ] ; real_T rx_efOut [ 1 ] ; real_T ry_efOut [ 1 ] ; real_T
s_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T scb_efOut [ 1 ] ; real_T
se_efOut [ 1 ] ; real_T seb_efOut [ 1 ] ; real_T sg_efOut [ 1 ] ; real_T
sh_efOut [ 1 ] ; real_T sk_efOut [ 1 ] ; real_T sl_efOut [ 1 ] ; real_T
sm_efOut [ 1 ] ; real_T sn_efOut [ 1 ] ; real_T so_efOut [ 1 ] ; real_T
sp_efOut [ 1 ] ; real_T sq_efOut [ 1 ] ; real_T sr_efOut [ 1 ] ; real_T
st_efOut [ 1 ] ; real_T sv_efOut [ 1 ] ; real_T sx_efOut [ 1 ] ; real_T t1907
[ 1 ] ; real_T t2579 [ 1 ] ; real_T t2580 [ 1 ] ; real_T t2581 [ 1 ] ; real_T
tab_efOut [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T tbb_efOut [ 1 ] ; real_T
tc_efOut [ 1 ] ; real_T tcb_efOut [ 1 ] ; real_T te_efOut [ 1 ] ; real_T
teb_efOut [ 1 ] ; real_T tf_efOut [ 1 ] ; real_T th_efOut [ 1 ] ; real_T
ti_efOut [ 1 ] ; real_T tj_efOut [ 1 ] ; real_T tk_efOut [ 1 ] ; real_T
tm_efOut [ 1 ] ; real_T tn_efOut [ 1 ] ; real_T tp_efOut [ 1 ] ; real_T
tq_efOut [ 1 ] ; real_T tr_efOut [ 1 ] ; real_T ts_efOut [ 1 ] ; real_T
tt_efOut [ 1 ] ; real_T tu_efOut [ 1 ] ; real_T tw_efOut [ 1 ] ; real_T
tx_efOut [ 1 ] ; real_T ty_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T
uab_efOut [ 1 ] ; real_T ubb_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T
ue_efOut [ 1 ] ; real_T ueb_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ; real_T
ug_efOut [ 1 ] ; real_T uk_efOut [ 1 ] ; real_T ul_efOut [ 1 ] ; real_T
um_efOut [ 1 ] ; real_T un_efOut [ 1 ] ; real_T uo_efOut [ 1 ] ; real_T
up_efOut [ 1 ] ; real_T ur_efOut [ 1 ] ; real_T us_efOut [ 1 ] ; real_T
ut_efOut [ 1 ] ; real_T uu_efOut [ 1 ] ; real_T uv_efOut [ 1 ] ; real_T
uw_efOut [ 1 ] ; real_T uy_efOut [ 1 ] ; real_T vab_efOut [ 1 ] ; real_T
vbb_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T vcb_efOut [ 1 ] ; real_T
ve_efOut [ 1 ] ; real_T veb_efOut [ 1 ] ; real_T vf_efOut [ 1 ] ; real_T
vg_efOut [ 1 ] ; real_T vh_efOut [ 1 ] ; real_T vi_efOut [ 1 ] ; real_T
vl_efOut [ 1 ] ; real_T vm_efOut [ 1 ] ; real_T vn_efOut [ 1 ] ; real_T
vo_efOut [ 1 ] ; real_T vp_efOut [ 1 ] ; real_T vq_efOut [ 1 ] ; real_T
vr_efOut [ 1 ] ; real_T vs_efOut [ 1 ] ; real_T vt_efOut [ 1 ] ; real_T
vu_efOut [ 1 ] ; real_T vv_efOut [ 1 ] ; real_T vw_efOut [ 1 ] ; real_T
vx_efOut [ 1 ] ; real_T vy_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T
wd_efOut [ 1 ] ; real_T we_efOut [ 1 ] ; real_T web_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T wg_efOut [ 1 ] ; real_T wh_efOut [ 1 ] ; real_T
wj_efOut [ 1 ] ; real_T wk_efOut [ 1 ] ; real_T wl_efOut [ 1 ] ; real_T
wn_efOut [ 1 ] ; real_T wo_efOut [ 1 ] ; real_T wp_efOut [ 1 ] ; real_T
wq_efOut [ 1 ] ; real_T wr_efOut [ 1 ] ; real_T wt_efOut [ 1 ] ; real_T
wv_efOut [ 1 ] ; real_T wx_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
xab_efOut [ 1 ] ; real_T xbb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T
xcb_efOut [ 1 ] ; real_T xdb_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
xeb_efOut [ 1 ] ; real_T xf_efOut [ 1 ] ; real_T xg_efOut [ 1 ] ; real_T
xh_efOut [ 1 ] ; real_T xm_efOut [ 1 ] ; real_T xn_efOut [ 1 ] ; real_T
xp_efOut [ 1 ] ; real_T xq_efOut [ 1 ] ; real_T xr_efOut [ 1 ] ; real_T
xs_efOut [ 1 ] ; real_T xu_efOut [ 1 ] ; real_T xw_efOut [ 1 ] ; real_T
xx_efOut [ 1 ] ; real_T xy_efOut [ 1 ] ; real_T yab_efOut [ 1 ] ; real_T
ybb_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T ydb_efOut [ 1 ] ; real_T
ye_efOut [ 1 ] ; real_T yeb_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T
yg_efOut [ 1 ] ; real_T yh_efOut [ 1 ] ; real_T yi_efOut [ 1 ] ; real_T
yj_efOut [ 1 ] ; real_T yk_efOut [ 1 ] ; real_T yl_efOut [ 1 ] ; real_T
ym_efOut [ 1 ] ; real_T yn_efOut [ 1 ] ; real_T yo_efOut [ 1 ] ; real_T
yp_efOut [ 1 ] ; real_T yq_efOut [ 1 ] ; real_T yr_efOut [ 1 ] ; real_T
ys_efOut [ 1 ] ; real_T yt_efOut [ 1 ] ; real_T yu_efOut [ 1 ] ; real_T
yv_efOut [ 1 ] ; real_T yw_efOut [ 1 ] ; real_T yy_efOut [ 1 ] ; real_T
Electrical_Cooling_System_Flow_Restriction_Converter_MotorR_co0 ; real_T
Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 ; real_T
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio0 ; real_T
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 ; real_T
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv ; real_T
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I ; real_T
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T ; real_T
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in ; real_T
Electrical_Cooling_System_Tank_Tank_level ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi99 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_37 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M39 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M43 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_99 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip37 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce10 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato10 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T22 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M42 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress29 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant14 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant20 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant23 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T
U_idx_12 ; real_T U_idx_13 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4
; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1005 ; real_T intrm_sf_mf_1006 ; real_T
intrm_sf_mf_1047 ; real_T intrm_sf_mf_1092 ; real_T intrm_sf_mf_11 ; real_T
intrm_sf_mf_1120 ; real_T intrm_sf_mf_1123 ; real_T intrm_sf_mf_1144 ; real_T
intrm_sf_mf_1145 ; real_T intrm_sf_mf_1178 ; real_T intrm_sf_mf_1192 ; real_T
intrm_sf_mf_1219 ; real_T intrm_sf_mf_1259 ; real_T intrm_sf_mf_1262 ; real_T
intrm_sf_mf_1271 ; real_T intrm_sf_mf_1352 ; real_T intrm_sf_mf_1359 ; real_T
intrm_sf_mf_1368 ; real_T intrm_sf_mf_1385 ; real_T intrm_sf_mf_1436 ; real_T
intrm_sf_mf_1439 ; real_T intrm_sf_mf_1445 ; real_T intrm_sf_mf_1448 ; real_T
intrm_sf_mf_1493 ; real_T intrm_sf_mf_1527 ; real_T intrm_sf_mf_1536 ; real_T
intrm_sf_mf_1537 ; real_T intrm_sf_mf_1546 ; real_T intrm_sf_mf_1565 ; real_T
intrm_sf_mf_1571 ; real_T intrm_sf_mf_1574 ; real_T intrm_sf_mf_1576 ; real_T
intrm_sf_mf_1580 ; real_T intrm_sf_mf_1598 ; real_T intrm_sf_mf_1611 ; real_T
intrm_sf_mf_1625 ; real_T intrm_sf_mf_1637 ; real_T intrm_sf_mf_1659 ; real_T
intrm_sf_mf_1660 ; real_T intrm_sf_mf_1661 ; real_T intrm_sf_mf_1662 ; real_T
intrm_sf_mf_1673 ; real_T intrm_sf_mf_1690 ; real_T intrm_sf_mf_1699 ; real_T
intrm_sf_mf_1706 ; real_T intrm_sf_mf_1709 ; real_T intrm_sf_mf_1712 ; real_T
intrm_sf_mf_172 ; real_T intrm_sf_mf_1729 ; real_T intrm_sf_mf_1730 ; real_T
intrm_sf_mf_1733 ; real_T intrm_sf_mf_1736 ; real_T intrm_sf_mf_1752 ; real_T
intrm_sf_mf_1753 ; real_T intrm_sf_mf_1756 ; real_T intrm_sf_mf_1768 ; real_T
intrm_sf_mf_1770 ; real_T intrm_sf_mf_1772 ; real_T intrm_sf_mf_1800 ; real_T
intrm_sf_mf_1801 ; real_T intrm_sf_mf_1928 ; real_T intrm_sf_mf_20 ; real_T
intrm_sf_mf_225 ; real_T intrm_sf_mf_234 ; real_T intrm_sf_mf_253 ; real_T
intrm_sf_mf_256 ; real_T intrm_sf_mf_262 ; real_T intrm_sf_mf_278 ; real_T
intrm_sf_mf_312 ; real_T intrm_sf_mf_32 ; real_T intrm_sf_mf_355 ; real_T
intrm_sf_mf_376 ; real_T intrm_sf_mf_391 ; real_T intrm_sf_mf_402 ; real_T
intrm_sf_mf_403 ; real_T intrm_sf_mf_41 ; real_T intrm_sf_mf_495 ; real_T
intrm_sf_mf_514 ; real_T intrm_sf_mf_520 ; real_T intrm_sf_mf_521 ; real_T
intrm_sf_mf_529 ; real_T intrm_sf_mf_541 ; real_T intrm_sf_mf_542 ; real_T
intrm_sf_mf_653 ; real_T intrm_sf_mf_659 ; real_T intrm_sf_mf_668 ; real_T
intrm_sf_mf_678 ; real_T intrm_sf_mf_679 ; real_T intrm_sf_mf_680 ; real_T
intrm_sf_mf_690 ; real_T intrm_sf_mf_691 ; real_T intrm_sf_mf_692 ; real_T
intrm_sf_mf_784 ; real_T intrm_sf_mf_806 ; real_T intrm_sf_mf_809 ; real_T
intrm_sf_mf_815 ; real_T intrm_sf_mf_825 ; real_T intrm_sf_mf_837 ; real_T
intrm_sf_mf_859 ; real_T intrm_sf_mf_862 ; real_T intrm_sf_mf_939 ; real_T
intrm_sf_mf_960 ; real_T intrm_sf_mf_992 ; real_T piece100 ; real_T piece103
; real_T piece121 ; real_T piece196 ; real_T piece26 ; real_T piece28 ;
real_T piece302 ; real_T piece307 ; real_T piece345 ; real_T piece350 ;
real_T piece352 ; real_T piece412 ; real_T piece416 ; real_T piece418 ;
real_T piece423 ; real_T piece428 ; real_T piece47 ; real_T piece63 ; real_T
piece79 ; real_T piece82 ; real_T piece96 ; real_T piece98 ; real_T t197 ;
real_T t201 ; real_T t202 ; real_T t209 ; real_T t213 ; real_T t215 ; real_T
t217 ; real_T t218 ; real_T t220 ; real_T t2567_idx_0 ; real_T t2576_idx_0 ;
real_T t2585_idx_0 ; real_T t2636 ; real_T t2644 ; real_T t2660 ; real_T
t2679 ; real_T t2697 ; real_T t2700 ; real_T t2703 ; real_T t2721 ; real_T
t2724 ; real_T t2725 ; real_T t2726 ; real_T t2728 ; real_T t2730 ; real_T
t2732 ; real_T t2733 ; real_T t2734 ; real_T t2735 ; real_T t2736 ; real_T
t2738 ; real_T t2739 ; real_T t2741 ; real_T t2742 ; real_T t2746 ; real_T
t2747 ; real_T t2748 ; real_T t2749 ; real_T t2750 ; real_T t2751 ; real_T
t2752 ; real_T t2753 ; real_T t2754 ; real_T t2755 ; real_T t2756 ; real_T
t2757 ; real_T t2758 ; real_T t2759 ; real_T t2761 ; real_T t2764 ; real_T
t2766 ; real_T t2768 ; real_T t2771 ; real_T t2772 ; real_T t2775 ; real_T
t2776 ; real_T t2778 ; real_T t2779 ; real_T t2780 ; real_T t2783 ; real_T
t2784 ; real_T t2790 ; real_T t2791 ; real_T t2792 ; real_T t2793 ; real_T
t2794 ; real_T t2795 ; real_T t2796 ; real_T t2797 ; real_T t2798 ; real_T
t2799 ; real_T t2800 ; real_T t2802 ; real_T t2803 ; real_T t2805 ; real_T
t2806 ; real_T t2811 ; real_T t2812 ; real_T t2814 ; real_T t2815 ; real_T
t2819 ; real_T t2820 ; real_T t2822 ; real_T t2825 ; real_T t2826 ; real_T
t2827 ; real_T t2837 ; real_T t2838 ; real_T t2839 ; real_T t2840 ; real_T
t2841 ; real_T t2842 ; real_T t2844 ; real_T t2845 ; real_T t2846 ; real_T
t2851 ; real_T t2852 ; real_T t2853 ; real_T t2854 ; real_T t2856 ; real_T
t2858 ; real_T t2860 ; real_T t2861 ; real_T t2863 ; real_T t2864 ; real_T
t2865 ; real_T t2866 ; real_T t2867 ; real_T t2869 ; real_T t2870 ; real_T
t2871 ; real_T t2876 ; real_T t2878 ; real_T t2880 ; real_T t2883 ; real_T
t2886 ; real_T t2888 ; real_T t2890 ; real_T t2891 ; real_T t2897 ; real_T
t2902 ; real_T t2903 ; real_T t2904 ; real_T t2907 ; real_T t2908 ; real_T
t2912 ; real_T t2913 ; real_T t2914 ; real_T t2918 ; real_T t2920 ; real_T
t2922 ; real_T t2923 ; real_T t2925 ; real_T t2926 ; real_T t2934 ; real_T
t2935 ; real_T t2937 ; real_T t2939 ; real_T t2941 ; real_T t2942 ; real_T
t2944 ; real_T t2945 ; real_T t2946 ; real_T t2947 ; real_T t2948 ; real_T
t2949 ; real_T t2950 ; real_T t2951 ; real_T t2953 ; real_T t2957 ; real_T
t2958 ; real_T t2959 ; real_T t2960 ; real_T t2964 ; real_T t2966 ; real_T
t2967 ; real_T t2970 ; real_T t2972 ; real_T t2974 ; real_T t2977 ; real_T
t2978 ; real_T t2984 ; real_T t2985 ; real_T t2987 ; real_T t2991 ; real_T
t2993 ; real_T t2996 ; real_T t2997 ; real_T t2998 ; real_T t2999 ; real_T
t3000 ; real_T t3001 ; real_T t3002 ; real_T t3003 ; real_T t3004 ; real_T
t3005 ; real_T t3008 ; real_T t3015 ; real_T t3020 ; real_T t3021 ; real_T
t3024 ; real_T t3026 ; real_T t3033 ; real_T t3035 ; real_T t3037 ; real_T
t3041 ; real_T t3044 ; real_T t3045 ; real_T t3046 ; real_T t3047 ; real_T
t3048 ; real_T t3049 ; real_T t3050 ; real_T t3051 ; real_T t3052 ; real_T
t3053 ; real_T t3056 ; real_T t3057 ; real_T t3058 ; real_T t3059 ; real_T
t3063 ; real_T t3065 ; real_T t3066 ; real_T t3068 ; real_T t3069 ; real_T
t3071 ; real_T t3072 ; real_T t3073 ; real_T t3074 ; real_T t3075 ; real_T
t3076 ; real_T t3077 ; real_T t3078 ; real_T t3083 ; real_T t3085 ; real_T
t3086 ; real_T t3088 ; real_T t3090 ; real_T t3092 ; real_T t3095 ; real_T
t3096 ; real_T t3097 ; real_T t3098 ; real_T t3099 ; real_T t3100 ; real_T
t3101 ; real_T t3102 ; real_T t3103 ; real_T t3104 ; real_T t3105 ; real_T
t3108 ; real_T t3109 ; real_T t3110 ; real_T t3112 ; real_T t3114 ; real_T
t3117 ; real_T t3119 ; real_T t3120 ; real_T t3121 ; real_T t3123 ; real_T
t3124 ; real_T t3125 ; real_T t3127 ; real_T t3130 ; real_T t3131 ; real_T
t3132 ; real_T t3133 ; real_T t3135 ; real_T t3138 ; real_T t3139 ; real_T
t3143 ; real_T t3145 ; real_T t3146 ; real_T t3148 ; real_T t3149 ; real_T
t3151 ; real_T t3152 ; real_T t3153 ; real_T t3155 ; real_T t3156 ; real_T
t3165 ; real_T t3166 ; real_T t3168 ; real_T t3170 ; real_T t3172 ; real_T
t3173 ; real_T t3175 ; real_T t3176 ; real_T t3177 ; real_T t3178 ; real_T
t3179 ; real_T t3180 ; real_T t3181 ; real_T t3183 ; real_T t3185 ; real_T
t3187 ; real_T t3190 ; real_T t3195 ; real_T t3196 ; real_T t3197 ; real_T
t3198 ; real_T t3201 ; real_T t3203 ; real_T t3205 ; real_T t3208 ; real_T
t3215 ; real_T t3216 ; real_T t3217 ; real_T t3218 ; real_T t3222 ; real_T
t3224 ; real_T t3227 ; real_T t3228 ; real_T t3229 ; real_T t3230 ; real_T
t3231 ; real_T t3232 ; real_T t3233 ; real_T t3234 ; real_T t3235 ; real_T
t3236 ; real_T t3245 ; real_T t3249 ; real_T t3251 ; real_T t3253 ; real_T
t3255 ; real_T t3256 ; real_T t3263 ; real_T t3264 ; real_T t3265 ; real_T
t3268 ; real_T t3270 ; real_T t3272 ; real_T t3275 ; real_T t3276 ; real_T
t3277 ; real_T t3278 ; real_T t3279 ; real_T t3280 ; real_T t3281 ; real_T
t3282 ; real_T t3283 ; real_T t3284 ; real_T t3285 ; real_T t3287 ; real_T
t3289 ; real_T t3290 ; real_T t3291 ; real_T t3292 ; real_T t3293 ; real_T
t3295 ; real_T t3298 ; real_T t3299 ; real_T t3301 ; real_T t3303 ; real_T
t3304 ; real_T t3306 ; real_T t3309 ; real_T t3313 ; real_T t3314 ; real_T
t3315 ; real_T t3317 ; real_T t3320 ; real_T t3321 ; real_T t3322 ; real_T
t3323 ; real_T t3324 ; real_T t3326 ; real_T t3330 ; real_T t3331 ; real_T
t3333 ; real_T t3335 ; real_T t3336 ; real_T t3337 ; real_T t3341 ; real_T
t3343 ; real_T t3344 ; real_T t3345 ; real_T t3346 ; real_T t3348 ; real_T
t3349 ; real_T t3350 ; real_T t3351 ; real_T t3352 ; real_T t3353 ; real_T
t3355 ; real_T t3356 ; real_T t3358 ; real_T t3362 ; real_T t3363 ; real_T
t3364 ; real_T t3366 ; real_T t3367 ; real_T t3369 ; real_T t3370 ; real_T
t3376 ; real_T t3379 ; real_T t3382 ; real_T t3383 ; real_T t3384 ; real_T
t3385 ; real_T t3386 ; real_T t3390 ; real_T t3391 ; real_T t3392 ; real_T
t3393 ; real_T t3396 ; real_T t3398 ; real_T t3399 ; real_T t3400 ; real_T
t3401 ; real_T t3402 ; real_T t3403 ; real_T t3404 ; real_T t3410 ; real_T
t3411 ; real_T t3412 ; real_T t3417 ; real_T t3419 ; real_T t3420 ; real_T
t3422 ; real_T t3423 ; real_T t3424 ; real_T t3425 ; real_T t3426 ; real_T
t3427 ; real_T t3428 ; real_T t3429 ; real_T t3430 ; real_T t3435 ; real_T
t3436 ; real_T t3437 ; real_T t3439 ; real_T t3442 ; real_T t3446 ; real_T
t3448 ; real_T t3449 ; real_T t3450 ; real_T t3451 ; real_T t3453 ; real_T
t3455 ; real_T t3456 ; real_T t3457 ; real_T t3458 ; real_T t3459 ; real_T
t3460 ; real_T t3461 ; real_T t3464 ; real_T t3465 ; real_T t3467 ; real_T
t3469 ; real_T t3470 ; real_T t3472 ; real_T t3473 ; real_T t3474 ; real_T
t3475 ; real_T t3476 ; real_T t3478 ; real_T t3480 ; real_T t3481 ; real_T
t3482 ; real_T t3483 ; real_T t3484 ; real_T t3485 ; real_T t3486 ; real_T
t3490 ; real_T t3493 ; real_T t3495 ; real_T t3657 ; real_T t3858 ; real_T
t3910 ; real_T t3946 ; real_T t4001 ; real_T t4029 ; real_T t4030 ; real_T
t4254 ; real_T t4258 ; real_T t4262 ; real_T t4266 ; real_T t4269 ; real_T
t4288 ; real_T t4302 ; real_T t4307 ; real_T t4335 ; real_T t4349 ; real_T
t4370 ; real_T t4374 ; real_T t4382 ; real_T t4385 ; real_T t4399 ; real_T
t4414 ; real_T t4421 ; real_T t4428 ; real_T t4444 ; real_T t4446 ; real_T
t4458 ; real_T t4465 ; real_T t4475 ; real_T t4491 ; real_T t4502 ; real_T
t4513 ; real_T t4528 ; real_T t4535 ; real_T t4552 ; real_T t4566 ; real_T
t4588 ; real_T t4594 ; real_T t4599 ; real_T t4651 ; real_T t4654 ; real_T
t4664 ; real_T t4708 ; real_T t4709 ; real_T t4716 ; real_T t4721 ; real_T
t4744 ; real_T t4747 ; real_T t4764 ; real_T t4784 ; real_T t4786 ; real_T
t4796 ; real_T t4803 ; real_T t4825 ; real_T t4833 ; real_T t4835 ; real_T
t4836 ; real_T t4839 ; real_T t4850 ; real_T t4902 ; real_T t4911 ; real_T
t4913 ; real_T t5265 ; real_T t5279 ; real_T t5677 ; real_T t5688 ; real_T
t5709 ; real_T zc_int10 ; real_T zc_int114 ; real_T zc_int117 ; real_T
zc_int118 ; real_T zc_int182 ; real_T zc_int183 ; real_T zc_int193 ; real_T
zc_int223 ; real_T zc_int224 ; real_T zc_int25 ; real_T zc_int258 ; real_T
zc_int259 ; real_T zc_int275 ; real_T zc_int276 ; real_T zc_int287 ; real_T
zc_int293 ; real_T zc_int295 ; real_T zc_int308 ; real_T zc_int316 ; real_T
zc_int335 ; real_T zc_int338 ; real_T zc_int342 ; real_T zc_int345 ; real_T
zc_int350 ; real_T zc_int352 ; real_T zc_int357 ; real_T zc_int359 ; real_T
zc_int360 ; real_T zc_int361 ; real_T zc_int39 ; real_T zc_int41 ; real_T
zc_int50 ; real_T zc_int51 ; real_T zc_int6 ; real_T zc_int8 ; real_T
zc_int81 ; real_T zc_int83 ; real_T zc_int9 ; real_T zc_int98 ; size_t t1531
[ 1 ] ; size_t t1919 [ 1 ] ; size_t t1922 [ 1 ] ; size_t t222 [ 1 ] ; size_t
t223 [ 1 ] ; size_t t225 [ 1 ] ; size_t t2569 [ 1 ] ; size_t t2570 [ 1 ] ;
size_t t746 [ 1 ] ; size_t t749 [ 1 ] ; size_t t2616 ; size_t t2617 ; size_t
t2618 ; int32_T M [ 356 ] ; int32_T b ; for ( b = 0 ; b < 356 ; b ++ ) { M [
b ] = t5723 -> mM . mX [ b ] ; } U_idx_0 = t5723 -> mU . mX [ 0 ] ; U_idx_1 =
t5723 -> mU . mX [ 1 ] ; U_idx_2 = t5723 -> mU . mX [ 2 ] ; U_idx_3 = t5723
-> mU . mX [ 3 ] ; U_idx_4 = t5723 -> mU . mX [ 4 ] ; U_idx_5 = t5723 -> mU .
mX [ 5 ] ; U_idx_6 = t5723 -> mU . mX [ 6 ] ; U_idx_7 = t5723 -> mU . mX [ 7
] ; U_idx_8 = t5723 -> mU . mX [ 8 ] ; U_idx_9 = t5723 -> mU . mX [ 9 ] ;
U_idx_10 = t5723 -> mU . mX [ 10 ] ; U_idx_11 = t5723 -> mU . mX [ 11 ] ;
U_idx_12 = t5723 -> mU . mX [ 12 ] ; U_idx_13 = t5723 -> mU . mX [ 13 ] ; for
( b = 0 ; b < 575 ; b ++ ) { X [ b ] = t5723 -> mX . mX [ b ] ; } out = t5724
-> mF ; nonscalar1 [ 0 ] = 19080.0 ; nonscalar1 [ 1 ] = 19080.0 ; nonscalar1
[ 2 ] = 19080.0 ; nonscalar1 [ 3 ] = 19080.0 ; nonscalar1 [ 4 ] = 19080.0 ;
nonscalar1 [ 5 ] = 19080.0 ; nonscalar1 [ 6 ] = 19080.0 ; nonscalar58 [ 0 ] =
0.0 ; nonscalar58 [ 1 ] = 0.2 ; nonscalar58 [ 2 ] = 0.4 ; nonscalar58 [ 3 ] =
0.6 ; nonscalar58 [ 4 ] = 0.8 ; nonscalar58 [ 5 ] = 1.0 ; nonscalar59 [ 0 ] =
243.1 ; nonscalar59 [ 1 ] = 253.1 ; nonscalar59 [ 2 ] = 263.1 ; nonscalar59 [
3 ] = 273.1 ; nonscalar59 [ 4 ] = 283.1 ; nonscalar59 [ 5 ] = 298.1 ;
nonscalar59 [ 6 ] = 313.1 ; nonscalar63 [ 0 ] = 1.0 ; nonscalar63 [ 1 ] =
1.25 ; nonscalar63 [ 2 ] = 1.5 ; nonscalar63 [ 3 ] = 1.75 ; nonscalar63 [ 4 ]
= 2.0 ; nonscalar64 [ 0 ] = 0.0 ; nonscalar64 [ 1 ] = 188.49555921538757 ;
nonscalar64 [ 2 ] = 376.99111843077515 ; t5709 = - X [ 78ULL ] + - U_idx_1 ;
t5688 = X [ 87ULL ] * 0.1 + 650.0 ; t5279 = pmf_sqrt ( U_idx_2 * U_idx_2 +
4.5311819630628225E-12 ) ; t2579 [ 0ULL ] = X [ 94ULL ] ; t222 [ 0 ] = 20ULL
; t223 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL
] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t2579 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t189 = efOut ; t2580 [ 0ULL ] = X [ 90ULL ] ; t225 [ 0
] = 19ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t2580 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t181 = b_efOut ; tlu2_2d_linear_linear_value ( &
c_efOut [ 0ULL ] , & t189 . mField0 [ 0ULL ] , & t189 . mField2 [ 0ULL ] , &
t181 . mField0 [ 0ULL ] , & t181 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2581 [ 0 ] = c_efOut [ 0 ] ; t5265 = t2581 [ 0ULL ] ; t4911 = U_idx_2 / (
t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [ 90ULL ] / ( t5265 == 0.0 ? 1.0E-16 :
t5265 ) ; t2724 = ( 1.0 - U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) ) /
2.0 ; t2725 = ( U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) + 1.0 ) / 2.0 ;
t2581 [ 0ULL ] = X [ 89ULL ] ; tlu2_linear_linear_prelookup ( & d_efOut .
mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t2581 [ 0ULL ] , & t222
[ 0ULL ] , & t223 [ 0ULL ] ) ; t173 = d_efOut ; tlu2_2d_linear_linear_value (
& e_efOut [ 0ULL ] , & t173 . mField0 [ 0ULL ] , & t173 . mField2 [ 0ULL ] ,
& t181 . mField0 [ 0ULL ] , & t181 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ]
) ; t1907 [ 0 ] = e_efOut [ 0 ] ; t2726 = t1907 [ 0ULL ] ; t1907 [ 0ULL ] = X
[ 96ULL ] ; tlu2_linear_linear_prelookup ( & f_efOut . mField0 [ 0ULL ] , &
f_efOut . mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t170 = f_efOut ; t1907 [ 0ULL ] = X [ 92ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t172 = g_efOut ; tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t170 .
mField0 [ 0ULL ] , & t170 . mField2 [ 0ULL ] , & t172 . mField0 [ 0ULL ] , &
t172 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = h_efOut [
0 ] ; t4902 = t2576_idx_0 ; t4913 = - U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 :
t5279 ) * X [ 92ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
t2728 = ( 1.0 - - U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) ) / 2.0 ;
t2730 = ( - U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) + 1.0 ) / 2.0 ;
t1907 [ 0ULL ] = X [ 91ULL ] ; tlu2_linear_linear_prelookup ( & i_efOut .
mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222
[ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = i_efOut ; tlu2_2d_linear_linear_value (
& j_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
& t172 . mField0 [ 0ULL ] , & t172 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ]
) ; t2576_idx_0 = j_efOut [ 0 ] ; t2732 = t2576_idx_0 ; t1907 [ 0ULL ] = X [
94ULL ] ; tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] , &
k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t158 = k_efOut ; t1907 [ 0ULL ] = X [ 90ULL ] ;
tlu2_linear_nearest_prelookup ( & l_efOut . mField0 [ 0ULL ] , & l_efOut .
mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t154 = l_efOut ; tlu2_2d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t154 . mField0 [ 0ULL ] , &
t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = m_efOut [
0 ] ; Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 96ULL ] ; tlu2_linear_nearest_prelookup (
& n_efOut . mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [
0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t154 = n_efOut ; t1907 [ 0ULL
] = X [ 92ULL ] ; tlu2_linear_nearest_prelookup ( & o_efOut . mField0 [ 0ULL
] , & o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t158 = o_efOut ; tlu2_2d_linear_nearest_value ( &
p_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField5 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = p_efOut [ 0 ] ;
Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 = (
Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 + t2576_idx_0
) / 2.0 ; t5265 = ( t5265 + t4902 ) / 2.0 ; t4902 =
Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 *
1697.0562748477141 / 0.7 ;
Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0 = pmf_sqrt (
X [ 97ULL ] * X [ 97ULL ] + t4902 * t4902 ) ; t1907 [ 0ULL ] = X [ 103ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t157 = q_efOut ; t1907 [ 0ULL ] = X [ 99ULL ] ; tlu2_linear_linear_prelookup
( & r_efOut . mField0 [ 0ULL ] , & r_efOut . mField1 [ 0ULL ] , & r_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [
0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t152 = r_efOut ;
tlu2_2d_linear_linear_value ( & s_efOut [ 0ULL ] , & t157 . mField0 [ 0ULL ]
, & t157 . mField2 [ 0ULL ] , & t152 . mField0 [ 0ULL ] , & t152 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = s_efOut [ 0 ] ; t4902 =
t2576_idx_0 ; Electrical_Cooling_System_Flow_Restriction_Converter_MotorR_co0
= U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [ 99ULL ] / ( t2576_idx_0
== 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 98ULL ] ;
tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t158 = t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t152 . mField0 [ 0ULL ] , &
t152 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = u_efOut [
0 ] ; t2733 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 105ULL ] ;
tlu2_linear_linear_prelookup ( & v_efOut . mField0 [ 0ULL ] , & v_efOut .
mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t182 = v_efOut ; t1907 [ 0ULL ] = X [ 101ULL ] ; tlu2_linear_linear_prelookup
( & w_efOut . mField0 [ 0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [
0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t148 = w_efOut ;
tlu2_2d_linear_linear_value ( & x_efOut [ 0ULL ] , & t182 . mField0 [ 0ULL ]
, & t182 . mField2 [ 0ULL ] , & t148 . mField0 [ 0ULL ] , & t148 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = x_efOut [ 0 ] ; t2734 =
t2576_idx_0 ; t2735 = - U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [
101ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] =
X [ 100ULL ] ; tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] ,
& y_efOut . mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t158 = y_efOut ; tlu2_2d_linear_linear_value ( &
ab_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , &
t148 . mField0 [ 0ULL ] , & t148 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = ab_efOut [ 0 ] ; t2736 = t2576_idx_0 ; t1907 [ 0ULL ] = X [
103ULL ] ; tlu2_linear_nearest_prelookup ( & bb_efOut . mField0 [ 0ULL ] , &
bb_efOut . mField1 [ 0ULL ] , & bb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t154 = bb_efOut ; t1907 [ 0ULL ] = X [ 99ULL ] ;
tlu2_linear_nearest_prelookup ( & cb_efOut . mField0 [ 0ULL ] , & cb_efOut .
mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t158 = cb_efOut ; tlu2_2d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] ,
& t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = db_efOut
[ 0 ] ; t2738 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 105ULL ] ;
tlu2_linear_nearest_prelookup ( & eb_efOut . mField0 [ 0ULL ] , & eb_efOut .
mField1 [ 0ULL ] , & eb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t186 = eb_efOut ; t1907 [ 0ULL ] = X [ 101ULL ] ;
tlu2_linear_nearest_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t89 = fb_efOut ; tlu2_2d_linear_nearest_value ( & gb_efOut [ 0ULL ] , & t186
. mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , &
t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gb_efOut
[ 0 ] ; t2738 = ( t2738 + t2576_idx_0 ) / 2.0 ; t4902 = ( t4902 + t2734 ) /
2.0 ; t2734 = t2738 * 1697.0562748477141 / 0.7 ; t2738 = pmf_sqrt ( X [
106ULL ] * X [ 106ULL ] + t2734 * t2734 ) ; t1907 [ 0ULL ] = X [ 112ULL ] ;
tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [ 0ULL ] , & hb_efOut .
mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t146 = hb_efOut ; t1907 [ 0ULL ] = X [ 108ULL ] ;
tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0ULL ] , & ib_efOut .
mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t145 = ib_efOut ; tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t146
. mField0 [ 0ULL ] , & t146 . mField2 [ 0ULL ] , & t145 . mField0 [ 0ULL ] ,
& t145 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = jb_efOut
[ 0 ] ; t2734 = t2576_idx_0 ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio0 = U_idx_2 / (
t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [ 108ULL ] / ( t2576_idx_0 == 0.0 ?
1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 107ULL ] ;
tlu2_linear_linear_prelookup ( & kb_efOut . mField0 [ 0ULL ] , & kb_efOut .
mField1 [ 0ULL ] , & kb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t158 = kb_efOut ; tlu2_2d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t145 . mField0 [ 0ULL ] ,
& t145 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = lb_efOut
[ 0 ] ; t2739 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 114ULL ] ;
tlu2_linear_linear_prelookup ( & mb_efOut . mField0 [ 0ULL ] , & mb_efOut .
mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t137 = mb_efOut ; t1907 [ 0ULL ] = X [ 110ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t151 = nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t137
. mField0 [ 0ULL ] , & t137 . mField2 [ 0ULL ] , & t151 . mField0 [ 0ULL ] ,
& t151 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ob_efOut
[ 0 ] ; intrm_sf_mf_653 = t2576_idx_0 ; t2741 = - U_idx_2 / ( t5279 == 0.0 ?
1.0E-16 : t5279 ) * X [ 110ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 :
t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 109ULL ] ; tlu2_linear_linear_prelookup
( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut . mField1 [ 0ULL ] , & pb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [
0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = pb_efOut ;
tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , & t151 . mField0 [ 0ULL ] , & t151 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = qb_efOut [ 0 ] ; t2742 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 112ULL ] ; tlu2_linear_nearest_prelookup (
& rb_efOut . mField0 [ 0ULL ] , & rb_efOut . mField1 [ 0ULL ] , & rb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [
0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t136 = rb_efOut ; t1907 [ 0ULL
] = X [ 108ULL ] ; tlu2_linear_nearest_prelookup ( & sb_efOut . mField0 [
0ULL ] , & sb_efOut . mField1 [ 0ULL ] , & sb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t186 = sb_efOut ; tlu2_2d_linear_nearest_value ( &
tb_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , &
t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField5 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = tb_efOut [ 0 ] ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a = t2576_idx_0
; t1907 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_nearest_prelookup ( & ub_efOut
. mField0 [ 0ULL ] , & ub_efOut . mField1 [ 0ULL ] , & ub_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , &
t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t154 = ub_efOut ; t1907 [ 0ULL ] = X [
110ULL ] ; tlu2_linear_nearest_prelookup ( & vb_efOut . mField0 [ 0ULL ] , &
vb_efOut . mField1 [ 0ULL ] , & vb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t158 = vb_efOut ; tlu2_2d_linear_nearest_value ( &
wb_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField5 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = wb_efOut [ 0 ] ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a = (
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a + t2576_idx_0
) / 2.0 ; t2734 = ( t2734 + intrm_sf_mf_653 ) / 2.0 ; intrm_sf_mf_653 =
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a *
1697.0562748477141 / 0.7 ;
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a = pmf_sqrt (
X [ 115ULL ] * X [ 115ULL ] + intrm_sf_mf_653 * intrm_sf_mf_653 ) ;
intrm_sf_mf_653 = ( U_idx_2 - ( - U_idx_2 ) ) / 2.0 ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg = intrm_sf_mf_653
>= 0.0 ? X [ 109ULL ] : X [ 116ULL ] ; t1907 [ 0ULL ] = ( X [ 6ULL ] +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) / 2.0 ;
tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , & xb_efOut .
mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t165 = xb_efOut ; t1907 [ 0ULL ] = ( X [ 110ULL ] + X [ 117ULL ] ) / 2.0 ;
tlu2_linear_linear_prelookup ( & yb_efOut . mField0 [ 0ULL ] , & yb_efOut .
mField1 [ 0ULL ] , & yb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t158 = yb_efOut ; tlu2_2d_linear_linear_value ( & ac_efOut [ 0ULL ] , & t165
. mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] ,
& t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ac_efOut
[ 0 ] ; Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 =
t2576_idx_0 ; tlu2_2d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t165 .
mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = bc_efOut
[ 0 ] ; t2751 = ( intrm_sf_mf_653 >= 0.0 ? intrm_sf_mf_653 : -
intrm_sf_mf_653 ) * 0.01 ; t2752 = t2576_idx_0 * 7.8539816339744827E-5 ;
t2746 = t2751 / ( t2752 == 0.0 ? 1.0E-16 : t2752 ) ; t2748 = t2746 >= 2000.0
? t2746 : 1.0 ; t2753 = pmf_log10 ( 6.9 / ( t2748 == 0.0 ? 1.0E-16 : t2748 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2748 == 0.0 ? 1.0E-16 :
t2748 ) + 0.00017169489553429715 ) * 3.24 ; t2748 = 1.0 / ( t2753 == 0.0 ?
1.0E-16 : t2753 ) ; t2755 = ( pmf_pow (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2748 / 8.0 ) * 12.7 + 1.0 ; t2747
= ( ( t2746 > 1000.0 ? t2746 : 1000.0 ) - 1000.0 ) * ( t2748 / 8.0 ) *
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 / ( t2755 ==
0.0 ? 1.0E-16 : t2755 ) ; t2748 = ( t2746 - 2000.0 ) / 2000.0 ; t2749 = t2748
* t2748 * 3.0 - t2748 * t2748 * t2748 * 2.0 ; if ( t2746 <= 2000.0 ) { t2748
= 3.66 ; } else if ( t2746 >= 4000.0 ) { t2748 = t2747 ; } else { t2748 = (
1.0 - t2749 ) * 3.66 + t2747 * t2749 ; } t2748 = ( U_idx_0 -
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * ( 1.0 - exp ( -
( t2748 * 0.031415926535897927 / ( t2746 + 1.0 == 0.0 ? 1.0E-16 : t2746 + 1.0
) / 7.8539816339744827E-5 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 == 0.0 ?
1.0E-16 : Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 ) )
) ) ; tlu2_2d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t165 . mField0 [
0ULL ] , & t165 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t222 [
0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = cc_efOut [ 0 ] ;
t2746 = t2746 * 7.8539816339744827E-5 / 0.01 *
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * t2748 *
t2576_idx_0 ; Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg =
pmf_sqrt ( U_idx_2 * U_idx_2 + 1.8124727852251287E-13 ) ; t1907 [ 0ULL ] = X
[ 120ULL ] ; tlu2_linear_linear_prelookup ( & dc_efOut . mField0 [ 0ULL ] , &
dc_efOut . mField1 [ 0ULL ] , & dc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t180 = dc_efOut ; tlu2_2d_linear_linear_value ( &
ec_efOut [ 0ULL ] , & t180 . mField0 [ 0ULL ] , & t180 . mField2 [ 0ULL ] , &
t151 . mField0 [ 0ULL ] , & t151 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = ec_efOut [ 0 ] ; t2747 = U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 110ULL ] /
( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 = ( 1.0 -
U_idx_2 / ( Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0
? 1.0E-16 : Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) ) /
2.0 ; t2748 = ( U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) + 1.0 ) / 2.0 ;
t1907 [ 0ULL ] = X [ 122ULL ] ; tlu2_linear_linear_prelookup ( & fc_efOut .
mField0 [ 0ULL ] , & fc_efOut . mField1 [ 0ULL ] , & fc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , &
t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t128 = fc_efOut ; t1907 [ 0ULL ] = X [
117ULL ] ; tlu2_linear_linear_prelookup ( & gc_efOut . mField0 [ 0ULL ] , &
gc_efOut . mField1 [ 0ULL ] , & gc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t126 = gc_efOut ; tlu2_2d_linear_linear_value ( &
hc_efOut [ 0ULL ] , & t128 . mField0 [ 0ULL ] , & t128 . mField2 [ 0ULL ] , &
t126 . mField0 [ 0ULL ] , & t126 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = hc_efOut [ 0 ] ; t2750 = - U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 117ULL ] /
( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t2749 = ( 1.0 - - U_idx_2 /
( Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16
: Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) ) / 2.0 ; t2752
= ( - U_idx_2 / ( Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg
== 0.0 ? 1.0E-16 : Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg
) + 1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 116ULL ] ;
tlu2_linear_linear_prelookup ( & ic_efOut . mField0 [ 0ULL ] , & ic_efOut .
mField1 [ 0ULL ] , & ic_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t154 = ic_efOut ; tlu2_2d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t126 . mField0 [ 0ULL ] ,
& t126 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = jc_efOut
[ 0 ] ; t2753 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 6ULL ] ;
tlu2_linear_linear_prelookup ( & kc_efOut . mField0 [ 0ULL ] , & kc_efOut .
mField1 [ 0ULL ] , & kc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t136 = kc_efOut ; tlu2_2d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t136
. mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] ,
& t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = lc_efOut
[ 0 ] ; t2754 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( & mc_efOut [ 0ULL
] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , & t158 . mField0
[ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= mc_efOut [ 0 ] ; t2755 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( &
nc_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField7 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = nc_efOut [ 0 ] ; t2756 = t2576_idx_0 ;
tlu2_2d_linear_linear_value ( & oc_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ]
, & t136 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = oc_efOut [ 0 ] ; t2757 =
t2576_idx_0 ; t2758 = intrm_sf_mf_653 >= 0.0 ? X [ 91ULL ] : X [ 98ULL ] ;
t1907 [ 0ULL ] = ( X [ 9ULL ] + t2758 ) / 2.0 ; tlu2_linear_linear_prelookup
( & pc_efOut . mField0 [ 0ULL ] , & pc_efOut . mField1 [ 0ULL ] , & pc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [
0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t154 = pc_efOut ; t1907 [ 0ULL
] = ( X [ 92ULL ] + X [ 99ULL ] ) / 2.0 ; tlu2_linear_linear_prelookup ( &
qc_efOut . mField0 [ 0ULL ] , & qc_efOut . mField1 [ 0ULL ] , & qc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [
0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = qc_efOut ;
tlu2_2d_linear_linear_value ( & rc_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ]
, & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rc_efOut [ 0 ] ; t2759 =
t2576_idx_0 ; tlu2_2d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t154 .
mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = sc_efOut
[ 0 ] ; t4850 = t2576_idx_0 * 7.8539816339744827E-5 ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv = t2751 / ( t4850
== 0.0 ? 1.0E-16 : t4850 ) ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I =
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv >= 2000.0 ?
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv : 1.0 ; t2775 =
pmf_log10 ( 6.9 / ( Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I
== 0.0 ? 1.0E-16 : Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I ) +
0.00017169489553429715 ) * 3.24 ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = 1.0 / ( t2775 ==
0.0 ? 1.0E-16 : t2775 ) ; U_idx_1 = ( pmf_pow ( t2759 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I
/ 8.0 ) * 12.7 + 1.0 ; t2761 = ( (
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv > 1000.0 ?
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv : 1000.0 ) -
1000.0 ) * ( Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I / 8.0 )
* t2759 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = (
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv - 2000.0 ) /
2000.0 ; intrm_sf_mf_495 =
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I *
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I * 3.0 -
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I *
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I *
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I * 2.0 ; if (
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv <= 2000.0 ) {
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = 3.66 ; } else if (
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv >= 4000.0 ) {
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = t2761 ; } else {
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = ( 1.0 -
intrm_sf_mf_495 ) * 3.66 + t2761 * intrm_sf_mf_495 ; }
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I = ( X [ 10ULL ] -
t2758 ) * ( 1.0 - exp ( - (
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I *
0.031415926535897927 / (
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv + 1.0 == 0.0 ?
1.0E-16 : Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv + 1.0 )
/ 7.8539816339744827E-5 / ( t2759 == 0.0 ? 1.0E-16 : t2759 ) ) ) ) ;
tlu2_2d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ]
, & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = tc_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv =
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv *
7.8539816339744827E-5 / 0.01 * t2759 *
Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I * t2576_idx_0 ; t1907
[ 0ULL ] = X [ 125ULL ] ; tlu2_linear_linear_prelookup ( & uc_efOut . mField0
[ 0ULL ] , & uc_efOut . mField1 [ 0ULL ] , & uc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL
] , & t223 [ 0ULL ] ) ; t125 = uc_efOut ; tlu2_2d_linear_linear_value ( &
vc_efOut [ 0ULL ] , & t125 . mField0 [ 0ULL ] , & t125 . mField2 [ 0ULL ] , &
t172 . mField0 [ 0ULL ] , & t172 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = vc_efOut [ 0 ] ; t2759 = U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 92ULL ] / (
t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 127ULL ]
; tlu2_linear_linear_prelookup ( & wc_efOut . mField0 [ 0ULL ] , & wc_efOut .
mField1 [ 0ULL ] , & wc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t124 = wc_efOut ; tlu2_2d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t124
. mField0 [ 0ULL ] , & t124 . mField2 [ 0ULL ] , & t152 . mField0 [ 0ULL ] ,
& t152 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xc_efOut
[ 0 ] ; t2761 = - U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 99ULL ] / (
t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & yc_efOut . mField0 [ 0ULL ] , & yc_efOut .
mField1 [ 0ULL ] , & yc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t89 = yc_efOut ; tlu2_2d_linear_linear_value ( & ad_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ad_efOut
[ 0 ] ; t2758 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( & bd_efOut [ 0ULL
] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t158 . mField0 [
0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= bd_efOut [ 0 ] ; Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I =
t2576_idx_0 ; tlu2_2d_linear_linear_value ( & cd_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = cd_efOut
[ 0 ] ; intrm_sf_mf_495 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( &
dd_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = dd_efOut [ 0 ] ; t2764 = t2576_idx_0 ; t2766 =
intrm_sf_mf_653 >= 0.0 ? X [ 100ULL ] : X [ 107ULL ] ; t1907 [ 0ULL ] = ( X [
11ULL ] + t2766 ) / 2.0 ; tlu2_linear_linear_prelookup ( & ed_efOut . mField0
[ 0ULL ] , & ed_efOut . mField1 [ 0ULL ] , & ed_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL
] , & t223 [ 0ULL ] ) ; t154 = ed_efOut ; t1907 [ 0ULL ] = ( X [ 101ULL ] + X
[ 108ULL ] ) / 2.0 ; tlu2_linear_linear_prelookup ( & fd_efOut . mField0 [
0ULL ] , & fd_efOut . mField1 [ 0ULL ] , & fd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t158 = fd_efOut ; tlu2_2d_linear_linear_value ( &
gd_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField6 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = gd_efOut [ 0 ] ; intrm_sf_mf_653 = t2576_idx_0 ;
tlu2_2d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ]
, & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = hd_efOut [ 0 ] ; t2790 =
t2576_idx_0 * 7.8539816339744827E-5 ; t2768 = t2751 / ( t2790 == 0.0 ?
1.0E-16 : t2790 ) ; Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T =
t2768 >= 2000.0 ? t2768 : 1.0 ; t2791 = pmf_log10 ( 6.9 / (
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T ) +
0.00017169489553429715 ) * 3.24 ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = 1.0 / ( t2791 ==
0.0 ? 1.0E-16 : t2791 ) ; t2793 = ( pmf_pow ( intrm_sf_mf_653 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T / 8.0 ) * 12.7 + 1.0
; t2751 = ( ( t2768 > 1000.0 ? t2768 : 1000.0 ) - 1000.0 ) * (
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T / 8.0 ) *
intrm_sf_mf_653 / ( t2793 == 0.0 ? 1.0E-16 : t2793 ) ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = ( t2768 - 2000.0 )
/ 2000.0 ; t2771 = Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T *
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T * 3.0 -
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T *
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T *
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T * 2.0 ; if ( t2768 <=
2000.0 ) { Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = 3.66 ; }
else if ( t2768 >= 4000.0 ) {
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = t2751 ; } else {
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = ( 1.0 - t2771 ) *
3.66 + t2751 * t2771 ; }
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = ( X [ 12ULL ] -
t2766 ) * ( 1.0 - exp ( - (
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T *
0.031415926535897927 / ( t2768 + 1.0 == 0.0 ? 1.0E-16 : t2768 + 1.0 ) /
7.8539816339744827E-5 / ( intrm_sf_mf_653 == 0.0 ? 1.0E-16 : intrm_sf_mf_653
) ) ) ) ; tlu2_2d_linear_linear_value ( & id_efOut [ 0ULL ] , & t154 .
mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = id_efOut
[ 0 ] ; t2768 = t2768 * 7.8539816339744827E-5 / 0.01 * intrm_sf_mf_653 *
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T * t2576_idx_0 ; t1907
[ 0ULL ] = X [ 130ULL ] ; tlu2_linear_linear_prelookup ( & jd_efOut . mField0
[ 0ULL ] , & jd_efOut . mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL
] , & t223 [ 0ULL ] ) ; t168 = jd_efOut ; tlu2_2d_linear_linear_value ( &
kd_efOut [ 0ULL ] , & t168 . mField0 [ 0ULL ] , & t168 . mField2 [ 0ULL ] , &
t148 . mField0 [ 0ULL ] , & t148 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = kd_efOut [ 0 ] ; t2766 = U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 101ULL ] /
( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 132ULL
] ; tlu2_linear_linear_prelookup ( & ld_efOut . mField0 [ 0ULL ] , & ld_efOut
. mField1 [ 0ULL ] , & ld_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] )
; t156 = ld_efOut ; tlu2_2d_linear_linear_value ( & md_efOut [ 0ULL ] , &
t156 . mField0 [ 0ULL ] , & t156 . mField2 [ 0ULL ] , & t145 . mField0 [ 0ULL
] , & t145 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1
, & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
md_efOut [ 0 ] ; t2751 = - U_idx_2 / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) * X [ 108ULL ] /
( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t1907 [ 0ULL ] = X [ 11ULL ]
; tlu2_linear_linear_prelookup ( & nd_efOut . mField0 [ 0ULL ] , & nd_efOut .
mField1 [ 0ULL ] , & nd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t89 = nd_efOut ; tlu2_2d_linear_linear_value ( & od_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = od_efOut
[ 0 ] ; intrm_sf_mf_653 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( &
pd_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField8 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = pd_efOut [ 0 ] ;
Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T = t2576_idx_0 ;
tlu2_2d_linear_linear_value ( & qd_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = qd_efOut [ 0 ] ; t2771 =
t2576_idx_0 ; tlu2_2d_linear_linear_value ( & rd_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rd_efOut
[ 0 ] ; t2772 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 137ULL ] ;
tlu2_linear_linear_prelookup ( & sd_efOut . mField0 [ 0ULL ] , & sd_efOut .
mField1 [ 0ULL ] , & sd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1907 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t177 = sd_efOut ; t1907 [ 0ULL ] = X [ 135ULL ] ;
tlu2_linear_linear_prelookup ( & td_efOut . mField0 [ 0ULL ] , & td_efOut .
mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t1907 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t118 = td_efOut ; tlu2_2d_linear_linear_value ( & ud_efOut [ 0ULL ] , & t177
. mField0 [ 0ULL ] , & t177 . mField2 [ 0ULL ] , & t118 . mField0 [ 0ULL ] ,
& t118 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ud_efOut
[ 0 ] ; t4850 = t2576_idx_0 ; t2775 = U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 :
t5279 ) * X [ 135ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
t1907 [ 0ULL ] = X [ 134ULL ] ; tlu2_linear_linear_prelookup ( & vd_efOut .
mField0 [ 0ULL ] , & vd_efOut . mField1 [ 0ULL ] , & vd_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [ 0ULL ] , &
t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = vd_efOut ;
tlu2_2d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , & t118 . mField0 [ 0ULL ] , & t118 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = wd_efOut [ 0 ] ; t2776 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 139ULL ] ; tlu2_linear_linear_prelookup (
& xd_efOut . mField0 [ 0ULL ] , & xd_efOut . mField1 [ 0ULL ] , & xd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1907 [
0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t116 = xd_efOut ;
tlu2_2d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t116 . mField0 [ 0ULL ]
, & t116 . mField2 [ 0ULL ] , & t181 . mField0 [ 0ULL ] , & t181 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = yd_efOut [ 0 ] ; t2778 = -
U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [ 90ULL ] / ( t2576_idx_0 ==
0.0 ? 1.0E-16 : t2576_idx_0 ) ; t4850 = ( t4850 + t2576_idx_0 ) / 2.0 ; t2779
= pmf_sqrt ( ( X [ 142ULL ] >= 1.0 ? X [ 142ULL ] : 1.0 ) * 402.5245441795231
) ; if ( X [ 142ULL ] >= 1.0 ) { t2780 = pmf_log ( X [ 142ULL ] ) ; } else {
t2780 = X [ 142ULL ] - 1.0 ; }
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in = exp (
5.8666062357368896 - t2780 ) ; t2780 = X [ 148ULL ] / 0.001 / (
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in == 0.0 ?
1.0E-16 : Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in ) * (
X [ 148ULL ] / 0.001 / (
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in == 0.0 ?
1.0E-16 : Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in ) ) /
2.0 * 0.001 + ( ( X [ 142ULL ] - 293.15 ) + 420.0 ) ; zc_int350 = t2779 *
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in * 1.0E-6 ;
t2779 = pmf_sqrt ( X [ 148ULL ] * X [ 148ULL ] + zc_int350 * zc_int350 ) ;
t2783 = pmf_sqrt ( ( X [ 143ULL ] >= 1.0 ? X [ 143ULL ] : 1.0 ) *
402.5245441795231 ) ; if ( X [ 143ULL ] >= 1.0 ) { t2784 = pmf_log ( X [
143ULL ] ) ; } else { t2784 = X [ 143ULL ] - 1.0 ; } if ( X [ 14ULL ] /
1.0E-5 >= 1.0 ) { Electrical_Cooling_System_Tank_Tank_level = pmf_log ( X [
14ULL ] / 1.0E-5 ) ; } else { Electrical_Cooling_System_Tank_Tank_level = X [
14ULL ] / 1.0E-5 - 1.0 ; } piece307 = exp ( (
Electrical_Cooling_System_Tank_Tank_level - 5.65948221575962 ) - t2784 ) ;
t2784 = - X [ 148ULL ] / 0.001 / ( piece307 == 0.0 ? 1.0E-16 : piece307 ) * (
- X [ 148ULL ] / 0.001 / ( piece307 == 0.0 ? 1.0E-16 : piece307 ) ) / 2.0 *
0.001 + ( ( X [ 143ULL ] - 293.15 ) + 420.0 ) ; piece302 = t2783 * piece307 *
1.0E-6 ; t2783 = pmf_sqrt ( X [ 148ULL ] * X [ 148ULL ] + piece302 * piece302
) ; if ( X [ 145ULL ] >= 1.0 ) { piece307 = pmf_log ( X [ 145ULL ] ) ; } else
{ piece307 = X [ 145ULL ] - 1.0 ; } piece302 = exp ( 5.8666062357368896 -
piece307 ) ; if ( X [ 146ULL ] >= 1.0 ) { t5677 = pmf_log ( X [ 146ULL ] ) ;
} else { t5677 = X [ 146ULL ] - 1.0 ; } piece307 = exp ( (
Electrical_Cooling_System_Tank_Tank_level - 5.65948221575962 ) - t5677 ) ;
t5677 = pmf_sqrt ( X [ 148ULL ] * X [ 148ULL ] + 1.0E-8 ) * X [ 148ULL ] ;
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in = - X [ 148ULL
] / 0.001 / ( Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in
== 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in ) * ( - X [
148ULL ] / 0.001 / (
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in == 0.0 ?
1.0E-16 : Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in ) ) /
2.0 * 0.001 + ( ( X [ 142ULL ] - 293.15 ) + 420.0 ) ;
Electrical_Cooling_System_Tank_Tank_level = X [ 152ULL ] * - 0.2 + 0.2 ;
t2790 = X [ 166ULL ] * 1.0E-9 + X [ 19ULL ] ; t2792 = X [ 87ULL ] + X [
168ULL ] ; t2793 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
1.8324100759713822E-12 ) ; t2794 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
2.0914103314136477E-13 ) ; t2795 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
1.4768645655431171E-13 ) ; if ( X [ 185ULL ] <= 0.0 ) { t2796 = 0.0 ; } else
{ t2796 = X [ 185ULL ] >= 1.0 ? 1.0 : X [ 185ULL ] ; } if ( X [ 186ULL ] <=
0.0 ) { t2797 = 0.0 ; } else { t2797 = X [ 186ULL ] >= 1.0 ? 1.0 : X [ 186ULL
] ; } t2798 = ( ( ( 1.0 - t2796 ) - t2797 ) * 296.802103844292 + t2796 *
461.523 ) + t2797 * 4124.48151675695 ; if ( 1.0 - X [ 185ULL ] >= 0.01 ) {
t2799 = 1.0 - X [ 185ULL ] ; } else if ( 1.0 - X [ 185ULL ] >= - 0.1 ) {
t2799 = exp ( ( ( 1.0 - X [ 185ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
t2799 = 1.6701700790245661E-7 ; } t2800 = - X [ 192ULL ] + U_idx_4 * - 0.01 ;
if ( X [ 22ULL ] <= 0.0 ) { t2802 = 0.0 ; } else { t2802 = X [ 22ULL ] >= 1.0
? 1.0 : X [ 22ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) { t2803 = 0.0 ; } else {
t2803 = X [ 23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } t2805 = ( ( ( 1.0 - t2802
) - t2803 ) * 296.802103844292 + t2802 * 461.523 ) + t2803 * 4124.48151675695
; t2806 = ( X [ 20ULL ] / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) - X
[ 193ULL ] / ( X [ 194ULL ] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) ) * t2800 *
t2805 / 7.8539816339744827E-5 ; if ( X [ 193ULL ] <= 216.59999999999997 ) {
zc_int114 = 216.59999999999997 ; } else { zc_int114 = X [ 193ULL ] >= 623.15
? 623.15 : X [ 193ULL ] ; } t2811 = zc_int114 * zc_int114 ; zc_int258 = ( ( (
1074.1165326382641 + zc_int114 * - 0.2214565261064495 ) + t2811 *
0.00037212980109014541 ) * ( ( 1.0 - t2802 ) - t2803 ) + ( (
1479.6504774711011 + zc_int114 * 1.2002114337048222 ) + t2811 * -
0.00038614513167823636 ) * t2802 ) + ( ( 12825.281119789837 + zc_int114 *
6.9647057412840034 ) + t2811 * - 0.0070524868246844051 ) * t2803 ;
intrm_sf_mf_172 = zc_int258 - t2805 ; zc_int114 = zc_int258 / (
intrm_sf_mf_172 == 0.0 ? 1.0E-16 : intrm_sf_mf_172 ) ; zc_int258 = pmf_sqrt (
t2806 * t2806 * 9.999999999999999E-14 + fabs ( X [ 193ULL ] * zc_int114 *
t2805 ) * 1.0E-9 ) ; t4370 = X [ 194ULL ] * X [ 194ULL ] * zc_int114 ; t2811
= - pmf_sqrt ( fabs ( t4370 / ( t2805 == 0.0 ? 1.0E-16 : t2805 ) / ( X [
193ULL ] == 0.0 ? 1.0E-16 : X [ 193ULL ] ) ) ) * 7.8539816339744827E-5 ;
t2837 = X [ 20ULL ] * t2805 ; t2812 = X [ 21ULL ] / ( t2837 == 0.0 ? 1.0E-16
: t2837 ) ; if ( X [ 195ULL ] <= 0.0 ) { t2814 = 0.0 ; } else { t2814 = X [
195ULL ] >= 1.0 ? 1.0 : X [ 195ULL ] ; } if ( X [ 196ULL ] <= 0.0 ) { t2815 =
0.0 ; } else { t2815 = X [ 196ULL ] >= 1.0 ? 1.0 : X [ 196ULL ] ; } t1907 [
0ULL ] = X [ 20ULL ] ; t1922 [ 0 ] = 52ULL ; tlu2_linear_nearest_prelookup (
& ae_efOut . mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t27 = ae_efOut ;
tlu2_1d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = be_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ce_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ce_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = de_efOut [ 0 ] ;
zc_int352 = ( ( ( 1.0 - t2814 ) - t2815 ) * t2576_idx_0 + t2567_idx_0 * t2814
) + t2585_idx_0 * t2815 ; t2839 = t2812 * 1.5707963267948965E-8 ; t2819 =
t2811 * zc_int352 * 35.2 / ( t2839 == 0.0 ? 1.0E-16 : t2839 ) ; if ( t2811 >=
0.0 ) { t2820 = t2811 * 100000.0 ; } else { t2820 = - t2811 * 100000.0 ; }
t2841 = zc_int352 * 7.8539816339744827E-5 ; t2822 = t2820 * 0.01 / ( t2841 ==
0.0 ? 1.0E-16 : t2841 ) ; zc_int117 = t2822 >= 1.0 ? t2822 : 1.0 ; t2842 =
pmf_log10 ( 6.9 / ( zc_int117 == 0.0 ? 1.0E-16 : zc_int117 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int117 == 0.0 ? 1.0E-16 :
zc_int117 ) + 0.00017169489553429715 ) * 3.24 ; t2844 = t2812 *
1.2337005501361697E-10 ; t2820 = t2811 * ( 1.0 / ( t2842 == 0.0 ? 1.0E-16 :
t2842 ) ) * t2820 * 0.55 / ( t2844 == 0.0 ? 1.0E-16 : t2844 ) ; zc_int117 = (
t2822 - 2000.0 ) / 2000.0 ; t2825 = zc_int117 * zc_int117 * 3.0 - zc_int117 *
zc_int117 * zc_int117 * 2.0 ; if ( t2822 <= 2000.0 ) { zc_int117 = t2819 *
1.0E-5 ; } else if ( t2822 >= 4000.0 ) { zc_int117 = t2820 * 1.0E-5 ; } else
{ zc_int117 = ( ( 1.0 - t2825 ) * t2819 + t2820 * t2825 ) * 1.0E-5 ; }
zc_int258 = t2800 * zc_int258 / 7.8539816339744827E-5 *
0.00031622776601683789 + zc_int117 ; t2819 = X [ 170ULL ] - X [ 21ULL ] ;
t2820 = - ( ( X [ 20ULL ] / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) -
X [ 197ULL ] / ( X [ 198ULL ] == 0.0 ? 1.0E-16 : X [ 198ULL ] ) ) * X [
180ULL ] * t2805 ) / 7.8539816339744827E-5 ; if ( X [ 197ULL ] <=
216.59999999999997 ) { zc_int117 = 216.59999999999997 ; } else { zc_int117 =
X [ 197ULL ] >= 623.15 ? 623.15 : X [ 197ULL ] ; } t2826 = zc_int117 *
zc_int117 ; t2825 = ( ( ( 1074.1165326382641 + zc_int117 * -
0.2214565261064495 ) + t2826 * 0.00037212980109014541 ) * ( ( 1.0 - t2802 ) -
t2803 ) + ( ( 1479.6504774711011 + zc_int117 * 1.2002114337048222 ) + t2826 *
- 0.00038614513167823636 ) * t2802 ) + ( ( 12825.281119789837 + zc_int117 *
6.9647057412840034 ) + t2826 * - 0.0070524868246844051 ) * t2803 ; t2852 =
t2825 - t2805 ; zc_int117 = t2825 / ( t2852 == 0.0 ? 1.0E-16 : t2852 ) ;
t2825 = pmf_sqrt ( t2820 * t2820 * 9.999999999999999E-14 + fabs ( X [ 197ULL
] * zc_int117 * t2805 ) * 1.0E-9 ) ; t2853 = X [ 198ULL ] * X [ 198ULL ] *
zc_int117 ; t2826 = - pmf_sqrt ( fabs ( t2853 / ( t2805 == 0.0 ? 1.0E-16 :
t2805 ) / ( X [ 197ULL ] == 0.0 ? 1.0E-16 : X [ 197ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t2826 >= 0.0 ) { t2827 = t2826 * 100000.0 ; }
else { t2827 = - t2826 * 100000.0 ; } zc_int357 = t2827 * 0.01 / ( t2841 ==
0.0 ? 1.0E-16 : t2841 ) ; intrm_sf_mf_172 = t2826 * zc_int352 * 35.2 / (
t2839 == 0.0 ? 1.0E-16 : t2839 ) ; intrm_sf_mf_253 = zc_int357 >= 1.0 ?
zc_int357 : 1.0 ; t2860 = pmf_log10 ( 6.9 / ( intrm_sf_mf_253 == 0.0 ?
1.0E-16 : intrm_sf_mf_253 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_253 == 0.0 ? 1.0E-16 : intrm_sf_mf_253 ) + 0.00017169489553429715
) * 3.24 ; t2827 = t2826 * t2827 * ( 1.0 / ( t2860 == 0.0 ? 1.0E-16 : t2860 )
) * 0.55 / ( t2844 == 0.0 ? 1.0E-16 : t2844 ) ; intrm_sf_mf_253 = ( zc_int357
- 2000.0 ) / 2000.0 ; t2838 = intrm_sf_mf_253 * intrm_sf_mf_253 * 3.0 -
intrm_sf_mf_253 * intrm_sf_mf_253 * intrm_sf_mf_253 * 2.0 ; if ( zc_int357 <=
2000.0 ) { intrm_sf_mf_253 = intrm_sf_mf_172 * 1.0E-5 ; } else if ( zc_int357
>= 4000.0 ) { intrm_sf_mf_253 = t2827 * 1.0E-5 ; } else { intrm_sf_mf_253 = (
( 1.0 - t2838 ) * intrm_sf_mf_172 + t2827 * t2838 ) * 1.0E-5 ; } t2825 = - (
X [ 180ULL ] * t2825 ) / 7.8539816339744827E-5 * 0.00031622776601683789 +
intrm_sf_mf_253 ; t2827 = X [ 189ULL ] - X [ 21ULL ] ; t1907 [ 0ULL ] = X [
20ULL ] ; tlu2_linear_linear_prelookup ( & ee_efOut . mField0 [ 0ULL ] , &
ee_efOut . mField1 [ 0ULL ] , & ee_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t186 = ee_efOut ; tlu2_1d_linear_linear_value ( &
fe_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = fe_efOut [ 0 ] ; intrm_sf_mf_172 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & ge_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ge_efOut [ 0 ] ;
intrm_sf_mf_253 = t2576_idx_0 ; if ( 1.0 - X [ 22ULL ] >= 0.01 ) { t2838 =
1.0 - X [ 22ULL ] ; } else if ( 1.0 - X [ 22ULL ] >= - 0.1 ) { t2838 = exp (
( ( 1.0 - X [ 22ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2838 =
1.6701700790245661E-7 ; } t2840 = X [ 23ULL ] / ( t2838 == 0.0 ? 1.0E-16 :
t2838 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & he_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = he_efOut [ 0 ] ; t2842 = exp ( pmf_log ( X [ 21ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t2842 >= 1.0 ) { t2867 = ( t2842 - 1.0 )
* 461.523 + t2840 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ = t2840 / (
t2867 == 0.0 ? 1.0E-16 : t2867 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ = 1.0 ; }
t2869 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ *
0.01 ; t2840 = ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ ) / ( t2869
== 0.0 ? 1.0E-16 : t2869 ) ; if ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ <= 0.0 ) {
t2840 = 0.0 ; } else if ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ * 0.01 ) {
t2840 = X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ ; } else {
t2840 = ( X [ 22ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ ) * ( t2840 *
t2840 * 3.0 - t2840 * t2840 * t2840 * 2.0 ) ; } t2812 = t2812 * t2840 *
7.8539816339744827E-5 / 0.001 ; t2840 = ( intrm_sf_mf_172 - intrm_sf_mf_253 )
* t2812 ; tlu2_1d_linear_nearest_value ( & ie_efOut [ 0ULL ] , & t27 .
mField0 [ 0ULL ] , & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ie_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & je_efOut [ 0ULL ] , & t27 . mField0
[ 0ULL ] , & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = je_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ke_efOut [ 0ULL ] , & t27 . mField0 [
0ULL ] , & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ke_efOut [ 0
] ; intrm_sf_mf_253 = ( ( ( 1.0 - t2814 ) - t2815 ) * t2576_idx_0 +
t2567_idx_0 * t2814 ) + t2585_idx_0 * t2815 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ = ( X [
173ULL ] - X [ 20ULL ] ) * ( intrm_sf_mf_253 * 0.031415926535897927 / 0.01 )
; t2845 = ( t2800 - ( - X [ 180ULL ] ) ) / 2.0 ; t4302 = t2845 * 0.01 ; t2846
= t4302 / ( t2841 == 0.0 ? 1.0E-16 : t2841 ) ; t2851 = pmf_sqrt ( t2800 *
t2800 + 2.0360111955237585E-13 ) ; t2852 = pmf_sqrt ( t2800 * t2800 +
2.3237892571262758E-14 ) ; t2854 = pmf_sqrt ( t2800 * t2800 +
1.6409606283812411E-14 ) ; t2860 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
2.0360111955237585E-13 ) ; t2861 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
2.3237892571262758E-14 ) ; t2863 = pmf_sqrt ( X [ 180ULL ] * X [ 180ULL ] +
1.6409606283812411E-14 ) ; tlu2_1d_linear_linear_value ( & le_efOut [ 0ULL ]
, & t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = le_efOut [ 0 ] ; t2864 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & me_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = me_efOut [ 0 ] ; t2866 =
- X [ 181ULL ] + ( - X [ 204ULL ] + - X [ 205ULL ] ) ; t2856 = ( - X [ 180ULL
] + t2800 ) - t2812 * 100000.0 ; t2867 = ( - X [ 182ULL ] + ( - X [ 206ULL ]
+ - X [ 207ULL ] ) ) - t2812 * 100000.0 ; t2858 = ( ( ( 1.0 - t2802 ) - t2803
) * t2864 + intrm_sf_mf_172 * t2802 ) + t2576_idx_0 * t2803 ; t2869 = t2864 -
X [ 20ULL ] * 0.296802103844292 ; t2864 = t2576_idx_0 - X [ 20ULL ] *
4.12448151675695 ; t2865 = intrm_sf_mf_172 - X [ 20ULL ] * 0.461523 ; if ( X
[ 172ULL ] <= 0.0 ) { intrm_sf_mf_172 = 0.0 ; } else { intrm_sf_mf_172 = X [
172ULL ] >= 1.0 ? 1.0 : X [ 172ULL ] ; } if ( X [ 171ULL ] <= 0.0 ) { t2870 =
0.0 ; } else { t2870 = X [ 171ULL ] >= 1.0 ? 1.0 : X [ 171ULL ] ; } t2871 = (
( ( 1.0 - intrm_sf_mf_172 ) - t2870 ) * 296.802103844292 + intrm_sf_mf_172 *
461.523 ) + t2870 * 4124.48151675695 ; intrm_sf_mf_521 = X [ 171ULL ] *
4124.48151675695 / ( t2871 == 0.0 ? 1.0E-16 : t2871 ) ; if ( X [ 191ULL ] <=
0.0 ) { intrm_sf_mf_20 = 0.0 ; } else { intrm_sf_mf_20 = X [ 191ULL ] >= 1.0
? 1.0 : X [ 191ULL ] ; } if ( X [ 190ULL ] <= 0.0 ) { intrm_sf_mf_256 = 0.0 ;
} else { intrm_sf_mf_256 = X [ 190ULL ] >= 1.0 ? 1.0 : X [ 190ULL ] ; }
zc_int41 = ( ( ( 1.0 - intrm_sf_mf_20 ) - intrm_sf_mf_256 ) *
296.802103844292 + intrm_sf_mf_20 * 461.523 ) + intrm_sf_mf_256 *
4124.48151675695 ; intrm_sf_mf_1352 = X [ 190ULL ] * 4124.48151675695 / (
zc_int41 == 0.0 ? 1.0E-16 : zc_int41 ) ; t2876 = X [ 172ULL ] * 461.523 / (
t2871 == 0.0 ? 1.0E-16 : t2871 ) ; intrm_sf_mf_1580 = X [ 191ULL ] * 461.523
/ ( zc_int41 == 0.0 ? 1.0E-16 : zc_int41 ) ; t2878 = U_idx_3 *
0.031415926535897927 ; if ( t2878 * 0.0001 <= 7.8539816339744857E-13 ) {
intrm_sf_mf_225 = 7.8539816339744857E-13 ; } else if ( t2878 * 0.0001 >=
3.1415926535897929E-6 ) { intrm_sf_mf_225 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_225 = t2878 * 0.0001 ; } t2878 = intrm_sf_mf_225 /
7.8539816339744827E-5 ; if ( X [ 215ULL ] <= 0.0 ) { zc_int183 = 0.0 ; } else
{ zc_int183 = X [ 215ULL ] >= 1.0 ? 1.0 : X [ 215ULL ] ; } if ( X [ 216ULL ]
<= 0.0 ) { intrm_sf_mf_262 = 0.0 ; } else { intrm_sf_mf_262 = X [ 216ULL ] >=
1.0 ? 1.0 : X [ 216ULL ] ; } intrm_sf_mf_234 = ( ( ( 1.0 - zc_int183 ) -
intrm_sf_mf_262 ) * 296.802103844292 + zc_int183 * 461.523 ) +
intrm_sf_mf_262 * 4124.48151675695 ; t2880 = X [ 213ULL ] * intrm_sf_mf_234 ;
t201 = X [ 214ULL ] / ( t2880 == 0.0 ? 1.0E-16 : t2880 ) ; zc_int50 = X [
214ULL ] / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) * ( X [ 217ULL ]
/ ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ; t2883 = X [ 214ULL ] /
1.01325 * ( X [ 218ULL ] / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) )
; if ( X [ 180ULL ] > 0.0 ) { t2886 = ( t2878 + 1.0 ) * ( 1.0 - t2878 *
zc_int50 ) * ( X [ 180ULL ] / 0.64 / ( intrm_sf_mf_225 == 0.0 ? 1.0E-16 :
intrm_sf_mf_225 ) * ( X [ 180ULL ] / 0.64 / ( intrm_sf_mf_225 == 0.0 ?
1.0E-16 : intrm_sf_mf_225 ) ) / 2.0 / ( t201 == 0.0 ? 1.0E-16 : t201 ) ) *
9.9999999999999991E-11 ; } else if ( X [ 180ULL ] < 0.0 ) { t2886 = ( t2878 +
1.0 ) * ( 1.0 - t2878 * t2883 ) * ( X [ 180ULL ] / 0.64 / ( intrm_sf_mf_225
== 0.0 ? 1.0E-16 : intrm_sf_mf_225 ) * ( X [ 180ULL ] / 0.64 / (
intrm_sf_mf_225 == 0.0 ? 1.0E-16 : intrm_sf_mf_225 ) ) / 2.0 / ( t201 == 0.0
? 1.0E-16 : t201 ) ) * 9.9999999999999991E-11 ; } else { t2886 = 0.0 ; }
zc_int51 = ( X [ 189ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t2888 =
( 1.0 - t2878 ) * ( 1.0 - t2878 ) ; t2890 = zc_int51 * t2888 ; t2891 = (
t2878 + 1.0 ) * ( 1.0 - t2878 * zc_int50 ) - ( 1.0 - t2878 * t2883 ) * t2878
* 2.0 ; zc_int81 = ( X [ 189ULL ] - 1.01325 ) * ( t2891 >= t2888 ? t2891 :
t2888 ) ; t2891 = ( X [ 189ULL ] - 1.01325 ) / ( zc_int51 == 0.0 ? 1.0E-16 :
zc_int51 ) ; zc_int8 = t2891 * t2891 * 3.0 - t2891 * t2891 * t2891 * 2.0 ; if
( X [ 189ULL ] - 1.01325 <= 0.0 ) { t2891 = t2890 ; } else if ( X [ 189ULL ]
- 1.01325 >= zc_int51 ) { t2891 = zc_int81 ; } else { t2891 = ( 1.0 - zc_int8
) * t2890 + zc_int81 * zc_int8 ; } zc_int81 = ( t2878 + 1.0 ) * ( 1.0 - t2878
* t2883 ) - ( 1.0 - t2878 * zc_int50 ) * t2878 * 2.0 ; t2878 = ( 1.01325 - X
[ 189ULL ] ) * ( zc_int81 >= t2888 ? zc_int81 : t2888 ) ; zc_int50 = (
1.01325 - X [ 189ULL ] ) / ( zc_int51 == 0.0 ? 1.0E-16 : zc_int51 ) ; t2883 =
zc_int50 * zc_int50 * 3.0 - zc_int50 * zc_int50 * zc_int50 * 2.0 ; if (
1.01325 - X [ 189ULL ] <= 0.0 ) { zc_int50 = t2890 ; } else if ( 1.01325 - X
[ 189ULL ] >= zc_int51 ) { zc_int50 = t2878 ; } else { zc_int50 = ( 1.0 -
t2883 ) * t2890 + t2878 * t2883 ; } if ( X [ 189ULL ] > 1.01325 ) { t2878 =
t2891 ; } else { t2878 = X [ 189ULL ] < 1.01325 ? zc_int50 : t2890 ; } if ( X
[ 213ULL ] <= 216.59999999999997 ) { zc_int50 = 216.59999999999997 ; } else {
zc_int50 = X [ 213ULL ] >= 623.15 ? 623.15 : X [ 213ULL ] ; } U_idx_1 =
zc_int50 * zc_int50 ; t2883 = ( ( ( 1074.1165326382641 + zc_int50 * -
0.2214565261064495 ) + U_idx_1 * 0.00037212980109014541 ) * ( ( 1.0 -
zc_int183 ) - intrm_sf_mf_262 ) + ( ( 1479.6504774711011 + zc_int50 *
1.2002114337048222 ) + U_idx_1 * - 0.00038614513167823636 ) * zc_int183 ) + (
( 12825.281119789837 + zc_int50 * 6.9647057412840034 ) + U_idx_1 * -
0.0070524868246844051 ) * intrm_sf_mf_262 ; t2903 = t2883 - intrm_sf_mf_234 ;
t2904 = X [ 214ULL ] * X [ 214ULL ] * ( t2883 / ( t2903 == 0.0 ? 1.0E-16 :
t2903 ) ) ; zc_int50 = pmf_sqrt ( fabs ( t2904 / ( intrm_sf_mf_234 == 0.0 ?
1.0E-16 : intrm_sf_mf_234 ) / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ]
) ) ) * intrm_sf_mf_225 * 0.64 ; t2907 = t201 * 2.0 ; t201 = ( X [ 189ULL ] -
1.01325 ) * pmf_sqrt ( fabs ( t2907 / ( t2878 == 0.0 ? 1.0E-16 : t2878 ) ) )
* intrm_sf_mf_225 * 0.64 ; if ( X [ 26ULL ] <= 0.0 ) { t2883 = 0.0 ; } else {
t2883 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 )
{ t2888 = 0.0 ; } else { t2888 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; }
t2890 = ( ( ( 1.0 - t2883 ) - t2888 ) * 296.802103844292 + t2883 * 461.523 )
+ t2888 * 4124.48151675695 ; t2891 = ( X [ 24ULL ] / ( X [ 30ULL ] == 0.0 ?
1.0E-16 : X [ 30ULL ] ) - X [ 239ULL ] / ( X [ 240ULL ] == 0.0 ? 1.0E-16 : X
[ 240ULL ] ) ) * X [ 238ULL ] * t2890 / 0.32 ; if ( X [ 239ULL ] <=
216.59999999999997 ) { zc_int81 = 216.59999999999997 ; } else { zc_int81 = X
[ 239ULL ] >= 623.15 ? 623.15 : X [ 239ULL ] ; } intrm_sf_mf_784 = zc_int81 *
zc_int81 ; zc_int8 = ( ( ( 1074.1165326382641 + zc_int81 * -
0.2214565261064495 ) + intrm_sf_mf_784 * 0.00037212980109014541 ) * ( ( 1.0 -
t2883 ) - t2888 ) + ( ( 1479.6504774711011 + zc_int81 * 1.2002114337048222 )
+ intrm_sf_mf_784 * - 0.00038614513167823636 ) * t2883 ) + ( (
12825.281119789837 + zc_int81 * 6.9647057412840034 ) + intrm_sf_mf_784 * -
0.0070524868246844051 ) * t2888 ; t2913 = zc_int8 - t2890 ; zc_int81 =
zc_int8 / ( t2913 == 0.0 ? 1.0E-16 : t2913 ) ; zc_int8 = pmf_sqrt ( t2891 *
t2891 * 9.999999999999999E-14 + fabs ( X [ 239ULL ] * zc_int81 * t2890 ) *
1.0E-9 ) ; if ( X [ 226ULL ] <= 0.0 ) { intrm_sf_mf_784 = 0.0 ; } else {
intrm_sf_mf_784 = X [ 226ULL ] >= 1.0 ? 1.0 : X [ 226ULL ] ; } if ( X [
228ULL ] <= 0.0 ) { intrm_sf_mf_32 = 0.0 ; } else { intrm_sf_mf_32 = X [
228ULL ] >= 1.0 ? 1.0 : X [ 228ULL ] ; } t1907 [ 0ULL ] = X [ 24ULL ] ;
tlu2_linear_nearest_prelookup ( & ne_efOut . mField0 [ 0ULL ] , & ne_efOut .
mField1 [ 0ULL ] , & ne_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t143 = ne_efOut ; tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , &
t143 . mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
oe_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t143
. mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
pe_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qe_efOut [ 0ULL ] , & t143
. mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
qe_efOut [ 0 ] ; t2897 = ( ( ( 1.0 - intrm_sf_mf_784 ) - intrm_sf_mf_32 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_784 ) + t2585_idx_0 * intrm_sf_mf_32
; t2914 = X [ 240ULL ] * X [ 240ULL ] * zc_int81 ; t202 = - pmf_sqrt ( fabs (
t2914 / ( t2890 == 0.0 ? 1.0E-16 : t2890 ) / ( X [ 239ULL ] == 0.0 ? 1.0E-16
: X [ 239ULL ] ) ) ) * 0.32 ; if ( t202 >= 0.0 ) { intrm_sf_mf_278 = t202 *
100000.0 ; } else { intrm_sf_mf_278 = - t202 * 100000.0 ; } t2918 = t2897 *
0.32 ; zc_int83 = intrm_sf_mf_278 * 0.01 / ( t2918 == 0.0 ? 1.0E-16 : t2918 )
; t2920 = X [ 24ULL ] * t2890 ; piece47 = X [ 30ULL ] / ( t2920 == 0.0 ?
1.0E-16 : t2920 ) ; t2922 = piece47 * 6.4000000000000011E-5 ; t2902 = t202 *
t2897 * 2.9973120849090416 / ( t2922 == 0.0 ? 1.0E-16 : t2922 ) ; t2903 =
zc_int83 >= 1.0 ? zc_int83 : 1.0 ; t2923 = pmf_log10 ( 6.9 / ( t2903 == 0.0 ?
1.0E-16 : t2903 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2903 ==
0.0 ? 1.0E-16 : t2903 ) + 0.00017169489553429715 ) * 3.24 ; t2925 = piece47 *
0.0020480000000000003 ; intrm_sf_mf_278 = t202 * intrm_sf_mf_278 * ( 1.0 / (
t2923 == 0.0 ? 1.0E-16 : t2923 ) ) * 0.046833001326703774 / ( t2925 == 0.0 ?
1.0E-16 : t2925 ) ; t2903 = ( zc_int83 - 2000.0 ) / 2000.0 ; zc_int98 = t2903
* t2903 * 3.0 - t2903 * t2903 * t2903 * 2.0 ; if ( zc_int83 <= 2000.0 ) {
t2903 = t2902 * 1.0E-5 ; } else if ( zc_int83 >= 4000.0 ) { t2903 =
intrm_sf_mf_278 * 1.0E-5 ; } else { t2903 = ( ( 1.0 - zc_int98 ) * t2902 +
intrm_sf_mf_278 * zc_int98 ) * 1.0E-5 ; } zc_int8 = X [ 238ULL ] * zc_int8 /
0.32 * 0.00031622776601683789 + t2903 ; intrm_sf_mf_278 = X [ 235ULL ] - X [
30ULL ] ; t2902 = ( X [ 24ULL ] / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL
] ) - X [ 242ULL ] / ( X [ 243ULL ] == 0.0 ? 1.0E-16 : X [ 243ULL ] ) ) * X [
241ULL ] * t2890 / 0.32 ; if ( X [ 242ULL ] <= 216.59999999999997 ) { t2903 =
216.59999999999997 ; } else { t2903 = X [ 242ULL ] >= 623.15 ? 623.15 : X [
242ULL ] ; } t2908 = t2903 * t2903 ; zc_int98 = ( ( ( 1074.1165326382641 +
t2903 * - 0.2214565261064495 ) + t2908 * 0.00037212980109014541 ) * ( ( 1.0 -
t2883 ) - t2888 ) + ( ( 1479.6504774711011 + t2903 * 1.2002114337048222 ) +
t2908 * - 0.00038614513167823636 ) * t2883 ) + ( ( 12825.281119789837 + t2903
* 6.9647057412840034 ) + t2908 * - 0.0070524868246844051 ) * t2888 ;
intrm_sf_mf_376 = zc_int98 - t2890 ; t2903 = zc_int98 / ( intrm_sf_mf_376 ==
0.0 ? 1.0E-16 : intrm_sf_mf_376 ) ; zc_int98 = pmf_sqrt ( t2902 * t2902 *
9.999999999999999E-14 + fabs ( X [ 242ULL ] * t2903 * t2890 ) * 1.0E-9 ) ;
t2934 = X [ 243ULL ] * X [ 243ULL ] * t2903 ; t2908 = - pmf_sqrt ( fabs (
t2934 / ( t2890 == 0.0 ? 1.0E-16 : t2890 ) / ( X [ 242ULL ] == 0.0 ? 1.0E-16
: X [ 242ULL ] ) ) ) * 0.32 ; if ( t2908 >= 0.0 ) { t2912 = t2908 * 100000.0
; } else { t2912 = - t2908 * 100000.0 ; } t2913 = t2912 * 0.01 / ( t2918 ==
0.0 ? 1.0E-16 : t2918 ) ; U_idx_1 = t2908 * t2897 * 2.9973120849090416 / (
t2922 == 0.0 ? 1.0E-16 : t2922 ) ; zc_int9 = t2913 >= 1.0 ? t2913 : 1.0 ;
t2941 = pmf_log10 ( 6.9 / ( zc_int9 == 0.0 ? 1.0E-16 : zc_int9 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int9 == 0.0 ? 1.0E-16 :
zc_int9 ) + 0.00017169489553429715 ) * 3.24 ; t2912 = t2908 * t2912 * ( 1.0 /
( t2941 == 0.0 ? 1.0E-16 : t2941 ) ) * 0.046833001326703774 / ( t2925 == 0.0
? 1.0E-16 : t2925 ) ; zc_int9 = ( t2913 - 2000.0 ) / 2000.0 ; intrm_sf_mf_355
= zc_int9 * zc_int9 * 3.0 - zc_int9 * zc_int9 * zc_int9 * 2.0 ; if ( t2913 <=
2000.0 ) { zc_int9 = U_idx_1 * 1.0E-5 ; } else if ( t2913 >= 4000.0 ) {
zc_int9 = t2912 * 1.0E-5 ; } else { zc_int9 = ( ( 1.0 - intrm_sf_mf_355 ) *
U_idx_1 + t2912 * intrm_sf_mf_355 ) * 1.0E-5 ; } zc_int98 = X [ 241ULL ] *
zc_int98 / 0.32 * 0.00031622776601683789 + zc_int9 ; t2912 = X [ 221ULL ] - X
[ 30ULL ] ; t1907 [ 0ULL ] = X [ 24ULL ] ; tlu2_linear_linear_prelookup ( &
re_efOut . mField0 [ 0ULL ] , & re_efOut . mField1 [ 0ULL ] , & re_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = re_efOut ;
tlu2_1d_linear_linear_value ( & se_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = se_efOut [ 0 ] ; zc_int9
= t2576_idx_0 ; tlu2_1d_linear_linear_value ( & te_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
te_efOut [ 0 ] ; intrm_sf_mf_355 = t2576_idx_0 ; if ( 1.0 - X [ 26ULL ] >=
0.01 ) { t2923 = 1.0 - X [ 26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 )
{ t2923 = exp ( ( ( 1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
t2923 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = X [ 25ULL ] /
( t2923 == 0.0 ? 1.0E-16 : t2923 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & ue_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ue_efOut [ 0 ] ; t2926 =
exp ( pmf_log ( X [ 30ULL ] * 100000.0 ) - t2576_idx_0 ) ; if ( t2926 >= 1.0
) { t2948 = ( t2926 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 / ( t2948 ==
0.0 ? 1.0E-16 : t2948 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 = 1.0 ; } t2950
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = ( X [ 26ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 ) / ( t2950
== 0.0 ? 1.0E-16 : t2950 ) ; if ( X [ 26ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = 0.0 ; } else
if ( X [ 26ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = X [ 26ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = ( X [ 26ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 * 2.0 ) ; }
piece47 = piece47 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = ( zc_int9 -
intrm_sf_mf_355 ) * piece47 ; tlu2_1d_linear_nearest_value ( & ve_efOut [
0ULL ] , & t143 . mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = ve_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
we_efOut [ 0ULL ] , & t143 . mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = we_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
xe_efOut [ 0ULL ] , & t143 . mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = xe_efOut [ 0 ] ; intrm_sf_mf_355 = ( ( ( 1.0 -
intrm_sf_mf_784 ) - intrm_sf_mf_32 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_784 ) + t2585_idx_0 * intrm_sf_mf_32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 = ( X [ 31ULL ]
- X [ 24ULL ] ) * ( intrm_sf_mf_355 * 10.709248339636167 / 0.01 ) ;
intrm_sf_mf_376 = ( X [ 238ULL ] - X [ 241ULL ] ) / 2.0 ; t4446 =
intrm_sf_mf_376 * 0.01 ; t2935 = t4446 / ( t2918 == 0.0 ? 1.0E-16 : t2918 ) ;
t2937 = pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 4.3455507383574884E-7 ) ;
t2939 = pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 4.9597684650720062E-8 ) ;
t2941 = pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 3.5023764535063242E-8 ) ;
t2942 = pmf_sqrt ( X [ 241ULL ] * X [ 241ULL ] + 4.3455507383574884E-7 ) ;
t2944 = pmf_sqrt ( X [ 241ULL ] * X [ 241ULL ] + 4.9597684650720062E-8 ) ;
t2945 = pmf_sqrt ( X [ 241ULL ] * X [ 241ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & ye_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ye_efOut [ 0 ] ; t2946 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & af_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
af_efOut [ 0 ] ; t2948 = X [ 248ULL ] + X [ 253ULL ] ; t2949 = ( X [ 238ULL ]
+ X [ 241ULL ] ) - piece47 * 100000.0 ; t2950 = ( X [ 249ULL ] + X [ 254ULL ]
) - piece47 * 100000.0 ; t2951 = ( ( ( 1.0 - t2883 ) - t2888 ) * t2946 +
zc_int9 * t2883 ) + t2576_idx_0 * t2888 ; t2953 = t2946 - X [ 24ULL ] *
0.296802103844292 ; t2946 = t2576_idx_0 - X [ 24ULL ] * 4.12448151675695 ;
t2947 = zc_int9 - X [ 24ULL ] * 0.461523 ; if ( X [ 237ULL ] <= 0.0 ) {
zc_int9 = 0.0 ; } else { zc_int9 = X [ 237ULL ] >= 1.0 ? 1.0 : X [ 237ULL ] ;
} if ( X [ 236ULL ] <= 0.0 ) { intrm_sf_mf_41 = 0.0 ; } else { intrm_sf_mf_41
= X [ 236ULL ] >= 1.0 ? 1.0 : X [ 236ULL ] ; } zc_int118 = ( ( ( 1.0 -
zc_int9 ) - intrm_sf_mf_41 ) * 296.802103844292 + zc_int9 * 461.523 ) +
intrm_sf_mf_41 * 4124.48151675695 ; intrm_sf_mf_668 = X [ 236ULL ] *
4124.48151675695 / ( zc_int118 == 0.0 ? 1.0E-16 : zc_int118 ) ; if ( X [
223ULL ] <= 0.0 ) { intrm_sf_mf_514 = 0.0 ; } else { intrm_sf_mf_514 = X [
223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) {
intrm_sf_mf_391 = 0.0 ; } else { intrm_sf_mf_391 = X [ 222ULL ] >= 1.0 ? 1.0
: X [ 222ULL ] ; } piece26 = ( ( ( 1.0 - intrm_sf_mf_514 ) - intrm_sf_mf_391
) * 296.802103844292 + intrm_sf_mf_514 * 461.523 ) + intrm_sf_mf_391 *
4124.48151675695 ; intrm_sf_mf_312 = X [ 222ULL ] * 4124.48151675695 / (
piece26 == 0.0 ? 1.0E-16 : piece26 ) ; t2957 = X [ 237ULL ] * 461.523 / (
zc_int118 == 0.0 ? 1.0E-16 : zc_int118 ) ; t2958 = X [ 223ULL ] * 461.523 / (
piece26 == 0.0 ? 1.0E-16 : piece26 ) ; if ( X [ 29ULL ] <= 0.0 ) { t2959 =
0.0 ; } else { t2959 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [
28ULL ] <= 0.0 ) { intrm_sf_mf_402 = 0.0 ; } else { intrm_sf_mf_402 = X [
28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } intrm_sf_mf_403 = ( ( ( 1.0 - t2959 )
- intrm_sf_mf_402 ) * 296.802103844292 + t2959 * 461.523 ) + intrm_sf_mf_402
* 4124.48151675695 ; piece28 = - ( ( X [ 27ULL ] / ( X [ 32ULL ] == 0.0 ?
1.0E-16 : X [ 32ULL ] ) - X [ 257ULL ] / ( X [ 258ULL ] == 0.0 ? 1.0E-16 : X
[ 258ULL ] ) ) * X [ 241ULL ] * intrm_sf_mf_403 ) / 0.32 ; if ( X [ 257ULL ]
<= 216.59999999999997 ) { t2964 = 216.59999999999997 ; } else { t2964 = X [
257ULL ] >= 623.15 ? 623.15 : X [ 257ULL ] ; } t2660 = t2964 * t2964 ;
piece63 = ( ( ( 1074.1165326382641 + t2964 * - 0.2214565261064495 ) + t2660 *
0.00037212980109014541 ) * ( ( 1.0 - t2959 ) - intrm_sf_mf_402 ) + ( (
1479.6504774711011 + t2964 * 1.2002114337048222 ) + t2660 * -
0.00038614513167823636 ) * t2959 ) + ( ( 12825.281119789837 + t2964 *
6.9647057412840034 ) + t2660 * - 0.0070524868246844051 ) * intrm_sf_mf_402 ;
intrm_sf_mf_529 = piece63 - intrm_sf_mf_403 ; t2964 = piece63 / (
intrm_sf_mf_529 == 0.0 ? 1.0E-16 : intrm_sf_mf_529 ) ; piece63 = pmf_sqrt (
piece28 * piece28 * 9.999999999999999E-14 + fabs ( X [ 257ULL ] * t2964 *
intrm_sf_mf_403 ) * 1.0E-9 ) ; if ( X [ 231ULL ] <= 0.0 ) { t2660 = 0.0 ; }
else { t2660 = X [ 231ULL ] >= 1.0 ? 1.0 : X [ 231ULL ] ; } if ( X [ 233ULL ]
<= 0.0 ) { intrm_sf_mf_529 = 0.0 ; } else { intrm_sf_mf_529 = X [ 233ULL ] >=
1.0 ? 1.0 : X [ 233ULL ] ; } t1907 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_nearest_prelookup ( & bf_efOut . mField0 [ 0ULL ] , & bf_efOut .
mField1 [ 0ULL ] , & bf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t73 = bf_efOut ; tlu2_1d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
cf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & df_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = df_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ef_efOut [ 0ULL ] , & t73 . mField0
[ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ef_efOut [ 0
] ; piece79 = ( ( ( 1.0 - t2660 ) - intrm_sf_mf_529 ) * t2576_idx_0 +
t2567_idx_0 * t2660 ) + t2585_idx_0 * intrm_sf_mf_529 ; t2966 = X [ 258ULL ]
* X [ 258ULL ] * t2964 ; piece82 = - pmf_sqrt ( fabs ( t2966 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 257ULL ] == 0.0
? 1.0E-16 : X [ 257ULL ] ) ) ) * 0.32 ; if ( piece82 >= 0.0 ) { t2967 =
piece82 * 100000.0 ; } else { t2967 = - piece82 * 100000.0 ; } t2970 =
piece79 * 0.32 ; piece96 = t2967 * 0.01 / ( t2970 == 0.0 ? 1.0E-16 : t2970 )
; t2972 = X [ 27ULL ] * intrm_sf_mf_403 ; piece98 = X [ 32ULL ] / ( t2972 ==
0.0 ? 1.0E-16 : t2972 ) ; t2974 = piece98 * 6.4000000000000011E-5 ; t209 =
piece82 * piece79 * 2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ;
zc_int224 = piece96 >= 1.0 ? piece96 : 1.0 ; zc_int223 = pmf_log10 ( 6.9 / (
zc_int224 == 0.0 ? 1.0E-16 : zc_int224 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int224 == 0.0 ? 1.0E-16 : zc_int224 ) +
0.00017169489553429715 ) * 3.24 ; t2977 = piece98 * 0.0020480000000000003 ;
t2967 = piece82 * t2967 * ( 1.0 / ( zc_int223 == 0.0 ? 1.0E-16 : zc_int223 )
) * 0.046833001326703774 / ( t2977 == 0.0 ? 1.0E-16 : t2977 ) ; zc_int224 = (
piece96 - 2000.0 ) / 2000.0 ; zc_int223 = zc_int224 * zc_int224 * 3.0 -
zc_int224 * zc_int224 * zc_int224 * 2.0 ; if ( piece96 <= 2000.0 ) {
zc_int224 = t209 * 1.0E-5 ; } else if ( piece96 >= 4000.0 ) { zc_int224 =
t2967 * 1.0E-5 ; } else { zc_int224 = ( ( 1.0 - zc_int223 ) * t209 + t2967 *
zc_int223 ) * 1.0E-5 ; } piece63 = - ( X [ 241ULL ] * piece63 ) / 0.32 *
0.00031622776601683789 + zc_int224 ; t2967 = X [ 221ULL ] - X [ 32ULL ] ;
t209 = ( X [ 27ULL ] / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) - X [
259ULL ] / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) ) * X [ 192ULL ]
* intrm_sf_mf_403 / 0.32 ; if ( X [ 259ULL ] <= 216.59999999999997 ) {
zc_int224 = 216.59999999999997 ; } else { zc_int224 = X [ 259ULL ] >= 623.15
? 623.15 : X [ 259ULL ] ; } t2960 = zc_int224 * zc_int224 ; zc_int223 = ( ( (
1074.1165326382641 + zc_int224 * - 0.2214565261064495 ) + t2960 *
0.00037212980109014541 ) * ( ( 1.0 - t2959 ) - intrm_sf_mf_402 ) + ( (
1479.6504774711011 + zc_int224 * 1.2002114337048222 ) + t2960 * -
0.00038614513167823636 ) * t2959 ) + ( ( 12825.281119789837 + zc_int224 *
6.9647057412840034 ) + t2960 * - 0.0070524868246844051 ) * intrm_sf_mf_402 ;
t2985 = zc_int223 - intrm_sf_mf_403 ; zc_int224 = zc_int223 / ( t2985 == 0.0
? 1.0E-16 : t2985 ) ; zc_int223 = pmf_sqrt ( t209 * t209 *
9.999999999999999E-14 + fabs ( X [ 259ULL ] * zc_int224 * intrm_sf_mf_403 ) *
1.0E-9 ) ; t4335 = X [ 260ULL ] * X [ 260ULL ] * zc_int224 ; t2960 = -
pmf_sqrt ( fabs ( t4335 / ( intrm_sf_mf_403 == 0.0 ? 1.0E-16 :
intrm_sf_mf_403 ) / ( X [ 259ULL ] == 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) ) *
0.32 ; if ( t2960 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = t2960 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = - t2960 *
100000.0 ; } t2978 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 * 0.01 / (
t2970 == 0.0 ? 1.0E-16 : t2970 ) ; U_idx_1 = t2960 * piece79 *
2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ; t2984 = t2978 >=
1.0 ? t2978 : 1.0 ; t2993 = pmf_log10 ( 6.9 / ( t2984 == 0.0 ? 1.0E-16 :
t2984 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2984 == 0.0 ?
1.0E-16 : t2984 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = t2960 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 * ( 1.0 / (
t2993 == 0.0 ? 1.0E-16 : t2993 ) ) * 0.046833001326703774 / ( t2977 == 0.0 ?
1.0E-16 : t2977 ) ; t2984 = ( t2978 - 2000.0 ) / 2000.0 ; t2985 = t2984 *
t2984 * 3.0 - t2984 * t2984 * t2984 * 2.0 ; if ( t2978 <= 2000.0 ) { t2984 =
U_idx_1 * 1.0E-5 ; } else if ( t2978 >= 4000.0 ) { t2984 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 * 1.0E-5 ; }
else { t2984 = ( ( 1.0 - t2985 ) * U_idx_1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 * t2985 ) *
1.0E-5 ; } zc_int223 = X [ 192ULL ] * zc_int223 / 0.32 *
0.00031622776601683789 + t2984 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = X [ 170ULL ]
- X [ 32ULL ] ; t1907 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup (
& ff_efOut . mField0 [ 0ULL ] , & ff_efOut . mField1 [ 0ULL ] , & ff_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = ff_efOut ;
tlu2_1d_linear_linear_value ( & gf_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gf_efOut [ 0 ] ; t2984 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & hf_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
hf_efOut [ 0 ] ; t2985 = t2576_idx_0 ; if ( 1.0 - X [ 29ULL ] >= 0.01 ) {
t2987 = 1.0 - X [ 29ULL ] ; } else if ( 1.0 - X [ 29ULL ] >= - 0.1 ) { t2987
= exp ( ( ( 1.0 - X [ 29ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2987 =
1.6701700790245661E-7 ; } piece100 = X [ 28ULL ] / ( t2987 == 0.0 ? 1.0E-16 :
t2987 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & if_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = if_efOut [ 0 ] ; t2991 = exp ( pmf_log ( X [ 32ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t2991 >= 1.0 ) { t3000 = ( t2991 - 1.0 )
* 461.523 + piece100 ; t2993 = piece100 / ( t3000 == 0.0 ? 1.0E-16 : t3000 )
; } else { t2993 = 1.0 ; } t3002 = t2993 * 0.01 ; piece100 = ( X [ 29ULL ] -
t2993 ) / ( t3002 == 0.0 ? 1.0E-16 : t3002 ) ; if ( X [ 29ULL ] - t2993 <=
0.0 ) { piece100 = 0.0 ; } else if ( X [ 29ULL ] - t2993 >= t2993 * 0.01 ) {
piece100 = X [ 29ULL ] - t2993 ; } else { piece100 = ( X [ 29ULL ] - t2993 )
* ( piece100 * piece100 * 3.0 - piece100 * piece100 * piece100 * 2.0 ) ; }
piece98 = piece98 * piece100 * 0.026773120849090417 / 0.001 ; piece100 = (
t2984 - t2985 ) * piece98 ; tlu2_1d_linear_nearest_value ( & jf_efOut [ 0ULL
] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = jf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
kf_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = kf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
lf_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = lf_efOut [ 0 ] ; t2985 = ( ( ( 1.0 - t2660 ) -
intrm_sf_mf_529 ) * t2576_idx_0 + t2567_idx_0 * t2660 ) + t2585_idx_0 *
intrm_sf_mf_529 ; t2993 = ( X [ 31ULL ] - X [ 27ULL ] ) * ( t2985 *
10.709248339636167 / 0.01 ) ; t2996 = ( - X [ 241ULL ] - X [ 192ULL ] ) / 2.0
; t4349 = t2996 * 0.01 ; t2997 = t4349 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ;
t2998 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] + 4.3455507383574884E-7 ) ;
t2999 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] + 4.9597684650720062E-8 ) ;
t3000 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = mf_efOut [ 0 ] ; t3001 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & nf_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
nf_efOut [ 0 ] ; t3003 = ( - X [ 253ULL ] + X [ 204ULL ] ) + X [ 270ULL ] ;
t3004 = ( ( ( - X [ 241ULL ] + X [ 192ULL ] ) + X [ 270ULL ] ) + X [ 271ULL ]
) - piece98 * 100000.0 ; t3005 = ( ( - X [ 254ULL ] + X [ 206ULL ] ) + X [
271ULL ] ) - piece98 * 100000.0 ; intrm_sf_mf_520 = ( ( ( 1.0 - t2959 ) -
intrm_sf_mf_402 ) * t3001 + t2984 * t2959 ) + t2576_idx_0 * intrm_sf_mf_402 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi99 = t3001 - X [
27ULL ] * 0.296802103844292 ; t3001 = t2576_idx_0 - X [ 27ULL ] *
4.12448151675695 ; t3002 = t2984 - X [ 27ULL ] * 0.461523 ; if ( X [ 35ULL ]
<= 0.0 ) { t2984 = 0.0 ; } else { t2984 = X [ 35ULL ] >= 1.0 ? 1.0 : X [
35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { intrm_sf_mf_541 = 0.0 ; } else {
intrm_sf_mf_541 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_542
= ( ( ( 1.0 - t2984 ) - intrm_sf_mf_541 ) * 296.802103844292 + t2984 *
461.523 ) + intrm_sf_mf_541 * 4124.48151675695 ; zc_int259 = ( X [ 33ULL ] /
( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) - X [ 283ULL ] / ( X [ 284ULL
] == 0.0 ? 1.0E-16 : X [ 284ULL ] ) ) * X [ 282ULL ] * intrm_sf_mf_542 /
0.0019634954084936209 ; if ( X [ 283ULL ] <= 216.59999999999997 ) { zc_int182
= 216.59999999999997 ; } else { zc_int182 = X [ 283ULL ] >= 623.15 ? 623.15 :
X [ 283ULL ] ; } intrm_sf_mf_806 = zc_int182 * zc_int182 ; t213 = ( ( (
1074.1165326382641 + zc_int182 * - 0.2214565261064495 ) + intrm_sf_mf_806 *
0.00037212980109014541 ) * ( ( 1.0 - t2984 ) - intrm_sf_mf_541 ) + ( (
1479.6504774711011 + zc_int182 * 1.2002114337048222 ) + intrm_sf_mf_806 * -
0.00038614513167823636 ) * t2984 ) + ( ( 12825.281119789837 + zc_int182 *
6.9647057412840034 ) + intrm_sf_mf_806 * - 0.0070524868246844051 ) *
intrm_sf_mf_541 ; intrm_sf_mf_815 = t213 - intrm_sf_mf_542 ; zc_int182 = t213
/ ( intrm_sf_mf_815 == 0.0 ? 1.0E-16 : intrm_sf_mf_815 ) ; t213 = pmf_sqrt (
zc_int259 * zc_int259 * 9.999999999999999E-14 + fabs ( X [ 283ULL ] *
zc_int182 * intrm_sf_mf_542 ) * 1.0E-9 ) ; if ( X [ 279ULL ] <= 0.0 ) {
intrm_sf_mf_806 = 0.0 ; } else { intrm_sf_mf_806 = X [ 279ULL ] >= 1.0 ? 1.0
: X [ 279ULL ] ; } if ( X [ 278ULL ] <= 0.0 ) { intrm_sf_mf_815 = 0.0 ; }
else { intrm_sf_mf_815 = X [ 278ULL ] >= 1.0 ? 1.0 : X [ 278ULL ] ; } t1907 [
0ULL ] = X [ 33ULL ] ; tlu2_linear_nearest_prelookup ( & of_efOut . mField0 [
0ULL ] , & of_efOut . mField1 [ 0ULL ] , & of_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t105 = of_efOut ; tlu2_1d_linear_nearest_value ( &
pf_efOut [ 0ULL ] , & t105 . mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = pf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
qf_efOut [ 0ULL ] , & t105 . mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = qf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
rf_efOut [ 0ULL ] , & t105 . mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = rf_efOut [ 0 ] ; t215 = ( ( ( 1.0 - intrm_sf_mf_806
) - intrm_sf_mf_815 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_806 ) +
t2585_idx_0 * intrm_sf_mf_815 ; t4428 = X [ 284ULL ] * X [ 284ULL ] *
zc_int182 ; zc_int193 = - pmf_sqrt ( fabs ( t4428 / ( intrm_sf_mf_542 == 0.0
? 1.0E-16 : intrm_sf_mf_542 ) / ( X [ 283ULL ] == 0.0 ? 1.0E-16 : X [ 283ULL
] ) ) ) * 0.0019634954084936209 ; if ( zc_int193 >= 0.0 ) { t3015 = zc_int193
* 100000.0 ; } else { t3015 = - zc_int193 * 100000.0 ; } t4382 = t215 *
0.0019634954084936209 ; t217 = t3015 * 0.05 / ( t4382 == 0.0 ? 1.0E-16 :
t4382 ) ; t3020 = X [ 33ULL ] * intrm_sf_mf_542 ; piece103 = X [ 36ULL ] / (
t3020 == 0.0 ? 1.0E-16 : t3020 ) ; t4385 = piece103 * 9.8174770424681068E-6 ;
t218 = zc_int193 * t215 * 11.2 / ( t4385 == 0.0 ? 1.0E-16 : t4385 ) ; t3021 =
t217 >= 1.0 ? t217 : 1.0 ; t220 = pmf_log10 ( 6.9 / ( t3021 == 0.0 ? 1.0E-16
: t3021 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3021 == 0.0 ?
1.0E-16 : t3021 ) + 2.8767404433520813E-5 ) * 3.24 ; t4399 = piece103 *
3.855314219175531E-7 ; t3015 = zc_int193 * t3015 * ( 1.0 / ( t220 == 0.0 ?
1.0E-16 : t220 ) ) * 0.175 / ( t4399 == 0.0 ? 1.0E-16 : t4399 ) ; t3021 = (
t217 - 2000.0 ) / 2000.0 ; t220 = t3021 * t3021 * 3.0 - t3021 * t3021 * t3021
* 2.0 ; if ( t217 <= 2000.0 ) { t3021 = t218 * 1.0E-5 ; } else if ( t217 >=
4000.0 ) { t3021 = t3015 * 1.0E-5 ; } else { t3021 = ( ( 1.0 - t220 ) * t218
+ t3015 * t220 ) * 1.0E-5 ; } t213 = X [ 282ULL ] * t213 /
0.0019634954084936209 * 0.00031622776601683789 + t3021 ; t3015 = X [ 37ULL ]
- X [ 36ULL ] ; t218 = - ( ( X [ 33ULL ] / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X
[ 36ULL ] ) - X [ 285ULL ] / ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] )
) * X [ 238ULL ] * intrm_sf_mf_542 ) / 0.0019634954084936209 ; if ( X [
285ULL ] <= 216.59999999999997 ) { t3021 = 216.59999999999997 ; } else {
t3021 = X [ 285ULL ] >= 623.15 ? 623.15 : X [ 285ULL ] ; } t3008 = t3021 *
t3021 ; t220 = ( ( ( 1074.1165326382641 + t3021 * - 0.2214565261064495 ) +
t3008 * 0.00037212980109014541 ) * ( ( 1.0 - t2984 ) - intrm_sf_mf_541 ) + (
( 1479.6504774711011 + t3021 * 1.2002114337048222 ) + t3008 * -
0.00038614513167823636 ) * t2984 ) + ( ( 12825.281119789837 + t3021 *
6.9647057412840034 ) + t3008 * - 0.0070524868246844051 ) * intrm_sf_mf_541 ;
t3033 = t220 - intrm_sf_mf_542 ; t3021 = t220 / ( t3033 == 0.0 ? 1.0E-16 :
t3033 ) ; t220 = pmf_sqrt ( t218 * t218 * 9.999999999999999E-14 + fabs ( X [
285ULL ] * t3021 * intrm_sf_mf_542 ) * 1.0E-9 ) ; t4414 = X [ 286ULL ] * X [
286ULL ] * t3021 ; t3008 = - pmf_sqrt ( fabs ( t4414 / ( intrm_sf_mf_542 ==
0.0 ? 1.0E-16 : intrm_sf_mf_542 ) / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [
285ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3008 >= 0.0 ) { t3024 = t3008
* 100000.0 ; } else { t3024 = - t3008 * 100000.0 ; } t3026 = t3024 * 0.05 / (
t4382 == 0.0 ? 1.0E-16 : t4382 ) ; intrm_sf_mf_1729 = t3008 * t215 * 11.2 / (
t4385 == 0.0 ? 1.0E-16 : t4385 ) ; intrm_sf_mf_859 = t3026 >= 1.0 ? t3026 :
1.0 ; t3041 = pmf_log10 ( 6.9 / ( intrm_sf_mf_859 == 0.0 ? 1.0E-16 :
intrm_sf_mf_859 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_859 == 0.0 ? 1.0E-16 : intrm_sf_mf_859 ) + 2.8767404433520813E-5
) * 3.24 ; t3024 = t3008 * t3024 * ( 1.0 / ( t3041 == 0.0 ? 1.0E-16 : t3041 )
) * 0.175 / ( t4399 == 0.0 ? 1.0E-16 : t4399 ) ; intrm_sf_mf_859 = ( t3026 -
2000.0 ) / 2000.0 ; t3033 = intrm_sf_mf_859 * intrm_sf_mf_859 * 3.0 -
intrm_sf_mf_859 * intrm_sf_mf_859 * intrm_sf_mf_859 * 2.0 ; if ( t3026 <=
2000.0 ) { intrm_sf_mf_859 = intrm_sf_mf_1729 * 1.0E-5 ; } else if ( t3026 >=
4000.0 ) { intrm_sf_mf_859 = t3024 * 1.0E-5 ; } else { intrm_sf_mf_859 = ( (
1.0 - t3033 ) * intrm_sf_mf_1729 + t3024 * t3033 ) * 1.0E-5 ; } t220 = - ( X
[ 238ULL ] * t220 ) / 0.0019634954084936209 * 0.00031622776601683789 +
intrm_sf_mf_859 ; t3024 = X [ 235ULL ] - X [ 36ULL ] ; t1907 [ 0ULL ] = X [
33ULL ] ; tlu2_linear_linear_prelookup ( & sf_efOut . mField0 [ 0ULL ] , &
sf_efOut . mField1 [ 0ULL ] , & sf_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = sf_efOut ; tlu2_1d_linear_linear_value ( &
tf_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = tf_efOut [ 0 ] ; intrm_sf_mf_1729 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = uf_efOut [ 0 ] ;
intrm_sf_mf_859 = t2576_idx_0 ; if ( 1.0 - X [ 35ULL ] >= 0.01 ) { t3033 =
1.0 - X [ 35ULL ] ; } else if ( 1.0 - X [ 35ULL ] >= - 0.1 ) { t3033 = exp (
( ( 1.0 - X [ 35ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t3033 =
1.6701700790245661E-7 ; } t3035 = X [ 34ULL ] / ( t3033 == 0.0 ? 1.0E-16 :
t3033 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & vf_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = vf_efOut [ 0 ] ; t3037 = exp ( pmf_log ( X [ 36ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t3037 >= 1.0 ) { t3048 = ( t3037 - 1.0 )
* 461.523 + t3035 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 = t3035 / (
t3048 == 0.0 ? 1.0E-16 : t3048 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 = 1.0 ; }
t3050 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 * 0.01
; t3035 = ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 ) / ( t3050 ==
0.0 ? 1.0E-16 : t3050 ) ; if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 <= 0.0 ) {
t3035 = 0.0 ; } else if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 * 0.01 ) {
t3035 = X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 ; } else {
t3035 = ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 ) * ( t3035 *
t3035 * 3.0 - t3035 * t3035 * t3035 * 2.0 ) ; } piece103 = piece103 * t3035 *
0.00049087385212340522 / 0.001 ; t3035 = ( intrm_sf_mf_1729 - intrm_sf_mf_859
) * piece103 ; tlu2_1d_linear_nearest_value ( & wf_efOut [ 0ULL ] , & t105 .
mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
wf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xf_efOut [ 0ULL ] , & t105
. mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
xf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & yf_efOut [ 0ULL ] , & t105
. mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
yf_efOut [ 0 ] ; intrm_sf_mf_859 = ( ( ( 1.0 - intrm_sf_mf_806 ) -
intrm_sf_mf_815 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_806 ) +
t2585_idx_0 * intrm_sf_mf_815 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8 = ( X [ 281ULL
] - X [ 33ULL ] ) * ( intrm_sf_mf_859 * 0.039269908169872414 / 0.05 ) ; t3041
= ( X [ 282ULL ] - ( - X [ 238ULL ] ) ) / 2.0 ; t4421 = t3041 * 0.05 ;
intrm_sf_mf_825 = t4421 / ( t4382 == 0.0 ? 1.0E-16 : t4382 ) ; t3044 =
pmf_sqrt ( X [ 282ULL ] * X [ 282ULL ] + 5.0900279888093953E-12 ) ; t3045 =
pmf_sqrt ( X [ 282ULL ] * X [ 282ULL ] + 5.8094731428156895E-13 ) ; t3046 =
pmf_sqrt ( X [ 282ULL ] * X [ 282ULL ] + 4.1024015709531014E-13 ) ; t3047 =
pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 5.0900279888093953E-12 ) ; t3048 =
pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 5.8094731428156895E-13 ) ; t3049 =
pmf_sqrt ( X [ 238ULL ] * X [ 238ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & ag_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ag_efOut [ 0 ] ; t3050 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & bg_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
bg_efOut [ 0 ] ; t3052 = - X [ 248ULL ] + X [ 289ULL ] ; t3053 = ( ( - X [
238ULL ] + X [ 282ULL ] ) + U_idx_5 ) - piece103 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_37 = ( ( - X [
249ULL ] + X [ 290ULL ] ) + U_idx_5 ) - piece103 * 100000.0 ; intrm_sf_mf_659
= ( ( ( 1.0 - t2984 ) - intrm_sf_mf_541 ) * t3050 + intrm_sf_mf_1729 * t2984
) + t2576_idx_0 * intrm_sf_mf_541 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_41 = t3050 - X [
33ULL ] * 0.296802103844292 ; t3050 = t2576_idx_0 - X [ 33ULL ] *
4.12448151675695 ; t3051 = intrm_sf_mf_1729 - X [ 33ULL ] * 0.461523 ; if ( X
[ 274ULL ] <= 0.0 ) { intrm_sf_mf_1729 = 0.0 ; } else { intrm_sf_mf_1729 = X
[ 274ULL ] >= 1.0 ? 1.0 : X [ 274ULL ] ; } if ( X [ 273ULL ] <= 0.0 ) {
piece121 = 0.0 ; } else { piece121 = X [ 273ULL ] >= 1.0 ? 1.0 : X [ 273ULL ]
; } zc_int287 = ( ( ( 1.0 - intrm_sf_mf_1729 ) - piece121 ) *
296.802103844292 + intrm_sf_mf_1729 * 461.523 ) + piece121 * 4124.48151675695
; intrm_sf_mf_862 = X [ 273ULL ] * 4124.48151675695 / ( zc_int287 == 0.0 ?
1.0E-16 : zc_int287 ) ; t3056 = X [ 274ULL ] * 461.523 / ( zc_int287 == 0.0 ?
1.0E-16 : zc_int287 ) ; t3057 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] +
2.7104677895120892E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1 = pmf_sqrt (
X [ 307ULL ] * X [ 307ULL ] + 5.2285258285341208E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 = pmf_sqrt (
X [ 307ULL ] * X [ 307ULL ] + 3.6921614138577926E-12 ) ; if ( X [ 312ULL ] <=
0.0 ) { intrm_sf_mf_678 = 0.0 ; } else { intrm_sf_mf_678 = X [ 312ULL ] >=
1.0 ? 1.0 : X [ 312ULL ] ; } if ( X [ 313ULL ] <= 0.0 ) { intrm_sf_mf_679 =
0.0 ; } else { intrm_sf_mf_679 = X [ 313ULL ] >= 1.0 ? 1.0 : X [ 313ULL ] ; }
intrm_sf_mf_680 = ( ( ( 1.0 - intrm_sf_mf_678 ) - intrm_sf_mf_679 ) *
296.802103844292 + intrm_sf_mf_678 * 461.523 ) + intrm_sf_mf_679 *
259.836612622973 ; if ( 1.0 - X [ 312ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ5 = 1.0 - X [
312ULL ] ; } else if ( 1.0 - X [ 312ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ5 = exp ( ( (
1.0 - X [ 312ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ5 =
1.6701700790245661E-7 ; } t3058 = ( X [ 316ULL ] * 0.07812500122070315 +
U_idx_7 * 10.0 ) + - 7.8125001220703152E-10 ; if ( X [ 40ULL ] <= 0.0 ) {
intrm_sf_mf_690 = 0.0 ; } else { intrm_sf_mf_690 = X [ 40ULL ] >= 1.0 ? 1.0 :
X [ 40ULL ] ; } if ( X [ 41ULL ] <= 0.0 ) { intrm_sf_mf_691 = 0.0 ; } else {
intrm_sf_mf_691 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } intrm_sf_mf_692
= ( ( ( 1.0 - intrm_sf_mf_690 ) - intrm_sf_mf_691 ) * 296.802103844292 +
intrm_sf_mf_690 * 461.523 ) + intrm_sf_mf_691 * 259.836612622973 ; zc_int293
= ( X [ 38ULL ] / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) - X [ 320ULL
] / ( X [ 321ULL ] == 0.0 ? 1.0E-16 : X [ 321ULL ] ) ) * X [ 319ULL ] *
intrm_sf_mf_692 / 0.0019634954084936209 ; if ( X [ 320ULL ] <=
216.59999999999997 ) { t3063 = 216.59999999999997 ; } else { t3063 = X [
320ULL ] >= 623.15 ? 623.15 : X [ 320ULL ] ; } intrm_sf_mf_960 = t3063 *
t3063 ; zc_int25 = ( ( ( 1074.1165326382641 + t3063 * - 0.2214565261064495 )
+ intrm_sf_mf_960 * 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_690 ) -
intrm_sf_mf_691 ) + ( ( 1479.6504774711011 + t3063 * 1.2002114337048222 ) +
intrm_sf_mf_960 * - 0.00038614513167823636 ) * intrm_sf_mf_690 ) + ( (
900.63941224838356 + t3063 * - 0.044484923911382625 ) + intrm_sf_mf_960 *
0.00036936011832044979 ) * intrm_sf_mf_691 ; intrm_sf_mf_939 = zc_int25 -
intrm_sf_mf_692 ; t3063 = zc_int25 / ( intrm_sf_mf_939 == 0.0 ? 1.0E-16 :
intrm_sf_mf_939 ) ; zc_int25 = pmf_sqrt ( zc_int293 * zc_int293 *
9.999999999999999E-14 + fabs ( X [ 320ULL ] * t3063 * intrm_sf_mf_692 ) *
1.0E-9 ) ; if ( X [ 322ULL ] <= 0.0 ) { intrm_sf_mf_960 = 0.0 ; } else {
intrm_sf_mf_960 = X [ 322ULL ] >= 1.0 ? 1.0 : X [ 322ULL ] ; } if ( X [
323ULL ] <= 0.0 ) { intrm_sf_mf_939 = 0.0 ; } else { intrm_sf_mf_939 = X [
323ULL ] >= 1.0 ? 1.0 : X [ 323ULL ] ; } t1907 [ 0ULL ] = X [ 38ULL ] ;
tlu2_linear_nearest_prelookup ( & cg_efOut . mField0 [ 0ULL ] , & cg_efOut .
mField1 [ 0ULL ] , & cg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t6 = cg_efOut ; tlu2_1d_linear_nearest_value ( & dg_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = dg_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & eg_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = eg_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & fg_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = fg_efOut [ 0
] ; zc_int276 = ( ( ( 1.0 - intrm_sf_mf_960 ) - intrm_sf_mf_939 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_960 ) + t2585_idx_0 * intrm_sf_mf_939
; t3065 = X [ 321ULL ] * X [ 321ULL ] * t3063 ; zc_int275 = - pmf_sqrt ( fabs
( t3065 / ( intrm_sf_mf_692 == 0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [
320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) ) * 0.0019634954084936209 ; if (
zc_int275 >= 0.0 ) { t3066 = zc_int275 * 100000.0 ; } else { t3066 = -
zc_int275 * 100000.0 ; } t3069 = zc_int276 * 0.0019634954084936209 ;
zc_int295 = t3066 * 0.05 / ( t3069 == 0.0 ? 1.0E-16 : t3069 ) ; t3071 = X [
38ULL ] * intrm_sf_mf_692 ; t3068 = X [ 39ULL ] / ( t3071 == 0.0 ? 1.0E-16 :
t3071 ) ; t3073 = t3068 * 9.8174770424681068E-6 ; zc_int335 = zc_int275 *
zc_int276 * 35.2 / ( t3073 == 0.0 ? 1.0E-16 : t3073 ) ; t3072 = zc_int295 >=
1.0 ? zc_int295 : 1.0 ; t3074 = pmf_log10 ( 6.9 / ( t3072 == 0.0 ? 1.0E-16 :
t3072 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3072 == 0.0 ?
1.0E-16 : t3072 ) + 2.8767404433520813E-5 ) * 3.24 ; t3076 = t3068 *
3.855314219175531E-7 ; t3066 = zc_int275 * t3066 * ( 1.0 / ( t3074 == 0.0 ?
1.0E-16 : t3074 ) ) * 0.55 / ( t3076 == 0.0 ? 1.0E-16 : t3076 ) ; t3072 = (
zc_int295 - 2000.0 ) / 2000.0 ; t3074 = t3072 * t3072 * 3.0 - t3072 * t3072 *
t3072 * 2.0 ; if ( zc_int295 <= 2000.0 ) { t3072 = zc_int335 * 1.0E-5 ; }
else if ( zc_int295 >= 4000.0 ) { t3072 = t3066 * 1.0E-5 ; } else { t3072 = (
( 1.0 - t3074 ) * zc_int335 + t3066 * t3074 ) * 1.0E-5 ; } zc_int25 = X [
319ULL ] * zc_int25 / 0.0019634954084936209 * 0.00031622776601683789 + t3072
; t3066 = X [ 297ULL ] - X [ 39ULL ] ; zc_int335 = - ( ( X [ 38ULL ] / ( X [
39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) - X [ 324ULL ] / ( X [ 325ULL ] ==
0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * X [ 307ULL ] * intrm_sf_mf_692 ) /
0.0019634954084936209 ; if ( X [ 324ULL ] <= 216.59999999999997 ) { t3072 =
216.59999999999997 ; } else { t3072 = X [ 324ULL ] >= 623.15 ? 623.15 : X [
324ULL ] ; } t3059 = t3072 * t3072 ; t3074 = ( ( ( 1074.1165326382641 + t3072
* - 0.2214565261064495 ) + t3059 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_690 ) - intrm_sf_mf_691 ) + ( ( 1479.6504774711011 + t3072 *
1.2002114337048222 ) + t3059 * - 0.00038614513167823636 ) * intrm_sf_mf_690 )
+ ( ( 900.63941224838356 + t3072 * - 0.044484923911382625 ) + t3059 *
0.00036936011832044979 ) * intrm_sf_mf_691 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 = t3074 -
intrm_sf_mf_692 ; t3072 = t3074 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ) ;
t3074 = pmf_sqrt ( zc_int335 * zc_int335 * 9.999999999999999E-14 + fabs ( X [
324ULL ] * t3072 * intrm_sf_mf_692 ) * 1.0E-9 ) ; t3085 = X [ 325ULL ] * X [
325ULL ] * t3072 ; t3059 = - pmf_sqrt ( fabs ( t3085 / ( intrm_sf_mf_692 ==
0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [ 324ULL ] == 0.0 ? 1.0E-16 : X [
324ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3059 >= 0.0 ) { t3075 = t3059
* 100000.0 ; } else { t3075 = - t3059 * 100000.0 ; } t3077 = t3075 * 0.05 / (
t3069 == 0.0 ? 1.0E-16 : t3069 ) ; t3078 = t3059 * zc_int276 * 35.2 / ( t3073
== 0.0 ? 1.0E-16 : t3073 ) ; t3083 = t3077 >= 1.0 ? t3077 : 1.0 ; t3092 =
pmf_log10 ( 6.9 / ( t3083 == 0.0 ? 1.0E-16 : t3083 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t3083 == 0.0 ? 1.0E-16 : t3083 ) +
2.8767404433520813E-5 ) * 3.24 ; t3075 = t3059 * t3075 * ( 1.0 / ( t3092 ==
0.0 ? 1.0E-16 : t3092 ) ) * 0.55 / ( t3076 == 0.0 ? 1.0E-16 : t3076 ) ; t3083
= ( t3077 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 = t3083 *
t3083 * 3.0 - t3083 * t3083 * t3083 * 2.0 ; if ( t3077 <= 2000.0 ) { t3083 =
t3078 * 1.0E-5 ; } else if ( t3077 >= 4000.0 ) { t3083 = t3075 * 1.0E-5 ; }
else { t3083 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ) * t3078 +
t3075 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ) *
1.0E-5 ; } t3074 = - ( X [ 307ULL ] * t3074 ) / 0.0019634954084936209 *
0.00031622776601683789 + t3083 ; t3075 = t3058 - X [ 39ULL ] ; t1907 [ 0ULL ]
= X [ 38ULL ] ; tlu2_linear_linear_prelookup ( & gg_efOut . mField0 [ 0ULL ]
, & gg_efOut . mField1 [ 0ULL ] , & gg_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t136 = gg_efOut ; tlu2_1d_linear_linear_value ( &
hg_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = hg_efOut [ 0 ] ; t3078 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & ig_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ]
, & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ig_efOut [ 0 ] ; t3083 =
t2576_idx_0 ; if ( 1.0 - X [ 40ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 = 1.0 - X [
40ULL ] ; } else if ( 1.0 - X [ 40ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 = exp ( ( (
1.0 - X [ 40ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 =
1.6701700790245661E-7 ; } t3086 = X [ 41ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
jg_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = jg_efOut [ 0 ] ; t3088 = exp ( pmf_log ( X [ 39ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t3088 >= 1.0 ) { t3099 = ( t3088 - 1.0 )
* 461.523 + t3086 ; t3090 = t3086 / ( t3099 == 0.0 ? 1.0E-16 : t3099 ) ; }
else { t3090 = 1.0 ; } t3101 = t3090 * 0.01 ; t3086 = ( X [ 40ULL ] - t3090 )
/ ( t3101 == 0.0 ? 1.0E-16 : t3101 ) ; if ( X [ 40ULL ] - t3090 <= 0.0 ) {
t3086 = 0.0 ; } else if ( X [ 40ULL ] - t3090 >= t3090 * 0.01 ) { t3086 = X [
40ULL ] - t3090 ; } else { t3086 = ( X [ 40ULL ] - t3090 ) * ( t3086 * t3086
* 3.0 - t3086 * t3086 * t3086 * 2.0 ) ; } t3068 = t3068 * t3086 *
0.0019634954084936209 / 0.001 ; t3086 = ( t3078 - t3083 ) * t3068 ;
tlu2_1d_linear_nearest_value ( & kg_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = kg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = lg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mg_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField26 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = mg_efOut [ 0 ] ; t3083 = (
( ( 1.0 - intrm_sf_mf_960 ) - intrm_sf_mf_939 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_960 ) + t2585_idx_0 * intrm_sf_mf_939 ; t3090 = ( X [ 300ULL ] -
X [ 38ULL ] ) * ( t3083 * 0.15707963267948966 / 0.05 ) ; t3092 = ( X [ 319ULL
] - ( - X [ 307ULL ] ) ) / 2.0 ; t3105 = t3092 * 0.05 ; zc_int10 = t3105 / (
t3069 == 0.0 ? 1.0E-16 : t3069 ) ; t3095 = pmf_sqrt ( X [ 319ULL ] * X [
319ULL ] + 3.0116308772356542E-13 ) ; t3096 = pmf_sqrt ( X [ 319ULL ] * X [
319ULL ] + 5.8094731428156895E-13 ) ; t3097 = pmf_sqrt ( X [ 319ULL ] * X [
319ULL ] + 4.1024015709531014E-13 ) ; t3098 = pmf_sqrt ( X [ 307ULL ] * X [
307ULL ] + 3.0116308772356542E-13 ) ; t3099 = pmf_sqrt ( X [ 307ULL ] * X [
307ULL ] + 5.8094731428156895E-13 ) ; t3100 = pmf_sqrt ( X [ 307ULL ] * X [
307ULL ] + 4.1024015709531014E-13 ) ; tlu2_1d_linear_linear_value ( &
ng_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ng_efOut [ 0 ] ; t3101 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & og_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ]
, & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = og_efOut [ 0 ] ; t3103 =
- X [ 308ULL ] + X [ 330ULL ] ; t3104 = ( - X [ 307ULL ] + X [ 319ULL ] ) -
t3068 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M39 = ( - X [
309ULL ] + X [ 331ULL ] ) - t3068 * 100000.0 ; intrm_sf_mf_809 = ( ( ( 1.0 -
intrm_sf_mf_690 ) - intrm_sf_mf_691 ) * t3101 + t3078 * intrm_sf_mf_690 ) +
t2576_idx_0 * intrm_sf_mf_691 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M43 = t3101 - X [
38ULL ] * 0.296802103844292 ; t3101 = t2576_idx_0 - X [ 38ULL ] *
0.25983661262297303 ; t3102 = t3078 - X [ 38ULL ] * 0.461523 ; if ( X [
299ULL ] <= 0.0 ) { t3078 = 0.0 ; } else { t3078 = X [ 299ULL ] >= 1.0 ? 1.0
: X [ 299ULL ] ; } if ( X [ 298ULL ] <= 0.0 ) { intrm_sf_mf_1120 = 0.0 ; }
else { intrm_sf_mf_1120 = X [ 298ULL ] >= 1.0 ? 1.0 : X [ 298ULL ] ; }
zc_int308 = ( ( ( 1.0 - t3078 ) - intrm_sf_mf_1120 ) * 296.802103844292 +
t3078 * 461.523 ) + intrm_sf_mf_1120 * 259.836612622973 ; intrm_sf_mf_992 = X
[ 298ULL ] * 259.836612622973 / ( zc_int308 == 0.0 ? 1.0E-16 : zc_int308 ) ;
if ( X [ 318ULL ] <= 0.0 ) { zc_int338 = 0.0 ; } else { zc_int338 = X [
318ULL ] >= 1.0 ? 1.0 : X [ 318ULL ] ; } if ( X [ 317ULL ] <= 0.0 ) {
zc_int360 = 0.0 ; } else { zc_int360 = X [ 317ULL ] >= 1.0 ? 1.0 : X [ 317ULL
] ; } zc_int342 = ( ( ( 1.0 - zc_int338 ) - zc_int360 ) * 296.802103844292 +
zc_int338 * 461.523 ) + zc_int360 * 259.836612622973 ; zc_int345 = X [ 317ULL
] * 259.836612622973 / ( zc_int342 == 0.0 ? 1.0E-16 : zc_int342 ) ; t3108 = X
[ 299ULL ] * 461.523 / ( zc_int308 == 0.0 ? 1.0E-16 : zc_int308 ) ; t3109 = X
[ 318ULL ] * 461.523 / ( zc_int342 == 0.0 ? 1.0E-16 : zc_int342 ) ; if ( X [
316ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11 ) { t3110 =
1.9634954084936209E-11 ; } else if ( X [ 316ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t3110 = 0.0012566370614359179 ; } else { t3110 = X
[ 316ULL ] * 0.0019634954084936209 ; } zc_int316 = t3110 /
0.0019634954084936209 ; if ( X [ 339ULL ] <= 0.0 ) { zc_int359 = 0.0 ; } else
{ zc_int359 = X [ 339ULL ] >= 1.0 ? 1.0 : X [ 339ULL ] ; } if ( X [ 340ULL ]
<= 0.0 ) { zc_int361 = 0.0 ; } else { zc_int361 = X [ 340ULL ] >= 1.0 ? 1.0 :
X [ 340ULL ] ; } intrm_sf_mf_837 = ( ( ( 1.0 - zc_int359 ) - zc_int361 ) *
296.802103844292 + zc_int359 * 461.523 ) + zc_int361 * 259.836612622973 ;
t3112 = X [ 337ULL ] * intrm_sf_mf_837 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 = X [ 338ULL
] / ( t3112 == 0.0 ? 1.0E-16 : t3112 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = X [ 338ULL
] / ( t3058 == 0.0 ? 1.0E-16 : t3058 ) * ( X [ 341ULL ] / ( X [ 337ULL ] ==
0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; t3114 = X [ 338ULL ] / 1.01325 * ( X [
342ULL ] / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ; if ( X [
307ULL ] > 0.0 ) { t3117 = ( zc_int316 + 1.0 ) * ( 1.0 - zc_int316 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ) * ( X [
307ULL ] / 0.64 / ( t3110 == 0.0 ? 1.0E-16 : t3110 ) * ( X [ 307ULL ] / 0.64
/ ( t3110 == 0.0 ? 1.0E-16 : t3110 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ) )
* 9.9999999999999991E-11 ; } else if ( X [ 307ULL ] < 0.0 ) { t3117 = (
zc_int316 + 1.0 ) * ( 1.0 - zc_int316 * t3114 ) * ( X [ 307ULL ] / 0.64 / (
t3110 == 0.0 ? 1.0E-16 : t3110 ) * ( X [ 307ULL ] / 0.64 / ( t3110 == 0.0 ?
1.0E-16 : t3110 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 ) )
* 9.9999999999999991E-11 ; } else { t3117 = 0.0 ; } t3120 = ( t3058 + 1.01325
) / 2.0 * 0.0010000000000000009 ; t3119 = ( 1.0 - zc_int316 ) * ( 1.0 -
zc_int316 ) ; t3121 = t3120 * t3119 ; zc_int39 = ( zc_int316 + 1.0 ) * ( 1.0
- zc_int316 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20
) - ( 1.0 - zc_int316 * t3114 ) * zc_int316 * 2.0 ; t3123 = ( t3058 - 1.01325
) * ( zc_int39 >= t3119 ? zc_int39 : t3119 ) ; zc_int39 = ( t3058 - 1.01325 )
/ ( t3120 == 0.0 ? 1.0E-16 : t3120 ) ; t3124 = zc_int39 * zc_int39 * 3.0 -
zc_int39 * zc_int39 * zc_int39 * 2.0 ; if ( t3058 - 1.01325 <= 0.0 ) {
zc_int39 = t3121 ; } else if ( t3058 - 1.01325 >= t3120 ) { zc_int39 = t3123
; } else { zc_int39 = ( 1.0 - t3124 ) * t3121 + t3123 * t3124 ; } t3123 = (
zc_int316 + 1.0 ) * ( 1.0 - zc_int316 * t3114 ) - ( 1.0 - zc_int316 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ) * zc_int316
* 2.0 ; zc_int316 = ( 1.01325 - t3058 ) * ( t3123 >= t3119 ? t3123 : t3119 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = ( 1.01325
- t3058 ) / ( t3120 == 0.0 ? 1.0E-16 : t3120 ) ; t3114 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * 2.0 ; if (
1.01325 - t3058 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = t3121 ; }
else if ( 1.01325 - t3058 >= t3120 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = zc_int316 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = (
1.0 - t3114 ) * t3121 + zc_int316 * t3114 ; } if ( t3058 > 1.01325 ) {
zc_int316 = zc_int39 ; } else { zc_int316 = t3058 < 1.01325 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 : t3121 ; }
if ( X [ 337ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = X [ 337ULL
] >= 623.15 ? 623.15 : X [ 337ULL ] ; } t3125 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ; t3114 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * -
0.2214565261064495 ) + t3125 * 0.00037212980109014541 ) * ( ( 1.0 - zc_int359
) - zc_int361 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 *
1.2002114337048222 ) + t3125 * - 0.00038614513167823636 ) * zc_int359 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * -
0.044484923911382625 ) + t3125 * 0.00036936011832044979 ) * zc_int361 ;
piece196 = t3114 - intrm_sf_mf_837 ; t3135 = X [ 338ULL ] * X [ 338ULL ] * (
t3114 / ( piece196 == 0.0 ? 1.0E-16 : piece196 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = pmf_sqrt (
fabs ( t3135 / ( intrm_sf_mf_837 == 0.0 ? 1.0E-16 : intrm_sf_mf_837 ) / ( X [
337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ) * t3110 * 0.64 ; t3138 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 = ( t3058 -
1.01325 ) * pmf_sqrt ( fabs ( t3138 / ( zc_int316 == 0.0 ? 1.0E-16 :
zc_int316 ) ) ) * t3110 * 0.64 ; if ( X [ 44ULL ] <= 0.0 ) { t3114 = 0.0 ; }
else { t3114 = X [ 44ULL ] >= 1.0 ? 1.0 : X [ 44ULL ] ; } if ( X [ 43ULL ] <=
0.0 ) { t3119 = 0.0 ; } else { t3119 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ]
; } t3121 = ( ( ( 1.0 - t3114 ) - t3119 ) * 296.802103844292 + t3114 *
461.523 ) + t3119 * 259.836612622973 ; zc_int39 = ( X [ 42ULL ] / ( X [ 48ULL
] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) - X [ 363ULL ] / ( X [ 364ULL ] == 0.0 ?
1.0E-16 : X [ 364ULL ] ) ) * X [ 362ULL ] * t3121 / 0.32 ; if ( X [ 363ULL ]
<= 216.59999999999997 ) { t3123 = 216.59999999999997 ; } else { t3123 = X [
363ULL ] >= 623.15 ? 623.15 : X [ 363ULL ] ; } t2697 = t3123 * t3123 ; t3124
= ( ( ( 1074.1165326382641 + t3123 * - 0.2214565261064495 ) + t2697 *
0.00037212980109014541 ) * ( ( 1.0 - t3114 ) - t3119 ) + ( (
1479.6504774711011 + t3123 * 1.2002114337048222 ) + t2697 * -
0.00038614513167823636 ) * t3114 ) + ( ( 900.63941224838356 + t3123 * -
0.044484923911382625 ) + t2697 * 0.00036936011832044979 ) * t3119 ; U_idx_1 =
t3124 - t3121 ; t3123 = t3124 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ;
t3124 = pmf_sqrt ( zc_int39 * zc_int39 * 9.999999999999999E-14 + fabs ( X [
363ULL ] * t3123 * t3121 ) * 1.0E-9 ) ; if ( X [ 350ULL ] <= 0.0 ) { t3125 =
0.0 ; } else { t3125 = X [ 350ULL ] >= 1.0 ? 1.0 : X [ 350ULL ] ; } if ( X [
352ULL ] <= 0.0 ) { t2697 = 0.0 ; } else { t2697 = X [ 352ULL ] >= 1.0 ? 1.0
: X [ 352ULL ] ; } t1907 [ 0ULL ] = X [ 42ULL ] ;
tlu2_linear_nearest_prelookup ( & pg_efOut . mField0 [ 0ULL ] , & pg_efOut .
mField1 [ 0ULL ] , & pg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t192 = pg_efOut ; tlu2_1d_linear_nearest_value ( & qg_efOut [ 0ULL ] , &
t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
qg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rg_efOut [ 0ULL ] , & t192
. mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
rg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & sg_efOut [ 0ULL ] , & t192
. mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField25 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
sg_efOut [ 0 ] ; t3127 = ( ( ( 1.0 - t3125 ) - t2697 ) * t2576_idx_0 +
t2567_idx_0 * t3125 ) + t2585_idx_0 * t2697 ; t3145 = X [ 364ULL ] * X [
364ULL ] * t3123 ; zc_int6 = - pmf_sqrt ( fabs ( t3145 / ( t3121 == 0.0 ?
1.0E-16 : t3121 ) / ( X [ 363ULL ] == 0.0 ? 1.0E-16 : X [ 363ULL ] ) ) ) *
0.32 ; if ( zc_int6 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 = zc_int6 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 = - zc_int6 *
100000.0 ; } t3149 = t3127 * 0.32 ; t3130 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 * 0.01 / (
t3149 == 0.0 ? 1.0E-16 : t3149 ) ; t3151 = X [ 42ULL ] * t3121 ; t3131 = X [
48ULL ] / ( t3151 == 0.0 ? 1.0E-16 : t3151 ) ; t3153 = t3131 *
6.4000000000000011E-5 ; t3132 = zc_int6 * t3127 * 2.9973120849090416 / (
t3153 == 0.0 ? 1.0E-16 : t3153 ) ; t3133 = t3130 >= 1.0 ? t3130 : 1.0 ;
piece345 = pmf_log10 ( 6.9 / ( t3133 == 0.0 ? 1.0E-16 : t3133 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3133 == 0.0 ? 1.0E-16 : t3133
) + 0.00017169489553429715 ) * 3.24 ; t3156 = t3131 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 = zc_int6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 * ( 1.0 / (
piece345 == 0.0 ? 1.0E-16 : piece345 ) ) * 0.046833001326703774 / ( t3156 ==
0.0 ? 1.0E-16 : t3156 ) ; t3133 = ( t3130 - 2000.0 ) / 2000.0 ; piece196 =
t3133 * t3133 * 3.0 - t3133 * t3133 * t3133 * 2.0 ; if ( t3130 <= 2000.0 ) {
t3133 = t3132 * 1.0E-5 ; } else if ( t3130 >= 4000.0 ) { t3133 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 * 1.0E-5 ; }
else { t3133 = ( ( 1.0 - piece196 ) * t3132 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 * piece196 ) *
1.0E-5 ; } t3124 = X [ 362ULL ] * t3124 / 0.32 * 0.00031622776601683789 +
t3133 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 = X [
359ULL ] - X [ 48ULL ] ; t3132 = ( X [ 42ULL ] / ( X [ 48ULL ] == 0.0 ?
1.0E-16 : X [ 48ULL ] ) - X [ 366ULL ] / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X
[ 367ULL ] ) ) * X [ 365ULL ] * t3121 / 0.32 ; if ( X [ 366ULL ] <=
216.59999999999997 ) { t3133 = 216.59999999999997 ; } else { t3133 = X [
366ULL ] >= 623.15 ? 623.15 : X [ 366ULL ] ; } t2700 = t3133 * t3133 ;
piece196 = ( ( ( 1074.1165326382641 + t3133 * - 0.2214565261064495 ) + t2700
* 0.00037212980109014541 ) * ( ( 1.0 - t3114 ) - t3119 ) + ( (
1479.6504774711011 + t3133 * 1.2002114337048222 ) + t2700 * -
0.00038614513167823636 ) * t3114 ) + ( ( 900.63941224838356 + t3133 * -
0.044484923911382625 ) + t2700 * 0.00036936011832044979 ) * t3119 ; zc_int350
= piece196 - t3121 ; t3133 = piece196 / ( zc_int350 == 0.0 ? 1.0E-16 :
zc_int350 ) ; piece196 = pmf_sqrt ( t3132 * t3132 * 9.999999999999999E-14 +
fabs ( X [ 366ULL ] * t3133 * t3121 ) * 1.0E-9 ) ; t3165 = X [ 367ULL ] * X [
367ULL ] * t3133 ; t2700 = - pmf_sqrt ( fabs ( t3165 / ( t3121 == 0.0 ?
1.0E-16 : t3121 ) / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) ) ) *
0.32 ; if ( t2700 >= 0.0 ) { t3139 = t2700 * 100000.0 ; } else { t3139 = -
t2700 * 100000.0 ; } t3143 = t3139 * 0.01 / ( t3149 == 0.0 ? 1.0E-16 : t3149
) ; U_idx_1 = t2700 * t3127 * 2.9973120849090416 / ( t3153 == 0.0 ? 1.0E-16 :
t3153 ) ; t3146 = t3143 >= 1.0 ? t3143 : 1.0 ; t3172 = pmf_log10 ( 6.9 / (
t3146 == 0.0 ? 1.0E-16 : t3146 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t3146 == 0.0 ? 1.0E-16 : t3146 ) + 0.00017169489553429715 ) * 3.24 ;
t3139 = t2700 * t3139 * ( 1.0 / ( t3172 == 0.0 ? 1.0E-16 : t3172 ) ) *
0.046833001326703774 / ( t3156 == 0.0 ? 1.0E-16 : t3156 ) ; t3146 = ( t3143 -
2000.0 ) / 2000.0 ; t3148 = t3146 * t3146 * 3.0 - t3146 * t3146 * t3146 * 2.0
; if ( t3143 <= 2000.0 ) { t3146 = U_idx_1 * 1.0E-5 ; } else if ( t3143 >=
4000.0 ) { t3146 = t3139 * 1.0E-5 ; } else { t3146 = ( ( 1.0 - t3148 ) *
U_idx_1 + t3139 * t3148 ) * 1.0E-5 ; } piece196 = X [ 365ULL ] * piece196 /
0.32 * 0.00031622776601683789 + t3146 ; t3139 = X [ 345ULL ] - X [ 48ULL ] ;
t1907 [ 0ULL ] = X [ 42ULL ] ; tlu2_linear_linear_prelookup ( & tg_efOut .
mField0 [ 0ULL ] , & tg_efOut . mField1 [ 0ULL ] , & tg_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = tg_efOut ;
tlu2_1d_linear_linear_value ( & ug_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ug_efOut [ 0 ] ; t3146 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & vg_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
vg_efOut [ 0 ] ; t3148 = t2576_idx_0 ; if ( 1.0 - X [ 44ULL ] >= 0.01 ) {
t3152 = 1.0 - X [ 44ULL ] ; } else if ( 1.0 - X [ 44ULL ] >= - 0.1 ) { t3152
= exp ( ( ( 1.0 - X [ 44ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t3152 =
1.6701700790245661E-7 ; } piece345 = X [ 43ULL ] / ( t3152 == 0.0 ? 1.0E-16 :
t3152 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & wg_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = wg_efOut [ 0 ] ; t3155 =
exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t2576_idx_0 ) ; if ( t3155 >= 1.0
) { t3179 = ( t3155 - 1.0 ) * 461.523 + piece345 ; U_idx_1 = piece345 / (
t3179 == 0.0 ? 1.0E-16 : t3179 ) ; } else { U_idx_1 = 1.0 ; } t3181 = U_idx_1
* 0.01 ; piece345 = ( X [ 44ULL ] - U_idx_1 ) / ( t3181 == 0.0 ? 1.0E-16 :
t3181 ) ; if ( X [ 44ULL ] - U_idx_1 <= 0.0 ) { piece345 = 0.0 ; } else if (
X [ 44ULL ] - U_idx_1 >= U_idx_1 * 0.01 ) { piece345 = X [ 44ULL ] - U_idx_1
; } else { piece345 = ( X [ 44ULL ] - U_idx_1 ) * ( piece345 * piece345 * 3.0
- piece345 * piece345 * piece345 * 2.0 ) ; } t3131 = t3131 * piece345 *
0.026773120849090417 / 0.001 ; piece345 = ( t3146 - t3148 ) * t3131 ;
tlu2_1d_linear_nearest_value ( & xg_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL
] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yg_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL
] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = yg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ah_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL
] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField26
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ah_efOut [ 0 ] ; t3148
= ( ( ( 1.0 - t3125 ) - t2697 ) * t2576_idx_0 + t2567_idx_0 * t3125 ) +
t2585_idx_0 * t2697 ; piece350 = ( X [ 362ULL ] - X [ 365ULL ] ) / 2.0 ;
t3185 = piece350 * 0.01 ; zc_int350 = t3185 / ( t3149 == 0.0 ? 1.0E-16 :
t3149 ) ; t3166 = pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] +
2.5711439722933289E-8 ) ; t3168 = pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] +
4.9597684650720062E-8 ) ; t3170 = pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] +
3.5023764535063242E-8 ) ; t3172 = pmf_sqrt ( X [ 365ULL ] * X [ 365ULL ] +
2.5711439722933289E-8 ) ; t3173 = pmf_sqrt ( X [ 365ULL ] * X [ 365ULL ] +
4.9597684650720062E-8 ) ; t3175 = pmf_sqrt ( X [ 365ULL ] * X [ 365ULL ] +
3.5023764535063242E-8 ) ; tlu2_1d_linear_linear_value ( & bh_efOut [ 0ULL ] ,
& t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= bh_efOut [ 0 ] ; t3176 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
ch_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ch_efOut [ 0 ] ; t3178 = X [ 372ULL ] + X [ 377ULL ]
; t3179 = ( X [ 362ULL ] + X [ 365ULL ] ) - t3131 * 100000.0 ; t3180 = ( X [
373ULL ] + X [ 378ULL ] ) - t3131 * 100000.0 ; t3181 = ( ( ( 1.0 - t3114 ) -
t3119 ) * t3176 + t3146 * t3114 ) + t2576_idx_0 * t3119 ; t3183 = t3176 - X [
42ULL ] * 0.296802103844292 ; t3176 = t2576_idx_0 - X [ 42ULL ] *
0.25983661262297303 ; t3177 = t3146 - X [ 42ULL ] * 0.461523 ; if ( X [
361ULL ] <= 0.0 ) { t3146 = 0.0 ; } else { t3146 = X [ 361ULL ] >= 1.0 ? 1.0
: X [ 361ULL ] ; } if ( X [ 360ULL ] <= 0.0 ) { intrm_sf_mf_1259 = 0.0 ; }
else { intrm_sf_mf_1259 = X [ 360ULL ] >= 1.0 ? 1.0 : X [ 360ULL ] ; }
piece352 = ( ( ( 1.0 - t3146 ) - intrm_sf_mf_1259 ) * 296.802103844292 +
t3146 * 461.523 ) + intrm_sf_mf_1259 * 259.836612622973 ; intrm_sf_mf_1192 =
X [ 360ULL ] * 259.836612622973 / ( piece352 == 0.0 ? 1.0E-16 : piece352 ) ;
if ( X [ 347ULL ] <= 0.0 ) { t3187 = 0.0 ; } else { t3187 = X [ 347ULL ] >=
1.0 ? 1.0 : X [ 347ULL ] ; } if ( X [ 346ULL ] <= 0.0 ) { intrm_sf_mf_1219 =
0.0 ; } else { intrm_sf_mf_1219 = X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ;
} piece416 = ( ( ( 1.0 - t3187 ) - intrm_sf_mf_1219 ) * 296.802103844292 +
t3187 * 461.523 ) + intrm_sf_mf_1219 * 259.836612622973 ; intrm_sf_mf_1047 =
X [ 346ULL ] * 259.836612622973 / ( piece416 == 0.0 ? 1.0E-16 : piece416 ) ;
piece412 = X [ 361ULL ] * 461.523 / ( piece352 == 0.0 ? 1.0E-16 : piece352 )
; intrm_sf_mf_11 = X [ 347ULL ] * 461.523 / ( piece416 == 0.0 ? 1.0E-16 :
piece416 ) ; if ( X [ 47ULL ] <= 0.0 ) { t3190 = 0.0 ; } else { t3190 = X [
47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) {
intrm_sf_mf_1005 = 0.0 ; } else { intrm_sf_mf_1005 = X [ 46ULL ] >= 1.0 ? 1.0
: X [ 46ULL ] ; } intrm_sf_mf_1006 = ( ( ( 1.0 - t3190 ) - intrm_sf_mf_1005 )
* 296.802103844292 + t3190 * 461.523 ) + intrm_sf_mf_1005 * 259.836612622973
; piece418 = - ( ( X [ 45ULL ] / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ]
) - X [ 381ULL ] / ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * X [
365ULL ] * intrm_sf_mf_1006 ) / 0.32 ; if ( X [ 381ULL ] <=
216.59999999999997 ) { t3195 = 216.59999999999997 ; } else { t3195 = X [
381ULL ] >= 623.15 ? 623.15 : X [ 381ULL ] ; } t2703 = t3195 * t3195 ;
piece423 = ( ( ( 1074.1165326382641 + t3195 * - 0.2214565261064495 ) + t2703
* 0.00037212980109014541 ) * ( ( 1.0 - t3190 ) - intrm_sf_mf_1005 ) + ( (
1479.6504774711011 + t3195 * 1.2002114337048222 ) + t2703 * -
0.00038614513167823636 ) * t3190 ) + ( ( 900.63941224838356 + t3195 * -
0.044484923911382625 ) + t2703 * 0.00036936011832044979 ) * intrm_sf_mf_1005
; t3196 = piece423 - intrm_sf_mf_1006 ; t3195 = piece423 / ( t3196 == 0.0 ?
1.0E-16 : t3196 ) ; piece423 = pmf_sqrt ( piece418 * piece418 *
9.999999999999999E-14 + fabs ( X [ 381ULL ] * t3195 * intrm_sf_mf_1006 ) *
1.0E-9 ) ; if ( X [ 355ULL ] <= 0.0 ) { t2703 = 0.0 ; } else { t2703 = X [
355ULL ] >= 1.0 ? 1.0 : X [ 355ULL ] ; } if ( X [ 357ULL ] <= 0.0 ) { t3196 =
0.0 ; } else { t3196 = X [ 357ULL ] >= 1.0 ? 1.0 : X [ 357ULL ] ; } t1907 [
0ULL ] = X [ 45ULL ] ; tlu2_linear_nearest_prelookup ( & dh_efOut . mField0 [
0ULL ] , & dh_efOut . mField1 [ 0ULL ] , & dh_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t165 = dh_efOut ; tlu2_1d_linear_nearest_value ( &
eh_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = eh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fh_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = fh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
gh_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField25 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = gh_efOut [ 0 ] ; piece428 = ( ( ( 1.0 - t2703 ) -
t3196 ) * t2576_idx_0 + t2567_idx_0 * t2703 ) + t2585_idx_0 * t3196 ; t3197 =
X [ 382ULL ] * X [ 382ULL ] * t3195 ; t197 = - pmf_sqrt ( fabs ( t3197 / (
intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ; if ( t197 >= 0.0 ) { t3198 = t197
* 100000.0 ; } else { t3198 = - t197 * 100000.0 ; } t3201 = piece428 * 0.32 ;
t4839 = t3198 * 0.01 / ( t3201 == 0.0 ? 1.0E-16 : t3201 ) ; t3203 = X [ 45ULL
] * intrm_sf_mf_1006 ; t4833 = X [ 49ULL ] / ( t3203 == 0.0 ? 1.0E-16 : t3203
) ; t3205 = t4833 * 6.4000000000000011E-5 ; t4444 = t197 * piece428 *
2.9973120849090416 / ( t3205 == 0.0 ? 1.0E-16 : t3205 ) ; t4458 = t4839 >=
1.0 ? t4839 : 1.0 ; t4651 = pmf_log10 ( 6.9 / ( t4458 == 0.0 ? 1.0E-16 :
t4458 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t4458 == 0.0 ?
1.0E-16 : t4458 ) + 0.00017169489553429715 ) * 3.24 ; t3208 = t4833 *
0.0020480000000000003 ; t3198 = t197 * t3198 * ( 1.0 / ( t4651 == 0.0 ?
1.0E-16 : t4651 ) ) * 0.046833001326703774 / ( t3208 == 0.0 ? 1.0E-16 : t3208
) ; t4458 = ( t4839 - 2000.0 ) / 2000.0 ; t4651 = t4458 * t4458 * 3.0 - t4458
* t4458 * t4458 * 2.0 ; if ( t4839 <= 2000.0 ) { t4458 = t4444 * 1.0E-5 ; }
else if ( t4839 >= 4000.0 ) { t4458 = t3198 * 1.0E-5 ; } else { t4458 = ( (
1.0 - t4651 ) * t4444 + t3198 * t4651 ) * 1.0E-5 ; } piece423 = - ( X [
365ULL ] * piece423 ) / 0.32 * 0.00031622776601683789 + t4458 ; t3198 = X [
345ULL ] - X [ 49ULL ] ; t4444 = - ( ( X [ 45ULL ] / ( X [ 49ULL ] == 0.0 ?
1.0E-16 : X [ 49ULL ] ) - X [ 383ULL ] / ( X [ 384ULL ] == 0.0 ? 1.0E-16 : X
[ 384ULL ] ) ) * X [ 319ULL ] * intrm_sf_mf_1006 ) / 0.32 ; if ( X [ 383ULL ]
<= 216.59999999999997 ) { t4458 = 216.59999999999997 ; } else { t4458 = X [
383ULL ] >= 623.15 ? 623.15 : X [ 383ULL ] ; } t4465 = t4458 * t4458 ; t4651
= ( ( ( 1074.1165326382641 + t4458 * - 0.2214565261064495 ) + t4465 *
0.00037212980109014541 ) * ( ( 1.0 - t3190 ) - intrm_sf_mf_1005 ) + ( (
1479.6504774711011 + t4458 * 1.2002114337048222 ) + t4465 * -
0.00038614513167823636 ) * t3190 ) + ( ( 900.63941224838356 + t4458 * -
0.044484923911382625 ) + t4465 * 0.00036936011832044979 ) * intrm_sf_mf_1005
; t3216 = t4651 - intrm_sf_mf_1006 ; t4458 = t4651 / ( t3216 == 0.0 ? 1.0E-16
: t3216 ) ; t4651 = pmf_sqrt ( t4444 * t4444 * 9.999999999999999E-14 + fabs (
X [ 383ULL ] * t4458 * intrm_sf_mf_1006 ) * 1.0E-9 ) ; t3217 = X [ 384ULL ] *
X [ 384ULL ] * t4458 ; t4465 = - pmf_sqrt ( fabs ( t3217 / ( intrm_sf_mf_1006
== 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [
383ULL ] ) ) ) * 0.32 ; if ( t4465 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 = t4465 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 = - t4465 *
100000.0 ; } t4475 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 * 0.01 / (
t3201 == 0.0 ? 1.0E-16 : t3201 ) ; U_idx_1 = t4465 * piece428 *
2.9973120849090416 / ( t3205 == 0.0 ? 1.0E-16 : t3205 ) ; t3215 = t4475 >=
1.0 ? t4475 : 1.0 ; t3224 = pmf_log10 ( 6.9 / ( t3215 == 0.0 ? 1.0E-16 :
t3215 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3215 == 0.0 ?
1.0E-16 : t3215 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 = t4465 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 * ( 1.0 / (
t3224 == 0.0 ? 1.0E-16 : t3224 ) ) * 0.046833001326703774 / ( t3208 == 0.0 ?
1.0E-16 : t3208 ) ; t3215 = ( t4475 - 2000.0 ) / 2000.0 ; t3216 = t3215 *
t3215 * 3.0 - t3215 * t3215 * t3215 * 2.0 ; if ( t4475 <= 2000.0 ) { t3215 =
U_idx_1 * 1.0E-5 ; } else if ( t4475 >= 4000.0 ) { t3215 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 * 1.0E-5 ; }
else { t3215 = ( ( 1.0 - t3216 ) * U_idx_1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 * t3216 ) *
1.0E-5 ; } t4651 = - ( X [ 319ULL ] * t4651 ) / 0.32 * 0.00031622776601683789
+ t3215 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 = X
[ 297ULL ] - X [ 49ULL ] ; t1907 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & hh_efOut . mField0 [ 0ULL ] , & hh_efOut .
mField1 [ 0ULL ] , & hh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t186 = hh_efOut ; tlu2_1d_linear_linear_value ( & ih_efOut [ 0ULL ] , &
t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ih_efOut [ 0 ] ; t3215 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
jh_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = jh_efOut [ 0 ] ; t3216 = t2576_idx_0 ; if ( 1.0 - X
[ 47ULL ] >= 0.01 ) { t3218 = 1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [ 47ULL
] >= - 0.1 ) { t3218 = exp ( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01
; } else { t3218 = 1.6701700790245661E-7 ; } t4835 = X [ 46ULL ] / ( t3218 ==
0.0 ? 1.0E-16 : t3218 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & kh_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = kh_efOut [ 0 ] ; t3222 =
exp ( pmf_log ( X [ 49ULL ] * 100000.0 ) - t2576_idx_0 ) ; if ( t3222 >= 1.0
) { t3231 = ( t3222 - 1.0 ) * 461.523 + t4835 ; t3224 = t4835 / ( t3231 ==
0.0 ? 1.0E-16 : t3231 ) ; } else { t3224 = 1.0 ; } t3233 = t3224 * 0.01 ;
t4835 = ( X [ 47ULL ] - t3224 ) / ( t3233 == 0.0 ? 1.0E-16 : t3233 ) ; if ( X
[ 47ULL ] - t3224 <= 0.0 ) { t4835 = 0.0 ; } else if ( X [ 47ULL ] - t3224 >=
t3224 * 0.01 ) { t4835 = X [ 47ULL ] - t3224 ; } else { t4835 = ( X [ 47ULL ]
- t3224 ) * ( t4835 * t4835 * 3.0 - t4835 * t4835 * t4835 * 2.0 ) ; } t4833 =
t4833 * t4835 * 0.026773120849090417 / 0.001 ; t4835 = ( t3215 - t3216 ) *
t4833 ; tlu2_1d_linear_nearest_value ( & lh_efOut [ 0ULL ] , & t165 . mField0
[ 0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = lh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & mh_efOut [ 0ULL ] , & t165 . mField0 [
0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = mh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & nh_efOut [ 0ULL ] , & t165 . mField0 [
0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField26 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = nh_efOut [ 0
] ; t3216 = ( ( ( 1.0 - t2703 ) - t3196 ) * t2576_idx_0 + t2567_idx_0 * t2703
) + t2585_idx_0 * t3196 ; t3224 = ( X [ 31ULL ] - X [ 45ULL ] ) * ( t3216 *
10.709248339636167 / 0.01 ) ; t3227 = ( - X [ 365ULL ] - ( - X [ 319ULL ] ) )
/ 2.0 ; intrm_sf_mf_1092 = t3227 * 0.01 ; t3228 = intrm_sf_mf_1092 / ( t3201
== 0.0 ? 1.0E-16 : t3201 ) ; t3229 = pmf_sqrt ( X [ 319ULL ] * X [ 319ULL ] +
2.5711439722933289E-8 ) ; t3230 = pmf_sqrt ( X [ 319ULL ] * X [ 319ULL ] +
4.9597684650720062E-8 ) ; t3231 = pmf_sqrt ( X [ 319ULL ] * X [ 319ULL ] +
3.5023764535063242E-8 ) ; tlu2_1d_linear_linear_value ( & oh_efOut [ 0ULL ] ,
& t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= oh_efOut [ 0 ] ; t3232 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
ph_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ph_efOut [ 0 ] ; t3234 = ( - X [ 377ULL ] + - X [
330ULL ] ) + X [ 395ULL ] ; t3235 = ( ( ( - X [ 365ULL ] + - X [ 319ULL ] ) +
X [ 395ULL ] ) + X [ 396ULL ] ) - t4833 * 100000.0 ; t3236 = ( ( - X [ 378ULL
] + - X [ 331ULL ] ) + X [ 396ULL ] ) - t4833 * 100000.0 ; intrm_sf_mf_1123 =
( ( ( 1.0 - t3190 ) - intrm_sf_mf_1005 ) * t3232 + t3215 * t3190 ) +
t2576_idx_0 * intrm_sf_mf_1005 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_99 = t3232 - X [
45ULL ] * 0.296802103844292 ; t3232 = t2576_idx_0 - X [ 45ULL ] *
0.25983661262297303 ; t3233 = t3215 - X [ 45ULL ] * 0.461523 ; if ( X [ 52ULL
] <= 0.0 ) { t3215 = 0.0 ; } else { t3215 = X [ 52ULL ] >= 1.0 ? 1.0 : X [
52ULL ] ; } if ( X [ 51ULL ] <= 0.0 ) { intrm_sf_mf_1144 = 0.0 ; } else {
intrm_sf_mf_1144 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; }
intrm_sf_mf_1145 = ( ( ( 1.0 - t3215 ) - intrm_sf_mf_1144 ) *
296.802103844292 + t3215 * 461.523 ) + intrm_sf_mf_1144 * 259.836612622973 ;
t4491 = ( X [ 50ULL ] / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) - X [
408ULL ] / ( X [ 409ULL ] == 0.0 ? 1.0E-16 : X [ 409ULL ] ) ) * X [ 407ULL ]
* intrm_sf_mf_1145 / 0.0019634954084936209 ; if ( X [ 408ULL ] <=
216.59999999999997 ) { t4502 = 216.59999999999997 ; } else { t4502 = X [
408ULL ] >= 623.15 ? 623.15 : X [ 408ULL ] ; } t4254 = t4502 * t4502 ; t4588
= ( ( ( 1074.1165326382641 + t4502 * - 0.2214565261064495 ) + t4254 *
0.00037212980109014541 ) * ( ( 1.0 - t3215 ) - intrm_sf_mf_1144 ) + ( (
1479.6504774711011 + t4502 * 1.2002114337048222 ) + t4254 * -
0.00038614513167823636 ) * t3215 ) + ( ( 900.63941224838356 + t4502 * -
0.044484923911382625 ) + t4254 * 0.00036936011832044979 ) * intrm_sf_mf_1144
; t4258 = t4588 - intrm_sf_mf_1145 ; t4502 = t4588 / ( t4258 == 0.0 ? 1.0E-16
: t4258 ) ; t4588 = pmf_sqrt ( t4491 * t4491 * 9.999999999999999E-14 + fabs (
X [ 408ULL ] * t4502 * intrm_sf_mf_1145 ) * 1.0E-9 ) ; if ( X [ 404ULL ] <=
0.0 ) { t4254 = 0.0 ; } else { t4254 = X [ 404ULL ] >= 1.0 ? 1.0 : X [ 404ULL
] ; } if ( X [ 403ULL ] <= 0.0 ) { t4258 = 0.0 ; } else { t4258 = X [ 403ULL
] >= 1.0 ? 1.0 : X [ 403ULL ] ; } t1907 [ 0ULL ] = X [ 50ULL ] ;
tlu2_linear_nearest_prelookup ( & qh_efOut . mField0 [ 0ULL ] , & qh_efOut .
mField1 [ 0ULL ] , & qh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t0 = qh_efOut ; tlu2_1d_linear_nearest_value ( & rh_efOut [ 0ULL ] , & t0 .
mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & sh_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = sh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & th_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = th_efOut [ 0
] ; t4513 = ( ( ( 1.0 - t4254 ) - t4258 ) * t2576_idx_0 + t2567_idx_0 * t4254
) + t2585_idx_0 * t4258 ; t3245 = X [ 409ULL ] * X [ 409ULL ] * t4502 ; t4594
= - pmf_sqrt ( fabs ( t3245 / ( intrm_sf_mf_1145 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1145 ) / ( X [ 408ULL ] == 0.0 ? 1.0E-16 : X [ 408ULL ] ) ) ) *
0.0019634954084936209 ; if ( t4594 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 = t4594 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 = - t4594 *
100000.0 ; } t3249 = t4513 * 0.0019634954084936209 ; t4528 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 * 0.05 / (
t3249 == 0.0 ? 1.0E-16 : t3249 ) ; t3251 = X [ 50ULL ] * intrm_sf_mf_1145 ;
t4836 = X [ 53ULL ] / ( t3251 == 0.0 ? 1.0E-16 : t3251 ) ; t3253 = t4836 *
9.8174770424681068E-6 ; t4654 = t4594 * t4513 * 11.2 / ( t3253 == 0.0 ?
1.0E-16 : t3253 ) ; t4535 = t4528 >= 1.0 ? t4528 : 1.0 ; t4552 = pmf_log10 (
6.9 / ( t4535 == 0.0 ? 1.0E-16 : t4535 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t4535 == 0.0 ? 1.0E-16 : t4535 ) + 2.8767404433520813E-5
) * 3.24 ; t3256 = t4836 * 3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 = t4594 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 * ( 1.0 / (
t4552 == 0.0 ? 1.0E-16 : t4552 ) ) * 0.175 / ( t3256 == 0.0 ? 1.0E-16 : t3256
) ; t4535 = ( t4528 - 2000.0 ) / 2000.0 ; t4552 = t4535 * t4535 * 3.0 - t4535
* t4535 * t4535 * 2.0 ; if ( t4528 <= 2000.0 ) { t4535 = t4654 * 1.0E-5 ; }
else if ( t4528 >= 4000.0 ) { t4535 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 * 1.0E-5 ; }
else { t4535 = ( ( 1.0 - t4552 ) * t4654 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 * t4552 ) *
1.0E-5 ; } t4588 = X [ 407ULL ] * t4588 / 0.0019634954084936209 *
0.00031622776601683789 + t4535 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 = X [ 54ULL ]
- X [ 53ULL ] ; t4654 = - ( ( X [ 50ULL ] / ( X [ 53ULL ] == 0.0 ? 1.0E-16 :
X [ 53ULL ] ) - X [ 410ULL ] / ( X [ 411ULL ] == 0.0 ? 1.0E-16 : X [ 411ULL ]
) ) * X [ 362ULL ] * intrm_sf_mf_1145 ) / 0.0019634954084936209 ; if ( X [
410ULL ] <= 216.59999999999997 ) { t4535 = 216.59999999999997 ; } else {
t4535 = X [ 410ULL ] >= 623.15 ? 623.15 : X [ 410ULL ] ; } t4566 = t4535 *
t4535 ; t4552 = ( ( ( 1074.1165326382641 + t4535 * - 0.2214565261064495 ) +
t4566 * 0.00037212980109014541 ) * ( ( 1.0 - t3215 ) - intrm_sf_mf_1144 ) + (
( 1479.6504774711011 + t4535 * 1.2002114337048222 ) + t4566 * -
0.00038614513167823636 ) * t3215 ) + ( ( 900.63941224838356 + t4535 * -
0.044484923911382625 ) + t4566 * 0.00036936011832044979 ) * intrm_sf_mf_1144
; t3264 = t4552 - intrm_sf_mf_1145 ; t4535 = t4552 / ( t3264 == 0.0 ? 1.0E-16
: t3264 ) ; t4552 = pmf_sqrt ( t4654 * t4654 * 9.999999999999999E-14 + fabs (
X [ 410ULL ] * t4535 * intrm_sf_mf_1145 ) * 1.0E-9 ) ; t3265 = X [ 411ULL ] *
X [ 411ULL ] * t4535 ; t4566 = - pmf_sqrt ( fabs ( t3265 / ( intrm_sf_mf_1145
== 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) / ( X [ 410ULL ] == 0.0 ? 1.0E-16 : X [
410ULL ] ) ) ) * 0.0019634954084936209 ; if ( t4566 >= 0.0 ) { t3255 = t4566
* 100000.0 ; } else { t3255 = - t4566 * 100000.0 ; } t4599 = t3255 * 0.05 / (
t3249 == 0.0 ? 1.0E-16 : t3249 ) ; intrm_sf_mf_1673 = t4566 * t4513 * 11.2 /
( t3253 == 0.0 ? 1.0E-16 : t3253 ) ; t3263 = t4599 >= 1.0 ? t4599 : 1.0 ;
t3272 = pmf_log10 ( 6.9 / ( t3263 == 0.0 ? 1.0E-16 : t3263 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3263 == 0.0 ? 1.0E-16 : t3263
) + 2.8767404433520813E-5 ) * 3.24 ; t3255 = t4566 * t3255 * ( 1.0 / ( t3272
== 0.0 ? 1.0E-16 : t3272 ) ) * 0.175 / ( t3256 == 0.0 ? 1.0E-16 : t3256 ) ;
t3263 = ( t4599 - 2000.0 ) / 2000.0 ; t3264 = t3263 * t3263 * 3.0 - t3263 *
t3263 * t3263 * 2.0 ; if ( t4599 <= 2000.0 ) { t3263 = intrm_sf_mf_1673 *
1.0E-5 ; } else if ( t4599 >= 4000.0 ) { t3263 = t3255 * 1.0E-5 ; } else {
t3263 = ( ( 1.0 - t3264 ) * intrm_sf_mf_1673 + t3255 * t3264 ) * 1.0E-5 ; }
t4552 = - ( X [ 362ULL ] * t4552 ) / 0.0019634954084936209 *
0.00031622776601683789 + t3263 ; t3255 = X [ 359ULL ] - X [ 53ULL ] ; t1907 [
0ULL ] = X [ 50ULL ] ; tlu2_linear_linear_prelookup ( & uh_efOut . mField0 [
0ULL ] , & uh_efOut . mField1 [ 0ULL ] , & uh_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = uh_efOut ; tlu2_1d_linear_linear_value ( &
vh_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = vh_efOut [ 0 ] ; intrm_sf_mf_1673 = t2576_idx_0 ;
tlu2_1d_linear_linear_value ( & wh_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = wh_efOut [ 0 ] ; t3263 =
t2576_idx_0 ; if ( 1.0 - X [ 52ULL ] >= 0.01 ) { t3264 = 1.0 - X [ 52ULL ] ;
} else if ( 1.0 - X [ 52ULL ] >= - 0.1 ) { t3264 = exp ( ( ( 1.0 - X [ 52ULL
] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t3264 = 1.6701700790245661E-7 ; }
intrm_sf_mf_1178 = X [ 51ULL ] / ( t3264 == 0.0 ? 1.0E-16 : t3264 ) * -
36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
xh_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = xh_efOut [ 0 ] ; t3268 = exp ( pmf_log ( X [ 53ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t3268 >= 1.0 ) { t3279 = ( t3268 - 1.0 )
* 461.523 + intrm_sf_mf_1178 ; t3270 = intrm_sf_mf_1178 / ( t3279 == 0.0 ?
1.0E-16 : t3279 ) ; } else { t3270 = 1.0 ; } t3281 = t3270 * 0.01 ;
intrm_sf_mf_1178 = ( X [ 52ULL ] - t3270 ) / ( t3281 == 0.0 ? 1.0E-16 : t3281
) ; if ( X [ 52ULL ] - t3270 <= 0.0 ) { intrm_sf_mf_1178 = 0.0 ; } else if (
X [ 52ULL ] - t3270 >= t3270 * 0.01 ) { intrm_sf_mf_1178 = X [ 52ULL ] -
t3270 ; } else { intrm_sf_mf_1178 = ( X [ 52ULL ] - t3270 ) * (
intrm_sf_mf_1178 * intrm_sf_mf_1178 * 3.0 - intrm_sf_mf_1178 *
intrm_sf_mf_1178 * intrm_sf_mf_1178 * 2.0 ) ; } t4836 = t4836 *
intrm_sf_mf_1178 * 0.00049087385212340522 / 0.001 ; intrm_sf_mf_1178 = (
intrm_sf_mf_1673 - t3263 ) * t4836 ; tlu2_1d_linear_nearest_value ( &
yh_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = yh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ai_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = ai_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
bi_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = bi_efOut [ 0 ] ; t3263 = ( ( ( 1.0 - t4254 ) - t4258 ) *
t2576_idx_0 + t2567_idx_0 * t4254 ) + t2585_idx_0 * t4258 ; t3270 = ( X [
406ULL ] - X [ 50ULL ] ) * ( t3263 * 0.039269908169872414 / 0.05 ) ; t3272 =
( X [ 407ULL ] - ( - X [ 362ULL ] ) ) / 2.0 ; t3285 = t3272 * 0.05 ;
intrm_sf_mf_1271 = t3285 / ( t3249 == 0.0 ? 1.0E-16 : t3249 ) ; t3275 =
pmf_sqrt ( X [ 407ULL ] * X [ 407ULL ] + 3.0116308772356542E-13 ) ; t3276 =
pmf_sqrt ( X [ 407ULL ] * X [ 407ULL ] + 5.8094731428156895E-13 ) ; t3277 =
pmf_sqrt ( X [ 407ULL ] * X [ 407ULL ] + 4.1024015709531014E-13 ) ; t3278 =
pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] + 3.0116308772356542E-13 ) ; t3279 =
pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] + 5.8094731428156895E-13 ) ; t3280 =
pmf_sqrt ( X [ 362ULL ] * X [ 362ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & ci_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ci_efOut [ 0 ] ; t3281 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & di_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
di_efOut [ 0 ] ; t3283 = - X [ 372ULL ] + X [ 414ULL ] ; t3284 = ( ( - X [
362ULL ] + X [ 407ULL ] ) + U_idx_8 ) - t4836 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip37 = ( ( - X [
373ULL ] + X [ 415ULL ] ) + U_idx_8 ) - t4836 * 100000.0 ; intrm_sf_mf_1262 =
( ( ( 1.0 - t3215 ) - intrm_sf_mf_1144 ) * t3281 + intrm_sf_mf_1673 * t3215 )
+ t2576_idx_0 * intrm_sf_mf_1144 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 = t3281 - X [
50ULL ] * 0.296802103844292 ; t3281 = t2576_idx_0 - X [ 50ULL ] *
0.25983661262297303 ; t3282 = intrm_sf_mf_1673 - X [ 50ULL ] * 0.461523 ; if
( X [ 399ULL ] <= 0.0 ) { intrm_sf_mf_1673 = 0.0 ; } else { intrm_sf_mf_1673
= X [ 399ULL ] >= 1.0 ? 1.0 : X [ 399ULL ] ; } if ( X [ 398ULL ] <= 0.0 ) {
intrm_sf_mf_1493 = 0.0 ; } else { intrm_sf_mf_1493 = X [ 398ULL ] >= 1.0 ?
1.0 : X [ 398ULL ] ; } t4764 = ( ( ( 1.0 - intrm_sf_mf_1673 ) -
intrm_sf_mf_1493 ) * 296.802103844292 + intrm_sf_mf_1673 * 461.523 ) +
intrm_sf_mf_1493 * 259.836612622973 ; intrm_sf_mf_1928 = X [ 398ULL ] *
259.836612622973 / ( t4764 == 0.0 ? 1.0E-16 : t4764 ) ; t3287 = X [ 399ULL ]
* 461.523 / ( t4764 == 0.0 ? 1.0E-16 : t4764 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 = - X [ 428ULL
] + U_idx_10 * - 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 +
6.4274470286298274E-9 ) ; t1907 [ 0ULL ] = X [ 427ULL ] ; t746 [ 0 ] = 11ULL
; tlu2_linear_linear_prelookup ( & ei_efOut . mField0 [ 0ULL ] , & ei_efOut .
mField1 [ 0ULL ] , & ei_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t86 = ei_efOut ; t1907 [ 0ULL ] = 1.01325 ; t749 [ 0 ] = 12ULL ;
tlu2_linear_linear_prelookup ( & fi_efOut . mField0 [ 0ULL ] , & fi_efOut .
mField1 [ 0ULL ] , & fi_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t85 = fi_efOut ; tlu2_2d_linear_linear_value ( & gi_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , &
t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gi_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 ) *
1.01325 / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant7 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 ) )
/ 2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 ) +
1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 423ULL ] ; tlu2_linear_linear_prelookup (
& hi_efOut . mField0 [ 0ULL ] , & hi_efOut . mField1 [ 0ULL ] , & hi_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t153 = hi_efOut ;
tlu2_2d_linear_linear_value ( & ii_efOut [ 0ULL ] , & t153 . mField0 [ 0ULL ]
, & t153 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ii_efOut [ 0 ] ; t3289 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 55ULL ] ; tlu2_linear_linear_prelookup ( &
ji_efOut . mField0 [ 0ULL ] , & ji_efOut . mField1 [ 0ULL ] , & ji_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = ji_efOut ;
tlu2_2d_linear_linear_value ( & ki_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ki_efOut [ 0 ] ; t3290 =
t2576_idx_0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant12
= X [ 426ULL ] * 0.1 ; tlu2_2d_linear_linear_value ( & li_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL
] , & t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33
, & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
li_efOut [ 0 ] ; t3291 = t2576_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant13 = 1.01325 / (
t3290 == 0.0 ? 1.0E-16 : t3290 ) * 100.0 + t2576_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 = pmf_sqrt ( X
[ 436ULL ] * X [ 436ULL ] + 1.2620262729050631E-10 ) ; t1907 [ 0ULL ] = X [
435ULL ] ; tlu2_linear_linear_prelookup ( & mi_efOut . mField0 [ 0ULL ] , &
mi_efOut . mField1 [ 0ULL ] , & mi_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t82 = mi_efOut ; t1907 [ 0ULL ] = X [ 431ULL ] ;
tlu2_linear_linear_prelookup ( & ni_efOut . mField0 [ 0ULL ] , & ni_efOut .
mField1 [ 0ULL ] , & ni_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t80 = ni_efOut ; tlu2_2d_linear_linear_value ( & oi_efOut [ 0ULL ] , & t82 .
mField0 [ 0ULL ] , & t82 . mField2 [ 0ULL ] , & t80 . mField0 [ 0ULL ] , &
t80 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = oi_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re1 = X [
436ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) * X [ 431ULL
] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re3 = ( 1.0 - X [
436ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) ) / 2.0 ;
t3293 = ( X [ 436ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) +
1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 430ULL ] ; tlu2_linear_linear_prelookup (
& pi_efOut . mField0 [ 0ULL ] , & pi_efOut . mField1 [ 0ULL ] , & pi_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = pi_efOut ;
tlu2_2d_linear_linear_value ( & qi_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , & t80 . mField0 [ 0ULL ] , & t80 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = qi_efOut [ 0 ] ; t3295 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 438ULL ] ; tlu2_linear_linear_prelookup (
& ri_efOut . mField0 [ 0ULL ] , & ri_efOut . mField1 [ 0ULL ] , & ri_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t79 = ri_efOut ; t1907 [ 0ULL
] = X [ 433ULL ] ; tlu2_linear_linear_prelookup ( & si_efOut . mField0 [ 0ULL
] , & si_efOut . mField1 [ 0ULL ] , & si_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL
] , & t223 [ 0ULL ] ) ; t77 = si_efOut ; tlu2_2d_linear_linear_value ( &
ti_efOut [ 0ULL ] , & t79 . mField0 [ 0ULL ] , & t79 . mField2 [ 0ULL ] , &
t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = ti_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re7 = - X [ 436ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) *
X [ 433ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re9 = ( 1.0 - - X
[ 436ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) ) / 2.0 ;
t3299 = ( - X [ 436ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) +
1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 432ULL ] ; tlu2_linear_linear_prelookup (
& ui_efOut . mField0 [ 0ULL ] , & ui_efOut . mField1 [ 0ULL ] , & ui_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t153 = ui_efOut ;
tlu2_2d_linear_linear_value ( & vi_efOut [ 0ULL ] , & t153 . mField0 [ 0ULL ]
, & t153 . mField2 [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = vi_efOut [ 0 ] ; t3301 =
t2576_idx_0 ; t1907 [ 0ULL ] = X [ 432ULL ] ; tlu2_linear_nearest_prelookup (
& wi_efOut . mField0 [ 0ULL ] , & wi_efOut . mField1 [ 0ULL ] , & wi_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t188 = wi_efOut ; t1907 [ 0ULL
] = X [ 57ULL ] ; tlu2_linear_nearest_prelookup ( & xi_efOut . mField0 [ 0ULL
] , & xi_efOut . mField1 [ 0ULL ] , & xi_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL
] , & t223 [ 0ULL ] ) ; t89 = xi_efOut ; tlu2_2d_linear_nearest_value ( &
yi_efOut [ 0ULL ] , & t188 . mField0 [ 0ULL ] , & t188 . mField2 [ 0ULL ] , &
t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField35 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = yi_efOut [ 0 ] ; t3303 = t2576_idx_0 ; t1907 [ 0ULL ] = X [
423ULL ] ; tlu2_linear_nearest_prelookup ( & aj_efOut . mField0 [ 0ULL ] , &
aj_efOut . mField1 [ 0ULL ] , & aj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t154 = aj_efOut ; tlu2_2d_linear_nearest_value ( &
bj_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , &
t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField35 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = bj_efOut [ 0 ] ; intrm_sf_mf_1359 = t2576_idx_0 ; t1907 [
0ULL ] = X [ 58ULL ] ; tlu2_linear_nearest_prelookup ( & cj_efOut . mField0 [
0ULL ] , & cj_efOut . mField1 [ 0ULL ] , & cj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = cj_efOut ; tlu2_2d_linear_nearest_value ( &
dj_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , &
t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField35 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = dj_efOut [ 0 ] ; t4825 = t2576_idx_0 ;
tlu2_2d_linear_nearest_value ( & ej_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ej_efOut [ 0 ] ;
intrm_sf_mf_1368 = t2576_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce3 = ( X [ 31ULL
] - X [ 58ULL ] ) * ( t2576_idx_0 * 1.6063872509454251 / 0.01 ) ; t3304 = ( X
[ 436ULL ] - X [ 428ULL ] ) / 2.0 ; tlu2_2d_linear_nearest_value ( & fj_efOut
[ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField37 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t2576_idx_0 = fj_efOut [ 0 ] ; intrm_sf_mf_1768 = t2576_idx_0 ; t3306 = t3304
* 0.01 ; t4374 = t2576_idx_0 * 0.002 ; t4664 = t3306 / ( t4374 == 0.0 ?
1.0E-16 : t4374 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 = pmf_sqrt ( X
[ 436ULL ] * X [ 436ULL ] + 5.1419576229038592E-12 ) ; t1907 [ 0ULL ] = X [
440ULL ] ; tlu2_linear_linear_prelookup ( & gj_efOut . mField0 [ 0ULL ] , &
gj_efOut . mField1 [ 0ULL ] , & gj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t74 = gj_efOut ; tlu2_2d_linear_linear_value ( &
hj_efOut [ 0ULL ] , & t74 . mField0 [ 0ULL ] , & t74 . mField2 [ 0ULL ] , &
t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = hj_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce8 = X [ 436ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 ) *
X [ 433ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce10 = ( 1.0 - X [
436ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 ) ) / 2.0 ;
t3292 = ( X [ 436ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 ) +
1.0 ) / 2.0 ; t3309 = pmf_sqrt ( X [ 428ULL ] * X [ 428ULL ] +
5.1419576229038592E-12 ) ; t1907 [ 0ULL ] = X [ 442ULL ] ;
tlu2_linear_linear_prelookup ( & ij_efOut . mField0 [ 0ULL ] , & ij_efOut .
mField1 [ 0ULL ] , & ij_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t149 = ij_efOut ; tlu2_2d_linear_linear_value ( & jj_efOut [ 0ULL ] , & t149
. mField0 [ 0ULL ] , & t149 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , &
t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = jj_efOut
[ 0 ] ; t3313 = X [ 428ULL ] / ( t3309 == 0.0 ? 1.0E-16 : t3309 ) * 1.01325 /
( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce15 = ( 1.0 - X [
428ULL ] / ( t3309 == 0.0 ? 1.0E-16 : t3309 ) ) / 2.0 ; t3314 = ( X [ 428ULL
] / ( t3309 == 0.0 ? 1.0E-16 : t3309 ) + 1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [
58ULL ] ; tlu2_linear_linear_prelookup ( & kj_efOut . mField0 [ 0ULL ] , &
kj_efOut . mField1 [ 0ULL ] , & kj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = kj_efOut ; t1907 [ 0ULL ] = X [ 57ULL ] ;
tlu2_linear_linear_prelookup ( & lj_efOut . mField0 [ 0ULL ] , & lj_efOut .
mField1 [ 0ULL ] , & lj_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t136 = lj_efOut ; tlu2_2d_linear_linear_value ( & mj_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t136 . mField0 [ 0ULL ] ,
& t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = mj_efOut
[ 0 ] ; t3315 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( & nj_efOut [ 0ULL
] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t136 . mField0
[ 0ULL ] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField33 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t2576_idx_0 = nj_efOut [ 0 ] ; t3317 = t2576_idx_0 ;
tlu2_2d_linear_nearest_value ( & oj_efOut [ 0ULL ] , & t188 . mField0 [ 0ULL
] , & t188 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = oj_efOut [ 0 ] ; t4262 =
t2576_idx_0 ; tlu2_2d_linear_nearest_value ( & pj_efOut [ 0ULL ] , & t154 .
mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , &
t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = pj_efOut
[ 0 ] ; t4708 = t2576_idx_0 ; tlu2_2d_linear_nearest_value ( & qj_efOut [
0ULL ] , & t188 . mField0 [ 0ULL ] , & t188 . mField2 [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField37 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t2576_idx_0 = qj_efOut [ 0 ] ; t4709 = t2576_idx_0 ;
tlu2_2d_linear_nearest_value ( & rj_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rj_efOut [ 0 ] ; t4803 =
t2576_idx_0 ; intrm_sf_mf_1571 = U_idx_10 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 = pmf_sqrt (
intrm_sf_mf_1571 * intrm_sf_mf_1571 + 1.2620262729050631E-10 ) ; t1907 [ 0ULL
] = X [ 447ULL ] ; tlu2_linear_linear_prelookup ( & sj_efOut . mField0 [ 0ULL
] , & sj_efOut . mField1 [ 0ULL ] , & sj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t83 = sj_efOut ; tlu2_2d_linear_linear_value ( &
tj_efOut [ 0ULL ] , & t83 . mField0 [ 0ULL ] , & t83 . mField2 [ 0ULL ] , &
t85 . mField0 [ 0ULL ] , & t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField32 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] )
; t2576_idx_0 = tj_efOut [ 0 ] ; intrm_sf_mf_1448 = t2576_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co2 =
intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) *
1.01325 / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t3320 = ( 1.0 -
intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) )
/ 2.0 ; t3321 = ( intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) +
1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 449ULL ] ; tlu2_linear_linear_prelookup (
& uj_efOut . mField0 [ 0ULL ] , & uj_efOut . mField1 [ 0ULL ] , & uj_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t188 = uj_efOut ; t1907 [ 0ULL
] = X [ 445ULL ] ; tlu2_linear_linear_prelookup ( & vj_efOut . mField0 [ 0ULL
] , & vj_efOut . mField1 [ 0ULL ] , & vj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL
] , & t223 [ 0ULL ] ) ; t185 = vj_efOut ; tlu2_2d_linear_linear_value ( &
wj_efOut [ 0ULL ] , & t188 . mField0 [ 0ULL ] , & t188 . mField2 [ 0ULL ] , &
t185 . mField0 [ 0ULL ] , & t185 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField32 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ]
) ; t2576_idx_0 = wj_efOut [ 0 ] ; t3322 = t2576_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co7 = -
intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) *
X [ 445ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t3324 = ( 1.0
- - intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) )
/ 2.0 ; t3323 = ( - intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) +
1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 444ULL ] ; tlu2_linear_linear_prelookup (
& xj_efOut . mField0 [ 0ULL ] , & xj_efOut . mField1 [ 0ULL ] , & xj_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [
0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ; t153 = xj_efOut ;
tlu2_2d_linear_linear_value ( & yj_efOut [ 0ULL ] , & t153 . mField0 [ 0ULL ]
, & t153 . mField2 [ 0ULL ] , & t185 . mField0 [ 0ULL ] , & t185 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = yj_efOut [ 0 ] ; t3326 =
t2576_idx_0 ; intrm_sf_mf_1448 = ( intrm_sf_mf_1448 + t3322 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe = ( X [
445ULL ] - 1.01325 ) * ( U_idx_10 * 2.0 ) / ( intrm_sf_mf_1448 == 0.0 ?
1.0E-16 : intrm_sf_mf_1448 ) ; t1907 [ 0ULL ] = X [ 444ULL ] ;
tlu2_linear_nearest_prelookup ( & ak_efOut . mField0 [ 0ULL ] , & ak_efOut .
mField1 [ 0ULL ] , & ak_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t154 = ak_efOut ; t1907 [ 0ULL ] = X [ 59ULL ] ;
tlu2_linear_nearest_prelookup ( & bk_efOut . mField0 [ 0ULL ] , & bk_efOut .
mField1 [ 0ULL ] , & bk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField30 , & t1907 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t162 = bk_efOut ; tlu2_2d_linear_nearest_value ( & ck_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] ,
& t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ck_efOut
[ 0 ] ; intrm_sf_mf_1448 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 430ULL ] ;
tlu2_linear_nearest_prelookup ( & dk_efOut . mField0 [ 0ULL ] , & dk_efOut .
mField1 [ 0ULL ] , & dk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t158 = dk_efOut ; tlu2_2d_linear_nearest_value ( & ek_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] ,
& t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ek_efOut
[ 0 ] ; t3322 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 60ULL ] ;
tlu2_linear_nearest_prelookup ( & fk_efOut . mField0 [ 0ULL ] , & fk_efOut .
mField1 [ 0ULL ] , & fk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t183 = fk_efOut ; tlu2_2d_linear_nearest_value ( & gk_efOut [ 0ULL ] , & t183
. mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] ,
& t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField35 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gk_efOut
[ 0 ] ; intrm_sf_mf_1565 = t2576_idx_0 ; tlu2_2d_linear_nearest_value ( &
hk_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , &
t162 . mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField36 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ]
) ; t2576_idx_0 = hk_efOut [ 0 ] ; intrm_sf_mf_1574 = t2576_idx_0 ; t3330 = (
X [ 61ULL ] - X [ 60ULL ] ) * ( t2576_idx_0 * 1.3250000000000002 /
0.0028301886792452828 ) ; t3331 = ( intrm_sf_mf_1571 - ( - X [ 436ULL ] ) ) /
2.0 ; tlu2_2d_linear_nearest_value ( & ik_efOut [ 0ULL ] , & t183 . mField0 [
0ULL ] , & t183 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] , & t162 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t746 [
0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ik_efOut [ 0 ] ;
intrm_sf_mf_1527 = t2576_idx_0 ; t3333 = t3331 * 0.0028301886792452828 ;
t4307 = t2576_idx_0 * 0.00093750000000000007 ; t4716 = t3333 / ( t4307 == 0.0
? 1.0E-16 : t4307 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 = pmf_sqrt (
intrm_sf_mf_1571 * intrm_sf_mf_1571 + 2.4102926357361849E-12 ) ; t1907 [ 0ULL
] = X [ 450ULL ] ; tlu2_linear_linear_prelookup ( & jk_efOut . mField0 [ 0ULL
] , & jk_efOut . mField1 [ 0ULL ] , & jk_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL
] , & t223 [ 0ULL ] ) ; t68 = jk_efOut ; tlu2_2d_linear_linear_value ( &
kk_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , &
t185 . mField0 [ 0ULL ] , & t185 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField32 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ]
) ; t2576_idx_0 = kk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato8 =
intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 ) *
X [ 445ULL ] / ( t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato10 = ( 1.0 -
intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 ) )
/ 2.0 ; t3335 = ( intrm_sf_mf_1571 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 ) +
1.0 ) / 2.0 ; t3336 = pmf_sqrt ( X [ 436ULL ] * X [ 436ULL ] +
2.4102926357361849E-12 ) ; t1907 [ 0ULL ] = X [ 452ULL ] ;
tlu2_linear_linear_prelookup ( & lk_efOut . mField0 [ 0ULL ] , & lk_efOut .
mField1 [ 0ULL ] , & lk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t67 = lk_efOut ; tlu2_2d_linear_linear_value ( & mk_efOut [ 0ULL ] , & t67 .
mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t80 . mField0 [ 0ULL ] , &
t80 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = mk_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato13 = - X
[ 436ULL ] / ( t3336 == 0.0 ? 1.0E-16 : t3336 ) * X [ 431ULL ] / (
t2576_idx_0 == 0.0 ? 1.0E-16 : t2576_idx_0 ) ; t3337 = ( 1.0 - - X [ 436ULL ]
/ ( t3336 == 0.0 ? 1.0E-16 : t3336 ) ) / 2.0 ; t3298 = ( - X [ 436ULL ] / (
t3336 == 0.0 ? 1.0E-16 : t3336 ) + 1.0 ) / 2.0 ; t1907 [ 0ULL ] = X [ 60ULL ]
; tlu2_linear_linear_prelookup ( & nk_efOut . mField0 [ 0ULL ] , & nk_efOut .
mField1 [ 0ULL ] , & nk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField29 , & t1907 [ 0ULL ] , & t746 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t89 = nk_efOut ; t1907 [ 0ULL ] = X [ 59ULL ] ; tlu2_linear_linear_prelookup
( & ok_efOut . mField0 [ 0ULL ] , & ok_efOut . mField1 [ 0ULL ] , & ok_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField30 , & t1907
[ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t186 = ok_efOut ;
tlu2_2d_linear_linear_value ( & pk_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , & t186 . mField0 [ 0ULL ] , & t186 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = pk_efOut [ 0 ] ;
intrm_sf_mf_1536 = t2576_idx_0 ; tlu2_2d_linear_linear_value ( & qk_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , & t186 .
mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField33 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ;
t2576_idx_0 = qk_efOut [ 0 ] ; t3341 = t2576_idx_0 ;
tlu2_2d_linear_nearest_value ( & rk_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] , & t162 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , & t746 [ 0ULL ] ,
& t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rk_efOut [ 0 ] ; t3343 =
t2576_idx_0 ; tlu2_2d_linear_nearest_value ( & sk_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] , &
t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField36 , &
t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = sk_efOut
[ 0 ] ; intrm_sf_mf_1598 = t2576_idx_0 ; tlu2_2d_linear_nearest_value ( &
tk_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , &
t162 . mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField37 , & t746 [ 0ULL ] , & t749 [ 0ULL ] , & t223 [ 0ULL ]
) ; t2576_idx_0 = tk_efOut [ 0 ] ; intrm_sf_mf_1611 = t2576_idx_0 ;
tlu2_2d_linear_nearest_value ( & uk_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , & t162 . mField0 [ 0ULL ] , & t162 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField37 , & t746 [ 0ULL ] ,
& t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = uk_efOut [ 0 ] ;
intrm_sf_mf_1625 = t2576_idx_0 ; if ( X [ 455ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 = X [ 455ULL ]
* 17.81 + 0.043 ; } else if ( X [ 455ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 = ( ( X [
455ULL ] * 17.81 + 0.043 ) - X [ 455ULL ] * X [ 455ULL ] * 39.85 ) + X [
455ULL ] * X [ 455ULL ] * X [ 455ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 = ( X [ 455ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 456ULL ] < 0.0 ) { U_idx_1 = X [ 456ULL
] * 17.81 + 0.043 ; } else if ( X [ 456ULL ] <= 1.0 ) { U_idx_1 = ( ( X [
456ULL ] * 17.81 + 0.043 ) - X [ 456ULL ] * X [ 456ULL ] * 39.85 ) + X [
456ULL ] * X [ 456ULL ] * X [ 456ULL ] * 36.0 ; } else { U_idx_1 = ( X [
456ULL ] - 1.0 ) * 1.4 + 14.003 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = exp ( (
0.003298697014679202 - 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) )
* 2416.0 ) * 1.25E-10 ; if ( - t2790 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 = t2790 /
0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 = 0.0 ; }
t3345 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 *
0.20177105219743391 / 192970.66424 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 * 0.0029 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 * 0.05 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 * 0.05 ; }
t1907 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_nearest_prelookup ( & vk_efOut .
mField0 [ 0ULL ] , & vk_efOut . mField1 [ 0ULL ] , & vk_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = vk_efOut ;
tlu2_1d_linear_nearest_value ( & wk_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = wk_efOut [ 0 ] ; t2636
= ( X [ 224ULL ] + X [ 229ULL ] ) / 2.0 ; t2644 = ( X [ 348ULL ] + X [ 353ULL
] ) / 2.0 ; t1907 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_linear_prelookup ( &
xk_efOut . mField0 [ 0ULL ] , & xk_efOut . mField1 [ 0ULL ] , & xk_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t187 = xk_efOut ;
tlu2_1d_linear_linear_value ( & yk_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ]
, & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2579 [ 0 ] = yk_efOut [ 0 ] ; t2679 =
exp ( pmf_log ( t2636 ) - t2579 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = X [ 455ULL
] / ( t2679 == 0.0 ? 1.0E-16 : t2679 ) ; t2679 = exp ( pmf_log ( t2644 ) -
t2579 [ 0ULL ] ) ; t3346 = X [ 456ULL ] / ( t2679 == 0.0 ? 1.0E-16 : t2679 )
; if ( t2636 > t2644 ) { intrm_sf_mf_1385 = t2576_idx_0 * X [ 31ULL ] *
0.001039307827269155 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = ( t2636 -
t2644 ) * t2636 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 * 1.58E-18 /
( intrm_sf_mf_1385 == 0.0 ? 1.0E-16 : intrm_sf_mf_1385 ) ; } else { t3356 =
t2576_idx_0 * X [ 31ULL ] * 0.001039307827269155 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = ( t2636 -
t2644 ) * t2644 * t3346 * 1.58E-18 / ( t3356 == 0.0 ? 1.0E-16 : t3356 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 *
1818.181818181818 - U_idx_1 * 1818.181818181818 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / 96485.33212
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 ) *
0.20177105219743391 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 *
0.022577863652674921 / 192970.66424 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 *
0.3583866814737065 / 385941.32848 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 + U_idx_1 ) /
2.0 ; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 >=
1.0 ) { U_idx_1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 * 0.005139 -
0.00326 ; } else { U_idx_1 = 0.0018790000000000005 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 = exp ( (
0.003298697014679202 - 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) )
* 1268.0 ) * U_idx_1 ; U_idx_1 = 0.000125 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = t2679 * ( (
X [ 350ULL ] + X [ 355ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 >= 1.0E-9 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 : 1.0E-6 ;
t2679 = t2636 * ( ( X [ 228ULL ] + X [ 233ULL ] ) / 2.0 ) / 1.01325 ; if (
t2679 * 1.0E-5 >= 1.0E-9 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = t2679 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = 1.0E-6 ; }
t2679 = t2644 * ( ( X [ 352ULL ] + X [ 357ULL ] ) / 2.0 ) / 1.01325 ; if (
t2679 * 1.0E-5 >= 1.0E-9 ) { t3344 = t2679 * 1.0E-5 ; } else { t3344 = 1.0E-6
; } t3366 = X [ 31ULL ] * 8.31446261815324 ; t2636 = ( X [ 231ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ) * ( t2636 *
7.0000000000000007E-6 / ( t3366 == 0.0 ? 1.0E-16 : t3366 ) ) / 0.00025 ;
t2644 = ( t3346 - X [ 355ULL ] ) * ( t2644 * 7.0000000000000007E-6 / ( t3366
== 0.0 ? 1.0E-16 : t3366 ) ) / 0.00025 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 ) * ( t3366 /
135079.46496800001 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = 0.0 ; } if
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 <= 13986.0
) { t3348 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 / 14000.0 ) ;
} else { t3348 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; } t2679 = X [ 31ULL ] * - 8.31446261815324
/ 192970.66424 * t3348 ; t3376 = pmf_sqrt ( t3344 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 ; t3346 =
t3366 / 192970.66424 * pmf_log ( t3376 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 ) )
+ 1.228891453185164 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 = U_idx_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 ; t3346 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 * ( ( ( t3346
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 * 0.01 ) -
t2679 ) * 11.200000000000001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 = - X [
458ULL ] + X [ 396ULL ] ; t1907 [ 0ULL ] = X [ 62ULL ] ;
tlu2_linear_linear_prelookup ( & al_efOut . mField0 [ 0ULL ] , & al_efOut .
mField1 [ 0ULL ] , & al_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t187 = al_efOut ; tlu2_1d_linear_linear_value ( & bl_efOut [ 0ULL ] , &
t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
bl_efOut [ 0 ] ; t3344 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
cl_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = cl_efOut [ 0 ] ; t3348 = t2576_idx_0 ; if ( X [
65ULL ] <= 0.0 ) { t3349 = 0.0 ; } else { t3349 = X [ 65ULL ] >= 1.0 ? 1.0 :
X [ 65ULL ] ; } if ( X [ 64ULL ] <= 0.0 ) { t3350 = 0.0 ; } else { t3350 = X
[ 64ULL ] >= 1.0 ? 1.0 : X [ 64ULL ] ; } t3351 = ( ( ( 1.0 - t3349 ) - t3350
) * 296.802103844292 + t3349 * 461.523 ) + t3350 * 4124.48151675695 ; t3379 =
X [ 62ULL ] * t3351 ; if ( 1.0 - X [ 65ULL ] >= 0.01 ) { t3353 = 1.0 - X [
65ULL ] ; } else if ( 1.0 - X [ 65ULL ] >= - 0.1 ) { t3353 = exp ( ( ( 1.0 -
X [ 65ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t3353 =
1.6701700790245661E-7 ; } intrm_sf_mf_1385 = X [ 64ULL ] / ( t3353 == 0.0 ?
1.0E-16 : t3353 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & dl_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ]
, & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = dl_efOut [ 0 ] ; t3355 =
exp ( pmf_log ( X [ 63ULL ] * 100000.0 ) - t2576_idx_0 ) ; if ( t3355 >= 1.0
) { t3382 = ( t3355 - 1.0 ) * 461.523 + intrm_sf_mf_1385 ; t3356 =
intrm_sf_mf_1385 / ( t3382 == 0.0 ? 1.0E-16 : t3382 ) ; } else { t3356 = 1.0
; } t3384 = t3356 * 0.01 ; intrm_sf_mf_1385 = ( X [ 65ULL ] - t3356 ) / (
t3384 == 0.0 ? 1.0E-16 : t3384 ) ; if ( X [ 65ULL ] - t3356 <= 0.0 ) {
intrm_sf_mf_1385 = 0.0 ; } else if ( X [ 65ULL ] - t3356 >= t3356 * 0.01 ) {
intrm_sf_mf_1385 = X [ 65ULL ] - t3356 ; } else { intrm_sf_mf_1385 = ( X [
65ULL ] - t3356 ) * ( intrm_sf_mf_1385 * intrm_sf_mf_1385 * 3.0 -
intrm_sf_mf_1385 * intrm_sf_mf_1385 * intrm_sf_mf_1385 * 2.0 ) ; } t3352 = X
[ 63ULL ] / ( t3379 == 0.0 ? 1.0E-16 : t3379 ) * intrm_sf_mf_1385 * 0.12 /
0.001 ; intrm_sf_mf_1385 = ( t3344 - t3348 ) * t3352 ; t3348 = pmf_sqrt ( X [
471ULL ] * X [ 471ULL ] + 1.8324100759713822E-12 ) ; t3356 = pmf_sqrt ( X [
471ULL ] * X [ 471ULL ] + 2.0914103314136477E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8 = pmf_sqrt ( X
[ 471ULL ] * X [ 471ULL ] + 1.4768645655431171E-13 ) ;
tlu2_1d_linear_linear_value ( & el_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ]
, & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = el_efOut [ 0 ] ; t3358 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & fl_efOut [ 0ULL ] , & t187 .
mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
fl_efOut [ 0 ] ; t3362 = X [ 471ULL ] - t3352 * 100000.0 ; t3363 = X [ 473ULL
] - t3352 * 100000.0 ; t3364 = ( ( ( 1.0 - t3349 ) - t3350 ) * t3358 + t3344
* t3349 ) + t2576_idx_0 * t3350 ; t3367 = t3358 - X [ 62ULL ] *
0.296802103844292 ; t3358 = t2576_idx_0 - X [ 62ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T22 = t3344 - X [
62ULL ] * 0.461523 ; if ( X [ 68ULL ] <= 0.0 ) { t3344 = 0.0 ; } else { t3344
= X [ 68ULL ] >= 1.0 ? 1.0 : X [ 68ULL ] ; } if ( X [ 69ULL ] <= 0.0 ) {
t3369 = 0.0 ; } else { t3369 = X [ 69ULL ] >= 1.0 ? 1.0 : X [ 69ULL ] ; }
t3370 = ( ( ( 1.0 - t3344 ) - t3369 ) * 296.802103844292 + t3344 * 461.523 )
+ t3369 * 4124.48151675695 ; t4784 = - ( ( X [ 66ULL ] / ( X [ 67ULL ] == 0.0
? 1.0E-16 : X [ 67ULL ] ) - X [ 481ULL ] / ( X [ 482ULL ] == 0.0 ? 1.0E-16 :
X [ 482ULL ] ) ) * X [ 471ULL ] * t3370 ) / 7.8539816339744827E-5 ; if ( X [
481ULL ] <= 216.59999999999997 ) { t4721 = 216.59999999999997 ; } else {
t4721 = X [ 481ULL ] >= 623.15 ? 623.15 : X [ 481ULL ] ; } t4747 = t4721 *
t4721 ; t4744 = ( ( ( 1074.1165326382641 + t4721 * - 0.2214565261064495 ) +
t4747 * 0.00037212980109014541 ) * ( ( 1.0 - t3344 ) - t3369 ) + ( (
1479.6504774711011 + t4721 * 1.2002114337048222 ) + t4747 * -
0.00038614513167823636 ) * t3344 ) + ( ( 12825.281119789837 + t4721 *
6.9647057412840034 ) + t4747 * - 0.0070524868246844051 ) * t3369 ; t3391 =
t4744 - t3370 ; t4721 = t4744 / ( t3391 == 0.0 ? 1.0E-16 : t3391 ) ; t4744 =
pmf_sqrt ( t4784 * t4784 * 9.999999999999999E-14 + fabs ( X [ 481ULL ] *
t4721 * t3370 ) * 1.0E-9 ) ; if ( X [ 483ULL ] <= 0.0 ) { t4747 = 0.0 ; }
else { t4747 = X [ 483ULL ] >= 1.0 ? 1.0 : X [ 483ULL ] ; } if ( X [ 484ULL ]
<= 0.0 ) { t4796 = 0.0 ; } else { t4796 = X [ 484ULL ] >= 1.0 ? 1.0 : X [
484ULL ] ; } t1907 [ 0ULL ] = X [ 66ULL ] ; tlu2_linear_nearest_prelookup ( &
gl_efOut . mField0 [ 0ULL ] , & gl_efOut . mField1 [ 0ULL ] , & gl_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t136 = gl_efOut ;
tlu2_1d_linear_nearest_value ( & hl_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = hl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & il_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = il_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jl_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = jl_efOut [ 0 ] ; t4786
= ( ( ( 1.0 - t4747 ) - t4796 ) * t2576_idx_0 + t2567_idx_0 * t4747 ) +
t2585_idx_0 * t4796 ; t3392 = X [ 482ULL ] * X [ 482ULL ] * t4721 ; t3382 = -
pmf_sqrt ( fabs ( t3392 / ( t3370 == 0.0 ? 1.0E-16 : t3370 ) / ( X [ 481ULL ]
== 0.0 ? 1.0E-16 : X [ 481ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t3382 >=
0.0 ) { t3383 = t3382 * 100000.0 ; } else { t3383 = - t3382 * 100000.0 ; }
t3396 = t4786 * 7.8539816339744827E-5 ; t3384 = t3383 * 0.01 / ( t3396 == 0.0
? 1.0E-16 : t3396 ) ; t3398 = X [ 66ULL ] * t3370 ; t3385 = X [ 67ULL ] / (
t3398 == 0.0 ? 1.0E-16 : t3398 ) ; t3400 = t3385 * 1.5707963267948965E-8 ;
t3390 = t3382 * t4786 * 35.2 / ( t3400 == 0.0 ? 1.0E-16 : t3400 ) ; t3391 =
t3384 >= 1.0 ? t3384 : 1.0 ; t3401 = pmf_log10 ( 6.9 / ( t3391 == 0.0 ?
1.0E-16 : t3391 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3391 ==
0.0 ? 1.0E-16 : t3391 ) + 0.00017169489553429715 ) * 3.24 ; t3403 = t3385 *
1.2337005501361697E-10 ; t3383 = t3382 * t3383 * ( 1.0 / ( t3401 == 0.0 ?
1.0E-16 : t3401 ) ) * 0.55 / ( t3403 == 0.0 ? 1.0E-16 : t3403 ) ; t3391 = (
t3384 - 2000.0 ) / 2000.0 ; t3393 = t3391 * t3391 * 3.0 - t3391 * t3391 *
t3391 * 2.0 ; if ( t3384 <= 2000.0 ) { t3391 = t3390 * 1.0E-5 ; } else if (
t3384 >= 4000.0 ) { t3391 = t3383 * 1.0E-5 ; } else { t3391 = ( ( 1.0 - t3393
) * t3390 + t3383 * t3393 ) * 1.0E-5 ; } t4744 = - ( X [ 471ULL ] * t4744 ) /
7.8539816339744827E-5 * 0.00031622776601683789 + t3391 ; t3383 = X [ 478ULL ]
- X [ 67ULL ] ; t3390 = ( X [ 66ULL ] / ( X [ 67ULL ] == 0.0 ? 1.0E-16 : X [
67ULL ] ) - X [ 486ULL ] / ( X [ 487ULL ] == 0.0 ? 1.0E-16 : X [ 487ULL ] ) )
* X [ 485ULL ] * t3370 / 7.8539816339744827E-5 ; if ( X [ 486ULL ] <=
216.59999999999997 ) { t3391 = 216.59999999999997 ; } else { t3391 = X [
486ULL ] >= 623.15 ? 623.15 : X [ 486ULL ] ; } t3386 = t3391 * t3391 ; t3393
= ( ( ( 1074.1165326382641 + t3391 * - 0.2214565261064495 ) + t3386 *
0.00037212980109014541 ) * ( ( 1.0 - t3344 ) - t3369 ) + ( (
1479.6504774711011 + t3391 * 1.2002114337048222 ) + t3386 * -
0.00038614513167823636 ) * t3344 ) + ( ( 12825.281119789837 + t3391 *
6.9647057412840034 ) + t3386 * - 0.0070524868246844051 ) * t3369 ; t3411 =
t3393 - t3370 ; t3391 = t3393 / ( t3411 == 0.0 ? 1.0E-16 : t3411 ) ; t3393 =
pmf_sqrt ( t3390 * t3390 * 9.999999999999999E-14 + fabs ( X [ 486ULL ] *
t3391 * t3370 ) * 1.0E-9 ) ; t3412 = X [ 487ULL ] * X [ 487ULL ] * t3391 ;
t3386 = - pmf_sqrt ( fabs ( t3412 / ( t3370 == 0.0 ? 1.0E-16 : t3370 ) / ( X
[ 486ULL ] == 0.0 ? 1.0E-16 : X [ 486ULL ] ) ) ) * 7.8539816339744827E-5 ; if
( t3386 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 = t3386 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 = - t3386 *
100000.0 ; } t3399 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 * 0.01 / (
t3396 == 0.0 ? 1.0E-16 : t3396 ) ; t3401 = t3386 * t4786 * 35.2 / ( t3400 ==
0.0 ? 1.0E-16 : t3400 ) ; t3402 = t3399 >= 1.0 ? t3399 : 1.0 ; t3419 =
pmf_log10 ( 6.9 / ( t3402 == 0.0 ? 1.0E-16 : t3402 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t3402 == 0.0 ? 1.0E-16 : t3402 ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 = t3386 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 * ( 1.0 / (
t3419 == 0.0 ? 1.0E-16 : t3419 ) ) * 0.55 / ( t3403 == 0.0 ? 1.0E-16 : t3403
) ; t3402 = ( t3399 - 2000.0 ) / 2000.0 ; t3404 = t3402 * t3402 * 3.0 - t3402
* t3402 * t3402 * 2.0 ; if ( t3399 <= 2000.0 ) { t3402 = t3401 * 1.0E-5 ; }
else if ( t3399 >= 4000.0 ) { t3402 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 * 1.0E-5 ; }
else { t3402 = ( ( 1.0 - t3404 ) * t3401 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 * t3404 ) *
1.0E-5 ; } t3393 = X [ 485ULL ] * t3393 / 7.8539816339744827E-5 *
0.00031622776601683789 + t3402 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 = X [ 37ULL ]
- X [ 67ULL ] ; t1907 [ 0ULL ] = X [ 66ULL ] ; tlu2_linear_linear_prelookup (
& kl_efOut . mField0 [ 0ULL ] , & kl_efOut . mField1 [ 0ULL ] , & kl_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = kl_efOut ;
tlu2_1d_linear_linear_value ( & ll_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ll_efOut [ 0 ] ; t3401 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & ml_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ml_efOut [ 0 ] ; t3402 = t2576_idx_0 ; if ( 1.0 - X [ 68ULL ] >= 0.01 ) {
t3404 = 1.0 - X [ 68ULL ] ; } else if ( 1.0 - X [ 68ULL ] >= - 0.1 ) { t3404
= exp ( ( ( 1.0 - X [ 68ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t3404 =
1.6701700790245661E-7 ; } intrm_sf_mf_1436 = X [ 69ULL ] / ( t3404 == 0.0 ?
1.0E-16 : t3404 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & nl_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = nl_efOut [ 0 ] ; t3410 =
exp ( pmf_log ( X [ 67ULL ] * 100000.0 ) - t2576_idx_0 ) ; if ( t3410 >= 1.0
) { t3426 = ( t3410 - 1.0 ) * 461.523 + intrm_sf_mf_1436 ; t3411 =
intrm_sf_mf_1436 / ( t3426 == 0.0 ? 1.0E-16 : t3426 ) ; } else { t3411 = 1.0
; } t3428 = t3411 * 0.01 ; intrm_sf_mf_1436 = ( X [ 68ULL ] - t3411 ) / (
t3428 == 0.0 ? 1.0E-16 : t3428 ) ; if ( X [ 68ULL ] - t3411 <= 0.0 ) {
intrm_sf_mf_1436 = 0.0 ; } else if ( X [ 68ULL ] - t3411 >= t3411 * 0.01 ) {
intrm_sf_mf_1436 = X [ 68ULL ] - t3411 ; } else { intrm_sf_mf_1436 = ( X [
68ULL ] - t3411 ) * ( intrm_sf_mf_1436 * intrm_sf_mf_1436 * 3.0 -
intrm_sf_mf_1436 * intrm_sf_mf_1436 * intrm_sf_mf_1436 * 2.0 ) ; } t3385 =
t3385 * intrm_sf_mf_1436 * 7.8539816339744827E-5 / 0.001 ; intrm_sf_mf_1436 =
( t3401 - t3402 ) * t3385 ; tlu2_1d_linear_nearest_value ( & ol_efOut [ 0ULL
] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = ol_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
pl_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = pl_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ql_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ql_efOut [ 0 ] ; t3402 = ( ( ( 1.0 - t4747 ) - t4796
) * t2576_idx_0 + t2567_idx_0 * t4747 ) + t2585_idx_0 * t4796 ; t3411 = ( X [
476ULL ] - X [ 66ULL ] ) * ( t3402 * 0.031415926535897927 / 0.01 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 = ( - X [
471ULL ] - X [ 485ULL ] ) / 2.0 ; t4001 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 * 0.01 ;
intrm_sf_mf_1800 = t4001 / ( t3396 == 0.0 ? 1.0E-16 : t3396 ) ; t3417 =
pmf_sqrt ( X [ 471ULL ] * X [ 471ULL ] + 2.0360111955237585E-13 ) ; t3419 =
pmf_sqrt ( X [ 471ULL ] * X [ 471ULL ] + 2.3237892571262758E-14 ) ; t3420 =
pmf_sqrt ( X [ 471ULL ] * X [ 471ULL ] + 1.6409606283812411E-14 ) ; t3422 =
pmf_sqrt ( X [ 485ULL ] * X [ 485ULL ] + 2.0360111955237585E-13 ) ; t3423 =
pmf_sqrt ( X [ 485ULL ] * X [ 485ULL ] + 2.3237892571262758E-14 ) ; t3424 =
pmf_sqrt ( X [ 485ULL ] * X [ 485ULL ] + 1.6409606283812411E-14 ) ;
tlu2_1d_linear_linear_value ( & rl_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rl_efOut [ 0 ] ; t3425 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & sl_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
sl_efOut [ 0 ] ; t3427 = - X [ 472ULL ] + X [ 495ULL ] ; t3428 = ( - X [
471ULL ] + X [ 485ULL ] ) - t3385 * 100000.0 ; t3429 = ( - X [ 473ULL ] + X [
496ULL ] ) - t3385 * 100000.0 ; t3430 = ( ( ( 1.0 - t3344 ) - t3369 ) * t3425
+ t3401 * t3344 ) + t2576_idx_0 * t3369 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M42 = t3425 - X [
66ULL ] * 0.296802103844292 ; t3425 = t2576_idx_0 - X [ 66ULL ] *
4.12448151675695 ; t3426 = t3401 - X [ 66ULL ] * 0.461523 ; if ( X [ 480ULL ]
<= 0.0 ) { t3401 = 0.0 ; } else { t3401 = X [ 480ULL ] >= 1.0 ? 1.0 : X [
480ULL ] ; } if ( X [ 479ULL ] <= 0.0 ) { intrm_sf_mf_1706 = 0.0 ; } else {
intrm_sf_mf_1706 = X [ 479ULL ] >= 1.0 ? 1.0 : X [ 479ULL ] ; }
intrm_sf_mf_1439 = ( ( ( 1.0 - t3401 ) - intrm_sf_mf_1706 ) *
296.802103844292 + t3401 * 461.523 ) + intrm_sf_mf_1706 * 4124.48151675695 ;
intrm_sf_mf_1730 = X [ 479ULL ] * 4124.48151675695 / ( intrm_sf_mf_1439 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1439 ) ; if ( X [ 461ULL ] <= 0.0 ) {
intrm_sf_mf_1752 = 0.0 ; } else { intrm_sf_mf_1752 = X [ 461ULL ] >= 1.0 ?
1.0 : X [ 461ULL ] ; } if ( X [ 460ULL ] <= 0.0 ) { intrm_sf_mf_1753 = 0.0 ;
} else { intrm_sf_mf_1753 = X [ 460ULL ] >= 1.0 ? 1.0 : X [ 460ULL ] ; }
intrm_sf_mf_1445 = ( ( ( 1.0 - intrm_sf_mf_1752 ) - intrm_sf_mf_1753 ) *
296.802103844292 + intrm_sf_mf_1752 * 461.523 ) + intrm_sf_mf_1753 *
4124.48151675695 ; intrm_sf_mf_1756 = X [ 460ULL ] * 4124.48151675695 / (
intrm_sf_mf_1445 == 0.0 ? 1.0E-16 : intrm_sf_mf_1445 ) ; t3435 = X [ 480ULL ]
* 461.523 / ( intrm_sf_mf_1439 == 0.0 ? 1.0E-16 : intrm_sf_mf_1439 ) ; t3436
= X [ 461ULL ] * 461.523 / ( intrm_sf_mf_1445 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1445 ) ; t3437 = ( X [ 478ULL ] * - 0.7999998 + U_idx_11 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t3437 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_1537 =
7.8539816339744857E-13 ; } else if ( t3437 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intrm_sf_mf_1537 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_1537 = t3437 * 7.8539816339744827E-5 ; } t3437 = intrm_sf_mf_1537
/ 7.8539816339744827E-5 ; if ( X [ 501ULL ] <= 0.0 ) { intrm_sf_mf_1770 = 0.0
; } else { intrm_sf_mf_1770 = X [ 501ULL ] >= 1.0 ? 1.0 : X [ 501ULL ] ; } if
( X [ 502ULL ] <= 0.0 ) { intrm_sf_mf_1772 = 0.0 ; } else { intrm_sf_mf_1772
= X [ 502ULL ] >= 1.0 ? 1.0 : X [ 502ULL ] ; } intrm_sf_mf_1546 = ( ( ( 1.0 -
intrm_sf_mf_1770 ) - intrm_sf_mf_1772 ) * 296.802103844292 + intrm_sf_mf_1770
* 461.523 ) + intrm_sf_mf_1772 * 4124.48151675695 ; t3439 = X [ 499ULL ] *
intrm_sf_mf_1546 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 = X [ 500ULL
] / ( t3439 == 0.0 ? 1.0E-16 : t3439 ) ; U_idx_11 = X [ 500ULL ] / ( X [
63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) * ( X [ 503ULL ] / ( X [ 499ULL ] ==
0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ; t3442 = X [ 500ULL ] / ( X [ 478ULL ] ==
0.0 ? 1.0E-16 : X [ 478ULL ] ) * ( X [ 504ULL ] / ( X [ 499ULL ] == 0.0 ?
1.0E-16 : X [ 499ULL ] ) ) ; if ( - X [ 471ULL ] > 0.0 ) { t3446 = ( t3437 +
1.0 ) * ( 1.0 - t3437 * U_idx_11 ) * ( - X [ 471ULL ] / 0.64 / (
intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) * ( - X [ 471ULL ] /
0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ) )
* 9.9999999999999991E-11 ; } else if ( - X [ 471ULL ] < 0.0 ) { t3446 = (
t3437 + 1.0 ) * ( 1.0 - t3437 * t3442 ) * ( - X [ 471ULL ] / 0.64 / (
intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) * ( - X [ 471ULL ] /
0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 ) )
* 9.9999999999999991E-11 ; } else { t3446 = 0.0 ; } t3449 = ( X [ 63ULL ] + X
[ 478ULL ] ) / 2.0 * 0.0010000000000000009 ; t3448 = ( 1.0 - t3437 ) * ( 1.0
- t3437 ) ; t3450 = t3449 * t3448 ; t3451 = ( t3437 + 1.0 ) * ( 1.0 - t3437 *
U_idx_11 ) - ( 1.0 - t3437 * t3442 ) * t3437 * 2.0 ; intrm_sf_mf_1576 = ( X [
63ULL ] - X [ 478ULL ] ) * ( t3451 >= t3448 ? t3451 : t3448 ) ; t3451 = ( X [
63ULL ] - X [ 478ULL ] ) / ( t3449 == 0.0 ? 1.0E-16 : t3449 ) ; t3453 = t3451
* t3451 * 3.0 - t3451 * t3451 * t3451 * 2.0 ; if ( X [ 63ULL ] - X [ 478ULL ]
<= 0.0 ) { t3451 = t3450 ; } else if ( X [ 63ULL ] - X [ 478ULL ] >= t3449 )
{ t3451 = intrm_sf_mf_1576 ; } else { t3451 = ( 1.0 - t3453 ) * t3450 +
intrm_sf_mf_1576 * t3453 ; } intrm_sf_mf_1576 = ( t3437 + 1.0 ) * ( 1.0 -
t3437 * t3442 ) - ( 1.0 - t3437 * U_idx_11 ) * t3437 * 2.0 ; t3437 = ( X [
478ULL ] - X [ 63ULL ] ) * ( intrm_sf_mf_1576 >= t3448 ? intrm_sf_mf_1576 :
t3448 ) ; U_idx_11 = ( X [ 478ULL ] - X [ 63ULL ] ) / ( t3449 == 0.0 ?
1.0E-16 : t3449 ) ; t3442 = U_idx_11 * U_idx_11 * 3.0 - U_idx_11 * U_idx_11 *
U_idx_11 * 2.0 ; if ( X [ 478ULL ] - X [ 63ULL ] <= 0.0 ) { U_idx_11 = t3450
; } else if ( X [ 478ULL ] - X [ 63ULL ] >= t3449 ) { U_idx_11 = t3437 ; }
else { U_idx_11 = ( 1.0 - t3442 ) * t3450 + t3437 * t3442 ; } if ( X [ 63ULL
] > X [ 478ULL ] ) { t3437 = t3451 ; } else { t3437 = X [ 63ULL ] < X [
478ULL ] ? U_idx_11 : t3450 ; } if ( X [ 499ULL ] <= 216.59999999999997 ) {
U_idx_11 = 216.59999999999997 ; } else { U_idx_11 = X [ 499ULL ] >= 623.15 ?
623.15 : X [ 499ULL ] ; } t2721 = U_idx_11 * U_idx_11 ; t3442 = ( ( (
1074.1165326382641 + U_idx_11 * - 0.2214565261064495 ) + t2721 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_1770 ) - intrm_sf_mf_1772 )
+ ( ( 1479.6504774711011 + U_idx_11 * 1.2002114337048222 ) + t2721 * -
0.00038614513167823636 ) * intrm_sf_mf_1770 ) + ( ( 12825.281119789837 +
U_idx_11 * 6.9647057412840034 ) + t2721 * - 0.0070524868246844051 ) *
intrm_sf_mf_1772 ; U_idx_1 = t3442 - intrm_sf_mf_1546 ; t3464 = X [ 500ULL ]
* X [ 500ULL ] * ( t3442 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) ;
U_idx_11 = pmf_sqrt ( fabs ( t3464 / ( intrm_sf_mf_1546 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1546 ) / ( X [ 499ULL ] == 0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) *
intrm_sf_mf_1537 * 0.64 ; t3467 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 = ( X [ 63ULL
] - X [ 478ULL ] ) * pmf_sqrt ( fabs ( t3467 / ( t3437 == 0.0 ? 1.0E-16 :
t3437 ) ) ) * intrm_sf_mf_1537 * 0.64 ; t3442 = pmf_sqrt ( X [ 512ULL ] * X [
512ULL ] + 2.7104677895120892E-12 ) ; t3448 = pmf_sqrt ( X [ 512ULL ] * X [
512ULL ] + 5.2285258285341208E-12 ) ; t3450 = pmf_sqrt ( X [ 512ULL ] * X [
512ULL ] + 3.6921614138577926E-12 ) ; if ( X [ 517ULL ] <= 0.0 ) { t3451 =
0.0 ; } else { t3451 = X [ 517ULL ] >= 1.0 ? 1.0 : X [ 517ULL ] ; } if ( X [
518ULL ] <= 0.0 ) { intrm_sf_mf_1576 = 0.0 ; } else { intrm_sf_mf_1576 = X [
518ULL ] >= 1.0 ? 1.0 : X [ 518ULL ] ; } t3453 = ( ( ( 1.0 - t3451 ) -
intrm_sf_mf_1576 ) * 296.802103844292 + t3451 * 461.523 ) + intrm_sf_mf_1576
* 259.836612622973 ; if ( 1.0 - X [ 517ULL ] >= 0.01 ) { t2721 = 1.0 - X [
517ULL ] ; } else if ( 1.0 - X [ 517ULL ] >= - 0.1 ) { t2721 = exp ( ( ( 1.0
- X [ 517ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2721 =
1.6701700790245661E-7 ; } if ( X [ 530ULL ] <= 0.0 ) { t3455 = 0.0 ; } else {
t3455 = X [ 530ULL ] >= 1.0 ? 1.0 : X [ 530ULL ] ; } if ( X [ 529ULL ] <= 0.0
) { t3456 = 0.0 ; } else { t3456 = X [ 529ULL ] >= 1.0 ? 1.0 : X [ 529ULL ] ;
} t3457 = ( ( ( 1.0 - t3455 ) - t3456 ) * 296.802103844292 + t3455 * 461.523
) + t3456 * 259.836612622973 ; t1907 [ 0ULL ] = X [ 524ULL ] ;
tlu2_linear_linear_prelookup ( & tl_efOut . mField0 [ 0ULL ] , & tl_efOut .
mField1 [ 0ULL ] , & tl_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t186 = tl_efOut ; tlu2_1d_linear_linear_value ( & ul_efOut [ 0ULL ] , &
t186 . mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ul_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vl_efOut [ 0ULL ] , & t186 .
mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
vl_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wl_efOut [ 0ULL ] , & t186 .
mField0 [ 0ULL ] , & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
wl_efOut [ 0 ] ; t3458 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 +
t2567_idx_0 * t3455 ) + t2585_idx_0 * t3456 ; t1907 [ 0ULL ] = X [ 527ULL ] ;
tlu2_linear_linear_prelookup ( & xl_efOut . mField0 [ 0ULL ] , & xl_efOut .
mField1 [ 0ULL ] , & xl_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t89 = xl_efOut ; tlu2_1d_linear_linear_value ( & yl_efOut [ 0ULL ] , & t89
. mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
yl_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & am_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = am_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & bm_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = bm_efOut [ 0
] ; t3459 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 + t2567_idx_0 * t3455
) + t2585_idx_0 * t3456 ; t1907 [ 0ULL ] = X [ 525ULL ] ;
tlu2_linear_linear_prelookup ( & cm_efOut . mField0 [ 0ULL ] , & cm_efOut .
mField1 [ 0ULL ] , & cm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t183 = cm_efOut ; tlu2_1d_linear_linear_value ( & dm_efOut [ 0ULL ] , &
t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
dm_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & em_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
em_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fm_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
fm_efOut [ 0 ] ; t3460 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 +
t2567_idx_0 * t3455 ) + t2585_idx_0 * t3456 ; t1907 [ 0ULL ] = X [ 526ULL ] ;
tlu2_linear_linear_prelookup ( & gm_efOut . mField0 [ 0ULL ] , & gm_efOut .
mField1 [ 0ULL ] , & gm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t54 = gm_efOut ; tlu2_1d_linear_linear_value ( & hm_efOut [ 0ULL ] , & t54
. mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
hm_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & im_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = im_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & jm_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = jm_efOut [ 0
] ; t3461 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 + t2567_idx_0 * t3455
) + t2585_idx_0 * t3456 ; t1907 [ 0ULL ] = X [ 70ULL ] ;
tlu2_linear_linear_prelookup ( & km_efOut . mField0 [ 0ULL ] , & km_efOut .
mField1 [ 0ULL ] , & km_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = km_efOut ; tlu2_1d_linear_linear_value ( & lm_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
lm_efOut [ 0 ] ; t3465 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
mm_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = mm_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15 = t2576_idx_0
; if ( X [ 72ULL ] <= 0.0 ) { t3469 = 0.0 ; } else { t3469 = X [ 72ULL ] >=
1.0 ? 1.0 : X [ 72ULL ] ; } if ( X [ 71ULL ] <= 0.0 ) { t3470 = 0.0 ; } else
{ t3470 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } intrm_sf_mf_1637 = ( ( (
1.0 - t3469 ) - t3470 ) * 296.802103844292 + t3469 * 461.523 ) + t3470 *
259.836612622973 ; t3472 = X [ 70ULL ] * intrm_sf_mf_1637 ; if ( 1.0 - X [
72ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 = 1.0 - X [
72ULL ] ; } else if ( 1.0 - X [ 72ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 = exp ( ( (
1.0 - X [ 72ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 =
1.6701700790245661E-7 ; } t3473 = X [ 71ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
nm_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = nm_efOut [ 0 ] ; t3474 = exp ( pmf_log ( X [ 54ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t3474 >= 1.0 ) { t3475 = ( t3474 - 1.0 )
* 461.523 + t3473 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 = t3473 / (
t3475 == 0.0 ? 1.0E-16 : t3475 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 * 0.01 ;
t3473 = ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 ) ;
if ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 <= 0.0 ) {
t3473 = 0.0 ; } else if ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 * 0.01 ) {
t3473 = X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 ; } else {
t3473 = ( X [ 72ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 ) * ( t3473 *
t3473 * 3.0 - t3473 * t3473 * t3473 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 = X [ 54ULL ]
/ ( t3472 == 0.0 ? 1.0E-16 : t3472 ) * t3473 * 0.0003 / 0.001 ; t3473 = (
t3465 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15 = pmf_sqrt (
X [ 407ULL ] * X [ 407ULL ] + 2.7104677895120892E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 = pmf_sqrt (
X [ 407ULL ] * X [ 407ULL ] + 5.2285258285341208E-12 ) ; t3475 = pmf_sqrt ( X
[ 407ULL ] * X [ 407ULL ] + 3.6921614138577926E-12 ) ;
tlu2_1d_linear_linear_value ( & om_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = om_efOut [ 0 ] ; t3476 =
t2576_idx_0 ; tlu2_1d_linear_linear_value ( & pm_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
pm_efOut [ 0 ] ; t3478 = - X [ 513ULL ] + - X [ 414ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 = ( - X [
512ULL ] + - X [ 407ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress25 = ( - X [
514ULL ] + - X [ 415ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 * 100000.0 ;
intrm_sf_mf_1659 = ( ( ( 1.0 - t3469 ) - t3470 ) * t3476 + t3465 * t3469 ) +
t2576_idx_0 * t3470 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress29 = t3476 - X [
70ULL ] * 0.296802103844292 ; t3476 = t2576_idx_0 - X [ 70ULL ] *
0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 = t3465 - X [
70ULL ] * 0.461523 ; t1907 [ 0ULL ] = X [ 73ULL ] ;
tlu2_linear_linear_prelookup ( & qm_efOut . mField0 [ 0ULL ] , & qm_efOut .
mField1 [ 0ULL ] , & qm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = qm_efOut ; tlu2_1d_linear_linear_value ( & rm_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
rm_efOut [ 0 ] ; t3465 = t2576_idx_0 ; tlu2_1d_linear_linear_value ( &
sm_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = sm_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 = t2576_idx_0
; if ( X [ 75ULL ] <= 0.0 ) { intrm_sf_mf_1660 = 0.0 ; } else {
intrm_sf_mf_1660 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL
] <= 0.0 ) { intrm_sf_mf_1661 = 0.0 ; } else { intrm_sf_mf_1661 = X [ 74ULL ]
>= 1.0 ? 1.0 : X [ 74ULL ] ; } intrm_sf_mf_1662 = ( ( ( 1.0 -
intrm_sf_mf_1660 ) - intrm_sf_mf_1661 ) * 296.802103844292 + intrm_sf_mf_1660
* 461.523 ) + intrm_sf_mf_1661 * 4124.48151675695 ; t3480 = X [ 73ULL ] *
intrm_sf_mf_1662 ; if ( 1.0 - X [ 75ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 = 1.0 - X [
75ULL ] ; } else if ( 1.0 - X [ 75ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 = exp ( ( (
1.0 - X [ 75ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 =
1.6701700790245661E-7 ; } t3481 = X [ 74ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
tm_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = tm_efOut [ 0 ] ; t3482 = exp ( pmf_log ( X [ 37ULL ]
* 100000.0 ) - t2576_idx_0 ) ; if ( t3482 >= 1.0 ) { t3483 = ( t3482 - 1.0 )
* 461.523 + t3481 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 = t3481 / (
t3483 == 0.0 ? 1.0E-16 : t3483 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 = 1.0 ; }
t3485 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 * 0.01
; t3481 = ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 ) / ( t3485 ==
0.0 ? 1.0E-16 : t3485 ) ; if ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 <= 0.0 ) {
t3481 = 0.0 ; } else if ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 * 0.01 ) {
t3481 = X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 ; } else {
t3481 = ( X [ 75ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 ) * ( t3481 *
t3481 * 3.0 - t3481 * t3481 * t3481 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 = X [ 37ULL ]
/ ( t3480 == 0.0 ? 1.0E-16 : t3480 ) * t3481 * 0.00012500000000000003 / 0.001
; t3481 = ( t3465 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 = pmf_sqrt ( X
[ 485ULL ] * X [ 485ULL ] + 1.8324100759713822E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 = pmf_sqrt ( X
[ 485ULL ] * X [ 485ULL ] + 2.0914103314136477E-13 ) ; t3483 = pmf_sqrt ( X [
485ULL ] * X [ 485ULL ] + 1.4768645655431171E-13 ) ; t3484 = U_idx_4 * 0.01 ;
t3485 = pmf_sqrt ( t3484 * t3484 + 1.8324100759713822E-12 ) ; t3486 =
pmf_sqrt ( t3484 * t3484 + 2.0914103314136477E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 = pmf_sqrt (
t3484 * t3484 + 1.4768645655431171E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant13 = pmf_sqrt (
X [ 282ULL ] * X [ 282ULL ] + 1.8324100759713822E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant14 = pmf_sqrt (
X [ 282ULL ] * X [ 282ULL ] + 2.0914103314136477E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant15 = pmf_sqrt (
X [ 282ULL ] * X [ 282ULL ] + 1.4768645655431171E-13 ) ;
tlu2_1d_linear_linear_value ( & um_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = um_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 = t2576_idx_0
; tlu2_1d_linear_linear_value ( & vm_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = vm_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant20 = ( - X [
495ULL ] + - X [ 289ULL ] ) + X [ 205ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 = ( ( - X [
485ULL ] + - X [ 282ULL ] ) + t3484 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant23 = ( ( - X [
496ULL ] + - X [ 290ULL ] ) + X [ 207ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 * 100000.0 ;
intrm_sf_mf_1690 = ( ( ( 1.0 - intrm_sf_mf_1660 ) - intrm_sf_mf_1661 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 + t3465 *
intrm_sf_mf_1660 ) + t2576_idx_0 * intrm_sf_mf_1661 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant27 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 - X [ 73ULL ]
* 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 = t2576_idx_0
- X [ 73ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 = t3465 - X [
73ULL ] * 0.461523 ; if ( X [ 569ULL ] <= 0.0 ) { t3465 = 0.0 ; } else {
t3465 = X [ 569ULL ] >= 1.0 ? 1.0 : X [ 569ULL ] ; } if ( X [ 568ULL ] <= 0.0
) { U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 568ULL ] >= 1.0 ? 1.0 : X [ 568ULL
] ; } intrm_sf_mf_1699 = ( ( ( 1.0 - t3465 ) - U_idx_3 ) * 296.802103844292 +
t3465 * 461.523 ) + U_idx_3 * 4124.48151675695 ; t1907 [ 0ULL ] = X [ 563ULL
] ; tlu2_linear_linear_prelookup ( & wm_efOut . mField0 [ 0ULL ] , & wm_efOut
. mField1 [ 0ULL ] , & wm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ]
) ; t50 = wm_efOut ; tlu2_1d_linear_linear_value ( & xm_efOut [ 0ULL ] , &
t50 . mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
xm_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ym_efOut [ 0ULL ] , & t50 .
mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ym_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & an_efOut [ 0ULL ] , & t50 . mField0 [
0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = an_efOut [ 0
] ; intrm_sf_mf_1709 = ( ( ( 1.0 - t3465 ) - U_idx_3 ) * t2576_idx_0 +
t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ; t1907 [ 0ULL ] = X [ 566ULL ]
; tlu2_linear_linear_prelookup ( & bn_efOut . mField0 [ 0ULL ] , & bn_efOut .
mField1 [ 0ULL ] , & bn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t162 = bn_efOut ; tlu2_1d_linear_linear_value ( & cn_efOut [ 0ULL ] , &
t162 . mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
cn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & dn_efOut [ 0ULL ] , & t162 .
mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
dn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & en_efOut [ 0ULL ] , & t162 .
mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
en_efOut [ 0 ] ; intrm_sf_mf_1712 = ( ( ( 1.0 - t3465 ) - U_idx_3 ) *
t2576_idx_0 + t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ; t1907 [ 0ULL ]
= X [ 564ULL ] ; tlu2_linear_linear_prelookup ( & fn_efOut . mField0 [ 0ULL ]
, & fn_efOut . mField1 [ 0ULL ] , & fn_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t104 = fn_efOut ; tlu2_1d_linear_linear_value ( &
gn_efOut [ 0ULL ] , & t104 . mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = gn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
hn_efOut [ 0ULL ] , & t104 . mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = hn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
in_efOut [ 0ULL ] , & t104 . mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = in_efOut [ 0 ] ; intrm_sf_mf_1733 = ( ( ( 1.0 -
t3465 ) - U_idx_3 ) * t2576_idx_0 + t2567_idx_0 * t3465 ) + t2585_idx_0 *
U_idx_3 ; t1907 [ 0ULL ] = X [ 565ULL ] ; tlu2_linear_linear_prelookup ( &
jn_efOut . mField0 [ 0ULL ] , & jn_efOut . mField1 [ 0ULL ] , & jn_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t49 = jn_efOut ;
tlu2_1d_linear_linear_value ( & kn_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = kn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ln_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ln_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mn_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = mn_efOut [ 0 ] ;
intrm_sf_mf_1736 = ( ( ( 1.0 - t3465 ) - U_idx_3 ) * t2576_idx_0 +
t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ; t4266 = U_idx_2 >= 0.0 ?
U_idx_2 : - U_idx_2 ; t4029 = t4266 * 0.01 ; U_idx_7 = t2756 *
7.8539816339744827E-5 ; U_idx_10 = t4029 / ( U_idx_7 == 0.0 ? 1.0E-16 :
U_idx_7 ) ; t4269 = ( U_idx_10 - 2000.0 ) / 2000.0 ; t2791 = t4269 * t4269 *
3.0 - t4269 * t4269 * t4269 * 2.0 ; t4269 = X [ 365ULL ] >= 0.0 ? X [ 365ULL
] : - X [ 365ULL ] ; intrm_sf_mf_1801 = t4269 * 0.01 / ( t3149 == 0.0 ?
1.0E-16 : t3149 ) ; t3490 = intrm_sf_mf_1801 >= 1.0 ? intrm_sf_mf_1801 : 1.0
; t4288 = pmf_log10 ( 6.9 / ( t3490 == 0.0 ? 1.0E-16 : t3490 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3490 == 0.0 ? 1.0E-16 : t3490
) + 0.00017169489553429715 ) * 3.24 ; t4269 = X [ 365ULL ] * t4269 * ( 1.0 /
( t4288 == 0.0 ? 1.0E-16 : t4288 ) ) * 0.046833001326703774 / ( t3156 == 0.0
? 1.0E-16 : t3156 ) ; t3490 = ( intrm_sf_mf_1801 - 2000.0 ) / 2000.0 ; t4288
= t3490 * t3490 * 3.0 - t3490 * t3490 * t3490 * 2.0 ; t3490 = X [ 365ULL ] *
t3127 * 2.9973120849090416 / ( t3153 == 0.0 ? 1.0E-16 : t3153 ) ; if (
intrm_sf_mf_1801 <= 2000.0 ) { t3493 = t3490 * 9.9999999999999991E-11 ; }
else if ( intrm_sf_mf_1801 >= 4000.0 ) { t3493 = t4269 *
9.9999999999999991E-11 ; } else { t3493 = ( ( 1.0 - t4288 ) * t3490 + t4269 *
t4288 ) * 9.9999999999999991E-11 ; } if ( intrm_sf_mf_11 <= 0.0 ) { t4269 =
0.0 ; } else { t4269 = intrm_sf_mf_11 >= 1.0 ? 1.0 : intrm_sf_mf_11 ; } if (
intrm_sf_mf_1047 <= 0.0 ) { intrm_sf_mf_11 = 0.0 ; } else { intrm_sf_mf_11 =
intrm_sf_mf_1047 >= 1.0 ? 1.0 : intrm_sf_mf_1047 ; } t1907 [ 0ULL ] = X [
344ULL ] ; tlu2_linear_nearest_prelookup ( & nn_efOut . mField0 [ 0ULL ] , &
nn_efOut . mField1 [ 0ULL ] , & nn_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t187 = nn_efOut ; tlu2_1d_linear_nearest_value ( &
on_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = on_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
pn_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = pn_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
qn_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField40 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = qn_efOut [ 0 ] ; intrm_sf_mf_1047 = ( ( ( 1.0 -
t4269 ) - intrm_sf_mf_11 ) * t2576_idx_0 + t2567_idx_0 * t4269 ) +
t2585_idx_0 * intrm_sf_mf_11 ; if ( t3108 <= 0.0 ) { intrm_sf_mf_1801 = 0.0 ;
} else { intrm_sf_mf_1801 = t3108 >= 1.0 ? 1.0 : t3108 ; } if (
intrm_sf_mf_992 <= 0.0 ) { t3108 = 0.0 ; } else { t3108 = intrm_sf_mf_992 >=
1.0 ? 1.0 : intrm_sf_mf_992 ; } t1907 [ 0ULL ] = X [ 296ULL ] ;
tlu2_linear_nearest_prelookup ( & rn_efOut . mField0 [ 0ULL ] , & rn_efOut .
mField1 [ 0ULL ] , & rn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t26 = rn_efOut ; tlu2_1d_linear_nearest_value ( & sn_efOut [ 0ULL ] , & t26
. mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
sn_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tn_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = tn_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & un_efOut [ 0ULL ] , & t26 . mField0
[ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField40 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = un_efOut [ 0
] ; intrm_sf_mf_992 = ( ( ( 1.0 - intrm_sf_mf_1801 ) - t3108 ) * t2576_idx_0
+ t2567_idx_0 * intrm_sf_mf_1801 ) + t2585_idx_0 * t3108 ;
tlu2_1d_linear_nearest_value ( & vn_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL
] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = vn_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wn_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL
] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = wn_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xn_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL
] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField40
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = xn_efOut [ 0 ] ; t3490
= ( ( ( 1.0 - t2703 ) - t3196 ) * t2576_idx_0 + t2567_idx_0 * t2703 ) +
t2585_idx_0 * t3196 ; tlu2_1d_linear_nearest_value ( & yn_efOut [ 0ULL ] , &
t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
yn_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ao_efOut [ 0ULL ] , & t187
. mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
ao_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & bo_efOut [ 0ULL ] , & t187
. mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField26 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
bo_efOut [ 0 ] ; t2703 = ( ( ( 1.0 - t4269 ) - intrm_sf_mf_11 ) * t2576_idx_0
+ t2567_idx_0 * t4269 ) + t2585_idx_0 * intrm_sf_mf_11 ;
tlu2_1d_linear_nearest_value ( & co_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = co_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & do_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = do_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eo_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField25
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = eo_efOut [ 0 ] ; t3196
= ( ( ( 1.0 - t4269 ) - intrm_sf_mf_11 ) * t2576_idx_0 + t2567_idx_0 * t4269
) + t2585_idx_0 * intrm_sf_mf_11 ; t3946 = ( piece428 + t3196 ) / 2.0 * 0.32
; intrm_sf_mf_11 = intrm_sf_mf_1092 / ( t3946 == 0.0 ? 1.0E-16 : t3946 ) ;
t4269 = intrm_sf_mf_11 >= 0.0 ? intrm_sf_mf_11 : - intrm_sf_mf_11 ; t4288 =
t4269 > 1000.0 ? t4269 : 1000.0 ; t4030 = intrm_sf_mf_1047 + t3490 ; if (
t4030 / 2.0 > 0.5 ) { intrm_sf_mf_1092 = ( intrm_sf_mf_1047 + t3490 ) / 2.0 ;
} else { intrm_sf_mf_1092 = 0.5 ; } t3946 = pmf_log10 ( 6.9 / ( t4288 == 0.0
? 1.0E-16 : t4288 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t4288 ==
0.0 ? 1.0E-16 : t4288 ) + 0.00017169489553429715 ) * 3.24 ; t3495 = 1.0 / (
t3946 == 0.0 ? 1.0E-16 : t3946 ) ; t3910 = ( pmf_pow ( intrm_sf_mf_1092 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t3495 / 8.0 ) * 12.7 + 1.0 ; t4288
= ( t4288 - 1000.0 ) * ( t3495 / 8.0 ) * intrm_sf_mf_1092 / ( t3910 == 0.0 ?
1.0E-16 : t3910 ) ; intrm_sf_mf_1092 = ( t4269 - 2000.0 ) / 2000.0 ; t3495 =
intrm_sf_mf_1092 * intrm_sf_mf_1092 * 3.0 - intrm_sf_mf_1092 *
intrm_sf_mf_1092 * intrm_sf_mf_1092 * 2.0 ; if ( t4269 <= 2000.0 ) {
intrm_sf_mf_1092 = 3.66 ; } else if ( t4269 >= 4000.0 ) { intrm_sf_mf_1092 =
t4288 ; } else { intrm_sf_mf_1092 = ( 1.0 - t3495 ) * 3.66 + t4288 * t3495 ;
} t3946 = t4030 / 2.0 ; if ( t4269 > intrm_sf_mf_1092 * 10.709248339636167 /
0.32 / ( t3946 == 0.0 ? 1.0E-16 : t3946 ) / 30.0 ) { U_idx_1 = (
intrm_sf_mf_1047 + t3490 ) / 2.0 ; t4288 = intrm_sf_mf_1092 *
10.709248339636167 / ( t4269 == 0.0 ? 1.0E-16 : t4269 ) / 0.32 / ( U_idx_1 ==
0.0 ? 1.0E-16 : U_idx_1 ) ; } else { t4288 = 30.0 ; } t4269 = ( X [ 31ULL ] -
X [ 344ULL ] ) * ( 1.0 - exp ( - t4288 ) ) ; intrm_sf_mf_11 = intrm_sf_mf_11
* 0.32 / 0.01 * ( t4030 / 2.0 ) * ( ( t2703 + t3216 ) / 2.0 ) * t4269 ;
tlu2_1d_linear_nearest_value ( & fo_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = fo_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & go_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = go_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ho_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField26 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ho_efOut [ 0 ] ; t4269 =
( ( ( 1.0 - intrm_sf_mf_1801 ) - t3108 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_1801 ) + t2585_idx_0 * t3108 ; tlu2_1d_linear_nearest_value ( &
io_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = io_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
jo_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = jo_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ko_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField25 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = ko_efOut [ 0 ] ; t4288 = ( ( ( 1.0 - intrm_sf_mf_1801 ) -
t3108 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1801 ) + t2585_idx_0 *
t3108 ; t3910 = ( piece428 + t4288 ) / 2.0 * 0.32 ; t3108 = - t3227 * 0.01 /
( t3910 == 0.0 ? 1.0E-16 : t3910 ) ; t3227 = t3108 >= 0.0 ? t3108 : - t3108 ;
intrm_sf_mf_1801 = t3227 > 1000.0 ? t3227 : 1000.0 ; t4030 = intrm_sf_mf_992
+ t3490 ; if ( t4030 / 2.0 > 0.5 ) { intrm_sf_mf_1092 = ( intrm_sf_mf_992 +
t3490 ) / 2.0 ; } else { intrm_sf_mf_1092 = 0.5 ; } t3946 = pmf_log10 ( 6.9 /
( intrm_sf_mf_1801 == 0.0 ? 1.0E-16 : intrm_sf_mf_1801 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1801 == 0.0 ?
1.0E-16 : intrm_sf_mf_1801 ) + 0.00017169489553429715 ) * 3.24 ; t3495 = 1.0
/ ( t3946 == 0.0 ? 1.0E-16 : t3946 ) ; t3910 = ( pmf_pow ( intrm_sf_mf_1092 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t3495 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1801 = ( intrm_sf_mf_1801 - 1000.0 ) * ( t3495 / 8.0 ) *
intrm_sf_mf_1092 / ( t3910 == 0.0 ? 1.0E-16 : t3910 ) ; intrm_sf_mf_1092 = (
t3227 - 2000.0 ) / 2000.0 ; t3495 = intrm_sf_mf_1092 * intrm_sf_mf_1092 * 3.0
- intrm_sf_mf_1092 * intrm_sf_mf_1092 * intrm_sf_mf_1092 * 2.0 ; if ( t3227
<= 2000.0 ) { intrm_sf_mf_1092 = 3.66 ; } else if ( t3227 >= 4000.0 ) {
intrm_sf_mf_1092 = intrm_sf_mf_1801 ; } else { intrm_sf_mf_1092 = ( 1.0 -
t3495 ) * 3.66 + intrm_sf_mf_1801 * t3495 ; } t3946 = t4030 / 2.0 ; if (
t3227 > intrm_sf_mf_1092 * 10.709248339636167 / 0.32 / ( t3946 == 0.0 ?
1.0E-16 : t3946 ) / 30.0 ) { U_idx_1 = ( intrm_sf_mf_992 + t3490 ) / 2.0 ;
intrm_sf_mf_1801 = intrm_sf_mf_1092 * 10.709248339636167 / ( t3227 == 0.0 ?
1.0E-16 : t3227 ) / 0.32 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_1801 = 30.0 ; } t3227 = ( X [ 31ULL ] - X [ 296ULL ] ) * ( 1.0 -
exp ( - intrm_sf_mf_1801 ) ) ; t3108 = t3108 * 0.32 / 0.01 * ( t4030 / 2.0 )
* ( ( t3216 + t4269 ) / 2.0 ) * t3227 ; t3216 = ( t3228 - - 20.0 ) / 40.0 ;
t3227 = t3216 * t3216 * 3.0 - t3216 * t3216 * t3216 * 2.0 ; if ( t3228 <= -
20.0 ) { t3216 = t3108 * 0.001 ; } else if ( t3228 >= 20.0 ) { t3216 =
intrm_sf_mf_11 * 0.001 ; } else { t3216 = ( ( 1.0 - t3227 ) * t3108 +
intrm_sf_mf_11 * t3227 ) * 0.001 ; } t3946 = t2754 * 1.5707963267948965E-8 ;
t3108 = U_idx_2 * t2756 * 35.2 / ( t3946 == 0.0 ? 1.0E-16 : t3946 ) * 1.0E-5
; intrm_sf_mf_11 = U_idx_10 >= 2000.0 ? U_idx_10 : 1.0 ; t4030 = pmf_log10 (
6.9 / ( intrm_sf_mf_11 == 0.0 ? 1.0E-16 : intrm_sf_mf_11 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_11 == 0.0 ?
1.0E-16 : intrm_sf_mf_11 ) + 0.00017169489553429715 ) * 3.24 ; t3910 = t2754
* 1.2337005501361696E-8 ; t2754 = U_idx_2 * t4266 * ( 1.0 / ( t4030 == 0.0 ?
1.0E-16 : t4030 ) * 0.55 / 0.01 ) / ( t3910 == 0.0 ? 1.0E-16 : t3910 ) *
1.0E-5 ; if ( U_idx_10 <= 2000.0 ) { intrm_sf_mf_11 = t3108 ; } else if (
U_idx_10 >= 4000.0 ) { intrm_sf_mf_11 = t2754 ; } else { intrm_sf_mf_11 = (
1.0 - t2791 ) * t3108 + t2791 * t2754 ; } t1907 [ 0ULL ] = X [ 344ULL ] ;
tlu2_linear_linear_prelookup ( & lo_efOut . mField0 [ 0ULL ] , & lo_efOut .
mField1 [ 0ULL ] , & lo_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = lo_efOut ; tlu2_1d_linear_linear_value ( & mo_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
mo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & no_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
no_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & oo_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
oo_efOut [ 0 ] ; t2754 = ( ( ( 1.0 - t3187 ) - intrm_sf_mf_1219 ) *
t2576_idx_0 + t2567_idx_0 * t3187 ) + t2585_idx_0 * intrm_sf_mf_1219 ; t1907
[ 0ULL ] = X [ 296ULL ] ; tlu2_linear_linear_prelookup ( & po_efOut . mField0
[ 0ULL ] , & po_efOut . mField1 [ 0ULL ] , & po_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [
0ULL ] , & t223 [ 0ULL ] ) ; t154 = po_efOut ; tlu2_1d_linear_linear_value (
& qo_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = qo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ro_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ro_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
so_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = so_efOut [ 0 ] ; t3108 = ( ( ( 1.0 - t3078 ) -
intrm_sf_mf_1120 ) * t2576_idx_0 + t2567_idx_0 * t3078 ) + t2585_idx_0 *
intrm_sf_mf_1120 ; t1907 [ 0ULL ] = X [ 381ULL ] ;
tlu2_linear_linear_prelookup ( & to_efOut . mField0 [ 0ULL ] , & to_efOut .
mField1 [ 0ULL ] , & to_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t165 = to_efOut ; tlu2_1d_linear_linear_value ( & uo_efOut [ 0ULL ] , &
t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
uo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vo_efOut [ 0ULL ] , & t165 .
mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
vo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wo_efOut [ 0ULL ] , & t165 .
mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
wo_efOut [ 0 ] ; t3078 = ( ( ( 1.0 - t3190 ) - intrm_sf_mf_1005 ) *
t2576_idx_0 + t2567_idx_0 * t3190 ) + t2585_idx_0 * intrm_sf_mf_1005 ; t1907
[ 0ULL ] = X [ 383ULL ] ; tlu2_linear_linear_prelookup ( & xo_efOut . mField0
[ 0ULL ] , & xo_efOut . mField1 [ 0ULL ] , & xo_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [
0ULL ] , & t223 [ 0ULL ] ) ; t190 = xo_efOut ; tlu2_1d_linear_linear_value (
& yo_efOut [ 0ULL ] , & t190 . mField0 [ 0ULL ] , & t190 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = yo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ap_efOut [ 0ULL ] , & t190 . mField0 [ 0ULL ] , & t190 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ap_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
bp_efOut [ 0ULL ] , & t190 . mField0 [ 0ULL ] , & t190 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = bp_efOut [ 0 ] ; intrm_sf_mf_1120 = ( ( ( 1.0 -
t3190 ) - intrm_sf_mf_1005 ) * t2576_idx_0 + t2567_idx_0 * t3190 ) +
t2585_idx_0 * intrm_sf_mf_1005 ; if ( - X [ 365ULL ] >= 0.0 ) { t3187 = - X [
365ULL ] ; } else { t3187 = X [ 365ULL ] ; } intrm_sf_mf_1219 = t3187 * 0.01
/ ( t3201 == 0.0 ? 1.0E-16 : t3201 ) ; t3227 = intrm_sf_mf_1219 >= 1.0 ?
intrm_sf_mf_1219 : 1.0 ; t4030 = pmf_log10 ( 6.9 / ( t3227 == 0.0 ? 1.0E-16 :
t3227 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3227 == 0.0 ?
1.0E-16 : t3227 ) + 0.00017169489553429715 ) * 3.24 ; t3228 = X [ 365ULL ] *
piece428 * - 2.9973120849090416 / ( t3205 == 0.0 ? 1.0E-16 : t3205 ) ; t3187
= X [ 365ULL ] * t3187 * ( 1.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ) * -
0.046833001326703774 / ( t3208 == 0.0 ? 1.0E-16 : t3208 ) ; t3227 = (
intrm_sf_mf_1219 - 2000.0 ) / 2000.0 ; U_idx_10 = t3227 * t3227 * 3.0 - t3227
* t3227 * t3227 * 2.0 ; if ( intrm_sf_mf_1219 <= 2000.0 ) { t3227 = t3228 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_1219 >= 4000.0 ) { t3227 =
t3187 * 9.9999999999999991E-11 ; } else { t3227 = ( ( 1.0 - U_idx_10 ) *
t3228 + t3187 * U_idx_10 ) * 9.9999999999999991E-11 ; } if ( - X [ 319ULL ]
>= 0.0 ) { t3187 = - X [ 319ULL ] ; } else { t3187 = X [ 319ULL ] ; }
intrm_sf_mf_1219 = t3187 * 0.01 / ( t3201 == 0.0 ? 1.0E-16 : t3201 ) ; t3228
= intrm_sf_mf_1219 >= 1.0 ? intrm_sf_mf_1219 : 1.0 ; t4030 = pmf_log10 ( 6.9
/ ( t3228 == 0.0 ? 1.0E-16 : t3228 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t3228 == 0.0 ? 1.0E-16 : t3228 ) + 0.00017169489553429715 ) * 3.24 ;
U_idx_10 = X [ 319ULL ] * piece428 * - 2.9973120849090416 / ( t3205 == 0.0 ?
1.0E-16 : t3205 ) ; t3187 = X [ 319ULL ] * t3187 * ( 1.0 / ( t4030 == 0.0 ?
1.0E-16 : t4030 ) ) * - 0.046833001326703774 / ( t3208 == 0.0 ? 1.0E-16 :
t3208 ) ; t3228 = ( intrm_sf_mf_1219 - 2000.0 ) / 2000.0 ; t2791 = t3228 *
t3228 * 3.0 - t3228 * t3228 * t3228 * 2.0 ; if ( intrm_sf_mf_1219 <= 2000.0 )
{ t3228 = U_idx_10 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_1219 >=
4000.0 ) { t3228 = t3187 * 9.9999999999999991E-11 ; } else { t3228 = ( ( 1.0
- t2791 ) * U_idx_10 + t3187 * t2791 ) * 9.9999999999999991E-11 ; } if (
t3287 <= 0.0 ) { t3187 = 0.0 ; } else { t3187 = t3287 >= 1.0 ? 1.0 : t3287 ;
} if ( intrm_sf_mf_1928 <= 0.0 ) { intrm_sf_mf_1219 = 0.0 ; } else {
intrm_sf_mf_1219 = intrm_sf_mf_1928 >= 1.0 ? 1.0 : intrm_sf_mf_1928 ; } t1907
[ 0ULL ] = X [ 397ULL ] ; tlu2_linear_nearest_prelookup ( & cp_efOut .
mField0 [ 0ULL ] , & cp_efOut . mField1 [ 0ULL ] , & cp_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = cp_efOut ;
tlu2_1d_linear_nearest_value ( & dp_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = dp_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ep_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ep_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fp_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField40
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = fp_efOut [ 0 ] ;
intrm_sf_mf_1928 = ( ( ( 1.0 - t3187 ) - intrm_sf_mf_1219 ) * t2576_idx_0 +
t2567_idx_0 * t3187 ) + t2585_idx_0 * intrm_sf_mf_1219 ; if ( piece412 <= 0.0
) { t3287 = 0.0 ; } else { t3287 = piece412 >= 1.0 ? 1.0 : piece412 ; } if (
intrm_sf_mf_1192 <= 0.0 ) { piece412 = 0.0 ; } else { piece412 =
intrm_sf_mf_1192 >= 1.0 ? 1.0 : intrm_sf_mf_1192 ; } t1907 [ 0ULL ] = X [
358ULL ] ; tlu2_linear_nearest_prelookup ( & gp_efOut . mField0 [ 0ULL ] , &
gp_efOut . mField1 [ 0ULL ] , & gp_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t154 = gp_efOut ; tlu2_1d_linear_nearest_value ( &
hp_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = hp_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ip_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ip_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
jp_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField40 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = jp_efOut [ 0 ] ; intrm_sf_mf_1192 = ( ( ( 1.0 -
t3287 ) - piece412 ) * t2576_idx_0 + t2567_idx_0 * t3287 ) + t2585_idx_0 *
piece412 ; tlu2_1d_linear_nearest_value ( & kp_efOut [ 0ULL ] , & t0 .
mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = kp_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & lp_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = lp_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & mp_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField40 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = mp_efOut [ 0
] ; U_idx_10 = ( ( ( 1.0 - t4254 ) - t4258 ) * t2576_idx_0 + t2567_idx_0 *
t4254 ) + t2585_idx_0 * t4258 ; tlu2_1d_linear_nearest_value ( & np_efOut [
0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = np_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
op_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = op_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
pp_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = pp_efOut [ 0 ] ; t4254 = ( ( ( 1.0 - t3187 ) -
intrm_sf_mf_1219 ) * t2576_idx_0 + t2567_idx_0 * t3187 ) + t2585_idx_0 *
intrm_sf_mf_1219 ; if ( - U_idx_2 >= 0.0 ) { t4258 = - U_idx_2 ; } else {
t4258 = U_idx_2 ; } tlu2_1d_linear_nearest_value ( & qp_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
qp_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rp_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
rp_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & sp_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField25 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
sp_efOut [ 0 ] ; t3657 = ( t4513 + ( ( ( ( 1.0 - t3187 ) - intrm_sf_mf_1219 )
* t2576_idx_0 + t2567_idx_0 * t3187 ) + t2585_idx_0 * intrm_sf_mf_1219 ) ) /
2.0 * 0.0019634954084936209 ; t3187 = t3285 / ( t3657 == 0.0 ? 1.0E-16 :
t3657 ) ; intrm_sf_mf_1219 = t3187 >= 0.0 ? t3187 : - t3187 ; t2791 =
intrm_sf_mf_1219 > 1000.0 ? intrm_sf_mf_1219 : 1000.0 ; t4030 =
intrm_sf_mf_1928 + U_idx_10 ; if ( t4030 / 2.0 > 0.5 ) { intrm_sf_mf_1801 = (
intrm_sf_mf_1928 + U_idx_10 ) / 2.0 ; } else { intrm_sf_mf_1801 = 0.5 ; }
t3657 = pmf_log10 ( 6.9 / ( t2791 == 0.0 ? 1.0E-16 : t2791 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2791 == 0.0 ? 1.0E-16 : t2791
) + 2.8767404433520813E-5 ) * 3.24 ; t3490 = 1.0 / ( t3657 == 0.0 ? 1.0E-16 :
t3657 ) ; t3858 = ( pmf_pow ( intrm_sf_mf_1801 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t3490 / 8.0 ) * 12.7 + 1.0 ; t2791 = ( t2791 - 1000.0 ) * (
t3490 / 8.0 ) * intrm_sf_mf_1801 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ;
intrm_sf_mf_1801 = ( intrm_sf_mf_1219 - 2000.0 ) / 2000.0 ; t3490 =
intrm_sf_mf_1801 * intrm_sf_mf_1801 * 3.0 - intrm_sf_mf_1801 *
intrm_sf_mf_1801 * intrm_sf_mf_1801 * 2.0 ; if ( intrm_sf_mf_1219 <= 2000.0 )
{ intrm_sf_mf_1801 = 3.66 ; } else if ( intrm_sf_mf_1219 >= 4000.0 ) {
intrm_sf_mf_1801 = t2791 ; } else { intrm_sf_mf_1801 = ( 1.0 - t3490 ) * 3.66
+ t2791 * t3490 ; } t3657 = t4030 / 2.0 ; if ( intrm_sf_mf_1219 >
intrm_sf_mf_1801 * 0.039269908169872414 / 0.0019634954084936209 / ( t3657 ==
0.0 ? 1.0E-16 : t3657 ) / 30.0 ) { U_idx_1 = ( intrm_sf_mf_1928 + U_idx_10 )
/ 2.0 ; t2791 = intrm_sf_mf_1801 * 0.039269908169872414 / ( intrm_sf_mf_1219
== 0.0 ? 1.0E-16 : intrm_sf_mf_1219 ) / 0.0019634954084936209 / ( U_idx_1 ==
0.0 ? 1.0E-16 : U_idx_1 ) ; } else { t2791 = 30.0 ; } intrm_sf_mf_1219 = ( X
[ 406ULL ] - X [ 397ULL ] ) * ( 1.0 - exp ( - t2791 ) ) ; t3187 = t3187 *
0.0019634954084936209 / 0.05 * ( t4030 / 2.0 ) * ( ( t4254 + t3263 ) / 2.0 )
* intrm_sf_mf_1219 ; tlu2_1d_linear_nearest_value ( & tp_efOut [ 0ULL ] , &
t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
tp_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & up_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
up_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vp_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField26 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
vp_efOut [ 0 ] ; intrm_sf_mf_1219 = ( ( ( 1.0 - t3287 ) - piece412 ) *
t2576_idx_0 + t2567_idx_0 * t3287 ) + t2585_idx_0 * piece412 ;
tlu2_1d_linear_nearest_value ( & wp_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = wp_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xp_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = xp_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yp_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField25
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = yp_efOut [ 0 ] ; t4254
= ( ( ( 1.0 - t3287 ) - piece412 ) * t2576_idx_0 + t2567_idx_0 * t3287 ) +
t2585_idx_0 * piece412 ; t3858 = ( t4513 + t4254 ) / 2.0 *
0.0019634954084936209 ; piece412 = - t3272 * 0.05 / ( t3858 == 0.0 ? 1.0E-16
: t3858 ) ; t3272 = piece412 >= 0.0 ? piece412 : - piece412 ;
intrm_sf_mf_1928 = t3272 > 1000.0 ? t3272 : 1000.0 ; t4030 = intrm_sf_mf_1192
+ U_idx_10 ; if ( t4030 / 2.0 > 0.5 ) { t3287 = ( intrm_sf_mf_1192 + U_idx_10
) / 2.0 ; } else { t3287 = 0.5 ; } t3657 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1928 == 0.0 ? 1.0E-16 : intrm_sf_mf_1928 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1928 == 0.0 ?
1.0E-16 : intrm_sf_mf_1928 ) + 2.8767404433520813E-5 ) * 3.24 ; t2791 = 1.0 /
( t3657 == 0.0 ? 1.0E-16 : t3657 ) ; t3858 = ( pmf_pow ( t3287 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2791 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1928 = ( intrm_sf_mf_1928 - 1000.0 ) * ( t2791 / 8.0 ) * t3287 /
( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; t3287 = ( t3272 - 2000.0 ) / 2000.0 ;
t2791 = t3287 * t3287 * 3.0 - t3287 * t3287 * t3287 * 2.0 ; if ( t3272 <=
2000.0 ) { t3287 = 3.66 ; } else if ( t3272 >= 4000.0 ) { t3287 =
intrm_sf_mf_1928 ; } else { t3287 = ( 1.0 - t2791 ) * 3.66 + intrm_sf_mf_1928
* t2791 ; } t3657 = t4030 / 2.0 ; if ( t3272 > t3287 * 0.039269908169872414 /
0.0019634954084936209 / ( t3657 == 0.0 ? 1.0E-16 : t3657 ) / 30.0 ) { U_idx_1
= ( intrm_sf_mf_1192 + U_idx_10 ) / 2.0 ; intrm_sf_mf_1928 = t3287 *
0.039269908169872414 / ( t3272 == 0.0 ? 1.0E-16 : t3272 ) /
0.0019634954084936209 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_1928 = 30.0 ; } t3272 = ( X [ 406ULL ] - X [ 358ULL ] ) * ( 1.0 -
exp ( - intrm_sf_mf_1928 ) ) ; piece412 = piece412 * 0.0019634954084936209 /
0.05 * ( t4030 / 2.0 ) * ( ( t3263 + intrm_sf_mf_1219 ) / 2.0 ) * t3272 ;
t3263 = ( intrm_sf_mf_1271 - - 20.0 ) / 40.0 ; t3272 = t3263 * t3263 * 3.0 -
t3263 * t3263 * t3263 * 2.0 ; if ( intrm_sf_mf_1271 <= - 20.0 ) { t3263 =
piece412 * 0.001 ; } else if ( intrm_sf_mf_1271 >= 20.0 ) { t3263 = t3187 *
0.001 ; } else { t3263 = ( ( 1.0 - t3272 ) * piece412 + t3187 * t3272 ) *
0.001 ; } t1907 [ 0ULL ] = X [ 397ULL ] ; tlu2_linear_linear_prelookup ( &
aq_efOut . mField0 [ 0ULL ] , & aq_efOut . mField1 [ 0ULL ] , & aq_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t0 = aq_efOut ;
tlu2_1d_linear_linear_value ( & bq_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = bq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & cq_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = cq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dq_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = dq_efOut [ 0 ] ; t3187 = (
( ( 1.0 - intrm_sf_mf_1673 ) - intrm_sf_mf_1493 ) * t2576_idx_0 + t2567_idx_0
* intrm_sf_mf_1673 ) + t2585_idx_0 * intrm_sf_mf_1493 ; t1907 [ 0ULL ] = X [
358ULL ] ; tlu2_linear_linear_prelookup ( & eq_efOut . mField0 [ 0ULL ] , &
eq_efOut . mField1 [ 0ULL ] , & eq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t165 = eq_efOut ; tlu2_1d_linear_linear_value ( &
fq_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = fq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
gq_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = gq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
hq_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ] , & t165 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = hq_efOut [ 0 ] ; piece412 = ( ( ( 1.0 - t3146 ) -
intrm_sf_mf_1259 ) * t2576_idx_0 + t2567_idx_0 * t3146 ) + t2585_idx_0 *
intrm_sf_mf_1259 ; t1907 [ 0ULL ] = X [ 408ULL ] ;
tlu2_linear_linear_prelookup ( & iq_efOut . mField0 [ 0ULL ] , & iq_efOut .
mField1 [ 0ULL ] , & iq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t26 = iq_efOut ; tlu2_1d_linear_linear_value ( & jq_efOut [ 0ULL ] , & t26
. mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
jq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & kq_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = kq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lq_efOut [ 0ULL ] , & t26 . mField0 [
0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = lq_efOut [ 0
] ; t3146 = ( ( ( 1.0 - t3215 ) - intrm_sf_mf_1144 ) * t2576_idx_0 +
t2567_idx_0 * t3215 ) + t2585_idx_0 * intrm_sf_mf_1144 ; t1907 [ 0ULL ] = X [
410ULL ] ; tlu2_linear_linear_prelookup ( & mq_efOut . mField0 [ 0ULL ] , &
mq_efOut . mField1 [ 0ULL ] , & mq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = mq_efOut ; tlu2_1d_linear_linear_value ( &
nq_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = nq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
oq_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = oq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
pq_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = pq_efOut [ 0 ] ; intrm_sf_mf_1259 = ( ( ( 1.0 -
t3215 ) - intrm_sf_mf_1144 ) * t2576_idx_0 + t2567_idx_0 * t3215 ) +
t2585_idx_0 * intrm_sf_mf_1144 ; intrm_sf_mf_1673 = X [ 407ULL ] >= 0.0 ? X [
407ULL ] : - X [ 407ULL ] ; t3272 = intrm_sf_mf_1673 * 0.05 / ( t3249 == 0.0
? 1.0E-16 : t3249 ) ; intrm_sf_mf_1271 = t3272 >= 1.0 ? t3272 : 1.0 ; t4030 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_1271 == 0.0 ? 1.0E-16 : intrm_sf_mf_1271 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1271 == 0.0 ?
1.0E-16 : intrm_sf_mf_1271 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_1493 = X [ 407ULL ] * t4513 * 11.2 / ( t3253 == 0.0 ? 1.0E-16 :
t3253 ) ; intrm_sf_mf_1673 = X [ 407ULL ] * intrm_sf_mf_1673 * ( 1.0 / (
t4030 == 0.0 ? 1.0E-16 : t4030 ) ) * 0.175 / ( t3256 == 0.0 ? 1.0E-16 : t3256
) ; intrm_sf_mf_1271 = ( t3272 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1928 =
intrm_sf_mf_1271 * intrm_sf_mf_1271 * 3.0 - intrm_sf_mf_1271 *
intrm_sf_mf_1271 * intrm_sf_mf_1271 * 2.0 ; if ( t3272 <= 2000.0 ) {
intrm_sf_mf_1271 = intrm_sf_mf_1493 * 9.9999999999999991E-11 ; } else if (
t3272 >= 4000.0 ) { intrm_sf_mf_1271 = intrm_sf_mf_1673 *
9.9999999999999991E-11 ; } else { intrm_sf_mf_1271 = ( ( 1.0 -
intrm_sf_mf_1928 ) * intrm_sf_mf_1493 + intrm_sf_mf_1673 * intrm_sf_mf_1928 )
* 9.9999999999999991E-11 ; } if ( - X [ 362ULL ] >= 0.0 ) { intrm_sf_mf_1673
= - X [ 362ULL ] ; } else { intrm_sf_mf_1673 = X [ 362ULL ] ; } t3272 =
intrm_sf_mf_1673 * 0.05 / ( t3249 == 0.0 ? 1.0E-16 : t3249 ) ;
intrm_sf_mf_1493 = t3272 >= 1.0 ? t3272 : 1.0 ; t4030 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1493 == 0.0 ? 1.0E-16 : intrm_sf_mf_1493 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1493 == 0.0 ?
1.0E-16 : intrm_sf_mf_1493 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_1928 = X [ 362ULL ] * t4513 * - 11.2 / ( t3253 == 0.0 ? 1.0E-16 :
t3253 ) ; intrm_sf_mf_1673 = X [ 362ULL ] * intrm_sf_mf_1673 * ( 1.0 / (
t4030 == 0.0 ? 1.0E-16 : t4030 ) ) * - 0.175 / ( t3256 == 0.0 ? 1.0E-16 :
t3256 ) ; intrm_sf_mf_1493 = ( t3272 - 2000.0 ) / 2000.0 ; t3287 =
intrm_sf_mf_1493 * intrm_sf_mf_1493 * 3.0 - intrm_sf_mf_1493 *
intrm_sf_mf_1493 * intrm_sf_mf_1493 * 2.0 ; if ( t2876 <= 0.0 ) {
intrm_sf_mf_1493 = 0.0 ; } else { intrm_sf_mf_1493 = t2876 >= 1.0 ? 1.0 :
t2876 ; } if ( t3272 <= 2000.0 ) { t2876 = intrm_sf_mf_1928 *
9.9999999999999991E-11 ; } else if ( t3272 >= 4000.0 ) { t2876 =
intrm_sf_mf_1673 * 9.9999999999999991E-11 ; } else { t2876 = ( ( 1.0 - t3287
) * intrm_sf_mf_1928 + intrm_sf_mf_1673 * t3287 ) * 9.9999999999999991E-11 ;
} t3657 = ( t4709 + intrm_sf_mf_1768 ) / 2.0 * 0.002 ; intrm_sf_mf_1673 =
t3306 / ( t3657 == 0.0 ? 1.0E-16 : t3657 ) ; t3272 = intrm_sf_mf_1673 >= 0.0
? intrm_sf_mf_1673 : - intrm_sf_mf_1673 ; intrm_sf_mf_1928 = t3272 > 1000.0 ?
t3272 : 1000.0 ; t4030 = t3303 + t4825 ; if ( t4030 / 2.0 > 0.5 ) { t3287 = (
t3303 + t4825 ) / 2.0 ; } else { t3287 = 0.5 ; } t3657 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1928 == 0.0 ? 1.0E-16 : intrm_sf_mf_1928 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1928 == 0.0 ?
1.0E-16 : intrm_sf_mf_1928 ) + 0.00017169489553429715 ) * 3.24 ; t4709 = 1.0
/ ( t3657 == 0.0 ? 1.0E-16 : t3657 ) ; t3858 = ( pmf_pow ( t3287 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t4709 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1928 = ( intrm_sf_mf_1928 - 1000.0 ) * ( t4709 / 8.0 ) * t3287 /
( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; t3287 = ( t3272 - 2000.0 ) / 2000.0 ;
t4709 = t3287 * t3287 * 3.0 - t3287 * t3287 * t3287 * 2.0 ; if ( t3272 <=
2000.0 ) { t3287 = 3.66 ; } else if ( t3272 >= 4000.0 ) { t3287 =
intrm_sf_mf_1928 ; } else { t3287 = ( 1.0 - t4709 ) * 3.66 + intrm_sf_mf_1928
* t4709 ; } if ( intrm_sf_mf_521 <= 0.0 ) { intrm_sf_mf_1928 = 0.0 ; } else {
intrm_sf_mf_1928 = intrm_sf_mf_521 >= 1.0 ? 1.0 : intrm_sf_mf_521 ; } t3657 =
t4030 / 2.0 ; if ( t3272 > t3287 * 1.6063872509454251 / 0.002 / ( t3657 ==
0.0 ? 1.0E-16 : t3657 ) / 30.0 ) { U_idx_1 = ( t3303 + t4825 ) / 2.0 ;
intrm_sf_mf_521 = t3287 * 1.6063872509454251 / ( t3272 == 0.0 ? 1.0E-16 :
t3272 ) / 0.002 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_521 = 30.0 ; } t3272 = ( X [ 31ULL ] - X [ 432ULL ] ) * ( 1.0 -
exp ( - intrm_sf_mf_521 ) ) ; intrm_sf_mf_521 = intrm_sf_mf_1673 * 0.002 /
0.01 * ( t4030 / 2.0 ) * ( ( t4262 + intrm_sf_mf_1368 ) / 2.0 ) * t3272 ;
t3858 = ( t4803 + intrm_sf_mf_1768 ) / 2.0 * 0.002 ; intrm_sf_mf_1673 = -
t3304 * 0.01 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; t3272 = intrm_sf_mf_1673
>= 0.0 ? intrm_sf_mf_1673 : - intrm_sf_mf_1673 ; t3287 = t3272 > 1000.0 ?
t3272 : 1000.0 ; t4030 = intrm_sf_mf_1359 + t4825 ; if ( t4030 / 2.0 > 0.5 )
{ t3303 = ( intrm_sf_mf_1359 + t4825 ) / 2.0 ; } else { t3303 = 0.5 ; } t3657
= pmf_log10 ( 6.9 / ( t3287 == 0.0 ? 1.0E-16 : t3287 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3287 == 0.0 ? 1.0E-16 : t3287
) + 0.00017169489553429715 ) * 3.24 ; t3304 = 1.0 / ( t3657 == 0.0 ? 1.0E-16
: t3657 ) ; t3858 = ( pmf_pow ( t3303 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t3304 / 8.0 ) * 12.7 + 1.0 ; t3287 = ( t3287 - 1000.0 ) * ( t3304
/ 8.0 ) * t3303 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; t3303 = ( t3272 -
2000.0 ) / 2000.0 ; t3657 = t4258 * 0.01 ; t3304 = t3657 / ( U_idx_7 == 0.0 ?
1.0E-16 : U_idx_7 ) ; t1907 [ 0ULL ] = X [ 169ULL ] ;
tlu2_linear_nearest_prelookup ( & qq_efOut . mField0 [ 0ULL ] , & qq_efOut .
mField1 [ 0ULL ] , & qq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t0 = qq_efOut ; tlu2_1d_linear_nearest_value ( & rq_efOut [ 0ULL ] , & t0 .
mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rq_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & sq_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = sq_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & tq_efOut [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = tq_efOut [ 0
] ; t4262 = ( ( ( 1.0 - intrm_sf_mf_1493 ) - intrm_sf_mf_1928 ) * t2576_idx_0
+ t2567_idx_0 * intrm_sf_mf_1493 ) + t2585_idx_0 * intrm_sf_mf_1928 ; t4709 =
t3303 * t3303 * 3.0 - t3303 * t3303 * t3303 * 2.0 ; if ( t3272 <= 2000.0 ) {
t3303 = 3.66 ; } else if ( t3272 >= 4000.0 ) { t3303 = t3287 ; } else { t3303
= ( 1.0 - t4709 ) * 3.66 + t3287 * t4709 ; } U_idx_7 = t4030 / 2.0 ; if (
t3272 > t3303 * 1.6063872509454251 / 0.002 / ( U_idx_7 == 0.0 ? 1.0E-16 :
U_idx_7 ) / 30.0 ) { U_idx_1 = ( intrm_sf_mf_1359 + t4825 ) / 2.0 ; t3287 =
t3303 * 1.6063872509454251 / ( t3272 == 0.0 ? 1.0E-16 : t3272 ) / 0.002 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else { t3287 = 30.0 ; } t3272 = ( X
[ 31ULL ] - X [ 423ULL ] ) * ( 1.0 - exp ( - t3287 ) ) ; intrm_sf_mf_1673 =
intrm_sf_mf_1673 * 0.002 / 0.01 * ( t4030 / 2.0 ) * ( ( t4708 +
intrm_sf_mf_1368 ) / 2.0 ) * t3272 ; t3272 = ( t4664 - - 20.0 ) / 40.0 ;
t3287 = t3272 * t3272 * 3.0 - t3272 * t3272 * t3272 * 2.0 ; if ( t4664 <= -
20.0 ) { t3272 = intrm_sf_mf_1673 * 0.001 ; } else if ( t4664 >= 20.0 ) {
t3272 = intrm_sf_mf_521 * 0.001 ; } else { t3272 = ( ( 1.0 - t3287 ) *
intrm_sf_mf_1673 + intrm_sf_mf_521 * t3287 ) * 0.001 ; } intrm_sf_mf_521 = X
[ 436ULL ] >= 0.0 ? X [ 436ULL ] : - X [ 436ULL ] ; intrm_sf_mf_1673 =
intrm_sf_mf_521 * 0.01 / ( t4374 == 0.0 ? 1.0E-16 : t4374 ) ; t3287 =
intrm_sf_mf_1673 >= 1.0 ? intrm_sf_mf_1673 : 1.0 ; U_idx_7 = pmf_log10 ( 6.9
/ ( t3287 == 0.0 ? 1.0E-16 : t3287 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t3287 == 0.0 ? 1.0E-16 : t3287 ) + 0.00017169489553429715 ) * 3.24 ;
t4030 = t3315 * 4.0000000000000003E-7 ; t3303 = X [ 436ULL ] *
intrm_sf_mf_1768 * 67.455490037817 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ;
t3858 = t3315 * 8.0E-8 ; intrm_sf_mf_521 = X [ 436ULL ] * intrm_sf_mf_521 * (
1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 1.0539920318408906 / ( t3858
== 0.0 ? 1.0E-16 : t3858 ) ; t3287 = ( intrm_sf_mf_1673 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_1359 = t3287 * t3287 * 3.0 - t3287 * t3287 * t3287 * 2.0 ; if (
intrm_sf_mf_1673 <= 2000.0 ) { t3287 = t3303 * 1.0E-5 ; } else if (
intrm_sf_mf_1673 >= 4000.0 ) { t3287 = intrm_sf_mf_521 * 1.0E-5 ; } else {
t3287 = ( ( 1.0 - intrm_sf_mf_1359 ) * t3303 + intrm_sf_mf_521 *
intrm_sf_mf_1359 ) * 1.0E-5 ; } intrm_sf_mf_521 = X [ 428ULL ] >= 0.0 ? X [
428ULL ] : - X [ 428ULL ] ; intrm_sf_mf_1673 = intrm_sf_mf_521 * 0.01 / (
t4374 == 0.0 ? 1.0E-16 : t4374 ) ; t3303 = intrm_sf_mf_1673 >= 1.0 ?
intrm_sf_mf_1673 : 1.0 ; U_idx_7 = pmf_log10 ( 6.9 / ( t3303 == 0.0 ? 1.0E-16
: t3303 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3303 == 0.0 ?
1.0E-16 : t3303 ) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1359 = X [
428ULL ] * intrm_sf_mf_1768 * 67.455490037817 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) ; intrm_sf_mf_521 = X [ 428ULL ] * intrm_sf_mf_521 * ( 1.0 / (
U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 1.0539920318408906 / ( t3858 == 0.0
? 1.0E-16 : t3858 ) ; t3303 = ( intrm_sf_mf_1673 - 2000.0 ) / 2000.0 ; t4825
= t3303 * t3303 * 3.0 - t3303 * t3303 * t3303 * 2.0 ; if ( intrm_sf_mf_1673
<= 2000.0 ) { t3303 = intrm_sf_mf_1359 * 1.0E-5 ; } else if (
intrm_sf_mf_1673 >= 4000.0 ) { t3303 = intrm_sf_mf_521 * 1.0E-5 ; } else {
t3303 = ( ( 1.0 - t4825 ) * intrm_sf_mf_1359 + intrm_sf_mf_521 * t4825 ) *
1.0E-5 ; } t4030 = ( intrm_sf_mf_1611 + intrm_sf_mf_1527 ) / 2.0 *
0.00093750000000000007 ; intrm_sf_mf_521 = t3333 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) ; intrm_sf_mf_1673 = intrm_sf_mf_521 >= 0.0 ? intrm_sf_mf_521 : -
intrm_sf_mf_521 ; intrm_sf_mf_1359 = intrm_sf_mf_1673 > 1000.0 ?
intrm_sf_mf_1673 : 1000.0 ; U_idx_7 = intrm_sf_mf_1448 + intrm_sf_mf_1565 ;
if ( U_idx_7 / 2.0 > 0.5 ) { t4825 = ( intrm_sf_mf_1448 + intrm_sf_mf_1565 )
/ 2.0 ; } else { t4825 = 0.5 ; } t4030 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1359
== 0.0 ? 1.0E-16 : intrm_sf_mf_1359 ) + 0.00069701528436089772 ) * pmf_log10
( 6.9 / ( intrm_sf_mf_1359 == 0.0 ? 1.0E-16 : intrm_sf_mf_1359 ) +
0.00069701528436089772 ) * 3.24 ; intrm_sf_mf_1368 = 1.0 / ( t4030 == 0.0 ?
1.0E-16 : t4030 ) ; t3858 = ( pmf_pow ( t4825 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( intrm_sf_mf_1368 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1359 = (
intrm_sf_mf_1359 - 1000.0 ) * ( intrm_sf_mf_1368 / 8.0 ) * t4825 / ( t3858 ==
0.0 ? 1.0E-16 : t3858 ) ; t4825 = ( intrm_sf_mf_1673 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_1368 = t4825 * t4825 * 3.0 - t4825 * t4825 * t4825 * 2.0 ; if (
intrm_sf_mf_1673 <= 2000.0 ) { t4825 = 3.66 ; } else if ( intrm_sf_mf_1673 >=
4000.0 ) { t4825 = intrm_sf_mf_1359 ; } else { t4825 = ( 1.0 -
intrm_sf_mf_1368 ) * 3.66 + intrm_sf_mf_1359 * intrm_sf_mf_1368 ; } t4030 =
U_idx_7 / 2.0 ; if ( intrm_sf_mf_1673 > t4825 * 1.3250000000000002 /
0.00093750000000000007 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) / 30.0 ) {
U_idx_1 = ( intrm_sf_mf_1448 + intrm_sf_mf_1565 ) / 2.0 ; intrm_sf_mf_1359 =
t4825 * 1.3250000000000002 / ( intrm_sf_mf_1673 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1673 ) / 0.00093750000000000007 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; } else { intrm_sf_mf_1359 = 30.0 ; } intrm_sf_mf_1673 = ( X [
61ULL ] - X [ 444ULL ] ) * ( 1.0 - exp ( - intrm_sf_mf_1359 ) ) ;
intrm_sf_mf_521 = intrm_sf_mf_521 * 0.00093750000000000007 /
0.0028301886792452828 * ( U_idx_7 / 2.0 ) * ( ( t3343 + intrm_sf_mf_1574 ) /
2.0 ) * intrm_sf_mf_1673 ; t3858 = ( intrm_sf_mf_1625 + intrm_sf_mf_1527 ) /
2.0 * 0.00093750000000000007 ; intrm_sf_mf_1673 = - t3331 *
0.0028301886792452828 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; intrm_sf_mf_1359
= intrm_sf_mf_1673 >= 0.0 ? intrm_sf_mf_1673 : - intrm_sf_mf_1673 ; if (
intrm_sf_mf_1580 <= 0.0 ) { t4825 = 0.0 ; } else { t4825 = intrm_sf_mf_1580
>= 1.0 ? 1.0 : intrm_sf_mf_1580 ; } intrm_sf_mf_1580 = intrm_sf_mf_1359 >
1000.0 ? intrm_sf_mf_1359 : 1000.0 ; U_idx_7 = t3322 + intrm_sf_mf_1565 ; if
( U_idx_7 / 2.0 > 0.5 ) { intrm_sf_mf_1368 = ( t3322 + intrm_sf_mf_1565 ) /
2.0 ; } else { intrm_sf_mf_1368 = 0.5 ; } t4030 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1580 == 0.0 ? 1.0E-16 : intrm_sf_mf_1580 ) +
0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1580 == 0.0 ?
1.0E-16 : intrm_sf_mf_1580 ) + 0.00069701528436089772 ) * 3.24 ;
intrm_sf_mf_1768 = 1.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ; t3858 = (
pmf_pow ( intrm_sf_mf_1368 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_1768 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1580 = ( intrm_sf_mf_1580
- 1000.0 ) * ( intrm_sf_mf_1768 / 8.0 ) * intrm_sf_mf_1368 / ( t3858 == 0.0 ?
1.0E-16 : t3858 ) ; intrm_sf_mf_1368 = ( intrm_sf_mf_1359 - 2000.0 ) / 2000.0
; intrm_sf_mf_1768 = intrm_sf_mf_1368 * intrm_sf_mf_1368 * 3.0 -
intrm_sf_mf_1368 * intrm_sf_mf_1368 * intrm_sf_mf_1368 * 2.0 ; if (
intrm_sf_mf_1359 <= 2000.0 ) { intrm_sf_mf_1368 = 3.66 ; } else if (
intrm_sf_mf_1359 >= 4000.0 ) { intrm_sf_mf_1368 = intrm_sf_mf_1580 ; } else {
intrm_sf_mf_1368 = ( 1.0 - intrm_sf_mf_1768 ) * 3.66 + intrm_sf_mf_1580 *
intrm_sf_mf_1768 ; } t4030 = U_idx_7 / 2.0 ; if ( intrm_sf_mf_1359 >
intrm_sf_mf_1368 * 1.3250000000000002 / 0.00093750000000000007 / ( t4030 ==
0.0 ? 1.0E-16 : t4030 ) / 30.0 ) { U_idx_1 = ( t3322 + intrm_sf_mf_1565 ) /
2.0 ; intrm_sf_mf_1580 = intrm_sf_mf_1368 * 1.3250000000000002 / (
intrm_sf_mf_1359 == 0.0 ? 1.0E-16 : intrm_sf_mf_1359 ) /
0.00093750000000000007 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_1580 = 30.0 ; } intrm_sf_mf_1359 = ( X [ 61ULL ] - X [ 430ULL ] )
* ( 1.0 - exp ( - intrm_sf_mf_1580 ) ) ; intrm_sf_mf_1580 = intrm_sf_mf_1673
* 0.00093750000000000007 / 0.0028301886792452828 * ( U_idx_7 / 2.0 ) * ( (
intrm_sf_mf_1598 + intrm_sf_mf_1574 ) / 2.0 ) * intrm_sf_mf_1359 ; if (
intrm_sf_mf_1352 <= 0.0 ) { intrm_sf_mf_1673 = 0.0 ; } else {
intrm_sf_mf_1673 = intrm_sf_mf_1352 >= 1.0 ? 1.0 : intrm_sf_mf_1352 ; }
intrm_sf_mf_1352 = ( t4716 - - 20.0 ) / 40.0 ; intrm_sf_mf_1359 =
intrm_sf_mf_1352 * intrm_sf_mf_1352 * 3.0 - intrm_sf_mf_1352 *
intrm_sf_mf_1352 * intrm_sf_mf_1352 * 2.0 ; if ( t4716 <= - 20.0 ) {
intrm_sf_mf_1352 = intrm_sf_mf_1580 * 0.001 ; } else if ( t4716 >= 20.0 ) {
intrm_sf_mf_1352 = intrm_sf_mf_521 * 0.001 ; } else { intrm_sf_mf_1352 = ( (
1.0 - intrm_sf_mf_1359 ) * intrm_sf_mf_1580 + intrm_sf_mf_521 *
intrm_sf_mf_1359 ) * 0.001 ; } intrm_sf_mf_521 = intrm_sf_mf_1571 >= 0.0 ?
intrm_sf_mf_1571 : - intrm_sf_mf_1571 ; intrm_sf_mf_1580 = intrm_sf_mf_521 *
0.0028301886792452828 / ( t4307 == 0.0 ? 1.0E-16 : t4307 ) ; intrm_sf_mf_1359
= intrm_sf_mf_1580 >= 1.0 ? intrm_sf_mf_1580 : 1.0 ; U_idx_7 = pmf_log10 (
6.9 / ( intrm_sf_mf_1359 == 0.0 ? 1.0E-16 : intrm_sf_mf_1359 ) +
0.00069701528436089772 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1359 == 0.0 ?
1.0E-16 : intrm_sf_mf_1359 ) + 0.00069701528436089772 ) * 3.24 ; t4030 =
intrm_sf_mf_1536 * 1.50186899252403E-8 ; intrm_sf_mf_1368 = intrm_sf_mf_1571
* intrm_sf_mf_1527 * 112.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ; t3858 =
intrm_sf_mf_1536 * 4.97494103773585E-9 ; intrm_sf_mf_521 = intrm_sf_mf_1571 *
intrm_sf_mf_521 * ( 1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * 1.75 / (
t3858 == 0.0 ? 1.0E-16 : t3858 ) ; intrm_sf_mf_1359 = ( intrm_sf_mf_1580 -
2000.0 ) / 2000.0 ; t1907 [ 0ULL ] = X [ 188ULL ] ;
tlu2_linear_nearest_prelookup ( & uq_efOut . mField0 [ 0ULL ] , & uq_efOut .
mField1 [ 0ULL ] , & uq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t154 = uq_efOut ; tlu2_1d_linear_nearest_value ( & vq_efOut [ 0ULL ] , &
t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
vq_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & wq_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
wq_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xq_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
xq_efOut [ 0 ] ; intrm_sf_mf_1768 = ( ( ( 1.0 - t4825 ) - intrm_sf_mf_1673 )
* t2576_idx_0 + t2567_idx_0 * t4825 ) + t2585_idx_0 * intrm_sf_mf_1673 ;
t4664 = intrm_sf_mf_1359 * intrm_sf_mf_1359 * 3.0 - intrm_sf_mf_1359 *
intrm_sf_mf_1359 * intrm_sf_mf_1359 * 2.0 ; if ( intrm_sf_mf_1580 <= 2000.0 )
{ intrm_sf_mf_1359 = intrm_sf_mf_1368 * 1.0E-5 ; } else if ( intrm_sf_mf_1580
>= 4000.0 ) { intrm_sf_mf_1359 = intrm_sf_mf_521 * 1.0E-5 ; } else {
intrm_sf_mf_1359 = ( ( 1.0 - t4664 ) * intrm_sf_mf_1368 + intrm_sf_mf_521 *
t4664 ) * 1.0E-5 ; } if ( - X [ 436ULL ] >= 0.0 ) { intrm_sf_mf_521 = - X [
436ULL ] ; } else { intrm_sf_mf_521 = X [ 436ULL ] ; } intrm_sf_mf_1580 =
intrm_sf_mf_521 * 0.0028301886792452828 / ( t4307 == 0.0 ? 1.0E-16 : t4307 )
; intrm_sf_mf_1368 = intrm_sf_mf_1580 >= 1.0 ? intrm_sf_mf_1580 : 1.0 ;
U_idx_7 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1368 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1368 ) + 0.00069701528436089772 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1368 == 0.0 ? 1.0E-16 : intrm_sf_mf_1368 ) +
0.00069701528436089772 ) * 3.24 ; t4664 = X [ 436ULL ] * intrm_sf_mf_1527 * -
112.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ; intrm_sf_mf_521 = X [ 436ULL ] *
intrm_sf_mf_521 * ( 1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ) * - 1.75 /
( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; intrm_sf_mf_1368 = ( intrm_sf_mf_1580 -
2000.0 ) / 2000.0 ; t3315 = intrm_sf_mf_1368 * intrm_sf_mf_1368 * 3.0 -
intrm_sf_mf_1368 * intrm_sf_mf_1368 * intrm_sf_mf_1368 * 2.0 ; if (
intrm_sf_mf_1580 <= 2000.0 ) { intrm_sf_mf_1368 = t4664 * 1.0E-5 ; } else if
( intrm_sf_mf_1580 >= 4000.0 ) { intrm_sf_mf_1368 = intrm_sf_mf_521 * 1.0E-5
; } else { intrm_sf_mf_1368 = ( ( 1.0 - t3315 ) * t4664 + intrm_sf_mf_521 *
t3315 ) * 1.0E-5 ; } if ( X [ 464ULL ] <= 0.0 ) { intrm_sf_mf_521 = 0.0 ; }
else { intrm_sf_mf_521 = X [ 464ULL ] >= 1.0 ? 1.0 : X [ 464ULL ] ; } if ( X
[ 463ULL ] <= 0.0 ) { intrm_sf_mf_1580 = 0.0 ; } else { intrm_sf_mf_1580 = X
[ 463ULL ] >= 1.0 ? 1.0 : X [ 463ULL ] ; } t4664 = ( ( ( 1.0 -
intrm_sf_mf_521 ) - intrm_sf_mf_1580 ) * 296.802103844292 + intrm_sf_mf_521 *
461.523 ) + intrm_sf_mf_1580 * 4124.48151675695 ;
tlu2_1d_linear_nearest_value ( & yq_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = yq_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ar_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ar_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & br_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField41 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = br_efOut [ 0 ] ; t3315 =
( ( ( 1.0 - t2814 ) - t2815 ) * t2576_idx_0 + t2567_idx_0 * t2814 ) +
t2585_idx_0 * t2815 ; t1907 [ 0ULL ] = X [ 462ULL ] ;
tlu2_linear_linear_prelookup ( & cr_efOut . mField0 [ 0ULL ] , & cr_efOut .
mField1 [ 0ULL ] , & cr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = cr_efOut ; tlu2_1d_linear_linear_value ( & dr_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
dr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & er_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
er_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fr_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
fr_efOut [ 0 ] ; t2814 = ( ( ( 1.0 - intrm_sf_mf_521 ) - intrm_sf_mf_1580 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_521 ) + t2585_idx_0 *
intrm_sf_mf_1580 ; t2815 = t3304 >= 2000.0 ? t3304 : 1.0 ;
tlu2_1d_linear_nearest_value ( & gr_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hr_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = hr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ir_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ir_efOut [ 0 ] ;
intrm_sf_mf_521 = ( ( ( 1.0 - intrm_sf_mf_1493 ) - intrm_sf_mf_1928 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1493 ) + t2585_idx_0 *
intrm_sf_mf_1928 ; if ( t3435 <= 0.0 ) { intrm_sf_mf_1580 = 0.0 ; } else {
intrm_sf_mf_1580 = t3435 >= 1.0 ? 1.0 : t3435 ; } if ( intrm_sf_mf_1730 <=
0.0 ) { t4708 = 0.0 ; } else { t4708 = intrm_sf_mf_1730 >= 1.0 ? 1.0 :
intrm_sf_mf_1730 ; } t1907 [ 0ULL ] = X [ 477ULL ] ;
tlu2_linear_nearest_prelookup ( & jr_efOut . mField0 [ 0ULL ] , & jr_efOut .
mField1 [ 0ULL ] , & jr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t26 = jr_efOut ; tlu2_1d_linear_nearest_value ( & kr_efOut [ 0ULL ] , & t26
. mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
kr_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lr_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = lr_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & mr_efOut [ 0ULL ] , & t26 . mField0
[ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = mr_efOut [ 0
] ; t4709 = ( ( ( 1.0 - intrm_sf_mf_1580 ) - t4708 ) * t2576_idx_0 +
t2567_idx_0 * intrm_sf_mf_1580 ) + t2585_idx_0 * t4708 ; if ( t3436 <= 0.0 )
{ t4803 = 0.0 ; } else { t4803 = t3436 >= 1.0 ? 1.0 : t3436 ; } if (
intrm_sf_mf_1756 <= 0.0 ) { intrm_sf_mf_1571 = 0.0 ; } else {
intrm_sf_mf_1571 = intrm_sf_mf_1756 >= 1.0 ? 1.0 : intrm_sf_mf_1756 ; } t1907
[ 0ULL ] = X [ 459ULL ] ; tlu2_linear_nearest_prelookup ( & nr_efOut .
mField0 [ 0ULL ] , & nr_efOut . mField1 [ 0ULL ] , & nr_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = nr_efOut ;
tlu2_1d_linear_nearest_value ( & or_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = or_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pr_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = pr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qr_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField41
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = qr_efOut [ 0 ] ;
intrm_sf_mf_1448 = ( ( ( 1.0 - t4803 ) - intrm_sf_mf_1571 ) * t2576_idx_0 +
t2567_idx_0 * t4803 ) + t2585_idx_0 * intrm_sf_mf_1571 ;
tlu2_1d_linear_nearest_value ( & rr_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sr_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = sr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tr_efOut [ 0ULL ] , & t136 . mField0 [ 0ULL
] , & t136 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField41
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = tr_efOut [ 0 ] ; t3322
= ( ( ( 1.0 - t4747 ) - t4796 ) * t2576_idx_0 + t2567_idx_0 * t4747 ) +
t2585_idx_0 * t4796 ; tlu2_1d_linear_nearest_value ( & ur_efOut [ 0ULL ] , &
t26 . mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ur_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vr_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = vr_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & wr_efOut [ 0ULL ] , & t26 . mField0
[ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = wr_efOut [ 0
] ; intrm_sf_mf_1565 = ( ( ( 1.0 - intrm_sf_mf_1580 ) - t4708 ) * t2576_idx_0
+ t2567_idx_0 * intrm_sf_mf_1580 ) + t2585_idx_0 * t4708 ;
tlu2_1d_linear_nearest_value ( & xr_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yr_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = yr_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & as_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = as_efOut [ 0 ] ; t4030 =
( t4786 + ( ( ( ( 1.0 - intrm_sf_mf_1580 ) - t4708 ) * t2576_idx_0 +
t2567_idx_0 * intrm_sf_mf_1580 ) + t2585_idx_0 * t4708 ) ) / 2.0 *
7.8539816339744827E-5 ; intrm_sf_mf_1580 = t4001 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) ; t4708 = intrm_sf_mf_1580 >= 0.0 ? intrm_sf_mf_1580 : -
intrm_sf_mf_1580 ; intrm_sf_mf_1574 = t4708 > 1000.0 ? t4708 : 1000.0 ;
U_idx_7 = t4709 + t3322 ; if ( U_idx_7 / 2.0 > 0.5 ) { t3331 = ( t4709 +
t3322 ) / 2.0 ; } else { t3331 = 0.5 ; } t4030 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1574 == 0.0 ? 1.0E-16 : intrm_sf_mf_1574 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1574 == 0.0 ?
1.0E-16 : intrm_sf_mf_1574 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_1527 = 1.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ; t3858 = (
pmf_pow ( t3331 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_1527
/ 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1574 = ( intrm_sf_mf_1574 - 1000.0 ) * (
intrm_sf_mf_1527 / 8.0 ) * t3331 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ; t3331
= ( t4708 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1527 = t3331 * t3331 * 3.0 -
t3331 * t3331 * t3331 * 2.0 ; if ( t4708 <= 2000.0 ) { t3331 = 3.66 ; } else
if ( t4708 >= 4000.0 ) { t3331 = intrm_sf_mf_1574 ; } else { t3331 = ( 1.0 -
intrm_sf_mf_1527 ) * 3.66 + intrm_sf_mf_1574 * intrm_sf_mf_1527 ; } t4030 =
U_idx_7 / 2.0 ; if ( t4708 > t3331 * 0.031415926535897927 /
7.8539816339744827E-5 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) / 30.0 ) { U_idx_1
= ( t4709 + t3322 ) / 2.0 ; intrm_sf_mf_1574 = t3331 * 0.031415926535897927 /
( t4708 == 0.0 ? 1.0E-16 : t4708 ) / 7.8539816339744827E-5 / ( U_idx_1 == 0.0
? 1.0E-16 : U_idx_1 ) ; } else { intrm_sf_mf_1574 = 30.0 ; } t4708 = ( X [
476ULL ] - X [ 477ULL ] ) * ( 1.0 - exp ( - intrm_sf_mf_1574 ) ) ;
intrm_sf_mf_1580 = intrm_sf_mf_1580 * 7.8539816339744827E-5 / 0.01 * (
U_idx_7 / 2.0 ) * ( ( intrm_sf_mf_1565 + t3402 ) / 2.0 ) * t4708 ;
tlu2_1d_linear_nearest_value ( & bs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = bs_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField21
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = cs_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ds_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ds_efOut [ 0 ] ; t4708
= ( ( ( 1.0 - t4803 ) - intrm_sf_mf_1571 ) * t2576_idx_0 + t2567_idx_0 *
t4803 ) + t2585_idx_0 * intrm_sf_mf_1571 ; tlu2_1d_linear_nearest_value ( &
es_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = es_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = fs_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
gs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = gs_efOut [ 0 ] ; t3858 = ( t4786 + ( ( ( ( 1.0 -
t4803 ) - intrm_sf_mf_1571 ) * t2576_idx_0 + t2567_idx_0 * t4803 ) +
t2585_idx_0 * intrm_sf_mf_1571 ) ) / 2.0 * 7.8539816339744827E-5 ; t4709 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 * 0.01 / (
t3858 == 0.0 ? 1.0E-16 : t3858 ) ; tlu2_1d_linear_nearest_value ( & hs_efOut
[ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = hs_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
is_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = is_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
js_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = js_efOut [ 0 ] ; t4803 = ( ( ( 1.0 - intrm_sf_mf_1493 ) -
intrm_sf_mf_1928 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1493 ) +
t2585_idx_0 * intrm_sf_mf_1928 ; intrm_sf_mf_1493 = t4709 >= 0.0 ? t4709 : -
t4709 ; intrm_sf_mf_1928 = intrm_sf_mf_1493 > 1000.0 ? intrm_sf_mf_1493 :
1000.0 ; U_idx_7 = intrm_sf_mf_1448 + t3322 ; if ( U_idx_7 / 2.0 > 0.5 ) {
intrm_sf_mf_1571 = ( intrm_sf_mf_1448 + t3322 ) / 2.0 ; } else {
intrm_sf_mf_1571 = 0.5 ; } t4030 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1928 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1928 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1928 == 0.0 ? 1.0E-16 : intrm_sf_mf_1928 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1565 = 1.0 / ( t4030 == 0.0 ?
1.0E-16 : t4030 ) ; t3858 = ( pmf_pow ( intrm_sf_mf_1571 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_1565 / 8.0 ) * 12.7 +
1.0 ; intrm_sf_mf_1928 = ( intrm_sf_mf_1928 - 1000.0 ) * ( intrm_sf_mf_1565 /
8.0 ) * intrm_sf_mf_1571 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ;
intrm_sf_mf_1571 = ( intrm_sf_mf_1493 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1565
= intrm_sf_mf_1571 * intrm_sf_mf_1571 * 3.0 - intrm_sf_mf_1571 *
intrm_sf_mf_1571 * intrm_sf_mf_1571 * 2.0 ; if ( intrm_sf_mf_1493 <= 2000.0 )
{ intrm_sf_mf_1571 = 3.66 ; } else if ( intrm_sf_mf_1493 >= 4000.0 ) {
intrm_sf_mf_1571 = intrm_sf_mf_1928 ; } else { intrm_sf_mf_1571 = ( 1.0 -
intrm_sf_mf_1565 ) * 3.66 + intrm_sf_mf_1928 * intrm_sf_mf_1565 ; } t4030 =
U_idx_7 / 2.0 ; if ( intrm_sf_mf_1493 > intrm_sf_mf_1571 *
0.031415926535897927 / 7.8539816339744827E-5 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) / 30.0 ) { U_idx_1 = ( intrm_sf_mf_1448 + t3322 ) / 2.0 ;
intrm_sf_mf_1928 = intrm_sf_mf_1571 * 0.031415926535897927 / (
intrm_sf_mf_1493 == 0.0 ? 1.0E-16 : intrm_sf_mf_1493 ) /
7.8539816339744827E-5 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_1928 = 30.0 ; } intrm_sf_mf_1493 = ( X [ 476ULL ] - X [ 459ULL ]
) * ( 1.0 - exp ( - intrm_sf_mf_1928 ) ) ; t3858 = ( t4803 + zc_int352 ) /
2.0 * 7.8539816339744827E-5 ; intrm_sf_mf_1928 = t4302 / ( t3858 == 0.0 ?
1.0E-16 : t3858 ) ; t4708 = t4709 * 7.8539816339744827E-5 / 0.01 * ( U_idx_7
/ 2.0 ) * ( ( t3402 + t4708 ) / 2.0 ) * intrm_sf_mf_1493 ; intrm_sf_mf_1493 =
( intrm_sf_mf_1800 - - 20.0 ) / 40.0 ; t4709 = intrm_sf_mf_1493 *
intrm_sf_mf_1493 * 3.0 - intrm_sf_mf_1493 * intrm_sf_mf_1493 *
intrm_sf_mf_1493 * 2.0 ; if ( intrm_sf_mf_1800 <= - 20.0 ) { intrm_sf_mf_1493
= t4708 * 0.001 ; } else if ( intrm_sf_mf_1800 >= 20.0 ) { intrm_sf_mf_1493 =
intrm_sf_mf_1580 * 0.001 ; } else { intrm_sf_mf_1493 = ( ( 1.0 - t4709 ) *
t4708 + intrm_sf_mf_1580 * t4709 ) * 0.001 ; } U_idx_7 = pmf_log10 ( 6.9 / (
t2815 == 0.0 ? 1.0E-16 : t2815 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t2815 == 0.0 ? 1.0E-16 : t2815 ) + 0.00017169489553429715 ) * 3.24 ;
t2815 = 1.0 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) * 0.55 / 0.01 ;
intrm_sf_mf_1580 = intrm_sf_mf_1928 >= 0.0 ? intrm_sf_mf_1928 : -
intrm_sf_mf_1928 ; t1907 [ 0ULL ] = X [ 477ULL ] ;
tlu2_linear_linear_prelookup ( & ks_efOut . mField0 [ 0ULL ] , & ks_efOut .
mField1 [ 0ULL ] , & ks_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = ks_efOut ; tlu2_1d_linear_linear_value ( & ls_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ls_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ms_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
ms_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ns_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
ns_efOut [ 0 ] ; t4708 = ( ( ( 1.0 - t3401 ) - intrm_sf_mf_1706 ) *
t2576_idx_0 + t2567_idx_0 * t3401 ) + t2585_idx_0 * intrm_sf_mf_1706 ; t1907
[ 0ULL ] = X [ 459ULL ] ; tlu2_linear_linear_prelookup ( & os_efOut . mField0
[ 0ULL ] , & os_efOut . mField1 [ 0ULL ] , & os_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [
0ULL ] , & t223 [ 0ULL ] ) ; t158 = os_efOut ; tlu2_1d_linear_linear_value (
& ps_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ps_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
qs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = qs_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
rs_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = rs_efOut [ 0 ] ; t4709 = ( ( ( 1.0 -
intrm_sf_mf_1752 ) - intrm_sf_mf_1753 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_1752 ) + t2585_idx_0 * intrm_sf_mf_1753 ; intrm_sf_mf_1571 =
intrm_sf_mf_1580 > 1000.0 ? intrm_sf_mf_1580 : 1000.0 ; t1907 [ 0ULL ] = X [
481ULL ] ; tlu2_linear_linear_prelookup ( & ss_efOut . mField0 [ 0ULL ] , &
ss_efOut . mField1 [ 0ULL ] , & ss_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t187 = ss_efOut ; tlu2_1d_linear_linear_value ( &
ts_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ts_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
us_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = us_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
vs_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = vs_efOut [ 0 ] ; intrm_sf_mf_1448 = ( ( ( 1.0 -
t3344 ) - t3369 ) * t2576_idx_0 + t2567_idx_0 * t3344 ) + t2585_idx_0 * t3369
; t1907 [ 0ULL ] = X [ 486ULL ] ; tlu2_linear_linear_prelookup ( & ws_efOut .
mField0 [ 0ULL ] , & ws_efOut . mField1 [ 0ULL ] , & ws_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t165 = ws_efOut ;
tlu2_1d_linear_linear_value ( & xs_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ]
, & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ys_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ]
, & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = ys_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & at_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL ]
, & t165 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = at_efOut [ 0 ] ; t3322 =
( ( ( 1.0 - t3344 ) - t3369 ) * t2576_idx_0 + t2567_idx_0 * t3344 ) +
t2585_idx_0 * t3369 ; if ( - X [ 471ULL ] >= 0.0 ) { intrm_sf_mf_1565 = - X [
471ULL ] ; } else { intrm_sf_mf_1565 = X [ 471ULL ] ; } U_idx_7 = t4262 +
t3315 ; if ( U_idx_7 / 2.0 > 0.5 ) { intrm_sf_mf_1574 = ( t4262 + t3315 ) /
2.0 ; } else { intrm_sf_mf_1574 = 0.5 ; } t3331 = intrm_sf_mf_1565 * 0.01 / (
t3396 == 0.0 ? 1.0E-16 : t3396 ) ; intrm_sf_mf_1527 = t3331 >= 1.0 ? t3331 :
1.0 ; t4030 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1527 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1527 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1527 == 0.0 ? 1.0E-16 : intrm_sf_mf_1527 ) +
0.00017169489553429715 ) * 3.24 ; t4716 = X [ 471ULL ] * t4786 * - 35.2 / (
t3400 == 0.0 ? 1.0E-16 : t3400 ) ; intrm_sf_mf_1565 = X [ 471ULL ] *
intrm_sf_mf_1565 * ( 1.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ) * - 0.55 / (
t3403 == 0.0 ? 1.0E-16 : t3403 ) ; intrm_sf_mf_1527 = ( t3331 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1536 = intrm_sf_mf_1527 * intrm_sf_mf_1527 * 3.0 -
intrm_sf_mf_1527 * intrm_sf_mf_1527 * intrm_sf_mf_1527 * 2.0 ; if ( t3331 <=
2000.0 ) { intrm_sf_mf_1527 = t4716 * 9.9999999999999991E-11 ; } else if (
t3331 >= 4000.0 ) { intrm_sf_mf_1527 = intrm_sf_mf_1565 *
9.9999999999999991E-11 ; } else { intrm_sf_mf_1527 = ( ( 1.0 -
intrm_sf_mf_1536 ) * t4716 + intrm_sf_mf_1565 * intrm_sf_mf_1536 ) *
9.9999999999999991E-11 ; } intrm_sf_mf_1565 = X [ 485ULL ] >= 0.0 ? X [
485ULL ] : - X [ 485ULL ] ; t3331 = intrm_sf_mf_1565 * 0.01 / ( t3396 == 0.0
? 1.0E-16 : t3396 ) ; t4030 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1571 == 0.0 ?
1.0E-16 : intrm_sf_mf_1571 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1571 == 0.0 ? 1.0E-16 : intrm_sf_mf_1571 ) +
0.00017169489553429715 ) * 3.24 ; t4716 = 1.0 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) ; intrm_sf_mf_1536 = t3331 >= 1.0 ? t3331 : 1.0 ; t4030 = pmf_log10 (
6.9 / ( intrm_sf_mf_1536 == 0.0 ? 1.0E-16 : intrm_sf_mf_1536 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1536 == 0.0 ?
1.0E-16 : intrm_sf_mf_1536 ) + 0.00017169489553429715 ) * 3.24 ; t3343 = X [
485ULL ] * t4786 * 35.2 / ( t3400 == 0.0 ? 1.0E-16 : t3400 ) ;
intrm_sf_mf_1565 = X [ 485ULL ] * intrm_sf_mf_1565 * ( 1.0 / ( t4030 == 0.0 ?
1.0E-16 : t4030 ) ) * 0.55 / ( t3403 == 0.0 ? 1.0E-16 : t3403 ) ;
intrm_sf_mf_1536 = ( t3331 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1598 =
intrm_sf_mf_1536 * intrm_sf_mf_1536 * 3.0 - intrm_sf_mf_1536 *
intrm_sf_mf_1536 * intrm_sf_mf_1536 * 2.0 ; if ( t3331 <= 2000.0 ) {
intrm_sf_mf_1536 = t3343 * 9.9999999999999991E-11 ; } else if ( t3331 >=
4000.0 ) { intrm_sf_mf_1536 = intrm_sf_mf_1565 * 9.9999999999999991E-11 ; }
else { intrm_sf_mf_1536 = ( ( 1.0 - intrm_sf_mf_1598 ) * t3343 +
intrm_sf_mf_1565 * intrm_sf_mf_1598 ) * 9.9999999999999991E-11 ; } t3858 = (
pmf_pow ( intrm_sf_mf_1574 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t4716
/ 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1571 = ( intrm_sf_mf_1571 - 1000.0 ) * (
t4716 / 8.0 ) * intrm_sf_mf_1574 / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) ;
intrm_sf_mf_1565 = ( intrm_sf_mf_1580 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1574
= intrm_sf_mf_1565 * intrm_sf_mf_1565 * 3.0 - intrm_sf_mf_1565 *
intrm_sf_mf_1565 * intrm_sf_mf_1565 * 2.0 ; t1907 [ 0ULL ] = X [ 503ULL ] ;
tlu2_linear_linear_prelookup ( & bt_efOut . mField0 [ 0ULL ] , & bt_efOut .
mField1 [ 0ULL ] , & bt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = bt_efOut ; tlu2_1d_linear_linear_value ( & ct_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ct_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & dt_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
dt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & et_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
et_efOut [ 0 ] ; intrm_sf_mf_1565 = ( ( ( 1.0 - intrm_sf_mf_1770 ) -
intrm_sf_mf_1772 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1770 ) +
t2585_idx_0 * intrm_sf_mf_1772 ; t1907 [ 0ULL ] = X [ 504ULL ] ;
tlu2_linear_linear_prelookup ( & ft_efOut . mField0 [ 0ULL ] , & ft_efOut .
mField1 [ 0ULL ] , & ft_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = ft_efOut ; tlu2_1d_linear_linear_value ( & gt_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
gt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ht_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
ht_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & it_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
it_efOut [ 0 ] ; t3331 = ( ( ( 1.0 - intrm_sf_mf_1770 ) - intrm_sf_mf_1772 )
* t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1770 ) + t2585_idx_0 *
intrm_sf_mf_1772 ; if ( intrm_sf_mf_1580 <= 2000.0 ) { t4716 = 3.66 ; } else
if ( intrm_sf_mf_1580 >= 4000.0 ) { t4716 = intrm_sf_mf_1571 ; } else { t4716
= ( 1.0 - intrm_sf_mf_1574 ) * 3.66 + intrm_sf_mf_1571 * intrm_sf_mf_1574 ; }
t1907 [ 0ULL ] = X [ 499ULL ] ; tlu2_linear_linear_prelookup ( & jt_efOut .
mField0 [ 0ULL ] , & jt_efOut . mField1 [ 0ULL ] , & jt_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = jt_efOut ;
tlu2_1d_linear_linear_value ( & kt_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = kt_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lt_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = lt_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mt_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = mt_efOut [ 0 ] ;
intrm_sf_mf_1571 = ( ( ( 1.0 - intrm_sf_mf_1770 ) - intrm_sf_mf_1772 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1770 ) + t2585_idx_0 *
intrm_sf_mf_1772 ; t3858 = t3449 - ( - t3449 ) ; intrm_sf_mf_1574 = ( ( X [
63ULL ] - X [ 478ULL ] ) - ( - t3449 ) ) / ( t3858 == 0.0 ? 1.0E-16 : t3858 )
; t3343 = intrm_sf_mf_1574 * intrm_sf_mf_1574 * 3.0 - intrm_sf_mf_1574 *
intrm_sf_mf_1574 * intrm_sf_mf_1574 * 2.0 ; if ( X [ 63ULL ] - X [ 478ULL ]
<= - t3449 ) { intrm_sf_mf_1574 = X [ 478ULL ] ; } else if ( X [ 63ULL ] - X
[ 478ULL ] >= t3449 ) { intrm_sf_mf_1574 = X [ 63ULL ] ; } else {
intrm_sf_mf_1574 = ( 1.0 - t3343 ) * X [ 478ULL ] + X [ 63ULL ] * t3343 ; }
if ( X [ 508ULL ] <= 0.0 ) { t3343 = 0.0 ; } else { t3343 = X [ 508ULL ] >=
1.0 ? 1.0 : X [ 508ULL ] ; } if ( X [ 507ULL ] <= 0.0 ) { intrm_sf_mf_1598 =
0.0 ; } else { intrm_sf_mf_1598 = X [ 507ULL ] >= 1.0 ? 1.0 : X [ 507ULL ] ;
} t4030 = U_idx_7 / 2.0 ; if ( intrm_sf_mf_1580 > t4716 *
0.031415926535897927 / 7.8539816339744827E-5 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) / 30.0 ) { U_idx_1 = ( t4262 + t3315 ) / 2.0 ; intrm_sf_mf_1611 =
t4716 * 0.031415926535897927 / ( intrm_sf_mf_1580 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1580 ) / 7.8539816339744827E-5 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; } else { intrm_sf_mf_1611 = 30.0 ; } intrm_sf_mf_1580 = ( ( ( 1.0
- t3343 ) - intrm_sf_mf_1598 ) * 296.802103844292 + t3343 * 461.523 ) +
intrm_sf_mf_1598 * 259.836612622973 ; t1907 [ 0ULL ] = X [ 506ULL ] ;
tlu2_linear_linear_prelookup ( & nt_efOut . mField0 [ 0ULL ] , & nt_efOut .
mField1 [ 0ULL ] , & nt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = nt_efOut ; tlu2_1d_linear_linear_value ( & ot_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ot_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pt_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
pt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & qt_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
qt_efOut [ 0 ] ; t4716 = ( ( ( 1.0 - t3343 ) - intrm_sf_mf_1598 ) *
t2576_idx_0 + t2567_idx_0 * t3343 ) + t2585_idx_0 * intrm_sf_mf_1598 ; t3343
= ( X [ 173ULL ] - X [ 169ULL ] ) * ( 1.0 - exp ( - intrm_sf_mf_1611 ) ) ;
tlu2_1d_linear_linear_value ( & rt_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField42 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rt_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & st_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField43 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = st_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tt_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL ]
, & t186 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField44 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = tt_efOut [ 0 ] ;
intrm_sf_mf_1598 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 + t2567_idx_0
* t3455 ) + t2585_idx_0 * t3456 ; t2756 = U_idx_2 * t2756 * - 35.2 / ( t3946
== 0.0 ? 1.0E-16 : t3946 ) * 1.0E-5 ; intrm_sf_mf_1928 = intrm_sf_mf_1928 *
7.8539816339744827E-5 / 0.01 * ( U_idx_7 / 2.0 ) * ( ( intrm_sf_mf_521 +
intrm_sf_mf_253 ) / 2.0 ) * t3343 ; tlu2_1d_linear_linear_value ( & ut_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField42 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = ut_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vt_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField43 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = vt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wt_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField44 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = wt_efOut [ 0 ] ; t3343 = ( ( ( 1.0 - t3455 ) - t3456 ) *
t2576_idx_0 + t2567_idx_0 * t3455 ) + t2585_idx_0 * t3456 ; if ( X [ 522ULL ]
<= 0.0 ) { intrm_sf_mf_1611 = 0.0 ; } else { intrm_sf_mf_1611 = X [ 522ULL ]
>= 1.0 ? 1.0 : X [ 522ULL ] ; } if ( X [ 521ULL ] <= 0.0 ) { intrm_sf_mf_1625
= 0.0 ; } else { intrm_sf_mf_1625 = X [ 521ULL ] >= 1.0 ? 1.0 : X [ 521ULL ]
; } t4747 = ( ( ( 1.0 - intrm_sf_mf_1611 ) - intrm_sf_mf_1625 ) *
296.802103844292 + intrm_sf_mf_1611 * 461.523 ) + intrm_sf_mf_1625 *
259.836612622973 ; t1907 [ 0ULL ] = X [ 520ULL ] ;
tlu2_linear_linear_prelookup ( & xt_efOut . mField0 [ 0ULL ] , & xt_efOut .
mField1 [ 0ULL ] , & xt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = xt_efOut ; tlu2_1d_linear_linear_value ( & yt_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
yt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & au_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
au_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bu_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
bu_efOut [ 0 ] ; t4796 = ( ( ( 1.0 - intrm_sf_mf_1611 ) - intrm_sf_mf_1625 )
* t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1611 ) + t2585_idx_0 *
intrm_sf_mf_1625 ; tlu2_1d_linear_linear_value ( & cu_efOut [ 0ULL ] , & t183
. mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField42 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
cu_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & du_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField43 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
du_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & eu_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField44 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
eu_efOut [ 0 ] ; intrm_sf_mf_1611 = ( ( ( 1.0 - t3455 ) - t3456 ) *
t2576_idx_0 + t2567_idx_0 * t3455 ) + t2585_idx_0 * t3456 ;
tlu2_1d_linear_linear_value ( & fu_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField42 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = fu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & gu_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField43 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = gu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hu_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField44 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = hu_efOut [ 0 ] ;
intrm_sf_mf_1625 = ( ( ( 1.0 - t3455 ) - t3456 ) * t2576_idx_0 + t2567_idx_0
* t3455 ) + t2585_idx_0 * t3456 ; tlu2_1d_linear_nearest_value ( & iu_efOut [
0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = iu_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ju_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ju_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ku_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ku_efOut [ 0 ] ; t3401 = ( ( ( 1.0 - t4825 ) -
intrm_sf_mf_1673 ) * t2576_idx_0 + t2567_idx_0 * t4825 ) + t2585_idx_0 *
intrm_sf_mf_1673 ; tlu2_1d_linear_nearest_value ( & lu_efOut [ 0ULL ] , &
t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
lu_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mu_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
mu_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & nu_efOut [ 0ULL ] , & t154
. mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
nu_efOut [ 0 ] ; t3946 = ( ( ( ( ( 1.0 - t4825 ) - intrm_sf_mf_1673 ) *
t2576_idx_0 + t2567_idx_0 * t4825 ) + t2585_idx_0 * intrm_sf_mf_1673 ) +
zc_int352 ) / 2.0 * 7.8539816339744827E-5 ; t2845 = - t2845 * 0.01 / ( t3946
== 0.0 ? 1.0E-16 : t3946 ) ; if ( X [ 548ULL ] <= 0.0 ) { intrm_sf_mf_1673 =
0.0 ; } else { intrm_sf_mf_1673 = X [ 548ULL ] >= 1.0 ? 1.0 : X [ 548ULL ] ;
} if ( X [ 547ULL ] <= 0.0 ) { t4825 = 0.0 ; } else { t4825 = X [ 547ULL ] >=
1.0 ? 1.0 : X [ 547ULL ] ; } t3402 = ( ( ( 1.0 - intrm_sf_mf_1673 ) - t4825 )
* 296.802103844292 + intrm_sf_mf_1673 * 461.523 ) + t4825 * 4124.48151675695
; t1907 [ 0ULL ] = X [ 546ULL ] ; tlu2_linear_linear_prelookup ( & ou_efOut .
mField0 [ 0ULL ] , & ou_efOut . mField1 [ 0ULL ] , & ou_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t27 = ou_efOut ;
tlu2_1d_linear_linear_value ( & pu_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = pu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qu_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = qu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ru_efOut [ 0ULL ] , & t27 . mField0 [ 0ULL ]
, & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ru_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 = ( ( ( 1.0 -
intrm_sf_mf_1673 ) - t4825 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_1673 )
+ t2585_idx_0 * t4825 ; intrm_sf_mf_1673 = t2845 >= 0.0 ? t2845 : - t2845 ;
t1907 [ 0ULL ] = X [ 272ULL ] ; tlu2_linear_linear_prelookup ( & su_efOut .
mField0 [ 0ULL ] , & su_efOut . mField1 [ 0ULL ] , & su_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = su_efOut ;
tlu2_1d_linear_linear_value ( & tu_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = tu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & uu_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = uu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & vu_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = vu_efOut [ 0 ] ; t4825 =
( ( ( 1.0 - intrm_sf_mf_1729 ) - piece121 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_1729 ) + t2585_idx_0 * piece121 ; intrm_sf_mf_1729 =
intrm_sf_mf_1673 > 1000.0 ? intrm_sf_mf_1673 : 1000.0 ; t1907 [ 0ULL ] = X [
169ULL ] ; tlu2_linear_linear_prelookup ( & wu_efOut . mField0 [ 0ULL ] , &
wu_efOut . mField1 [ 0ULL ] , & wu_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t183 = wu_efOut ; tlu2_1d_linear_linear_value ( &
xu_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = xu_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
yu_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = yu_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
av_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = av_efOut [ 0 ] ; piece121 = ( ( ( 1.0 -
intrm_sf_mf_172 ) - t2870 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_172 ) +
t2585_idx_0 * t2870 ; t2815 = - ( U_idx_2 * t4258 * t2815 ) / ( t3910 == 0.0
? 1.0E-16 : t3910 ) * 1.0E-5 ; U_idx_7 = intrm_sf_mf_1768 + t3315 ; if (
U_idx_7 / 2.0 > 0.5 ) { intrm_sf_mf_172 = ( intrm_sf_mf_1768 + t3315 ) / 2.0
; } else { intrm_sf_mf_172 = 0.5 ; } tlu2_1d_linear_linear_value ( & bv_efOut
[ 0ULL ] , & t50 . mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField42 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = bv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & cv_efOut
[ 0ULL ] , & t50 . mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField43 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = cv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & dv_efOut
[ 0ULL ] , & t50 . mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField45 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = dv_efOut [ 0 ] ; t2870 = ( ( ( 1.0 - t3465 ) - U_idx_3 )
* t2576_idx_0 + t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ;
tlu2_1d_linear_linear_value ( & ev_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL ]
, & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField42 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ev_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & fv_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL ]
, & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField43 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = fv_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & gv_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL ]
, & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField45 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = gv_efOut [ 0 ] ;
intrm_sf_mf_1706 = ( ( ( ( ( ( 1.0 - t3465 ) - U_idx_3 ) * t2576_idx_0 +
t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ) - pmf_log ( X [ 37ULL ] *
100000.0 ) * intrm_sf_mf_1699 ) - t2870 ) + pmf_log ( X [ 170ULL ] * 100000.0
) * intrm_sf_mf_1699 ; t4030 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1729 == 0.0 ?
1.0E-16 : intrm_sf_mf_1729 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1729 == 0.0 ? 1.0E-16 : intrm_sf_mf_1729 ) +
0.00017169489553429715 ) * 3.24 ; t2870 = 1.0 / ( t4030 == 0.0 ? 1.0E-16 :
t4030 ) ; t3946 = ( pmf_pow ( intrm_sf_mf_172 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t2870 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_172 = (
intrm_sf_mf_1729 - 1000.0 ) * ( t2870 / 8.0 ) * intrm_sf_mf_172 / ( t3946 ==
0.0 ? 1.0E-16 : t3946 ) ; tlu2_1d_linear_linear_value ( & hv_efOut [ 0ULL ] ,
& t104 . mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField42 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= hv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & iv_efOut [ 0ULL ] , & t104
. mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField43 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
iv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & jv_efOut [ 0ULL ] , & t104 .
mField0 [ 0ULL ] , & t104 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField45 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
jv_efOut [ 0 ] ; t2870 = ( ( ( 1.0 - t3465 ) - U_idx_3 ) * t2576_idx_0 +
t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ; tlu2_1d_linear_linear_value (
& kv_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField42 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = kv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
lv_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField43 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = lv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & mv_efOut
[ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField45 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = mv_efOut [ 0 ] ; intrm_sf_mf_1800 = ( intrm_sf_mf_1673 -
2000.0 ) / 2000.0 ; intrm_sf_mf_1730 = ( ( ( ( ( ( 1.0 - t3465 ) - U_idx_3 )
* t2576_idx_0 + t2567_idx_0 * t3465 ) + t2585_idx_0 * U_idx_3 ) - pmf_log ( X
[ 170ULL ] * 100000.0 ) * intrm_sf_mf_1699 ) - t2870 ) + pmf_log ( X [ 37ULL
] * 100000.0 ) * intrm_sf_mf_1699 ; t2870 = intrm_sf_mf_1800 *
intrm_sf_mf_1800 * 3.0 - intrm_sf_mf_1800 * intrm_sf_mf_1800 *
intrm_sf_mf_1800 * 2.0 ; tlu2_2d_linear_linear_value ( & nv_efOut [ 0ULL ] ,
& t173 . mField0 [ 0ULL ] , & t173 . mField2 [ 0ULL ] , & t181 . mField0 [
0ULL ] , & t181 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t222 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0
= nv_efOut [ 0 ] ; intrm_sf_mf_1729 = t2576_idx_0 ; if ( intrm_sf_mf_1673 <=
2000.0 ) { intrm_sf_mf_1800 = 3.66 ; } else if ( intrm_sf_mf_1673 >= 4000.0 )
{ intrm_sf_mf_1800 = intrm_sf_mf_172 ; } else { intrm_sf_mf_1800 = ( 1.0 -
t2870 ) * 3.66 + intrm_sf_mf_172 * t2870 ; } intrm_sf_mf_172 = pmf_log ( X [
7ULL ] ) ; t2870 = pmf_log ( X [ 143ULL ] ) ; intrm_sf_mf_1752 = pmf_log ( X
[ 141ULL ] ) ; intrm_sf_mf_1753 = pmf_log ( X [ 14ULL ] / 1.0E-5 ) ;
intrm_sf_mf_1756 = pmf_log ( X [ 155ULL ] ) ; t3435 = pmf_log ( X [ 156ULL ]
) ; t3436 = pmf_log ( X [ 157ULL ] ) ; t4030 = U_idx_7 / 2.0 ; if (
intrm_sf_mf_1673 > intrm_sf_mf_1800 * 0.031415926535897927 /
7.8539816339744827E-5 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) / 30.0 ) { U_idx_1
= ( intrm_sf_mf_1768 + t3315 ) / 2.0 ; intrm_sf_mf_1770 = intrm_sf_mf_1800 *
0.031415926535897927 / ( intrm_sf_mf_1673 == 0.0 ? 1.0E-16 : intrm_sf_mf_1673
) / 7.8539816339744827E-5 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
intrm_sf_mf_1770 = 30.0 ; } intrm_sf_mf_1768 = pmf_sqrt ( X [ 143ULL ] *
402.5245441795231 ) ; t3315 = pmf_sqrt ( X [ 141ULL ] * 402.5245441795231 ) ;
intrm_sf_mf_1800 = X [ 156ULL ] * intrm_sf_mf_1768 * 1.0E-6 ;
intrm_sf_mf_1768 = X [ 157ULL ] * t3315 * 1.0E-6 ; t3315 = pmf_sqrt ( X [
148ULL ] * X [ 148ULL ] + intrm_sf_mf_1800 * intrm_sf_mf_1800 ) ;
intrm_sf_mf_1800 = ( X [ 173ULL ] - X [ 188ULL ] ) * ( 1.0 - exp ( -
intrm_sf_mf_1770 ) ) ; intrm_sf_mf_1770 = pmf_sqrt ( intrm_sf_mf_1768 *
intrm_sf_mf_1768 ) ; intrm_sf_mf_253 = t2845 * 7.8539816339744827E-5 / 0.01 *
( U_idx_7 / 2.0 ) * ( ( intrm_sf_mf_253 + t3401 ) / 2.0 ) * intrm_sf_mf_1800
; intrm_sf_mf_1800 = ( t2846 - - 20.0 ) / 40.0 ; U_idx_10 = ( t3304 - 2000.0
) / 2000.0 ; t2791 = intrm_sf_mf_1800 * intrm_sf_mf_1800 * 3.0 -
intrm_sf_mf_1800 * intrm_sf_mf_1800 * intrm_sf_mf_1800 * 2.0 ; if ( - U_idx_2
>= 0.0 ) { intrm_sf_mf_1800 = 0.0 ; } else { t3946 = X [ 153ULL ] *
1.2337005501361696E-8 ; intrm_sf_mf_1800 = U_idx_2 * U_idx_2 / ( t3946 == 0.0
? 1.0E-16 : t3946 ) * 1.0E-5 ; } if ( U_idx_2 >= 0.0 ) { intrm_sf_mf_1801 =
0.0 ; } else { t3946 = X [ 154ULL ] * 1.2337005501361696E-8 ;
intrm_sf_mf_1801 = U_idx_2 * U_idx_2 / ( t3946 == 0.0 ? 1.0E-16 : t3946 ) *
1.0E-5 ; } if ( U_idx_13 >= 1.0 ) { t3490 = 1.0 ; } else { t3490 = U_idx_13
<= 0.0 ? 0.0 : U_idx_13 ; } if ( t2846 <= - 20.0 ) { intrm_sf_mf_1092 =
intrm_sf_mf_253 * 0.001 ; } else if ( t2846 >= 20.0 ) { intrm_sf_mf_1092 =
intrm_sf_mf_1928 * 0.001 ; } else { intrm_sf_mf_1092 = ( ( 1.0 - t2791 ) *
intrm_sf_mf_253 + intrm_sf_mf_1928 * t2791 ) * 0.001 ; } intrm_sf_mf_253 =
U_idx_10 * U_idx_10 * 3.0 - U_idx_10 * U_idx_10 * U_idx_10 * 2.0 ;
tlu2_2d_linear_linear_value ( & ov_efOut [ 0ULL ] , & t153 . mField0 [ 0ULL ]
, & t153 . mField2 [ 0ULL ] , & t185 . mField0 [ 0ULL ] , & t185 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField32 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ov_efOut [ 0 ] ; t2846 =
t2576_idx_0 ; intrm_sf_mf_1928 = X [ 54ULL ] / ( t4747 == 0.0 ? 1.0E-16 :
t4747 ) / ( X [ 520ULL ] == 0.0 ? 1.0E-16 : X [ 520ULL ] ) ; t1907 [ 0ULL ] =
X [ 76ULL ] ; t1531 [ 0 ] = 23ULL ; tlu2_linear_nearest_prelookup ( &
pv_efOut . mField0 [ 0ULL ] , & pv_efOut . mField1 [ 0ULL ] , & pv_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField47 , & t1907 [
0ULL ] , & t1531 [ 0ULL ] , & t223 [ 0ULL ] ) ; t26 = pv_efOut ; t1907 [ 0ULL
] = X [ 574ULL ] ; t1919 [ 0 ] = 29ULL ; tlu2_linear_nearest_prelookup ( &
qv_efOut . mField0 [ 0ULL ] , & qv_efOut . mField1 [ 0ULL ] , & qv_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField48 , & t1907 [
0ULL ] , & t1919 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = qv_efOut ;
tlu2_2d_linear_nearest_value ( & rv_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField46 , & t1531 [ 0ULL ] , &
t1919 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rv_efOut [ 0 ] ; U_idx_10
= t2576_idx_0 ; tlu2_2d_linear_nearest_value ( & sv_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , &
t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField49 , &
t1531 [ 0ULL ] , & t1919 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
sv_efOut [ 0 ] ; t3495 = ( t2576_idx_0 - U_idx_10 ) * ( ( X [ 13ULL ] -
298.15 ) / 100.0 ) + U_idx_10 ; t1907 [ 0ULL ] = X [ 188ULL ] ;
tlu2_linear_linear_prelookup ( & tv_efOut . mField0 [ 0ULL ] , & tv_efOut .
mField1 [ 0ULL ] , & tv_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = tv_efOut ; tlu2_1d_linear_linear_value ( & uv_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
uv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vv_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
vv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wv_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
wv_efOut [ 0 ] ; t2791 = ( ( ( 1.0 - intrm_sf_mf_20 ) - intrm_sf_mf_256 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_20 ) + t2585_idx_0 * intrm_sf_mf_256
; if ( t3304 <= 2000.0 ) { intrm_sf_mf_20 = t2756 ; } else if ( t3304 >=
4000.0 ) { intrm_sf_mf_20 = t2815 ; } else { intrm_sf_mf_20 = ( 1.0 -
intrm_sf_mf_253 ) * t2756 + t2815 * intrm_sf_mf_253 ; } t1907 [ 0ULL ] = X [
193ULL ] ; tlu2_linear_linear_prelookup ( & xv_efOut . mField0 [ 0ULL ] , &
xv_efOut . mField1 [ 0ULL ] , & xv_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t0 = xv_efOut ; tlu2_1d_linear_linear_value ( &
yv_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = yv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & aw_efOut
[ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = aw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bw_efOut
[ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = bw_efOut [ 0 ] ; t2756 = ( ( ( 1.0 - t2802 ) - t2803 ) *
t2576_idx_0 + t2567_idx_0 * t2802 ) + t2585_idx_0 * t2803 ; t1907 [ 0ULL ] =
X [ 197ULL ] ; tlu2_linear_linear_prelookup ( & cw_efOut . mField0 [ 0ULL ] ,
& cw_efOut . mField1 [ 0ULL ] , & cw_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = cw_efOut ; tlu2_1d_linear_linear_value ( &
dw_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = dw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ew_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ew_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
fw_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = fw_efOut [ 0 ] ; t2815 = ( ( ( 1.0 - t2802 ) - t2803
) * t2576_idx_0 + t2567_idx_0 * t2802 ) + t2585_idx_0 * t2803 ;
intrm_sf_mf_253 = t2800 >= 0.0 ? t2800 : - t2800 ; intrm_sf_mf_256 =
intrm_sf_mf_253 * 0.01 / ( t2841 == 0.0 ? 1.0E-16 : t2841 ) ; t3304 =
intrm_sf_mf_256 >= 1.0 ? intrm_sf_mf_256 : 1.0 ; t4030 = pmf_log10 ( 6.9 / (
t3304 == 0.0 ? 1.0E-16 : t3304 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t3304 == 0.0 ? 1.0E-16 : t3304 ) + 0.00017169489553429715 ) * 3.24 ;
t2845 = t2800 * zc_int352 * 35.2 / ( t2839 == 0.0 ? 1.0E-16 : t2839 ) ;
intrm_sf_mf_253 = t2800 * intrm_sf_mf_253 * ( 1.0 / ( t4030 == 0.0 ? 1.0E-16
: t4030 ) ) * 0.55 / ( t2844 == 0.0 ? 1.0E-16 : t2844 ) ; t3304 = (
intrm_sf_mf_256 - 2000.0 ) / 2000.0 ; U_idx_3 = t3304 * t3304 * 3.0 - t3304 *
t3304 * t3304 * 2.0 ; if ( intrm_sf_mf_256 <= 2000.0 ) { t3304 = t2845 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_256 >= 4000.0 ) { t3304 =
intrm_sf_mf_253 * 9.9999999999999991E-11 ; } else { t3304 = ( ( 1.0 - U_idx_3
) * t2845 + intrm_sf_mf_253 * U_idx_3 ) * 9.9999999999999991E-11 ; } if ( - X
[ 180ULL ] >= 0.0 ) { intrm_sf_mf_253 = - X [ 180ULL ] ; } else {
intrm_sf_mf_253 = X [ 180ULL ] ; } intrm_sf_mf_256 = intrm_sf_mf_253 * 0.01 /
( t2841 == 0.0 ? 1.0E-16 : t2841 ) ; t2845 = intrm_sf_mf_256 >= 1.0 ?
intrm_sf_mf_256 : 1.0 ; t4030 = pmf_log10 ( 6.9 / ( t2845 == 0.0 ? 1.0E-16 :
t2845 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2845 == 0.0 ?
1.0E-16 : t2845 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_3 = X [ 180ULL ]
* zc_int352 * - 35.2 / ( t2839 == 0.0 ? 1.0E-16 : t2839 ) ; intrm_sf_mf_253 =
X [ 180ULL ] * intrm_sf_mf_253 * ( 1.0 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) )
* - 0.55 / ( t2844 == 0.0 ? 1.0E-16 : t2844 ) ; t2845 = ( intrm_sf_mf_256 -
2000.0 ) / 2000.0 ; t4302 = t2845 * t2845 * 3.0 - t2845 * t2845 * t2845 * 2.0
; if ( intrm_sf_mf_256 <= 2000.0 ) { t2845 = U_idx_3 * 9.9999999999999991E-11
; } else if ( intrm_sf_mf_256 >= 4000.0 ) { t2845 = intrm_sf_mf_253 *
9.9999999999999991E-11 ; } else { t2845 = ( ( 1.0 - t4302 ) * U_idx_3 +
intrm_sf_mf_253 * t4302 ) * 9.9999999999999991E-11 ; } if ( X [ 176ULL ] <=
0.0 ) { intrm_sf_mf_253 = 0.0 ; } else { intrm_sf_mf_253 = X [ 176ULL ] >=
1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [ 175ULL ] <= 0.0 ) { intrm_sf_mf_256 =
0.0 ; } else { intrm_sf_mf_256 = X [ 175ULL ] >= 1.0 ? 1.0 : X [ 175ULL ] ; }
U_idx_3 = ( ( ( 1.0 - intrm_sf_mf_253 ) - intrm_sf_mf_256 ) *
296.802103844292 + intrm_sf_mf_253 * 461.523 ) + intrm_sf_mf_256 *
4124.48151675695 ; t4030 = intrm_sf_mf_495 * 7.8539816339744827E-5 ; t4302 =
t4029 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ; t1907 [ 0ULL ] = X [ 174ULL ] ;
tlu2_linear_linear_prelookup ( & gw_efOut . mField0 [ 0ULL ] , & gw_efOut .
mField1 [ 0ULL ] , & gw_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t183 = gw_efOut ; tlu2_1d_linear_linear_value ( & hw_efOut [ 0ULL ] , &
t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
hw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & iw_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
iw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & jw_efOut [ 0ULL ] , & t183 .
mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
jw_efOut [ 0 ] ; t3285 = ( ( ( 1.0 - intrm_sf_mf_253 ) - intrm_sf_mf_256 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_253 ) + t2585_idx_0 * intrm_sf_mf_256
; t1907 [ 0ULL ] = X [ 217ULL ] ; tlu2_linear_linear_prelookup ( & kw_efOut .
mField0 [ 0ULL ] , & kw_efOut . mField1 [ 0ULL ] , & kw_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = kw_efOut ;
tlu2_1d_linear_linear_value ( & lw_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = lw_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mw_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = mw_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & nw_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ]
, & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = nw_efOut [ 0 ] ;
intrm_sf_mf_253 = ( ( ( 1.0 - zc_int183 ) - intrm_sf_mf_262 ) * t2576_idx_0 +
t2567_idx_0 * zc_int183 ) + t2585_idx_0 * intrm_sf_mf_262 ; t1907 [ 0ULL ] =
X [ 218ULL ] ; tlu2_linear_linear_prelookup ( & ow_efOut . mField0 [ 0ULL ] ,
& ow_efOut . mField1 [ 0ULL ] , & ow_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t183 = ow_efOut ; tlu2_1d_linear_linear_value ( &
pw_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = pw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
qw_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = qw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
rw_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = rw_efOut [ 0 ] ; intrm_sf_mf_256 = ( ( ( 1.0 -
zc_int183 ) - intrm_sf_mf_262 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) +
t2585_idx_0 * intrm_sf_mf_262 ; t1907 [ 0ULL ] = X [ 213ULL ] ;
tlu2_linear_linear_prelookup ( & sw_efOut . mField0 [ 0ULL ] , & sw_efOut .
mField1 [ 0ULL ] , & sw_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t26 = sw_efOut ; tlu2_1d_linear_linear_value ( & tw_efOut [ 0ULL ] , & t26
. mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
tw_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & uw_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = uw_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vw_efOut [ 0ULL ] , & t26 . mField0 [
0ULL ] , & t26 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = vw_efOut [ 0
] ; t3306 = ( ( ( 1.0 - zc_int183 ) - intrm_sf_mf_262 ) * t2576_idx_0 +
t2567_idx_0 * zc_int183 ) + t2585_idx_0 * intrm_sf_mf_262 ; zc_int183 = t4302
>= 2000.0 ? t4302 : 1.0 ; t3910 = zc_int51 - ( - zc_int51 ) ; intrm_sf_mf_262
= ( ( X [ 189ULL ] - 1.01325 ) - ( - zc_int51 ) ) / ( t3910 == 0.0 ? 1.0E-16
: t3910 ) ; t4374 = intrm_sf_mf_262 * intrm_sf_mf_262 * 3.0 - intrm_sf_mf_262
* intrm_sf_mf_262 * intrm_sf_mf_262 * 2.0 ; if ( X [ 189ULL ] - 1.01325 <= -
zc_int51 ) { intrm_sf_mf_262 = 1.01325 ; } else if ( X [ 189ULL ] - 1.01325
>= zc_int51 ) { intrm_sf_mf_262 = X [ 189ULL ] ; } else { intrm_sf_mf_262 = (
1.0 - t4374 ) * 1.01325 + X [ 189ULL ] * t4374 ; } t3946 = pmf_log10 ( 6.9 /
( zc_int183 == 0.0 ? 1.0E-16 : zc_int183 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int183 == 0.0 ? 1.0E-16 : zc_int183 ) +
0.00017169489553429715 ) * 3.24 ; t3910 = t2758 * 1.5707963267948965E-8 ;
zc_int51 = U_idx_2 * intrm_sf_mf_495 * 35.2 / ( t3910 == 0.0 ? 1.0E-16 :
t3910 ) * 1.0E-5 ; t3858 = t2758 * 1.2337005501361696E-8 ; t2758 = U_idx_2 *
( 1.0 / ( t3946 == 0.0 ? 1.0E-16 : t3946 ) * 0.55 / 0.01 ) * t4266 / ( t3858
== 0.0 ? 1.0E-16 : t3858 ) * 1.0E-5 ; zc_int183 = ( t4302 - 2000.0 ) / 2000.0
; if ( t2957 <= 0.0 ) { t4374 = 0.0 ; } else { t4374 = t2957 >= 1.0 ? 1.0 :
t2957 ; } if ( intrm_sf_mf_668 <= 0.0 ) { t2957 = 0.0 ; } else { t2957 =
intrm_sf_mf_668 >= 1.0 ? 1.0 : intrm_sf_mf_668 ; } t1907 [ 0ULL ] = X [
234ULL ] ; tlu2_linear_nearest_prelookup ( & ww_efOut . mField0 [ 0ULL ] , &
ww_efOut . mField1 [ 0ULL ] , & ww_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t154 = ww_efOut ; tlu2_1d_linear_nearest_value ( &
xw_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = xw_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
yw_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = yw_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ax_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ax_efOut [ 0 ] ; intrm_sf_mf_668 = ( ( ( 1.0 - t4374
) - t2957 ) * t2576_idx_0 + t2567_idx_0 * t4374 ) + t2585_idx_0 * t2957 ;
t3333 = zc_int183 * zc_int183 * 3.0 - zc_int183 * zc_int183 * zc_int183 * 2.0
; if ( t2958 <= 0.0 ) { zc_int183 = 0.0 ; } else { zc_int183 = t2958 >= 1.0 ?
1.0 : t2958 ; } if ( intrm_sf_mf_312 <= 0.0 ) { t2958 = 0.0 ; } else { t2958
= intrm_sf_mf_312 >= 1.0 ? 1.0 : intrm_sf_mf_312 ; } t1907 [ 0ULL ] = X [
220ULL ] ; tlu2_linear_nearest_prelookup ( & bx_efOut . mField0 [ 0ULL ] , &
bx_efOut . mField1 [ 0ULL ] , & bx_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t187 = bx_efOut ; tlu2_1d_linear_nearest_value ( &
cx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = cx_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
dx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = dx_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ex_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ex_efOut [ 0 ] ; intrm_sf_mf_312 = ( ( ( 1.0 -
zc_int183 ) - t2958 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) + t2585_idx_0
* t2958 ; tlu2_1d_linear_nearest_value ( & fx_efOut [ 0ULL ] , & t143 .
mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
fx_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gx_efOut [ 0ULL ] , & t143
. mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
gx_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hx_efOut [ 0ULL ] , & t143
. mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
hx_efOut [ 0 ] ; t4307 = ( ( ( 1.0 - intrm_sf_mf_784 ) - intrm_sf_mf_32 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_784 ) + t2585_idx_0 * intrm_sf_mf_32
; tlu2_1d_linear_nearest_value ( & ix_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ix_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & jx_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = jx_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & kx_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = kx_efOut [ 0
] ; intrm_sf_mf_784 = ( ( ( 1.0 - t4374 ) - t2957 ) * t2576_idx_0 +
t2567_idx_0 * t4374 ) + t2585_idx_0 * t2957 ; if ( t4302 <= 2000.0 ) {
intrm_sf_mf_32 = zc_int51 ; } else if ( t4302 >= 4000.0 ) { intrm_sf_mf_32 =
t2758 ; } else { intrm_sf_mf_32 = ( 1.0 - t3333 ) * zc_int51 + t2758 * t3333
; } tlu2_1d_linear_nearest_value ( & lx_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = lx_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & mx_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = mx_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & nx_efOut [ 0ULL ] , & t154 . mField0 [
0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = nx_efOut [ 0
] ; t2758 = ( ( ( 1.0 - t4374 ) - t2957 ) * t2576_idx_0 + t2567_idx_0 * t4374
) + t2585_idx_0 * t2957 ; U_idx_1 = ( t2897 + t2758 ) / 2.0 * 0.32 ; zc_int51
= t4446 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t2957 = zc_int51 >= 0.0 ?
zc_int51 : - zc_int51 ; t4302 = t2957 > 1000.0 ? t2957 : 1000.0 ; t3946 =
intrm_sf_mf_668 + t4307 ; if ( t3946 / 2.0 > 0.5 ) { t4374 = (
intrm_sf_mf_668 + t4307 ) / 2.0 ; } else { t4374 = 0.5 ; } U_idx_1 =
pmf_log10 ( 6.9 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) +
0.00017169489553429715 ) * 3.24 ; t3333 = 1.0 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; U_idx_1 = ( pmf_pow ( t4374 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t3333 / 8.0 ) * 12.7 + 1.0 ; t4302 = ( t4302 - 1000.0 ) * ( t3333
/ 8.0 ) * t4374 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t4374 = ( t2957 -
2000.0 ) / 2000.0 ; t3333 = t4374 * t4374 * 3.0 - t4374 * t4374 * t4374 * 2.0
; if ( t2957 <= 2000.0 ) { t4374 = 3.66 ; } else if ( t2957 >= 4000.0 ) {
t4374 = t4302 ; } else { t4374 = ( 1.0 - t3333 ) * 3.66 + t4302 * t3333 ; }
U_idx_1 = t3946 / 2.0 ; if ( t2957 > t4374 * 10.709248339636167 / 0.32 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) / 30.0 ) { U_idx_1 = ( intrm_sf_mf_668 +
t4307 ) / 2.0 ; t4302 = t4374 * 10.709248339636167 / ( t2957 == 0.0 ? 1.0E-16
: t2957 ) / 0.32 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else { t4302 =
30.0 ; } t2957 = ( X [ 31ULL ] - X [ 234ULL ] ) * ( 1.0 - exp ( - t4302 ) ) ;
zc_int51 = zc_int51 * 0.32 / 0.01 * ( t3946 / 2.0 ) * ( ( intrm_sf_mf_784 +
intrm_sf_mf_355 ) / 2.0 ) * t2957 ; tlu2_1d_linear_nearest_value ( & ox_efOut
[ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = ox_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
px_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = px_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
qx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL ] , & t187 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = qx_efOut [ 0 ] ; t2957 = ( ( ( 1.0 - zc_int183 ) -
t2958 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) + t2585_idx_0 * t2958 ;
t4302 = t3657 / ( t4030 == 0.0 ? 1.0E-16 : t4030 ) ;
tlu2_1d_linear_nearest_value ( & rx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rx_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = sx_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tx_efOut [ 0ULL ] , & t187 . mField0 [ 0ULL
] , & t187 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = tx_efOut [ 0 ] ; t4374
= ( ( ( 1.0 - zc_int183 ) - t2958 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 )
+ t2585_idx_0 * t2958 ; U_idx_1 = ( t2897 + t4374 ) / 2.0 * 0.32 ; zc_int183
= - intrm_sf_mf_376 * 0.01 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ;
intrm_sf_mf_376 = zc_int183 >= 0.0 ? zc_int183 : - zc_int183 ; t2958 =
intrm_sf_mf_376 > 1000.0 ? intrm_sf_mf_376 : 1000.0 ; t4030 = intrm_sf_mf_312
+ t4307 ; if ( t4030 / 2.0 > 0.5 ) { t3333 = ( intrm_sf_mf_312 + t4307 ) /
2.0 ; } else { t3333 = 0.5 ; } t3946 = pmf_log10 ( 6.9 / ( t2958 == 0.0 ?
1.0E-16 : t2958 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2958 ==
0.0 ? 1.0E-16 : t2958 ) + 0.00017169489553429715 ) * 3.24 ; t4446 = 1.0 / (
t3946 == 0.0 ? 1.0E-16 : t3946 ) ; U_idx_1 = ( pmf_pow ( t3333 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t4446 / 8.0 ) * 12.7 + 1.0 ; t2958
= ( t2958 - 1000.0 ) * ( t4446 / 8.0 ) * t3333 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; t3333 = ( intrm_sf_mf_376 - 2000.0 ) / 2000.0 ; t4446 = t4302 >=
2000.0 ? t4302 : 1.0 ; t4001 = t3333 * t3333 * 3.0 - t3333 * t3333 * t3333 *
2.0 ; if ( intrm_sf_mf_376 <= 2000.0 ) { t3333 = 3.66 ; } else if (
intrm_sf_mf_376 >= 4000.0 ) { t3333 = t2958 ; } else { t3333 = ( 1.0 - t4001
) * 3.66 + t2958 * t4001 ; } t4001 = t4030 / 2.0 ; if ( intrm_sf_mf_376 >
t3333 * 10.709248339636167 / 0.32 / ( t4001 == 0.0 ? 1.0E-16 : t4001 ) / 30.0
) { U_idx_1 = ( intrm_sf_mf_312 + t4307 ) / 2.0 ; t2958 = t3333 *
10.709248339636167 / ( intrm_sf_mf_376 == 0.0 ? 1.0E-16 : intrm_sf_mf_376 ) /
0.32 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else { t2958 = 30.0 ; }
intrm_sf_mf_376 = ( X [ 31ULL ] - X [ 220ULL ] ) * ( 1.0 - exp ( - t2958 ) )
; zc_int183 = zc_int183 * 0.32 / 0.01 * ( t4030 / 2.0 ) * ( ( intrm_sf_mf_355
+ t2957 ) / 2.0 ) * intrm_sf_mf_376 ; intrm_sf_mf_355 = ( t2935 - - 20.0 ) /
40.0 ; intrm_sf_mf_376 = intrm_sf_mf_355 * intrm_sf_mf_355 * 3.0 -
intrm_sf_mf_355 * intrm_sf_mf_355 * intrm_sf_mf_355 * 2.0 ; if ( t2935 <= -
20.0 ) { intrm_sf_mf_355 = zc_int183 * 0.001 ; } else if ( t2935 >= 20.0 ) {
intrm_sf_mf_355 = zc_int51 * 0.001 ; } else { intrm_sf_mf_355 = ( ( 1.0 -
intrm_sf_mf_376 ) * zc_int183 + zc_int51 * intrm_sf_mf_376 ) * 0.001 ; }
t4001 = pmf_log10 ( 6.9 / ( t4446 == 0.0 ? 1.0E-16 : t4446 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t4446 == 0.0 ? 1.0E-16 : t4446
) + 0.00017169489553429715 ) * 3.24 ; t1907 [ 0ULL ] = X [ 234ULL ] ;
tlu2_linear_linear_prelookup ( & ux_efOut . mField0 [ 0ULL ] , & ux_efOut .
mField1 [ 0ULL ] , & ux_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = ux_efOut ; tlu2_1d_linear_linear_value ( & vx_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
vx_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wx_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
wx_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xx_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
xx_efOut [ 0 ] ; zc_int51 = ( ( ( 1.0 - zc_int9 ) - intrm_sf_mf_41 ) *
t2576_idx_0 + t2567_idx_0 * zc_int9 ) + t2585_idx_0 * intrm_sf_mf_41 ;
intrm_sf_mf_495 = U_idx_2 * intrm_sf_mf_495 * - 35.2 / ( t3910 == 0.0 ?
1.0E-16 : t3910 ) * 1.0E-5 ; t1907 [ 0ULL ] = X [ 220ULL ] ;
tlu2_linear_linear_prelookup ( & yx_efOut . mField0 [ 0ULL ] , & yx_efOut .
mField1 [ 0ULL ] , & yx_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t158 = yx_efOut ; tlu2_1d_linear_linear_value ( & ay_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ay_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & by_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
by_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & cy_efOut [ 0ULL ] , & t158 .
mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
cy_efOut [ 0 ] ; zc_int9 = ( ( ( 1.0 - intrm_sf_mf_514 ) - intrm_sf_mf_391 )
* t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_514 ) + t2585_idx_0 *
intrm_sf_mf_391 ; t1907 [ 0ULL ] = X [ 239ULL ] ;
tlu2_linear_linear_prelookup ( & dy_efOut . mField0 [ 0ULL ] , & dy_efOut .
mField1 [ 0ULL ] , & dy_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t143 = dy_efOut ; tlu2_1d_linear_linear_value ( & ey_efOut [ 0ULL ] , &
t143 . mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ey_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fy_efOut [ 0ULL ] , & t143 .
mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
fy_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & gy_efOut [ 0ULL ] , & t143 .
mField0 [ 0ULL ] , & t143 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
gy_efOut [ 0 ] ; intrm_sf_mf_376 = ( ( ( 1.0 - t2883 ) - t2888 ) *
t2576_idx_0 + t2567_idx_0 * t2883 ) + t2585_idx_0 * t2888 ; t1907 [ 0ULL ] =
X [ 242ULL ] ; tlu2_linear_linear_prelookup ( & hy_efOut . mField0 [ 0ULL ] ,
& hy_efOut . mField1 [ 0ULL ] , & hy_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = hy_efOut ; tlu2_1d_linear_linear_value ( &
iy_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = iy_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
jy_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = jy_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ky_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ky_efOut [ 0 ] ; t2935 = ( ( ( 1.0 - t2883 ) - t2888
) * t2576_idx_0 + t2567_idx_0 * t2883 ) + t2585_idx_0 * t2888 ; zc_int183 = -
( U_idx_2 * t4258 * ( 1.0 / ( t4001 == 0.0 ? 1.0E-16 : t4001 ) * 0.55 / 0.01
) ) / ( t3858 == 0.0 ? 1.0E-16 : t3858 ) * 1.0E-5 ; intrm_sf_mf_41 = X [
238ULL ] >= 0.0 ? X [ 238ULL ] : - X [ 238ULL ] ; intrm_sf_mf_514 =
intrm_sf_mf_41 * 0.01 / ( t2918 == 0.0 ? 1.0E-16 : t2918 ) ; intrm_sf_mf_391
= intrm_sf_mf_514 >= 1.0 ? intrm_sf_mf_514 : 1.0 ; t4001 = pmf_log10 ( 6.9 /
( intrm_sf_mf_391 == 0.0 ? 1.0E-16 : intrm_sf_mf_391 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_391 == 0.0 ?
1.0E-16 : intrm_sf_mf_391 ) + 0.00017169489553429715 ) * 3.24 ; t2958 = X [
238ULL ] * t2897 * 2.9973120849090416 / ( t2922 == 0.0 ? 1.0E-16 : t2922 ) ;
intrm_sf_mf_41 = X [ 238ULL ] * intrm_sf_mf_41 * ( 1.0 / ( t4001 == 0.0 ?
1.0E-16 : t4001 ) ) * 0.046833001326703774 / ( t2925 == 0.0 ? 1.0E-16 : t2925
) ; intrm_sf_mf_391 = ( intrm_sf_mf_514 - 2000.0 ) / 2000.0 ; t3333 = ( t4302
- 2000.0 ) / 2000.0 ; t4307 = intrm_sf_mf_391 * intrm_sf_mf_391 * 3.0 -
intrm_sf_mf_391 * intrm_sf_mf_391 * intrm_sf_mf_391 * 2.0 ; if (
intrm_sf_mf_514 <= 2000.0 ) { intrm_sf_mf_391 = t2958 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_514 >= 4000.0 ) {
intrm_sf_mf_391 = intrm_sf_mf_41 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_391 = ( ( 1.0 - t4307 ) * t2958 + intrm_sf_mf_41 * t4307 ) *
9.9999999999999991E-11 ; } intrm_sf_mf_41 = X [ 241ULL ] >= 0.0 ? X [ 241ULL
] : - X [ 241ULL ] ; intrm_sf_mf_514 = intrm_sf_mf_41 * 0.01 / ( t2918 == 0.0
? 1.0E-16 : t2918 ) ; t2958 = intrm_sf_mf_514 >= 1.0 ? intrm_sf_mf_514 : 1.0
; t4001 = pmf_log10 ( 6.9 / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2958 == 0.0 ? 1.0E-16 : t2958
) + 0.00017169489553429715 ) * 3.24 ; t4307 = X [ 241ULL ] * t2897 *
2.9973120849090416 / ( t2922 == 0.0 ? 1.0E-16 : t2922 ) ; intrm_sf_mf_41 = X
[ 241ULL ] * intrm_sf_mf_41 * ( 1.0 / ( t4001 == 0.0 ? 1.0E-16 : t4001 ) ) *
0.046833001326703774 / ( t2925 == 0.0 ? 1.0E-16 : t2925 ) ; t2958 = (
intrm_sf_mf_514 - 2000.0 ) / 2000.0 ; t4446 = t2958 * t2958 * 3.0 - t2958 *
t2958 * t2958 * 2.0 ; t2958 = t3333 * t3333 * 3.0 - t3333 * t3333 * t3333 *
2.0 ; if ( intrm_sf_mf_514 <= 2000.0 ) { t3333 = t4307 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_514 >= 4000.0 ) { t3333 =
intrm_sf_mf_41 * 9.9999999999999991E-11 ; } else { t3333 = ( ( 1.0 - t4446 )
* t4307 + intrm_sf_mf_41 * t4446 ) * 9.9999999999999991E-11 ; } if ( t4302 <=
2000.0 ) { intrm_sf_mf_41 = intrm_sf_mf_495 ; } else if ( t4302 >= 4000.0 ) {
intrm_sf_mf_41 = zc_int183 ; } else { intrm_sf_mf_41 = ( 1.0 - t2958 ) *
intrm_sf_mf_495 + zc_int183 * t2958 ; } tlu2_1d_linear_nearest_value ( &
ly_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = ly_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
my_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = my_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ny_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = ny_efOut [ 0 ] ; intrm_sf_mf_495 = ( ( ( 1.0 - t2660 ) -
intrm_sf_mf_529 ) * t2576_idx_0 + t2567_idx_0 * t2660 ) + t2585_idx_0 *
intrm_sf_mf_529 ; t4307 = t2771 * 7.8539816339744827E-5 ; zc_int183 = t4029 /
( t4307 == 0.0 ? 1.0E-16 : t4307 ) ; t4001 = ( t4374 + piece79 ) / 2.0 * 0.32
; intrm_sf_mf_514 = t4349 / ( t4001 == 0.0 ? 1.0E-16 : t4001 ) ; t2958 =
intrm_sf_mf_514 >= 0.0 ? intrm_sf_mf_514 : - intrm_sf_mf_514 ; t2660 = t2958
> 1000.0 ? t2958 : 1000.0 ; t4446 = intrm_sf_mf_312 + intrm_sf_mf_495 ; if (
t4446 / 2.0 > 0.5 ) { intrm_sf_mf_529 = ( intrm_sf_mf_312 + intrm_sf_mf_495 )
/ 2.0 ; } else { intrm_sf_mf_529 = 0.5 ; } t4001 = pmf_log10 ( 6.9 / ( t2660
== 0.0 ? 1.0E-16 : t2660 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t2660 == 0.0 ? 1.0E-16 : t2660 ) + 0.00017169489553429715 ) * 3.24 ; t4302 =
1.0 / ( t4001 == 0.0 ? 1.0E-16 : t4001 ) ; t4349 = ( pmf_pow (
intrm_sf_mf_529 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t4302 / 8.0 ) *
12.7 + 1.0 ; t2660 = ( t2660 - 1000.0 ) * ( t4302 / 8.0 ) * intrm_sf_mf_529 /
( t4349 == 0.0 ? 1.0E-16 : t4349 ) ; intrm_sf_mf_529 = ( t2958 - 2000.0 ) /
2000.0 ; t4302 = zc_int183 >= 2000.0 ? zc_int183 : 1.0 ; t4374 =
intrm_sf_mf_529 * intrm_sf_mf_529 * 3.0 - intrm_sf_mf_529 * intrm_sf_mf_529 *
intrm_sf_mf_529 * 2.0 ; if ( t2958 <= 2000.0 ) { intrm_sf_mf_529 = 3.66 ; }
else if ( t2958 >= 4000.0 ) { intrm_sf_mf_529 = t2660 ; } else {
intrm_sf_mf_529 = ( 1.0 - t4374 ) * 3.66 + t2660 * t4374 ; } t4374 = t4446 /
2.0 ; if ( t2958 > intrm_sf_mf_529 * 10.709248339636167 / 0.32 / ( t4374 ==
0.0 ? 1.0E-16 : t4374 ) / 30.0 ) { t3946 = ( intrm_sf_mf_312 +
intrm_sf_mf_495 ) / 2.0 ; t2660 = intrm_sf_mf_529 * 10.709248339636167 / (
t2958 == 0.0 ? 1.0E-16 : t2958 ) / 0.32 / ( t3946 == 0.0 ? 1.0E-16 : t3946 )
; } else { t2660 = 30.0 ; } intrm_sf_mf_312 = ( X [ 31ULL ] - X [ 220ULL ] )
* ( 1.0 - exp ( - t2660 ) ) ; intrm_sf_mf_514 = intrm_sf_mf_514 * 0.32 / 0.01
* ( t4446 / 2.0 ) * ( ( t2957 + t2985 ) / 2.0 ) * intrm_sf_mf_312 ; t4374 =
pmf_log10 ( 6.9 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_312 = 1.0 / ( t4374 == 0.0 ?
1.0E-16 : t4374 ) * 0.55 / 0.01 ; t4374 = ( t4803 + piece79 ) / 2.0 * 0.32 ;
t2957 = - t2996 * 0.01 / ( t4374 == 0.0 ? 1.0E-16 : t4374 ) ; t2958 = t2957
>= 0.0 ? t2957 : - t2957 ; t2660 = t2958 > 1000.0 ? t2958 : 1000.0 ; t4803 =
t4262 + intrm_sf_mf_495 ; if ( t4803 / 2.0 > 0.5 ) { intrm_sf_mf_529 = (
t4262 + intrm_sf_mf_495 ) / 2.0 ; } else { intrm_sf_mf_529 = 0.5 ; } t4302 =
pmf_log10 ( 6.9 / ( t2660 == 0.0 ? 1.0E-16 : t2660 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2660 == 0.0 ? 1.0E-16 : t2660 ) +
0.00017169489553429715 ) * 3.24 ; t2996 = 1.0 / ( t4302 == 0.0 ? 1.0E-16 :
t4302 ) ; t4374 = ( pmf_pow ( intrm_sf_mf_529 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t2996 / 8.0 ) * 12.7 + 1.0 ; t2660 = ( t2660 - 1000.0 ) * (
t2996 / 8.0 ) * intrm_sf_mf_529 / ( t4374 == 0.0 ? 1.0E-16 : t4374 ) ;
intrm_sf_mf_529 = ( t2958 - 2000.0 ) / 2000.0 ; t2996 = intrm_sf_mf_529 *
intrm_sf_mf_529 * 3.0 - intrm_sf_mf_529 * intrm_sf_mf_529 * intrm_sf_mf_529 *
2.0 ; if ( t2958 <= 2000.0 ) { intrm_sf_mf_529 = 3.66 ; } else if ( t2958 >=
4000.0 ) { intrm_sf_mf_529 = t2660 ; } else { intrm_sf_mf_529 = ( 1.0 - t2996
) * 3.66 + t2660 * t2996 ; } t4374 = intrm_sf_mf_653 * 1.5707963267948965E-8
; t2660 = U_idx_2 * t2771 * 35.2 / ( t4374 == 0.0 ? 1.0E-16 : t4374 ) *
1.0E-5 ; t4302 = t4803 / 2.0 ; if ( t2958 > intrm_sf_mf_529 *
10.709248339636167 / 0.32 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) / 30.0 ) {
t4030 = ( t4262 + intrm_sf_mf_495 ) / 2.0 ; t2996 = intrm_sf_mf_529 *
10.709248339636167 / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) / 0.32 / ( t4030 ==
0.0 ? 1.0E-16 : t4030 ) ; } else { t2996 = 30.0 ; } intrm_sf_mf_495 = ( X [
31ULL ] - X [ 169ULL ] ) * ( 1.0 - exp ( - t2996 ) ) ; intrm_sf_mf_521 =
t2957 * 0.32 / 0.01 * ( t4803 / 2.0 ) * ( ( intrm_sf_mf_521 + t2985 ) / 2.0 )
* intrm_sf_mf_495 ; intrm_sf_mf_495 = ( t2997 - - 20.0 ) / 40.0 ; t2957 =
intrm_sf_mf_495 * intrm_sf_mf_495 * 3.0 - intrm_sf_mf_495 * intrm_sf_mf_495 *
intrm_sf_mf_495 * 2.0 ; if ( t2997 <= - 20.0 ) { intrm_sf_mf_495 =
intrm_sf_mf_521 * 0.001 ; } else if ( t2997 >= 20.0 ) { intrm_sf_mf_495 =
intrm_sf_mf_514 * 0.001 ; } else { intrm_sf_mf_495 = ( ( 1.0 - t2957 ) *
intrm_sf_mf_521 + intrm_sf_mf_514 * t2957 ) * 0.001 ; } t4803 =
intrm_sf_mf_653 * 1.2337005501361696E-8 ; intrm_sf_mf_653 = U_idx_2 * t4266 *
intrm_sf_mf_312 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) * 1.0E-5 ;
intrm_sf_mf_521 = ( zc_int183 - 2000.0 ) / 2000.0 ; t1907 [ 0ULL ] = X [
257ULL ] ; tlu2_linear_linear_prelookup ( & oy_efOut . mField0 [ 0ULL ] , &
oy_efOut . mField1 [ 0ULL ] , & oy_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = oy_efOut ; tlu2_1d_linear_linear_value ( &
py_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = py_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
qy_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = qy_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ry_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = ry_efOut [ 0 ] ; intrm_sf_mf_514 = ( ( ( 1.0 - t2959
) - intrm_sf_mf_402 ) * t2576_idx_0 + t2567_idx_0 * t2959 ) + t2585_idx_0 *
intrm_sf_mf_402 ; t1907 [ 0ULL ] = X [ 259ULL ] ;
tlu2_linear_linear_prelookup ( & sy_efOut . mField0 [ 0ULL ] , & sy_efOut .
mField1 [ 0ULL ] , & sy_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] )
; t73 = sy_efOut ; tlu2_1d_linear_linear_value ( & ty_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
ty_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & uy_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = uy_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vy_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = vy_efOut [ 0
] ; intrm_sf_mf_312 = ( ( ( 1.0 - t2959 ) - intrm_sf_mf_402 ) * t2576_idx_0 +
t2567_idx_0 * t2959 ) + t2585_idx_0 * intrm_sf_mf_402 ; t2957 =
intrm_sf_mf_521 * intrm_sf_mf_521 * 3.0 - intrm_sf_mf_521 * intrm_sf_mf_521 *
intrm_sf_mf_521 * 2.0 ; if ( - X [ 241ULL ] >= 0.0 ) { intrm_sf_mf_521 = - X
[ 241ULL ] ; } else { intrm_sf_mf_521 = X [ 241ULL ] ; } t2958 =
intrm_sf_mf_521 * 0.01 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; intrm_sf_mf_529
= t2958 >= 1.0 ? t2958 : 1.0 ; t4262 = pmf_log10 ( 6.9 / ( intrm_sf_mf_529 ==
0.0 ? 1.0E-16 : intrm_sf_mf_529 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_529 == 0.0 ? 1.0E-16 : intrm_sf_mf_529 ) +
0.00017169489553429715 ) * 3.24 ; t2985 = X [ 241ULL ] * piece79 * -
2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ; intrm_sf_mf_521 = X
[ 241ULL ] * intrm_sf_mf_521 * ( 1.0 / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ) *
- 0.046833001326703774 / ( t2977 == 0.0 ? 1.0E-16 : t2977 ) ; intrm_sf_mf_529
= ( t2958 - 2000.0 ) / 2000.0 ; t2996 = intrm_sf_mf_529 * intrm_sf_mf_529 *
3.0 - intrm_sf_mf_529 * intrm_sf_mf_529 * intrm_sf_mf_529 * 2.0 ; if ( t2958
<= 2000.0 ) { intrm_sf_mf_529 = t2985 * 9.9999999999999991E-11 ; } else if (
t2958 >= 4000.0 ) { intrm_sf_mf_529 = intrm_sf_mf_521 *
9.9999999999999991E-11 ; } else { intrm_sf_mf_529 = ( ( 1.0 - t2996 ) * t2985
+ intrm_sf_mf_521 * t2996 ) * 9.9999999999999991E-11 ; } if ( zc_int183 <=
2000.0 ) { intrm_sf_mf_521 = t2660 ; } else if ( zc_int183 >= 4000.0 ) {
intrm_sf_mf_521 = intrm_sf_mf_653 ; } else { intrm_sf_mf_521 = ( 1.0 - t2957
) * t2660 + intrm_sf_mf_653 * t2957 ; } intrm_sf_mf_653 = X [ 192ULL ] >= 0.0
? X [ 192ULL ] : - X [ 192ULL ] ; zc_int183 = intrm_sf_mf_653 * 0.01 / (
t2970 == 0.0 ? 1.0E-16 : t2970 ) ; t2957 = zc_int183 >= 1.0 ? zc_int183 : 1.0
; t4262 = pmf_log10 ( 6.9 / ( t2957 == 0.0 ? 1.0E-16 : t2957 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2957 == 0.0 ? 1.0E-16 : t2957
) + 0.00017169489553429715 ) * 3.24 ; t2958 = X [ 192ULL ] * piece79 *
2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ; intrm_sf_mf_653 = X
[ 192ULL ] * intrm_sf_mf_653 * ( 1.0 / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ) *
0.046833001326703774 / ( t2977 == 0.0 ? 1.0E-16 : t2977 ) ; t2957 = (
zc_int183 - 2000.0 ) / 2000.0 ; t2660 = t2957 * t2957 * 3.0 - t2957 * t2957 *
t2957 * 2.0 ; if ( zc_int183 <= 2000.0 ) { t2957 = t2958 *
9.9999999999999991E-11 ; } else if ( zc_int183 >= 4000.0 ) { t2957 =
intrm_sf_mf_653 * 9.9999999999999991E-11 ; } else { t2957 = ( ( 1.0 - t2660 )
* t2958 + intrm_sf_mf_653 * t2660 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_653 = t3657 / ( t4307 == 0.0 ? 1.0E-16 : t4307 ) ; zc_int183 =
intrm_sf_mf_653 >= 2000.0 ? intrm_sf_mf_653 : 1.0 ; t4262 = pmf_log10 ( 6.9 /
( zc_int183 == 0.0 ? 1.0E-16 : zc_int183 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int183 == 0.0 ? 1.0E-16 : zc_int183 ) +
0.00017169489553429715 ) * 3.24 ; t2771 = U_idx_2 * t2771 * - 35.2 / ( t4374
== 0.0 ? 1.0E-16 : t4374 ) * 1.0E-5 ; if ( t3056 <= 0.0 ) { t2958 = 0.0 ; }
else { t2958 = t3056 >= 1.0 ? 1.0 : t3056 ; } if ( intrm_sf_mf_862 <= 0.0 ) {
t2660 = 0.0 ; } else { t2660 = intrm_sf_mf_862 >= 1.0 ? 1.0 : intrm_sf_mf_862
; } t1907 [ 0ULL ] = X [ 272ULL ] ; tlu2_linear_nearest_prelookup ( &
wy_efOut . mField0 [ 0ULL ] , & wy_efOut . mField1 [ 0ULL ] , & wy_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t73 = wy_efOut ;
tlu2_1d_linear_nearest_value ( & xy_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField38 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xy_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yy_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField39 ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = yy_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & aab_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL
] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField41
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = aab_efOut [ 0 ] ;
t2985 = ( ( ( 1.0 - t2958 ) - t2660 ) * t2576_idx_0 + t2567_idx_0 * t2958 ) +
t2585_idx_0 * t2660 ; zc_int183 = - ( U_idx_2 * t4258 * ( 1.0 / ( t4262 ==
0.0 ? 1.0E-16 : t4262 ) * 0.55 / 0.01 ) ) / ( t4803 == 0.0 ? 1.0E-16 : t4803
) * 1.0E-5 ; tlu2_1d_linear_nearest_value ( & bab_efOut [ 0ULL ] , & t105 .
mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
bab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & cab_efOut [ 0ULL ] , &
t105 . mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
cab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & dab_efOut [ 0ULL ] , &
t105 . mField0 [ 0ULL ] , & t105 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField41 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
dab_efOut [ 0 ] ; t2996 = ( ( ( 1.0 - intrm_sf_mf_806 ) - intrm_sf_mf_815 ) *
t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_806 ) + t2585_idx_0 * intrm_sf_mf_815
; tlu2_1d_linear_nearest_value ( & eab_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField20 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = eab_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & fab_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField21 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = fab_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & gab_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField22 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = gab_efOut [ 0
] ; t2997 = ( ( ( 1.0 - t2958 ) - t2660 ) * t2576_idx_0 + t2567_idx_0 * t2958
) + t2585_idx_0 * t2660 ; intrm_sf_mf_806 = ( intrm_sf_mf_653 - 2000.0 ) /
2000.0 ; tlu2_1d_linear_nearest_value ( & hab_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
hab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & iab_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
iab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & jab_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField17 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
jab_efOut [ 0 ] ; t4262 = ( t215 + ( ( ( ( 1.0 - t2958 ) - t2660 ) *
t2576_idx_0 + t2567_idx_0 * t2958 ) + t2585_idx_0 * t2660 ) ) / 2.0 *
0.0019634954084936209 ; t2958 = t4421 / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ;
t2660 = t2958 >= 0.0 ? t2958 : - t2958 ; intrm_sf_mf_815 = t2660 > 1000.0 ?
t2660 : 1000.0 ; t4258 = t2985 + t2996 ; if ( t4258 / 2.0 > 0.5 ) {
intrm_sf_mf_862 = ( t2985 + t2996 ) / 2.0 ; } else { intrm_sf_mf_862 = 0.5 ;
} t4262 = pmf_log10 ( 6.9 / ( intrm_sf_mf_815 == 0.0 ? 1.0E-16 :
intrm_sf_mf_815 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_815 == 0.0 ? 1.0E-16 : intrm_sf_mf_815 ) + 2.8767404433520813E-5
) * 3.24 ; t3056 = 1.0 / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ; t4803 = (
pmf_pow ( intrm_sf_mf_862 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t3056
/ 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_815 = ( intrm_sf_mf_815 - 1000.0 ) * (
t3056 / 8.0 ) * intrm_sf_mf_862 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) ;
intrm_sf_mf_862 = ( t2660 - 2000.0 ) / 2000.0 ; t3056 = intrm_sf_mf_862 *
intrm_sf_mf_862 * 3.0 - intrm_sf_mf_862 * intrm_sf_mf_862 * intrm_sf_mf_862 *
2.0 ; intrm_sf_mf_862 = intrm_sf_mf_806 * intrm_sf_mf_806 * 3.0 -
intrm_sf_mf_806 * intrm_sf_mf_806 * intrm_sf_mf_806 * 2.0 ; if ( t2660 <=
2000.0 ) { intrm_sf_mf_806 = 3.66 ; } else if ( t2660 >= 4000.0 ) {
intrm_sf_mf_806 = intrm_sf_mf_815 ; } else { intrm_sf_mf_806 = ( 1.0 - t3056
) * 3.66 + intrm_sf_mf_815 * t3056 ; } t4262 = t4258 / 2.0 ; if ( t2660 >
intrm_sf_mf_806 * 0.039269908169872414 / 0.0019634954084936209 / ( t4262 ==
0.0 ? 1.0E-16 : t4262 ) / 30.0 ) { t4307 = ( t2985 + t2996 ) / 2.0 ;
intrm_sf_mf_815 = intrm_sf_mf_806 * 0.039269908169872414 / ( t2660 == 0.0 ?
1.0E-16 : t2660 ) / 0.0019634954084936209 / ( t4307 == 0.0 ? 1.0E-16 : t4307
) ; } else { intrm_sf_mf_815 = 30.0 ; } t2660 = ( X [ 281ULL ] - X [ 272ULL ]
) * ( 1.0 - exp ( - intrm_sf_mf_815 ) ) ; t2958 = t2958 *
0.0019634954084936209 / 0.05 * ( t4258 / 2.0 ) * ( ( t2997 + intrm_sf_mf_859
) / 2.0 ) * t2660 ; if ( intrm_sf_mf_653 <= 2000.0 ) { t2660 = t2771 ; } else
if ( intrm_sf_mf_653 >= 4000.0 ) { t2660 = zc_int183 ; } else { t2660 = ( 1.0
- intrm_sf_mf_862 ) * t2771 + zc_int183 * intrm_sf_mf_862 ; } t4803 = ( t2758
+ t215 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_653 = - t3041 * 0.05 / (
t4803 == 0.0 ? 1.0E-16 : t4803 ) ; t2758 = intrm_sf_mf_653 >= 0.0 ?
intrm_sf_mf_653 : - intrm_sf_mf_653 ; t2771 = t2758 > 1000.0 ? t2758 : 1000.0
; t4258 = intrm_sf_mf_668 + t2996 ; if ( t4258 / 2.0 > 0.5 ) { zc_int183 = (
intrm_sf_mf_668 + t2996 ) / 2.0 ; } else { zc_int183 = 0.5 ; } t4262 =
pmf_log10 ( 6.9 / ( t2771 == 0.0 ? 1.0E-16 : t2771 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t2771 == 0.0 ? 1.0E-16 : t2771 ) +
2.8767404433520813E-5 ) * 3.24 ; t2985 = 1.0 / ( t4262 == 0.0 ? 1.0E-16 :
t4262 ) ; t4803 = ( pmf_pow ( zc_int183 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2985 / 8.0 ) * 12.7 + 1.0 ; t2771 = ( t2771 - 1000.0 ) * ( t2985
/ 8.0 ) * zc_int183 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) ; zc_int183 = (
t2758 - 2000.0 ) / 2000.0 ; t2985 = zc_int183 * zc_int183 * 3.0 - zc_int183 *
zc_int183 * zc_int183 * 2.0 ; if ( t2758 <= 2000.0 ) { zc_int183 = 3.66 ; }
else if ( t2758 >= 4000.0 ) { zc_int183 = t2771 ; } else { zc_int183 = ( 1.0
- t2985 ) * 3.66 + t2771 * t2985 ; } t4262 = t4258 / 2.0 ; if ( t2758 >
zc_int183 * 0.039269908169872414 / 0.0019634954084936209 / ( t4262 == 0.0 ?
1.0E-16 : t4262 ) / 30.0 ) { t4307 = ( intrm_sf_mf_668 + t2996 ) / 2.0 ;
t2771 = zc_int183 * 0.039269908169872414 / ( t2758 == 0.0 ? 1.0E-16 : t2758 )
/ 0.0019634954084936209 / ( t4307 == 0.0 ? 1.0E-16 : t4307 ) ; } else { t2771
= 30.0 ; } t2758 = ( X [ 281ULL ] - X [ 234ULL ] ) * ( 1.0 - exp ( - t2771 )
) ; intrm_sf_mf_653 = intrm_sf_mf_653 * 0.0019634954084936209 / 0.05 * (
t4258 / 2.0 ) * ( ( intrm_sf_mf_784 + intrm_sf_mf_859 ) / 2.0 ) * t2758 ;
t2758 = ( intrm_sf_mf_825 - - 20.0 ) / 40.0 ; t2771 = t2758 * t2758 * 3.0 -
t2758 * t2758 * t2758 * 2.0 ; if ( intrm_sf_mf_825 <= - 20.0 ) { t2758 =
intrm_sf_mf_653 * 0.001 ; } else if ( intrm_sf_mf_825 >= 20.0 ) { t2758 =
t2958 * 0.001 ; } else { t2758 = ( ( 1.0 - t2771 ) * intrm_sf_mf_653 + t2958
* t2771 ) * 0.001 ; } t1907 [ 0ULL ] = X [ 283ULL ] ;
tlu2_linear_linear_prelookup ( & kab_efOut . mField0 [ 0ULL ] , & kab_efOut .
mField1 [ 0ULL ] , & kab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ]
) ; t183 = kab_efOut ; tlu2_1d_linear_linear_value ( & lab_efOut [ 0ULL ] , &
t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
lab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & mab_efOut [ 0ULL ] , & t183
. mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
mab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & nab_efOut [ 0ULL ] , & t183
. mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
nab_efOut [ 0 ] ; intrm_sf_mf_653 = ( ( ( 1.0 - t2984 ) - intrm_sf_mf_541 ) *
t2576_idx_0 + t2567_idx_0 * t2984 ) + t2585_idx_0 * intrm_sf_mf_541 ; t1907 [
0ULL ] = X [ 285ULL ] ; tlu2_linear_linear_prelookup ( & oab_efOut . mField0
[ 0ULL ] , & oab_efOut . mField1 [ 0ULL ] , & oab_efOut . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [
0ULL ] , & t223 [ 0ULL ] ) ; t183 = oab_efOut ; tlu2_1d_linear_linear_value (
& pab_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = pab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
qab_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = qab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
rab_efOut [ 0ULL ] , & t183 . mField0 [ 0ULL ] , & t183 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = rab_efOut [ 0 ] ; t2771 = ( ( ( 1.0 - t2984 ) -
intrm_sf_mf_541 ) * t2576_idx_0 + t2567_idx_0 * t2984 ) + t2585_idx_0 *
intrm_sf_mf_541 ; zc_int183 = X [ 282ULL ] >= 0.0 ? X [ 282ULL ] : - X [
282ULL ] ; intrm_sf_mf_784 = zc_int183 * 0.05 / ( t4382 == 0.0 ? 1.0E-16 :
t4382 ) ; intrm_sf_mf_668 = intrm_sf_mf_784 >= 1.0 ? intrm_sf_mf_784 : 1.0 ;
t4258 = pmf_log10 ( 6.9 / ( intrm_sf_mf_668 == 0.0 ? 1.0E-16 :
intrm_sf_mf_668 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_668 == 0.0 ? 1.0E-16 : intrm_sf_mf_668 ) + 2.8767404433520813E-5
) * 3.24 ; t2958 = X [ 282ULL ] * t215 * 11.2 / ( t4385 == 0.0 ? 1.0E-16 :
t4385 ) ; zc_int183 = X [ 282ULL ] * zc_int183 * ( 1.0 / ( t4258 == 0.0 ?
1.0E-16 : t4258 ) ) * 0.175 / ( t4399 == 0.0 ? 1.0E-16 : t4399 ) ;
intrm_sf_mf_668 = ( intrm_sf_mf_784 - 2000.0 ) / 2000.0 ; t2985 =
intrm_sf_mf_668 * intrm_sf_mf_668 * 3.0 - intrm_sf_mf_668 * intrm_sf_mf_668 *
intrm_sf_mf_668 * 2.0 ; if ( intrm_sf_mf_784 <= 2000.0 ) { intrm_sf_mf_668 =
t2958 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_784 >= 4000.0 ) {
intrm_sf_mf_668 = zc_int183 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_668 = ( ( 1.0 - t2985 ) * t2958 + zc_int183 * t2985 ) *
9.9999999999999991E-11 ; } if ( - X [ 238ULL ] >= 0.0 ) { zc_int183 = - X [
238ULL ] ; } else { zc_int183 = X [ 238ULL ] ; } intrm_sf_mf_784 = zc_int183
* 0.05 / ( t4382 == 0.0 ? 1.0E-16 : t4382 ) ; t2958 = intrm_sf_mf_784 >= 1.0
? intrm_sf_mf_784 : 1.0 ; t4258 = pmf_log10 ( 6.9 / ( t2958 == 0.0 ? 1.0E-16
: t2958 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2958 == 0.0 ?
1.0E-16 : t2958 ) + 2.8767404433520813E-5 ) * 3.24 ; t2985 = X [ 238ULL ] *
t215 * - 11.2 / ( t4385 == 0.0 ? 1.0E-16 : t4385 ) ; zc_int183 = X [ 238ULL ]
* zc_int183 * ( 1.0 / ( t4258 == 0.0 ? 1.0E-16 : t4258 ) ) * - 0.175 / (
t4399 == 0.0 ? 1.0E-16 : t4399 ) ; t2958 = ( intrm_sf_mf_784 - 2000.0 ) /
2000.0 ; t2996 = t2958 * t2958 * 3.0 - t2958 * t2958 * t2958 * 2.0 ; if (
intrm_sf_mf_784 <= 2000.0 ) { t2958 = t2985 * 9.9999999999999991E-11 ; } else
if ( intrm_sf_mf_784 >= 4000.0 ) { t2958 = zc_int183 * 9.9999999999999991E-11
; } else { t2958 = ( ( 1.0 - t2996 ) * t2985 + zc_int183 * t2996 ) *
9.9999999999999991E-11 ; } if ( X [ 303ULL ] <= 0.0 ) { zc_int183 = 0.0 ; }
else { zc_int183 = X [ 303ULL ] >= 1.0 ? 1.0 : X [ 303ULL ] ; } if ( X [
302ULL ] <= 0.0 ) { intrm_sf_mf_784 = 0.0 ; } else { intrm_sf_mf_784 = X [
302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } t2985 = ( ( ( 1.0 - zc_int183 ) -
intrm_sf_mf_784 ) * 296.802103844292 + zc_int183 * 461.523 ) +
intrm_sf_mf_784 * 259.836612622973 ; t1907 [ 0ULL ] = X [ 301ULL ] ;
tlu2_linear_linear_prelookup ( & sab_efOut . mField0 [ 0ULL ] , & sab_efOut .
mField1 [ 0ULL ] , & sab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ]
) ; t158 = sab_efOut ; tlu2_1d_linear_linear_value ( & tab_efOut [ 0ULL ] , &
t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
tab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & uab_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
uab_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vab_efOut [ 0ULL ] , & t158
. mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
vab_efOut [ 0 ] ; t2996 = ( ( ( 1.0 - zc_int183 ) - intrm_sf_mf_784 ) *
t2576_idx_0 + t2567_idx_0 * zc_int183 ) + t2585_idx_0 * intrm_sf_mf_784 ; if
( t3109 <= 0.0 ) { zc_int183 = 0.0 ; } else { zc_int183 = t3109 >= 1.0 ? 1.0
: t3109 ; } if ( zc_int345 <= 0.0 ) { intrm_sf_mf_784 = 0.0 ; } else {
intrm_sf_mf_784 = zc_int345 >= 1.0 ? 1.0 : zc_int345 ; } t1907 [ 0ULL ] = X [
315ULL ] ; tlu2_linear_nearest_prelookup ( & wab_efOut . mField0 [ 0ULL ] , &
wab_efOut . mField1 [ 0ULL ] , & wab_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t89 = wab_efOut ; tlu2_1d_linear_nearest_value ( &
xab_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = xab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
yab_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = yab_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
abb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField40 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = abb_efOut [ 0 ] ; t2997 = ( ( ( 1.0 - zc_int183 ) -
intrm_sf_mf_784 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) + t2585_idx_0 *
intrm_sf_mf_784 ; tlu2_1d_linear_nearest_value ( & bbb_efOut [ 0ULL ] , & t6
. mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
bbb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & cbb_efOut [ 0ULL ] , & t6
. mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 =
cbb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & dbb_efOut [ 0ULL ] , & t6
. mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField40 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 =
dbb_efOut [ 0 ] ; intrm_sf_mf_806 = ( ( ( 1.0 - intrm_sf_mf_960 ) -
intrm_sf_mf_939 ) * t2576_idx_0 + t2567_idx_0 * intrm_sf_mf_960 ) +
t2585_idx_0 * intrm_sf_mf_939 ; t4262 = ( t4288 + zc_int276 ) / 2.0 *
0.0019634954084936209 ; intrm_sf_mf_815 = t3105 / ( t4262 == 0.0 ? 1.0E-16 :
t4262 ) ; intrm_sf_mf_859 = intrm_sf_mf_815 >= 0.0 ? intrm_sf_mf_815 : -
intrm_sf_mf_815 ; t3041 = intrm_sf_mf_859 > 1000.0 ? intrm_sf_mf_859 : 1000.0
; t4258 = intrm_sf_mf_992 + intrm_sf_mf_806 ; if ( t4258 / 2.0 > 0.5 ) {
intrm_sf_mf_825 = ( intrm_sf_mf_992 + intrm_sf_mf_806 ) / 2.0 ; } else {
intrm_sf_mf_825 = 0.5 ; } t4262 = pmf_log10 ( 6.9 / ( t3041 == 0.0 ? 1.0E-16
: t3041 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3041 == 0.0 ?
1.0E-16 : t3041 ) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_862 = 1.0 /
( t4262 == 0.0 ? 1.0E-16 : t4262 ) ; t4803 = ( pmf_pow ( intrm_sf_mf_825 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_862 / 8.0 ) * 12.7 +
1.0 ; t3041 = ( t3041 - 1000.0 ) * ( intrm_sf_mf_862 / 8.0 ) *
intrm_sf_mf_825 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) ; intrm_sf_mf_825 = (
intrm_sf_mf_859 - 2000.0 ) / 2000.0 ; intrm_sf_mf_862 = intrm_sf_mf_825 *
intrm_sf_mf_825 * 3.0 - intrm_sf_mf_825 * intrm_sf_mf_825 * intrm_sf_mf_825 *
2.0 ; if ( intrm_sf_mf_859 <= 2000.0 ) { intrm_sf_mf_825 = 3.66 ; } else if (
intrm_sf_mf_859 >= 4000.0 ) { intrm_sf_mf_825 = t3041 ; } else {
intrm_sf_mf_825 = ( 1.0 - intrm_sf_mf_862 ) * 3.66 + t3041 * intrm_sf_mf_862
; } t4262 = t4258 / 2.0 ; if ( intrm_sf_mf_859 > intrm_sf_mf_825 *
0.15707963267948966 / 0.0019634954084936209 / ( t4262 == 0.0 ? 1.0E-16 :
t4262 ) / 30.0 ) { t4374 = ( intrm_sf_mf_992 + intrm_sf_mf_806 ) / 2.0 ;
t3041 = intrm_sf_mf_825 * 0.15707963267948966 / ( intrm_sf_mf_859 == 0.0 ?
1.0E-16 : intrm_sf_mf_859 ) / 0.0019634954084936209 / ( t4374 == 0.0 ?
1.0E-16 : t4374 ) ; } else { t3041 = 30.0 ; } intrm_sf_mf_859 = ( X [ 300ULL
] - X [ 296ULL ] ) * ( 1.0 - exp ( - t3041 ) ) ; intrm_sf_mf_815 =
intrm_sf_mf_815 * 0.0019634954084936209 / 0.05 * ( t4258 / 2.0 ) * ( ( t4269
+ t3083 ) / 2.0 ) * intrm_sf_mf_859 ; tlu2_1d_linear_nearest_value ( &
ebb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField20 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ebb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fbb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = fbb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
gbb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = gbb_efOut [ 0 ] ; intrm_sf_mf_859 = ( ( ( 1.0 -
zc_int183 ) - intrm_sf_mf_784 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) +
t2585_idx_0 * intrm_sf_mf_784 ; tlu2_1d_linear_nearest_value ( & hbb_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = hbb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ibb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ibb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
jbb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField25 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = jbb_efOut [ 0 ] ; t4803 = ( zc_int276 + ( ( ( ( 1.0
- zc_int183 ) - intrm_sf_mf_784 ) * t2576_idx_0 + t2567_idx_0 * zc_int183 ) +
t2585_idx_0 * intrm_sf_mf_784 ) ) / 2.0 * 0.0019634954084936209 ; zc_int183 =
- t3092 * 0.05 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) ; intrm_sf_mf_784 =
zc_int183 >= 0.0 ? zc_int183 : - zc_int183 ; t3041 = intrm_sf_mf_784 > 1000.0
? intrm_sf_mf_784 : 1000.0 ; t4258 = t2997 + intrm_sf_mf_806 ; if ( t4258 /
2.0 > 0.5 ) { intrm_sf_mf_825 = ( t2997 + intrm_sf_mf_806 ) / 2.0 ; } else {
intrm_sf_mf_825 = 0.5 ; } t4262 = pmf_log10 ( 6.9 / ( t3041 == 0.0 ? 1.0E-16
: t3041 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3041 == 0.0 ?
1.0E-16 : t3041 ) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_862 = 1.0 /
( t4262 == 0.0 ? 1.0E-16 : t4262 ) ; t4803 = ( pmf_pow ( intrm_sf_mf_825 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_862 / 8.0 ) * 12.7 +
1.0 ; t3041 = ( t3041 - 1000.0 ) * ( intrm_sf_mf_862 / 8.0 ) *
intrm_sf_mf_825 / ( t4803 == 0.0 ? 1.0E-16 : t4803 ) ; intrm_sf_mf_825 = (
intrm_sf_mf_784 - 2000.0 ) / 2000.0 ; intrm_sf_mf_862 = intrm_sf_mf_825 *
intrm_sf_mf_825 * 3.0 - intrm_sf_mf_825 * intrm_sf_mf_825 * intrm_sf_mf_825 *
2.0 ; if ( intrm_sf_mf_784 <= 2000.0 ) { intrm_sf_mf_825 = 3.66 ; } else if (
intrm_sf_mf_784 >= 4000.0 ) { intrm_sf_mf_825 = t3041 ; } else {
intrm_sf_mf_825 = ( 1.0 - intrm_sf_mf_862 ) * 3.66 + t3041 * intrm_sf_mf_862
; } t4262 = t4258 / 2.0 ; if ( intrm_sf_mf_784 > intrm_sf_mf_825 *
0.15707963267948966 / 0.0019634954084936209 / ( t4262 == 0.0 ? 1.0E-16 :
t4262 ) / 30.0 ) { t4302 = ( t2997 + intrm_sf_mf_806 ) / 2.0 ; t3041 =
intrm_sf_mf_825 * 0.15707963267948966 / ( intrm_sf_mf_784 == 0.0 ? 1.0E-16 :
intrm_sf_mf_784 ) / 0.0019634954084936209 / ( t4302 == 0.0 ? 1.0E-16 : t4302
) ; } else { t3041 = 30.0 ; } intrm_sf_mf_784 = ( X [ 300ULL ] - X [ 315ULL ]
) * ( 1.0 - exp ( - t3041 ) ) ; zc_int183 = zc_int183 * 0.0019634954084936209
/ 0.05 * ( t4258 / 2.0 ) * ( ( t3083 + intrm_sf_mf_859 ) / 2.0 ) *
intrm_sf_mf_784 ; intrm_sf_mf_784 = ( zc_int10 - - 20.0 ) / 40.0 ; t2997 =
intrm_sf_mf_784 * intrm_sf_mf_784 * 3.0 - intrm_sf_mf_784 * intrm_sf_mf_784 *
intrm_sf_mf_784 * 2.0 ; if ( zc_int10 <= - 20.0 ) { intrm_sf_mf_784 =
zc_int183 * 0.001 ; } else if ( zc_int10 >= 20.0 ) { intrm_sf_mf_784 =
intrm_sf_mf_815 * 0.001 ; } else { intrm_sf_mf_784 = ( ( 1.0 - t2997 ) *
zc_int183 + intrm_sf_mf_815 * t2997 ) * 0.001 ; } t1907 [ 0ULL ] = X [ 315ULL
] ; tlu2_linear_linear_prelookup ( & kbb_efOut . mField0 [ 0ULL ] , &
kbb_efOut . mField1 [ 0ULL ] , & kbb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = kbb_efOut ; tlu2_1d_linear_linear_value ( &
lbb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = lbb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
mbb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = mbb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
nbb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = nbb_efOut [ 0 ] ; zc_int183 = ( ( ( 1.0 - zc_int338
) - zc_int360 ) * t2576_idx_0 + t2567_idx_0 * zc_int338 ) + t2585_idx_0 *
zc_int360 ; t1907 [ 0ULL ] = X [ 320ULL ] ; tlu2_linear_linear_prelookup ( &
obb_efOut . mField0 [ 0ULL ] , & obb_efOut . mField1 [ 0ULL ] , & obb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t0 = obb_efOut ;
tlu2_1d_linear_linear_value ( & pbb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = pbb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qbb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = qbb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rbb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = rbb_efOut [ 0 ] ; t2997 =
( ( ( 1.0 - intrm_sf_mf_690 ) - intrm_sf_mf_691 ) * t2576_idx_0 + t2567_idx_0
* intrm_sf_mf_690 ) + t2585_idx_0 * intrm_sf_mf_691 ; t1907 [ 0ULL ] = X [
324ULL ] ; tlu2_linear_linear_prelookup ( & sbb_efOut . mField0 [ 0ULL ] , &
sbb_efOut . mField1 [ 0ULL ] , & sbb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = sbb_efOut ; tlu2_1d_linear_linear_value ( &
tbb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = tbb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ubb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ubb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
vbb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = vbb_efOut [ 0 ] ; intrm_sf_mf_806 = ( ( ( 1.0 -
intrm_sf_mf_690 ) - intrm_sf_mf_691 ) * t2576_idx_0 + t2567_idx_0 *
intrm_sf_mf_690 ) + t2585_idx_0 * intrm_sf_mf_691 ; intrm_sf_mf_815 = X [
319ULL ] >= 0.0 ? X [ 319ULL ] : - X [ 319ULL ] ; intrm_sf_mf_859 =
intrm_sf_mf_815 * 0.05 / ( t3069 == 0.0 ? 1.0E-16 : t3069 ) ; t3041 =
intrm_sf_mf_859 >= 1.0 ? intrm_sf_mf_859 : 1.0 ; t4258 = pmf_log10 ( 6.9 / (
t3041 == 0.0 ? 1.0E-16 : t3041 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t3041 == 0.0 ? 1.0E-16 : t3041 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_825 = X [ 319ULL ] * zc_int276 * 35.2 / ( t3073 == 0.0 ? 1.0E-16
: t3073 ) ; intrm_sf_mf_815 = X [ 319ULL ] * intrm_sf_mf_815 * ( 1.0 / (
t4258 == 0.0 ? 1.0E-16 : t4258 ) ) * 0.55 / ( t3076 == 0.0 ? 1.0E-16 : t3076
) ; t3041 = ( intrm_sf_mf_859 - 2000.0 ) / 2000.0 ; intrm_sf_mf_862 = t3041 *
t3041 * 3.0 - t3041 * t3041 * t3041 * 2.0 ; if ( intrm_sf_mf_859 <= 2000.0 )
{ t3041 = intrm_sf_mf_825 * 9.9999999999999991E-11 ; } else if (
intrm_sf_mf_859 >= 4000.0 ) { t3041 = intrm_sf_mf_815 *
9.9999999999999991E-11 ; } else { t3041 = ( ( 1.0 - intrm_sf_mf_862 ) *
intrm_sf_mf_825 + intrm_sf_mf_815 * intrm_sf_mf_862 ) *
9.9999999999999991E-11 ; } if ( - X [ 307ULL ] >= 0.0 ) { intrm_sf_mf_815 = -
X [ 307ULL ] ; } else { intrm_sf_mf_815 = X [ 307ULL ] ; } intrm_sf_mf_859 =
intrm_sf_mf_815 * 0.05 / ( t3069 == 0.0 ? 1.0E-16 : t3069 ) ; intrm_sf_mf_825
= intrm_sf_mf_859 >= 1.0 ? intrm_sf_mf_859 : 1.0 ; t4258 = pmf_log10 ( 6.9 /
( intrm_sf_mf_825 == 0.0 ? 1.0E-16 : intrm_sf_mf_825 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_825 == 0.0 ?
1.0E-16 : intrm_sf_mf_825 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_862 = X [ 307ULL ] * zc_int276 * - 35.2 / ( t3073 == 0.0 ?
1.0E-16 : t3073 ) ; intrm_sf_mf_815 = X [ 307ULL ] * intrm_sf_mf_815 * ( 1.0
/ ( t4258 == 0.0 ? 1.0E-16 : t4258 ) ) * - 0.55 / ( t3076 == 0.0 ? 1.0E-16 :
t3076 ) ; intrm_sf_mf_825 = ( intrm_sf_mf_859 - 2000.0 ) / 2000.0 ; t3056 =
intrm_sf_mf_825 * intrm_sf_mf_825 * 3.0 - intrm_sf_mf_825 * intrm_sf_mf_825 *
intrm_sf_mf_825 * 2.0 ; if ( intrm_sf_mf_859 <= 2000.0 ) { intrm_sf_mf_825 =
intrm_sf_mf_862 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_859 >=
4000.0 ) { intrm_sf_mf_825 = intrm_sf_mf_815 * 9.9999999999999991E-11 ; }
else { intrm_sf_mf_825 = ( ( 1.0 - t3056 ) * intrm_sf_mf_862 +
intrm_sf_mf_815 * t3056 ) * 9.9999999999999991E-11 ; } t1907 [ 0ULL ] = X [
341ULL ] ; tlu2_linear_linear_prelookup ( & wbb_efOut . mField0 [ 0ULL ] , &
wbb_efOut . mField1 [ 0ULL ] , & wbb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t6 = wbb_efOut ; tlu2_1d_linear_linear_value ( &
xbb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2576_idx_0 = xbb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ybb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2567_idx_0 = ybb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
acb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL
] ) ; t2585_idx_0 = acb_efOut [ 0 ] ; intrm_sf_mf_815 = ( ( ( 1.0 - zc_int359
) - zc_int361 ) * t2576_idx_0 + t2567_idx_0 * zc_int359 ) + t2585_idx_0 *
zc_int361 ; t1907 [ 0ULL ] = X [ 342ULL ] ; tlu2_linear_linear_prelookup ( &
bcb_efOut . mField0 [ 0ULL ] , & bcb_efOut . mField1 [ 0ULL ] , & bcb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t162 = bcb_efOut ;
tlu2_1d_linear_linear_value ( & ccb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL
] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ccb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dcb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL
] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = dcb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ecb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL
] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = ecb_efOut [ 0 ] ;
intrm_sf_mf_859 = ( ( ( 1.0 - zc_int359 ) - zc_int361 ) * t2576_idx_0 +
t2567_idx_0 * zc_int359 ) + t2585_idx_0 * zc_int361 ; t1907 [ 0ULL ] = X [
337ULL ] ; tlu2_linear_linear_prelookup ( & fcb_efOut . mField0 [ 0ULL ] , &
fcb_efOut . mField1 [ 0ULL ] , & fcb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = fcb_efOut ; tlu2_1d_linear_linear_value ( &
gcb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = gcb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
hcb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = hcb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
icb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = icb_efOut [ 0 ] ; intrm_sf_mf_862 = ( ( ( 1.0 -
zc_int359 ) - zc_int361 ) * t2576_idx_0 + t2567_idx_0 * zc_int359 ) +
t2585_idx_0 * zc_int361 ; t4262 = t3120 - ( - t3120 ) ; t3056 = ( ( t3058 -
1.01325 ) - ( - t3120 ) ) / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ;
intrm_sf_mf_960 = t3056 * t3056 * 3.0 - t3056 * t3056 * t3056 * 2.0 ; if (
t3058 - 1.01325 <= - t3120 ) { t3056 = 1.01325 ; } else if ( t3058 - 1.01325
>= t3120 ) { t3056 = t3058 ; } else { t3056 = ( 1.0 - intrm_sf_mf_960 ) *
1.01325 + t3058 * intrm_sf_mf_960 ; } tlu2_1d_linear_nearest_value ( &
jcb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField38 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = jcb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
kcb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField39 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = kcb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
lcb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField40 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = lcb_efOut [ 0 ] ; intrm_sf_mf_960 = ( ( ( 1.0 -
t3125 ) - t2697 ) * t2576_idx_0 + t2567_idx_0 * t3125 ) + t2585_idx_0 * t2697
; t4254 = ( t4254 + t3127 ) / 2.0 * 0.32 ; intrm_sf_mf_939 = t3185 / ( t4254
== 0.0 ? 1.0E-16 : t4254 ) ; t3083 = intrm_sf_mf_939 >= 0.0 ? intrm_sf_mf_939
: - intrm_sf_mf_939 ; t3092 = t3083 > 1000.0 ? t3083 : 1000.0 ; t4254 =
intrm_sf_mf_1192 + intrm_sf_mf_960 ; if ( t4254 / 2.0 > 0.5 ) { zc_int10 = (
intrm_sf_mf_1192 + intrm_sf_mf_960 ) / 2.0 ; } else { zc_int10 = 0.5 ; }
t4258 = pmf_log10 ( 6.9 / ( t3092 == 0.0 ? 1.0E-16 : t3092 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3092 == 0.0 ? 1.0E-16 : t3092
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_992 = 1.0 / ( t4258 == 0.0
? 1.0E-16 : t4258 ) ; t4262 = ( pmf_pow ( zc_int10 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( intrm_sf_mf_992 / 8.0 ) * 12.7 + 1.0 ; t3092 = ( t3092 -
1000.0 ) * ( intrm_sf_mf_992 / 8.0 ) * zc_int10 / ( t4262 == 0.0 ? 1.0E-16 :
t4262 ) ; zc_int10 = ( t3083 - 2000.0 ) / 2000.0 ; intrm_sf_mf_992 = zc_int10
* zc_int10 * 3.0 - zc_int10 * zc_int10 * zc_int10 * 2.0 ; if ( t3083 <=
2000.0 ) { zc_int10 = 3.66 ; } else if ( t3083 >= 4000.0 ) { zc_int10 = t3092
; } else { zc_int10 = ( 1.0 - intrm_sf_mf_992 ) * 3.66 + t3092 *
intrm_sf_mf_992 ; } t4258 = t4254 / 2.0 ; if ( t3083 > zc_int10 *
10.709248339636167 / 0.32 / ( t4258 == 0.0 ? 1.0E-16 : t4258 ) / 30.0 ) {
t4288 = ( intrm_sf_mf_1192 + intrm_sf_mf_960 ) / 2.0 ; t3092 = zc_int10 *
10.709248339636167 / ( t3083 == 0.0 ? 1.0E-16 : t3083 ) / 0.32 / ( t4288 ==
0.0 ? 1.0E-16 : t4288 ) ; } else { t3092 = 30.0 ; } t3083 = ( X [ 31ULL ] - X
[ 358ULL ] ) * ( 1.0 - exp ( - t3092 ) ) ; intrm_sf_mf_939 = intrm_sf_mf_939
* 0.32 / 0.01 * ( t4254 / 2.0 ) * ( ( intrm_sf_mf_1219 + t3148 ) / 2.0 ) *
t3083 ; t4262 = ( t3196 + t3127 ) / 2.0 * 0.32 ; t3083 = - piece350 * 0.01 /
( t4262 == 0.0 ? 1.0E-16 : t4262 ) ; t3092 = t3083 >= 0.0 ? t3083 : - t3083 ;
zc_int10 = t3092 > 1000.0 ? t3092 : 1000.0 ; t4254 = intrm_sf_mf_1047 +
intrm_sf_mf_960 ; if ( t4254 / 2.0 > 0.5 ) { intrm_sf_mf_992 = (
intrm_sf_mf_1047 + intrm_sf_mf_960 ) / 2.0 ; } else { intrm_sf_mf_992 = 0.5 ;
} t4258 = pmf_log10 ( 6.9 / ( zc_int10 == 0.0 ? 1.0E-16 : zc_int10 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int10 == 0.0 ? 1.0E-16 :
zc_int10 ) + 0.00017169489553429715 ) * 3.24 ; zc_int338 = 1.0 / ( t4258 ==
0.0 ? 1.0E-16 : t4258 ) ; t4262 = ( pmf_pow ( intrm_sf_mf_992 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( zc_int338 / 8.0 ) * 12.7 + 1.0 ;
zc_int10 = ( zc_int10 - 1000.0 ) * ( zc_int338 / 8.0 ) * intrm_sf_mf_992 / (
t4262 == 0.0 ? 1.0E-16 : t4262 ) ; intrm_sf_mf_992 = ( t3092 - 2000.0 ) /
2000.0 ; zc_int338 = intrm_sf_mf_992 * intrm_sf_mf_992 * 3.0 -
intrm_sf_mf_992 * intrm_sf_mf_992 * intrm_sf_mf_992 * 2.0 ; if ( t3092 <=
2000.0 ) { intrm_sf_mf_992 = 3.66 ; } else if ( t3092 >= 4000.0 ) {
intrm_sf_mf_992 = zc_int10 ; } else { intrm_sf_mf_992 = ( 1.0 - zc_int338 ) *
3.66 + zc_int10 * zc_int338 ; } t4258 = t4254 / 2.0 ; if ( t3092 >
intrm_sf_mf_992 * 10.709248339636167 / 0.32 / ( t4258 == 0.0 ? 1.0E-16 :
t4258 ) / 30.0 ) { t4288 = ( intrm_sf_mf_1047 + intrm_sf_mf_960 ) / 2.0 ;
zc_int10 = intrm_sf_mf_992 * 10.709248339636167 / ( t3092 == 0.0 ? 1.0E-16 :
t3092 ) / 0.32 / ( t4288 == 0.0 ? 1.0E-16 : t4288 ) ; } else { zc_int10 =
30.0 ; } intrm_sf_mf_960 = ( X [ 31ULL ] - X [ 344ULL ] ) * ( 1.0 - exp ( -
zc_int10 ) ) ; t3083 = t3083 * 0.32 / 0.01 * ( t4254 / 2.0 ) * ( ( t2703 +
t3148 ) / 2.0 ) * intrm_sf_mf_960 ; intrm_sf_mf_960 = ( zc_int350 - - 20.0 )
/ 40.0 ; t3092 = intrm_sf_mf_960 * intrm_sf_mf_960 * 3.0 - intrm_sf_mf_960 *
intrm_sf_mf_960 * intrm_sf_mf_960 * 2.0 ; if ( zc_int350 <= - 20.0 ) {
intrm_sf_mf_960 = t3083 * 0.001 ; } else if ( zc_int350 >= 20.0 ) {
intrm_sf_mf_960 = intrm_sf_mf_939 * 0.001 ; } else { intrm_sf_mf_960 = ( (
1.0 - t3092 ) * t3083 + intrm_sf_mf_939 * t3092 ) * 0.001 ; } t1907 [ 0ULL ]
= X [ 363ULL ] ; tlu2_linear_linear_prelookup ( & mcb_efOut . mField0 [ 0ULL
] , & mcb_efOut . mField1 [ 0ULL ] , & mcb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t192 = mcb_efOut ; tlu2_1d_linear_linear_value ( &
ncb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = ncb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
ocb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2567_idx_0 = ocb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
pcb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2585_idx_0 = pcb_efOut [ 0 ] ; intrm_sf_mf_939 = ( ( ( 1.0 -
t3114 ) - t3119 ) * t2576_idx_0 + t2567_idx_0 * t3114 ) + t2585_idx_0 * t3119
; t1907 [ 0ULL ] = X [ 366ULL ] ; tlu2_linear_linear_prelookup ( & qcb_efOut
. mField0 [ 0ULL ] , & qcb_efOut . mField1 [ 0ULL ] , & qcb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = qcb_efOut ;
tlu2_1d_linear_linear_value ( & rcb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = rcb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & scb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = scb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tcb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = tcb_efOut [ 0 ] ;
t3083 = ( ( ( 1.0 - t3114 ) - t3119 ) * t2576_idx_0 + t2567_idx_0 * t3114 ) +
t2585_idx_0 * t3119 ; t3092 = X [ 362ULL ] >= 0.0 ? X [ 362ULL ] : - X [
362ULL ] ; zc_int10 = t3092 * 0.01 / ( t3149 == 0.0 ? 1.0E-16 : t3149 ) ;
intrm_sf_mf_992 = zc_int10 >= 1.0 ? zc_int10 : 1.0 ; t4254 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_992 == 0.0 ? 1.0E-16 : intrm_sf_mf_992 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_992 == 0.0 ?
1.0E-16 : intrm_sf_mf_992 ) + 0.00017169489553429715 ) * 3.24 ; zc_int338 = X
[ 362ULL ] * t3127 * 2.9973120849090416 / ( t3153 == 0.0 ? 1.0E-16 : t3153 )
; t3092 = X [ 362ULL ] * t3092 * ( 1.0 / ( t4254 == 0.0 ? 1.0E-16 : t4254 ) )
* 0.046833001326703774 / ( t3156 == 0.0 ? 1.0E-16 : t3156 ) ; intrm_sf_mf_992
= ( zc_int10 - 2000.0 ) / 2000.0 ; zc_int360 = intrm_sf_mf_992 *
intrm_sf_mf_992 * 3.0 - intrm_sf_mf_992 * intrm_sf_mf_992 * intrm_sf_mf_992 *
2.0 ; if ( zc_int10 <= 2000.0 ) { intrm_sf_mf_992 = zc_int338 *
9.9999999999999991E-11 ; } else if ( zc_int10 >= 4000.0 ) { intrm_sf_mf_992 =
t3092 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_992 = ( ( 1.0 -
zc_int360 ) * zc_int338 + t3092 * zc_int360 ) * 9.9999999999999991E-11 ; } if
( M [ 0ULL ] != 0 ) { t2569 [ 0ULL ] = 0ULL ; for ( t2616 = 0ULL ; t2616 <
42ULL ; t2616 ++ ) { t2617 = t2616 / 42ULL ; t2618 = ( t2616 - t2616 % 42ULL
) + t2569 [ t2617 > 0ULL ? 0ULL : t2617 ] ; if ( ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 [ t2616 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 [ t2618 > 41ULL ? 41ULL : t2618 ] * 1.0E-5 ) { t2569 [ t2617 > 0ULL ?
0ULL : t2617 ] = t2616 % 42ULL ; } } t2616 = t2569 [ 0ULL ] ; t3092 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t2616 > 41ULL ? 41ULL : t2616 ] *
1.0E-5 ; } else { t3092 = X [ 83ULL ] ; } if ( M [ 1ULL ] != 0 ) { t2570 [
0ULL ] = 0ULL ; for ( t2616 = 0ULL ; t2616 < 7ULL ; t2616 ++ ) { t2617 =
t2616 / 7ULL ; t2618 = ( t2616 - t2616 % 7ULL ) + t2570 [ t2617 > 0ULL ? 0ULL
: t2617 ] ; if ( nonscalar1 [ t2616 ] * 1.0E-5 < nonscalar1 [ t2618 > 6ULL ?
6ULL : t2618 ] * 1.0E-5 ) { t2570 [ t2617 > 0ULL ? 0ULL : t2617 ] = t2616 %
7ULL ; } } t2616 = t2570 [ 0ULL ] ; t3185 = nonscalar1 [ t2616 > 6ULL ? 6ULL
: t2616 ] * 1.0E-5 ; } else { t3185 = X [ 84ULL ] * X [ 86ULL ] ; } zc_int10
= pmf_sqrt ( t2806 * t2806 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 32ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 193ULL ] * zc_int114 * t2805 * 1.0E-9 ) ; t2806
= - pmf_sqrt ( ( ( real_T ) ( M [ 301ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4335 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 259ULL ] == 0.0
? 1.0E-16 : X [ 259ULL ] ) ) ) * 0.32 ; zc_int114 = piece79 * t2806 *
2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ; if ( t2960 >= 0.0 )
{ zc_int338 = t2806 * 100000.0 ; } else { zc_int338 = - t2806 * 100000.0 ; }
t2960 = zc_int338 * 0.01 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; zc_int360 =
t2978 >= 1.0 ? t2960 : 1.0 ; t4254 = pmf_log10 ( 6.9 / ( zc_int360 == 0.0 ?
1.0E-16 : zc_int360 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
zc_int360 == 0.0 ? 1.0E-16 : zc_int360 ) + 0.00017169489553429715 ) * 3.24 ;
t2806 = t2806 * zc_int338 * ( 1.0 / ( t4254 == 0.0 ? 1.0E-16 : t4254 ) ) *
0.046833001326703774 / ( t2977 == 0.0 ? 1.0E-16 : t2977 ) ; t2960 = ( t2960 -
2000.0 ) / 2000.0 ; zc_int338 = t2960 * t2960 * 3.0 - t2960 * t2960 * t2960 *
2.0 ; if ( t2978 <= 2000.0 ) { t2960 = zc_int114 * 1.0E-5 ; } else if ( t2978
>= 4000.0 ) { t2960 = t2806 * 1.0E-5 ; } else { t2960 = ( ( 1.0 - zc_int338 )
* zc_int114 + t2806 * zc_int338 ) * 1.0E-5 ; } t2806 = pmf_sqrt ( t2820 *
t2820 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 39ULL ] != 0 ) * 2.0 - 1.0
) * X [ 197ULL ] * zc_int117 * t2805 * 1.0E-9 ) ; zc_int114 = pmf_sqrt ( t209
* t209 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 298ULL ] != 0 ) * 2.0 -
1.0 ) * X [ 259ULL ] * zc_int224 * intrm_sf_mf_403 * 1.0E-9 ) ; t4254 = X [
192ULL ] * zc_int114 ; zc_int114 = t4254 / 0.32 * 0.00031622776601683789 +
t2960 ; t4262 = - zc_int114 - zc_int114 * - 0.95 ; t2820 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 - zc_int114 *
- 0.95 ) / ( t4262 == 0.0 ? 1.0E-16 : t4262 ) ; zc_int117 = t2820 * t2820 *
3.0 - t2820 * t2820 * t2820 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 <= zc_int223 *
- 0.95 ) { t2820 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 >= -
zc_int223 ) { t2820 = zc_int114 ; } else { t2820 = ( 1.0 - zc_int117 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 + zc_int114 *
zc_int117 ; } if ( M [ 305ULL ] != 0 ) { zc_int114 = 216.59999999999997 ; }
else { zc_int114 = M [ 306ULL ] != 0 ? 623.15 : U_idx_6 ; } t1907 [ 0ULL ] =
U_idx_5 >= 0.0 ? zc_int114 : X [ 33ULL ] ; tlu2_linear_linear_prelookup ( &
ucb_efOut . mField0 [ 0ULL ] , & ucb_efOut . mField1 [ 0ULL ] , & ucb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t0 = ucb_efOut ;
tlu2_1d_linear_linear_value ( & vcb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = vcb_efOut [ 0 ] ;
zc_int114 = t2576_idx_0 ; t4258 = X [ 272ULL ] * zc_int287 ; zc_int117 = ( (
real_T ) ( M [ 37ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4258 / ( X [ 37ULL ] == 0.0
? 1.0E-16 : X [ 37ULL ] ) ) * ( t4258 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) * ( X [ 282ULL ] / 0.0019634954084936209 ) * ( X [ 282ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t4825 ; t4803 = X [
234ULL ] * zc_int118 ; zc_int118 = ( ( real_T ) ( M [ 181ULL ] != 0 ) * 2.0 -
1.0 ) * ( t4803 / ( X [ 235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] ) ) * (
t4803 / ( X [ 235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] ) ) * ( - X [ 238ULL ]
/ 0.0019634954084936209 ) * ( - X [ 238ULL ] / 0.0019634954084936209 ) / 2.0
* 9.999999999999999E-14 + zc_int51 ; t209 = pmf_sqrt ( zc_int259 * zc_int259
* 9.999999999999999E-14 + ( ( real_T ) ( M [ 307ULL ] != 0 ) * 2.0 - 1.0 ) *
X [ 283ULL ] * zc_int182 * intrm_sf_mf_542 * 1.0E-9 ) ; zc_int224 = -
pmf_sqrt ( ( ( real_T ) ( M [ 50ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4370 / (
t2805 == 0.0 ? 1.0E-16 : t2805 ) / ( X [ 193ULL ] == 0.0 ? 1.0E-16 : X [
193ULL ] ) ) ) * 7.8539816339744827E-5 ; zc_int223 = pmf_sqrt ( t218 * t218 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 309ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 285ULL ] * t3021 * intrm_sf_mf_542 * 1.0E-9 ) ; t2960 = - pmf_sqrt ( ( (
real_T ) ( M [ 310ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4428 / ( intrm_sf_mf_542 ==
0.0 ? 1.0E-16 : intrm_sf_mf_542 ) / ( X [ 283ULL ] == 0.0 ? 1.0E-16 : X [
283ULL ] ) ) ) * 0.0019634954084936209 ; t2978 = t215 * t2960 * 11.2 / (
t4385 == 0.0 ? 1.0E-16 : t4385 ) ; if ( zc_int193 >= 0.0 ) { zc_int259 =
t2960 * 100000.0 ; } else { zc_int259 = - t2960 * 100000.0 ; } zc_int182 =
zc_int259 * 0.05 / ( t4382 == 0.0 ? 1.0E-16 : t4382 ) ; zc_int193 = t217 >=
1.0 ? zc_int182 : 1.0 ; t4288 = pmf_log10 ( 6.9 / ( zc_int193 == 0.0 ?
1.0E-16 : zc_int193 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
zc_int193 == 0.0 ? 1.0E-16 : zc_int193 ) + 2.8767404433520813E-5 ) * 3.24 ;
t2960 = t2960 * zc_int259 * ( 1.0 / ( t4288 == 0.0 ? 1.0E-16 : t4288 ) ) *
0.175 / ( t4399 == 0.0 ? 1.0E-16 : t4399 ) ; zc_int259 = ( zc_int182 - 2000.0
) / 2000.0 ; zc_int182 = zc_int259 * zc_int259 * 3.0 - zc_int259 * zc_int259
* zc_int259 * 2.0 ; zc_int259 = zc_int352 * zc_int224 * 35.2 / ( t2839 == 0.0
? 1.0E-16 : t2839 ) ; if ( t217 <= 2000.0 ) { zc_int193 = t2978 * 1.0E-5 ; }
else if ( t217 >= 4000.0 ) { zc_int193 = t2960 * 1.0E-5 ; } else { zc_int193
= ( ( 1.0 - zc_int182 ) * t2978 + t2960 * zc_int182 ) * 1.0E-5 ; } t4288 = X
[ 282ULL ] * t209 ; t209 = t4288 / 0.0019634954084936209 *
0.00031622776601683789 + zc_int193 ; t4374 = - t209 - t209 * - 0.95 ; t2960 =
( - t3015 - t209 * - 0.95 ) / ( t4374 == 0.0 ? 1.0E-16 : t4374 ) ; t2978 =
t2960 * t2960 * 3.0 - t2960 * t2960 * t2960 * 2.0 ; if ( - t3015 <= t213 * -
0.95 ) { t2960 = t3015 ; } else if ( - t3015 >= - t213 ) { t2960 = t209 ; }
else { t2960 = ( 1.0 - t2978 ) * t3015 + t209 * t2978 ; } t209 = - pmf_sqrt (
( ( real_T ) ( M [ 311ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4414 / (
intrm_sf_mf_542 == 0.0 ? 1.0E-16 : intrm_sf_mf_542 ) / ( X [ 285ULL ] == 0.0
? 1.0E-16 : X [ 285ULL ] ) ) ) * 0.0019634954084936209 ; t2978 = t215 * t209
* 11.2 / ( t4385 == 0.0 ? 1.0E-16 : t4385 ) ; if ( t3008 >= 0.0 ) { zc_int182
= t209 * 100000.0 ; } else { zc_int182 = - t209 * 100000.0 ; } t213 =
zc_int182 * 0.05 / ( t4382 == 0.0 ? 1.0E-16 : t4382 ) ; t215 = t3026 >= 1.0 ?
t213 : 1.0 ; if ( t2811 >= 0.0 ) { zc_int193 = zc_int224 * 100000.0 ; } else
{ zc_int193 = - zc_int224 * 100000.0 ; } t4302 = pmf_log10 ( 6.9 / ( t215 ==
0.0 ? 1.0E-16 : t215 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t215
== 0.0 ? 1.0E-16 : t215 ) + 2.8767404433520813E-5 ) * 3.24 ; t2811 = t209 *
zc_int182 * ( 1.0 / ( t4302 == 0.0 ? 1.0E-16 : t4302 ) ) * 0.175 / ( t4399 ==
0.0 ? 1.0E-16 : t4399 ) ; t209 = ( t213 - 2000.0 ) / 2000.0 ; zc_int182 =
t209 * t209 * 3.0 - t209 * t209 * t209 * 2.0 ; if ( t3026 <= 2000.0 ) { t209
= t2978 * 1.0E-5 ; } else if ( t3026 >= 4000.0 ) { t209 = t2811 * 1.0E-5 ; }
else { t209 = ( ( 1.0 - zc_int182 ) * t2978 + t2811 * zc_int182 ) * 1.0E-5 ;
} t4302 = - ( X [ 238ULL ] * zc_int223 ) ; t2811 = t4302 /
0.0019634954084936209 * 0.00031622776601683789 + t209 ; t4307 = - t2811 -
t2811 * - 0.95 ; t209 = ( - t3024 - t2811 * - 0.95 ) / ( t4307 == 0.0 ?
1.0E-16 : t4307 ) ; zc_int223 = t209 * t209 * 3.0 - t209 * t209 * t209 * 2.0
; if ( - t3024 <= t220 * - 0.95 ) { t209 = t3024 ; } else if ( - t3024 >= -
t220 ) { t209 = t2811 ; } else { t209 = ( 1.0 - zc_int223 ) * t3024 + t2811 *
zc_int223 ; } t4374 = X [ 301ULL ] * t2985 ; t2811 = ( ( real_T ) ( M [
315ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4374 / 1.01325 ) * ( t4374 / 1.01325 ) * (
X [ 307ULL ] / 0.0019634954084936209 ) * ( X [ 307ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2996 ; zc_int223 =
zc_int193 * 0.01 / ( t2841 == 0.0 ? 1.0E-16 : t2841 ) ; t4446 = X [ 296ULL ]
* zc_int308 ; t2978 = ( ( real_T ) ( M [ 317ULL ] != 0 ) * 2.0 - 1.0 ) * (
t4446 / ( X [ 297ULL ] == 0.0 ? 1.0E-16 : X [ 297ULL ] ) ) * ( t4446 / ( X [
297ULL ] == 0.0 ? 1.0E-16 : X [ 297ULL ] ) ) * ( X [ 319ULL ] /
0.0019634954084936209 ) * ( X [ 319ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3108 ; t4370 = X [ 315ULL ] * zc_int342 ; t2985 = (
( real_T ) ( M [ 318ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4370 / ( t3058 == 0.0 ?
1.0E-16 : t3058 ) ) * ( t4370 / ( t3058 == 0.0 ? 1.0E-16 : t3058 ) ) * ( - X
[ 307ULL ] / 0.0019634954084936209 ) * ( - X [ 307ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + zc_int183 ; zc_int182
= pmf_sqrt ( zc_int293 * zc_int293 * 9.999999999999999E-14 + ( ( real_T ) ( M
[ 320ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 320ULL ] * t3063 * intrm_sf_mf_692 *
1.0E-9 ) ; t213 = pmf_sqrt ( zc_int335 * zc_int335 * 9.999999999999999E-14 +
( ( real_T ) ( M [ 321ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 324ULL ] * t3072 *
intrm_sf_mf_692 * 1.0E-9 ) ; t215 = - pmf_sqrt ( ( ( real_T ) ( M [ 322ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t3065 / ( intrm_sf_mf_692 == 0.0 ? 1.0E-16 :
intrm_sf_mf_692 ) / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) ) *
0.0019634954084936209 ; t217 = zc_int276 * t215 * 35.2 / ( t3073 == 0.0 ?
1.0E-16 : t3073 ) ; if ( zc_int275 >= 0.0 ) { t218 = t215 * 100000.0 ; } else
{ t218 = - t215 * 100000.0 ; } t3021 = t218 * 0.05 / ( t3069 == 0.0 ? 1.0E-16
: t3069 ) ; t220 = zc_int295 >= 1.0 ? t3021 : 1.0 ; t4335 = pmf_log10 ( 6.9 /
( t220 == 0.0 ? 1.0E-16 : t220 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t220 == 0.0 ? 1.0E-16 : t220 ) + 2.8767404433520813E-5 ) * 3.24 ; t3008 =
t2822 >= 1.0 ? zc_int223 : 1.0 ; t215 = t215 * t218 * ( 1.0 / ( t4335 == 0.0
? 1.0E-16 : t4335 ) ) * 0.55 / ( t3076 == 0.0 ? 1.0E-16 : t3076 ) ; t218 = (
t3021 - 2000.0 ) / 2000.0 ; t3021 = t218 * t218 * 3.0 - t218 * t218 * t218 *
2.0 ; if ( zc_int295 <= 2000.0 ) { t218 = t217 * 1.0E-5 ; } else if (
zc_int295 >= 4000.0 ) { t218 = t215 * 1.0E-5 ; } else { t218 = ( ( 1.0 -
t3021 ) * t217 + t215 * t3021 ) * 1.0E-5 ; } t4335 = X [ 319ULL ] * zc_int182
; zc_int182 = t4335 / 0.0019634954084936209 * 0.00031622776601683789 + t218 ;
U_idx_1 = - zc_int182 - zc_int182 * - 0.95 ; t215 = ( - t3066 - zc_int182 * -
0.95 ) / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t217 = t215 * t215 * 3.0 -
t215 * t215 * t215 * 2.0 ; if ( - t3066 <= zc_int25 * - 0.95 ) { t215 = t3066
; } else if ( - t3066 >= - zc_int25 ) { t215 = zc_int182 ; } else { t215 = (
1.0 - t217 ) * t3066 + zc_int182 * t217 ; } zc_int182 = - pmf_sqrt ( ( (
real_T ) ( M [ 323ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3085 / ( intrm_sf_mf_692 ==
0.0 ? 1.0E-16 : intrm_sf_mf_692 ) / ( X [ 324ULL ] == 0.0 ? 1.0E-16 : X [
324ULL ] ) ) ) * 0.0019634954084936209 ; t217 = zc_int276 * zc_int182 * 35.2
/ ( t3073 == 0.0 ? 1.0E-16 : t3073 ) ; t4349 = pmf_log10 ( 6.9 / ( t3008 ==
0.0 ? 1.0E-16 : t3008 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t3008 == 0.0 ? 1.0E-16 : t3008 ) + 0.00017169489553429715 ) * 3.24 ; t218 =
1.0 / ( t4349 == 0.0 ? 1.0E-16 : t4349 ) ; if ( t3059 >= 0.0 ) { t3021 =
zc_int182 * 100000.0 ; } else { t3021 = - zc_int182 * 100000.0 ; } t220 =
t3021 * 0.05 / ( t3069 == 0.0 ? 1.0E-16 : t3069 ) ; t3008 = t3077 >= 1.0 ?
t220 : 1.0 ; t4349 = pmf_log10 ( 6.9 / ( t3008 == 0.0 ? 1.0E-16 : t3008 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3008 == 0.0 ? 1.0E-16 : t3008
) + 2.8767404433520813E-5 ) * 3.24 ; zc_int182 = zc_int182 * t3021 * ( 1.0 /
( t4349 == 0.0 ? 1.0E-16 : t4349 ) ) * 0.55 / ( t3076 == 0.0 ? 1.0E-16 :
t3076 ) ; t3021 = ( t220 - 2000.0 ) / 2000.0 ; t220 = t3021 * t3021 * 3.0 -
t3021 * t3021 * t3021 * 2.0 ; if ( t3077 <= 2000.0 ) { t3021 = t217 * 1.0E-5
; } else if ( t3077 >= 4000.0 ) { t3021 = zc_int182 * 1.0E-5 ; } else { t3021
= ( ( 1.0 - t220 ) * t217 + zc_int182 * t220 ) * 1.0E-5 ; } t4349 = - ( X [
307ULL ] * t213 ) ; zc_int182 = t4349 / 0.0019634954084936209 *
0.00031622776601683789 + t3021 ; t4428 = - zc_int182 - zc_int182 * - 0.95 ;
t213 = ( - t3075 - zc_int182 * - 0.95 ) / ( t4428 == 0.0 ? 1.0E-16 : t4428 )
; zc_int224 = zc_int224 * zc_int193 * t218 * 0.55 / ( t2844 == 0.0 ? 1.0E-16
: t2844 ) ; zc_int193 = t213 * t213 * 3.0 - t213 * t213 * t213 * 2.0 ; if ( -
t3075 <= t3074 * - 0.95 ) { t213 = t3075 ; } else if ( - t3075 >= - t3074 ) {
t213 = zc_int182 ; } else { t213 = ( 1.0 - zc_int193 ) * t3075 + zc_int182 *
zc_int193 ; } zc_int182 = ( ( real_T ) ( M [ 318ULL ] != 0 ) * 2.0 - 1.0 ) *
( t4370 / ( t3058 == 0.0 ? 1.0E-16 : t3058 ) ) * ( t4370 / ( t3058 == 0.0 ?
1.0E-16 : t3058 ) ) * ( X [ 307ULL ] / 0.0019634954084936209 ) * ( X [ 307ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + zc_int183 ;
zc_int183 = ( ( real_T ) ( M [ 315ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4374 /
1.01325 ) * ( t4374 / 1.01325 ) * ( - X [ 307ULL ] / 0.0019634954084936209 )
* ( - X [ 307ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2996 ; t2996 = ( t3058 - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 327ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t3138 / ( zc_int316 == 0.0 ? 1.0E-16 : zc_int316 ) )
) * t3110 * 0.64 ; zc_int193 = pmf_sqrt ( ( ( real_T ) ( M [ 329ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3135 / ( intrm_sf_mf_837 == 0.0 ? 1.0E-16 :
intrm_sf_mf_837 ) / ( X [ 337ULL ] == 0.0 ? 1.0E-16 : X [ 337ULL ] ) ) ) *
t3110 * 0.64 ; t4370 = zc_int193 - zc_int193 * 0.95 ; t217 = ( t2996 -
zc_int193 * 0.95 ) / ( t4370 == 0.0 ? 1.0E-16 : t4370 ) ; t218 = t217 * t217
* 3.0 - t217 * t217 * t217 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * 0.95 ) {
t217 = t2996 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ) { t217 =
zc_int193 * 100000.0 ; } else { t217 = ( ( 1.0 - t218 ) * t2996 + zc_int193 *
t218 ) * 100000.0 ; } t218 = ( - t2996 - zc_int193 * 0.95 ) / ( t4370 == 0.0
? 1.0E-16 : t4370 ) ; zc_int223 = ( zc_int223 - 2000.0 ) / 2000.0 ; t3021 =
t218 * t218 * 3.0 - t218 * t218 * t218 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 * 0.95 ) {
t218 = t2996 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 ) { t218 = -
zc_int193 * 100000.0 ; } else { t218 = ( ( 1.0 - t3021 ) * t2996 + -
zc_int193 * t3021 ) * 100000.0 ; } t4374 = X [ 358ULL ] * piece352 ; t4428 =
X [ 344ULL ] * piece416 ; zc_int193 = ( ( real_T ) ( M [ 334ULL ] != 0 ) *
2.0 - 1.0 ) * ( t4428 / ( X [ 345ULL ] == 0.0 ? 1.0E-16 : X [ 345ULL ] ) ) *
( t4428 / ( X [ 345ULL ] == 0.0 ? 1.0E-16 : X [ 345ULL ] ) ) * ( X [ 365ULL ]
/ 0.32 ) * ( X [ 365ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2754 ;
t3021 = pmf_sqrt ( zc_int39 * zc_int39 * 9.999999999999999E-14 + ( ( real_T )
( M [ 335ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 363ULL ] * t3123 * t3121 * 1.0E-9 )
; t220 = pmf_sqrt ( t3132 * t3132 * 9.999999999999999E-14 + ( ( real_T ) ( M
[ 336ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 366ULL ] * t3133 * t3121 * 1.0E-9 ) ;
t3008 = - pmf_sqrt ( ( ( real_T ) ( M [ 337ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3145 / ( t3121 == 0.0 ? 1.0E-16 : t3121 ) / ( X [ 363ULL ] == 0.0 ? 1.0E-16
: X [ 363ULL ] ) ) ) * 0.32 ; t3026 = t3127 * t3008 * 2.9973120849090416 / (
t3153 == 0.0 ? 1.0E-16 : t3153 ) ; if ( zc_int6 >= 0.0 ) { zc_int287 = t3008
* 100000.0 ; } else { zc_int287 = - t3008 * 100000.0 ; } zc_int293 =
zc_int287 * 0.01 / ( t3149 == 0.0 ? 1.0E-16 : t3149 ) ; if ( M [ 105ULL ] !=
0 ) { t3063 = 4.03416E-7 ; } else { t3063 = X [ 82ULL ] * X [ 85ULL ] ; }
zc_int25 = zc_int223 * zc_int223 * 3.0 - zc_int223 * zc_int223 * zc_int223 *
2.0 ; zc_int223 = t3130 >= 1.0 ? zc_int293 : 1.0 ; t4399 = pmf_log10 ( 6.9 /
( zc_int223 == 0.0 ? 1.0E-16 : zc_int223 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int223 == 0.0 ? 1.0E-16 : zc_int223 ) +
0.00017169489553429715 ) * 3.24 ; zc_int223 = t3008 * zc_int287 * ( 1.0 / (
t4399 == 0.0 ? 1.0E-16 : t4399 ) ) * 0.046833001326703774 / ( t3156 == 0.0 ?
1.0E-16 : t3156 ) ; t3008 = ( zc_int293 - 2000.0 ) / 2000.0 ; zc_int287 =
t3008 * t3008 * 3.0 - t3008 * t3008 * t3008 * 2.0 ; if ( t3130 <= 2000.0 ) {
t3008 = t3026 * 1.0E-5 ; } else if ( t3130 >= 4000.0 ) { t3008 = zc_int223 *
1.0E-5 ; } else { t3008 = ( ( 1.0 - zc_int287 ) * t3026 + zc_int223 *
zc_int287 ) * 1.0E-5 ; } t4399 = X [ 362ULL ] * t3021 ; zc_int223 = t4399 /
0.32 * 0.00031622776601683789 + t3008 ; t4414 = - zc_int223 - zc_int223 * -
0.95 ; t3021 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 - zc_int223 * -
0.95 ) / ( t4414 == 0.0 ? 1.0E-16 : t4414 ) ; t3008 = t3021 * t3021 * 3.0 -
t3021 * t3021 * t3021 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 <= t3124 * -
0.95 ) { t3021 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 >= - t3124 ) {
t3021 = zc_int223 ; } else { t3021 = ( 1.0 - t3008 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 + zc_int223 *
t3008 ; } if ( t2822 <= 2000.0 ) { zc_int223 = zc_int259 * 1.0E-5 ; } else if
( t2822 >= 4000.0 ) { zc_int223 = zc_int224 * 1.0E-5 ; } else { zc_int223 = (
( 1.0 - zc_int25 ) * zc_int259 + zc_int224 * zc_int25 ) * 1.0E-5 ; } t2822 =
- pmf_sqrt ( ( ( real_T ) ( M [ 338ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3165 / (
t3121 == 0.0 ? 1.0E-16 : t3121 ) / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [
366ULL ] ) ) ) * 0.32 ; zc_int224 = t3127 * t2822 * 2.9973120849090416 / (
t3153 == 0.0 ? 1.0E-16 : t3153 ) ; if ( t2700 >= 0.0 ) { zc_int259 = t2822 *
100000.0 ; } else { zc_int259 = - t2822 * 100000.0 ; } t3008 = zc_int259 *
0.01 / ( t3149 == 0.0 ? 1.0E-16 : t3149 ) ; t3026 = t3143 >= 1.0 ? t3008 :
1.0 ; piece350 = pmf_log10 ( 6.9 / ( t3026 == 0.0 ? 1.0E-16 : t3026 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t3026 == 0.0 ? 1.0E-16 : t3026
) + 0.00017169489553429715 ) * 3.24 ; t2822 = t2822 * zc_int259 * ( 1.0 / (
piece350 == 0.0 ? 1.0E-16 : piece350 ) ) * 0.046833001326703774 / ( t3156 ==
0.0 ? 1.0E-16 : t3156 ) ; zc_int259 = ( t3008 - 2000.0 ) / 2000.0 ; t3008 =
zc_int259 * zc_int259 * 3.0 - zc_int259 * zc_int259 * zc_int259 * 2.0 ; if (
t3143 <= 2000.0 ) { zc_int259 = zc_int224 * 1.0E-5 ; } else if ( t3143 >=
4000.0 ) { zc_int259 = t2822 * 1.0E-5 ; } else { zc_int259 = ( ( 1.0 - t3008
) * zc_int224 + t2822 * t3008 ) * 1.0E-5 ; } piece350 = t2800 * zc_int10 ;
t2822 = piece350 / 7.8539816339744827E-5 * 0.00031622776601683789 + zc_int223
; t4414 = X [ 365ULL ] * t220 ; zc_int224 = t4414 / 0.32 *
0.00031622776601683789 + zc_int259 ; U_idx_1 = - zc_int224 - zc_int224 * -
0.95 ; zc_int223 = ( - t3139 - zc_int224 * - 0.95 ) / ( U_idx_1 == 0.0 ?
1.0E-16 : U_idx_1 ) ; zc_int259 = zc_int223 * zc_int223 * 3.0 - zc_int223 *
zc_int223 * zc_int223 * 2.0 ; if ( - t3139 <= piece196 * - 0.95 ) { zc_int223
= t3139 ; } else if ( - t3139 >= - piece196 ) { zc_int223 = zc_int224 ; }
else { zc_int223 = ( 1.0 - zc_int259 ) * t3139 + zc_int224 * zc_int259 ; }
zc_int224 = ( ( real_T ) ( M [ 334ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4428 / ( X
[ 345ULL ] == 0.0 ? 1.0E-16 : X [ 345ULL ] ) ) * ( t4428 / ( X [ 345ULL ] ==
0.0 ? 1.0E-16 : X [ 345ULL ] ) ) * ( - X [ 365ULL ] / 0.32 ) * ( - X [ 365ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2754 ; t2754 = ( ( real_T ) ( M [
317ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4446 / ( X [ 297ULL ] == 0.0 ? 1.0E-16 : X
[ 297ULL ] ) ) * ( t4446 / ( X [ 297ULL ] == 0.0 ? 1.0E-16 : X [ 297ULL ] ) )
* ( - X [ 319ULL ] / 0.32 ) * ( - X [ 319ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t3108 ; zc_int259 = pmf_sqrt ( piece418 * piece418 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 343ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 381ULL ] * t3195 * intrm_sf_mf_1006 * 1.0E-9 ) ; t220 = pmf_sqrt ( t4444 *
t4444 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 344ULL ] != 0 ) * 2.0 -
1.0 ) * X [ 383ULL ] * t4458 * intrm_sf_mf_1006 * 1.0E-9 ) ; t3008 = -
pmf_sqrt ( ( ( real_T ) ( M [ 345ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3197 / (
intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ; t3026 = piece428 * t3008 *
2.9973120849090416 / ( t3205 == 0.0 ? 1.0E-16 : t3205 ) ; t4458 = - t2822 -
t2822 * - 0.95 ; zc_int287 = ( - t2819 - t2822 * - 0.95 ) / ( t4458 == 0.0 ?
1.0E-16 : t4458 ) ; if ( t197 >= 0.0 ) { zc_int293 = t3008 * 100000.0 ; }
else { zc_int293 = - t3008 * 100000.0 ; } zc_int25 = zc_int293 * 0.01 / (
t3201 == 0.0 ? 1.0E-16 : t3201 ) ; zc_int276 = t4839 >= 1.0 ? zc_int25 : 1.0
; t4444 = pmf_log10 ( 6.9 / ( zc_int276 == 0.0 ? 1.0E-16 : zc_int276 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int276 == 0.0 ? 1.0E-16 :
zc_int276 ) + 0.00017169489553429715 ) * 3.24 ; t3008 = t3008 * zc_int293 * (
1.0 / ( t4444 == 0.0 ? 1.0E-16 : t4444 ) ) * 0.046833001326703774 / ( t3208
== 0.0 ? 1.0E-16 : t3208 ) ; zc_int293 = ( zc_int25 - 2000.0 ) / 2000.0 ;
zc_int25 = zc_int293 * zc_int293 * 3.0 - zc_int293 * zc_int293 * zc_int293 *
2.0 ; if ( t4839 <= 2000.0 ) { zc_int293 = t3026 * 1.0E-5 ; } else if ( t4839
>= 4000.0 ) { zc_int293 = t3008 * 1.0E-5 ; } else { zc_int293 = ( ( 1.0 -
zc_int25 ) * t3026 + t3008 * zc_int25 ) * 1.0E-5 ; } t4444 = - ( X [ 365ULL ]
* zc_int259 ) ; zc_int259 = t4444 / 0.32 * 0.00031622776601683789 + zc_int293
; t4446 = - zc_int259 - zc_int259 * - 0.95 ; t3008 = ( - t3198 - zc_int259 *
- 0.95 ) / ( t4446 == 0.0 ? 1.0E-16 : t4446 ) ; t3026 = zc_int287 * zc_int287
* 3.0 - zc_int287 * zc_int287 * zc_int287 * 2.0 ; zc_int287 = t3008 * t3008 *
3.0 - t3008 * t3008 * t3008 * 2.0 ; if ( - t3198 <= piece423 * - 0.95 ) {
t3008 = t3198 ; } else if ( - t3198 >= - piece423 ) { t3008 = zc_int259 ; }
else { t3008 = ( 1.0 - zc_int287 ) * t3198 + zc_int259 * zc_int287 ; }
zc_int259 = - pmf_sqrt ( ( ( real_T ) ( M [ 346ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3217 / ( intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) / ( X [
383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ] ) ) ) * 0.32 ; zc_int287 = piece428
* zc_int259 * 2.9973120849090416 / ( t3205 == 0.0 ? 1.0E-16 : t3205 ) ; if (
t4465 >= 0.0 ) { zc_int293 = zc_int259 * 100000.0 ; } else { zc_int293 = -
zc_int259 * 100000.0 ; } zc_int25 = zc_int293 * 0.01 / ( t3201 == 0.0 ?
1.0E-16 : t3201 ) ; zc_int276 = t4475 >= 1.0 ? zc_int25 : 1.0 ; t4458 =
pmf_log10 ( 6.9 / ( zc_int276 == 0.0 ? 1.0E-16 : zc_int276 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int276 == 0.0 ? 1.0E-16 :
zc_int276 ) + 0.00017169489553429715 ) * 3.24 ; zc_int259 = zc_int259 *
zc_int293 * ( 1.0 / ( t4458 == 0.0 ? 1.0E-16 : t4458 ) ) *
0.046833001326703774 / ( t3208 == 0.0 ? 1.0E-16 : t3208 ) ; zc_int293 = (
zc_int25 - 2000.0 ) / 2000.0 ; if ( - t2819 <= zc_int258 * - 0.95 ) {
zc_int25 = t2819 ; } else if ( - t2819 >= - zc_int258 ) { zc_int25 = t2822 ;
} else { zc_int25 = ( 1.0 - t3026 ) * t2819 + t2822 * t3026 ; } zc_int258 =
zc_int293 * zc_int293 * 3.0 - zc_int293 * zc_int293 * zc_int293 * 2.0 ; if (
t4475 <= 2000.0 ) { t2822 = zc_int287 * 1.0E-5 ; } else if ( t4475 >= 4000.0
) { t2822 = zc_int259 * 1.0E-5 ; } else { t2822 = ( ( 1.0 - zc_int258 ) *
zc_int287 + zc_int259 * zc_int258 ) * 1.0E-5 ; } t4458 = - ( X [ 319ULL ] *
t220 ) ; zc_int258 = t4458 / 0.32 * 0.00031622776601683789 + t2822 ; t4475 =
- zc_int258 - zc_int258 * - 0.95 ; t2822 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 - zc_int258 *
- 0.95 ) / ( t4475 == 0.0 ? 1.0E-16 : t4475 ) ; zc_int259 = t2822 * t2822 *
3.0 - t2822 * t2822 * t2822 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 <= t4651 * -
0.95 ) { t2822 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 >= - t4651 )
{ t2822 = zc_int258 ; } else { t2822 = ( 1.0 - zc_int259 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 + zc_int258 *
zc_int259 ; } if ( M [ 350ULL ] != 0 ) { zc_int258 = 216.59999999999997 ; }
else { zc_int258 = M [ 351ULL ] != 0 ? 623.15 : U_idx_9 ; } t1907 [ 0ULL ] =
U_idx_8 >= 0.0 ? zc_int258 : X [ 50ULL ] ; tlu2_linear_linear_prelookup ( &
wcb_efOut . mField0 [ 0ULL ] , & wcb_efOut . mField1 [ 0ULL ] , & wcb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [
0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t0 = wcb_efOut ;
tlu2_1d_linear_linear_value ( & xcb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = xcb_efOut [ 0 ] ;
zc_int258 = t2576_idx_0 ; t4651 = X [ 397ULL ] * t4764 ; zc_int259 = ( (
real_T ) ( M [ 34ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4651 / ( X [ 54ULL ] == 0.0
? 1.0E-16 : X [ 54ULL ] ) ) * ( t4651 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) ) * ( X [ 407ULL ] / 0.0019634954084936209 ) * ( X [ 407ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3187 ; t220 = -
pmf_sqrt ( ( ( real_T ) ( M [ 61ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2853 / (
t2805 == 0.0 ? 1.0E-16 : t2805 ) / ( X [ 197ULL ] == 0.0 ? 1.0E-16 : X [
197ULL ] ) ) ) * 7.8539816339744827E-5 ; zc_int287 = pmf_sqrt ( t4491 * t4491
* 9.999999999999999E-14 + ( ( real_T ) ( M [ 352ULL ] != 0 ) * 2.0 - 1.0 ) *
X [ 408ULL ] * t4502 * intrm_sf_mf_1145 * 1.0E-9 ) ; zc_int293 = pmf_sqrt (
t4654 * t4654 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 353ULL ] != 0 ) *
2.0 - 1.0 ) * X [ 410ULL ] * t4535 * intrm_sf_mf_1145 * 1.0E-9 ) ; zc_int276
= - pmf_sqrt ( ( ( real_T ) ( M [ 354ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3245 / (
intrm_sf_mf_1145 == 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) / ( X [ 408ULL ] ==
0.0 ? 1.0E-16 : X [ 408ULL ] ) ) ) * 0.0019634954084936209 ; zc_int275 =
t4513 * zc_int276 * 11.2 / ( t3253 == 0.0 ? 1.0E-16 : t3253 ) ; if ( t4594 >=
0.0 ) { zc_int295 = zc_int276 * 100000.0 ; } else { zc_int295 = - zc_int276 *
100000.0 ; } zc_int335 = zc_int295 * 0.05 / ( t3249 == 0.0 ? 1.0E-16 : t3249
) ; t3072 = t4528 >= 1.0 ? zc_int335 : 1.0 ; t4491 = pmf_log10 ( 6.9 / (
t3072 == 0.0 ? 1.0E-16 : t3072 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t3072 == 0.0 ? 1.0E-16 : t3072 ) + 2.8767404433520813E-5 ) * 3.24 ;
zc_int276 = zc_int276 * zc_int295 * ( 1.0 / ( t4491 == 0.0 ? 1.0E-16 : t4491
) ) * 0.175 / ( t3256 == 0.0 ? 1.0E-16 : t3256 ) ; zc_int352 = zc_int352 *
t220 * 35.2 / ( t2839 == 0.0 ? 1.0E-16 : t2839 ) ; zc_int295 = ( zc_int335 -
2000.0 ) / 2000.0 ; zc_int335 = zc_int295 * zc_int295 * 3.0 - zc_int295 *
zc_int295 * zc_int295 * 2.0 ; if ( t4528 <= 2000.0 ) { zc_int295 = zc_int275
* 1.0E-5 ; } else if ( t4528 >= 4000.0 ) { zc_int295 = zc_int276 * 1.0E-5 ; }
else { zc_int295 = ( ( 1.0 - zc_int335 ) * zc_int275 + zc_int276 * zc_int335
) * 1.0E-5 ; } t4491 = X [ 407ULL ] * zc_int287 ; zc_int287 = t4491 /
0.0019634954084936209 * 0.00031622776601683789 + zc_int295 ; t4594 = -
zc_int287 - zc_int287 * - 0.95 ; zc_int276 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 - zc_int287 *
- 0.95 ) / ( t4594 == 0.0 ? 1.0E-16 : t4594 ) ; zc_int275 = zc_int276 *
zc_int276 * 3.0 - zc_int276 * zc_int276 * zc_int276 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 <= t4588 * -
0.95 ) { zc_int276 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 >= - t4588 )
{ zc_int276 = zc_int287 ; } else { zc_int276 = ( 1.0 - zc_int275 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 + zc_int287 *
zc_int275 ; } zc_int287 = - pmf_sqrt ( ( ( real_T ) ( M [ 355ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3265 / ( intrm_sf_mf_1145 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1145 ) / ( X [ 410ULL ] == 0.0 ? 1.0E-16 : X [ 410ULL ] ) ) ) *
0.0019634954084936209 ; zc_int275 = t4513 * zc_int287 * 11.2 / ( t3253 == 0.0
? 1.0E-16 : t3253 ) ; if ( t4566 >= 0.0 ) { zc_int295 = zc_int287 * 100000.0
; } else { zc_int295 = - zc_int287 * 100000.0 ; } if ( t2826 >= 0.0 ) {
zc_int335 = t220 * 100000.0 ; } else { zc_int335 = - t220 * 100000.0 ; }
t2826 = zc_int295 * 0.05 / ( t3249 == 0.0 ? 1.0E-16 : t3249 ) ; t3072 = t4599
>= 1.0 ? t2826 : 1.0 ; t4502 = pmf_log10 ( 6.9 / ( t3072 == 0.0 ? 1.0E-16 :
t3072 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3072 == 0.0 ?
1.0E-16 : t3072 ) + 2.8767404433520813E-5 ) * 3.24 ; zc_int287 = zc_int287 *
zc_int295 * ( 1.0 / ( t4502 == 0.0 ? 1.0E-16 : t4502 ) ) * 0.175 / ( t3256 ==
0.0 ? 1.0E-16 : t3256 ) ; t2826 = ( t2826 - 2000.0 ) / 2000.0 ; zc_int295 =
t2826 * t2826 * 3.0 - t2826 * t2826 * t2826 * 2.0 ; if ( t4599 <= 2000.0 ) {
t2826 = zc_int275 * 1.0E-5 ; } else if ( t4599 >= 4000.0 ) { t2826 =
zc_int287 * 1.0E-5 ; } else { t2826 = ( ( 1.0 - zc_int295 ) * zc_int275 +
zc_int287 * zc_int295 ) * 1.0E-5 ; } t4502 = - ( X [ 362ULL ] * zc_int293 ) ;
zc_int287 = t4502 / 0.0019634954084936209 * 0.00031622776601683789 + t2826 ;
t4513 = - zc_int287 - zc_int287 * - 0.95 ; t2826 = ( - t3255 - zc_int287 * -
0.95 ) / ( t4513 == 0.0 ? 1.0E-16 : t4513 ) ; zc_int293 = t2826 * t2826 * 3.0
- t2826 * t2826 * t2826 * 2.0 ; t2826 = zc_int335 * 0.01 / ( t2841 == 0.0 ?
1.0E-16 : t2841 ) ; if ( - t3255 <= t4552 * - 0.95 ) { zc_int275 = t3255 ; }
else if ( - t3255 >= - t4552 ) { zc_int275 = zc_int287 ; } else { zc_int275 =
( 1.0 - zc_int293 ) * t3255 + zc_int287 * zc_int293 ; } if ( M [ 6ULL ] != 0
) { zc_int287 = 216.59999999999997 ; } else { zc_int287 = M [ 7ULL ] != 0 ?
623.15 : X [ 31ULL ] ; } t1907 [ 0ULL ] = X [ 458ULL ] >= 0.0 ? zc_int287 : X
[ 45ULL ] ; tlu2_linear_linear_prelookup ( & ycb_efOut . mField0 [ 0ULL ] , &
ycb_efOut . mField1 [ 0ULL ] , & ycb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t158 = ycb_efOut ; tlu2_1d_linear_linear_value ( &
adb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1922 [ 0ULL ] , & t223 [
0ULL ] ) ; t2576_idx_0 = adb_efOut [ 0 ] ; zc_int293 = t2576_idx_0 ; t1907 [
0ULL ] = X [ 270ULL ] >= 0.0 ? zc_int287 : X [ 27ULL ] ;
tlu2_linear_linear_prelookup ( & bdb_efOut . mField0 [ 0ULL ] , & bdb_efOut .
mField1 [ 0ULL ] , & bdb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField13 , & t1907 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ]
) ; t154 = bdb_efOut ; tlu2_1d_linear_linear_value ( & cdb_efOut [ 0ULL ] , &
t154 . mField0 [ 0ULL ] , & t154 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField24 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 =
cdb_efOut [ 0 ] ; zc_int295 = t2576_idx_0 ; t1907 [ 0ULL ] = X [ 395ULL ] >=
0.0 ? zc_int287 : X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & ddb_efOut .
mField0 [ 0ULL ] , & ddb_efOut . mField1 [ 0ULL ] , & ddb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = ddb_efOut ;
tlu2_1d_linear_linear_value ( & edb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = edb_efOut [ 0 ] ;
t3072 = t2576_idx_0 ; t4588 = ( ( real_T ) ( M [ 299ULL ] != 0 ) * 2.0 - 1.0
) * X [ 156ULL ] ; t3074 = X [ 148ULL ] / 0.001 * ( X [ 148ULL ] / 0.001 ) /
( X [ 156ULL ] == 0.0 ? 1.0E-16 : X [ 156ULL ] ) / ( t4588 == 0.0 ? 1.0E-16 :
t4588 ) / 2.0 * 0.001 + ( ( X [ 143ULL ] - 293.15 ) + 420.0 ) ; zc_int350 =
zc_int357 >= 1.0 ? t2826 : 1.0 ; t1907 [ 0ULL ] = X [ 271ULL ] >= 0.0 ?
zc_int287 : X [ 27ULL ] ; tlu2_linear_linear_prelookup ( & fdb_efOut .
mField0 [ 0ULL ] , & fdb_efOut . mField1 [ 0ULL ] , & fdb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 = fdb_efOut ;
tlu2_1d_linear_linear_value ( & gdb_efOut [ 0ULL ] , & t158 . mField0 [ 0ULL
] , & t158 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = gdb_efOut [ 0 ] ;
t3059 = t2576_idx_0 ; t1907 [ 0ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 >= 0.0 ?
zc_int287 : X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & hdb_efOut .
mField0 [ 0ULL ] , & hdb_efOut . mField1 [ 0ULL ] , & hdb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t162 = hdb_efOut ;
tlu2_1d_linear_linear_value ( & idb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL
] , & t162 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = idb_efOut [ 0 ] ;
zc_int287 = t2576_idx_0 ; t4588 = X [ 462ULL ] * t4664 ; t3077 = ( ( real_T )
( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4588 / ( X [ 63ULL ] == 0.0 ? 1.0E-16
: X [ 63ULL ] ) ) * ( t4588 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] )
) * ( X [ 471ULL ] / 7.8539816339744827E-5 ) * ( X [ 471ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2814 ; t4594 = X [
477ULL ] * intrm_sf_mf_1439 ; zc_int10 = ( ( real_T ) ( M [ 10ULL ] != 0 ) *
2.0 - 1.0 ) * ( t4594 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ) *
( t4594 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ) * ( - X [ 471ULL
] / 7.8539816339744827E-5 ) * ( - X [ 471ULL ] / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + t4708 ; t4654 = X [ 459ULL ] * intrm_sf_mf_1445
; zc_int308 = ( ( real_T ) ( M [ 11ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4654 / ( X
[ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t4654 / ( X [ 37ULL ] == 0.0
? 1.0E-16 : X [ 37ULL ] ) ) * ( X [ 485ULL ] / 7.8539816339744827E-5 ) * ( X
[ 485ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t4709 ;
zc_int338 = pmf_sqrt ( t4784 * t4784 * 9.999999999999999E-14 + ( ( real_T ) (
M [ 12ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 481ULL ] * t4721 * t3370 * 1.0E-9 ) ;
t4552 = pmf_log10 ( 6.9 / ( zc_int350 == 0.0 ? 1.0E-16 : zc_int350 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int350 == 0.0 ? 1.0E-16 :
zc_int350 ) + 0.00017169489553429715 ) * 3.24 ; zc_int350 = 1.0 / ( t4552 ==
0.0 ? 1.0E-16 : t4552 ) ; zc_int360 = pmf_sqrt ( t3390 * t3390 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 14ULL ] != 0 ) * 2.0 - 1.0 ) * X [
486ULL ] * t3391 * t3370 * 1.0E-9 ) ; zc_int342 = - pmf_sqrt ( ( ( real_T ) (
M [ 15ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3392 / ( t3370 == 0.0 ? 1.0E-16 : t3370
) / ( X [ 481ULL ] == 0.0 ? 1.0E-16 : X [ 481ULL ] ) ) ) *
7.8539816339744827E-5 ; zc_int345 = t4786 * zc_int342 * 35.2 / ( t3400 == 0.0
? 1.0E-16 : t3400 ) ; if ( t3382 >= 0.0 ) { t3108 = zc_int342 * 100000.0 ; }
else { t3108 = - zc_int342 * 100000.0 ; } t3109 = t3108 * 0.01 / ( t3396 ==
0.0 ? 1.0E-16 : t3396 ) ; zc_int316 = t3384 >= 1.0 ? t3109 : 1.0 ; t4552 =
pmf_log10 ( 6.9 / ( zc_int316 == 0.0 ? 1.0E-16 : zc_int316 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int316 == 0.0 ? 1.0E-16 :
zc_int316 ) + 0.00017169489553429715 ) * 3.24 ; zc_int342 = zc_int342 * t3108
* ( 1.0 / ( t4552 == 0.0 ? 1.0E-16 : t4552 ) ) * 0.55 / ( t3403 == 0.0 ?
1.0E-16 : t3403 ) ; t3108 = ( t3109 - 2000.0 ) / 2000.0 ; t3109 = t3108 *
t3108 * 3.0 - t3108 * t3108 * t3108 * 2.0 ; zc_int350 = t220 * zc_int335 *
zc_int350 * 0.55 / ( t2844 == 0.0 ? 1.0E-16 : t2844 ) ; if ( t3384 <= 2000.0
) { t220 = zc_int345 * 1.0E-5 ; } else if ( t3384 >= 4000.0 ) { t220 =
zc_int342 * 1.0E-5 ; } else { t220 = ( ( 1.0 - t3109 ) * zc_int345 +
zc_int342 * t3109 ) * 1.0E-5 ; } t4552 = - ( X [ 471ULL ] * zc_int338 ) ;
zc_int335 = t4552 / 7.8539816339744827E-5 * 0.00031622776601683789 + t220 ;
t4599 = - zc_int335 - zc_int335 * - 0.95 ; t220 = ( - t3383 - zc_int335 * -
0.95 ) / ( t4599 == 0.0 ? 1.0E-16 : t4599 ) ; zc_int338 = t220 * t220 * 3.0 -
t220 * t220 * t220 * 2.0 ; if ( - t3383 <= t4744 * - 0.95 ) { t220 = t3383 ;
} else if ( - t3383 >= - t4744 ) { t220 = zc_int335 ; } else { t220 = ( 1.0 -
zc_int338 ) * t3383 + zc_int335 * zc_int338 ; } zc_int335 = - pmf_sqrt ( ( (
real_T ) ( M [ 16ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3412 / ( t3370 == 0.0 ?
1.0E-16 : t3370 ) / ( X [ 486ULL ] == 0.0 ? 1.0E-16 : X [ 486ULL ] ) ) ) *
7.8539816339744827E-5 ; zc_int338 = t4786 * zc_int335 * 35.2 / ( t3400 == 0.0
? 1.0E-16 : t3400 ) ; if ( t3386 >= 0.0 ) { zc_int342 = zc_int335 * 100000.0
; } else { zc_int342 = - zc_int335 * 100000.0 ; } zc_int345 = zc_int342 *
0.01 / ( t3396 == 0.0 ? 1.0E-16 : t3396 ) ; t3108 = t3399 >= 1.0 ? zc_int345
: 1.0 ; t2826 = ( t2826 - 2000.0 ) / 2000.0 ; t4566 = pmf_log10 ( 6.9 / (
t3108 == 0.0 ? 1.0E-16 : t3108 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t3108 == 0.0 ? 1.0E-16 : t3108 ) + 0.00017169489553429715 ) * 3.24 ;
zc_int335 = zc_int335 * zc_int342 * ( 1.0 / ( t4566 == 0.0 ? 1.0E-16 : t4566
) ) * 0.55 / ( t3403 == 0.0 ? 1.0E-16 : t3403 ) ; zc_int342 = ( zc_int345 -
2000.0 ) / 2000.0 ; zc_int345 = zc_int342 * zc_int342 * 3.0 - zc_int342 *
zc_int342 * zc_int342 * 2.0 ; if ( t3399 <= 2000.0 ) { zc_int342 = zc_int338
* 1.0E-5 ; } else if ( t3399 >= 4000.0 ) { zc_int342 = zc_int335 * 1.0E-5 ; }
else { zc_int342 = ( ( 1.0 - zc_int345 ) * zc_int338 + zc_int335 * zc_int345
) * 1.0E-5 ; } t4566 = X [ 485ULL ] * zc_int360 ; zc_int335 = t4566 /
7.8539816339744827E-5 * 0.00031622776601683789 + zc_int342 ; t4764 = -
zc_int335 - zc_int335 * - 0.95 ; zc_int338 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 - zc_int335 *
- 0.95 ) / ( t4764 == 0.0 ? 1.0E-16 : t4764 ) ; zc_int360 = zc_int338 *
zc_int338 * 3.0 - zc_int338 * zc_int338 * zc_int338 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 <= t3393 * -
0.95 ) { zc_int338 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 >= - t3393 )
{ zc_int338 = zc_int335 ; } else { zc_int338 = ( 1.0 - zc_int360 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 + zc_int335 *
zc_int360 ; } zc_int335 = ( ( real_T ) ( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) * (
t4588 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ) * ( t4588 / ( X [
63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ) * ( - X [ 471ULL ] /
7.8539816339744827E-5 ) * ( - X [ 471ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2814 ; t2814 = t2826 * t2826 * 3.0 - t2826 * t2826 *
t2826 * 2.0 ; t2826 = ( ( real_T ) ( M [ 10ULL ] != 0 ) * 2.0 - 1.0 ) * (
t4594 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ) * ( t4594 / ( X [
478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ) * ( X [ 471ULL ] /
7.8539816339744827E-5 ) * ( X [ 471ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t4708 ; zc_int360 = ( X [ 63ULL ] - X [ 478ULL ] ) *
pmf_sqrt ( ( ( real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3467 / (
t3437 == 0.0 ? 1.0E-16 : t3437 ) ) ) * intrm_sf_mf_1537 * 0.64 ; zc_int342 =
pmf_sqrt ( ( ( real_T ) ( M [ 21ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3464 / (
intrm_sf_mf_1546 == 0.0 ? 1.0E-16 : intrm_sf_mf_1546 ) / ( X [ 499ULL ] ==
0.0 ? 1.0E-16 : X [ 499ULL ] ) ) ) * intrm_sf_mf_1537 * 0.64 ; t4594 =
zc_int342 - zc_int342 * 0.95 ; zc_int345 = ( zc_int360 - zc_int342 * 0.95 ) /
( t4594 == 0.0 ? 1.0E-16 : t4594 ) ; t3108 = zc_int345 * zc_int345 * 3.0 -
zc_int345 * zc_int345 * zc_int345 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 <= U_idx_11 *
0.95 ) { zc_int345 = zc_int360 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >= U_idx_11 )
{ zc_int345 = zc_int342 * 100000.0 ; } else { zc_int345 = ( ( 1.0 - t3108 ) *
zc_int360 + zc_int342 * t3108 ) * 100000.0 ; } t3108 = ( - zc_int360 -
zc_int342 * 0.95 ) / ( t4594 == 0.0 ? 1.0E-16 : t4594 ) ; t3109 = t3108 *
t3108 * 3.0 - t3108 * t3108 * t3108 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 <= U_idx_11 *
0.95 ) { t3108 = zc_int360 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >= U_idx_11 )
{ t3108 = - zc_int342 * 100000.0 ; } else { t3108 = ( ( 1.0 - t3109 ) *
zc_int360 + - zc_int342 * t3109 ) * 100000.0 ; } t4588 = X [ 506ULL ] *
intrm_sf_mf_1580 ; intrm_sf_mf_1580 = ( ( real_T ) ( M [ 26ULL ] != 0 ) * 2.0
- 1.0 ) * ( t4588 / 1.01325 ) * ( t4588 / 1.01325 ) * ( X [ 512ULL ] /
0.0019634954084936209 ) * ( X [ 512ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t4716 ; if ( zc_int357 <= 2000.0 ) { zc_int360 =
zc_int352 * 1.0E-5 ; } else if ( zc_int357 >= 4000.0 ) { zc_int360 =
zc_int350 * 1.0E-5 ; } else { zc_int360 = ( ( 1.0 - t2814 ) * zc_int352 +
zc_int350 * t2814 ) * 1.0E-5 ; } zc_int350 = ( ( real_T ) ( M [ 26ULL ] != 0
) * 2.0 - 1.0 ) * ( t4588 / 1.01325 ) * ( t4588 / 1.01325 ) * ( - X [ 512ULL
] / 0.0019634954084936209 ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + t4716 ; t4588 = X [ 520ULL ] * t4747 ; t2814 =
( ( real_T ) ( M [ 28ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4588 / ( X [ 54ULL ] ==
0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( t4588 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 :
X [ 54ULL ] ) ) * ( X [ 512ULL ] / 0.0019634954084936209 ) * ( X [ 512ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t4796 ; t4764 = X [
527ULL ] * t3457 ; zc_int352 = ( ( real_T ) ( M [ 29ULL ] != 0 ) * 2.0 - 1.0
) * ( t4764 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( t4764 / (
X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( - X [ 512ULL ] /
0.0019634954084936209 ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3459 ; t4764 = X [ 524ULL ] * t3457 ; zc_int357 = (
( real_T ) ( M [ 30ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4764 / 1.01325 ) * ( t4764
/ 1.01325 ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) * ( - X [ 512ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3458 ; t4764 = X [
526ULL ] * t3457 ; zc_int342 = ( ( real_T ) ( M [ 31ULL ] != 0 ) * 2.0 - 1.0
) * ( t4764 / 1.01325 ) * ( t4764 / 1.01325 ) * ( X [ 512ULL ] /
0.0019634954084936209 ) * ( X [ 512ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3461 ; t4764 = X [ 525ULL ] * t3457 ; if ( - X [
512ULL ] >= 0.0 ) { zc_int316 = - ( ( zc_int352 - zc_int357 ) * X [ 512ULL ]
) ; } else { zc_int316 = ( zc_int342 - ( ( ( real_T ) ( M [ 33ULL ] != 0 ) *
2.0 - 1.0 ) * ( t4764 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * (
t4764 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( X [ 512ULL ] /
0.0019634954084936209 ) * ( X [ 512ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3460 ) ) * X [ 512ULL ] ; } zc_int357 = ( ( real_T )
( M [ 28ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4588 / ( X [ 54ULL ] == 0.0 ? 1.0E-16
: X [ 54ULL ] ) ) * ( t4588 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] )
) * ( - X [ 512ULL ] / 0.0019634954084936209 ) * ( - X [ 512ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t4796 ; t3109 = ( (
real_T ) ( M [ 34ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4651 / ( X [ 54ULL ] == 0.0
? 1.0E-16 : X [ 54ULL ] ) ) * ( t4651 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [
54ULL ] ) ) * ( - X [ 407ULL ] / 0.0019634954084936209 ) * ( - X [ 407ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3187 ; zc_int359 = (
( real_T ) ( M [ 11ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4654 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t4654 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 :
X [ 37ULL ] ) ) * ( - X [ 485ULL ] / 7.8539816339744827E-5 ) * ( - X [ 485ULL
] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t4709 ; t4654 = -
( X [ 180ULL ] * t2806 ) ; t2806 = t4654 / 7.8539816339744827E-5 *
0.00031622776601683789 + zc_int360 ; t4764 = X [ 546ULL ] * t3402 ; zc_int360
= ( ( real_T ) ( M [ 36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4764 / ( X [ 37ULL ]
== 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t4764 / ( X [ 37ULL ] == 0.0 ? 1.0E-16
: X [ 37ULL ] ) ) * ( t3484 / 7.8539816339744827E-5 ) * ( t3484 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 ; zc_int361 =
( ( real_T ) ( M [ 37ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4258 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t4258 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 :
X [ 37ULL ] ) ) * ( - X [ 282ULL ] / 7.8539816339744827E-5 ) * ( - X [ 282ULL
] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t4825 ; t4258 = X
[ 169ULL ] * t2871 ; t2871 = ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 )
* ( t4258 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t4258 / (
X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t3484 /
7.8539816339744827E-5 ) * ( t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + piece121 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 = ( ( real_T
) ( M [ 36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4764 / ( X [ 37ULL ] == 0.0 ?
1.0E-16 : X [ 37ULL ] ) ) * ( t4764 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) ) * ( - t3484 / 7.8539816339744827E-5 ) * ( - t3484 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M34 ; t4764 = X [
566ULL ] * intrm_sf_mf_1699 ; t3120 = ( ( real_T ) ( M [ 40ULL ] != 0 ) * 2.0
- 1.0 ) * ( t4764 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * (
t4764 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t3484 /
7.8539816339744827E-5 ) * ( t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1712 ; t4764 = X [ 563ULL ] *
intrm_sf_mf_1699 ; zc_int39 = ( ( real_T ) ( M [ 41ULL ] != 0 ) * 2.0 - 1.0 )
* ( t4764 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t4764 / (
X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t3484 /
7.8539816339744827E-5 ) * ( t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1709 ; t4764 = X [ 565ULL ] *
intrm_sf_mf_1699 ; t3123 = ( ( real_T ) ( M [ 42ULL ] != 0 ) * 2.0 - 1.0 ) *
( t4764 / ( X [ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t4764 / ( X
[ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( - t3484 /
7.8539816339744827E-5 ) * ( - t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1736 ; t4764 = X [ 564ULL ] *
intrm_sf_mf_1699 ; if ( t3484 >= 0.0 ) { t3125 = ( t3120 - zc_int39 ) * t3484
; } else { t3125 = - ( ( t3123 - ( ( ( real_T ) ( M [ 43ULL ] != 0 ) * 2.0 -
1.0 ) * ( t4764 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t4764
/ ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( - t3484 /
7.8539816339744827E-5 ) * ( - t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1733 ) ) * t3484 ) ; } t4708 = - t2806 -
t2806 * - 0.95 ; zc_int39 = ( - t2827 - t2806 * - 0.95 ) / ( t4708 == 0.0 ?
1.0E-16 : t4708 ) ; t3124 = zc_int39 * zc_int39 * 3.0 - zc_int39 * zc_int39 *
zc_int39 * 2.0 ; if ( - t2827 <= t2825 * - 0.95 ) { zc_int39 = t2827 ; } else
if ( - t2827 >= - t2825 ) { zc_int39 = t2806 ; } else { zc_int39 = ( 1.0 -
t3124 ) * t2827 + t2806 * t3124 ; } t4764 = ( ( real_T ) ( M [ 308ULL ] != 0
) * 2.0 - 1.0 ) * X [ 155ULL ] ; t2806 = X [ 148ULL ] / 0.001 * ( X [ 148ULL
] / 0.001 ) / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) / ( t4764 ==
0.0 ? 1.0E-16 : t4764 ) / 2.0 * 0.001 + ( X [ 7ULL ] + 126.84999999999997 ) ;
t4709 = X [ 188ULL ] * zc_int41 ; t2825 = ( ( real_T ) ( M [ 22ULL ] != 0 ) *
2.0 - 1.0 ) * ( t4709 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) ) *
( t4709 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) ) * ( X [ 180ULL ]
/ 7.8539816339744827E-5 ) * ( X [ 180ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2791 ; t4784 = X [ 174ULL ] * U_idx_3 ; zc_int41 = (
( real_T ) ( M [ 116ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4784 / 1.01325 ) * (
t4784 / 1.01325 ) * ( - X [ 180ULL ] / 7.8539816339744827E-5 ) * ( - X [
180ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3285 ;
t3124 = ( X [ 189ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 126ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t2907 / ( t2878 == 0.0 ? 1.0E-16 : t2878 ) ) ) *
intrm_sf_mf_225 * 0.64 ; t2878 = pmf_sqrt ( ( ( real_T ) ( M [ 137ULL ] != 0
) * 2.0 - 1.0 ) * ( t2904 / ( intrm_sf_mf_234 == 0.0 ? 1.0E-16 :
intrm_sf_mf_234 ) / ( X [ 213ULL ] == 0.0 ? 1.0E-16 : X [ 213ULL ] ) ) ) *
intrm_sf_mf_225 * 0.64 ; t4747 = t2878 - t2878 * 0.95 ; t2697 = ( t3124 -
t2878 * 0.95 ) / ( t4747 == 0.0 ? 1.0E-16 : t4747 ) ; t3127 = t2697 * t2697 *
3.0 - t2697 * t2697 * t2697 * 2.0 ; if ( t201 <= zc_int50 * 0.95 ) { t2697 =
t3124 * 100000.0 ; } else if ( t201 >= zc_int50 ) { t2697 = t2878 * 100000.0
; } else { t2697 = ( ( 1.0 - t3127 ) * t3124 + t2878 * t3127 ) * 100000.0 ; }
t3127 = ( - t3124 - t2878 * 0.95 ) / ( t4747 == 0.0 ? 1.0E-16 : t4747 ) ;
zc_int6 = t3127 * t3127 * 3.0 - t3127 * t3127 * t3127 * 2.0 ; if ( - t201 <=
zc_int50 * 0.95 ) { t3127 = t3124 * 100000.0 ; } else if ( - t201 >= zc_int50
) { t3127 = - t2878 * 100000.0 ; } else { t3127 = ( ( 1.0 - zc_int6 ) * t3124
+ - t2878 * zc_int6 ) * 100000.0 ; } t4744 = ( ( real_T ) ( M [ 319ULL ] != 0
) * 2.0 - 1.0 ) * X [ 157ULL ] ; zc_int50 = ( ( real_T ) ( M [ 181ULL ] != 0
) * 2.0 - 1.0 ) * ( t4803 / ( X [ 235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] )
) * ( t4803 / ( X [ 235ULL ] == 0.0 ? 1.0E-16 : X [ 235ULL ] ) ) * ( X [
238ULL ] / 0.32 ) * ( X [ 238ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
zc_int51 ; t4803 = X [ 220ULL ] * piece26 ; zc_int51 = ( ( real_T ) ( M [
192ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4803 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X
[ 221ULL ] ) ) * ( t4803 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) )
* ( X [ 241ULL ] / 0.32 ) * ( X [ 241ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + zc_int9 ; piece26 = pmf_sqrt ( t2891 * t2891 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 203ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 239ULL ] * zc_int81 * t2890 * 1.0E-9 ) ; t2891 = pmf_sqrt ( t2902 * t2902 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 215ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 242ULL ] * t2903 * t2890 * 1.0E-9 ) ; zc_int81 = - pmf_sqrt ( ( ( real_T )
( M [ 226ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2914 / ( t2890 == 0.0 ? 1.0E-16 :
t2890 ) / ( X [ 239ULL ] == 0.0 ? 1.0E-16 : X [ 239ULL ] ) ) ) * 0.32 ; t2902
= t2897 * zc_int81 * 2.9973120849090416 / ( t2922 == 0.0 ? 1.0E-16 : t2922 )
; if ( t202 >= 0.0 ) { t2903 = zc_int81 * 100000.0 ; } else { t2903 = -
zc_int81 * 100000.0 ; } t202 = t2903 * 0.01 / ( t2918 == 0.0 ? 1.0E-16 :
t2918 ) ; t3124 = zc_int83 >= 1.0 ? t202 : 1.0 ; t4796 = pmf_log10 ( 6.9 / (
t3124 == 0.0 ? 1.0E-16 : t3124 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t3124 == 0.0 ? 1.0E-16 : t3124 ) + 0.00017169489553429715 ) * 3.24 ;
zc_int6 = 0.0 / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) / ( t4764 ==
0.0 ? 1.0E-16 : t4764 ) / 2.0 * 0.001 + ( X [ 7ULL ] + 126.84999999999997 ) ;
zc_int81 = zc_int81 * t2903 * ( 1.0 / ( t4796 == 0.0 ? 1.0E-16 : t4796 ) ) *
0.046833001326703774 / ( t2925 == 0.0 ? 1.0E-16 : t2925 ) ; t202 = ( t202 -
2000.0 ) / 2000.0 ; t2903 = t202 * t202 * 3.0 - t202 * t202 * t202 * 2.0 ; if
( zc_int83 <= 2000.0 ) { t202 = t2902 * 1.0E-5 ; } else if ( zc_int83 >=
4000.0 ) { t202 = zc_int81 * 1.0E-5 ; } else { t202 = ( ( 1.0 - t2903 ) *
t2902 + zc_int81 * t2903 ) * 1.0E-5 ; } t4764 = X [ 238ULL ] * piece26 ;
zc_int81 = t4764 / 0.32 * 0.00031622776601683789 + t202 ; t4786 = - zc_int81
- zc_int81 * - 0.95 ; t202 = ( - intrm_sf_mf_278 - zc_int81 * - 0.95 ) / (
t4786 == 0.0 ? 1.0E-16 : t4786 ) ; zc_int83 = t202 * t202 * 3.0 - t202 * t202
* t202 * 2.0 ; if ( - intrm_sf_mf_278 <= zc_int8 * - 0.95 ) { t202 =
intrm_sf_mf_278 ; } else if ( - intrm_sf_mf_278 >= - zc_int8 ) { t202 =
zc_int81 ; } else { t202 = ( 1.0 - zc_int83 ) * intrm_sf_mf_278 + zc_int81 *
zc_int83 ; } zc_int81 = - pmf_sqrt ( ( ( real_T ) ( M [ 237ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2934 / ( t2890 == 0.0 ? 1.0E-16 : t2890 ) / ( X [ 242ULL ] ==
0.0 ? 1.0E-16 : X [ 242ULL ] ) ) ) * 0.32 ; zc_int8 = t2897 * zc_int81 *
2.9973120849090416 / ( t2922 == 0.0 ? 1.0E-16 : t2922 ) ; t2897 = ( ( real_T
) ( M [ 116ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4784 / 1.01325 ) * ( t4784 /
1.01325 ) * ( X [ 180ULL ] / 7.8539816339744827E-5 ) * ( X [ 180ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3285 ; if ( t2908 >=
0.0 ) { zc_int83 = zc_int81 * 100000.0 ; } else { zc_int83 = - zc_int81 *
100000.0 ; } t2902 = zc_int83 * 0.01 / ( t2918 == 0.0 ? 1.0E-16 : t2918 ) ;
t2903 = t2913 >= 1.0 ? t2902 : 1.0 ; t4784 = pmf_log10 ( 6.9 / ( t2903 == 0.0
? 1.0E-16 : t2903 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2903 ==
0.0 ? 1.0E-16 : t2903 ) + 0.00017169489553429715 ) * 3.24 ; zc_int81 =
zc_int81 * zc_int83 * ( 1.0 / ( t4784 == 0.0 ? 1.0E-16 : t4784 ) ) *
0.046833001326703774 / ( t2925 == 0.0 ? 1.0E-16 : t2925 ) ; zc_int83 = (
t2902 - 2000.0 ) / 2000.0 ; t2902 = zc_int83 * zc_int83 * 3.0 - zc_int83 *
zc_int83 * zc_int83 * 2.0 ; if ( t2913 <= 2000.0 ) { zc_int83 = zc_int8 *
1.0E-5 ; } else if ( t2913 >= 4000.0 ) { zc_int83 = zc_int81 * 1.0E-5 ; }
else { zc_int83 = ( ( 1.0 - t2902 ) * zc_int8 + zc_int81 * t2902 ) * 1.0E-5 ;
} t4784 = X [ 241ULL ] * t2891 ; t2891 = t4784 / 0.32 *
0.00031622776601683789 + zc_int83 ; t4786 = - t2891 - t2891 * - 0.95 ;
zc_int81 = ( - t2912 - t2891 * - 0.95 ) / ( t4786 == 0.0 ? 1.0E-16 : t4786 )
; zc_int8 = ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4258 / ( X [
170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t4258 / ( X [ 170ULL ] ==
0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t2800 / 7.8539816339744827E-5 ) * (
t2800 / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + piece121 ;
zc_int83 = zc_int81 * zc_int81 * 3.0 - zc_int81 * zc_int81 * zc_int81 * 2.0 ;
if ( - t2912 <= zc_int98 * - 0.95 ) { zc_int81 = t2912 ; } else if ( - t2912
>= - zc_int98 ) { zc_int81 = t2891 ; } else { zc_int81 = ( 1.0 - zc_int83 ) *
t2912 + t2891 * zc_int83 ; } t2891 = ( ( real_T ) ( M [ 192ULL ] != 0 ) * 2.0
- 1.0 ) * ( t4803 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ) * (
t4803 / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ) * ( - X [ 241ULL ]
/ 0.32 ) * ( - X [ 241ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int9
; zc_int83 = ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4258 / ( X
[ 170ULL ] == 0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( t4258 / ( X [ 170ULL ] ==
0.0 ? 1.0E-16 : X [ 170ULL ] ) ) * ( X [ 192ULL ] / 0.32 ) * ( X [ 192ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + piece121 ; t2902 = pmf_sqrt ( piece28
* piece28 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 297ULL ] != 0 ) * 2.0
- 1.0 ) * X [ 257ULL ] * t2964 * intrm_sf_mf_403 * 1.0E-9 ) ; t2903 = -
pmf_sqrt ( ( ( real_T ) ( M [ 300ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2966 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) / ( X [ 257ULL ] == 0.0
? 1.0E-16 : X [ 257ULL ] ) ) ) * 0.32 ; zc_int98 = piece79 * t2903 *
2.9973120849090416 / ( t2974 == 0.0 ? 1.0E-16 : t2974 ) ; if ( piece82 >= 0.0
) { t2908 = t2903 * 100000.0 ; } else { t2908 = - t2903 * 100000.0 ; } t2913
= t2908 * 0.01 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; zc_int9 = ( ( real_T )
( M [ 22ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4709 / ( X [ 189ULL ] == 0.0 ?
1.0E-16 : X [ 189ULL ] ) ) * ( t4709 / ( X [ 189ULL ] == 0.0 ? 1.0E-16 : X [
189ULL ] ) ) * ( - X [ 180ULL ] / 7.8539816339744827E-5 ) * ( - X [ 180ULL ]
/ 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2791 ; piece26 =
piece96 >= 1.0 ? t2913 : 1.0 ; t4258 = pmf_log10 ( 6.9 / ( piece26 == 0.0 ?
1.0E-16 : piece26 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( piece26
== 0.0 ? 1.0E-16 : piece26 ) + 0.00017169489553429715 ) * 3.24 ; t2903 =
t2903 * t2908 * ( 1.0 / ( t4258 == 0.0 ? 1.0E-16 : t4258 ) ) *
0.046833001326703774 / ( t2977 == 0.0 ? 1.0E-16 : t2977 ) ; t2908 = ( t2913 -
2000.0 ) / 2000.0 ; t2913 = t2908 * t2908 * 3.0 - t2908 * t2908 * t2908 * 2.0
; if ( piece96 <= 2000.0 ) { t2908 = zc_int98 * 1.0E-5 ; } else if ( piece96
>= 4000.0 ) { t2908 = t2903 * 1.0E-5 ; } else { t2908 = ( ( 1.0 - t2913 ) *
zc_int98 + t2903 * t2913 ) * 1.0E-5 ; } t4258 = - ( X [ 241ULL ] * t2902 ) ;
t2902 = t4258 / 0.32 * 0.00031622776601683789 + t2908 ; t4709 = - t2902 -
t2902 * - 0.95 ; t2903 = ( - t2967 - t2902 * - 0.95 ) / ( t4709 == 0.0 ?
1.0E-16 : t4709 ) ; zc_int98 = t2903 * t2903 * 3.0 - t2903 * t2903 * t2903 *
2.0 ; if ( - t2967 <= piece63 * - 0.95 ) { t2903 = t2967 ; } else if ( -
t2967 >= - piece63 ) { t2903 = t2902 ; } else { t2903 = ( 1.0 - zc_int98 ) *
t2967 + t2902 * zc_int98 ; } t2908 = - ( t2812 * 100000.0 ) ; piece28 = - (
t2840 * 100000.0 ) ; t2840 = - ( piece47 * 100000.0 ) ; piece47 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 * 100000.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 = - ( piece98 *
100000.0 ) ; t2964 = - ( piece100 * 100000.0 ) ; piece63 = - ( piece103 *
100000.0 ) ; piece82 = - ( t3068 * 100000.0 ) ; piece100 = - ( t3086 *
100000.0 ) ; piece103 = - ( t3131 * 100000.0 ) ; piece121 = - ( t4833 *
100000.0 ) ; t3068 = - ( t4835 * 100000.0 ) ; t3086 = - ( t4836 * 100000.0 )
; t3130 = - ( t3352 * 100000.0 ) ; t3132 = - ( t3385 * 100000.0 ) ; piece196
= - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress24 *
100000.0 ) ; t3143 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant22 * 100000.0 )
; piece302 = X [ 148ULL ] / 0.001 / ( piece302 == 0.0 ? 1.0E-16 : piece302 )
* ( X [ 148ULL ] / 0.001 / ( piece302 == 0.0 ? 1.0E-16 : piece302 ) ) / 2.0 *
0.001 ; t1907 [ 0 ] = 293.15 ; tlu2_linear_linear_prelookup ( & jdb_efOut .
mField0 [ 0ULL ] , & jdb_efOut . mField1 [ 0ULL ] , & jdb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1907 [ 0ULL ] , &
t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t192 = jdb_efOut ;
tlu2_1d_linear_linear_value ( & kdb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL
] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2580 [ 0 ] = kdb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ldb_efOut [ 0ULL ] , & t192 . mField0 [ 0ULL
] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18
, & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2579 [ 0 ] = ldb_efOut [ 0 ] ;
t2624 [ 0ULL ] = t192 . mField0 [ 0ULL ] ; t2624 [ 1ULL ] = t192 . mField0 [
1ULL ] ; t1919 [ 0ULL ] = t192 . mField2 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & mdb_efOut [ 0ULL ] , & t2624 [ 0ULL ] , &
t1919 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1922 [
0ULL ] , & t223 [ 0ULL ] ) ; t1907 [ 0 ] = mdb_efOut [ 0 ] ; piece352 = ( ( -
t2796 - t2797 ) * t2580 [ 0ULL ] + t2579 [ 0ULL ] * t2796 ) + t1907 [ 0ULL ]
* t2797 ; intrm_sf_mf_1192 = ( ( - intrm_sf_mf_678 - intrm_sf_mf_679 ) *
296.802103844292 + intrm_sf_mf_678 * 461.523 ) + intrm_sf_mf_679 *
259.836612622973 ; tlu2_1d_linear_linear_value ( & ndb_efOut [ 0ULL ] , &
t192 . mField0 [ 0ULL ] , & t192 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField27 , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2581 [ 0 ] =
ndb_efOut [ 0 ] ; t3187 = ( ( - intrm_sf_mf_678 - intrm_sf_mf_679 ) * t2580 [
0ULL ] + t2579 [ 0ULL ] * intrm_sf_mf_678 ) + t2581 [ 0ULL ] *
intrm_sf_mf_679 ; piece416 = t3366 / 192970.66424 * pmf_log ( t3376 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra9 ) )
; intrm_sf_mf_1047 = ( ( piece416 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra47 * 0.01 ) -
t2679 ; piece416 = ( ( - t3451 - intrm_sf_mf_1576 ) * 296.802103844292 +
t3451 * 461.523 ) + intrm_sf_mf_1576 * 259.836612622973 ; piece418 = ( ( -
t3451 - intrm_sf_mf_1576 ) * t2580 [ 0ULL ] + t2579 [ 0ULL ] * t3451 ) +
t2581 [ 0ULL ] * intrm_sf_mf_1576 ; t3195 = ( ( - t3455 - t3456 ) *
296.802103844292 + t3455 * 461.523 ) + t3456 * 259.836612622973 ; t2703 = ( (
t3343 - pmf_log ( X [ 54ULL ] * 100000.0 ) * t3457 ) - intrm_sf_mf_1598 ) +
t3195 * 11.526088451496509 ; piece428 = ( ( intrm_sf_mf_1625 - t3195 *
11.526088451496509 ) - intrm_sf_mf_1611 ) + pmf_log ( X [ 54ULL ] * 100000.0
) * t3457 ; t2579 [ 0ULL ] = X [ 81ULL ] ; t1919 [ 0 ] = 6ULL ;
tlu2_linear_linear_prelookup ( & odb_efOut . mField0 [ 0ULL ] , & odb_efOut .
mField1 [ 0ULL ] , & odb_efOut . mField2 [ 0ULL ] , & nonscalar58 [ 0ULL ] ,
& t2579 [ 0ULL ] , & t1919 [ 0ULL ] , & t223 [ 0ULL ] ) ; t162 = odb_efOut ;
t2579 [ 0ULL ] = X [ 0ULL ] ; t1922 [ 0 ] = 7ULL ;
tlu2_linear_linear_prelookup ( & pdb_efOut . mField0 [ 0ULL ] , & pdb_efOut .
mField1 [ 0ULL ] , & pdb_efOut . mField2 [ 0ULL ] , & nonscalar59 [ 0ULL ] ,
& t2579 [ 0ULL ] , & t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t153 = pdb_efOut ;
t2579 [ 0ULL ] = X [ 150ULL ] ; tlu2_linear_linear_prelookup ( & qdb_efOut .
mField0 [ 0ULL ] , & qdb_efOut . mField1 [ 0ULL ] , & qdb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t2579 [ 0ULL ] , &
t222 [ 0ULL ] , & t223 [ 0ULL ] ) ; t186 = qdb_efOut ; t2579 [ 0ULL ] = X [
151ULL ] ; tlu2_linear_linear_prelookup ( & rdb_efOut . mField0 [ 0ULL ] , &
rdb_efOut . mField1 [ 0ULL ] , & rdb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t2579 [ 0ULL ] , & t222 [ 0ULL ]
, & t223 [ 0ULL ] ) ; t89 = rdb_efOut ; t2579 [ 0ULL ] = X [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & sdb_efOut . mField0 [ 0ULL ] , & sdb_efOut .
mField1 [ 0ULL ] , & sdb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t2579 [ 0ULL ] , & t222 [ 0ULL ] , & t223 [ 0ULL ] )
; t165 = sdb_efOut ; t2579 [ 0ULL ] = X [ 14ULL ] ;
tlu2_linear_linear_prelookup ( & tdb_efOut . mField0 [ 0ULL ] , & tdb_efOut .
mField1 [ 0ULL ] , & tdb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t2579 [ 0ULL ] , & t225 [ 0ULL ] , & t223 [ 0ULL ] )
; t136 = tdb_efOut ; t2579 [ 0ULL ] = X [ 531ULL ] ; t2569 [ 0 ] = 5ULL ;
tlu2_linear_nearest_prelookup ( & udb_efOut . mField0 [ 0ULL ] , & udb_efOut
. mField1 [ 0ULL ] , & udb_efOut . mField2 [ 0ULL ] , & nonscalar63 [ 0ULL ]
, & t2579 [ 0ULL ] , & t2569 [ 0ULL ] , & t223 [ 0ULL ] ) ; t154 = udb_efOut
; t2579 [ 0ULL ] = U_idx_12 * 376.99111843077515 * 0.99999999999999978 /
0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t2570 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & vdb_efOut . mField0 [ 0ULL ] , &
vdb_efOut . mField1 [ 0ULL ] , & vdb_efOut . mField2 [ 0ULL ] , & nonscalar64
[ 0ULL ] , & t2579 [ 0ULL ] , & t2570 [ 0ULL ] , & t223 [ 0ULL ] ) ; t158 =
vdb_efOut ; if ( X [ 77ULL ] != X [ 77ULL ] ) { t4835 = X [ 77ULL ] ; } else
if ( X [ 77ULL ] > 0.0 ) { t4835 = 1.0 ; } else { t4835 = X [ 77ULL ] < 0.0 ?
- 1.0 : 0.0 ; } t2579 [ 0ULL ] = t4835 * X [ 76ULL ] ;
tlu2_linear_nearest_prelookup ( & wdb_efOut . mField0 [ 0ULL ] , & wdb_efOut
. mField1 [ 0ULL ] , & wdb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField47 , & t2579 [ 0ULL ] , & t1531 [ 0ULL ] , & t223 [ 0ULL
] ) ; t0 = wdb_efOut ; if ( M [ 214ULL ] != 0 ) { t3195 = t5709 - 500.0 ; }
else { t3195 = t5709 - ( ( 0.001 - X [ 87ULL ] * t5688 * 0.001 ) + X [ 87ULL
] * X [ 87ULL ] * 0.00010037240412334386 ) / ( X [ 79ULL ] == 0.0 ? 1.0E-16 :
X [ 79ULL ] ) * 1000.0 ; } if ( M [ 328ULL ] != 0 ) { t5709 = ( ( X [ 167ULL
] - X [ 165ULL ] ) - 0.799999992 ) * 1000.0 ; } else { t5709 = ( X [ 167ULL ]
- X [ 165ULL ] ) * 1.0E-5 ; } if ( M [ 339ULL ] != 0 ) { t197 = X [ 167ULL ]
- ( ( ( ( ( ( X [ 18ULL ] * 0.1 + X [ 87ULL ] * - 1.01 ) + X [ 166ULL ] *
1.0E-9 ) + - X [ 168ULL ] ) + X [ 19ULL ] ) + - 65.0 ) - t2790 ) * t3490 *
0.001 ; } else { t197 = ( t5688 - X [ 165ULL ] ) - ( t2790 * 0.001 + t5688 )
* t3490 ; } if ( t2800 >= 0.0 ) { t2791 = ( X [ 194ULL ] - X [ 21ULL ] ) -
t2819 ; } else { t2791 = ( X [ 194ULL ] - X [ 21ULL ] ) - zc_int25 ; } if ( -
X [ 180ULL ] >= 0.0 ) { t2819 = ( X [ 198ULL ] - X [ 21ULL ] ) - t2827 ; }
else { t2819 = ( X [ 198ULL ] - X [ 21ULL ] ) - zc_int39 ; } if ( t201 >= 0.0
) { t2827 = X [ 180ULL ] - t2697 ; } else { t2827 = X [ 180ULL ] - t3127 ; }
if ( X [ 238ULL ] >= 0.0 ) { t201 = ( X [ 240ULL ] - X [ 30ULL ] ) -
intrm_sf_mf_278 ; } else { t201 = ( X [ 240ULL ] - X [ 30ULL ] ) - t202 ; }
if ( X [ 241ULL ] >= 0.0 ) { t202 = ( X [ 243ULL ] - X [ 30ULL ] ) - t2912 ;
} else { t202 = ( X [ 243ULL ] - X [ 30ULL ] ) - zc_int81 ; } if ( - X [
241ULL ] >= 0.0 ) { zc_int81 = ( X [ 258ULL ] - X [ 32ULL ] ) - t2967 ; }
else { zc_int81 = ( X [ 258ULL ] - X [ 32ULL ] ) - t2903 ; } if ( X [ 192ULL
] >= 0.0 ) { intrm_sf_mf_278 = ( X [ 260ULL ] - X [ 32ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 ; } else {
intrm_sf_mf_278 = ( X [ 260ULL ] - X [ 32ULL ] ) - t2820 ; } if ( X [ 282ULL
] >= 0.0 ) { t2820 = ( X [ 284ULL ] - X [ 36ULL ] ) - t3015 ; } else { t2820
= ( X [ 284ULL ] - X [ 36ULL ] ) - t2960 ; } if ( - X [ 238ULL ] >= 0.0 ) {
t2903 = ( X [ 286ULL ] - X [ 36ULL ] ) - t3024 ; } else { t2903 = ( X [
286ULL ] - X [ 36ULL ] ) - t209 ; } if ( X [ 319ULL ] >= 0.0 ) { t2912 = ( X
[ 321ULL ] - X [ 39ULL ] ) - t3066 ; } else { t2912 = ( X [ 321ULL ] - X [
39ULL ] ) - t215 ; } if ( - X [ 307ULL ] >= 0.0 ) { t2967 = ( X [ 325ULL ] -
X [ 39ULL ] ) - t3075 ; } else { t2967 = ( X [ 325ULL ] - X [ 39ULL ] ) -
t213 ; } if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu21
>= 0.0 ) { t209 = X [ 307ULL ] - t217 ; } else { t209 = X [ 307ULL ] - t218 ;
} if ( X [ 362ULL ] >= 0.0 ) { t2960 = ( X [ 364ULL ] - X [ 48ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_1 ; } else {
t2960 = ( X [ 364ULL ] - X [ 48ULL ] ) - t3021 ; } if ( X [ 365ULL ] >= 0.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = ( X [
367ULL ] - X [ 48ULL ] ) - t3139 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 = ( X [ 367ULL
] - X [ 48ULL ] ) - zc_int223 ; } if ( - X [ 365ULL ] >= 0.0 ) { zc_int223 =
( X [ 382ULL ] - X [ 49ULL ] ) - t3198 ; } else { zc_int223 = ( X [ 382ULL ]
- X [ 49ULL ] ) - t3008 ; } if ( - X [ 319ULL ] >= 0.0 ) { t213 = ( X [
384ULL ] - X [ 49ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_58 ; } else {
t213 = ( X [ 384ULL ] - X [ 49ULL ] ) - t2822 ; } if ( X [ 407ULL ] >= 0.0 )
{ t2822 = ( X [ 409ULL ] - X [ 53ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip1 ; } else {
t2822 = ( X [ 409ULL ] - X [ 53ULL ] ) - zc_int276 ; } if ( - X [ 362ULL ] >=
0.0 ) { t215 = ( X [ 411ULL ] - X [ 53ULL ] ) - t3255 ; } else { t215 = ( X [
411ULL ] - X [ 53ULL ] ) - zc_int275 ; } if ( - X [ 471ULL ] >= 0.0 ) { t3015
= ( X [ 482ULL ] - X [ 67ULL ] ) - t3383 ; } else { t3015 = ( X [ 482ULL ] -
X [ 67ULL ] ) - t220 ; } if ( X [ 485ULL ] >= 0.0 ) { t217 = ( X [ 487ULL ] -
X [ 67ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M3 ; } else {
t217 = ( X [ 487ULL ] - X [ 67ULL ] ) - zc_int338 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pressu27 >= 0.0 ) {
t218 = - X [ 471ULL ] - zc_int345 ; } else { t218 = - X [ 471ULL ] - t3108 ;
} if ( M [ 44ULL ] != 0 ) { t3021 = X [ 574ULL ] - X [ 573ULL ] ; } else if (
M [ 45ULL ] != 0 ) { t3021 = X [ 574ULL ] - ( - X [ 573ULL ] ) ; } else {
t3021 = X [ 574ULL ] - X [ 77ULL ] ; } t220 = - ( ( X [ 76ULL ] * X [ 574ULL
] * 0.001 + t3495 ) / ( t5688 == 0.0 ? 1.0E-16 : t5688 ) * 1000.0 ) ;
tlu2_2d_linear_linear_value ( & xdb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL
] , & t162 . mField2 [ 0ULL ] , & t153 . mField0 [ 0ULL ] , & t153 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1919 [ 0ULL ] ,
& t1922 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2579 [ 0 ] = xdb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ydb_efOut [ 0ULL ] , & t153 . mField0 [ 0ULL
] , & t153 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t1922 [ 0ULL ] , &
t223 [ 0ULL ] ) ; t2580 [ 0 ] = ydb_efOut [ 0 ] ; tlu2_2d_linear_linear_value
( & aeb_efOut [ 0ULL ] , & t162 . mField0 [ 0ULL ] , & t162 . mField2 [ 0ULL
] , & t153 . mField0 [ 0ULL ] , & t153 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField50 , & t1919 [ 0ULL ] , & t1922 [ 0ULL
] , & t223 [ 0ULL ] ) ; t2581 [ 0 ] = aeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & beb_efOut [ 0ULL ] , & t189 . mField0 [ 0ULL
] , & t189 . mField2 [ 0ULL ] , & t181 . mField0 [ 0ULL ] , & t181 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t1907 [ 0 ] = beb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & ceb_efOut [ 0ULL ] , & t170 . mField0 [ 0ULL
] , & t170 . mField2 [ 0ULL ] , & t172 . mField0 [ 0ULL ] , & t172 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2576_idx_0 = ceb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & deb_efOut [ 0ULL ] , & t157 . mField0 [ 0ULL
] , & t157 . mField2 [ 0ULL ] , & t152 . mField0 [ 0ULL ] , & t152 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2567_idx_0 = deb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & eeb_efOut [ 0ULL ] , & t182 . mField0 [ 0ULL
] , & t182 . mField2 [ 0ULL ] , & t148 . mField0 [ 0ULL ] , & t148 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t2585_idx_0 = eeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & feb_efOut [ 0ULL ] , & t146 . mField0 [ 0ULL
] , & t146 . mField2 [ 0ULL ] , & t145 . mField0 [ 0ULL ] , & t145 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_1 = feb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & geb_efOut [ 0ULL ] , & t137 . mField0 [ 0ULL
] , & t137 . mField2 [ 0ULL ] , & t151 . mField0 [ 0ULL ] , & t151 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_3 = geb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & heb_efOut [ 0ULL ] , & t180 . mField0 [ 0ULL
] , & t180 . mField2 [ 0ULL ] , & t151 . mField0 [ 0ULL ] , & t151 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_7 = heb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & ieb_efOut [ 0ULL ] , & t128 . mField0 [ 0ULL
] , & t128 . mField2 [ 0ULL ] , & t126 . mField0 [ 0ULL ] , & t126 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_11 = ieb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & jeb_efOut [ 0ULL ] , & t125 . mField0 [ 0ULL
] , & t125 . mField2 [ 0ULL ] , & t172 . mField0 [ 0ULL ] , & t172 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_4 = jeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & keb_efOut [ 0ULL ] , & t124 . mField0 [ 0ULL
] , & t124 . mField2 [ 0ULL ] , & t152 . mField0 [ 0ULL ] , & t152 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; U_idx_10 = keb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & leb_efOut [ 0ULL ] , & t168 . mField0 [ 0ULL
] , & t168 . mField2 [ 0ULL ] , & t148 . mField0 [ 0ULL ] , & t148 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3465 = leb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & meb_efOut [ 0ULL ] , & t156 . mField0 [ 0ULL
] , & t156 . mField2 [ 0ULL ] , & t145 . mField0 [ 0ULL ] , & t145 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1772 = meb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & neb_efOut [ 0ULL ] , & t177 . mField0 [ 0ULL
] , & t177 . mField2 [ 0ULL ] , & t118 . mField0 [ 0ULL ] , & t118 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3449 = neb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & oeb_efOut [ 0ULL ] , & t116 . mField0 [ 0ULL
] , & t116 . mField2 [ 0ULL ] , & t181 . mField0 [ 0ULL ] , & t181 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3401 = oeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & peb_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL
] , & t186 . mField2 [ 0ULL ] , & t118 . mField0 [ 0ULL ] , & t118 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4266 = peb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & qeb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , & t126 . mField0 [ 0ULL ] , & t126 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4029 = qeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & reb_efOut [ 0ULL ] , & t186 . mField0 [ 0ULL
] , & t186 . mField2 [ 0ULL ] , & t118 . mField0 [ 0ULL ] , & t118 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4269 = reb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & seb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , & t126 . mField0 [ 0ULL ] , & t126 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3946 = seb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & teb_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL
] , & t165 . mField2 [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4030 = teb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & ueb_efOut [ 0ULL ] , & t165 . mField0 [ 0ULL
] , & t165 . mField2 [ 0ULL ] , & t136 . mField0 [ 0ULL ] , & t136 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t222 [ 0ULL ] , &
t225 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3910 = ueb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & veb_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3657 = veb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & web_efOut [ 0ULL ] , & t82 . mField0 [ 0ULL ]
, & t82 . mField2 [ 0ULL ] , & t80 . mField0 [ 0ULL ] , & t80 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t3858 = web_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & xeb_efOut [ 0ULL ] , & t79 . mField0 [ 0ULL ]
, & t79 . mField2 [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1673 = xeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & yeb_efOut [ 0ULL ] , & t74 . mField0 [ 0ULL ]
, & t74 . mField2 [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1768 = yeb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & afb_efOut [ 0ULL ] , & t149 . mField0 [ 0ULL
] , & t149 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4001 = afb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & bfb_efOut [ 0ULL ] , & t83 . mField0 [ 0ULL ]
, & t83 . mField2 [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; t4307 = bfb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & cfb_efOut [ 0ULL ] , & t188 . mField0 [ 0ULL
] , & t188 . mField2 [ 0ULL ] , & t185 . mField0 [ 0ULL ] , & t185 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] ,
& t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1699 = cfb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & dfb_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , & t185 . mField0 [ 0ULL ] , & t185 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1709 = dfb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & efb_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t80 . mField0 [ 0ULL ] , & t80 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField33 , & t746 [ 0ULL ] , &
t749 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1712 = efb_efOut [ 0 ] ;
tlu2_2d_linear_nearest_value ( & ffb_efOut [ 0ULL ] , & t154 . mField0 [ 0ULL
] , & t154 . mField2 [ 0ULL ] , & t158 . mField0 [ 0ULL ] , & t158 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField51 , & t2569 [ 0ULL ] ,
& t2570 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1733 = ffb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gfb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField52 , &
t1531 [ 0ULL ] , & t223 [ 0ULL ] ) ; intrm_sf_mf_1736 = gfb_efOut [ 0 ] ;
t2045 [ 0ULL ] = - 0.0 ; t2045 [ 1ULL ] = - X [ 78ULL ] * ( real_T ) ( X [
78ULL ] < 0.0 ) / ( t3185 == 0.0 ? 1.0E-16 : t3185 ) ; t2045 [ 2ULL ] = - 0.0
; t2045 [ 3ULL ] = 0.0 ; t2045 [ 4ULL ] = - 0.0 ; t2045 [ 5ULL ] = - 0.0 ;
t2045 [ 6ULL ] = - 0.0 ; t2045 [ 7ULL ] = - 0.0 ; t2045 [ 8ULL ] = - ( - ( (
- U_idx_2 + U_idx_2 ) * ( X [ 155ULL ] / ( X [ 158ULL ] == 0.0 ? 1.0E-16 : X
[ 158ULL ] ) ) ) / 1.1843079200592157 ) ; t2045 [ 9ULL ] = - 0.0 ; t2045 [
10ULL ] = ( - U_idx_2 + U_idx_2 ) * ( X [ 155ULL ] / ( X [ 158ULL ] == 0.0 ?
1.0E-16 : X [ 158ULL ] ) ) * ( X [ 7ULL ] + 126.84999999999997 ) ; t2045 [
11ULL ] = ( ( 0.01 - Electrical_Cooling_System_Tank_Tank_level ) * U_idx_2 *
- 0.009810000000000001 + ( 0.01 - Electrical_Cooling_System_Tank_Tank_level )
* U_idx_2 * 0.009810000000000001 ) - ( - U_idx_2 + U_idx_2 ) * ( X [ 14ULL ]
/ ( X [ 158ULL ] == 0.0 ? 1.0E-16 : X [ 158ULL ] ) * 100.0 + X [ 161ULL ] ) ;
t2045 [ 12ULL ] = - 0.0 ; t2045 [ 13ULL ] = - 0.0 ; t2045 [ 14ULL ] = - 0.0 ;
t2045 [ 15ULL ] = - 0.0 ; t2045 [ 16ULL ] = - 65.0 ; t2045 [ 17ULL ] = - 0.0
; t2045 [ 18ULL ] = - ( ( ( ( t2867 - t2856 * X [ 22ULL ] ) * ( -
164.72089615570803 / ( t2805 == 0.0 ? 1.0E-16 : t2805 ) ) + ( t2866 - t2856 *
X [ 23ULL ] ) * ( - 3827.6794129126583 / ( t2805 == 0.0 ? 1.0E-16 : t2805 ) )
) - t2908 ) / 12.896402563644669 ) ; t2045 [ 19ULL ] = - ( -
8.1984652990144453E-5 + ( ( ( ( t2865 - t2869 ) * ( t2867 - t2856 * X [ 22ULL
] ) + ( t2864 - t2869 ) * ( t2866 - t2856 * X [ 23ULL ] ) ) + t2856 * ( t2858
- X [ 20ULL ] * t2805 * 0.001 ) ) - piece28 ) / 2246.65922904024 ) ; t2045 [
20ULL ] = - ( t2856 * X [ 22ULL ] - t2908 ) ; t2045 [ 21ULL ] = - ( t2856 * X
[ 23ULL ] ) ; t2045 [ 22ULL ] = - ( ( ( ( t2950 - t2949 * X [ 26ULL ] ) * ( -
164.72089615570803 / ( t2890 == 0.0 ? 1.0E-16 : t2890 ) ) + ( t2948 - t2949 *
X [ 25ULL ] ) * ( - 3827.6794129126583 / ( t2890 == 0.0 ? 1.0E-16 : t2890 ) )
) - t2840 ) / 12.896402563644669 ) ; t2045 [ 23ULL ] = - ( ( ( ( ( t2947 -
t2953 ) * ( t2950 - t2949 * X [ 26ULL ] ) + ( t2946 - t2953 ) * ( t2948 -
t2949 * X [ 25ULL ] ) ) + t2949 * ( t2951 - X [ 24ULL ] * t2890 * 0.001 ) ) -
piece47 ) / 2246.65922904024 ) ; t2045 [ 24ULL ] = - ( t2949 * X [ 26ULL ] -
t2840 ) ; t2045 [ 25ULL ] = - ( t2949 * X [ 25ULL ] ) ; t2045 [ 26ULL ] = - (
( ( ( t3005 - t3004 * X [ 29ULL ] ) * ( - 164.72089615570803 / (
intrm_sf_mf_403 == 0.0 ? 1.0E-16 : intrm_sf_mf_403 ) ) + ( t3003 - t3004 * X
[ 28ULL ] ) * ( - 3827.6794129126583 / ( intrm_sf_mf_403 == 0.0 ? 1.0E-16 :
intrm_sf_mf_403 ) ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 ) /
13.896402563644669 ) ; t2045 [ 27ULL ] = - ( ( ( ( ( t3002 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi99 ) * ( t3005 -
t3004 * X [ 29ULL ] ) + ( t3001 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi99 ) * ( t3003 -
t3004 * X [ 28ULL ] ) ) + t3004 * ( intrm_sf_mf_520 - X [ 27ULL ] *
intrm_sf_mf_403 * 0.001 ) ) - t2964 ) / 2448.8207083326588 ) ; t2045 [ 28ULL
] = - ( t3004 * X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi8 ) ; t2045 [
29ULL ] = - ( t3004 * X [ 28ULL ] ) ; t2045 [ 30ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_37 - t3053 * X [
35ULL ] ) * ( - 164.72089615570803 / ( intrm_sf_mf_542 == 0.0 ? 1.0E-16 :
intrm_sf_mf_542 ) ) + ( t3052 - t3053 * X [ 34ULL ] ) * ( -
3827.6794129126583 / ( intrm_sf_mf_542 == 0.0 ? 1.0E-16 : intrm_sf_mf_542 ) )
) - piece63 ) / 12.896402563644669 ) ; t2045 [ 31ULL ] = - ( ( ( ( ( t3051 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_41 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_37 - t3053 * X [
35ULL ] ) + ( t3050 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_41 ) * ( t3052 -
t3053 * X [ 34ULL ] ) ) + t3053 * ( intrm_sf_mf_659 - X [ 33ULL ] *
intrm_sf_mf_542 * 0.001 ) ) - ( - ( t3035 * 100000.0 ) ) ) / 2246.65922904024
) ; t2045 [ 32ULL ] = - ( t3053 * X [ 35ULL ] - piece63 ) ; t2045 [ 33ULL ] =
- ( t3053 * X [ 34ULL ] ) ; t2045 [ 34ULL ] = - ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M39 - t3104 * X [
40ULL ] ) * ( - 164.72089615570803 / ( intrm_sf_mf_692 == 0.0 ? 1.0E-16 :
intrm_sf_mf_692 ) ) + ( t3103 - t3104 * X [ 41ULL ] ) * ( 36.965491221318985
/ ( intrm_sf_mf_692 == 0.0 ? 1.0E-16 : intrm_sf_mf_692 ) ) ) - piece82 ) ;
t2045 [ 35ULL ] = - ( - 0.00042386385785324375 + ( ( ( ( t3102 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M43 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M39 - t3104 * X [
40ULL ] ) + ( t3101 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M43 ) * ( t3103 -
t3104 * X [ 41ULL ] ) ) + t3104 * ( intrm_sf_mf_809 - X [ 38ULL ] *
intrm_sf_mf_692 * 0.001 ) ) - piece100 ) / 2172.7681408465714 ) ; t2045 [
36ULL ] = - ( t3104 * X [ 40ULL ] - piece82 ) ; t2045 [ 37ULL ] = - ( t3104 *
X [ 41ULL ] ) ; t2045 [ 38ULL ] = - ( ( ( t3180 - t3179 * X [ 44ULL ] ) * ( -
164.72089615570803 / ( t3121 == 0.0 ? 1.0E-16 : t3121 ) ) + ( t3178 - t3179 *
X [ 43ULL ] ) * ( 36.965491221318985 / ( t3121 == 0.0 ? 1.0E-16 : t3121 ) ) )
- piece103 ) ; t2045 [ 39ULL ] = - ( ( ( ( ( t3177 - t3183 ) * ( t3180 -
t3179 * X [ 44ULL ] ) + ( t3176 - t3183 ) * ( t3178 - t3179 * X [ 43ULL ] ) )
+ t3179 * ( t3181 - X [ 42ULL ] * t3121 * 0.001 ) ) - ( - ( piece345 *
100000.0 ) ) ) / 2172.7681408465714 ) ; t2045 [ 40ULL ] = - ( t3179 * X [
44ULL ] - piece103 ) ; t2045 [ 41ULL ] = - ( t3179 * X [ 43ULL ] ) ; t2045 [
42ULL ] = - ( ( ( ( t3236 - t3235 * X [ 47ULL ] ) * ( - 164.72089615570803 /
( intrm_sf_mf_1006 == 0.0 ? 1.0E-16 : intrm_sf_mf_1006 ) ) + ( t3234 - t3235
* X [ 46ULL ] ) * ( 36.965491221318985 / ( intrm_sf_mf_1006 == 0.0 ? 1.0E-16
: intrm_sf_mf_1006 ) ) ) - piece121 ) / 1.5549856083302016 ) ; t2045 [ 43ULL
] = - ( ( ( ( ( t3233 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_99 ) * ( t3236 -
t3235 * X [ 47ULL ] ) + ( t3232 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Gas_Channels_99 ) * ( t3234 -
t3235 * X [ 46ULL ] ) ) + t3235 * ( intrm_sf_mf_1123 - X [ 45ULL ] *
intrm_sf_mf_1006 * 0.001 ) ) - t3068 ) / 2374.9296201389902 ) ; t2045 [ 44ULL
] = - ( t3235 * X [ 47ULL ] - piece121 ) ; t2045 [ 45ULL ] = - ( t3235 * X [
46ULL ] ) ; t2045 [ 46ULL ] = - ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip37 - t3284 * X [
52ULL ] ) * ( - 164.72089615570803 / ( intrm_sf_mf_1145 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1145 ) ) + ( t3283 - t3284 * X [ 51ULL ] ) * ( 36.965491221318985
/ ( intrm_sf_mf_1145 == 0.0 ? 1.0E-16 : intrm_sf_mf_1145 ) ) ) - t3086 ) ;
t2045 [ 47ULL ] = - ( ( ( ( ( t3282 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip37 - t3284 * X [
52ULL ] ) + ( t3281 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Humidifier_Pip41 ) * ( t3283 -
t3284 * X [ 51ULL ] ) ) + t3284 * ( intrm_sf_mf_1262 - X [ 50ULL ] *
intrm_sf_mf_1145 * 0.001 ) ) - ( - ( intrm_sf_mf_1178 * 100000.0 ) ) ) /
2172.7681408465714 ) ; t2045 [ 48ULL ] = - ( t3284 * X [ 52ULL ] - t3086 ) ;
t2045 [ 49ULL ] = - ( t3284 * X [ 51ULL ] ) ; t2045 [ 50ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant13 * t3290 /
8385.55841330098 ) ; t2045 [ 51ULL ] = 0.0 ; t2045 [ 52ULL ] = - 0.0 ; t2045
[ 53ULL ] = - 0.0 ; t2045 [ 54ULL ] = - 0.0 ; t2045 [ 55ULL ] = - 0.0 ; t2045
[ 56ULL ] = - 0.0 ; t2045 [ 57ULL ] = - ( ( ( ( t3363 - t3362 * X [ 65ULL ] )
* ( - 164.72089615570803 / ( t3351 == 0.0 ? 1.0E-16 : t3351 ) ) + ( X [
472ULL ] - t3362 * X [ 64ULL ] ) * ( - 3827.6794129126583 / ( t3351 == 0.0 ?
1.0E-16 : t3351 ) ) ) - t3130 ) / 12.896402563644669 ) ; t2045 [ 58ULL ] = -
( ( ( ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T22 -
t3367 ) * ( t3363 - t3362 * X [ 65ULL ] ) + ( t3358 - t3367 ) * ( X [ 472ULL
] - t3362 * X [ 64ULL ] ) ) + t3362 * ( t3364 - X [ 62ULL ] * t3351 * 0.001 )
) - ( - ( intrm_sf_mf_1385 * 100000.0 ) ) ) / 2246.65922904024 ) ; t2045 [
59ULL ] = - ( t3362 * X [ 65ULL ] - t3130 ) ; t2045 [ 60ULL ] = - ( t3362 * X
[ 64ULL ] ) ; t2045 [ 61ULL ] = - ( ( ( ( t3429 - t3428 * X [ 68ULL ] ) * ( -
164.72089615570803 / ( t3370 == 0.0 ? 1.0E-16 : t3370 ) ) + ( t3427 - t3428 *
X [ 69ULL ] ) * ( - 3827.6794129126583 / ( t3370 == 0.0 ? 1.0E-16 : t3370 ) )
) - t3132 ) / 12.896402563644669 ) ; t2045 [ 62ULL ] = - ( ( ( ( ( t3426 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M42 ) * ( t3429 -
t3428 * X [ 68ULL ] ) + ( t3425 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Pipe_M42 ) * ( t3427 -
t3428 * X [ 69ULL ] ) ) + t3428 * ( t3430 - X [ 66ULL ] * t3370 * 0.001 ) ) -
( - ( intrm_sf_mf_1436 * 100000.0 ) ) ) / 2246.65922904024 ) ; t2045 [ 63ULL
] = - ( t3428 * X [ 68ULL ] - t3132 ) ; t2045 [ 64ULL ] = - ( t3428 * X [
69ULL ] ) ; t2045 [ 65ULL ] = - 0.0 ; t2045 [ 66ULL ] = - ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress25 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * X [ 72ULL ]
) * ( - 164.72089615570803 / ( intrm_sf_mf_1637 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1637 ) ) + ( t3478 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * X [ 71ULL ]
) * ( 36.965491221318985 / ( intrm_sf_mf_1637 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1637 ) ) ) - piece196 ) ; t2045 [ 67ULL ] = - ( ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress31 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress29 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress25 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * X [ 72ULL ]
) + ( t3476 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress29
) * ( t3478 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23
* X [ 71ULL ] ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * (
intrm_sf_mf_1659 - X [ 70ULL ] * intrm_sf_mf_1637 * 0.001 ) ) - ( - ( t3473 *
100000.0 ) ) ) / 2172.7681408465714 ) ; t2045 [ 68ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * X [ 72ULL ]
- piece196 ) ; t2045 [ 69ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress23 * X [ 71ULL ]
) ; t2045 [ 70ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant23 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 75ULL ]
) * ( - 164.72089615570803 / ( intrm_sf_mf_1662 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1662 ) ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant20 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 74ULL ]
) * ( - 3827.6794129126583 / ( intrm_sf_mf_1662 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1662 ) ) ) - t3143 ) / 12.896402563644669 ) ; t2045 [ 71ULL ] = -
( ( ( ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant29 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant27 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant23 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 75ULL ]
) + ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant28 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant27 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant20 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 74ULL ]
) ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * (
intrm_sf_mf_1690 - X [ 73ULL ] * intrm_sf_mf_1662 * 0.001 ) ) - ( - ( t3481 *
100000.0 ) ) ) / 2246.65922904024 ) ; t2045 [ 72ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 75ULL ]
- t3143 ) ; t2045 [ 73ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant21 * X [ 74ULL ]
) ; t2045 [ 74ULL ] = - 0.0 ; t2045 [ 75ULL ] = - 0.0 ; t2045 [ 76ULL ] = -
0.0 ; t2045 [ 77ULL ] = - 0.0 ; t5688 = - t2579 [ 0ULL ] ; t2045 [ 78ULL ] =
t5688 / 285.84000000000015 ; t2045 [ 79ULL ] = - t2580 [ 0ULL ] ; t2045 [
80ULL ] = - ( X [ 78ULL ] * t3063 + t3092 ) ; t2045 [ 81ULL ] = - ( X [ 78ULL
] * X [ 78ULL ] * t3063 * 0.001 ) ; t2045 [ 82ULL ] = - ( X [ 1ULL ] / (
t3185 == 0.0 ? 1.0E-16 : t3185 ) ) ; t2045 [ 83ULL ] = - 1.0 ; t2045 [ 84ULL
] = - 1.0 ; t3185 = - t2581 [ 0ULL ] ; t2045 [ 85ULL ] = t3185 /
2.865772800000002 ; t2045 [ 86ULL ] = t3195 ; t2045 [ 87ULL ] = - ( X [ 87ULL
] * X [ 87ULL ] ) / 1.0E+6 ; t2045 [ 88ULL ] = ( X [ 93ULL ] / ( t5279 == 0.0
? 1.0E-16 : t5279 ) - ( ( t2725 * t2726 - t2724 * X [ 95ULL ] ) + t4911 *
100.0 ) ) / 2.6578958850679178E+7 ; t5688 = t1907 [ 0ULL ] - ( t2725 * t2726
+ t2724 * X [ 95ULL ] ) ; t2045 [ 89ULL ] = t5688 / 1.3398809999599461E+7 ;
t2045 [ 90ULL ] = ( - X [ 93ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - ( (
t2730 * t2732 - X [ 95ULL ] * t2728 ) + t4913 * 100.0 ) ) /
2.6578958850679178E+7 ; t2045 [ 91ULL ] = ( t2576_idx_0 - ( t2730 * t2732 + X
[ 95ULL ] * t2728 ) ) / 1.3398809999599461E+7 ; t2045 [ 92ULL ] = - ( t5265 *
X [ 97ULL ] * Electrical_Cooling_System_Flow_Restriction_Converter_Motor_vel0
* 1.7057302038528544E-6 ) ; t2045 [ 93ULL ] = - ( t5265 * X [ 97ULL ] *
2.7488935718910689E-5 ) ; t2045 [ 94ULL ] = ( X [ 102ULL ] / ( t5279 == 0.0 ?
1.0E-16 : t5279 ) - ( ( t2725 * t2733 - t2724 * X [ 104ULL ] ) +
Electrical_Cooling_System_Flow_Restriction_Converter_MotorR_co0 * 100.0 ) ) /
2.6578958850679178E+7 ; t2045 [ 95ULL ] = ( t2567_idx_0 - ( t2725 * t2733 +
t2724 * X [ 104ULL ] ) ) / 1.3398809999599461E+7 ; t2045 [ 96ULL ] = ( - X [
102ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - ( ( t2730 * t2736 - t2728 * X
[ 104ULL ] ) + t2735 * 100.0 ) ) / 2.6578958850679178E+7 ; t2045 [ 97ULL ] =
( t2585_idx_0 - ( t2730 * t2736 + t2728 * X [ 104ULL ] ) ) /
1.3398809999599461E+7 ; t2045 [ 98ULL ] = - ( t4902 * X [ 106ULL ] * t2738 *
1.7057302038528544E-6 ) ; t2045 [ 99ULL ] = - ( t4902 * X [ 106ULL ] *
2.7488935718910689E-5 ) ; t2045 [ 100ULL ] = ( X [ 111ULL ] / ( t5279 == 0.0
? 1.0E-16 : t5279 ) - ( ( t2725 * t2739 - t2724 * X [ 113ULL ] ) +
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_convectio0 * 100.0 ) ) /
2.6578958850679178E+7 ; t2045 [ 101ULL ] = ( U_idx_1 - ( t2725 * t2739 +
t2724 * X [ 113ULL ] ) ) / 1.3398809999599461E+7 ; t2045 [ 102ULL ] = ( - X [
111ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - ( ( t2730 * t2742 - t2728 * X
[ 113ULL ] ) + t2741 * 100.0 ) ) / 2.6578958850679178E+7 ; t2045 [ 103ULL ] =
( U_idx_3 - ( t2730 * t2742 + t2728 * X [ 113ULL ] ) ) /
1.3398809999599461E+7 ; t2045 [ 104ULL ] = - ( t2734 * X [ 115ULL ] *
Electrical_Cooling_System_Flow_Restriction_MotorR_HX_velocity_a *
1.7057302038528544E-6 ) ; t2045 [ 105ULL ] = - ( t2734 * X [ 115ULL ] *
2.7488935718910689E-5 ) ; t2045 [ 106ULL ] = ( X [ 111ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2742 *
t2748 - Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [
121ULL ] ) + t2747 * 100.0 ) ) / 1.328947942533959E+8 ; t2045 [ 107ULL ] = (
U_idx_7 - ( t2742 * t2748 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [ 121ULL ]
) ) / 6.6994049997997306E+7 ; t2045 [ 108ULL ] = ( X [ 118ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2752 *
t2753 - t2749 * X [ 123ULL ] ) + t2750 * 100.0 ) ) / 1.328947942533959E+8 ;
t2045 [ 109ULL ] = ( U_idx_11 - ( t2752 * t2753 + t2749 * X [ 123ULL ] ) ) /
6.6994049997997306E+7 ; t2045 [ 110ULL ] = - ( ( ( U_idx_0 - X [ 6ULL ] ) * (
t2755 * 0.031415926535897927 / 0.01 ) + t2746 ) * 0.001 ) /
28.173600337531049 ; t2045 [ 111ULL ] = - t2757 / 4.10734471884094 ; t2045 [
112ULL ] = - t2757 / 4.10734471884094 ; t2045 [ 113ULL ] = - ( intrm_sf_mf_11
- intrm_sf_mf_20 ) ; t2045 [ 114ULL ] = ( X [ 93ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2732 *
t2748 - Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [
126ULL ] ) + t2759 * 100.0 ) ) / 1.328947942533959E+8 ; t2045 [ 115ULL ] = (
U_idx_4 - ( t2732 * t2748 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [ 126ULL ]
) ) / 6.6994049997997306E+7 ; t2045 [ 116ULL ] = ( - X [ 102ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2733 *
t2752 - t2749 * X [ 128ULL ] ) + t2761 * 100.0 ) ) / 1.328947942533959E+8 ;
t2045 [ 117ULL ] = ( U_idx_10 - ( t2733 * t2752 + t2749 * X [ 128ULL ] ) ) /
6.6994049997997306E+7 ; t2045 [ 118ULL ] = - ( ( ( X [ 10ULL ] - X [ 9ULL ] )
* ( Electrical_Cooling_System_Pipe_Converter_pipe_model_k_I *
0.031415926535897927 / 0.01 ) +
Electrical_Cooling_System_Pipe_Converter_pipe_model_Q_conv ) * 0.001 ) ;
t2045 [ 119ULL ] = - t2764 / 4.10734471884094 ; t2045 [ 120ULL ] = - t2764 /
4.10734471884094 ; t2045 [ 121ULL ] = - ( intrm_sf_mf_32 - intrm_sf_mf_41 ) ;
t2045 [ 122ULL ] = ( X [ 102ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2736 *
t2748 - Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [
131ULL ] ) + t2766 * 100.0 ) ) / 1.328947942533959E+8 ; t2045 [ 123ULL ] = (
t3465 - ( t2736 * t2748 +
Electrical_Cooling_System_Heat_Exchanger_pipe_model_convectio3 * X [ 131ULL ]
) ) / 6.6994049997997306E+7 ; t2045 [ 124ULL ] = ( - X [ 111ULL ] / (
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg == 0.0 ? 1.0E-16 :
Electrical_Cooling_System_Heat_Exchanger_pipe_model_k_avg ) - ( ( t2739 *
t2752 - t2749 * X [ 133ULL ] ) + t2751 * 100.0 ) ) / 1.328947942533959E+8 ;
t2045 [ 125ULL ] = ( intrm_sf_mf_1772 - ( t2739 * t2752 + t2749 * X [ 133ULL
] ) ) / 6.6994049997997306E+7 ; t2045 [ 126ULL ] = - ( ( ( X [ 12ULL ] - X [
11ULL ] ) * ( Electrical_Cooling_System_Pipe_Motor_pipe_model_delta_T *
0.031415926535897927 / 0.01 ) + t2768 ) * 0.001 ) ; t2045 [ 127ULL ] = -
t2772 / 4.10734471884094 ; t2045 [ 128ULL ] = - t2772 / 4.10734471884094 ;
t2045 [ 129ULL ] = - ( intrm_sf_mf_521 - t2660 ) ; t2045 [ 130ULL ] = ( X [
136ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - ( ( t2725 * t2776 - t2724 * X
[ 138ULL ] ) + t2775 * 100.0 ) ) / 2.6578958850679178E+7 ; t2045 [ 131ULL ] =
( t3449 - ( t2725 * t2776 + t2724 * X [ 138ULL ] ) ) / 1.3398809999599461E+7
; t2045 [ 132ULL ] = ( - X [ 93ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - (
( t2726 * t2730 - t2728 * X [ 138ULL ] ) + t2778 * 100.0 ) ) /
2.6578958850679178E+7 ; t2045 [ 133ULL ] = ( t3401 - ( t2726 * t2730 + t2728
* X [ 138ULL ] ) ) / 1.3398809999599461E+7 ; t2045 [ 134ULL ] = ( X [ 90ULL ]
- X [ 135ULL ] ) * U_idx_2 / ( t4850 == 0.0 ? 1.0E-16 : t4850 ) * 100.0 ;
t2045 [ 135ULL ] = X [ 140ULL ] * intrm_sf_mf_1729 * 1.0E-6 ; t2045 [ 136ULL
] = ( X [ 144ULL ] / ( t2779 == 0.0 ? 1.0E-16 : t2779 ) - ( ( X [ 148ULL ] /
( t2779 == 0.0 ? 1.0E-16 : t2779 ) + 1.0 ) / 2.0 * t2780 - ( 1.0 - X [ 148ULL
] / ( t2779 == 0.0 ? 1.0E-16 : t2779 ) ) / 2.0 * X [ 147ULL ] ) ) /
1.0353953839061435E+6 ; t2045 [ 137ULL ] = ( - X [ 144ULL ] / ( t2783 == 0.0
? 1.0E-16 : t2783 ) - ( ( - X [ 148ULL ] / ( t2783 == 0.0 ? 1.0E-16 : t2783 )
+ 1.0 ) / 2.0 * t2784 - ( 1.0 - - X [ 148ULL ] / ( t2783 == 0.0 ? 1.0E-16 :
t2783 ) ) / 2.0 * X [ 147ULL ] ) ) / 1.0353953839061435E+6 ; t2045 [ 138ULL ]
= - ( t5677 * 0.99999999999999978 ) + 1.01325 ; t2045 [ 139ULL ] =
126.84999999999997 + piece302 ; t2045 [ 140ULL ] = 126.84999999999997 + - X [
148ULL ] / 0.001 / ( piece307 == 0.0 ? 1.0E-16 : piece307 ) * ( - X [ 148ULL
] / 0.001 / ( piece307 == 0.0 ? 1.0E-16 : piece307 ) ) / 2.0 * 0.001 ; t2045
[ 141ULL ] = ( - X [ 144ULL ] / ( t2779 == 0.0 ? 1.0E-16 : t2779 ) - ( ( - X
[ 148ULL ] / ( t2779 == 0.0 ? 1.0E-16 : t2779 ) + 1.0 ) / 2.0 *
Electrical_Cooling_System_Tank_Reservoir_G_convection_A_ht_in - ( 1.0 - - X [
148ULL ] / ( t2779 == 0.0 ? 1.0E-16 : t2779 ) ) / 2.0 * X [ 149ULL ] ) ) /
1.0353953839061435E+6 ; t2045 [ 142ULL ] = - 426.85 + - ( - X [ 148ULL ] /
0.001 / 1.1768292682926846 * ( - X [ 148ULL ] / 0.001 / 1.1768292682926846 )
/ 2.0 * 0.001 ) ; t2045 [ 143ULL ] = ( X [ 144ULL ] / ( t3315 == 0.0 ?
1.0E-16 : t3315 ) - ( ( X [ 148ULL ] / ( t3315 == 0.0 ? 1.0E-16 : t3315 ) +
1.0 ) / 2.0 * t3074 - ( 1.0 - X [ 148ULL ] / ( t3315 == 0.0 ? 1.0E-16 : t3315
) ) / 2.0 * t2806 ) ) / 1.0154029933632419E+6 ; t2045 [ 144ULL ] = ( 0.0 / (
intrm_sf_mf_1770 == 0.0 ? 1.0E-16 : intrm_sf_mf_1770 ) - ( ( 0.0 / (
intrm_sf_mf_1770 == 0.0 ? 1.0E-16 : intrm_sf_mf_1770 ) + 1.0 ) / 2.0 * ( 0.0
/ ( X [ 157ULL ] == 0.0 ? 1.0E-16 : X [ 157ULL ] ) / ( t4744 == 0.0 ? 1.0E-16
: t4744 ) / 2.0 * 0.001 + ( ( X [ 141ULL ] - 293.15 ) + 420.0 ) ) - ( 1.0 -
0.0 / ( intrm_sf_mf_1770 == 0.0 ? 1.0E-16 : intrm_sf_mf_1770 ) ) / 2.0 *
zc_int6 ) ) / 0.5 ; t2045 [ 145ULL ] = ( intrm_sf_mf_1756 - (
intrm_sf_mf_1753 - intrm_sf_mf_172 ) ) / 0.98692326671601283 +
5.7344703551184342 ; t2045 [ 146ULL ] = ( t3435 - ( intrm_sf_mf_1753 - t2870
) ) / 0.98692326671601283 + 5.7344703551184342 ; t2045 [ 147ULL ] = ( t3436 -
( intrm_sf_mf_1753 - intrm_sf_mf_1752 ) ) / 0.98692326671601283 +
5.7344703551184342 ; t2045 [ 148ULL ] = ( - X [ 136ULL ] / ( t5279 == 0.0 ?
1.0E-16 : t5279 ) - ( ( t2730 * t2776 - t2728 * X [ 161ULL ] ) + - U_idx_2 /
( t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [ 135ULL ] / ( X [ 153ULL ] == 0.0 ?
1.0E-16 : X [ 153ULL ] ) * 100.0 ) ) / 2.65794426837838E+7 ; t2045 [ 149ULL ]
= ( - X [ 118ULL ] / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) - ( ( t2725 * t2753 -
t2724 * X [ 161ULL ] ) + U_idx_2 / ( t5279 == 0.0 ? 1.0E-16 : t5279 ) * X [
117ULL ] / ( X [ 154ULL ] == 0.0 ? 1.0E-16 : X [ 154ULL ] ) * 100.0 ) ) /
2.65794426837838E+7 ; t2045 [ 150ULL ] = - t4266 ; t2045 [ 151ULL ] = - t4029
; t2045 [ 152ULL ] = - ( t2730 * t2776 + t2728 * X [ 161ULL ] ) /
1.3398809999599461E+7 ; t2045 [ 153ULL ] = - ( t2725 * t2753 + t2724 * X [
161ULL ] ) / 1.3398809999599461E+7 ; t2045 [ 154ULL ] = - t4269 /
4.10734471884094 ; t2045 [ 155ULL ] = - t3946 / 4.10734471884094 ; t2045 [
156ULL ] = - t4030 / 4.0757781197154195 ; t2045 [ 157ULL ] = ( 0.01 -
Electrical_Cooling_System_Tank_Tank_level ) * X [ 153ULL ] *
9.8100000000000013E-5 + intrm_sf_mf_1800 ; t2045 [ 158ULL ] = ( 0.01 -
Electrical_Cooling_System_Tank_Tank_level ) * X [ 154ULL ] *
9.8100000000000013E-5 + intrm_sf_mf_1801 ; t2045 [ 159ULL ] = - (
Electrical_Cooling_System_Tank_Tank_level * X [ 158ULL ] * 0.005 ) / 5.0 ;
t2045 [ 160ULL ] = - t3910 ; t2045 [ 161ULL ] = 0.0 ; t2045 [ 162ULL ] = 0.0
; t2045 [ 163ULL ] = 0.0 ; t2045 [ 164ULL ] = - t5709 ; t2045 [ 165ULL ] =
t197 ; t2045 [ 166ULL ] = - ( t2790 * t3490 ) + - 65.0 ; t3185 = X [ 180ULL ]
+ t2795 ; t5677 = t2795 - X [ 180ULL ] ; t2045 [ 167ULL ] = - ( t3185 / 2.0 *
t2897 - t5677 / 2.0 * X [ 179ULL ] ) / 365.59674280784293 ; U_idx_11 = X [
180ULL ] + t2794 ; U_idx_4 = t2794 - X [ 180ULL ] ; t2045 [ 168ULL ] = - (
U_idx_11 / 2.0 * X [ 176ULL ] - U_idx_4 / 2.0 * X [ 184ULL ] ) ; t5709 = X [
180ULL ] + t2793 ; t5688 = t2793 - X [ 180ULL ] ; t2045 [ 169ULL ] = - (
t5709 / 2.0 * X [ 175ULL ] - t5688 / 2.0 * X [ 183ULL ] ) ; t2045 [ 170ULL ]
= 0.0 ; t2045 [ 171ULL ] = X [ 187ULL ] * t2798 / 461.523 ; t2045 [ 172ULL ]
= X [ 177ULL ] * t2799 ; t2045 [ 173ULL ] = 0.071939481849452439 + ( ( ( -
t2796 - t2797 ) * 296.802103844292 + t2796 * 461.523 ) + t2797 *
4124.48151675695 ) * 0.9997 / 4124.48151675695 ; U_idx_10 = t2798 * 293.15 ;
t2045 [ 174ULL ] = - 304.06022922571 + - ( ( ( real_T ) ( M [ 2ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_10 / 1.01325 ) * ( U_idx_10 / 1.01325 ) * ( X [ 180ULL
] / 7.8539816339744827E-5 ) * ( X [ 180ULL ] / 7.8539816339744827E-5 ) / 2.0
* 9.999999999999999E-14 + piece352 ) ; t2045 [ 175ULL ] = - t2796 ; t2045 [
176ULL ] = - t2797 ; t2045 [ 177ULL ] = - ( ( t2800 + t2854 ) / 2.0 * zc_int8
- ( t2854 - t2800 ) / 2.0 * X [ 203ULL ] ) ; t2045 [ 178ULL ] = - ( ( t2800 +
t2852 ) / 2.0 * X [ 172ULL ] - ( t2852 - t2800 ) / 2.0 * X [ 209ULL ] ) ;
t2045 [ 179ULL ] = - ( ( t2800 + t2851 ) / 2.0 * X [ 171ULL ] - ( t2851 -
t2800 ) / 2.0 * X [ 208ULL ] ) ; t2045 [ 180ULL ] = - ( ( - X [ 180ULL ] +
t2863 ) / 2.0 * zc_int9 - ( t2863 - ( - X [ 180ULL ] ) ) / 2.0 * X [ 210ULL ]
) ; t2045 [ 181ULL ] = - ( ( - X [ 180ULL ] + t2861 ) / 2.0 * X [ 191ULL ] -
( t2861 - ( - X [ 180ULL ] ) ) / 2.0 * X [ 212ULL ] ) ; t2045 [ 182ULL ] = -
( ( - X [ 180ULL ] + t2860 ) / 2.0 * X [ 190ULL ] - ( t2860 - ( - X [ 180ULL
] ) ) / 2.0 * X [ 211ULL ] ) ; t2045 [ 183ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Exhaust_Pipe_MA_Q_ * 0.001 +
intrm_sf_mf_1092 ) + 0.18419157727996954 ; t2045 [ 184ULL ] = - ( piece350 /
7.8539816339744827E-5 * 0.00031622776601683789 + t3304 ) ; t2045 [ 185ULL ] =
- ( t4654 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2845 ) ; t2045
[ 186ULL ] = t2791 ; t2045 [ 187ULL ] = t2819 ; U_idx_10 = X [ 193ULL ] *
t2805 ; t2045 [ 188ULL ] = - ( ( ( real_T ) ( M [ 72ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_10 / ( X [ 194ULL ] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) ) * (
U_idx_10 / ( X [ 194ULL ] == 0.0 ? 1.0E-16 : X [ 194ULL ] ) ) * ( t2800 /
7.8539816339744827E-5 ) * ( t2800 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2756 ) ; U_idx_10 = X [ 197ULL ] * t2805 ; t2045 [
189ULL ] = - ( ( ( real_T ) ( M [ 83ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_10 /
( X [ 198ULL ] == 0.0 ? 1.0E-16 : X [ 198ULL ] ) ) * ( U_idx_10 / ( X [
198ULL ] == 0.0 ? 1.0E-16 : X [ 198ULL ] ) ) * ( - X [ 180ULL ] /
7.8539816339744827E-5 ) * ( - X [ 180ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2815 ) ; t2045 [ 190ULL ] = ( X [ 200ULL ] * t2805 /
461.523 - t2842 * X [ 22ULL ] ) / 0.64309276860371423 ; t2045 [ 191ULL ] = X
[ 195ULL ] * t2805 / 461.523 ; t2045 [ 192ULL ] = X [ 199ULL ] * t2838 ;
t2045 [ 193ULL ] = X [ 196ULL ] * t2805 / 4124.48151675695 ; t2045 [ 194ULL ]
= - ( ( ( real_T ) ( M [ 94ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2837 / ( X [ 21ULL
] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ) * ( t2837 / ( X [ 21ULL ] == 0.0 ?
1.0E-16 : X [ 21ULL ] ) ) * ( t2800 / 7.8539816339744827E-5 ) * ( t2800 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2858 ) ; t2045 [
195ULL ] = - t2802 ; t2045 [ 196ULL ] = - t2803 ; t2045 [ 197ULL ] = - ( ( (
real_T ) ( M [ 94ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2837 / ( X [ 21ULL ] == 0.0
? 1.0E-16 : X [ 21ULL ] ) ) * ( t2837 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 : X [
21ULL ] ) ) * ( - X [ 180ULL ] / 7.8539816339744827E-5 ) * ( - X [ 180ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2858 ) ; t2045 [
198ULL ] = - t2802 ; t2045 [ 199ULL ] = - t2803 ; t2045 [ 200ULL ] = - (
t3185 / 2.0 * t2825 - t5677 / 2.0 * X [ 219ULL ] ) ; t2045 [ 201ULL ] = - (
U_idx_11 / 2.0 * X [ 191ULL ] - U_idx_4 / 2.0 * X [ 215ULL ] ) ; t2045 [
202ULL ] = - ( t5709 / 2.0 * X [ 190ULL ] - t5688 / 2.0 * X [ 216ULL ] ) ;
t2045 [ 203ULL ] = - ( ( - X [ 180ULL ] + t2795 ) / 2.0 * zc_int41 - ( t2795
- ( - X [ 180ULL ] ) ) / 2.0 * X [ 219ULL ] ) / 365.59674280784293 ; t2045 [
204ULL ] = - ( ( - X [ 180ULL ] + t2794 ) / 2.0 * X [ 176ULL ] - ( t2794 - (
- X [ 180ULL ] ) ) / 2.0 * X [ 215ULL ] ) ; t2045 [ 205ULL ] = - ( ( - X [
180ULL ] + t2793 ) / 2.0 * X [ 175ULL ] - ( t2793 - ( - X [ 180ULL ] ) ) /
2.0 * X [ 216ULL ] ) ; t2045 [ 206ULL ] = t2827 ; t2045 [ 207ULL ] = - (
intrm_sf_mf_262 - t2886 ) ; t3185 = X [ 217ULL ] * intrm_sf_mf_234 ; t2045 [
208ULL ] = - ( ( ( real_T ) ( M [ 148ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / (
X [ 189ULL ] == 0.0 ? 1.0E-16 : X [ 189ULL ] ) ) * ( t3185 / ( X [ 189ULL ]
== 0.0 ? 1.0E-16 : X [ 189ULL ] ) ) * ( X [ 180ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( X [ 180ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_253 ) ; t3185 = X [ 218ULL ] *
intrm_sf_mf_234 ; t2045 [ 209ULL ] = - ( ( ( real_T ) ( M [ 159ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3185 / 1.01325 ) * ( t3185 / 1.01325 ) * ( X [ 180ULL ] /
0.64 / 7.8539816339744827E-5 ) * ( X [ 180ULL ] / 0.64 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_256 ) /
1.0413512978067061 ; t2045 [ 210ULL ] = - ( ( ( real_T ) ( M [ 170ULL ] != 0
) * 2.0 - 1.0 ) * ( t2880 / ( X [ 214ULL ] == 0.0 ? 1.0E-16 : X [ 214ULL ] )
) * ( t2880 / ( X [ 214ULL ] == 0.0 ? 1.0E-16 : X [ 214ULL ] ) ) * ( X [
180ULL ] / 0.64 / ( intrm_sf_mf_225 == 0.0 ? 1.0E-16 : intrm_sf_mf_225 ) ) *
( X [ 180ULL ] / 0.64 / ( intrm_sf_mf_225 == 0.0 ? 1.0E-16 : intrm_sf_mf_225
) ) / 2.0 * 9.999999999999999E-14 + t3306 ) ; t2045 [ 211ULL ] = - ( ( X [
238ULL ] + t2941 ) / 2.0 * zc_int50 - ( t2941 - X [ 238ULL ] ) / 2.0 * X [
247ULL ] ) ; t2045 [ 212ULL ] = - ( ( X [ 238ULL ] + t2939 ) / 2.0 * X [
237ULL ] - ( t2939 - X [ 238ULL ] ) / 2.0 * X [ 251ULL ] ) ; t2045 [ 213ULL ]
= - ( ( X [ 238ULL ] + t2937 ) / 2.0 * X [ 236ULL ] - ( t2937 - X [ 238ULL ]
) / 2.0 * X [ 250ULL ] ) ; t2045 [ 214ULL ] = - ( ( X [ 241ULL ] + t2945 ) /
2.0 * zc_int51 - ( t2945 - X [ 241ULL ] ) / 2.0 * X [ 252ULL ] ) ; t2045 [
215ULL ] = - ( ( X [ 241ULL ] + t2944 ) / 2.0 * X [ 223ULL ] - ( t2944 - X [
241ULL ] ) / 2.0 * X [ 256ULL ] ) ; t2045 [ 216ULL ] = - ( ( X [ 241ULL ] +
t2942 ) / 2.0 * X [ 222ULL ] - ( t2942 - X [ 241ULL ] ) / 2.0 * X [ 255ULL ]
) ; t2045 [ 217ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi9 * 0.001 +
intrm_sf_mf_355 ) ; t2045 [ 218ULL ] = - ( t4764 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_391 ) ; t2045 [ 219ULL ] = - ( t4784 /
0.32 * 0.00031622776601683789 + t3333 ) ; t2045 [ 220ULL ] = t201 ; t2045 [
221ULL ] = t202 ; t3185 = X [ 239ULL ] * t2890 ; t2045 [ 222ULL ] = - ( ( (
real_T ) ( M [ 248ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [ 240ULL ] ==
0.0 ? 1.0E-16 : X [ 240ULL ] ) ) * ( t3185 / ( X [ 240ULL ] == 0.0 ? 1.0E-16
: X [ 240ULL ] ) ) * ( X [ 238ULL ] / 0.32 ) * ( X [ 238ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + intrm_sf_mf_376 ) ; t3185 = X [ 242ULL ] * t2890 ;
t2045 [ 223ULL ] = - ( ( ( real_T ) ( M [ 259ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3185 / ( X [ 243ULL ] == 0.0 ? 1.0E-16 : X [ 243ULL ] ) ) * ( t3185 / ( X [
243ULL ] == 0.0 ? 1.0E-16 : X [ 243ULL ] ) ) * ( X [ 241ULL ] / 0.32 ) * ( X
[ 241ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2935 ) ; t2045 [ 224ULL
] = ( X [ 225ULL ] * t2890 / 461.523 - t2926 * X [ 26ULL ] ) /
0.64309276860371423 ; t2045 [ 225ULL ] = X [ 226ULL ] * t2890 / 461.523 ;
t2045 [ 226ULL ] = X [ 227ULL ] * t2923 ; t2045 [ 227ULL ] = X [ 228ULL ] *
t2890 / 4124.48151675695 ; t2045 [ 228ULL ] = 0.0 ; t2045 [ 229ULL ] = - ( (
( real_T ) ( M [ 270ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2920 / ( X [ 30ULL ] ==
0.0 ? 1.0E-16 : X [ 30ULL ] ) ) * ( t2920 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 :
X [ 30ULL ] ) ) * ( X [ 238ULL ] / 0.32 ) * ( X [ 238ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2951 ) ; t2045 [ 230ULL ] = - t2883 ; t2045 [ 231ULL
] = - t2888 ; t2045 [ 232ULL ] = - ( ( ( real_T ) ( M [ 270ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2920 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) ) * (
t2920 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) ) * ( X [ 241ULL ] /
0.32 ) * ( X [ 241ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2951 ) ;
t2045 [ 233ULL ] = - t2883 ; t2045 [ 234ULL ] = - t2888 ; t2045 [ 235ULL ] =
- ( ( - X [ 241ULL ] + t2945 ) / 2.0 * t2891 - ( t2945 - ( - X [ 241ULL ] ) )
/ 2.0 * X [ 264ULL ] ) ; t2045 [ 236ULL ] = - ( ( - X [ 241ULL ] + t2944 ) /
2.0 * X [ 223ULL ] - ( t2944 - ( - X [ 241ULL ] ) ) / 2.0 * X [ 266ULL ] ) ;
t2045 [ 237ULL ] = - ( ( - X [ 241ULL ] + t2942 ) / 2.0 * X [ 222ULL ] - (
t2942 - ( - X [ 241ULL ] ) ) / 2.0 * X [ 265ULL ] ) ; t2045 [ 238ULL ] = - (
( X [ 192ULL ] + t3000 ) / 2.0 * zc_int83 - ( t3000 - X [ 192ULL ] ) / 2.0 *
X [ 267ULL ] ) ; t2045 [ 239ULL ] = - ( ( X [ 192ULL ] + t2999 ) / 2.0 * X [
172ULL ] - ( t2999 - X [ 192ULL ] ) / 2.0 * X [ 269ULL ] ) ; t2045 [ 240ULL ]
= - ( ( X [ 192ULL ] + t2998 ) / 2.0 * X [ 171ULL ] - ( t2998 - X [ 192ULL ]
) / 2.0 * X [ 268ULL ] ) ; t2045 [ 241ULL ] = - ( t2993 * 0.001 +
intrm_sf_mf_495 ) ; t2045 [ 242ULL ] = - ( t4258 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_529 ) ; t2045 [ 243ULL ] = - ( t4254 /
0.32 * 0.00031622776601683789 + t2957 ) ; t2045 [ 244ULL ] = zc_int81 ; t2045
[ 245ULL ] = intrm_sf_mf_278 ; t3185 = X [ 257ULL ] * intrm_sf_mf_403 ; t2045
[ 246ULL ] = - ( ( ( real_T ) ( M [ 302ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 /
( X [ 258ULL ] == 0.0 ? 1.0E-16 : X [ 258ULL ] ) ) * ( t3185 / ( X [ 258ULL ]
== 0.0 ? 1.0E-16 : X [ 258ULL ] ) ) * ( - X [ 241ULL ] / 0.32 ) * ( - X [
241ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_514 ) ; t3185 =
X [ 259ULL ] * intrm_sf_mf_403 ; t2045 [ 247ULL ] = - ( ( ( real_T ) ( M [
303ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X
[ 260ULL ] ) ) * ( t3185 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) )
* ( X [ 192ULL ] / 0.32 ) * ( X [ 192ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_312 ) ; t2045 [ 248ULL ] = ( X [ 230ULL ]
* intrm_sf_mf_403 / 461.523 - t2991 * X [ 29ULL ] ) / 0.64309276860371423 ;
t2045 [ 249ULL ] = X [ 231ULL ] * intrm_sf_mf_403 / 461.523 ; t2045 [ 250ULL
] = X [ 232ULL ] * t2987 ; t2045 [ 251ULL ] = X [ 233ULL ] * intrm_sf_mf_403
/ 4124.48151675695 ; t2045 [ 252ULL ] = 0.0 ; t2045 [ 253ULL ] = - ( ( (
real_T ) ( M [ 304ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2972 / ( X [ 32ULL ] == 0.0
? 1.0E-16 : X [ 32ULL ] ) ) * ( t2972 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [
32ULL ] ) ) * ( - X [ 241ULL ] / 0.32 ) * ( - X [ 241ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_520 ) ; t2045 [ 254ULL ] = - t2959 ;
t2045 [ 255ULL ] = - intrm_sf_mf_402 ; t2045 [ 256ULL ] = - ( ( ( real_T ) (
M [ 304ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2972 / ( X [ 32ULL ] == 0.0 ? 1.0E-16
: X [ 32ULL ] ) ) * ( t2972 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] )
) * ( X [ 192ULL ] / 0.32 ) * ( X [ 192ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_520 ) ; t2045 [ 257ULL ] = - t2959 ;
t2045 [ 258ULL ] = - intrm_sf_mf_402 ; t2045 [ 259ULL ] = U_idx_5 * zc_int114
; t2045 [ 260ULL ] = - ( ( X [ 282ULL ] + t3046 ) / 2.0 * zc_int117 - ( t3046
- X [ 282ULL ] ) / 2.0 * X [ 288ULL ] ) ; t2045 [ 261ULL ] = - ( ( X [ 282ULL
] + t3045 ) / 2.0 * X [ 274ULL ] - ( t3045 - X [ 282ULL ] ) / 2.0 * X [
292ULL ] ) ; t2045 [ 262ULL ] = - ( ( X [ 282ULL ] + t3044 ) / 2.0 * X [
273ULL ] - ( t3044 - X [ 282ULL ] ) / 2.0 * X [ 291ULL ] ) ; t2045 [ 263ULL ]
= - ( ( - X [ 238ULL ] + t3049 ) / 2.0 * zc_int118 - ( t3049 - ( - X [ 238ULL
] ) ) / 2.0 * X [ 293ULL ] ) ; t2045 [ 264ULL ] = - ( ( - X [ 238ULL ] +
t3048 ) / 2.0 * X [ 237ULL ] - ( t3048 - ( - X [ 238ULL ] ) ) / 2.0 * X [
295ULL ] ) ; t2045 [ 265ULL ] = - ( ( - X [ 238ULL ] + t3047 ) / 2.0 * X [
236ULL ] - ( t3047 - ( - X [ 238ULL ] ) ) / 2.0 * X [ 294ULL ] ) ; t2045 [
266ULL ] = - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Humidifier_Pipe_8
* 0.001 + t2758 ) / 1.8850371198102225E-5 ; t2045 [ 267ULL ] = - ( t4288 /
0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_668 ) ; t2045 [
268ULL ] = - ( t4302 / 0.0019634954084936209 * 0.00031622776601683789 + t2958
) ; t2045 [ 269ULL ] = t2820 ; t2045 [ 270ULL ] = t2903 ; t3185 = X [ 283ULL
] * intrm_sf_mf_542 ; t2045 [ 271ULL ] = - ( ( ( real_T ) ( M [ 312ULL ] != 0
) * 2.0 - 1.0 ) * ( t3185 / ( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [ 284ULL ] )
) * ( t3185 / ( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [ 284ULL ] ) ) * ( X [
282ULL ] / 0.0019634954084936209 ) * ( X [ 282ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + intrm_sf_mf_653 ) ; t3185 = X [ 285ULL ] *
intrm_sf_mf_542 ; t2045 [ 272ULL ] = - ( ( ( real_T ) ( M [ 313ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3185 / ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) *
( t3185 / ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) * ( - X [ 238ULL
] / 0.0019634954084936209 ) * ( - X [ 238ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + t2771 ) ; t2045 [ 273ULL ] = ( X [ 277ULL ] *
intrm_sf_mf_542 / 461.523 - t3037 * X [ 35ULL ] ) / 0.64309276860371423 ;
t2045 [ 274ULL ] = X [ 279ULL ] * intrm_sf_mf_542 / 461.523 ; t2045 [ 275ULL
] = X [ 276ULL ] * t3033 ; t2045 [ 276ULL ] = X [ 278ULL ] * intrm_sf_mf_542
/ 4124.48151675695 ; t2045 [ 277ULL ] = 0.0 ; t2045 [ 278ULL ] = - ( ( (
real_T ) ( M [ 314ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3020 / ( X [ 36ULL ] == 0.0
? 1.0E-16 : X [ 36ULL ] ) ) * ( t3020 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [
36ULL ] ) ) * ( X [ 282ULL ] / 0.0019634954084936209 ) * ( X [ 282ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_659 ) ;
t2045 [ 279ULL ] = - t2984 ; t2045 [ 280ULL ] = - intrm_sf_mf_541 ; t2045 [
281ULL ] = - ( ( ( real_T ) ( M [ 314ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3020 / (
X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * ( t3020 / ( X [ 36ULL ] ==
0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * ( - X [ 238ULL ] / 0.0019634954084936209 )
* ( - X [ 238ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_659 ) ; t2045 [ 282ULL ] = - t2984 ; t2045 [ 283ULL ] = -
intrm_sf_mf_541 ; t3185 = X [ 307ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 ; t5677 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 - X [ 307ULL
] ; t2045 [ 284ULL ] = - ( t3185 / 2.0 * t2811 - t5677 / 2.0 * X [ 306ULL ] )
/ 365.59674280784293 ; U_idx_11 = X [ 307ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1 ; U_idx_4 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1 - X [ 307ULL
] ; t2045 [ 285ULL ] = - ( U_idx_11 / 2.0 * X [ 303ULL ] - U_idx_4 / 2.0 * X
[ 311ULL ] ) ; t5709 = X [ 307ULL ] + t3057 ; t5688 = t3057 - X [ 307ULL ] ;
t2045 [ 286ULL ] = - ( t5709 / 2.0 * X [ 302ULL ] - t5688 / 2.0 * X [ 310ULL
] ) ; U_idx_10 = 148.401051922146 ; t2045 [ 287ULL ] = U_idx_10 / 461.523 /
43.3158175294914 + intrm_sf_mf_1192 * 0.5 / 461.523 / 43.3158175294914 ;
t2045 [ 288ULL ] = X [ 314ULL ] * intrm_sf_mf_680 / 461.523 ; t2045 [ 289ULL
] = X [ 304ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ5 ; U_idx_7 =
62.328441807301317 ; t2045 [ 290ULL ] = U_idx_7 / 259.836612622973 +
intrm_sf_mf_1192 * 0.21 / 259.836612622973 ; t5279 = intrm_sf_mf_680 * 293.15
; t2045 [ 291ULL ] = - 304.06022922571 + - ( ( ( real_T ) ( M [ 316ULL ] != 0
) * 2.0 - 1.0 ) * ( t5279 / 1.01325 ) * ( t5279 / 1.01325 ) * ( X [ 307ULL ]
/ 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3187 ) ; t2045 [ 292ULL ] = - intrm_sf_mf_678 ;
t2045 [ 293ULL ] = - intrm_sf_mf_679 ; t2045 [ 294ULL ] = - ( ( X [ 319ULL ]
+ t3097 ) / 2.0 * t2978 - ( t3097 - X [ 319ULL ] ) / 2.0 * X [ 329ULL ] ) ;
t2045 [ 295ULL ] = - ( ( X [ 319ULL ] + t3096 ) / 2.0 * X [ 299ULL ] - (
t3096 - X [ 319ULL ] ) / 2.0 * X [ 333ULL ] ) ; t2045 [ 296ULL ] = - ( ( X [
319ULL ] + t3095 ) / 2.0 * X [ 298ULL ] - ( t3095 - X [ 319ULL ] ) / 2.0 * X
[ 332ULL ] ) ; t2045 [ 297ULL ] = - ( ( - X [ 307ULL ] + t3100 ) / 2.0 *
t2985 - ( t3100 - ( - X [ 307ULL ] ) ) / 2.0 * X [ 334ULL ] ) ; t2045 [
298ULL ] = - ( ( - X [ 307ULL ] + t3099 ) / 2.0 * X [ 318ULL ] - ( t3099 - (
- X [ 307ULL ] ) ) / 2.0 * X [ 336ULL ] ) ; t2045 [ 299ULL ] = - ( ( - X [
307ULL ] + t3098 ) / 2.0 * X [ 317ULL ] - ( t3098 - ( - X [ 307ULL ] ) ) /
2.0 * X [ 335ULL ] ) ; t2045 [ 300ULL ] = - ( t3090 * 0.001 + intrm_sf_mf_784
) + 0.92095788639984788 ; t2045 [ 301ULL ] = - ( t4335 /
0.0019634954084936209 * 0.00031622776601683789 + t3041 ) ; t2045 [ 302ULL ] =
- ( t4349 / 0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_825
) ; t2045 [ 303ULL ] = t2912 ; t2045 [ 304ULL ] = t2967 ; t5279 = X [ 320ULL
] * intrm_sf_mf_692 ; t2045 [ 305ULL ] = - ( ( ( real_T ) ( M [ 324ULL ] != 0
) * 2.0 - 1.0 ) * ( t5279 / ( X [ 321ULL ] == 0.0 ? 1.0E-16 : X [ 321ULL ] )
) * ( t5279 / ( X [ 321ULL ] == 0.0 ? 1.0E-16 : X [ 321ULL ] ) ) * ( X [
319ULL ] / 0.0019634954084936209 ) * ( X [ 319ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + t2997 ) ; t5279 = X [ 324ULL ] *
intrm_sf_mf_692 ; t2045 [ 306ULL ] = - ( ( ( real_T ) ( M [ 325ULL ] != 0 ) *
2.0 - 1.0 ) * ( t5279 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ) *
( t5279 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * ( - X [ 307ULL
] / 0.0019634954084936209 ) * ( - X [ 307ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_806 ) ; t2045 [ 307ULL ] = ( X [
327ULL ] * intrm_sf_mf_692 / 461.523 - t3088 * X [ 40ULL ] ) /
0.64309276860371423 ; t2045 [ 308ULL ] = X [ 322ULL ] * intrm_sf_mf_692 /
461.523 ; t2045 [ 309ULL ] = X [ 326ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pipe_M47 ; t2045 [
310ULL ] = X [ 323ULL ] * intrm_sf_mf_692 / 259.836612622973 /
1.1422643670118826 ; t2045 [ 311ULL ] = - ( ( ( real_T ) ( M [ 326ULL ] != 0
) * 2.0 - 1.0 ) * ( t3071 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) )
* ( t3071 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * ( X [ 319ULL ]
/ 0.0019634954084936209 ) * ( X [ 319ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_809 ) ; t2045 [ 312ULL ] = -
intrm_sf_mf_690 ; t2045 [ 313ULL ] = - intrm_sf_mf_691 ; t2045 [ 314ULL ] = -
( ( ( real_T ) ( M [ 326ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3071 / ( X [ 39ULL ]
== 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * ( t3071 / ( X [ 39ULL ] == 0.0 ? 1.0E-16
: X [ 39ULL ] ) ) * ( - X [ 307ULL ] / 0.0019634954084936209 ) * ( - X [
307ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_809 ) ; t2045 [ 315ULL ] = - intrm_sf_mf_690 ; t2045 [ 316ULL ] =
- intrm_sf_mf_691 ; t2045 [ 317ULL ] = - ( t3185 / 2.0 * zc_int182 - t5677 /
2.0 * X [ 343ULL ] ) ; t2045 [ 318ULL ] = - ( U_idx_11 / 2.0 * X [ 318ULL ] -
U_idx_4 / 2.0 * X [ 339ULL ] ) ; t2045 [ 319ULL ] = - ( t5709 / 2.0 * X [
317ULL ] - t5688 / 2.0 * X [ 340ULL ] ) ; t2045 [ 320ULL ] = - ( ( - X [
307ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 )
/ 2.0 * zc_int183 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ2 - ( - X [
307ULL ] ) ) / 2.0 * X [ 343ULL ] ) / 365.59674280784293 ; t2045 [ 321ULL ] =
- ( ( - X [ 307ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1 ) / 2.0 * X [
303ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Environ1
- ( - X [ 307ULL ] ) ) / 2.0 * X [ 339ULL ] ) ; t2045 [ 322ULL ] = - ( ( - X
[ 307ULL ] + t3057 ) / 2.0 * X [ 302ULL ] - ( t3057 - ( - X [ 307ULL ] ) ) /
2.0 * X [ 340ULL ] ) ; t2045 [ 323ULL ] = t209 ; t2045 [ 324ULL ] = - ( t3056
- t3117 ) ; t3185 = X [ 341ULL ] * intrm_sf_mf_837 ; t2045 [ 325ULL ] = - ( (
( real_T ) ( M [ 330ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( t3058 == 0.0 ?
1.0E-16 : t3058 ) ) * ( t3185 / ( t3058 == 0.0 ? 1.0E-16 : t3058 ) ) * ( X [
307ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.64 /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_815 ) ;
t3185 = X [ 342ULL ] * intrm_sf_mf_837 ; t2045 [ 326ULL ] = - ( ( ( real_T )
( M [ 331ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / 1.01325 ) * ( t3185 / 1.01325
) * ( X [ 307ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.64 /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_859 ) /
1.0413512978067061 ; t2045 [ 327ULL ] = - ( ( ( real_T ) ( M [ 332ULL ] != 0
) * 2.0 - 1.0 ) * ( t3112 / ( X [ 338ULL ] == 0.0 ? 1.0E-16 : X [ 338ULL ] )
) * ( t3112 / ( X [ 338ULL ] == 0.0 ? 1.0E-16 : X [ 338ULL ] ) ) * ( X [
307ULL ] / 0.64 / ( t3110 == 0.0 ? 1.0E-16 : t3110 ) ) * ( X [ 307ULL ] /
0.64 / ( t3110 == 0.0 ? 1.0E-16 : t3110 ) ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_862 ) ; t2045 [ 328ULL ] = - ( ( X [ 362ULL ] + t3170 ) / 2.0 * (
( ( real_T ) ( M [ 333ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4374 / ( X [ 359ULL ]
== 0.0 ? 1.0E-16 : X [ 359ULL ] ) ) * ( t4374 / ( X [ 359ULL ] == 0.0 ?
1.0E-16 : X [ 359ULL ] ) ) * ( X [ 362ULL ] / 0.32 ) * ( X [ 362ULL ] / 0.32
) / 2.0 * 9.999999999999999E-14 + piece412 ) - ( t3170 - X [ 362ULL ] ) / 2.0
* X [ 371ULL ] ) ; t2045 [ 329ULL ] = - ( ( X [ 362ULL ] + t3168 ) / 2.0 * X
[ 361ULL ] - ( t3168 - X [ 362ULL ] ) / 2.0 * X [ 375ULL ] ) ; t2045 [ 330ULL
] = - ( ( X [ 362ULL ] + t3166 ) / 2.0 * X [ 360ULL ] - ( t3166 - X [ 362ULL
] ) / 2.0 * X [ 374ULL ] ) ; t2045 [ 331ULL ] = - ( ( X [ 365ULL ] + t3175 )
/ 2.0 * zc_int193 - ( t3175 - X [ 365ULL ] ) / 2.0 * X [ 376ULL ] ) ; t2045 [
332ULL ] = - ( ( X [ 365ULL ] + t3173 ) / 2.0 * X [ 347ULL ] - ( t3173 - X [
365ULL ] ) / 2.0 * X [ 380ULL ] ) ; t2045 [ 333ULL ] = - ( ( X [ 365ULL ] +
t3172 ) / 2.0 * X [ 346ULL ] - ( t3172 - X [ 365ULL ] ) / 2.0 * X [ 379ULL ]
) ; t2045 [ 334ULL ] = - ( ( X [ 31ULL ] - X [ 42ULL ] ) * ( t3148 *
10.709248339636167 / 0.01 ) * 0.001 + intrm_sf_mf_960 ) ; t2045 [ 335ULL ] =
- ( t4399 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_992 ) ; t2045 [
336ULL ] = - ( t4414 / 0.32 * 0.00031622776601683789 + t3493 ) ; t2045 [
337ULL ] = t2960 ; t2045 [ 338ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Anode_Gas_Channels_Pi58 ; t3185 = X [
363ULL ] * t3121 ; t2045 [ 339ULL ] = - ( ( ( real_T ) ( M [ 340ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3185 / ( X [ 364ULL ] == 0.0 ? 1.0E-16 : X [ 364ULL ] ) )
* ( t3185 / ( X [ 364ULL ] == 0.0 ? 1.0E-16 : X [ 364ULL ] ) ) * ( X [ 362ULL
] / 0.32 ) * ( X [ 362ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_939 ) ; t3185 = X [ 366ULL ] * t3121 ; t2045 [ 340ULL ] = - ( ( (
real_T ) ( M [ 341ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [ 367ULL ] ==
0.0 ? 1.0E-16 : X [ 367ULL ] ) ) * ( t3185 / ( X [ 367ULL ] == 0.0 ? 1.0E-16
: X [ 367ULL ] ) ) * ( X [ 365ULL ] / 0.32 ) * ( X [ 365ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + t3083 ) ; t2045 [ 341ULL ] = ( X [ 349ULL ] * t3121
/ 461.523 - t3155 * X [ 44ULL ] ) / 0.64309276860371423 ; t2045 [ 342ULL ] =
X [ 350ULL ] * t3121 / 461.523 ; t2045 [ 343ULL ] = X [ 351ULL ] * t3152 ;
t2045 [ 344ULL ] = X [ 352ULL ] * t3121 / 259.836612622973 /
1.1422643670118826 ; t2045 [ 345ULL ] = 0.0 ; t2045 [ 346ULL ] = - ( ( (
real_T ) ( M [ 342ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3151 / ( X [ 48ULL ] == 0.0
? 1.0E-16 : X [ 48ULL ] ) ) * ( t3151 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [
48ULL ] ) ) * ( X [ 362ULL ] / 0.32 ) * ( X [ 362ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t3181 ) ; t2045 [ 347ULL ] = - t3114 ; t2045 [ 348ULL
] = - t3119 ; t2045 [ 349ULL ] = - ( ( ( real_T ) ( M [ 342ULL ] != 0 ) * 2.0
- 1.0 ) * ( t3151 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * (
t3151 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * ( X [ 365ULL ] /
0.32 ) * ( X [ 365ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t3181 ) ;
t2045 [ 350ULL ] = - t3114 ; t2045 [ 351ULL ] = - t3119 ; t2045 [ 352ULL ] =
- ( ( - X [ 365ULL ] + t3175 ) / 2.0 * zc_int224 - ( t3175 - ( - X [ 365ULL ]
) ) / 2.0 * X [ 389ULL ] ) ; t2045 [ 353ULL ] = - ( ( - X [ 365ULL ] + t3173
) / 2.0 * X [ 347ULL ] - ( t3173 - ( - X [ 365ULL ] ) ) / 2.0 * X [ 391ULL ]
) ; t2045 [ 354ULL ] = - ( ( - X [ 365ULL ] + t3172 ) / 2.0 * X [ 346ULL ] -
( t3172 - ( - X [ 365ULL ] ) ) / 2.0 * X [ 390ULL ] ) ; t2045 [ 355ULL ] = -
( ( - X [ 319ULL ] + t3231 ) / 2.0 * t2754 - ( t3231 - ( - X [ 319ULL ] ) ) /
2.0 * X [ 392ULL ] ) ; t2045 [ 356ULL ] = - ( ( - X [ 319ULL ] + t3230 ) /
2.0 * X [ 299ULL ] - ( t3230 - ( - X [ 319ULL ] ) ) / 2.0 * X [ 394ULL ] ) ;
t2045 [ 357ULL ] = - ( ( - X [ 319ULL ] + t3229 ) / 2.0 * X [ 298ULL ] - (
t3229 - ( - X [ 319ULL ] ) ) / 2.0 * X [ 393ULL ] ) ; t2045 [ 358ULL ] = - (
t3224 * 0.001 + t3216 ) ; t2045 [ 359ULL ] = - ( t4444 / 0.32 *
0.00031622776601683789 + t3227 ) ; t2045 [ 360ULL ] = - ( t4458 / 0.32 *
0.00031622776601683789 + t3228 ) ; t2045 [ 361ULL ] = zc_int223 ; t2045 [
362ULL ] = t213 ; t3185 = X [ 381ULL ] * intrm_sf_mf_1006 ; t2045 [ 363ULL ]
= - ( ( ( real_T ) ( M [ 347ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [
382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * ( t3185 / ( X [ 382ULL ] ==
0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * ( - X [ 365ULL ] / 0.32 ) * ( - X [ 365ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t3078 ) ; t3185 = X [ 383ULL ] *
intrm_sf_mf_1006 ; t2045 [ 364ULL ] = - ( ( ( real_T ) ( M [ 348ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3185 / ( X [ 384ULL ] == 0.0 ? 1.0E-16 : X [ 384ULL ] ) )
* ( t3185 / ( X [ 384ULL ] == 0.0 ? 1.0E-16 : X [ 384ULL ] ) ) * ( - X [
319ULL ] / 0.32 ) * ( - X [ 319ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1120 ) ; t2045 [ 365ULL ] = ( X [ 354ULL ] * intrm_sf_mf_1006 /
461.523 - t3222 * X [ 47ULL ] ) / 0.64309276860371423 ; t2045 [ 366ULL ] = X
[ 355ULL ] * intrm_sf_mf_1006 / 461.523 ; t2045 [ 367ULL ] = X [ 356ULL ] *
t3218 ; t2045 [ 368ULL ] = X [ 357ULL ] * intrm_sf_mf_1006 / 259.836612622973
/ 1.1422643670118826 ; t2045 [ 369ULL ] = 0.0 ; t2045 [ 370ULL ] = - ( ( (
real_T ) ( M [ 349ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3203 / ( X [ 49ULL ] == 0.0
? 1.0E-16 : X [ 49ULL ] ) ) * ( t3203 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [
49ULL ] ) ) * ( - X [ 365ULL ] / 0.32 ) * ( - X [ 365ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1123 ) ; t2045 [ 371ULL ] = - t3190 ;
t2045 [ 372ULL ] = - intrm_sf_mf_1005 ; t2045 [ 373ULL ] = - ( ( ( real_T ) (
M [ 349ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3203 / ( X [ 49ULL ] == 0.0 ? 1.0E-16
: X [ 49ULL ] ) ) * ( t3203 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] )
) * ( - X [ 319ULL ] / 0.32 ) * ( - X [ 319ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1123 ) ; t2045 [ 374ULL ] = - t3190 ;
t2045 [ 375ULL ] = - intrm_sf_mf_1005 ; t2045 [ 376ULL ] = U_idx_8 *
zc_int258 ; t2045 [ 377ULL ] = - ( ( X [ 407ULL ] + t3277 ) / 2.0 * zc_int259
- ( t3277 - X [ 407ULL ] ) / 2.0 * X [ 413ULL ] ) ; t2045 [ 378ULL ] = - ( (
X [ 407ULL ] + t3276 ) / 2.0 * X [ 399ULL ] - ( t3276 - X [ 407ULL ] ) / 2.0
* X [ 417ULL ] ) ; t2045 [ 379ULL ] = - ( ( X [ 407ULL ] + t3275 ) / 2.0 * X
[ 398ULL ] - ( t3275 - X [ 407ULL ] ) / 2.0 * X [ 416ULL ] ) ; t2045 [ 380ULL
] = - ( ( - X [ 362ULL ] + t3280 ) / 2.0 * ( ( ( real_T ) ( M [ 333ULL ] != 0
) * 2.0 - 1.0 ) * ( t4374 / ( X [ 359ULL ] == 0.0 ? 1.0E-16 : X [ 359ULL ] )
) * ( t4374 / ( X [ 359ULL ] == 0.0 ? 1.0E-16 : X [ 359ULL ] ) ) * ( - X [
362ULL ] / 0.0019634954084936209 ) * ( - X [ 362ULL ] / 0.0019634954084936209
) / 2.0 * 9.999999999999999E-14 + piece412 ) - ( t3280 - ( - X [ 362ULL ] ) )
/ 2.0 * X [ 418ULL ] ) ; t2045 [ 381ULL ] = - ( ( - X [ 362ULL ] + t3279 ) /
2.0 * X [ 361ULL ] - ( t3279 - ( - X [ 362ULL ] ) ) / 2.0 * X [ 420ULL ] ) ;
t2045 [ 382ULL ] = - ( ( - X [ 362ULL ] + t3278 ) / 2.0 * X [ 360ULL ] - (
t3278 - ( - X [ 362ULL ] ) ) / 2.0 * X [ 419ULL ] ) ; t2045 [ 383ULL ] = - (
t3270 * 0.001 + t3263 ) / 1.8850371198102225E-5 ; t2045 [ 384ULL ] = - (
t4491 / 0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_1271 ) ;
t2045 [ 385ULL ] = - ( t4502 / 0.0019634954084936209 * 0.00031622776601683789
+ t2876 ) ; t2045 [ 386ULL ] = t2822 ; t2045 [ 387ULL ] = t215 ; t3185 = X [
408ULL ] * intrm_sf_mf_1145 ; t2045 [ 388ULL ] = - ( ( ( real_T ) ( M [ 3ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [ 409ULL ] == 0.0 ? 1.0E-16 : X [
409ULL ] ) ) * ( t3185 / ( X [ 409ULL ] == 0.0 ? 1.0E-16 : X [ 409ULL ] ) ) *
( X [ 407ULL ] / 0.0019634954084936209 ) * ( X [ 407ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3146 ) ; t3185 = X [
410ULL ] * intrm_sf_mf_1145 ; t2045 [ 389ULL ] = - ( ( ( real_T ) ( M [ 4ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3185 / ( X [ 411ULL ] == 0.0 ? 1.0E-16 : X [
411ULL ] ) ) * ( t3185 / ( X [ 411ULL ] == 0.0 ? 1.0E-16 : X [ 411ULL ] ) ) *
( - X [ 362ULL ] / 0.0019634954084936209 ) * ( - X [ 362ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1259 ) ;
t2045 [ 390ULL ] = ( X [ 402ULL ] * intrm_sf_mf_1145 / 461.523 - t3268 * X [
52ULL ] ) / 0.64309276860371423 ; t2045 [ 391ULL ] = X [ 404ULL ] *
intrm_sf_mf_1145 / 461.523 ; t2045 [ 392ULL ] = X [ 401ULL ] * t3264 ; t2045
[ 393ULL ] = X [ 403ULL ] * intrm_sf_mf_1145 / 259.836612622973 /
1.1422643670118826 ; t2045 [ 394ULL ] = 0.0 ; t2045 [ 395ULL ] = - ( ( (
real_T ) ( M [ 5ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3251 / ( X [ 53ULL ] == 0.0 ?
1.0E-16 : X [ 53ULL ] ) ) * ( t3251 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [
53ULL ] ) ) * ( X [ 407ULL ] / 0.0019634954084936209 ) * ( X [ 407ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1262 ) ;
t2045 [ 396ULL ] = - t3215 ; t2045 [ 397ULL ] = - intrm_sf_mf_1144 ; t2045 [
398ULL ] = - ( ( ( real_T ) ( M [ 5ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3251 / ( X
[ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) ) * ( t3251 / ( X [ 53ULL ] == 0.0
? 1.0E-16 : X [ 53ULL ] ) ) * ( - X [ 362ULL ] / 0.0019634954084936209 ) * (
- X [ 362ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1262 ) ; t2045 [ 399ULL ] = - t3215 ; t2045 [ 400ULL ] = -
intrm_sf_mf_1144 ; t2045 [ 401ULL ] = 293.15 ; t2045 [ 402ULL ] = ( ( - X [
424ULL ] + - X [ 425ULL ] ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant4 ) -
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 * t3289 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant7 * X [ 429ULL ]
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant5 * 100.0 )
) / 1.233284047215034E+6 ; t2045 [ 403ULL ] = ( t3657 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant8 * t3289 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant7 * X [ 429ULL ]
) ) / 171803.29647667333 ; t2045 [ 404ULL ] = - t3291 / 4.1888 ; t2045 [
405ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Coolant12 *
t3290 / 99.820599640000012 ; t2045 [ 406ULL ] = ( X [ 434ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) -
( ( t3293 * t3295 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re3 * X [ 437ULL ]
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re1 * 100.0 )
) / 8.80132724281134E+6 ; t2045 [ 407ULL ] = ( t3858 - ( t3293 * t3295 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re3 * X [ 437ULL ]
) ) / 1.2260736179143097E+6 ; t2045 [ 408ULL ] = ( - X [ 434ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re0 ) -
( ( t3299 * t3301 - X [ 437ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re9 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re7 * 100.0 ) ) /
8.80132724281134E+6 ; t2045 [ 409ULL ] = ( intrm_sf_mf_1673 - ( t3299 * t3301
+ X [ 437ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Flow_Re9 ) ) /
1.2260736179143097E+6 ; t2045 [ 410ULL ] = - ( pmf_sqrt ( X [ 436ULL ] * X [
436ULL ] + 1.0E-8 ) * X [ 436ULL ] * 0.99999999999999978 ) ; t2045 [ 411ULL ]
= ( X [ 434ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce7 ) -
( ( t3301 * t3292 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce10 * X [ 441ULL
] ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce8 * 100.0
) ) / 4.3603175645747058E+7 ; t2045 [ 412ULL ] = ( intrm_sf_mf_1768 - ( t3301
* t3292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce10 * X
[ 441ULL ] ) ) / 6.0741637984429337E+6 ; t2045 [ 413ULL ] = ( X [ 424ULL ] /
( t3309 == 0.0 ? 1.0E-16 : t3309 ) - ( ( t3289 * t3314 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce15 * X [ 443ULL
] ) + t3313 * 100.0 ) ) / 4.3603175645747058E+7 ; t2045 [ 414ULL ] = ( t4001
- ( t3289 * t3314 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce15 * X [ 443ULL
] ) ) / 6.0741637984429337E+6 ; t2045 [ 415ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Fuel_Ce3 * 0.001 +
t3272 ) ; t2045 [ 416ULL ] = - t3317 / 4.1887953489795917 ; t2045 [ 417ULL ]
= - t3317 / 4.1887953489795917 ; t2045 [ 418ULL ] = - t3287 ; t2045 [ 419ULL
] = - t3303 + 1.01325 ; t2045 [ 420ULL ] = ( X [ 425ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) -
( ( t3289 * t3321 - t3320 * X [ 448ULL ] ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co2 * 100.0 ) ) /
8.80132724281134E+6 ; t2045 [ 421ULL ] = ( t4307 - ( t3289 * t3321 + t3320 *
X [ 448ULL ] ) ) / 1.2260736179143097E+6 ; t2045 [ 422ULL ] = ( X [ 446ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co1 ) -
( ( t3323 * t3326 - X [ 448ULL ] * t3324 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_co7 * 100.0 ) ) /
8.80132724281134E+6 ; t2045 [ 423ULL ] = ( intrm_sf_mf_1699 - ( t3323 * t3326
+ X [ 448ULL ] * t3324 ) ) / 1.2260736179143097E+6 ; t2045 [ 424ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Pump_powe * 100.0 ;
t2045 [ 425ULL ] = ( - X [ 446ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato7 ) -
( ( t3326 * t3335 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato10 * X [ 451ULL
] ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato8 * 100.0
) ) / 6.3686514346761458E+7 ; t2045 [ 426ULL ] = ( intrm_sf_mf_1709 - ( t3326
* t3335 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato10 * X
[ 451ULL ] ) ) / 8.87188408103589E+6 ; t2045 [ 427ULL ] = ( - X [ 434ULL ] /
( t3336 == 0.0 ? 1.0E-16 : t3336 ) - ( ( t3295 * t3298 - t3337 * X [ 453ULL ]
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cooling_System_Radiato13 * 100.0 )
) / 6.3686514346761458E+7 ; t2045 [ 428ULL ] = ( intrm_sf_mf_1712 - ( t3295 *
t3298 + t3337 * X [ 453ULL ] ) ) / 8.87188408103589E+6 ; t2045 [ 429ULL ] = -
( t3330 * 0.001 + intrm_sf_mf_1352 ) ; t2045 [ 430ULL ] = - t3341 /
4.1887953489795917 ; t2045 [ 431ULL ] = - t3341 / 4.1887953489795917 ; t2045
[ 432ULL ] = - intrm_sf_mf_1359 ; t2045 [ 433ULL ] = - intrm_sf_mf_1368 ;
t2045 [ 434ULL ] = X [ 454ULL ] * t2846 * 1.0E-6 ; t2045 [ 435ULL ] = X [
458ULL ] * zc_int293 / 2500.99462758899 ; t2045 [ 436ULL ] = X [ 270ULL ] *
zc_int295 / 3575.42283463482 ; t2045 [ 437ULL ] = X [ 395ULL ] * t3072 /
248.058058319568 ; t2045 [ 438ULL ] = X [ 271ULL ] * t3059 / 2500.99462758899
; t2045 [ 439ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra41 * zc_int287 /
2500.99462758899 ; t2045 [ 440ULL ] = - 0.20883314131306652 + - (
intrm_sf_mf_1047 * 400.0 ) / 2353.8245806357045 ; t2045 [ 441ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 *
241812.2160511087 / 0.0020158806832745466 * 0.001 - t3346 * 0.001 ) /
3931.85243448965 ; t2045 [ 442ULL ] = ( t2636 * 0.20177105219743391 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ) /
0.25205662255327149 ; t2045 [ 443ULL ] = ( t2644 * 0.20177105219743391 - (
t3345 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ) ) /
0.25205662255327149 ; t2045 [ 444ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ; t2045 [
445ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ;
t2045 [ 446ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 ; t2045 [
447ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t2045 [ 448ULL ] = - t3345 ; U_idx_3 = X [ 471ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8 ; t3185 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8 - X [ 471ULL ]
; t2045 [ 449ULL ] = - ( U_idx_3 / 2.0 * t3077 - t3185 / 2.0 * X [ 470ULL ] )
; t5677 = X [ 471ULL ] + t3356 ; U_idx_11 = t3356 - X [ 471ULL ] ; t2045 [
450ULL ] = - ( t5677 / 2.0 * X [ 464ULL ] - U_idx_11 / 2.0 * X [ 475ULL ] ) ;
U_idx_4 = X [ 471ULL ] + t3348 ; U_idx_1 = t3348 - X [ 471ULL ] ; t2045 [
451ULL ] = - ( U_idx_4 / 2.0 * X [ 463ULL ] - U_idx_1 / 2.0 * X [ 474ULL ] )
; t2045 [ 452ULL ] = ( X [ 466ULL ] * t3351 / 461.523 - t3355 * X [ 65ULL ] )
/ 0.64309276860371423 ; t2045 [ 453ULL ] = X [ 468ULL ] * t3351 / 461.523 ;
t2045 [ 454ULL ] = X [ 465ULL ] * t3353 ; t2045 [ 455ULL ] = X [ 467ULL ] *
t3351 / 4124.48151675695 ; t2045 [ 456ULL ] = - ( ( ( real_T ) ( M [ 9ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t3379 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ]
) ) * ( t3379 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ) * ( X [
471ULL ] / 7.8539816339744827E-5 ) * ( X [ 471ULL ] / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t3364 ) ; t2045 [ 457ULL ] = - t3349 ; t2045
[ 458ULL ] = - t3350 ; t2045 [ 459ULL ] = - ( ( - X [ 471ULL ] + t3420 ) /
2.0 * zc_int10 - ( t3420 - ( - X [ 471ULL ] ) ) / 2.0 * X [ 491ULL ] ) ;
t2045 [ 460ULL ] = - ( ( - X [ 471ULL ] + t3419 ) / 2.0 * X [ 480ULL ] - (
t3419 - ( - X [ 471ULL ] ) ) / 2.0 * X [ 493ULL ] ) ; t2045 [ 461ULL ] = - (
( - X [ 471ULL ] + t3417 ) / 2.0 * X [ 479ULL ] - ( t3417 - ( - X [ 471ULL ]
) ) / 2.0 * X [ 492ULL ] ) ; t2045 [ 462ULL ] = - ( ( X [ 485ULL ] + t3424 )
/ 2.0 * zc_int308 - ( t3424 - X [ 485ULL ] ) / 2.0 * X [ 494ULL ] ) ; t2045 [
463ULL ] = - ( ( X [ 485ULL ] + t3423 ) / 2.0 * X [ 461ULL ] - ( t3423 - X [
485ULL ] ) / 2.0 * X [ 498ULL ] ) ; t2045 [ 464ULL ] = - ( ( X [ 485ULL ] +
t3422 ) / 2.0 * X [ 460ULL ] - ( t3422 - X [ 485ULL ] ) / 2.0 * X [ 497ULL ]
) ; t2045 [ 465ULL ] = - ( t3411 * 0.001 + intrm_sf_mf_1493 ) /
7.5401484792408886E-5 ; t2045 [ 466ULL ] = - ( t4552 / 7.8539816339744827E-5
* 0.00031622776601683789 + intrm_sf_mf_1527 ) ; t2045 [ 467ULL ] = - ( t4566
/ 7.8539816339744827E-5 * 0.00031622776601683789 + intrm_sf_mf_1536 ) ; t2045
[ 468ULL ] = t3015 ; t2045 [ 469ULL ] = t217 ; t5709 = X [ 481ULL ] * t3370 ;
t2045 [ 470ULL ] = - ( ( ( real_T ) ( M [ 17ULL ] != 0 ) * 2.0 - 1.0 ) * (
t5709 / ( X [ 482ULL ] == 0.0 ? 1.0E-16 : X [ 482ULL ] ) ) * ( t5709 / ( X [
482ULL ] == 0.0 ? 1.0E-16 : X [ 482ULL ] ) ) * ( - X [ 471ULL ] /
7.8539816339744827E-5 ) * ( - X [ 471ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1448 ) ; t5709 = X [ 486ULL ] * t3370 ;
t2045 [ 471ULL ] = - ( ( ( real_T ) ( M [ 18ULL ] != 0 ) * 2.0 - 1.0 ) * (
t5709 / ( X [ 487ULL ] == 0.0 ? 1.0E-16 : X [ 487ULL ] ) ) * ( t5709 / ( X [
487ULL ] == 0.0 ? 1.0E-16 : X [ 487ULL ] ) ) * ( X [ 485ULL ] /
7.8539816339744827E-5 ) * ( X [ 485ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t3322 ) ; t2045 [ 472ULL ] = ( X [ 489ULL ] * t3370 /
461.523 - t3410 * X [ 68ULL ] ) / 0.64309276860371423 ; t2045 [ 473ULL ] = X
[ 483ULL ] * t3370 / 461.523 ; t2045 [ 474ULL ] = X [ 488ULL ] * t3404 ;
t2045 [ 475ULL ] = X [ 484ULL ] * t3370 / 4124.48151675695 ; t2045 [ 476ULL ]
= - ( ( ( real_T ) ( M [ 19ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3398 / ( X [ 67ULL
] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) ) * ( t3398 / ( X [ 67ULL ] == 0.0 ?
1.0E-16 : X [ 67ULL ] ) ) * ( - X [ 471ULL ] / 7.8539816339744827E-5 ) * ( -
X [ 471ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3430
) ; t2045 [ 477ULL ] = - t3344 ; t2045 [ 478ULL ] = - t3369 ; t2045 [ 479ULL
] = - ( ( ( real_T ) ( M [ 19ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3398 / ( X [
67ULL ] == 0.0 ? 1.0E-16 : X [ 67ULL ] ) ) * ( t3398 / ( X [ 67ULL ] == 0.0 ?
1.0E-16 : X [ 67ULL ] ) ) * ( X [ 485ULL ] / 7.8539816339744827E-5 ) * ( X [
485ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3430 ) ;
t2045 [ 480ULL ] = - t3344 ; t2045 [ 481ULL ] = - t3369 ; t2045 [ 482ULL ] =
- ( ( - X [ 471ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8 ) / 2.0 *
zc_int335 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Hydrogen_Source_Fuel_T8
- ( - X [ 471ULL ] ) ) / 2.0 * X [ 505ULL ] ) ; t2045 [ 483ULL ] = - ( ( - X
[ 471ULL ] + t3356 ) / 2.0 * X [ 464ULL ] - ( t3356 - ( - X [ 471ULL ] ) ) /
2.0 * X [ 501ULL ] ) ; t2045 [ 484ULL ] = - ( ( - X [ 471ULL ] + t3348 ) /
2.0 * X [ 463ULL ] - ( t3348 - ( - X [ 471ULL ] ) ) / 2.0 * X [ 502ULL ] ) ;
t2045 [ 485ULL ] = - ( U_idx_3 / 2.0 * t2826 - t3185 / 2.0 * X [ 505ULL ] ) ;
t2045 [ 486ULL ] = - ( t5677 / 2.0 * X [ 480ULL ] - U_idx_11 / 2.0 * X [
501ULL ] ) ; t2045 [ 487ULL ] = - ( U_idx_4 / 2.0 * X [ 479ULL ] - U_idx_1 /
2.0 * X [ 502ULL ] ) ; t2045 [ 488ULL ] = t218 ; t2045 [ 489ULL ] = - (
intrm_sf_mf_1574 - t3446 ) ; U_idx_3 = X [ 503ULL ] * intrm_sf_mf_1546 ;
t2045 [ 490ULL ] = - ( ( ( real_T ) ( M [ 23ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_3 / ( X [ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ) * ( U_idx_3 / ( X
[ 63ULL ] == 0.0 ? 1.0E-16 : X [ 63ULL ] ) ) * ( - X [ 471ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( - X [ 471ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_1565 ) ; U_idx_3 = X [ 504ULL ] *
intrm_sf_mf_1546 ; t2045 [ 491ULL ] = - ( ( ( real_T ) ( M [ 24ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_3 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) )
* ( U_idx_3 / ( X [ 478ULL ] == 0.0 ? 1.0E-16 : X [ 478ULL ] ) ) * ( - X [
471ULL ] / 0.64 / 7.8539816339744827E-5 ) * ( - X [ 471ULL ] / 0.64 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3331 ) ; t2045 [
492ULL ] = - ( ( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3439 / (
X [ 500ULL ] == 0.0 ? 1.0E-16 : X [ 500ULL ] ) ) * ( t3439 / ( X [ 500ULL ]
== 0.0 ? 1.0E-16 : X [ 500ULL ] ) ) * ( - X [ 471ULL ] / 0.64 / (
intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) ) * ( - X [ 471ULL ] /
0.64 / ( intrm_sf_mf_1537 == 0.0 ? 1.0E-16 : intrm_sf_mf_1537 ) ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1571 ) ; U_idx_3 = X [ 512ULL ] + t3450 ;
t3185 = t3450 - X [ 512ULL ] ; t2045 [ 493ULL ] = - ( U_idx_3 / 2.0 *
intrm_sf_mf_1580 - t3185 / 2.0 * X [ 511ULL ] ) / 365.59674280784293 ; t5677
= X [ 512ULL ] + t3448 ; U_idx_11 = t3448 - X [ 512ULL ] ; t2045 [ 494ULL ] =
- ( t5677 / 2.0 * X [ 508ULL ] - U_idx_11 / 2.0 * X [ 516ULL ] ) ; U_idx_4 =
X [ 512ULL ] + t3442 ; U_idx_1 = t3442 - X [ 512ULL ] ; t2045 [ 495ULL ] = -
( U_idx_4 / 2.0 * X [ 507ULL ] - U_idx_1 / 2.0 * X [ 515ULL ] ) ; t2045 [
496ULL ] = U_idx_10 / 461.523 / 43.3158175294914 + piece416 * 0.5 / 461.523 /
43.3158175294914 ; t2045 [ 497ULL ] = X [ 519ULL ] * t3453 / 461.523 ; t2045
[ 498ULL ] = X [ 509ULL ] * t2721 ; t2045 [ 499ULL ] = U_idx_7 /
259.836612622973 + piece416 * 0.21 / 259.836612622973 ; t5709 = t3453 *
293.15 ; t2045 [ 500ULL ] = - 304.06022922571 + - ( ( ( real_T ) ( M [ 27ULL
] != 0 ) * 2.0 - 1.0 ) * ( t5709 / 1.01325 ) * ( t5709 / 1.01325 ) * ( X [
512ULL ] / 0.0019634954084936209 ) * ( X [ 512ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + piece418 ) ; t2045 [ 501ULL ] = - t3451 ;
t2045 [ 502ULL ] = - intrm_sf_mf_1576 ; t5709 = - X [ 512ULL ] + t3450 ;
t5688 = t3450 - ( - X [ 512ULL ] ) ; t2045 [ 503ULL ] = - ( t5709 / 2.0 *
zc_int350 - t5688 / 2.0 * X [ 528ULL ] ) / 365.59674280784293 ; U_idx_10 = -
X [ 512ULL ] + t3448 ; U_idx_7 = t3448 - ( - X [ 512ULL ] ) ; t2045 [ 504ULL
] = - ( U_idx_10 / 2.0 * X [ 508ULL ] - U_idx_7 / 2.0 * X [ 530ULL ] ) ;
t5279 = - X [ 512ULL ] + t3442 ; t5265 = t3442 - ( - X [ 512ULL ] ) ; t2045 [
505ULL ] = - ( t5279 / 2.0 * X [ 507ULL ] - t5265 / 2.0 * X [ 529ULL ] ) ;
t2045 [ 506ULL ] = - ( U_idx_3 / 2.0 * t2814 - t3185 / 2.0 * X [ 528ULL ] ) ;
t2045 [ 507ULL ] = - ( t5677 / 2.0 * X [ 522ULL ] - U_idx_11 / 2.0 * X [
530ULL ] ) ; t2045 [ 508ULL ] = - ( U_idx_4 / 2.0 * X [ 521ULL ] - U_idx_1 /
2.0 * X [ 529ULL ] ) ; t2045 [ 509ULL ] = zc_int316 ; t2045 [ 510ULL ] =
979.36765375297466 + t2703 / 3.4930368471842854 ; t2045 [ 511ULL ] = -
979.36765375297466 + piece428 / 3.4930368471842854 ; t2045 [ 512ULL ] =
zc_int342 / 1.0413512978067061 ; t2045 [ 513ULL ] = zc_int352 ; t2045 [
514ULL ] = - intrm_sf_mf_1733 ; t2045 [ 515ULL ] = 0.0 ; t2045 [ 516ULL ] = -
( X [ 533ULL ] / ( X [ 534ULL ] == 0.0 ? 1.0E-16 : X [ 534ULL ] ) ) ; t2045 [
517ULL ] = 0.0 ; t2045 [ 518ULL ] = - pmf_sqrt ( X [ 506ULL ] *
0.00347041471455839 ) ; t2045 [ 519ULL ] = - ( t5709 / 2.0 * zc_int357 -
t5688 / 2.0 * X [ 539ULL ] ) ; t2045 [ 520ULL ] = - ( U_idx_10 / 2.0 * X [
522ULL ] - U_idx_7 / 2.0 * X [ 541ULL ] ) ; t2045 [ 521ULL ] = - ( t5279 /
2.0 * X [ 521ULL ] - t5265 / 2.0 * X [ 540ULL ] ) ; t2045 [ 522ULL ] = - ( (
- X [ 407ULL ] + t3475 ) / 2.0 * t3109 - ( t3475 - ( - X [ 407ULL ] ) ) / 2.0
* X [ 542ULL ] ) ; t2045 [ 523ULL ] = - ( ( - X [ 407ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16 ) / 2.0 * X [
399ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress16
- ( - X [ 407ULL ] ) ) / 2.0 * X [ 544ULL ] ) ; t2045 [ 524ULL ] = - ( ( - X
[ 407ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15
) / 2.0 * X [ 398ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress15 - ( - X [
407ULL ] ) ) / 2.0 * X [ 543ULL ] ) ; t2045 [ 525ULL ] = ( X [ 536ULL ] *
intrm_sf_mf_1637 / 461.523 - t3474 * X [ 72ULL ] ) / 0.64309276860371423 ;
t2045 [ 526ULL ] = X [ 538ULL ] * intrm_sf_mf_1637 / 461.523 ; t2045 [ 527ULL
] = X [ 535ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Oxygen_Source_Compress33 ; t2045 [
528ULL ] = X [ 537ULL ] * intrm_sf_mf_1637 / 259.836612622973 /
1.1422643670118826 ; t2045 [ 529ULL ] = - ( ( ( real_T ) ( M [ 35ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3472 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) *
( t3472 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( - X [ 512ULL ]
/ 0.0019634954084936209 ) * ( - X [ 512ULL ] / 0.0019634954084936209 ) / 2.0
* 9.999999999999999E-14 + intrm_sf_mf_1659 ) ; t2045 [ 530ULL ] = - t3469 ;
t2045 [ 531ULL ] = - t3470 ; t2045 [ 532ULL ] = - ( ( ( real_T ) ( M [ 35ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3472 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL
] ) ) * ( t3472 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( - X [
407ULL ] / 0.0019634954084936209 ) * ( - X [ 407ULL ] / 0.0019634954084936209
) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1659 ) ; t2045 [ 533ULL ] = -
t3469 ; t2045 [ 534ULL ] = - t3470 ; t2045 [ 535ULL ] = X [ 545ULL ] *
intrm_sf_mf_1928 * 0.1 ; t2045 [ 536ULL ] = - ( ( - X [ 485ULL ] + t3483 ) /
2.0 * zc_int359 - ( t3483 - ( - X [ 485ULL ] ) ) / 2.0 * X [ 554ULL ] ) ;
t2045 [ 537ULL ] = - ( ( - X [ 485ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 ) / 2.0 * X [
461ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant7 -
( - X [ 485ULL ] ) ) / 2.0 * X [ 556ULL ] ) ; t2045 [ 538ULL ] = - ( ( - X [
485ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 ) /
2.0 * X [ 460ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant6 - ( - X [
485ULL ] ) ) / 2.0 * X [ 555ULL ] ) ; U_idx_3 = t3484 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 ; t3185 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 - t3484 ;
t2045 [ 539ULL ] = - ( U_idx_3 / 2.0 * zc_int360 - t3185 / 2.0 * X [ 557ULL ]
) ; t5677 = t3484 + t3486 ; U_idx_11 = t3486 - t3484 ; t2045 [ 540ULL ] = - (
t5677 / 2.0 * X [ 548ULL ] - U_idx_11 / 2.0 * X [ 559ULL ] ) ; U_idx_4 =
t3484 + t3485 ; U_idx_1 = t3485 - t3484 ; t2045 [ 541ULL ] = - ( U_idx_4 /
2.0 * X [ 547ULL ] - U_idx_1 / 2.0 * X [ 558ULL ] ) ; t2045 [ 542ULL ] = - (
( - X [ 282ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant15 ) / 2.0 *
zc_int361 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant15
- ( - X [ 282ULL ] ) ) / 2.0 * X [ 560ULL ] ) ; t2045 [ 543ULL ] = - ( ( - X
[ 282ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant14
) / 2.0 * X [ 274ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant14 - ( - X [
282ULL ] ) ) / 2.0 * X [ 562ULL ] ) ; t2045 [ 544ULL ] = - ( ( - X [ 282ULL ]
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant13 ) / 2.0 * X
[ 273ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant13 - ( - X [
282ULL ] ) ) / 2.0 * X [ 561ULL ] ) ; t2045 [ 545ULL ] = ( X [ 550ULL ] *
intrm_sf_mf_1662 / 461.523 - t3482 * X [ 75ULL ] ) / 0.64309276860371423 ;
t2045 [ 546ULL ] = X [ 552ULL ] * intrm_sf_mf_1662 / 461.523 ; t2045 [ 547ULL
] = X [ 549ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant31 ; t2045 [
548ULL ] = X [ 551ULL ] * intrm_sf_mf_1662 / 4124.48151675695 ; t2045 [
549ULL ] = - ( ( ( real_T ) ( M [ 38ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3480 / (
X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t3480 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( - X [ 485ULL ] / 7.8539816339744827E-5 )
* ( - X [ 485ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1690 ) ; t2045 [ 550ULL ] = - intrm_sf_mf_1660 ; t2045 [ 551ULL ]
= - intrm_sf_mf_1661 ; t2045 [ 552ULL ] = - ( ( ( real_T ) ( M [ 38ULL ] != 0
) * 2.0 - 1.0 ) * ( t3480 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) )
* ( t3480 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t3484 /
7.8539816339744827E-5 ) * ( t3484 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1690 ) ; t2045 [ 553ULL ] = -
intrm_sf_mf_1660 ; t2045 [ 554ULL ] = - intrm_sf_mf_1661 ; t2045 [ 555ULL ] =
- ( ( ( real_T ) ( M [ 38ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3480 / ( X [ 37ULL ]
== 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t3480 / ( X [ 37ULL ] == 0.0 ? 1.0E-16
: X [ 37ULL ] ) ) * ( - X [ 282ULL ] / 7.8539816339744827E-5 ) * ( - X [
282ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1690 ) ; t2045 [ 556ULL ] = - intrm_sf_mf_1660 ; t2045 [ 557ULL ]
= - intrm_sf_mf_1661 ; t2045 [ 558ULL ] = - ( U_idx_3 / 2.0 * t2871 - t3185 /
2.0 * X [ 567ULL ] ) ; t2045 [ 559ULL ] = - ( t5677 / 2.0 * X [ 172ULL ] -
U_idx_11 / 2.0 * X [ 569ULL ] ) ; t2045 [ 560ULL ] = - ( U_idx_4 / 2.0 * X [
171ULL ] - U_idx_1 / 2.0 * X [ 568ULL ] ) ; t2045 [ 561ULL ] = - ( ( - t3484
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 ) / 2.0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Cathode_Exhaust_Pressu20 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Recirculation_Constant12 - ( - t3484 )
) / 2.0 * X [ 567ULL ] ) ; t2045 [ 562ULL ] = - ( ( - t3484 + t3486 ) / 2.0 *
X [ 548ULL ] - ( t3486 - ( - t3484 ) ) / 2.0 * X [ 569ULL ] ) ; t2045 [
563ULL ] = - ( ( - t3484 + t3485 ) / 2.0 * X [ 547ULL ] - ( t3485 - ( - t3484
) ) / 2.0 * X [ 568ULL ] ) ; t2045 [ 564ULL ] = t3125 ; t2045 [ 565ULL ] =
intrm_sf_mf_1706 / 3.4930368471842854 ; t2045 [ 566ULL ] = intrm_sf_mf_1730 /
3.4930368471842854 ; t2045 [ 567ULL ] = t3123 ; t2045 [ 568ULL ] = t3120 ;
t2045 [ 569ULL ] = - ( t2792 * t2792 ) / 1.0E+6 ; t2045 [ 570ULL ] = t3021 ;
t2045 [ 571ULL ] = t220 ; t2045 [ 572ULL ] = - t3495 ; t2045 [ 573ULL ] = -
intrm_sf_mf_1736 ; t2045 [ 574ULL ] = 0.0 ; for ( b = 0 ; b < 575 ; b ++ ) {
out . mX [ b ] = t2045 [ b ] ; } ( void ) LC ; ( void ) t5724 ; return 0 ; }

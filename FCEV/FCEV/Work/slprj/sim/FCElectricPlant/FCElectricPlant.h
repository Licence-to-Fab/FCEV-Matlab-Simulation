#ifndef RTW_HEADER_FCElectricPlant_h_
#define RTW_HEADER_FCElectricPlant_h_
#ifndef FCElectricPlant_COMMON_INCLUDES_
#define FCElectricPlant_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw_rtp.h"
#include "FCElectricPlant_ac851afd_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "FCElectricPlant_types.h"
#include <stddef.h>
#include <string.h>
#include "model_reference_types.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
typedef struct { real_T dv [ 995 ] ; real_T dv1 [ 995 ] ; real_T dv2 [ 995 ]
; real_T nvx5lf44af [ 4 ] ; real_T mdomnmflce ; real_T de33fjxukj [ 4 ] ;
real_T dibpyqq1gq ; real_T mcckkqf5na [ 4 ] ; real_T hbtt12nnfa [ 4 ] ;
real_T irb3na42wc [ 4 ] ; real_T an253d5vae [ 4 ] ; real_T nb1nj1p5c0 [ 4 ] ;
real_T m5of5jfi4b [ 4 ] ; real_T ls12idsrww [ 4 ] ; real_T dreownda5n [ 4 ] ;
real_T imxaiqq1q1 ; real_T dnb0zj2jmy [ 4 ] ; real_T n1x1pyneng [ 4 ] ;
real_T ckqxpgmujh ; real_T pov0qbm2o5 [ 4 ] ; real_T mvpzeu1ifa ; real_T
fmxgn1tqno ; real_T ognofyd5hf ; real_T ia12rsbk3j [ 4 ] ; real_T ca434qngxk
[ 4 ] ; real_T asvtjyjank ; real_T pcfjo3sryx [ 4 ] ; real_T eauwjsjeoh ;
real_T b2pla4cyor [ 931 ] ; real_T jp1ydpzuo3 [ 36 ] ; real_T blkxt1p0nv ;
real_T mofh5aef0k [ 2 ] ; real_T fjldr12rl2 ; real_T b0l5c0ek5s ; real_T
fspg4iv5e0 ; real_T fw14jo2wz3 ; real_T esw33ksp5x ; real_T oh2tziv2ie ;
real_T pnpai0ecxg ; real_T ghgbigehcu ; real_T k3ckwtd0wn ; real_T no3gaew0sh
; real_T n0usl0lx3o ; real_T gef2pihfya ; real_T gc1dhic5yu ; real_T
h1p1ybnntz ; real_T epupyg1odo ; real_T fx43kwv5es ; real_T lkaazqtytn ;
real_T i0bjca5fqd ; boolean_T erzhvjpwjn ; boolean_T jkqs54gz35 ; }
o4lq13rlvq ; typedef struct { real_T jg0pa544mj [ 2 ] ; real_T bens2xo0mt ;
real_T biz2tfyo24 ; real_T iy1jghvlve ; real_T kvurm2oqxu ; real_T c0wsiqhgrt
[ 2 ] ; real_T pisj2y40n3 [ 2 ] ; real_T jp2nm55itc [ 2 ] ; real_T gkehphfcto
[ 2 ] ; real_T d252k4pf4q [ 2 ] ; real_T hntw41r4fh [ 2 ] ; real_T jjdma1xftq
[ 2 ] ; real_T mbqrzctqwx [ 2 ] ; real_T k34x2xbjft [ 2 ] ; real_T cl1v2os4aw
[ 2 ] ; real_T brcmfntiiy [ 2 ] ; real_T fkcmhgm1js [ 2 ] ; real_T d5qyo22zjn
; real_T d2nw5osdie ; real_T jvpu2sz5kh ; real_T n1z1jmaon1 ; real_T
lthorw5noi ; real_T ll0ogy1o1p ; void * hmxbw2za12 ; void * icqagpp0oe ; void
* nrcoddu4oo ; void * dfmft0mmxa ; void * cmovgfxthu ; void * ex3ni5eiuj ;
void * m2lsrsmett ; void * m5secpsmnt ; void * g3dbxdq2jx ; void * mwd32jhju0
; void * eznpgnxr05 ; struct { void * AQHandles [ 3 ] ; } osc4woswiv ; struct
{ void * AQHandles ; } edo2yybvgy ; struct { void * AQHandles ; } k5lhedc1qi
; struct { void * AQHandles [ 4 ] ; } osc4woswivb ; struct { void * AQHandles
; } buyjzzgvti ; struct { void * AQHandles ; } edo2yybvgya ; struct { void *
AQHandles [ 4 ] ; } osc4woswivbk ; struct { void * AQHandles [ 3 ] ; }
osc4woswivbkk ; struct { void * AQHandles ; } jhjx45yzf4 ; struct { void *
AQHandles ; } gz2yikcxsb ; struct { void * AQHandles ; } aqh4yyrzcm ; struct
{ void * AQHandles ; } dkfsbamwtk ; struct { void * AQHandles [ 5 ] ; }
osc4woswivbkkc ; struct { void * AQHandles ; } jrwijamgle ; void * ogakvee5zl
; void * grsi0hcpom ; void * hrog11bqbc ; void * ajwwpim0oz ; void *
niyvfnljnz ; struct { void * AQHandles ; } jrwijamgle5 ; struct { void *
AQHandles ; } dcdtdbr1d3 ; struct { void * AQHandles ; } dcdtdbr1d3z ; struct
{ void * AQHandles ; } i2u4vgtwno ; struct { void * AQHandles ; } i2u4vgtwnoa
; struct { void * AQHandles ; } dcdtdbr1d3z0 ; void * c0et2sljbx ; void *
ip3im53ih0 ; void * an32etucup ; void * m0d1ivvf1i ; void * ea2lwvng2q ;
struct { void * AQHandles ; } m2qzuth4hh ; struct { void * AQHandles ; }
fasht4sk1b ; struct { void * AQHandles ; } nkz4go02r3 ; struct { void *
AQHandles ; } dcdtdbr1d3z0r ; struct { void * AQHandles ; } m2qzuth4hh2 ;
struct { void * AQHandles ; } fasht4sk1bm ; struct { void * AQHandles ; }
j033re5cgt ; struct { void * AQHandles ; } iuyyqw2ka5 ; struct { void *
AQHandles ; } dcdtdbr1d3z0re ; struct { void * AQHandles ; } m2qzuth4hh2u ;
struct { void * AQHandles ; } fasht4sk1bmp ; struct { void * AQHandles ; }
j033re5cgtw ; struct { void * AQHandles ; } dcdtdbr1d3z0rew ; struct { void *
AQHandles ; } m2qzuth4hh2ux ; struct { void * AQHandles ; } fasht4sk1bmpq ;
struct { void * AQHandles ; } j033re5cgtw2 ; struct { void * AQHandles ; }
gz2yikcxsbr ; struct { void * AQHandles ; } jb5p2yd0pp ; struct { void *
AQHandles [ 5 ] ; } osc4woswivbkkch ; struct { void * AQHandles ; }
gz2yikcxsbro ; struct { void * AQHandles ; } nwagfadtz5 ; struct { void *
AQHandles ; } ir3sjqcelg ; struct { void * AQHandles ; } boxtz4t1xz ; struct
{ void * AQHandles [ 5 ] ; } egl1qa3rz0 ; struct { void * AQHandles ; }
gz2yikcxsbro0 ; struct { void * AQHandles ; } jb5p2yd0ppu ; struct { void *
AQHandles ; } pt2ziyjsco ; struct { void * AQHandles ; } kesjhajib2 ; struct
{ void * AQHandles [ 5 ] ; } lgy0uoa1sd ; struct { void * AQHandles ; }
gz2yikcxsbro0p ; struct { void * AQHandles ; } pt2ziyjsco3 ; struct { void *
AQHandles ; } nwagfadtz5a ; struct { void * AQHandles [ 5 ] ; } mi0wkvcekx ;
struct { void * AQHandles ; } li5lvqaaj1 ; int_T iendyrbljp ; int_T
k43gfcul4g ; int_T jrexd3jabx [ 356 ] ; int_T d2oy2gojey ; int_T hkmn555nst ;
int_T arhujgsczp ; int_T cxytunchp3 ; int_T hytqfgsilq ; int_T fcwk1cq1s3 ;
int_T dcyfny35ij ; int32_T nl5wf2yj2y ; boolean_T kobagp2t5x ; boolean_T
oazibmcxg4 ; boolean_T bc3j1x4g4s ; boolean_T p5doavn2gc ; boolean_T
o0gi1dmk1n ; boolean_T hre0cpkqyo ; } ammy3t1awn ; typedef struct { real_T
bfsuffvrld ; real_T ll2zpokgiv ; real_T o2r5v3x4i0 ; real_T ododiz1doe ;
real_T l4izeu1m2j ; real_T bsitd53ytf ; real_T l5dycs0bvi ; real_T kao5g3ej40
; real_T fqwgy5xfo2 ; real_T mspdttcnoi ; real_T iru3slp4rk ; real_T
gq2lttxonz ; real_T egvmmui2tw ; real_T p2q3k5uofv ; real_T ft42zg3ldp ;
real_T bv3salhmw5 ; real_T mqbbmlcioe ; real_T ovfkya0dec ; real_T fgagg4wluz
; real_T le0qy3dd51 ; real_T eh3gmz41df ; real_T nnch4zsoe1 ; real_T
hc0befvp5x [ 575 ] ; real_T pe3foqvhcv ; real_T ahqoemcw2g ; real_T
owi0hrxchy ; real_T ecw01zmuxh ; real_T d411ir5utj ; real_T hqy4omzhyd ; }
fw3fcrujzt ; typedef struct { real_T bfsuffvrld ; real_T ll2zpokgiv ; real_T
o2r5v3x4i0 ; real_T ododiz1doe ; real_T l4izeu1m2j ; real_T bsitd53ytf ;
real_T l5dycs0bvi ; real_T kao5g3ej40 ; real_T fqwgy5xfo2 ; real_T mspdttcnoi
; real_T iru3slp4rk ; real_T gq2lttxonz ; real_T egvmmui2tw ; real_T
p2q3k5uofv ; real_T ft42zg3ldp ; real_T bv3salhmw5 ; real_T mqbbmlcioe ;
real_T ovfkya0dec ; real_T fgagg4wluz ; real_T le0qy3dd51 ; real_T eh3gmz41df
; real_T nnch4zsoe1 ; real_T hc0befvp5x [ 575 ] ; real_T pe3foqvhcv ; real_T
ahqoemcw2g ; real_T owi0hrxchy ; real_T ecw01zmuxh ; real_T d411ir5utj ;
real_T hqy4omzhyd ; } dmzi3aztzd ; typedef struct { boolean_T bfsuffvrld ;
boolean_T ll2zpokgiv ; boolean_T o2r5v3x4i0 ; boolean_T ododiz1doe ;
boolean_T l4izeu1m2j ; boolean_T bsitd53ytf ; boolean_T l5dycs0bvi ;
boolean_T kao5g3ej40 ; boolean_T fqwgy5xfo2 ; boolean_T mspdttcnoi ;
boolean_T iru3slp4rk ; boolean_T gq2lttxonz ; boolean_T egvmmui2tw ;
boolean_T p2q3k5uofv ; boolean_T ft42zg3ldp ; boolean_T bv3salhmw5 ;
boolean_T mqbbmlcioe ; boolean_T ovfkya0dec ; boolean_T fgagg4wluz ;
boolean_T le0qy3dd51 ; boolean_T eh3gmz41df ; boolean_T nnch4zsoe1 ;
boolean_T hc0befvp5x [ 575 ] ; boolean_T pe3foqvhcv ; boolean_T ahqoemcw2g ;
boolean_T owi0hrxchy ; boolean_T ecw01zmuxh ; boolean_T d411ir5utj ;
boolean_T hqy4omzhyd ; } h1ig1prbuq ; typedef struct { real_T bfsuffvrld ;
real_T ll2zpokgiv ; real_T o2r5v3x4i0 ; real_T ododiz1doe ; real_T l4izeu1m2j
; real_T bsitd53ytf ; real_T l5dycs0bvi ; real_T kao5g3ej40 ; real_T
fqwgy5xfo2 ; real_T mspdttcnoi ; real_T iru3slp4rk ; real_T gq2lttxonz ;
real_T egvmmui2tw ; real_T p2q3k5uofv ; real_T ft42zg3ldp ; real_T bv3salhmw5
; real_T mqbbmlcioe ; real_T ovfkya0dec ; real_T fgagg4wluz ; real_T
le0qy3dd51 ; real_T eh3gmz41df ; real_T nnch4zsoe1 ; real_T hc0befvp5x [ 575
] ; real_T pe3foqvhcv ; real_T ahqoemcw2g ; real_T owi0hrxchy ; real_T
ecw01zmuxh ; real_T d411ir5utj ; real_T hqy4omzhyd ; } nwplfevrxw ; typedef
struct { real_T bfsuffvrld ; real_T ll2zpokgiv ; real_T o2r5v3x4i0 ; real_T
ododiz1doe ; real_T l4izeu1m2j ; real_T bsitd53ytf ; real_T l5dycs0bvi ;
real_T kao5g3ej40 ; real_T fqwgy5xfo2 ; real_T mspdttcnoi ; real_T iru3slp4rk
; real_T gq2lttxonz ; real_T egvmmui2tw ; real_T p2q3k5uofv ; real_T
ft42zg3ldp ; real_T bv3salhmw5 ; real_T mqbbmlcioe ; real_T ovfkya0dec ;
real_T fgagg4wluz ; real_T le0qy3dd51 ; real_T eh3gmz41df ; real_T nnch4zsoe1
; real_T hc0befvp5x [ 575 ] ; real_T pe3foqvhcv ; real_T ahqoemcw2g ; real_T
owi0hrxchy ; real_T ecw01zmuxh ; real_T d411ir5utj ; real_T hqy4omzhyd ; }
kz4c240slf ; typedef struct { real_T bfsuffvrld ; real_T ll2zpokgiv ; real_T
o2r5v3x4i0 ; real_T ododiz1doe ; real_T l4izeu1m2j ; real_T bsitd53ytf ;
real_T l5dycs0bvi ; real_T kao5g3ej40 ; real_T fqwgy5xfo2 ; real_T mspdttcnoi
; real_T iru3slp4rk ; real_T gq2lttxonz ; real_T egvmmui2tw ; real_T
p2q3k5uofv ; real_T ft42zg3ldp ; real_T bv3salhmw5 ; real_T mqbbmlcioe ;
real_T ovfkya0dec ; real_T fgagg4wluz ; real_T le0qy3dd51 ; real_T eh3gmz41df
; real_T nnch4zsoe1 ; real_T hc0befvp5x [ 575 ] ; real_T pe3foqvhcv ; real_T
ahqoemcw2g ; real_T owi0hrxchy ; real_T ecw01zmuxh ; real_T d411ir5utj ;
real_T hqy4omzhyd ; } mclj3ytwnx ; typedef struct { real_T d4ppnv2jaq ;
real_T bmyvxhb2cm ; real_T jmyj0demqc ; real_T lhsrndrv3n ; real_T mffrz0shfo
; real_T gyn1lo5yci ; real_T iougitdqv1 ; real_T busszg1pnw ; real_T
crspqvat0b ; real_T mqjexy2n1g ; real_T okodxxcrra ; real_T cfnoawsffs ;
real_T k30wplgxd2 ; real_T jjzpzvn4fx ; real_T auldgohhu1 ; real_T jnbjkdrllc
; real_T ntpoz1nahv ; real_T hmpzjniezm ; real_T cf0go3p0qn ; real_T
gd2o1kajwp ; real_T ogx1s0dub5 ; real_T jggzoinnz0 ; real_T ey2rrihovm ;
real_T a2b4mczkqp ; real_T hit4cgwnji ; real_T m1n4t3zrmc ; real_T jlvabyjiaw
; real_T k41xe5dzyb ; real_T eqsvq5phtw ; real_T fe4i5ylgwp ; real_T
et1ctkkow3 ; real_T b25fvufoqn ; real_T dqctkxldlq ; real_T gfmxktam0i ;
real_T mkdurcf4ie ; real_T mdfshqwpva ; real_T hwzxdartjj ; real_T eos5ewam03
; real_T pgv0yoo1b1 ; real_T npor4xoxst ; real_T a0zjhsxter ; real_T
mokn5h1dhn ; real_T pakznour0v ; real_T gls5bigikp ; real_T a1rmb1p3r2 ;
real_T pqnvqekr20 ; real_T nkmrcnnae0 ; real_T ioern5ccg1 ; real_T h15rbzctcb
; real_T ea2tkvv4bo ; real_T dirxzvikah ; real_T g5dbexnd1l ; real_T
km15znrofj ; real_T b2ckl1bq1u ; real_T ko2qwv4uho ; real_T gopnhl12py ;
real_T ogmch5ossc ; real_T jlffri2omi ; real_T gfnue2agnc ; real_T nec5pamjii
; real_T atnyu2lway ; real_T ovwdgbefr0 ; real_T ig0b33jivu ; real_T
fvhx0gzp5r ; real_T n3xhqxmeyf ; real_T mzdkpifdqv ; real_T nkezih10wu ;
real_T nqxacxutaf ; real_T gky42pomii ; real_T opwnggt0fb ; real_T fzt13q5ky1
; real_T dk0r54zaol ; real_T b4eqgju0os ; real_T fqzxnt44fs ; real_T
efoqw0a5ur ; real_T c4nt1q12j2 ; real_T d1jnc2yu4d ; real_T i1nk2kntsj ;
real_T klpwls3hgl ; real_T e35ln013tf ; real_T gxzfk2rcpz ; real_T o2vr2htr1t
; real_T gpvbrqkc04 ; real_T hczk1hbocx ; real_T p0t5w0vdks ; real_T
hiuy2krsdi ; real_T dccjkgv2le ; real_T k0jlbdjnva ; real_T g4253lgdib ;
real_T hghmkobdzg ; real_T n30lfoq2kh ; real_T l5yq0q3ytu ; real_T grx5uolofi
; real_T dnipbzsa01 ; real_T plzcvof0cg ; real_T ku3ou2vpd3 ; real_T
ekmycypirr ; real_T pbejwxjgcy ; real_T bpap2ezjn3 ; real_T cioogpnfou ;
real_T pzdi0bty35 ; real_T eoeuuo55in ; real_T gvvhiuplz3 ; real_T mpyuv2uxw3
; real_T lyjmljfrsg ; real_T envnov51ub ; real_T pbaksddkrn ; real_T
ixd3rquznk ; real_T iyipzsgrz5 ; real_T hslqableuz ; real_T fxvatfitwv ;
real_T emgfwhu21l ; real_T awmij2ndbs ; real_T e2mvmqqxw4 ; real_T fmcygpx2vg
; real_T lsq2pmtnen ; real_T amw4fiyayj ; real_T hifii3bsgj ; real_T
le3nrqkm51 ; real_T lhzxyxt4th ; real_T nslwac5oz1 ; real_T k1uhofzkuv ;
real_T aika24sm5z ; real_T hpszz3pjtd ; real_T czhhask5gp ; real_T fvpgevtruz
; real_T on5gf5iuwf ; real_T esfu5yiscs ; real_T a4w1zmavwe ; real_T
pigwhcbzq0 ; real_T cyjnbyfc0i ; real_T kkgikgwqfd ; real_T hrfrqhvag0 ;
real_T aerbt4caky ; real_T hcemwipx5t ; real_T bflevxca3b ; real_T kx5hvn2irb
; real_T f401mj5400 ; real_T pdv41u1bv4 ; real_T a14onc3pfw ; real_T
cbu0l0yr5e ; real_T fvlwikmg3p ; real_T ap1n2v5etx ; real_T broearhxet ;
real_T dwquclobg0 ; real_T oynlj2g2y0 ; real_T p2tui2fgst ; real_T kfmibrakaw
; real_T elfdad5khh ; real_T boavadboy2 ; real_T aryuaq3rl5 ; real_T
eoxzildqmx ; real_T adklfnzdha ; real_T p313nac2em ; real_T hsvitr1cuz ;
real_T emw34zzj0n ; real_T oaehp0ggho ; real_T lzqp3mfyyd ; real_T aw1d0z3iz1
; real_T hwzm4ag25s ; real_T glvm1mgkpi ; real_T p5l1vlrg0q ; real_T
pieokl1pre ; real_T losuz1faqa ; real_T l50of53wfv ; real_T o3lx520mjb ;
real_T hf12p0oema ; real_T ittrco42jw ; real_T gyynuuxuzt ; real_T nlg55gl4ab
; real_T fmpd0adg2x ; real_T fetd2dy4hb ; real_T podl5nwf4q ; real_T
k4ralb5npg ; real_T d5hooyuqbc ; real_T h0fyueex4l ; real_T htx5ycgsls ;
real_T dqcs4qniel ; real_T ncc3d1vc0p ; real_T fkby2yrkrh ; real_T cilfetsbpb
; real_T jhiepylgrx ; real_T erxzagrli5 ; real_T indk00ymck ; real_T
fz2ylkoiqb ; real_T myojyjxbdm ; real_T mwxqtkanhj ; real_T ix3khvprat ;
real_T f0edn5u3tn ; real_T nmy43huaen ; real_T a2ldg0bce4 ; real_T m3fmklpoo4
; real_T l21alpkqnv ; real_T h1ayu4awur ; real_T brsm4nzrah ; real_T
ggoecwf3q1 ; real_T kpvpyw2or2 ; real_T g4ma40bxrg ; real_T dfezl3wwyh ;
real_T h1kulm3imd ; real_T ipoazoojom ; real_T kcz4vcyrvn ; real_T m5prw4o5l0
; real_T jzg5c5efwv ; real_T pjam5gwo55 ; real_T k4hsh3ktuj ; real_T
khalmma1yi ; real_T mwdxsizryn ; real_T e0w5dhfut0 ; real_T ilem502jic ;
real_T fzmf2haueo ; real_T imvlwe1e35 ; real_T gw1ck0n3o1 ; real_T hqzti24f5s
; real_T krojemn4w2 ; real_T lmciohlrui ; real_T a3u0v5oign ; real_T
lzt0dxbw0g ; real_T a2kp0b3gqu ; real_T nqg0blp4ah ; real_T ls5iookusu ;
real_T cejoek2wry ; real_T hb0jqumwwm ; real_T bhvfrsvxss ; real_T o5al4ii0ta
; real_T oroy3cylwq ; real_T c2fp4pk12u ; real_T mdjjkjjte4 ; real_T
pukelfgdvy ; real_T myluaj2a2f ; real_T j3qcfhxip2 ; real_T je4wujkw4j ;
real_T nvthzxfpdw ; real_T g53ufxb042 ; real_T lumzxtexoc ; real_T iuxbb3lka0
; real_T avlzofudyq ; real_T jketg45h0j ; real_T pdiqdaxzmv ; real_T
b4u0vy3nxb ; real_T lawwihw0j3 ; real_T j3ncllbgjq ; real_T bcspshqyrw ;
real_T cmuoez3z5b ; real_T gov5rehuop ; real_T euypmzxvrk ; real_T ivsagr2hf3
; real_T ggef3xoude ; real_T eo203b2uu1 ; real_T fi04ggxfiy ; real_T
phbvh4bm45 ; real_T cf0abz2z5p ; real_T jw5blv0hkg ; real_T hjjmnc0gcq ;
real_T i53o5iawxp ; real_T i32kqlljhm ; real_T kembv2hzmz ; real_T eigy5ghvwe
; real_T ohzko3kdgx ; real_T cza0kg1gwt ; real_T b02epk3xjs ; real_T
it32ijnie1 ; real_T lercocjbsh ; real_T frxxbawofk ; real_T ks4el1opxf ;
real_T geawtfvhtg ; real_T lixrhn4zii ; real_T llwv3pvdiu ; real_T fchnk555mj
; real_T byhwr0codx ; real_T jhtk51wlox ; real_T jdqtbtwesn ; real_T
b4uceqqzoe ; real_T fprgaj1k0r ; real_T jyqdr1lbu4 ; real_T jsr3xrr15j ;
real_T jmqcvinld1 ; real_T eskaabof2l ; real_T pn4t0o402g ; real_T j1fsq45re3
; real_T jwfcfjelsq ; real_T joweuj5cry ; real_T h03wkv50av ; real_T
ozice3bfmg ; real_T mk2ok0x4m3 ; real_T eg25dt3cg2 ; real_T kz45ymnxd0 ;
real_T h1zi2aaqqn ; real_T bnklkjyz1a ; real_T juj50zqthm ; real_T oji42ulwk0
; real_T eoqxcicgrv ; real_T jncvw4nuc3 ; real_T phs4wj5ioj ; real_T
pmi5s0iucq ; real_T icb0z1q3qx ; real_T hfsxdvfgug ; real_T k2ve0zriv4 ;
real_T glfgdgrxxm ; real_T itidbkytv4 ; real_T k1twuiey1c ; real_T momvwk1xde
; real_T k13s43zl4i ; real_T l3a0avr1io ; real_T kse1k3pi5y ; real_T
kou0yvewf4 ; real_T aelaha11lm ; real_T buiikwndlh ; real_T ctroyz3mee ;
real_T h1vveidswc ; real_T baat5unifj ; real_T nbgkilglsp ; real_T kwjjbmp4bt
; real_T hzcfm0fxhb ; real_T jtd2zxwqt4 ; real_T po1mawjvkd ; real_T
dhljl3kisy ; real_T cqpoqqgne2 ; real_T fa1dv4nigf ; real_T gkhqn2dacy ;
real_T ppgvmsdvoq ; real_T o1qd11l2tv ; real_T a3l2uivqrs ; real_T lesdjmkgao
; real_T frtu5ehdip ; real_T lvddtojkxg ; real_T oa1ewmnubh ; real_T
dxebs3gcto ; real_T cjfor1cw2s ; real_T jvsvj0cs1q ; real_T j4e2hih5f2 ;
real_T pvtyjncvci ; real_T dtnc02wxxp ; real_T nosduwen0l ; real_T elhnyyo3vs
; real_T nf413igp2x ; real_T jz4zeztb3g ; real_T pcytykwcjn ; real_T
l4xkhfugtd ; real_T pqorfw0pg3 ; real_T fvkl2hvczx ; real_T j2ytlbajbg ;
real_T fdjdpnxyj1 ; real_T a23wzgcabi ; real_T lhxvbigieg ; real_T dawecwx24f
; real_T as3n3cqzak ; real_T b35bjpfzrk ; real_T gf4e15zifq ; real_T
b2rhvar35j ; real_T mhntd1azdk ; real_T f4csqpjbow ; real_T jlk15gwtx5 ;
real_T odrt2e1no5 ; real_T d2gafzeyks ; real_T io1opsdlff ; real_T epfhv3clml
; real_T hgqmwjdvak ; real_T fncmyaicrd ; real_T klqwfuk3b3 ; real_T
bqa3xy20yg ; real_T p4j4igcukc ; real_T kw40p0m1ok ; real_T mugtbjn2mc ;
real_T j4x4wubvae ; real_T lfakjhqb4j ; real_T py2nuv0yrs ; real_T pmz5hopgad
; real_T mi4irgfubb ; real_T bo425ja210 ; real_T potz2nkwwd ; real_T
mw3r0nt5ay ; real_T insxw4xo1f ; real_T ajjm0r4ce2 ; real_T ladnvdf2ql ;
real_T pslypa4a0o ; real_T pib1amj5wd ; real_T dnwjhdbduc ; real_T heyvmvffhh
; real_T b2d1ya0dep ; real_T hcpo4kt42l ; real_T k14uhom4gg ; real_T
gvat22lpxv ; real_T atksag0vir ; real_T as1oct3n5m ; real_T cypxykntcs ; }
kqptpzakik ; typedef struct { ZCSigState aibuwxlm3p ; ZCSigState ivoahwpnyy ;
ZCSigState ogp13prhht ; ZCSigState g05dofgbat ; ZCSigState axanv5rhut ;
ZCSigState ikie0laeze ; ZCSigState mbflijr0mq ; ZCSigState egt2adhpml ;
ZCSigState c205fdfx3p ; ZCSigState mzqs3vvz3w ; ZCSigState ell4erk0sk ;
ZCSigState blkrl4wyrp ; ZCSigState ciwthtzwmm ; ZCSigState khdueowxpt ;
ZCSigState gjlhnwpk2n ; ZCSigState hby5eedglw ; ZCSigState bolhd0jqiw ;
ZCSigState fggtsnat1c ; ZCSigState gi14efm01f ; ZCSigState kns3j5h3ab ;
ZCSigState k0yliegmct ; ZCSigState hpvxasutiw ; ZCSigState emno1ljux3 ;
ZCSigState apyotjnx0z ; ZCSigState gw5x5hz5uw ; ZCSigState gl0qzajmvz ;
ZCSigState ftnlfo3hjp ; ZCSigState a5izgxnbqu ; ZCSigState k2s2qikekq ;
ZCSigState jilfmyzub4 ; ZCSigState hp3rdefxw3 ; ZCSigState d2fdrfwao4 ;
ZCSigState k0klgjuold ; ZCSigState lueabr3lpw ; ZCSigState glextpek1j ;
ZCSigState oacbhr1wjl ; ZCSigState bvax4lks05 ; ZCSigState ghqk0gkhfd ;
ZCSigState p1rjnvbvez ; ZCSigState l0pot1rnmz ; ZCSigState huxsn35hwj ;
ZCSigState giw0ztvj0h ; ZCSigState p3sx2bobax ; ZCSigState lws1x0rujh ;
ZCSigState l423hgbgu4 ; ZCSigState cbrbrtbbky ; ZCSigState jmrrzqvtdz ;
ZCSigState btiicyjbxz ; ZCSigState pecgvhyeej ; ZCSigState gr53qdetyk ;
ZCSigState axgchkuxdu ; ZCSigState emt14iznd5 ; ZCSigState dwp4f20mru ;
ZCSigState ipv5yfqz4v ; ZCSigState l33c5a0lf0 ; ZCSigState htbif0iz3k ;
ZCSigState f5x0qgxlmp ; ZCSigState lx5k42kash ; ZCSigState bx5q2ndzkm ;
ZCSigState pwfbsguak1 ; ZCSigState ibntx1rkxr ; ZCSigState m2w5vst21d ;
ZCSigState mu0hchlf1a ; ZCSigState kc54lyoiha ; ZCSigState fxgo3cyi1b ;
ZCSigState micma0p54b ; ZCSigState c23tiat4wk ; ZCSigState bppjuo4mbc ;
ZCSigState ok2xazgyrd ; ZCSigState cbnocy1rrk ; ZCSigState na3d13meir ;
ZCSigState dq1tgbbrhm ; ZCSigState jeglk3eron ; ZCSigState gkt505dktu ;
ZCSigState acu01rzglp ; ZCSigState cv04o0e132 ; ZCSigState c3pafj5avb ;
ZCSigState g0snx2e5wc ; ZCSigState mwvsfftopu ; ZCSigState mnunsr2yhu ;
ZCSigState l2yy3nel1b ; ZCSigState kjto5yb5in ; ZCSigState hi221om1ow ;
ZCSigState p11fuaico2 ; ZCSigState brfoytrayt ; ZCSigState nujxmx3szv ;
ZCSigState jfheumb0nr ; ZCSigState cov0y35ymp ; ZCSigState bi0m5mawzv ;
ZCSigState ixx4ynuqlg ; ZCSigState nvbxoxx224 ; ZCSigState kzydm3ddp2 ;
ZCSigState otxwrkrtba ; ZCSigState hq1gar3vs0 ; ZCSigState pie41va4bp ;
ZCSigState j0aarv1lxq ; ZCSigState df0wbertv3 ; ZCSigState fvwzmdwk2j ;
ZCSigState mnkiil2kvm ; ZCSigState gggzfrfayb ; ZCSigState a4aj0aimqu ;
ZCSigState bpm5rgibed ; ZCSigState ooawiw21da ; ZCSigState pf1tw2zmuh ;
ZCSigState cbkho5ygd1 ; ZCSigState kttbju2lxt ; ZCSigState oalbt1z5br ;
ZCSigState gj0wgerqit ; ZCSigState f0iyz2kv0c ; ZCSigState o3ey23heuz ;
ZCSigState l0nhdci3ih ; ZCSigState codymqi2kd ; ZCSigState ozl3auwbpt ;
ZCSigState k2wlu1df31 ; ZCSigState jy31zjv15w ; ZCSigState le25zatomx ;
ZCSigState llb13jkw15 ; ZCSigState orxcc1fagz ; ZCSigState e1txio3mf2 ;
ZCSigState nzxlwxugin ; ZCSigState birgxqbsa2 ; ZCSigState eos1zjuo3u ;
ZCSigState pwrjl4a455 ; ZCSigState prprimmkip ; ZCSigState dpvzote3qo ;
ZCSigState oqo5luk1te ; ZCSigState kyqq1soyc2 ; ZCSigState k34kroagoz ;
ZCSigState jttfs5x30c ; ZCSigState nz501m0qzi ; ZCSigState lnq41f0vh3 ;
ZCSigState fhi3evc5q2 ; ZCSigState jkuq4dzrjx ; ZCSigState i415j3rmwd ;
ZCSigState ipa0duplny ; ZCSigState gdzkl2fadm ; ZCSigState hlfggixqq2 ;
ZCSigState plyczguqeo ; ZCSigState ha2rntohn4 ; ZCSigState odj2rx0dmv ;
ZCSigState okm5kcvmpa ; ZCSigState aukzafmiua ; ZCSigState jpqq3jznlw ;
ZCSigState nta31a52ao ; ZCSigState d1f3aazf1j ; ZCSigState i4ayscecd5 ;
ZCSigState cpuiij1pyf ; ZCSigState a2bmzjjyk4 ; ZCSigState oq1dholwqd ;
ZCSigState pwkwxbdgxz ; ZCSigState gel20ftm4d ; ZCSigState oggsibkgxh ;
ZCSigState gqm0yxe3nv ; ZCSigState ggk1khsatt ; ZCSigState kxu4pgq0fr ;
ZCSigState fxclhj2tb4 ; ZCSigState cworzk41qx ; ZCSigState giahfdhywp ;
ZCSigState kaigjcxakz ; ZCSigState o4bezjzwal ; ZCSigState i3nekyunfk ;
ZCSigState imns4vxnkp ; ZCSigState cq5rn3dqot ; ZCSigState ok5bdip3lk ;
ZCSigState dkr2tuhceb ; ZCSigState kmfhsmhdqa ; ZCSigState gzjgrcxzqn ;
ZCSigState j43ow12wjf ; ZCSigState m0y142ssw2 ; ZCSigState cjymgkbmjz ;
ZCSigState efr0khlgve ; ZCSigState msj0d0vu5g ; ZCSigState mp5gnbdg12 ;
ZCSigState bwlmkmxgbg ; ZCSigState dcq1xypibv ; ZCSigState nhkkv5vwxv ;
ZCSigState n0mlqwweiq ; ZCSigState oaazgr032f ; ZCSigState e5h4madwa2 ;
ZCSigState atnxmv2k5v ; ZCSigState h24ylvw50q ; ZCSigState e0zu43c1ps ;
ZCSigState eix5fxr3ua ; ZCSigState oiqp4qfds1 ; ZCSigState nlam0wj2j5 ;
ZCSigState nrcw0fea4x ; ZCSigState o24zhi5n4l ; ZCSigState d40zsp1arl ;
ZCSigState nzk3tjyu1l ; ZCSigState d0zocg0oix ; ZCSigState oshsqx3to0 ;
ZCSigState ennngowrid ; ZCSigState cudued0i0x ; ZCSigState aqyyt5ztbu ;
ZCSigState b1rjbvvq4m ; ZCSigState nbkpt0gngl ; ZCSigState nukuajknpf ;
ZCSigState mqr2sl121y ; ZCSigState cbdytl3qsi ; ZCSigState eadue2snhj ;
ZCSigState p5okicbomp ; ZCSigState fgnonh2yia ; ZCSigState gtzwjv5zzd ;
ZCSigState ntxdvrkbvh ; ZCSigState lahdpmju4o ; ZCSigState pg34f1mwbq ;
ZCSigState memqsv355n ; ZCSigState fczlaf1kub ; ZCSigState law4smtitu ;
ZCSigState mhiyeia54g ; ZCSigState o2z5nvndgu ; ZCSigState bm0nujoxg4 ;
ZCSigState hl1nfpo5nn ; ZCSigState i0molcudzu ; ZCSigState gudn1zfgm2 ;
ZCSigState ghqzwtxwnh ; ZCSigState gws2wqfpiu ; ZCSigState fc5w5rknz5 ;
ZCSigState c4mjbvd2yx ; ZCSigState oc5qqarmkr ; ZCSigState hvvua5ov4q ;
ZCSigState ngjeqrutki ; ZCSigState kfi1l1v2f3 ; ZCSigState ciefhwmedm ;
ZCSigState ehymkfvztd ; ZCSigState kdxcwxpf0x ; ZCSigState kxxelsraas ;
ZCSigState gdmizrslv3 ; ZCSigState i1ddg34elv ; ZCSigState ldjg5livdp ;
ZCSigState ilitxwbry0 ; ZCSigState dmghweupqu ; ZCSigState o1xwr5bs1y ;
ZCSigState dij5stdmh0 ; ZCSigState bk4kbfsmi3 ; ZCSigState o4gr5j2yrt ;
ZCSigState d12zhhvlsi ; ZCSigState c42eqoahoy ; ZCSigState o5fv02j3fr ;
ZCSigState jfhpkkbfry ; ZCSigState idnmd3tbbz ; ZCSigState i10lxfspl5 ;
ZCSigState pyzxbrrolo ; ZCSigState iqrzxzm4xn ; ZCSigState i4gyfrz5d5 ;
ZCSigState bjwpdwgnim ; ZCSigState lma4prgyyi ; ZCSigState gbx01qtamf ;
ZCSigState bvv1n4onwl ; ZCSigState a0oamcoghs ; ZCSigState euongquvbq ;
ZCSigState g1ycopgkce ; ZCSigState k20xxuocsv ; ZCSigState dtp0lc30bx ;
ZCSigState jzss3k3jj0 ; ZCSigState blebkmlqak ; ZCSigState kehlwzwyqk ;
ZCSigState h5zhxdgja4 ; ZCSigState hfxbjhvqwj ; ZCSigState jkxrwjxjtf ;
ZCSigState etnpvfy4nh ; ZCSigState lktyxf3o1v ; ZCSigState clipwgmul0 ;
ZCSigState k4vaslmdfg ; ZCSigState eh5p1wnopv ; ZCSigState lqxaxywfub ;
ZCSigState k4wdqtaod5 ; ZCSigState nt1x3idivh ; ZCSigState h1yomvqxzj ;
ZCSigState pztltgirzf ; ZCSigState iclnpmucn5 ; ZCSigState nwou521fz2 ;
ZCSigState ihwuyragf1 ; ZCSigState j2ms4m0uxa ; ZCSigState j5co1d2mkf ;
ZCSigState gt3ks5tp20 ; ZCSigState eobnenxn2a ; ZCSigState mespb22al3 ;
ZCSigState f0vhreev5h ; ZCSigState kr5fxs3p50 ; ZCSigState ezprd5mqs2 ;
ZCSigState izp55wrine ; ZCSigState pr301zchew ; ZCSigState fzndlcmuux ;
ZCSigState hn4jgibo3v ; ZCSigState b3noegu4rd ; ZCSigState i3ikoueyta ;
ZCSigState fezzh2qf0q ; ZCSigState awvhwcyazs ; ZCSigState iqz435csjt ;
ZCSigState amal0cjyok ; ZCSigState ggbbkccyni ; ZCSigState mtsio5cjf4 ;
ZCSigState eukok4famq ; ZCSigState p4hn1jqiec ; ZCSigState jcc3jsnn5u ;
ZCSigState pcxghl5gzc ; ZCSigState dfwqsc0mux ; ZCSigState aoavnvs0qf ;
ZCSigState hbxovnlfj0 ; ZCSigState ph2sh2mrhx ; ZCSigState clankoimaq ;
ZCSigState j3v00atjeg ; ZCSigState aqbvrh14ig ; ZCSigState hayowy40lc ;
ZCSigState feeppha5cj ; ZCSigState k2hvmgh215 ; ZCSigState msdfzetwse ;
ZCSigState nibjq3y2lc ; ZCSigState kdzfvpytqd ; ZCSigState nvht33ygx5 ;
ZCSigState oiw4qbtzpv ; ZCSigState n31c2mr03q ; ZCSigState iqpeqwzcyp ;
ZCSigState lydmvalssd ; ZCSigState fm2141gsfo ; ZCSigState pkxuk4ks1l ;
ZCSigState l21el2i41r ; ZCSigState j2fxckwzuo ; ZCSigState no1udyasvx ;
ZCSigState ps4r01kkcs ; ZCSigState hg5g3yh15v ; ZCSigState melb3wqvzq ;
ZCSigState pt53sqrkrx ; ZCSigState aomh0drl30 ; ZCSigState jjgqbppklu ;
ZCSigState mf0uuabthq ; ZCSigState at0kegq5n3 ; ZCSigState bripksqkos ;
ZCSigState jwulcnjqr4 ; ZCSigState ficzyin1pf ; ZCSigState hdmwqy5bex ;
ZCSigState huzbpjw5yf ; ZCSigState iwo2g4uhjh ; ZCSigState aw0cvkykqc ;
ZCSigState iszlxquxog ; ZCSigState lo2i2whiny ; ZCSigState nmoctnpyhd ;
ZCSigState nibjnon2be ; ZCSigState pjhhqi21pn ; ZCSigState d1r0inusfl ;
ZCSigState e0321o5nvp ; ZCSigState erfbul1on2 ; ZCSigState gon3hwlzxx ;
ZCSigState nr1nygzsxo ; ZCSigState ckjolme5wr ; ZCSigState k4grd1c1ge ;
ZCSigState fesludxitw ; ZCSigState b2znlbrdm0 ; ZCSigState o4pvh1rtmr ;
ZCSigState p4l5cjfhvv ; ZCSigState isk34pg0k5 ; ZCSigState eqfd5ijbi5 ;
ZCSigState lngr4oitab ; ZCSigState icvjajjg1u ; ZCSigState gta1xnnntt ;
ZCSigState d4kvvk1xjb ; ZCSigState ikyf5sqcgz ; ZCSigState iturgbyziw ;
ZCSigState h4pz1xs101 ; ZCSigState crbujq5gbs ; ZCSigState i41h4scgw5 ;
ZCSigState imupenht5b ; ZCSigState f2qv542noq ; ZCSigState gt1lkoaxmn ;
ZCSigState dplkvbjbok ; ZCSigState nq5f3xidgt ; ZCSigState hiphdwjhge ;
ZCSigState gtdk35rjve ; ZCSigState kwghelen2f ; ZCSigState h4on550y5g ;
ZCSigState jzktihlahc ; ZCSigState eigwp3ejcc ; ZCSigState mcuj04xwbv ;
ZCSigState k4ghhdbohc ; ZCSigState nocqltw0fi ; ZCSigState glimnphpje ;
ZCSigState pptqwiysn2 ; } km30avrcex ; typedef struct { int_T ir [ 128 ] ;
int_T jc [ 604 ] ; real_T pr [ 128 ] ; } nso0i44jvq ; struct locdm2fqb0b_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11
; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T
P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ;
real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T
P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ;
real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T
P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ;
real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T
P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ;
real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T
P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ;
real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T
P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T
P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T
P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T
P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T
P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T
P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T
P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T
P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T
P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T
P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ; real_T
P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T
P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T
P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T
P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T P_168 ; real_T
P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T
P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T P_178 ; real_T
P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T
P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T
P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T
P_194 ; real_T P_195 ; uint32_T P_196 ; uint32_T P_197 [ 2 ] ; uint32_T P_198
; uint32_T P_199 [ 2 ] ; uint32_T P_200 ; uint32_T P_201 [ 2 ] ; boolean_T
P_202 ; } ; struct fjefo04diq { struct SimStruct_tag * _mdlRefSfcnS ; struct
{ boolean_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 2 ] ; real_T
* massMatrixBasePr ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 622 ] ; int32_T * vardimsAddress [
622 ] ; RTWLoggingFcnPtr loggingPtrs [ 622 ] ; sysRanDType * systemRan [ 2 ]
; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; real_T
rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef
struct { o4lq13rlvq rtb ; ammy3t1awn rtdw ; m5e23pbc2h rtm ; km30avrcex rtzce
; } g5h05g3u4wx ; extern void axkawtnuua ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , m5e23pbc2h * const
lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX
, km30avrcex * localZCE , real_T * localMM , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_FCElectricPlant_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_FCElectricPlant_GetDWork (
const g5h05g3u4wx * mdlrefDW ) ; extern void mr_FCElectricPlant_SetDWork (
g5h05g3u4wx * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_FCElectricPlant_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * FCElectricPlant_GetCAPIStaticMap ( void ) ;
extern void irvj0luwjw ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW
) ; extern void k5nsrx2akm ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn *
localDW , fw3fcrujzt * localX ) ; extern void gtrcczzcor ( m5e23pbc2h * const
lmamcwn3a2 , ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void
irfppkdltu ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ) ; extern
void alwc4n2foq ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , kz4c240slf * localXPerturbMin ,
mclj3ytwnx * localXPerturbMax ) ; extern void imv3dllygl ( m5e23pbc2h * const
lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq * localB , ammy3t1awn *
localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot ) ; extern void
mscgivy4fk ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn
* localDW , fw3fcrujzt * localX ) ; extern void iyhavcqilr ( m5e23pbc2h *
const lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot ) ;
extern void bpia4crzhf ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB
, ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void abih3gg12y (
m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX , kqptpzakik * localZCSV ) ; extern void czx1gq31fm (
m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) ; extern void FCElectricPlant ( m5e23pbc2h * const
lmamcwn3a2 , const real_T * nhquhhxexx , const real_T * crmxvln0sn , const
real_T * g2vu2rouzu , const real_T * ooqs53wghs , const real_T * nvlm0heabm ,
real_T * laajwttrsw , real_T * l45wd5pbjh , real_T * pjtg1ua4jf , real_T *
jkukrewnlm , real_T * lwu0tsgovp , real_T * oz3dekjw3t , real_T * ca0lva1ra5
, real_T * csbds3kgit , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX , km30avrcex * localZCE ) ; extern void
FCElectricPlantTID2 ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW ) ; extern void mt14yrnbuj ( ammy3t1awn * localDW ,
m5e23pbc2h * const lmamcwn3a2 ) ; extern const real_T FCElectricPlant_RGND ;
#endif

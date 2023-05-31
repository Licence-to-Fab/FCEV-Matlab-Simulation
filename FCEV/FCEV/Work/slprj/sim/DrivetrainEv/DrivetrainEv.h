#ifndef RTW_HEADER_DrivetrainEv_h_
#define RTW_HEADER_DrivetrainEv_h_
#ifndef DrivetrainEv_COMMON_INCLUDES_
#define DrivetrainEv_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DrivetrainEv_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "rt_zcfcn.h"
#include "model_reference_types.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <stddef.h>
#include "zero_crossing_types.h"
typedef struct { real_T oqgrsi0ejr [ 3 ] ; real_T h1dclck55f [ 9 ] ; }
gqcilb1ome ; typedef struct { real_T eh3bmirodr [ 5 ] ; real_T k3pqpt3554 [
16 ] ; real_T myssjwdee1 [ 24 ] ; real_T c4zmcdhw0l ; real_T kxfugx0x5t ;
real_T ocgezqjxeg ; real_T fgkkhera5y ; } lc2agjjnwf ; typedef struct {
boolean_T kzk2m4ro0k ; } pfqfx2f4zk ; typedef struct { int8_T k3j1amkab5 ; }
oecdflrzti ; typedef struct { real_T mjdk2hab1e ; boolean_T jvxaiqibhb ; }
fqp5ibbznb ; typedef struct { boolean_T jrdv3hmnoc ; int8_T d3vznomj0x ; }
oizox0twh0 ; typedef struct { int8_T lim0ml1jqw ; } benvcf5o21 ; typedef
struct { real_T ewkfjng1l4 ; real_T hcmrnlatk5 ; real_T mwz5tssn5o ; real_T
exbq33mn51 ; real_T dgykadrj5y ; real_T aereisbden ; } ejajaq4sjj ; typedef
struct { int8_T iojd2jlc3k ; } ibb22rhdhi ; typedef struct { real_T
cxk3fsuqri ; } ezr503rgsr ; typedef struct { real_T cxk3fsuqri ; } ocyn02au15
; typedef struct { boolean_T cxk3fsuqri ; } kyr1rhkn5p ; typedef struct {
real_T cxk3fsuqri ; } asw3ocj4en ; typedef struct { real_T cxk3fsuqri ; }
lps5fweizp ; typedef struct { real_T cxk3fsuqri ; } amel0smx4y ; typedef
struct { real_T bzjc1unozv ; real_T brky3vboqb ; real_T jym0dekt3x ;
ejajaq4sjj ndg43gdj2cy ; fqp5ibbznb jkqilwbv4li ; pfqfx2f4zk lx5pzbjgnjw ; }
dmpx2jc2pu ; typedef struct { real_T hftpkxvzkr ; int8_T azoxgesvxj ; int8_T
dufw0vwv3o ; uint8_T e230xky3og ; uint8_T e1o4vim22a ; boolean_T ikmpdntrw1 ;
boolean_T f4leq45rjn ; ibb22rhdhi ndg43gdj2cy ; benvcf5o21 hpjac0modfc ;
oizox0twh0 jkqilwbv4li ; oecdflrzti lx5pzbjgnjw ; } fmdhv4fck3 ; typedef
struct { ezr503rgsr ndg43gdj2cy ; } bobjql0acy ; typedef struct { ocyn02au15
ndg43gdj2cy ; } pjvirltsck ; typedef struct { kyr1rhkn5p ndg43gdj2cy ; }
oj3qcikvsd ; typedef struct { asw3ocj4en ndg43gdj2cy ; } jsyfghzlbs ; typedef
struct { lps5fweizp ndg43gdj2cy ; } kckfzckqe5 ; typedef struct { amel0smx4y
ndg43gdj2cy ; } kgdb5tut5v ; typedef struct { dmpx2jc2pu fate2u2iog ; }
avaxmyit3j ; typedef struct { fmdhv4fck3 fate2u2iog ; } mxjlqvkjce ; typedef
struct { bobjql0acy fate2u2iog ; } lbl1s0hghr ; typedef struct { pjvirltsck
fate2u2iog ; } kqspnrjgmw ; typedef struct { oj3qcikvsd fate2u2iog ; }
atojkui03z ; typedef struct { jsyfghzlbs fate2u2iog ; } aufkcqjofk ; typedef
struct { kckfzckqe5 fate2u2iog ; } fgqtupspgf ; typedef struct { kgdb5tut5v
fate2u2iog ; } iyfebu03dj ; typedef struct { real_T iztgeaiw2b ; real_T
ovggp1qwn3 ; real_T a134j1egmo ; ejajaq4sjj fkdt002bwx ; fqp5ibbznb
i5fcczml0p ; pfqfx2f4zk aqualkdqvn ; } gzahetipq4 ; typedef struct { real_T
ljqqhws3qf ; int8_T cog0zpqeoa ; int8_T d4ugeviqji ; uint8_T aqrptm0tku ;
uint8_T od5f0hbwjo ; boolean_T kevuk2jdkp ; boolean_T hgortb0uau ; ibb22rhdhi
fkdt002bwx ; benvcf5o21 fsjpudim4x ; oizox0twh0 i5fcczml0p ; oecdflrzti
aqualkdqvn ; } epqdxq1edn ; typedef struct { ezr503rgsr fkdt002bwx ; }
jipem2r5u4 ; typedef struct { ocyn02au15 fkdt002bwx ; } fvwoypcxq5 ; typedef
struct { kyr1rhkn5p fkdt002bwx ; } mngph55n5r ; typedef struct { asw3ocj4en
fkdt002bwx ; } hwisdnpky5 ; typedef struct { lps5fweizp fkdt002bwx ; }
fptwlttveg ; typedef struct { amel0smx4y fkdt002bwx ; } cekzt1rnxr ; typedef
struct { gzahetipq4 fd4qjwy5lm ; } lgsc2euz0b ; typedef struct { epqdxq1edn
fd4qjwy5lm ; } nxa00c0sli ; typedef struct { jipem2r5u4 fd4qjwy5lm ; }
ave4ahp3br ; typedef struct { fvwoypcxq5 fd4qjwy5lm ; } pwcyz0zv0a ; typedef
struct { mngph55n5r fd4qjwy5lm ; } fooqmswbbc ; typedef struct { hwisdnpky5
fd4qjwy5lm ; } niajceetmc ; typedef struct { fptwlttveg fd4qjwy5lm ; }
aeu2unkift ; typedef struct { cekzt1rnxr fd4qjwy5lm ; } dlgnmjtuzs ; typedef
struct { real_T kn3kq1dbud [ 3 ] ; real_T if3fq2sidt [ 2 ] ; real_T
b1gikpnzh3 ; real_T n1fith1shx ; real_T iq2zwwqbdw ; real_T a2kksb5sai ;
real_T oac32d025c ; real_T mxxvqktr4f ; real_T djwjslokxk ; real_T hcj35ee5xv
; real_T anqj4afvmr ; real_T mpk1if1idh [ 2 ] ; real_T au3s2eolps [ 2 ] ;
real_T dgmodzfvbf ; real_T noo4kfc5co ; real_T pkwo5ibqvs ; real_T e553emkr15
; real_T jvfw3rjn1q ; real_T abmh0jgyuh ; real_T mswq52xs2q ; real_T
gh0swnw3rq ; real_T kqttujkp5i [ 3 ] ; real_T a1lc0bzspv [ 3 ] ; real_T
hjgtg4ci21 [ 3 ] ; real_T kbmx45xxxk ; real_T btwu2npo5h ; real_T kk5viu1fv5
; real_T issejkriht ; real_T h32gzij2ks ; real_T mlzbj1adz0 ; real_T
dkxl3r0irb ; real_T afpkcd0buu [ 2 ] ; real_T aovczmb0vg ; real_T cd1kn4apvg
; real_T fwtwl1sjv5 ; real_T flr3ssss0f ; real_T dkfg5gymfy ; real_T
osuttpiuid ; real_T hvwnw2twcq ; real_T psjmxsi5db ; real_T cpxmevd5ln [ 12 ]
; real_T k4h2lncslm [ 2 ] ; lgsc2euz0b eblhn1q21v [ 1 ] ; lc2agjjnwf
cl0311alh3 ; avaxmyit3j nod5vp1cyy [ 1 ] ; lc2agjjnwf f0qvxxi2xz ; gqcilb1ome
izrftnejci [ 4 ] ; } pw4f2kjo3k ; typedef struct { real_T jdfraz14md ; real_T
jrm4ykfn0y ; struct { void * AQHandles [ 17 ] ; } gl1a1300nz ; struct { void
* AQHandles [ 4 ] ; } hxmqkbfltt ; struct { void * AQHandles [ 12 ] ; }
djecxjao2c ; struct { void * AQHandles [ 12 ] ; } iaya40yldr ; struct { void
* AQHandles [ 12 ] ; } f0jgc0q4fs ; struct { void * AQHandles [ 12 ] ; }
iaya40yldr2 ; struct { void * AQHandles [ 4 ] ; } iaya40yldr2f ; struct {
void * AQHandles [ 4 ] ; } kjwyipugjd ; struct { void * AQHandles [ 6 ] ; }
d0spjcrzgo ; struct { void * AQHandles [ 4 ] ; } kd45pbt3ye ; int_T
jg0qnrcaox ; int_T nz2ycl5px5 ; int_T huxlbxlfje ; int_T hs0twsijyj ; int8_T
kxp34i0kfp ; int8_T mdigxevyus ; int8_T bbyh2lmjuh ; nxa00c0sli eblhn1q21v [
1 ] ; mxjlqvkjce nod5vp1cyy [ 1 ] ; } lvsoqlxlcs ; typedef struct { real_T
ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T noatsby3ej [ 2 ] ; real_T
in4ouu3rj0 ; real_T fmsvpqigtm ; real_T m2l0c5x3qt ; real_T jphiqvsdq1 ;
real_T neffdf1vy0 ; real_T exw1srp224 ; real_T lwzedupgn2 ; real_T pclrccjq3k
; real_T avikqegq2n ; real_T ifgziugp0p ; real_T nn4yztzwjs [ 2 ] ;
ave4ahp3br eblhn1q21v [ 1 ] ; lbl1s0hghr nod5vp1cyy [ 1 ] ; } edp3webv0p ;
typedef int_T emgdq0melr [ 1 ] ; typedef real_T pdsrwvkfou [ 2 ] ; typedef
struct { real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T
noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T m2l0c5x3qt
; real_T jphiqvsdq1 ; real_T neffdf1vy0 ; real_T exw1srp224 ; real_T
lwzedupgn2 ; real_T pclrccjq3k ; real_T avikqegq2n ; real_T ifgziugp0p ;
real_T nn4yztzwjs [ 2 ] ; pwcyz0zv0a eblhn1q21v [ 1 ] ; kqspnrjgmw nod5vp1cyy
[ 1 ] ; } cspbap1de4 ; typedef struct { boolean_T ncmmxrrgvr [ 2 ] ;
boolean_T d5vyxqghh0 [ 2 ] ; boolean_T noatsby3ej [ 2 ] ; boolean_T
in4ouu3rj0 ; boolean_T fmsvpqigtm ; boolean_T m2l0c5x3qt ; boolean_T
jphiqvsdq1 ; boolean_T neffdf1vy0 ; boolean_T exw1srp224 ; boolean_T
lwzedupgn2 ; boolean_T pclrccjq3k ; boolean_T avikqegq2n ; boolean_T
ifgziugp0p ; boolean_T nn4yztzwjs [ 2 ] ; fooqmswbbc eblhn1q21v [ 1 ] ;
atojkui03z nod5vp1cyy [ 1 ] ; } bbuzvmnhsa ; typedef struct { real_T
ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T noatsby3ej [ 2 ] ; real_T
in4ouu3rj0 ; real_T fmsvpqigtm ; real_T m2l0c5x3qt ; real_T jphiqvsdq1 ;
real_T neffdf1vy0 ; real_T exw1srp224 ; real_T lwzedupgn2 ; real_T pclrccjq3k
; real_T avikqegq2n ; real_T ifgziugp0p ; real_T nn4yztzwjs [ 2 ] ;
niajceetmc eblhn1q21v [ 1 ] ; aufkcqjofk nod5vp1cyy [ 1 ] ; } nupxuy3etd ;
typedef struct { real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T
noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T m2l0c5x3qt
; real_T jphiqvsdq1 ; real_T neffdf1vy0 ; real_T exw1srp224 ; real_T
lwzedupgn2 ; real_T pclrccjq3k ; real_T avikqegq2n ; real_T ifgziugp0p ;
real_T nn4yztzwjs [ 2 ] ; aeu2unkift eblhn1q21v [ 1 ] ; fgqtupspgf nod5vp1cyy
[ 1 ] ; } aciiplviyd ; typedef struct { real_T ncmmxrrgvr [ 2 ] ; real_T
d5vyxqghh0 [ 2 ] ; real_T noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T
fmsvpqigtm ; real_T m2l0c5x3qt ; real_T jphiqvsdq1 ; real_T neffdf1vy0 ;
real_T exw1srp224 ; real_T lwzedupgn2 ; real_T pclrccjq3k ; real_T avikqegq2n
; real_T ifgziugp0p ; real_T nn4yztzwjs [ 2 ] ; dlgnmjtuzs eblhn1q21v [ 1 ] ;
iyfebu03dj nod5vp1cyy [ 1 ] ; } cphoervchx ; typedef struct { real_T
pl0udozur3 ; real_T p10xktv12s ; } pmzuarg20b ; typedef struct { ZCSigState
jvitvqlix1 ; ZCSigState jgxptiecam ; } at3vnbf5fi ; struct fu2d21p2me_ {
real_T P_0 ; real_T P_1 ; } ; struct k15rssna2x_ { boolean_T P_0 ; } ; struct
p4tcmhlmqo_ { real_T P_0 ; boolean_T P_1 ; boolean_T P_2 ; boolean_T P_3 [ 8
] ; } ; struct j3ujqghva4_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; } ;
struct aremv21hur_ { real_T P_0 ; } ; struct pymb3fi5g4_ { aremv21hur
ndg43gdj2cy ; j3ujqghva4 hpjac0modfc ; p4tcmhlmqo jkqilwbv4li ; k15rssna2x
lx5pzbjgnjw ; } ; struct gwbuyqty4q_ { pymb3fi5g4 fate2u2iog ; } ; struct
eyoob242x4_ { aremv21hur fkdt002bwx ; j3ujqghva4 fsjpudim4x ; p4tcmhlmqo
i5fcczml0p ; k15rssna2x aqualkdqvn ; } ; struct lu0k1fvhhc_ { eyoob242x4
fd4qjwy5lm ; } ; struct akbgnuupjzy_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 [ 2 ] ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 [ 7 ] ; real_T P_11 [ 7 ] ; real_T P_12
[ 6 ] ; real_T P_13 [ 6 ] ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T
P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ;
real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T
P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ;
real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T
P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ;
real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T
P_50 ; real_T P_51 [ 2 ] ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 [ 7 ] ; real_T P_63 [ 7 ] ; real_T P_64 [ 6 ] ;
real_T P_65 [ 6 ] ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T
P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ;
real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T
P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 [ 2 ] ; real_T
P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ;
real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ;
real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 [ 2 ] ; real_T
P_106 [ 3 ] ; real_T P_107 [ 3 ] ; real_T P_108 ; real_T P_109 ; real_T P_110
; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T P_115 ;
real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T P_120 ;
real_T P_121 [ 2 ] ; real_T P_122 [ 2 ] ; real_T P_123 [ 3 ] ; real_T P_124 [
4 ] ; real_T P_125 [ 2 ] ; real_T P_126 [ 2 ] ; real_T P_127 ; real_T P_128 ;
real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ;
real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ;
real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T P_143 ;
real_T P_144 ; real_T P_145 [ 3 ] ; real_T P_146 [ 3 ] ; real_T P_147 ;
real_T P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ;
real_T P_153 [ 3 ] ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T
P_157 ; real_T P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T
P_162 ; real_T P_163 [ 34 ] ; real_T P_164 [ 3 ] ; real_T P_165 [ 3 ] ;
real_T P_166 [ 9 ] ; real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T
P_170 ; real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ; real_T
P_175 ; real_T P_176 [ 3 ] ; real_T P_177 [ 3 ] ; real_T P_178 [ 9 ] ; real_T
P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T
P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T
P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T
P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T
P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ; real_T P_203 ; real_T
P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ; real_T P_208 ; real_T
P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ; real_T P_213 ; real_T
P_214 [ 34 ] ; real_T P_215 [ 3 ] ; real_T P_216 [ 3 ] ; real_T P_217 [ 9 ] ;
real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T P_222 ;
real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T P_227 [ 3
] ; real_T P_228 [ 3 ] ; real_T P_229 [ 9 ] ; real_T P_230 ; real_T P_231 ;
real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ;
real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ;
real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ;
real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ;
real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ;
real_T P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ;
real_T P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ;
real_T P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ;
real_T P_272 ; lu0k1fvhhc eblhn1q21v ; gwbuyqty4q nod5vp1cyy ; fu2d21p2me
izrftnejci ; } ; struct kz1ziyy35g { struct SimStruct_tag * _mdlRefSfcnS ;
struct { real_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ;
boolean_T mr_nonContSig2 [ 1 ] ; boolean_T mr_nonContSig3 [ 1 ] ; boolean_T
mr_nonContSig4 [ 1 ] ; boolean_T mr_nonContSig5 [ 1 ] ; } NonContDerivMemory
; ssNonContDerivSigInfo nonContDerivSignal [ 6 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
14 ] ; int32_T * vardimsAddress [ 14 ] ; RTWLoggingFcnPtr loggingPtrs [ 14 ]
; sysRanDType * systemRan [ 25 ] ; int_T systemTid [ 25 ] ; } DataMapInfo ;
struct { uint8_T rtmDbBufReadBuf2 ; uint8_T rtmDbBufWriteBuf2 ; boolean_T
rtmDbBufLastBufWr2 ; real_T rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3
] ; } Timing ; } ; typedef struct { pw4f2kjo3k rtb ; lvsoqlxlcs rtdw ;
hcopmldpph rtm ; at3vnbf5fi rtzce ; } hmke5fx3tcj ; extern void ktxb3gprz3 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_DrivetrainEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DrivetrainEv_GetDWork (
const hmke5fx3tcj * mdlrefDW ) ; extern void mr_DrivetrainEv_SetDWork (
hmke5fx3tcj * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_DrivetrainEv_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainEv_GetCAPIStaticMap ( void ) ;
extern void pafzrlxpms ( real_T lhfh0lgexg , real_T dddksvopvu , real_T
aqziyf45vh , real_T kmxusdamtu , real_T kvgp2fkjhy , real_T gnoj3vvd04 ,
real_T i5tazc1u4j , real_T hrxlzevx3z , real_T jblgopnf1i , const real_T
pkjxdlvuwn [ 34 ] , const real_T n0mhhr4t1h [ 3 ] , const real_T cjgdxidpon [
3 ] , const real_T csyrzuatjk [ 9 ] , real_T hiqsfmypee , real_T mx5so5mgvw ,
real_T inchkh4kac , real_T gycdhdasg2 , real_T few2l1fwxa , real_T jklaqvkxfe
, real_T otfgbpbyhn , real_T kv2iqsifba , real_T hiawd1p1fx , real_T
o5ygoxqi30 , real_T ig4mu234iu , real_T dbtrggoxo1 , real_T fdpxrz5vmb ,
real_T k2udx51syx , real_T pfq2eyet0u , real_T e3zacyak04 , const real_T
i11thzoaok [ 3 ] , const real_T jiefker5rr [ 3 ] , const real_T govy01dn4l [
9 ] , real_T n5xjjpqvhi , real_T bodbaw1ynp , real_T gehf3geyns , real_T
gakbsgqcve , real_T hdwkghxa4l , real_T bt0sy4q3zx , real_T djkh3gvlkv ,
real_T bbl12fnfds , real_T maogfv1bti , real_T b55yk0qpmy , real_T c4pn3rsir2
, real_T hhd1av5ez0 , real_T epvhuoa1qy , real_T p4b5kxhudx , real_T
a5c4goqooi , real_T fs3ildlixj , real_T prsb4scvfy , real_T cmj0idhrc5 ,
real_T m2do5j31ef , real_T dgy4icut3a , real_T kh4hnzmazk , real_T jtbjysdjqj
, real_T iypogydhcm , real_T lkloq2embq , real_T pvhuw1msck , real_T
d3jy5zi252 , real_T fg54spf2n5 , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T
rtp_VXLOW , real_T rtp_kappamax , lc2agjjnwf * localB ) ; extern void
kk0gqeonff ( pfqfx2f4zk * localB , k15rssna2x * localP ) ; extern void
bl2yl1izeh ( pfqfx2f4zk * localB ) ; extern void lx5pzbjgnj ( real_T
ay3xeuearj , real_T dotxz5qshb , pfqfx2f4zk * localB , oecdflrzti * localDW )
; extern void fvcqjct50p ( fqp5ibbznb * localB , oizox0twh0 * localDW ,
p4tcmhlmqo * localP ) ; extern void lqozigtnao ( fqp5ibbznb * localB ) ;
extern void jkqilwbv4l ( real_T deauqq3iqo , real_T aggo5m10cn , fqp5ibbznb *
localB , oizox0twh0 * localDW , p4tcmhlmqo * localP ) ; extern void
jkqilwbv4lTID2 ( real_T rtp_br , fqp5ibbznb * localB , p4tcmhlmqo * localP )
; extern void mbjlcj4mlk ( hcopmldpph * const a5ree4wwe5 ) ; extern void
ehvsb4g243 ( real_T * jk5v2hweet , real_T * mfovcxxqab , real_T * jilotr4g4q
, real_T * m4inimtjpw ) ; extern void oxojvdus0j ( hcopmldpph * const
a5ree4wwe5 ) ; extern void hpjac0modf ( hcopmldpph * const a5ree4wwe5 ,
real_T kj3rg4elqk , real_T * jk5v2hweet , real_T * mfovcxxqab , real_T *
jilotr4g4q , real_T * m4inimtjpw , j3ujqghva4 * localP ) ; extern void
bh1yzkl0yd ( real_T rtp_omegao , ezr503rgsr * localX ) ; extern void
fpmjbkubaz ( hcopmldpph * const a5ree4wwe5 , kyr1rhkn5p * localXdis ) ;
extern void bxtrkjpjgc ( real_T * fxady5f4e0 , real_T * e2aiz2vbp3 , real_T *
b5fl0n1q0j , real_T * mcbbov3w1s , ejajaq4sjj * localB ) ; extern void
btu025qxla ( ejajaq4sjj * localB , ocyn02au15 * localXdot ) ; extern void
ihxvxssvuy ( hcopmldpph * const a5ree4wwe5 , kyr1rhkn5p * localXdis ) ;
extern void ndg43gdj2c ( real_T oh55pom3vz , real_T mcytrmfgpa , real_T *
fxady5f4e0 , real_T * e2aiz2vbp3 , real_T * b5fl0n1q0j , real_T * mcbbov3w1s
, real_T rtp_br , real_T rtp_Iyy , ejajaq4sjj * localB , aremv21hur * localP
, ezr503rgsr * localX ) ; extern void fhk5xmrghf ( real_T rtp_omegao ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP , bobjql0acy
* localX ) ; extern void hjtn2cfetd ( dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , bobjql0acy * localX ) ; extern void jzxqghlsdl ( dmpx2jc2pu *
localB ) ; extern void blmwtgrkjm ( dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , pjvirltsck * localXdot ) ; extern void cddyh02qci ( hcopmldpph *
const a5ree4wwe5 , real_T fgvs5banyw , real_T auareadgka , real_T ka4js1rmku
, real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP , bobjql0acy
* localX , oj3qcikvsd * localXdis ) ; extern void cddyh02qciTID2 ( real_T
rtp_br , dmpx2jc2pu * localB , pymb3fi5g4 * localP ) ; extern void efyr52spdx
( real_T rtp_omegao , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4
* localP , jipem2r5u4 * localX ) ; extern void gkwx1uvgy3 ( gzahetipq4 *
localB , epqdxq1edn * localDW , jipem2r5u4 * localX ) ; extern void
p3l4kwjfse ( gzahetipq4 * localB ) ; extern void dq1cbs3e5h ( gzahetipq4 *
localB , epqdxq1edn * localDW , fvwoypcxq5 * localXdot ) ; extern void
b5prwuabwt ( hcopmldpph * const a5ree4wwe5 , real_T kx4svy31tg , real_T
br5yrlp4to , real_T dq54xdamlz , real_T rtp_omegao , real_T rtp_br , real_T
rtp_Iyy , real_T rtp_OmegaTol , gzahetipq4 * localB , epqdxq1edn * localDW ,
eyoob242x4 * localP , jipem2r5u4 * localX , mngph55n5r * localXdis ) ; extern
void b5prwuabwtTID2 ( real_T rtp_br , gzahetipq4 * localB , eyoob242x4 *
localP ) ; extern void fzkpqsvdo4 ( hcopmldpph * const a5ree4wwe5 ,
lvsoqlxlcs * localDW ) ; extern void eqyc2wn3m1 ( hcopmldpph * const
a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
) ; extern void er1nyhy4k5 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k *
localB , lvsoqlxlcs * localDW , edp3webv0p * localX ) ; extern void
cmuw0kqmoe ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW ) ; extern
void ka5dospcnh ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW ) ; extern void
a2spfqi5as ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, cspbap1de4 * localXdot ) ; extern void ekz3w3o33e ( hcopmldpph * const
a5ree4wwe5 , lvsoqlxlcs * localDW ) ; extern void DrivetrainEv ( hcopmldpph *
const a5ree4wwe5 , const real_T * a10dw5c4tm , const real_T * ccn5sowg0n ,
const real_T * dxefyqzind , const real_T * iudgegw2lz , real_T * hk0t0gzq0m ,
real_T * jnhw4b1r4n , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p
* localX , at3vnbf5fi * localZCE , bbuzvmnhsa * localXdis ) ; extern void
DrivetrainEvTID2 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW ) ; extern void ekywbf3nku ( hcopmldpph * const
a5ree4wwe5 ) ;
#endif

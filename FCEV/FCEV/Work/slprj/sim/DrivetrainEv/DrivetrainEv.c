#include "DrivetrainEv.h"
#include "rtwtypes.h"
#include "DrivetrainEv_private.h"
#include "mwmathutil.h"
#include "interp2_DYJyqj4b.h"
#include <emmintrin.h>
#include "automldiffopen_HIk0JElP.h"
#include "DrivetrainEv_capi.h"
#include "look1_binlxpw.h"
#include "look1_binlcpw.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
#define ixrnqnhdfr ((uint8_T)0U)
#define mcuvnmapwy ((uint8_T)1U)
#define ns2cbkftdn ((uint8_T)2U)
#define fygjrc0bwn ((uint8_T)1U)
#define nrvxfifrf3 ((uint8_T)0U)
#define ojhcgwmuav ((uint8_T)2U)
static RegMdlInfo rtMdlInfo_DrivetrainEv [ 254 ] = { { "i2nkjxda1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cekzt1rnxr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fptwlttveg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "hwisdnpky5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mngph55n5r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fvwoypcxq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jipem2r5u4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cklgoq5png" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n0eio1rlpk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cu3q4upwwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eyoob242x4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "epqdxq1edn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gzahetipq4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ob4gehxedj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dlgnmjtuzs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aeu2unkift" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niajceetmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fooqmswbbc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pwcyz0zv0a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ave4ahp3br" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ehwuq2flhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "do51n4jljv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ldftyohcr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lu0k1fvhhc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nxa00c0sli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lgsc2euz0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jamoiccw5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "amel0smx4y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lps5fweizp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "asw3ocj4en" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kyr1rhkn5p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ocyn02au15" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ezr503rgsr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dsrrdrnhl5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"crgdzu0qgz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a5og3r0icn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aremv21hur" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ibb22rhdhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ejajaq4sjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dl1frozi3a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"agrz53hsbl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "g4adqhhvma" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mtq5ysirlz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fmcgiua5km" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n2kbk514ks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "iw40cciuda" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lyzqt0nklo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cntvboex4v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cbz2dlzqjt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"j3ujqghva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "benvcf5o21" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fjgmsl5hqy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lxb2my1viu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ah133o01lx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "m2kmkbqxuq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ermqezac44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lt0y4hy3pd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "i01qvr2ezq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hl10vqkas0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kmotidl0fz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pd3fxbwbdh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"anse5zkp05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "p4tcmhlmqo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "oizox0twh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fqp5ibbznb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "l0fe3oafgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "airt52dhps" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ic22b1irhk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ontjheoysm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ahfih3jzau" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"nnlikfhqgo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gztm1me5j3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ayxswdewl1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pooh4v3ih0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cev0vg1qh4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "k15rssna2x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oecdflrzti" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pfqfx2f4zk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pibajuhrfy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kgdb5tut5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kckfzckqe5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jsyfghzlbs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oj3qcikvsd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pjvirltsck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bobjql0acy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eqkvgltva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jn13uy3k03" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mljqquawlq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pymb3fi5g4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fmdhv4fck3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dmpx2jc2pu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fwdtimy1yf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iyfebu03dj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fgqtupspgf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aufkcqjofk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "atojkui03z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kqspnrjgmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lbl1s0hghr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oi5wx40azd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jbcz0jpnwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pw0nsh0h05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gwbuyqty4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mxjlqvkjce" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"avaxmyit3j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ljddmczf4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gkyrgx403d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kv5dd5iizc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "m2khnalf54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ms1i05pajk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oc0zihyyg4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "d4ycflth2y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gozrujzaaw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"chdajczivx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iwcsoi3ar4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gwi2hokzxw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p2lbhyas44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lc2agjjnwf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bjtf3mo10h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niqqjkrxmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oq4c5t0foy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "j2jbaak5ro" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ln33slfpeu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nu045e3o1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dzq322z3qz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"e4lswbhl1f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gfakbvs42h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "curfouepya" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fu2d21p2me" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lzduu3oepy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gqcilb1ome" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hmke5fx3tcj" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pmzuarg20b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cphoervchx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aciiplviyd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nupxuy3etd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbuzvmnhsa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cspbap1de4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "edp3webv0p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nzmos2zlw4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"at3vnbf5fi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "khz3ktgddz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbwlhhd1yt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lvsoqlxlcs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pw4f2kjo3k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lzqecqna5o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ekywbf3nku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cmuw0kqmoe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gjrktinair" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lcrhwa0gkm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a2spfqi5as" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ekz3w3o33e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"er1nyhy4k5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "eqyc2wn3m1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ktxb3gprz3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ka5dospcnh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fzkpqsvdo4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "efb0jiqqrw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"detsq240wj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ox4522myug" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bxwynbswnf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mkid0gorbi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dq1cbs3e5h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b1g3pdb1rr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gkwx1uvgy3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "efyr52spdx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "koortnfexc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p3l4kwjfse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hoxerz5r3l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b5prwuabwt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch" } , {
"bhfnq0gvty" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "diav50533w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fpkexilwx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pa01ypljzv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hbitco4kzk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "blmwtgrkjm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"jchsnf4kft" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hjtn2cfetd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fhk5xmrghf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kbesg5n00g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jzxqghlsdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ncnwl1puqr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cddyh02qci" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch"
} , { "daf5agucai" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "aoflhlgav1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "n4a12hefr4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ihxvxssvuy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fpmjbkubaz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "btu025qxla" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oec2gataco" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "c1qzjjjrev" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bh1yzkl0yd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvimnjpkij" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bxtrkjpjgc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehaq3xi2i2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ndg43gdj2c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Slipping" } , { "fykpdnvvl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "ij11pv3qli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"plfejxniy4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oxojvdus0j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mbjlcj4mlk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"c4xb3zu25o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hao3nl0wlo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehvsb4g243" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"h4eaymynye" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hpjac0modf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "Locked" } , { "dzbhhot2tg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "DrivetrainEv" } , { "cz1ljsnlgo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hrhkjhjudb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ms52wr2yr5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mn2sbc14hy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvcqjct50p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gf1chc542w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lqozigtnao" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ox0m3irtud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jkqilwbv4l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "detectLockup" } , { "ik4b1pjhko" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"dx3kktby5q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hldn5hj5im" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kk0gqeonff" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"btzl12r1cd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bl2yl1izeh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "e22zipb4tr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lx5pzbjgnj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"detectSlip" } , { "k4kq5a5ocp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "DrivetrainEv" } , { "gv3b21mocx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pkbppjdhhu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "phtlzjoqko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cmaimownvk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gqxnwdwkoc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ocvm13bhlg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nnjg45upsq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pafzrlxpms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Simple Magic Tire" } , { "DrivetrainEv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "egole5a0hr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainEv" } , { "kz1ziyy35g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hcopmldpph" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" }
, { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_DrivetrainEv_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_restoreDataFromMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "DrivetrainEv" } , { "mr_DrivetrainEv_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"DrivetrainEv.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"DrivetrainEv.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DrivetrainEv" } } ; akbgnuupjzy akbgnuupjz = { 2.27 , 0.28 , 0.1 , 0.1 , {
0.0 , 0.0 } , { 0.0 , 0.0 } , 6570.0 , 6570.0 , 0.0 , 0.0 , { - 700000.0 , -
7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { - 700000.0 , -
7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { - 8928.57142857143 ,
- 178.57142857142858 , 0.0 , 357.14285714285717 , 535.71428571428567 ,
9285.7142857142862 } , { - 5357.1428571428569 , - 107.14285714285714 , 0.0 ,
214.28571428571428 , 321.42857142857144 , 5571.4285714285716 } , 0.8 , 0.8 ,
3000.0 , 0.1 , 0.025 , 0.01 , 0.01 , 0.15 , 0.15 , 7.94 , 101325.0 , 287.058
, 0.0 , 0.0 , 0.327 , 0.327 , 0.15 , 0.15 , 273.0 , 0.336 , 0.336 , 2.0 , 2.0
, 1.1880000000000002 , 0.01 , 0.01 , 0.0 , 0.0 , 1.5120000000000002 , 400.0 ,
400.0 , 0.001 , 0.0 , 0.0 , 0.001 , 1.0 , 1.0 , { - 1.0 , 1.0 } , 0.001 ,
0.001 , 0.001 , 0.001 , 0.0 , 0.0 , 0.05 , 0.05 , 0.0 , 0.0 , { - 10.0 , -
1.0 , - 0.1 , 0.0 , 0.1 , 1.0 , 10.0 } , { - 10.0 , - 1.0 , - 0.1 , 0.0 , 0.1
, 1.0 , 10.0 } , { - 0.005 , - 0.0001 , 0.0 , 0.2 , 0.2001 , 0.2051 } , { -
0.005 , - 0.0001 , 0.0 , 0.2 , 0.2001 , 0.2051 } , 1.0 , 0.0 , 9.81 , 0.5 ,
10000.0 , 10000.0 , 1.5 , 1.5 , 1.0 , 1.0 , 1500.0 , 0.35 , 0.35 , 0.45 ,
0.45 , 2.0 , 2.0 , 100.0 , 100.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , -
0.35 } , 234400.0 , 234400.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0E-6 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 3.1415926535897931 , - 3.1415926535897931 , { 2.0 , 2.0 } ,
{ - 1.0 , 1.0 , 1.0 } , { - 1.0 , 1.0 , 1.0 } , 0.5 , 0.0 , 0.0 , - 1.0 , 0.6
, 0.0 , 2.2204460492503131E-16 , 0.5 , 0.0 , - 1.0 , 0.4 , 0.0 ,
2.2204460492503131E-16 , { 0.0 , 0.0 } , { - 1.0 , 1.0 } , { 4.0 , 4.0 , 0.0
} , { 0.0 , 1.0 , - 1.0 , 0.0 } , { 2.0 , 2.0 } , { 2.0 , 2.0 } , 0.0 , 4.0 ,
4.0 , 5000.0 , - 5000.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 ,
0.5 , 0.0 , 20.0 , 4.0 , 0.5 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 1.0 } , - 10.0 , -
98.100000000000009 , 0.0 , 0.0 , 2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 ,
0.01 , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 ,
0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0
, 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 1.0 , 0.0 , 0.78539816339744828 , - 10.0 , - 98.100000000000009 , 0.0 , 0.0
, 2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.78539816339744828 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , { { { - 4.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , false ,
false , { false , true , false , false , true , true , true , false } } , {
false } } } , { { { - 4.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , false , false , {
false , true , false , false , true , true , true , false } } , { false } } }
, { 0.0 , 0.0 } } ; static real_T ak2ysaxv1o ( real_T Re , real_T omega ,
real_T Vx , real_T b_VXLOW , real_T b_kappamax ) ; static void gypno2p4rq (
real_T u , real_T * y , real_T * yabs ) ; static real_T njagxepmjm ( real_T
kappa , real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL , real_T
FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T NOMPRES ,
real_T PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 ,
real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T
PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 ,
real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T
lam_Fzo , real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T
lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) ; static real_T
er2ke5cfku ( real_T kappa , real_T Fz , const real_T kappaFx [ 3 ] , const
real_T FzFx [ 3 ] , const real_T FxMap [ 9 ] , real_T b_FZMIN , real_T
b_FZMAX , real_T lam_mux ) ; static real_T iggcenaiwj ( real_T Fz , real_T
omega , real_T Vx , real_T press , real_T QSY1 , real_T QSY2 , real_T QSY3 ,
real_T QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS , real_T b_FZMIN , real_T
b_FZMAX , real_T PRESMIN , real_T PRESMAX ) ; static real_T nnh25h0kmd (
real_T omega , real_T Fz , real_T Vx , const real_T VxMy [ 3 ] , const real_T
FzMy [ 3 ] , const real_T MyMap [ 9 ] , real_T b_FZMAX ) ; static real_T
ipmaflmbfh ( real_T Fz , real_T omega , real_T Tamb , real_T Fpl , real_T Cr
, real_T Kt , real_T Tmeas , real_T Re , real_T b_FZMIN , real_T b_FZMAX ,
real_T TMIN , real_T TMAX ) ; static boolean_T gppluqklue ( real_T Tout ,
real_T Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 * localDW ) ; static
boolean_T g0el31fu5q ( real_T Tout , real_T Tfmaxs , dmpx2jc2pu * localB ,
fmdhv4fck3 * localDW , pymb3fi5g4 * localP ) ; static boolean_T k5qdrctgwd (
real_T Tout , real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn * localDW ) ;
static boolean_T oknnk3qrza ( real_T Tout , real_T Tfmaxs , gzahetipq4 *
localB , epqdxq1edn * localDW , eyoob242x4 * localP ) ; static real_T
ak2ysaxv1o ( real_T Re , real_T omega , real_T Vx , real_T b_VXLOW , real_T
b_kappamax ) { real_T Vxpabs ; real_T kappa ; real_T x_data ; int32_T
b_trueCount ; int32_T loop_ub ; Vxpabs = muDoubleScalarAbs ( Vx ) ;
b_trueCount = 0 ; if ( Vxpabs < b_VXLOW ) { b_trueCount = 1 ; } if (
b_trueCount - 1 >= 0 ) { x_data = Vxpabs / b_VXLOW ; } if ( b_trueCount - 1
>= 0 ) { x_data *= x_data ; } loop_ub = b_trueCount - 1 ; for ( b_trueCount =
0 ; b_trueCount <= loop_ub ; b_trueCount ++ ) { x_data = 2.0 * b_VXLOW / (
3.0 - x_data ) ; } if ( Vxpabs < b_VXLOW ) { Vxpabs = x_data ; } kappa = ( Re
* omega - Vx ) / Vxpabs ; b_trueCount = 0 ; if ( kappa < - b_kappamax ) {
b_trueCount = 1 ; } if ( b_trueCount - 1 >= 0 ) { kappa = - b_kappamax ; } if
( kappa > b_kappamax ) { kappa = b_kappamax ; } return kappa ; } static void
gypno2p4rq ( real_T u , real_T * y , real_T * yabs ) { real_T x_data ;
int32_T loop_ub ; int32_T trueCount ; * yabs = muDoubleScalarAbs ( u ) ;
trueCount = 0 ; if ( * yabs < 0.1 ) { trueCount = 1 ; } if ( trueCount - 1 >=
0 ) { x_data = * yabs / 0.1 ; } if ( trueCount - 1 >= 0 ) { x_data *= x_data
; } loop_ub = trueCount - 1 ; for ( trueCount = 0 ; trueCount <= loop_ub ;
trueCount ++ ) { x_data = 0.2 / ( 3.0 - x_data ) ; } if ( * yabs < 0.1 ) { *
yabs = x_data ; } trueCount = 0 ; if ( u < 0.0 ) { trueCount = 1 ; } if (
trueCount - 1 >= 0 ) { x_data = - * yabs ; } * y = * yabs ; if ( u < 0.0 ) {
* y = x_data ; } } static real_T njagxepmjm ( real_T kappa , real_T Vx ,
real_T Fz , real_T b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN ,
real_T b_FZMAX , real_T press , real_T NOMPRES , real_T PRESMIN , real_T
PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1
, real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 ,
real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T
PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T
lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex
, real_T lam_Hx , real_T lam_Vx ) { real_T Cx ; real_T Cx_tmp ; real_T Fxo ;
real_T a__1 ; real_T b_idx_0 ; real_T dfz ; real_T dpi ; real_T f_idx_0 ;
real_T g_idx_0 ; real_T h_idx_0 ; real_T kappa_x ; real_T lam_mux_star ;
b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if ( b_idx_0 >
b_FZMAX ) { b_idx_0 = b_FZMAX ; } dfz = press ; if ( press < PRESMIN ) { dfz
= PRESMIN ; } if ( dfz > PRESMAX ) { dfz = PRESMAX ; } dpi = ( dfz - NOMPRES
) / NOMPRES ; dfz = ( b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN * lam_Fzo ;
kappa_x = ( PHX2 * dfz + PHX1 ) * lam_Hx + kappa ; lam_mux_star = -
muDoubleScalarAbs ( Vx ) * kappa ; lam_mux_star = lam_mux / (
muDoubleScalarSqrt ( lam_mux_star * lam_mux_star ) * lam_muV / LONGVL + 1.0 )
; Cx = PCX1 * lam_Cx ; f_idx_0 = Cx ; if ( Cx < 0.0 ) { f_idx_0 = 0.0 ; }
Cx_tmp = dpi * dpi ; Cx = ( ( PPX3 * dpi + 1.0 ) + Cx_tmp * PPX4 ) * ( PDX2 *
dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma * PDX3 ) * lam_mux_star * b_idx_0 ;
g_idx_0 = Cx ; if ( Cx < 0.0 ) { g_idx_0 = 0.0 ; } Cx = ( ( PEX2 * dfz + PEX1
) + dfz * dfz * PEX3 ) * ( 1.0 - muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4
) * lam_Ex ; h_idx_0 = Cx ; if ( Cx > 1.0 ) { h_idx_0 = 1.0 ; } gypno2p4rq (
f_idx_0 * g_idx_0 , & Cx , & a__1 ) ; dpi = ( PKX2 * dfz + PKX1 ) * b_idx_0 *
muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi + 1.0 ) + Cx_tmp * PPX2 ) *
lam_Kxkappa / Cx ; dpi *= kappa_x ; Fxo = muDoubleScalarSin (
muDoubleScalarAtan ( dpi - ( dpi - muDoubleScalarAtan ( dpi ) ) * h_idx_0 ) *
f_idx_0 ) * g_idx_0 + ( PVX2 * dfz + PVX1 ) * b_idx_0 * ( lam_mux_star * 10.0
/ ( 9.0 * lam_mux_star + 1.0 ) ) * lam_Vx ; return Fxo ; } static real_T
er2ke5cfku ( real_T kappa , real_T Fz , const real_T kappaFx [ 3 ] , const
real_T FzFx [ 3 ] , const real_T FxMap [ 9 ] , real_T b_FZMIN , real_T
b_FZMAX , real_T lam_mux ) { real_T FxMap_p [ 9 ] ; real_T Fx ; real_T
b_idx_0 ; int32_T i ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN
; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } for ( i = 0 ; i < 3 ; i
++ ) { FxMap_p [ 3 * i ] = FxMap [ i ] ; FxMap_p [ 3 * i + 1 ] = FxMap [ i +
3 ] ; FxMap_p [ 3 * i + 2 ] = FxMap [ i + 6 ] ; } Fx = interp2_DYJyqj4b (
kappaFx , FzFx , FxMap_p , kappa , b_idx_0 ) * lam_mux ; return Fx ; } static
real_T iggcenaiwj ( real_T Fz , real_T omega , real_T Vx , real_T press ,
real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T
UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T
PRESMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 = press ; if ( press <
PRESMIN ) { b_idx_0 = PRESMIN ; } if ( b_idx_0 > PRESMAX ) { b_idx_0 =
PRESMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if (
d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return ( ( QSY2 *
muDoubleScalarAbs ( Vx ) + QSY1 ) + Vx * Vx * QSY3 ) * ( muDoubleScalarTanh (
omega ) * UNLOADED_RADIUS ) * ( muDoubleScalarPower ( d_idx_0 , QSY7 ) *
muDoubleScalarPower ( b_idx_0 , QSY8 ) ) ; } static real_T nnh25h0kmd (
real_T omega , real_T Fz , real_T Vx , const real_T VxMy [ 3 ] , const real_T
FzMy [ 3 ] , const real_T MyMap [ 9 ] , real_T b_FZMAX ) { real_T MyMap_p [ 9
] ; real_T My ; real_T b_idx_0 ; int32_T i ; b_idx_0 = Fz ; if ( Fz < 0.0 ) {
b_idx_0 = 0.0 ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } for ( i =
0 ; i < 3 ; i ++ ) { MyMap_p [ 3 * i ] = MyMap [ i ] ; MyMap_p [ 3 * i + 1 ]
= MyMap [ i + 3 ] ; MyMap_p [ 3 * i + 2 ] = MyMap [ i + 6 ] ; } My =
muDoubleScalarTanh ( omega ) * interp2_DYJyqj4b ( VxMy , FzMy , MyMap_p , Vx
, b_idx_0 ) ; return My ; } static real_T ipmaflmbfh ( real_T Fz , real_T
omega , real_T Tamb , real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas ,
real_T Re , real_T b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) {
real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 = Tamb ; if ( Tamb < TMIN ) {
b_idx_0 = TMIN ; } if ( b_idx_0 > TMAX ) { b_idx_0 = TMAX ; } d_idx_0 = Fz ;
if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) {
d_idx_0 = b_FZMAX ; } return ( d_idx_0 * Cr * 0.001 / ( ( b_idx_0 - Tmeas ) *
Kt + 1.0 ) + Fpl ) * ( - muDoubleScalarTanh ( omega ) * Re ) ; } void
pafzrlxpms ( real_T lhfh0lgexg , real_T dddksvopvu , real_T aqziyf45vh ,
real_T kmxusdamtu , real_T kvgp2fkjhy , real_T gnoj3vvd04 , real_T i5tazc1u4j
, real_T hrxlzevx3z , real_T jblgopnf1i , const real_T pkjxdlvuwn [ 34 ] ,
const real_T n0mhhr4t1h [ 3 ] , const real_T cjgdxidpon [ 3 ] , const real_T
csyrzuatjk [ 9 ] , real_T hiqsfmypee , real_T mx5so5mgvw , real_T inchkh4kac
, real_T gycdhdasg2 , real_T few2l1fwxa , real_T jklaqvkxfe , real_T
otfgbpbyhn , real_T kv2iqsifba , real_T hiawd1p1fx , real_T o5ygoxqi30 ,
real_T ig4mu234iu , real_T dbtrggoxo1 , real_T fdpxrz5vmb , real_T k2udx51syx
, real_T pfq2eyet0u , real_T e3zacyak04 , const real_T i11thzoaok [ 3 ] ,
const real_T jiefker5rr [ 3 ] , const real_T govy01dn4l [ 9 ] , real_T
n5xjjpqvhi , real_T bodbaw1ynp , real_T gehf3geyns , real_T gakbsgqcve ,
real_T hdwkghxa4l , real_T bt0sy4q3zx , real_T djkh3gvlkv , real_T bbl12fnfds
, real_T maogfv1bti , real_T b55yk0qpmy , real_T c4pn3rsir2 , real_T
hhd1av5ez0 , real_T epvhuoa1qy , real_T p4b5kxhudx , real_T a5c4goqooi ,
real_T fs3ildlixj , real_T prsb4scvfy , real_T cmj0idhrc5 , real_T m2do5j31ef
, real_T dgy4icut3a , real_T kh4hnzmazk , real_T jtbjysdjqj , real_T
iypogydhcm , real_T lkloq2embq , real_T pvhuw1msck , real_T d3jy5zi252 ,
real_T fg54spf2n5 , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW ,
real_T rtp_kappamax , lc2agjjnwf * localB ) { real_T Kappa ; real_T Re ;
real_T c_idx_0 ; real_T g_idx_0 ; localB -> eh3bmirodr [ 0 ] = kvgp2fkjhy ;
localB -> eh3bmirodr [ 1 ] = gnoj3vvd04 ; localB -> eh3bmirodr [ 2 ] =
i5tazc1u4j ; localB -> eh3bmirodr [ 3 ] = hrxlzevx3z ; localB -> eh3bmirodr [
4 ] = jblgopnf1i ; localB -> k3pqpt3554 [ 0 ] = hiqsfmypee ; localB ->
k3pqpt3554 [ 1 ] = mx5so5mgvw ; localB -> k3pqpt3554 [ 2 ] = inchkh4kac ;
localB -> k3pqpt3554 [ 3 ] = gycdhdasg2 ; localB -> k3pqpt3554 [ 4 ] =
few2l1fwxa ; localB -> k3pqpt3554 [ 5 ] = jklaqvkxfe ; localB -> k3pqpt3554 [
6 ] = otfgbpbyhn ; localB -> k3pqpt3554 [ 7 ] = kv2iqsifba ; localB ->
k3pqpt3554 [ 8 ] = hiawd1p1fx ; localB -> k3pqpt3554 [ 9 ] = o5ygoxqi30 ;
localB -> k3pqpt3554 [ 10 ] = ig4mu234iu ; localB -> k3pqpt3554 [ 11 ] =
dbtrggoxo1 ; localB -> k3pqpt3554 [ 12 ] = fdpxrz5vmb ; localB -> k3pqpt3554
[ 13 ] = k2udx51syx ; localB -> k3pqpt3554 [ 14 ] = pfq2eyet0u ; localB ->
k3pqpt3554 [ 15 ] = e3zacyak04 ; localB -> myssjwdee1 [ 0 ] = hiqsfmypee ;
localB -> myssjwdee1 [ 1 ] = bodbaw1ynp ; localB -> myssjwdee1 [ 2 ] =
gehf3geyns ; localB -> myssjwdee1 [ 3 ] = gakbsgqcve ; localB -> myssjwdee1 [
4 ] = hdwkghxa4l ; localB -> myssjwdee1 [ 5 ] = bt0sy4q3zx ; localB ->
myssjwdee1 [ 6 ] = djkh3gvlkv ; localB -> myssjwdee1 [ 7 ] = bbl12fnfds ;
localB -> myssjwdee1 [ 8 ] = maogfv1bti ; localB -> myssjwdee1 [ 9 ] =
b55yk0qpmy ; localB -> myssjwdee1 [ 10 ] = c4pn3rsir2 ; localB -> myssjwdee1
[ 11 ] = hhd1av5ez0 ; localB -> myssjwdee1 [ 12 ] = epvhuoa1qy ; localB ->
myssjwdee1 [ 13 ] = p4b5kxhudx ; localB -> myssjwdee1 [ 14 ] = a5c4goqooi ;
localB -> myssjwdee1 [ 15 ] = fs3ildlixj ; localB -> myssjwdee1 [ 16 ] =
prsb4scvfy ; localB -> myssjwdee1 [ 17 ] = cmj0idhrc5 ; localB -> myssjwdee1
[ 18 ] = m2do5j31ef ; localB -> myssjwdee1 [ 19 ] = dgy4icut3a ; localB ->
myssjwdee1 [ 20 ] = kh4hnzmazk ; localB -> myssjwdee1 [ 21 ] = jtbjysdjqj ;
localB -> myssjwdee1 [ 22 ] = iypogydhcm ; localB -> myssjwdee1 [ 23 ] =
lkloq2embq ; switch ( ( int32_T ) fg54spf2n5 ) { case 0 : localB ->
fgkkhera5y = dddksvopvu ; Re = lhfh0lgexg ; break ; case 1 : Re = 0.0 *
muDoubleScalarAbs ( aqziyf45vh ) + n5xjjpqvhi ; if ( Re < 0.001 ) { Re =
0.001 ; } localB -> fgkkhera5y = ( rtNaN ) ; break ; case 2 : Re = lhfh0lgexg
; localB -> fgkkhera5y = dddksvopvu ; break ; default : Re = lhfh0lgexg ;
localB -> fgkkhera5y = dddksvopvu ; break ; } Kappa = ak2ysaxv1o ( lhfh0lgexg
, aqziyf45vh , kmxusdamtu , rtp_VXLOW , rtp_kappamax ) ; switch ( ( int32_T )
pvhuw1msck ) { case 0 : c_idx_0 = dddksvopvu ; if ( dddksvopvu < rtp_FZMIN )
{ c_idx_0 = rtp_FZMIN ; } if ( c_idx_0 > rtp_FZMAX ) { c_idx_0 = rtp_FZMAX ;
} Kappa *= localB -> eh3bmirodr [ 2 ] ; Kappa = muDoubleScalarSin (
muDoubleScalarAtan ( Kappa - ( Kappa - muDoubleScalarAtan ( Kappa ) ) *
localB -> eh3bmirodr [ 3 ] ) * localB -> eh3bmirodr [ 1 ] ) * localB ->
eh3bmirodr [ 0 ] * ( c_idx_0 * localB -> eh3bmirodr [ 4 ] ) ; break ; case 2
: Kappa = njagxepmjm ( Kappa , kmxusdamtu , dddksvopvu , pkjxdlvuwn [ 0 ] ,
pkjxdlvuwn [ 1 ] , pkjxdlvuwn [ 2 ] , rtp_FZMIN , rtp_FZMAX , pkjxdlvuwn [ 3
] , pkjxdlvuwn [ 4 ] , pkjxdlvuwn [ 5 ] , pkjxdlvuwn [ 6 ] , pkjxdlvuwn [ 7 ]
, pkjxdlvuwn [ 8 ] , pkjxdlvuwn [ 9 ] , pkjxdlvuwn [ 10 ] , pkjxdlvuwn [ 11 ]
, pkjxdlvuwn [ 12 ] , pkjxdlvuwn [ 13 ] , pkjxdlvuwn [ 14 ] , pkjxdlvuwn [ 15
] , pkjxdlvuwn [ 16 ] , pkjxdlvuwn [ 17 ] , pkjxdlvuwn [ 18 ] , pkjxdlvuwn [
19 ] , pkjxdlvuwn [ 20 ] , pkjxdlvuwn [ 21 ] , pkjxdlvuwn [ 22 ] , pkjxdlvuwn
[ 23 ] , pkjxdlvuwn [ 24 ] , pkjxdlvuwn [ 25 ] , pkjxdlvuwn [ 26 ] ,
pkjxdlvuwn [ 27 ] , pkjxdlvuwn [ 28 ] , pkjxdlvuwn [ 29 ] , pkjxdlvuwn [ 30 ]
, pkjxdlvuwn [ 31 ] , pkjxdlvuwn [ 32 ] , pkjxdlvuwn [ 33 ] ) ; break ; case
3 : Kappa = er2ke5cfku ( Kappa , dddksvopvu , n0mhhr4t1h , cjgdxidpon ,
csyrzuatjk , rtp_FZMIN , rtp_FZMAX , localB -> eh3bmirodr [ 4 ] ) ; break ;
default : Kappa = 0.0 ; break ; } switch ( ( int32_T ) d3jy5zi252 ) { case 0
: localB -> kxfugx0x5t = 0.0 ; break ; case 1 : localB -> kxfugx0x5t =
iggcenaiwj ( dddksvopvu , aqziyf45vh , kmxusdamtu , localB -> k3pqpt3554 [ 0
] , localB -> k3pqpt3554 [ 3 ] , localB -> k3pqpt3554 [ 4 ] , localB ->
k3pqpt3554 [ 5 ] , localB -> k3pqpt3554 [ 9 ] , localB -> k3pqpt3554 [ 10 ] ,
Re , rtp_FZMIN , rtp_FZMAX , localB -> k3pqpt3554 [ 14 ] , localB ->
k3pqpt3554 [ 15 ] ) ; break ; case 2 : c_idx_0 = localB -> k3pqpt3554 [ 0 ] ;
if ( localB -> k3pqpt3554 [ 0 ] < localB -> k3pqpt3554 [ 14 ] ) { c_idx_0 =
localB -> k3pqpt3554 [ 14 ] ; } if ( c_idx_0 > localB -> k3pqpt3554 [ 15 ] )
{ c_idx_0 = localB -> k3pqpt3554 [ 15 ] ; } g_idx_0 = dddksvopvu ; if (
dddksvopvu < 0.0 ) { g_idx_0 = 0.0 ; } if ( g_idx_0 > rtp_FZMAX ) { g_idx_0 =
rtp_FZMAX ; } localB -> kxfugx0x5t = ( ( ( ( localB -> k3pqpt3554 [ 4 ] *
Kappa / localB -> k3pqpt3554 [ 1 ] + localB -> k3pqpt3554 [ 3 ] ) +
muDoubleScalarAbs ( kmxusdamtu / 16.7 ) * localB -> k3pqpt3554 [ 5 ] ) +
muDoubleScalarPower ( kmxusdamtu / 16.7 , 4.0 ) * localB -> k3pqpt3554 [ 6 ]
) + ( g_idx_0 * localB -> k3pqpt3554 [ 8 ] / localB -> k3pqpt3554 [ 1 ] +
localB -> k3pqpt3554 [ 7 ] ) * ( localB -> k3pqpt3554 [ 11 ] * localB ->
k3pqpt3554 [ 11 ] ) ) * ( muDoubleScalarTanh ( aqziyf45vh ) * g_idx_0 *
localB -> k3pqpt3554 [ 13 ] ) * ( muDoubleScalarPower ( g_idx_0 / localB ->
k3pqpt3554 [ 1 ] , localB -> k3pqpt3554 [ 9 ] ) * muDoubleScalarPower (
c_idx_0 / localB -> k3pqpt3554 [ 2 ] , localB -> k3pqpt3554 [ 10 ] ) ) *
localB -> k3pqpt3554 [ 12 ] ; break ; case 3 : localB -> kxfugx0x5t = -
nnh25h0kmd ( aqziyf45vh , dddksvopvu , kmxusdamtu , i11thzoaok , jiefker5rr ,
govy01dn4l , rtp_FZMAX ) ; break ; case 4 : localB -> kxfugx0x5t = -
ipmaflmbfh ( dddksvopvu , aqziyf45vh , localB -> k3pqpt3554 [ 0 ] , localB ->
k3pqpt3554 [ 3 ] , localB -> k3pqpt3554 [ 4 ] , localB -> k3pqpt3554 [ 5 ] ,
localB -> k3pqpt3554 [ 6 ] , Re , rtp_FZMIN , rtp_FZMAX , localB ->
k3pqpt3554 [ 14 ] , localB -> k3pqpt3554 [ 15 ] ) ; break ; default : localB
-> kxfugx0x5t = 0.0 ; break ; } localB -> c4zmcdhw0l = Kappa ; localB ->
ocgezqjxeg = Re ; } void kk0gqeonff ( pfqfx2f4zk * localB , k15rssna2x *
localP ) { localB -> kzk2m4ro0k = localP -> P_0 ; } void bl2yl1izeh (
pfqfx2f4zk * localB ) { localB -> kzk2m4ro0k = false ; } void lx5pzbjgnj (
real_T ay3xeuearj , real_T dotxz5qshb , pfqfx2f4zk * localB , oecdflrzti *
localDW ) { localB -> kzk2m4ro0k = ( muDoubleScalarAbs ( ay3xeuearj ) >=
dotxz5qshb ) ; localDW -> k3j1amkab5 = 4 ; } void fvcqjct50p ( fqp5ibbznb *
localB , oizox0twh0 * localDW , p4tcmhlmqo * localP ) { localDW -> jrdv3hmnoc
= localP -> P_2 ; localB -> jvxaiqibhb = localP -> P_1 ; } void lqozigtnao (
fqp5ibbznb * localB ) { localB -> jvxaiqibhb = false ; localB -> mjdk2hab1e =
0.0 ; } void jkqilwbv4l ( real_T deauqq3iqo , real_T aggo5m10cn , fqp5ibbznb
* localB , oizox0twh0 * localDW , p4tcmhlmqo * localP ) { localB ->
jvxaiqibhb = localP -> P_3 [ ( ( ( muDoubleScalarAbs ( ( ( 0.0 - deauqq3iqo )
- localB -> mjdk2hab1e ) + localB -> mjdk2hab1e ) >= aggo5m10cn ) + ( (
uint32_T ) ( muDoubleScalarAbs ( - deauqq3iqo ) <= aggo5m10cn ) << 1 ) ) << 1
) + localDW -> jrdv3hmnoc ] ; localDW -> jrdv3hmnoc = localB -> jvxaiqibhb ;
localDW -> d3vznomj0x = 4 ; } void jkqilwbv4lTID2 ( real_T rtp_br ,
fqp5ibbznb * localB , p4tcmhlmqo * localP ) { localB -> mjdk2hab1e = rtp_br *
localP -> P_0 ; } void mbjlcj4mlk ( hcopmldpph * const a5ree4wwe5 ) { if (
rtmGetTaskTime ( a5ree4wwe5 , 0 ) != rtmGetTStart ( a5ree4wwe5 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} void oxojvdus0j ( hcopmldpph * const a5ree4wwe5 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
void ehvsb4g243 ( real_T * jk5v2hweet , real_T * mfovcxxqab , real_T *
jilotr4g4q , real_T * m4inimtjpw ) { * jk5v2hweet = 0.0 ; * mfovcxxqab = 0.0
; * jilotr4g4q = 0.0 ; * m4inimtjpw = 0.0 ; } void hpjac0modf ( hcopmldpph *
const a5ree4wwe5 , real_T kj3rg4elqk , real_T * jk5v2hweet , real_T *
mfovcxxqab , real_T * jilotr4g4q , real_T * m4inimtjpw , j3ujqghva4 * localP
) { * jk5v2hweet = - kj3rg4elqk ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { * mfovcxxqab = localP -> P_0 ; *
jilotr4g4q = localP -> P_1 ; * m4inimtjpw = localP -> P_2 ; } } void
bh1yzkl0yd ( real_T rtp_omegao , ezr503rgsr * localX ) { localX -> cxk3fsuqri
= rtp_omegao ; } void fpmjbkubaz ( hcopmldpph * const a5ree4wwe5 , kyr1rhkn5p
* localXdis ) { if ( rtmGetTaskTime ( a5ree4wwe5 , 0 ) != rtmGetTStart (
a5ree4wwe5 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; } localXdis -> cxk3fsuqri = 0 ; } void ihxvxssvuy (
hcopmldpph * const a5ree4wwe5 , kyr1rhkn5p * localXdis ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
localXdis -> cxk3fsuqri = 1 ; } void bxtrkjpjgc ( real_T * fxady5f4e0 ,
real_T * e2aiz2vbp3 , real_T * b5fl0n1q0j , real_T * mcbbov3w1s , ejajaq4sjj
* localB ) { localB -> ewkfjng1l4 = 0.0 ; localB -> hcmrnlatk5 = 0.0 ; localB
-> mwz5tssn5o = 0.0 ; localB -> exbq33mn51 = 0.0 ; * mcbbov3w1s = 0.0 ; *
fxady5f4e0 = 0.0 ; localB -> dgykadrj5y = 0.0 ; localB -> aereisbden = 0.0 ;
* e2aiz2vbp3 = 0.0 ; * b5fl0n1q0j = 0.0 ; } void ndg43gdj2c ( real_T
oh55pom3vz , real_T mcytrmfgpa , real_T * fxady5f4e0 , real_T * e2aiz2vbp3 ,
real_T * b5fl0n1q0j , real_T * mcbbov3w1s , real_T rtp_br , real_T rtp_Iyy ,
ejajaq4sjj * localB , aremv21hur * localP , ezr503rgsr * localX ) { real_T
tmp ; localB -> ewkfjng1l4 = localX -> cxk3fsuqri ; localB -> hcmrnlatk5 =
localP -> P_0 * localB -> ewkfjng1l4 ; localB -> mwz5tssn5o = oh55pom3vz *
muDoubleScalarTanh ( localB -> hcmrnlatk5 ) ; localB -> exbq33mn51 = rtp_br *
localB -> ewkfjng1l4 ; * mcbbov3w1s = localB -> exbq33mn51 ; * fxady5f4e0 =
localB -> ewkfjng1l4 ; localB -> dgykadrj5y = ( localB -> mwz5tssn5o -
mcytrmfgpa ) - localB -> exbq33mn51 ; tmp = 1.0 / rtp_Iyy ; localB ->
aereisbden = tmp * localB -> dgykadrj5y ; * e2aiz2vbp3 = localB -> aereisbden
; * b5fl0n1q0j = localB -> dgykadrj5y ; } void btu025qxla ( ejajaq4sjj *
localB , ocyn02au15 * localXdot ) { localXdot -> cxk3fsuqri = localB ->
aereisbden ; } static boolean_T gppluqklue ( real_T Tout , real_T Tfmaxs ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW ) { boolean_T b_yn ; lx5pzbjgnj (
Tout , Tfmaxs , & localB -> lx5pzbjgnjw , & localDW -> lx5pzbjgnjw ) ; b_yn =
localB -> lx5pzbjgnjw . kzk2m4ro0k ; return b_yn ; } static boolean_T
g0el31fu5q ( real_T Tout , real_T Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , pymb3fi5g4 * localP ) { boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs
, & localB -> jkqilwbv4li , & localDW -> jkqilwbv4li , & localP ->
jkqilwbv4li ) ; b_yn = localB -> jkqilwbv4li . jvxaiqibhb ; return b_yn ; }
void fhk5xmrghf ( real_T rtp_omegao , dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , pymb3fi5g4 * localP , bobjql0acy * localX ) { localDW -> e230xky3og
= 0U ; localDW -> e1o4vim22a = ixrnqnhdfr ; localX -> ndg43gdj2cy .
cxk3fsuqri = 0.0 ; localB -> bzjc1unozv = 0.0 ; localB -> brky3vboqb = 0.0 ;
localB -> jym0dekt3x = 0.0 ; kk0gqeonff ( & localB -> lx5pzbjgnjw , & localP
-> lx5pzbjgnjw ) ; fvcqjct50p ( & localB -> jkqilwbv4li , & localDW ->
jkqilwbv4li , & localP -> jkqilwbv4li ) ; bh1yzkl0yd ( rtp_omegao , & localX
-> ndg43gdj2cy ) ; } void hjtn2cfetd ( dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , bobjql0acy * localX ) { localDW -> e230xky3og = 0U ; localDW ->
e1o4vim22a = ixrnqnhdfr ; localX -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; localB
-> bzjc1unozv = 0.0 ; localB -> brky3vboqb = 0.0 ; localB -> jym0dekt3x = 0.0
; } void jzxqghlsdl ( dmpx2jc2pu * localB ) { real_T ge1juwgcgo_p ; localB ->
bzjc1unozv = 0.0 ; localB -> brky3vboqb = 0.0 ; localB -> jym0dekt3x = 0.0 ;
ge1juwgcgo_p = 0.0 ; ehvsb4g243 ( & ge1juwgcgo_p , & localB -> bzjc1unozv , &
localB -> brky3vboqb , & localB -> jym0dekt3x ) ; bl2yl1izeh ( & localB ->
lx5pzbjgnjw ) ; lqozigtnao ( & localB -> jkqilwbv4li ) ; bxtrkjpjgc ( &
localB -> bzjc1unozv , & localB -> brky3vboqb , & ge1juwgcgo_p , & localB ->
jym0dekt3x , & localB -> ndg43gdj2cy ) ; } void cddyh02qci ( hcopmldpph *
const a5ree4wwe5 , real_T fgvs5banyw , real_T auareadgka , real_T ka4js1rmku
, real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP , bobjql0acy
* localX , oj3qcikvsd * localXdis ) { real_T ge1juwgcgo_e ; if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { localDW ->
hftpkxvzkr = rtmGetTaskTime ( a5ree4wwe5 , 0 ) ; if ( localDW -> e230xky3og
== 0U ) { localDW -> e230xky3og = 1U ; localX -> ndg43gdj2cy . cxk3fsuqri =
rtp_omegao ; localDW -> e1o4vim22a = ns2cbkftdn ; fpmjbkubaz ( a5ree4wwe5 , &
localXdis -> ndg43gdj2cy ) ; ndg43gdj2c ( ka4js1rmku , fgvs5banyw , & localB
-> bzjc1unozv , & localB -> brky3vboqb , & ge1juwgcgo_e , & localB ->
jym0dekt3x , rtp_br , rtp_Iyy , & localB -> ndg43gdj2cy , & localP ->
ndg43gdj2cy , & localX -> ndg43gdj2cy ) ; localDW -> ikmpdntrw1 = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
else if ( localDW -> e1o4vim22a == mcuvnmapwy ) { if ( gppluqklue (
fgvs5banyw , auareadgka , localB , localDW ) ) { localX -> ndg43gdj2cy .
cxk3fsuqri = 0.0 ; oxojvdus0j ( a5ree4wwe5 ) ; localDW -> f4leq45rjn = false
; localDW -> e1o4vim22a = ns2cbkftdn ; fpmjbkubaz ( a5ree4wwe5 , & localXdis
-> ndg43gdj2cy ) ; ndg43gdj2c ( ka4js1rmku , fgvs5banyw , & localB ->
bzjc1unozv , & localB -> brky3vboqb , & ge1juwgcgo_e , & localB -> jym0dekt3x
, rtp_br , rtp_Iyy , & localB -> ndg43gdj2cy , & localP -> ndg43gdj2cy , &
localX -> ndg43gdj2cy ) ; localDW -> ikmpdntrw1 = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( g0el31fu5q ( fgvs5banyw , auareadgka , localB , localDW , localP
) && ( muDoubleScalarAbs ( localB -> bzjc1unozv ) <= rtp_OmegaTol ) ) {
ihxvxssvuy ( a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; localDW ->
ikmpdntrw1 = false ; localDW -> e1o4vim22a = mcuvnmapwy ; mbjlcj4mlk (
a5ree4wwe5 ) ; hpjac0modf ( a5ree4wwe5 , fgvs5banyw , & ge1juwgcgo_e , &
localB -> bzjc1unozv , & localB -> brky3vboqb , & localB -> jym0dekt3x , &
localP -> hpjac0modfc ) ; localDW -> f4leq45rjn = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} if ( localDW -> e1o4vim22a == mcuvnmapwy ) { if ( ! localDW -> f4leq45rjn )
{ hpjac0modf ( a5ree4wwe5 , fgvs5banyw , & ge1juwgcgo_e , & localB ->
bzjc1unozv , & localB -> brky3vboqb , & localB -> jym0dekt3x , & localP ->
hpjac0modfc ) ; } else { localDW -> f4leq45rjn = false ; } } else if ( !
localDW -> ikmpdntrw1 ) { ndg43gdj2c ( ka4js1rmku , fgvs5banyw , & localB ->
bzjc1unozv , & localB -> brky3vboqb , & ge1juwgcgo_e , & localB -> jym0dekt3x
, rtp_br , rtp_Iyy , & localB -> ndg43gdj2cy , & localP -> ndg43gdj2cy , &
localX -> ndg43gdj2cy ) ; } else { localDW -> ikmpdntrw1 = false ; } } void
cddyh02qciTID2 ( real_T rtp_br , dmpx2jc2pu * localB , pymb3fi5g4 * localP )
{ jkqilwbv4lTID2 ( rtp_br , & localB -> jkqilwbv4li , & localP -> jkqilwbv4li
) ; } void blmwtgrkjm ( dmpx2jc2pu * localB , fmdhv4fck3 * localDW ,
pjvirltsck * localXdot ) { localXdot -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; if (
localDW -> e1o4vim22a == ns2cbkftdn ) { btu025qxla ( & localB -> ndg43gdj2cy
, & localXdot -> ndg43gdj2cy ) ; } if ( localDW -> e1o4vim22a == mcuvnmapwy )
{ if ( localDW -> f4leq45rjn ) { localDW -> f4leq45rjn = false ; } } else if
( localDW -> ikmpdntrw1 ) { localDW -> ikmpdntrw1 = false ; } } static
boolean_T k5qdrctgwd ( real_T Tout , real_T Tfmaxs , gzahetipq4 * localB ,
epqdxq1edn * localDW ) { boolean_T b_yn ; lx5pzbjgnj ( Tout , Tfmaxs , &
localB -> aqualkdqvn , & localDW -> aqualkdqvn ) ; b_yn = localB ->
aqualkdqvn . kzk2m4ro0k ; return b_yn ; } static boolean_T oknnk3qrza (
real_T Tout , real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn * localDW ,
eyoob242x4 * localP ) { boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs , &
localB -> i5fcczml0p , & localDW -> i5fcczml0p , & localP -> i5fcczml0p ) ;
b_yn = localB -> i5fcczml0p . jvxaiqibhb ; return b_yn ; } void efyr52spdx (
real_T rtp_omegao , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 *
localP , jipem2r5u4 * localX ) { localDW -> aqrptm0tku = 0U ; localDW ->
od5f0hbwjo = nrvxfifrf3 ; localX -> fkdt002bwx . cxk3fsuqri = 0.0 ; localB ->
iztgeaiw2b = 0.0 ; localB -> ovggp1qwn3 = 0.0 ; localB -> a134j1egmo = 0.0 ;
kk0gqeonff ( & localB -> aqualkdqvn , & localP -> aqualkdqvn ) ; fvcqjct50p (
& localB -> i5fcczml0p , & localDW -> i5fcczml0p , & localP -> i5fcczml0p ) ;
bh1yzkl0yd ( rtp_omegao , & localX -> fkdt002bwx ) ; } void gkwx1uvgy3 (
gzahetipq4 * localB , epqdxq1edn * localDW , jipem2r5u4 * localX ) { localDW
-> aqrptm0tku = 0U ; localDW -> od5f0hbwjo = nrvxfifrf3 ; localX ->
fkdt002bwx . cxk3fsuqri = 0.0 ; localB -> iztgeaiw2b = 0.0 ; localB ->
ovggp1qwn3 = 0.0 ; localB -> a134j1egmo = 0.0 ; } void p3l4kwjfse (
gzahetipq4 * localB ) { real_T kokcvpiiky_p ; localB -> iztgeaiw2b = 0.0 ;
localB -> ovggp1qwn3 = 0.0 ; localB -> a134j1egmo = 0.0 ; kokcvpiiky_p = 0.0
; ehvsb4g243 ( & kokcvpiiky_p , & localB -> iztgeaiw2b , & localB ->
ovggp1qwn3 , & localB -> a134j1egmo ) ; bl2yl1izeh ( & localB -> aqualkdqvn )
; lqozigtnao ( & localB -> i5fcczml0p ) ; bxtrkjpjgc ( & localB -> iztgeaiw2b
, & localB -> ovggp1qwn3 , & kokcvpiiky_p , & localB -> a134j1egmo , & localB
-> fkdt002bwx ) ; } void b5prwuabwt ( hcopmldpph * const a5ree4wwe5 , real_T
kx4svy31tg , real_T br5yrlp4to , real_T dq54xdamlz , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , gzahetipq4 * localB ,
epqdxq1edn * localDW , eyoob242x4 * localP , jipem2r5u4 * localX , mngph55n5r
* localXdis ) { real_T kokcvpiiky_e ; if ( ssIsModeUpdateTimeStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ) { localDW -> ljqqhws3qf = rtmGetTaskTime (
a5ree4wwe5 , 0 ) ; if ( localDW -> aqrptm0tku == 0U ) { localDW -> aqrptm0tku
= 1U ; localX -> fkdt002bwx . cxk3fsuqri = rtp_omegao ; localDW -> od5f0hbwjo
= ojhcgwmuav ; fpmjbkubaz ( a5ree4wwe5 , & localXdis -> fkdt002bwx ) ;
ndg43gdj2c ( dq54xdamlz , kx4svy31tg , & localB -> iztgeaiw2b , & localB ->
ovggp1qwn3 , & kokcvpiiky_e , & localB -> a134j1egmo , rtp_br , rtp_Iyy , &
localB -> fkdt002bwx , & localP -> fkdt002bwx , & localX -> fkdt002bwx ) ;
localDW -> kevuk2jdkp = true ; ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } else if ( localDW -> od5f0hbwjo ==
fygjrc0bwn ) { if ( k5qdrctgwd ( kx4svy31tg , br5yrlp4to , localB , localDW )
) { localX -> fkdt002bwx . cxk3fsuqri = 0.0 ; oxojvdus0j ( a5ree4wwe5 ) ;
localDW -> hgortb0uau = false ; localDW -> od5f0hbwjo = ojhcgwmuav ;
fpmjbkubaz ( a5ree4wwe5 , & localXdis -> fkdt002bwx ) ; ndg43gdj2c (
dq54xdamlz , kx4svy31tg , & localB -> iztgeaiw2b , & localB -> ovggp1qwn3 , &
kokcvpiiky_e , & localB -> a134j1egmo , rtp_br , rtp_Iyy , & localB ->
fkdt002bwx , & localP -> fkdt002bwx , & localX -> fkdt002bwx ) ; localDW ->
kevuk2jdkp = true ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } } else if ( oknnk3qrza ( kx4svy31tg , br5yrlp4to ,
localB , localDW , localP ) && ( muDoubleScalarAbs ( localB -> iztgeaiw2b )
<= rtp_OmegaTol ) ) { ihxvxssvuy ( a5ree4wwe5 , & localXdis -> fkdt002bwx ) ;
localDW -> kevuk2jdkp = false ; localDW -> od5f0hbwjo = fygjrc0bwn ;
mbjlcj4mlk ( a5ree4wwe5 ) ; hpjac0modf ( a5ree4wwe5 , kx4svy31tg , &
kokcvpiiky_e , & localB -> iztgeaiw2b , & localB -> ovggp1qwn3 , & localB ->
a134j1egmo , & localP -> fsjpudim4x ) ; localDW -> hgortb0uau = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} if ( localDW -> od5f0hbwjo == fygjrc0bwn ) { if ( ! localDW -> hgortb0uau )
{ hpjac0modf ( a5ree4wwe5 , kx4svy31tg , & kokcvpiiky_e , & localB ->
iztgeaiw2b , & localB -> ovggp1qwn3 , & localB -> a134j1egmo , & localP ->
fsjpudim4x ) ; } else { localDW -> hgortb0uau = false ; } } else if ( !
localDW -> kevuk2jdkp ) { ndg43gdj2c ( dq54xdamlz , kx4svy31tg , & localB ->
iztgeaiw2b , & localB -> ovggp1qwn3 , & kokcvpiiky_e , & localB -> a134j1egmo
, rtp_br , rtp_Iyy , & localB -> fkdt002bwx , & localP -> fkdt002bwx , &
localX -> fkdt002bwx ) ; } else { localDW -> kevuk2jdkp = false ; } } void
b5prwuabwtTID2 ( real_T rtp_br , gzahetipq4 * localB , eyoob242x4 * localP )
{ jkqilwbv4lTID2 ( rtp_br , & localB -> i5fcczml0p , & localP -> i5fcczml0p )
; } void dq1cbs3e5h ( gzahetipq4 * localB , epqdxq1edn * localDW , fvwoypcxq5
* localXdot ) { localXdot -> fkdt002bwx . cxk3fsuqri = 0.0 ; if ( localDW ->
od5f0hbwjo == ojhcgwmuav ) { btu025qxla ( & localB -> fkdt002bwx , &
localXdot -> fkdt002bwx ) ; } if ( localDW -> od5f0hbwjo == fygjrc0bwn ) { if
( localDW -> hgortb0uau ) { localDW -> hgortb0uau = false ; } } else if (
localDW -> kevuk2jdkp ) { localDW -> kevuk2jdkp = false ; } } void fzkpqsvdo4
( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW ) { if ( (
ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 12 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 12 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T childDimsArray4 [ 1 ] = {
1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; int_T childDimsArray6 [ 1 ] = { 1
} ; int_T childDimsArray7 [ 1 ] = { 1 } ; int_T childDimsArray8 [ 1 ] = { 1 }
; int_T childDimsArray9 [ 1 ] = { 1 } ; int_T childDimsArray10 [ 1 ] = { 1 }
; int_T childDimsArray11 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrRoad" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrAxlTrq" ) ; leafElInfo [
1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFz" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrSlip" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo
[ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyRoll" ) ; leafElInfo
[ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims . dimensions =
childDimsArray4 ; leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 1
; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyBrk" ) ; leafElInfo [ 5 ] . dims
. nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrMyb" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo
[ 6 ] . dims . dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 1 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFzDamp" ) ; leafElInfo
[ 7 ] . dims . nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions =
childDimsArray7 ; leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 7 ] . complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 0
; leafElInfo [ 7 ] . units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 8 ] . hDataType = hDT ; leafElInfo [ 8 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredzdot" ) ; leafElInfo [ 8 ] . dims
. nDims = 1 ; leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ;
leafElInfo [ 8 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] .
complexity = REAL ; leafElInfo [ 8 ] . isLinearInterp = 0 ; leafElInfo [ 8 ]
. units = leafUnits [ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
".PwrStored.PwrStoredq" ) ; leafElInfo [ 9 ] . dims . nDims = 1 ; leafElInfo
[ 9 ] . dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ; leafElInfo [ 9
] . isLinearInterp = 1 ; leafElInfo [ 9 ] . units = leafUnits [ 9 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ] . hDataType = hDT ; leafElInfo [ 10 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsFzSprng" ) ;
leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims . dimensions
= childDimsArray10 ; leafElInfo [ 10 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [ 10 ] . isLinearInterp =
1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredGrvty" ) ;
leafElInfo [ 11 ] . dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions
= childDimsArray11 ; leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp =
0 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; } srcInfo .
numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) &
blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath =
subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName = sigName ;
srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"d166fffb-f997-4f4f-85a3-541effe1b365" , 12 , leafElInfo , & localDW ->
djecxjao2c . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
djecxjao2c . AQHandles [ 0 ] , 12 * sizeof ( & localDW -> djecxjao2c .
AQHandles [ 0 ] ) ) ; if ( localDW -> djecxjao2c . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 5
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 6 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 6
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 7 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 7 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 7
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 8 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 8
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 9 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 9 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [ 9
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 10 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [
10 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> djecxjao2c . AQHandles [ 11 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> djecxjao2c . AQHandles [ 11 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> djecxjao2c . AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> djecxjao2c . AQHandles [
11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> djecxjao2c .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if (
( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 12 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 12 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T childDimsArray4 [ 1 ] = {
1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; int_T childDimsArray6 [ 1 ] = { 1
} ; int_T childDimsArray7 [ 1 ] = { 1 } ; int_T childDimsArray8 [ 1 ] = { 1 }
; int_T childDimsArray9 [ 1 ] = { 1 } ; int_T childDimsArray10 [ 1 ] = { 1 }
; int_T childDimsArray11 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrRoad" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrAxlTrq" ) ; leafElInfo [
1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFz" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrSlip" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo
[ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyRoll" ) ; leafElInfo
[ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims . dimensions =
childDimsArray4 ; leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 1
; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyBrk" ) ; leafElInfo [ 5 ] . dims
. nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrMyb" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo
[ 6 ] . dims . dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 1 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFzDamp" ) ; leafElInfo
[ 7 ] . dims . nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions =
childDimsArray7 ; leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 7 ] . complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 0
; leafElInfo [ 7 ] . units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 8 ] . hDataType = hDT ; leafElInfo [ 8 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredzdot" ) ; leafElInfo [ 8 ] . dims
. nDims = 1 ; leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ;
leafElInfo [ 8 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] .
complexity = REAL ; leafElInfo [ 8 ] . isLinearInterp = 0 ; leafElInfo [ 8 ]
. units = leafUnits [ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
".PwrStored.PwrStoredq" ) ; leafElInfo [ 9 ] . dims . nDims = 1 ; leafElInfo
[ 9 ] . dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ; leafElInfo [ 9
] . isLinearInterp = 1 ; leafElInfo [ 9 ] . units = leafUnits [ 9 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ] . hDataType = hDT ; leafElInfo [ 10 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsFzSprng" ) ;
leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims . dimensions
= childDimsArray10 ; leafElInfo [ 10 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [ 10 ] . isLinearInterp =
1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredGrvty" ) ;
leafElInfo [ 11 ] . dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions
= childDimsArray11 ; leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp =
0 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; } srcInfo .
numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) &
blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath =
subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName = sigName ;
srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"3253052d-28a7-45d5-b7a9-4ffc9ba6729c" , 12 , leafElInfo , & localDW ->
iaya40yldr . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
iaya40yldr . AQHandles [ 0 ] , 12 * sizeof ( & localDW -> iaya40yldr .
AQHandles [ 0 ] ) ) ; if ( localDW -> iaya40yldr . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 5
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 6 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 6
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 7 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 7 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 7
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 8 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 8
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 9 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 9 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [ 9
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 10 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [
10 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr . AQHandles [ 11 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr . AQHandles [ 11 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr . AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr . AQHandles [
11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if (
( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 12 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 12 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T childDimsArray4 [ 1 ] = {
1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; int_T childDimsArray6 [ 1 ] = { 1
} ; int_T childDimsArray7 [ 1 ] = { 1 } ; int_T childDimsArray8 [ 1 ] = { 1 }
; int_T childDimsArray9 [ 1 ] = { 1 } ; int_T childDimsArray10 [ 1 ] = { 1 }
; int_T childDimsArray11 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrRoad" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrAxlTrq" ) ; leafElInfo [
1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFz" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrSlip" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo
[ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyRoll" ) ; leafElInfo
[ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims . dimensions =
childDimsArray4 ; leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 1
; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyBrk" ) ; leafElInfo [ 5 ] . dims
. nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrMyb" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo
[ 6 ] . dims . dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 1 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFzDamp" ) ; leafElInfo
[ 7 ] . dims . nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions =
childDimsArray7 ; leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 7 ] . complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 0
; leafElInfo [ 7 ] . units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 8 ] . hDataType = hDT ; leafElInfo [ 8 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredzdot" ) ; leafElInfo [ 8 ] . dims
. nDims = 1 ; leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ;
leafElInfo [ 8 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] .
complexity = REAL ; leafElInfo [ 8 ] . isLinearInterp = 0 ; leafElInfo [ 8 ]
. units = leafUnits [ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
".PwrStored.PwrStoredq" ) ; leafElInfo [ 9 ] . dims . nDims = 1 ; leafElInfo
[ 9 ] . dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ; leafElInfo [ 9
] . isLinearInterp = 1 ; leafElInfo [ 9 ] . units = leafUnits [ 9 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ] . hDataType = hDT ; leafElInfo [ 10 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsFzSprng" ) ;
leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims . dimensions
= childDimsArray10 ; leafElInfo [ 10 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [ 10 ] . isLinearInterp =
1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredGrvty" ) ;
leafElInfo [ 11 ] . dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions
= childDimsArray11 ; leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp =
0 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; } srcInfo .
numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) &
blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath =
subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName = sigName ;
srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"b2bf15db-f329-4a2e-8d1d-d9b0fa2fee2b" , 12 , leafElInfo , & localDW ->
f0jgc0q4fs . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
f0jgc0q4fs . AQHandles [ 0 ] , 12 * sizeof ( & localDW -> f0jgc0q4fs .
AQHandles [ 0 ] ) ) ; if ( localDW -> f0jgc0q4fs . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 5
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 6 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 6
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 7 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 7 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 7
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 8 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 8
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 9 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 9 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [ 9
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 10 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [
10 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> f0jgc0q4fs . AQHandles [ 11 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> f0jgc0q4fs . AQHandles [ 11 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> f0jgc0q4fs . AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> f0jgc0q4fs . AQHandles [
11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> f0jgc0q4fs .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if (
( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 12 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 12 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T childDimsArray4 [ 1 ] = {
1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; int_T childDimsArray6 [ 1 ] = { 1
} ; int_T childDimsArray7 [ 1 ] = { 1 } ; int_T childDimsArray8 [ 1 ] = { 1 }
; int_T childDimsArray9 [ 1 ] = { 1 } ; int_T childDimsArray10 [ 1 ] = { 1 }
; int_T childDimsArray11 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrRoad" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrAxlTrq" ) ; leafElInfo [
1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFz" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrSlip" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo
[ 3 ] . dims . dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyRoll" ) ; leafElInfo
[ 4 ] . dims . nDims = 1 ; leafElInfo [ 4 ] . dims . dimensions =
childDimsArray4 ; leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 1
; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMyBrk" ) ; leafElInfo [ 5 ] . dims
. nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ;
leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] .
complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ]
. units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 6 ]
. hDataType = hDT ; leafElInfo [ 6 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrMyb" ) ; leafElInfo [ 6 ] . dims . nDims = 1 ; leafElInfo
[ 6 ] . dims . dimensions = childDimsArray6 ; leafElInfo [ 6 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] . complexity = REAL ; leafElInfo [ 6
] . isLinearInterp = 1 ; leafElInfo [ 6 ] . units = leafUnits [ 6 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ] . hDataType = hDT ; leafElInfo [ 7 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFzDamp" ) ; leafElInfo
[ 7 ] . dims . nDims = 1 ; leafElInfo [ 7 ] . dims . dimensions =
childDimsArray7 ; leafElInfo [ 7 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 7 ] . complexity = REAL ; leafElInfo [ 7 ] . isLinearInterp = 0
; leafElInfo [ 7 ] . units = leafUnits [ 7 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 8 ] . hDataType = hDT ; leafElInfo [ 8 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredzdot" ) ; leafElInfo [ 8 ] . dims
. nDims = 1 ; leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ;
leafElInfo [ 8 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] .
complexity = REAL ; leafElInfo [ 8 ] . isLinearInterp = 0 ; leafElInfo [ 8 ]
. units = leafUnits [ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
".PwrStored.PwrStoredq" ) ; leafElInfo [ 9 ] . dims . nDims = 1 ; leafElInfo
[ 9 ] . dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ; leafElInfo [ 9
] . isLinearInterp = 1 ; leafElInfo [ 9 ] . units = leafUnits [ 9 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ] . hDataType = hDT ; leafElInfo [ 10 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsFzSprng" ) ;
leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo [ 10 ] . dims . dimensions
= childDimsArray10 ; leafElInfo [ 10 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 10 ] . complexity = REAL ; leafElInfo [ 10 ] . isLinearInterp =
1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredGrvty" ) ;
leafElInfo [ 11 ] . dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions
= childDimsArray11 ; leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp =
0 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; } srcInfo .
numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) &
blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath =
subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName = sigName ;
srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"3505fe0f-7042-4b07-a11c-deaa263f6dc4" , 12 , leafElInfo , & localDW ->
iaya40yldr2 . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
iaya40yldr2 . AQHandles [ 0 ] , 12 * sizeof ( & localDW -> iaya40yldr2 .
AQHandles [ 0 ] ) ) ; if ( localDW -> iaya40yldr2 . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 4 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 5 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 6 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 6 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 7 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 7 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 7 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 8 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 8 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 9 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 9 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 9 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 10 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 10 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2 . AQHandles [ 11 ] ,
"Parameter" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2 . AQHandles [ 11 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2 . AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2 . AQHandles
[ 11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2 .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if (
( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 17 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 17 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; int_T
childDimsArray4 [ 1 ] = { 1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; int_T
childDimsArray6 [ 1 ] = { 1 } ; int_T childDimsArray7 [ 1 ] = { 1 } ; int_T
childDimsArray8 [ 1 ] = { 1 } ; int_T childDimsArray9 [ 1 ] = { 1 } ; int_T
childDimsArray10 [ 1 ] = { 1 } ; int_T childDimsArray11 [ 1 ] = { 1 } ; int_T
childDimsArray12 [ 1 ] = { 1 } ; int_T childDimsArray13 [ 1 ] = { 1 } ; int_T
childDimsArray14 [ 1 ] = { 1 } ; int_T childDimsArray15 [ 1 ] = { 1 } ; int_T
childDimsArray16 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrFxExt" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [
0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFzExt" ) ; leafElInfo [ 1
] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1
; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrMyExt" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [
2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrFwF" ) ; leafElInfo [ 3 ]
. dims . nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 4 ]
. hDataType = hDT ; leafElInfo [ 4 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrFwR" ) ; leafElInfo [ 4 ] . dims . nDims = 1 ; leafElInfo [ 4
] . dims . dimensions = childDimsArray4 ; leafElInfo [ 4 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] . complexity = REAL ; leafElInfo [ 4
] . isLinearInterp = 1 ; leafElInfo [ 4 ] . units = leafUnits [ 4 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 5 ] . hDataType = hDT ; leafElInfo [ 5 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFsF" ) ; leafElInfo [
5 ] . dims . nDims = 1 ; leafElInfo [ 5 ] . dims . dimensions =
childDimsArray5 ; leafElInfo [ 5 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 5 ] . complexity = REAL ; leafElInfo [ 5 ] . isLinearInterp = 1
; leafElInfo [ 5 ] . units = leafUnits [ 5 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 6 ] . hDataType = hDT ; leafElInfo [ 6 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrFsR" ) ; leafElInfo [ 6 ] . dims .
nDims = 1 ; leafElInfo [ 6 ] . dims . dimensions = childDimsArray6 ;
leafElInfo [ 6 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 6 ] .
complexity = REAL ; leafElInfo [ 6 ] . isLinearInterp = 1 ; leafElInfo [ 6 ]
. units = leafUnits [ 6 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 7 ]
. hDataType = hDT ; leafElInfo [ 7 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrFxDrag" ) ; leafElInfo [ 7 ] . dims . nDims = 1 ;
leafElInfo [ 7 ] . dims . dimensions = childDimsArray7 ; leafElInfo [ 7 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 7 ] . complexity = REAL ;
leafElInfo [ 7 ] . isLinearInterp = 1 ; leafElInfo [ 7 ] . units = leafUnits
[ 7 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 8 ]
. hDataType = hDT ; leafElInfo [ 8 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrFzDrag" ) ; leafElInfo [ 8 ] . dims . nDims = 1 ;
leafElInfo [ 8 ] . dims . dimensions = childDimsArray8 ; leafElInfo [ 8 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 8 ] . complexity = REAL ;
leafElInfo [ 8 ] . isLinearInterp = 1 ; leafElInfo [ 8 ] . units = leafUnits
[ 8 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 9 ]
. hDataType = hDT ; leafElInfo [ 9 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrMyDrag" ) ; leafElInfo [ 9 ] . dims . nDims = 1 ;
leafElInfo [ 9 ] . dims . dimensions = childDimsArray9 ; leafElInfo [ 9 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 9 ] . complexity = REAL ;
leafElInfo [ 9 ] . isLinearInterp = 1 ; leafElInfo [ 9 ] . units = leafUnits
[ 9 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 10 ]
. hDataType = hDT ; leafElInfo [ 10 ] . signalName = sdiGetLabelFromChars (
".PwrNotTrnsfrd.PwrFsb" ) ; leafElInfo [ 10 ] . dims . nDims = 1 ; leafElInfo
[ 10 ] . dims . dimensions = childDimsArray10 ; leafElInfo [ 10 ] . dimsMode
= DIMENSIONS_MODE_FIXED ; leafElInfo [ 10 ] . complexity = REAL ; leafElInfo
[ 10 ] . isLinearInterp = 1 ; leafElInfo [ 10 ] . units = leafUnits [ 10 ] ;
} { sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 11 ] . hDataType = hDT ; leafElInfo [ 11 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredGrvty" ) ;
leafElInfo [ 11 ] . dims . nDims = 1 ; leafElInfo [ 11 ] . dims . dimensions
= childDimsArray11 ; leafElInfo [ 11 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 11 ] . complexity = REAL ; leafElInfo [ 11 ] . isLinearInterp =
1 ; leafElInfo [ 11 ] . units = leafUnits [ 11 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 12 ] . hDataType = hDT ; leafElInfo [ 12 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredxdot" ) ;
leafElInfo [ 12 ] . dims . nDims = 1 ; leafElInfo [ 12 ] . dims . dimensions
= childDimsArray12 ; leafElInfo [ 12 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 12 ] . complexity = REAL ; leafElInfo [ 12 ] . isLinearInterp =
1 ; leafElInfo [ 12 ] . units = leafUnits [ 12 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 13 ] . hDataType = hDT ; leafElInfo [ 13 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredzdot" ) ;
leafElInfo [ 13 ] . dims . nDims = 1 ; leafElInfo [ 13 ] . dims . dimensions
= childDimsArray13 ; leafElInfo [ 13 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 13 ] . complexity = REAL ; leafElInfo [ 13 ] . isLinearInterp =
1 ; leafElInfo [ 13 ] . units = leafUnits [ 13 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 14 ] . hDataType = hDT ; leafElInfo [ 14 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredq" ) ; leafElInfo
[ 14 ] . dims . nDims = 1 ; leafElInfo [ 14 ] . dims . dimensions =
childDimsArray14 ; leafElInfo [ 14 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 14 ] . complexity = REAL ; leafElInfo [ 14 ] . isLinearInterp =
1 ; leafElInfo [ 14 ] . units = leafUnits [ 14 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 15 ] . hDataType = hDT ; leafElInfo [ 15 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsFzSprng" ) ;
leafElInfo [ 15 ] . dims . nDims = 1 ; leafElInfo [ 15 ] . dims . dimensions
= childDimsArray15 ; leafElInfo [ 15 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 15 ] . complexity = REAL ; leafElInfo [ 15 ] . isLinearInterp =
1 ; leafElInfo [ 15 ] . units = leafUnits [ 15 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 16 ] . hDataType = hDT ; leafElInfo [ 16 ]
. signalName = sdiGetLabelFromChars ( ".PwrStored.PwrStoredFsRzSprng" ) ;
leafElInfo [ 16 ] . dims . nDims = 1 ; leafElInfo [ 16 ] . dims . dimensions
= childDimsArray16 ; leafElInfo [ 16 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 16 ] . complexity = REAL ; leafElInfo [ 16 ] . isLinearInterp =
1 ; leafElInfo [ 16 ] . units = leafUnits [ 16 ] ; } srcInfo .
numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) &
blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath =
subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName = sigName ;
srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"a15e98f7-0e25-462b-ade8-4832483888ea" , 17 , leafElInfo , & localDW ->
gl1a1300nz . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
gl1a1300nz . AQHandles [ 0 ] , 17 * sizeof ( & localDW -> gl1a1300nz .
AQHandles [ 0 ] ) ) ; if ( localDW -> gl1a1300nz . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 5
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 6 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 6 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 6
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 6 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 7 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 7 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 7
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 7 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 8 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 8 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 8
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 8 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 9 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 9 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [ 9
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 9 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 10 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 10 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
10 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 10 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 11 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 11 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
11 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 11 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 12 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 12 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 12 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
12 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 12 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 13 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 13 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 13 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
13 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 13 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 14 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 14 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 14 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
14 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 14 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 15 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 15 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 15 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
15 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 15 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> gl1a1300nz . AQHandles [ 16 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> gl1a1300nz . AQHandles [ 16 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> gl1a1300nz . AQHandles [ 16 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> gl1a1300nz . AQHandles [
16 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> gl1a1300nz .
AQHandles [ 16 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; sdiFreeName ( leafElInfo [ 6 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 7 ] . signalName ) ; sdiFreeName ( leafElInfo [ 8
] . signalName ) ; sdiFreeName ( leafElInfo [ 9 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 10 ] . signalName ) ; sdiFreeName ( leafElInfo [
11 ] . signalName ) ; sdiFreeName ( leafElInfo [ 12 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 13 ] . signalName ) ; sdiFreeName ( leafElInfo [
14 ] . signalName ) ; sdiFreeName ( leafElInfo [ 15 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 16 ] . signalName ) ; } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrR" ) ; leafElInfo [ 0 ] .
dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrC" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ]
. dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrDampLoss" ) ;
leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredShft" ) ; leafElInfo [ 3 ] . dims
. nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"6d3b74f8-1b71-428a-bdf4-e7c68ccf2d83" , 4 , leafElInfo , & localDW ->
hxmqkbfltt . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
hxmqkbfltt . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> hxmqkbfltt .
AQHandles [ 0 ] ) ) ; if ( localDW -> hxmqkbfltt . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> hxmqkbfltt . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> hxmqkbfltt . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> hxmqkbfltt . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> hxmqkbfltt . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> hxmqkbfltt .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> hxmqkbfltt . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> hxmqkbfltt . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> hxmqkbfltt . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> hxmqkbfltt . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> hxmqkbfltt .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> hxmqkbfltt . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> hxmqkbfltt . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> hxmqkbfltt . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> hxmqkbfltt . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> hxmqkbfltt .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> hxmqkbfltt . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> hxmqkbfltt . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> hxmqkbfltt . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> hxmqkbfltt . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> hxmqkbfltt .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode (
a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrR" ) ; leafElInfo [ 0 ] .
dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrC" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ]
. dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrDampLoss" ) ;
leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredShft" ) ; leafElInfo [ 3 ] . dims
. nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"56b4da78-e4a5-4210-975a-4ea149d6876a" , 4 , leafElInfo , & localDW ->
iaya40yldr2f . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
iaya40yldr2f . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> iaya40yldr2f .
AQHandles [ 0 ] ) ) ; if ( localDW -> iaya40yldr2f . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2f . AQHandles [ 0 ]
, "Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2f . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2f . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2f . AQHandles
[ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2f .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2f . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2f . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2f . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2f . AQHandles
[ 1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2f .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2f . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2f . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2f . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2f . AQHandles
[ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2f .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> iaya40yldr2f . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> iaya40yldr2f . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> iaya40yldr2f . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> iaya40yldr2f . AQHandles
[ 3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iaya40yldr2f .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode (
a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrR" ) ; leafElInfo [ 0 ] .
dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrC" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ]
. dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrDampLoss" ) ;
leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredShft" ) ; leafElInfo [ 3 ] . dims
. nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"840da0b5-9150-4621-bd63-1ffcab4a4e90" , 4 , leafElInfo , & localDW ->
kjwyipugjd . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
kjwyipugjd . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> kjwyipugjd .
AQHandles [ 0 ] ) ) ; if ( localDW -> kjwyipugjd . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> kjwyipugjd . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kjwyipugjd . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kjwyipugjd . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kjwyipugjd . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kjwyipugjd .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kjwyipugjd . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kjwyipugjd . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kjwyipugjd . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kjwyipugjd . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kjwyipugjd .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kjwyipugjd . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kjwyipugjd . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kjwyipugjd . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kjwyipugjd . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kjwyipugjd .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kjwyipugjd . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kjwyipugjd . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kjwyipugjd . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kjwyipugjd . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kjwyipugjd .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode (
a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 6 ] = { "W" , "W" ,
"W" , "W" , "W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 6 ] ;
int_T childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ;
int_T childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ;
int_T childDimsArray4 [ 1 ] = { 1 } ; int_T childDimsArray5 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrDriveshft" ) ; leafElInfo
[ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions =
childDimsArray0 ; leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1
; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] . signalName =
sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrAxl1" ) ; leafElInfo [ 1 ] . dims .
nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ;
leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrAxl2" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [
2 ] . dims . dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 1 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrMechLoss" ) ;
leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions =
childDimsArray3 ; leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1
; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 4 ] . hDataType = hDT ; leafElInfo [ 4 ] . signalName =
sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrDampLoss" ) ; leafElInfo [ 4 ] .
dims . nDims = 1 ; leafElInfo [ 4 ] . dims . dimensions = childDimsArray4 ;
leafElInfo [ 4 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 4 ] .
complexity = REAL ; leafElInfo [ 4 ] . isLinearInterp = 1 ; leafElInfo [ 4 ]
. units = leafUnits [ 4 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 5 ]
. hDataType = hDT ; leafElInfo [ 5 ] . signalName = sdiGetLabelFromChars (
".PwrStored.PwrStoredShft" ) ; leafElInfo [ 5 ] . dims . nDims = 1 ;
leafElInfo [ 5 ] . dims . dimensions = childDimsArray5 ; leafElInfo [ 5 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 5 ] . complexity = REAL ;
leafElInfo [ 5 ] . isLinearInterp = 1 ; leafElInfo [ 5 ] . units = leafUnits
[ 5 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"121a42f8-1842-4f5d-a319-894da13ba475" , 6 , leafElInfo , & localDW ->
d0spjcrzgo . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
d0spjcrzgo . AQHandles [ 0 ] , 6 * sizeof ( & localDW -> d0spjcrzgo .
AQHandles [ 0 ] ) ) ; if ( localDW -> d0spjcrzgo . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 4 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 4 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 4
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 4 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> d0spjcrzgo . AQHandles [ 5 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> d0spjcrzgo . AQHandles [ 5 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> d0spjcrzgo . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> d0spjcrzgo . AQHandles [ 5
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> d0spjcrzgo .
AQHandles [ 5 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; sdiFreeName ( leafElInfo [ 4 ] . signalName ) ; sdiFreeName ( leafElInfo
[ 5 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } if (
( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrR" ) ; leafElInfo [ 0 ] .
dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrC" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ]
. dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrDampLoss" ) ;
leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredShft" ) ; leafElInfo [ 3 ] . dims
. nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 1 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , a5ree4wwe5
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"92e0bf34-1a79-4f82-81c3-5f118841259a" , 4 , leafElInfo , & localDW ->
kd45pbt3ye . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( a5ree4wwe5 -> _mdlRefSfcnS , & localDW ->
kd45pbt3ye . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> kd45pbt3ye .
AQHandles [ 0 ] ) ) ; if ( localDW -> kd45pbt3ye . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> kd45pbt3ye . AQHandles [ 0 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kd45pbt3ye . AQHandles [ 0 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kd45pbt3ye . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kd45pbt3ye . AQHandles [ 0
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kd45pbt3ye .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kd45pbt3ye . AQHandles [ 1 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kd45pbt3ye . AQHandles [ 1 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kd45pbt3ye . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kd45pbt3ye . AQHandles [ 1
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kd45pbt3ye .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kd45pbt3ye . AQHandles [ 2 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kd45pbt3ye . AQHandles [ 2 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kd45pbt3ye . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kd45pbt3ye . AQHandles [ 2
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kd45pbt3ye .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> kd45pbt3ye . AQHandles [ 3 ] ,
"Continuous" , 0.0 , rtmGetTFinal ( a5ree4wwe5 ) ) ; sdiSetSignalRefRate (
localDW -> kd45pbt3ye . AQHandles [ 3 ] , 0.0 ) ; sdiSetRunStartTime (
localDW -> kd45pbt3ye . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) )
; sdiAsyncRepoSetSignalExportSettings ( localDW -> kd45pbt3ye . AQHandles [ 3
] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kd45pbt3ye .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } } void eqyc2wn3m1 (
hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW ,
edp3webv0p * localX ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; boolean_T
tmp ; localDW -> jg0qnrcaox = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) {
localX -> ncmmxrrgvr [ 0 ] = 0.0 ; localX -> ncmmxrrgvr [ 1 ] = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
jg0qnrcaox = ! tmp ; } else { localDW -> jg0qnrcaox = 1 ; } localX ->
m2l0c5x3qt = 0.0 ; } localX -> d5vyxqghh0 [ 0 ] = akbgnuupjz . P_102 ; localX
-> noatsby3ej [ 0 ] = akbgnuupjz . P_90 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] =
akbgnuupjz . P_102 ; localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_90 [ 1 ] ;
localX -> in4ouu3rj0 = akbgnuupjz . P_94 ; localX -> fmsvpqigtm = akbgnuupjz
. P_93 ; localDW -> jdfraz14md = akbgnuupjz . P_109 ; localDW -> nz2ycl5px5 =
1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
nz2ycl5px5 = ! tmp ; } else { localDW -> nz2ycl5px5 = 1 ; } localX ->
pclrccjq3k = 0.0 ; } localX -> jphiqvsdq1 = akbgnuupjz . P_95 ; localX ->
neffdf1vy0 = akbgnuupjz . P_110 ; localX -> exw1srp224 = akbgnuupjz . P_116 ;
localX -> lwzedupgn2 = akbgnuupjz . P_99 ; localDW -> jrm4ykfn0y = akbgnuupjz
. P_127 ; localDW -> huxlbxlfje = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 )
) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
huxlbxlfje = ! tmp ; } else { localDW -> huxlbxlfje = 1 ; } localX ->
nn4yztzwjs [ 0 ] = 0.0 ; localX -> nn4yztzwjs [ 1 ] = 0.0 ; } localX ->
avikqegq2n = akbgnuupjz . P_96 ; localX -> ifgziugp0p = akbgnuupjz . P_85 ;
localDW -> hs0twsijyj = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
hs0twsijyj = ! tmp ; } else { localDW -> hs0twsijyj = 1 ; } } for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { fhk5xmrghf ( akbgnuupjz .
P_86 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & akbgnuupjz . nod5vp1cyy .
fate2u2iog , & localX -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for (
ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { efyr52spdx ( akbgnuupjz .
P_87 , & localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localDW ->
eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & akbgnuupjz . eblhn1q21v .
fd4qjwy5lm , & localX -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void
er1nyhy4k5 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs
* localDW , edp3webv0p * localX ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ;
boolean_T tmp ; localDW -> jg0qnrcaox = 1 ; if ( rtmIsFirstInitCond (
a5ree4wwe5 ) ) { localX -> ncmmxrrgvr [ 0 ] = 0.0 ; localX -> ncmmxrrgvr [ 1
] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
jg0qnrcaox = ! tmp ; } else { localDW -> jg0qnrcaox = 1 ; } localX ->
m2l0c5x3qt = 0.0 ; } localX -> d5vyxqghh0 [ 0 ] = akbgnuupjz . P_102 ; localX
-> noatsby3ej [ 0 ] = akbgnuupjz . P_90 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] =
akbgnuupjz . P_102 ; localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_90 [ 1 ] ;
localX -> in4ouu3rj0 = akbgnuupjz . P_94 ; localX -> fmsvpqigtm = akbgnuupjz
. P_93 ; localDW -> jdfraz14md = akbgnuupjz . P_109 ; localDW -> nz2ycl5px5 =
1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
nz2ycl5px5 = ! tmp ; } else { localDW -> nz2ycl5px5 = 1 ; } localX ->
pclrccjq3k = 0.0 ; } localX -> jphiqvsdq1 = akbgnuupjz . P_95 ; localX ->
neffdf1vy0 = akbgnuupjz . P_110 ; localX -> exw1srp224 = akbgnuupjz . P_116 ;
localX -> lwzedupgn2 = akbgnuupjz . P_99 ; localDW -> jrm4ykfn0y = akbgnuupjz
. P_127 ; localDW -> huxlbxlfje = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 )
) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
huxlbxlfje = ! tmp ; } else { localDW -> huxlbxlfje = 1 ; } localX ->
nn4yztzwjs [ 0 ] = 0.0 ; localX -> nn4yztzwjs [ 1 ] = 0.0 ; } localX ->
avikqegq2n = akbgnuupjz . P_96 ; localX -> ifgziugp0p = akbgnuupjz . P_85 ;
localDW -> hs0twsijyj = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW ->
hs0twsijyj = ! tmp ; } else { localDW -> hs0twsijyj = 1 ; } } for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { hjtn2cfetd ( & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2
] . fate2u2iog , & localX -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for
( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { gkwx1uvgy3 ( & localB
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localDW -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm , & localX -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm ) ; } } void ka5dospcnh ( pw4f2kjo3k * localB , lvsoqlxlcs *
localDW ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ;
int32_T i ; for ( ji4pzz2y51 = 0 ; ji4pzz2y51 < 4 ; ji4pzz2y51 ++ ) { localB
-> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] = 0.0 ; localB -> izrftnejci
[ ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] = 0.0 ; localB -> izrftnejci [ ji4pzz2y51 ]
. oqgrsi0ejr [ 2 ] = 0.0 ; for ( i = 0 ; i < 9 ; i ++ ) { localB ->
izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ i ] = 0.0 ; } } for ( jzsp3rpdl2 = 0
; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { jzxqghlsdl ( & localB -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ;
ggxhvsmzpg ++ ) { p3l4kwjfse ( & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm ) ; } localB -> mlzbj1adz0 = akbgnuupjz . P_60 ; localB ->
cd1kn4apvg = akbgnuupjz . P_61 ; localDW -> kxp34i0kfp = 0 ; localDW ->
mdigxevyus = 0 ; localDW -> bbyh2lmjuh = 0 ; } void DrivetrainEv ( hcopmldpph
* const a5ree4wwe5 , const real_T * a10dw5c4tm , const real_T * ccn5sowg0n ,
const real_T * dxefyqzind , const real_T * iudgegw2lz , real_T * hk0t0gzq0m ,
real_T * jnhw4b1r4n , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p
* localX , at3vnbf5fi * localZCE , bbuzvmnhsa * localXdis ) { real_T
avgrd45txz ; real_T dokh2uzzgo ; real_T oxjq4fccss ; real_T cbdiqa4cix ;
real_T a3rxg4a3fj ; real_T aymni0n1wr ; real_T gw55nf4fmd ; real_T ieahigdibp
; real_T gflgrwl2zu ; real_T kyvzbu52za ; real_T bqrqc2qsrp ; real_T
gya5nl120o ; real_T b4vnjun04a ; real_T keo3jdvhrs ; real_T b0vplayvrj ;
real_T g12ugcc2bn ; real_T dndeqqvdtt ; real_T m2iwbhcq3n ; real_T hja4ief3rt
; real_T by2nsc5u0e ; real_T gbv1keysa1 ; real_T cexmufpll2 ; real_T
co0hnw4z10 ; real_T kedsav5mep ; real_T kh22t51mhe ; int32_T ggxhvsmzpg ;
int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ; __m128d tmp_p ; real_T fzak5q5isu_p
[ 12 ] ; real_T kq3ho01jf4_p [ 9 ] ; real_T eoghabkeo3_p [ 6 ] ; real_T
tmpForInput [ 5 ] ; real_T lnwgoxkd41_p [ 4 ] ; real_T at3c1juwld_p [ 3 ] ;
real_T bgloav51mm_p [ 3 ] ; real_T biqfhqq1ht [ 3 ] ; real_T ehcact3szt [ 3 ]
; real_T fyrdkrtnna_p [ 3 ] ; real_T g3xqh113kt_p [ 3 ] ; real_T gg1apbf2wu_p
[ 3 ] ; real_T tmp [ 3 ] ; real_T cxpxuy2piu_p [ 2 ] ; real_T g3arwv4dau_p [
2 ] ; real_T hijx2gsbqe_p [ 2 ] ; real_T a1lc0bzspv_idx_0 ; real_T
a1lc0bzspv_idx_2 ; real_T aggo5314p1_p ; real_T cgf2haddsb_p ; real_T
di4vinm4lt_p ; real_T g3i4c21xsv_p ; real_T g433g0qrhs_p ; real_T
gj3a4jorjc_idx_0 ; real_T gj3a4jorjc_idx_2 ; real_T gjiwztliqd_p ; real_T
jb4mtkb30x ; real_T jxt0ik3zwq_p ; real_T jznx433nsh_p ; real_T
kq3ho01jf4_tmp ; real_T kq3ho01jf4_tmp_p ; real_T l2z2gmmzf0_p ; real_T
nh1w3novru ; real_T nrktqrfkmk_p ; real_T nvq24ipryj_p ; real_T
omskzwfqex_idx_0 ; real_T omskzwfqex_idx_2 ; real_T omskzwfqex_idx_3 ; real_T
otssvk1ntn_idx_0 ; real_T otssvk1ntn_idx_1 ; real_T otssvk1ntn_idx_2 ; real_T
otssvk1ntn_p ; real_T pehck35b41_p ; int32_T i ; ZCEventType zcEvent ; if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW ->
jg0qnrcaox != 0 ) { nh1w3novru = muDoubleScalarAtan2 ( akbgnuupjz . P_100 ,
akbgnuupjz . P_99 ) ; localX -> ncmmxrrgvr [ 0 ] = akbgnuupjz . P_98 *
muDoubleScalarCos ( nh1w3novru ) ; localX -> ncmmxrrgvr [ 1 ] = akbgnuupjz .
P_98 * muDoubleScalarSin ( nh1w3novru ) ; } g3arwv4dau_p [ 0 ] = localX ->
ncmmxrrgvr [ 0 ] ; g3arwv4dau_p [ 1 ] = localX -> ncmmxrrgvr [ 1 ] ; } else {
g3arwv4dau_p [ 0 ] = localX -> ncmmxrrgvr [ 0 ] ; g3arwv4dau_p [ 1 ] = localX
-> ncmmxrrgvr [ 1 ] ; } localB -> kn3kq1dbud [ 0 ] = g3arwv4dau_p [ 0 ] ;
localB -> kn3kq1dbud [ 1 ] = 0.0 ; localB -> kn3kq1dbud [ 2 ] = g3arwv4dau_p
[ 1 ] ; * hk0t0gzq0m = localB -> kn3kq1dbud [ 0 ] ; localB -> if3fq2sidt [ 0
] = 0.0 ; localB -> if3fq2sidt [ 1 ] = 0.0 ; fzak5q5isu_p [ 0 ] = - *
iudgegw2lz ; fzak5q5isu_p [ 1 ] = - 0.0 ; fzak5q5isu_p [ 2 ] = - 0.0 ;
fzak5q5isu_p [ 3 ] = 0.0 ; fzak5q5isu_p [ 4 ] = 0.0 ; di4vinm4lt_p = localX
-> in4ouu3rj0 ; fyrdkrtnna_p [ 1 ] = localX -> in4ouu3rj0 ;
muDoubleScalarSinCos ( akbgnuupjz . P_151 , & biqfhqq1ht [ 0 ] , & ehcact3szt
[ 0 ] ) ; muDoubleScalarSinCos ( localX -> in4ouu3rj0 , & biqfhqq1ht [ 1 ] ,
& ehcact3szt [ 1 ] ) ; muDoubleScalarSinCos ( akbgnuupjz . P_149 , &
biqfhqq1ht [ 2 ] , & ehcact3szt [ 2 ] ) ; kq3ho01jf4_p [ 0 ] = ehcact3szt [ 0
] * ehcact3szt [ 1 ] ; kq3ho01jf4_tmp = biqfhqq1ht [ 1 ] * biqfhqq1ht [ 2 ] ;
kq3ho01jf4_p [ 1 ] = kq3ho01jf4_tmp * ehcact3szt [ 0 ] - biqfhqq1ht [ 0 ] *
ehcact3szt [ 2 ] ; kq3ho01jf4_tmp_p = biqfhqq1ht [ 1 ] * ehcact3szt [ 2 ] ;
kq3ho01jf4_p [ 2 ] = kq3ho01jf4_tmp_p * ehcact3szt [ 0 ] + biqfhqq1ht [ 0 ] *
biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 3 ] = biqfhqq1ht [ 0 ] * ehcact3szt [ 1 ] ;
kq3ho01jf4_p [ 4 ] = kq3ho01jf4_tmp * biqfhqq1ht [ 0 ] + ehcact3szt [ 0 ] *
ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 5 ] = kq3ho01jf4_tmp_p * biqfhqq1ht [ 0 ] -
ehcact3szt [ 0 ] * biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 6 ] = - biqfhqq1ht [ 1 ]
; kq3ho01jf4_p [ 7 ] = ehcact3szt [ 1 ] * biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 8
] = ehcact3szt [ 1 ] * ehcact3szt [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
bgloav51mm_p [ i ] = ( kq3ho01jf4_p [ 3 * i + 1 ] * localB -> kqttujkp5i [ 1
] + kq3ho01jf4_p [ 3 * i ] * localB -> kqttujkp5i [ 0 ] ) + kq3ho01jf4_p [ 3
* i + 2 ] * localB -> kqttujkp5i [ 2 ] ; } hijx2gsbqe_p [ 0 ] = localX ->
noatsby3ej [ 1 ] + bgloav51mm_p [ 2 ] ; muDoubleScalarSinCos ( akbgnuupjz .
P_151 , & ehcact3szt [ 0 ] , & biqfhqq1ht [ 0 ] ) ; muDoubleScalarSinCos (
localX -> in4ouu3rj0 , & ehcact3szt [ 1 ] , & biqfhqq1ht [ 1 ] ) ;
muDoubleScalarSinCos ( akbgnuupjz . P_149 , & ehcact3szt [ 2 ] , & biqfhqq1ht
[ 2 ] ) ; kq3ho01jf4_p [ 0 ] = biqfhqq1ht [ 0 ] * biqfhqq1ht [ 1 ] ;
kq3ho01jf4_tmp = ehcact3szt [ 1 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 1 ] =
kq3ho01jf4_tmp * biqfhqq1ht [ 0 ] - ehcact3szt [ 0 ] * biqfhqq1ht [ 2 ] ;
kq3ho01jf4_tmp_p = ehcact3szt [ 1 ] * biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 2 ] =
kq3ho01jf4_tmp_p * biqfhqq1ht [ 0 ] + ehcact3szt [ 0 ] * ehcact3szt [ 2 ] ;
kq3ho01jf4_p [ 3 ] = ehcact3szt [ 0 ] * biqfhqq1ht [ 1 ] ; kq3ho01jf4_p [ 4 ]
= kq3ho01jf4_tmp * ehcact3szt [ 0 ] + biqfhqq1ht [ 0 ] * biqfhqq1ht [ 2 ] ;
kq3ho01jf4_p [ 5 ] = kq3ho01jf4_tmp_p * ehcact3szt [ 0 ] - biqfhqq1ht [ 0 ] *
ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 6 ] = - ehcact3szt [ 1 ] ; kq3ho01jf4_p [ 7
] = biqfhqq1ht [ 1 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 8 ] = biqfhqq1ht [ 1
] * biqfhqq1ht [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { bgloav51mm_p [ i ] = (
kq3ho01jf4_p [ 3 * i + 1 ] * localB -> a1lc0bzspv [ 1 ] + kq3ho01jf4_p [ 3 *
i ] * localB -> a1lc0bzspv [ 0 ] ) + kq3ho01jf4_p [ 3 * i + 2 ] * localB ->
a1lc0bzspv [ 2 ] ; } hijx2gsbqe_p [ 1 ] = localX -> noatsby3ej [ 1 ] +
bgloav51mm_p [ 2 ] ; hijx2gsbqe_p [ 0 ] -= localX -> d5vyxqghh0 [ 0 ] ;
hijx2gsbqe_p [ 1 ] -= localX -> d5vyxqghh0 [ 1 ] ; cxpxuy2piu_p [ 0 ] =
look1_binlxpw ( hijx2gsbqe_p [ 0 ] , akbgnuupjz . P_64 , akbgnuupjz . P_12 ,
5U ) ; cxpxuy2piu_p [ 1 ] = look1_binlxpw ( hijx2gsbqe_p [ 1 ] , akbgnuupjz .
P_65 , akbgnuupjz . P_13 , 5U ) ; localB -> b1gikpnzh3 = localX -> fmsvpqigtm
; bgloav51mm_p [ 1 ] = localB -> b1gikpnzh3 ; gj3a4jorjc_idx_0 = ( localB ->
b1gikpnzh3 * localB -> kqttujkp5i [ 2 ] - localB -> kqttujkp5i [ 1 ] * 0.0 )
+ localB -> kn3kq1dbud [ 0 ] ; gj3a4jorjc_idx_2 = ( 0.0 * localB ->
kqttujkp5i [ 1 ] - localB -> kqttujkp5i [ 0 ] * localB -> b1gikpnzh3 ) +
localB -> kn3kq1dbud [ 2 ] ; a1lc0bzspv_idx_0 = ( localB -> b1gikpnzh3 *
localB -> a1lc0bzspv [ 2 ] - localB -> a1lc0bzspv [ 1 ] * 0.0 ) + localB ->
kn3kq1dbud [ 0 ] ; a1lc0bzspv_idx_2 = ( 0.0 * localB -> a1lc0bzspv [ 1 ] -
localB -> a1lc0bzspv [ 0 ] * localB -> b1gikpnzh3 ) + localB -> kn3kq1dbud [
2 ] ; hijx2gsbqe_p [ 0 ] = look1_binlxpw ( gj3a4jorjc_idx_2 - localB ->
if3fq2sidt [ 0 ] , akbgnuupjz . P_62 , akbgnuupjz . P_10 , 6U ) ;
hijx2gsbqe_p [ 1 ] = look1_binlxpw ( a1lc0bzspv_idx_2 - localB -> if3fq2sidt
[ 1 ] , akbgnuupjz . P_63 , akbgnuupjz . P_11 , 6U ) ; fzak5q5isu_p [ 5 ] = (
cxpxuy2piu_p [ 0 ] + hijx2gsbqe_p [ 0 ] ) * akbgnuupjz . P_105 [ 0 ] ;
fzak5q5isu_p [ 6 ] = 0.0 ; fzak5q5isu_p [ 7 ] = 0.0 ; fzak5q5isu_p [ 8 ] = (
cxpxuy2piu_p [ 1 ] + hijx2gsbqe_p [ 1 ] ) * akbgnuupjz . P_105 [ 1 ] ;
fzak5q5isu_p [ 9 ] = localB -> hjgtg4ci21 [ 0 ] ; fzak5q5isu_p [ 10 ] =
localB -> hjgtg4ci21 [ 1 ] ; fzak5q5isu_p [ 11 ] = localB -> hjgtg4ci21 [ 2 ]
; lnwgoxkd41_p [ 0 ] = - localX -> in4ouu3rj0 ; lnwgoxkd41_p [ 1 ] = - localX
-> in4ouu3rj0 ; lnwgoxkd41_p [ 2 ] = - localX -> in4ouu3rj0 ; jb4mtkb30x =
0.017453292519943295 * * dxefyqzind ; lnwgoxkd41_p [ 3 ] = - localX ->
in4ouu3rj0 - jb4mtkb30x ; ji4pzz2y51 = 0 ; while ( ji4pzz2y51 < 4 ) { localB
-> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] = lnwgoxkd41_p [ ji4pzz2y51 ]
; ehcact3szt [ 0 ] = fzak5q5isu_p [ 3 * ji4pzz2y51 ] ; ehcact3szt [ 1 ] =
fzak5q5isu_p [ 3 * ji4pzz2y51 + 1 ] ; ehcact3szt [ 2 ] = fzak5q5isu_p [ 3 *
ji4pzz2y51 + 2 ] ; localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] =
akbgnuupjz . izrftnejci . P_1 ; localB -> izrftnejci [ ji4pzz2y51 ] .
oqgrsi0ejr [ 2 ] = akbgnuupjz . izrftnejci . P_0 ; muDoubleScalarSinCos (
localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] , & g3xqh113kt_p [ 0 ]
, & gg1apbf2wu_p [ 0 ] ) ; muDoubleScalarSinCos ( localB -> izrftnejci [
ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] , & g3xqh113kt_p [ 1 ] , & gg1apbf2wu_p [ 1 ]
) ; muDoubleScalarSinCos ( localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [
2 ] , & g3xqh113kt_p [ 2 ] , & gg1apbf2wu_p [ 2 ] ) ; localB -> izrftnejci [
ji4pzz2y51 ] . h1dclck55f [ 0 ] = gg1apbf2wu_p [ 0 ] * gg1apbf2wu_p [ 1 ] ;
nh1w3novru = g3xqh113kt_p [ 1 ] * g3xqh113kt_p [ 2 ] ; localB -> izrftnejci [
ji4pzz2y51 ] . h1dclck55f [ 1 ] = nh1w3novru * gg1apbf2wu_p [ 0 ] -
g3xqh113kt_p [ 0 ] * gg1apbf2wu_p [ 2 ] ; kq3ho01jf4_tmp = g3xqh113kt_p [ 1 ]
* gg1apbf2wu_p [ 2 ] ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 2 ]
= kq3ho01jf4_tmp * gg1apbf2wu_p [ 0 ] + g3xqh113kt_p [ 0 ] * g3xqh113kt_p [ 2
] ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 3 ] = g3xqh113kt_p [ 0
] * gg1apbf2wu_p [ 1 ] ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 4
] = nh1w3novru * g3xqh113kt_p [ 0 ] + gg1apbf2wu_p [ 0 ] * gg1apbf2wu_p [ 2 ]
; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 5 ] = kq3ho01jf4_tmp *
g3xqh113kt_p [ 0 ] - gg1apbf2wu_p [ 0 ] * g3xqh113kt_p [ 2 ] ; localB ->
izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 6 ] = - g3xqh113kt_p [ 1 ] ; localB
-> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 7 ] = gg1apbf2wu_p [ 1 ] *
g3xqh113kt_p [ 2 ] ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 8 ] =
gg1apbf2wu_p [ 1 ] * gg1apbf2wu_p [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { tmp
[ i ] = ( localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 3 * i + 1 ] *
ehcact3szt [ 1 ] + localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 3 * i ]
* ehcact3szt [ 0 ] ) + localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 3 *
i + 2 ] * ehcact3szt [ 2 ] ; } localB -> cpxmevd5ln [ 3 * ji4pzz2y51 ] = tmp
[ 0 ] ; localB -> cpxmevd5ln [ 3 * ji4pzz2y51 + 1 ] = tmp [ 1 ] ; localB ->
cpxmevd5ln [ 3 * ji4pzz2y51 + 2 ] = tmp [ 2 ] ; ji4pzz2y51 ++ ; }
gg1apbf2wu_p [ 0 ] = akbgnuupjz . P_106 [ 0 ] * localB -> cpxmevd5ln [ 3 ] ;
gg1apbf2wu_p [ 1 ] = akbgnuupjz . P_106 [ 1 ] * localB -> cpxmevd5ln [ 4 ] ;
gg1apbf2wu_p [ 2 ] = akbgnuupjz . P_106 [ 2 ] * localB -> cpxmevd5ln [ 5 ] ;
nvq24ipryj_p = akbgnuupjz . P_37 * gg1apbf2wu_p [ 2 ] ; otssvk1ntn_idx_0 =
akbgnuupjz . P_107 [ 0 ] * localB -> cpxmevd5ln [ 6 ] ; otssvk1ntn_idx_1 =
akbgnuupjz . P_107 [ 1 ] * localB -> cpxmevd5ln [ 7 ] ; otssvk1ntn_idx_2 =
akbgnuupjz . P_107 [ 2 ] * localB -> cpxmevd5ln [ 8 ] ; aggo5314p1_p =
akbgnuupjz . P_42 * otssvk1ntn_idx_2 ; omskzwfqex_idx_0 = gg1apbf2wu_p [ 0 ]
; omskzwfqex_idx_3 = otssvk1ntn_idx_0 ; omskzwfqex_idx_2 = gg1apbf2wu_p [ 2 ]
; ehcact3szt [ 0 ] = gg1apbf2wu_p [ 0 ] * gg1apbf2wu_p [ 0 ] ; ehcact3szt [ 1
] = gg1apbf2wu_p [ 1 ] * gg1apbf2wu_p [ 1 ] ; ehcact3szt [ 2 ] = gg1apbf2wu_p
[ 2 ] * gg1apbf2wu_p [ 2 ] ; pehck35b41_p = ( ehcact3szt [ 0 ] + ehcact3szt [
1 ] ) + ehcact3szt [ 2 ] ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if (
localDW -> kxp34i0kfp != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; localDW -> kxp34i0kfp = 0 ; } nh1w3novru =
muDoubleScalarSqrt ( pehck35b41_p ) ; } else if ( pehck35b41_p < 0.0 ) {
nh1w3novru = - muDoubleScalarSqrt ( muDoubleScalarAbs ( pehck35b41_p ) ) ;
localDW -> kxp34i0kfp = 1 ; } else { nh1w3novru = muDoubleScalarSqrt (
pehck35b41_p ) ; } cgf2haddsb_p = akbgnuupjz . P_108 * nh1w3novru ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> n1fith1shx = localDW -> jdfraz14md ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> jvitvqlix1 , ( localB -> n1fith1shx )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> nz2ycl5px5 != 0 ) ) {
localX -> m2l0c5x3qt = localB -> mlzbj1adz0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
nh1w3novru = localX -> m2l0c5x3qt ; } else { nh1w3novru = localX ->
m2l0c5x3qt ; } g3i4c21xsv_p = akbgnuupjz . P_70 * localX -> jphiqvsdq1 ;
pehck35b41_p = akbgnuupjz . P_43 * nh1w3novru + g3i4c21xsv_p ; jznx433nsh_p =
localX -> neffdf1vy0 ; localB -> iq2zwwqbdw = ( pehck35b41_p - localX ->
neffdf1vy0 * localB -> btwu2npo5h ) * akbgnuupjz . P_111 ; g433g0qrhs_p =
akbgnuupjz . P_112 * * ccn5sowg0n ; kq3ho01jf4_tmp = g433g0qrhs_p * localB ->
kk5viu1fv5 * akbgnuupjz . P_58 * akbgnuupjz . P_81 ; if ( kq3ho01jf4_tmp >
akbgnuupjz . P_113 ) { kq3ho01jf4_tmp = akbgnuupjz . P_113 ; } else if (
kq3ho01jf4_tmp < akbgnuupjz . P_114 ) { kq3ho01jf4_tmp = akbgnuupjz . P_114 ;
} localB -> a2kksb5sai = akbgnuupjz . P_30 * akbgnuupjz . P_77 *
kq3ho01jf4_tmp ; localB -> oac32d025c = akbgnuupjz . P_79 / akbgnuupjz . P_77
* localB -> a2kksb5sai ; jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2 < 1 ) {
co0hnw4z10 = localB -> iq2zwwqbdw ; kedsav5mep = localB -> oac32d025c ;
kh22t51mhe = localB -> a2kksb5sai ; cddyh02qci ( a5ree4wwe5 , co0hnw4z10 ,
kedsav5mep , kh22t51mhe , akbgnuupjz . P_86 , akbgnuupjz . P_52 , akbgnuupjz
. P_14 , akbgnuupjz . P_35 * akbgnuupjz . P_28 * 0.0 , & localB -> nod5vp1cyy
[ jzsp3rpdl2 ] . fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog , & akbgnuupjz . nod5vp1cyy . fate2u2iog , & localX -> nod5vp1cyy
[ jzsp3rpdl2 ] . fate2u2iog , & localXdis -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog ) ; localB -> osuttpiuid = localB -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog . brky3vboqb ; localB -> hvwnw2twcq = localB -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog . bzjc1unozv ; localB -> psjmxsi5db = localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog . jym0dekt3x ; jzsp3rpdl2 ++ ; }
pafzrlxpms ( localB -> btwu2npo5h , cgf2haddsb_p , localB -> hvwnw2twcq ,
localB -> kn3kq1dbud [ 0 ] , akbgnuupjz . P_159 , akbgnuupjz . P_160 ,
akbgnuupjz . P_161 , akbgnuupjz . P_162 , akbgnuupjz . P_74 , akbgnuupjz .
P_163 , akbgnuupjz . P_164 , akbgnuupjz . P_165 , akbgnuupjz . P_166 ,
akbgnuupjz . P_91 , akbgnuupjz . P_167 , akbgnuupjz . P_168 , akbgnuupjz .
P_38 , akbgnuupjz . P_46 , akbgnuupjz . P_56 , akbgnuupjz . P_169 ,
akbgnuupjz . P_170 , akbgnuupjz . P_171 , akbgnuupjz . P_49 , akbgnuupjz .
P_40 , akbgnuupjz . P_172 , akbgnuupjz . P_173 , akbgnuupjz . P_33 ,
akbgnuupjz . P_174 , akbgnuupjz . P_175 , akbgnuupjz . P_176 , akbgnuupjz .
P_177 , akbgnuupjz . P_178 , 0.0 , akbgnuupjz . P_179 , akbgnuupjz . P_180 ,
akbgnuupjz . P_181 , akbgnuupjz . P_182 , akbgnuupjz . P_183 , akbgnuupjz .
P_184 , akbgnuupjz . P_185 , akbgnuupjz . P_186 , akbgnuupjz . P_187 ,
akbgnuupjz . P_188 , akbgnuupjz . P_189 , akbgnuupjz . P_190 , akbgnuupjz .
P_191 , akbgnuupjz . P_192 , akbgnuupjz . P_193 , akbgnuupjz . P_194 ,
akbgnuupjz . P_195 , akbgnuupjz . P_196 , akbgnuupjz . P_197 , akbgnuupjz .
P_198 , akbgnuupjz . P_199 , akbgnuupjz . P_200 , akbgnuupjz . P_201 ,
akbgnuupjz . P_156 , akbgnuupjz . P_202 , akbgnuupjz . P_203 , akbgnuupjz .
P_6 , akbgnuupjz . P_8 , akbgnuupjz . P_35 , akbgnuupjz . P_72 , & localB ->
f0qvxxi2xz ) ; gjiwztliqd_p = localB -> f0qvxxi2xz . c4zmcdhw0l + localB ->
f0qvxxi2xz . c4zmcdhw0l ; ehcact3szt [ 0 ] = otssvk1ntn_idx_0 *
otssvk1ntn_idx_0 ; ehcact3szt [ 1 ] = otssvk1ntn_idx_1 * otssvk1ntn_idx_1 ;
ehcact3szt [ 2 ] = otssvk1ntn_idx_2 * otssvk1ntn_idx_2 ; l2z2gmmzf0_p =
ehcact3szt [ 0 ] ; l2z2gmmzf0_p += ehcact3szt [ 1 ] ; l2z2gmmzf0_p +=
ehcact3szt [ 2 ] ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW ->
mdigxevyus != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW -> mdigxevyus = 0 ; } g433g0qrhs_p =
muDoubleScalarSqrt ( l2z2gmmzf0_p ) ; } else if ( l2z2gmmzf0_p < 0.0 ) {
g433g0qrhs_p = - muDoubleScalarSqrt ( muDoubleScalarAbs ( l2z2gmmzf0_p ) ) ;
localDW -> mdigxevyus = 1 ; } else { g433g0qrhs_p = muDoubleScalarSqrt (
l2z2gmmzf0_p ) ; } g433g0qrhs_p *= akbgnuupjz . P_115 ; l2z2gmmzf0_p = localX
-> exw1srp224 ; localB -> mxxvqktr4f = ( 0.0 - localX -> exw1srp224 * localB
-> issejkriht ) * akbgnuupjz . P_117 ; nrktqrfkmk_p = akbgnuupjz . P_118 * *
ccn5sowg0n ; kq3ho01jf4_tmp = nrktqrfkmk_p * localB -> h32gzij2ks *
akbgnuupjz . P_59 * akbgnuupjz . P_82 ; if ( kq3ho01jf4_tmp > akbgnuupjz .
P_119 ) { kq3ho01jf4_tmp = akbgnuupjz . P_119 ; } else if ( kq3ho01jf4_tmp <
akbgnuupjz . P_120 ) { kq3ho01jf4_tmp = akbgnuupjz . P_120 ; } localB ->
djwjslokxk = akbgnuupjz . P_31 * akbgnuupjz . P_78 * kq3ho01jf4_tmp ; localB
-> hcj35ee5xv = akbgnuupjz . P_80 / akbgnuupjz . P_78 * localB -> djwjslokxk
; ggxhvsmzpg = 0 ; while ( ggxhvsmzpg < 1 ) { by2nsc5u0e = localB ->
mxxvqktr4f ; gbv1keysa1 = localB -> hcj35ee5xv ; cexmufpll2 = localB ->
djwjslokxk ; b5prwuabwt ( a5ree4wwe5 , by2nsc5u0e , gbv1keysa1 , cexmufpll2 ,
akbgnuupjz . P_87 , akbgnuupjz . P_53 , akbgnuupjz . P_15 , akbgnuupjz . P_36
* akbgnuupjz . P_29 * 0.0 , & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , &
akbgnuupjz . eblhn1q21v . fd4qjwy5lm , & localX -> eblhn1q21v [ ggxhvsmzpg ]
. fd4qjwy5lm , & localXdis -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ;
localB -> fwtwl1sjv5 = localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm .
ovggp1qwn3 ; localB -> flr3ssss0f = localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm . iztgeaiw2b ; localB -> dkfg5gymfy = localB -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm . a134j1egmo ; ggxhvsmzpg ++ ; } pafzrlxpms (
localB -> issejkriht , g433g0qrhs_p , localB -> flr3ssss0f , localB ->
kn3kq1dbud [ 0 ] , akbgnuupjz . P_210 , akbgnuupjz . P_211 , akbgnuupjz .
P_212 , akbgnuupjz . P_213 , akbgnuupjz . P_75 , akbgnuupjz . P_214 ,
akbgnuupjz . P_215 , akbgnuupjz . P_216 , akbgnuupjz . P_217 , akbgnuupjz .
P_92 , akbgnuupjz . P_218 , akbgnuupjz . P_219 , akbgnuupjz . P_39 ,
akbgnuupjz . P_47 , akbgnuupjz . P_57 , akbgnuupjz . P_220 , akbgnuupjz .
P_221 , akbgnuupjz . P_222 , akbgnuupjz . P_50 , akbgnuupjz . P_41 ,
akbgnuupjz . P_223 , akbgnuupjz . P_224 , akbgnuupjz . P_34 , akbgnuupjz .
P_225 , akbgnuupjz . P_226 , akbgnuupjz . P_227 , akbgnuupjz . P_228 ,
akbgnuupjz . P_229 , 0.0 , akbgnuupjz . P_230 , akbgnuupjz . P_231 ,
akbgnuupjz . P_232 , akbgnuupjz . P_233 , akbgnuupjz . P_234 , akbgnuupjz .
P_235 , akbgnuupjz . P_236 , akbgnuupjz . P_237 , akbgnuupjz . P_238 ,
akbgnuupjz . P_239 , akbgnuupjz . P_240 , akbgnuupjz . P_241 , akbgnuupjz .
P_242 , akbgnuupjz . P_243 , akbgnuupjz . P_244 , akbgnuupjz . P_245 ,
akbgnuupjz . P_246 , akbgnuupjz . P_247 , akbgnuupjz . P_248 , akbgnuupjz .
P_249 , akbgnuupjz . P_250 , akbgnuupjz . P_251 , akbgnuupjz . P_252 ,
akbgnuupjz . P_207 , akbgnuupjz . P_253 , akbgnuupjz . P_254 , akbgnuupjz .
P_7 , akbgnuupjz . P_9 , akbgnuupjz . P_36 , akbgnuupjz . P_73 , & localB ->
cl0311alh3 ) ; nrktqrfkmk_p = localB -> cl0311alh3 . c4zmcdhw0l + localB ->
cl0311alh3 . c4zmcdhw0l ; kq3ho01jf4_tmp_p = gg1apbf2wu_p [ 0 ] +
otssvk1ntn_idx_0 ; kq3ho01jf4_tmp = gjiwztliqd_p + nrktqrfkmk_p ;
otssvk1ntn_idx_0 = ( kq3ho01jf4_tmp_p + kq3ho01jf4_tmp ) * akbgnuupjz . P_69
; jxt0ik3zwq_p = localB -> kn3kq1dbud [ 0 ] - localB -> cpxmevd5ln [ 0 ] ;
g3xqh113kt_p [ 0 ] = jxt0ik3zwq_p * jxt0ik3zwq_p ; ehcact3szt [ 0 ] =
jxt0ik3zwq_p ; jxt0ik3zwq_p = localB -> kn3kq1dbud [ 1 ] - localB ->
cpxmevd5ln [ 1 ] ; g3xqh113kt_p [ 1 ] = jxt0ik3zwq_p * jxt0ik3zwq_p ;
ehcact3szt [ 1 ] = jxt0ik3zwq_p ; jxt0ik3zwq_p = localB -> kn3kq1dbud [ 2 ] -
localB -> cpxmevd5ln [ 2 ] ; g3xqh113kt_p [ 2 ] = jxt0ik3zwq_p * jxt0ik3zwq_p
; ehcact3szt [ 2 ] = jxt0ik3zwq_p ; jxt0ik3zwq_p = ( g3xqh113kt_p [ 0 ] +
g3xqh113kt_p [ 1 ] ) + g3xqh113kt_p [ 2 ] ; if ( rtmIsMajorTimeStep (
a5ree4wwe5 ) ) { if ( localDW -> bbyh2lmjuh != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; localDW -> bbyh2lmjuh = 0 ; } otssvk1ntn_idx_1 =
muDoubleScalarSqrt ( jxt0ik3zwq_p ) ; } else if ( jxt0ik3zwq_p < 0.0 ) {
otssvk1ntn_idx_1 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( jxt0ik3zwq_p )
) ; localDW -> bbyh2lmjuh = 1 ; } else { otssvk1ntn_idx_1 =
muDoubleScalarSqrt ( jxt0ik3zwq_p ) ; } otssvk1ntn_idx_1 *= otssvk1ntn_idx_1
; eoghabkeo3_p [ 0 ] = akbgnuupjz . P_1 ; jxt0ik3zwq_p = muDoubleScalarAtan2
( ehcact3szt [ 1 ] , ehcact3szt [ 0 ] ) ; eoghabkeo3_p [ 1 ] = look1_binlcpw
( jxt0ik3zwq_p , akbgnuupjz . P_51 , akbgnuupjz . P_4 , 1U ) ; eoghabkeo3_p [
2 ] = akbgnuupjz . P_2 ; eoghabkeo3_p [ 3 ] = look1_binlxpw ( jxt0ik3zwq_p ,
akbgnuupjz . P_122 , akbgnuupjz . P_121 , 1U ) ; ehcact3szt [ 0 ] =
muDoubleScalarTanh ( akbgnuupjz . P_123 [ 0 ] * ehcact3szt [ 0 ] ) ;
ehcact3szt [ 1 ] = muDoubleScalarTanh ( akbgnuupjz . P_123 [ 1 ] * ehcact3szt
[ 1 ] ) ; ehcact3szt [ 2 ] = muDoubleScalarTanh ( akbgnuupjz . P_123 [ 2 ] *
ehcact3szt [ 2 ] ) ; eoghabkeo3_p [ 4 ] = ehcact3szt [ 0 ] * akbgnuupjz . P_3
; eoghabkeo3_p [ 5 ] = look1_binlxpw ( jxt0ik3zwq_p , akbgnuupjz . P_51 ,
akbgnuupjz . P_5 , 1U ) ; jxt0ik3zwq_p = 0.5 * akbgnuupjz . P_0 * akbgnuupjz
. P_24 / akbgnuupjz . P_25 ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_p =
_mm_loadu_pd ( & eoghabkeo3_p [ i ] ) ; _mm_storeu_pd ( & eoghabkeo3_p [ i ]
, _mm_mul_pd ( _mm_div_pd ( _mm_mul_pd ( _mm_set1_pd ( otssvk1ntn_idx_1 ) ,
tmp_p ) , _mm_set1_pd ( akbgnuupjz . P_32 ) ) , _mm_set1_pd ( jxt0ik3zwq_p )
) ) ; } jxt0ik3zwq_p = akbgnuupjz . P_37 + akbgnuupjz . P_42 ; g3xqh113kt_p [
0 ] = eoghabkeo3_p [ 3 ] * jxt0ik3zwq_p ; g3xqh113kt_p [ 1 ] = eoghabkeo3_p [
4 ] * jxt0ik3zwq_p ; g3xqh113kt_p [ 2 ] = eoghabkeo3_p [ 5 ] * jxt0ik3zwq_p ;
localB -> anqj4afvmr = ( ( ( ( ( nvq24ipryj_p - aggo5314p1_p ) +
otssvk1ntn_idx_0 ) + g3xqh113kt_p [ 1 ] ) + akbgnuupjz . P_146 [ 1 ] ) -
akbgnuupjz . P_147 * localB -> b1gikpnzh3 ) / akbgnuupjz . P_16 ;
muDoubleScalarSinCos ( di4vinm4lt_p , & nvq24ipryj_p , & aggo5314p1_p ) ;
gg1apbf2wu_p [ 0 ] = kq3ho01jf4_tmp_p ; otssvk1ntn_idx_0 = ( ehcact3szt [ 0 ]
- akbgnuupjz . P_153 [ 0 ] ) * eoghabkeo3_p [ 0 ] ; otssvk1ntn_idx_1 = (
ehcact3szt [ 1 ] - akbgnuupjz . P_153 [ 1 ] ) * eoghabkeo3_p [ 1 ] ;
otssvk1ntn_p = ( ehcact3szt [ 2 ] - akbgnuupjz . P_153 [ 2 ] ) * eoghabkeo3_p
[ 2 ] ; gg1apbf2wu_p [ 2 ] += otssvk1ntn_idx_2 ; localB -> mpk1if1idh [ 0 ] =
( ( ( ( ( kq3ho01jf4_tmp + gg1apbf2wu_p [ 0 ] ) - otssvk1ntn_idx_0 ) + localB
-> cpxmevd5ln [ 9 ] ) + akbgnuupjz . P_145 [ 0 ] ) / akbgnuupjz . P_76 + -
nvq24ipryj_p * akbgnuupjz . P_67 ) + ( akbgnuupjz . P_124 [ 0 ] *
g3arwv4dau_p [ 0 ] + g3arwv4dau_p [ 1 ] * akbgnuupjz . P_124 [ 2 ] ) * localB
-> b1gikpnzh3 ; localB -> mpk1if1idh [ 1 ] = ( ( ( ( otssvk1ntn_p -
gg1apbf2wu_p [ 2 ] ) + localB -> cpxmevd5ln [ 11 ] ) + akbgnuupjz . P_145 [ 2
] ) / akbgnuupjz . P_76 + aggo5314p1_p * akbgnuupjz . P_67 ) + ( g3arwv4dau_p
[ 0 ] * akbgnuupjz . P_124 [ 1 ] + g3arwv4dau_p [ 1 ] * akbgnuupjz . P_124 [
3 ] ) * localB -> b1gikpnzh3 ; gg1apbf2wu_p [ 0 ] = akbgnuupjz . P_148 ;
gg1apbf2wu_p [ 1 ] = di4vinm4lt_p ; gg1apbf2wu_p [ 2 ] = akbgnuupjz . P_148 ;
muDoubleScalarSinCos ( gg1apbf2wu_p [ 0 ] , & ehcact3szt [ 0 ] , & biqfhqq1ht
[ 0 ] ) ; muDoubleScalarSinCos ( gg1apbf2wu_p [ 1 ] , & ehcact3szt [ 1 ] , &
biqfhqq1ht [ 1 ] ) ; muDoubleScalarSinCos ( gg1apbf2wu_p [ 2 ] , & ehcact3szt
[ 2 ] , & biqfhqq1ht [ 2 ] ) ; kq3ho01jf4_p [ 0 ] = biqfhqq1ht [ 0 ] *
biqfhqq1ht [ 1 ] ; kq3ho01jf4_tmp = ehcact3szt [ 1 ] * ehcact3szt [ 2 ] ;
kq3ho01jf4_p [ 1 ] = kq3ho01jf4_tmp * biqfhqq1ht [ 0 ] - ehcact3szt [ 0 ] *
biqfhqq1ht [ 2 ] ; kq3ho01jf4_tmp_p = ehcact3szt [ 1 ] * biqfhqq1ht [ 2 ] ;
kq3ho01jf4_p [ 2 ] = kq3ho01jf4_tmp_p * biqfhqq1ht [ 0 ] + ehcact3szt [ 0 ] *
ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 3 ] = ehcact3szt [ 0 ] * biqfhqq1ht [ 1 ] ;
kq3ho01jf4_p [ 4 ] = kq3ho01jf4_tmp * ehcact3szt [ 0 ] + biqfhqq1ht [ 0 ] *
biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 5 ] = kq3ho01jf4_tmp_p * ehcact3szt [ 0 ] -
biqfhqq1ht [ 0 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 6 ] = - ehcact3szt [ 1 ]
; kq3ho01jf4_p [ 7 ] = biqfhqq1ht [ 1 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 8
] = biqfhqq1ht [ 1 ] * biqfhqq1ht [ 2 ] ; di4vinm4lt_p = g3arwv4dau_p [ 0 ] ;
jxt0ik3zwq_p = g3arwv4dau_p [ 1 ] ; for ( i = 0 ; i < 3 ; i ++ ) { ehcact3szt
[ i ] = ( kq3ho01jf4_p [ 3 * i + 1 ] * akbgnuupjz . P_148 + kq3ho01jf4_p [ 3
* i ] * di4vinm4lt_p ) + kq3ho01jf4_p [ 3 * i + 2 ] * jxt0ik3zwq_p ; } localB
-> au3s2eolps [ 0 ] = ehcact3szt [ 0 ] ; localB -> au3s2eolps [ 1 ] =
ehcact3szt [ 2 ] ; ehcact3szt [ 0 ] = bgloav51mm_p [ 1 ] * localB ->
kn3kq1dbud [ 2 ] - localB -> kn3kq1dbud [ 1 ] * 0.0 ; ehcact3szt [ 2 ] = 0.0
* localB -> kn3kq1dbud [ 1 ] - localB -> kn3kq1dbud [ 0 ] * bgloav51mm_p [ 1
] ; gg1apbf2wu_p [ 0 ] = localB -> mpk1if1idh [ 0 ] ; gg1apbf2wu_p [ 2 ] =
localB -> mpk1if1idh [ 1 ] ; ehcact3szt [ 0 ] += gg1apbf2wu_p [ 0 ] ;
ehcact3szt [ 2 ] += gg1apbf2wu_p [ 2 ] ; jxt0ik3zwq_p = 0.10197162129779282 *
ehcact3szt [ 0 ] ; aggo5314p1_p = 0.10197162129779282 * ehcact3szt [ 2 ] ;
di4vinm4lt_p = gjiwztliqd_p + omskzwfqex_idx_0 ; nvq24ipryj_p =
omskzwfqex_idx_3 + nrktqrfkmk_p ; ehcact3szt [ 0 ] = akbgnuupjz . P_152 ;
ehcact3szt [ 1 ] = jb4mtkb30x + fyrdkrtnna_p [ 1 ] ; ehcact3szt [ 2 ] =
akbgnuupjz . P_152 ; muDoubleScalarSinCos ( ehcact3szt [ 0 ] , & ehcact3szt [
0 ] , & biqfhqq1ht [ 0 ] ) ; muDoubleScalarSinCos ( ehcact3szt [ 1 ] , &
ehcact3szt [ 1 ] , & biqfhqq1ht [ 1 ] ) ; muDoubleScalarSinCos ( ehcact3szt [
2 ] , & ehcact3szt [ 2 ] , & biqfhqq1ht [ 2 ] ) ; kq3ho01jf4_p [ 0 ] =
biqfhqq1ht [ 0 ] * biqfhqq1ht [ 1 ] ; kq3ho01jf4_tmp = ehcact3szt [ 1 ] *
ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 1 ] = kq3ho01jf4_tmp * biqfhqq1ht [ 0 ] -
ehcact3szt [ 0 ] * biqfhqq1ht [ 2 ] ; kq3ho01jf4_tmp_p = ehcact3szt [ 1 ] *
biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 2 ] = kq3ho01jf4_tmp_p * biqfhqq1ht [ 0 ] +
ehcact3szt [ 0 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 3 ] = ehcact3szt [ 0 ] *
biqfhqq1ht [ 1 ] ; kq3ho01jf4_p [ 4 ] = kq3ho01jf4_tmp * ehcact3szt [ 0 ] +
biqfhqq1ht [ 0 ] * biqfhqq1ht [ 2 ] ; kq3ho01jf4_p [ 5 ] = kq3ho01jf4_tmp_p *
ehcact3szt [ 0 ] - biqfhqq1ht [ 0 ] * ehcact3szt [ 2 ] ; kq3ho01jf4_p [ 6 ] =
- ehcact3szt [ 1 ] ; kq3ho01jf4_p [ 7 ] = biqfhqq1ht [ 1 ] * ehcact3szt [ 2 ]
; kq3ho01jf4_p [ 8 ] = biqfhqq1ht [ 1 ] * biqfhqq1ht [ 2 ] ; ehcact3szt [ 0 ]
= localB -> kn3kq1dbud [ 0 ] ; ehcact3szt [ 1 ] = akbgnuupjz . P_152 ;
ehcact3szt [ 2 ] = localB -> kn3kq1dbud [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ biqfhqq1ht [ i ] = ( kq3ho01jf4_p [ 3 * i + 1 ] * ehcact3szt [ 1 ] +
kq3ho01jf4_p [ 3 * i ] * ehcact3szt [ 0 ] ) + kq3ho01jf4_p [ 3 * i + 2 ] *
ehcact3szt [ 2 ] ; } ehcact3szt [ 0 ] = localB -> kn3kq1dbud [ 0 ] *
otssvk1ntn_idx_0 ; gg1apbf2wu_p [ 0 ] = akbgnuupjz . P_145 [ 0 ] * localB ->
kn3kq1dbud [ 0 ] ; fyrdkrtnna_p [ 0 ] = akbgnuupjz . P_146 [ 0 ] * 0.0 ;
g3xqh113kt_p [ 0 ] *= 0.0 ; ehcact3szt [ 1 ] = localB -> kn3kq1dbud [ 1 ] *
otssvk1ntn_idx_1 ; gg1apbf2wu_p [ 1 ] = akbgnuupjz . P_145 [ 1 ] * localB ->
kn3kq1dbud [ 1 ] ; fyrdkrtnna_p [ 1 ] = akbgnuupjz . P_146 [ 1 ] *
bgloav51mm_p [ 1 ] ; g3xqh113kt_p [ 1 ] *= bgloav51mm_p [ 1 ] ; ehcact3szt [
2 ] = localB -> kn3kq1dbud [ 2 ] * otssvk1ntn_p ; gg1apbf2wu_p [ 2 ] =
akbgnuupjz . P_145 [ 2 ] * localB -> kn3kq1dbud [ 2 ] ; fyrdkrtnna_p [ 2 ] =
akbgnuupjz . P_146 [ 2 ] * 0.0 ; g3xqh113kt_p [ 2 ] *= 0.0 ; jb4mtkb30x = -
akbgnuupjz . P_76 * akbgnuupjz . P_68 * biqfhqq1ht [ 2 ] ; lnwgoxkd41_p [ 0 ]
= akbgnuupjz . P_125 [ 0 ] * cxpxuy2piu_p [ 0 ] ; lnwgoxkd41_p [ 1 ] =
akbgnuupjz . P_125 [ 1 ] * cxpxuy2piu_p [ 1 ] ; g3arwv4dau_p [ 0 ] =
akbgnuupjz . P_126 [ 0 ] * hijx2gsbqe_p [ 0 ] * gj3a4jorjc_idx_2 ;
g3arwv4dau_p [ 1 ] = akbgnuupjz . P_126 [ 1 ] * hijx2gsbqe_p [ 1 ] *
a1lc0bzspv_idx_2 ; cxpxuy2piu_p [ 0 ] = lnwgoxkd41_p [ 0 ] * gj3a4jorjc_idx_2
; cxpxuy2piu_p [ 1 ] = lnwgoxkd41_p [ 1 ] * a1lc0bzspv_idx_2 ; hijx2gsbqe_p [
0 ] = gjiwztliqd_p * gj3a4jorjc_idx_0 ; hijx2gsbqe_p [ 1 ] = a1lc0bzspv_idx_0
* nrktqrfkmk_p ; gjiwztliqd_p = akbgnuupjz . P_76 * localB -> kn3kq1dbud [ 0
] * ( 9.8066500000000012 * jxt0ik3zwq_p ) ; nrktqrfkmk_p = akbgnuupjz . P_76
* localB -> kn3kq1dbud [ 2 ] * ( 9.8066500000000012 * aggo5314p1_p ) ;
aggo5314p1_p = akbgnuupjz . P_16 * bgloav51mm_p [ 1 ] * localB -> anqj4afvmr
; bgloav51mm_p [ 0 ] = nvq24ipryj_p * a1lc0bzspv_idx_0 ; bgloav51mm_p [ 2 ] =
- otssvk1ntn_idx_2 * a1lc0bzspv_idx_2 ; gj3a4jorjc_idx_0 *= di4vinm4lt_p ;
a1lc0bzspv_idx_0 = g3arwv4dau_p [ 1 ] + cxpxuy2piu_p [ 1 ] ; gj3a4jorjc_idx_0
+= - omskzwfqex_idx_2 * gj3a4jorjc_idx_2 ; gj3a4jorjc_idx_0 = (
gj3a4jorjc_idx_0 - hijx2gsbqe_p [ 0 ] ) + ( g3arwv4dau_p [ 0 ] + cxpxuy2piu_p
[ 0 ] ) ; di4vinm4lt_p = - ehcact3szt [ 0 ] ; gj3a4jorjc_idx_2 = bgloav51mm_p
[ 0 ] ; g3arwv4dau_p [ 0 ] = - g3arwv4dau_p [ 0 ] ; gj3a4jorjc_idx_2 +=
bgloav51mm_p [ 2 ] ; g3arwv4dau_p [ 1 ] = - g3arwv4dau_p [ 1 ] ;
gj3a4jorjc_idx_2 = ( gj3a4jorjc_idx_2 - hijx2gsbqe_p [ 1 ] ) +
a1lc0bzspv_idx_0 ; a1lc0bzspv_idx_0 = g3arwv4dau_p [ 0 ] ; a1lc0bzspv_idx_0
+= g3arwv4dau_p [ 1 ] ; { if ( localDW -> gl1a1300nz . AQHandles [ 0 ] &&
ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
gl1a1300nz . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * )
& gg1apbf2wu_p [ 0 ] + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz .
AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
gg1apbf2wu_p [ 2 ] + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles
[ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & fyrdkrtnna_p [ 1 ] +
0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 3 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & hijx2gsbqe_p [ 0 ] + 0 ) ;
sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 4 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & hijx2gsbqe_p [ 1 ] + 0 ) ; sdiWriteSignal (
localDW -> gl1a1300nz . AQHandles [ 5 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) ,
( char * ) & gj3a4jorjc_idx_0 + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz
. AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
gj3a4jorjc_idx_2 + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [
7 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & di4vinm4lt_p + 0 ) ;
sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 8 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & ehcact3szt [ 2 ] + 0 ) ; sdiWriteSignal (
localDW -> gl1a1300nz . AQHandles [ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) ,
( char * ) & g3xqh113kt_p [ 1 ] + 0 ) ; sdiWriteSignal ( localDW ->
gl1a1300nz . AQHandles [ 10 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char *
) & a1lc0bzspv_idx_0 + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz .
AQHandles [ 11 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
jb4mtkb30x + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 12 ]
, rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & gjiwztliqd_p + 0 ) ;
sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 13 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & nrktqrfkmk_p + 0 ) ; sdiWriteSignal ( localDW
-> gl1a1300nz . AQHandles [ 14 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & aggo5314p1_p + 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles
[ 15 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & cxpxuy2piu_p [ 0 ]
+ 0 ) ; sdiWriteSignal ( localDW -> gl1a1300nz . AQHandles [ 16 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & cxpxuy2piu_p [ 1 ] + 0 ) ; }
} if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 ,
0 ) ) { localB -> dgmodzfvbf = localDW -> jrm4ykfn0y ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> jgxptiecam , ( localB -> dgmodzfvbf )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> huxlbxlfje != 0 ) ) {
localX -> pclrccjq3k = localB -> cd1kn4apvg ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
gj3a4jorjc_idx_2 = localX -> pclrccjq3k ; } else { gj3a4jorjc_idx_2 = localX
-> pclrccjq3k ; } a1lc0bzspv_idx_0 = akbgnuupjz . P_71 * localX -> avikqegq2n
; gj3a4jorjc_idx_0 = akbgnuupjz . P_44 * gj3a4jorjc_idx_2 + a1lc0bzspv_idx_0
; avgrd45txz = - gj3a4jorjc_idx_0 ; * jnhw4b1r4n = localX -> ifgziugp0p ;
biqfhqq1ht [ 0 ] = * a10dw5c4tm ; di4vinm4lt_p = biqfhqq1ht [ 0 ] ;
di4vinm4lt_p += avgrd45txz ; di4vinm4lt_p += - akbgnuupjz . P_45 * *
jnhw4b1r4n ; localB -> noo4kfc5co = di4vinm4lt_p / localB -> kbmx45xxxk ;
g3arwv4dau_p [ 0 ] = * a10dw5c4tm * * jnhw4b1r4n ; g3arwv4dau_p [ 1 ] =
avgrd45txz * * jnhw4b1r4n ; di4vinm4lt_p = - ( akbgnuupjz . P_45 * *
jnhw4b1r4n ) * * jnhw4b1r4n ; jb4mtkb30x = * jnhw4b1r4n * localB ->
noo4kfc5co * localB -> kbmx45xxxk ; { if ( localDW -> hxmqkbfltt . AQHandles
[ 0 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal (
localDW -> hxmqkbfltt . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) ,
( char * ) & g3arwv4dau_p [ 0 ] + 0 ) ; sdiWriteSignal ( localDW ->
hxmqkbfltt . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * )
& g3arwv4dau_p [ 1 ] + 0 ) ; sdiWriteSignal ( localDW -> hxmqkbfltt .
AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
di4vinm4lt_p + 0 ) ; sdiWriteSignal ( localDW -> hxmqkbfltt . AQHandles [ 3 ]
, rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & jb4mtkb30x + 0 ) ; } }
di4vinm4lt_p = localB -> f0qvxxi2xz . c4zmcdhw0l * localB -> kn3kq1dbud [ 0 ]
; dokh2uzzgo = - di4vinm4lt_p ; oxjq4fccss = localB -> hvwnw2twcq *
pehck35b41_p ; cbdiqa4cix = cgf2haddsb_p * 0.0 ; cgf2haddsb_p = localB ->
f0qvxxi2xz . kxfugx0x5t * localB -> hvwnw2twcq ; a3rxg4a3fj = ( di4vinm4lt_p
- localB -> f0qvxxi2xz . ocgezqjxeg * localB -> hvwnw2twcq * jznx433nsh_p ) +
cgf2haddsb_p ; aymni0n1wr = - cgf2haddsb_p ; gw55nf4fmd = - (
muDoubleScalarTanh ( akbgnuupjz . P_128 * localB -> hvwnw2twcq ) * localB ->
a2kksb5sai * localB -> hvwnw2twcq ) ; ieahigdibp = - ( localB -> psjmxsi5db *
localB -> hvwnw2twcq ) ; gflgrwl2zu = akbgnuupjz . P_14 * localB ->
hvwnw2twcq * localB -> osuttpiuid ; kyvzbu52za = localB -> f0qvxxi2xz .
fgkkhera5y * 0.0 ; { if ( 1 ) { if ( localDW -> djecxjao2c . AQHandles [ 0 ]
&& ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> djecxjao2c . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & dokh2uzzgo + 0 ) ; sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [
1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & oxjq4fccss + 0 ) ;
sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [ 2 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & cbdiqa4cix + 0 ) ; sdiWriteSignal ( localDW
-> djecxjao2c . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & a3rxg4a3fj + 0 ) ; sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [
4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & aymni0n1wr + 0 ) ;
sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [ 5 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & gw55nf4fmd + 0 ) ; sdiWriteSignal ( localDW
-> djecxjao2c . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & ieahigdibp + 0 ) ; sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [
9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & gflgrwl2zu + 0 ) ;
sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [ 10 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & kyvzbu52za + 0 ) ; } } } di4vinm4lt_p =
localB -> hvwnw2twcq * localB -> btwu2npo5h ; if ( ( di4vinm4lt_p >= -
akbgnuupjz . P_35 ) && ( di4vinm4lt_p <= akbgnuupjz . P_35 ) ) { di4vinm4lt_p
= 4.0 / ( 3.0 - muDoubleScalarPower ( di4vinm4lt_p / 2.0 , 2.0 ) ) ; } else {
di4vinm4lt_p = muDoubleScalarAbs ( di4vinm4lt_p ) ; } localB -> pkwo5ibqvs =
( ( localB -> f0qvxxi2xz . kxfugx0x5t / localB -> btwu2npo5h + localB ->
f0qvxxi2xz . c4zmcdhw0l ) - jznx433nsh_p ) * ( di4vinm4lt_p / akbgnuupjz .
P_21 ) ; { if ( 1 ) { if ( localDW -> iaya40yldr . AQHandles [ 0 ] &&
ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
iaya40yldr . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * )
& dokh2uzzgo + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [ 1 ]
, rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & oxjq4fccss + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [ 2 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & cbdiqa4cix + 0 ) ; sdiWriteSignal ( localDW
-> iaya40yldr . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & a3rxg4a3fj + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [
4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & aymni0n1wr + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [ 5 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & gw55nf4fmd + 0 ) ; sdiWriteSignal ( localDW
-> iaya40yldr . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & ieahigdibp + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [
9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & gflgrwl2zu + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [ 10 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & kyvzbu52za + 0 ) ; } } } jznx433nsh_p =
localB -> cl0311alh3 . c4zmcdhw0l * localB -> kn3kq1dbud [ 0 ] ; bqrqc2qsrp =
- jznx433nsh_p ; gya5nl120o = localB -> flr3ssss0f * 0.0 ; b4vnjun04a =
g433g0qrhs_p * 0.0 ; g433g0qrhs_p = localB -> cl0311alh3 . kxfugx0x5t *
localB -> flr3ssss0f ; keo3jdvhrs = ( jznx433nsh_p - localB -> cl0311alh3 .
ocgezqjxeg * localB -> flr3ssss0f * l2z2gmmzf0_p ) + g433g0qrhs_p ;
b0vplayvrj = - g433g0qrhs_p ; g12ugcc2bn = - ( muDoubleScalarTanh (
akbgnuupjz . P_129 * localB -> flr3ssss0f ) * localB -> djwjslokxk * localB
-> flr3ssss0f ) ; dndeqqvdtt = - ( localB -> dkfg5gymfy * localB ->
flr3ssss0f ) ; m2iwbhcq3n = akbgnuupjz . P_15 * localB -> flr3ssss0f * localB
-> fwtwl1sjv5 ; hja4ief3rt = localB -> cl0311alh3 . fgkkhera5y * 0.0 ; { if (
1 ) { if ( localDW -> f0jgc0q4fs . AQHandles [ 0 ] && ssGetLogOutput (
a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> f0jgc0q4fs .
AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & bqrqc2qsrp
+ 0 ) ; sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 1 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & gya5nl120o + 0 ) ;
sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 2 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & b4vnjun04a + 0 ) ; sdiWriteSignal ( localDW
-> f0jgc0q4fs . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & keo3jdvhrs + 0 ) ; sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [
4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & b0vplayvrj + 0 ) ;
sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 5 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & g12ugcc2bn + 0 ) ; sdiWriteSignal ( localDW
-> f0jgc0q4fs . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & dndeqqvdtt + 0 ) ; sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [
9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & m2iwbhcq3n + 0 ) ;
sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 10 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & hja4ief3rt + 0 ) ; } } } jznx433nsh_p =
localB -> flr3ssss0f * localB -> issejkriht ; if ( ( jznx433nsh_p >= -
akbgnuupjz . P_36 ) && ( jznx433nsh_p <= akbgnuupjz . P_36 ) ) { jznx433nsh_p
= 4.0 / ( 3.0 - muDoubleScalarPower ( jznx433nsh_p / 2.0 , 2.0 ) ) ; } else {
jznx433nsh_p = muDoubleScalarAbs ( jznx433nsh_p ) ; } localB -> e553emkr15 =
( ( localB -> cl0311alh3 . kxfugx0x5t / localB -> issejkriht + localB ->
cl0311alh3 . c4zmcdhw0l ) - l2z2gmmzf0_p ) * ( jznx433nsh_p / akbgnuupjz .
P_22 ) ; { if ( 1 ) { if ( localDW -> iaya40yldr2 . AQHandles [ 0 ] &&
ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
iaya40yldr2 . AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char *
) & bqrqc2qsrp + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles [
1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & gya5nl120o + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles [ 2 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & b4vnjun04a + 0 ) ; sdiWriteSignal ( localDW
-> iaya40yldr2 . AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & keo3jdvhrs + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles
[ 4 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & b0vplayvrj + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles [ 5 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & g12ugcc2bn + 0 ) ; sdiWriteSignal ( localDW
-> iaya40yldr2 . AQHandles [ 6 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char
* ) & dndeqqvdtt + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles
[ 9 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & m2iwbhcq3n + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles [ 10 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & hja4ief3rt + 0 ) ; } } } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW ->
hs0twsijyj != 0 ) { localX -> nn4yztzwjs [ 0 ] = localB -> afpkcd0buu [ 0 ] ;
localX -> nn4yztzwjs [ 1 ] = localB -> afpkcd0buu [ 1 ] ; } if ( localX ->
nn4yztzwjs [ 0 ] >= akbgnuupjz . P_130 ) { if ( localX -> nn4yztzwjs [ 0 ] !=
akbgnuupjz . P_130 ) { localX -> nn4yztzwjs [ 0 ] = akbgnuupjz . P_130 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz . P_131 ) && ( localX
-> nn4yztzwjs [ 0 ] != akbgnuupjz . P_131 ) ) { localX -> nn4yztzwjs [ 0 ] =
akbgnuupjz . P_131 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } if ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz . P_130 )
{ if ( localX -> nn4yztzwjs [ 1 ] != akbgnuupjz . P_130 ) { localX ->
nn4yztzwjs [ 1 ] = akbgnuupjz . P_130 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> nn4yztzwjs [ 1 ] <= akbgnuupjz . P_131 ) && ( localX
-> nn4yztzwjs [ 1 ] != akbgnuupjz . P_131 ) ) { localX -> nn4yztzwjs [ 1 ] =
akbgnuupjz . P_131 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } g3arwv4dau_p [ 0 ] = localX -> nn4yztzwjs [ 0 ] ;
g3arwv4dau_p [ 1 ] = localX -> nn4yztzwjs [ 1 ] ; } else { if ( localX ->
nn4yztzwjs [ 0 ] >= akbgnuupjz . P_130 ) { g3arwv4dau_p [ 0 ] = akbgnuupjz .
P_130 ; } else if ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz . P_131 ) {
g3arwv4dau_p [ 0 ] = akbgnuupjz . P_131 ; } else { g3arwv4dau_p [ 0 ] =
localX -> nn4yztzwjs [ 0 ] ; } if ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz
. P_130 ) { g3arwv4dau_p [ 1 ] = akbgnuupjz . P_130 ; } else if ( localX ->
nn4yztzwjs [ 1 ] <= akbgnuupjz . P_131 ) { g3arwv4dau_p [ 1 ] = akbgnuupjz .
P_131 ; } else { g3arwv4dau_p [ 1 ] = localX -> nn4yztzwjs [ 1 ] ; } }
cxpxuy2piu_p [ 0 ] = - g3arwv4dau_p [ 0 ] ; cxpxuy2piu_p [ 1 ] = -
g3arwv4dau_p [ 1 ] ; jznx433nsh_p = - pehck35b41_p * cxpxuy2piu_p [ 0 ] ;
hijx2gsbqe_p [ 0 ] = - jznx433nsh_p ; hijx2gsbqe_p [ 1 ] = - ( pehck35b41_p *
localB -> hvwnw2twcq ) ; l2z2gmmzf0_p = - ( akbgnuupjz . P_43 * nh1w3novru )
* nh1w3novru ; localB -> jvfw3rjn1q = cxpxuy2piu_p [ 0 ] - localB ->
hvwnw2twcq ; g3i4c21xsv_p *= localB -> jvfw3rjn1q ; { if ( localDW ->
iaya40yldr2f . AQHandles [ 0 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS
) ) { sdiWriteSignal ( localDW -> iaya40yldr2f . AQHandles [ 0 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & hijx2gsbqe_p [ 0 ] + 0 ) ;
sdiWriteSignal ( localDW -> iaya40yldr2f . AQHandles [ 1 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & hijx2gsbqe_p [ 1 ] + 0 ) ; sdiWriteSignal (
localDW -> iaya40yldr2f . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 )
, ( char * ) & l2z2gmmzf0_p + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2f
. AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
g3i4c21xsv_p + 0 ) ; } } if ( ! ( localB -> n1fith1shx != 0.0 ) ) {
nh1w3novru = localB -> mlzbj1adz0 ; } localB -> abmh0jgyuh = ( localB ->
jvfw3rjn1q - nh1w3novru ) * akbgnuupjz . P_83 ; { if ( localDW -> kjwyipugjd
. AQHandles [ 0 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> kjwyipugjd . AQHandles [ 0 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & hijx2gsbqe_p [ 0 ] + 0 ) ; sdiWriteSignal (
localDW -> kjwyipugjd . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) ,
( char * ) & hijx2gsbqe_p [ 1 ] + 0 ) ; sdiWriteSignal ( localDW ->
kjwyipugjd . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * )
& l2z2gmmzf0_p + 0 ) ; sdiWriteSignal ( localDW -> kjwyipugjd . AQHandles [ 3
] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & g3i4c21xsv_p + 0 ) ; } }
g433g0qrhs_p = akbgnuupjz . P_23 / 2.0 ; hijx2gsbqe_p [ 0 ] = localB ->
aovczmb0vg * g3arwv4dau_p [ 0 ] * g433g0qrhs_p ; hijx2gsbqe_p [ 1 ] = localB
-> aovczmb0vg * g3arwv4dau_p [ 1 ] * g433g0qrhs_p ; jb4mtkb30x = hijx2gsbqe_p
[ 0 ] ; jb4mtkb30x += hijx2gsbqe_p [ 1 ] ; di4vinm4lt_p = gj3a4jorjc_idx_0 *
jb4mtkb30x ; bgloav51mm_p [ 0 ] = di4vinm4lt_p ; bgloav51mm_p [ 1 ] =
jznx433nsh_p ; jxt0ik3zwq_p = - pehck35b41_p * cxpxuy2piu_p [ 1 ] ;
bgloav51mm_p [ 2 ] = jxt0ik3zwq_p ; nh1w3novru = muDoubleScalarAbs (
jb4mtkb30x ) ; fyrdkrtnna_p [ 0 ] = nh1w3novru ; g3i4c21xsv_p =
muDoubleScalarAbs ( cxpxuy2piu_p [ 0 ] ) ; fyrdkrtnna_p [ 1 ] = g3i4c21xsv_p
; gjiwztliqd_p = muDoubleScalarAbs ( cxpxuy2piu_p [ 1 ] ) ; fyrdkrtnna_p [ 2
] = gjiwztliqd_p ; gg1apbf2wu_p [ 0 ] = akbgnuupjz . P_48 * fyrdkrtnna_p [ 0
] ; gg1apbf2wu_p [ 1 ] = akbgnuupjz . P_54 * fyrdkrtnna_p [ 1 ] ;
gg1apbf2wu_p [ 2 ] = akbgnuupjz . P_55 * fyrdkrtnna_p [ 2 ] ; gg1apbf2wu_p [
0 ] = - gg1apbf2wu_p [ 0 ] * fyrdkrtnna_p [ 0 ] ; gg1apbf2wu_p [ 1 ] = -
gg1apbf2wu_p [ 1 ] * fyrdkrtnna_p [ 1 ] ; gg1apbf2wu_p [ 2 ] = - gg1apbf2wu_p
[ 2 ] * fyrdkrtnna_p [ 2 ] ; cgf2haddsb_p = gg1apbf2wu_p [ 0 ] ; cgf2haddsb_p
+= gg1apbf2wu_p [ 1 ] ; cgf2haddsb_p += gg1apbf2wu_p [ 2 ] ; nh1w3novru = (
muDoubleScalarTanh ( ( akbgnuupjz . P_134 * nh1w3novru - akbgnuupjz . P_268 )
* akbgnuupjz . P_135 ) + akbgnuupjz . P_268 ) * akbgnuupjz . P_136 ;
g3i4c21xsv_p = ( muDoubleScalarTanh ( ( akbgnuupjz . P_138 * g3i4c21xsv_p -
akbgnuupjz . P_262 ) * akbgnuupjz . P_139 ) + akbgnuupjz . P_262 ) *
akbgnuupjz . P_140 ; l2z2gmmzf0_p = ( muDoubleScalarTanh ( ( akbgnuupjz .
P_142 * gjiwztliqd_p - akbgnuupjz . P_265 ) * akbgnuupjz . P_143 ) +
akbgnuupjz . P_265 ) * akbgnuupjz . P_144 ; if ( akbgnuupjz . P_101 == 1.0 )
{ if ( di4vinm4lt_p > akbgnuupjz . P_133 ) { gjiwztliqd_p = akbgnuupjz . P_66
; } else { gjiwztliqd_p = akbgnuupjz . P_266 ; } at3c1juwld_p [ 0 ] = ( (
akbgnuupjz . P_268 - nh1w3novru ) * akbgnuupjz . P_267 + gjiwztliqd_p *
nh1w3novru ) * gj3a4jorjc_idx_0 ; if ( jznx433nsh_p > akbgnuupjz . P_137 ) {
nh1w3novru = akbgnuupjz . P_66 ; } else { nh1w3novru = akbgnuupjz . P_260 ; }
at3c1juwld_p [ 1 ] = ( ( akbgnuupjz . P_262 - g3i4c21xsv_p ) * akbgnuupjz .
P_261 + nh1w3novru * g3i4c21xsv_p ) * - pehck35b41_p ; if ( jxt0ik3zwq_p >
akbgnuupjz . P_141 ) { nh1w3novru = akbgnuupjz . P_66 ; } else { nh1w3novru =
akbgnuupjz . P_263 ; } at3c1juwld_p [ 2 ] = ( ( akbgnuupjz . P_265 -
l2z2gmmzf0_p ) * akbgnuupjz . P_264 + nh1w3novru * l2z2gmmzf0_p ) * -
pehck35b41_p ; automldiffopen_HIk0JElP ( at3c1juwld_p , akbgnuupjz . P_54 ,
akbgnuupjz . P_48 , akbgnuupjz . P_55 , akbgnuupjz . P_23 , 1.0 , akbgnuupjz
. P_18 , akbgnuupjz . P_19 , akbgnuupjz . P_20 , g3arwv4dau_p , biqfhqq1ht ,
localB -> k4h2lncslm ) ; } else { if ( di4vinm4lt_p > akbgnuupjz . P_133 ) {
gjiwztliqd_p = akbgnuupjz . P_66 ; } else { gjiwztliqd_p = akbgnuupjz . P_266
; } at3c1juwld_p [ 0 ] = ( ( akbgnuupjz . P_268 - nh1w3novru ) * akbgnuupjz .
P_267 + gjiwztliqd_p * nh1w3novru ) * gj3a4jorjc_idx_0 ; if ( jznx433nsh_p >
akbgnuupjz . P_137 ) { nh1w3novru = akbgnuupjz . P_66 ; } else { nh1w3novru =
akbgnuupjz . P_260 ; } at3c1juwld_p [ 1 ] = ( ( akbgnuupjz . P_262 -
g3i4c21xsv_p ) * akbgnuupjz . P_261 + nh1w3novru * g3i4c21xsv_p ) * -
pehck35b41_p ; if ( jxt0ik3zwq_p > akbgnuupjz . P_141 ) { nh1w3novru =
akbgnuupjz . P_66 ; } else { nh1w3novru = akbgnuupjz . P_263 ; } at3c1juwld_p
[ 2 ] = ( ( akbgnuupjz . P_265 - l2z2gmmzf0_p ) * akbgnuupjz . P_264 +
nh1w3novru * l2z2gmmzf0_p ) * - pehck35b41_p ; automldiffopen_HIk0JElP (
at3c1juwld_p , akbgnuupjz . P_54 , akbgnuupjz . P_48 , akbgnuupjz . P_55 ,
akbgnuupjz . P_23 , 0.0 , akbgnuupjz . P_18 , akbgnuupjz . P_19 , akbgnuupjz
. P_20 , g3arwv4dau_p , biqfhqq1ht , localB -> k4h2lncslm ) ; } g3arwv4dau_p
[ 0 ] = localB -> dkxl3r0irb * localB -> k4h2lncslm [ 0 ] * g433g0qrhs_p ;
g3arwv4dau_p [ 1 ] = localB -> dkxl3r0irb * localB -> k4h2lncslm [ 1 ] *
g433g0qrhs_p ; jxt0ik3zwq_p = g3arwv4dau_p [ 0 ] + g3arwv4dau_p [ 1 ] ;
g3arwv4dau_p [ 0 ] = - localB -> k4h2lncslm [ 0 ] ; g3arwv4dau_p [ 1 ] = -
localB -> k4h2lncslm [ 1 ] ; fyrdkrtnna_p [ 0 ] = jb4mtkb30x * jxt0ik3zwq_p *
akbgnuupjz . P_18 ; fyrdkrtnna_p [ 1 ] = cxpxuy2piu_p [ 0 ] * g3arwv4dau_p [
0 ] * akbgnuupjz . P_19 ; fyrdkrtnna_p [ 2 ] = cxpxuy2piu_p [ 1 ] *
g3arwv4dau_p [ 1 ] * akbgnuupjz . P_20 ; nh1w3novru = fyrdkrtnna_p [ 0 ] ;
tmpForInput [ 0 ] = bgloav51mm_p [ 0 ] ; nh1w3novru += fyrdkrtnna_p [ 1 ] ;
tmpForInput [ 1 ] = bgloav51mm_p [ 1 ] ; nh1w3novru += fyrdkrtnna_p [ 2 ] ;
tmpForInput [ 2 ] = bgloav51mm_p [ 2 ] ; tmpForInput [ 3 ] = cgf2haddsb_p ;
tmpForInput [ 4 ] = - nh1w3novru ; g433g0qrhs_p = 0.0 ; for ( i = 0 ; i < 5 ;
i ++ ) { g433g0qrhs_p -= tmpForInput [ i ] ; } { if ( localDW -> d0spjcrzgo .
AQHandles [ 0 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> d0spjcrzgo . AQHandles [ 0 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & bgloav51mm_p [ 0 ] + 0 ) ; sdiWriteSignal (
localDW -> d0spjcrzgo . AQHandles [ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) ,
( char * ) & bgloav51mm_p [ 1 ] + 0 ) ; sdiWriteSignal ( localDW ->
d0spjcrzgo . AQHandles [ 2 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * )
& bgloav51mm_p [ 2 ] + 0 ) ; sdiWriteSignal ( localDW -> d0spjcrzgo .
AQHandles [ 3 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
g433g0qrhs_p + 0 ) ; sdiWriteSignal ( localDW -> d0spjcrzgo . AQHandles [ 4 ]
, rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & cgf2haddsb_p + 0 ) ;
sdiWriteSignal ( localDW -> d0spjcrzgo . AQHandles [ 5 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & nh1w3novru + 0 ) ; } } localB -> mswq52xs2q =
* jnhw4b1r4n - jb4mtkb30x ; if ( localB -> dgmodzfvbf != 0.0 ) { jb4mtkb30x =
gj3a4jorjc_idx_2 ; } else { jb4mtkb30x = localB -> cd1kn4apvg ; } localB ->
gh0swnw3rq = ( localB -> mswq52xs2q - jb4mtkb30x ) * akbgnuupjz . P_84 ;
g3arwv4dau_p [ 0 ] = - ( - gj3a4jorjc_idx_0 * * jnhw4b1r4n ) ; g3arwv4dau_p [
1 ] = - di4vinm4lt_p ; jb4mtkb30x = - ( akbgnuupjz . P_44 * gj3a4jorjc_idx_2
) * gj3a4jorjc_idx_2 ; cgf2haddsb_p = localB -> mswq52xs2q * a1lc0bzspv_idx_0
; { if ( localDW -> kd45pbt3ye . AQHandles [ 0 ] && ssGetLogOutput (
a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> kd45pbt3ye .
AQHandles [ 0 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) &
g3arwv4dau_p [ 0 ] + 0 ) ; sdiWriteSignal ( localDW -> kd45pbt3ye . AQHandles
[ 1 ] , rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & g3arwv4dau_p [ 1 ] +
0 ) ; sdiWriteSignal ( localDW -> kd45pbt3ye . AQHandles [ 2 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 0 ) , ( char * ) & jb4mtkb30x + 0 ) ;
sdiWriteSignal ( localDW -> kd45pbt3ye . AQHandles [ 3 ] , rtmGetTaskTime (
a5ree4wwe5 , 0 ) , ( char * ) & cgf2haddsb_p + 0 ) ; } } } void
DrivetrainEvTID2 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW ) { real_T hijx2gsbqe ; real_T pabgen5tjd ; real_T
cxpxuy2piu ; real_T iq2zwwqbdw ; real_T dswfxyeiyp ; real_T a2kksb5sai ;
int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ; localB ->
kqttujkp5i [ 0 ] = akbgnuupjz . P_37 ; localB -> kqttujkp5i [ 1 ] =
akbgnuupjz . P_26 ; localB -> kqttujkp5i [ 2 ] = akbgnuupjz . P_69 ; localB
-> a1lc0bzspv [ 0 ] = - akbgnuupjz . P_42 ; localB -> a1lc0bzspv [ 1 ] =
akbgnuupjz . P_27 ; localB -> a1lc0bzspv [ 2 ] = akbgnuupjz . P_69 ; localB
-> hjgtg4ci21 [ 0 ] = 0.0 ; localB -> hjgtg4ci21 [ 1 ] = 0.0 ; localB ->
hjgtg4ci21 [ 2 ] = akbgnuupjz . P_76 * akbgnuupjz . P_68 ; ji4pzz2y51 = 0 ;
while ( ji4pzz2y51 < 4 ) { ji4pzz2y51 ++ ; } if ( ( akbgnuupjz . P_17 >= -
akbgnuupjz . P_97 ) && ( akbgnuupjz . P_17 <= akbgnuupjz . P_97 ) ) { localB
-> kbmx45xxxk = 2.0E-6 / ( 3.0 - muDoubleScalarPower ( akbgnuupjz . P_17 /
1.0e-6 , 2.0 ) ) ; } else { localB -> kbmx45xxxk = muDoubleScalarAbs (
akbgnuupjz . P_17 ) ; } hijx2gsbqe = - 0.0 ; pabgen5tjd = akbgnuupjz . P_154
* 0.0 * 0.0 ; cxpxuy2piu = akbgnuupjz . P_155 * 0.0 ; if ( localDW ->
djecxjao2c . AQHandles [ 7 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS )
) { sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [ 7 ] , rtmGetTaskTime
( a5ree4wwe5 , 2 ) , ( char * ) & hijx2gsbqe + 0 ) ; sdiWriteSignal ( localDW
-> djecxjao2c . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char
* ) & pabgen5tjd + 0 ) ; sdiWriteSignal ( localDW -> djecxjao2c . AQHandles [
11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * ) & cxpxuy2piu + 0 ) ; }
if ( akbgnuupjz . P_28 > akbgnuupjz . P_157 ) { localB -> btwu2npo5h =
akbgnuupjz . P_157 ; } else if ( akbgnuupjz . P_28 < akbgnuupjz . P_158 ) {
localB -> btwu2npo5h = akbgnuupjz . P_158 ; } else { localB -> btwu2npo5h =
akbgnuupjz . P_28 ; } localB -> kk5viu1fv5 = akbgnuupjz . P_204 * akbgnuupjz
. P_58 ; jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2 < 1 ) { cddyh02qciTID2 (
akbgnuupjz . P_52 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , &
akbgnuupjz . nod5vp1cyy . fate2u2iog ) ; jzsp3rpdl2 ++ ; } if ( localDW ->
iaya40yldr . AQHandles [ 7 ] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS )
) { sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [ 7 ] , rtmGetTaskTime
( a5ree4wwe5 , 2 ) , ( char * ) & hijx2gsbqe + 0 ) ; sdiWriteSignal ( localDW
-> iaya40yldr . AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char
* ) & pabgen5tjd + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr . AQHandles [
11 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * ) & cxpxuy2piu + 0 ) ; }
iq2zwwqbdw = - 0.0 ; dswfxyeiyp = akbgnuupjz . P_205 * 0.0 * 0.0 ; a2kksb5sai
= akbgnuupjz . P_206 * 0.0 ; if ( localDW -> f0jgc0q4fs . AQHandles [ 7 ] &&
ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
f0jgc0q4fs . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * )
& iq2zwwqbdw + 0 ) ; sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 8 ]
, rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * ) & dswfxyeiyp + 0 ) ;
sdiWriteSignal ( localDW -> f0jgc0q4fs . AQHandles [ 11 ] , rtmGetTaskTime (
a5ree4wwe5 , 2 ) , ( char * ) & a2kksb5sai + 0 ) ; } if ( akbgnuupjz . P_29 >
akbgnuupjz . P_208 ) { localB -> issejkriht = akbgnuupjz . P_208 ; } else if
( akbgnuupjz . P_29 < akbgnuupjz . P_209 ) { localB -> issejkriht =
akbgnuupjz . P_209 ; } else { localB -> issejkriht = akbgnuupjz . P_29 ; }
localB -> h32gzij2ks = akbgnuupjz . P_255 * akbgnuupjz . P_59 ; ggxhvsmzpg =
0 ; while ( ggxhvsmzpg < 1 ) { b5prwuabwtTID2 ( akbgnuupjz . P_53 , & localB
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & akbgnuupjz . eblhn1q21v .
fd4qjwy5lm ) ; ggxhvsmzpg ++ ; } if ( localDW -> iaya40yldr2 . AQHandles [ 7
] && ssGetLogOutput ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { sdiWriteSignal (
localDW -> iaya40yldr2 . AQHandles [ 7 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 )
, ( char * ) & iq2zwwqbdw + 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2 .
AQHandles [ 8 ] , rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * ) & dswfxyeiyp
+ 0 ) ; sdiWriteSignal ( localDW -> iaya40yldr2 . AQHandles [ 11 ] ,
rtmGetTaskTime ( a5ree4wwe5 , 2 ) , ( char * ) & a2kksb5sai + 0 ) ; } localB
-> mlzbj1adz0 = akbgnuupjz . P_60 ; if ( akbgnuupjz . P_257 > akbgnuupjz .
P_259 ) { localB -> dkxl3r0irb = akbgnuupjz . P_258 ; } else { localB ->
dkxl3r0irb = - akbgnuupjz . P_258 ; } localB -> afpkcd0buu [ 0 ] = akbgnuupjz
. P_88 ; localB -> afpkcd0buu [ 1 ] = akbgnuupjz . P_89 ; if ( akbgnuupjz .
P_269 > akbgnuupjz . P_271 ) { localB -> aovczmb0vg = akbgnuupjz . P_270 ; }
else { localB -> aovczmb0vg = - akbgnuupjz . P_270 ; } localB -> cd1kn4apvg =
akbgnuupjz . P_61 ; } void ekz3w3o33e ( hcopmldpph * const a5ree4wwe5 ,
lvsoqlxlcs * localDW ) { if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if (
memcmp ( a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
0 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } } localDW ->
jg0qnrcaox = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit (
a5ree4wwe5 , 1 , 0 ) ) { localDW -> jdfraz14md = akbgnuupjz . P_256 ; }
localDW -> nz2ycl5px5 = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { localDW -> jrm4ykfn0y = akbgnuupjz
. P_272 ; } localDW -> huxlbxlfje = 0 ; localDW -> hs0twsijyj = 0 ; } void
a2spfqi5as ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, cspbap1de4 * localXdot ) { real_T by2nsc5u0e ; real_T gbv1keysa1 ; real_T
cexmufpll2 ; real_T co0hnw4z10 ; real_T kedsav5mep ; real_T kh22t51mhe ;
int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; localXdot -> ncmmxrrgvr [ 0 ] =
localB -> mpk1if1idh [ 0 ] ; localXdot -> d5vyxqghh0 [ 0 ] = localB ->
if3fq2sidt [ 0 ] ; localXdot -> noatsby3ej [ 0 ] = localB -> au3s2eolps [ 0 ]
; localXdot -> ncmmxrrgvr [ 1 ] = localB -> mpk1if1idh [ 1 ] ; localXdot ->
d5vyxqghh0 [ 1 ] = localB -> if3fq2sidt [ 1 ] ; localXdot -> noatsby3ej [ 1 ]
= localB -> au3s2eolps [ 1 ] ; localXdot -> in4ouu3rj0 = localB -> b1gikpnzh3
; localXdot -> fmsvpqigtm = localB -> anqj4afvmr ; localXdot -> m2l0c5x3qt =
localB -> abmh0jgyuh ; localXdot -> jphiqvsdq1 = localB -> jvfw3rjn1q ;
localXdot -> neffdf1vy0 = localB -> pkwo5ibqvs ; for ( jzsp3rpdl2 = 0 ;
jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { co0hnw4z10 = localB -> iq2zwwqbdw ;
kedsav5mep = localB -> oac32d025c ; kh22t51mhe = localB -> a2kksb5sai ;
blmwtgrkjm ( & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW
-> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localXdot -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog ) ; } localXdot -> exw1srp224 = localB ->
e553emkr15 ; for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) {
by2nsc5u0e = localB -> mxxvqktr4f ; gbv1keysa1 = localB -> hcj35ee5xv ;
cexmufpll2 = localB -> djwjslokxk ; dq1cbs3e5h ( & localB -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localXdot -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; }
localXdot -> lwzedupgn2 = localB -> kn3kq1dbud [ 0 ] ; localXdot ->
pclrccjq3k = localB -> gh0swnw3rq ; localXdot -> avikqegq2n = localB ->
mswq52xs2q ; localXdot -> ifgziugp0p = localB -> noo4kfc5co ; if ( ( ( localX
-> nn4yztzwjs [ 0 ] > akbgnuupjz . P_131 ) && ( localX -> nn4yztzwjs [ 0 ] <
akbgnuupjz . P_130 ) ) || ( ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz .
P_131 ) && ( localB -> k4h2lncslm [ 0 ] > 0.0 ) ) || ( ( localX -> nn4yztzwjs
[ 0 ] >= akbgnuupjz . P_130 ) && ( localB -> k4h2lncslm [ 0 ] < 0.0 ) ) ) {
localXdot -> nn4yztzwjs [ 0 ] = localB -> k4h2lncslm [ 0 ] ; } else {
localXdot -> nn4yztzwjs [ 0 ] = 0.0 ; } if ( ( ( localX -> nn4yztzwjs [ 1 ] >
akbgnuupjz . P_131 ) && ( localX -> nn4yztzwjs [ 1 ] < akbgnuupjz . P_130 ) )
|| ( ( localX -> nn4yztzwjs [ 1 ] <= akbgnuupjz . P_131 ) && ( localB ->
k4h2lncslm [ 1 ] > 0.0 ) ) || ( ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz .
P_130 ) && ( localB -> k4h2lncslm [ 1 ] < 0.0 ) ) ) { localXdot -> nn4yztzwjs
[ 1 ] = localB -> k4h2lncslm [ 1 ] ; } else { localXdot -> nn4yztzwjs [ 1 ] =
0.0 ; } } void cmuw0kqmoe ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs *
localDW ) { if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
djecxjao2c . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
djecxjao2c . AQHandles [ 0 ] ) ; } if ( localDW -> djecxjao2c . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> djecxjao2c . AQHandles [ 1 ] ) ; }
if ( localDW -> djecxjao2c . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> djecxjao2c . AQHandles [ 2 ] ) ; } if ( localDW -> djecxjao2c .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> djecxjao2c .
AQHandles [ 3 ] ) ; } if ( localDW -> djecxjao2c . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> djecxjao2c . AQHandles [ 4 ] ) ; } if (
localDW -> djecxjao2c . AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW
-> djecxjao2c . AQHandles [ 5 ] ) ; } if ( localDW -> djecxjao2c . AQHandles
[ 6 ] ) { sdiTerminateStreaming ( & localDW -> djecxjao2c . AQHandles [ 6 ] )
; } if ( localDW -> djecxjao2c . AQHandles [ 7 ] ) { sdiTerminateStreaming (
& localDW -> djecxjao2c . AQHandles [ 7 ] ) ; } if ( localDW -> djecxjao2c .
AQHandles [ 8 ] ) { sdiTerminateStreaming ( & localDW -> djecxjao2c .
AQHandles [ 8 ] ) ; } if ( localDW -> djecxjao2c . AQHandles [ 9 ] ) {
sdiTerminateStreaming ( & localDW -> djecxjao2c . AQHandles [ 9 ] ) ; } if (
localDW -> djecxjao2c . AQHandles [ 10 ] ) { sdiTerminateStreaming ( &
localDW -> djecxjao2c . AQHandles [ 10 ] ) ; } if ( localDW -> djecxjao2c .
AQHandles [ 11 ] ) { sdiTerminateStreaming ( & localDW -> djecxjao2c .
AQHandles [ 11 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
iaya40yldr . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
iaya40yldr . AQHandles [ 0 ] ) ; } if ( localDW -> iaya40yldr . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr . AQHandles [ 1 ] ) ; }
if ( localDW -> iaya40yldr . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr . AQHandles [ 2 ] ) ; } if ( localDW -> iaya40yldr .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr .
AQHandles [ 3 ] ) ; } if ( localDW -> iaya40yldr . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr . AQHandles [ 4 ] ) ; } if (
localDW -> iaya40yldr . AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW
-> iaya40yldr . AQHandles [ 5 ] ) ; } if ( localDW -> iaya40yldr . AQHandles
[ 6 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr . AQHandles [ 6 ] )
; } if ( localDW -> iaya40yldr . AQHandles [ 7 ] ) { sdiTerminateStreaming (
& localDW -> iaya40yldr . AQHandles [ 7 ] ) ; } if ( localDW -> iaya40yldr .
AQHandles [ 8 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr .
AQHandles [ 8 ] ) ; } if ( localDW -> iaya40yldr . AQHandles [ 9 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr . AQHandles [ 9 ] ) ; } if (
localDW -> iaya40yldr . AQHandles [ 10 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr . AQHandles [ 10 ] ) ; } if ( localDW -> iaya40yldr .
AQHandles [ 11 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr .
AQHandles [ 11 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
f0jgc0q4fs . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
f0jgc0q4fs . AQHandles [ 0 ] ) ; } if ( localDW -> f0jgc0q4fs . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> f0jgc0q4fs . AQHandles [ 1 ] ) ; }
if ( localDW -> f0jgc0q4fs . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> f0jgc0q4fs . AQHandles [ 2 ] ) ; } if ( localDW -> f0jgc0q4fs .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> f0jgc0q4fs .
AQHandles [ 3 ] ) ; } if ( localDW -> f0jgc0q4fs . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> f0jgc0q4fs . AQHandles [ 4 ] ) ; } if (
localDW -> f0jgc0q4fs . AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW
-> f0jgc0q4fs . AQHandles [ 5 ] ) ; } if ( localDW -> f0jgc0q4fs . AQHandles
[ 6 ] ) { sdiTerminateStreaming ( & localDW -> f0jgc0q4fs . AQHandles [ 6 ] )
; } if ( localDW -> f0jgc0q4fs . AQHandles [ 7 ] ) { sdiTerminateStreaming (
& localDW -> f0jgc0q4fs . AQHandles [ 7 ] ) ; } if ( localDW -> f0jgc0q4fs .
AQHandles [ 8 ] ) { sdiTerminateStreaming ( & localDW -> f0jgc0q4fs .
AQHandles [ 8 ] ) ; } if ( localDW -> f0jgc0q4fs . AQHandles [ 9 ] ) {
sdiTerminateStreaming ( & localDW -> f0jgc0q4fs . AQHandles [ 9 ] ) ; } if (
localDW -> f0jgc0q4fs . AQHandles [ 10 ] ) { sdiTerminateStreaming ( &
localDW -> f0jgc0q4fs . AQHandles [ 10 ] ) ; } if ( localDW -> f0jgc0q4fs .
AQHandles [ 11 ] ) { sdiTerminateStreaming ( & localDW -> f0jgc0q4fs .
AQHandles [ 11 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
iaya40yldr2 . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
iaya40yldr2 . AQHandles [ 0 ] ) ; } if ( localDW -> iaya40yldr2 . AQHandles [
1 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr2 . AQHandles [ 1 ] )
; } if ( localDW -> iaya40yldr2 . AQHandles [ 2 ] ) { sdiTerminateStreaming (
& localDW -> iaya40yldr2 . AQHandles [ 2 ] ) ; } if ( localDW -> iaya40yldr2
. AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr2 .
AQHandles [ 3 ] ) ; } if ( localDW -> iaya40yldr2 . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr2 . AQHandles [ 4 ] ) ; } if (
localDW -> iaya40yldr2 . AQHandles [ 5 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr2 . AQHandles [ 5 ] ) ; } if ( localDW -> iaya40yldr2 .
AQHandles [ 6 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr2 .
AQHandles [ 6 ] ) ; } if ( localDW -> iaya40yldr2 . AQHandles [ 7 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr2 . AQHandles [ 7 ] ) ; } if (
localDW -> iaya40yldr2 . AQHandles [ 8 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr2 . AQHandles [ 8 ] ) ; } if ( localDW -> iaya40yldr2 .
AQHandles [ 9 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr2 .
AQHandles [ 9 ] ) ; } if ( localDW -> iaya40yldr2 . AQHandles [ 10 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr2 . AQHandles [ 10 ] ) ; } if
( localDW -> iaya40yldr2 . AQHandles [ 11 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr2 . AQHandles [ 11 ] ) ; } } if ( ( ssGetSimMode (
a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gl1a1300nz .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz .
AQHandles [ 0 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 1 ] ) ; } if (
localDW -> gl1a1300nz . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW
-> gl1a1300nz . AQHandles [ 2 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles
[ 3 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 3 ] )
; } if ( localDW -> gl1a1300nz . AQHandles [ 4 ] ) { sdiTerminateStreaming (
& localDW -> gl1a1300nz . AQHandles [ 4 ] ) ; } if ( localDW -> gl1a1300nz .
AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz .
AQHandles [ 5 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles [ 6 ] ) {
sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 6 ] ) ; } if (
localDW -> gl1a1300nz . AQHandles [ 7 ] ) { sdiTerminateStreaming ( & localDW
-> gl1a1300nz . AQHandles [ 7 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles
[ 8 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 8 ] )
; } if ( localDW -> gl1a1300nz . AQHandles [ 9 ] ) { sdiTerminateStreaming (
& localDW -> gl1a1300nz . AQHandles [ 9 ] ) ; } if ( localDW -> gl1a1300nz .
AQHandles [ 10 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz .
AQHandles [ 10 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles [ 11 ] ) {
sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 11 ] ) ; } if (
localDW -> gl1a1300nz . AQHandles [ 12 ] ) { sdiTerminateStreaming ( &
localDW -> gl1a1300nz . AQHandles [ 12 ] ) ; } if ( localDW -> gl1a1300nz .
AQHandles [ 13 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz .
AQHandles [ 13 ] ) ; } if ( localDW -> gl1a1300nz . AQHandles [ 14 ] ) {
sdiTerminateStreaming ( & localDW -> gl1a1300nz . AQHandles [ 14 ] ) ; } if (
localDW -> gl1a1300nz . AQHandles [ 15 ] ) { sdiTerminateStreaming ( &
localDW -> gl1a1300nz . AQHandles [ 15 ] ) ; } if ( localDW -> gl1a1300nz .
AQHandles [ 16 ] ) { sdiTerminateStreaming ( & localDW -> gl1a1300nz .
AQHandles [ 16 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
hxmqkbfltt . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
hxmqkbfltt . AQHandles [ 0 ] ) ; } if ( localDW -> hxmqkbfltt . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> hxmqkbfltt . AQHandles [ 1 ] ) ; }
if ( localDW -> hxmqkbfltt . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> hxmqkbfltt . AQHandles [ 2 ] ) ; } if ( localDW -> hxmqkbfltt .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> hxmqkbfltt .
AQHandles [ 3 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
iaya40yldr2f . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
iaya40yldr2f . AQHandles [ 0 ] ) ; } if ( localDW -> iaya40yldr2f . AQHandles
[ 1 ] ) { sdiTerminateStreaming ( & localDW -> iaya40yldr2f . AQHandles [ 1 ]
) ; } if ( localDW -> iaya40yldr2f . AQHandles [ 2 ] ) {
sdiTerminateStreaming ( & localDW -> iaya40yldr2f . AQHandles [ 2 ] ) ; } if
( localDW -> iaya40yldr2f . AQHandles [ 3 ] ) { sdiTerminateStreaming ( &
localDW -> iaya40yldr2f . AQHandles [ 3 ] ) ; } } if ( ( ssGetSimMode (
a5ree4wwe5 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> kjwyipugjd .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> kjwyipugjd .
AQHandles [ 0 ] ) ; } if ( localDW -> kjwyipugjd . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> kjwyipugjd . AQHandles [ 1 ] ) ; } if (
localDW -> kjwyipugjd . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW
-> kjwyipugjd . AQHandles [ 2 ] ) ; } if ( localDW -> kjwyipugjd . AQHandles
[ 3 ] ) { sdiTerminateStreaming ( & localDW -> kjwyipugjd . AQHandles [ 3 ] )
; } } if ( ( ssGetSimMode ( a5ree4wwe5 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
d0spjcrzgo . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
d0spjcrzgo . AQHandles [ 0 ] ) ; } if ( localDW -> d0spjcrzgo . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> d0spjcrzgo . AQHandles [ 1 ] ) ; }
if ( localDW -> d0spjcrzgo . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> d0spjcrzgo . AQHandles [ 2 ] ) ; } if ( localDW -> d0spjcrzgo .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> d0spjcrzgo .
AQHandles [ 3 ] ) ; } if ( localDW -> d0spjcrzgo . AQHandles [ 4 ] ) {
sdiTerminateStreaming ( & localDW -> d0spjcrzgo . AQHandles [ 4 ] ) ; } if (
localDW -> d0spjcrzgo . AQHandles [ 5 ] ) { sdiTerminateStreaming ( & localDW
-> d0spjcrzgo . AQHandles [ 5 ] ) ; } } if ( ( ssGetSimMode ( a5ree4wwe5 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( a5ree4wwe5 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> kd45pbt3ye . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW
-> kd45pbt3ye . AQHandles [ 0 ] ) ; } if ( localDW -> kd45pbt3ye . AQHandles
[ 1 ] ) { sdiTerminateStreaming ( & localDW -> kd45pbt3ye . AQHandles [ 1 ] )
; } if ( localDW -> kd45pbt3ye . AQHandles [ 2 ] ) { sdiTerminateStreaming (
& localDW -> kd45pbt3ye . AQHandles [ 2 ] ) ; } if ( localDW -> kd45pbt3ye .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> kd45pbt3ye .
AQHandles [ 3 ] ) ; } } } void ekywbf3nku ( hcopmldpph * const a5ree4wwe5 ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( a5ree4wwe5
-> _mdlRefSfcnS , "DrivetrainEv" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void ktxb3gprz3 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; akbgnuupjz . P_113 = rtInf ;
akbgnuupjz . P_119 = rtInf ; akbgnuupjz . P_157 = rtInf ; akbgnuupjz . P_208
= rtInf ; ( void ) memset ( ( void * ) a5ree4wwe5 , 0 , sizeof ( hcopmldpph )
) ; a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; a5ree4wwe5
-> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; a5ree4wwe5 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( a5ree4wwe5 -> _mdlRefSfcnS , "DrivetrainEv" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( pw4f2kjo3k ) ) ; { int32_T i ; for ( i = 0 ; i < 12
; i ++ ) { localB -> cpxmevd5ln [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ )
{ localB -> cl0311alh3 . eh3bmirodr [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i
++ ) { localB -> cl0311alh3 . k3pqpt3554 [ i ] = 0.0 ; } for ( i = 0 ; i < 24
; i ++ ) { localB -> cl0311alh3 . myssjwdee1 [ i ] = 0.0 ; } for ( i = 0 ; i
< 5 ; i ++ ) { localB -> f0qvxxi2xz . eh3bmirodr [ i ] = 0.0 ; } for ( i = 0
; i < 16 ; i ++ ) { localB -> f0qvxxi2xz . k3pqpt3554 [ i ] = 0.0 ; } for ( i
= 0 ; i < 24 ; i ++ ) { localB -> f0qvxxi2xz . myssjwdee1 [ i ] = 0.0 ; }
localB -> kn3kq1dbud [ 0 ] = 0.0 ; localB -> kn3kq1dbud [ 1 ] = 0.0 ; localB
-> kn3kq1dbud [ 2 ] = 0.0 ; localB -> if3fq2sidt [ 0 ] = 0.0 ; localB ->
if3fq2sidt [ 1 ] = 0.0 ; localB -> b1gikpnzh3 = 0.0 ; localB -> n1fith1shx =
0.0 ; localB -> iq2zwwqbdw = 0.0 ; localB -> a2kksb5sai = 0.0 ; localB ->
oac32d025c = 0.0 ; localB -> mxxvqktr4f = 0.0 ; localB -> djwjslokxk = 0.0 ;
localB -> hcj35ee5xv = 0.0 ; localB -> anqj4afvmr = 0.0 ; localB ->
mpk1if1idh [ 0 ] = 0.0 ; localB -> mpk1if1idh [ 1 ] = 0.0 ; localB ->
au3s2eolps [ 0 ] = 0.0 ; localB -> au3s2eolps [ 1 ] = 0.0 ; localB ->
dgmodzfvbf = 0.0 ; localB -> noo4kfc5co = 0.0 ; localB -> pkwo5ibqvs = 0.0 ;
localB -> e553emkr15 = 0.0 ; localB -> jvfw3rjn1q = 0.0 ; localB ->
abmh0jgyuh = 0.0 ; localB -> mswq52xs2q = 0.0 ; localB -> gh0swnw3rq = 0.0 ;
localB -> kqttujkp5i [ 0 ] = 0.0 ; localB -> kqttujkp5i [ 1 ] = 0.0 ; localB
-> kqttujkp5i [ 2 ] = 0.0 ; localB -> a1lc0bzspv [ 0 ] = 0.0 ; localB ->
a1lc0bzspv [ 1 ] = 0.0 ; localB -> a1lc0bzspv [ 2 ] = 0.0 ; localB ->
hjgtg4ci21 [ 0 ] = 0.0 ; localB -> hjgtg4ci21 [ 1 ] = 0.0 ; localB ->
hjgtg4ci21 [ 2 ] = 0.0 ; localB -> kbmx45xxxk = 0.0 ; localB -> btwu2npo5h =
0.0 ; localB -> kk5viu1fv5 = 0.0 ; localB -> issejkriht = 0.0 ; localB ->
h32gzij2ks = 0.0 ; localB -> mlzbj1adz0 = 0.0 ; localB -> dkxl3r0irb = 0.0 ;
localB -> afpkcd0buu [ 0 ] = 0.0 ; localB -> afpkcd0buu [ 1 ] = 0.0 ; localB
-> aovczmb0vg = 0.0 ; localB -> cd1kn4apvg = 0.0 ; localB -> fwtwl1sjv5 = 0.0
; localB -> flr3ssss0f = 0.0 ; localB -> dkfg5gymfy = 0.0 ; localB ->
osuttpiuid = 0.0 ; localB -> hvwnw2twcq = 0.0 ; localB -> psjmxsi5db = 0.0 ;
localB -> k4h2lncslm [ 0 ] = 0.0 ; localB -> k4h2lncslm [ 1 ] = 0.0 ; localB
-> cl0311alh3 . c4zmcdhw0l = 0.0 ; localB -> cl0311alh3 . kxfugx0x5t = 0.0 ;
localB -> cl0311alh3 . ocgezqjxeg = 0.0 ; localB -> cl0311alh3 . fgkkhera5y =
0.0 ; localB -> f0qvxxi2xz . c4zmcdhw0l = 0.0 ; localB -> f0qvxxi2xz .
kxfugx0x5t = 0.0 ; localB -> f0qvxxi2xz . ocgezqjxeg = 0.0 ; localB ->
f0qvxxi2xz . fgkkhera5y = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( lvsoqlxlcs ) ) ; localDW -> jdfraz14md = 0.0 ; localDW -> jrm4ykfn0y
= 0.0 ; DrivetrainEv_InitializeDataMapInfo ( a5ree4wwe5 , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( a5ree4wwe5 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
a5ree4wwe5 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( a5ree4wwe5 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig0 ; a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> dgmodzfvbf ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig1 ; a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> n1fith1shx ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig2 ; a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . kzk2m4ro0k ) ; ; a5ree4wwe5
-> nonContDerivSignal [ 3 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig3 ; a5ree4wwe5 -> nonContDerivSignal [ 3 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB -> eblhn1q21v [
0 ] . fd4qjwy5lm . i5fcczml0p . jvxaiqibhb ) ; ; a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig4 ; a5ree4wwe5 -> nonContDerivSignal [ 4 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . pCurrVal = ( char_T * ) ( & localB -> nod5vp1cyy [
0 ] . fate2u2iog . lx5pzbjgnjw . kzk2m4ro0k ) ; ; a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig5 ; a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pCurrVal = ( char_T * ) ( & localB -> nod5vp1cyy [
0 ] . fate2u2iog . jkqilwbv4li . jvxaiqibhb ) ; ; localZCE -> jvitvqlix1 =
UNINITIALIZED_ZCSIG ; localZCE -> jgxptiecam = UNINITIALIZED_ZCSIG ; } void
mr_DrivetrainEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_DrivetrainEv , 254 ) ; * retVal = 1 ; } static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_DrivetrainEv_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DrivetrainEv_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_DrivetrainEv_GetDWork ( const hmke5fx3tcj * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 33 ] = { "mdlrefDW->rtdw.jdfraz14md" ,
"mdlrefDW->rtdw.jrm4ykfn0y" , "mdlrefDW->rtdw.jg0qnrcaox" ,
"mdlrefDW->rtdw.nz2ycl5px5" , "mdlrefDW->rtdw.huxlbxlfje" ,
"mdlrefDW->rtdw.hs0twsijyj" , "mdlrefDW->rtdw.kxp34i0kfp" ,
"mdlrefDW->rtdw.mdigxevyus" , "mdlrefDW->rtdw.bbyh2lmjuh" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.ljqqhws3qf" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.cog0zpqeoa" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.d4ugeviqji" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.aqrptm0tku" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.od5f0hbwjo" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.kevuk2jdkp" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.hgortb0uau" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fkdt002bwx.iojd2jlc3k" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fsjpudim4x.lim0ml1jqw" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.jrdv3hmnoc" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.d3vznomj0x" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.aqualkdqvn.k3j1amkab5" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.hftpkxvzkr" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.azoxgesvxj" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.dufw0vwv3o" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.e230xky3og" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.e1o4vim22a" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ikmpdntrw1" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.f4leq45rjn" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ndg43gdj2cy.iojd2jlc3k" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.hpjac0modfc.lim0ml1jqw" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.jrdv3hmnoc" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.d3vznomj0x" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.lx5pzbjgnjw.k3j1amkab5" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 33 , rtdwDataFieldNames )
; int k0 ; mxSetFieldByNumber ( rtdwData , 0 , 9 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . ljqqhws3qf ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 10 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 11 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . d4ugeviqji ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 12 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . aqrptm0tku ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 13 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . od5f0hbwjo ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 14 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 15 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . hgortb0uau ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 16 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . fkdt002bwx .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 17 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 18 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 19 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 20 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 21 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . hftpkxvzkr ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 22 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . azoxgesvxj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 23 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . dufw0vwv3o ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 24 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . e230xky3og ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 25 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . e1o4vim22a ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 26 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ikmpdntrw1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 27 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . f4leq45rjn ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 28 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ndg43gdj2cy .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 29 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 30 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) )
; mxSetFieldByNumber ( rtdwData , 0 , 31 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 32 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . jdfraz14md ) , sizeof ( mdlrefDW -> rtdw .
jdfraz14md ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( mdlrefDW -> rtdw . jrm4ykfn0y ) , sizeof ( mdlrefDW ->
rtdw . jrm4ykfn0y ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 2
, ( const void * ) & ( mdlrefDW -> rtdw . jg0qnrcaox ) , sizeof ( mdlrefDW ->
rtdw . jg0qnrcaox ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 3
, ( const void * ) & ( mdlrefDW -> rtdw . nz2ycl5px5 ) , sizeof ( mdlrefDW ->
rtdw . nz2ycl5px5 ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 4
, ( const void * ) & ( mdlrefDW -> rtdw . huxlbxlfje ) , sizeof ( mdlrefDW ->
rtdw . huxlbxlfje ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 5
, ( const void * ) & ( mdlrefDW -> rtdw . hs0twsijyj ) , sizeof ( mdlrefDW ->
rtdw . hs0twsijyj ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 6
, ( const void * ) & ( mdlrefDW -> rtdw . kxp34i0kfp ) , sizeof ( mdlrefDW ->
rtdw . kxp34i0kfp ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 7
, ( const void * ) & ( mdlrefDW -> rtdw . mdigxevyus ) , sizeof ( mdlrefDW ->
rtdw . mdigxevyus ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 8
, ( const void * ) & ( mdlrefDW -> rtdw . bbyh2lmjuh ) , sizeof ( mdlrefDW ->
rtdw . bbyh2lmjuh ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex
offset0 = k0 ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
9 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
ljqqhws3qf ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
ljqqhws3qf ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 10 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
cog0zpqeoa ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
cog0zpqeoa ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 11 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
d4ugeviqji ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
d4ugeviqji ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 12 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
aqrptm0tku ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqrptm0tku ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 13 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
od5f0hbwjo ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
od5f0hbwjo ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 14 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
kevuk2jdkp ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
kevuk2jdkp ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 15 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
hgortb0uau ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
hgortb0uau ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 16 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] .
fd4qjwy5lm . fkdt002bwx . iojd2jlc3k ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 17 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . fsjpudim4x .
lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fsjpudim4x . lim0ml1jqw ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 18 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 19 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p .
d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . d3vznomj0x ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 20 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 21 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . hftpkxvzkr ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . hftpkxvzkr ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 22 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . azoxgesvxj ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . azoxgesvxj ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 23 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . dufw0vwv3o ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . dufw0vwv3o ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 24 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . e230xky3og ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . e230xky3og ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 25 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . e1o4vim22a ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . e1o4vim22a ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 26 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ikmpdntrw1 ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ikmpdntrw1 ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 27 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . f4leq45rjn ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . f4leq45rjn ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 28 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ndg43gdj2cy .
iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
ndg43gdj2cy . iojd2jlc3k ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 29 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . hpjac0modfc . lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 30 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li .
jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . jrdv3hmnoc ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 31 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . jkqilwbv4li . d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li . d3vznomj0x ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 32 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . lx5pzbjgnjw .
k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . k3j1amkab5 ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * ) &
( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW ;
return ssDW ; } void mr_DrivetrainEv_SetDWork ( hmke5fx3tcj * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jdfraz14md ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . jdfraz14md ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jrm4ykfn0y ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . jrm4ykfn0y ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jg0qnrcaox ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jg0qnrcaox ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
nz2ycl5px5 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . nz2ycl5px5 ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
huxlbxlfje ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . huxlbxlfje ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hs0twsijyj ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . hs0twsijyj ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kxp34i0kfp ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . kxp34i0kfp ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mdigxevyus ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . mdigxevyus ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bbyh2lmjuh ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . bbyh2lmjuh ) )
; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . ljqqhws3qf ) , rtdwData , 0 , 9 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . ljqqhws3qf ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . cog0zpqeoa ) , rtdwData , 0 , 10 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . d4ugeviqji ) , rtdwData , 0 , 11 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . d4ugeviqji ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . aqrptm0tku ) , rtdwData , 0 , 12 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . aqrptm0tku ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . od5f0hbwjo ) , rtdwData , 0 , 13 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . od5f0hbwjo ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . kevuk2jdkp ) , rtdwData , 0 , 14 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . hgortb0uau ) , rtdwData , 0 , 15 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . hgortb0uau ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fkdt002bwx . iojd2jlc3k ) , rtdwData , 0 ,
16 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , rtdwData , 0 ,
17 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fsjpudim4x . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , rtdwData , 0 ,
18 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . d3vznomj0x ) , rtdwData , 0 ,
19 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , rtdwData , 0 ,
20 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . hftpkxvzkr ) , rtdwData ,
0 , 21 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. hftpkxvzkr ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . azoxgesvxj ) , rtdwData ,
0 , 22 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. azoxgesvxj ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . dufw0vwv3o ) , rtdwData ,
0 , 23 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. dufw0vwv3o ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . e230xky3og ) , rtdwData ,
0 , 24 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. e230xky3og ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . e1o4vim22a ) , rtdwData ,
0 , 25 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. e1o4vim22a ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ikmpdntrw1 ) , rtdwData ,
0 , 26 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. ikmpdntrw1 ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . f4leq45rjn ) , rtdwData ,
0 , 27 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. f4leq45rjn ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k
) , rtdwData , 0 , 28 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0
] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , rtdwData , 0 ,
29 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
hpjac0modfc . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , rtdwData , 0 ,
30 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . d3vznomj0x ) , rtdwData , 0 ,
31 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , rtdwData , 0 ,
32 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . k3j1amkab5 ) ) ; } } mr_DrivetrainEv_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 227080304U , 2381856430U , 617011751U ,
1844796746U , } ; slmrModelRefRegisterSimStateChecksum ( S , "DrivetrainEv" ,
& chksum [ 0 ] ) ; } mxArray * mr_DrivetrainEv_GetSimStateDisallowedBlocks (
) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif

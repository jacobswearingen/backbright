/* Generated from backbright.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: backbright.scm -output-file backbright.c
   uses: eval extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[33];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,97,52,54,53,32,111,117,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,22),40,119,114,105,116,101,45,98,114,105,103,104,116,110,101,115,115,32,118,97,108,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,102,97,105,108,117,114,101,56,50,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,102,97,105,108,117,114,101,55,49,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,11),40,102,97,105,108,117,114,101,54,48,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word *av) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word *av) C_noret;
C_noret_decl(f_441)
static void C_ccall f_441(C_word c,C_word *av) C_noret;
C_noret_decl(f_444)
static void C_ccall f_444(C_word c,C_word *av) C_noret;
C_noret_decl(f_450)
static void C_ccall f_450(C_word c,C_word *av) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word *av) C_noret;
C_noret_decl(f_460)
static void C_ccall f_460(C_word c,C_word *av) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word *av) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word *av) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word *av) C_noret;
C_noret_decl(f_480)
static void C_ccall f_480(C_word c,C_word *av) C_noret;
C_noret_decl(f_481)
static void C_fcall f_481(C_word t0,C_word t1) C_noret;
C_noret_decl(f_483)
static void C_fcall f_483(C_word t0,C_word t1) C_noret;
C_noret_decl(f_485)
static void C_fcall f_485(C_word t0) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_531)
static void C_ccall f_531(C_word c,C_word *av) C_noret;
C_noret_decl(f_538)
static void C_ccall f_538(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word *av) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word *av) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word *av) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word *av) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_481)
static void C_ccall trf_481(C_word c,C_word *av) C_noret;
static void C_ccall trf_481(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_481(t0,t1);}

C_noret_decl(trf_483)
static void C_ccall trf_483(C_word c,C_word *av) C_noret;
static void C_ccall trf_483(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_483(t0,t1);}

C_noret_decl(trf_485)
static void C_ccall trf_485(C_word c,C_word *av) C_noret;
static void C_ccall trf_485(C_word c,C_word *av){
C_word t0=av[0];
f_485(t0);}

/* k433 */
static void C_ccall f_435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_435,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k436 in k433 */
static void C_ccall f_438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_438,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k439 in k436 in k433 */
static void C_ccall f_441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_441,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("backbright.scm:4: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
av2[2]=lf[32];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k442 in k439 in k436 in k433 */
static void C_ccall f_444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_444,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[0]+1 /* (set! BRIGHTNESS_FILE ...) */,lf[1]);
t3=C_mutate((C_word*)lf[2]+1 /* (set! MAX_BRIGHTNESS_FILE ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("backbright.scm:12: scheme#call-with-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=C_fast_retrieve(lf[2]);
av2[3]=*((C_word*)lf[30]+1);
tp(4,av2);}}

/* k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_450,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[4]+1 /* (set! max-brightness ...) */,t1);
t3=C_s_a_i_quotient(&a,2,C_fast_retrieve(lf[4]),C_fix(100));
t4=C_mutate((C_word*)lf[5]+1 /* (set! min-brightness ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("backbright.scm:17: scheme#call-with-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=C_fast_retrieve(lf[0]);
av2[3]=*((C_word*)lf[30]+1);
tp(4,av2);}}

/* k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_458,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[6]+1 /* (set! current-brightness ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! write-brightness ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_460,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("backbright.scm:24: chicken.process-context#command-line-arguments"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
tp(2,av2);}}

/* write-brightness in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_460,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_466,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("backbright.scm:20: scheme#call-with-output-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=C_fast_retrieve(lf[0]);
av2[3]=t3;
tp(4,av2);}}

/* a465 in write-brightness in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_466,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_470,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("backbright.scm:22: ##sys#check-output-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[11];
tp(5,av2);}}

/* k468 in a465 in write-brightness in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_470,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("backbright.scm:22: ##sys#print"));
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k471 in k468 in a465 in write-brightness in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_473,c,av);}
C_trace(C_text("backbright.scm:22: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(46,c,3)))){
C_save_and_reclaim((void *)f_480,c,av);}
a=C_alloc(46);
t2=C_mutate((C_word*)lf[13]+1 /* (set! args ...) */,t1);
t3=C_fast_retrieve(lf[13]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_481,a[2]=t3,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_i_pairp(C_fast_retrieve(lf[13]));
t7=(C_truep(t6)?C_i_nullp(C_i_cdr(C_fast_retrieve(lf[13]))):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(C_fast_retrieve(lf[13]));
if(C_truep(C_i_equalp(t8,lf[26]))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_662,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_666,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_s_a_i_times(&a,2,C_fast_retrieve(lf[6]),C_fix(2));
C_trace(C_text("backbright.scm:29: scheme#max"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t10;
av2[2]=C_fast_retrieve(lf[5]);
av2[3]=t11;
tp(4,av2);}}
else{
C_trace(C_text("backbright.scm:26: failure60"));
t9=t4;
f_481(t9,t5);}}
else{
C_trace(C_text("backbright.scm:26: failure60"));
t8=t4;
f_481(t8,t5);}}

/* failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_fcall f_481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_481,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_483,a[2]=((C_word*)t0)[2],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_i_nullp(C_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t5,lf[23]))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_608,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_less_or_equalp(C_fast_retrieve(lf[6]),C_fast_retrieve(lf[5])))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_fix(0);
f_608(2,av2);}}
else{
t7=C_s_a_i_quotient(&a,2,C_fast_retrieve(lf[6]),C_fix(2));
C_trace(C_text("backbright.scm:34: scheme#max"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t6;
av2[2]=C_fast_retrieve(lf[5]);
av2[3]=t7;
tp(4,av2);}}}
else{
C_trace(C_text("backbright.scm:26: failure71"));
t6=t2;
f_483(t6,t1);}}
else{
C_trace(C_text("backbright.scm:26: failure71"));
t5=t2;
f_483(t5,t1);}}

/* failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_fcall f_483(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_483,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_485,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,lf[17]))){
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_nullp(C_i_cdr(t4)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t4);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_525,a[2]=t9,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("backbright.scm:37: scheme#string->number"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t10;
av2[2]=t7;
tp(3,av2);}}
else{
C_trace(C_text("backbright.scm:26: failure82"));
f_485(t1);}}
else{
C_trace(C_text("backbright.scm:26: failure82"));
f_485(t1);}}
else{
C_trace(C_text("backbright.scm:26: failure82"));
f_485(t1);}}

/* failure82 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_fcall f_485(C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_485,1,t1);}
C_trace(C_text("backbright.scm:43: chicken.base#error"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=lf[15];
av2[3]=lf[16];
tp(4,av2);}}

/* k523 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_525,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_i_exact_integerp(((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_528(2,av2);}}
else{
C_trace(C_text("backbright.scm:39: chicken.base#error"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=lf[15];
av2[3]=lf[21];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k526 in k523 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_528,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_less_or_equalp(((C_word*)((C_word*)t0)[3])[1],C_fix(100));
t4=(C_truep(t3)?C_i_greater_or_equalp(((C_word*)((C_word*)t0)[3])[1],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_531(2,av2);}}
else{
C_trace(C_text("backbright.scm:41: chicken.base#error"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=lf[15];
av2[3]=lf[20];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k529 in k526 in k523 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_531,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_546,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("backbright.scm:42: scheme#/"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(100);
tp(4,av2);}}

/* k536 in k529 in k526 in k523 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_538,c,av);}
C_trace(C_text("backbright.scm:42: write-brightness"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k544 in k529 in k526 in k523 in failure71 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_546,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,C_fast_retrieve(lf[4]),t1);
C_trace(C_text("backbright.scm:42: scheme#ceiling"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* k606 in failure60 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_608,c,av);}
C_trace(C_text("backbright.scm:32: write-brightness"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k635 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_637,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2=av;
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t2;
tp(2,av2);}}

/* k641 in k635 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_643,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k660 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_662,c,av);}
C_trace(C_text("backbright.scm:28: write-brightness"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k664 in k478 in k456 in k448 in k442 in k439 in k436 in k433 */
static void C_ccall f_666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_666,c,av);}
C_trace(C_text("backbright.scm:28: scheme#min"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[4]);
av2[3]=t1;
tp(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(175))){
C_save(t1);
C_rereclaim2(175*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,33);
lf[0]=C_h_intern(&lf[0],15, C_text("BRIGHTNESS_FILE"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376B\000\000//sys/class/backlight/intel_backlight/brightness"));
lf[2]=C_h_intern(&lf[2],19, C_text("MAX_BRIGHTNESS_FILE"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376B\000\0003/sys/class/backlight/intel_backlight/max_brightness"));
lf[4]=C_h_intern(&lf[4],14, C_text("max-brightness"));
lf[5]=C_h_intern(&lf[5],14, C_text("min-brightness"));
lf[6]=C_h_intern(&lf[6],18, C_text("current-brightness"));
lf[7]=C_h_intern(&lf[7],16, C_text("write-brightness"));
lf[8]=C_h_intern(&lf[8],18, C_text("##sys#write-char-0"));
lf[9]=C_h_intern(&lf[9],11, C_text("##sys#print"));
lf[10]=C_h_intern(&lf[10],23, C_text("##sys#check-output-port"));
lf[11]=C_h_intern(&lf[11],7, C_text("fprintf"));
lf[12]=C_h_intern(&lf[12],28, C_text("scheme#call-with-output-file"));
lf[13]=C_h_intern(&lf[13],4, C_text("args"));
lf[14]=C_h_intern(&lf[14],18, C_text("chicken.base#error"));
lf[15]=C_h_intern(&lf[15],10, C_text("brightness"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042operation must be inc, dec, or set"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003set"));
lf[18]=C_h_intern(&lf[18],14, C_text("scheme#ceiling"));
lf[19]=C_h_intern(&lf[19],8, C_text("scheme#/"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000+expected a value between 0 and 100, got: ~a"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034expected an integer, got: ~a"));
lf[22]=C_h_intern(&lf[22],21, C_text("scheme#string->number"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003dec"));
lf[24]=C_h_intern(&lf[24],10, C_text("scheme#max"));
lf[25]=C_h_intern(&lf[25],34, C_text("chicken.base#implicit-exit-handler"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003inc"));
lf[27]=C_h_intern(&lf[27],10, C_text("scheme#min"));
lf[28]=C_h_intern(&lf[28],46, C_text("chicken.process-context#command-line-arguments"));
lf[29]=C_h_intern(&lf[29],27, C_text("scheme#call-with-input-file"));
lf[30]=C_h_intern(&lf[30],11, C_text("scheme#read"));
lf[31]=C_h_intern(&lf[31],27, C_text("chicken.load#load-extension"));
lf[32]=C_h_intern(&lf[32],9, C_text("matchable"));
C_register_lf2(lf,33,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_435,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[26] = {
{C_text("f_435:backbright_2escm"),(void*)f_435},
{C_text("f_438:backbright_2escm"),(void*)f_438},
{C_text("f_441:backbright_2escm"),(void*)f_441},
{C_text("f_444:backbright_2escm"),(void*)f_444},
{C_text("f_450:backbright_2escm"),(void*)f_450},
{C_text("f_458:backbright_2escm"),(void*)f_458},
{C_text("f_460:backbright_2escm"),(void*)f_460},
{C_text("f_466:backbright_2escm"),(void*)f_466},
{C_text("f_470:backbright_2escm"),(void*)f_470},
{C_text("f_473:backbright_2escm"),(void*)f_473},
{C_text("f_480:backbright_2escm"),(void*)f_480},
{C_text("f_481:backbright_2escm"),(void*)f_481},
{C_text("f_483:backbright_2escm"),(void*)f_483},
{C_text("f_485:backbright_2escm"),(void*)f_485},
{C_text("f_525:backbright_2escm"),(void*)f_525},
{C_text("f_528:backbright_2escm"),(void*)f_528},
{C_text("f_531:backbright_2escm"),(void*)f_531},
{C_text("f_538:backbright_2escm"),(void*)f_538},
{C_text("f_546:backbright_2escm"),(void*)f_546},
{C_text("f_608:backbright_2escm"),(void*)f_608},
{C_text("f_637:backbright_2escm"),(void*)f_637},
{C_text("f_643:backbright_2escm"),(void*)f_643},
{C_text("f_662:backbright_2escm"),(void*)f_662},
{C_text("f_666:backbright_2escm"),(void*)f_666},
{C_text("toplevel:backbright_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  chicken.format#fprintf		1
o|eliminated procedure checks: 1 
o|propagated global variable: v5457 args 
o|replaced variables: 57 
o|removed binding forms: 20 
o|removed binding forms: 46 
o|simplifications: ((if . 2) (##core#call . 26)) 
o|  call simplifications:
o|    scheme#quotient	2
o|    scheme#equal?	3
o|    scheme#pair?	4
o|    scheme#cdr	4
o|    scheme#null?	3
o|    scheme#car	4
o|    chicken.base#exact-integer?
o|    scheme#<=	2
o|    scheme#>=
o|    scheme#*	2
o|contracted procedure: k452 
o|contracted procedure: k498 
o|contracted procedure: k501 
o|contracted procedure: k504 
o|contracted procedure: k510 
o|contracted procedure: k519 
o|contracted procedure: k540 
o|contracted procedure: k553 
o|contracted procedure: k547 
o|contracted procedure: k559 
o|contracted procedure: k571 
o|contracted procedure: k578 
o|contracted procedure: k593 
o|contracted procedure: k599 
o|contracted procedure: k609 
o|contracted procedure: k616 
o|contracted procedure: k625 
o|contracted procedure: k632 
o|contracted procedure: k647 
o|contracted procedure: k653 
o|contracted procedure: k668 
o|contracted procedure: k677 
o|contracted procedure: k684 
o|propagated global variable: v5457 args 
o|simplifications: ((if . 3) (let . 8)) 
o|removed binding forms: 23 
o|contracted procedure: k516 
o|contracted procedure: k590 
o|contracted procedure: k644 
o|propagated global variable: v5457 args 
o|removed binding forms: 3 
o|customizable procedures: (failure6068 failure7179 failure8290) 
o|calls to known targets: 10 
o|dropping unused closure argument: f_485 
*/
/* end of file */

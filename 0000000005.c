#include "w2c2_base.h"

#include "rustpython.h"

void f530(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l2;
si2=l4;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=8U;
si2=l2;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=31U;
si0>>=(si1&31);
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si4=20U;
si3+=si4;
f511(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l1;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f531(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1049528U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=234U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l4;
si2=l2;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si1=si3?si1:si2;
si2=l0;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1049528U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=235U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l4;
si2=l2;
si0=f621(i,si0,si1,si2);
l3=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f532(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

void f533(rustpythonInstance*i,U32 l0) {
L0:;
}

void f534(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=1328U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l7=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=1U;
l8=si0;
si0=4U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
l7=si0;
si0=l9;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L21;
default:
goto L22;
}
L22:;
si0=l9;
si1=-7U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
si0=6U;
l7=si0;
goto L20;
L21:;
si0=0U;
l8=si0;
si0=5U;
l7=si0;
si0=0U;
l9=si0;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=3576U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l5;
si1=584U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=3436U;
si1+=si2;
l12=si1;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=l7;
si3=312U;
si2*=si3;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l14=si1;
si2=l7;
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+584U,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si0=l5;
si1=1072U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l15;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l14;
si1=l7;
si2=1U;
si1+=si2;
l1=si1;
si0-=si1;
si1=l15;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l11;
si1=3436U;
si0+=si1;
si1=l12;
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
si2=l15;
si3=12U;
si2*=si3;
si0=f15143(i,si0,si1,si2);
si0=l11;
si1=l6;
si2=l1;
si3=312U;
si2*=si3;
si1+=si2;
si2=l15;
si3=312U;
si2*=si3;
si0=f15143(i,si0,si1,si2);
l15=si0;
si0=l6;
si1=l7;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=328U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=328U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=328U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=672U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=328U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=328U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=384U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=392U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=732U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=1072U;
si0+=si1;
si1=l5;
si2=328U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l15;
si2=l8;
si0=si2?si0:si1;
l17=si0;
si1=3436U;
si0+=si1;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l17;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l7=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L19:;
si0=l6;
si1=3436U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l9=si1;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L23;
L24:;
si0=l8;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l15;
si2=l7;
si3=l9;
si2-=si3;
l8=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l15;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
si1=l6;
si2=l9;
si3=312U;
si2*=si3;
si1+=si2;
si2=l8;
si3=312U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
L23:;
si0=l6;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
si1=l3;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
goto L16;
L18:;
si0=l1;
si1=12U;
si0+=si1;
si1=l1;
si2=l7;
si3=l9;
si2-=si3;
l13=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=312U;
si0+=si1;
si1=l1;
si2=l13;
si3=312U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
L17:;
si0=l10;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l18=si0;
si0=l17;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
si1=l3;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l17;
si1=l7;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=984U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=732U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l16;
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l17;
l6=si0;
L16:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l5;
si1=584U;
si0+=si1;
si1=l5;
si2=984U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=328U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+3432U);
l1=si0;
if(si0){
goto L27;
}
si0=0U;
l12=si0;
goto L26;
L27:;
si0=l5;
si1=984U;
si0+=si1;
si1=16U;
si0+=si1;
l14=si0;
si0=l5;
si1=584U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si0=0U;
l12=si0;
si0=l15;
l19=si0;
si0=l16;
l20=si0;
L28:;
{
si0=l1;
l8=si0;
si0=l10;
si1=l12;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
si1=3568U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l6=si0;
si0=l8;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l12=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=1U;
l21=si0;
si0=l6;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l6;
l3=si0;
si0=4U;
l6=si0;
goto L32;
L33:;
si0=l6;
l3=si0;
si0=l6;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L34;
default:
goto L35;
}
L35:;
si0=l6;
si1=-7U;
si0+=si1;
l3=si0;
si0=0U;
l21=si0;
si0=6U;
l6=si0;
goto L32;
L34:;
si0=0U;
l21=si0;
si0=5U;
l6=si0;
si0=0U;
l3=si0;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=3624U;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si1=0U;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l5;
si1=1056U;
si0+=si1;
si1=8U;
si0+=si1;
l22=si0;
si1=l8;
si2=3436U;
si1+=si2;
l23=si1;
si2=l6;
si3=12U;
si2*=si3;
si1+=si2;
l2=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l8;
si2=l6;
si3=312U;
si2*=si3;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=16U;
si0+=si1;
l25=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=24U;
si0+=si1;
l26=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=32U;
si0+=si1;
l27=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=40U;
si0+=si1;
l28=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=48U;
si0+=si1;
l29=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l8;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l30=si1;
si2=l6;
si3=-1U;
si2^=si3;
si1+=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1056U,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si0=l5;
si1=1072U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l30;
si1=l6;
si2=1U;
si1+=si2;
l15=si1;
si0-=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=3436U;
si0+=si1;
si1=l23;
si2=l15;
si3=12U;
si2*=si3;
si1+=si2;
si2=l7;
si3=12U;
si2*=si3;
si0=f15143(i,si0,si1,si2);
si0=l11;
si1=l8;
si2=l15;
si3=312U;
si2*=si3;
si1+=si2;
si2=l7;
si3=312U;
si2*=si3;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l8;
si1=l6;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=984U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=24U;
si0+=si1;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=32U;
si0+=si1;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=40U;
si0+=si1;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=48U;
si0+=si1;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+1056U);
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l5;
si1=732U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l1=si0;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l12;
si1=l6;
si0-=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l10;
si1=1U;
si0+=si1;
l12=si0;
si0=l2;
si1=3576U;
si0+=si1;
si1=l8;
si2=l15;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=3576U;
si1+=si2;
si2=l6;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l15=si0;
si0=0U;
l6=si0;
L37:;
{
si0=l15;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l6;
si1=l6;
si2=l1;
si1=si1 < si2;
si0+=si1;
l6=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L37;
}
}
L36:;
si0=l5;
si1=656U;
si0+=si1;
si1=l5;
si2=984U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=1072U;
si0+=si1;
si1=l5;
si2=732U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l2;
si2=l21;
si0=si2?si0:si1;
l6=si0;
si1=3436U;
si0+=si1;
l15=si0;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L31:;
si0=l8;
si1=3436U;
si0+=si1;
l2=si0;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l12;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L38;
L39:;
si0=l2;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l7;
si2=l12;
si3=l6;
si2-=si3;
l2=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
si1=l8;
si2=l6;
si3=312U;
si2*=si3;
si1+=si2;
si2=l2;
si3=312U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
L38:;
si0=l12;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=l6;
si2=312U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l20;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=l13;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l13;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l13;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=60U;
si0+=si1;
si1=l5;
si2=328U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=3576U;
si0+=si1;
l7=si0;
si0=l12;
si1=2U;
si0+=si1;
l15=si0;
si0=l6;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l12;
si3=l6;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
L40:;
si0=l8;
si1=l2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l7;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l12;
si1=l6;
si0-=si1;
l15=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l8;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3580U;
si0+=si1;
l6=si0;
L42:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l15;
si1=3U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l1;
si1=3U;
si0+=si1;
l6=si0;
si0=-2U;
si1=l12;
si0-=si1;
l2=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=l8;
si0+=si1;
si1=3588U;
si0+=si1;
l1=si0;
L43:;
{
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l6;
si2=4U;
si1+=si2;
l6=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L43;
}
goto L25;
}
L30:;
si0=l15;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
si1=l1;
si2=l10;
si3=l3;
si2-=si3;
l15=si2;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si2=312U;
si1*=si2;
si0+=si1;
si1=l6;
si2=l3;
si3=312U;
si2*=si3;
si1+=si2;
si2=l15;
si3=312U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
L29:;
si0=l10;
si1=1U;
si0+=si1;
l15=si0;
si0=l6;
si1=l3;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l20;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=48U;
si0+=si1;
si1=l13;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l13;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l13;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=60U;
si0+=si1;
si1=l5;
si2=328U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=3576U;
si0+=si1;
l1=si0;
si0=l3;
si1=2U;
si0+=si1;
l20=si0;
si1=l10;
si2=2U;
si1+=si2;
l21=si1;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l1;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l10;
si3=l3;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
L44:;
si0=l1;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l15;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l7;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l10;
si1=l3;
si0-=si1;
l21=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l6;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3580U;
si0+=si1;
l1=si0;
L47:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l21;
si1=3U;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l7;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l10;
si0-=si1;
l3=si0;
si0=l6;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3588U;
si0+=si1;
l7=si0;
L48:;
{
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L48;
}
}
L45:;
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l16;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=584U;
si0+=si1;
si1=l5;
si2=256U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=328U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l2;
l19=si0;
si0=l12;
l10=si0;
si0=l8;
l6=si0;
si0=l16;
l20=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+3432U);
l1=si0;
if(si0){
goto L28;
}
}
L26:;
si0=l5;
si1=1072U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=72U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=3624U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+3576U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l12;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l1=si0;
si1=10U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si2=1U;
si1+=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l6;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
si1=3444U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3436U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+1088U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l5;
si2=1128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l5;
si2=1136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=60U;
si0+=si1;
si1=l5;
si2=328U;
si1+=si2;
si2=252U;
si0=f15143(i,si0,si1,si2);
si0=l11;
si1=l7;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=3576U;
si0+=si1;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L25:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l5;
si1=1328U;
si0+=si1;
i->g0=si0;
goto L0;
L13:;
si0=8U;
si1=3576U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l15;
si1=11U;
si2=1093372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1093404U;
si1=53U;
si2=1093460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=3624U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=11U;
si2=1093372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=12U;
si2=1093388U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1092956U;
si1=43U;
si2=1093096U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=8U;
si1=3624U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1093252U;
si1=48U;
si2=1093300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1093112U;
si1=32U;
si2=1093236U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f535(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l9=si0;
si0=4U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
l8=si0;
si0=l10;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
default:
goto L5;
}
L5:;
si0=l10;
si1=-7U;
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
si0=6U;
l8=si0;
goto L3;
L4:;
si0=0U;
l9=si0;
si0=5U;
l8=si0;
si0=0U;
l10=si0;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=184U;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l13=si1;
si2=l8;
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l14=si1;
si0-=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=88U;
si0+=si1;
l13=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l7;
si1=l15;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l12;
si1=l7;
si2=l14;
si3=3U;
si2<<=(si3&31);
l14=si2;
si1+=si2;
si2=l1;
si3=3U;
si2<<=(si3&31);
l1=si2;
si0=f15143(i,si0,si1,si2);
l19=si0;
si1=88U;
si0+=si1;
si1=l13;
si2=l14;
si1+=si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l8;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=0U;
l13=si0;
si0=l7;
si1=l19;
si2=l9;
si0=si2?si0:si1;
l20=si0;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
l1=si1;
si2=8U;
si1+=si2;
l14=si1;
si0+=si1;
si1=l20;
si2=l1;
si1+=si2;
si2=l8;
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l19=si2;
si0=f15144(i,si0,si1,si2);
si0=l20;
si1=88U;
si0+=si1;
l21=si0;
si1=l14;
si0+=si1;
si1=l21;
si2=l1;
si1+=si2;
si2=l19;
si0=f15144(i,si0,si1,si2);
L19:;
si0=l11;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l22=si0;
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l8;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
l13=si0;
L23:;
{
si0=l7;
l8=si0;
si0=l18;
l9=si0;
si0=l15;
l14=si0;
si0=l16;
l19=si0;
si0=l17;
l21=si0;
si0=l12;
l23=si0;
si0=l1;
l7=si0;
si0=l11;
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
si1=180U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l13=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=1U;
l2=si0;
si0=l1;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l1;
l3=si0;
si0=4U;
l1=si0;
goto L24;
L25:;
si0=l1;
l3=si0;
si0=l1;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L26;
default:
goto L27;
}
L27:;
si0=l1;
si1=-7U;
si0+=si1;
l3=si0;
si0=0U;
l2=si0;
si0=6U;
l1=si0;
goto L24;
L26:;
si0=0U;
l2=si0;
si0=5U;
l1=si0;
si0=0U;
l3=si0;
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=232U;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l12;
si1=0U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l5=si1;
si2=l1;
si3=-1U;
si2^=si3;
si1+=si2;
l8=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l8;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
l4=si1;
si0-=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si1=88U;
si0+=si1;
l24=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l7;
si1=l5;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l12;
si1=l7;
si2=l4;
si3=3U;
si2<<=(si3&31);
l25=si2;
si1+=si2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l8=si2;
si0=f15143(i,si0,si1,si2);
l5=si0;
si1=88U;
si0+=si1;
si1=l24;
si2=l25;
si1+=si2;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=1U;
si0+=si1;
l24=si0;
si0=l8;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l13;
si1=l1;
si0-=si1;
l1=si0;
si1=l24;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l11;
si1=1U;
si0+=si1;
l13=si0;
si0=l5;
si1=184U;
si0+=si1;
si1=l7;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=184U;
si1+=si2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=0U;
l1=si0;
L29:;
{
si0=l4;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L29;
}
}
L28:;
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si1=l7;
si2=l5;
si3=l2;
si1=si3?si1:si2;
l11=si1;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l2=si1;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l11;
si1=l8;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l11;
si2=l3;
si3=3U;
si2<<=(si3&31);
l5=si2;
si1+=si2;
si2=l2;
si3=l3;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l4=si2;
si0=f15144(i,si0,si1,si2);
si0=l11;
si1=88U;
si0+=si1;
l24=si0;
si1=l1;
si0+=si1;
si1=l24;
si2=l5;
si1+=si2;
si2=l4;
si0=f15144(i,si0,si1,si2);
L30:;
si0=l2;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=184U;
si0+=si1;
l1=si0;
si0=l3;
si1=2U;
si0+=si1;
l9=si0;
si1=l2;
si2=2U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l1;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=l3;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
L31:;
si0=l1;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l2;
si1=l3;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l11;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=188U;
si0+=si1;
l1=si0;
L34:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l8;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l9;
si1=3U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l8;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l2;
si0-=si1;
l4=si0;
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=196U;
si0+=si1;
l8=si0;
L35:;
{
si0=l8;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l4;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L32:;
si0=l13;
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=232U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si1=0U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=0U;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l13;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=10U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l11=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=88U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l11;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=184U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l1;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=l13;
si0=si0 >= si1;
l5=si0;
if(si0){
goto L36;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l7;
si2=l1;
si3=3U;
si2<<=(si3&31);
l4=si2;
si1+=si2;
si2=l13;
si3=l1;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l12=si2;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=88U;
si0+=si1;
l3=si0;
si1=l11;
si0+=si1;
si1=l3;
si2=l4;
si1+=si2;
si2=l12;
si0=f15144(i,si0,si1,si2);
L36:;
si0=l13;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=92U;
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=88U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=184U;
si0+=si1;
l11=si0;
si0=l13;
si1=2U;
si0+=si1;
l12=si0;
si0=l5;
if(si0){
goto L37;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l13;
si3=l1;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
L37:;
si0=l7;
si1=l4;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l13;
si1=l1;
si0-=si1;
l4=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=188U;
si0+=si1;
l1=si0;
L39:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l8;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l8;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l13;
si0-=si1;
l5=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=196U;
si0+=si1;
l8=si0;
L40:;
{
si0=l8;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L40;
}
}
L20:;
si0=l20;
l7=si0;
goto L1;
L18:;
si0=4U;
si1=184U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l1;
si1=11U;
si2=1093372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1093404U;
si1=53U;
si2=1093460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=4U;
si1=232U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l8;
si1=11U;
si2=1093372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l24;
si1=12U;
si2=1093388U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1092956U;
si1=43U;
si2=1093096U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=4U;
si1=232U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1093252U;
si1=48U;
si2=1093300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1093112U;
si1=32U;
si2=1093236U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l7;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l7;
si2=l10;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
si2=l8;
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l12=si2;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=88U;
si0+=si1;
l13=si0;
si1=l1;
si0+=si1;
si1=l13;
si2=l11;
si1+=si2;
si2=l12;
si0=f15144(i,si0,si1,si2);
L41:;
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l8;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+182U,si1);
L1:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f536(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=3U;
si0&=si1;
l5=si0;
if(si0){
goto L3;
}
si0=l4;
l6=si0;
goto L2;
L3:;
si0=l4;
l6=si0;
L4:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L2:;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
L5:;
{
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
l6=si0;
L7:;
{
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
goto L8;
L9:;
sj0=l12;
l14=sj0;
si0=l11;
l13=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=0U;
l11=si0;
si0=l8;
si1=l7;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
l8=si0;
goto L10;
L11:;
si0=l8;
si1=16U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
sj0=l14;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l6;
l8=si0;
si0=l5;
l11=si0;
goto L10;
L12:;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l7;
l8=si0;
sj0=l14;
l12=sj0;
si0=l5;
l13=si0;
goto L10;
L13:;
si0=l8;
si1=32U;
si0+=si1;
l6=si0;
si0=l8;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sj0=l14;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
l12=sj1;
si0=sj0 == sj1;
if(si0){
goto L14;
}
si0=l6;
l8=si0;
si0=l5;
l13=si0;
goto L10;
L14:;
L15:;
{
si0=l11;
l13=si0;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
l8=si0;
si0=0U;
l11=si0;
sj0=l14;
l12=sj0;
goto L10;
L16:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l14;
sj1=l12;
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
L10:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l6=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=0U;
l4=si0;
L26:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
si1=11U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L24;
}
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=192U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=144U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
L27:;
{
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=192U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
goto L27;
}
L23:;
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=92U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L18;
L22:;
si0=8U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=8U;
si1=144U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=8U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l6=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l1=si1;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=92U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=3U;
si0&=si1;
l5=si0;
if(si0){
goto L29;
}
si0=l4;
l6=si0;
goto L28;
L29:;
si0=l4;
l6=si0;
L30:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
L28:;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
L31:;
{
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L31;
}
}
L18:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
goto L7;
L17:;
}
si0=1093112U;
si1=32U;
si2=1093236U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L32;
}
si0=l10;
f15024(i,si0);
L32:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L34:;
{
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si1=144U;
si0+=si1;
l8=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l3=si0;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l8;
si1=l1;
si2=-1U;
si1+=si2;
l0=si1;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l7=si0;
si1=5U;
si2=l3;
si1-=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l1;
si1=l7;
si2=l8;
si1-=si2;
l11=si1;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=5U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l6;
si1=92U;
si0+=si1;
l13=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l13;
si2=l3;
si3=2U;
si2<<=(si3&31);
l15=si2;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=l11;
si2=1U;
si1+=si2;
l8=si1;
si0-=si1;
l7=si0;
si1=4U;
si2=l3;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l6;
si1=l1;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si3=3U;
si2<<=(si3&31);
l10=si2;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l13;
si1=l1;
si2=92U;
si1+=si2;
l16=si1;
si2=l8;
si3=2U;
si2<<=(si3&31);
l17=si2;
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
l8=si2;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l16;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l0;
si1=l1;
si2=l11;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l9;
si0+=si1;
si1=92U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l8;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l3;
si1=144U;
si0+=si1;
l5=si0;
si1=l2;
si0+=si1;
si1=l5;
si2=l15;
si3=4U;
si2+=si3;
si0=f15144(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l17;
si1+=si2;
si2=144U;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l5=si0;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=2U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=3U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=4U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
goto L35;
L38:;
si0=1093532U;
si1=25U;
si2=1093560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1093316U;
si1=40U;
si2=1093356U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1093476U;
si1=39U;
si2=1093516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l6;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L34;
}
}
L33:;
L0:;
}

void f537(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
L3:;
{
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1096388U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=52U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l5;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l2;
si0+=si1;
si1=l9;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
f15024(i,si0);
L5:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
L8:;
{
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1096388U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=52U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l5;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l2;
si0+=si1;
si1=l9;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
f15024(i,si0);
L10:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f538(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
f518(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+12U);
l3=si2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=l2;
si0-=si1;
l5=si0;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=l5;
si1-=si2;
l3=si1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l1;
si2=l2;
si3=12U;
si2*=si3;
si1+=si2;
si2=l5;
si3=12U;
si2*=si3;
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l0;
si2=l3;
si3=12U;
si2*=si3;
si0=f15143(i,si0,si1,si2);
L1:;
L0:;
}

U32 f539(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l0;
si2=l1;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l1=si0;
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L1:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f540(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L7;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l8=si0;
L8:;
{
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l7=si0;
goto L1;
L9:;
si0=l6;
si1=l7;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l7;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l3=si0;
si0=l8;
si1=l7;
si0-=si1;
l7=si0;
si0=l6;
l1=si0;
si0=l5;
l2=si0;
goto L1;
L10:;
si0=l7;
si1=l8;
si2=1093924U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l7;
si2=1093892U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l3;
si2=1093908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f541(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
L8:;
{
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L8;
}
L7:;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l1=si0;
si0=l5;
si1=l7;
si0-=si1;
l2=si0;
goto L1;
L6:;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l1=si0;
si0=l7;
si1=l2;
si0-=si1;
l2=si0;
goto L1;
L9:;
si0=l2;
si1=l7;
si2=1093940U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=l5;
si2=1093956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f542(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=1093988U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l5;
si2=1093972U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1093736U;
si1=35U;
si2=1093876U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f543(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f544(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1094192U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f545(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1094228U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1094236U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1094312U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f546(rustpythonInstance*i,U32 l0) {
L0:;
}

void f547(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f548(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f549(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f550(rustpythonInstance*i,U32 l0) {
L0:;
}

void f551(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

U32 f552(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l1=si0;
goto L2;
L5:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=4U;
l1=si0;
goto L2;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l3;
f515(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l1=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=l1;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f553(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1094192U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f554(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l2;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f555(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l1=si0;
goto L2;
L5:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=4U;
l1=si0;
goto L2;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l3;
f515(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l1=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=l1;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f556(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l2;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f557(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f558(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=236U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
l9=si0;
goto L2;
L4:;
si0=l5;
l9=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0-=si1;
si1=l8;
si2=1U;
si1+=si2;
l10=si1;
si2=l5;
si1-=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l5;
si2=l11;
f524(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
L5:;
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l11;
si1=3U;
si0&=si1;
l10=si0;
si0=l8;
si1=l5;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=-4U;
si0&=si1;
l11=si0;
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L8:;
{
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=l10;
si0+=si1;
l11=si0;
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L9:;
{
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
si0=l11;
l9=si0;
L6:;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L2;
L3:;
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=0U;
si2=1U;
f524(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L11;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L11:;
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
f15024(i,si0);
L12:;
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=0U;
si1=0U;
si2=1088988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L1;
L13:;
si0=l8;
si1=l9;
si2=1088988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f559(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=200U;
si1+=si2;
f560(i,si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
f561(i,si0,si1);
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
l5=si0;
si0=0U;
l6=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L8;
}
si0=0U;
l8=si0;
goto L7;
L8:;
si0=4U;
l8=si0;
si0=0U;
l9=si0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l10;
si1=12U;
si0*=si1;
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l11;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
l9=si0;
L9:;
si0=l8;
si1=l7;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l10;
sj0=(U64)(si0);
l12=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l13=sj0;
L7:;
si0=l1;
si1=160U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l14=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l9=si0;
if(si0){
goto L10;
}
goto L3;
L10:;
si0=0U;
l11=si0;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L11;
}
si0=4U;
l6=si0;
goto L4;
L11:;
si0=l1;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l15;
if(si0){
goto L5;
}
si0=4U;
l6=si0;
goto L4;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
l11=si0;
L4:;
si0=l6;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L3:;
si0=l0;
si1=200U;
si0+=si1;
si1=l2;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=196U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=192U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=184U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=180U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=176U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=172U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l0;
si1=l2;
si2=88U;
si1+=si2;
si2=152U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si1=292U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l1;
si1=160U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l2;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f560(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L11;
}
si0=0U;
l10=si0;
goto L10;
L11:;
si0=4U;
l10=si0;
si0=0U;
l11=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l13;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l13;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
l11=si0;
L12:;
si0=l10;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l12;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
if(si0){
goto L14;
}
goto L13;
L14:;
si0=4U;
l8=si0;
si0=0U;
l11=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l15;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
l11=si0;
L15:;
si0=l8;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l12;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L13:;
si0=0U;
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
if(si0){
goto L17;
}
si0=0U;
l9=si0;
goto L16;
L17:;
si0=4U;
l9=si0;
si0=0U;
l17=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
l17=si0;
L18:;
si0=l9;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l15=si0;
if(si0){
goto L20;
}
goto L19;
L20:;
si0=4U;
l12=si0;
si0=0U;
l17=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
l17=si0;
L21:;
si0=l12;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l20=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l20;
sj0|=sj1;
l20=sj0;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l15=si0;
if(si0){
goto L22;
}
si0=0U;
l1=si0;
goto L6;
L22:;
si0=0U;
l17=si0;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L23;
}
si0=4U;
l1=si0;
goto L7;
L23:;
si0=l11;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l11;
si1=4U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l18;
if(si0){
goto L8;
}
si0=4U;
l1=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l18;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l18;
l17=si0;
L7:;
si0=l1;
si1=l15;
si2=l17;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=80U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=4U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f561(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 l27=0;
U64 l28=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
if(si0){
goto L8;
}
si0=0U;
l4=si0;
goto L7;
L8:;
si0=4U;
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
l5=si0;
L9:;
si0=l4;
si1=l3;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
if(si0){
goto L11;
}
goto L10;
L11:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=4U;
l2=si0;
si0=0U;
l5=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
l5=si0;
L12:;
si0=l2;
si1=l3;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l10=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l11=sj0;
L10:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
if(si0){
goto L14;
}
goto L13;
L14:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
if(si0){
goto L16;
}
goto L15;
L16:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
L15:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l22=si0;
if(si0){
goto L18;
}
si0=0U;
l5=si0;
goto L17;
L18:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=4U;
l5=si0;
si0=0U;
l24=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l25;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l25;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l25;
l24=si0;
L19:;
si0=l5;
si1=l22;
si2=l24;
si0=f15143(i,si0,si1,si2);
si0=l7;
sj0=(U64)(si0);
l26=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l26;
sj0|=sj1;
l26=sj0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l22=si0;
if(si0){
goto L21;
}
goto L20;
L21:;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
if(si0){
goto L22;
}
si0=0U;
l7=si0;
goto L20;
L22:;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
if(si0){
goto L24;
}
si0=1U;
l7=si0;
goto L23;
L24:;
si0=l25;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l25;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L23:;
si0=l7;
si1=l27;
si2=l25;
si0=f15143(i,si0,si1,si2);
si0=l25;
sj0=(U64)(si0);
l28=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l28;
sj0|=sj1;
l28=sj0;
L20:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=120U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=76U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=140U;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=136U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=132U;
si0+=si1;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=100U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=92U;
si0+=si1;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=84U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+104U,sj1);
goto L0;
L6:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
UNREACHABLE;
L3:;
si0=4U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f562(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=4U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
goto L5;
L6:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l9=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
l9=si0;
L5:;
si0=l6;
si1=l2;
si2=l9;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
if(si0){
goto L8;
}
goto L7;
L8:;
si0=4U;
l7=si0;
si0=0U;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l11;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l11;
l2=si0;
L9:;
si0=l7;
si1=l9;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l12=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=4U;
l6=si0;
si0=0U;
l11=si0;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l13;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l13;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l13;
l11=si0;
L12:;
si0=l6;
si1=l2;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L10:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+45U);
i32_store8(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f563(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=-17U;
si0+=si1;
si1=-2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=f14770(i);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si1=f14772(i,si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=238U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=1094332U;
si2=2U;
si3=l1;
si4=40U;
si3+=si4;
si4=1U;
f545(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
si2=l1;
si3=16U;
si2+=si3;
f483(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
f551(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f549(i,si0);
si0=0U;
f14793(i,si0);
UNREACHABLE;
L1:;
si0=l1;
si1=18663156U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si1=f14776(i,si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=238U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=1094332U;
si2=2U;
si3=l1;
si4=40U;
si3+=si4;
si4=1U;
f545(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
si2=l1;
si3=16U;
si2+=si3;
f484(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
f551(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f548(i,si0);
si0=1U;
f14793(i,si0);
UNREACHABLE;
L0:;
}

void f564(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l9;
si1=l8;
si2=l5;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si0=l7;
si1=80U;
si0+=si1;
si1=l5;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+64U);
f686(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=88U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15024(i,si0);
goto L9;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
f15024(i,si0);
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L9:;
si0=l7;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1094456U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l7;
si1=3U;
si2=0U;
si3=l6;
si4=2U;
si5=l6;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
l4=si3;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l7;
si1=104U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l7;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=l7;
si2=80U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l7;
si1=132U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+64U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l2=si0;
si0=l7;
si1=3U;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=44U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094502U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094494U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094486U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094478U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094470U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094462U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=188978561068ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l7;
si1=3U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L13;
L14:;
si0=l7;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L15:;
si0=l2;
sj1=l10;
si1=(U32)(sj1);
si2=l5;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l7;
si1=28U;
si0+=si1;
si1=1U;
f518(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=1094508U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=238U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l7;
si1=l7;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=l7;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=l7;
si2=80U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L17;
default:
goto L19;
}
L19:;
si0=l7;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L16;
L18:;
si0=l7;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L16;
L17:;
si0=l7;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=3U;
i32_store(&i->m0,(U64)si0+144U,si1);
L16:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+160U);
f15024(i,si0);
L13:;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L22;
case 2:
goto L21;
default:
goto L23;
}
L23:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1094524U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L20;
L22:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1094524U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L20;
L21:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1094524U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=3U;
i32_store(&i->m0,(U64)si0+160U,si1);
L20:;
si0=l7;
si1=116U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=108U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=100U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=155U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=1094416U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l7;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l7;
si1=l7;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=l7;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=l7;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l7;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
f64(i,si0,si1);
si0=l7;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+148U);
f15024(i,si0);
L24:;
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
f15024(i,si0);
L25:;
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=9U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1094028U;
si1=55U;
si2=l7;
si3=144U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f565(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l6;
si1=92U;
si0+=si1;
si1=l4;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+36U);
f686(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=100U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l6;
si1=52U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1094456U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=3U;
si2=0U;
si3=l5;
si4=2U;
si5=l5;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l6;
si1=116U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l6;
si2=92U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L8;
}
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=76U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l5;
if(si0){
goto L10;
}
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=2U;
l5=si0;
goto L9;
L10:;
si0=3U;
l5=si0;
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
L9:;
si0=l6;
si1=120U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=112U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=92U;
si0+=si1;
si1=12U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=1094524U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=155U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=1094572U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l6;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l6;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=l6;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
goto L12;
L13:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l1;
si1=l2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=1094028U;
si1=55U;
si2=l6;
si3=64U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f566(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
F64 l17=0;
F64 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=224U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=88U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si0=l9;
si1=112U;
si0+=si1;
si1=l7;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+96U);
f686(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+112U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=120U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L1;
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l8;
si1=255U;
si0&=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si2=l11;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
si0=l2;
l1=si0;
L8:;
{
si0=l13;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
sd0=f14839(i,si0,si1,si2,si3);
l17=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l15;
si0=!(si0);
if(si0){
goto L10;
}
sd0=l18;
sd1=l17;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l16;
l19=si0;
si0=l7;
l15=si0;
sd0=l17;
l18=sd0;
L9:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l15;
if(si0){
goto L6;
}
L7:;
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L5;
L6:;
si0=l9;
si1=124U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=96U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=1092192U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
si1=155U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l9;
si1=l9;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
si1=l9;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l9;
si1=16U;
si0+=si1;
si1=l9;
si2=112U;
si1+=si2;
f64(i,si0,si1);
si0=l9;
si1=32U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+28U,si1);
L5:;
si0=l8;
si1=2U;
si2=l10;
si0=si2?si0:si1;
l14=si0;
si0=0U;
l1=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
if(si0){
goto L12;
}
si0=4U;
l2=si0;
goto L11;
L12:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l14;
si1=255U;
si0&=si1;
l16=si0;
L13:;
{
si0=l16;
switch(si0){
case 0:
goto L16;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L16;
}
L16:;
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
goto L14;
L15:;
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+88U,si1);
L14:;
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=149U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=1094716U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l9;
si1=l9;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l9;
si1=l9;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
si1=48U;
si0+=si1;
si1=l9;
si2=112U;
si1+=si2;
f64(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l9;
si1=36U;
si0+=si1;
si1=l1;
f518(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
L17:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l9;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L13;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
L11:;
si0=l2;
si1=l1;
si2=l9;
si3=192U;
si2+=si3;
f503(i,si0,si1,si2);
si0=l9;
si1=60U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=1094604U;
si4=2U;
f437(i,si0,si1,si2,si3,si4);
si0=l14;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L19;
default:
goto L21;
}
L21:;
si0=l9;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094456U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l9;
si1=180U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+180U,si1);
goto L18;
L20:;
si0=l9;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094456U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l9;
si1=180U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+180U,si1);
goto L18;
L19:;
si0=l9;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094456U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l9;
si1=180U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+180U,si1);
L18:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l9;
si1=136U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=3U;
i32_store8(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=32U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
si1=l9;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l9;
si2=112U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L26;
}
si0=l9;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l9;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l14;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
default:
goto L30;
}
L30:;
si0=l9;
si1=204U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094524U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L27;
L29:;
si0=l9;
si1=204U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094524U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L27;
L28:;
si0=l9;
si1=204U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1094524U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+208U,si1);
L27:;
si0=l9;
si1=164U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=156U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=148U;
si0+=si1;
si1=238U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=140U;
si0+=si1;
si1=238U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=132U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=155U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=7U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=1094660U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l9;
si1=l9;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l9;
si1=l9;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l9;
si1=l9;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=l9;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=l9;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l9;
si1=l9;
si2=180U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
si1=l9;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
si1=l9;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=72U;
si0+=si1;
si1=l9;
si2=88U;
si1+=si2;
f64(i,si0,si1);
si0=l9;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+196U);
f15024(i,si0);
L31:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l9;
si1=l4;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=1U;
l16=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=1U;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L32:;
si0=l7;
si1=l14;
si2=l2;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L33;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L22;
}
L33:;
si0=l16;
si1=l13;
si2=l6;
si0=f15143(i,si0,si1,si2);
l16=si0;
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L34:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
L36:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L37:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L38:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L39:;
si0=l11;
si0=!(si0);
if(si0){
goto L40;
}
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l11;
f15024(i,si0);
L40:;
si0=l9;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L26:;
si0=1094028U;
si1=55U;
si2=l9;
si3=192U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L24:;
f53(i);
UNREACHABLE;
L23:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f567(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l8;
si1=36U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si0=l8;
si1=60U;
si0+=si1;
si1=l1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+44U);
f686(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=68U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L1;
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l8;
si1=132U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094456U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=2U;
l1=si0;
goto L5;
L6:;
si0=3U;
l1=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
L5:;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=180U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=112U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=88U;
si0+=si1;
si1=52U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=80U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094920U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
si2=180U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l8;
si1=l8;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=l8;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l8;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l8;
si2=148U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l8;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l8;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=1094856U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l8;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L7;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f568(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+40U);
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=64U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L1;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=92U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=52U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=76U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1094456U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=108U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=132U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
si2=3U;
si3=l3;
si4=253U;
si3&=si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=1U;
si2=3U;
si3=l1;
si1=si3?si1:si2;
l3=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1095036U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=1094524U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=2U;
si2=3U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l4;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1094996U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L5;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f569(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l6;
si1=56U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+40U);
f686(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=64U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l6;
si1=84U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=76U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=100U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=1095096U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=155U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1094456U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=0U;
si2=3U;
si3=l5;
si4=253U;
si3&=si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=1094524U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=2U;
si2=3U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l6;
si2=100U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l6;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f570(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+32U);
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l4;
si1=76U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=52U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=189U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=100U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1094456U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=0U;
si2=3U;
si3=l3;
si4=253U;
si3&=si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=1U;
si2=3U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1094524U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=2U;
si2=3U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l4;
si2=100U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1095180U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=11U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f571(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+32U);
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l4;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095268U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=155U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1094456U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
si2=3U;
si3=l3;
si4=253U;
si3&=si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1094524U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=2U;
si2=3U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=14U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f572(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=40U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l8;
si1=64U;
si0+=si1;
si1=l6;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+48U);
f686(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=72U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l8;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=116U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094456U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=3U;
si2=0U;
si3=l7;
si4=2U;
si5=l7;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=3U;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l8;
si2=64U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L9;
}
si0=l8;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=140U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+40U);
l9=sj1;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l8;
sj1=l9;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l7;
if(si0){
goto L11;
}
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=2U;
l7=si0;
goto L10;
L11:;
si0=3U;
l7=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+128U,si1);
L10:;
si0=l8;
si1=100U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=6U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=5U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=1095368U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=116U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l8;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+132U);
f15024(i,si0);
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
L13:;
si0=l3;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
L14:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l7;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=1094028U;
si1=55U;
si2=l8;
si3=128U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f573(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l8;
si1=52U;
si0+=si1;
si1=l6;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+36U);
f686(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=60U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l8;
si1=108U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094456U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=3U;
si2=0U;
si3=l7;
si4=2U;
si5=l7;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
l7=si3;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l8;
si1=76U;
si0+=si1;
l5=si0;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l8;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l8;
si2=52U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L10;
}
si0=l8;
si1=132U;
si0+=si1;
si1=l8;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l8;
si1=3U;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l8;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
sj0=l3;
si1=1U;
si2=l8;
si3=52U;
si2+=si3;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L9;
}
si0=l8;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l8;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l7;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
default:
goto L14;
}
L14:;
si0=l8;
si1=164U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+168U);
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
goto L11;
L13:;
si0=l8;
si1=164U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+168U);
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
goto L11;
L12:;
si0=l8;
si1=164U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+168U);
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+152U,si1);
L11:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l8;
si1=76U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l8;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj0=(U64)(si0);
si1=1U;
si2=l8;
si3=52U;
si2+=si3;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L8;
}
si0=l8;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l8;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l7;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L16;
default:
goto L18;
}
L18:;
si0=l8;
si1=180U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=1095518U;
si2=1095516U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L15;
L17:;
si0=l8;
si1=180U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=1095518U;
si2=1095516U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L15;
L16:;
si0=l8;
si1=180U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=1095518U;
si2=1095516U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+192U,si1);
L15:;
si0=l8;
si1=104U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=96U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=88U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=80U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=72U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=52U;
si0+=si1;
si1=12U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=7U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=1095460U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l8;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l8;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l8;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l8;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l8;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l8;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=l8;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+172U);
f15024(i,si0);
L19:;
si0=l8;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+156U);
f15024(i,si0);
L20:;
si0=l8;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+124U);
f15024(i,si0);
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L22;
L23:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
L22:;
si0=l1;
si1=l2;
si2=l7;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=208U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
si0=1094028U;
si1=55U;
si2=l8;
si3=16U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1094028U;
si1=55U;
si2=l8;
si3=16U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1094028U;
si1=55U;
si2=l8;
si3=16U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f574(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l5;
si1=92U;
si0+=si1;
si1=l6;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+24U);
f686(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=100U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l5;
si1=12U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1094456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=3U;
si2=0U;
si3=l4;
si4=2U;
si5=l4;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
l4=si3;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=116U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l5;
si1=32U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l5;
si2=92U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L7;
}
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=3U;
si2=1U;
si3=l4;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=156U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1095572U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L8:;
si0=l1;
si1=l5;
si2=92U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+92U);
i64_store(&i->m0,(U64)si0+80U,sj1);
goto L5;
L7:;
si0=1094028U;
si1=55U;
si2=l5;
si3=16U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
L5:;
si0=l5;
si1=112U;
si0+=si1;
si1=238U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=12U;
si0+=si1;
si1=238U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=155U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1095540U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L9:;
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l5;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f575(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=36U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l10;
si1=60U;
si0+=si1;
si1=l6;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+44U);
f686(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=68U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l10;
si1=116U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1094456U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l10;
si1=3U;
si2=0U;
si3=l9;
si4=2U;
si5=l9;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
l9=si3;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l10;
si1=84U;
si0+=si1;
l5=si0;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l10;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=l10;
si2=60U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L10;
}
si0=l10;
si1=140U;
si0+=si1;
si1=l10;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l10;
si1=3U;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l10;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
sj0=l3;
si1=1U;
si2=l10;
si3=60U;
si2+=si3;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L9;
}
si0=l10;
si1=176U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l10;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
default:
goto L14;
}
L14:;
si0=l10;
si1=172U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+176U);
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L11;
L13:;
si0=l10;
si1=172U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+176U);
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L11;
L12:;
si0=l10;
si1=172U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+176U);
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+160U,si1);
L11:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l10;
si1=84U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l10;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj0=(U64)(si0);
si1=1U;
si2=l10;
si3=60U;
si2+=si3;
si0=f717(i,sj0,si1,si2);
if(si0){
goto L8;
}
si0=l10;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l10;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L16;
default:
goto L18;
}
L18:;
si0=l10;
si1=188U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l10;
si1=2U;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L15;
L17:;
si0=l10;
si1=188U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l10;
si1=2U;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L15;
L16:;
si0=l10;
si1=188U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1094524U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+192U,si1);
L15:;
si0=l10;
si1=112U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=104U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=96U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=88U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=80U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=155U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l10;
si1=7U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=1095612U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l10;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l10;
si1=l10;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l10;
si1=l10;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=l10;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l10;
si1=l10;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=l10;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=l10;
si2=116U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l10;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=24U;
si0+=si1;
si1=l10;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l10;
si1=176U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+180U);
f15024(i,si0);
L19:;
si0=l10;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+164U);
f15024(i,si0);
L20:;
si0=l10;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+132U);
f15024(i,si0);
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L22;
L23:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
L22:;
si0=l1;
si1=l2;
si2=l9;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=208U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
si0=1094028U;
si1=55U;
si2=l10;
si3=24U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1094028U;
si1=55U;
si2=l10;
si3=24U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1094028U;
si1=55U;
si2=l10;
si3=24U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f576(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l6;
si1=92U;
si0+=si1;
si1=l4;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+36U);
f686(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=100U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L1:;
si0=l6;
si1=52U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1094456U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=3U;
si2=0U;
si3=l5;
si4=2U;
si5=l5;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l6;
si1=116U;
si0+=si1;
si1=1094004U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l6;
si2=92U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L8;
}
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=76U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
sj1=l7;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l5;
if(si0){
goto L10;
}
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=2U;
l5=si0;
goto L9;
L10:;
si0=3U;
l5=si0;
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+64U,si1);
L9:;
si0=l6;
si1=120U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=112U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=92U;
si0+=si1;
si1=12U;
si0+=si1;
si1=156U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=1094524U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=155U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=1095736U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l6;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l6;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=l6;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
goto L12;
L13:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l1;
si1=l2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=13U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=1094028U;
si1=55U;
si2=l6;
si3=64U;
si2+=si3;
si3=1094084U;
si4=1094176U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f577(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
if(si0){
goto L6;
}
si0=1U;
l3=si0;
goto L5;
L6:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l3;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l8;
si1=32U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l8;
si1=56U;
si0+=si1;
si1=l6;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+40U);
f686(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=64U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15024(i,si0);
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15024(i,si0);
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L7:;
si0=l8;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1094456U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=3U;
si2=0U;
si3=l7;
si4=2U;
si5=l7;
si6=255U;
si5&=si6;
si3=si5?si3:si4;
l6=si3;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=3U;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=1U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+120U,si1);
goto L11;
L12:;
si0=l8;
si1=68U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=1094332U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=50U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l8;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=120U;
si0+=si1;
si1=l8;
si2=56U;
si1+=si2;
f64(i,si0,si1);
L11:;
si0=l8;
si1=140U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=76U;
si0+=si1;
si1=238U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=1094524U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=5U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=1095840U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l6;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=l8;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l8;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+124U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+120U);
f15024(i,si0);
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f578(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
switch(si0){
case 0:
goto L6;
case 1:
goto L3;
case 2:
goto L5;
case 3:
goto L4;
default:
goto L6;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=f14744(i,si0);
l4=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
L2:;
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=1020U;
si0&=si1;
l4=si0;
si1=17683640U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=17683476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=1091888U;
si2=4U;
f14732(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l2;
si1=28U;
si0+=si1;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+60U);
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=36U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15024(i,si0);
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
f15024(i,si0);
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
L7:;
si0=l2;
si1=28U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=52U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1095880U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=155U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=1094456U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=18U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
f15024(i,si0);
L12:;
si0=l0;
f15024(i,si0);
L11:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f579(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=272U;
si0*=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=220U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L5:;
{
si0=l0;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=-36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l0;
si1=272U;
si0+=si1;
l0=si0;
si0=l1;
si1=-272U;
si0+=si1;
l1=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L7;
}
si0=1U;
goto L0;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l5;
si2=248U;
si1*=si2;
si0+=si1;
l4=si0;
si0=0U;
l3=si0;
L8:;
{
si0=l4;
l1=si0;
si0=l0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=248U;
si0+=si1;
l1=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
L10:;
si0=1U;
l6=si0;
si0=l1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L11:;
si0=l1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
}
si0=1U;
goto L0;
L3:;
si0=0U;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0&=si1;
si0=!(si0);
goto L0;
L2:;
si0=0U;
l6=si0;
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0&=si1;
si1=4U;
si0>>=(si1&31);
l6=si0;
L1:;
si0=l6;
L0:;
return si0;
}

void f580(rustpythonInstance*i,U32 l0) {
L0:;
}

void f581(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

U32 f582(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l1=si0;
goto L2;
L5:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=4U;
l1=si0;
goto L2;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l3;
f515(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l1=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=l1;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f583(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l2;
f530(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f584(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=75U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096084U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096091U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=47244640331ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f585(i,si0,si1,si2,si3);
si0=11U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=65U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=11U;
si2=l2;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L2:;
si0=l5;
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f585(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=1U;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l7;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=75U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
sj1=75ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l9=si0;
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l11=si0;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=1U;
si0&=si1;
l12=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l10;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l6=si0;
si0=0U;
l5=si0;
L13:;
{
si0=l9;
si1=l6;
si0+=si1;
l7=si0;
si1=l11;
si2=l6;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l13;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l9;
si1=l5;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l11;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l10;
si2=l3;
f524(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l3;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l1;
si2=l11;
si3=l6;
si4=0U;
si5=0U;
si6=l6;
si7=0U;
f587(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=0U;
l6=si0;
si0=0U;
l13=si0;
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l14=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l5=si0;
si0=l14;
si1=l7;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+60U);
l6=si2;
si3=0U;
si4=l7;
si5=l6;
si6=l7;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l6=si2;
si1-=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l14;
si1=l9;
si0-=si1;
l5=si0;
si0=l7;
l13=si0;
goto L14;
L15:;
si0=l6;
si1=l14;
si0+=si1;
l13=si0;
L14:;
si0=l4;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
l9=si1;
si2=l5;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l9;
si2=l13;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l9;
si2=l6;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si2=l4;
si3=68U;
si2+=si3;
f537(i,si0,si1,si2);
si0=l14;
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
l6=si1;
si2=0U;
si3=l7;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l6=si1;
si2=l14;
si1+=si2;
si2=l14;
si3=l7;
si4=l6;
si3-=si4;
l13=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=l6;
si0-=si1;
l5=si0;
si0=l9;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
L18:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L19:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l13;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=0U;
si1=l14;
si2=l13;
si1-=si2;
l6=si1;
si2=l6;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=l9;
l6=si0;
L20:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L20;
}
}
L16:;
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l9;
f15024(i,si0);
L22:;
si0=l1;
si1=172U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L23;
}
si0=l1;
si1=84U;
si0+=si1;
l6=si0;
si1=l1;
si2=72U;
si1+=si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=84U;
si2=72U;
si3=l5;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L23:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=76U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=0U;
l5=si0;
si0=75U;
l14=si0;
goto L24;
L25:;
si0=l4;
si1=0U;
si2=l6;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L24:;
si0=l8;
si1=l5;
si0+=si1;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l14;
si1=l6;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l4;
si1=l6;
si2=l5;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L26:;
si0=l8;
si1=l6;
si0+=si1;
si1=l7;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l6;
si2=l5;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0-=si1;
si1=12U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l4;
si1=l6;
si2=13U;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L28:;
si0=l8;
si1=l6;
si0+=si1;
l5=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096367U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096372U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l6;
si2=13U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l6;
if(si0){
goto L31;
}
si0=l8;
f15024(i,si0);
si0=1U;
l5=si0;
goto L30;
L31:;
si0=l8;
si1=l6;
si0=f15027(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L30:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L29:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
f15024(i,si0);
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15024(i,si0);
goto L1;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=4U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
si2=1U;
f588(i,si0,si1,si2);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f586(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f249(i,si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
l2=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=12U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f256(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
f517(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=75U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096084U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096091U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
sj1=47244640331ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
si2=l3;
si3=l1;
f585(i,si0,si1,si2,si3);
si0=11U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=65U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=36U;
si0+=si1;
si1=11U;
si2=l3;
f530(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
L5:;
si0=l2;
si1=l1;
si0+=si1;
si1=l4;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15024(i,si0);
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L7:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f587(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l7;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l9=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=0U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=12U;
si0+=si1;
si1=0U;
si2=1U;
f524(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L1:;
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
if(si0){
goto L3;
}
si0=4U;
l5=si0;
goto L2;
L3:;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l6=si0;
L4:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=120U;
si0*=si1;
l5=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=116U;
si0+=si1;
l7=si0;
L7:;
{
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=-80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
si1=-84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l5;
si1=-120U;
si0+=si1;
l5=si0;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L9:;
{
si0=l13;
l7=si0;
si1=16U;
si0+=si1;
l13=si0;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l10;
l5=si0;
si0=l2;
l7=si0;
L11:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L10;
}
L12:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L11;
}
}
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
L13:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L10:;
si0=l13;
si1=l14;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L5:;
si0=l12;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=272U;
si0*=si1;
l5=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=268U;
si0+=si1;
l7=si0;
L16:;
{
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=-80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si1=-84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
L17:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l5;
si1=-272U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
goto L14;
}
L15:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l13;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L18:;
{
si0=l13;
l7=si0;
si1=16U;
si0+=si1;
l13=si0;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l10;
l5=si0;
si0=l2;
l7=si0;
L20:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L19;
}
L21:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L20;
}
}
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
L22:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L19:;
si0=l13;
si1=l14;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L14:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l13;
si2=248U;
si1*=si2;
si0+=si1;
l1=si0;
si0=0U;
l15=si0;
L24:;
{
si0=l1;
l5=si0;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si1=248U;
si0+=si1;
l5=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
L26:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L23;
L25:;
si0=l7;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l16;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
L28:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L24;
}
goto L23;
L27:;
}
si0=l7;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l14;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L29:;
{
si0=l14;
l7=si0;
si1=16U;
si0+=si1;
l14=si0;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l10;
l5=si0;
si0=l2;
l7=si0;
L31:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
L32:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L31;
}
}
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
L33:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L30:;
si0=l14;
si1=l13;
si0=si0 != si1;
if(si0){
goto L29;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L23:;
si0=l12;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+248U);
l7=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L36:;
{
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L35;
}
L37:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L36;
}
goto L34;
}
L35:;
si0=l7;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l13;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L38:;
{
si0=l13;
l7=si0;
si1=8U;
si0+=si1;
l13=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l10;
l5=si0;
si0=l2;
l7=si0;
L40:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L39;
}
L41:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L40;
}
}
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
L42:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L39:;
si0=l13;
si1=l14;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L34:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si0-=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l7;
si2=l9;
f524(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L2:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l7;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L44:;
{
si0=0U;
l9=si0;
L45:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l7;
si1=120U;
si0*=si1;
l5=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=116U;
si0+=si1;
l7=si0;
L48:;
{
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l7;
si1=-80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l7;
si1=-84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L47;
}
L49:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l5;
si1=-120U;
si0+=si1;
l5=si0;
if(si0){
goto L48;
}
goto L46;
}
L47:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l15;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L50:;
{
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
L53:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L51;
}
L54:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l8;
si1=180U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l9=si0;
L55:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
L51:;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L50;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
L46:;
si0=l14;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l7;
si1=272U;
si0*=si1;
l5=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=268U;
si0+=si1;
l7=si0;
L58:;
{
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l7;
si1=-80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l7;
si1=-84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L57;
}
L59:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l5;
si1=-272U;
si0+=si1;
l5=si0;
if(si0){
goto L58;
}
goto L56;
}
L57:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l15;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L60:;
{
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
L63:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L61;
}
L64:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l8;
si1=180U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l9=si0;
L65:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
L61:;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L60;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
L56:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l13;
si2=248U;
si1*=si2;
si0+=si1;
l1=si0;
si0=0U;
l15=si0;
L67:;
{
si0=l1;
l5=si0;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l7;
si1=248U;
si0+=si1;
l5=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L68;
}
L69:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L67;
}
goto L66;
L68:;
si0=l7;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l7;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L70;
}
L71:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L67;
}
goto L66;
L70:;
}
si0=l7;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l10;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L72:;
{
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
L75:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L73;
}
L76:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L75;
}
}
L74:;
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l8;
si1=180U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l9=si0;
L77:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
L73:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L72;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
L66:;
si0=l14;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+248U);
l7=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L80:;
{
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L79;
}
L81:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L80;
}
goto L78;
}
L79:;
si0=l7;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l15;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L82:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
if(si0){
goto L85;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
goto L84;
L85:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L86:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L87;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L83;
}
L87:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L86;
}
}
L84:;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l9;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+184U);
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l8;
si1=180U;
si0+=si1;
si1=l9;
f517(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l9=si0;
L88:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+188U,si1);
L83:;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L78:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L45;
}
}
si0=l9;
si0=!(si0);
if(si0){
goto L43;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si0-=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L89;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l7;
si2=l5;
f524(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L89:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=0U;
l1=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l7;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+188U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L90;
}
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
si2=l7;
f524(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L90:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
f15024(i,si0);
L91:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l7;
if(si0){
goto L44;
}
}
L43:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=!(si0);
if(si0){
goto L92;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
f15024(i,si0);
L92:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L93;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l7;
si2=l3;
f524(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L93:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=l7;
si2=l3;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si2=l8;
si3=160U;
si2+=si3;
si3=0U;
si4=32U;
si5=l7;
si5=I32_CLZ(si5);
si4-=si5;
f509(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l1=si0;
si0=1U;
l5=si0;
L95:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l13;
si1+=si2;
l6=si1;
si2=-8U;
si1+=si2;
l9=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L97;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L96;
}
L97:;
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L96:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
L94:;
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si1=i32_load(&i->m0,(U64)si1+248U);
l5=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l5;
si2=l7;
si3=256U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l8;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=52U;
si0+=si1;
si1=l8;
si2=64U;
si1+=si2;
f255(i,si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L99;
}
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
si1=l8;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=l8;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=l8;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=180U;
si1+=si2;
f446(i,si0,si1);
goto L98;
L99:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=l8;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l8;
si1=l8;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=112U;
si0+=si1;
si1=l8;
si2=180U;
si1+=si2;
f445(i,si0,si1);
L98:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+120U);
si2=0U;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+112U);
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l7;
si2=0U;
si1=si1 != si2;
l1=si1;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=124U;
si0+=si1;
si0=f443(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L100;
}
L102:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=1095896U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l7;
si1=l8;
si2=180U;
si1+=si2;
si0=f407(i,si0,si1);
if(si0){
goto L101;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+172U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+168U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
L106:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L107;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L104;
}
L107:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L106;
}
}
L105:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l8;
si1=36U;
si0+=si1;
f538(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L108:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l5;
si1+=si2;
l5=si1;
si2=0U;
si3=l7;
si4=l5;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
goto L103;
L104:;
si0=l15;
si0=!(si0);
if(si0){
goto L103;
}
si0=l6;
f15024(i,si0);
L103:;
si0=l8;
si1=124U;
si0+=si1;
si0=f443(i,si0);
l7=si0;
if(si0){
goto L102;
}
goto L100;
}
L101:;
si0=1095920U;
si1=55U;
si2=l8;
si3=160U;
si2+=si3;
si3=1095976U;
si4=1096068U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L100:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L114:;
{
si0=l12;
l13=si0;
si1=8U;
si0+=si1;
l12=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l6=si0;
si0=0U;
l15=si0;
L120:;
{
si0=l6;
l5=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L122;
}
si0=l7;
si1=248U;
si0+=si1;
l5=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L121;
}
L122:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L120;
}
goto L119;
L121:;
si0=l7;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L123;
}
si0=l7;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L118;
}
L123:;
si0=l5;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L120;
}
}
L119:;
si0=l14;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L124;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+248U);
l7=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L125:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L126;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L118;
}
L126:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
if(si0){
goto L125;
}
}
L124:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=!(si0);
if(si0){
goto L127;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
L128:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L118;
}
L129:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L128;
}
}
L127:;
si0=l4;
si0=!(si0);
if(si0){
goto L130;
}
si0=l4;
si1=l10;
si2=l1;
si0=f439(i,si0,si1,si2);
if(si0){
goto L118;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
L130:;
si0=l14;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L116;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+212U);
l7=si0;
si0=l5;
si1=120U;
si0*=si1;
l5=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L131:;
{
si0=l7;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L132;
}
si0=l7;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L117;
}
L132:;
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l5;
si1=-120U;
si0+=si1;
l5=si0;
if(si0){
goto L131;
}
goto L116;
}
L118:;
si0=l12;
si1=l16;
si0=si0 != si1;
if(si0){
goto L114;
}
goto L109;
L117:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L134;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L113;
}
si0=l8;
si1=19U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=1091084U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
si1=l8;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=124U;
si0+=si1;
si1=1095896U;
si2=l8;
si3=180U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L133;
}
goto L110;
L134:;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=1091072U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
si1=50U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=l8;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=124U;
si0+=si1;
si1=1095896U;
si2=l8;
si3=180U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L110;
}
L133:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+124U);
l1=si0;
if(si0){
goto L115;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
L116:;
si0=l14;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+224U);
l7=si0;
si0=l5;
si1=272U;
si0*=si1;
l5=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L136:;
{
si0=l7;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L137;
}
si0=l7;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L135;
}
L137:;
si0=l7;
si1=272U;
si0+=si1;
l7=si0;
si0=l5;
si1=-272U;
si0+=si1;
l5=si0;
if(si0){
goto L136;
}
goto L111;
}
L135:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=1095896U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
si1=l8;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l7;
si1=l8;
si2=180U;
si1+=si2;
si0=f378(i,si0,si1);
if(si0){
goto L112;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+124U);
l1=si0;
si0=!(si0);
if(si0){
goto L111;
}
L115:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+128U);
l17=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L138;
}
si0=l8;
si1=36U;
si0+=si1;
f538(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L138:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l5;
si1+=si2;
l5=si1;
si2=0U;
si3=l7;
si4=l5;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
sj1=l17;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l12;
si1=l16;
si0=si0 != si1;
if(si0){
goto L114;
}
goto L109;
}
L113:;
si0=1090756U;
si1=43U;
si2=1091208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=1095920U;
si1=55U;
si2=l8;
si3=160U;
si2+=si3;
si3=1095976U;
si4=1096068U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L111:;
si0=1096117U;
si1=99U;
si2=1096460U;
f634(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=1095920U;
si1=55U;
si2=l8;
si3=160U;
si2+=si3;
si3=1095976U;
si4=1096068U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L109:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L141:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+248U);
l13=si0;
si0=l7;
si1=48U;
si0*=si1;
l10=si0;
L142:;
{
si0=l9;
l6=si0;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
l5=si0;
si0=l13;
l7=si0;
L145:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L146;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L144;
}
L146:;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l5;
si1=-48U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L143;
}
goto L145;
}
L144:;
si0=l8;
si1=124U;
si0+=si1;
si1=l14;
si2=l15;
si3=l1;
f210(i,si0,si1,si2,si3);
si0=l8;
si1=180U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+124U);
l1=si1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+132U);
l5=si2;
si3=1096439U;
si4=1U;
f437(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+184U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+180U);
l10=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
l7=si0;
L148:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L149;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L149:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L148;
}
}
L147:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L150;
}
si0=l1;
f15024(i,si0);
L150:;
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=1096444U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
si1=50U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=l8;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=l8;
si2=216U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l8;
si1=124U;
si0+=si1;
si1=l8;
si2=180U;
si1+=si2;
f64(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+124U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+128U);
l16=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+132U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+168U);
l13=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+176U);
l15=si0;
si0=!(si0);
if(si0){
goto L153;
}
si0=l15;
si1=12U;
si0*=si1;
l5=si0;
si0=l13;
l7=si0;
L154:;
{
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L155;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=l1;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L152;
}
L155:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
if(si0){
goto L154;
}
}
L153:;
si0=l15;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+172U);
si0=si0 != si1;
if(si0){
goto L156;
}
si0=l8;
si1=168U;
si0+=si1;
si1=l15;
f518(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+168U);
l13=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+176U);
l15=si0;
L156:;
si0=l13;
si1=l15;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+176U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
goto L151;
L152:;
si0=l16;
si0=!(si0);
if(si0){
goto L151;
}
si0=l6;
f15024(i,si0);
L151:;
si0=l14;
si0=!(si0);
if(si0){
goto L157;
}
si0=l10;
f15024(i,si0);
L157:;
si0=l9;
si1=l12;
si0=si0 != si1;
if(si0){
goto L141;
}
goto L140;
L143:;
si0=l9;
si1=l12;
si0=si0 != si1;
if(si0){
goto L142;
}
}
}
L140:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+168U);
l9=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+176U);
l5=si1;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+172U);
l13=si0;
si0=l9;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L159;
}
si0=l9;
l7=si0;
L160:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L161;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L159;
L161:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+4U);
l17=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L162;
}
si0=l8;
si1=36U;
si0+=si1;
f538(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
L162:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l5;
si4=l1;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
sj1=l17;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L160;
}
goto L158;
}
L159:;
si0=l15;
si1=l7;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l15;
si1=l7;
si0=si0 == si1;
if(si0){
goto L158;
}
L163:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L164;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L164:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L163;
}
}
L158:;
si0=l13;
si0=!(si0);
if(si0){
goto L139;
}
si0=l9;
f15024(i,si0);
L139:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=112U;
si0+=si1;
f455(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L165;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L165:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L166;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L166:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L167;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L167:;
si0=l8;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

void f588(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=75U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=75ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=172U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L3;
}
si0=l1;
si1=84U;
si0+=si1;
l7=si0;
si1=l1;
si2=72U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si0=si2?si0:si1;
l5=si0;
si0=l1;
si1=84U;
si2=72U;
si3=l7;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L3:;
si0=0U;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=76U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si2=l8;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L4:;
si0=l4;
si1=l7;
si0+=si1;
si1=l6;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L6;
L7:;
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L9;
}
si0=4U;
l6=si0;
goto L8;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l10=si0;
si0=0U;
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
si1=1U;
si0&=si1;
l11=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l9;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l4=si0;
si0=0U;
l7=si0;
L11:;
{
si0=l6;
si1=l4;
si0+=si1;
l8=si0;
si1=l10;
si2=l4;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l12;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l11;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l10;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=0U;
l11=si0;
si0=l6;
si1=l9;
si2=l3;
si3=128U;
si2+=si3;
si3=0U;
si4=32U;
si5=l9;
si5=I32_CLZ(si5);
si4-=si5;
f509(i,si0,si1,si2,si3,si4);
si0=l9;
l7=si0;
si0=l9;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=8U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l8=si0;
si0=1U;
l7=si0;
L13:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si2=l6;
si1+=si2;
l13=si1;
si2=-8U;
si1+=si2;
l12=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L14:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l6;
si3=l7;
si4=0U;
si5=0U;
si6=l4;
si7=0U;
f587(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l8=si0;
si0=0U;
l7=si0;
si0=0U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l13=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l4=si0;
si0=l13;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l7=si2;
si3=0U;
si4=l8;
si5=l7;
si6=l8;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l11=si2;
si1-=si2;
l7=si1;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l13;
si1=l7;
si0-=si1;
l4=si0;
si0=l8;
l7=si0;
goto L16;
L17:;
si0=l11;
si1=l13;
si0+=si1;
l7=si0;
L16:;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+128U);
l10=si1;
si2=l4;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l10;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l10;
si2=l11;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=l3;
si3=40U;
si2+=si3;
f537(i,si0,si1,si2);
si0=l9;
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
f15024(i,si0);
L18:;
si0=l13;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+136U);
l4=si1;
si2=0U;
si3=l8;
si4=l4;
si5=l8;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l4=si1;
si2=l13;
si1+=si2;
si2=l13;
si3=l8;
si4=l4;
si3-=si4;
l6=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l7;
si1=l4;
si0-=si1;
l7=si0;
si0=l10;
si1=l4;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
L21:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L22:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l6;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=0U;
si1=l13;
si2=l6;
si1-=si2;
l4=si1;
si2=l4;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l10;
l4=si0;
L23:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L24:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L23;
}
}
L19:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
f15024(i,si0);
L6:;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l10=si0;
si1=l4;
si2=120U;
si1*=si2;
si0+=si1;
l11=si0;
L26:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l10;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L28;
case 2:
goto L28;
case 3:
goto L29;
default:
goto L28;
}
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L27;
}
goto L28;
L29:;
si0=l4;
si1=1096432U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
L28:;
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l10;
si4=36U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f208(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l9=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l9;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
si1=48U;
si0*=si1;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l17=si0;
si0=l9;
l12=si0;
L33:;
{
si0=l12;
l13=si0;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
l7=si0;
si0=l17;
l6=si0;
L35:;
{
si0=l6;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l13;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l8=si0;
L36:;
si0=l4;
si1=48U;
si0+=si1;
l6=si0;
si0=l7;
si1=-48U;
si0+=si1;
l7=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
}
si0=l14;
si0=!(si0);
if(si0){
goto L27;
}
si0=l9;
f15024(i,si0);
goto L27;
L34:;
si0=l12;
si1=l15;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L32:;
si0=l14;
si0=!(si0);
if(si0){
goto L31;
}
si0=l9;
f15024(i,si0);
L31:;
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L27;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=32U;
si0&=si1;
if(si0){
goto L38;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=8U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
sj1=6724797014372408096ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L37;
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=10U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096095U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1096103U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=10U;
si0+=si1;
l4=si0;
L37:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L25;
L27:;
si0=l10;
si1=120U;
si0+=si1;
l10=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L25:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=32U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=272U;
si0*=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
si1=220U;
si0+=si1;
l4=si0;
L42:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=17U;
si0&=si1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l7;
si1=-272U;
si0+=si1;
l7=si0;
if(si0){
goto L42;
}
goto L1;
}
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=10U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1096095U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1096103U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L5:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l7;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=248U;
si1*=si2;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
si0=l10;
l8=si0;
L46:;
{
si0=l6;
si1=l13;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=0U;
l12=si0;
goto L45;
L47:;
si0=l6;
si1=l13;
si0=si0 < si1;
l12=si0;
si0=l8;
l4=si0;
L49:;
{
si0=l7;
l8=si0;
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l4;
si1=248U;
si0+=si1;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L48;
}
L50:;
si0=l8;
l4=si0;
si0=l13;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
si0=0U;
l12=si0;
goto L45;
L48:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
}
L45:;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=272U;
si0*=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l8=si0;
L52:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si1=-272U;
si0+=si1;
l4=si0;
si0=l8;
si1=220U;
si0+=si1;
l6=si0;
si0=l8;
si1=272U;
si0+=si1;
l8=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
}
si0=0U;
l8=si0;
L53:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l10;
l4=si0;
L55:;
{
si0=l7;
l10=si0;
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l4;
si1=248U;
si0+=si1;
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
L56:;
si0=l10;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L55;
}
goto L51;
}
L54:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L53;
}
}
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si1=312U;
si0*=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
si1=80U;
si0+=si1;
l4=si0;
L58:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L59;
}
L60:;
si0=l4;
si1=-63U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L51;
}
L59:;
si0=l4;
si1=312U;
si0+=si1;
l4=si0;
si0=l7;
si1=-312U;
si0+=si1;
l7=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l12;
si1=-1U;
si0^=si1;
si1=l1;
si2=17U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=128U;
si1&=si2;
si1=!(si1);
si0&=si1;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l9;
si2=5U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L61:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096105U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1096109U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l9;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L51:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=248U;
si1*=si2;
si0+=si1;
l6=si0;
si0=0U;
l8=si0;
si0=l10;
l7=si0;
L63:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l7;
l4=si0;
L65:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l4;
si1=248U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
L66:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L65;
}
goto L62;
}
L64:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=16U;
si0&=si1;
if(si0){
goto L63;
}
si0=l4;
si1=16385U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L63;
}
}
si0=0U;
l14=si0;
si0=0U;
l16=si0;
L74:;
{
si0=l14;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l14;
l7=si0;
si0=l10;
l4=si0;
L79:;
{
si0=l6;
l10=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l4;
si1=248U;
si0+=si1;
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L77;
}
L80:;
si0=l10;
l4=si0;
si0=l13;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L78:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=1073741824ULL;
sj0&=sj1;
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L81;
}
si0=l16;
si1=2U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L73;
}
L81:;
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l2;
if(si0){
goto L76;
}
L82:;
sj0=l18;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L83;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
if(si0){
goto L71;
}
L83:;
si0=l2;
si0=!(si0);
if(si0){
goto L72;
}
si0=0U;
l13=si0;
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=0U;
l6=si0;
goto L68;
L77:;
si0=l7;
si1=1U;
si0+=si1;
l14=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
if(si0){
goto L74;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+152U);
si3=l4;
si4=156U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f208(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l19=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l8=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l19;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l8;
si1=48U;
si0*=si1;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l22=si0;
si0=l19;
l9=si0;
L86:;
{
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
si0=l15;
l8=si0;
si0=l22;
l4=si0;
L87:;
{
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L88;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L75;
}
L88:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
if(si0){
goto L87;
}
}
si0=l17;
l9=si0;
si0=l17;
si1=l21;
si0=si0 != si1;
if(si0){
goto L86;
}
}
L85:;
si0=l20;
si0=!(si0);
if(si0){
goto L84;
}
si0=l19;
f15024(i,si0);
L84:;
si0=l7;
si1=1U;
si0+=si1;
l14=si0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
goto L74;
L76:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=248U;
si1*=si2;
si0+=si1;
l6=si0;
si0=0U;
l8=si0;
L89:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l7;
l4=si0;
L92:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L93;
}
si0=l4;
si1=248U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
}
L93:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L92;
}
}
L91:;
si0=1096117U;
si1=99U;
si2=1096396U;
f634(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=16401U;
si0&=si1;
if(si0){
goto L89;
}
}
si0=l3;
si1=84U;
si0+=si1;
si1=l4;
f406(i,si0,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=148U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1096416U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=3U;
si2=0U;
si3=l7;
si4=1U;
si3>>=(si4&31);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+48U);
si4=!(si4);
si5=l8;
si6=2U;
si5=si5 < si6;
si4|=si5;
si3&=si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=1090040U;
si2=1088744U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L94;
}
si0=l4;
f15024(i,si0);
L94:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
goto L70;
L75:;
si0=l20;
si0=!(si0);
if(si0){
goto L74;
}
si0=l19;
f15024(i,si0);
goto L74;
}
L73:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L69;
L72:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=248U;
si1*=si2;
si0+=si1;
l8=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L97;
}
si0=0U;
l6=si0;
si0=l9;
l4=si0;
L98:;
{
si0=l8;
l7=si0;
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L100;
}
si0=l4;
si1=248U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L99;
}
L100:;
si0=l7;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L98;
}
goto L97;
L99:;
si0=l6;
si1=1U;
si0+=si1;
l10=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16385U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L96;
}
si0=l10;
l6=si0;
si0=l7;
l4=si0;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L98;
}
}
L97:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L95;
L96:;
si0=l10;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L95;
}
L101:;
{
si0=l8;
l4=si0;
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=l7;
si1=248U;
si0+=si1;
l4=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L102;
}
L103:;
si0=l4;
l7=si0;
si0=l13;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L101;
}
goto L95;
L102:;
si0=l6;
si1=l10;
si2=l6;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l6;
si2=l7;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=16385U;
si2&=si3;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
si0=l4;
l7=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L101;
}
}
L95:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l3;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f245(i,si0,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+48U);
l7=si2;
si3=1096084U;
si4=0U;
f437(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L104;
}
si0=l10;
l4=si0;
L105:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L106;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L106:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L70;
}
si0=l10;
f15024(i,si0);
goto L70;
L71:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l7;
si2=l4;
si3=248U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f254(i,si0,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+48U);
si3=1096084U;
si4=0U;
f437(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l3;
si1=40U;
si0+=si1;
f239(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L70;
}
si0=l4;
f15024(i,si0);
L70:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L69;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l6;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L68;
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0-=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L107;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=7U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L107:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096110U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096113U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L67;
L68:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L67;
}
si0=l8;
f15024(i,si0);
L67:;
si0=l12;
si1=l2;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=248U;
si1*=si2;
si0+=si1;
l6=si0;
si0=0U;
l8=si0;
si0=l10;
l7=si0;
L108:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L110;
}
si0=l7;
l4=si0;
L111:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L112;
}
si0=l4;
si1=248U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L109;
}
L112:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L110:;
si0=1096117U;
si1=99U;
si2=1096320U;
f634(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=16384U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
}
si0=l12;
si1=1U;
si0&=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=0U;
l8=si0;
L115:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l10;
l7=si0;
L118:;
{
si0=l6;
l10=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L119;
}
si0=l7;
si1=248U;
si0+=si1;
l10=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L116;
}
L119:;
si0=l10;
l7=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L118;
}
}
L117:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0-=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L120;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si2=7U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L120:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096342U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096345U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=7U;
si0+=si1;
l7=si0;
goto L113;
L116:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l7;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L115;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L121;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si2=5U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L121:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096349U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1096353U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=5U;
si0+=si1;
l7=si0;
goto L113;
L114:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0-=si1;
si1=5U;
si0=si0 > si1;
if(si0){
goto L122;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si2=6U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L122:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096336U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1096340U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=6U;
si0+=si1;
l7=si0;
L113:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
f406(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
l10=si1;
si2=l8;
si0=si2?si0:si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0-=si1;
si1=l3;
si2=136U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L123;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si2=l6;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L123:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
si1=l13;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l6;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L124;
}
si0=l10;
si0=!(si0);
if(si0){
goto L124;
}
si0=l8;
f15024(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L124:;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L125;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
f515(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L125:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
si1=62U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1090040U;
si1=1088744U;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+188U);
si3=1U;
si2>>=(si3&31);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+48U);
si3=!(si3);
si4=l4;
si5=60U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=2U;
si4=si4 < si5;
si3|=si4;
si2&=si3;
l4=si2;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0-=si1;
si1=3U;
si2=0U;
si3=l4;
si1=si3?si1:si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L126;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si2=l4;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L126:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0+=si1;
si1=l8;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
if(si0){
goto L62;
}
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L127;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
f515(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L127:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=93U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L62:;
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l4;
si1=312U;
si0*=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
si1=80U;
si0+=si1;
l4=si0;
L132:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L134;
}
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L133;
}
L134:;
si0=l4;
si1=-63U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L131;
}
L133:;
si0=l4;
si1=312U;
si0+=si1;
l4=si0;
si0=l7;
si1=-312U;
si0+=si1;
l7=si0;
if(si0){
goto L132;
}
goto L130;
}
L131:;
si0=l2;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l18=sj0;
goto L129;
L130:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l18=sj0;
sj1=32768ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L128;
L129:;
sj0=l18;
sj1=2147483649ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L136;
}
si0=1096354U;
si1=1096367U;
sj2=l18;
sj3=130ULL;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l7=si0;
goto L135;
L136:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L137;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=5U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L137:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1096380U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1096384U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=19U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L138;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0-=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L139;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l7;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L139:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1096367U;
l7=si0;
goto L135;
L138:;
si0=l3;
si1=128U;
si0+=si1;
si1=l1;
si2=0U;
f588(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+136U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L140;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l7;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L140:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L141;
}
si0=l8;
f15024(i,si0);
L141:;
si0=1096367U;
l7=si0;
L135:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0-=si1;
si1=12U;
si0=si0 > si1;
if(si0){
goto L142;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=13U;
f530(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L142:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l8=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=5U;
si0+=si1;
si1=l7;
si2=5U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=13U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L128:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0=si0 <= si1;
if(si0){
goto L144;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
if(si0){
goto L146;
}
si0=l7;
f15024(i,si0);
si0=1U;
l7=si0;
goto L145;
L146:;
si0=l7;
si1=l4;
si0=f15027(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L143;
}
L145:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L144:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L147;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L147:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L143:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f589(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
L1:;
{
goto L1;
}
L0:;
return si0;
}

void f590(rustpythonInstance*i,U32 l0) {
L0:;
}

void f591(rustpythonInstance*i,U32 l0) {
L0:;
}

void f592(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=63U;
si0&=si1;
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=1096612U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l5=si0;
si1=2047U;
si0&=si1;
l1=si0;
si1=1308U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=11U;
si0>>=(si1&31);
l5=si0;
si0=0U;
l6=si0;
si0=0U;
si1=l1;
si0-=si1;
l7=si0;
si0=0U;
si1=l2;
si0-=si1;
l8=si0;
si0=l1;
si1=1096742U;
si0+=si1;
l9=si0;
si0=l1;
si1=l4;
si2=1096614U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=2047U;
si1&=si2;
si0-=si1;
l10=si0;
si0=-1308U;
l1=si0;
L6:;
{
si0=l10;
si1=l1;
si0+=si1;
l11=si0;
si1=-1308U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
si1=l1;
si0+=si1;
si1=-1308U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=768U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si0+=si1;
l12=si0;
si1=1316U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=1U;
si0+=si1;
si1=-1308U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l9;
si1=1U;
si0+=si1;
si1=1098050U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=1U;
si0|=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
si0=l4;
si1=l12;
si2=1317U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l13=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
}
si0=l5;
si1=l13;
si2=l4;
si3=255U;
si2&=si3;
si1=si1 < si2;
si0-=si1;
l5=si0;
goto L2;
L5:;
si0=l1;
si1=1308U;
si2=1098068U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
goto L2;
L3:;
si0=768U;
si1=768U;
si2=1098052U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=7U;
si0+=si1;
l9=si0;
si1=l5;
si0+=si1;
l6=si0;
si0=l3;
sj0=(U64)(si0);
l14=sj0;
sj0=0ULL;
l15=sj0;
L8:;
{
si0=l2;
l1=si0;
si1=769U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l1;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=l14;
sj0<<=(sj1&63);
sj1=l15;
sj0+=sj1;
l16=sj0;
sj1=l16;
sj2=10ULL;
sj1=DIV_U(sj1,sj2);
l15=sj1;
sj2=-10ULL;
sj1*=sj2;
sj0+=sj1;
l17=sj0;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L10;
}
sj0=l17;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L9;
L11:;
si0=l1;
si1=-1U;
si0+=si1;
si1=768U;
si2=1096532U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=l1;
si0+=si1;
sj1=l17;
i64_store8(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
if(si0){
goto L8;
}
}
sj0=l16;
sj1=10ULL;
si0=sj0 < sj1;
if(si0){
goto L12;
}
si0=l5;
si1=7U;
si0+=si1;
l1=si0;
L13:;
{
sj0=l15;
l16=sj0;
sj1=l16;
sj2=10ULL;
sj1=DIV_U(sj1,sj2);
l15=sj1;
sj2=-10ULL;
sj1*=sj2;
sj0+=sj1;
l17=sj0;
si0=l1;
si1=-8U;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L15;
}
sj0=l17;
si0=!(sj0);
if(si0){
goto L14;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L14;
L15:;
si0=l0;
si1=l1;
si0+=si1;
sj1=l17;
i64_store8(&i->m0,(U64)si0,sj1);
L14:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj0=l16;
sj1=10ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si1+=si2;
l1=si1;
si2=768U;
si3=l1;
si4=768U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=7U;
si0+=si1;
l1=si0;
L16:;
{
si0=l0;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L1:;
L0:;
}

void f593(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1103348U;
si2=2U;
si3=l3;
si4=32U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f594(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1102240U;
si2=2U;
si3=l3;
si4=32U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f595(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
l3=si0;
si0=l1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l4=sj0;
si0=-768U;
l1=si0;
sj0=0ULL;
l5=sj0;
L6:;
{
si0=l3;
si1=l1;
si0+=si1;
l6=si0;
si1=-768U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l0;
si2=l1;
si1+=si2;
l7=si1;
si2=776U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l6;
si1=-769U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l7;
si2=777U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l1;
si1=768U;
si0+=si1;
l1=si0;
goto L2;
L5:;
si0=768U;
si1=768U;
si2=1096548U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=769U;
si0+=si1;
l1=si0;
goto L2;
L3:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l5;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l2;
l1=si0;
goto L2;
L7:;
si0=l2;
l1=si0;
L8:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L8;
}
}
L2:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=-2047U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+776U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L9:;
sj0=-1ULL;
sj1=l4;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l8=sj0;
si0=l2;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=0U;
si1=l2;
si0-=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si1=l1;
si0-=si1;
l6=si0;
si0=l1;
si1=768U;
si2=l1;
si3=768U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-768U;
si0+=si1;
l3=si0;
si0=8U;
l1=si0;
L15:;
{
si0=l3;
si1=l1;
si0+=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l7;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l10=sj0;
si0=l0;
si1=l1;
si0+=si1;
sj1=l5;
sj2=l4;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l5;
sj2=l8;
sj1&=sj2;
sj2=10ULL;
sj1*=sj2;
sj0+=sj1;
l5=sj0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0+=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L15;
}
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=0U;
l6=si0;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L12:;
si0=l7;
si1=-8U;
si0+=si1;
si1=768U;
si2=1096564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
L16:;
{
sj0=l5;
l10=sj0;
sj1=l8;
sj0&=sj1;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj0=l10;
sj1=l4;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l6;
si1=768U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L17;
L18:;
si0=l0;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L17:;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l6;
si1=768U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l6;
si1=7U;
si0+=si1;
l1=si0;
L20:;
{
si0=l0;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L20;
}
L19:;
si0=l6;
si1=-1U;
si0+=si1;
si1=768U;
si2=1096516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f596(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=784U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si2=777U;
si0=f15145(i,si0,si1,si2);
si0=l2;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L3:;
{
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l7;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=48U;
si0=si0 == si1;
if(si0){
goto L3;
}
}
si0=l2;
si1=l7;
si0-=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l1;
si1=l7;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l7=si0;
L18:;
{
si0=l7;
si1=767U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L19:;
si0=l10;
si1=l11;
si0+=si1;
l8=si0;
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l11;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L17;
}
goto L18;
L20:;
}
si0=0U;
l11=si0;
goto L6;
L17:;
si0=l10;
si1=l11;
si0+=si1;
l8=si0;
si0=l12;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=l11;
si0-=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
goto L6;
L16:;
si0=l1;
si1=l7;
si0+=si1;
l7=si0;
si0=l8;
si1=46U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
l8=si0;
goto L14;
L15:;
si0=l11;
si1=-1U;
si0^=si1;
si1=l5;
si0+=si1;
l4=si0;
l11=si0;
si0=l7;
if(si0){
goto L13;
}
L14:;
si0=0U;
l7=si0;
si0=0U;
l5=si0;
L21:;
{
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=0U;
l11=si0;
si0=l6;
l8=si0;
goto L7;
L22:;
si0=l8;
si1=l5;
si0+=si1;
l11=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=48U;
si0=si0 == si1;
if(si0){
goto L21;
}
}
si0=l8;
si1=l5;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=l5;
si0-=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l7=si0;
L13:;
si0=l11;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=8U;
si0+=si1;
si1=767U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L23:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l13;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l13=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l7;
si1=769U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l7;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si2=8U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=16U;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L23;
}
goto L10;
}
L12:;
si0=l7;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l4=si0;
goto L5;
L11:;
si0=l7;
si1=768U;
si2=1096580U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
L24:;
{
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=767U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L25:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L24;
}
}
L8:;
si0=0U;
l11=si0;
L7:;
si0=l3;
si1=l11;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L6:;
si0=l7;
if(si0){
goto L27;
}
si0=0U;
l4=si0;
goto L26;
L27:;
si0=l2;
si1=l11;
si0-=si1;
l5=si0;
si0=l2;
si1=l11;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=0U;
l4=si0;
si0=l2;
si1=l11;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
L30:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L31;
case 1:
goto L29;
case 2:
goto L32;
default:
goto L29;
}
L32:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
L31:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
si2=l4;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=768U;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l3;
si1=768U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+780U,si1);
si0=768U;
l4=si0;
goto L26;
L28:;
si0=l5;
si1=l2;
si2=1096596U;
f597(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l11;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
L5:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l11;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L34;
}
si0=0U;
l7=si0;
goto L33;
L34:;
si0=0U;
l2=si0;
si0=l11;
si1=-2U;
si0+=si1;
si1=l5;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=45U;
si2=si2 == si3;
l9=si2;
si3=l1;
si4=43U;
si3=si3 == si4;
si2|=si3;
l11=si2;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l8;
si1=2U;
si0+=si1;
si1=l7;
si2=l11;
si0=si2?si0:si1;
l5=si0;
si0=0U;
l2=si0;
si0=0U;
l7=si0;
L36:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l8=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l7;
si1=10U;
si0*=si1;
si1=l8;
si0+=si1;
l8=si0;
si1=l7;
si2=l7;
si3=65536U;
si2=(U32)((I32)si2<(I32)si3);
l11=si2;
si0=si2?si0:si1;
l7=si0;
si0=l8;
si1=l2;
si2=l11;
si0=si2?si0:si1;
l2=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L36;
}
}
L35:;
si0=0U;
si1=l2;
si0-=si1;
si1=l2;
si2=l9;
si0=si2?si0:si1;
l7=si0;
L33:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l4;
si1=18U;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=19U;
si3=l4;
si2-=si3;
si0=f15145(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
si2=780U;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=784U;
si0+=si1;
i->g0=si0;
L0:;
}

void f597(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1103380U;
si2=2U;
si3=l3;
si4=32U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f598(rustpythonInstance*i,U32 l0,U64 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=0ULL;
l4=sj0;
si0=0U;
l5=si0;
sj0=l1;
sj1=-342ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L1;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
si0=2047U;
l5=si0;
sj0=l1;
sj1=308ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=0ULL;
l4=sj0;
si0=l3;
si1=16U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
l6=si1;
si2=342U;
si1+=si2;
si2=4U;
si1<<=(si2&31);
l7=si1;
si2=1106656U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l2;
sj4=l2;
sj4=I64_CLZ(sj4);
l8=sj4;
sj3<<=(sj4&63);
l9=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=511ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=l7;
si2=1106664U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
l2=sj0;
L2:;
sj0=l1;
sj1=-56ULL;
sj0+=sj1;
sj1=-84ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sj0=l10;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=-1U;
l5=si0;
goto L1;
L3:;
sj0=l2;
sj1=l2;
sj2=63ULL;
sj1>>=(sj2&63);
l11=sj1;
sj2=9ULL;
sj1+=sj2;
l12=sj1;
sj0>>=(sj1&63);
l9=sj0;
si0=l6;
si1=217706U;
si0*=si1;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
sj1=l8;
si1=(U32)(sj1);
si0-=si1;
sj1=l11;
si1=(U32)(sj1);
si0+=si1;
si1=63U;
si0+=si1;
l6=si0;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=1024U;
si1=1023U;
sj2=l9;
sj3=72057594037927934ULL;
sj2&=sj3;
sj3=l9;
sj4=l9;
sj5=l12;
sj4<<=(sj5&63);
sj5=l2;
si4=sj4 == sj5;
si5=1U;
si4&=si5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l9;
sj5=3ULL;
sj4&=sj5;
sj5=1ULL;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l10;
sj5=2ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l1;
sj5=4ULL;
sj4+=sj5;
sj5=28ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
l1=sj2;
sj3=1ULL;
sj2&=sj3;
sj3=l1;
sj2+=sj3;
l1=sj2;
sj3=18014398509481983ULL;
si2=sj2 > sj3;
l7=si2;
si0=si2?si0:si1;
si1=l6;
si0+=si1;
l6=si0;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=0ULL;
sj1=l1;
sj2=1ULL;
sj1>>=(sj2&63);
sj2=67553994410557439ULL;
sj1&=sj2;
si2=l7;
sj0=si2?sj0:sj1;
l4=sj0;
si0=l6;
l5=si0;
goto L1;
L4:;
si0=0U;
l5=si0;
si0=l6;
si1=-1085U;
si0=si0 < si1;
if(si0){
goto L1;
}
sj0=l9;
si1=2U;
si2=l6;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj1=1ULL;
sj0&=sj1;
sj1=l1;
sj0+=sj1;
l1=sj0;
sj1=9007199254740991ULL;
si0=sj0 > sj1;
l5=si0;
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f599(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
sj0=0ULL;
l3=sj0;
si0=l2;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
l5=si0;
si0=l2;
l4=si0;
sj0=0ULL;
l3=sj0;
L8:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l6;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=16ULL;
sj0>>=(sj1&63);
sj1=1095216660735ULL;
sj0&=sj1;
sj1=42949672960001ULL;
sj0*=sj1;
sj1=l6;
sj2=1095216660735ULL;
sj1&=sj2;
sj2=4294967296000100ULL;
sj1*=sj2;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l3;
sj2=100000000ULL;
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=0U;
l7=si0;
L9:;
{
si0=l5;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l10;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l11=si0;
si0=l2;
l10=si0;
si0=0U;
l9=si0;
sj0=0ULL;
l12=sj0;
goto L3;
L4:;
si0=l4;
si1=l7;
si0-=si1;
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
l10=si0;
sj0=0ULL;
l12=sj0;
si0=l11;
l5=si0;
goto L10;
L11:;
si0=l5;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=l11;
si1=-1U;
si0+=si1;
l5=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L15;
}
L16:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l6;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=16ULL;
sj0>>=(sj1&63);
sj1=1095216660735ULL;
sj0&=sj1;
sj1=42949672960001ULL;
sj0*=sj1;
sj1=l6;
sj2=1095216660735ULL;
sj1&=sj2;
sj2=4294967296000100ULL;
sj1*=sj2;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l3;
sj2=100000000ULL;
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
l10=si0;
si1=l5;
si0+=si1;
l8=si0;
L17:;
{
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l10;
l8=si0;
goto L12;
L18:;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l9;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L13:;
si0=0U;
l5=si0;
L12:;
si0=l7;
si1=-1U;
si0^=si1;
si1=l4;
si2=l5;
si1-=si2;
si0+=si1;
l10=si0;
si0=l5;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
sj0=(U64)(I64)(I32)(si0);
l12=sj0;
L10:;
si0=l10;
si1=l2;
si2=l4;
si1-=si2;
si0+=si1;
si1=l7;
si0+=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
si0=l5;
if(si0){
goto L19;
}
si0=0U;
l9=si0;
goto L3;
L19:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=1U;
l9=si0;
goto L3;
L20:;
si0=l5;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
l13=si0;
si0=l4;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L22;
case 1:
goto L21;
case 2:
goto L22;
default:
goto L21;
}
L22:;
si0=l5;
si1=-2U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=2U;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
L21:;
si0=l13;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L2;
}
sj0=0ULL;
l14=sj0;
sj0=0ULL;
l6=sj0;
L24:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L23;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l15=sj0;
sj1=l6;
sj2=l6;
sj3=65536ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l5=si2;
sj0=si2?sj0:sj1;
l6=sj0;
sj0=l15;
sj1=l14;
si2=l5;
sj0=si2?sj0:sj1;
l14=sj0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L24;
}
}
si0=0U;
l9=si0;
L23:;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
sj1=l14;
si2=l4;
si3=45U;
si2=si2 == si3;
sj0=si2?sj0:sj1;
l6=sj0;
sj1=l12;
sj0+=sj1;
l12=sj0;
L3:;
si0=0U;
l5=si0;
si0=l10;
si1=20U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
si0=l2;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l10;
si1=-19U;
si0+=si1;
l10=si0;
si0=l1;
l8=si0;
L31:;
{
si0=l4;
l5=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L30;
case 2:
goto L32;
default:
goto L30;
}
L32:;
si0=l10;
si1=0U;
si2=l4;
si3=-47U;
si2+=si3;
l8=si2;
si3=l8;
si4=l4;
si3=si3 > si4;
si1=si3?si1:si2;
si0-=si1;
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si1=1U;
si0+=si1;
si1=l5;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
l8=si0;
si0=l5;
if(si0){
goto L31;
}
}
L30:;
si0=l10;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L26;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
sj0=0ULL;
l3=sj0;
L35:;
{
si0=l5;
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l4;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L36;
}
si0=l5;
if(si0){
goto L35;
}
L36:;
}
sj0=l3;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L28;
}
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=0U;
si1=l5;
si0-=si1;
l5=si0;
goto L33;
L34:;
si0=0U;
si1=l7;
si0-=si1;
l5=si0;
L33:;
si0=l5;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L37;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=l2;
l5=si0;
L38:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L39:;
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l4;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L40;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
l4=si0;
si0=l8;
l5=si0;
si0=l4;
if(si0){
goto L38;
}
L40:;
}
si0=l8;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L29:;
si0=1U;
si1=0U;
si2=1098528U;
f593(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=0U;
si1=l11;
si2=l5;
si1+=si2;
si0-=si1;
l5=si0;
L27:;
sj0=l6;
si1=l5;
sj1=(U64)(I64)(I32)(si1);
sj0+=sj1;
l12=sj0;
L26:;
si0=l10;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l5=si0;
L25:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+17U,si1);
goto L0;
L1:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f600(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si1=7U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L1;
L4:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1101176U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l4=sj0;
si0=l3;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l2=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L5;
}
sj0=0ULL;
l7=sj0;
si0=l0;
l2=si0;
goto L2;
L5:;
si0=l5;
si1=2147483644U;
si0&=si1;
l5=si0;
sj0=0ULL;
l7=sj0;
si0=l0;
l2=si0;
L6:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
goto L2;
}
L3:;
si0=l3;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L7:;
sj0=l7;
si0=(U32)(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L10:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L1;
L9:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
if(si0){
goto L16;
}
si0=0U;
l3=si0;
goto L13;
L16:;
si0=l3;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l2=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L17;
}
sj0=0ULL;
l4=sj0;
si0=l0;
l2=si0;
goto L14;
L17:;
si0=l5;
si1=2147483644U;
si0&=si1;
l5=si0;
sj0=0ULL;
l4=sj0;
si0=l0;
l2=si0;
L18:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L18;
}
goto L14;
}
L15:;
si0=l3;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
L20:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L19:;
sj0=l4;
si0=(U32)(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=39U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L13:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+160U,si1);
L12:;
si0=l1;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si1=1098684U;
si2=2U;
si0=f601(i,si0,si1,si2);
L21:;
si0=l1;
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=1098692U;
si2=4U;
si0=f601(i,si0,si1,si2);
L22:;
si0=l1;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=1098708U;
si2=7U;
si0=f601(i,si0,si1,si2);
L23:;
si0=l1;
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si1=1098736U;
si2=14U;
si0=f601(i,si0,si1,si2);
L24:;
si0=l1;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=1098792U;
si2=27U;
si0=f601(i,si0,si1,si2);
L25:;
si0=l0;
goto L0;
L11:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f601(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
si2=160U;
si0=f15145(i,si0,si1,si2);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L5:;
{
si0=l4;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L6:;
{
si0=l8;
l11=si0;
si0=l10;
l3=si0;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
l1=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l12;
sj0=(U64)(si0);
l14=sj0;
sj0=0ULL;
l15=sj0;
si0=l2;
l12=si0;
si0=l11;
l1=si0;
si0=l0;
l10=si0;
L9:;
{
si0=l1;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l3;
sj1=l15;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1+=sj2;
si2=l10;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj3=l14;
sj2*=sj3;
sj1+=sj2;
l15=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=32ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L9;
}
}
si0=l5;
l3=si0;
sj0=l15;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=l5;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l3=si0;
goto L7;
L10:;
si0=l3;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l9;
si1=l3;
si2=l11;
si1+=si2;
l3=si1;
si2=l9;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l13;
l1=si0;
goto L5;
}
L4:;
si0=l5;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
l16=si0;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=0U;
l11=si0;
si0=l0;
l10=si0;
si0=0U;
l9=si0;
L13:;
{
si0=l4;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L14:;
{
si0=l11;
l12=si0;
si0=l8;
l3=si0;
si0=l10;
si1=l13;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
l10=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l6;
sj0=(U64)(si0);
l14=sj0;
sj0=0ULL;
l15=sj0;
si0=l7;
l6=si0;
si0=l12;
l10=si0;
si0=l1;
l8=si0;
L15:;
{
si0=l10;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
sj1=l15;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1+=sj2;
si2=l8;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj3=l14;
sj2*=sj3;
sj1+=sj2;
l15=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=32ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
si0=l2;
l3=si0;
sj0=l15;
si0=(U32)(sj0);
l10=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l12;
si1=l2;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
l3=si0;
L17:;
si0=l9;
si1=l3;
si2=l12;
si1+=si2;
l3=si1;
si2=l9;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l5;
l10=si0;
goto L13;
L16:;
}
si0=l3;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l10;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l9=si0;
si0=0U;
l3=si0;
L18:;
{
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=4U;
si0+=si1;
l8=si0;
l1=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=l9;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l8;
l1=si0;
goto L18;
}
L1:;
si0=l0;
si1=l4;
si2=160U;
si0=f15143(i,si0,si1,si2);
l3=si0;
si1=l9;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f602(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=1312U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L24;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=!(sj0);
if(si0){
goto L23;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L22;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l8=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L21;
}
sj0=l5;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L20;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+26U);
l9=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+24U);
l1=si0;
si0=l4;
sj1=l5;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l5;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=0U;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15145(i,si0,si1,si2);
si0=l4;
sj1=l6;
i64_store32(&i->m0,(U64)si0+164U,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l6;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l4;
si1=0U;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15145(i,si0,si1,si2);
si0=l4;
sj1=l7;
i64_store32(&i->m0,(U64)si0+328U,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l7;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+488U,si1);
si0=l4;
si1=0U;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l4;
si1=328U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=496U;
si0+=si1;
si1=0U;
si2=156U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+492U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l1;
sj0=(U64)(si0);
sj0=(U64)(I64)(I16)(U16)(sj0);
sj1=l8;
sj2=-1ULL;
sj1+=sj2;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1292913986ULL;
sj0*=sj1;
sj1=82746495104ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=(U32)(I32)(I16)(U16)(si0);
l11=si0;
si0=l1;
si0=(U32)(I32)(I16)(U16)(si0);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L26;
}
si0=l4;
si1=l1;
si0=f603(i,si0,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l1;
si0=f603(i,si0,si1);
si0=l4;
si1=328U;
si0+=si1;
si1=l1;
si0=f603(i,si0,si1);
goto L25;
L26:;
si0=l4;
si1=492U;
si0+=si1;
si1=0U;
si2=l12;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f603(i,si0,si1);
L25:;
si0=l11;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L28;
}
si0=l4;
si1=0U;
si2=l11;
si1-=si2;
si2=65535U;
si1&=si2;
l1=si1;
si0=f600(i,si0,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l1;
si0=f600(i,si0,si1);
si0=l4;
si1=328U;
si0+=si1;
si1=l1;
si0=f600(i,si0,si1);
goto L27;
L28:;
si0=l4;
si1=492U;
si0+=si1;
si1=l10;
si2=65535U;
si1&=si2;
si0=f600(i,si0,si1);
L27:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+160U);
l13=si1;
i32_store(&i->m0,(U64)si0+1308U,si1);
si0=l4;
si1=1148U;
si0+=si1;
si1=l4;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l13;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+488U);
l14=si1;
si2=l13;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l15;
if(si0){
goto L30;
}
si0=0U;
l15=si0;
goto L29;
L30:;
si0=0U;
l16=si0;
si0=0U;
l17=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l15;
si1=1U;
si0&=si1;
l18=si0;
si0=0U;
l17=si0;
si0=l4;
si1=328U;
si0+=si1;
l10=si0;
si0=l4;
si1=1148U;
si0+=si1;
l1=si0;
si0=l15;
si1=-2U;
si0&=si1;
l16=si0;
l19=si0;
L34:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L34;
}
}
si0=l18;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
si0=l4;
si1=1148U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=328U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L31;
}
goto L29;
L32:;
si0=l17;
si0=!(si0);
if(si0){
goto L29;
}
L31:;
si0=l15;
si1=39U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=1148U;
si0+=si1;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L29:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+1308U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+652U);
l19=si0;
si1=l15;
si2=l19;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L37:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L36;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=1148U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si4=492U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L37;
}
goto L35;
}
L36:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L35:;
si0=l10;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L38;
}
si0=l13;
if(si0){
goto L39;
}
si0=0U;
l13=si0;
goto L14;
L39:;
si0=l13;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L15;
L40:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
L41:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L41;
}
goto L15;
}
L38:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
goto L6;
L24:;
si0=1099296U;
si1=28U;
si2=1099324U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1099248U;
si1=29U;
si2=1099280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1099204U;
si1=28U;
si2=1099232U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1099132U;
si1=54U;
si2=1099188U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1099060U;
si1=55U;
si2=1099116U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1098996U;
si1=45U;
si2=1099044U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l15;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l10;
si0=!(si0);
if(si0){
goto L42;
}
L43:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L43;
}
}
L42:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l13;
si1=39U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l4;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L14:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+324U);
l20=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=0U;
l21=si0;
si0=0U;
l1=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L10;
}
si0=l20;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l4;
si1=164U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L11;
L44:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=164U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L45:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L45;
}
goto L11;
}
L13:;
si0=l13;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l20;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L46;
}
L47:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L47;
}
}
L46:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L48;
}
si0=l20;
l1=si0;
goto L10;
L48:;
si0=l20;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=164U;
si0+=si1;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0+=si1;
l1=si0;
L10:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l14;
si0=!(si0);
if(si0){
goto L7;
}
si0=l14;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l4;
si1=328U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L8;
L49:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=328U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L50:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L50;
}
goto L8;
}
L9:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L51;
}
L52:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L52;
}
}
L51:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L53;
}
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+488U,si1);
goto L6;
L53:;
si0=l14;
si1=39U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=328U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0+=si1;
l21=si0;
L7:;
si0=l4;
si1=l21;
i32_store(&i->m0,(U64)si0+488U,si1);
L6:;
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l4;
si1=656U;
si0+=si1;
si1=l4;
si2=492U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=656U;
si0+=si1;
si1=1U;
si0=f603(i,si0,si1);
l23=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+652U);
i32_store(&i->m0,(U64)si0+980U,si1);
si0=l4;
si1=820U;
si0+=si1;
si1=l4;
si2=492U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=820U;
si0+=si1;
si1=2U;
si0=f603(i,si0,si1);
l24=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+652U);
i32_store(&i->m0,(U64)si0+1144U,si1);
si0=l4;
si1=984U;
si0+=si1;
si1=l4;
si2=492U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=984U;
si0+=si1;
si1=3U;
si0=f603(i,si0,si1);
l25=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l19=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1144U);
l26=si1;
si2=l19;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l4;
si1=656U;
si0+=si1;
si1=-4U;
si0+=si1;
l16=si0;
si0=l4;
si1=820U;
si0+=si1;
si1=-4U;
si0+=si1;
l14=si0;
si0=l4;
si1=984U;
si0+=si1;
si1=-4U;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+652U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+816U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+980U);
l29=si0;
si0=0U;
l30=si0;
L56:;
{
si0=l30;
l31=si0;
si0=l15;
si1=2U;
si0<<=(si1&31);
l1=si0;
L59:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L58;
}
si0=-1U;
si1=l13;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L59;
}
goto L57;
}
L58:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L57:;
si0=0U;
l32=si0;
si0=l10;
si1=1U;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l15;
si0=!(si0);
if(si0){
goto L61;
}
si0=1U;
l17=si0;
si0=0U;
l18=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l15;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=984U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l15;
si1=-2U;
si0&=si1;
l18=si0;
l19=si0;
L64:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L64;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L62;
}
L63:;
si0=l4;
si1=l18;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l25;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L61;
}
goto L1;
L62:;
si0=l17;
si0=!(si0);
if(si0){
goto L1;
}
L61:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=8U;
l32=si0;
si0=l15;
l19=si0;
L60:;
si0=l19;
si1=l29;
si2=l19;
si3=l29;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L82;
}
si0=l15;
si1=2U;
si0<<=(si1&31);
l1=si0;
L85:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L84;
}
si0=-1U;
si1=l14;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L85;
}
goto L83;
}
L84:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L83:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L87;
}
si0=l19;
l15=si0;
goto L86;
L87:;
si0=l15;
si0=!(si0);
if(si0){
goto L88;
}
si0=1U;
l17=si0;
si0=0U;
l18=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L90;
}
si0=l15;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=820U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l15;
si1=-2U;
si0&=si1;
l18=si0;
l19=si0;
L91:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L91;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L89;
}
L90:;
si0=l4;
si1=l18;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l24;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L88;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L88;
}
goto L2;
L89:;
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
L88:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=4U;
si0|=si1;
l32=si0;
L86:;
si0=l15;
si1=l28;
si2=l15;
si3=l28;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l33;
si1=2U;
si0<<=(si1&31);
l1=si0;
L94:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L93;
}
si0=-1U;
si1=l16;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L94;
}
goto L92;
}
L93:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L92:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L96;
}
si0=l15;
l33=si0;
goto L95;
L96:;
si0=l33;
si0=!(si0);
if(si0){
goto L97;
}
si0=1U;
l17=si0;
si0=0U;
l15=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L99;
}
si0=l33;
si1=1U;
si0&=si1;
l18=si0;
si0=1U;
l17=si0;
si0=l4;
si1=656U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l15=si0;
l19=si0;
L100:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L100;
}
}
si0=l18;
si0=!(si0);
if(si0){
goto L98;
}
L99:;
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l23;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L97;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L97;
}
goto L3;
L98:;
si0=l17;
si0=!(si0);
if(si0){
goto L3;
}
L97:;
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=2U;
si0+=si1;
l32=si0;
L95:;
si0=l33;
si1=l27;
si2=l33;
si3=l27;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L80;
}
si0=l18;
si1=2U;
si0<<=(si1&31);
l1=si0;
L103:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=492U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L103;
}
goto L101;
}
L102:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L101:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L105;
}
si0=l33;
l18=si0;
goto L104;
L105:;
si0=l18;
si0=!(si0);
if(si0){
goto L106;
}
si0=1U;
l17=si0;
si0=0U;
l15=si0;
si0=l18;
si1=1U;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l18;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=492U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l18;
si1=-2U;
si0&=si1;
l15=si0;
l19=si0;
L109:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L109;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L107;
}
L108:;
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=492U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L106;
}
goto L4;
L107:;
si0=l17;
si0=!(si0);
if(si0){
goto L4;
}
L106:;
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L104:;
si0=l31;
si1=l3;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l2;
si1=l31;
si0+=si1;
si1=l32;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l18;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+324U);
l34=si1;
si2=l18;
si3=l34;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L79;
}
si0=l31;
si1=1U;
si0+=si1;
l30=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L112:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L111;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=164U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=!(si0);
if(si0){
goto L112;
}
goto L110;
}
L111:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l15=si0;
L110:;
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+1308U,si1);
si0=l4;
si1=1148U;
si0+=si1;
si1=l4;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l18;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+488U);
l32=si1;
si2=l18;
si3=l32;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L74;
}
si0=l33;
if(si0){
goto L114;
}
si0=0U;
l33=si0;
goto L113;
L114:;
si0=0U;
l35=si0;
si0=0U;
l17=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L117;
}
si0=l33;
si1=1U;
si0&=si1;
l36=si0;
si0=0U;
l17=si0;
si0=l4;
si1=328U;
si0+=si1;
l10=si0;
si0=l4;
si1=1148U;
si0+=si1;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l35=si0;
l19=si0;
L118:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L118;
}
}
si0=l36;
si0=!(si0);
if(si0){
goto L116;
}
L117:;
si0=l4;
si1=1148U;
si0+=si1;
si1=l35;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=328U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L115;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L115;
}
goto L113;
L116:;
si0=l17;
si0=!(si0);
if(si0){
goto L113;
}
L115:;
si0=l33;
si1=39U;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l4;
si1=1148U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l33;
si1=1U;
si0+=si1;
l33=si0;
L113:;
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0+1308U,si1);
si0=l27;
si1=l33;
si2=l27;
si3=l33;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L121:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L120;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=1148U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si4=492U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L121;
}
goto L119;
}
L120:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L119:;
si0=l15;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L122;
}
si0=l10;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L122;
}
si0=0U;
l20=si0;
si0=0U;
l19=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L71;
}
si0=l18;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L123;
}
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L72;
L123:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
L124:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L124;
}
goto L72;
}
L122:;
si0=l10;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L73;
}
si0=l15;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L125;
}
si0=l4;
si1=1U;
si0=f603(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+652U);
l10=si1;
si2=l1;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L75;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
si1=-4U;
si0+=si1;
l17=si0;
si0=l4;
si1=492U;
si0+=si1;
si1=-4U;
si0+=si1;
l19=si0;
L128:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L127;
}
si0=l17;
si1=l1;
si0+=si1;
l10=si0;
si0=l19;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si1=si1 != si2;
si2=l12;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L128;
}
goto L126;
}
L127:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L126:;
si0=l10;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L73;
}
L125:;
si0=l2;
si1=l30;
si0+=si1;
l19=si0;
si0=l31;
l1=si0;
si0=-1U;
l10=si0;
L130:;
{
si0=l1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L129;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l2;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=-1U;
si0+=si1;
l17=si0;
l1=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L130;
}
}
si0=l2;
si1=l17;
si0+=si1;
l12=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=2U;
si0+=si1;
si1=l31;
si0=si0 > si1;
if(si0){
goto L73;
}
si0=l12;
si1=2U;
si0+=si1;
si1=48U;
si2=l10;
si0=f15145(i,si0,si1,si2);
goto L73;
L129:;
si0=l2;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l31;
si0=!(si0);
if(si0){
goto L131;
}
si0=l2;
si1=1U;
si0+=si1;
si1=48U;
si2=l31;
si0=f15145(i,si0,si1,si2);
L131:;
si0=l30;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L132;
}
si0=l19;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l31;
si1=2U;
si0+=si1;
l30=si0;
goto L73;
L132:;
si0=l30;
si1=l3;
si2=1098964U;
f594(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l15;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l33;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l18;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l3;
si1=l3;
si2=1098948U;
f594(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l33;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l30;
si1=l3;
si0=si0 > si1;
if(si0){
goto L133;
}
si0=l0;
si1=l11;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1312U;
si0+=si1;
i->g0=si0;
goto L0;
L133:;
si0=l30;
si1=l3;
si2=1098980U;
f597(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l10;
si0=!(si0);
if(si0){
goto L134;
}
L135:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L135;
}
}
L134:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L136;
}
si0=l18;
l19=si0;
goto L71;
L136:;
si0=l18;
si1=39U;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l4;
si1=l18;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=1U;
si0+=si1;
l19=si0;
L71:;
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l34;
si0=!(si0);
if(si0){
goto L68;
}
si0=l34;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L137;
}
si0=l4;
si1=164U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L69;
L137:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=164U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L138:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L138;
}
goto L69;
}
L70:;
si0=l18;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l10;
si0=!(si0);
if(si0){
goto L139;
}
L140:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L140;
}
}
L139:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L141;
}
si0=l34;
l20=si0;
goto L68;
L141:;
si0=l34;
si1=39U;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l4;
si1=164U;
si0+=si1;
si1=l34;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l34;
si1=1U;
si0+=si1;
l20=si0;
L68:;
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l32;
if(si0){
goto L142;
}
si0=0U;
l32=si0;
goto L65;
L142:;
si0=l32;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L143;
}
si0=l4;
si1=328U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L66;
L143:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=328U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L144:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L144;
}
goto L66;
}
L67:;
si0=l34;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l10;
si0=!(si0);
if(si0){
goto L145;
}
L146:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L146;
}
}
L145:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l32;
si1=39U;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l4;
si1=328U;
si0+=si1;
si1=l32;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L65:;
si0=l4;
si1=l32;
i32_store(&i->m0,(U64)si0+488U,si1);
si0=l19;
si1=l26;
si2=l19;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=40U;
si0=si0 <= si1;
if(si0){
goto L56;
}
}
L55:;
si0=l15;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l32;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l14;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f603(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=1279U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=5U;
si0>>=(si1&31);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=40U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
si1=l2;
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-4U;
si0+=si1;
l6=si0;
L6:;
{
si0=l4;
si1=l3;
si0+=si1;
si1=39U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=32U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=64U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=7U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=8U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=10U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=11U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=13U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=14U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=15U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=16U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=17U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=18U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=19U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=20U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=21U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=22U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=23U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=24U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=25U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=26U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=27U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=28U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=29U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=30U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=31U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=32U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=33U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=34U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=35U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=36U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=37U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=39U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=40U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
si0+=si1;
si1=-1U;
si0+=si1;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1106594U;
si1=29U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=-1U;
si0+=si1;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l2;
si0+=si1;
l5=si0;
si0=l1;
si1=31U;
si0&=si1;
l4=si0;
if(si0){
goto L7;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
goto L0;
L7:;
si0=l5;
si1=-1U;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
l7=si0;
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=0U;
si2=l1;
si1-=si2;
l8=si1;
si0>>=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=39U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
goto L8;
L10:;
si0=l5;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l3=si0;
L13:;
{
si0=l5;
si1=-2U;
si0+=si1;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=l4;
si1<<=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l8;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
goto L0;
L11:;
si0=-1U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f604(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1096476U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f605(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=832U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
sj0=l6;
sj1=l8;
sj0+=sj1;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L17;
}
sj0=l6;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+24U);
l1=si0;
si0=l5;
sj1=l6;
i64_store32(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=1U;
si2=2U;
sj3=l6;
sj4=4294967296ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=0U;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15145(i,si0,si1,si2);
si0=l5;
si1=180U;
si0+=si1;
si1=0U;
si2=156U;
si0=f15145(i,si0,si1,si2);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l1;
sj0=(U64)(si0);
sj0=(U64)(I64)(I16)(U16)(sj0);
sj1=l6;
sj2=-1ULL;
sj1+=sj2;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1292913986ULL;
sj0*=sj1;
sj1=82746495104ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si0=l1;
si0=(U32)(I32)(I16)(U16)(si0);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L22;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si0=f603(i,si0,si1);
goto L21;
L22:;
si0=l5;
si1=176U;
si0+=si1;
si1=0U;
si2=l11;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f603(i,si0,si1);
L21:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L24;
}
si0=l5;
si1=12U;
si0+=si1;
si1=0U;
si2=l10;
si1-=si2;
si2=65535U;
si1&=si2;
si0=f600(i,si0,si1);
goto L23;
L24:;
si0=l5;
si1=176U;
si0+=si1;
si1=l9;
si2=65535U;
si1&=si2;
si0=f600(i,si0,si1);
L23:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
l12=si1;
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l5;
si1=668U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l3;
l13=si0;
si0=l3;
si1=10U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l12;
si1=40U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l12;
l1=si0;
goto L26;
L27:;
si0=l5;
si1=668U;
si0+=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
l13=si0;
si0=l12;
l1=si0;
L28:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L31;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L30;
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l15=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l14;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L32:;
{
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l7;
sj2=-1000000000ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=-1000000000ULL;
sj0*=sj1;
sj1=l6;
sj0+=sj1;
l6=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L32;
}
}
si0=l15;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L30:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
i64_store32(&i->m0,(U64)si0,sj1);
L29:;
si0=l13;
si1=-9U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+828U);
l1=si0;
si1=41U;
si0=si0 < si1;
if(si0){
goto L28;
}
}
L26:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l13;
si1=2U;
si0<<=(si1&31);
si1=1098644U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+828U);
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l1;
if(si0){
goto L38;
}
si0=0U;
l1=si0;
goto L33;
L38:;
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l9;
sj0=(U64)(si0);
l6=sj0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L36;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l7=sj0;
goto L35;
L37:;
si0=1106623U;
si1=27U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l13=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l11;
si1=l5;
si2=668U;
si1+=si2;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l7=sj0;
L39:;
{
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
sj1=l7;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l7=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l7;
sj2=l8;
sj3=l6;
sj2*=sj3;
sj1-=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l7=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=l8;
sj2=l6;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L39;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L35:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l7;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
sj2=l6;
sj1=DIV_U(sj1,sj2);
i64_store32(&i->m0,(U64)si0,sj1);
L34:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+828U);
l1=si0;
L33:;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+172U);
l16=si1;
si2=l1;
si3=l16;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l17;
if(si0){
goto L41;
}
si0=0U;
l17=si0;
goto L40;
L41:;
si0=0U;
l18=si0;
si0=0U;
l13=si0;
si0=l17;
si1=1U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l17;
si1=1U;
si0&=si1;
l19=si0;
si0=0U;
l13=si0;
si0=l5;
si1=12U;
si0+=si1;
l9=si0;
si0=l5;
si1=668U;
si0+=si1;
l1=si0;
si0=l17;
si1=-2U;
si0&=si1;
l18=si0;
l15=si0;
L45:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l13=si1;
si2=l11;
si3=l14;
si2=si2 < si3;
si3=l20;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l21;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l15;
si1=-2U;
si0+=si1;
l15=si0;
if(si0){
goto L45;
}
}
si0=l19;
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l5;
si1=668U;
si0+=si1;
si1=l18;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=12U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L42;
}
goto L40;
L43:;
si0=l13;
si0=!(si0);
if(si0){
goto L40;
}
L42:;
si0=l17;
si1=39U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
L40:;
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l17;
si1=l12;
si2=l17;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L48:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L47;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=668U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L48;
}
goto L46;
}
L47:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L46:;
si0=l9;
si1=1U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L9;
L49:;
si0=l16;
if(si0){
goto L50;
}
si0=0U;
l16=si0;
goto L10;
L50:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L11;
L51:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L52:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L52;
}
goto L11;
}
L20:;
si0=1099296U;
si1=28U;
si2=1099484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1099248U;
si1=29U;
si2=1099468U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1099204U;
si1=28U;
si2=1099452U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1099132U;
si1=54U;
si2=1099436U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1099060U;
si1=55U;
si2=1099420U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l17;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L53;
}
L54:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L54;
}
}
L53:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L10:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+172U,si1);
L9:;
si0=0U;
l14=si0;
si0=l10;
si0=(U32)(I32)(I16)(U16)(si0);
l1=si0;
si1=l4;
si1=(U32)(I32)(I16)(U16)(si1);
l9=si1;
si0=(U32)((I32)si0<(I32)si1);
l22=si0;
if(si0){
goto L56;
}
si0=l10;
si1=l4;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=l3;
si2=l1;
si3=l9;
si2-=si3;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
if(si0){
goto L55;
}
si0=0U;
l14=si0;
L56:;
si0=0U;
l13=si0;
goto L3;
L55:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+500U,si1);
si0=l5;
si1=340U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=340U;
si0+=si1;
si1=1U;
si0=f603(i,si0,si1);
l23=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l5;
si1=504U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=504U;
si0+=si1;
si1=2U;
si0=f603(i,si0,si1);
l24=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l5;
si1=668U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=176U;
si0+=si1;
si1=-4U;
si0+=si1;
l17=si0;
si0=l5;
si1=340U;
si0+=si1;
si1=-4U;
si0+=si1;
l21=si0;
si0=l5;
si1=504U;
si0+=si1;
si1=-4U;
si0+=si1;
l20=si0;
si0=l5;
si1=668U;
si0+=si1;
si1=-4U;
si0+=si1;
l14=si0;
si0=l5;
si1=668U;
si0+=si1;
si1=3U;
si0=f603(i,si0,si1);
l25=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+172U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+336U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+500U);
l26=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+664U);
l27=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+828U);
l28=si0;
si0=0U;
l29=si0;
L58:;
{
si0=l29;
l30=si0;
si0=l16;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l30;
si1=1U;
si0+=si1;
l29=si0;
si0=l16;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=0U;
l1=si0;
L71:;
{
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
}
si0=l16;
si1=l28;
si2=l16;
si3=l28;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l31;
si1=2U;
si0<<=(si1&31);
l1=si0;
L74:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L73;
}
si0=-1U;
si1=l14;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L74;
}
goto L72;
}
L73:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L72:;
si0=0U;
l32=si0;
si0=l9;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l31;
si0=!(si0);
if(si0){
goto L68;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l31;
si1=1U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l31;
si1=1U;
si0&=si1;
l32=si0;
si0=1U;
l15=si0;
si0=l5;
si1=668U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
si0=l31;
si1=-2U;
si0&=si1;
l33=si0;
l16=si0;
L76:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L76;
}
}
si0=l32;
si0=!(si0);
if(si0){
goto L69;
}
L75:;
si0=l5;
si1=12U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l25;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L68;
}
goto L4;
L70:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=l13;
si1=l30;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l30;
si0+=si1;
si1=48U;
si2=l13;
si3=l30;
si2-=si3;
si0=f15145(i,si0,si1,si2);
goto L2;
L69:;
si0=l15;
si0=!(si0);
if(si0){
goto L4;
}
L68:;
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=8U;
l32=si0;
si0=l31;
l16=si0;
L67:;
si0=l16;
si1=l27;
si2=l16;
si3=l27;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l31;
si1=2U;
si0<<=(si1&31);
l1=si0;
L79:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L78;
}
si0=-1U;
si1=l20;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L79;
}
goto L77;
}
L78:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L77:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L81;
}
si0=l16;
l31=si0;
goto L80;
L81:;
si0=l31;
si0=!(si0);
if(si0){
goto L82;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l31;
si1=1U;
si0=si0 == si1;
if(si0){
goto L84;
}
si0=l31;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=504U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
si0=l31;
si1=-2U;
si0&=si1;
l33=si0;
l16=si0;
L85:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L85;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L83;
}
L84:;
si0=l5;
si1=12U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l24;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L82;
}
goto L5;
L83:;
si0=l15;
si0=!(si0);
if(si0){
goto L5;
}
L82:;
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l32;
si1=4U;
si0|=si1;
l32=si0;
L80:;
si0=l31;
si1=l26;
si2=l31;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l33;
si1=2U;
si0<<=(si1&31);
l1=si0;
L88:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L87;
}
si0=-1U;
si1=l21;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L88;
}
goto L86;
}
L87:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L86:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L90;
}
si0=l31;
l33=si0;
goto L89;
L90:;
si0=l33;
si0=!(si0);
if(si0){
goto L91;
}
si0=1U;
l15=si0;
si0=0U;
l31=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L93;
}
si0=l33;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=340U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l31=si0;
l16=si0;
L94:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L94;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L92;
}
L93:;
si0=l5;
si1=12U;
si0+=si1;
si1=l31;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l23;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L91;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L91;
}
goto L6;
L92:;
si0=l15;
si0=!(si0);
if(si0){
goto L6;
}
L91:;
si0=l5;
si1=l33;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l32;
si1=2U;
si0+=si1;
l32=si0;
L89:;
si0=l33;
si1=l12;
si2=l33;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l16=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l16;
si1=2U;
si0<<=(si1&31);
l1=si0;
L97:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L96;
}
si0=-1U;
si1=l17;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L97;
}
goto L95;
}
L96:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L95:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L99;
}
si0=l33;
l16=si0;
goto L98;
L99:;
si0=l16;
si0=!(si0);
if(si0){
goto L100;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L102;
}
si0=l16;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=176U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
si0=l16;
si1=-2U;
si0&=si1;
l33=si0;
l4=si0;
L103:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l31=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l18;
si2=si2 < si3;
si3=l19;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l31;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
if(si0){
goto L103;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L101;
}
L102:;
si0=l5;
si1=12U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=176U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L100;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L100;
}
goto L7;
L101:;
si0=l15;
si0=!(si0);
if(si0){
goto L7;
}
L100:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L98:;
si0=l30;
si1=l3;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l2;
si1=l30;
si0+=si1;
si1=l32;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
if(si0){
goto L105;
}
si0=0U;
l16=si0;
goto L59;
L105:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L106;
}
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L60;
L106:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L107:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L107;
}
goto L60;
}
L104:;
si0=l3;
si1=l3;
si2=1099388U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l16;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l31;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l13;
si1=l3;
si2=1099404U;
f597(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l31;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l33;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l16;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l9;
si0=!(si0);
if(si0){
goto L108;
}
L109:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L109;
}
}
L108:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L59:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l29;
si1=l13;
si0=si0 != si1;
if(si0){
goto L58;
}
}
si0=1U;
l14=si0;
goto L3;
L57:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l16;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1106568U;
si1=26U;
si2=1106552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l12;
if(si0){
goto L118;
}
si0=0U;
l12=si0;
goto L115;
L118:;
si0=l12;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L119;
}
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L116;
L119:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L120:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L120;
}
goto L116;
}
L117:;
si0=l12;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l9;
si0=!(si0);
if(si0){
goto L121;
}
L122:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L122;
}
}
L121:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l12;
si1=39U;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=l5;
si1=176U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
L115:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l16;
si1=l12;
si2=l16;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L113;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L125:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L124;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L125;
}
goto L123;
}
L124:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L123:;
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L127;
case 1:
goto L126;
default:
goto L110;
}
L127:;
si0=l14;
si0=!(si0);
if(si0){
goto L110;
}
si0=l13;
si1=-1U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L112;
}
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L110;
}
L126:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L111;
}
si0=l2;
si1=l13;
si0+=si1;
l15=si0;
si0=0U;
l1=si0;
si0=l2;
l9=si0;
L129:;
{
si0=l13;
si1=l1;
si0=si0 == si1;
if(si0){
goto L128;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l13;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L129;
}
}
si0=l11;
si1=l11;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L110;
}
si0=l11;
si1=1U;
si0+=si1;
si1=48U;
si2=l1;
si3=-1U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
goto L110;
L128:;
si0=l13;
if(si0){
goto L131;
}
si0=49U;
l1=si0;
goto L130;
L131:;
si0=l2;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=48U;
l1=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L130;
}
si0=48U;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=48U;
si2=l13;
si3=-1U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
L130:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l22;
if(si0){
goto L110;
}
si0=l13;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L110;
}
si0=l15;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
goto L110;
L114:;
si0=40U;
si1=40U;
si2=1106552U;
f594(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=l1;
si1=40U;
si2=1106552U;
f597(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=l1;
si1=l3;
si2=1099340U;
f594(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=l13;
si1=l3;
si2=1099356U;
f597(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l10;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=832U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l13;
si1=l3;
si2=1099372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f606(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U64 l25=0;
U64 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U32 l33=0;
U32 l34=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l7=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L10;
}
sj0=l5;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L8;
}
sj0=l7;
sj1=2305843009213693951ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
l1=si1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=l5;
sj2=l6;
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si2=-32U;
si1+=si2;
si2=l1;
sj3=l7;
sj4=4294967296ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-16U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=32ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=281474976710656ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-8U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=16ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=72057594037927936ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-4U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=8ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=1152921504606846976ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-2U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=4ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=4611686018427387904ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
sj2=l7;
sj3=2ULL;
sj2<<=(sj3&63);
sj3=l7;
si4=l9;
sj2=si4?sj2:sj3;
l11=sj2;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
l12=si2;
si1-=si2;
l9=si1;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l4;
sj1=-1ULL;
si2=l10;
sj2=(U64)(si2);
l13=sj2;
sj1>>=(sj2&63);
l7=sj1;
sj2=l8;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l8;
sj1=l7;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
sj2=l5;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l5;
sj1=l7;
si0=sj0 > sj1;
if(si0){
goto L5;
}
si0=-96U;
si1=l9;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=80U;
si0*=si1;
si1=86960U;
si0+=si1;
si1=2126U;
si0=I32_DIV_S(si0,si1);
l1=si0;
si1=81U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=1099504U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=4294967295ULL;
sj0&=sj1;
l6=sj0;
sj1=l5;
sj2=l13;
sj3=63ULL;
sj2&=sj3;
l13=sj2;
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l14=sj1;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l16=sj0;
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
l17=sj1;
sj2=l14;
sj1*=sj2;
sj0+=sj1;
sj1=l17;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l18=sj1;
sj0+=sj1;
l19=sj0;
sj0=l15;
sj1=4294967295ULL;
sj0&=sj1;
sj1=l6;
sj2=l5;
sj1*=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l7;
sj2=4294967295ULL;
sj1&=sj2;
sj0+=sj1;
sj1=2147483648ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
sj0=1ULL;
si1=0U;
si2=l9;
si3=l1;
si4=1099512U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si2+=si3;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l7=sj1;
sj0<<=(sj1&63);
l21=sj0;
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
sj0=l6;
sj1=l8;
sj2=l13;
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l8=sj1;
sj0*=sj1;
l13=sj0;
sj1=4294967295ULL;
sj0&=sj1;
sj1=l6;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l17;
sj2=l5;
sj1*=sj2;
l5=sj1;
sj2=4294967295ULL;
sj1&=sj2;
sj0+=sj1;
sj1=2147483648ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l22=sj0;
sj0=l17;
sj1=l8;
sj0*=sj1;
l8=sj0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l23=sj0;
sj0=l13;
sj1=32ULL;
sj0>>=(sj1&63);
l13=sj0;
si0=l1;
si1=1099514U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
sj0=l17;
sj1=l11;
si2=l12;
sj2=(U64)(si2);
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l24=sj1;
sj0*=sj1;
l25=sj0;
sj1=l6;
sj2=l24;
sj1*=sj2;
l11=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l26=sj1;
sj0+=sj1;
sj1=l17;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l27=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l28=sj1;
sj0+=sj1;
sj1=l11;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l6;
sj3=l5;
sj2*=sj3;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l27;
sj3=4294967295ULL;
sj2&=sj3;
sj1+=sj2;
sj2=2147483648ULL;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
l29=sj1;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l27=sj0;
sj1=l7;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si1=10000U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l10;
si1=1000000U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=8U;
si1=9U;
si2=l10;
si3=1000000000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=100000000U;
si1=1000000000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L15:;
si0=6U;
si1=7U;
si2=l10;
si3=10000000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=1000000U;
si1=10000000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L14:;
si0=l10;
si1=100U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
si1=3U;
si2=l10;
si3=1000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=100U;
si1=1000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L16:;
si0=10U;
si1=1U;
si2=l10;
si3=9U;
si2=si2 > si3;
l30=si2;
si0=si2?si0:si1;
l9=si0;
goto L1;
L13:;
si0=1099296U;
si1=28U;
si2=1101084U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1099248U;
si1=29U;
si2=1101068U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1099204U;
si1=28U;
si2=1101052U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1099132U;
si1=54U;
si2=1101036U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1099060U;
si1=55U;
si2=1101020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1098996U;
si1=45U;
si2=1101004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1098596U;
si1=29U;
si2=1098628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=l4;
si3=24U;
si2+=si3;
f607(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=l4;
si3=24U;
si2+=si3;
f607(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=81U;
si2=1100848U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=4U;
si1=5U;
si2=l10;
si3=100000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=10000U;
si1=100000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L2:;
si0=1100940U;
si1=45U;
si2=1100988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l19=sj0;
sj0=l27;
sj1=l15;
sj0&=sj1;
l5=sj0;
si0=l30;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
l31=si0;
sj0=l27;
sj1=l13;
sj2=l8;
sj1+=sj2;
sj2=l23;
sj1+=sj2;
sj2=l22;
sj1+=sj2;
l32=sj1;
sj0-=sj1;
l23=sj0;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
sj1=l15;
sj0&=sj1;
l8=sj0;
si0=0U;
l1=si0;
L22:;
{
si0=l10;
si1=l9;
si0=DIV_U(si0,si1);
l12=si0;
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=l1;
si0+=si1;
l33=si0;
si1=l12;
si2=48U;
si1+=si2;
l34=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l13;
si1=l10;
si2=l12;
si3=l9;
si2*=si3;
si1-=si2;
l10=si1;
sj1=(U64)(si1);
sj2=l7;
sj1<<=(sj2&63);
l6=sj1;
sj2=l5;
sj1+=sj2;
l11=sj1;
si0=sj0 > sj1;
if(si0){
goto L21;
}
si0=l30;
si1=l1;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=1ULL;
l6=sj0;
L26:;
{
sj0=l6;
l11=sj0;
sj0=l8;
l13=sj0;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l2;
si1=l1;
si0+=si1;
sj1=l5;
sj2=10ULL;
sj1*=sj2;
l5=sj1;
sj2=l7;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=48U;
si1+=si2;
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l11;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
sj0=l13;
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=l5;
sj2=l15;
sj1&=sj2;
l5=sj1;
si0=sj0 <= sj1;
if(si0){
goto L26;
}
}
sj0=l8;
sj1=l5;
sj0-=sj1;
l7=sj0;
sj1=l21;
si0=sj0 >= sj1;
l10=si0;
sj0=l6;
sj1=l27;
sj2=l19;
sj1-=sj2;
sj0*=sj1;
l15=sj0;
sj1=l6;
sj0+=sj1;
l20=sj0;
sj0=l7;
sj1=l21;
si0=sj0 < sj1;
if(si0){
goto L20;
}
sj0=l15;
sj1=l6;
sj0-=sj1;
l15=sj0;
sj1=l5;
si0=sj0 <= sj1;
if(si0){
goto L20;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
l12=si0;
sj0=l13;
sj1=10ULL;
sj0*=sj1;
sj1=l21;
sj2=l5;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
sj0=l21;
sj1=l15;
sj0-=sj1;
l27=sj0;
sj0=l15;
sj1=l5;
sj0-=sj1;
l14=sj0;
sj0=0ULL;
l7=sj0;
L27:;
{
sj0=l5;
sj1=l21;
sj0+=sj1;
l6=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L28;
}
sj0=l14;
sj1=l7;
sj0+=sj1;
sj1=l27;
sj2=l5;
sj1+=sj2;
si0=sj0 >= sj1;
if(si0){
goto L28;
}
si0=1U;
l10=si0;
goto L20;
L28:;
si0=l12;
si1=l9;
si2=-1U;
si1+=si2;
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l17;
sj1=l7;
sj0+=sj1;
l13=sj0;
sj1=l21;
si0=sj0 >= sj1;
l10=si0;
sj0=l6;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L19;
}
sj0=l7;
sj1=l21;
sj0-=sj1;
l7=sj0;
sj0=l6;
l5=sj0;
sj0=l13;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
goto L19;
}
L25:;
si0=l3;
si1=l3;
si2=1100908U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l1;
si1=l3;
si2=1100924U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=10U;
si0=si0 < si1;
l12=si0;
si0=l9;
si1=10U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L22;
}
}
si0=1100880U;
si1=25U;
si2=1100864U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
sj0=l13;
sj1=l11;
sj0-=sj1;
l13=sj0;
si1=l9;
sj1=(U64)(si1);
sj2=l7;
sj1<<=(sj2&63);
l7=sj1;
si0=sj0 >= sj1;
l9=si0;
sj0=l27;
sj1=l19;
sj0-=sj1;
l8=sj0;
sj1=1ULL;
sj0+=sj1;
l22=sj0;
sj0=l8;
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
sj1=l11;
si0=sj0 <= sj1;
if(si0){
goto L29;
}
sj0=l13;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L29;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l11=sj0;
sj1=l16;
sj0+=sj1;
sj1=l18;
sj0+=sj1;
sj1=l20;
sj0+=sj1;
sj1=l17;
sj2=l14;
sj3=l24;
sj2-=sj3;
sj1*=sj2;
sj0+=sj1;
sj1=l26;
sj0-=sj1;
sj1=l28;
sj0-=sj1;
sj1=l29;
sj0-=sj1;
l13=sj0;
sj0=l26;
sj1=l28;
sj0+=sj1;
sj1=l29;
sj0+=sj1;
sj1=l25;
sj0+=sj1;
l8=sj0;
sj0=0ULL;
sj1=l19;
sj2=l6;
sj3=l5;
sj2+=sj3;
sj1+=sj2;
sj0-=sj1;
l14=sj0;
sj0=2ULL;
sj1=l32;
sj2=l11;
sj3=l6;
sj2+=sj3;
sj1+=sj2;
sj0-=sj1;
l27=sj0;
L30:;
{
sj0=l6;
sj1=l11;
sj0+=sj1;
l21=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L31;
}
sj0=l14;
sj1=l8;
sj0+=sj1;
sj1=l6;
sj2=l13;
sj1+=sj2;
si0=sj0 >= sj1;
if(si0){
goto L31;
}
sj0=l6;
sj1=l5;
sj0+=sj1;
l11=sj0;
si0=1U;
l9=si0;
goto L29;
L31:;
si0=l33;
si1=l34;
si2=-1U;
si1+=si2;
l34=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l5;
sj1=l7;
sj0+=sj1;
l5=sj0;
sj0=l27;
sj1=l8;
sj0+=sj1;
l17=sj0;
sj0=l21;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L32;
}
sj0=l11;
sj1=l7;
sj0+=sj1;
l11=sj0;
sj0=l13;
sj1=l7;
sj0+=sj1;
l13=sj0;
sj0=l8;
sj1=l7;
sj0-=sj1;
l8=sj0;
sj0=l17;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L30;
}
L32:;
}
sj0=l17;
sj1=l7;
si0=sj0 >= sj1;
l9=si0;
sj0=l6;
sj1=l5;
sj0+=sj1;
l11=sj0;
L29:;
sj0=l22;
sj1=l11;
si0=sj0 <= sj1;
if(si0){
goto L35;
}
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
sj0=l11;
sj1=l7;
sj0+=sj1;
l5=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L34;
}
sj0=l22;
sj1=l11;
sj0-=sj1;
sj1=l5;
sj2=l22;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L34;
}
L35:;
sj0=l11;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L36;
}
sj0=l11;
sj1=l23;
sj2=-3ULL;
sj1+=sj2;
si0=sj0 <= sj1;
if(si0){
goto L33;
}
L36:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L34:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L33:;
si0=l0;
si1=l31;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L18;
L20:;
sj0=l5;
l6=sj0;
L19:;
sj0=l20;
sj1=l6;
si0=sj0 <= sj1;
if(si0){
goto L39;
}
si0=l10;
si0=!(si0);
if(si0){
goto L39;
}
sj0=l6;
sj1=l21;
sj0+=sj1;
l5=sj0;
sj1=l20;
si0=sj0 < sj1;
if(si0){
goto L38;
}
sj0=l20;
sj1=l6;
sj0-=sj1;
sj1=l5;
sj2=l20;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L38;
}
L39:;
sj0=l11;
sj1=20ULL;
sj0*=sj1;
sj1=l6;
si0=sj0 > sj1;
if(si0){
goto L40;
}
sj0=l6;
sj1=l11;
sj2=-40ULL;
sj1*=sj2;
sj2=l8;
sj1+=sj2;
si0=sj0 <= sj1;
if(si0){
goto L37;
}
L40:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L38:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L37:;
si0=l0;
si1=l31;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L18:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L17:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f607(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=8U;
si1+=si2;
si2=1102256U;
si3=l3;
si4=12U;
si3+=si4;
si4=1102256U;
si5=l2;
si6=1098580U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f608(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U64 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7,sj8;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l5;
sj1=2305843009213693951ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=-96U;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
l1=si1;
si2=-32U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=4294967296ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-16U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=32ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=281474976710656ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-8U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=16ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=72057594037927936ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-4U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=8ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=1152921504606846976ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-2U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=4ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=4611686018427387904ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
sj2=l5;
sj3=2ULL;
sj2<<=(sj3&63);
sj3=l5;
si4=l6;
sj2=si4?sj2:sj3;
l5=sj2;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
si1-=si2;
l6=si1;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=80U;
si0*=si1;
si1=86960U;
si0+=si1;
si1=2126U;
si0=I32_DIV_S(si0,si1);
l1=si0;
si1=81U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=1099504U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=4294967295ULL;
sj0&=sj1;
l8=sj0;
sj1=l5;
sj2=l5;
sj3=-1ULL;
sj2^=sj3;
sj3=63ULL;
sj2>>=(sj3&63);
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l9=sj1;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
l7=sj1;
sj2=l9;
sj1*=sj2;
sj0+=sj1;
sj1=l7;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l10;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l8;
sj3=l5;
sj2*=sj3;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l7;
sj3=4294967295ULL;
sj2&=sj3;
sj1+=sj2;
sj2=2147483648ULL;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l5=sj0;
si1=-64U;
si2=l6;
si3=l1;
si4=1099512U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si2+=si3;
si1-=si2;
l11=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l8=sj1;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=l1;
si1=1099514U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
sj0=l5;
sj1=1ULL;
sj2=l8;
sj1<<=(sj2&63);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
l9=sj1;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=1101172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 > si1;
if(si0){
goto L2;
}
L8:;
si0=l12;
si1=10000U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l12;
si1=1000000U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l12;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=8U;
si1=9U;
si2=l12;
si3=1000000000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=100000000U;
si1=1000000000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L10:;
si0=6U;
si1=7U;
si2=l12;
si3=10000000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=1000000U;
si1=10000000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L9:;
si0=l12;
si1=100U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=2U;
si1=3U;
si2=l12;
si3=1000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=100U;
si1=1000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L11:;
si0=10U;
si1=1U;
si2=l12;
si3=9U;
si2=si2 > si3;
l14=si2;
si0=si2?si0:si1;
l6=si0;
goto L1;
L7:;
si0=1099296U;
si1=28U;
si2=1101332U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1101280U;
si1=36U;
si2=1101316U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=81U;
si2=1100848U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1101143U;
si1=33U;
si2=1101264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=4U;
si1=5U;
si2=l12;
si3=100000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=10000U;
si1=100000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l14;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l15=si0;
si1=l4;
si1=(U32)(I32)(I16)(U16)(si1);
l1=si1;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l11;
si1=65535U;
si0&=si1;
l16=si0;
si0=l15;
si1=l4;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=l3;
si2=l15;
si3=l1;
si2-=si3;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l17=si0;
si1=-1U;
si0+=si1;
l18=si0;
si0=0U;
l1=si0;
L17:;
{
si0=l12;
si1=l6;
si0=DIV_U(si0,si1);
l11=si0;
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l12;
si1=l11;
si2=l6;
si1*=si2;
si0-=si1;
l12=si0;
si0=l2;
si1=l1;
si0+=si1;
si1=l11;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l18;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l14;
si1=l1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=10U;
si0=si0 < si1;
l11=si0;
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=1100880U;
si1=25U;
si2=1101216U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l10=sj0;
sj0=1ULL;
l5=sj0;
L18:;
{
sj0=l5;
sj1=l10;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L19:;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l2;
si1=l1;
si0+=si1;
sj1=l7;
sj2=10ULL;
sj1*=sj2;
l7=sj1;
sj2=l8;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l5;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj0=l7;
sj1=l9;
sj0&=sj1;
l7=sj0;
si0=l17;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l0;
si1=l2;
si2=l3;
si3=l17;
si4=l15;
si5=l4;
sj6=l7;
sj7=l13;
sj8=l5;
f609(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
goto L0;
L15:;
si0=l3;
si1=l3;
si2=1101232U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
si1=l2;
si2=l3;
si3=l17;
si4=l15;
si5=l4;
si6=l12;
sj6=(U64)(si6);
sj7=l8;
sj6<<=(sj7&63);
sj7=l7;
sj6+=sj7;
si7=l6;
sj7=(U64)(si7);
sj8=l8;
sj7<<=(sj8&63);
sj8=l13;
f609(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
goto L0;
L13:;
si0=l1;
si1=l3;
si2=1101248U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
si1=l2;
si2=l3;
si3=0U;
si4=l15;
si5=l4;
sj6=l5;
sj7=10ULL;
sj6=DIV_U(sj6,sj7);
si7=l6;
sj7=(U64)(si7);
sj8=l8;
sj7<<=(sj8&63);
sj8=l13;
f609(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
L0:;
}

void f609(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U64 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
sj0=l7;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L6;
}
sj0=l7;
sj1=l8;
sj0-=sj1;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L5;
}
sj0=l7;
sj1=l6;
sj0-=sj1;
sj1=l6;
si0=sj0 <= sj1;
if(si0){
goto L9;
}
sj0=l7;
sj1=l6;
sj2=1ULL;
sj1<<=(sj2&63);
sj0-=sj1;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
si0=sj0 >= sj1;
if(si0){
goto L8;
}
L9:;
sj0=l6;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
sj0=l7;
sj1=l6;
sj2=l8;
sj1-=sj2;
l8=sj1;
sj0-=sj1;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L7;
}
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L1;
L7:;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=l1;
l11=si0;
L12:;
{
si0=l3;
si1=l10;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si1=l3;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L12;
}
}
si0=l12;
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si0-=si1;
si1=1U;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l12;
si1=1U;
si0+=si1;
si1=48U;
si2=l10;
si3=-1U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
goto L2;
L11:;
si0=l3;
if(si0){
goto L14;
}
si0=49U;
l10=si0;
goto L13;
L14:;
si0=l1;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=48U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=48U;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
si1=48U;
si2=l3;
si3=-1U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
L13:;
si0=l4;
si1=1U;
si0+=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l4=si0;
si0=l3;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l5;
si1=(U32)(I32)(I16)(U16)(si1);
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L2;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l3;
si1=l2;
si2=1101380U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si2=1101348U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=1101364U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f610(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 si0,si1,si2;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si0=(U32)(I32)(I16)(U16)(si0);
l6=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=65535U;
si0&=si1;
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L8;
}
si0=2U;
l1=si0;
goto L1;
L8:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=1101431U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=l3;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=1101431U;
i32_store(&i->m0,(U64)si0,si1);
si0=3U;
l1=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si0-=si1;
l4=si0;
goto L2;
L6:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1101432U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=3U;
l1=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l6;
si0+=si1;
l4=si0;
goto L2;
L5:;
si0=1101143U;
si1=33U;
si2=1101536U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1101484U;
si1=33U;
si2=1101520U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1101434U;
si1=34U;
si2=1101468U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f611(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=1101900U;
si2=1U;
si3=l4;
si4=88U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l4;
si1=64U;
si0+=si1;
si1=1101908U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=l2;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+48U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l8=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
sj1=l8;
sj2=l6;
sj1-=sj2;
l6=sj1;
sj2=l8;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l6=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
sj0=l6;
sj1=l8;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
sj1=l8;
sj2=l6;
sj1-=sj2;
l6=sj1;
sj2=l8;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
sj0=0ULL;
l6=sj0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l2;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
sj0=(U64)(si0);
l8=sj0;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
si1=11U;
si0=si0 < si1;
l10=si0;
sj0=0ULL;
l6=sj0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l10;
if(si0){
goto L27;
}
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L27:;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
sj0=l6;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l5;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l5;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
sj0=0ULL;
l6=sj0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l8;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
sj0=0ULL;
l6=sj0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l8;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f612(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

void f613(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1101968U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1096476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1103056U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f614(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1102172U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1096476U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=12U;
si0+=si1;
f14812(i,si0);
UNREACHABLE;
L0:;
}

void f615(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1101900U;
si2=1U;
si3=l4;
si4=40U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l4;
si1=16U;
si0+=si1;
si1=1101908U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L8;
default:
goto L6;
}
L8:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L6;
L7:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=0U;
l6=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
sj0=(U64)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l8;
si0=(U32)(sj0);
l9=si0;
si1=l7;
si0+=si1;
l6=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=0U;
l6=si0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l6;
sj0=(U64)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l8;
si0=(U32)(sj0);
l9=si0;
si1=l7;
si0+=si1;
l6=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L10;
}
L18:;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L9:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f616(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=1101900U;
si2=1U;
si3=l4;
si4=168U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l4;
si1=144U;
si0+=si1;
si1=1101908U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=32U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=128U;
si0+=si1;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=120U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=136U;
si5+=si6;
f15159(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=0U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+120U);
l7=sj0;
si1=l8;
sj1=(U64)(si1);
l9=sj1;
sj0-=sj1;
l6=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l10;
sj2=l10;
sj3=l7;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2-=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=104U;
si0+=si1;
l11=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=96U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=116U;
si5+=si6;
f15159(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+96U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l12;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l12=si1;
si2=l12;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l5;
si1=0U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l7;
si1=l8;
sj1=(U64)(si1);
l9=sj1;
sj0-=sj1;
l6=sj0;
sj0=l10;
sj1=l10;
sj2=l10;
sj3=l7;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2-=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=88U;
si0+=si1;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=80U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l7=sj0;
si1=l8;
sj1=(U64)(si1);
l10=sj1;
sj0-=sj1;
l6=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l7;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=72U;
si0+=si1;
l12=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L20:;
{
si0=l4;
si1=64U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l5=si1;
si2=l5;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l7;
si1=l2;
sj1=(U64)(si1);
l9=sj1;
sj0-=sj1;
l6=sj0;
sj0=l10;
sj1=l7;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=32U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
si1=11U;
si0=si0 < si1;
l11=si0;
si0=l4;
si1=48U;
si0+=si1;
l13=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=40U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=60U;
si5+=si6;
f15159(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l11;
if(si0){
goto L27;
}
si0=l8;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l12;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l12=si1;
si2=l12;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
L27:;
si0=l8;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
si0=l5;
si1=0U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l10;
sj1=-1ULL;
sj0^=sj1;
sj1=l10;
sj2=l10;
sj3=l7;
si4=l8;
sj4=(U64)(si4);
sj3+=sj4;
l6=sj3;
sj4=l7;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l4;
si1=32U;
si0+=si1;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l7=sj1;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=l4;
si1=16U;
si0+=si1;
l12=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L30:;
{
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l5;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l5=si1;
si2=l5;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l10;
sj1=l7;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f617(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=1101900U;
si2=1U;
si3=l4;
si4=72U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l4;
si1=48U;
si0+=si1;
si1=1101908U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L8;
default:
goto L6;
}
L8:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L6;
L7:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
sj0=0ULL;
l6=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
sj0=0ULL;
l6=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l8;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
sj0=0ULL;
l6=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L10;
}
L18:;
sj0=0ULL;
l6=sj0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L10:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
goto L1;
L9:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f618(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1101900U;
si2=1U;
si3=l4;
si4=40U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l4;
si1=16U;
si0+=si1;
si1=1101908U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l9;
si2=l7;
si1-=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L16:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l9;
si2=l2;
si1-=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l7;
si0-=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l2;
si0-=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=l3;
si1=11U;
si0=si0 < si1;
l10=si0;
si0=0U;
l6=si0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si0=l10;
if(si0){
goto L27;
}
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L27:;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l7;
si1+=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=0U;
l6=si0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=0U;
l6=si0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f619(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l0;
si1=l1;
si0=f620(i,si0,si1);
if(si0){
goto L1;
}
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1102008U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1096476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f620(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f620(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L6:;
{
si0=l2;
si1=l3;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l0;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l0;
si1=16U;
si0=si0 < si1;
l4=si0;
si0=l0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L7:;
{
si0=l2;
si1=l3;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
si3=l0;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l0;
si1=16U;
si0=si0 < si1;
l4=si0;
si0=l0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f621(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=36U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=12U;
si1+=si2;
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=5U;
si0<<=(si1&31);
l8=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=134217727U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l6=si0;
L7:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L8:;
si0=l3;
si1=l5;
si2=l6;
si1+=si2;
l1=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L9;
default:
goto L10;
}
L11:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l7=si0;
si0=l9;
si1=l12;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=248U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L10:;
si0=1U;
l7=si0;
L9:;
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
case 2:
goto L12;
default:
goto L13;
}
L14:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l9;
si1=l10;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=248U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L13:;
si0=1U;
l11=si0;
L12:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l6;
si2=32U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L3:;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L15:;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f622(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-5271289035626326621ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=4229549200774708044ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f623(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102016U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f624(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102027U;
si2=14U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f625(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1102068U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=249U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f626(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
L1:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l3;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L1;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f627(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1102076U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f628(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
switch(si0){
case 0:
goto L5;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L2;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L9;
case 10:
goto L7;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L8;
case 14:
goto L2;
case 15:
goto L2;
case 16:
goto L2;
case 17:
goto L2;
case 18:
goto L2;
case 19:
goto L2;
case 20:
goto L2;
case 21:
goto L2;
case 22:
goto L2;
case 23:
goto L2;
case 24:
goto L2;
case 25:
goto L2;
case 26:
goto L2;
case 27:
goto L2;
case 28:
goto L2;
case 29:
goto L2;
case 30:
goto L2;
case 31:
goto L2;
case 32:
goto L2;
case 33:
goto L2;
case 34:
goto L4;
case 35:
goto L2;
case 36:
goto L2;
case 37:
goto L2;
case 38:
goto L2;
case 39:
goto L3;
default:
goto L10;
}
L10:;
si0=l1;
si1=92U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L9:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29788U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29276U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=28252U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=23644U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=12380U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l2;
si1=65536U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=8796U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l2;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=10076U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=f629(i,si0);
if(si0){
goto L14;
}
L15:;
si0=l1;
si0=f630(i,si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=128U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=125U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=1U;
si0|=si1;
si0=I32_CLZ(si0);
si1=2U;
si0>>=(si1&31);
si1=-2U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si0+=si1;
l2=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1106500U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1106502U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+6U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=6U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+10U,si1);
goto L1;
L13:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=125U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1106440U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=1U;
si0|=si1;
si0=I32_CLZ(si0);
si1=2U;
si0>>=(si1&31);
si1=-2U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si0+=si1;
l2=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1106500U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1106502U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+6U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=6U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+10U,si1);
goto L1;
L12:;
si0=l1;
si1=10U;
si2=1106484U;
f593(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=10U;
si2=1106484U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f629(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=33U;
l3=si0;
si0=33U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1120484U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=32U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1120484U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=32U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=31U;
l2=si0;
si0=727U;
l5=si0;
goto L7;
L9:;
si0=33U;
si1=33U;
si2=1106408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1120488U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L6;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1120484U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=727U;
si2=l4;
si3=727U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1120616U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=727U;
si2=1106424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}


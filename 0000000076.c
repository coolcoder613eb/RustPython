#include "w2c2_base.h"

#include "rustpython.h"

void f7630(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+132U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1687404U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=484U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f7266(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=l7;
si3=l6;
f7765(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
f7690(i,si0);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L10;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
if(si0){
goto L9;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l8=sj0;
goto L8;
L10:;
si0=1673219U;
si1=16U;
si2=l5;
si3=16U;
si2+=si3;
si3=1673236U;
si4=1687336U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l3;
si1=l4;
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l8=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
f7690(i,si0);
L8:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+132U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
goto L3;
L4:;
si0=l1;
si1=l3;
si2=l5;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
f7690(i,si0);
L11:;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1673219U;
si1=16U;
si2=l5;
si3=16U;
si2+=si3;
si3=1673236U;
si4=1687352U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+132U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1687404U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=484U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L2;
}
f15042(i);
UNREACHABLE;
L3:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+8U);
f8208(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+132U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
goto L1;
L2:;
si0=l1;
si1=l4;
si2=l5;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7632(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1687524U;
si1=49U;
si2=1687576U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1673168U;
si1=24U;
si2=l2;
si3=8U;
si2+=si3;
si3=1673284U;
si4=1687428U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=2147483645U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L3;
}
si0=1669610U;
si1=43U;
si2=1687444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1673168U;
si1=24U;
si2=l2;
si3=8U;
si2+=si3;
si3=1673284U;
si4=1687412U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=l1;
si1+=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=1U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l8;
si3=1208U;
si2+=si3;
si3=l2;
si4=l3;
si5=l9;
si2=f12275(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
l1=si0;
goto L3;
L4:;
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=l4;
si3=l5;
si4=l1;
f8199(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L5:;
si0=l9;
f7690(i,si0);
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=1687592U;
si1=11U;
si2=l6;
si3=28U;
si2+=si3;
si3=1687604U;
si4=1687620U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f7634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si2=l6;
si3=1208U;
si2+=si3;
si3=l1;
si4=l2;
si5=l7;
si2=f12275(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l2;
si2=l3;
si3=l4;
si4=l0;
f8199(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f7690(i,si0);
L5:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L4:;
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1687592U;
si1=11U;
si2=l5;
si3=40U;
si2+=si3;
si3=1687604U;
si4=1687636U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1687672U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=1687680U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1687720U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=1463U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=1687736U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f7635(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
l7=si0;
if(si0){
goto L9;
}
si0=l5;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=l1;
si2=l2;
f14775(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
f7690(i,si0);
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7608(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
default:
goto L12;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L16:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
f7690(i,si0);
L12:;
si0=0U;
l2=si0;
goto L4;
L11:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L10:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=56U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L18;
}
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L17;
}
L18:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L17:;
si0=l2;
si1=68U;
si0+=si1;
l3=si0;
si0=l2;
si1=60U;
si0+=si1;
l2=si0;
goto L5;
L9:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=60U;
si0+=si1;
l3=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
goto L5;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=1669610U;
si1=43U;
si2=1687836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1669610U;
si1=43U;
si2=1687852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11257(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
if(si0){
goto L20;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L19;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L19:;
si0=l7;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f1433(i,si0);
goto L1;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11264(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L21;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l5;
if(si0){
goto L25;
}
si0=l1;
f15271(i,si0);
si0=0U;
l2=si0;
si0=4U;
l1=si0;
goto L24;
L25:;
si0=l5;
l2=si0;
si0=l1;
si1=l5;
si2=2U;
si1<<=(si2&31);
l6=si1;
si0=f15274(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L23:;
si0=4U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f7690(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
l7=si0;
if(si0){
goto L9;
}
si0=l5;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=l1;
si2=l2;
f14775(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
f7690(i,si0);
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7608(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
default:
goto L12;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L16:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
f7690(i,si0);
L12:;
si0=0U;
l2=si0;
goto L4;
L11:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L10:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=56U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L18;
}
si0=l1;
si1=16U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=l3;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l1;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L17;
}
L18:;
si0=l5;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L17:;
si0=l2;
si1=68U;
si0+=si1;
l1=si0;
si0=l2;
si1=60U;
si0+=si1;
l2=si0;
goto L5;
L9:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=60U;
si0+=si1;
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
goto L5;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=1669610U;
si1=43U;
si2=1687836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1669610U;
si1=43U;
si2=1687852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11293(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
if(si0){
goto L20;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L19;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L22:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
f7690(i,si0);
L23:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L19:;
si0=l7;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
f1433(i,si0);
goto L1;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11289(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L27:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l1;
f7690(i,si0);
L28:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L24;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
if(si0){
goto L31;
}
si0=l2;
f15271(i,si0);
si0=0U;
l7=si0;
si0=4U;
l2=si0;
goto L30;
L31:;
si0=l1;
l7=si0;
si0=l2;
si1=l1;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
L30:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L29:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l6;
f7690(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
l7=si0;
if(si0){
goto L9;
}
si0=l5;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=l1;
si2=l2;
f14775(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
f7690(i,si0);
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7608(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
default:
goto L12;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L16:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
f7690(i,si0);
L12:;
si0=0U;
l2=si0;
goto L4;
L11:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L10:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=56U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L18;
}
si0=l1;
si1=16U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=l3;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l1;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L17;
}
L18:;
si0=l5;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L17:;
si0=l2;
si1=68U;
si0+=si1;
l1=si0;
si0=l2;
si1=60U;
si0+=si1;
l2=si0;
goto L5;
L9:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=60U;
si0+=si1;
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
goto L5;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=1669610U;
si1=43U;
si2=1687836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1669610U;
si1=43U;
si2=1687852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11347(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
if(si0){
goto L20;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L19;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L22:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
f7690(i,si0);
L23:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L19:;
si0=l7;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
f1433(i,si0);
goto L1;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11274(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L27:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l1;
f7690(i,si0);
L28:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L24;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
if(si0){
goto L31;
}
si0=l2;
f15271(i,si0);
si0=0U;
l7=si0;
si0=4U;
l2=si0;
goto L30;
L31:;
si0=l1;
l7=si0;
si0=l2;
si1=l1;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
L30:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L29:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l6;
f7690(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l8=si0;
if(si0){
goto L5;
}
sj0=l6;
sj1=6024102831536450768ULL;
sj0^=sj1;
sj1=l7;
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l8;
si1=16U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L6;
}
L7:;
si0=l2;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
f1433(i,si0);
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=12U;
si0+=si1;
l11=si0;
si0=0U;
l1=si0;
si0=0U;
l8=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L11;
}
si0=l3;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l9;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L10;
}
L11:;
si0=l2;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L10:;
si0=l8;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l0;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f1433(i,si0);
goto L2;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
f1433(i,si0);
L13:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si0=f13614(i,si0,si1,si2);
l9=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
f7690(i,si0);
L14:;
si0=l9;
if(si0){
goto L15;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L9;
L15:;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l2;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f11266(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
if(si0){
goto L17;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L16;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f14775(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L28;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l2;
f7690(i,si0);
L29:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
f7608(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L27;
default:
goto L26;
}
L28:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
goto L18;
L30:;
si0=l2;
f7690(i,si0);
goto L18;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
l9=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l9;
f7690(i,si0);
L26:;
si0=0U;
l8=si0;
goto L24;
L25:;
si0=1U;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=0U;
l9=si0;
goto L22;
L24:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f5807(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
if(si0){
goto L21;
}
L23:;
si0=0U;
l8=si0;
L22:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
L20:;
si0=l3;
f7690(i,si0);
L19:;
si0=l9;
l3=si0;
L18:;
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l7=si0;
if(si0){
goto L5;
}
sj0=l5;
sj1=6024102831536450768ULL;
sj0^=sj1;
sj1=l6;
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l7;
si1=16U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L6;
}
L7:;
si0=l2;
si1=0U;
sj2=l5;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L6:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L12;
}
si0=1U;
l1=si0;
goto L11;
L12:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
f1433(i,si0);
L13:;
si0=l2;
si1=12U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
si0=0U;
l1=si0;
L14:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
si1=16U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l2;
si1=l10;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l11;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L15;
}
L16:;
si0=l2;
si1=0U;
sj2=l5;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L15:;
si0=l1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l7;
if(si0){
goto L20;
}
si0=l1;
f15271(i,si0);
si0=1U;
l1=si0;
goto L19;
L20:;
si0=l1;
si1=l7;
si0=f15274(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
L19:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L18:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f1433(i,si0);
goto L2;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
f1433(i,si0);
L21:;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=l7;
f10462(i,si0,si1,si2);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l7;
f7690(i,si0);
L22:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
f7247(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L14;
L23:;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L2;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11286(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
if(si0){
goto L26;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L25;
L26:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L25:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=l2;
f14775(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L37;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l2;
f7690(i,si0);
L38:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7608(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L36;
default:
goto L33;
}
L37:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l2;
f7690(i,si0);
L39:;
goto L27;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l10=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L34;
}
goto L31;
L35:;
si0=1U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=0U;
l10=si0;
goto L30;
L34:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l10;
f7690(i,si0);
L33:;
si0=0U;
l8=si0;
L32:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f11330(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L31;
L40:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l2;
if(si0){
goto L43;
}
si0=l8;
f15271(i,si0);
si0=0U;
l10=si0;
si0=1U;
l8=si0;
goto L42;
L43:;
si0=l2;
l10=si0;
si0=l8;
si1=l2;
si0=f15274(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L29;
L41:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L31:;
si0=0U;
l8=si0;
L30:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
L29:;
si0=l7;
f7690(i,si0);
L28:;
si0=l10;
l7=si0;
L27:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7640(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=l2;
si2=l3;
si3=l1;
si4=l6;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L2;
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si2=l2;
si3=l3;
f7641(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
{
si0=l7;
if(si0){
goto L10;
}
si0=1U;
l7=si0;
goto L2;
L10:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=0U;
l7=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f7690(i,si0);
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L1;
L4:;
si0=1669610U;
si1=43U;
si2=1673424U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l8;
l5=si0;
L1:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
f7690(i,si0);
L11:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
si2=l5;
si3=1208U;
si2+=si3;
si3=1673916U;
si4=4U;
si5=l6;
si2=f12275(i,si2,si3,si4,si5);
si3=l3;
si0=f8202(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
si2=l6;
si3=1208U;
si2+=si3;
si3=1687868U;
si4=3U;
si5=l3;
si2=f12275(i,si2,si3,si4,si5);
si3=l2;
si0=f8202(i,si0,si1,si2,si3);
l0=si0;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
f7690(i,si0);
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1670680U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1673572U;
si4=1687888U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1670680U;
si1=43U;
si2=l4;
si3=12U;
si2+=si3;
si3=1673572U;
si4=1687872U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7642(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=l2;
si2=l5;
si3=l1;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L2;
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si2=l2;
si3=l5;
f7641(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l3;
if(si0){
goto L10;
}
si0=1U;
l3=si0;
goto L2;
L10:;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l3=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f7690(i,si0);
si0=0U;
l6=si0;
si0=0U;
l3=si0;
goto L1;
L4:;
si0=1669610U;
si1=43U;
si2=1673424U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l8;
l6=si0;
L1:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
f7690(i,si0);
L11:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7643(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si0=f9951(i,si0,si1);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=847U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1671928U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L9;
}
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
goto L5;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l3;
l1=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L10;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L10:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=l5;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7644(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si0=f9951(i,si0,si1);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=847U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1672624U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L9;
}
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
goto L5;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
si0=l3;
l4=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L10;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L10:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=l5;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7645(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si0=f9951(i,si0,si1);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=847U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1797820U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L9;
}
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
goto L5;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L5;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f1433(i,si0);
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l3;
l1=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L10;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L10:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=l5;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7646(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si0=f9951(i,si0,si1);
l3=si0;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=41U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1797876U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1797868U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1797860U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1797852U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1797844U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1797836U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
l1=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L7;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L7:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l1;
si1=l6;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
l3=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f7690(i,si0);
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7647(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si0=f9951(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
si0=l3;
l2=si0;
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
f15042(i);
UNREACHABLE;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l1=si0;
si0=l2;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f7690(i,si0);
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

void f7648(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1208U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1208U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=1216U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13453(i,si0,si1,si2);
l8=si0;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L4:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1208U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1208U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l8;
si0=f9951(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l6;
si3=l2;
f7589(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l6;
l2=si0;
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L10;
}
f15042(i);
UNREACHABLE;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L10:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l8=si0;
si0=l2;
l6=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l8=si0;
si0=l2;
l6=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l6;
f7690(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7649(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=116U;
si0+=si1;
l4=si0;
L6:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
if(si0){
goto L6;
}
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+112U,si1);
goto L2;
L5:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
l0=si0;
L9:;
{
si0=l0;
l4=si0;
si1=72U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0&=si1;
if(si0){
goto L11;
}
si0=l0;
si1=16U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+72U);
l3=si2;
si3=l3;
si4=l0;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l0;
si0=si0 == si1;
if(si0){
goto L10;
}
L11:;
si0=l7;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L10:;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L12:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l7;
f1433(i,si0);
L13:;
si0=l0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l0;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
f7690(i,si0);
goto L9;
L14:;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
l0=si1;
si2=8U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=72U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l0=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
f7690(i,si0);
L16:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+72U);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
if(si0){
goto L17;
}
si0=l4;
si1=72U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L17:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
f7690(i,si0);
L8:;
si0=l6;
si1=72U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=8U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L18:;
si0=l6;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
f7690(i,si0);
L19:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=0U;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+72U);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
if(si0){
goto L20;
}
si0=l6;
si1=72U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L20:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
f7690(i,si0);
goto L2;
L4:;
si0=1673168U;
si1=24U;
si2=l2;
si3=8U;
si2+=si3;
si3=1673284U;
si4=1688040U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f7690(i,si0);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7650(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=320U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=80U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+80U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l1;
f7334(i,si0,si1);
si0=1U;
l4=si0;
goto L1;
L3:;
si0=l3;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L2:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+80U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=80U;
si0+=si1;
f1433(i,si0);
L10:;
si0=0U;
l4=si0;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
default:
goto L16;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=1807769U;
si3=35U;
si4=l5;
si5=l0;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L8;
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l0;
f8205(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L11;
}
L14:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1671500U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2024U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f13685(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
f7690(i,si0);
goto L7;
L13:;
si0=l6;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si1=l6;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
si1=(U32)(sj1);
si2=0U;
sj3=l7;
sj4=256ULL;
si3=sj3 < sj4;
si1=si3?si1:si2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
si0=si2?si0:si1;
l4=si0;
L12:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
f7690(i,si0);
L17:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L11:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L7;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l4;
f7690(i,si0);
L7:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l5;
f7690(i,si0);
L18:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f7651(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l0;
si2=l4;
si3=1208U;
si2+=si3;
si3=1681896U;
si4=5U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l0=si0;
goto L1;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=1681901U;
si3=19U;
si4=l0;
f8199(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
l0=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f10675(i,si0,si1,si2);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si2=24U;
si1+=si2;
si2=l2;
si3=0U;
si1=f8078(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l6;
si2=l3;
si3=24U;
si2+=si3;
si3=l0;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
f7690(i,si0);
L10:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
f7690(i,si0);
L11:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L9:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
f7690(i,si0);
L7:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1914132U;
si1=70U;
si2=l3;
si3=88U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l5;
f7690(i,si0);
L1:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f7652(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797287U;
si5=18U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797287U;
si4=18U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l5;
f9091(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L6;
case 1:
goto L7;
case 2:
goto L3;
default:
goto L6;
}
L7:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=0U;
l7=si0;
si0=1U;
if(si0){
goto L2;
}
goto L3;
L4:;
L3:;
si0=1U;
l7=si0;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797305U;
si5=11U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797305U;
si4=11U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
f15271(i,si0);
L11:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l5;
f9091(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L9;
default:
goto L12;
}
L13:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=0U;
l9=si0;
si0=1U;
if(si0){
goto L8;
}
goto L9;
L10:;
L9:;
si0=1U;
l9=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797316U;
si5=17U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797316U;
si4=17U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
f15271(i,si0);
L17:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l5;
f9091(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L18;
case 1:
goto L19;
case 2:
goto L15;
default:
goto L18;
}
L19:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=0U;
l11=si0;
si0=1U;
if(si0){
goto L14;
}
goto L15;
L16:;
L15:;
si0=1U;
l11=si0;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797333U;
si5=11U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797333U;
si4=11U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
f15271(i,si0);
L24:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L27:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l15;
si1=l14;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l12;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L22;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l13;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l14;
si5=l12;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L21;
L25:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l13;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l14;
si5=l12;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
goto L20;
L23:;
si0=0U;
l12=si0;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797344U;
si5=14U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797344U;
si4=14U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
f15271(i,si0);
L31:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l5;
f9091(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l16=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L32;
case 1:
goto L33;
case 2:
goto L29;
default:
goto L32;
}
L33:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L32:;
si0=0U;
l17=si0;
si0=1U;
if(si0){
goto L28;
}
goto L29;
L30:;
L29:;
si0=1U;
l17=si0;
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797358U;
si5=9U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797358U;
si4=9U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l5;
f15271(i,si0);
L37:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l4;
si3=l1;
f7591(i,si0,si1,si2,si3);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l4;
f7690(i,si0);
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L35;
}
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L36:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L34;
L35:;
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+80U);
l18=sj0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=l18;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l4;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+44U,sj1);
L34:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797367U;
si5=7U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797367U;
si4=7U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l4;
f15271(i,si0);
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l19=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L46:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L44;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l15;
si1=l14;
si0=si0 != si1;
if(si0){
goto L46;
}
}
L45:;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L41;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l19;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l14;
si5=l13;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
goto L40;
L44:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l19;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l14;
si5=l13;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L40;
}
goto L39;
L42:;
si0=0U;
l13=si0;
L41:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797374U;
si5=8U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797374U;
si4=8U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L50;
}
si0=l5;
f15271(i,si0);
L50:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l4;
si3=l1;
f7591(i,si0,si1,si2,si3);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l4;
f7690(i,si0);
L51:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L48;
}
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L52;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l13;
f7690(i,si0);
L52:;
si0=l3;
si1=40U;
si0+=si1;
f7234(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L49:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L47;
L48:;
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+80U);
l18=sj0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=l18;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l4;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+60U,sj1);
L47:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797382U;
si5=8U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797382U;
si4=8U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
f15271(i,si0);
L56:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l5;
f9087(i,si0,si1,si2);
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L57;
case 1:
goto L58;
case 2:
goto L54;
default:
goto L57;
}
L58:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
f7234(i,si0);
si0=l13;
si0=!(si0);
if(si0){
goto L59;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l13;
f7690(i,si0);
L59:;
si0=l3;
si1=40U;
si0+=si1;
f7234(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L57:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+74U);
l4=si0;
si0=0U;
l5=si0;
si0=1U;
if(si0){
goto L53;
}
goto L54;
L55:;
L54:;
si0=1U;
l5=si0;
L53:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=1797390U;
si5=11U;
si2=f10928(i,sj2,sj3,si4,si5);
si3=1797390U;
si4=11U;
f12864(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l15=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L62;
}
si0=l15;
f15271(i,si0);
L62:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=l2;
si3=l1;
f7591(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l2;
f7690(i,si0);
L63:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
if(si0){
goto L64;
}
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
f7234(i,si0);
si0=l13;
si0=!(si0);
if(si0){
goto L65;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l13;
f7690(i,si0);
L65:;
si0=l3;
si1=40U;
si0+=si1;
f7234(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L64:;
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+80U);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l15;
sj1=(U64)(si1);
sj0|=sj1;
l18=sj0;
goto L60;
L61:;
si0=0U;
l2=si0;
L60:;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l4;
i32_store16(&i->m0,(U64)si0+34U,si1);
si0=l0;
si1=l5;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=64U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l18;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
goto L1;
L40:;
si0=l13;
f7690(i,si0);
L39:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L67;
}
L68:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l4;
f7690(i,si0);
L69:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L66:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f7690(i,si0);
goto L1;
L21:;
si0=l12;
f7690(i,si0);
L20:;
si0=l0;
sj1=17179869186ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7653(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l2;
f7654(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+136U);
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=2U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=10536U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L2;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l1;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f11267(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
l4=si0;
L10:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
f15271(i,si0);
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
goto L3;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=96U;
si0+=si1;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+120U);
l1=si2;
si3=1671792U;
si4=2U;
f10916(i,si0,si1,si2,si3,si4);
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
l4=si0;
L14:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15271(i,si0);
goto L2;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=1U;
si1=2U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
goto L1;
L2:;
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2826U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2826U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1797564U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
L17:;
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
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7654(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=992U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L15;
}
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
f7690(i,si0);
L19:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=640U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L17;
}
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
f7690(i,si0);
L20:;
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l1;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L14;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=1U;
l5=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=l7;
si0=f32(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
L21:;
si0=l5;
si1=l6;
si2=l4;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
f7690(i,si0);
goto L6;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=11822U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
si1=46U;
i32_store8(&i->m0,(U64)si0,si1);
goto L6;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L16:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=1012U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L24;
}
si0=l4;
if(si0){
goto L23;
}
si0=0U;
l5=si0;
goto L22;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L23:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L26;
}
si0=0U;
l5=si0;
goto L25;
L26:;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L28;
}
si0=1U;
l5=si0;
goto L27;
L28:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l8;
si0=f32(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
L27:;
si0=l5;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
L25:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
f7690(i,si0);
L22:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=948U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L35;
}
si0=l4;
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l7=si0;
si0=0U;
l4=si0;
goto L33;
L35:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
f15271(i,si0);
goto L6;
L34:;
si0=l3;
si1=104U;
si0+=si1;
si1=l4;
f7655(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
if(si0){
goto L32;
}
L33:;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l1;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L31;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=l2;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l8;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l2;
f7690(i,si0);
L36:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
if(si0){
goto L29;
}
goto L4;
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=8U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=8317701510555858274ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L31:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
if(si0){
goto L9;
}
goto L7;
L30:;
si0=l3;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2826U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1797592U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=2826U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15271(i,si0);
goto L5;
L29:;
si0=l5;
f15271(i,si0);
goto L4;
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L13:;
f15042(i);
UNREACHABLE;
L12:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=l8;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l5;
f15271(i,si0);
goto L7;
L8:;
si0=l7;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
goto L3;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
L3:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
f7690(i,si0);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7655(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L6;
}
si0=1U;
l4=si0;
goto L5;
L6:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l4;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
f7690(i,si0);
L7:;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7656(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969460U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969464U);
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l1;
f7591(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
f7690(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
if(si0){
goto L7;
}
si0=l6;
l8=si0;
goto L6;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si1=9U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
f15271(i,si0);
L9:;
si0=l2;
if(si0){
goto L5;
}
si0=l8;
l6=si0;
si0=l14;
l7=si0;
L8:;
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1803200U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1803184U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L10;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
default:
goto L14;
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
f1433(i,si0);
goto L10;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l14=si2;
si3=l14;
si4=1U;
si3=si3 == si4;
l14=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
if(si0){
goto L10;
}
si0=l2;
si1=0U;
f1440(i,si0,si1);
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l14=si2;
si3=l14;
si4=1U;
si3=si3 == si4;
l14=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
if(si0){
goto L10;
}
si0=l2;
si1=0U;
f1440(i,si0,si1);
goto L10;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
f1433(i,si0);
L10:;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l8=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
l2=si0;
L16:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
f7690(i,si0);
L17:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
f15271(i,si0);
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l9;
f7690(i,si0);
L18:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l10;
f7690(i,si0);
L19:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l11;
f7690(i,si0);
L20:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
f7690(i,si0);
L21:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l13;
f7690(i,si0);
L22:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l5;
f7690(i,si0);
L23:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l8;
f7690(i,si0);
L24:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l14;
f7690(i,si0);
L25:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
f7690(i,si0);
L4:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1670508U;
si1=36U;
si2=1670560U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7657(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=23U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1797904U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672472U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1797927U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=23U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1797939U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672208U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1797962U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L3:;
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=20U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1797974U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1671968U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1797994U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f7658(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969492U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=2969468U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f13005(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969468U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
si0=l4;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L6:;
si0=2969468U;
si1=l2;
si2=l4;
si3=l5;
si0=f8074(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f7738(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si0=f7659(i,si0,si1);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1860456U;
si1=43U;
si2=1862824U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1860456U;
si1=43U;
si2=1862840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f7659(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f7732(i,si0,si1);
l3=si0;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969460U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=2969460U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f13069(i,si0,si1);
L5:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969464U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=4U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=1701669236U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L6:;
si0=l2;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
f7690(i,si0);
L7:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L8;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=1208U;
si1+=si2;
si2=1670756U;
si3=11U;
si4=l4;
si1=f12275(i,si1,si2,si3,si4);
si2=l3;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1670680U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1673572U;
si4=1798236U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1670680U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1673572U;
si4=1798236U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f7660(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=156U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798252U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672112U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1798408U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=176U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798413U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672328U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1671183U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L3:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=83U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798589U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672328U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1798672U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L4:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=103U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798681U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672352U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1798784U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L5:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=90U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798796U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672328U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1798886U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L6:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=109U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1798898U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672352U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967311ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1799007U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L7:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=98U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1799022U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672424U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1799120U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L8:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=290U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1799126U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672544U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1799416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L9:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=319U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1799425U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672040U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1799744U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L10:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=203U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1799750U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672184U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1799953U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=255U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1799960U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672232U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1800215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L12:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=1002U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1800220U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672088U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1801222U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L13:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=945U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1801230U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672280U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1802175U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L14:;
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=120U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1802183U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672304U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1802303U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si1=l3;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L15:;
si0=l5;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=136U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1802314U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672304U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967310ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1802450U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=l2;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L16:;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=123U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1802464U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1672496U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1802587U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si1=l4;
f7267(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L17:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=139U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1802599U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1672064U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967311ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1802738U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f7661(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=28U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1802777U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1802769U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1802761U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1802753U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=120259084316ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si2=l1;
si0=f7173(i,si0,si1,si2);
l0=si0;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=1U;
si1=28U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f7662(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f10561(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L7;
}
si0=1797608U;
l4=si0;
si0=3U;
l5=si0;
si0=0U;
l6=si0;
si0=1U;
l7=si0;
si0=0U;
l8=si0;
goto L6;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l5;
si2=9U;
si3=l5;
si4=9U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=1803340U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=1803268U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l9;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=88U;
si1+=si2;
f11292(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l4=si0;
L10:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
f15271(i,si0);
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
goto L4;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=88U;
si0+=si1;
si1=l10;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+72U);
l5=si2;
si3=1671792U;
si4=2U;
f10916(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l10;
l4=si0;
L14:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
f15271(i,si0);
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L5;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=l4;
si3=64U;
si2+=si3;
si3=l2;
sj2=f11720(i,si2,si3);
si3=l2;
f11748(i,si0,si1,sj2,si3);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1669476U;
l4=si0;
si0=0U;
l5=si0;
L6:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2826U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1803344U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=1803376U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L17:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L5:;
si0=1857413U;
si1=16U;
si2=l3;
si3=88U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L1;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l4;
si2=48U;
si1+=si2;
si2=l4;
si3=64U;
si2+=si3;
si3=l2;
sj2=f11720(i,si2,si3);
si3=l2;
f11748(i,si0,si1,sj2,si3);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
f7690(i,si0);
L2:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1857413U;
si1=16U;
si2=l3;
si3=88U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f7663(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=4U;
l7=si0;
goto L4;
L5:;
si0=l6;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l6;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l9;
l7=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l9;
si1=l4;
si0=f15277(i,si0,si1);
l7=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l7=si0;
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=0U;
l4=si0;
si0=l6;
l11=si0;
L9:;
{
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si1=l4;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=l5;
si3=8U;
si2+=si3;
si1=f5724(i,si1,si2);
si2=l1;
si0=f8247(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
f7690(i,si0);
L10:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l9;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f7664(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1980220U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1980231U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1980236U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7665(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f9447(i,si0,si1);
L0:;
return si0;
}

U32 f7666(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1901162U;
si2=11U;
si3=1901173U;
si4=4U;
si5=l0;
si6=64U;
si5+=si6;
si6=1901180U;
si7=1901196U;
si8=5U;
si9=l0;
si10=56U;
si9+=si10;
si10=1901204U;
si11=1901220U;
si12=5U;
si13=l0;
si14=72U;
si13+=si14;
si14=1895532U;
si15=1901225U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=1901232U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7667(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f10164(i,si0,si1);
L0:;
return si0;
}

U32 f7668(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1803440U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=1803696U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1803696U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1803696U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7669(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1852688U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f7670(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1809449U;
si2=6U;
si3=1809455U;
si4=8U;
si5=l0;
si6=56U;
si5+=si6;
si6=1809464U;
si7=1809480U;
si8=6U;
si9=l0;
si10=76U;
si9+=si10;
si10=1809488U;
si11=1809504U;
si12=8U;
si13=l0;
si14=72U;
si13+=si14;
si14=1809512U;
si15=1809528U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=1809532U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7671(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1889012U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1889019U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1889024U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7672(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1943396U;
si2=15U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f7673(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1850947U;
si2=7U;
si3=1837940U;
si4=5U;
si5=l0;
si6=64U;
si5+=si6;
si6=1850956U;
si7=1849424U;
si8=6U;
si9=l0;
si10=56U;
si9+=si10;
si10=1850972U;
si11=1850894U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=1850988U;
si0=f742(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7674(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1809449U;
si2=6U;
si3=1809455U;
si4=8U;
si5=l0;
si6=1809464U;
si7=1809480U;
si8=6U;
si9=l0;
si10=20U;
si9+=si10;
si10=1809488U;
si11=1809504U;
si12=8U;
si13=l0;
si14=16U;
si13+=si14;
si14=1809512U;
si15=1809528U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=1809532U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7675(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103101U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
si2=1834084U;
f717(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103488U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f7676(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1926004U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1926009U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1926016U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7677(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=52U;
si0+=si1;
si1=1826656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1826640U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1826624U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1826608U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1826592U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=188U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1826576U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=1826672U;
si2=12U;
si3=1826528U;
si4=6U;
si5=l2;
si6=8U;
si5+=si6;
si6=6U;
si0=f745(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7678(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f13749(i,si0,si1);
L0:;
return si0;
}

U32 f7679(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1862740U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f7680(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1851004U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1851010U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1851020U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7681(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1625540U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f7682(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1803440U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1803696U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1803712U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7683(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1803440U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1803744U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1803760U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7684(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f10952(i,si0,si1);
L0:;
return si0;
}

U32 f7685(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+24U);
si2=i32_load(&i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f7686(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1803440U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1803696U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1803728U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7687(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f7688(rustpythonInstance*i,U32 l0) {
L0:;
}

void f7689(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f7690(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L5:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si1=348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l3;
si0=f8178(i,si0,si1);
if(si0){
goto L2;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
sj1=l6;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L7:;
si0=l5;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj1=16ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=16U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l5;
si2=8U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
f11230(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L10;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si1=2U;
si0<<=(si1&31);
l9=si0;
L12:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=72U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l1;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=1805124U;
si1=l1;
si2=60U;
si1+=si2;
si2=l1;
si3=48U;
si2+=si3;
si0=f12458(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
f7690(i,si0);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L13:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
f7690(i,si0);
L15:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l5;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
sj1=l6;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L16:;
si0=l1;
si1=16U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
f11230(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L9;
}
}
L8:;
si0=l5;
si1=16U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L17:;
si0=0U;
si1=l5;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L18;
}
si0=l5;
si1=0U;
f1440(i,si0,si1);
L18:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
L2:;
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7691(rustpythonInstance*i,U32 l0) {
L0:;
}

void f7692(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f7693(rustpythonInstance*i,U32 l0) {
L0:;
}

void f7694(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f7695(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f8985(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L1:;
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L3:;
L0:;
}

void f7696(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L3:;
L0:;
}

void f7697(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l0;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L6;
}
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=1U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L0;
L4:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=1U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L0;
L3:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
f1433(i,si0);
L1:;
L0:;
}

void f7698(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=-1U;
si0+=si1;
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l5;
si1=l10;
si0-=si1;
l13=si0;
si0=1U;
si1=l12;
si0-=si1;
l14=si0;
si0=l2;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l15=si1;
si0+=si1;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
L8:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
si2=l5;
si1+=si2;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
L11:;
{
sj0=l11;
si1=l16;
si2=l8;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L11;
}
L10:;
si0=l5;
si1=l8;
si0+=si1;
l8=si0;
si0=0U;
l17=si0;
L9:;
si0=l12;
si1=l17;
si2=l12;
si3=l17;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l2;
si1=l8;
si0+=si1;
l19=si0;
si0=l18;
l9=si0;
L15:;
{
si0=l8;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l12;
l9=si0;
L16:;
{
si0=l17;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l8;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=l19;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L16;
}
}
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
si0=l13;
l17=si0;
goto L12;
L13:;
si0=l14;
si1=l8;
si0+=si1;
si1=l9;
si0+=si1;
l8=si0;
si0=0U;
l17=si0;
L12:;
si0=l1;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L6;
}
L7:;
si0=l12;
si1=-1U;
si0+=si1;
l16=si0;
si0=l12;
si1=l5;
si0=si0 < si1;
if(si0){
goto L18;
}
goto L17;
L18:;
si0=l2;
si1=l12;
si0+=si1;
l15=si0;
si0=l4;
si1=l12;
si0+=si1;
l13=si0;
si0=l5;
si1=l12;
si0-=si1;
l14=si0;
L19:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l8;
l9=si0;
si0=l13;
l19=si0;
si0=l14;
l17=si0;
L22:;
{
si0=l12;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l12;
l18=si0;
goto L1;
L23:;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l9;
si1=1U;
si0+=si1;
l8=si0;
goto L21;
L24:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L22;
}
}
si0=l2;
si1=l8;
si0+=si1;
l18=si0;
si0=l16;
l9=si0;
L25:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l18;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L25;
}
}
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
L21:;
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
L20:;
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
}
L17:;
L26:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L26;
L27:;
si0=l2;
si1=l8;
si0+=si1;
l12=si0;
si0=l16;
l9=si0;
L28:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L28;
}
}
si0=l7;
si1=l8;
si2=l10;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L26;
}
}
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l1;
si1=l8;
si2=l5;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L2;
L4:;
si0=l9;
si1=l5;
si2=1803520U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1803536U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si1=l18;
si2=l8;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1803552U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f7699(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
l6=si0;
si0=l5;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0|=si1;
l6=si0;
si0=l4;
if(si0){
goto L1;
}
si0=l1;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si1=l6;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l6=si0;
L2:;
{
si0=l2;
si1=l6;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l0;
si4=15U;
si3&=si4;
l7=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l7;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0=si0 < si1;
l7=si0;
si0=l0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
}
si0=l6;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l6;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l6;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f7700(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l5=si0;
goto L2;
L3:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
si3=l0;
si4=l1;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l4;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l0=si0;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l5;
si1=l3;
si0-=si1;
l2=si0;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l3;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l2;
si1=31U;
si0&=si1;
l9=si0;
si0=l2;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l2=si0;
goto L12;
L14:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l2;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L12;
L15:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l2=si0;
goto L12;
L13:;
si0=l2;
si1=255U;
si0&=si1;
l2=si0;
L12:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l2;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
l1=si0;
si0=l2;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=3U;
si1=4U;
si2=l2;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L16:;
si0=l1;
si1=l3;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L18;
L19:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L18:;
si0=l5;
si1=l3;
si0-=si1;
l5=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L10;
L11:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=1U;
l1=si0;
L6:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l4;
si1=24U;
si0+=si1;
l1=si0;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l0=si0;
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=l1;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=0U;
f7698(i,si0,si1,si2,si3,si4,si5,si6);
goto L4;
L20:;
si0=l4;
si1=l1;
si2=l0;
si3=l5;
si4=l2;
si5=l3;
si6=1U;
f7698(i,si0,si1,si2,si3,si4,si5,si6);
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=si0 != si1;
l5=si0;
L2:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L1:;
si0=l0;
si1=l5;
si2=l3;
si3=l5;
si4=1803820U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f7701(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f7702(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
goto L2;
L4:;
si0=1U;
l2=si0;
L3:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l2;
f6362(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l5;
si3=8U;
si2+=si3;
si0=f7703(i,si0,si1,si2);
l5=si0;
si0=0U;
l2=si0;
goto L5;
L6:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
f7690(i,si0);
L7:;
si0=l5;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7703(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L6:;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L8;
}
si0=4U;
l6=si0;
goto L7;
L8:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
if(si0){
goto L10;
}
si0=l7;
l6=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l5;
si0=f15277(i,si0,si1);
l6=si0;
goto L9;
L11:;
si0=l5;
si0=f15269(i,si0);
l6=si0;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2107831292826120692ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805776U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3044701271088271634ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l4;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f7704(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
F64 l9=0;
F64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=l4;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L2;
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=692U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
si3=l4;
f7589(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L1;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L13:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=2U;
l5=si0;
si0=l4;
l1=si0;
L11:;
si0=l1;
f7690(i,si0);
L10:;
si0=l5;
switch(si0){
case 0:
goto L8;
case 1:
goto L5;
case 2:
goto L9;
default:
goto L5;
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L16:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=l4;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L2;
L8:;
si0=0U;
si0=f5566(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=92U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=120U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
si3=64U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L25;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
f7690(i,si0);
L26:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L18;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1803880U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L19;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L24;
}
L25:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l7;
f7690(i,si0);
goto L2;
L24:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L23:;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L19;
L22:;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L19;
L21:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
L20:;
si0=l7;
f1433(i,si0);
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l7;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L18:;
si0=l1;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l9=sd0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sd1=l9;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
sd1=l10;
f64_store(&i->m0,(U64)si0,sd1);
L17:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L7:;
si0=l3;
si1=l4;
si2=l2;
f7706(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
if(si0){
goto L27;
}
si0=l7;
sd0=f64_load(&i->m0,(U64)si0+56U);
l9=sd0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sd1=l9;
f64_store(&i->m0,(U64)si0,sd1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l7;
f7690(i,si0);
goto L2;
L27:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=1914132U;
si1=70U;
si2=l3;
si3=64U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
L2:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7705(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l3;
f12392(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L2;
L3:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1806808U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L6;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
default:
goto L10;
}
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l7;
f1433(i,si0);
goto L6;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L6;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L6;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L6;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L6;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l7;
f1433(i,si0);
L6:;
si0=l4;
si1=48U;
si0+=si1;
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
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l7;
si2=l4;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
l7=si0;
L12:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
f7690(i,si0);
L13:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
f15271(i,si0);
L14:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L15:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
l7=si0;
L17:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
L16:;
si0=1U;
l7=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7706(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L2;
case 2:
goto L4;
default:
goto L2;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l6;
l5=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
l5=si0;
goto L2;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6979522882521804547ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3115833051707837487ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=532U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1807488U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si1=l3;
si2=72U;
si1+=si2;
si2=1U;
si3=l2;
si0=f12394(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l6;
l5=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L9;
L10:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1807540U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
f7690(i,si0);
L11:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l6;
f7690(i,si0);
goto L2;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f7726(i,si0,si1,si2);
si0=2U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f13307(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L17;
}
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l8=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=8U;
si0+=si1;
si0=f10437(i,si0);
l8=si0;
L18:;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L20;
}
si0=4U;
l9=si0;
goto L19;
L20:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
if(si0){
goto L22;
}
si0=l4;
l9=si0;
goto L21;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l4;
si1=l1;
si0=f15277(i,si0,si1);
l9=si0;
goto L21;
L23:;
si0=l1;
si0=f15269(i,si0);
l9=si0;
L21:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l9;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
L19:;
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
sj1=-6979522882521804547ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sd1=l7;
f64_store(&i->m0,(U64)si0+56U,sd1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=1806016U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-3115833051707837487ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l8;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l8;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l1;
l5=si0;
goto L2;
L24:;
si0=l5;
f7690(i,si0);
si0=l1;
l5=si0;
goto L2;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
l5=si0;
goto L2;
L25:;
si0=l5;
f7690(i,si0);
si0=l1;
l5=si0;
goto L2;
L16:;
si0=1U;
l4=si0;
goto L2;
L15:;
f53(i);
UNREACHABLE;
L14:;
si0=l4;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7707(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=940U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l5;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
l1=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L7:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
l6=si0;
goto L4;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
si0=0U;
l5=si0;
si0=0U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si0=f5566(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=0U;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L3;
}
L11:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1914132U;
si1=70U;
si2=l4;
si3=88U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
l2=si0;
L3:;
si0=l6;
l5=si0;
si0=l2;
l3=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7708(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=940U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=l6;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
l1=si0;
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L6;
}
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L6:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
f7690(i,si0);
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
l7=si0;
goto L3;
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l4=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
si0=0U;
l6=si0;
si0=0U;
l4=si0;
goto L1;
L4:;
si0=l3;
if(si0){
goto L15;
}
si0=1U;
l6=si0;
goto L14;
L15:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
L14:;
si0=l6;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si0=f5566(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si3=24U;
si2+=si3;
si3=l4;
f7705(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
f7690(i,si0);
L16:;
si0=0U;
l6=si0;
si0=0U;
l4=si0;
si0=l3;
switch(si0){
case 0:
goto L2;
case 1:
goto L3;
case 2:
goto L1;
default:
goto L2;
}
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1914132U;
si1=70U;
si2=l5;
si3=88U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1U;
l3=si0;
L2:;
si0=l7;
l6=si0;
si0=l3;
l4=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7709(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=940U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l5;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
l1=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L7:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
l6=si0;
goto L4;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
si0=0U;
l5=si0;
si0=0U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=76U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si0=f5566(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=0U;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L3;
}
L11:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1914132U;
si1=70U;
si2=l4;
si3=88U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
l2=si0;
L3:;
si0=l6;
l5=si0;
si0=l2;
l3=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7710(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=2967024U;
si0=f10432(i,si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l4=si0;
si0=l5;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l7=sj0;
si0=l4;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=48U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l3;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
l13=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
l14=si0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
l15=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=l10;
sj2=l12;
sj3=l11;
sj4=l12;
si5=l5;
sj5=(U64)(si5);
sj4^=sj5;
sj5=6364136223846793005ULL;
sj4*=sj5;
sj3^=sj4;
sj4=8ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=6364136223846793005ULL;
sj3*=sj4;
l11=sj3;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l12=sj2;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l10=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l16=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l10;
sj1^=sj2;
sj2=l16;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l12;
sj2=l9;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l10=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=l10;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l12;
sj2=l8;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l8=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l8;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l12;
sj2=l7;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l11=sj1;
sj2=l12;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l12=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l11;
sj1^=sj2;
sj2=l12;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
l17=si1;
si2=0U;
f13636(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+76U);
l12=sj0;
L4:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
sj0=l12;
si0=(U32)(sj0);
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si0=f12399(i,si0,si1);
l4=si0;
si0=l3;
si1=l6;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+8U);
l11=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+16U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l7=sj2;
sj3=l11;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l11=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l7;
sj2^=sj3;
sj3=l11;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
sj4=l12;
sj5=32ULL;
sj4>>=(sj5&63);
si4=(U32)(sj4);
f12861(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
f7690(i,si0);
L5:;
si0=l3;
si1=72U;
si0+=si1;
si1=l17;
si2=l5;
f13636(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+76U);
l12=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1803896U;
si1=24U;
si2=l3;
si3=72U;
si2+=si3;
si3=1803920U;
si4=1803960U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1806628U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1803440U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=1806660U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7711(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7712(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f13626(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L5:;
{
si0=l6;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
goto L1;
L6:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7709(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l8;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7712(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l1;
si2=0U;
si3=l5;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
si3=l3;
f7712(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f13626(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l5=si0;
goto L1;
L10:;
si0=0U;
l5=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si2=l2;
si3=l3;
f7709(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L1;
L11:;
si0=l6;
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l2;
si0=f7581(i,si0,si1);
l6=si0;
goto L1;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L23;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L24:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
}
L23:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L21;
}
L22:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870060U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f13362(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L19;
case 1:
goto L16;
case 2:
goto L20;
default:
goto L19;
}
L21:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L25;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870096U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
l1=si0;
goto L3;
L25:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l7;
si3=l2;
si4=l3;
si5=l6;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
goto L3;
L20:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L15;
L19:;
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L26;
L27:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
L26:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l6;
f7690(i,si0);
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
l6=si0;
goto L15;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L30:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
l6=si0;
goto L15;
L17:;
si0=l4;
si1=40U;
si0+=si1;
si1=l5;
si2=l1;
si3=l10;
si4=l3;
f13368(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L16:;
si0=1U;
l8=si0;
L15:;
si0=1U;
l5=si0;
goto L6;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l2;
si3=l3;
f7306(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l5;
si3=8U;
si2+=si3;
si0=f8193(i,si0,si1,si2);
l6=si0;
si0=0U;
l8=si0;
si0=0U;
l5=si0;
goto L6;
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f8213(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
f7690(i,si0);
goto L6;
L12:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1808264U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L5;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
f7690(i,si0);
L31:;
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l2;
f7690(i,si0);
L32:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=1U;
l1=si0;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l2;
f7690(i,si0);
L33:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7713(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7714(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f13622(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L5:;
{
si0=l6;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
goto L1;
L6:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7707(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l8;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7714(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l1;
si2=0U;
si3=l5;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
si3=l3;
f7714(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L1;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f13622(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l5=si0;
goto L1;
L10:;
si0=0U;
l5=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si2=l2;
si3=l3;
f7707(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L1;
L11:;
si0=l6;
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l2;
si0=f7581(i,si0,si1);
l6=si0;
goto L1;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L23;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L24:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
}
L23:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L21;
}
L22:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870060U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f13362(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L19;
case 1:
goto L16;
case 2:
goto L20;
default:
goto L19;
}
L21:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L25;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870096U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
l1=si0;
goto L3;
L25:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l7;
si3=l2;
si4=l3;
si5=l6;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
goto L3;
L20:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L15;
L19:;
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L26;
L27:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
L26:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l6;
f7690(i,si0);
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l10;
l6=si0;
goto L15;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L30:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
l6=si0;
goto L15;
L17:;
si0=l4;
si1=40U;
si0+=si1;
si1=l5;
si2=l1;
si3=l10;
si4=l3;
f13368(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L16:;
si0=1U;
l8=si0;
L15:;
si0=1U;
l5=si0;
goto L6;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l2;
si3=l3;
f7306(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l5;
si3=8U;
si2+=si3;
si0=f8193(i,si0,si1,si2);
l6=si0;
si0=0U;
l8=si0;
si0=0U;
l5=si0;
goto L6;
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f8213(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
f7690(i,si0);
goto L6;
L12:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1808264U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L5;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
f7690(i,si0);
L31:;
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l2;
f7690(i,si0);
L32:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=1U;
l1=si0;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l2;
f7690(i,si0);
L33:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7715(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7716(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L3:;
si0=l1;
si1=56U;
si0+=si1;
l6=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2122(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l3;
si3=l2;
sj4=l7;
f13621(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l9;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L6:;
{
si0=l6;
if(si0){
goto L7;
}
si0=1U;
l6=si0;
goto L1;
L7:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7707(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
f7690(i,si0);
L8:;
si0=l9;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7716(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=l1;
si2=0U;
si3=l5;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
si3=l3;
f7716(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L1;
L9:;
si0=l7;
si1=56U;
si0+=si1;
l6=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2122(i,si1,si2,si3);
l8=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l3;
si3=l2;
sj4=l8;
f13621(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L1;
L11:;
si0=0U;
l5=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si2=l2;
si3=l3;
f7707(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l5=si0;
goto L1;
L12:;
si0=l6;
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l2;
si0=f7581(i,si0,si1);
l6=si0;
goto L1;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L24;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L25:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
}
L24:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L22;
}
L23:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870060U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l3;
f13362(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L20;
case 1:
goto L17;
case 2:
goto L21;
default:
goto L20;
}
L22:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L26;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1870096U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
l1=si0;
goto L3;
L26:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l7;
si3=l2;
si4=l3;
si5=l6;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
goto L3;
L21:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L16;
L20:;
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
if(si0){
goto L28;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l11=si0;
goto L27;
L28:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l9;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l11=si0;
L27:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l6;
f7690(i,si0);
L29:;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
l6=si0;
goto L16;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L31:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L31;
}
}
L30:;
si0=l10;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=1U;
l9=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
l6=si0;
goto L16;
L18:;
si0=l4;
si1=40U;
si0+=si1;
si1=l5;
si2=l1;
si3=l11;
si4=l3;
f13368(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
goto L5;
L17:;
si0=1U;
l9=si0;
L16:;
si0=1U;
l5=si0;
goto L6;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l2;
si3=l3;
f7306(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l6;
si2=l5;
si3=8U;
si2+=si3;
si0=f8193(i,si0,si1,si2);
l6=si0;
si0=0U;
l9=si0;
si0=0U;
l5=si0;
goto L6;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
f8213(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l10;
f7690(i,si0);
goto L6;
L13:;
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1808264U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si2=l4;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L5;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
f7690(i,si0);
L32:;
si0=l9;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l2;
f7690(i,si0);
L33:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=1U;
l1=si0;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l2;
f7690(i,si0);
L34:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7717(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f7718(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l7=si0;
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f13620(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l9;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l9;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=1U;
l7=si0;
goto L1;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f7708(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
f7690(i,si0);
L7:;
si0=l9;
l6=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7718(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
si1=l1;
si2=0U;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=l2;
si3=l3;
si4=l4;
f7718(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
goto L2;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f13620(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l7;
if(si0){
goto L2;
}
si0=l5;
si1=l6;
si2=l2;
si3=l3;
si4=l4;
f7708(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l7;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si1=f13640(i,si1,si2,si3);
si0=f7581(i,si0,si1);
l7=si0;
L5:;
si0=1U;
l1=si0;
goto L2;
L3:;
si0=l3;
if(si0){
goto L15;
}
si0=1U;
l7=si0;
goto L14;
L15:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
L14:;
si0=l7;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L19;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L20:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l2;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
}
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L17;
}
L18:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1870060U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L1;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L21;
}
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1870096U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=l5;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=0U;
l4=si0;
goto L7;
L21:;
si0=l5;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
si3=l6;
si4=l4;
si5=l3;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
goto L7;
L16:;
si0=l4;
si1=l3;
si2=l5;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=l1;
si2=l4;
f13362(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l8=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l5;
si1=56U;
si0+=si1;
si1=l6;
si2=l4;
f7726(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L28;
case 1:
goto L25;
case 2:
goto L29;
default:
goto L28;
}
L29:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1804632U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si2=l5;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L24;
L28:;
si0=l5;
si1=48U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
if(si0){
goto L31;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
goto L30;
L31:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1919896U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l5;
si1=5U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=1919924U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=l5;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
L30:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l7;
f7690(i,si0);
L32:;
si0=l9;
si0=!(si0);
if(si0){
goto L26;
}
si0=l10;
l7=si0;
goto L24;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L34:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L33:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=1U;
l3=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l4;
si2=l1;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7640(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
l7=si0;
goto L24;
L26:;
si0=l5;
si1=40U;
si0+=si1;
si1=l8;
si2=l1;
si3=l10;
si4=l4;
f13368(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L8;
}
goto L9;
L25:;
si0=1U;
l3=si0;
L24:;
si0=1U;
l1=si0;
goto L10;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l3;
si2=l6;
si3=l4;
f7306(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l3;
si2=l7;
si3=8U;
si2+=si3;
si0=f8193(i,si0,si1,si2);
l7=si0;
si0=0U;
l3=si0;
si0=0U;
l1=si0;
goto L10;
L22:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l6;
f8213(i,si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=l5;
si3=80U;
si2+=si3;
si3=l4;
f7705(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
f7690(i,si0);
goto L10;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l5;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1808264U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=1843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=l5;
si3=144U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L9;
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
f7690(i,si0);
L35:;
si0=l3;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l6;
f7690(i,si0);
L36:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
f7690(i,si0);
L8:;
si0=1U;
l4=si0;
L7:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l6;
f7690(i,si0);
L37:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7719(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f7718(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
goto L1;
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si4=l3;
f13620(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=0U;
l7=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f7708(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l6;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si2=l3;
si3=l4;
si1=f13640(i,si1,si2,si3);
si0=f7581(i,si0,si1);
l6=si0;
L3:;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7720(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7714(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
goto L2;
L3:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f13622(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=1U;
l6=si0;
goto L2;
L4:;
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7707(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l6=si0;
goto L2;
L5:;
si0=l5;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f7581(i,si0,si1);
l5=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7721(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L7:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L8;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L8;
L10:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
}
L8:;
si0=l7;
si1=2969936U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l6=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L12:;
si0=l6;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f10804(i,si2,si3);
l5=si2;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l0=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
f7690(i,si0);
goto L5;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l7=si0;
goto L13;
L14:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L13;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L15:;
{
si0=l5;
if(si0){
goto L16;
}
si0=0U;
l7=si0;
goto L13;
L16:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L13:;
si0=l7;
si1=2970484U;
si2=l7;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943380U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943372U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943364U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943356U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943348U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L1;
L18:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1808316U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=l4;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f7690(i,si0);
goto L5;
L17:;
si0=l3;
si1=l5;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f7690(i,si0);
goto L5;
L6:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f13610(i,si0,si1,si2,si3);
l0=si0;
L5:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7722(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f9963(i,si0,si1);
L0:;
return si0;
}

U32 f7723(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
l7=si0;
if(si0){
goto L2;
}
si0=l7;
if(si0){
goto L3;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f13612(i,si0,si1,si2,si3);
l7=si0;
goto L1;
L2:;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L4;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l8;
si1=2969936U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
si2=l1;
si3=l2;
si4=l3;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L12:;
{
si0=l7;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
goto L10;
L13:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
}
L10:;
si0=l6;
si1=2970484U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L18;
default:
goto L17;
}
L18:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L14;
L17:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L19;
L20:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
L19:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
f7690(i,si0);
L21:;
si0=l1;
if(si0){
goto L14;
}
si0=l0;
si1=l6;
si2=l7;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
goto L1;
L16:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1808316U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L7;
L15:;
si0=l5;
l7=si0;
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=l2;
f7690(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l7;
L0:;
return si0;
}

U32 f7724(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L4:;
{
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 != si1;
l8=si0;
if(si0){
goto L3;
}
si0=l8;
if(si0){
goto L4;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
si4=l3;
si0=f13618(i,si0,si1,si2,si3,si4);
l8=si0;
goto L2;
L3:;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l8;
if(si0){
goto L7;
}
si0=0U;
l9=si0;
goto L5;
L7:;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l9;
si1=2969936U;
si2=l9;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l8=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
L13:;
si0=l8;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l5;
si3=24U;
si2+=si3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f10804(i,si2,si3);
l6=si2;
si3=l3;
si4=l4;
si5=l9;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l8=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
f7690(i,si0);
goto L2;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L14;
L15:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L14;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L16:;
{
si0=l8;
if(si0){
goto L17;
}
si0=0U;
l7=si0;
goto L14;
L17:;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
}
L14:;
si0=l7;
si1=2970484U;
si2=l7;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943380U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943372U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943364U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943356U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943348U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L1;
L19:;
si0=l5;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1808316U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1843U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l8;
si2=l5;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L8;
L18:;
si0=l4;
si1=l0;
si2=l5;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L2;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
f7690(i,si0);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7725(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l5;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L5;
L7:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l7;
si1=2969936U;
si2=l7;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l5;
si2=l1;
si3=l2;
si4=l3;
si5=l6;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L9;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l5;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L9;
L12:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l7;
si1=2970484U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L16;
case 1:
goto L14;
case 2:
goto L17;
default:
goto L16;
}
L17:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L13;
L16:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L18;
L19:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
L18:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
f7690(i,si0);
L20:;
si0=l1;
if(si0){
goto L13;
}
si0=l0;
si1=l7;
si2=l5;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
goto L2;
L15:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1808316U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f7690(i,si0);
goto L2;
L14:;
si0=l6;
l5=si0;
L13:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f7690(i,si0);
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f13612(i,si0,si1,si2,si3);
l5=si0;
L2:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f7726(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L5;
}
si0=2U;
l5=si0;
goto L2;
L5:;
si0=l3;
si1=l1;
si2=l2;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
l1=si0;
goto L2;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
l1=si0;
si0=l4;
f7690(i,si0);
goto L2;
L8:;
si0=l4;
l1=si0;
goto L2;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=532U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1807244U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si1=l3;
si2=56U;
si1+=si2;
si2=1U;
si3=l2;
si0=f12394(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L10;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
l1=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L11;
L12:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1807296U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
f7690(i,si0);
L13:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
f7690(i,si0);
L14:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L9:;
si0=l4;
f7690(i,si0);
goto L2;
L4:;
si0=0U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si0=f8195(i,si0,si1);
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7727(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
l7=si0;
if(si0){
goto L2;
}
si0=l7;
if(si0){
goto L3;
}
}
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f13616(i,si0,si1,si2,si3);
l7=si0;
goto L1;
L2:;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L4;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l8;
si1=2969936U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
si2=l1;
si3=l2;
si4=l3;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L12:;
{
si0=l7;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
goto L10;
L13:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
}
L10:;
si0=l6;
si1=2970484U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f7726(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L18;
default:
goto L17;
}
L18:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1804632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L14;
L17:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L19;
L20:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
L19:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
f7690(i,si0);
L21:;
si0=l1;
if(si0){
goto L14;
}
si0=l0;
si1=l6;
si2=l7;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l7=si0;
goto L1;
L16:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1808316U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l7;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L7;
L15:;
si0=l5;
l7=si0;
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=l2;
f7690(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l7;
L0:;
return si0;
}

U32 f7728(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L6:;
{
si0=l4;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L5;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=2969936U;
si2=l6;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=l1;
si3=0U;
si4=l2;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l4;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
goto L9;
L12:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l6;
si1=2970484U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
si0=l5;
l4=si0;
goto L2;
L15:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1804632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L2;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L17;
L18:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919924U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L17:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
si2=l4;
si3=0U;
si4=l2;
si5=l7;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
goto L2;
L13:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1808364U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
si0=f13630(i,si0,si1,si2);
l4=si0;
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7729(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L6:;
{
si0=l4;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L5;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=2969936U;
si2=l6;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=l1;
si3=0U;
si4=l2;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l4;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
goto L9;
L12:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l6;
si1=2970484U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
si0=l5;
l4=si0;
goto L2;
L15:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1804632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L2;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L17;
L18:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919924U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L17:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
si2=l4;
si3=0U;
si4=l2;
si5=l7;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l4=si0;
goto L2;
L13:;
si0=l3;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1808364U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
si0=f13630(i,si0,si1,si2);
l4=si0;
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}


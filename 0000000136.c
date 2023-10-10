#include "w2c2_base.h"

#include "rustpython.h"

U32 f13630(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
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
l4=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f13613(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
L6:;
{
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
sj0=l6;
si0=(U32)(sj0);
l7=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=8U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l7;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=24U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=8U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
f7690(i,si0);
L10:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
f7690(i,si0);
goto L3;
L8:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L11:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f13613(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L5:;
si0=l2;
si1=l2;
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
goto L2;
}
si0=l1;
si1=l2;
si0=f7581(i,si0,si1);
l0=si0;
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f13631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l5=sj4;
f13615(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
L4:;
{
sj0=l7;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
sj0=l7;
si0=(U32)(sj0);
l8=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=8U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l8;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L8;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L8:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
si0=l8;
f7690(i,si0);
goto L1;
L7:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l5;
f13615(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13632(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
L4:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l6;
f13617(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
sj0=l9;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L7:;
sj0=l9;
si0=(U32)(sj0);
l10=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L8:;
si0=1U;
l11=si0;
si0=0U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l10;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l12;
si2=l8;
si3=l7;
si1=si3?si1:si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l10;
si3=16U;
si2+=si3;
f14461(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si0=0U;
l11=si0;
si0=1U;
l4=si0;
goto L5;
L9:;
si0=0U;
l4=si0;
si0=0U;
l11=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L10:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
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
goto L11;
}
si0=l10;
f7690(i,si0);
L11:;
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
goto L1;
}
si0=l4;
f7690(i,si0);
goto L1;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=8U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L12:;
si0=l4;
if(si0){
goto L3;
}
si0=l8;
l12=si0;
si0=l11;
if(si0){
goto L4;
}
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f7746(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+16U);
l5=sj4;
f13615(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L1;
L3:;
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
L4:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
l9=si0;
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
sj0=l8;
si0=(U32)(sj0);
l4=si0;
si0=l9;
if(si0){
goto L9;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l4;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L11:;
si0=l9;
if(si0){
goto L7;
}
goto L5;
L10:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
goto L5;
L8:;
si0=l9;
if(si0){
goto L12;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L12:;
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
goto L6;
}
si0=l6;
si1=l7;
sj2=l5;
si3=l2;
sj4=l8;
f13609(i,si0,si1,sj2,si3,sj4);
si0=0U;
l4=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=l0;
si1=0U;
f1431(i,si0,si1);
goto L1;
L7:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
f7690(i,si0);
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f13615(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f13634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f13617(i,si0,si1,si2,si3,sj4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l6;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L6:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
sj0=l9;
si0=(U32)(sj0);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l13;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si3=l14;
si4=l12;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L7:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si2=24U;
si1*=si2;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1433(i,si0);
L10:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f13617(i,si0,si1,si2,si3,sj4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
goto L6;
}
L5:;
si0=l5;
if(si0){
goto L11;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
L11:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=8U;
si3=l12;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L12:;
si0=l3;
si1=l3;
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
si0=l5;
si1=l5;
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
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
sj2=l7;
si3=l3;
si4=l5;
sj5=l9;
f13608(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l12=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l11;
si4=8U;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L1;
}
si0=0U;
l12=si0;
si0=l1;
si1=0U;
f1431(i,si0,si1);
goto L1;
L4:;
si0=l11;
si1=l11;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f1433(i,si0);
L13:;
si0=0U;
l12=si0;
si0=l5;
if(si0){
goto L14;
}
si0=l11;
l5=si0;
goto L1;
L14:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l11;
l5=si0;
goto L1;
L15:;
si0=l5;
f7690(i,si0);
si0=l11;
l5=si0;
goto L1;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
if(si0){
goto L16;
}
si0=1U;
l12=si0;
si0=l1;
l5=si0;
goto L1;
L16:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l12=si0;
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
l5=si0;
goto L1;
L17:;
si0=l5;
f7690(i,si0);
si0=l1;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13635(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=1U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f13617(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L6:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L4;
}
sj0=l9;
si0=(U32)(sj0);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l13;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si3=l14;
si4=l12;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L7:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1433(i,si0);
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f13617(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
goto L2;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=8U;
si3=l11;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l3;
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
si0=l12;
si1=l12;
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
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
sj2=l7;
si3=l3;
si4=l12;
sj5=l9;
f13608(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l6=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l11;
si4=8U;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L2;
}
si0=0U;
l6=si0;
si0=l1;
si1=0U;
f1431(i,si0,si1);
goto L2;
L3:;
si0=l12;
si1=l12;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1433(i,si0);
L2:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=l3;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=l2;
si1=24U;
si0*=si1;
si1=16U;
si0+=si1;
l3=si0;
L7:;
{
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
l8=si0;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l7;
si1=l8;
si0+=si1;
l5=si0;
si1=-28U;
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
goto L5;
}
si0=l5;
si1=-24U;
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
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
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
goto L3;
}
goto L4;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l1;
f1433(i,si0);
L3:;
L0:;
}

void f13637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
l3=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
si1=l3;
si2=-1U;
si1+=si2;
l2=si1;
si2=l2;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l5;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
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
goto L3;
}
goto L4;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l1;
f1433(i,si0);
L3:;
L0:;
}

void f13638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l3=si0;
L4:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f10675(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+200U);
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
goto L1;
}
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=l2;
si3=0U;
si1=f8078(i,si1,si2,si3);
l2=si1;
si2=l3;
si3=l4;
f7764(i,si0,si1,si2,si3);
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f13617(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=0U;
l6=si0;
L5:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L6;
}
si0=0U;
l5=si0;
goto L1;
L6:;
sj0=l9;
si0=(U32)(sj0);
l10=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=8U;
si3=l11;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l10;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=0U;
l5=si0;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=8U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l6;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L1;
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l11;
si4=8U;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f13617(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L4:;
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
goto L1;
}
si0=l11;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13640(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l4=si0;
goto L3;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l4;
si1=l0;
si2=l1;
si0=f15390(i,si0,si1,si2);
l0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f13641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
sj1=5523395248386ULL;
si2=l3;
si3=-1U;
si2+=si3;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj3=3ULL;
sj2<<=(sj3&63);
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0+3U,sj1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=1947148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l6=si0;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
L6:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=1947148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l6;
if(si0){
goto L8;
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=1947148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=1810698U;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l7=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L11;
case 3:
goto L10;
case 4:
goto L14;
case 5:
goto L13;
default:
goto L12;
}
L15:;
si0=1U;
l7=si0;
si0=1810898U;
l3=si0;
goto L12;
L14:;
si0=2U;
l7=si0;
si0=1825884U;
l3=si0;
goto L12;
L13:;
si0=2U;
l7=si0;
si0=1825886U;
l3=si0;
L12:;
si0=l4;
si1=l1;
si2=l2;
si3=l3;
si4=l7;
si0=f7577(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L11:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l1;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L10:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l1;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13642(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L4:;
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1433(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=8U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L8:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=16U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=16U;
si0+=si1;
f1433(i,si0);
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+24U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
if(si0){
goto L14;
}
L15:;
si0=l0;
si1=24U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l1;
si1=l0;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=24U;
si0+=si1;
f1433(i,si0);
L13:;
L0:;
}

void f13643(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l5=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l3=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=0U;
l8=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=56U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l8=si0;
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l8;
si0=f8126(i,si0,si1,si2);
l6=si0;
goto L3;
L4:;
si0=l3;
si1=l4;
si2=12U;
si1+=si2;
si2=l7;
si0=f9936(i,si0,si1,si2);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
f7690(i,si0);
L8:;
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
l8=si0;
L11:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l9;
f7690(i,si0);
L13:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
f15271(i,si0);
L14:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13644(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l4=si0;
si0=l0;
si1=80U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L1:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+80U);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=80U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L3:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L4:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
l2=si0;
L6:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L8;
}
si0=l5;
f7690(i,si0);
L8:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
f15271(i,si0);
L9:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
f7690(i,si0);
L10:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

void f13645(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj5;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=28U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=16U;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L3:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si1=128U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2370(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l5;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L16;
default:
goto L15;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
l2=si1;
si0-=si1;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l2;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l2;
si0+=si1;
si1=l16;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
goto L4;
L16:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+136U);
l17=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l18=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l9;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
si4=l2;
sj5=l18;
si5=(U32)(sj5);
l5=si5;
si2=f10928(i,sj2,sj3,si4,si5);
si3=l2;
si4=l5;
f12863(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
l16=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
sj0=l17;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
goto L7;
L15:;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=80U;
si0+=si1;
si1=74U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=1943442U;
si2=74U;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=74U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l12;
si1=l4;
si2=128U;
si1+=si2;
si0=f7580(i,si0,si1);
l2=si0;
goto L11;
L19:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943590U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943606U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943598U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l12;
si1=l4;
si2=128U;
si1+=si2;
si0=f7582(i,si0,si1);
l2=si0;
goto L11;
L14:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=96U;
si0+=si1;
si1=74U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=1943516U;
si2=74U;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=74U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l12;
si1=l4;
si2=128U;
si1+=si2;
si0=f7580(i,si0,si1);
l2=si0;
goto L11;
L20:;
si0=l10;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l2;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=88U;
si0+=si1;
si1=24U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943590U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943606U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943598U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l12;
si1=l4;
si2=128U;
si1+=si2;
si0=f7582(i,si0,si1);
l2=si0;
goto L11;
L13:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+132U);
i32_store8(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l1;
si0=f10056(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L12:;
si0=l4;
sj1=l18;
i64_store32(&i->m0,(U64)si0+136U,sj1);
si0=l4;
sj1=l17;
i64_store32(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l12;
si1=l4;
si2=128U;
si1+=si2;
si2=l12;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f10804(i,si1,si2);
si0=f7581(i,si0,si1);
l2=si0;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L21;
}
si0=l15;
l2=si0;
L22:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L23:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l14;
si0=!(si0);
if(si0){
goto L6;
}
si0=l15;
f15271(i,si0);
goto L6;
L10:;
si0=l5;
si1=l16;
si2=1862636U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L7;
}
goto L5;
L8:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l13;
si1=4U;
si0<<=(si1&31);
l19=si0;
si0=l13;
if(si0){
goto L27;
}
si0=l15;
l2=si0;
goto L26;
L27:;
si0=0U;
l2=si0;
L28:;
{
si0=l15;
si1=l2;
si0+=si1;
l16=si0;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
case 2:
goto L33;
case 3:
goto L36;
default:
goto L35;
}
L36:;
si0=l16;
si1=16U;
si0+=si1;
l2=si0;
goto L26;
L35:;
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f10804(i,si1,si2);
l21=si1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=l4;
si3=128U;
si2+=si3;
si3=l1;
f8201(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l21;
f7690(i,si0);
goto L31;
L34:;
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
si2=l4;
si3=128U;
si2+=si3;
si3=l1;
f8212(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L31;
L33:;
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l5;
si2=l4;
si3=128U;
si2+=si3;
si3=l1;
f8214(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l20=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
goto L31;
L37:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l5;
f7690(i,si0);
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L39:;
si0=l20;
l5=si0;
goto L29;
L32:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l5;
f7690(i,si0);
L40:;
si0=l20;
l5=si0;
goto L29;
L31:;
si0=l13;
si1=4U;
si0<<=(si1&31);
l20=si0;
si1=-16U;
si0+=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l20;
si1=l2;
si0-=si1;
si1=-16U;
si0+=si1;
si1=4U;
si0>>=(si1&31);
l2=si0;
L42:;
{
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l16;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L43:;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l14;
si0=!(si0);
if(si0){
goto L24;
}
si0=l15;
f15271(i,si0);
goto L24;
L30:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
f7690(i,si0);
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l5;
f7690(i,si0);
L45:;
si0=l20;
l5=si0;
L29:;
si0=l19;
si1=l2;
si2=16U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L25;
}
L26:;
si0=l15;
si1=l19;
si0+=si1;
l16=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l16;
si1=l2;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l16=si0;
L46:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L47:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L46;
}
}
L25:;
si0=l14;
si0=!(si0);
if(si0){
goto L48;
}
si0=l15;
f15271(i,si0);
L48:;
si0=l4;
si1=128U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l6;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2371(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+132U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l1;
si2=l4;
si3=176U;
si2+=si3;
si3=l3;
f13645(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l20=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l15=si0;
si0=0U;
l19=si0;
si0=1U;
l14=si0;
si0=l5;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L59;
case 1:
goto L58;
case 2:
goto L50;
case 3:
goto L50;
case 4:
goto L50;
case 5:
goto L50;
case 6:
goto L50;
case 7:
goto L50;
case 8:
goto L50;
case 9:
goto L50;
case 10:
goto L50;
case 11:
goto L50;
case 12:
goto L50;
case 13:
goto L50;
case 14:
goto L50;
case 15:
goto L50;
case 16:
goto L50;
case 17:
goto L60;
case 18:
goto L61;
default:
goto L50;
}
L62:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l19=si0;
goto L49;
L61:;
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l1;
f8205(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L53;
}
goto L51;
L60:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=1807769U;
si3=35U;
si4=l5;
si5=l1;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L51;
}
goto L53;
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l21=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=1807769U;
si3=35U;
si4=l5;
si5=l1;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L65;
}
si0=l4;
si1=128U;
si0+=si1;
si1=l13;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2127(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l22=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l19=si0;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l23=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l13;
f7690(i,si0);
L66:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L64;
}
goto L63;
L65:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l23=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l19=si0;
si0=l13;
l2=si0;
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
L64:;
si0=l5;
f7690(i,si0);
L63:;
si0=l19;
if(si0){
goto L57;
}
si0=0U;
l19=si0;
goto L52;
L58:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=1168U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f13646(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L51;
}
goto L53;
L57:;
si0=l22;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l22;
if(si0){
goto L68;
}
si0=l19;
f15271(i,si0);
si0=1U;
l19=si0;
goto L67;
L68:;
si0=l19;
si1=l22;
si0=f15274(i,si0,si1);
l19=si0;
si0=!(si0);
if(si0){
goto L54;
}
L67:;
si0=l21;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l19=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8078(i,si0,si1,si2);
l2=si0;
goto L50;
L56:;
si0=0U;
l19=si0;
si0=l13;
l2=si0;
goto L52;
L55:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+132U);
i32_store8(&i->m0,(U64)si0+191U,si1);
si0=l4;
si1=191U;
si0+=si1;
si1=l1;
si0=f10056(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L24;
L54:;
si0=1U;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L53:;
si0=1U;
l19=si0;
L52:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si0=!(si0);
if(si0){
goto L49;
}
si0=l20;
f15271(i,si0);
goto L49;
L51:;
si0=1U;
l19=si0;
si0=0U;
l14=si0;
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=128U;
si3+=si4;
si4=l13;
si5=8U;
si4+=si5;
si3=f10804(i,si3,si4);
f7618(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L69;
}
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l13;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l2;
f7690(i,si0);
L70:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l15=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l19;
si1=4U;
si0+=si1;
l2=si0;
si0=0U;
l20=si0;
L72:;
{
si0=l2;
l16=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l19;
si1=l20;
si2=28U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L74:;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
L73:;
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L75:;
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si0=l2;
si1=28U;
si0+=si1;
l2=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L72;
}
}
L71:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si0=!(si0);
if(si0){
goto L76;
}
si0=l19;
f15271(i,si0);
L76:;
si0=l14;
if(si0){
goto L77;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l5;
f7690(i,si0);
L77:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
l2=si1;
si0-=si1;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l2;
si2=l21;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
L78:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l2;
si0+=si1;
si1=l23;
si2=l21;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l21;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
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
goto L4;
}
si0=l13;
f7690(i,si0);
goto L4;
L69:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l2;
f7690(i,si0);
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l15=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si1=4U;
si0+=si1;
l2=si0;
si0=0U;
l20=si0;
L80:;
{
si0=l2;
l16=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L81;
}
si0=l1;
si1=l20;
si2=28U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L82:;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
L81:;
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L83:;
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si0=l2;
si1=28U;
si0+=si1;
l2=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
f15271(i,si0);
L84:;
si0=l19;
si0=!(si0);
if(si0){
goto L6;
}
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
f15271(i,si0);
goto L1;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13646(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
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
si1=1228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l6;
si2=1256U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l6;
si2=1248U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l6;
si2=1240U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=l6;
si2=1232U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
si2=l5;
si3=16U;
si2+=si3;
f6868(i,si0,si1,si2);
si0=l6;
si1=1216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+32U);
l11=sj0;
sj1=6364136223846793005ULL;
sj0*=sj1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+40U);
sj0^=sj1;
sj1=l11;
sj0=I64_ROTL(sj0,sj1);
l11=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
si0=l6;
si1=1220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
sj0=l11;
si0=(U32)(sj0);
l8=si0;
si0=0U;
l14=si0;
L5:;
{
si0=l12;
si1=l8;
si2=l9;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l13;
sj0^=sj1;
l11=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l11;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l11=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
L7:;
{
si0=l7;
sj1=l11;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
si1+=si2;
si2=l9;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=l8;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L8:;
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
sj1=l11;
sj0&=sj1;
l11=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
}
L6:;
sj0=l15;
sj1=l15;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=l14;
si2=8U;
si1+=si2;
l14=si1;
si0+=si1;
l8=si0;
goto L5;
}
L4:;
si0=0U;
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
goto L9;
}
si0=l6;
si1=1208U;
si0+=si1;
f1433(i,si0);
L9:;
si0=l8;
l10=si0;
si0=l8;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
f10675(i,si0,si1,si2);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
goto L10;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8078(i,si0,si1,si2);
l10=si0;
L11:;
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
goto L10;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l10;
si3=l1;
f11879(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L14;
}
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
si2=l1;
f11985(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
if(si0){
goto L12;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L13;
L14:;
si0=1U;
l9=si0;
si0=l8;
if(si0){
goto L12;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
L13:;
si0=l10;
f7690(i,si0);
L12:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13647(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=28U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L3:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2370(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+100U);
i32_store8(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l1;
si0=f10056(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
l2=si1;
si0-=si1;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l2;
si0+=si1;
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
goto L4;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l13=si0;
si0=l2;
si1=1U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=40U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943646U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943638U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943630U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943622U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1943614U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=171798691880ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l9;
si1=l5;
si2=l4;
si3=96U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L9;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l2=si0;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l8;
si2=l4;
si3=96U;
si2+=si3;
si3=l9;
f8214(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L22:;
si0=l2;
if(si0){
goto L9;
}
si0=l11;
si1=4U;
si0<<=(si1&31);
l14=si0;
si0=l11;
if(si0){
goto L23;
}
si0=l13;
l2=si0;
goto L19;
L23:;
si0=0U;
l2=si0;
L24:;
{
si0=l13;
si1=l2;
si0+=si1;
l10=si0;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L31;
case 1:
goto L30;
case 2:
goto L29;
case 3:
goto L32;
default:
goto L31;
}
L32:;
si0=l10;
si1=16U;
si0+=si1;
l2=si0;
goto L19;
L31:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f10804(i,si1,si2);
l17=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=l4;
si3=96U;
si2+=si3;
si3=l1;
f8201(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l17;
f7690(i,si0);
goto L27;
L30:;
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
si2=l4;
si3=96U;
si2+=si3;
si3=l1;
f8212(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L27;
L29:;
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l5;
si2=l4;
si3=96U;
si2+=si3;
si3=l1;
f8214(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
goto L27;
L33:;
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
goto L34;
}
si0=l5;
f7690(i,si0);
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L35:;
si0=l16;
l5=si0;
goto L25;
L28:;
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
goto L36;
}
si0=l5;
f7690(i,si0);
L36:;
si0=l16;
l5=si0;
goto L25;
L27:;
si0=l11;
si1=4U;
si0<<=(si1&31);
l16=si0;
si1=-16U;
si0+=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l16;
si1=l2;
si0-=si1;
si1=-16U;
si0+=si1;
si1=4U;
si0>>=(si1&31);
l2=si0;
L38:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l10;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l12;
si0=!(si0);
if(si0){
goto L10;
}
si0=l13;
f15271(i,si0);
goto L10;
L26:;
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
goto L40;
}
si0=l5;
f7690(i,si0);
L40:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
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
goto L41;
}
si0=l5;
f7690(i,si0);
L41:;
si0=l16;
l5=si0;
L25:;
si0=l14;
si1=l2;
si2=16U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L18;
}
L20:;
si0=1U;
si1=40U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l13;
si1=l14;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l10;
si1=l2;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l10=si0;
L42:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L43:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L42;
}
}
L18:;
si0=l12;
si0=!(si0);
if(si0){
goto L44;
}
si0=l13;
f15271(i,si0);
L44:;
si0=l4;
si1=96U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l6;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2371(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l1;
si2=l4;
si3=144U;
si2+=si3;
si3=l3;
f13647(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l16=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l13=si0;
si0=0U;
l14=si0;
si0=1U;
l12=si0;
si0=l5;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L48;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L12;
case 5:
goto L12;
case 6:
goto L12;
case 7:
goto L12;
case 8:
goto L12;
case 9:
goto L12;
case 10:
goto L12;
case 11:
goto L12;
case 12:
goto L12;
case 13:
goto L12;
case 14:
goto L12;
case 15:
goto L12;
case 16:
goto L12;
case 17:
goto L50;
case 18:
goto L51;
default:
goto L12;
}
L52:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l14=si0;
goto L11;
L51:;
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l1;
f8205(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L15;
}
goto L13;
L50:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=1807769U;
si3=35U;
si4=l5;
si5=l1;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L13;
}
goto L15;
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l17=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
si2=1807769U;
si3=35U;
si4=l5;
si5=l1;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L55;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l11;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2127(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l14=si0;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l11;
f7690(i,si0);
L56:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L54;
}
goto L53;
L55:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l14=si0;
si0=l11;
l2=si0;
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L46;
}
L54:;
si0=l5;
f7690(i,si0);
L53:;
si0=l14;
if(si0){
goto L47;
}
si0=0U;
l14=si0;
goto L14;
L48:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=1168U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f13646(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L13;
}
goto L15;
L47:;
si0=l18;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l18;
if(si0){
goto L58;
}
si0=l14;
f15271(i,si0);
si0=1U;
l14=si0;
goto L57;
L58:;
si0=l14;
si1=l18;
si0=f15274(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L16;
}
L57:;
si0=l17;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=0U;
l14=si0;
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8078(i,si0,si1,si2);
l2=si0;
goto L12;
L46:;
si0=0U;
l14=si0;
si0=l11;
l2=si0;
goto L14;
L45:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+100U);
i32_store8(&i->m0,(U64)si0+159U,si1);
si0=l4;
si1=159U;
si0+=si1;
si1=l1;
si0=f10056(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L10;
L17:;
f15042(i);
UNREACHABLE;
L16:;
si0=1U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
l14=si0;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l16;
f15271(i,si0);
goto L11;
L13:;
si0=1U;
l14=si0;
si0=0U;
l12=si0;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=96U;
si3+=si4;
si4=l11;
si5=8U;
si4+=si5;
si3=f10804(i,si3,si4);
f7618(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L59;
}
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l11;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l2;
f7690(i,si0);
L60:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l13=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l14;
si1=4U;
si0+=si1;
l2=si0;
si0=0U;
l16=si0;
L62:;
{
si0=l2;
l10=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l14;
si1=l16;
si2=28U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L64:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
L63:;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L65:;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l2;
si1=28U;
si0+=si1;
l2=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L66;
}
si0=l14;
f15271(i,si0);
L66:;
si0=l12;
if(si0){
goto L67;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L67;
}
si0=l5;
f7690(i,si0);
L67:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
l2=si1;
si0-=si1;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si2=l17;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
L68:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l2;
si0+=si1;
si1=l19;
si2=l17;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l2;
si2=l17;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l11;
f7690(i,si0);
goto L4;
L59:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
f7690(i,si0);
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l13=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si1=4U;
si0+=si1;
l2=si0;
si0=0U;
l16=si0;
L70:;
{
si0=l2;
l10=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l1;
si1=l16;
si2=28U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L72:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
L71:;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L73:;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l2;
si1=28U;
si0+=si1;
l2=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
f15271(i,si0);
L74:;
si0=l14;
si0=!(si0);
if(si0){
goto L5;
}
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
f7690(i,si0);
goto L5;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L75;
}
si0=l13;
l2=si0;
L76:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L77:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l12;
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
f15271(i,si0);
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
goto L1;
L4:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13648(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l1;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l4;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
f11290(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L6;
L7:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
if(si0){
goto L8;
}
si0=l4;
f15271(i,si0);
si0=4U;
l8=si0;
goto L6;
L8:;
si0=l4;
si1=l5;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0=f15274(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si1=l4;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l10;
si1=l9;
si0=f15277(i,si0,si1);
l11=si0;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l9;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
si2=l1;
si3=100U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14680(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
goto L11;
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l9;
if(si0){
goto L13;
}
si0=l10;
f15271(i,si0);
si0=4U;
l12=si0;
goto L11;
L13:;
si0=l10;
si1=l9;
si2=2U;
si1<<=(si2&31);
l13=si1;
si0=f15274(i,si0,si1);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=64U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=88U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=4U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f2139(i);
UNREACHABLE;
L3:;
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l10;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13649(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=28U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L4:;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=l1;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l5;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l10=si0;
si0=0U;
l11=si0;
L8:;
{
si0=l10;
si1=l11;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l9;
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L12;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l13;
si1=l6;
si2=l12;
si3=0U;
si4=l2;
si5=l5;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l14=si0;
goto L11;
L13:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1870156U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
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
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si2=l3;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l14=si0;
goto L10;
L12:;
si0=l5;
si1=l5;
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
si0=l13;
si1=l6;
si2=l12;
si3=l5;
si4=l2;
si0=f11107(i,si0,si1,si2,si3,si4);
l14=si0;
L11:;
si0=l14;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L14;
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
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l14;
f7690(i,si0);
L9:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L5;
}
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+28U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
if(si0){
goto L2;
}
si0=l1;
si1=28U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L2;
L6:;
si0=l5;
si1=l6;
si2=1943688U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+28U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
if(si0){
goto L3;
}
si0=l1;
si1=28U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L3:;
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L17;
}
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si1=l2;
si2=l4;
si3=104U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l1;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f13650(i,si0,si1,si2,si3,si4,si5);
l6=si0;
if(si0){
goto L19;
}
si0=l4;
si1=148U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+108U);
l6=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=l2;
si2=l4;
si3=112U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=116U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l6;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si5=l13;
si6=l6;
si5-=si6;
si0=f13650(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L18:;
si0=l6;
si1=l13;
si2=1943704U;
f662(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l5;
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
goto L1;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13650(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l5;
si2=l3;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
if(si0){
goto L2;
}
si0=0U;
l8=si0;
goto L1;
L2:;
si0=0U;
l9=si0;
L4:;
{
si0=l4;
si1=l9;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l3=si1;
si2=1U;
si3=l3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l10;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=56U;
si0+=si1;
sj1=l12;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L5:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
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
goto L3;
}
L6:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=1U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l10;
if(si0){
goto L7;
}
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=l5;
si2=l11;
si3=l3;
si4=l1;
si0=f11107(i,si0,si1,si2,si3,si4);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L11;
}
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1870156U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
si1=1843U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l6;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si1=l5;
si2=l6;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l8=si0;
goto L10;
L11:;
si0=l10;
si1=l5;
si2=l11;
si3=0U;
si4=l1;
si5=l3;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L13:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l10;
si1=l11;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
f7690(i,si0);
L8:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=0U;
l8=si0;
goto L1;
L3:;
f15042(i);
UNREACHABLE;
L1:;
si0=l6;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

void f13651(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U64 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U64 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=880U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=36U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
si1=116U;
si0+=si1;
l8=si0;
si0=l2;
si1=88U;
si0+=si1;
l9=si0;
si0=l3;
si1=768U;
si0+=si1;
si1=20U;
si0+=si1;
l10=si0;
si0=l3;
si1=808U;
si0+=si1;
si1=20U;
si0+=si1;
l11=si0;
si0=l3;
si1=768U;
si0+=si1;
si1=4U;
si0|=si1;
l12=si0;
si0=l3;
si1=856U;
si0+=si1;
l13=si0;
si0=l3;
si1=592U;
si0+=si1;
si1=52U;
si0+=si1;
l14=si0;
si0=l3;
si1=808U;
si0+=si1;
si1=52U;
si0+=si1;
l15=si0;
si0=l3;
si1=592U;
si0+=si1;
si1=4U;
si0|=si1;
l16=si0;
si0=l3;
si1=808U;
si0+=si1;
si1=4U;
si0|=si1;
l17=si0;
si0=l3;
si1=656U;
si0+=si1;
si1=52U;
si0+=si1;
l18=si0;
si0=l3;
si1=656U;
si0+=si1;
si1=4U;
si0|=si1;
l19=si0;
si0=0U;
l20=si0;
L5:;
{
si0=l20;
si1=8U;
si0<<=(si1&31);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l6;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l21=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l22=si1;
si0|=si1;
l7=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L50;
case 1:
goto L51;
case 2:
goto L223;
case 3:
goto L222;
case 4:
goto L221;
case 5:
goto L55;
case 6:
goto L56;
case 7:
goto L57;
case 8:
goto L58;
case 9:
goto L59;
case 10:
goto L60;
case 11:
goto L61;
case 12:
goto L62;
case 13:
goto L220;
case 14:
goto L65;
case 15:
goto L66;
case 16:
goto L67;
case 17:
goto L68;
case 18:
goto L219;
case 19:
goto L218;
case 20:
goto L217;
case 21:
goto L216;
case 22:
goto L215;
case 23:
goto L69;
case 24:
goto L70;
case 25:
goto L71;
case 26:
goto L72;
case 27:
goto L214;
case 28:
goto L73;
case 29:
goto L213;
case 30:
goto L75;
case 31:
goto L212;
case 32:
goto L211;
case 33:
goto L210;
case 34:
goto L209;
case 35:
goto L79;
case 36:
goto L208;
case 37:
goto L207;
case 38:
goto L80;
case 39:
goto L81;
case 40:
goto L82;
case 41:
goto L83;
case 42:
goto L84;
case 43:
goto L85;
case 44:
goto L206;
case 45:
goto L205;
case 46:
goto L86;
case 47:
goto L87;
case 48:
goto L204;
case 49:
goto L203;
case 50:
goto L88;
case 51:
goto L89;
case 52:
goto L90;
case 53:
goto L91;
case 54:
goto L202;
case 55:
goto L201;
case 56:
goto L200;
case 57:
goto L199;
case 58:
goto L198;
case 59:
goto L197;
case 60:
goto L196;
case 61:
goto L93;
case 62:
goto L195;
case 63:
goto L194;
case 64:
goto L193;
case 65:
goto L97;
case 66:
goto L192;
case 67:
goto L191;
case 68:
goto L100;
case 69:
goto L190;
case 70:
goto L102;
case 71:
goto L189;
case 72:
goto L30;
case 73:
goto L31;
case 74:
goto L32;
case 75:
goto L188;
case 76:
goto L187;
case 77:
goto L186;
case 78:
goto L185;
case 79:
goto L184;
case 80:
goto L33;
case 81:
goto L183;
case 82:
goto L34;
case 83:
goto L182;
case 84:
goto L45;
case 85:
goto L46;
case 86:
goto L47;
case 87:
goto L181;
case 88:
goto L180;
case 89:
goto L179;
case 90:
goto L178;
case 91:
goto L48;
case 92:
goto L177;
case 93:
goto L49;
default:
goto L50;
}
L223:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L176;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l23=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
l20=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l24;
si1=36U;
si0+=si1;
si1=0U;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=8U;
si0&=si1;
if(si0){
goto L175;
}
si0=l21;
si1=16U;
si0+=si1;
l25=si0;
si1=l21;
si0=si0 < si1;
if(si0){
goto L175;
}
si0=l20;
si1=l25;
si2=l20;
si2=i32_load(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=l21;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=l21;
si0=si0 != si1;
if(si0){
goto L175;
}
goto L17;
L222:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L174;
}
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L173;
}
si0=l3;
si1=l21;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+724U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l20;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+724U);
f7640(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l21=si0;
if(si0){
goto L20;
}
si0=0U;
l21=si0;
si0=l22;
if(si0){
goto L20;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l20;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=960U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f8200(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L224;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945212U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=1U;
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l22;
si0=f7585(i,si0,si1,si2);
l22=si0;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l25;
f7690(i,si0);
goto L20;
L224:;
si0=l25;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l25;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L227;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945212U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l21;
si0=f7585(i,si0,si1,si2);
l22=si0;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L226;
}
goto L21;
L227:;
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945168U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=2024U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l3;
si2=744U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+84U);
si2=1945184U;
si3=7U;
si4=l2;
f7739(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L225;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945212U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+732U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l21;
si0=f7585(i,si0,si1,si2);
l22=si0;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L228;
}
si0=l25;
f7690(i,si0);
L228:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
si0=!(si0);
if(si0){
goto L229;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
f15271(i,si0);
L229:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+744U);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
L226:;
si0=1U;
l21=si0;
goto L20;
L225:;
si0=l3;
si1=16U;
si0+=si1;
si1=l25;
si2=l3;
si3=752U;
si2+=si3;
si3=l2;
f8214(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l21=si0;
if(si0){
goto L231;
}
si0=l26;
l22=si0;
goto L230;
L231:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945212U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+732U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l22;
si0=f7585(i,si0,si1,si2);
l22=si0;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1U;
si0=si0 != si1;
if(si0){
goto L230;
}
si0=l26;
f7690(i,si0);
L230:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L232;
}
si0=l25;
f7690(i,si0);
L232:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
si0=!(si0);
if(si0){
goto L233;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
f15271(i,si0);
L233:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+744U);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L234;
}
si0=l25;
f7690(i,si0);
L234:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L19;
L221:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L235;
}
si0=l21;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L235:;
si0=l7;
si1=l21;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l22;
if(si0){
goto L236;
}
si0=l21;
si1=0U;
f1440(i,si0,si1);
L236:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L220:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L237;
}
si0=l21;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L237:;
si0=l21;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L63;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L238;
}
si0=l22;
f7690(i,si0);
L238:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l22;
if(si0){
goto L6;
}
si0=l21;
si1=0U;
f1440(i,si0,si1);
goto L6;
L219:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L172;
}
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L171;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=l22;
si2=-2U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l25;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l21;
si3=l2;
f7712(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L240;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l26=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L120;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l26;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L241;
}
si0=l22;
f7690(i,si0);
L241:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L239;
}
goto L7;
L240:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L242;
}
si0=l22;
f7690(i,si0);
L242:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L239:;
si0=l21;
f7690(i,si0);
goto L7;
L218:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L170;
}
si0=l20;
si1=l25;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L169;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=l25;
si2=-2U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=!(si0);
if(si0){
goto L168;
}
si0=l26;
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l20;
si1=l25;
si2=-3U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si1=l21;
si2=l26;
si3=l25;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si0=f7727(i,si0,si1,si2,si3);
l20=si0;
if(si0){
goto L244;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L245;
}
si0=l22;
f7690(i,si0);
L245:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L243;
}
goto L7;
L244:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L246;
}
si0=l22;
f7690(i,si0);
L246:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L243:;
si0=l21;
f7690(i,si0);
goto L7;
L217:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L167;
}
si0=l21;
si1=l22;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L166;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l22;
si2=-2U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l25;
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l20;
si2=l2;
si0=f8215(i,si0,si1,si2);
l22=si0;
if(si0){
goto L248;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L249;
}
si0=l21;
f7690(i,si0);
L249:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L247;
}
goto L7;
L248:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L250;
}
si0=l21;
f7690(i,si0);
L250:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L247:;
si0=l20;
f7690(i,si0);
goto L7;
L216:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L165;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l20;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l21;
si1=l22;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L163;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l22;
si2=-2U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si1=l2;
si2=l25;
si3=l26;
si4=l22;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f8202(i,si0,si1,si2,si3);
l21=si0;
if(si0){
goto L252;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L251;
}
goto L7;
L252:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L251:;
si0=l20;
f7690(i,si0);
goto L7;
L215:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L162;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l21;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l2;
si2=l21;
si3=0U;
si0=f8202(i,si0,si1,si2,si3);
l21=si0;
if(si0){
goto L254;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L253;
}
goto L7;
L254:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L253:;
si0=l20;
f7690(i,si0);
goto L7;
L214:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L160;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L159;
}
si0=l21;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=328U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l25;
si3=l2;
f8200(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+332U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+328U);
if(si0){
goto L256;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L119;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L255;
}
goto L7;
L256:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L255:;
si0=l21;
f7690(i,si0);
goto L7;
L213:;
si0=l22;
si1=-7U;
si0+=si1;
si1=255U;
si0&=si1;
si1=250U;
si0=si0 < si1;
if(si0){
goto L257;
}
si0=l7;
si1=255U;
si0=si0 <= si1;
if(si0){
goto L74;
}
L257:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L212:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=-2U;
si0+=si1;
l22=si0;
si0=1U;
l20=si0;
si0=l21;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L158;
}
si0=1U;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=4U;
si1+=si2;
si2=1U;
f5814(i,si0,si1,si2);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L211:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=-3U;
si0+=si1;
l21=si0;
si0=l20;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L157;
}
si0=1U;
l20=si0;
si0=2U;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=8U;
si1+=si2;
si2=1U;
f5814(i,si0,si1,si2);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L210:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L156;
}
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L209:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L155;
}
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=-2U;
si0+=si1;
l21=si0;
si0=l20;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L154;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l26=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=1U;
l20=si0;
si0=l21;
si1=l26;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L208:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=808U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
goto L7;
L207:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=808U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
goto L7;
L206:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l7;
si0-=si1;
l22=si0;
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L153;
}
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=l21;
si2=l20;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l13;
si1=l3;
si2=768U;
si1+=si2;
f11259(i,si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
si0=!(sj0);
if(si0){
goto L259;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972616U);
l28=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972608U);
l27=sj0;
goto L258;
L259:;
si0=l3;
si1=776U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l3;
si1=768U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l20=si0;
if(si0){
goto L152;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+776U);
l28=sj1;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+768U);
l27=sj0;
L258:;
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=0U;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
sj1=l28;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=384U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+388U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+384U);
if(si0){
goto L261;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L262;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L260;
}
goto L7;
L262:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L261:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L260:;
si0=l21;
f7690(i,si0);
goto L7;
L205:;
si0=l3;
si1=808U;
si0+=si1;
si1=l1;
si2=l7;
f13654(i,si0,si1,si2);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L150;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=392U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+396U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+392U);
if(si0){
goto L264;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L265;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L263;
}
goto L7;
L265:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L264:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L263:;
si0=l21;
f7690(i,si0);
goto L7;
L204:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l7;
si0-=si1;
l22=si0;
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L149;
}
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=l21;
si2=l20;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l13;
si1=l3;
si2=768U;
si1+=si2;
f11259(i,si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
si0=!(sj0);
if(si0){
goto L267;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972616U);
l28=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972608U);
l27=sj0;
goto L266;
L267:;
si0=l3;
si1=776U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l3;
si1=768U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l20=si0;
if(si0){
goto L148;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+776U);
l28=sj1;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+768U);
l27=sj0;
L266:;
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=0U;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
sj1=l28;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f13655(i,si0,si1,si2,si3);
goto L7;
L203:;
si0=l3;
si1=808U;
si0+=si1;
si1=l1;
si2=l7;
f13654(i,si0,si1,si2);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f13655(i,si0,si1,si2,si3);
goto L7;
L202:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=!(si0);
if(si0){
goto L146;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si0+=si1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l27=sj0;
sj1=-5063891382290364191ULL;
sj0^=sj1;
si1=l20;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L270;
}
sj0=l27;
sj1=5416430769165163171ULL;
sj0^=sj1;
sj1=l28;
sj2=-6413089843220384395ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L268;
}
si0=l20;
si1=56U;
si0+=si1;
l21=si0;
goto L269;
L270:;
si0=l20;
si1=56U;
si0+=si1;
l21=si0;
L269:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l20;
si3=l22;
si4=l2;
f10768(i,si0,si1,si2,si3,si4);
goto L24;
L268:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si0=si0 == si1;
if(si0){
goto L272;
}
si0=l3;
si1=416U;
si0+=si1;
si1=l20;
si2=1945705U;
si3=4U;
si4=l2;
f8199(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+420U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+416U);
si0=!(si0);
if(si0){
goto L271;
}
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L25;
L272:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L271:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+860U,sj1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=0U;
si0=f5566(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=408U;
si0+=si1;
si1=l20;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si1=808U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+408U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+412U);
si3=l2;
f14840(i,si0,si1,si2,si3);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l20;
f7690(i,si0);
goto L24;
L201:;
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
f13656(i,si0,si1,si2);
goto L7;
L200:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l21;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l21;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L273;
}
si0=l21;
si1=12U;
si0+=si1;
si1=l20;
f7268(i,si0,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0+20U);
l20=si0;
L273:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l20;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L199:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l21;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l21;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L274;
}
si0=l21;
si1=12U;
si0+=si1;
si1=l20;
f7268(i,si0,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0+20U);
l20=si0;
L274:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l20;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l20;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L198:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l20=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L143;
}
si0=l2;
si1=l20;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l22=si0;
si0=!(si0);
if(si0){
goto L275;
}
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=-1U;
si0+=si1;
l20=si0;
L275:;
si0=l2;
si1=l20;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=l21;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l21;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L276;
}
si0=l21;
si1=12U;
si0+=si1;
si1=l20;
f7268(i,si0,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0+20U);
l20=si0;
L276:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l25;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l20;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L197:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L142;
}
si0=l21;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si0=si0 <= si1;
if(si0){
goto L277;
}
si0=l20;
si1=l21;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si1=l21;
si0-=si1;
l22=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L278:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L279;
}
si0=l21;
f7690(i,si0);
L279:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L278;
}
}
L277:;
si0=l26;
si1=-5U;
si0+=si1;
l20=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l20;
si1=3U;
si0=si0 == si1;
if(si0){
goto L92;
}
si0=l1;
si1=1944476U;
si2=72U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L196:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l21;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l21;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L280;
}
si0=l21;
si1=12U;
si0+=si1;
si1=l20;
f7268(i,si0,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0+20U);
l20=si0;
L280:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l20;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l20;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L195:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
if(si0){
goto L282;
}
si0=0U;
l20=si0;
goto L281;
L282:;
si0=l21;
si1=4U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=-16U;
si0+=si1;
l20=si0;
L281:;
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
f14677(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l22=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=1939080U;
si1=43U;
si2=1944548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L194:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L141;
}
si0=l21;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si0=si0 <= si1;
if(si0){
goto L283;
}
si0=l20;
si1=l21;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si1=l21;
si0-=si1;
l22=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L284:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L285;
}
si0=l21;
f7690(i,si0);
L285:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L284;
}
}
L283:;
si0=l26;
si1=-5U;
si0+=si1;
l20=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L286;
}
si0=l20;
si1=3U;
si0=si0 != si1;
if(si0){
goto L95;
}
L286:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
if(si0){
goto L96;
}
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L193:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L140;
}
si0=l21;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si0=si0 <= si1;
if(si0){
goto L287;
}
si0=l20;
si1=l21;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si1=l21;
si0-=si1;
l22=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L288:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L289;
}
si0=l21;
f7690(i,si0);
L289:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L288;
}
}
L287:;
si0=l26;
si1=-5U;
si0+=si1;
l20=si0;
si1=3U;
si2=l20;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L26;
case 2:
goto L26;
case 3:
goto L290;
default:
goto L291;
}
L291:;
si0=l24;
si0=!(si0);
if(si0){
goto L26;
}
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
goto L27;
L290:;
si0=l26;
switch(si0){
case 0:
goto L293;
case 1:
goto L292;
default:
goto L28;
}
L293:;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L29;
L292:;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L29;
}
goto L28;
L192:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l7;
si0-=si1;
l26=si0;
si0=l25;
si1=l7;
si0=si0 < si1;
if(si0){
goto L139;
}
si0=l21;
si1=l26;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=0U;
l21=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l7;
if(si0){
goto L295;
}
si0=l3;
si1=768U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+808U);
i64_store(&i->m0,(U64)si0+768U,sj1);
goto L294;
L295:;
si0=l24;
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si1=l24;
si2=l26;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l26=si1;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l24=si0;
si0=1U;
l30=si0;
L296:;
{
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l25;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L138;
}
si0=l25;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
si1=l21;
si0-=si1;
si1=l25;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si0=si0 >= si1;
if(si0){
goto L297;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l25;
f7248(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l30=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l21=si0;
L297:;
si0=l30;
si1=l21;
si0+=si1;
si1=l29;
si2=l25;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l21;
si2=l25;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l26;
si1=4U;
si0+=si1;
l26=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
if(si0){
goto L296;
}
}
si0=l3;
si1=768U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+808U);
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l7;
si0=!(si0);
if(si0){
goto L294;
}
si0=0U;
si1=l22;
si2=2U;
si1<<=(si2&31);
si2=l20;
si3=10U;
si2<<=(si3&31);
si1|=si2;
si0-=si1;
l20=si0;
L298:;
{
si0=l23;
si1=l20;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L299;
}
si0=l21;
f7690(i,si0);
L299:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
if(si0){
goto L298;
}
}
L294:;
si0=l3;
si1=768U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L98;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L191:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l7;
si0-=si1;
l22=si0;
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L137;
}
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l21;
si2=l20;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f11259(i,si0,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L99;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L190:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l7;
si0-=si1;
l22=si0;
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L136;
}
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l21;
si2=l20;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l12;
si1=l3;
si2=808U;
si1+=si2;
f11259(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l20;
si2=0U;
si0=f8137(i,si0,si1,si2);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L101;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L189:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0+=si1;
si0=f14704(i,si0);
l24=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l7;
si0-=si1;
l26=si0;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L135;
}
si0=l25;
si1=l26;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l22;
si2=2U;
si1<<=(si2&31);
si2=l20;
si3=10U;
si2<<=(si3&31);
si1|=si2;
si0-=si1;
l20=si0;
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
L300:;
{
si0=l20;
if(si0){
goto L301;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L134;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L301:;
si0=l24;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
si1=l2;
si2=l26;
si3=l20;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l21=si2;
si0=f13614(i,si0,si1,si2);
l22=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L302;
}
si0=l21;
f7690(i,si0);
L302:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L300;
}
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L303;
}
si0=l26;
si1=l20;
si0+=si1;
l21=si0;
si0=0U;
l25=si0;
L304:;
{
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L305;
}
si0=l22;
f7690(i,si0);
L305:;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l20;
si1=l25;
si2=-4U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L304;
}
}
L303:;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l24;
f7690(i,si0);
goto L7;
L188:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L133;
}
si0=l22;
si1=2U;
si0<<=(si1&31);
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l21;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l21;
si1=56U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l25;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f10333(i,si0,si1,si2);
l20=si0;
if(si0){
goto L306;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L306:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L187:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l7;
if(si0){
goto L308;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L307;
}
si0=0U;
l25=si0;
goto L104;
L308:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L309;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L307;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
goto L104;
L309:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L307:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L186:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l7;
si2=-1U;
si1^=si2;
si0+=si1;
l22=si0;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L131;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+56U);
l20=si1;
si2=8U;
si3=l20;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L310;
}
si0=l21;
si1=56U;
si0+=si1;
sj1=l27;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L310:;
si0=l21;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l21;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L311;
}
si0=l21;
si1=60U;
si0+=si1;
si1=l20;
f7257(i,si0,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0+68U);
l20=si0;
L311:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l21;
si1=0U;
si2=l21;
si2=i32_load(&i->m0,(U64)si2+56U);
l22=si2;
si3=l22;
si4=8U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l22;
if(si0){
goto L312;
}
si0=l21;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L312:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L185:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l7;
si2=-1U;
si1^=si2;
si0+=si1;
l22=si0;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L130;
}
si0=l26;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
si1=l2;
si2=l20;
si2=i32_load(&i->m0,(U64)si2);
si3=l25;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l20=si2;
si0=f13614(i,si0,si1,si2);
l21=si0;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L313;
}
si0=l20;
f7690(i,si0);
L313:;
si0=l21;
if(si0){
goto L314;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L314:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L184:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l21;
si1=l25;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l7;
si2=-1U;
si1^=si2;
si0+=si1;
l22=si0;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L128;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L316;
}
si0=l21;
si1=l20;
si2=l24;
si3=l2;
si0=f7727(i,si0,si1,si2,si3);
l21=si0;
goto L315;
L316:;
si0=l21;
si1=56U;
si0+=si1;
si1=l2;
si2=l20;
si3=l24;
si0=f13616(i,si0,si1,si2,si3);
l21=si0;
L315:;
si0=l21;
if(si0){
goto L318;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L317;
}
goto L7;
L318:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L317:;
si0=l20;
f7690(i,si0);
goto L7;
L183:;
si0=l3;
si1=488U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=656U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f7735(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+492U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+488U);
si0=!(si0);
if(si0){
goto L319;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L319:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L108;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L182:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L127;
}
si0=l24;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l2;
si2=l24;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l30=si2;
si3=l2;
f7591(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l29=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l26=si0;
si0=!(si0);
if(si0){
goto L321;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l21=si0;
si0=l3;
si1=l20;
si2=255U;
si1&=si2;
l20=si1;
si2=l22;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l21;
si1=l25;
si0=si0 < si1;
if(si0){
goto L325;
}
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l21;
si1=l20;
si0-=si1;
l25=si0;
si0=l21;
si1=l20;
si0=si0 < si1;
if(si0){
goto L126;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l26;
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l3;
si1=l26;
si2=l25;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l24;
si1=l3;
si2=808U;
si1+=si2;
f9439(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+760U);
l20=si0;
si1=l22;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+752U);
l21=si1;
si2=l20;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l3;
si1=l21;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l12;
si1=l3;
si2=808U;
si1+=si2;
f11277(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l20;
si2=0U;
si0=f8137(i,si0,si1,si2);
l21=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si1=l24;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L118;
}
si0=l24;
si1=l20;
si2=1U;
si1+=si2;
l26=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=2U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+760U);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
l29=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l23=si0;
si0=l26;
si1=l24;
si1=i32_load(&i->m0,(U64)si1+4U);
l21=si1;
si0=si0 != si1;
if(si0){
goto L324;
}
si0=l29;
si1=l20;
si0+=si1;
l25=si0;
goto L323;
L325:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945764U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l3;
si2=744U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=l2;
si2=l20;
si3=l3;
si4=752U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L326;
}
si0=l26;
l20=si0;
L327:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L328;
}
si0=l22;
f7690(i,si0);
L328:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
if(si0){
goto L327;
}
}
L326:;
si0=l29;
si0=!(si0);
if(si0){
goto L320;
}
si0=l26;
f15271(i,si0);
goto L320;
L324:;
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l22;
si0-=si1;
si1=-4U;
si0+=si1;
l22=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
L329:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L322;
}
si0=l21;
si1=l20;
si2=-4U;
si1+=si2;
l20=si1;
si2=l29;
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=-4U;
si0+=si1;
l22=si0;
if(si0){
goto L329;
}
}
L323:;
si0=l25;
si1=l29;
si0=si0 == si1;
if(si0){
goto L322;
}
si0=l25;
si1=l29;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l22=si0;
si0=l29;
l20=si0;
L330:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L331;
}
si0=l21;
f7690(i,si0);
L331:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L330;
}
}
L322:;
si0=l23;
si0=!(si0);
if(si0){
goto L332;
}
si0=l29;
f15271(i,si0);
L332:;
si0=l24;
si1=l26;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l30;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L109;
L321:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+588U,si1);
L320:;
si0=l30;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L109;
}
goto L7;
L181:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l20;
sj0=i64_load(&i->m0,(U64)si0+8U);
l27=sj0;
sj1=-5063891382290364191ULL;
sj0^=sj1;
si1=l20;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L337;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=536U;
si0+=si1;
si1=l2;
si2=l20;
si3=l2;
si4=88U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=644U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si5=768U;
si4+=si5;
f7643(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+540U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+536U);
if(si0){
goto L335;
}
si0=0U;
si0=f5566(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L124;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l31=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+864U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+856U,sj1);
si0=l3;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
sj1=l31;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=528U;
si0+=si1;
si1=l21;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+532U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+528U);
if(si0){
goto L336;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L337;
}
si0=l21;
f7690(i,si0);
L337:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L333;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
sj0=l27;
sj1=-5063891382290364191ULL;
sj0^=sj1;
sj1=l28;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L336:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L334;
}
si0=l21;
f7690(i,si0);
goto L334;
L335:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
L334:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L333:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L180:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
i32_store(&i->m0,(U64)si0+724U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=608U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11795(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L340;
case 1:
goto L339;
case 2:
goto L338;
default:
goto L340;
}
L340:;
si0=l3;
si1=808U;
si0+=si1;
si1=l3;
si2=724U;
si1+=si2;
f13657(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=l2;
si2=l20;
si3=l3;
si4=808U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L113;
L339:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=552U;
si0+=si1;
si1=l3;
si2=744U;
si1+=si2;
si2=l2;
f11985(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+556U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+552U);
si0=!(si0);
if(si0){
goto L114;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L113;
L338:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L113;
L179:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l20;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l20;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L341;
}
si0=l20;
si1=12U;
si0+=si1;
si1=l21;
f7268(i,si0,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0+20U);
l21=si0;
L341:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l21;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l21;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L342;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L342:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L178:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L116;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=560U;
si0+=si1;
si1=l2;
si2=l20;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l20=si2;
si3=l2;
si4=88U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=616U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7602(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+564U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+560U);
if(si0){
goto L345;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L343;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L344;
}
goto L7;
L345:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L344:;
si0=l20;
f7690(i,si0);
goto L7;
L343:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L177:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L123;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l21;
si1=l25;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L346;
}
si0=l20;
f7690(i,si0);
L346:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
l21=si1;
si0=si0 == si1;
if(si0){
goto L349;
}
si0=l21;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l21;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
L350:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L348;
}
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=l25;
si0=si0 != si1;
if(si0){
goto L350;
}
}
L349:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L122;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l20=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l20;
if(si0){
goto L347;
}
si0=1944800U;
si1=30U;
si2=1944832U;
f703(i,si0,si1,si2);
UNREACHABLE;
L348:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2178613045928566244ULL;
sj0^=sj1;
si1=l26;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6045686839737550963ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L121;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L347:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L351;
}
si0=l20;
f7690(i,si0);
L351:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l26;
f7690(i,si0);
goto L7;
L176:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L175:;
si0=l20;
si1=0U;
sj2=l27;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L17;
L174:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L173:;
si0=l7;
si1=l22;
si2=1945148U;
f663(i,si0,si1,si2);
UNREACHABLE;
L172:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L171:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L170:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L169:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L168:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L167:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L166:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L165:;
si0=l7;
si1=l21;
si2=1946324U;
f663(i,si0,si1,si2);
UNREACHABLE;
L164:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L163:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L162:;
si0=l7;
si1=l20;
si2=1946340U;
f663(i,si0,si1,si2);
UNREACHABLE;
L161:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L160:;
si0=l7;
si1=l20;
si2=1946308U;
f663(i,si0,si1,si2);
UNREACHABLE;
L159:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L158:;
si0=l22;
si1=l21;
si2=1945328U;
f662(i,si0,si1,si2);
UNREACHABLE;
L157:;
si0=l21;
si1=l20;
si2=1945328U;
f662(i,si0,si1,si2);
UNREACHABLE;
L156:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L155:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L154:;
si0=l21;
si1=l20;
si2=1946440U;
f663(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=l22;
si1=l20;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L152:;
si0=l3;
si1=l20;
i32_store16(&i->m0,(U64)si0+752U,si1);
si0=1992240U;
si1=18U;
si2=l3;
si3=752U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L151:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L150:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L149:;
si0=l22;
si1=l20;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L148:;
si0=l3;
si1=l20;
i32_store16(&i->m0,(U64)si0+752U,si1);
si0=1992240U;
si1=18U;
si2=l3;
si3=752U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L147:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L146:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L145:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L144:;
si0=1914132U;
si1=70U;
si2=l3;
si3=744U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L143:;
si0=1673168U;
si1=24U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673284U;
si4=1688008U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L142:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L141:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L140:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L139:;
si0=l26;
si1=l25;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L138:;
si0=1647592U;
si1=43U;
si2=1654372U;
f673(i,si0,si1,si2);
UNREACHABLE;
L137:;
si0=l22;
si1=l20;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L136:;
si0=l22;
si1=l20;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L135:;
si0=l26;
si1=l21;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L134:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L133:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L132:;
si0=1944677U;
si1=19U;
si2=1944696U;
f703(i,si0,si1,si2);
UNREACHABLE;
L131:;
si0=l22;
si1=l21;
si2=1946440U;
f663(i,si0,si1,si2);
UNREACHABLE;
L130:;
si0=l22;
si1=l21;
si2=1946440U;
f663(i,si0,si1,si2);
UNREACHABLE;
L129:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L128:;
si0=l22;
si1=l20;
si2=1946440U;
f663(i,si0,si1,si2);
UNREACHABLE;
L127:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L126:;
si0=l25;
si1=l21;
si2=1877864U;
f675(i,si0,si1,si2);
UNREACHABLE;
L125:;
si0=l22;
si1=l20;
si2=1877864U;
f675(i,si0,si1,si2);
goto L44;
L124:;
si0=1914132U;
si1=70U;
si2=l3;
si3=744U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L123:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L122:;
si0=1673219U;
si1=16U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673236U;
si4=1687992U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L121:;
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1944784U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L120:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L119:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l3;
si1=544U;
si0+=si1;
si1=l20;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=612U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f8200(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+548U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+544U);
si0=!(si0);
if(si0){
goto L352;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=724U;
si1+=si2;
f13657(i,si0,si1);
si0=l3;
si1=6706U;
i32_store(&i->m0,(U64)si0+732U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945132U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
si0=!(si0);
if(si0){
goto L353;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
f15271(i,si0);
L353:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l2;
si1=l22;
si2=l3;
si3=752U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l22=si0;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L354;
}
si0=l20;
f7690(i,si0);
L354:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L113;
}
si0=l21;
f7690(i,si0);
goto L113;
L352:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L355;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L355:;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L112;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L112:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l20;
f7690(i,si0);
goto L7;
L111:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l30;
f7690(i,si0);
goto L7;
L108:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L107:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L106:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=!(si0);
if(si0){
goto L358;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l20;
si1=l21;
si2=-2U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l26;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=0U;
l21=si0;
si0=l22;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L359;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L357;
}
si0=l21;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l21;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l25;
si2=0U;
si0=f8146(i,si0,si1,si2);
l21=si0;
L359:;
si0=l3;
si1=768U;
si0+=si1;
si1=l22;
si2=l21;
si0=f8154(i,si0,si1,si2);
l22=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L356;
}
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L358:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L357:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L356:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L103:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L102:;
si0=l3;
si1=808U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=l7;
f13658(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l22=si0;
si0=!(si0);
if(si0){
goto L360;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l25=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=0U;
si0=f8137(i,si0,si1,si2);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L361;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L361:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L360:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L101:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l3;
si1=808U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=l7;
f13658(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l21=si0;
si0=!(si0);
if(si0){
goto L362;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l22=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L363;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L363:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L362:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L99:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L98:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=l22;
si1=2U;
si0=si0 > si1;
si1=l7;
si2=255U;
si1=si1 > si2;
si0|=si1;
l20=si0;
if(si0){
goto L364;
}
si0=3U;
si1=l22;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L372;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L371;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si0=si0 == si1;
if(si0){
goto L373;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l2;
si2=l20;
f11860(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l20=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L375;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=47U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L370;
}
si0=l20;
si1=39U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945667U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945660U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945652U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945644U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945636U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945628U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=201863462959ULL;
i64_store(&i->m0,(U64)si0+812U,sj1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l25;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l2;
si1=l22;
si2=l3;
si3=808U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L374;
}
si0=l21;
f7690(i,si0);
goto L374;
L375:;
si0=l20;
si0=!(si0);
if(si0){
goto L376;
}
si0=l21;
l20=si0;
goto L368;
L376:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=456U;
si0+=si1;
si1=l2;
si2=l21;
si3=l3;
si4=808U;
si3+=si4;
f7343(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+460U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+456U);
si0=!(si0);
if(si0){
goto L368;
}
L374:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L373:;
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L367;
}
si0=l20;
f7690(i,si0);
goto L367;
L372:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L369;
}
goto L367;
L371:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L370:;
si0=1U;
si1=47U;
f52(i,si0,si1);
UNREACHABLE;
L369:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l22=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L379;
}
si0=l2;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
l20=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l21=si0;
if(si0){
goto L377;
}
L381:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=!(si0);
if(si0){
goto L380;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
if(si0){
goto L377;
}
goto L381;
}
L380:;
si0=l2;
si1=l22;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=30U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L378;
}
si0=l20;
si1=22U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945697U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945691U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945683U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945675U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=128849018910ULL;
i64_store(&i->m0,(U64)si0+812U,sj1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l2;
si1=l21;
si2=l3;
si3=808U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l21=si0;
goto L366;
L379:;
si0=1673168U;
si1=24U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673284U;
si4=1688040U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L378:;
si0=1U;
si1=30U;
f52(i,si0,si1);
UNREACHABLE;
L377:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
goto L365;
L368:;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+756U,si1);
L367:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
if(si0){
goto L382;
}
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L382:;
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l2;
si2=l20;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f11860(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l20=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L366;
}
si0=l20;
if(si0){
goto L365;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=448U;
si0+=si1;
si1=l2;
si2=l21;
si3=l3;
si4=808U;
si3+=si4;
f7343(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+452U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+448U);
si0=!(si0);
if(si0){
goto L365;
}
L366:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l20=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l20;
f7690(i,si0);
goto L7;
L365:;
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=2U;
si0=si0 <= si1;
if(si0){
goto L383;
}
si0=l3;
si1=6720U;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=2332U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l20=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l21=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l22=si0;
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+864U,sj1);
si0=l3;
si1=1945592U;
i32_store(&i->m0,(U64)si0+852U,si1);
si0=l3;
si1=20U;
i32_store(&i->m0,(U64)si0+848U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l3;
si1=1943654U;
sj1=(U64)(si1);
sj2=64424509440ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+832U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
sj1=6210522710017ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=1945608U;
i32_store(&i->m0,(U64)si0+844U,si1);
si0=l3;
si1=1945608U;
sj1=(U64)(si1);
sj2=85899345920ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l20;
si1=1182732U;
si2=l22;
si3=2U;
si2=si2 == si3;
l22=si2;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+20U);
l20=si0;
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+860U,si1);
si0=l21;
si1=1182932U;
si2=l22;
si0=si2?si0:si1;
si1=l3;
si2=808U;
si1+=si2;
si2=l20;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L383:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
si0=!(si0);
if(si0){
goto L384;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+728U);
l20=si0;
si1=64U;
si0+=si1;
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=8U;
si3=l21;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l25=si0;
si0=l21;
si0=!(si0);
if(si0){
goto L385;
}
si0=l22;
sj1=l27;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L385:;
si0=l20;
si1=88U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L386;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L386;
}
si0=l21;
f7690(i,si0);
L386:;
si0=l20;
si1=l25;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l20;
si1=0U;
si2=l20;
si2=i32_load(&i->m0,(U64)si2+64U);
l21=si2;
si3=l21;
si4=8U;
si3=si3 == si4;
l21=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l21;
if(si0){
goto L387;
}
si0=l20;
si1=64U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L387:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+728U);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L384:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+728U);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L364:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
if(si0){
goto L391;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L389;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
l21=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l20=si0;
si0=l2;
si1=l24;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L392;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L392;
}
si0=l20;
f7690(i,si0);
L392:;
si0=l21;
si1=255U;
si0&=si1;
if(si0){
goto L390;
}
si0=l26;
si1=4U;
si0=si0 == si1;
if(si0){
goto L390;
}
si0=l3;
si1=l29;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l26;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=808U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
goto L7;
L391:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l24;
si0=!(si0);
if(si0){
goto L393;
}
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L393;
}
si0=l24;
f7690(i,si0);
L393:;
si0=1U;
l20=si0;
si0=l26;
switch(si0){
case 0:
goto L395;
case 1:
goto L394;
default:
goto L6;
}
L395:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L388;
L394:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L388;
}
goto L7;
L390:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=1U;
l20=si0;
si0=l26;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l26;
switch(si0){
case 0:
goto L398;
case 1:
goto L397;
default:
goto L6;
}
L398:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L396;
}
goto L7;
L397:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L396:;
si0=l29;
f7690(i,si0);
goto L6;
L389:;
si0=1673219U;
si1=16U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L388:;
si0=l29;
f7690(i,si0);
goto L6;
L95:;
si0=l1;
si1=1944620U;
si2=57U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l26=si0;
si0=l22;
si1=-5U;
si0+=si1;
l20=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L404;
}
si0=l20;
si1=3U;
si0=si0 != si1;
if(si0){
goto L403;
}
L404:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L402;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l26;
si1=0U;
si2=l22;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l20=si0;
si0=!(si0);
if(si0){
goto L406;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l2;
si2=l20;
f7341(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+776U);
l30=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l29=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l24=si0;
goto L405;
L406:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
L405:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L401;
}
si0=l20;
si1=l30;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si1=l29;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l20;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+860U,sj1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=0U;
si0=f5566(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L400;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=440U;
si0+=si1;
si1=l21;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+444U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+440U);
if(si0){
goto L408;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l29=si0;
si1=l24;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L407;
}
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
si1=l29;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=l29;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L409;
}
si0=l21;
f7690(i,si0);
L409:;
si0=l22;
if(si0){
goto L410;
}
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L410;
}
si0=l26;
f7690(i,si0);
L410:;
si0=l25;
si0=!(si0);
if(si0){
goto L7;
}
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L399;
L408:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L411;
}
si0=l21;
f7690(i,si0);
L411:;
si0=l22;
if(si0){
goto L412;
}
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L412;
}
si0=l26;
f7690(i,si0);
L412:;
si0=l25;
si0=!(si0);
if(si0){
goto L7;
}
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L399;
}
goto L7;
L407:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L403:;
si0=l1;
si1=1944564U;
si2=56U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L402:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L401:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L400:;
si0=1914132U;
si1=70U;
si2=l3;
si3=744U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L399:;
si0=l25;
f7690(i,si0);
goto L7;
L93:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L413;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
i32_store(&i->m0,(U64)si0+724U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=744U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11795(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L419;
case 1:
goto L418;
case 2:
goto L417;
default:
goto L419;
}
L419:;
si0=l3;
si1=808U;
si0+=si1;
si1=l3;
si2=724U;
si1+=si2;
f13659(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=l2;
si2=l20;
si3=l3;
si4=808U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L415;
L418:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=432U;
si0+=si1;
si1=l3;
si2=744U;
si1+=si2;
si2=l2;
f11985(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+436U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+432U);
si0=!(si0);
if(si0){
goto L416;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L415;
L417:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L415;
L416:;
si0=l3;
si1=424U;
si0+=si1;
si1=l20;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=752U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f8200(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+428U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+424U);
si0=!(si0);
if(si0){
goto L420;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=724U;
si1+=si2;
f13659(i,si0,si1);
si0=l3;
si1=6706U;
i32_store(&i->m0,(U64)si0+732U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945004U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
si0=!(si0);
if(si0){
goto L421;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
f15271(i,si0);
L421:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l2;
si1=l22;
si2=l3;
si3=752U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l22=si0;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L422;
}
si0=l20;
f7690(i,si0);
L422:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L415;
}
si0=l21;
f7690(i,si0);
goto L415;
L420:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L423;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L423:;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=7U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=808U;
si1+=si2;
f13660(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L414;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L415:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L414:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+724U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l20;
f7690(i,si0);
goto L7;
L413:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L424;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l20=si0;
si0=l2;
si1=l24;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L425;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L425;
}
si0=l20;
f7690(i,si0);
L425:;
si0=l26;
si1=4U;
si0=si0 == si1;
if(si0){
goto L426;
}
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=808U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
goto L7;
L426:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L424:;
si0=1673219U;
si1=16U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L91:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L427;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=148U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L429;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=0U;
l21=si0;
si0=l22;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L430;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L428;
}
si0=l21;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l21;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l25;
si2=0U;
si0=f8146(i,si0,si1,si2);
l21=si0;
L430:;
si0=l20;
si1=l22;
si2=l21;
si0=f8094(i,si0,si1,si2);
l20=si0;
L429:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L23;
L428:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L427:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L431;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=808U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
goto L7;
L431:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L436;
}
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L439;
case 1:
goto L438;
case 2:
goto L437;
default:
goto L439;
}
L439:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L435;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l25=si0;
si0=l20;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2U;
l21=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
goto L432;
L438:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L433;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2U;
l21=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L440;
}
si0=l20;
f7690(i,si0);
L440:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L432;
L437:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L434;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L441;
}
si0=l20;
f7690(i,si0);
L441:;
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=3U;
l21=si0;
goto L432;
L436:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L435:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L434:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L433:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L432:;
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L442;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=!(si0);
if(si0){
goto L442;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L442;
}
si0=l20;
f7690(i,si0);
L442:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l20;
f7690(i,si0);
goto L7;
L88:;
si0=l3;
si1=808U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=0U;
si3=si3 != si4;
f13661(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+856U);
l21=si0;
si0=!(si0);
if(si0){
goto L443;
}
si0=l19;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=40U;
si0+=si1;
si1=l17;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=32U;
si0+=si1;
si1=l17;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=24U;
si0+=si1;
si1=l17;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=16U;
si0+=si1;
si1=l17;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l17;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l3;
si3=656U;
si2+=si3;
si3=l2;
f13655(i,si0,si1,si2,si3);
goto L7;
L443:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L87:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L444;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L447;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11879(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
if(si0){
goto L446;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l25=si0;
si0=!(si0);
if(si0){
goto L449;
}
si0=l20;
l26=si0;
si0=l25;
l20=si0;
goto L448;
L449:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
L448:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L445;
}
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1264U;
si2=1268U;
si3=l25;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L451;
}
si0=l21;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L450;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L451:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L450:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L447:;
si0=l7;
si1=l25;
si2=1944460U;
f663(i,si0,si1,si2);
UNREACHABLE;
L446:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L445:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L444:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l3;
si1=808U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=0U;
si3=si3 != si4;
f13661(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+856U);
l21=si0;
si0=!(si0);
if(si0){
goto L454;
}
si0=l16;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=40U;
si0+=si1;
si1=l17;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=32U;
si0+=si1;
si1=l17;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=24U;
si0+=si1;
si1=l17;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
si1=l17;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l17;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+592U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L453;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l3;
si3=592U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L456;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L452;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L455;
}
goto L7;
L456:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L455:;
si0=l21;
f7690(i,si0);
goto L7;
L454:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L453:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L452:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l22;
si1=15U;
si0=si0 > si1;
if(si0){
goto L457;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L469;
}
si0=l20;
si1=l25;
si2=-1U;
si1+=si2;
l26=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l21;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L468;
}
si0=l26;
si0=!(si0);
if(si0){
goto L467;
}
si0=l20;
si1=l25;
si2=-2U;
si1+=si2;
l29=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l24;
si1=l29;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6783778230620724248ULL;
sj0^=sj1;
si1=l26;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4350209299226825820ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L466;
}
si0=0U;
l30=si0;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L470;
}
si0=l29;
si0=!(si0);
if(si0){
goto L465;
}
si0=l20;
si1=l25;
si2=-3U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=376U;
si0+=si1;
si1=l2;
si2=l24;
si3=l25;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f5844(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+380U);
l30=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+376U);
si0=!(si0);
if(si0){
goto L470;
}
si0=l3;
si1=l30;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=808U;
si2+=si3;
si3=1946028U;
si4=1946044U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L470:;
si0=l22;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L463;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L464;
}
si0=l20;
si1=l25;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
goto L462;
L469:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L468:;
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1945788U;
si1=29U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1946076U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L467:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L466:;
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1945817U;
si1=54U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1946060U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L465:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L464:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L463:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l25=si0;
si0=!(si0);
if(si0){
goto L461;
}
si0=l25;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l25;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l29;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l24;
si2=0U;
si0=f8146(i,si0,si1,si2);
l23=si0;
L462:;
si0=0U;
l24=si0;
si0=0U;
l25=si0;
si0=l22;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L471;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L460;
}
si0=l20;
si1=l25;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l25;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L459;
}
L471:;
si0=l22;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L458;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
if(si0){
goto L472;
}
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L472:;
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l24;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L458;
}
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1945930U;
si1=47U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1945996U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L461:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L460:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L459:;
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1945871U;
si1=59U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1946012U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L458:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l26;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l33=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+844U,si1);
si0=l3;
si1=l34;
si2=-256U;
si1&=si2;
l34=si1;
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l3;
si1=l29;
i32_store(&i->m0,(U64)si0+836U,si1);
si0=0U;
l29=si0;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+832U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l30;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l33;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l22;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L476;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L475;
}
si0=l20;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l20;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+776U,sj1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l25;
si2=0U;
si0=f8146(i,si0,si1,si2);
l29=si0;
L476:;
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=l29;
si0=f8103(i,si0,si1,si2);
l20=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=740U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l22;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=1U;
l26=si0;
si0=1U;
l25=si0;
si0=l20;
si1=l2;
si2=l24;
si3=l22;
si0=f8202(i,si0,si1,si2,si3);
l22=si0;
if(si0){
goto L473;
}
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+844U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+836U,si1);
si0=l3;
sj1=197568495617ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=46U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l21;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l21;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=368U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f13449(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+368U);
l22=si0;
si0=!(si0);
if(si0){
goto L474;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=960U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+372U);
f10675(i,si0,si1,si2);
si0=l25;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=0U;
l25=si0;
si0=1U;
l26=si0;
si0=l20;
si1=l2;
si2=l24;
si3=l3;
si4=808U;
si3+=si4;
si4=l22;
si5=0U;
si3=f8078(i,si3,si4,si5);
si0=f8202(i,si0,si1,si2,si3);
l22=si0;
si0=!(si0);
if(si0){
goto L477;
}
si0=1U;
l25=si0;
goto L473;
L477:;
si0=l20;
si1=l2;
si2=l2;
si3=88U;
si2+=si3;
l24=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=1012U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l21;
si0=f8202(i,si0,si1,si2,si3);
l22=si0;
if(si0){
goto L473;
}
si0=l3;
si1=360U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=l24;
si2=i32_load(&i->m0,(U64)si2);
si3=960U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f7713(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+364U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+360U);
if(si0){
goto L473;
}
si0=l22;
if(si0){
goto L478;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
L478:;
si0=l20;
si1=l2;
si2=l2;
si3=88U;
si2+=si3;
l24=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=948U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l22;
si0=f8202(i,si0,si1,si2,si3);
l22=si0;
if(si0){
goto L473;
}
si0=0U;
l26=si0;
si0=0U;
l25=si0;
si0=l20;
si1=l2;
si2=l24;
si2=i32_load(&i->m0,(U64)si2);
si3=636U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l23;
si0=f8202(i,si0,si1,si2,si3);
l22=si0;
if(si0){
goto L473;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L479;
}
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L479:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L475:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L474:;
si0=1939080U;
si1=43U;
si2=1945980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L473:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l24;
si1=1U;
si0=si0 != si1;
if(si0){
goto L480;
}
si0=l20;
f7690(i,si0);
L480:;
si0=l26;
si0=!(si0);
if(si0){
goto L481;
}
si0=l23;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L481;
}
si0=l23;
f7690(i,si0);
L481:;
si0=l25;
si0=!(si0);
if(si0){
goto L7;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l21;
f7690(i,si0);
goto L7;
L457:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=0U;
f13662(i,si0,si1,si2,si3,si4);
goto L7;
L83:;
si0=l3;
si1=584U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=1U;
f13662(i,si0,si1,si2,si3,si4);
goto L7;
L82:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L483;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
if(si0){
goto L482;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
si1=255U;
si0&=si1;
if(si0){
goto L484;
}
si0=l20;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L484:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L483:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L482:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+812U);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L81:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L486;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
if(si0){
goto L485;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L487;
}
si0=l20;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L487:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L486:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L485:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+812U);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L80:;
si0=l1;
si1=36U;
si0+=si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L79:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L488;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=352U;
si0+=si1;
si1=l2;
si2=l21;
f14775(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+356U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+352U);
if(si0){
goto L490;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L489;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L490:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L489:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L488:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L491;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L492;
}
si0=l21;
f7690(i,si0);
L492:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L491:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L494;
}
si0=l21;
si1=l25;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L493;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=808U;
si0+=si1;
si1=l26;
si2=l25;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l20;
si3=l22;
si4=l2;
f13641(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
l25=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L496;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l22=si0;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L496;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1264U;
si2=1268U;
si3=l22;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L495;
}
goto L16;
L496:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
L495:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L497;
}
si0=l20;
f7690(i,si0);
L497:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L498;
}
si0=l21;
f7690(i,si0);
L498:;
si0=l25;
si1=2U;
si0=si0 == si1;
if(si0){
goto L499;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L500;
}
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L500:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L499:;
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L494:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L493:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l22;
si1=4U;
si0=si0 > si1;
si1=l7;
si2=255U;
si1=si1 > si2;
si0|=si1;
l26=si0;
if(si0){
goto L501;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si0=!(si0);
if(si0){
goto L505;
}
si0=l21;
si1=l25;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L504;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l21;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l24;
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=5U;
si1=l22;
si2=l26;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L518;
case 1:
goto L517;
case 2:
goto L516;
case 3:
goto L515;
case 4:
goto L514;
default:
goto L518;
}
L518:;
si0=l3;
si1=336U;
si0+=si1;
si1=l2;
si2=l20;
si3=l21;
f7619(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+340U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+336U);
if(si0){
goto L512;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
if(si0){
goto L513;
}
si0=0U;
l24=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
si1=0U;
si0=si0 != si1;
l22=si0;
goto L510;
L517:;
si0=l3;
si1=344U;
si0+=si1;
si1=l2;
si2=l20;
si3=l21;
f7619(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+348U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+344U);
if(si0){
goto L519;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
si0=!(si0);
if(si0){
goto L511;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
L519:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L508;
L516:;
si0=l20;
si1=l21;
si0=si0 == si1;
l22=si0;
si0=1U;
l24=si0;
goto L510;
L515:;
si0=l20;
si1=l21;
si0=si0 != si1;
l22=si0;
si0=1U;
l24=si0;
goto L510;
L514:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l20;
si3=l2;
f8210(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
if(si0){
goto L509;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
si1=0U;
si0=si0 != si1;
l22=si0;
si0=1U;
l24=si0;
goto L510;
L513:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
L512:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L508;
L511:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+809U);
si1=255U;
si0&=si1;
si0=!(si0);
l22=si0;
si0=0U;
l24=si0;
L510:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1264U;
si2=1268U;
si3=l22;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l26=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L507;
}
si0=l22;
si1=l26;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
if(si0){
goto L506;
}
goto L503;
L509:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L508;
}
si0=l21;
f7690(i,si0);
L508:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L502;
L507:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L506:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L503;
}
si0=l21;
f7690(i,si0);
goto L503;
L505:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L504:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L503:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L502:;
si0=l20;
f7690(i,si0);
goto L7;
L501:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l22;
si1=12U;
si0=si0 > si1;
si1=l7;
si2=255U;
si1=si1 > si2;
si0|=si1;
l26=si0;
if(si0){
goto L520;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L523;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l25;
si0=!(si0);
if(si0){
goto L522;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l20;
si1=l21;
si2=-2U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l24;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=13U;
si1=l22;
si2=l26;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L537;
case 1:
goto L536;
case 2:
goto L535;
case 3:
goto L534;
case 4:
goto L533;
case 5:
goto L532;
case 6:
goto L531;
case 7:
goto L530;
case 8:
goto L529;
case 9:
goto L528;
case 10:
goto L527;
case 11:
goto L526;
case 12:
goto L525;
default:
goto L537;
}
L537:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=!(si0);
if(si0){
goto L538;
}
si0=l3;
si1=224U;
si0+=si1;
si1=l21;
si2=l25;
si3=l24;
si4=l2;
si5=l22;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+228U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+224U);
l26=si0;
if(si0){
goto L524;
}
si0=0U;
l26=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si0=si0 != si1;
if(si0){
goto L524;
}
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L538;
}
si0=l22;
f7690(i,si0);
L538:;
si0=l3;
si1=216U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=l24;
si5=1803437U;
si6=3U;
f7612(i,si0,si1,si2,si3,si4,si5,si6);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+220U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+216U);
l26=si0;
goto L524;
L536:;
si0=l3;
si1=232U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
f7617(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+236U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+232U);
l26=si0;
goto L524;
L535:;
si0=l3;
si1=240U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=24U;
si5=23U;
si6=1803424U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+244U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+240U);
l26=si0;
goto L524;
L534:;
si0=l3;
si1=248U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=22U;
si5=20U;
si6=1803422U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+252U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+248U);
l26=si0;
goto L524;
L533:;
si0=l3;
si1=256U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=21U;
si5=19U;
si6=1803419U;
si7=3U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+260U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+256U);
l26=si0;
goto L524;
L532:;
si0=l3;
si1=264U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=13U;
si5=3U;
si6=1803405U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+268U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+264U);
l26=si0;
goto L524;
L531:;
si0=l3;
si1=272U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
f7614(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+276U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+272U);
l26=si0;
goto L524;
L530:;
si0=l3;
si1=280U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=11U;
si5=1U;
si6=1803403U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+284U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+280U);
l26=si0;
goto L524;
L529:;
si0=l3;
si1=288U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=14U;
si5=5U;
si6=1803407U;
si7=3U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+292U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+288U);
l26=si0;
goto L524;
L528:;
si0=l3;
si1=296U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=15U;
si5=6U;
si6=1803410U;
si7=3U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+300U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+296U);
l26=si0;
goto L524;
L527:;
si0=l3;
si1=304U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=16U;
si5=7U;
si6=1803413U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+308U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+304U);
l26=si0;
goto L524;
L526:;
si0=l3;
si1=312U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=17U;
si5=8U;
si6=1803415U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+316U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+312U);
l26=si0;
goto L524;
L525:;
si0=l3;
si1=320U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=18U;
si5=9U;
si6=1803417U;
si7=2U;
f7611(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+324U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+320U);
l26=si0;
L524:;
si0=l26;
if(si0){
goto L540;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l26=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L521;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l26;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L541;
}
si0=l21;
f7690(i,si0);
L541:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L539;
}
goto L7;
L540:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L542;
}
si0=l21;
f7690(i,si0);
L542:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L539:;
si0=l25;
f7690(i,si0);
goto L7;
L523:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L522:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L521:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L520:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l22;
si1=12U;
si0=si0 > si1;
si1=l7;
si2=255U;
si1=si1 > si2;
si0|=si1;
l26=si0;
if(si0){
goto L543;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L546;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l25;
si0=!(si0);
if(si0){
goto L545;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l20;
si1=l21;
si2=-2U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l24;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=13U;
si1=l22;
si2=l26;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L560;
case 1:
goto L559;
case 2:
goto L558;
case 3:
goto L557;
case 4:
goto L556;
case 5:
goto L555;
case 6:
goto L554;
case 7:
goto L553;
case 8:
goto L552;
case 9:
goto L551;
case 10:
goto L550;
case 11:
goto L549;
case 12:
goto L548;
default:
goto L560;
}
L560:;
si0=l3;
si1=112U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=l2;
si5=88U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=1272U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=1803426U;
si6=11U;
f7612(i,si0,si1,si2,si3,si4,si5,si6);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l22=si0;
goto L547;
L559:;
si0=l3;
si1=120U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
f7615(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l22=si0;
goto L547;
L558:;
si0=l3;
si1=128U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=23U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l22=si0;
si0=!(si0);
if(si0){
goto L561;
}
si0=l24;
l26=si0;
goto L547;
L561:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L562;
}
si0=l24;
l26=si0;
goto L547;
L562:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803402U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L557:;
si0=l3;
si1=136U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=20U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l22=si0;
si0=!(si0);
if(si0){
goto L563;
}
si0=l24;
l26=si0;
goto L547;
L563:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L564;
}
si0=l24;
l26=si0;
goto L547;
L564:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803401U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L556:;
si0=l3;
si1=144U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=19U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l22=si0;
si0=!(si0);
if(si0){
goto L565;
}
si0=l24;
l26=si0;
goto L547;
L565:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L566;
}
si0=l24;
l26=si0;
goto L547;
L566:;
si0=l2;
si1=l21;
si2=l25;
si3=1803399U;
si4=2U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l22=si0;
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L555:;
si0=l3;
si1=152U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=3U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+156U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+152U);
l22=si0;
si0=!(si0);
if(si0){
goto L567;
}
si0=l24;
l26=si0;
goto L547;
L567:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L568;
}
si0=l24;
l26=si0;
goto L547;
L568:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803385U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L554:;
si0=l3;
si1=160U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
f7613(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+164U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+160U);
l22=si0;
goto L547;
L553:;
si0=l3;
si1=168U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=1U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+172U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+168U);
l22=si0;
si0=!(si0);
if(si0){
goto L569;
}
si0=l24;
l26=si0;
goto L547;
L569:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L570;
}
si0=l24;
l26=si0;
goto L547;
L570:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803384U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L552:;
si0=l3;
si1=176U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=5U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+180U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
l22=si0;
si0=!(si0);
if(si0){
goto L571;
}
si0=l24;
l26=si0;
goto L547;
L571:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L572;
}
si0=l24;
l26=si0;
goto L547;
L572:;
si0=l2;
si1=l21;
si2=l25;
si3=1803392U;
si4=2U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l22=si0;
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L551:;
si0=l3;
si1=184U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=6U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+188U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+184U);
l22=si0;
si0=!(si0);
if(si0){
goto L573;
}
si0=l24;
l26=si0;
goto L547;
L573:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L574;
}
si0=l24;
l26=si0;
goto L547;
L574:;
si0=l2;
si1=l21;
si2=l25;
si3=1803394U;
si4=2U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l22=si0;
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L550:;
si0=l3;
si1=192U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=7U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+196U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
l22=si0;
si0=!(si0);
if(si0){
goto L575;
}
si0=l24;
l26=si0;
goto L547;
L575:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L576;
}
si0=l24;
l26=si0;
goto L547;
L576:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803396U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L549:;
si0=l3;
si1=200U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=8U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+204U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+200U);
l22=si0;
si0=!(si0);
if(si0){
goto L577;
}
si0=l24;
l26=si0;
goto L547;
L577:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L578;
}
si0=l24;
l26=si0;
goto L547;
L578:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803397U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
goto L547;
L548:;
si0=l3;
si1=208U;
si0+=si1;
si1=l2;
si2=l21;
si3=l25;
si4=9U;
f7610(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+212U);
l24=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+208U);
l22=si0;
si0=!(si0);
if(si0){
goto L579;
}
si0=l24;
l26=si0;
goto L547;
L579:;
si0=0U;
l22=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si0=si0 == si1;
if(si0){
goto L580;
}
si0=l24;
l26=si0;
goto L547;
L580:;
si0=1U;
l22=si0;
si0=l2;
si1=l21;
si2=l25;
si3=1803398U;
si4=1U;
si0=f7577(i,si0,si1,si2,si3,si4);
l26=si0;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L547;
}
si0=l24;
f7690(i,si0);
L547:;
si0=l22;
if(si0){
goto L582;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L544;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L583;
}
si0=l21;
f7690(i,si0);
L583:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L581;
}
goto L7;
L582:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L584;
}
si0=l21;
f7690(i,si0);
L584:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L581:;
si0=l25;
f7690(i,si0);
goto L7;
L546:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L545:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L544:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L543:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l7;
si1=4U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l20=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L585;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L589;
}
si0=l22;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L593;
case 1:
goto L596;
case 2:
goto L595;
case 3:
goto L594;
default:
goto L593;
}
L596:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=872U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11795(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L597;
case 1:
goto L591;
case 2:
goto L590;
default:
goto L597;
}
L597:;
si0=l2;
si1=l21;
si2=1682728U;
si3=7U;
si0=f7576(i,si0,si1,si2,si3);
l20=si0;
goto L590;
L595:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=968U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11795(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L598;
case 1:
goto L592;
case 2:
goto L590;
default:
goto L598;
}
L598:;
si0=l2;
si1=l21;
si2=1682721U;
si3=7U;
si0=f7576(i,si0,si1,si2,si3);
l20=si0;
goto L590;
L594:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1000U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f11795(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L600;
case 1:
goto L599;
case 2:
goto L590;
default:
goto L600;
}
L600:;
si0=l2;
si1=l21;
si2=1682714U;
si3=7U;
si0=f7576(i,si0,si1,si2,si3);
l20=si0;
goto L590;
L599:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=l2;
f11985(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L588;
}
goto L590;
L593:;
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+808U);
si0=!(si0);
if(si0){
goto L587;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L592:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=l2;
f11985(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L590;
}
goto L588;
L591:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+816U);
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=l2;
f11985(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L588;
}
L590:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L589:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L588:;
si0=l22;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L586;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L587:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1268U;
si2=1264U;
si3=l3;
si3=i32_load8_u(&i->m0,(U64)si3+809U);
si4=255U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L586;
}
si0=1U;
l20=si0;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L586:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L585:;
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L601;
}
si0=l7;
si1=l21;
si2=1944360U;
f663(i,si0,si1,si2);
UNREACHABLE;
L601:;
si0=l20;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L602;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L602:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l20=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L603;
}
si0=l7;
si1=l20;
si2=1944344U;
f663(i,si0,si1,si2);
UNREACHABLE;
L603:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L604;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L604:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l20=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L605;
}
si0=l7;
si1=l20;
si2=1944328U;
f663(i,si0,si1,si2);
UNREACHABLE;
L605:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L606;
}
si0=l21;
si1=56U;
si0+=si1;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L606:;
si0=l21;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L607;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L607;
}
si0=l20;
f7690(i,si0);
L607:;
si0=l21;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=1U;
l20=si0;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l22;
if(si0){
goto L608;
}
si0=l21;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L608:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L66:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L609;
}
si0=l7;
si1=l21;
si2=1944312U;
f663(i,si0,si1,si2);
UNREACHABLE;
L609:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=l2;
si0=f7728(i,si0,si1,si2);
l26=si0;
si0=!(si0);
if(si0){
goto L610;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
l21=si1;
si0=si0 == si1;
if(si0){
goto L612;
}
si0=l21;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l21;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
L613:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L611;
}
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=l25;
si0=si0 != si1;
if(si0){
goto L613;
}
}
L612:;
si0=l24;
si1=l2;
si0=f13663(i,si0,si1);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l26;
f7690(i,si0);
goto L6;
L611:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L610:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L65:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L614;
}
si0=l7;
si1=l21;
si2=1944296U;
f663(i,si0,si1,si2);
UNREACHABLE;
L614:;
si0=l20;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
if(si0){
goto L617;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1870156U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l20;
si2=l3;
si3=768U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l26=si0;
goto L616;
L617:;
si0=l21;
si1=l20;
si2=l24;
si3=0U;
si4=l2;
si5=l22;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l26=si0;
si0=!(si0);
if(si0){
goto L615;
}
L616:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
l21=si1;
si0=si0 == si1;
if(si0){
goto L619;
}
si0=l21;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l21;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
L620:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L618;
}
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=l25;
si0=si0 != si1;
if(si0){
goto L620;
}
}
L619:;
si0=l24;
si1=l2;
si0=f13663(i,si0,si1);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l26;
f7690(i,si0);
goto L6;
L618:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L615:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L64:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=404U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L621;
}
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=1943976U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l22;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si1=l2;
si2=l20;
si3=l3;
si4=768U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=1U;
l20=si0;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l22;
if(si0){
goto L6;
}
si0=l21;
si1=0U;
f1440(i,si0,si1);
goto L6;
L621:;
si0=l7;
si1=l25;
si2=1944280U;
f663(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l7;
si1=l20;
si2=1944264U;
f663(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L622;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l22=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L623;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L624;
}
si0=l21;
si1=56U;
si0+=si1;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L624:;
si0=l21;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L625;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L625;
}
si0=l20;
f7690(i,si0);
L625:;
si0=l21;
si1=l22;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=1U;
l20=si0;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l22;
if(si0){
goto L626;
}
si0=l21;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L626:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L623:;
si0=l7;
si1=l22;
si2=1944248U;
f663(i,si0,si1,si2);
UNREACHABLE;
L622:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L627;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L629;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l22;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L631;
}
si0=l22;
si1=l21;
si2=l20;
si3=l2;
si0=f7723(i,si0,si1,si2,si3);
l20=si0;
if(si0){
goto L630;
}
goto L628;
L631:;
si0=l22;
si1=56U;
si0+=si1;
si1=l2;
si2=l21;
si3=l20;
si0=f13612(i,si0,si1,si2,si3);
l20=si0;
si0=!(si0);
if(si0){
goto L628;
}
L630:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L629:;
si0=l7;
si1=l25;
si2=1944232U;
f663(i,si0,si1,si2);
UNREACHABLE;
L628:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L627:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L632;
}
si0=l7;
si1=l20;
si2=1944216U;
f663(i,si0,si1,si2);
UNREACHABLE;
L632:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L633;
}
si0=l21;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l21;
si3=l20;
si3=i32_load(&i->m0,(U64)si3);
si4=l22;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si0=f11107(i,si0,si1,si2,si3,si4);
l20=si0;
if(si0){
goto L634;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L634:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L633:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L635;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L636;
}
si0=l21;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L636:;
si0=l21;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L637;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L638;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L638;
}
si0=l20;
f7690(i,si0);
L638:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l25;
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l22;
if(si0){
goto L639;
}
si0=l21;
si1=0U;
f1440(i,si0,si1);
L639:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L637:;
si0=l7;
si1=l20;
si2=1944200U;
f663(i,si0,si1,si2);
UNREACHABLE;
L635:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
l25=si0;
si1=l20;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si0=si0 < si1;
if(si0){
goto L640;
}
si0=l25;
si1=l21;
si2=1944168U;
f663(i,si0,si1,si2);
UNREACHABLE;
L640:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l26=si0;
if(si0){
goto L645;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1870096U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l20;
si2=l3;
si3=768U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l20=si0;
goto L644;
L645:;
si0=l3;
si1=72U;
si0+=si1;
si1=l22;
si2=l21;
si3=l20;
si4=112U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l25;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si5=l26;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L644;
}
si0=l20;
if(si0){
goto L642;
}
goto L643;
L644:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L643;
}
si0=l20;
f7690(i,si0);
L643:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l20=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L641;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l20=si1;
si2=1U;
si3=l20;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L646;
}
si0=l21;
si1=56U;
si0+=si1;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L646:;
si0=l21;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L647;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
L647:;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l22;
if(si0){
goto L648;
}
si0=l21;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L648:;
si0=l20;
if(si0){
goto L642;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l2;
si0=f13664(i,si0,si1,si2);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L642:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L649;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L649:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L641:;
si0=l7;
si1=l20;
si2=1944184U;
f663(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l20=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L650;
}
si0=l7;
si1=l20;
si2=1944152U;
f663(i,si0,si1,si2);
UNREACHABLE;
L650:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l21=si1;
si2=1U;
si3=l21;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L651;
}
si0=l20;
si1=56U;
si0+=si1;
sj1=l27;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L651:;
si0=l20;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L652;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
L652:;
si0=l20;
si1=0U;
si2=l20;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l22;
if(si0){
goto L653;
}
si0=l20;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L653:;
si0=l21;
si0=!(si0);
if(si0){
goto L655;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L654;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L655:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l2;
si0=f13664(i,si0,si1,si2);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L654:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L656;
}
si0=l7;
si1=l21;
si2=1944136U;
f663(i,si0,si1,si2);
UNREACHABLE;
L656:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l3;
si1=l20;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si2=i32_load(&i->m0,(U64)si2);
si3=l20;
si4=l2;
f7730(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L658;
}
si0=l20;
if(si0){
goto L657;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1944872U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2024U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+728U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l20;
si0=f7575(i,si0,si1,si2);
l20=si0;
L658:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L657:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L659;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L659:;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L55:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L660;
}
si0=l7;
si1=l21;
si2=1944120U;
f663(i,si0,si1,si2);
UNREACHABLE;
L660:;
si0=l20;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
if(si0){
goto L663;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1870096U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=1843U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l20;
si2=l3;
si3=768U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l26=si0;
goto L662;
L663:;
si0=l3;
si1=56U;
si0+=si1;
si1=l21;
si2=l20;
si3=l24;
si4=l2;
si5=l22;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L662;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L664;
}
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
goto L661;
L664:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L662:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
l21=si1;
si0=si0 == si1;
if(si0){
goto L667;
}
si0=l21;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l21;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
L668:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L666;
}
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=l25;
si0=si0 != si1;
if(si0){
goto L668;
}
}
L667:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=l21;
si2=i32_load(&i->m0,(U64)si2);
si3=l24;
si4=l2;
f7730(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L669;
}
si0=l20;
if(si0){
goto L665;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1944872U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=2024U;
i32_store(&i->m0,(U64)si0+756U,si1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+752U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+728U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l3;
si2=768U;
si1+=si2;
si2=l20;
si0=f7575(i,si0,si1,si2);
l20=si0;
L669:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l26;
f7690(i,si0);
goto L6;
L666:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L665:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L670;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L670:;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L661;
}
si0=l26;
f7690(i,si0);
L661:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L54:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si0=si0 >= si1;
if(si0){
goto L671;
}
si0=l20;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f13665(i,si0,si1);
l20=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=1U;
l20=si0;
si0=l21;
si1=0U;
si2=l21;
si2=i32_load8_u(&i->m0,(U64)si2);
l22=si2;
si3=l22;
si4=1U;
si3=si3 == si4;
l22=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l22;
if(si0){
goto L6;
}
si0=l21;
si1=0U;
f1440(i,si0,si1);
goto L6;
L671:;
si0=l7;
si1=l22;
si2=1944888U;
f663(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l7;
si1=l20;
si2=1944104U;
f663(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l1;
si1=l2;
si2=0U;
si0=f13666(i,si0,si1,si2);
l20=si0;
si0=!(si0);
if(si0){
goto L672;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L672:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L673;
}
si0=l7;
si1=l21;
si2=1944088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L673:;
si0=l1;
si1=l2;
si2=l20;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13666(i,si0,si1,si2);
l20=si0;
si0=!(si0);
if(si0){
goto L674;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L674:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L49:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=0U;
l20=si0;
goto L6;
L48:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L678;
}
si0=l21;
si1=2U;
si0<<=(si1&31);
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=576U;
si0+=si1;
si1=l2;
si2=l20;
si3=l2;
si4=88U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=632U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7602(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+580U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+576U);
if(si0){
goto L681;
}
si0=l21;
l25=si0;
si0=l21;
sj0=i64_load(&i->m0,(U64)si0+8U);
l27=sj0;
sj1=-5063891382290364191ULL;
sj0^=sj1;
si1=l21;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L679;
}
si0=l3;
si1=568U;
si0+=si1;
si1=l2;
si2=l21;
si3=l2;
si4=88U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=644U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f7602(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+572U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+568U);
si0=!(si0);
if(si0){
goto L679;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L680;
}
si0=l21;
f7690(i,si0);
goto L680;
L681:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
L680:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L675;
L679:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l26=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L677;
}
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=l26;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
sj0=l27;
sj1=-5063891382290364191ULL;
sj0^=sj1;
sj1=l28;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L676;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L676;
}
si0=l21;
f7690(i,si0);
goto L676;
L678:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L677:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L676:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L675:;
si0=l20;
f7690(i,si0);
goto L7;
L47:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l29=si0;
si1=l7;
si0-=si1;
l21=si0;
si0=l29;
si1=l7;
si0=si0 < si1;
if(si0){
goto L682;
}
si0=1U;
l20=si0;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L683;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=0U;
l21=si0;
si0=l7;
si1=1U;
si0>>=(si1&31);
l33=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L684;
}
si0=l30;
si1=l29;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l21=si0;
si0=0U;
l26=si0;
si0=0U;
si1=l7;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l24=si0;
si0=l23;
l25=si0;
L685:;
{
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si0=l25;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
sj1=l27;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l21;
si1=-8U;
si0+=si1;
l21=si0;
si0=l24;
si1=l26;
si2=-2U;
si1+=si2;
l26=si1;
si0=si0 != si1;
if(si0){
goto L685;
}
}
si0=0U;
si1=l26;
si0-=si1;
l21=si0;
L684:;
si0=l22;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L683;
}
si0=l23;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l22;
si1=l30;
si2=l29;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l33;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si2=l33;
si3=l21;
si4=-1U;
si3^=si4;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
L683:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L682:;
si0=l21;
si1=l29;
si2=1944752U;
f675(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L687;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l21;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L687;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si0=si0 <= si1;
if(si0){
goto L688;
}
si0=l20;
si1=l21;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l22;
si1=l21;
si0-=si1;
l22=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L689:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L690;
}
si0=l21;
f7690(i,si0);
L690:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L689;
}
}
L688:;
si0=l26;
si1=9U;
si0=si0 == si1;
if(si0){
goto L691;
}
si0=l1;
si1=1944712U;
si2=38U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L691:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L686;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l20=si0;
si0=l2;
si1=l24;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l20;
si0=!(si0);
if(si0){
goto L692;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L692;
}
si0=l20;
f7690(i,si0);
L692:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L687:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L686:;
si0=1673219U;
si1=16U;
si2=l3;
si3=744U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L45:;
si0=l22;
si1=-97U;
si0+=si1;
l20=si0;
si1=18U;
si0=si0 > si1;
if(si0){
goto L694;
}
si0=1U;
si1=l20;
si0<<=(si1&31);
si1=393217U;
si0&=si1;
if(si0){
goto L693;
}
L694:;
si0=l22;
si1=255U;
si0=si0 == si1;
if(si0){
goto L693;
}
si0=1939080U;
si1=43U;
si2=1944444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L693:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l22;
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L698;
case 1:
goto L44;
case 2:
goto L44;
case 3:
goto L44;
case 4:
goto L44;
case 5:
goto L44;
case 6:
goto L44;
case 7:
goto L44;
case 8:
goto L44;
case 9:
goto L44;
case 10:
goto L44;
case 11:
goto L44;
case 12:
goto L44;
case 13:
goto L44;
case 14:
goto L44;
case 15:
goto L44;
case 16:
goto L44;
case 17:
goto L697;
case 18:
goto L699;
default:
goto L700;
}
L700:;
si0=l25;
si0=!(si0);
if(si0){
goto L39;
}
si0=0U;
l26=si0;
si0=l21;
l22=si0;
goto L37;
L699:;
si0=l3;
si1=504U;
si0+=si1;
si1=l21;
si2=l2;
f8205(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+508U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+504U);
si0=!(si0);
if(si0){
goto L696;
}
goto L38;
L698:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l3;
si1=512U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l21;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+516U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+512U);
if(si0){
goto L704;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l22;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2127(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+816U);
l35=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l26=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l25=si0;
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L705;
}
si0=l22;
f7690(i,si0);
L705:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 == si1;
if(si0){
goto L703;
}
goto L702;
L704:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l29=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l25=si0;
si0=l22;
l26=si0;
si0=l29;
si1=1U;
si0=si0 != si1;
if(si0){
goto L701;
}
L703:;
si0=l21;
f7690(i,si0);
L702:;
si0=l25;
if(si0){
goto L695;
}
si0=l26;
l22=si0;
L701:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L697:;
si0=l3;
si1=520U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l21;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+524U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+520U);
if(si0){
goto L38;
}
L696:;
si0=1U;
l26=si0;
goto L40;
L695:;
si0=l35;
si1=l26;
si0=si0 >= si1;
if(si0){
goto L706;
}
si0=l35;
if(si0){
goto L707;
}
si0=l25;
f15271(i,si0);
si0=1U;
l25=si0;
goto L706;
L707:;
si0=l25;
si1=l35;
si0=f15274(i,si0,si1);
l25=si0;
si0=!(si0);
if(si0){
goto L42;
}
L706:;
si0=l24;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+824U,sj1);
si0=l3;
si1=l35;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=0U;
l26=si0;
si0=l3;
si1=808U;
si0+=si1;
si1=l22;
si2=0U;
si0=f8078(i,si0,si1,si2);
l22=si0;
goto L40;
L44:;
UNREACHABLE;
L43:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1U;
si1=l35;
f52(i,si0,si1);
UNREACHABLE;
L41:;
f15042(i);
UNREACHABLE;
L40:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
if(si0){
goto L37;
}
L39:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L36;
L37:;
si0=l20;
si1=l25;
si2=-1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l25;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L708;
}
si0=l3;
si1=496U;
si0+=si1;
si1=l2;
si2=l22;
si3=l25;
f7618(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+500U);
l25=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+496U);
if(si0){
goto L710;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0+8U);
l24=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L709;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l24;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l24;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L711;
}
si0=l22;
f7690(i,si0);
L711:;
si0=l26;
si0=!(si0);
if(si0){
goto L7;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L35;
L710:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L712;
}
si0=l22;
f7690(i,si0);
L712:;
si0=l26;
if(si0){
goto L36;
}
goto L7;
L709:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L708:;
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=808U;
si2+=si3;
si3=1944768U;
si4=1946292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L36:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L35:;
si0=l21;
f7690(i,si0);
goto L7;
L34:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+724U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si0=!(si0);
if(si0){
goto L713;
}
si0=l24;
si1=l20;
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=728U;
si0+=si1;
si1=l2;
si2=l24;
si2=i32_load(&i->m0,(U64)si2);
si3=l20;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l29=si2;
si3=l2;
f7591(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+732U);
l30=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+728U);
l26=si0;
if(si0){
goto L718;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l30;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L720;
}
si0=l30;
l20=si0;
goto L719;
L720:;
si0=l3;
si1=768U;
si0+=si1;
si1=l29;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1946276U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=l3;
si2=744U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
switch(si0){
case 0:
goto L721;
case 1:
goto L724;
case 2:
goto L723;
case 3:
goto L722;
default:
goto L725;
}
L725:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L721;
}
si0=l20;
f1433(i,si0);
goto L721;
L724:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l20=si0;
si1=0U;
si2=l20;
si2=i32_load8_u(&i->m0,(U64)si2);
l21=si2;
si3=l21;
si4=1U;
si3=si3 == si4;
l21=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l21;
if(si0){
goto L721;
}
si0=l20;
si1=0U;
f1440(i,si0,si1);
goto L721;
L723:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l20=si0;
si1=0U;
si2=l20;
si2=i32_load8_u(&i->m0,(U64)si2);
l21=si2;
si3=l21;
si4=1U;
si3=si3 == si4;
l21=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l21;
if(si0){
goto L721;
}
si0=l20;
si1=0U;
f1440(i,si0,si1);
goto L721;
L722:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L721;
}
si0=l20;
f1433(i,si0);
L721:;
si0=l3;
si1=808U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=752U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+752U);
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l20;
si2=l3;
si3=808U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l20=si0;
si0=l30;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L719;
}
si0=l30;
f7690(i,si0);
L719:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L717;
L718:;
si0=-1U;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+736U);
l22=si1;
si2=l7;
si1=si1 != si2;
si2=l22;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L726;
case 1:
goto L716;
default:
goto L727;
}
L727:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1946164U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
goto L715;
L726:;
si0=l22;
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l24;
si1=i32_load(&i->m0,(U64)si1+4U);
l33=si1;
si0=si0 != si1;
if(si0){
goto L730;
}
si0=l26;
si1=l20;
si0+=si1;
l23=si0;
goto L729;
L730:;
si0=l33;
si1=2U;
si0<<=(si1&31);
si1=l22;
si2=2U;
si1<<=(si2&31);
l21=si1;
si0-=si1;
l25=si0;
si0=l24;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si0+=si1;
l21=si0;
L731:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L728;
}
si0=l21;
si1=l20;
si2=-4U;
si1+=si2;
l20=si1;
si2=l26;
si1+=si2;
l23=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0+=si1;
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l25;
si1=-4U;
si0+=si1;
l25=si0;
if(si0){
goto L731;
}
}
si0=l22;
l33=si0;
L729:;
si0=l23;
si1=l26;
si0=si0 == si1;
if(si0){
goto L732;
}
si0=l23;
si1=l26;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l22=si0;
si0=l26;
l20=si0;
L733:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L734;
}
si0=l21;
f7690(i,si0);
L734:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L733;
}
}
L732:;
si0=l33;
l22=si0;
L728:;
si0=l30;
si0=!(si0);
if(si0){
goto L735;
}
si0=l26;
f15271(i,si0);
L735:;
si0=l24;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
L717:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L714;
}
goto L7;
L716:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1946224U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l3;
si1=l3;
si2=768U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=724U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
L715:;
si0=l3;
si1=808U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=752U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+752U);
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=l2;
si2=l20;
si3=l3;
si4=808U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si0=!(si0);
if(si0){
goto L736;
}
si0=l26;
l20=si0;
L737:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L738;
}
si0=l21;
f7690(i,si0);
L738:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L737;
}
}
L736:;
si0=l30;
si0=!(si0);
if(si0){
goto L739;
}
si0=l26;
f15271(i,si0);
L739:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L714:;
si0=l29;
f7690(i,si0);
goto L7;
L713:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si0=!(si0);
if(si0){
goto L743;
}
si0=l20;
si1=l21;
si2=-1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
l25=si0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=480U;
si0+=si1;
si1=l25;
si2=l26;
si3=1208U;
si2+=si3;
si3=1946092U;
si4=11U;
si5=l20;
si2=f12275(i,si2,si3,si4,si5);
si3=l2;
f7735(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+484U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+480U);
si0=!(si0);
if(si0){
goto L745;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=20U;
si0=f15269(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L742;
}
si0=l22;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1946119U);
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1946111U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1946103U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=85899345940ULL;
i64_store(&i->m0,(U64)si0+812U,sj1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l25;
si2=l3;
si3=808U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l22=si0;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L746;
}
si0=l20;
f7690(i,si0);
L746:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L744;
}
goto L7;
L745:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L741;
}
si0=l22;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+860U,sj1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=0U;
si0=f5566(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L740;
}
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+844U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+836U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+828U,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l3;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
sj1=l27;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l3;
si1=472U;
si0+=si1;
si1=l20;
si2=l3;
si3=808U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+476U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+472U);
if(si0){
goto L747;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L748;
}
si0=l21;
f7690(i,si0);
L748:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
l21=si0;
si0=l22;
si1=1U;
si0=si0 == si1;
if(si0){
goto L744;
}
goto L7;
L747:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
l21=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L744:;
si0=l21;
f7690(i,si0);
goto L7;
L743:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L742:;
si0=1U;
si1=20U;
f52(i,si0,si1);
UNREACHABLE;
L741:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L740:;
si0=1914132U;
si1=70U;
si2=l3;
si3=744U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L32:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L751;
}
si0=l20;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l20;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l22;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l21;
si2=0U;
si0=f8146(i,si0,si1,si2);
l25=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l7;
si0-=si1;
l22=si0;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L752;
}
si0=l20;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+776U,si1);
si0=l3;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=l22;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+780U,si1);
si0=l3;
si1=l26;
si2=l21;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L753;
}
si0=l25;
si1=56U;
si0+=si1;
l26=si0;
L754:;
{
si0=l3;
si1=l20;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l29;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L750;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l29;
si2=56U;
si1+=si2;
l24=si1;
si2=0U;
f13636(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l20=si0;
si0=!(si0);
if(si0){
goto L755;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+812U);
l27=sj0;
L758:;
{
si0=l3;
si1=752U;
si0+=si1;
si1=l20;
si2=l2;
f7746(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
if(si0){
goto L761;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l26;
si2=l2;
si3=l20;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+760U);
f13617(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
si0=!(si0);
if(si0){
goto L759;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l6=si0;
goto L760;
L761:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l6=si0;
L760:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=1852761U;
si1=43U;
si2=l3;
si3=808U;
si2+=si3;
si3=1852804U;
si4=1852844U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L759:;
sj0=l27;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+816U);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L762;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L764;
}
si0=l25;
si1=l20;
si2=l21;
si3=l2;
si0=f7727(i,si0,si1,si2,si3);
l21=si0;
si0=!(si0);
if(si0){
goto L763;
}
goto L757;
L764:;
si0=l26;
si1=l2;
si2=l20;
si3=l21;
si0=f13616(i,si0,si1,si2,si3);
l21=si0;
if(si0){
goto L757;
}
L763:;
sj0=l27;
si0=(U32)(sj0);
l21=si0;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L765;
}
si0=l20;
f7690(i,si0);
L765:;
si0=l3;
si1=808U;
si0+=si1;
si1=l24;
si2=l21;
f13636(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+812U);
l27=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l20=si0;
if(si0){
goto L758;
}
goto L755;
L762:;
}
si0=l3;
si1=464U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l20;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+468U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+464U);
si0=!(si0);
if(si0){
goto L767;
}
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L766;
L767:;
si0=l3;
si1=1945388U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l3;
si1=l22;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+728U,sj1);
si0=l3;
si1=l3;
si2=744U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l3;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=752U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l26;
si2=l3;
si3=752U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l26=si0;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l22;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L766;
}
si0=l22;
f7690(i,si0);
L766:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L756;
}
si0=l21;
f7690(i,si0);
goto L756;
L757:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
L756:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L768;
}
si0=l20;
f7690(i,si0);
L768:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L749;
}
si0=l29;
f7690(i,si0);
goto L749;
L755:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L769;
}
si0=l29;
f7690(i,si0);
L769:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l20=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+772U);
si0=si0 != si1;
if(si0){
goto L754;
}
}
L753:;
si0=l3;
si1=768U;
si0+=si1;
f9887(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L770;
}
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L770:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L752:;
si0=l22;
si1=l21;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L751:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L750:;
si0=l3;
si1=752U;
si0+=si1;
si1=l29;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=1945424U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+820U,sj1);
si0=l3;
si1=l3;
si2=752U;
si1+=si2;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l3;
si1=l3;
si2=744U;
si1+=si2;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=728U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+752U);
switch(si0){
case 0:
goto L771;
case 1:
goto L774;
case 2:
goto L773;
case 3:
goto L772;
default:
goto L775;
}
L775:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L771;
}
si0=l20;
f1433(i,si0);
goto L771;
L774:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l20=si0;
si1=0U;
si2=l20;
si2=i32_load8_u(&i->m0,(U64)si2);
l21=si2;
si3=l21;
si4=1U;
si3=si3 == si4;
l21=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l21;
if(si0){
goto L771;
}
si0=l20;
si1=0U;
f1440(i,si0,si1);
goto L771;
L773:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l20=si0;
si1=0U;
si2=l20;
si2=i32_load8_u(&i->m0,(U64)si2);
l21=si2;
si3=l21;
si4=1U;
si3=si3 == si4;
l21=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l21;
if(si0){
goto L771;
}
si0=l20;
si1=0U;
f1440(i,si0,si1);
goto L771;
L772:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+756U);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L771;
}
si0=l20;
f1433(i,si0);
L771:;
si0=l3;
si1=808U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=728U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+728U);
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l2;
si1=l3;
si2=808U;
si1+=si2;
si0=f7418(i,si0,si1);
l20=si0;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L776;
}
si0=l29;
f7690(i,si0);
L776:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+588U,si1);
L749:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l20=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+772U);
si0=si0 == si1;
if(si0){
goto L777;
}
L778:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l20;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L779;
}
si0=l21;
f7690(i,si0);
L779:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l20=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+772U);
si0=si0 != si1;
if(si0){
goto L778;
}
}
L777:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+784U);
l20=si0;
si0=!(si0);
if(si0){
goto L780;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+776U);
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+8U);
l26=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+780U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l20;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l21;
si1=l26;
si2=l20;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L780:;
si0=l25;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l25;
f7690(i,si0);
goto L7;
L31:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l21=si0;
si0=!(si0);
if(si0){
goto L784;
}
si0=l21;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l21;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l26;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l25;
si2=0U;
si0=f8146(i,si0,si1,si2);
l26=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l7;
si2=1U;
si1<<=(si2&31);
l21=si1;
si0-=si1;
l24=si0;
si0=l25;
si1=l21;
si0=si0 < si1;
if(si0){
goto L783;
}
si0=l29;
si1=l24;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l21;
si0=!(si0);
if(si0){
goto L781;
}
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=0U;
si1=l22;
si2=3U;
si1<<=(si2&31);
si2=l20;
si3=11U;
si2<<=(si3&31);
si1|=si2;
si0-=si1;
l22=si0;
si0=l26;
si1=56U;
si0+=si1;
l30=si0;
si0=l21;
si1=l24;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L785:;
{
si0=l25;
si1=l22;
si0+=si1;
l29=si0;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l20;
si1=4U;
si0+=si1;
si1=l25;
si0=si0 != si1;
if(si0){
goto L786;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L781;
}
si0=l21;
f7690(i,si0);
goto L781;
L786:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L788;
}
si0=l26;
si1=l21;
si2=l24;
si3=l2;
si0=f7727(i,si0,si1,si2,si3);
l24=si0;
si0=!(si0);
if(si0){
goto L787;
}
goto L782;
L788:;
si0=l30;
si1=l2;
si2=l21;
si3=l24;
si0=f13616(i,si0,si1,si2,si3);
l24=si0;
if(si0){
goto L782;
}
L787:;
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1U;
si0=si0 != si1;
if(si0){
goto L789;
}
si0=l21;
f7690(i,si0);
L789:;
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si0=l20;
si1=l25;
si0=si0 != si1;
if(si0){
goto L785;
}
goto L781;
}
L784:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L783:;
si0=l24;
si1=l25;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L782:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L790;
}
si0=l21;
f7690(i,si0);
L790:;
si0=-8U;
l25=si0;
si0=l22;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L791;
}
si0=l29;
si1=8U;
si0+=si1;
l20=si0;
L792:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1U;
si0=si0 != si1;
if(si0){
goto L793;
}
si0=l21;
f7690(i,si0);
L793:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l22;
si1=l25;
si2=-4U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L792;
}
}
L791:;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l26;
f7690(i,si0);
goto L6;
L781:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L794;
}
si0=1U;
l20=si0;
si0=l21;
si1=l22;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L794:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si1=f14704(i,si1);
l24=si1;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l7;
si0-=si1;
l26=si0;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L795;
}
si0=l25;
si1=l26;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L798;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=0U;
si1=l22;
si2=2U;
si1<<=(si2&31);
si2=l20;
si3=10U;
si2<<=(si3&31);
si1|=si2;
si0-=si1;
l20=si0;
L799:;
{
si0=l3;
si1=808U;
si0+=si1;
si1=l2;
si2=l25;
si3=l20;
si2+=si3;
l26=si2;
si2=i32_load(&i->m0,(U64)si2);
l21=si2;
si3=l3;
si4=768U;
si3+=si4;
si4=l2;
f7638(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
if(si0){
goto L796;
}
si0=l22;
si0=!(si0);
if(si0){
goto L797;
}
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L800;
}
si0=l21;
f7690(i,si0);
L800:;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
if(si0){
goto L799;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l24=si0;
L798:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L801;
}
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l21;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L801:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L797:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+816U);
si0=(U32)(sj0);
l22=si0;
L796:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L802;
}
si0=l21;
f7690(i,si0);
L802:;
si0=-4U;
l25=si0;
si0=l20;
si1=-4U;
si0=si0 == si1;
if(si0){
goto L803;
}
si0=l26;
si1=4U;
si0+=si1;
l21=si0;
L804:;
{
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1U;
si0=si0 != si1;
if(si0){
goto L805;
}
si0=l22;
f7690(i,si0);
L805:;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l20;
si1=l25;
si2=-4U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L804;
}
}
L803:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l21;
f7690(i,si0);
goto L6;
L795:;
si0=l26;
si1=l21;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l24;
f7690(i,si0);
L28:;
si0=l29;
si0=!(si0);
if(si0){
goto L26;
}
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
l24=si0;
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
L27:;
si0=l24;
f7690(i,si0);
L26:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L25:;
si0=l22;
f7690(i,si0);
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+812U);
l21=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
switch(si0){
case 0:
goto L807;
case 1:
goto L806;
case 2:
goto L808;
default:
goto L807;
}
L808:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L807:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=-1U;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L23;
L806:;
si0=l21;
if(si0){
goto L809;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
L809:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l20;
si1=l22;
si2=-1U;
si1+=si2;
l22=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=l22;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L810;
}
si0=l20;
f7690(i,si0);
L810:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l22;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L811;
}
si0=1U;
l20=si0;
si0=l22;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L811:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1U;
l20=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L22:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l25;
f7690(i,si0);
si0=1U;
l21=si0;
L20:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
L19:;
si0=l20;
f7690(i,si0);
L18:;
si0=l21;
if(si0){
goto L813;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l25=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L812;
}
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
si1=l25;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l20=si0;
si0=l21;
si1=l25;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L6;
L813:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+588U,si1);
goto L7;
L812:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L814;
}
si0=l20;
f1433(i,si0);
L814:;
si0=l3;
si1=8U;
si0+=si1;
si1=l29;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=624U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f7720(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L819;
}
si0=l3;
si1=768U;
si0+=si1;
si1=l2;
si2=l20;
si3=l2;
f7637(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+772U);
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l21=si0;
si0=!(si0);
if(si0){
goto L820;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+776U);
l25=si0;
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+816U,si1);
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+812U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+808U,si1);
si0=l3;
si1=l21;
si2=l25;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+820U,si1);
si0=l3;
si1=768U;
si0+=si1;
si1=l3;
si2=808U;
si1+=si2;
f11185(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l33=si0;
si0=!(si0);
if(si0){
goto L815;
}
si0=l33;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+768U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=8U;
si0+=si1;
si1=l3;
si2=768U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1945228U;
l32=si0;
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L818;
}
goto L817;
L820:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L821;
}
si0=l20;
f7690(i,si0);
L821:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L816;
}
goto L13;
L819:;
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l33=si0;
si0=1945252U;
l32=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L817;
}
L818:;
si0=l20;
f7690(i,si0);
L817:;
si0=l3;
si1=768U;
si0+=si1;
si1=l29;
si2=56U;
si1+=si2;
l36=si1;
si2=0U;
f13636(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l26=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+772U);
l27=sj0;
L822:;
{
sj0=l27;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l30=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si1=l26;
si1=i32_load(&i->m0,(U64)si1+28U);
l21=si1;
si0=si0 == si1;
if(si0){
goto L830;
}
si0=l21;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l20=si0;
si0=l21;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
L831:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L829;
}
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l21;
si1=4U;
si0+=si1;
l21=si0;
si0=l22;
si1=l25;
si0=si0 != si1;
if(si0){
goto L831;
}
}
L830:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l26;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L832;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l37;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l25;
si5=l26;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l20=si0;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L828;
}
goto L827;
L832:;
si0=l33;
si1=l26;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l26;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l32;
si3=i32_load(&i->m0,(U64)si3+20U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L834;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l20;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l26;
si3=l30;
si4=l2;
si0=f11107(i,si0,si1,si2,si3,si4);
l20=si0;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
if(si0){
goto L833;
}
si0=l26;
l30=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L823;
}
goto L824;
L834:;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L835;
}
si0=l26;
f7690(i,si0);
L835:;
si0=l30;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L824;
}
goto L823;
L833:;
si0=l26;
l30=si0;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L825;
}
goto L826;
L829:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l37;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l25;
si5=l26;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l20=si0;
si0=l26;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L827;
}
L828:;
si0=l26;
f7690(i,si0);
L827:;
si0=l30;
si1=l30;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L825;
}
L826:;
si0=l30;
f7690(i,si0);
L825:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L836;
}
si0=l29;
f7690(i,si0);
L836:;
si0=l33;
si1=l32;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l32;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L837;
}
si0=l33;
f15271(i,si0);
L837:;
si0=l20;
l23=si0;
goto L12;
L824:;
si0=l30;
f7690(i,si0);
L823:;
si0=l3;
si1=768U;
si0+=si1;
si1=l36;
sj2=l27;
si2=(U32)(sj2);
f13636(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+772U);
l27=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+768U);
l26=si0;
if(si0){
goto L822;
}
goto L15;
}
L816:;
si0=l29;
f7690(i,si0);
goto L13;
L815:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L16:;
f15042(i);
UNREACHABLE;
L15:;
si0=l29;
si1=l29;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L838;
}
si0=l29;
f7690(i,si0);
L838:;
si0=l33;
si1=l32;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l32;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l33;
f15271(i,si0);
L14:;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L9;
L13:;
si0=l22;
l23=si0;
L12:;
si0=l24;
si1=l24;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
L11:;
si0=l24;
f7690(i,si0);
L10:;
si0=l23;
if(si0){
goto L8;
}
L9:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+584U,si1);
goto L7;
L8:;
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+584U,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+588U,si1);
L7:;
si0=1U;
l20=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+584U);
l21=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L839;
}
si0=l21;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=808U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+588U);
si3=l6;
si4=l2;
f13667(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+808U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L839;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+812U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L839:;
si0=l1;
si1=36U;
si0+=si1;
l21=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l7;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
}
L4:;
si0=l6;
si1=l7;
si2=1943780U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+588U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+812U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=880U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13652(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=36U;
si0+=si1;
l5=si0;
L2:;
{
si0=0U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=-16U;
si0+=si1;
l6=si0;
L3:;
si0=l4;
si1=l6;
f14677(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l9;
si1=-5U;
si0+=si1;
l12=si0;
si1=3U;
si2=l12;
si3=5U;
si2=si2 < si3;
l13=si2;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L47;
case 1:
goto L46;
case 2:
goto L45;
case 3:
goto L40;
case 4:
goto L41;
default:
goto L47;
}
L48:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L37;
default:
goto L39;
}
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L43;
case 1:
goto L42;
default:
goto L44;
}
L46:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L49;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L50:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l6;
f7690(i,si0);
L51:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l10;
si1=-5U;
si0+=si1;
l7=si0;
si1=3U;
si2=l7;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L52;
default:
goto L53;
}
L53:;
si0=l15;
si0=!(si0);
if(si0){
goto L13;
}
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L14;
L52:;
si0=l10;
switch(si0){
case 0:
goto L55;
case 1:
goto L54;
default:
goto L15;
}
L55:;
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L16;
L54:;
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L15;
L45:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L56;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L57:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l6;
f7690(i,si0);
L58:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L57;
}
}
L56:;
si0=l10;
si1=-5U;
si0+=si1;
l7=si0;
si1=3U;
si2=l7;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L17;
case 2:
goto L17;
case 3:
goto L59;
default:
goto L60;
}
L60:;
si0=l13;
si0=!(si0);
if(si0){
goto L17;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L18;
L59:;
si0=l10;
switch(si0){
case 0:
goto L62;
case 1:
goto L61;
default:
goto L19;
}
L62:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L20;
L61:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L44:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L63;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L64:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l6;
f7690(i,si0);
L65:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L64;
}
}
L63:;
si0=l10;
si1=-5U;
si0+=si1;
l7=si0;
si1=3U;
si2=l7;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L12;
case 2:
goto L12;
case 3:
goto L66;
default:
goto L67;
}
L67:;
si0=l15;
si0=!(si0);
if(si0){
goto L12;
}
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L21;
L66:;
si0=l10;
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
default:
goto L22;
}
L69:;
si0=l15;
si1=l15;
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
goto L23;
L68:;
si0=l15;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
goto L22;
L43:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L70;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L71:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l6;
f7690(i,si0);
L72:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l2;
si1=-5U;
si0+=si1;
l7=si0;
si1=3U;
si2=l7;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L24;
case 2:
goto L24;
case 3:
goto L73;
default:
goto L74;
}
L74:;
si0=l10;
si0=!(si0);
if(si0){
goto L24;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L25;
L73:;
si0=l2;
switch(si0){
case 0:
goto L76;
case 1:
goto L75;
default:
goto L26;
}
L76:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
goto L27;
L75:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L27;
}
goto L26;
L42:;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L41:;
si0=l11;
l10=si0;
L40:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L77;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L78:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=l6;
f7690(i,si0);
L79:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l15;
si1=-5U;
si0+=si1;
l7=si0;
si1=3U;
si2=l7;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L28;
case 2:
goto L28;
case 3:
goto L80;
default:
goto L81;
}
L81:;
si0=l14;
si0=!(si0);
if(si0){
goto L28;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L29;
L80:;
si0=l15;
switch(si0){
case 0:
goto L83;
case 1:
goto L82;
default:
goto L30;
}
L83:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L31;
L82:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L31;
}
goto L30;
L39:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L38:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L37:;
si0=l1;
si1=1945276U;
si2=49U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=1946356U;
si1=22U;
si2=1946380U;
f703(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l14;
f7690(i,si0);
L30:;
si0=l17;
si0=!(si0);
if(si0){
goto L28;
}
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
l14=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
L29:;
si0=l14;
f7690(i,si0);
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L84;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l7=si0;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
f7690(i,si0);
goto L12;
L84:;
si0=1673219U;
si1=16U;
si2=l4;
si3=24U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l10;
f7690(i,si0);
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l10=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
L25:;
si0=l10;
f7690(i,si0);
L24:;
si0=l1;
si1=36U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L23:;
si0=l15;
f7690(i,si0);
L22:;
si0=l14;
si0=!(si0);
if(si0){
goto L12;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
l15=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
L21:;
si0=l15;
f7690(i,si0);
goto L12;
L20:;
si0=l13;
f7690(i,si0);
L19:;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l13=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l13;
f7690(i,si0);
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l6;
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
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=-1U;
si0+=si1;
l7=si0;
L87:;
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l8;
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
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L85;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l7=si0;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L88;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l7;
f7690(i,si0);
L88:;
si0=l1;
si1=36U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L89;
}
si0=l7;
si1=12U;
si0+=si1;
si1=l16;
f7268(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l16=si0;
L89:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l16;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l16;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l16;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L86:;
si0=1673168U;
si1=24U;
si2=l4;
si3=24U;
si2+=si3;
si3=1673284U;
si4=1688008U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L85:;
si0=1673219U;
si1=16U;
si2=l4;
si3=24U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l15;
f7690(i,si0);
L15:;
si0=l14;
si0=!(si0);
if(si0){
goto L13;
}
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
l15=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
L14:;
si0=l15;
f7690(i,si0);
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=l9;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l13;
si1=l12;
si2=3U;
si1=si1 != si2;
si0&=si1;
if(si0){
goto L2;
}
si0=l9;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L2;
}
L11:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l8=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l8;
si1=l8;
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
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=-1U;
si0+=si1;
l7=si0;
L90:;
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L91;
}
si0=l7;
si1=12U;
si0+=si1;
si1=l16;
f7268(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l16=si0;
L91:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l16;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l16;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si2=20U;
si1+=si2;
f7649(i,si0,si1);
si0=l6;
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
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L7;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l7=si0;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L92;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=l7;
f7690(i,si0);
L92:;
si0=l1;
si1=36U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L93;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L93:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=l11;
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
goto L5;
L9:;
si0=l11;
si1=l11;
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
goto L5;
L8:;
si0=1673168U;
si1=24U;
si2=l4;
si3=24U;
si2+=si3;
si3=1673284U;
si4=1688008U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=1673219U;
si1=16U;
si2=l4;
si3=24U;
si2+=si3;
si3=1673236U;
si4=1688024U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l11;
f7690(i,si0);
goto L2;
L4:;
}
si0=l9;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l12;
si1=5U;
si0=si0 < si1;
si1=l12;
si2=3U;
si1=si1 != si2;
si0&=si1;
if(si0){
goto L1;
}
si0=l9;
switch(si0){
case 0:
goto L96;
case 1:
goto L95;
default:
goto L1;
}
L96:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L94;
L95:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L94:;
si0=l11;
f7690(i,si0);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13653(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=6721U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1946488U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
f15029(i,si0);
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1946504U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=1946512U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13654(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l5;
si1=l2;
si0-=si1;
l8=si0;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l9=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l6;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l7;
si3=l5;
si2-=si3;
si3=2U;
si2>>=(si3&31);
si3=l1;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si2-=si3;
f11247(i,si0,si1,si2);
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l4;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l3;
si2=32U;
si1+=si2;
f10598(i,si0,si1);
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
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1945440U;
si1=38U;
si2=l3;
si3=32U;
si2+=si3;
si3=1944768U;
si4=1945480U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=l5;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13655(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l6;
si2=-2U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l8;
si2=-1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l10;
f7690(i,si0);
goto L2;
L8:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
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
L10:;
{
si0=l5;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L2;
L11:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
}
L9:;
si0=l10;
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
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=l10;
si3=l5;
si4=l3;
si5=l8;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
si0=0U;
l5=si0;
goto L2;
L12:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l10;
l5=si0;
L14:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L15;
}
si0=l6;
f7690(i,si0);
L15:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
f15271(i,si0);
L16:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L17:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l10;
l5=si0;
L19:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L21;
}
si0=l6;
f7690(i,si0);
L21:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
f15271(i,si0);
goto L1;
L6:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l7;
f7690(i,si0);
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l10;
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
goto L22;
L24:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
f7690(i,si0);
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L1;
L23:;
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l10;
f7690(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13656(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=636U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
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
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=56U;
si0+=si1;
l6=si0;
si0=l4;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l4;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2122(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L10:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
si3=l4;
sj4=l7;
f13613(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
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
goto L8;
}
si0=l5;
f7690(i,si0);
sj0=l7;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
goto L7;
L9:;
si0=l4;
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
goto L6;
}
si0=l3;
si1=l2;
si2=l5;
si3=l4;
f7619(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L12:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
goto L1;
L11:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
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
goto L13;
}
si0=l5;
f7690(i,si0);
L13:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L2;
L8:;
sj0=l7;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
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
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
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
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l4;
si2=l3;
si3=8U;
si2+=si3;
si3=l1;
si4=0U;
si2=f8146(i,si2,si3,si4);
si3=l2;
si0=f7723(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1947100U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1938752U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1947132U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1852761U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1852804U;
si4=1852844U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13657(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1945088U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=858993459200ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L1;
}
si0=l1;
f1433(i,si0);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L1;
}
si0=l1;
f1433(i,si0);
L1:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13658(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si0-=si1;
l6=si0;
si0=l5;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=4U;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l3=si0;
L5:;
{
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l7;
si3=l3;
si2+=si3;
si3=-4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l2;
f7591(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=l6;
f7270(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
f15271(i,si0);
L7:;
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
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
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=l7;
si1=l3;
si0+=si1;
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
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L14:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L15;
}
si0=l1;
f7690(i,si0);
L15:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l6;
si1=l5;
si2=1833060U;
f675(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13659(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1944960U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=858993459200ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L1;
}
si0=l1;
f1433(i,si0);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L1;
}
si0=l1;
f1433(i,si0);
L1:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13660(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
f7268(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L0:;
}

void f13661(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L12;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
si0=!(sj0);
if(si0){
goto L14;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972616U);
l5=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972608U);
l6=sj0;
goto L13;
L14:;
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l3=si0;
if(si0){
goto L11;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
L13:;
si0=0U;
l7=si0;
si0=0U;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=1862528U;
l8=si0;
si0=4U;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
goto L2;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l13;
si2=-1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=22U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=14U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945526U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945520U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945512U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=94489280534ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=l13;
si2=l4;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l14;
f7690(i,si0);
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
si0=!(sj0);
if(si0){
goto L18;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972616U);
l5=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972608U);
l6=sj0;
goto L17;
L18:;
si0=l4;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l3=si0;
if(si0){
goto L8;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l5=sj1;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l6=sj0;
L17:;
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l14;
si2=56U;
si1+=si2;
l11=si1;
si2=0U;
f13636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+60U);
l6=sj0;
L20:;
{
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l15=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
l13=si1;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l13;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l13;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
L22:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l13;
si1=4U;
si0+=si1;
l13=si0;
si0=l7;
si1=l9;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L21:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l10;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L24;
}
si0=1U;
l7=si0;
goto L23;
L24:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
L23:;
si0=l7;
si1=l13;
si2=l3;
si0=f15390(i,si0,si1,si2);
l13=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=l4;
si3=56U;
si2+=si3;
si3=l8;
f10599(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
f7690(i,si0);
L25:;
sj0=l6;
si0=(U32)(sj0);
l3=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l10;
f7690(i,si0);
L26:;
si0=l4;
si1=56U;
si0+=si1;
si1=l11;
si2=l3;
f13636(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+60U);
l6=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
if(si0){
goto L20;
}
goto L4;
}
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945550U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945542U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1945534U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=103079215128ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=l13;
si2=l4;
si3=56U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l8;
f7690(i,si0);
L27:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l10;
f7690(i,si0);
L28:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l14;
f7690(i,si0);
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
L32:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l13;
f7690(i,si0);
L34:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L1;
L11:;
si0=l4;
si1=l3;
i32_store16(&i->m0,(U64)si0+56U,si1);
si0=1992240U;
si1=18U;
si2=l4;
si3=56U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1U;
si1=22U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l4;
si1=l3;
i32_store16(&i->m0,(U64)si0+78U,si1);
si0=1992240U;
si1=18U;
si2=l4;
si3=78U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l14;
f7690(i,si0);
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L2;
L3:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
if(si0){
goto L36;
}
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l3;
si1=l14;
si2=-1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si3=l14;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l2;
f7591(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f7690(i,si0);
goto L1;
L37:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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
goto L38;
}
si0=l3;
f7690(i,si0);
L38:;
si0=l13;
si0=!(si0);
if(si0){
goto L39;
}
si0=l8;
si1=l13;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L39:;
si0=l7;
si0=!(si0);
if(si0){
goto L40;
}
si0=l9;
l3=si0;
L41:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l13;
f7690(i,si0);
L43:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
f15271(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13662(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
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
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
si1=l4;
si0^=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l6;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2U;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L6:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=3U;
l6=si0;
goto L1;
L3:;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l6=si0;
goto L1;
L2:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13663(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1944872U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2839U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=16U;
si1+=si2;
si2=l0;
si0=f7575(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13664(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l5;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=404U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L2;
}
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1943976U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si1=l0;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l1;
si1=l4;
si0-=si1;
l1=si0;
si1=l0;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l4;
si2=1943992U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l0;
si2=112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1944072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=2839U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si1=l0;
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
goto L2;
}
si0=l2;
si1=l3;
si2=16U;
si1+=si2;
si2=l0;
si0=f7575(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13665(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=404U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l2;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1943976U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2839U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l1;
si1=l0;
si2=l2;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f13666(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1284U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
f7690(i,si0);
goto L6;
L7:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l6;
f5845(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f9084(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L8;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
si4=l6;
f7564(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
goto L2;
L8:;
si0=l5;
if(si0){
goto L9;
}
si0=l6;
l5=si0;
goto L2;
L9:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
l5=si0;
goto L2;
L10:;
si0=l5;
f7690(i,si0);
si0=l6;
l5=si0;
goto L2;
L5:;
si0=l0;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f13667(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l8;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=l7;
si2=1943796U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
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
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=56U;
si0+=si1;
f1433(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l5;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l3=si0;
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=l3;
si0=f8092(i,si0,si1,si2);
l6=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=56U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L9:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
f7690(i,si0);
L10:;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L11;
}
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L11:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
f7649(i,si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
si2=l4;
si3=l5;
si4=40U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13668(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=88U;
si0+=si1;
l10=si0;
L10:;
{
si0=l9;
si1=l8;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=54U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj1=-5063891382290364191ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
sj0=l11;
sj1=5416430769165163171ULL;
sj0^=sj1;
sj1=l12;
sj2=-6413089843220384395ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
L15:;
si0=l6;
si1=32U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si2=l7;
si3=l3;
si4=l4;
si5=l5;
si6=l2;
f10864(i,si0,si1,si2,si3,si4,si5,si6);
si0=1U;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L11;
default:
goto L12;
}
L14:;
si0=l7;
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
goto L1;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l2;
si2=l7;
si3=1943812U;
si4=5U;
f7446(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L16;
}
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=0U;
si0=f5566(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l6;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=1862528U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
sj1=l11;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=l6;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l9;
f7690(i,si0);
goto L11;
L16:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L17;
}
si0=l5;
f7690(i,si0);
L17:;
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
goto L18;
}
si0=l4;
f7690(i,si0);
L18:;
si0=l3;
si1=l3;
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
si0=l3;
f7690(i,si0);
goto L2;
L13:;
si0=0U;
l7=si0;
goto L11;
L12:;
si0=l2;
si1=l8;
si0=f7375(i,si0,si1);
l8=si0;
si0=l5;
l7=si0;
L11:;
si0=l7;
if(si0){
goto L19;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L20;
}
si0=l7;
f7690(i,si0);
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L22;
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
L23:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L23;
}
}
L22:;
si0=l8;
si1=80U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l7;
si1=16U;
si0+=si1;
l4=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si1=l4;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+80U);
l5=si2;
si3=l5;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L3;
L21:;
si0=l6;
si1=32U;
si0+=si1;
si1=l2;
si2=l8;
f7341(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l6;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
f7342(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L27;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l6;
si4=32U;
si3+=si4;
f13652(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L26;
default:
goto L24;
}
L27:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L26:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L25:;
si0=l0;
si1=l1;
si2=l2;
f13651(i,si0,si1,si2);
goto L2;
L24:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1914132U;
si1=70U;
si2=l6;
si3=24U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si1=1943817U;
si2=53U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L3:;
si0=l8;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=0U;
l7=si0;
goto L28;
L29:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
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
L28:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+80U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l8;
si1=80U;
si0+=si1;
f1433(i,si0);
L30:;
si0=l7;
if(si0){
goto L31;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
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
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l1;
si1=1943870U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l2;
f13651(i,si0,si1,si2);
si0=l8;
si1=l8;
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
si0=l8;
f7690(i,si0);
L2:;
si0=l6;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13669(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
if(si0){
goto L4;
}
si0=1U;
l4=si0;
goto L3;
L4:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l4;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=0U;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=12U;
si0*=si1;
l3=si0;
L6:;
{
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=1U;
l4=si0;
goto L5;
L7:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l3;
si1=-12U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15271(i,si0);
L8:;
si0=l4;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f13670(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l2;
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 != si1;
L0:;
return si0;
}

void f13671(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6227(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l5=si0;
si0=l3;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f13415(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13672(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6227(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l5=si0;
si0=l3;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f13417(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13673(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6227(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l5=si0;
si0=l3;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f13429(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13674(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6172(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13675(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+24U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l0;
si1=28U;
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
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=24U;
si0+=si1;
f1433(i,si0);
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
f7339(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L14;
}
si0=l7;
l0=si0;
si0=0U;
l9=si0;
goto L13;
L14:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l7;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=1U;
l9=si0;
L13:;
si0=2U;
si1=1U;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
si1=0U;
si2=l7;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
l11=si2;
si3=l0;
si2-=si3;
si3=2U;
si2>>=(si3&31);
l5=si2;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=124U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=l8;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l7;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=108U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
l0=si0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1951168U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=6722U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=1943440U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
l0=si0;
si0=!(si0);
if(si0){
goto L10;
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
goto L15;
}
si0=l0;
f7690(i,si0);
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L12:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1284U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L5;
}
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
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
goto L19;
}
si0=l3;
f7690(i,si0);
L19:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l10;
si1=l10;
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
L17:;
si0=l10;
f7690(i,si0);
L16:;
si0=l11;
si1=l0;
si0=si0 == si1;
if(si0){
goto L20;
}
L21:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L22;
}
si0=l3;
f7690(i,si0);
L22:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l8;
if(si0){
goto L23;
}
si0=l1;
l3=si0;
goto L3;
L23:;
si0=l7;
f15271(i,si0);
si0=l1;
l3=si0;
goto L3;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
l0=si0;
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
goto L8;
}
L9:;
si0=l0;
f7690(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+120U);
l0=si1;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l3;
si1=l0;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l5=si0;
L25:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L26;
}
si0=l3;
f7690(i,si0);
L26:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l2;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
f15271(i,si0);
L7:;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f10953(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L5;
}
si0=0U;
l0=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l0=si0;
L27:;
si0=l2;
si1=56U;
si0+=si1;
si1=l3;
si2=l0;
si0=f8078(i,si0,si1,si2);
l3=si0;
goto L3;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f13676(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6124(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=588U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13677(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6227(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l5=si0;
si0=l3;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f13424(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13678(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6124(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13679(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=31U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l1;
f13680(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L2;
case 1:
goto L4;
default:
goto L3;
}
L4:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
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
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=776U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=44U;
si4+=si5;
f7644(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L8;
}
si0=0U;
si0=f5566(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=76U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si3=48U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L10;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l1;
f13680(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
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
goto L11;
}
si0=l2;
f7690(i,si0);
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
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
L10:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
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
goto L7;
}
si0=l2;
f7690(i,si0);
goto L7;
L9:;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L12;
L13:;
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+44U);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=160U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=847U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1946948U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l4;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
switch(si0){
case 0:
goto L14;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L15;
default:
goto L18;
}
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l6=si0;
si1=l6;
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
goto L14;
}
si0=l6;
f1433(i,si0);
goto L14;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L14;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L14;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L14;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L14;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
l6=si0;
si1=l6;
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
goto L14;
}
si0=l6;
f1433(i,si0);
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
switch(si0){
case 0:
goto L19;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
default:
goto L23;
}
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si1=l6;
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
goto L19;
}
si0=l6;
f1433(i,si0);
goto L19;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L19;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L19;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L19;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L19;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si1=l6;
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
goto L19;
}
si0=l6;
f1433(i,si0);
L19:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l4;
si2=48U;
si1+=si2;
si0=f7418(i,si0,si1);
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
goto L24;
}
si0=l1;
f7690(i,si0);
L24:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L12:;
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
goto L25;
}
si0=l2;
f7690(i,si0);
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
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
L8:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
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
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=1914132U;
si1=70U;
si2=l4;
si3=48U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13680(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
l6=si0;
if(si0){
goto L9;
}
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
f1413(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=23U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884797U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884790U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884782U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
si1=l6;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L9:;
sj0=l4;
sj1=-2107831292826120692ULL;
sj0^=sj1;
sj1=l5;
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L8:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=l7;
f1413(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=23U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884797U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884790U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1884782U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
si1=l6;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
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
goto L3;
}
L4:;
si0=l2;
f7690(i,si0);
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13681(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l4;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=27U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1947047U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1947040U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1947032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1947024U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=516U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=115964117019ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l4;
si3=l3;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=27U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f13682(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=1940832U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=1946964U;
si4=1947008U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13683(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f6975(i,si0,si1,si2);
si0=l2;
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f7075(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+96U);
l7=sj0;
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=112U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8110(i,si0,si1,si2);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
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
goto L5;
}
si0=l6;
f7690(i,si0);
L5:;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
f15271(i,si0);
L6:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15271(i,si0);
L7:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=1U;
si3=l1;
f13679(i,si0,si1,si2,si3);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
}
si0=l6;
f7690(i,si0);
L8:;
si0=l0;
si1=l4;
si2=1U;
si3=l1;
f13679(i,si0,si1,si2,si3);
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
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
goto L2;
}
si0=l2;
f7690(i,si0);
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

void f13684(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si0=f14097(i,si0,si1);
l4=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
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
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=1947161U;
si2=3U;
si3=l1;
si4=l0;
si0=f7724(i,si0,si1,si2,si3,si4);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si2=1947161U;
si3=3U;
si4=l1;
si0=f13618(i,si0,si1,si2,si3,si4);
l5=si0;
if(si0){
goto L1;
}
L8:;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=1947164U;
si2=8U;
si3=l2;
si4=l0;
si0=f7724(i,si0,si1,si2,si3,si4);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
goto L2;
L11:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si2=1947164U;
si3=8U;
si4=l2;
si0=f13618(i,si0,si1,si2,si3,si4);
l2=si0;
if(si0){
goto L2;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L6;
}
si0=l6;
si1=1208U;
si0+=si1;
si1=1947172U;
si2=7U;
si3=l2;
si0=f12275(i,si0,si1,si2,si3);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=1947179U;
si2=3413U;
f10675(i,si0,si1,si2);
si0=l2;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L6;
}
si0=l1;
si1=l6;
si2=l3;
si3=8U;
si2+=si3;
si3=l2;
si4=0U;
si2=f8078(i,si2,si3,si4);
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L6;
}
si0=l1;
si1=l6;
si2=1208U;
si1+=si2;
si2=1945184U;
si3=7U;
si4=l2;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l0;
si0=f7734(i,si0,si1,si2,si3);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1946028U;
si4=1950612U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1946028U;
si4=1950660U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1946028U;
si4=1950612U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1946028U;
si4=1950628U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1940832U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1946028U;
si4=1950644U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f13685(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
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
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=1208U;
si2+=si3;
si3=1950716U;
si4=6U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=l0;
f7735(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950729U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950722U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=l2;
si3=72U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
goto L5;
L6:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si0=f9402(i,si0,si1);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f7690(i,si0);
goto L4;
L8:;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L5:;
si0=l2;
si1=271U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=6U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1988598U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1946504U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=72U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L4;
}
si0=l2;
si1=2972508U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1946504U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l2;
si3=72U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1988560U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=298U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13686(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l1;
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
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=1208U;
si2+=si3;
si3=1950676U;
si4=5U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=l1;
f7735(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
l1=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=14U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950687U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950681U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=60129542158ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l2;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13687(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l1;
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
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=1208U;
si2+=si3;
si3=1950695U;
si4=6U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=l1;
f7735(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
l1=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950708U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950701U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l2;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13688(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l1;
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
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=1208U;
si2+=si3;
si3=1950716U;
si4=6U;
si5=l5;
si2=f12275(i,si2,si3,si4,si5);
si3=l1;
f7735(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l5;
l1=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=15U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950729U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950722U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l2;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13689(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4559927925765661819ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8798821908827603765ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=156U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
sj1=l5;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l2;
si4=157U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si1=si3?si1:si2;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+156U);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+156U,si1);
si0=l3;
if(si0){
goto L4;
}
si0=l2;
si1=156U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L4:;
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
goto L5;
}
si0=l2;
f7690(i,si0);
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=1938708U;
si1=40U;
si2=1950888U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f13690(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4559927925765661819ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8798821908827603765ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=33U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1950987U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950979U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950971U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950963U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950955U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
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
si0=l3;
sj1=141733920801ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l5;
si2=l3;
si0=f7173(i,si0,si1,si2);
l0=si0;
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
goto L9;
}
si0=l2;
f7690(i,si0);
L9:;
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
L8:;
si0=1938708U;
si1=40U;
si2=1950904U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
l4=si0;
si0=l1;
si1=156U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si3=l0;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L10:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l2;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l4=si0;
L11:;
si0=l1;
si1=157U;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+156U);
l0=si2;
si3=l0;
si4=1U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+156U,si1);
si0=l0;
if(si0){
goto L12;
}
si0=l1;
si1=156U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L12:;
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
goto L13;
}
si0=l2;
f7690(i,si0);
L13:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1950951U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950936U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950928U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1950920U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=150323855395ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=l3;
si0=f7173(i,si0,si1,si2);
l0=si0;
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
si0=1U;
si1=33U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
f7690(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13691(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1951091U;
si2=8U;
si3=1951099U;
si4=12U;
si5=l0;
si6=1951112U;
si7=1951128U;
si8=12U;
si9=l0;
si10=4U;
si9+=si10;
si10=1951112U;
si11=1951140U;
si12=4U;
si13=l0;
si14=8U;
si13+=si14;
si14=1951112U;
si15=1951144U;
si16=6U;
si17=l2;
si18=12U;
si17+=si18;
si18=1951152U;
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

U32 f13692(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
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
si1=40U;
si0+=si1;
si1=l4;
si2=l3;
f11104(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+48U);
l6=sj0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f11237(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l3=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si2=8U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=24U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L9:;
si0=l0;
si1=28U;
si0+=si1;
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
goto L10;
}
si0=l1;
f7690(i,si0);
L10:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l5=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+24U);
l1=si2;
si3=l1;
si4=8U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
if(si0){
goto L11;
}
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L11:;
si0=l4;
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
goto L1;
}
goto L2;
L3:;
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
goto L1;
}
L2:;
si0=l1;
f7690(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f13693(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
sj1=l3;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L1:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L3:;
L0:;
}

void f13694(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
sj1=l3;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L1:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L3:;
L0:;
}

U32 f13695(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
si0=l4;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
f1433(i,si0);
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L13;
}
si0=l4;
si1=16U;
si0+=si1;
l6=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L12;
}
L13:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L12:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=56U;
si0+=si1;
f1433(i,si0);
L14:;
si0=l6;
if(si0){
goto L7;
}
si0=l3;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=80U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+80U);
l6=si2;
si3=l6;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l6;
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
si0=l0;
si1=80U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+80U);
l5=si2;
si3=l5;
si4=l4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
L15:;
si0=l9;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L5;
L6:;
si0=l8;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L4;
L5:;
si0=l0;
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
goto L2;
}
si0=l0;
si1=l0;
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
goto L16;
}
si0=l0;
si1=80U;
si0+=si1;
f1433(i,si0);
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l3=si0;
goto L3;
L17:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=84U;
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
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+80U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
si1=80U;
si0+=si1;
f1433(i,si0);
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l3=si0;
L3:;
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
goto L19;
}
si0=l0;
f7690(i,si0);
L19:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f13696(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-5U;
si0+=si1;
l3=si0;
si1=3U;
si2=l3;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
case 4:
goto L2;
default:
goto L6;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951573U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951577U;
si2=9U;
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
si1=1951586U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=1951596U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L7;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L7:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
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
L8:;
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
goto L1;
L4:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951612U;
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
si1=1951586U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=1951596U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L9;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L9:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
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
L10:;
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
goto L1;
L3:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951619U;
si2=14U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951633U;
si2=6U;
si3=l0;
si4=1951640U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1951656U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1951664U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L11;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L11:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L12;
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
L12:;
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
goto L1;
L2:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951680U;
si2=13U;
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
si1=1951656U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1951664U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L13;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L13:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L14;
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
L14:;
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

U32 f13697(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1951771U;
si2=10U;
si3=1951781U;
si4=5U;
si5=l0;
si6=1951788U;
si7=1951804U;
si8=6U;
si9=l0;
si10=12U;
si9+=si10;
si10=1951812U;
si11=1951828U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=1951836U;
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

U32 f13698(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=0U;
l2=si0;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l6;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=0U;
si4=l4;
si5=l7;
si6=l4;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l3=si2;
si1-=si2;
l7=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l6;
si1=l7;
si0-=si1;
l5=si0;
goto L1;
L2:;
si0=l3;
si1=l6;
si0+=si1;
l4=si0;
L1:;
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=l3;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l7=si0;
si0=l4;
si1=l3;
si0-=si1;
si1=1073741823U;
si0&=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l8;
si0+=si1;
l8=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=l2;
si1+=si2;
l15=si1;
si2=l12;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l15;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
}
si0=l0;
si1=l6;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=0U;
si3=l0;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l4;
si5=l2;
si4+=si5;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
goto L0;
L3:;
si0=l11;
si1=l2;
si0+=si1;
l14=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=1073741823U;
si0&=si1;
si1=l9;
si0+=si1;
l15=si0;
si0=0U;
l2=si0;
L6:;
{
si0=l7;
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=l12;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si2+=si3;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l14;
si2=l2;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=-4U;
si0+=si1;
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
}
si0=l9;
si1=l2;
si0+=si1;
l15=si0;
L5:;
si0=l0;
si1=l6;
si2=l15;
si1-=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si1+=si2;
l4=si1;
si2=0U;
si3=l0;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si4=l4;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f13699(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L8;
}
L9:;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=(U32)(sj0);
l8=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
if(si0){
goto L6;
}
si0=l0;
sj1=l5;
si2=l2;
si3=l3;
sj1=f9440(i,sj1,si2,si3);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l6;
if(si0){
goto L5;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l8;
si3=l2;
sj3=(U64)(si3);
si4=l3;
f1290(i,si0,si1,si2,sj3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L13:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L13;
}
}
si0=l8;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L14;
default:
goto L15;
}
L15:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si2=l1;
si3=l8;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L11;
L16:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L10:;
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1952040U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=6772U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=1952184U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l8;
if(si0){
goto L18;
}
si0=8U;
l1=si0;
si0=0U;
l2=si0;
goto L17;
L18:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l2;
if(si0){
goto L20;
}
si0=l3;
l1=si0;
goto L19;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l3;
si1=l2;
si0=f15277(i,si0,si1);
l1=si0;
goto L19;
L21:;
si0=l2;
si0=f15269(i,si0);
l1=si0;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L17:;
si0=l1;
si1=l6;
si2=l2;
si0=f15390(i,si0,si1,si2);
sj0=l5;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l7;
sj0|=sj1;
l5=sj0;
si0=1U;
l2=si0;
L4:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l3;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13700(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L1;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=2967833U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=4U;
si0+=si1;
sj1=l2;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=l0;
si1=2967833U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
l1=si0;
L2:;
si0=l1;
L0:;
return si0;
}

void f13701(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L10;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l2;
si1=l3;
si2=1953248U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
si2=1953248U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si2=1853372U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=l3;
si2=1953248U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
si2=1953248U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13702(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
default:
goto L16;
}
L16:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L15:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L14:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L12:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L10:;
si0=l4;
si1=l2;
si2=1953296U;
f675(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si1=l5;
si2=1953296U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l2;
si2=1953296U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l5;
si2=1953296U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l2;
si2=1853388U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l5;
si2=1853388U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l2;
si2=1953296U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l5;
si2=1953296U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l2;
si2=1953296U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l5;
si2=1953296U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13703(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
default:
goto L16;
}
L16:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L15:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L14:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L12:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L10:;
si0=l4;
si1=l2;
si2=1953232U;
f675(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si1=l5;
si2=1953232U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l2;
si2=1953232U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l5;
si2=1953232U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l2;
si2=1853356U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l5;
si2=1853356U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l2;
si2=1953232U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l5;
si2=1953232U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l2;
si2=1953232U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l5;
si2=1953232U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13704(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L10;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l2;
si1=l3;
si2=1953280U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
si2=1953280U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si2=1953280U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=l3;
si2=1953280U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
si2=1953280U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13705(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
default:
goto L16;
}
L16:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L15:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L14:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L12:;
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L10:;
si0=l4;
si1=l2;
si2=1953264U;
f675(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si1=l5;
si2=1953264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l2;
si2=1953264U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l5;
si2=1953264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l2;
si2=1953264U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l5;
si2=1953264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l2;
si2=1953264U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l5;
si2=1953264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l2;
si2=1953264U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l5;
si2=1953264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13706(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-163230743173927068ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-4493808902380553279ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f13707(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f13708(i,si0);
UNREACHABLE;
L0:;
}

void f13708(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=1952200U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f13709(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1104164U;
si2=5U;
si0=f713(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1104169U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f13710(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13711(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1970400U;
si2=16U;
si3=1970416U;
si4=4U;
si5=l0;
si6=1960088U;
si7=1970420U;
si8=5U;
si9=l0;
si10=4U;
si9+=si10;
si10=1970428U;
si11=1970076U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=1970084U;
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

U32 f13712(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f13713(i,si0,si1);
L0:;
return si0;
}

U32 f13713(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952832U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L1;
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l3;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l3=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L9:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f13714(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952768U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13715(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1970495U;
si2=16U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1970511U;
si2=6U;
si3=l0;
si4=1970520U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1970536U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1970544U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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

U32 f13716(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952656U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13717(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952864U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13718(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1104164U;
si2=5U;
si0=f713(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1104169U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f13719(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=44U;
si0+=si1;
si1=1969868U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=1969852U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1969836U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=1969820U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1969820U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1969804U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1969884U;
si2=23U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=1969772U;
si2=4U;
si3=l2;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=1969776U;
si2=7U;
si3=l2;
si4=8U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=1969783U;
si2=6U;
si3=l2;
si4=16U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=1969789U;
si2=6U;
si3=l2;
si4=24U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=1U;
l0=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=1961248U;
si2=1U;
si3=l2;
si4=32U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=1969795U;
si2=9U;
si3=l2;
si4=40U;
si3+=si4;
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+61U);
if(si0){
goto L2;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13720(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952720U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13721(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967832U);
if(si0){
goto L1;
}
si0=0U;
si1=1U;
i32_store16(&i->m0,(U64)si0+2967832U,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2967833U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=1951948U;
l0=si0;
si0=26U;
l4=si0;
goto L3;
L4:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1951924U;
l0=si0;
si0=24U;
l4=si0;
goto L3;
L6:;
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l3;
si1=2967833U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951891U;
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
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=1951992U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L7;
L8:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l4;
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1951891U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1951902U;
si2=4U;
si3=l2;
si4=8U;
si3+=si4;
si4=1951976U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L11;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L11:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L12;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L12:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13722(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1970339U;
si2=18U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1970357U;
si2=8U;
si3=l0;
si4=1969644U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1960078U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1970168U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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

U32 f13723(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952816U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13724(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1951902U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1952688U;
si0=f715(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1952632U;
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
si1=1951902U;
si2=4U;
si3=1952408U;
si4=1952640U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L6:;
si0=1U;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l0=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L9;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L9:;
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
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
goto L1;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13725(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1952408U;
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
si2=1952600U;
si0=f716(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=1952600U;
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

U32 f13726(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1970264U;
si2=20U;
si3=1970157U;
si4=9U;
si5=l0;
si6=1970284U;
si7=1960078U;
si8=8U;
si9=l0;
si10=8U;
si9+=si10;
si10=1960088U;
si11=1970300U;
si12=10U;
si13=l2;
si14=12U;
si13+=si14;
si14=1969868U;
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

U32 f13727(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
sj0=(U64)(si0);
sj1=0ULL;
si2=l0;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l0;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l0=si2;
sj0=si2?sj0:sj1;
si1=l0;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13728(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f13729(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1283200U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1283212U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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


#include "w2c2_base.h"

#include "rustpython.h"

void f5730(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f14112(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5731(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5584(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
f13319(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5732(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5733(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l6=si0;
si0=0U;
l7=si0;
goto L4;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
si2=l5;
si3=-1U;
si2+=si3;
l7=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l2;
si2=l3;
f5996(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l10=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
f7690(i,si0);
L4:;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l5;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
}
si0=l6;
f7690(i,si0);
L8:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L9:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
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
L10:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L12:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L14;
}
si0=l6;
f7690(i,si0);
L14:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L12;
}
}
L11:;
si0=1U;
l5=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1626316U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2003U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
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
si0=l2;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
goto L16;
L17:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l6;
l10=si0;
goto L15;
L18:;
si0=l4;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1626368U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1932U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
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
si0=l2;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
L16:;
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
goto L19;
}
si0=l8;
f7690(i,si0);
L19:;
si0=0U;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L21:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L22;
}
si0=l6;
f7690(i,si0);
L22:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L23:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
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
L24:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L26:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L28;
}
si0=l6;
f7690(i,si0);
L28:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L29:;
si0=l8;
if(si0){
goto L30;
}
si0=1U;
l5=si0;
goto L2;
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
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
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l5=si0;
si0=l10;
if(si0){
goto L32;
}
si0=l5;
l10=si0;
goto L31;
L32:;
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
goto L31;
}
si0=l5;
f7690(i,si0);
L31:;
si0=l4;
si1=l2;
si2=l8;
si3=l10;
f7618(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l8;
si1=l8;
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
si0=l8;
f7690(i,si0);
L2:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
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

void f5734(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5735(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=108U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2009U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1630892U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f63(i,si0,si1);
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
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
goto L2;
L3:;
si0=4U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l5=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l2;
si2=l6;
f10057(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l5;
if(si0){
goto L7;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=0U;
l7=si0;
goto L4;
L8:;
si0=l3;
si1=l1;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1626368U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1932U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
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
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l4;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
goto L6;
L7:;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1626316U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=2003U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
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
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l4;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
L6:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
l6=si0;
goto L4;
L9:;
si0=l6;
f7690(i,si0);
si0=l2;
l6=si0;
goto L4;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L11:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L12;
}
si0=l2;
f7690(i,si0);
L12:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L13:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L14:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L16:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L18;
}
si0=l2;
f7690(i,si0);
L18:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L1;
L2:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=l4;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L20:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L21;
}
si0=l2;
f7690(i,si0);
L21:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L22:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L23:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L25:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L27;
}
si0=l2;
f7690(i,si0);
L27:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L25;
}
}
L24:;
si0=1U;
l7=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5737(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
l7=si0;
goto L2;
L3:;
si0=0U;
l5=si0;
si0=0U;
l8=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=0U;
l8=si0;
L7:;
{
si0=l9;
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
si1=88U;
si0+=si1;
si1=l2;
si2=l3;
f7608(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L5;
default:
goto L8;
}
L9:;
si0=l7;
l3=si0;
L8:;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l8;
si1=l3;
si2=l8;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l8;
si1=l2;
si0=f12593(i,si0,si1);
l7=si0;
goto L4;
L5:;
si0=1U;
l5=si0;
L4:;
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
goto L2;
}
si0=l6;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
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

void f5737(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l1;
f8288(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=5U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L5;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=0U;
l6=si0;
goto L2;
L7:;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l4;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l4;
f7690(i,si0);
L10:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L11:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
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
L12:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L14:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L16;
}
si0=l4;
f7690(i,si0);
L16:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L14;
}
}
L13:;
si0=1U;
l6=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L1;
L6:;
si0=l3;
si1=l1;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1626368U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1932U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l2;
si1=l4;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L4;
L5:;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1626316U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=2003U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l2;
si1=l4;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L4:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
l5=si0;
goto L2;
L17:;
si0=l5;
f7690(i,si0);
si0=l4;
l5=si0;
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L19:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
goto L20;
}
si0=l4;
f7690(i,si0);
L20:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L21:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
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
L22:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L24:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L25:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L26;
}
si0=l4;
f7690(i,si0);
L26:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f5687(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
f8210(i,si0,si1,si2,si3);
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
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f7690(i,si0);
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+73U);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=104U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=112U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5641(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
si0=l3;
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=1643057U;
si3=5U;
si4=l2;
f13319(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l5;
si3=l6;
si4=l2;
f13310(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
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
goto L1;
}
si0=l7;
f7690(i,si0);
goto L1;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l6;
f7690(i,si0);
L5:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
l3=si0;
goto L1;
L6:;
si0=l5;
f7690(i,si0);
si0=l7;
l3=si0;
goto L1;
L3:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
f13319(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L8;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l5;
si3=l6;
si4=l2;
f13310(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
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
goto L7;
}
si0=l7;
f7690(i,si0);
goto L7;
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l6;
f7690(i,si0);
L9:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
f7690(i,si0);
L10:;
si0=l7;
l6=si0;
L7:;
si0=l3;
si1=l3;
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
si0=l3;
f7690(i,si0);
L11:;
si0=l6;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=l2;
f14107(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5741(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f14112(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5743(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f5653(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l4;
si2=44U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l17=si0;
si0=l4;
si1=13U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1643526U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969088U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2969088U;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si0=f12916(i,si0,si1,si2);
l18=si0;
if(si0){
goto L3;
}
L4:;
si0=l8;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2969092U);
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l16;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l2=si0;
L6:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
l2=si0;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l16;
f7690(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=1U;
l2=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15271(i,si0);
goto L1;
L2:;
si0=1U;
l2=si0;
si0=l5;
l18=si0;
L1:;
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=l2;
f14110(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5746(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f5653(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l4;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l17=si0;
si0=l4;
si1=12U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1643448U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969040U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2969040U;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si0=f12916(i,si0,si1,si2);
l18=si0;
if(si0){
goto L3;
}
L4:;
si0=l8;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2969044U);
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l16;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l2=si0;
L6:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
l2=si0;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l16;
f7690(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=1U;
l2=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15271(i,si0);
goto L1;
L2:;
si0=1U;
l2=si0;
si0=l5;
l18=si0;
L1:;
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=1807769U;
si3=35U;
si4=l3;
si5=l2;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5749(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5749(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f5653(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l4;
si2=44U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l17=si0;
si0=l4;
si1=16U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1643603U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969128U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2969128U;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si0=f12916(i,si0,si1,si2);
l18=si0;
if(si0){
goto L3;
}
L4:;
si0=l8;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2969132U);
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l16;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l2=si0;
L6:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
l2=si0;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l16;
f7690(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=1U;
l2=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15271(i,si0);
goto L1;
L2:;
si0=1U;
l2=si0;
si0=l5;
l18=si0;
L1:;
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5750(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=l2;
f14111(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f5687(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
f8208(i,si0,si1,si2,si3);
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
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f7690(i,si0);
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+73U);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=256U;
si0+=si1;
si1=l3;
si0=f13317(i,si0,si1);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
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
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5754(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=l3;
f8316(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=5U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L6;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L3;
L7:;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l5;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L9:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l9;
f7690(i,si0);
L10:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L11:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
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
L12:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L14:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l9;
f7690(i,si0);
L16:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L14;
}
}
L13:;
si0=1U;
l5=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L2;
L6:;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1626316U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2003U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
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
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L4;
L5:;
si0=l4;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1626368U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1932U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
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
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
L4:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l6;
f7690(i,si0);
L17:;
si0=0U;
l6=si0;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L19:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l9;
f7690(i,si0);
L20:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L21:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
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
L22:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L24:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L25:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l9;
f7690(i,si0);
L26:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L27:;
si0=l6;
if(si0){
goto L28;
}
si0=1U;
l5=si0;
goto L2;
L28:;
si0=l4;
si1=l6;
si2=l7;
si3=l2;
f5780(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
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

void f5755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5756(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l2;
si2=l3;
f12424(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L6;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
l10=si0;
goto L3;
L7:;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=84U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l5;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L9:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l12;
f7690(i,si0);
L10:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L11:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
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
L12:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L14:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
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
si0=l12;
f7690(i,si0);
L16:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L14;
}
}
L13:;
si0=1U;
l5=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L2;
L6:;
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1626316U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2003U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
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
si0=l2;
si1=l12;
si2=l4;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
goto L4;
L5:;
si0=l4;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1626368U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1932U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
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
si0=l2;
si1=l12;
si2=l4;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l10=si0;
L4:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
f7690(i,si0);
L17:;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
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
goto L18;
}
si0=l7;
f7690(i,si0);
L18:;
si0=2U;
l6=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l9;
f7690(i,si0);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L20:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
f7690(i,si0);
L21:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L22:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
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
L23:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L25:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l12;
f7690(i,si0);
L27:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L28:;
si0=1U;
l5=si0;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si3=l10;
si4=l4;
si5=80U;
si4+=si5;
si5=0U;
si6=1630776U;
f6332(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L2:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
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

void f5757(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5758(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f5653(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l4;
si2=44U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l17=si0;
si0=l4;
si1=13U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1643485U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969064U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2969064U;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si0=f12916(i,si0,si1,si2);
l18=si0;
if(si0){
goto L3;
}
L4:;
si0=l8;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2969068U);
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l16;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l2=si0;
L6:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
l2=si0;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l16;
f7690(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=1U;
l2=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15271(i,si0);
goto L1;
L2:;
si0=1U;
l2=si0;
si0=l5;
l18=si0;
L1:;
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5759(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=1U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si0=f5689(i,si0,si1);
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
f7632(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f5760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f12445(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5761(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5762(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5762(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5737(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
l2=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=l8;
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
goto L2;
}
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=1U;
si2=l10;
f7270(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L7:;
{
si0=l6;
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
goto L2;
}
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=32U;
si0+=si1;
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
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l2=si0;
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
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5763(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f14112(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5765(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5765(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6068(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1630440U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2010U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f63(i,si0,si1);
goto L2;
L3:;
si0=l4;
si1=72U;
si0+=si1;
si1=l6;
f1248(i,si0,si1);
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2011U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1630452U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
f15271(i,si0);
L4:;
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
L2:;
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
goto L5;
}
si0=l3;
f7690(i,si0);
L5:;
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=0U;
l6=si0;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si1=l8;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
l8=si1;
si2=l8;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
L4:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L5;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L5:;
si0=l6;
si1=l2;
si0=f12593(i,si0,si1);
l2=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5767(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5599(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f12445(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5768(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5588(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l3;
si2=l2;
f8211(i,si0,si1,si2);
si0=l3;
si1=l3;
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
si0=l3;
f7690(i,si0);
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
si1=l2;
si0=f12593(i,si0,si1);
l3=si0;
goto L1;
L3:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5770(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l2;
si2=l3;
f6347(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+92U);
l7=sj0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=l5;
si3=l2;
si0=f5869(i,si0,si1,si2,si3);
l8=si0;
goto L2;
L3:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l8;
l11=si0;
goto L5;
L8:;
si0=l4;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1626316U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=2003U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=88U;
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
goto L4;
}
si0=l2;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l11=si0;
goto L6;
L7:;
si0=l4;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1626368U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1932U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=88U;
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
goto L4;
}
si0=l2;
si1=l5;
si2=l4;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l11=si0;
L6:;
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
goto L9;
}
si0=l9;
f7690(i,si0);
L9:;
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
goto L10;
}
si0=l8;
f7690(i,si0);
L10:;
si0=0U;
l9=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l10;
f7690(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l12=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
f7690(i,si0);
L13:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L14:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
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
L15:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L17:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
f7690(i,si0);
L19:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L20:;
si0=l9;
if(si0){
goto L21;
}
si0=1U;
l5=si0;
si0=l11;
l8=si0;
goto L1;
L21:;
si0=l10;
if(si0){
goto L23;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l9;
si3=l11;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=1272U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=1803426U;
si6=11U;
f7612(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L22;
L23:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l9;
si3=l11;
si4=l10;
si5=1803426U;
si6=11U;
f7612(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l10;
f7690(i,si0);
L22:;
si0=l11;
si1=l11;
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
si0=l11;
f7690(i,si0);
L24:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
f7690(i,si0);
goto L1;
L4:;
f15042(i);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l12=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L26:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l6;
f7690(i,si0);
L27:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L28:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
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
L29:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L31:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L32:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l6;
f7690(i,si0);
L33:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L31;
}
}
L30:;
si0=1U;
l5=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5771(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f5772(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5772(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f5653(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l7=si0;
si1=l4;
si2=44U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l17=si0;
si0=l4;
si1=14U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1643498U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969072U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2969072U;
si1=l2;
si2=l4;
si3=24U;
si2+=si3;
si0=f12916(i,si0,si1,si2);
l18=si0;
if(si0){
goto L3;
}
L4:;
si0=l8;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2969076U);
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l16;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
l2=si0;
L6:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L7;
}
si0=l5;
f7690(i,si0);
L7:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
l2=si0;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l16;
f7690(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=1U;
l2=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15271(i,si0);
goto L1;
L2:;
si0=1U;
l2=si0;
si0=l5;
l18=si0;
L1:;
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5773(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=2012U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=2013U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=2014U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2015U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2016U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5774(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L4:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f7604(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l6=si0;
goto L1;
L3:;
si0=0U;
l6=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=60U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=l3;
f8218(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5776(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f5780(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
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
goto L1;
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
goto L1;
}
si0=0U;
l6=si0;
si0=l1;
si1=l3;
si2=l4;
si0=f5595(i,si0,si1,si2);
l1=si0;
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l5;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1630408U;
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
si1=l5;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L3;
case 1:
goto L6;
case 2:
goto L5;
case 3:
goto L4;
default:
goto L7;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f1433(i,si0);
goto L3;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L3;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
si0=l3;
si1=0U;
f1440(i,si0,si1);
goto L3;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f1433(i,si0);
L3:;
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si1=l3;
si2=l5;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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

void f5778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f5779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=60U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l4;
f5593(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l3=si0;
si0=l1;
l2=si0;
goto L4;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
L9:;
si0=1U;
l2=si0;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l5;
si3=l3;
si4=l2;
f8216(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
if(si0){
goto L12;
}
si0=l5;
f15271(i,si0);
si0=4U;
l5=si0;
goto L11;
L12:;
si0=l5;
si1=l6;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0=f15274(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=176U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
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
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L13:;
si0=l5;
si1=l6;
si2=l3;
si3=l2;
si0=f8155(i,si0,si1,si2,si3);
l2=si0;
L7:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l1;
f7690(i,si0);
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
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

void f5781(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2017U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2016U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5782(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
case 4:
goto L26;
case 5:
goto L25;
case 6:
goto L24;
case 7:
goto L23;
case 8:
goto L22;
case 9:
goto L21;
case 10:
goto L20;
case 11:
goto L19;
case 12:
goto L18;
case 13:
goto L17;
case 14:
goto L16;
case 15:
goto L15;
case 16:
goto L14;
case 17:
goto L13;
case 18:
goto L12;
case 19:
goto L11;
case 20:
goto L10;
case 21:
goto L9;
case 22:
goto L8;
case 23:
goto L7;
case 24:
goto L6;
case 25:
goto L5;
default:
goto L31;
}
L31:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f5782(i,si0);
si0=l2;
f15271(i,si0);
L32:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
f5782(i,si0);
si0=l2;
f15271(i,si0);
L33:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
l2=si0;
L35:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L29:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L28:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f11226(i,si0);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f11226(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=28U;
si0+=si1;
f5783(i,si0);
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f15271(i,si0);
L41:;
si0=l1;
f15271(i,si0);
L38:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f11226(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=28U;
si0+=si1;
f5783(i,si0);
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
f15271(i,si0);
L46:;
si0=l1;
f15271(i,si0);
L43:;
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
l2=si0;
L48:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l2;
f11156(i,si0);
L49:;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15271(i,si0);
L50:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
l2=si0;
L52:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
l2=si0;
L54:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=0U;
l3=si0;
L56:;
{
si0=l4;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L58:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L59:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L56;
}
}
L55:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L21:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
l3=si0;
L61:;
{
si0=l4;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L63:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L64:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=0U;
l3=si0;
L66:;
{
si0=l4;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L68:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L69:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l3=si0;
L71:;
{
si0=l4;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l2;
si1=112U;
si0+=si1;
l6=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L73:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L74:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L75:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l3;
l2=si0;
L77:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
l2=si0;
L79:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15271(i,si0);
L80:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l2=si0;
L82:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l3;
f15271(i,si0);
L83:;
si0=l2;
f11156(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
l2=si0;
L85:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L11:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L89;
case 1:
goto L88;
case 2:
goto L87;
case 3:
goto L86;
default:
goto L2;
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L87:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L86:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
l2=si0;
L91:;
{
si0=l2;
f11158(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f5782(i,si0);
si0=l2;
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l3;
l2=si0;
L93:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
l2=si0;
L95:;
{
si0=l2;
f11156(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
L94:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L3:;
si0=l3;
f15271(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f5783(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f5782(i,si0);
si0=l0;
f15271(i,si0);
L0:;
}

void f5784(rustpythonInstance*i,U32 l0) {
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

void f5785(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L1;
case 6:
goto L1;
case 7:
goto L1;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L1;
case 11:
goto L1;
case 12:
goto L3;
default:
goto L1;
}
L3:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L2:;
si0=l0;
f5786(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L4:;
L0:;
}

void f5786(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L3;
case 2:
goto L1;
case 3:
goto L2;
default:
goto L4;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L1;
case 6:
goto L1;
case 7:
goto L7;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L6;
case 11:
goto L1;
case 12:
goto L5;
case 13:
goto L1;
case 14:
goto L1;
default:
goto L8;
}
L8:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L7:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=8U;
si0+=si1;
f5791(i,si0);
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L10;
default:
goto L1;
}
L12:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L9;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L9;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=96U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L15;
default:
goto L13;
}
L17:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
goto L13;
L16:;
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L14;
L15:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f5787(rustpythonInstance*i,U32 l0) {
L0:;
}

void f5788(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
L0:;
}

void f5789(rustpythonInstance*i,U32 l0) {
L0:;
}

void f5790(rustpythonInstance*i,U32 l0) {
L0:;
}

void f5791(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1114115U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f5786(i,si0);
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

void f5792(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
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
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
goto L2;
}
si0=l1;
f7690(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l1;
f7690(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
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
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l0;
f7690(i,si0);
L5:;
L0:;
}

void f5793(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L2;
}
si0=l1;
f7690(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L5;
}
si0=l1;
f7690(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
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
goto L6;
}
si0=l1;
f7690(i,si0);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
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
goto L7;
}
si0=l1;
f7690(i,si0);
L7:;
si0=l0;
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
goto L8;
}
si0=l1;
f7690(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
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
goto L9;
}
si0=l0;
f7690(i,si0);
L9:;
L0:;
}

void f5794(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
l3=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L3;
}
si0=l4;
f7690(i,si0);
L3:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
L4:;
L0:;
}

void f5795(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f5795(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L1;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L1;
}
L3:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=-1U;
si1+=si2;
l5=si1;
si0+=si1;
l10=si0;
si0=l6;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
L9:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l5;
si0-=si1;
l12=si0;
si1=l9;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=l12;
si0+=si1;
si1=l8;
si2=l9;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l13;
si0-=si1;
l4=si0;
goto L5;
L10:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
goto L6;
}
L8:;
L11:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0-=si1;
l13=si0;
si1=l9;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L12;
}
L13:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
goto L6;
L12:;
}
si0=l9;
si1=4U;
si2=1624116U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l13=si1;
si0-=si1;
l4=si0;
L5:;
si0=l6;
si1=l13;
si0+=si1;
l3=si0;
L1:;
si0=l0;
si1=l4;
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

void f5796(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=5U;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11275(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L6;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0=f15274(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
L5:;
si0=l1;
f15271(i,si0);
si0=4U;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l1=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
l1=si0;
L8:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L9;
}
si0=l0;
f7690(i,si0);
L9:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L8;
}
}
si0=l4;
f15271(i,si0);
goto L1;
L3:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5797(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11328(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=36U;
si0+=si1;
l1=si0;
L4:;
{
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
f11156(i,si0);
si0=l0;
f15271(i,si0);
L6:;
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
f15271(i,si0);
L7:;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5798(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11316(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l1=si0;
L4:;
{
si0=l1;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
f11156(i,si0);
si0=l0;
f15271(i,si0);
L5:;
si0=l1;
si1=64U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5799(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=5U;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11321(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
L5:;
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5800(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11236(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=36U;
si0+=si1;
l1=si0;
L4:;
{
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
f11156(i,si0);
si0=l0;
f15271(i,si0);
L6:;
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
f15271(i,si0);
L7:;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5801(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=5U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=15U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11260(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
L5:;
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5802(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=5U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=15U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11243(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
L5:;
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5803(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11353(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=32U;
si0+=si1;
l1=si0;
L4:;
{
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5804(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11269(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l1=si0;
L4:;
{
si0=l1;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
f11156(i,si0);
si0=l0;
f15271(i,si0);
L5:;
si0=l1;
si1=64U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5805(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11271(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L4:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L5;
}
si0=l0;
f7690(i,si0);
L5:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L6;
}
si0=l0;
f7690(i,si0);
L6:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5806(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11307(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l1=si0;
L4:;
{
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l1;
f11156(i,si0);
si0=l1;
si1=88U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5807(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l2;
si3=4U;
si2+=si3;
si0=f6459(i,si0,si1,si2);
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=1U;
l3=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+52U);
si0=f6459(i,si0,si1,si2);
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l3=si0;
L4:;
{
si0=l3;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+52U);
si0=f6459(i,si0,si1,si2);
si1=253U;
si0&=si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
goto L1;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
goto L1;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5808(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11283(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
L4:;
{
si0=l3;
si1=l5;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l1;
si1=112U;
si0+=si1;
l6=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L6:;
{
si0=l1;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5809(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11314(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=32U;
si0+=si1;
l1=si0;
L4:;
{
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5810(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=5U;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11273(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=1U;
si1<<=(si2&31);
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l4=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
L5:;
si0=l3;
f15271(i,si0);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
goto L1;
L3:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5811(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f11246(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
L4:;
{
si0=l3;
si1=l5;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l1;
si1=112U;
si0+=si1;
l6=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L6:;
{
si0=l1;
f11156(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5812(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f11256(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L4:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L5;
}
si0=l0;
f7690(i,si0);
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L6;
}
si0=l0;
f7690(i,si0);
L6:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=24U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l0;
si3=l2;
si2=si2 < si3;
l4=si2;
si0=si2?si0:si1;
si1=17U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
l4=si0;
si1=l2;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l7=si0;
si0=l0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
goto L1;
L5:;
si0=l2;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=0U;
si1=l0;
si0-=si1;
l10=si0;
si0=l1;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l11=si0;
si1=4U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
l12=si0;
si0=l2;
l5=si0;
L6:;
{
si0=l11;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L8:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l5;
si1=l2;
si0+=si1;
l5=si0;
si0=l13;
l7=si0;
si0=l8;
l6=si0;
goto L8;
}
L7:;
si0=l10;
si1=l5;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=1U;
l9=si0;
L10:;
{
si0=l9;
si1=l2;
si0+=si1;
l4=si0;
si0=l11;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L11:;
{
si0=l11;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si0=l8;
l6=si0;
si0=l13;
l7=si0;
goto L11;
L12:;
si0=l8;
l6=si0;
si0=l13;
l7=si0;
si0=l4;
si1=l0;
si0-=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l5;
si1=l12;
si2=l5;
si3=l12;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si0=l13;
l7=si0;
si0=l8;
l6=si0;
goto L6;
}
L4:;
si0=l3;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
if(si0){
goto L14;
}
si0=l2;
si1=1U;
si0&=si1;
l14=si0;
si0=0U;
si1=l2;
si0-=si1;
l15=si0;
si0=0U;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si0=0U;
si1=l2;
si2=-2U;
si1&=si2;
si0-=si1;
l12=si0;
L15:;
{
si0=l15;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=0U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L17:;
{
si0=l4;
si1=l9;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l12;
si1=l6;
si2=-2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=0U;
si1=l6;
si0-=si1;
l5=si0;
L16:;
si0=l1;
si1=l10;
si0+=si1;
l4=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si1=l1;
si2=l6;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L18:;
si0=l4;
l1=si0;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
}
si0=l4;
l1=si0;
goto L13;
L14:;
si0=l0;
si1=1U;
si0&=si1;
l10=si0;
si0=0U;
si1=l0;
si0-=si1;
l15=si0;
si0=0U;
si1=l0;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0-=si1;
l9=si0;
si0=0U;
si1=l0;
si2=-2U;
si1&=si2;
si0-=si1;
l12=si0;
L19:;
{
si0=0U;
l4=si0;
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L21:;
{
si0=l4;
si1=l9;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l13=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l12;
si1=l6;
si2=-2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=l1;
si2=l5;
si1+=si2;
l5=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L22:;
si0=l1;
si1=l14;
si0+=si1;
l1=si0;
si0=l2;
si1=l0;
si0-=si1;
l2=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L19;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5814(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=24U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l0;
si3=l2;
si2=si2 < si3;
l4=si2;
si0=si2?si0:si1;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
l4=si0;
si1=l2;
si2=2U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l7=si0;
si0=l0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
goto L1;
L5:;
si0=l2;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=0U;
si1=l0;
si0-=si1;
l10=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
l11=si0;
si0=l2;
l5=si0;
L6:;
{
si0=l8;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L8:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l5;
si1=l2;
si0+=si1;
l5=si0;
si0=l7;
l6=si0;
goto L8;
}
L7:;
si0=l10;
si1=l5;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=1U;
l9=si0;
L10:;
{
si0=l9;
si1=l2;
si0+=si1;
l4=si0;
si0=l8;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l8;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si0=l6;
l5=si0;
goto L11;
L12:;
si0=l6;
l5=si0;
si0=l4;
si1=l0;
si0-=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l5;
si1=l11;
si2=l5;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=l7;
l6=si0;
goto L6;
}
L4:;
si0=l3;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
if(si0){
goto L14;
}
si0=l2;
si1=3U;
si0&=si1;
l12=si0;
si0=l2;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
si1=l2;
si0-=si1;
l14=si0;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l4;
si0-=si1;
l11=si0;
si0=0U;
si1=l2;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L15:;
{
si0=0U;
l4=si0;
si0=l13;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L17:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L16:;
si0=l14;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l12;
l6=si0;
L19:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l1;
si1=l8;
si0+=si1;
l1=si0;
si0=l15;
si1=l11;
si0+=si1;
l15=si0;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l0;
si1=3U;
si0&=si1;
l13=si0;
si0=l0;
si1=-1U;
si0+=si1;
l14=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l12;
si0-=si1;
l11=si0;
si0=0U;
si1=l0;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L20:;
{
si0=0U;
l4=si0;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L22:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L21:;
si0=l13;
si0=!(si0);
if(si0){
goto L23;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l13;
l6=si0;
L24:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l15;
si1=l12;
si0+=si1;
l15=si0;
si0=l1;
si1=l12;
si0+=si1;
l1=si0;
si0=l2;
si1=l0;
si0-=si1;
l2=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L20;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5815(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

U32 f5816(rustpythonInstance*i,U32 l0,U32 l1) {
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
f7247(i,si0,si1);
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
f7248(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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

U32 f5817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f7248(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f5818(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f5819(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1260(i,si0,si1);
L0:;
return si0;
}

U32 f5820(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1259(i,si0,si1);
L0:;
return si0;
}

U32 f5821(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si0=f750(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f5822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l1;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-33U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L1;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L1;
case 6:
goto L1;
case 7:
goto L1;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L1;
case 11:
goto L1;
case 12:
goto L1;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L1;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L1;
case 19:
goto L1;
case 20:
goto L1;
case 21:
goto L1;
case 22:
goto L1;
case 23:
goto L1;
case 24:
goto L1;
case 25:
goto L1;
case 26:
goto L1;
case 27:
goto L5;
case 28:
goto L6;
case 29:
goto L4;
case 30:
goto L1;
case 31:
goto L3;
default:
goto L1;
}
L6:;
si0=3U;
l7=si0;
goto L3;
L5:;
si0=1U;
l7=si0;
goto L3;
L4:;
si0=2U;
l7=si0;
L3:;
si0=2U;
l6=si0;
L1:;
si0=l1;
si1=l2;
si0+=si1;
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L13:;
{
si0=l6;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
l1=si0;
goto L14;
L15:;
si0=l9;
l1=si0;
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L16:;
si0=l5;
si1=l9;
si0=si0 != si1;
l6=si0;
L14:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l2=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l1;
l5=si0;
si0=1U;
l2=si0;
goto L26;
L27:;
L29:;
{
si0=l1;
si1=l9;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l2;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l13=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l13;
si1=(U32)(sj1);
l8=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l8;
si2=l6;
si1+=si2;
l2=si1;
si2=l8;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 == si1;
if(si0){
goto L29;
}
L30:;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=26U;
l11=si0;
si0=26U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1624156U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624148U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624140U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624132U);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L28:;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
L26:;
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
f5823(i,si0,si1);
si0=62U;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l14=si0;
si1=255U;
si0&=si1;
l6=si0;
si1=-62U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
case 2:
goto L24;
case 3:
goto L24;
case 4:
goto L24;
case 5:
goto L24;
case 6:
goto L24;
case 7:
goto L24;
case 8:
goto L24;
case 9:
goto L24;
case 10:
goto L24;
case 11:
goto L24;
case 12:
goto L24;
case 13:
goto L24;
case 14:
goto L24;
case 15:
goto L24;
case 16:
goto L31;
case 17:
goto L24;
case 18:
goto L31;
default:
goto L32;
}
L32:;
si0=l6;
si1=110U;
si0=si0 != si1;
if(si0){
goto L24;
}
L31:;
si0=l7;
if(si0){
goto L23;
}
goto L18;
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=43U;
l11=si0;
si0=43U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=39U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1624915U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624908U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624900U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624892U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624884U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624876U);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L24:;
si0=l7;
switch(si0){
case 0:
goto L18;
case 1:
goto L76;
case 2:
goto L75;
case 3:
goto L74;
default:
goto L18;
}
L76:;
si0=1624284U;
l1=si0;
si0=l6;
si1=-63U;
si0+=si1;
switch(si0){
case 0:
goto L63;
case 1:
goto L73;
case 2:
goto L73;
case 3:
goto L71;
case 4:
goto L73;
case 5:
goto L73;
case 6:
goto L73;
case 7:
goto L73;
case 8:
goto L73;
case 9:
goto L68;
case 10:
goto L66;
case 11:
goto L73;
case 12:
goto L73;
case 13:
goto L66;
case 14:
goto L73;
case 15:
goto L73;
case 16:
goto L73;
case 17:
goto L73;
case 18:
goto L64;
case 19:
goto L73;
case 20:
goto L73;
case 21:
goto L73;
case 22:
goto L73;
case 23:
goto L73;
case 24:
goto L73;
case 25:
goto L73;
case 26:
goto L73;
case 27:
goto L73;
case 28:
goto L73;
case 29:
goto L73;
case 30:
goto L73;
case 31:
goto L73;
case 32:
goto L73;
case 33:
goto L73;
case 34:
goto L73;
case 35:
goto L72;
case 36:
goto L70;
case 37:
goto L33;
case 38:
goto L62;
case 39:
goto L61;
case 40:
goto L73;
case 41:
goto L69;
case 42:
goto L67;
case 43:
goto L73;
case 44:
goto L73;
case 45:
goto L67;
case 46:
goto L73;
case 47:
goto L73;
case 48:
goto L73;
case 49:
goto L17;
case 50:
goto L65;
case 51:
goto L73;
case 52:
goto L17;
case 53:
goto L73;
case 54:
goto L73;
case 55:
goto L73;
case 56:
goto L73;
case 57:
goto L17;
default:
goto L73;
}
L75:;
si0=1624284U;
l1=si0;
si0=l6;
si1=-63U;
si0+=si1;
switch(si0){
case 0:
goto L50;
case 1:
goto L60;
case 2:
goto L60;
case 3:
goto L58;
case 4:
goto L60;
case 5:
goto L60;
case 6:
goto L60;
case 7:
goto L60;
case 8:
goto L60;
case 9:
goto L55;
case 10:
goto L53;
case 11:
goto L60;
case 12:
goto L60;
case 13:
goto L53;
case 14:
goto L60;
case 15:
goto L60;
case 16:
goto L60;
case 17:
goto L60;
case 18:
goto L51;
case 19:
goto L60;
case 20:
goto L60;
case 21:
goto L60;
case 22:
goto L60;
case 23:
goto L60;
case 24:
goto L60;
case 25:
goto L60;
case 26:
goto L60;
case 27:
goto L60;
case 28:
goto L60;
case 29:
goto L60;
case 30:
goto L60;
case 31:
goto L60;
case 32:
goto L60;
case 33:
goto L60;
case 34:
goto L60;
case 35:
goto L59;
case 36:
goto L57;
case 37:
goto L47;
case 38:
goto L49;
case 39:
goto L48;
case 40:
goto L60;
case 41:
goto L56;
case 42:
goto L54;
case 43:
goto L60;
case 44:
goto L60;
case 45:
goto L54;
case 46:
goto L60;
case 47:
goto L60;
case 48:
goto L60;
case 49:
goto L17;
case 50:
goto L52;
case 51:
goto L60;
case 52:
goto L17;
case 53:
goto L60;
case 54:
goto L60;
case 55:
goto L60;
case 56:
goto L60;
case 57:
goto L17;
default:
goto L60;
}
L74:;
si0=1624284U;
l1=si0;
si0=l6;
si1=-63U;
si0+=si1;
switch(si0){
case 0:
goto L36;
case 1:
goto L46;
case 2:
goto L46;
case 3:
goto L44;
case 4:
goto L46;
case 5:
goto L46;
case 6:
goto L46;
case 7:
goto L46;
case 8:
goto L46;
case 9:
goto L41;
case 10:
goto L39;
case 11:
goto L46;
case 12:
goto L46;
case 13:
goto L39;
case 14:
goto L46;
case 15:
goto L46;
case 16:
goto L46;
case 17:
goto L46;
case 18:
goto L37;
case 19:
goto L46;
case 20:
goto L46;
case 21:
goto L46;
case 22:
goto L46;
case 23:
goto L46;
case 24:
goto L46;
case 25:
goto L46;
case 26:
goto L46;
case 27:
goto L46;
case 28:
goto L46;
case 29:
goto L46;
case 30:
goto L46;
case 31:
goto L46;
case 32:
goto L46;
case 33:
goto L46;
case 34:
goto L46;
case 35:
goto L45;
case 36:
goto L43;
case 37:
goto L33;
case 38:
goto L35;
case 39:
goto L34;
case 40:
goto L46;
case 41:
goto L42;
case 42:
goto L40;
case 43:
goto L46;
case 44:
goto L46;
case 45:
goto L40;
case 46:
goto L46;
case 47:
goto L46;
case 48:
goto L46;
case 49:
goto L17;
case 50:
goto L38;
case 51:
goto L46;
case 52:
goto L17;
case 53:
goto L46;
case 54:
goto L46;
case 55:
goto L46;
case 56:
goto L46;
case 57:
goto L17;
default:
goto L46;
}
L73:;
si0=1623547U;
si1=40U;
si2=1624636U;
f673(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=1624652U;
l1=si0;
goto L17;
L71:;
si0=1624668U;
l1=si0;
goto L17;
L70:;
si0=1624252U;
l1=si0;
goto L17;
L69:;
si0=1624492U;
l1=si0;
goto L17;
L68:;
si0=1624508U;
l1=si0;
goto L17;
L67:;
si0=1624524U;
l1=si0;
goto L17;
L66:;
si0=1624540U;
l1=si0;
goto L17;
L65:;
si0=1624556U;
l1=si0;
goto L17;
L64:;
si0=1624572U;
l1=si0;
goto L17;
L63:;
si0=1624780U;
l1=si0;
goto L17;
L62:;
si0=1624588U;
l1=si0;
goto L17;
L61:;
si0=1624604U;
l1=si0;
goto L17;
L60:;
si0=1623547U;
si1=40U;
si2=1624844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1624652U;
l1=si0;
goto L17;
L58:;
si0=1624668U;
l1=si0;
goto L17;
L57:;
si0=1624252U;
l1=si0;
goto L17;
L56:;
si0=1624684U;
l1=si0;
goto L17;
L55:;
si0=1624700U;
l1=si0;
goto L17;
L54:;
si0=1624716U;
l1=si0;
goto L17;
L53:;
si0=1624732U;
l1=si0;
goto L17;
L52:;
si0=1624748U;
l1=si0;
goto L17;
L51:;
si0=1624764U;
l1=si0;
goto L17;
L50:;
si0=1624780U;
l1=si0;
goto L17;
L49:;
si0=1624796U;
l1=si0;
goto L17;
L48:;
si0=1624812U;
l1=si0;
goto L17;
L47:;
si0=1624828U;
l1=si0;
goto L17;
L46:;
si0=1623547U;
si1=40U;
si2=1624860U;
f673(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1624652U;
l1=si0;
goto L17;
L44:;
si0=1624668U;
l1=si0;
goto L17;
L43:;
si0=1624252U;
l1=si0;
goto L17;
L42:;
si0=1624492U;
l1=si0;
goto L17;
L41:;
si0=1624508U;
l1=si0;
goto L17;
L40:;
si0=1624524U;
l1=si0;
goto L17;
L39:;
si0=1624540U;
l1=si0;
goto L17;
L38:;
si0=1624556U;
l1=si0;
goto L17;
L37:;
si0=1624572U;
l1=si0;
goto L17;
L36:;
si0=1624780U;
l1=si0;
goto L17;
L35:;
si0=1624588U;
l1=si0;
goto L17;
L34:;
si0=1624604U;
l1=si0;
goto L17;
L33:;
si0=1624620U;
l1=si0;
goto L17;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=25U;
l11=si0;
si0=25U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1624943U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624935U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624927U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624919U);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L21:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=43U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=1624284U;
l1=si0;
si0=l6;
si1=-63U;
si0+=si1;
switch(si0){
case 0:
goto L81;
case 1:
goto L96;
case 2:
goto L96;
case 3:
goto L94;
case 4:
goto L96;
case 5:
goto L96;
case 6:
goto L96;
case 7:
goto L96;
case 8:
goto L96;
case 9:
goto L90;
case 10:
goto L88;
case 11:
goto L96;
case 12:
goto L96;
case 13:
goto L86;
case 14:
goto L96;
case 15:
goto L84;
case 16:
goto L96;
case 17:
goto L77;
case 18:
goto L82;
case 19:
goto L96;
case 20:
goto L96;
case 21:
goto L96;
case 22:
goto L96;
case 23:
goto L96;
case 24:
goto L96;
case 25:
goto L96;
case 26:
goto L96;
case 27:
goto L96;
case 28:
goto L96;
case 29:
goto L96;
case 30:
goto L96;
case 31:
goto L96;
case 32:
goto L96;
case 33:
goto L96;
case 34:
goto L96;
case 35:
goto L95;
case 36:
goto L93;
case 37:
goto L78;
case 38:
goto L80;
case 39:
goto L79;
case 40:
goto L96;
case 41:
goto L91;
case 42:
goto L89;
case 43:
goto L96;
case 44:
goto L96;
case 45:
goto L87;
case 46:
goto L96;
case 47:
goto L85;
case 48:
goto L96;
case 49:
goto L17;
case 50:
goto L83;
case 51:
goto L96;
case 52:
goto L17;
case 53:
goto L96;
case 54:
goto L92;
case 55:
goto L96;
case 56:
goto L96;
case 57:
goto L17;
default:
goto L81;
}
L96:;
UNREACHABLE;
L95:;
si0=1624220U;
l1=si0;
goto L17;
L94:;
si0=1624236U;
l1=si0;
goto L17;
L93:;
si0=1624252U;
l1=si0;
goto L17;
L92:;
si0=1624268U;
l1=si0;
goto L17;
L91:;
si0=1624300U;
l1=si0;
goto L17;
L90:;
si0=1624316U;
l1=si0;
goto L17;
L89:;
si0=1624332U;
l1=si0;
goto L17;
L88:;
si0=1624268U;
l1=si0;
goto L17;
L87:;
si0=1624332U;
l1=si0;
goto L17;
L86:;
si0=1624268U;
l1=si0;
goto L17;
L85:;
si0=1624348U;
l1=si0;
goto L17;
L84:;
si0=1624364U;
l1=si0;
goto L17;
L83:;
si0=1624380U;
l1=si0;
goto L17;
L82:;
si0=1624396U;
l1=si0;
goto L17;
L81:;
si0=1624412U;
l1=si0;
goto L17;
L80:;
si0=1624428U;
l1=si0;
goto L17;
L79:;
si0=1624444U;
l1=si0;
goto L17;
L78:;
si0=1624460U;
l1=si0;
goto L17;
L77:;
si0=1624476U;
l1=si0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si1=-1U;
si0+=si1;
si1=0U;
si2=l11;
si1-=si2;
si0&=si1;
si1=0U;
si2=l15;
si0=si2?si0:si1;
si1=0U;
si2=l11;
si0=si2?si0:si1;
l15=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l16=si0;
if(si0){
goto L97;
}
si0=l16;
si1=l11;
si2=l15;
si1+=si2;
l17=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L97;
}
si0=0U;
l16=si0;
si0=l6;
si1=-112U;
si0+=si1;
switch(si0){
case 0:
goto L99;
case 1:
goto L100;
case 2:
goto L100;
case 3:
goto L99;
case 4:
goto L100;
case 5:
goto L100;
case 6:
goto L100;
case 7:
goto L100;
case 8:
goto L98;
default:
goto L100;
}
L100:;
si0=l2;
l16=si0;
goto L98;
L99:;
si0=1U;
l16=si0;
L98:;
si0=l10;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L101;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
f7268(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
L101:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l14;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
sj0=i64_load32_s(&i->m0,(U64)si0);
si1=l2;
sj1=(U64)(I64)(I32)(si1);
sj0*=sj1;
l13=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l13;
si1=(U32)(sj1);
l1=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l17;
si2=l1;
si1+=si2;
l11=si1;
si2=l17;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L12;
}
si0=l16;
si1=l12;
si0+=si1;
l12=si0;
si0=2U;
l6=si0;
goto L13;
L97:;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=26U;
l11=si0;
si0=26U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1624156U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624148U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624140U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624132U);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=26U;
l11=si0;
si0=26U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1624156U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624148U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624140U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1624132U);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L11:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L102;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L102:;
si0=l11;
l10=si0;
L8:;
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=2968908U;
si1=l3;
f13043(i,si0,si1);
L103:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
si0=si0 != si1;
if(si0){
goto L104;
}
f15042(i);
UNREACHABLE;
L104:;
si0=l3;
si1=l1;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5823(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj2,sj3,sj4;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
si2=-63U;
si1+=si2;
l1=si1;
si2=255U;
si1&=si2;
si2=57U;
si1=si1 > si2;
sj2=119724755996203510ULL;
si3=l1;
sj3=(U64)(si3);
sj4=255ULL;
sj3&=sj4;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1|=si2;
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

U32 f5824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l8;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=41U;
si0+=si1;
l12=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=41U;
si0+=si1;
l13=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=4U;
si0|=si1;
l14=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l15=si0;
si0=1624201U;
sj0=(U64)(si0);
sj1=68719476736ULL;
sj0|=sj1;
l16=sj0;
si0=l8;
l6=si0;
L5:;
{
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l17=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l5;
si1=2018U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l18=si0;
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=1625008U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=21U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
sj1=l16;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
sj1=1571958030337ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=1625016U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=1625016U;
sj1=(U64)(si1);
sj2=90194313216ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l0;
si1=1182732U;
si2=l18;
si3=2U;
si2=si2 == si3;
l18=si2;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l7;
si1=1182932U;
si2=l18;
si0=si2?si0:si1;
si1=l5;
si2=72U;
si1+=si2;
si2=l0;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L6;
L7:;
si0=l17;
si1=l2;
si2=1624984U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l17;
si0+=si1;
l0=si0;
si0=l2;
si1=l17;
si0-=si1;
l2=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=-112U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L16;
case 2:
goto L16;
case 3:
goto L20;
case 4:
goto L16;
case 5:
goto L16;
case 6:
goto L16;
case 7:
goto L16;
case 8:
goto L21;
default:
goto L16;
}
L21:;
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=l0;
si1=l7;
si0+=si1;
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L8;
L20:;
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=1624158U;
si1=43U;
si2=1625072U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=1624158U;
si1=43U;
si2=1625104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l5;
si1=72U;
si0+=si1;
si1=l4;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
f12280(i,si0,si1,si2);
si0=l17;
si1=l17;
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
si0=l17;
f7690(i,si0);
L22:;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=l0;
si1=l7;
si0+=si1;
l1=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l17=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
l18=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l13;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l14;
si1=32U;
si0+=si1;
si1=l15;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=24U;
si0+=si1;
si1=l15;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
si1=l15;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=2U;
si0+=si1;
si1=l13;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l18;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l0;
si2=l7;
f12330(i,si0,si1,si2);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L24:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l0=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
f15271(i,si0);
L25:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L8;
L23:;
si0=l17;
si0=!(si0);
if(si0){
goto L8;
}
goto L15;
L17:;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=l0;
si1=l7;
si0+=si1;
l1=si0;
si0=l6;
si1=4U;
si0+=si1;
l18=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si1=72U;
si0+=si1;
si1=l4;
si2=l6;
f12280(i,si0,si1,si2);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l6;
f7690(i,si0);
L28:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l17=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l13;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l14;
si1=32U;
si0+=si1;
si1=l15;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=24U;
si0+=si1;
si1=l15;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
si1=l15;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=2U;
si0+=si1;
si1=l13;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l0;
si2=l7;
f12326(i,si0,si1,si2);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
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
goto L29;
}
si0=l6;
f7690(i,si0);
L29:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l6;
f15271(i,si0);
L30:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L9;
L27:;
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
goto L9;
}
si0=l6;
f7690(i,si0);
goto L9;
L26:;
si0=l18;
l6=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L8;
}
goto L15;
L16:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l1=si0;
L31:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L32;
}
si0=l0;
l1=si0;
goto L8;
L32:;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l9;
l6=si0;
si0=l0;
l1=si0;
goto L8;
L33:;
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l4;
si1=l17;
si2=l0;
si3=l7;
si4=l18;
si0=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
l17=si0;
si0=l0;
si1=l7;
si0+=si1;
l0=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L31;
}
}
L15:;
si0=l9;
si1=l6;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l9;
si1=l6;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l0=si0;
L35:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L36;
}
si0=l2;
f7690(i,si0);
L36:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l10;
if(si0){
goto L2;
}
goto L1;
L14:;
si0=1623956U;
si1=35U;
si2=1625040U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1623956U;
si1=35U;
si2=1625056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1623956U;
si1=35U;
si2=1625088U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1623956U;
si1=35U;
si2=1625136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1624158U;
si1=43U;
si2=1625120U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l18;
l6=si0;
L8:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l9;
si1=l6;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l9;
si1=l6;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l0=si0;
L38:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L39;
}
si0=l2;
f7690(i,si0);
L39:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L38;
}
}
L37:;
si0=0U;
l17=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=1625192U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
f63(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=2968908U;
si1=l4;
f13043(i,si0,si1);
L40:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
l6=si0;
si1=l6;
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
goto L41;
}
f15042(i);
UNREACHABLE;
L41:;
si0=l4;
si1=l6;
si2=l5;
si0=f7173(i,si0,si1,si2);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l8;
l6=si0;
L43:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L44;
}
si0=l2;
f7690(i,si0);
L44:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l8;
f15271(i,si0);
L1:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l17;
L0:;
return si0;
}

void f5825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=4U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l8;
if(si0){
goto L8;
}
si0=l9;
l6=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l6=si0;
goto L7;
L9:;
si0=l8;
si0=f15269(i,si0);
l6=si0;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=0U;
l10=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=1624201U;
sj0=(U64)(si0);
sj1=68719476736ULL;
sj0|=sj1;
l12=sj0;
L11:;
{
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l5;
si1=2018U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l8=si0;
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=1625248U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=21U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=l12;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=1760936591361ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=1625016U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1625016U;
sj1=(U64)(si1);
sj2=90194313216ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=1182732U;
si2=l8;
si3=2U;
si2=si2 == si3;
l8=si2;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=1182932U;
si2=l8;
si0=si2?si0:si1;
si1=l5;
si2=24U;
si1+=si2;
si2=l1;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
goto L12;
L13:;
si0=l7;
si1=l3;
si2=1625216U;
f662(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si1=l7;
si0+=si1;
l2=si0;
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=-112U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L22;
case 2:
goto L22;
case 3:
goto L24;
case 4:
goto L22;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L25;
default:
goto L22;
}
L25:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
goto L14;
L24:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l1;
if(si0){
goto L27;
}
si0=1U;
l6=si0;
goto L26;
L27:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
L26:;
si0=l6;
si1=l2;
si2=l1;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l7;
si1=24U;
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
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
si1=l7;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L28:;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L14;
L23:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
goto L29;
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=1U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=-1U;
si1+=si2;
l8=si1;
si2=l7;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L17;
}
L31:;
si0=l6;
si1=l2;
si2=1U;
si1+=si2;
si2=l7;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l13;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8110(i,si0,si1,si2);
l6=si0;
L29:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l5;
si1=l7;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L32:;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L14;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
L33:;
{
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l2;
si2=l1;
si3=l13;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
si1=l7;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L34:;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
goto L33;
}
L21:;
si0=l1;
si1=l3;
si2=1625256U;
f662(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1623956U;
si1=35U;
si2=1625272U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=1623956U;
si1=35U;
si2=1625288U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=1623956U;
si1=35U;
si2=1625320U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1624158U;
si1=43U;
si2=1625304U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l3=si0;
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1625372U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=2968908U;
si1=l4;
f13043(i,si0,si1);
L35:;
si0=1U;
l10=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=l5;
si0=f7173(i,si0,si1,si2);
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f5826(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1625419U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625396U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=150323855395ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
goto L7;
}
si0=l1;
si1=l5;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L3;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
if(si0){
goto L3;
}
si0=l3;
si1=l5;
si2=56U;
si1+=si2;
f5521(i,si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
}
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
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919904U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625436U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625423U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
l4=si0;
si1=l4;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L4;
L8:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
goto L4;
L5:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L13:;
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
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1625419U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625396U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=150323855395ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
goto L7;
}
si0=l1;
si1=l5;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L3;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5520(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
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
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919907U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625436U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625423U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
l4=si0;
si1=l4;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L4;
L8:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L4;
L5:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L13:;
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
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1625419U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625396U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=150323855395ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
goto L7;
}
si0=l1;
si1=l5;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L3;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5516(i,si0,si1);
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
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
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919915U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625436U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625423U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
l4=si0;
si1=l4;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L4;
L8:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+10U);
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=0U;
l1=si0;
goto L4;
L5:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L13:;
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
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f7726(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1625419U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625412U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625396U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=150323855395ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
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
goto L7;
}
si0=l1;
si1=l5;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
goto L3;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f5518(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
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
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1919913U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625436U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1625423U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968908U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2968908U;
si1=l1;
f13043(i,si0,si1);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2968912U);
l4=si0;
si1=l4;
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
goto L7;
}
si0=l1;
si1=l4;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L4;
L8:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l1=si0;
goto L4;
L5:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L13:;
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
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}


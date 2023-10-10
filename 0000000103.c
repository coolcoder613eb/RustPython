#include "w2c2_base.h"

#include "rustpython.h"

void f10330(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6249(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L3;
}
si0=l2;
si1=88U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l6=si0;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si0=f8112(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10331(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
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
f6205(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=l8;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
if(si0){
goto L3;
}
L4:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=56U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l8;
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

void f10332(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
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
f6104(i,si0,si1,si2);
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
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=l2;
si0=f10333(i,si0,si1,si2);
l3=si0;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l5;
l3=si0;
goto L1;
L3:;
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
goto L1;
}
si0=l5;
f7690(i,si0);
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

U32 f10333(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=l1;
si2=l2;
si0=f10438(i,si0,si1,si2);
l4=si0;
goto L2;
L17:;
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
goto L1;
}
si0=l2;
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
goto L1;
}
si0=l5;
si1=1208U;
si0+=si1;
si1=1852692U;
si2=4U;
si3=l4;
si0=f12275(i,si0,si1,si2,si3);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l4;
si0=f9951(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si2=l4;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
l6=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L1;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
L19:;
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
goto L21;
}
si0=l4;
f7690(i,si0);
L21:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l4=si0;
goto L4;
L18:;
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
goto L22;
}
si0=l1;
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
goto L1;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l1;
f14775(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L4;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
L24:;
{
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=72U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l4=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l6;
l4=si0;
goto L10;
L25:;
si0=l6;
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
goto L1;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
f14775(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L11;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=76U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l4=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L26;
default:
goto L28;
}
L28:;
si0=l3;
si1=16U;
si0+=si1;
si1=39U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852696U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852727U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852712U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852704U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=39U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l3;
si2=80U;
si1+=si2;
si0=f7580(i,si0,si1);
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
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
goto L12;
}
goto L13;
L27:;
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=76U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L14;
default:
goto L30;
}
L30:;
si0=l3;
si1=8U;
si0+=si1;
si1=39U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852696U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852727U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852712U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1852704U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=39U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l3;
si2=80U;
si1+=si2;
si0=f7580(i,si0,si1);
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L14;
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
goto L14;
}
goto L15;
L29:;
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=76U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
switch(si0){
case 0:
goto L33;
case 1:
goto L31;
case 2:
goto L32;
default:
goto L31;
}
L33:;
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
goto L34;
}
si0=l4;
f7690(i,si0);
L34:;
si0=l2;
si0=f10439(i,si0);
l4=si0;
L32:;
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
goto L15;
}
goto L14;
L31:;
si0=l4;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
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
si0=l0;
si1=l2;
si2=l5;
si3=l7;
si0=f13616(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L14;
}
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
goto L36;
}
si0=l5;
f7690(i,si0);
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
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
goto L37;
}
si0=l4;
f7690(i,si0);
L37:;
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
goto L24;
}
si0=l6;
f7690(i,si0);
goto L24;
L26:;
}
si0=l5;
l4=si0;
goto L12;
L23:;
si0=l4;
si1=l6;
f10413(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
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
goto L8;
}
si0=l2;
f7690(i,si0);
goto L8;
L16:;
si0=l3;
si1=92U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1857292U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=1851264U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=1857324U;
f683(i,si0,si1);
UNREACHABLE;
L15:;
si0=l7;
f7690(i,si0);
L14:;
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
goto L12;
}
L13:;
si0=l5;
f7690(i,si0);
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
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
goto L11;
}
si0=l2;
f7690(i,si0);
L11:;
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
goto L10;
}
si0=l6;
f7690(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
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
goto L4;
}
si0=l2;
f7690(i,si0);
goto L4;
L9:;
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=l6;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
l4=si0;
goto L6;
L39:;
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
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l5;
f14775(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+76U,si1);
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
goto L40;
}
si0=l5;
f7690(i,si0);
L40:;
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
goto L41;
}
si0=l6;
f7690(i,si0);
L41:;
L44:;
{
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=76U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l4=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l4;
si1=l6;
f10413(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
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
goto L8;
}
si0=l2;
f7690(i,si0);
goto L8;
L47:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l6;
si3=l2;
f7712(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L45;
}
goto L43;
L46:;
si0=l6;
l4=si0;
goto L42;
L45:;
si0=l0;
si1=l2;
si2=l6;
si3=l4;
si0=f13616(i,si0,si1,si2,si3);
l4=si0;
if(si0){
goto L43;
}
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
goto L44;
}
si0=l6;
f7690(i,si0);
goto L44;
}
L43:;
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
goto L42;
}
si0=l6;
f7690(i,si0);
L42:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l6=si0;
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
goto L4;
}
goto L5;
L38:;
si0=1914132U;
si1=70U;
si2=l3;
si3=80U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L7:;
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
goto L4;
}
L5:;
si0=l6;
f7690(i,si0);
L4:;
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
L3:;
si0=l1;
f7690(i,si0);
L2:;
si0=l3;
si1=144U;
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

void f10334(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-93971722028433032ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2390353658247002732ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=l7;
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
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10335(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10336(i,si0,si1,si2,si3);
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

void f10336(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
f6198(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L3;
}
L4:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=56U;
si0+=si1;
f1433(i,si0);
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
f10448(i,si0,si1,si2);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l2;
f14707(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
si3=l7;
si4=l2;
f14516(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+33U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l6;
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
si0=l4;
si1=28U;
si0+=si1;
f8992(i,si0);
L8:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1264U;
si2=1268U;
si3=l3;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
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
l6=si0;
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
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
f7690(i,si0);
L9:;
si0=l8;
l3=si0;
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si1=28U;
si0+=si1;
f8992(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10337(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
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
l6=si0;
goto L1;
L2:;
si0=0U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f10338(i,si0,si1,si2);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10338(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L10;
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
l6=si0;
L11:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L12;
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
l6=si0;
L13:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=255U;
l7=si0;
goto L7;
L9:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=1851460U;
si1=43U;
si2=1853676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l0;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l7=si0;
L7:;
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
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L15;
}
si0=255U;
l6=si0;
goto L14;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l6=si0;
L14:;
si0=l4;
si1=1264U;
si2=1268U;
si3=l6;
si4=l7;
si3|=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L5;
}
goto L1;
L6:;
si0=l3;
si1=l0;
si2=56U;
si1+=si2;
si2=l1;
si3=l2;
f13399(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si0=f12112(i,si0,si1);
l7=si0;
goto L2;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
L5:;
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
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L4:;
si0=1851460U;
si1=43U;
si2=1853660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1851460U;
si1=43U;
si2=1853660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L17:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f10339(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6090(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
si0=l5;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si0=f13616(i,si0,si1,si2,si3);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
f7690(i,si0);
L4:;
si0=l7;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L5:;
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
goto L6;
}
si0=l5;
f7690(i,si0);
L6:;
si0=l7;
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
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

void f10340(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=112U;
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
f6104(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
si0=l4;
si1=96U;
si0+=si1;
si1=l3;
si2=l2;
f7746(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L6;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+104U);
f13617(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l7=si0;
si0=0U;
l8=si0;
goto L4;
L5:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
l9=si0;
si0=1U;
l8=si0;
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1264U;
si2=1268U;
si3=l9;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L8:;
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
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
si0=l7;
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
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

void f10341(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10342(i,si0,si1,si2,si3);
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

void f10342(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f6121(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L4;
}
si0=1U;
l6=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L5;
}
L6:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L5:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=56U;
si0+=si1;
f1433(i,si0);
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
f10446(i,si0,si1,si2);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l2;
f14707(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
si2=l3;
si3=l7;
si4=l2;
f14653(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
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
si0=l4;
si1=60U;
si0+=si1;
f8992(i,si0);
L11:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L8;
}
goto L1;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=60U;
si0+=si1;
f8992(i,si0);
goto L3;
L9:;
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
goto L12;
}
si0=l8;
l3=si0;
goto L3;
L12:;
si0=l3;
f7690(i,si0);
si0=l8;
l3=si0;
goto L3;
L8:;
si0=0U;
l6=si0;
si0=0U;
l2=si0;
si0=l8;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
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
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L13:;
si0=l3;
si1=l8;
si2=l2;
si0=f8167(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
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

void f10343(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10344(i,si0,si1,si2,si3);
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

void f10344(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f6198(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L4;
}
si0=1U;
l6=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L5;
}
L6:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L5:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=56U;
si0+=si1;
f1433(i,si0);
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
f10448(i,si0,si1,si2);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l2;
f14707(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
si2=l3;
si3=l7;
si4=l2;
f14645(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
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
si0=l4;
si1=60U;
si0+=si1;
f8992(i,si0);
L11:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L8;
}
goto L1;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=60U;
si0+=si1;
f8992(i,si0);
goto L3;
L9:;
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
goto L12;
}
si0=l8;
l3=si0;
goto L3;
L12:;
si0=l3;
f7690(i,si0);
si0=l8;
l3=si0;
goto L3;
L8:;
si0=0U;
l6=si0;
si0=0U;
l2=si0;
si0=l8;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
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
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L13:;
si0=l3;
si1=l8;
si2=l2;
si0=f8167(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
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

void f10345(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f6233(i,si0,si1,si2);
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

void f10346(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
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
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6131(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
si3=l3;
si4=l2;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+88U);
f13634(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10347(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10348(i,si0,si1,si2,si3);
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

void f10348(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f6209(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=1U;
l3=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l7=sj0;
si0=(U32)(sj0);
l8=si0;
if(si0){
goto L5;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
L5:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
if(si0){
goto L6;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
L6:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l2=si0;
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
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
l2=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L7:;
si0=l4;
si1=l3;
si2=l2;
si0=f8098(i,si0,si1,si2);
l2=si0;
si0=0U;
l3=si0;
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10349(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10350(i,si0,si1,si2,si3);
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

void f10350(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6127(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=56U;
si0+=si1;
f1433(i,si0);
L6:;
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=0U;
si2=l6;
si3=-1U;
si2+=si3;
l7=si2;
si3=l7;
si4=l6;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
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
l3=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l3=si0;
L7:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si0=f8071(i,si0,si1,si2);
l3=si0;
L3:;
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
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10351(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10352(i,si0,si1,si2,si3);
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

void f10352(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6127(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L3;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
}
si0=0U;
l2=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l6;
si1=68U;
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
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L4:;
si0=l3;
si1=l7;
si2=l2;
si0=f8063(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10353(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
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
l6=si0;
goto L1;
L2:;
si0=0U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f10354(i,si0,si1,si2);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10354(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L10;
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
l6=si0;
L11:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L12;
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
l6=si0;
L13:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=255U;
l6=si0;
goto L7;
L9:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=1851460U;
si1=43U;
si2=1853676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l0;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l6=si0;
L7:;
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
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l7=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l7=si0;
L14:;
si0=l4;
si1=1264U;
si2=1268U;
si3=l6;
si4=0U;
si3=si3 != si4;
si4=l7;
si3^=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L5;
}
goto L1;
L6:;
si0=l3;
si1=l0;
si2=56U;
si1+=si2;
si2=l1;
si3=l2;
f13398(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si0=f12112(i,si0,si1);
l7=si0;
goto L2;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
L5:;
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
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L4:;
si0=1851460U;
si1=43U;
si2=1853660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1851460U;
si1=43U;
si2=1853660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
L16:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f10355(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10356(i,si0,si1,si2,si3);
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

void f10356(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6249(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L3;
}
si0=l2;
si1=88U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=328U;
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
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L2;
}
si0=l2;
si1=88U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L2;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=256U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=l8;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l2;
si0=f8098(i,si0,si1,si2);
l3=si0;
L3:;
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
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10357(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
si1=88U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6259(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f10358(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
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
goto L1;
}
si0=l5;
f7690(i,si0);
L1:;
si0=l0;
si1=l3;
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

void f10358(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
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
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=46U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=38U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858507U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858501U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858493U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858485U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858477U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858469U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
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
sj1=197568495662ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l6;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L3;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=80U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l5=si0;
si0=51U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=1858418U;
si2=1858367U;
si3=l5;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=47U;
si0+=si1;
si1=l5;
si2=47U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
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
sj1=219043332147ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L4;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=76U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
si0=f7375(i,si0,si1);
l6=si0;
goto L4;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=59U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=55U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1858363U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858356U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858348U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858340U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858332U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858324U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858316U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858308U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=476U;
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
sj1=253403070523ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L4;
L14:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si2=56U;
si1+=si2;
si2=l5;
si3=l2;
si4=l3;
f10768(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l8;
if(si0){
goto L25;
}
si0=4U;
l6=si0;
si0=0U;
l5=si0;
goto L24;
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L6;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=32U;
si2+=si3;
si0=f7572(i,si0,si1,si2);
l8=si0;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=80U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=1U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
if(si0){
goto L21;
}
si0=l8;
l6=si0;
goto L1;
L22:;
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6853603845811815909ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7356056383356521210ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L26;
}
si0=l2;
l6=si0;
goto L1;
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=80U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858544U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858539U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858531U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858523U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1858515U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
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
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
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
goto L27;
}
si0=l2;
f7690(i,si0);
L27:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
switch(si0){
case 0:
goto L1;
case 1:
goto L19;
case 2:
goto L20;
default:
goto L19;
}
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l2=si1;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L30:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L28;
}
L29:;
si0=l9;
si1=328U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l2=si1;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L31:;
{
si0=l1;
if(si0){
goto L32;
}
si0=l8;
l6=si0;
goto L1;
L32:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L31;
}
}
L28:;
si0=l3;
si1=0U;
si0=f7375(i,si0,si1);
l6=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f7690(i,si0);
goto L1;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L13:;
si0=1U;
si1=46U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1U;
si1=51U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1U;
si1=59U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f10434(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L1;
L7:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=80U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si2=56U;
si1+=si2;
si2=l8;
si3=l5;
si4=l6;
si5=l7;
si6=l3;
f10864(i,si0,si1,si2,si3,si4,si5,si6);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l5;
si2=56U;
si1+=si2;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f10434(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L5;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L37;
default:
goto L35;
}
L37:;
si0=1U;
l5=si0;
si0=l1;
si1=l7;
si2=l3;
si0=f10576(i,si0,si1,si2);
l6=si0;
goto L3;
L36:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6853603845811815909ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7356056383356521210ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L34;
}
L35:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l7;
si3=l3;
f14842(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L5;
L34:;
si0=l1;
si1=l1;
si2=l3;
si1=f10577(i,si1,si2);
si2=l3;
si0=f10576(i,si0,si1,si2);
l6=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
f7690(i,si0);
goto L3;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l5;
if(si0){
goto L38;
}
si0=0U;
l5=si0;
goto L3;
L38:;
si0=l1;
si1=l6;
si2=l3;
si0=f10576(i,si0,si1,si2);
l6=si0;
goto L3;
L4:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
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
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10359(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10360(i,si0,si1,si2,si3);
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

void f10360(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=l2;
f6044(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=48U;
si0+=si1;
si1=l5;
si2=l2;
f7740(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2362(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
si2=l5;
si3=0U;
si2=si2 != si3;
f2365(i,si0,si1,si2);
goto L3;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
l3=si0;
goto L1;
L6:;
si0=l3;
f7690(i,si0);
si0=l6;
l3=si0;
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L7;
L8:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si0=f10055(i,si0,si1);
l8=si0;
si0=0U;
l6=si0;
L7:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
f7690(i,si0);
L9:;
si0=l6;
if(si0){
goto L10;
}
si0=l8;
l3=si0;
goto L1;
L10:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
l5=si0;
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

void f10361(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
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
f5957(i,si0,si1,si2);
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
si1=72U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=0U;
l7=si0;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l3;
si3=80U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
l6=si1;
si2=l6;
si3=l7;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
L4:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+72U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l6;
if(si0){
goto L5;
}
si0=l3;
si1=72U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L5:;
si0=l7;
si1=l2;
si0=f12593(i,si0,si1);
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

void f10362(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10363(i,si0,si1,si2,si3);
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

void f10363(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f6204(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
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
si1=24U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l8=si0;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l8;
si0=f8112(i,si0,si1,si2);
l3=si0;
si0=0U;
l2=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10364(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4559927925765661819ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8798821908827603765ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10365(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4559927925765661819ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8798821908827603765ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
l7=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f12593(i,si0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l7;
si1=l8;
si2=1943672U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f10366(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
l6=si0;
L8:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
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
si0=!(sj0);
if(si0){
goto L9;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l2;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
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
goto L3;
}
goto L4;
L9:;
si0=l2;
si1=100U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
sj1=l9;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L10:;
si0=l3;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
goto L5;
}
L11:;
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
L12:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=0U;
l7=si0;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+100U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l6;
if(si0){
goto L13;
}
si0=l2;
si1=100U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L13:;
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
goto L2;
}
goto L1;
L6:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l2;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=l2;
f7690(i,si0);
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l2=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
goto L0;
L1:;
si0=l2;
f7690(i,si0);
si0=l7;
L0:;
return si0;
}

void f10367(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f10368(i,si0,si1,si2,si3);
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

void f10368(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6127(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L3;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L2;
}
si0=0U;
l2=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l6;
si1=68U;
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
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L4:;
si0=l3;
si1=l7;
si2=l2;
si0=f8134(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10369(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f10370(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f12806(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10371(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
si2=l4;
si3=l3;
f13626(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l7=si0;
goto L2;
L3:;
si0=0U;
l7=si0;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si2=l3;
si3=l4;
f7709(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=1U;
l7=si0;
goto L2;
L4:;
si0=l6;
if(si0){
goto L2;
}
si0=1U;
l7=si0;
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
si0=l4;
si1=l3;
si0=f7581(i,si0,si1);
l6=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10372(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f12808(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10373(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f12810(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10374(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L1;
}
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
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f10354(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10375(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=l2;
si3=l3;
si0=f13616(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l4;
si2=l2;
si0=f13629(i,si0,si1,si2);
L0:;
return si0;
}

void f10376(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f7746(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+40U);
f13617(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10377(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f7746(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+40U);
f13617(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10378(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f1250(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f12112(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10379(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=0U;
l3=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si1=!(sj1);
si0&=si1;
l3=si0;
L1:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+1U,si1);
L0:;
}

void f10380(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f1253(i,si0,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f12112(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10381(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f1262(i,si0,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f12112(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10382(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f12817(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10383(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si1=f10384(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f10384(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
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
si0=si0 != si1;
if(si0){
goto L6;
}
goto L1;
L7:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=56U;
si1+=si2;
f5520(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=5U;
si0+=si1;
l1=si0;
si1=262U;
si0=si0 < si1;
if(si0){
goto L8;
}
L9:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L11;
}
si0=l0;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L13;
}
si0=8U;
l0=si0;
si0=0U;
l6=si0;
goto L12;
L13:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l6;
if(si0){
goto L15;
}
si0=l8;
l0=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l8;
si1=l6;
si0=f15277(i,si0,si1);
l0=si0;
goto L14;
L16:;
si0=l6;
si0=f15269(i,si0);
l0=si0;
L14:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
L12:;
si0=l0;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l5=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l5;
sj0|=sj1;
l5=sj0;
si0=1U;
l6=si0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l0=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=68U;
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
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8146(i,si0,si1,si2);
l0=si0;
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l0;
si0=f8067(i,si0,si1,si2);
l0=si0;
goto L6;
L8:;
si0=l1;
si1=l3;
si2=1308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l3;
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
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
goto L1;
}
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l8;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l0;
si2=1857836U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f10385(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f10386(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=4757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4758U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f10387(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f1248(i,si0,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f12112(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10388(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L1;
}
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
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f10338(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10389(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
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
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=l3;
f10281(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
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

void f10390(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
sj2=l5;
si2=!(sj2);
si0=si2?si0:si1;
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
goto L2;
}
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
goto L2;
}
si0=l6;
si1=56U;
si0+=si1;
si1=l2;
si2=l3;
si0=f10333(i,si0,si1,si2);
l2=si0;
si0=!(si0);
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
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
f7690(i,si0);
L4:;
si0=l2;
l1=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L1;
}
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10391(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4759U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f10392(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
l7=si0;
if(si0){
goto L4;
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
l8=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L2;
}
goto L1;
L3:;
si0=0U;
si1=l1;
si2=56U;
si1+=si2;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
si1=l2;
sj2=l8;
sj3=0ULL;
si2=sj2 != sj3;
si0=si2?si0:si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
l2=si0;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
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
si0=l5;
si1=8U;
si0+=si1;
si1=l9;
si2=l7;
si3=l3;
si4=l4;
f12822(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L2;
L5:;
si0=l2;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l2=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L9:;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l5;
si1=l9;
si2=l7;
si3=56U;
si2+=si3;
si3=l4;
f12823(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L6;
L7:;
si0=l10;
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L6:;
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
goto L2;
}
si0=l7;
f7690(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10393(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f1019(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
si1=l2;
si2=72U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
si1=!(sj1);
si0&=si1;
l5=si0;
L4:;
si0=l4;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f12112(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10394(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L1;
}
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
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f10227(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10395(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f1254(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f12112(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10396(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=4757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10397(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f12827(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10398(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
f13307(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=80U;
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
goto L2;
}
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+16U);
l6=sd0;
si0=0U;
l2=si0;
si0=0U;
l1=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8146(i,si0,si1,si2);
l1=si0;
L5:;
sd0=l6;
si1=l5;
si2=l1;
si0=f8129(i,sd0,si1,si2);
l1=si0;
goto L3;
L4:;
si0=1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10399(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f12831(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10400(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
l3=si0;
L7:;
{
si0=l3;
f11156(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15271(i,si0);
L8:;
si0=l0;
si1=16U;
si0+=si1;
f10401(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
l3=si0;
L10:;
{
si0=l3;
f11159(i,si0);
si0=l3;
si1=80U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15271(i,si0);
L11:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
l3=si0;
L13:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L14:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
l3=si0;
L16:;
{
si0=l3;
f11159(i,si0);
si0=l3;
si1=80U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si1=4U;
si0+=si1;
f10401(i,si0);
L1:;
L0:;
}

void f10401(rustpythonInstance*i,U32 l0) {
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
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-11U;
si0+=si1;
l0=si0;
si1=19U;
si2=l0;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
case 5:
goto L22;
case 6:
goto L21;
case 7:
goto L20;
case 8:
goto L19;
case 9:
goto L18;
case 10:
goto L17;
case 11:
goto L16;
case 12:
goto L15;
case 13:
goto L14;
case 14:
goto L13;
case 15:
goto L12;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L9;
case 19:
goto L8;
case 20:
goto L7;
case 21:
goto L6;
case 22:
goto L5;
case 23:
goto L4;
case 24:
goto L3;
case 25:
goto L2;
default:
goto L28;
}
L28:;
si0=l1;
si1=20U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
f10401(i,si0);
L29:;
si0=l1;
si1=24U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
f10401(i,si0);
L30:;
si0=l1;
si1=28U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L27:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L32:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L26:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L25:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L24:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L23:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f11226(i,si0);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l0;
si1=12U;
si0+=si1;
l2=si0;
f11226(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L36:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=28U;
si0+=si1;
f10401(i,si0);
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f15271(i,si0);
L38:;
si0=l2;
f15271(i,si0);
L35:;
si0=l0;
si1=24U;
si0+=si1;
l2=si0;
f11226(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L39:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L41:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=28U;
si0+=si1;
f10401(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f15271(i,si0);
L43:;
si0=l2;
f15271(i,si0);
L40:;
si0=l0;
f15271(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L22:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=28U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L21:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L45:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l0;
f11156(i,si0);
L46:;
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L45;
}
}
L44:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L47:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L49:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L49;
}
}
L48:;
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
si0=l1;
f15271(i,si0);
goto L0;
L20:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L51:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L19:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L53:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l0;
si1=112U;
si0+=si1;
l6=si0;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l0=si0;
L55:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L55;
}
}
L54:;
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
goto L56;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L56:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L53;
}
}
L52:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L18:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L58:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l0;
si1=112U;
si0+=si1;
l6=si0;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l0=si0;
L60:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L60;
}
}
L59:;
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
goto L61;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L61:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L57:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L17:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L63:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l0;
si1=112U;
si0+=si1;
l6=si0;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l0=si0;
L65:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L65;
}
}
L64:;
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
goto L66;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L66:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L62:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L16:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l3=si0;
L68:;
{
si0=l5;
si1=l3;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
f11156(i,si0);
si0=l0;
si1=112U;
si0+=si1;
l6=si0;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l0=si0;
L70:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L70;
}
}
L69:;
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
goto L71;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L71:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L68;
}
}
L67:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L15:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L14:;
si0=l1;
si1=20U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L13:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L12:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L72:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L74:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L11:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L76:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L77:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L79:;
{
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l0;
si1=76U;
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
f11156(i,si0);
si0=l0;
si1=88U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L10:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L9:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L82:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L8:;
si0=l2;
si1=-2U;
si0+=si1;
l0=si0;
si1=4U;
si2=l0;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L88;
case 1:
goto L87;
case 2:
goto L86;
case 3:
goto L85;
default:
goto L83;
}
L88:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L87:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L86:;
si0=l2;
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L84;
L85:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
L90:;
{
si0=l0;
f11158(i,si0);
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L90;
}
}
L89:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
L84:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L83:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L7:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L6:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
si1=24U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L5:;
si0=l1;
si1=20U;
si0+=si1;
f10401(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L4:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L3:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L92:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
si0=l1;
f15271(i,si0);
goto L0;
L2:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L94:;
{
si0=l0;
f11156(i,si0);
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L1:;
si0=l1;
f15271(i,si0);
L0:;
}

void f10402(rustpythonInstance*i,U32 l0) {
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

U32 f10403(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
si0=-1U;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=3U;
si0&=si1;
if(si0){
goto L1;
}
si0=-1U;
si1=l4;
si2=l0;
si1+=si2;
si2=0U;
si3=l1;
si2-=si3;
si1&=si2;
si2=l0;
si1-=si2;
si2=2U;
si1>>=(si2&31);
si2=l0;
si3=3U;
si2&=si3;
si0=si2?si0:si1;
goto L0;
L1:;
si0=-1U;
si1=l1;
si1=I32_CTZ(si1);
l5=si1;
si2=2U;
si3=l5;
si4=2U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0<<=(si1&31);
si1=-1U;
si0^=si1;
si1=l0;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
sj1=1082274622760356609ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l5;
si0>>=(si1&31);
l3=si0;
si1=l4;
si2=l0;
si1&=si2;
si2=l5;
si1>>=(si2&31);
si0-=si1;
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=4U;
si1&=si2;
si2=l5;
si1>>=(si2&31);
l4=si1;
si2=1U;
si1>>=(si2&31);
si0|=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l4;
si2=l1;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
si0=l3;
si1=257U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l1;
si2=l4;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
si0=l3;
si1=65537U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l1;
si2=l4;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
L3:;
si0=l1;
si1=l0;
si0&=si1;
si1=l6;
si0*=si1;
si1=l0;
si0&=si1;
l3=si0;
L2:;
si0=l3;
L0:;
return si0;
}

void f10404(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10405(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10406(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10407(rustpythonInstance*i,U32 l0) {
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

void f10408(rustpythonInstance*i,U32 l0) {
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
si1=8U;
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
goto L2;
}
si0=l1;
f7690(i,si0);
L2:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
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
goto L3;
}
si0=l0;
f7690(i,si0);
L3:;
L0:;
}

void f10409(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10410(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10411(rustpythonInstance*i,U32 l0) {
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
f10412(i,si0);
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

void f10412(rustpythonInstance*i,U32 l0) {
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
f10411(i,si0);
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

void f10413(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
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
L2:;
si0=l1;
f7690(i,si0);
L1:;
L0:;
}

void f10414(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=21U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=12U;
si0*=si1;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-12U;
si0+=si1;
l6=si0;
si0=l0;
si1=32U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
si0=16U;
l10=si0;
L5:;
{
si0=l0;
si1=l8;
l11=si1;
si2=12U;
si1*=si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l1;
si1=l11;
si0-=si1;
l14=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
si1=l13;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=l15;
si0=si2?si0:si1;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l17;
si1=si3?si1:si2;
si2=l13;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
si3=l13;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l18=si3;
si4=l17;
si5=l18;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l19=si0;
si1=l17;
si2=l18;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=2U;
l19=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l12;
si0+=si1;
l18=si0;
si0=2U;
l19=si0;
L10:;
{
si0=l18;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l18;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l12;
si0=si2?si0:si1;
si1=l15;
si2=l16;
si3=l15;
si1=si3?si1:si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
l15=si2;
si3=l17;
si4=l15;
si5=l17;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l16=si0;
si1=l15;
si2=l17;
si1-=si2;
si2=l16;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l18;
si1=12U;
si0+=si1;
l18=si0;
si0=l15;
l17=si0;
si0=l20;
l16=si0;
si0=l12;
l15=si0;
si0=l14;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L10;
}
L9:;
si0=2U;
l19=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l12;
si0+=si1;
l18=si0;
si0=2U;
l19=si0;
L12:;
{
si0=l18;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l18;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l12;
si0=si2?si0:si1;
si1=l15;
si2=l16;
si3=l15;
si1=si3?si1:si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
l15=si2;
si3=l17;
si4=l15;
si5=l17;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l16=si0;
si1=l15;
si2=l17;
si1-=si2;
si2=l16;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l18;
si1=12U;
si0+=si1;
l18=si0;
si0=l15;
l17=si0;
si0=l20;
l16=si0;
si0=l12;
l15=si0;
si0=l14;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l14;
l19=si0;
L11:;
si0=l19;
si1=l11;
si0+=si1;
l8=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l19;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l19;
si1=1U;
si0>>=(si1&31);
l18=si0;
si0=l6;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
si0=l13;
l15=si0;
L15:;
{
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l15;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l16;
si1=l17;
si2=8U;
si1+=si2;
l14=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=-12U;
si0+=si1;
l17=si0;
si0=l15;
si1=12U;
si0+=si1;
l15=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L15;
}
goto L6;
}
L14:;
si0=l11;
si1=l8;
si2=1851396U;
f675(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l8;
si1=l1;
si2=1851396U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l14;
l19=si0;
L7:;
si0=l19;
si1=l11;
si0+=si1;
l8=si0;
L6:;
si0=l8;
si1=l11;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l8;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l19;
si1=10U;
si0=si0 < si1;
if(si0){
goto L19;
}
L21:;
si0=l8;
si1=l11;
si0-=si1;
l17=si0;
goto L18;
L20:;
si0=1851568U;
si1=44U;
si2=1851612U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=10U;
si0+=si1;
l17=si0;
si1=l1;
si2=l17;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l13;
si1=l8;
si2=l11;
si1-=si2;
l17=si1;
si2=l19;
si3=1U;
si4=l19;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
f10415(i,si0,si1,si2);
L18:;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=4U;
si0<<=(si1&31);
l15=si0;
if(si0){
goto L25;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l15=si0;
goto L24;
L25:;
si0=l15;
si0=f15269(i,si0);
l15=si0;
L24:;
si0=l15;
si0=!(si0);
if(si0){
goto L22;
}
si0=l9;
si1=1U;
si0<<=(si1&31);
l10=si0;
si0=l15;
si1=l5;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=l5;
f15271(i,si0);
si0=l15;
l5=si0;
L23:;
si0=l5;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l15;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l22=si0;
l9=si0;
si0=l22;
si1=2U;
si0=si0 < si1;
if(si0){
goto L16;
}
L26:;
{
si0=l5;
si1=l22;
l9=si1;
si2=-1U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
l19=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l9;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=2U;
l9=si0;
goto L16;
L31:;
si0=l5;
si1=l9;
si2=-3U;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l18;
si2=l17;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l9;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=3U;
l9=si0;
goto L16;
L32:;
si0=l19;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l18;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L16;
}
goto L29;
L30:;
si0=l9;
si1=3U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l5;
si1=l9;
si2=-3U;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
L29:;
si0=l15;
si1=l17;
si0=si0 < si1;
if(si0){
goto L27;
}
L28:;
si0=l9;
si1=-2U;
si0+=si1;
l13=si0;
L27:;
si0=l9;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l9;
si1=l13;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l5;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l15=si0;
si1=l5;
si2=l13;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l26=si1;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l15;
si1=l1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l0;
si1=l26;
si2=12U;
si1*=si2;
si0+=si1;
l18=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=12U;
si1*=si2;
l19=si1;
si0+=si1;
l17=si0;
si0=l15;
si1=12U;
si0*=si1;
l16=si0;
si0=l15;
si1=l26;
si0-=si1;
l12=si0;
si1=l20;
si0-=si1;
l15=si0;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l4;
si1=l17;
si2=l15;
si3=12U;
si2*=si3;
l19=si2;
si0=f15390(i,si0,si1,si2);
l14=si0;
si1=l19;
si0+=si1;
l19=si0;
si0=l20;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
si0=l15;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
si0=l6;
si1=l16;
si0+=si1;
l15=si0;
L40:;
{
si0=l15;
si1=l19;
si2=-12U;
si3=0U;
si4=l19;
si5=-12U;
si4+=si5;
l16=si4;
si4=i32_load(&i->m0,(U64)si4);
l12=si4;
si5=l16;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l12;
si4=si6?si4:si5;
si5=l17;
si6=-12U;
si5+=si6;
l12=si5;
si5=i32_load(&i->m0,(U64)si5);
l11=si5;
si6=l12;
si7=4U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si7=l11;
si5=si7?si5:si6;
si6=l16;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l16=si6;
si7=l12;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
l12=si7;
si8=l16;
si9=l12;
si8=si8 < si9;
si6=si8?si6:si7;
si4=f15389(i,si4,si5,si6);
l11=si4;
si5=l16;
si6=l12;
si5-=si6;
si6=l11;
si4=si6?si4:si5;
l16=si4;
si5=-1U;
si4=(U32)((I32)si4>(I32)si5);
l12=si4;
si2=si4?si2:si3;
si1+=si2;
l19=si1;
si2=l17;
si3=l16;
si4=31U;
si3=(U32)((I32)si3>>(si4&31));
si4=12U;
si3*=si4;
si2+=si3;
l17=si2;
si3=l12;
si1=si3?si1:si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l15;
si1=-12U;
si0+=si1;
l15=si0;
si0=l19;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L34;
}
goto L40;
}
L39:;
si0=l4;
si1=l18;
si2=l19;
si0=f15390(i,si0,si1,si2);
l15=si0;
si1=l19;
si0+=si1;
l19=si0;
si0=l20;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L41;
}
si0=l15;
l15=si0;
goto L33;
L41:;
si0=l12;
si1=l20;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L42;
}
si0=l15;
l15=si0;
goto L33;
L42:;
si0=l0;
si1=l16;
si0+=si1;
l14=si0;
si0=l15;
l15=si0;
L43:;
{
si0=l18;
si1=l15;
si2=l17;
si3=l17;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l17;
si5=4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l16;
si3=si5?si3:si4;
si4=l15;
si4=i32_load(&i->m0,(U64)si4);
l16=si4;
si5=l15;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l16;
si4=si6?si4:si5;
si5=l17;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l16=si5;
si6=l15;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l12=si6;
si7=l16;
si8=l12;
si7=si7 < si8;
si5=si7?si5:si6;
si3=f15389(i,si3,si4,si5);
l11=si3;
si4=l16;
si5=l12;
si4-=si5;
si5=l11;
si3=si5?si3:si4;
l11=si3;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
l16=si3;
si1=si3?si1:si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=12U;
si0+=si1;
l18=si0;
si0=l15;
si1=l16;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l17;
si1=l11;
si2=31U;
si1>>=(si2&31);
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L43;
}
goto L33;
}
L38:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1851256U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1851264U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1851412U;
f683(i,si0,si1);
UNREACHABLE;
L37:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1851256U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1851264U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1851428U;
f683(i,si0,si1);
UNREACHABLE;
L36:;
si0=l26;
si1=l15;
si2=1851444U;
f675(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l15;
si1=l1;
si2=1851444U;
f666(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l17;
l18=si0;
si0=l14;
l15=si0;
L33:;
si0=l18;
si1=l15;
si2=l19;
si3=l15;
si2-=si3;
si0=f15390(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l20;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l9;
si3=l13;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=1U;
l9=si0;
si0=l22;
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
goto L16;
}
L22:;
si0=1851460U;
si1=43U;
si2=1851536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l11;
si1=l8;
si2=1851552U;
f675(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=l1;
si0=si0 < si1;
if(si0){
goto L5;
}
}
si0=l5;
f15271(i,si0);
si0=l4;
f15271(i,si0);
goto L2;
L4:;
si0=1851460U;
si1=43U;
si2=1851504U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=1U;
f10415(i,si0,si1,si2);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1851460U;
si1=43U;
si2=1851520U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10415(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=12U;
si0*=si1;
si1=l0;
si0+=si1;
si1=-24U;
si0+=si1;
l3=si0;
L3:;
{
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l6;
si0=si2?si0:si1;
l8=si0;
si1=l5;
si2=-12U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l10;
si1=si3?si1:si2;
si2=l5;
si3=8U;
si2+=si3;
l11=si2;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l9;
si4=8U;
si3+=si4;
l12=si3;
si3=i32_load(&i->m0,(U64)si3);
l13=si3;
si4=l10;
si5=l13;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l14=si0;
si1=l10;
si2=l13;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l11=si0;
si0=l3;
l5=si0;
L6:;
{
si0=l5;
si1=12U;
si0+=si1;
l9=si0;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l13;
si1=si3?si1:si2;
si2=l10;
si3=l5;
si4=8U;
si3+=si4;
l12=si3;
si3=i32_load(&i->m0,(U64)si3);
l13=si3;
si4=l10;
si5=l13;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l14=si0;
si1=l10;
si2=l13;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
si0=l2;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l9=si0;
L5:;
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l4;
l2=si0;
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1851628U;
si1=46U;
si2=1851676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f10416(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f10417(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f10418(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=20U;
si0+=si1;
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
si0=l1;
l6=si0;
L7:;
{
si0=l6;
si1=1U;
si0&=si1;
si1=l2;
si0|=si1;
l2=si0;
si0=l6;
si1=127U;
si0=si0 > si1;
l7=si0;
si0=l6;
si1=1U;
si0>>=(si1&31);
l8=si0;
l6=si0;
si0=l7;
if(si0){
goto L7;
}
}
si0=l2;
si1=l8;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
L12:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l10;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
si2=l6;
si3=l10;
si2-=si3;
si3=l5;
f12852(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
l6=si0;
goto L4;
L15:;
si0=l9;
si1=l1;
si2=l10;
si1-=si2;
l6=si1;
si2=l9;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l11;
si1=l6;
si2=l10;
si1-=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=1U;
l2=si0;
si0=l11;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l12=si0;
si0=0U;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=0U;
l0=si0;
L18:;
{
si0=l0;
l14=si0;
si1=1U;
si0+=si1;
l0=si0;
si0=l13;
l6=si0;
si0=l12;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
l2=si0;
L21:;
{
si0=l6;
if(si0){
goto L22;
}
si0=0U;
l6=si0;
goto L19;
L22:;
si0=l3;
si1=40U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=-4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10674(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L20;
}
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
}
si0=l6;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l6=si0;
goto L19;
L20:;
si0=l11;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
goto L4;
L19:;
si0=l14;
si1=l6;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l14;
si1=l6;
si0-=si1;
si1=l8;
si2=1U;
f5813(i,si0,si1,si2);
goto L23;
L24:;
si0=1803568U;
si1=33U;
si2=1803680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l11;
l2=si0;
goto L13;
L17:;
si0=l11;
si1=l6;
si2=1852080U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l10;
si1=l6;
si2=1852080U;
f662(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=l6;
si2=1852064U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si1=l6;
f7260(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l2;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
si0=si0 < si1;
if(si0){
goto L26;
}
L28:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l6;
si2=-2U;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l2;
si2=l6;
si3=-1U;
si2+=si3;
l8=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si2=-1U;
si1^=si2;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l2;
si1=l6;
si2=-3U;
si1+=si2;
l11=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
goto L29;
L30:;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l6;
si3=-3U;
si2+=si3;
l11=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=l14;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L27;
}
L29:;
si0=l11;
si1=l7;
si2=l0;
si3=l10;
si2=si2 < si3;
l0=si2;
si0=si2?si0:si1;
l10=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l8;
si2=l0;
si0=si2?si0:si1;
l11=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
si2=l6;
si3=l11;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l14;
si0+=si1;
l2=si0;
si1=l13;
si2=l0;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si1=l2;
si2=l7;
si1-=si2;
l2=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l0;
si3=l5;
si0=f11736(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L27;
}
goto L28;
L31:;
}
si0=l10;
si1=l8;
si2=1851968U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
L26:;
si0=l10;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
}
goto L5;
L11:;
si0=l10;
si1=l6;
si2=1851936U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=l6;
si2=1851952U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l2;
si2=1851984U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l6;
si1=l2;
si2=1851984U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=0U;
l6=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l13=si0;
si0=0U;
l11=si0;
L32:;
{
si0=l11;
l14=si0;
si1=1U;
si0+=si1;
l11=si0;
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=4U;
si0+=si1;
l7=si0;
si0=l13;
l6=si0;
si0=l5;
l2=si0;
L34:;
{
si0=l6;
if(si0){
goto L35;
}
si0=0U;
l6=si0;
goto L33;
L35:;
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
si2=l8;
si3=l2;
si4=-4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si4=i32_load(&i->m0,(U64)si4);
f13878(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L3;
L36:;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L34;
}
}
si0=l6;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l6=si0;
L33:;
si0=l14;
si1=l6;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l11;
si1=l6;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l14;
si1=l6;
si0-=si1;
si1=l5;
si2=1U;
f5813(i,si0,si1,si2);
goto L37;
L38:;
si0=1803568U;
si1=33U;
si2=1803680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=0U;
l6=si0;
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L3;
}
L5:;
L39:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=0U;
l6=si0;
goto L4;
L40:;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l6;
si1=-3U;
si0+=si1;
l2=si0;
si1=l6;
si2=-2U;
si1+=si2;
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+20U);
l8=si2;
si3=l2;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l8;
si4=l6;
si5=-1U;
si4+=si5;
l2=si4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3+4U);
si2=si2 < si3;
l11=si2;
si0=si2?si0:si1;
l7=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l10;
si1=l2;
si2=l11;
si0=si2?si0:si1;
l10=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l8;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l11=si0;
si0=l8;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=4U;
si0+=si1;
l0=si0;
goto L41;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=12U;
si0+=si1;
l11=si0;
si0=l2;
si1=4U;
si0+=si1;
l0=si0;
si0=1U;
l10=si0;
si0=0U;
l7=si0;
si0=l2;
l8=si0;
goto L41;
L43:;
si0=l7;
si1=l6;
si2=1852000U;
f663(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l10;
si1=l6;
si2=1852016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l8;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si2=8U;
si1+=si2;
si2=l6;
si3=l10;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l3;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l14;
si2=l11;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l7;
si2=l2;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l11;
si3=l5;
si0=f11736(i,si0,si1,si2,si3);
l6=si0;
si0=!(si0);
if(si0){
goto L39;
}
goto L4;
L45:;
}
si0=l7;
si1=l6;
si2=1852032U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
f15271(i,si0);
L3:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L2:;
si0=l2;
si1=l7;
si2=1852048U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l7;
si2=1852048U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f10419(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
l6=si0;
si0=0U;
l3=si0;
si0=l1;
l7=si0;
L7:;
{
si0=l7;
si1=1U;
si0&=si1;
si1=l3;
si0|=si1;
l3=si0;
si0=l7;
si1=127U;
si0=si0 > si1;
l2=si0;
si0=l7;
si1=1U;
si0>>=(si1&31);
l8=si0;
l7=si0;
si0=l2;
if(si0){
goto L7;
}
}
si0=l3;
si1=l8;
si0+=si1;
l9=si0;
si0=0U;
l2=si0;
L12:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=2U;
si2<<=(si3&31);
l8=si2;
si1+=si2;
si2=l7;
si3=l2;
si2-=si3;
si3=l6;
f12851(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
l7=si0;
goto L4;
L15:;
si0=l9;
si1=l1;
si2=l2;
si1-=si2;
l7=si1;
si2=l9;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l10;
si1=l7;
si2=l2;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=1U;
l3=si0;
si0=l10;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0+=si1;
l11=si0;
si1=-4U;
si0+=si1;
l8=si0;
si0=0U;
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=0U;
l14=si0;
L18:;
{
si0=l14;
l15=si0;
si1=1U;
si0+=si1;
l14=si0;
si0=l11;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l12;
l7=si0;
L21:;
{
si0=l7;
if(si0){
goto L22;
}
si0=0U;
l7=si0;
goto L19;
L22:;
si0=l4;
si1=40U;
si0+=si1;
si1=l0;
si2=l13;
si3=l8;
si4=l7;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si4=i32_load(&i->m0,(U64)si4);
f10674(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L20;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
}
si0=l7;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l7=si0;
goto L19;
L20:;
si0=l10;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
goto L4;
L19:;
si0=l15;
si1=l7;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l14;
si1=l7;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l15;
si1=l7;
si0-=si1;
si1=l3;
si2=1U;
f5814(i,si0,si1,si2);
goto L23;
L24:;
si0=1803568U;
si1=33U;
si2=1803680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l10;
l3=si0;
goto L13;
L17:;
si0=l10;
si1=l7;
si2=1852080U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l2;
si1=l7;
si2=1852080U;
f662(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l2;
si1=l7;
si2=1852064U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si1=l7;
f7260(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l3;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L26;
}
L28:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l7;
si2=-2U;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l3;
si2=l7;
si3=-1U;
si2+=si3;
l8=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
si2=-1U;
si1^=si2;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l3;
si1=l7;
si2=-3U;
si1+=si2;
l0=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
goto L29;
L30:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l3;
si0+=si1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l7;
si3=-3U;
si2+=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si2=l14;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L27;
}
L29:;
si0=l0;
si1=l2;
si2=l10;
si3=l13;
si2=si2 < si3;
l10=si2;
si0=si2?si0:si1;
l13=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=l8;
si2=l10;
si0=si2?si0:si1;
l0=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
si2=l7;
si3=l0;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l13;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l14;
si0+=si1;
l3=si0;
si1=l15;
si2=l10;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l7;
si1=l3;
si2=l2;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l10;
si3=l6;
si0=f11737(i,si0,si1,si2,si3);
l7=si0;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L27;
}
goto L28;
L31:;
}
si0=l13;
si1=l8;
si2=1851968U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
L26:;
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
}
goto L5;
L11:;
si0=l13;
si1=l7;
si2=1851936U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=l7;
si2=1851952U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si1=l3;
si2=1851984U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=l3;
si2=1851984U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=0U;
l7=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=-4U;
si0+=si1;
l13=si0;
si0=0U;
l15=si0;
si0=0U;
l10=si0;
L32:;
{
si0=l10;
l14=si0;
si1=1U;
si0+=si1;
l10=si0;
si0=l0;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l15;
l7=si0;
L34:;
{
si0=l7;
if(si0){
goto L35;
}
si0=0U;
l7=si0;
goto L33;
L35:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l13;
si4=l7;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si4=i32_load(&i->m0,(U64)si4);
f13878(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L3;
L36:;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L34;
}
}
si0=l7;
si1=2U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l7=si0;
L33:;
si0=l14;
si1=l7;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l14;
si1=l7;
si0-=si1;
si1=l8;
si2=1U;
f5814(i,si0,si1,si2);
goto L37;
L38:;
si0=1803568U;
si1=33U;
si2=1803680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l15;
si1=4U;
si0+=si1;
l15=si0;
si0=0U;
l7=si0;
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L3;
}
L5:;
L39:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=0U;
l7=si0;
goto L4;
L40:;
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l7;
si1=-3U;
si0+=si1;
l3=si0;
si1=l7;
si2=-2U;
si1+=si2;
l13=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+24U);
l8=si2;
si3=l3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l8;
si4=l7;
si5=-1U;
si4+=si5;
l3=si4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3+4U);
si2=si2 < si3;
l0=si2;
si0=si2?si0:si1;
l2=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l13;
si1=l3;
si2=l0;
si0=si2?si0:si1;
l13=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l8;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l0=si0;
si0=l8;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=4U;
si0+=si1;
l10=si0;
goto L41;
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=12U;
si0+=si1;
l0=si0;
si0=l3;
si1=4U;
si0+=si1;
l10=si0;
si0=1U;
l13=si0;
si0=0U;
l2=si0;
si0=l3;
l8=si0;
goto L41;
L43:;
si0=l2;
si1=l7;
si2=1852000U;
f663(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l13;
si1=l7;
si2=1852016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l8;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si2=8U;
si1+=si2;
si2=l7;
si3=l13;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l14;
si2=l0;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l2;
si2=l3;
si1-=si2;
l2=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l0;
si3=l6;
si0=f11737(i,si0,si1,si2,si3);
l7=si0;
si0=!(si0);
if(si0){
goto L39;
}
goto L4;
L45:;
}
si0=l2;
si1=l7;
si2=1852032U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L3:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L2:;
si0=l3;
si1=l2;
si2=1852048U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l2;
si2=1852048U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f10420(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1852192U;
si2=12U;
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
si1=1852204U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1852212U;
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

void f10421(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=56U;
si2=64U;
si3=l4;
si3=i32_load(&i->m0,(U64)si3);
l6=si3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si0-=si1;
si1=l0;
si2=64U;
si3=68U;
si4=l6;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l8;
si2=l6;
f7248(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l8;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
f7690(i,si0);
L6:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=56U;
si2=64U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si0-=si1;
si1=l0;
si2=64U;
si3=68U;
si4=l4;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l8;
si2=l4;
f7248(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=l6;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l8;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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

U32 f10422(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l2;
si1=4760U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1852260U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=4760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2800U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=2800U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1852328U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=2800U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1852384U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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

void f10423(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l1;
si2=24U;
si1+=si2;
l8=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l7;
si1=5U;
si0=si0 < si1;
l10=si0;
L4:;
{
si0=l3;
si1=l5;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l5;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l11;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l14=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l14;
si1=l11;
si0-=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l14=si0;
L11:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l15;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l15;
si1=l13;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l14=si0;
L12:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L6;
}
L9:;
si0=l13;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l15=si0;
L8:;
si0=l12;
si1=16843009U;
si0*=si1;
l14=si0;
L13:;
{
si0=l11;
si1=l15;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L7;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si0^=si1;
l18=si0;
si1=-1U;
si0^=si1;
si1=l18;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L7;
}
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
L7:;
si0=l13;
si1=l15;
si0=si0 == si1;
if(si0){
goto L6;
}
L14:;
{
si0=l11;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l15;
l14=si0;
goto L5;
L15:;
si0=l13;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L6:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L3;
L5:;
si0=l1;
si1=l14;
si2=l5;
si1+=si2;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l5;
si1=l6;
si0=si0 > si1;
l14=si0;
if(si0){
goto L16;
}
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si1=l3;
si2=l5;
si3=l7;
si2-=si3;
l15=si2;
si1+=si2;
si2=l14;
si0=si2?si0:si1;
si1=l8;
si2=l7;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=l11;
si0-=si1;
l14=si0;
si0=l3;
si1=l11;
si0+=si1;
l2=si0;
goto L1;
L17:;
si0=l7;
si1=4U;
si2=1852176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
}
L3:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L18;
}
si0=l11;
si1=l15;
si0=si0 == si1;
if(si0){
goto L1;
}
L18:;
si0=l11;
si1=l15;
si0-=si1;
l14=si0;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10424(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1852408U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10425(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1852408U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
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
}

U32 f10426(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1852424U;
si2=10U;
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
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=1852204U;
si2=5U;
si3=l2;
si4=15U;
si3+=si4;
si4=1852468U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f10427(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1852424U;
si2=10U;
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
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=1852204U;
si2=5U;
si3=l2;
si4=15U;
si3+=si4;
si4=1852484U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f10428(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1852424U;
si2=10U;
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1852204U;
si2=5U;
si3=l2;
si4=12U;
si3+=si4;
si4=1852500U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f10429(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1852424U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=1852204U;
si2=5U;
si3=l2;
si4=15U;
si3+=si4;
si4=1852516U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L2;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
goto L3;
L4:;
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
L3:;
si0=l1;
si1=l0;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}


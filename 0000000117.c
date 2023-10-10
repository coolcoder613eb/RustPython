#include "w2c2_base.h"

#include "rustpython.h"

void f11730(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si0=l0;
si1=1208U;
si0+=si1;
si1=17455314U;
si2=10U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=361U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=4U;
si1=l3;
si2=17455324U;
si3=361U;
si1=f15143(i,si1,si2,si3);
l6=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l6;
si1-=si2;
si2=l3;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L5:;
{
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=353U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L5;
}
}
si0=0U;
l7=si0;
L4:;
si0=l2;
si1=52U;
si0+=si1;
si1=361U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l1;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l6=si1;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=9U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17455693U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17455685U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=4U;
si2=l3;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l4=si2;
si3=l3;
si2-=si3;
si3=l4;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l4;
if(si0){
goto L10;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=1U;
l5=si0;
L10:;
si0=l2;
si1=52U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l2;
si1=24U;
si0+=si1;
si1=l6;
si2=l7;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L14;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=18661092U;
f6698(i,si0);
L16:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l4=si0;
si0=l1;
si1=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
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
goto L18;
}
si0=l3;
f5522(i,si0);
L18:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L15;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L20:;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L21;
}
si0=l3;
f5522(i,si0);
L21:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L19;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=l1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=361U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11731(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si0=l0;
si1=1208U;
si0+=si1;
si1=17455694U;
si2=12U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=273U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=4U;
si1=l3;
si2=17455706U;
si3=273U;
si1=f15143(i,si1,si2,si3);
l6=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l6;
si1-=si2;
si2=l3;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L5:;
{
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=265U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L5;
}
}
si0=0U;
l7=si0;
L4:;
si0=l2;
si1=52U;
si0+=si1;
si1=273U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l1;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l6=si1;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=9U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17455693U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17455685U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=4U;
si2=l3;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l4=si2;
si3=l3;
si2-=si3;
si3=l4;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l4;
if(si0){
goto L10;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=1U;
l5=si0;
L10:;
si0=l2;
si1=52U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l2;
si1=24U;
si0+=si1;
si1=l6;
si2=l7;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L14;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=18661092U;
f6698(i,si0);
L16:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l4=si0;
si0=l1;
si1=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
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
goto L18;
}
si0=l3;
f5522(i,si0);
L18:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L15;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L20:;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L21;
}
si0=l3;
f5522(i,si0);
L21:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L19;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=l1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=273U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11732(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si0=l0;
si1=1208U;
si0+=si1;
si1=17455979U;
si2=10U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=243U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=4U;
si1=l3;
si2=17455989U;
si3=243U;
si1=f15143(i,si1,si2,si3);
l6=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l6;
si1-=si2;
si2=l3;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L5:;
{
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=235U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L5;
}
}
si0=0U;
l7=si0;
L4:;
si0=l2;
si1=52U;
si0+=si1;
si1=243U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l1;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l6=si1;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=9U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17455693U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17455685U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=4U;
si2=l3;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l4=si2;
si3=l3;
si2-=si3;
si3=l4;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l4;
if(si0){
goto L10;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=1U;
l5=si0;
L10:;
si0=l2;
si1=52U;
si0+=si1;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l2;
si1=24U;
si0+=si1;
si1=l6;
si2=l7;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L14;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=18661092U;
f6698(i,si0);
L16:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l4=si0;
si0=l1;
si1=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
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
goto L18;
}
si0=l3;
f5522(i,si0);
L18:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L15;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L20:;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L21;
}
si0=l3;
f5522(i,si0);
L21:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L19;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=l1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=243U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L4;
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
L5:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L3;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
l5=si0;
goto L1;
L6:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11734(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4566842283283303034ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2661386195423522850ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11737(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7184362248180433438ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5536752645709742633ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f13902(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L1;
L2:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
si0=0U;
l4=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f5522(i,si0);
si0=0U;
l1=si0;
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11741(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
L6:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L4;
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
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5263161779032839710ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5680173195020327661ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l5=si0;
goto L1;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
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
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f11742(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
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
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si3=1216U;
si2+=si3;
si3=17456294U;
si4=10U;
si5=l5;
si2=f9632(i,si2,si3,si4,si5);
si3=l0;
f5566(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=17456351U;
si3=22U;
f11743(i,si0,si1,si2,si3);
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
goto L4;
}
goto L5;
L7:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
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
goto L3;
}
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=56U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l6;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
goto L3;
}
L11:;
si0=l1;
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
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L13;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l8=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l7=sj0;
goto L12;
L13:;
si0=l2;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
l8=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
L12:;
si0=l2;
si1=92U;
si0+=si1;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=0U;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l2;
si1=17359936U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si3=l0;
f5537(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=17456304U;
si3=24U;
f11743(i,si0,si1,si2,si3);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=17456328U;
si3=23U;
f11743(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
goto L14;
L15:;
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
goto L14;
}
si0=l0;
f5522(i,si0);
L14:;
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
goto L4;
}
L5:;
si0=l5;
f5522(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L16:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l1;
i32_store16(&i->m0,(U64)si0+110U,si1);
si0=17683216U;
si1=18U;
si2=l2;
si3=110U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f11743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
f11324(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=17456376U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si0=f12902(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l3;
f5522(i,si0);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
si0=f12996(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=17623720U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=l4;
si2=112U;
si1+=si2;
si2=l1;
si3=l4;
si4=48U;
si3+=si4;
si0=f11744(i,si0,si1,si2,si3);
l0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0-=si1;
f15024(i,si0);
L7:;
si0=l0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l0;
f5522(i,si0);
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
f5522(i,si0);
goto L4;
L5:;
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=17456412U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=6U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=17679618U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=16U;
si0+=si1;
si0=f14780(i,si0);
if(si0){
goto L9;
}
si0=l4;
si1=18663156U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l4;
si2=100U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=l4;
si3=16U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L2;
}
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si1=18663156U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=0U;
si0=f12996(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=17623720U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l4;
si3=112U;
si2+=si3;
si3=l1;
si4=l4;
si5=48U;
si4+=si5;
f11745(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l0=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l0;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0-=si1;
f15024(i,si0);
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L11;
}
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
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
goto L13;
}
si0=l1;
f15024(i,si0);
L13:;
si0=l2;
f15024(i,si0);
L11:;
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
goto L4;
}
si0=l3;
f5522(i,si0);
L4:;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=17359296U;
si1=70U;
si2=l4;
si3=16U;
si2+=si3;
si3=17359368U;
si4=17359464U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l4;
si1=124U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=295U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l4;
si4=112U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l4;
si1=48U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=17359296U;
si1=70U;
si2=l4;
si3=16U;
si2+=si3;
si3=17359368U;
si4=17359464U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f11744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=f13115(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+64U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l6;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
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
goto L5;
}
L6:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+64U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=64U;
si0+=si1;
f1354(i,si0);
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=70U;
l9=si0;
si0=17456428U;
l8=si0;
goto L9;
L10:;
si0=l5;
si1=72U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L12;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+72U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=l6;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L11:;
si0=l5;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
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
goto L5;
}
L13:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+72U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=72U;
si0+=si1;
f1354(i,si0);
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=69U;
l9=si0;
si0=17456498U;
l8=si0;
L9:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj0=f13751(i,si0,si1);
l10=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-4U;
si0+=si1;
l8=si0;
sj0=l10;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l12=sj0;
sj0=l10;
si0=(U32)(sj0);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
L17:;
{
si0=l11;
si1=l9;
si2=l7;
si1&=si2;
l9=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l12;
sj0^=sj1;
l10=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l10;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l10=sj0;
L18:;
{
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
sj0=l14;
sj1=l14;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l13;
si2=8U;
si1+=si2;
l13=si1;
si0+=si1;
l9=si0;
goto L17;
L19:;
sj0=l10;
sj0=I64_CTZ(sj0);
l15=sj0;
sj0=l10;
sj1=-1ULL;
sj0+=sj1;
sj1=l10;
sj0&=sj1;
l10=sj0;
si0=l6;
si1=l8;
sj2=l15;
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l9;
si2+=si3;
si3=l7;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L18;
}
}
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=f13115(i,si0,si1);
goto L15;
L16:;
si0=l0;
si1=l1;
si2=l4;
si3=16U;
si2+=si3;
si3=l3;
si0=f11744(i,si0,si1,si2,si3);
l8=si0;
if(si0){
goto L20;
}
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17456376U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=l7;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
goto L3;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L22;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l5;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L21;
}
L22:;
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L21:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
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
goto L5;
}
si0=l4;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17456604U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=17451792U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
if(si0){
goto L24;
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
goto L5;
}
si0=l3;
l7=si0;
L26:;
{
si0=l7;
si1=64U;
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si3=l9;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
sj1=l10;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L27:;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
si1=l9;
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
L28:;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l6;
if(si0){
goto L29;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
L29:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12901(i,si0,si1);
l8=si0;
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si1=l7;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L30:;
si0=l9;
l7=si0;
si0=l9;
if(si0){
goto L26;
}
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
goto L23;
}
si0=l3;
f5522(i,si0);
goto L23;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L31:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
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
goto L24;
}
si0=l9;
f5522(i,si0);
L24:;
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
goto L32;
}
si0=l3;
f5522(i,si0);
L32:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
goto L3;
L23:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
L33:;
si0=l5;
si1=80U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L35;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l5;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+80U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L34;
}
L35:;
si0=l6;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L34:;
si0=l5;
si1=84U;
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
goto L5;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+80U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l5;
si1=80U;
si0+=si1;
f1354(i,si0);
L36:;
si0=1U;
l9=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l0;
si2=l7;
si3=1U;
f11747(i,si0,si1,si2,si3);
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
switch(si0){
case 0:
goto L38;
case 1:
goto L39;
default:
goto L40;
}
L40:;
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=5474U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=92U;
si0+=si1;
si1=l9;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=17456636U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=17453732U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l4;
si2=32U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l9=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l9;
si1=l7;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l9=si0;
L43:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
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
goto L44;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L44:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L41:;
si0=0U;
l9=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
goto L37;
L39:;
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1985U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17456616U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
if(si0){
goto L37;
}
goto L4;
L38:;
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l9=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17453560U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
L37:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L45;
case 1:
goto L48;
case 2:
goto L47;
case 3:
goto L46;
default:
goto L49;
}
L49:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l7;
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
goto L45;
}
si0=l7;
f1354(i,si0);
goto L45;
L48:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L45;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L45;
L47:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L45;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L45;
L46:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l7;
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
goto L45;
}
si0=l7;
f1354(i,si0);
L45:;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L51:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
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
goto L52;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L52:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L3;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l2;
si1=l0;
si0=f14515(i,si0,si1);
l7=si0;
if(si0){
goto L54;
}
si0=l4;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17456660U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=17451792U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
goto L53;
L54:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17456688U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=1985U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l4;
si2=72U;
si1+=si2;
si0=f12902(i,si0,si1);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L53:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L55;
case 1:
goto L58;
case 2:
goto L57;
case 3:
goto L56;
default:
goto L59;
}
L59:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l7;
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
goto L55;
}
si0=l7;
f1354(i,si0);
goto L55;
L58:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L55;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L55;
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L55;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L55;
L56:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l7;
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
goto L55;
}
si0=l7;
f1354(i,si0);
L55:;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L61:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
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
goto L62;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L62:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L61;
}
}
L60:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

void f11745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=f13115(i,si0,si1);
si0=l6;
si1=64U;
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
si2=i32_load(&i->m0,(U64)si2+64U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
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
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
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
goto L6;
}
L7:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+64U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=64U;
si0+=si1;
f1354(i,si0);
L8:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=70U;
l10=si0;
si0=17456428U;
l9=si0;
goto L10;
L11:;
si0=l6;
si1=72U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L13;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+72U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L12;
}
L13:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L12:;
si0=l6;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
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
goto L6;
}
L14:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+72U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=72U;
si0+=si1;
f1354(i,si0);
L15:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=69U;
l10=si0;
si0=17456498U;
l9=si0;
L10:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=84U;
si1+=si2;
sj0=f13751(i,si0,si1);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-4U;
si0+=si1;
l9=si0;
sj0=l11;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
sj0=l11;
si0=(U32)(sj0);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=0U;
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
L18:;
{
si0=l12;
si1=l10;
si2=l8;
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
L19:;
{
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
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
goto L17;
}
si0=l10;
si1=l14;
si2=8U;
si1+=si2;
l14=si1;
si0+=si1;
l10=si0;
goto L18;
L20:;
sj0=l11;
sj0=I64_CTZ(sj0);
l16=sj0;
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
sj1=l11;
sj0&=sj1;
l11=sj0;
si0=l7;
si1=l9;
sj2=l16;
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l10;
si2+=si3;
si3=l8;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L19;
}
}
}
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=f13115(i,si0,si1);
goto L16;
L17:;
si0=l5;
si1=84U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
si4=36U;
si3+=si4;
si4=l4;
f11745(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+85U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
si2=84U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
goto L21;
L22:;
si0=l5;
si1=96U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17456376U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1028U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=68U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+68U);
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+69U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si1=l8;
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
si0=i32_load(&i->m0,(U64)si0+36U);
f5522(i,si0);
goto L3;
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si1=l8;
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
f5522(i,si0);
L9:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L24;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L23;
}
L24:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L23:;
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
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
goto L6;
}
si0=l5;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17456604U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17451792U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=44U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
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
goto L6;
}
si0=l4;
l8=si0;
L29:;
{
si0=l8;
si1=64U;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si3=l10;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L30;
}
si0=l9;
sj1=l11;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L30:;
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
si1=l10;
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
L31:;
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l7;
if(si0){
goto L32;
}
si0=l9;
si1=0U;
f1361(i,si0,si1);
L32:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=l2;
si2=l5;
si3=44U;
si2+=si3;
f12903(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+84U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
f5522(i,si0);
L33:;
si0=l10;
l8=si0;
si0=l10;
if(si0){
goto L29;
}
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
goto L25;
}
si0=l4;
f5522(i,si0);
goto L25;
L28:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+85U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
si2=84U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
f5522(i,si0);
L34:;
si0=l10;
si0=!(si0);
if(si0){
goto L26;
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
goto L26;
}
si0=l10;
f5522(i,si0);
goto L26;
L27:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+45U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
L26:;
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
f5522(i,si0);
L35:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=56U;
si0+=si1;
f1354(i,si0);
goto L3;
L25:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l6;
si1=56U;
si0+=si1;
f1354(i,si0);
L36:;
si0=l6;
si1=80U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L38;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+80U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L37;
}
L38:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L37:;
si0=l6;
si1=84U;
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
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+80U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l6;
si1=80U;
si0+=si1;
f1354(i,si0);
L39:;
si0=1U;
l10=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l8;
si3=1U;
f11747(i,si0,si1,si2,si3);
si0=l5;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
switch(si0){
case 0:
goto L40;
case 1:
goto L5;
default:
goto L41;
}
L41:;
si0=l5;
si1=68U;
si0+=si1;
si1=12U;
si0+=si1;
si1=5474U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=44U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=100U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=104U;
si0+=si1;
si1=l10;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=17456636U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=843U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=17453732U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l5;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=l5;
si2=108U;
si1+=si2;
si2=l5;
si3=44U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+104U);
l10=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+100U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l10;
si1=l8;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l10=si0;
L44:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L45:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
f15024(i,si0);
L42:;
si0=0U;
l10=si0;
goto L4;
L40:;
si0=l5;
si1=96U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17453560U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=843U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
goto L4;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l5;
si1=44U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1985U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17456616U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=843U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l3;
si1=l1;
si0=f14515(i,si0,si1);
l8=si0;
if(si0){
goto L47;
}
si0=l5;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17456660U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=17451792U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l5;
si2=44U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
goto L46;
L48:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+37U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L49;
case 1:
goto L52;
case 2:
goto L51;
case 3:
goto L50;
default:
goto L53;
}
L53:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l8;
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
goto L49;
}
si0=l8;
f1354(i,si0);
goto L49;
L52:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L49;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L49;
L51:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L49;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L49;
L50:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l8;
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
goto L49;
}
si0=l8;
f1354(i,si0);
L49:;
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L55:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L56:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L3;
L47:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=96U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=17456688U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=1985U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l5;
si2=68U;
si1+=si2;
si2=l5;
si3=84U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
f5522(i,si0);
L46:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L57;
case 1:
goto L60;
case 2:
goto L59;
case 3:
goto L58;
default:
goto L61;
}
L61:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l8;
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
goto L57;
}
si0=l8;
f1354(i,si0);
goto L57;
L60:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L57;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L57;
L59:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L57;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L57;
L58:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l8;
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
goto L57;
}
si0=l8;
f1354(i,si0);
L57:;
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L63:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L64:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L3:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f11746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=f12996(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=17623720U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f11744(i,si0,si1,si2,si3);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0-=si1;
f15024(i,si0);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L1:;
si0=17359296U;
si1=70U;
si2=l3;
si3=17359368U;
si4=17359464U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f11747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L12;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
f12615(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
if(si0){
goto L13;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=17314629U;
si3=35U;
si4=l5;
si5=l1;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L14;
}
si0=l5;
l3=si0;
goto L2;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456741U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456734U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456726U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l3;
si1=4U;
si2=l3;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l7=si2;
si3=l3;
si2-=si3;
si3=l7;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
l6=si1;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=l6;
si1=2U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
L15:;
si0=l4;
si1=36U;
si0+=si1;
si1=23U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L16:;
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=l1;
si0=f5980(i,si0,si1,si2);
l3=si0;
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
goto L2;
}
goto L3;
L13:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
f6040(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L17;
}
si0=l5;
l3=si0;
goto L2;
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=22U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=14U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456718U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456712U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17456704U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l3;
si1=4U;
si2=l3;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l7=si2;
si3=l3;
si2-=si3;
si3=l7;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
l6=si1;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=0U;
l8=si0;
si0=l6;
si1=8U;
si0|=si1;
si1=13U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=1U;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=0U;
l8=si0;
si0=l6;
si1=1U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
L18:;
si0=l4;
si1=36U;
si0+=si1;
si1=22U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L19:;
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=l1;
si0=f5980(i,si0,si1,si2);
l3=si0;
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
goto L3;
}
goto L2;
L9:;
si0=4U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
si1=22U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
f5522(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
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
goto L21;
}
si0=l2;
f5522(i,si0);
L21:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
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
goto L3;
}
L4:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si1=56U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
goto L3;
}
L6:;
si0=l2;
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
goto L3;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11749(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f12904(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=l2;
si3=l3;
si4=l1;
f12905(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
f11741(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
goto L1;
L4:;
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
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
l2=si0;
goto L1;
L5:;
si0=l2;
f5522(i,si0);
si0=l4;
l2=si0;
goto L1;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si2=8U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L6:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L7:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=0U;
l1=si0;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
goto L1;
L2:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
f5522(i,si0);
L8:;
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11750(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l5=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l6=sj0;
goto L6;
L7:;
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
l7=si0;
if(si0){
goto L5;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
L6:;
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si3=l1;
f13825(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L10;
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
L11:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l11;
si1=l10;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=0U;
l3=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7184362248180433438ULL;
sj0^=sj1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5536752645709742633ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
l7=si0;
goto L3;
L12:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l9;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l10;
si5=l8;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l8;
si1=l8;
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
goto L3;
}
goto L4;
L9:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l9;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l10;
si5=l8;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
l7=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l4;
si1=l7;
i32_store16(&i->m0,(U64)si0+78U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=78U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l8;
f5522(i,si0);
si0=1U;
l3=si0;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si1=l8;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=2U;
l2=si0;
si0=l6;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l7;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l6;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L6;
}
goto L7;
L9:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l7;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l6;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l6;
f5522(i,si0);
L6:;
si0=l6;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=92U;
si0+=si1;
si1=l1;
si2=l6;
f9261(i,si0,si1,si2);
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
goto L12;
}
si0=l6;
f5522(i,si0);
L12:;
si0=3U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+132U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l3;
si2=135U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+133U);
i32_store16(&i->m0,(U64)si0+52U,si1);
si0=l4;
l2=si0;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
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
goto L14;
}
si0=l5;
f5522(i,si0);
L14:;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
l5=si0;
L5:;
si0=l3;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+52U);
i32_store16(&i->m0,(U64)si0+12U,si1);
goto L3;
L4:;
si0=l3;
si1=104U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17460544U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l3;
si2=148U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l3;
si2=156U;
si1+=si2;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=l3;
si2=92U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L1;
}
si0=l1;
si1=l2;
si2=l3;
si3=136U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=3U;
l2=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f5522(i,si0);
L3:;
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
goto L15;
}
si0=l6;
f5522(i,si0);
L15:;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+12U);
i32_store16(&i->m0,(U64)si0+41U,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=43U;
si0+=si1;
si1=l3;
si2=14U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=92U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
case 4:
goto L22;
case 5:
goto L21;
case 6:
goto L20;
case 7:
goto L19;
case 8:
goto L18;
case 9:
goto L17;
case 10:
goto L16;
case 11:
goto L15;
case 12:
goto L14;
case 13:
goto L13;
case 14:
goto L12;
case 15:
goto L11;
case 16:
goto L10;
case 17:
goto L9;
case 18:
goto L8;
case 19:
goto L7;
case 20:
goto L6;
case 21:
goto L5;
case 22:
goto L4;
case 23:
goto L3;
case 24:
goto L2;
default:
goto L1;
}
L25:;
si0=l6;
si1=96U;
si0+=si1;
l7=si0;
goto L1;
L24:;
si0=l6;
si1=100U;
si0+=si1;
l7=si0;
goto L1;
L23:;
si0=l6;
si1=104U;
si0+=si1;
l7=si0;
goto L1;
L22:;
si0=l6;
si1=108U;
si0+=si1;
l7=si0;
goto L1;
L21:;
si0=l6;
si1=136U;
si0+=si1;
l7=si0;
goto L1;
L20:;
si0=l6;
si1=140U;
si0+=si1;
l7=si0;
goto L1;
L19:;
si0=l6;
si1=144U;
si0+=si1;
l7=si0;
goto L1;
L18:;
si0=l6;
si1=148U;
si0+=si1;
l7=si0;
goto L1;
L17:;
si0=l6;
si1=152U;
si0+=si1;
l7=si0;
goto L1;
L16:;
si0=l6;
si1=208U;
si0+=si1;
l7=si0;
goto L1;
L15:;
si0=l6;
si1=212U;
si0+=si1;
l7=si0;
goto L1;
L14:;
si0=l6;
si1=216U;
si0+=si1;
l7=si0;
goto L1;
L13:;
si0=l6;
si1=220U;
si0+=si1;
l7=si0;
goto L1;
L12:;
si0=l6;
si1=228U;
si0+=si1;
l7=si0;
goto L1;
L11:;
si0=l6;
si1=232U;
si0+=si1;
l7=si0;
goto L1;
L10:;
si0=l6;
si1=236U;
si0+=si1;
l7=si0;
goto L1;
L9:;
si0=l6;
si1=240U;
si0+=si1;
l7=si0;
goto L1;
L8:;
si0=l6;
si1=244U;
si0+=si1;
l7=si0;
goto L1;
L7:;
si0=l6;
si1=248U;
si0+=si1;
l7=si0;
goto L1;
L6:;
si0=l6;
si1=252U;
si0+=si1;
l7=si0;
goto L1;
L5:;
si0=l6;
si1=264U;
si0+=si1;
l7=si0;
goto L1;
L4:;
si0=l6;
si1=268U;
si0+=si1;
l7=si0;
goto L1;
L3:;
si0=l6;
si1=276U;
si0+=si1;
l7=si0;
goto L1;
L2:;
si0=l6;
si1=284U;
si0+=si1;
l7=si0;
L1:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=l6;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L42;
case 3:
goto L41;
case 4:
goto L40;
case 5:
goto L39;
case 6:
goto L38;
case 7:
goto L37;
case 8:
goto L36;
case 9:
goto L35;
case 10:
goto L30;
case 11:
goto L30;
case 12:
goto L30;
case 13:
goto L30;
case 14:
goto L30;
case 15:
goto L30;
case 16:
goto L30;
case 17:
goto L30;
case 18:
goto L30;
case 19:
goto L34;
case 20:
goto L33;
case 21:
goto L30;
case 22:
goto L30;
case 23:
goto L32;
default:
goto L30;
}
L44:;
si0=l8;
si1=164U;
si0+=si1;
l7=si0;
goto L31;
L43:;
si0=l8;
si1=168U;
si0+=si1;
l7=si0;
goto L31;
L42:;
si0=l8;
si1=172U;
si0+=si1;
l7=si0;
goto L31;
L41:;
si0=l8;
si1=176U;
si0+=si1;
l7=si0;
goto L31;
L40:;
si0=l8;
si1=180U;
si0+=si1;
l7=si0;
goto L31;
L39:;
si0=l8;
si1=188U;
si0+=si1;
l7=si0;
goto L31;
L38:;
si0=l8;
si1=192U;
si0+=si1;
l7=si0;
goto L31;
L37:;
si0=l8;
si1=196U;
si0+=si1;
l7=si0;
goto L31;
L36:;
si0=l8;
si1=200U;
si0+=si1;
l7=si0;
goto L31;
L35:;
si0=l8;
si1=204U;
si0+=si1;
l7=si0;
goto L31;
L34:;
si0=l8;
si1=256U;
si0+=si1;
l7=si0;
goto L31;
L33:;
si0=l8;
si1=260U;
si0+=si1;
l7=si0;
goto L31;
L32:;
si0=l8;
si1=280U;
si0+=si1;
l7=si0;
L31:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l9;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
si1=0U;
si0=si0 != si1;
si1=l10;
si2=l9;
si1=si1 == si2;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=0U;
l10=si0;
goto L29;
L45:;
si0=0U;
si1=l10;
si2=l7;
si0=si2?si0:si1;
l11=si0;
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L46:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L46;
}
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
si4=l11;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
if(si0){
goto L26;
}
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l7;
f5522(i,si0);
goto L29;
L30:;
si0=0U;
l10=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
L29:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
si4=l9;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
if(si0){
goto L26;
}
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L26;
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
goto L28;
}
si0=l7;
f5522(i,si0);
L28:;
si0=l10;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
si4=l10;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L26;
}
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L26;
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
goto L27;
}
si0=l7;
f5522(i,si0);
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L26;
}
f14795(i);
UNREACHABLE;
L26:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f11753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l5;
si1=76U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1028U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=17454488U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+96U);
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l4=si0;
si1=l4;
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
si0=l4;
f1354(i,si0);
goto L1;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l4=si0;
si1=0U;
si2=l4;
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
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l4=si0;
si1=0U;
si2=l4;
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
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l4=si0;
si1=l4;
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
si0=l4;
f1354(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si1=l4;
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
goto L6;
}
si0=l4;
f1354(i,si0);
goto L6;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si1=0U;
si2=l4;
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
goto L6;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L6;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si1=0U;
si2=l4;
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
goto L6;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L6;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si1=l4;
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
goto L6;
}
si0=l4;
f1354(i,si0);
L6:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L11;
}
f14795(i);
UNREACHABLE;
L11:;
si0=l0;
si1=l4;
si2=l5;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f11754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=18U;
si5=9U;
si6=17596305U;
si7=2U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
f7819(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l5;
si3=17369068U;
si4=5U;
si5=l6;
si6=l2;
f12896(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l5;
si3=l3;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l2;
f12896(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L4;
}
si0=l3;
f5522(i,si0);
L4:;
si0=l5;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=1U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
goto L3;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
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
l6=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L3:;
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
goto L6;
}
si0=l3;
f5522(i,si0);
L6:;
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
goto L7;
}
si0=l5;
f5522(i,si0);
L7:;
si0=l2;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11757(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
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
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=f6066(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i32_store(&i->m0,(U64)si0+16U,si1);
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
i32_store(&i->m0,(U64)si0+20U,si1);
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
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f13902(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f5522(i,si0);
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
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f11838(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si1=l5;
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
f5522(i,si0);
goto L1;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L12:;
si0=0U;
l2=si0;
goto L4;
L11:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
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
sj1=4665093314700579932ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5450899068315262175ULL;
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
l3=si0;
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
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l3;
si1=l5;
si2=l3;
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
si0=l3;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
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
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
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
f14795(i);
UNREACHABLE;
L7:;
si0=17452088U;
si1=43U;
si2=17468948U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=17452088U;
si1=43U;
si2=17468964U;
f604(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f8360(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
if(si0){
goto L20;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=52U;
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
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
L22:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L19:;
si0=l7;
if(si0){
goto L1;
}
si0=l3;
si1=l3;
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
si0=l3;
f1354(i,si0);
goto L1;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f8465(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
L27:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L28:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
goto L24;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
if(si0){
goto L31;
}
si0=l2;
f15024(i,si0);
si0=0U;
l6=si0;
si0=4U;
l2=si0;
goto L30;
L31:;
si0=l1;
l6=si0;
si0=l2;
si1=l1;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0=f15027(i,si0,si1);
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
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
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
L2:;
si0=l5;
f5522(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11759(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f7978(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l2;
si0=f5556(i,si0,si1,si2,si3);
l6=si0;
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
f5522(i,si0);
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
f5522(i,si0);
L4:;
si0=1U;
l5=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6065(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
goto L1;
}
L5:;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
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
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l2;
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
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11761(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si2=l3;
si3=3U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L3:;
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11762(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=968U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f13162(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L5;
}
L5:;
si0=l2;
si1=l3;
si2=17462437U;
si3=7U;
si0=f11423(i,si0,si1,si2,si3);
l6=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
si2=l2;
f13170(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l3;
f5522(i,si0);
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

void f11763(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f8820(i,si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=24U;
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
goto L1;
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
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
si0=f5916(i,si0,si1,si2);
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
f5522(i,si0);
L3:;
si0=l0;
si1=l2;
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
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f11937(i,si0,si1,si2,si3);
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
f5522(i,si0);
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L1;
L4:;
si0=17452088U;
si1=43U;
si2=17461348U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
f14795(i);
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
f5522(i,si0);
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

void f11765(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
f11430(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f7784(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
si2=l4;
si3=40U;
si2+=si3;
si3=l2;
f8810(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0=f8550(i,si0,si1);
l2=si0;
goto L3;
L4:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L3:;
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
f5522(i,si0);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11767(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
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
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
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
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=l5;
si3=si3 == si4;
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11768(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=14U;
si5=5U;
si6=17596295U;
si7=3U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8114(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=24U;
si3+=si4;
si4=l2;
si5=l4;
si6=47U;
si5+=si6;
si6=l4;
si7=47U;
si6+=si7;
si7=l4;
si8=47U;
si7+=si8;
f9242(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=1U;
l2=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
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
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l2=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l8;
si2=0U;
si0=f5931(i,si0,si1,si2);
l5=si0;
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f5522(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f8147(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=47U;
si0+=si1;
si1=l4;
si2=31U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=20U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+29U);
i32_store16(&i->m0,(U64)si0+45U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=1U;
l5=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l2;
si0=f11547(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
f14795(i);
UNREACHABLE;
L2:;
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
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11771(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
f11570(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11772(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
L6:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=223U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l8;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si0=f733(i,si0);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
l3=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
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
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11773(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7810(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l2=si0;
goto L2;
L3:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=si0 == si1;
if(si0){
goto L1;
}
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
goto L4;
}
si0=l3;
f5522(i,si0);
L4:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
f5522(i,si0);
L5:;
si0=l6;
l3=si0;
L2:;
si0=l0;
si1=l3;
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11774(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7810(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l2;
f11614(i,si0,si1,si2,si3,si4);
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
f5522(i,si0);
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
f5522(i,si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=1000U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f13162(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L5;
}
L5:;
si0=l2;
si1=l3;
si2=17462430U;
si3=7U;
si0=f11423(i,si0,si1,si2,si3);
l6=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
si2=l2;
f13170(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l3;
f5522(i,si0);
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

void f11776(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
f8211(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
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
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L4:;
si0=l3;
si1=60U;
si0+=si1;
si1=l5;
si2=l2;
si0=f10824(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L5;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L5:;
si0=1U;
l6=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
f5522(i,si0);
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
f11451(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
L7:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L7;
}
}
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l3=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
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
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=596U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f13162(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L5;
}
L5:;
si0=l2;
si1=l3;
si2=17462425U;
si3=5U;
si0=f11423(i,si0,si1,si2,si3);
l6=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
si2=l2;
f13170(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l3;
f5522(i,si0);
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

void f11780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=17U;
si5=8U;
si6=17596303U;
si7=2U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11781(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l3=si0;
goto L5;
L6:;
si0=1U;
l7=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l3;
si2=l8;
si0=f15143(i,si0,si1,si2);
l9=si0;
l3=si0;
si0=l8;
si1=3U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
l3=si0;
L9:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l11;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l8;
si0+=si1;
l11=si0;
L10:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l11;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L11:;
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
si2=l3;
si0=f5916(i,si0,si1,si2);
l3=si0;
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
goto L5;
}
si0=l5;
f5522(i,si0);
L5:;
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
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11782(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8137(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=5440U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=17453560U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
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
f5522(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
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

void f11783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si2=l3;
si3=6U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L3:;
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f8805(i,si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=24U;
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
goto L1;
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
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
si0=f5916(i,si0,si1,si2);
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
f5522(i,si0);
L3:;
si0=l0;
si1=l2;
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
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11785(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=36U;
si0+=si1;
si1=l3;
si2=l2;
f8116(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l5=sj0;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
l8=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l2;
f8811(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
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
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5916(i,si0,si1,si2);
l3=si0;
goto L2;
L4:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=1U;
l2=si0;
L2:;
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
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11786(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7942(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
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
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
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
si1=l6;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
si0=l3;
if(si0){
goto L5;
}
si0=l6;
l3=si0;
goto L4;
L5:;
si0=l6;
si1=l6;
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
si0=l6;
f5522(i,si0);
L4:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
f11604(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l0;
si1=l3;
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
L6:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-9U;
si0+=si1;
l8=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l8;
si0<<=(si1&31);
si1=8388635U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
l3=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
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
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11788(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7950(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si3=17580295U;
si4=1U;
f11611(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L2:;
si0=1U;
l2=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11789(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=24U;
si5=23U;
si6=17596312U;
si7=2U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11790(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f7861(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
si2=l3;
si3=l5;
si4=l4;
si5=24U;
si4+=si5;
si5=8U;
si4+=si5;
si5=0U;
si6=17579944U;
f11447(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=1U;
l3=si0;
L1:;
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
L0:;
}

void f11791(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f7789(i,si0,si1,si2);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9253(i,si0,si1);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si1=si3?si1:si2;
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
f5522(i,si0);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11792(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
f7958(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=f1360(i,si0,sj1,si2);
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
si2=64U;
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
f1361(i,si0,si1);
L5:;
si0=l6;
si1=l2;
si0=f8550(i,si0,si1);
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
f5522(i,si0);
L1:;
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
L0:;
}

void f11793(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8550(i,si0,si1);
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
f5522(i,si0);
L1:;
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
L0:;
}

void f11794(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=872U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f13162(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L5;
}
L5:;
si0=l2;
si1=l3;
si2=17462444U;
si3=7U;
si0=f11423(i,si0,si1,si2,si3);
l6=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
si2=l2;
f13170(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l3;
f5522(i,si0);
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

void f11795(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f7789(i,si0,si1,si2);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9252(i,si0,si1);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si1=si3?si1:si2;
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
f5522(i,si0);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11796(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
f6043(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
f5522(i,si0);
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+9U);
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11797(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0;
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
f8094(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
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
f5522(i,si0);
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
si1=l2;
si0=f8880(i,sj0,si1);
l3=si0;
goto L1;
L3:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L1:;
si0=l0;
si1=l3;
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

void f11798(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
f7958(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=f1360(i,si0,sj1,si2);
L3:;
si0=l3;
si1=60U;
si0+=si1;
si1=l2;
si0=f10826(i,si0,si1);
l2=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L4:;
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
f5522(i,si0);
L1:;
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
L0:;
}

void f11799(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5571(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si2=1272U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+9U);
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11800(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=16U;
si5=7U;
si6=17596301U;
si7=2U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f8198(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+12U);
si5=l5;
si6=l4;
si6=i32_load(&i->m0,(U64)si6+24U);
si7=l2;
f8807(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l2=si0;
goto L3;
L4:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L3:;
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
f5522(i,si0);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l2;
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

void f11802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l3;
si1=l2;
si0=f8028(i,si0,si1);
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
f11474(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
f11462(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11804(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si2=l3;
si3=2U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L3:;
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11805(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
f6045(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
f5522(i,si0);
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+9U);
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11806(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7950(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=72U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+92U);
si2=l4;
si3=72U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L1;
L2:;
si0=1U;
l2=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11807(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l5;
si2=l3;
si3=l2;
f5548(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11808(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l2;
f8025(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6065(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
L5:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l2;
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
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11809(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
f8098(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si2=l3;
f11602(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L4;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=112U;
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
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=0U;
l3=si0;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
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
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
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
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L5:;
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=l3;
si0=f5931(i,si0,si1,si2);
l3=si0;
goto L3;
L4:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L3:;
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
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11810(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5656442752557716266ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2839561240270162146ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=19U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=15U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17580088U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17580081U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17580073U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=81604378643ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l7;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
goto L5;
L6:;
si0=l4;
si1=l2;
si2=l3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=616U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11522(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
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
f5522(i,si0);
L3:;
si0=l0;
si1=l2;
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
si1=19U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11811(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8094(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
f5522(i,si0);
L2:;
si0=l3;
si1=l2;
si0=f8550(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11812(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l3=si0;
goto L5;
L6:;
si0=1U;
l7=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l3;
si2=l8;
si0=f15143(i,si0,si1,si2);
l9=si0;
l3=si0;
si0=l8;
si1=3U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
l3=si0;
L9:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l11;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l8;
si0+=si1;
l11=si0;
L10:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l11;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L11:;
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
si2=l3;
si0=f5916(i,si0,si1,si2);
l3=si0;
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
goto L5;
}
si0=l5;
f5522(i,si0);
L5:;
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
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=1280U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=17596314U;
si6=11U;
f11434(i,si0,si1,si2,si3,si4,si5,si6);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11814(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8114(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l5;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=24U;
si3+=si4;
si4=l2;
si5=l4;
si6=47U;
si5+=si6;
si6=l4;
si7=47U;
si6+=si7;
si7=l4;
si8=47U;
si7+=si8;
f9240(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l7;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=1U;
si1>>=(si2&31);
l9=si1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l10=si0;
si0=0U;
l11=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l9;
si1=2147483646U;
si0&=si1;
l12=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=-4U;
si0+=si1;
l13=si0;
si0=0U;
l11=si0;
si0=l7;
l3=si0;
L8:;
{
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l13;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
si2=l11;
si3=1073741822U;
si2^=si3;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l14;
si1=l3;
si2=4U;
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l12;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l8;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l10;
si2=l9;
si3=l11;
si4=-1U;
si3^=si4;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l13;
si2=0U;
si0=f5931(i,si0,si1,si2);
l6=si0;
goto L4;
L5:;
si0=1U;
l3=si0;
L4:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f5522(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=1U;
l3=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f11815(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f7940(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
si2=56U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
si3=16U;
si2+=si3;
si3=l2;
f8803(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+5U);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L4:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L3:;
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
f5522(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11816(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si2=l3;
si3=5U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L3:;
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f8143(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=36U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l4;
si2=24U;
si1+=si2;
si2=l2;
si0=f6068(i,si0,si1,si2);
l3=si0;
si0=0U;
l2=si0;
goto L1;
L2:;
si0=1U;
l2=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11818(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=l2;
si0=f6050(i,si0,si1,si2);
l6=si0;
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
f5522(i,si0);
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
f5522(i,si0);
L4:;
si0=1U;
l5=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11819(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l5;
si3=l3;
si4=11U;
si5=1U;
si6=17596291U;
si7=2U;
f11406(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
f5522(i,si0);
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
goto L1;
}
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f11820(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f7895(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l6=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=0U;
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si4=0U;
si3=si3 != si4;
si4=l2;
f9250(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
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
si1=0U;
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
si1=l2;
si2=0U;
si0=f5931(i,si0,si1,si2);
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
goto L2;
}
si0=l3;
f5522(i,si0);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11821(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f7789(i,si0,si1,si2);
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
si0=l3;
si1=56U;
si0+=si1;
si0=f8804(i,si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si1=si3?si1:si2;
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
f5522(i,si0);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f11822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
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
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
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
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si2=1272U;
si3=l3;
si4=l5;
si3=si3 == si4;
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
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
f7789(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L3;
L4:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
si0=4U;
l8=si0;
goto L5;
L6:;
si0=l7;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=4U;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l8;
l9=si0;
si0=l7;
l10=si0;
L8:;
{
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1=f8877(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L8;
}
}
L5:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l3=si0;
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
goto L3;
}
si0=l5;
f5522(i,si0);
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
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
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si2=l3;
si3=4U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
si4=65280U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L3:;
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
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
goto L8;
}
si0=l5;
f5522(i,si0);
L8:;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1216U;
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
si2=i32_load(&i->m0,(U64)si2+1216U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
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
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=1224U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13119(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1216U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l8;
l6=si0;
si0=l8;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f8911(i,si0,si1,si2);
si0=l6;
si1=200U;
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
goto L8;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
L9:;
si0=l2;
si1=l2;
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
goto L8;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L10;
}
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l1;
f13170(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
if(si0){
goto L6;
}
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
goto L6;
}
goto L7;
L10:;
si0=1U;
l1=si0;
si0=l8;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L8:;
f14795(i);
UNREACHABLE;
L7:;
si0=l6;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11826(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=1216U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+1216U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l6;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l5;
si1=1224U;
si0+=si1;
si1=17580062U;
si2=5U;
si0=f13119(i,si0,si1,si2);
l7=si0;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
goto L3;
L4:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+1216U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l7;
l5=si0;
si0=l7;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si0=5U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17580066U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17580062U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5980(i,si0,si1,si2);
l5=si0;
L11:;
si0=l2;
si1=l2;
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
goto L9;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l5;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L12;
}
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l3;
si3=l1;
f13212(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l7;
if(si0){
goto L6;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l3=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l7;
if(si0){
goto L8;
}
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
goto L8;
}
si0=l5;
f5522(i,si0);
goto L8;
L10:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L9:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l6;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=0U;
l7=si0;
si0=l2;
l4=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l5;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L5;
}
goto L6;
L7:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l5;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L5;
}
L6:;
si0=l2;
f5522(i,si0);
L5:;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L14:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=0U;
l8=si0;
si0=l2;
l4=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l9;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L11;
L12:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l9;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
L11:;
si0=l2;
f5522(i,si0);
si0=1U;
l8=si0;
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
f5522(i,si0);
L15:;
si0=l8;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l3;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17460544U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L1;
}
si0=l1;
si1=l7;
si2=l3;
si0=f11521(i,si0,si1,si2);
l7=si0;
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
goto L16;
}
si0=l4;
f5522(i,si0);
L16:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
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
goto L17;
}
si0=l2;
f5522(i,si0);
L17:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f11828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=f3488(i,si0);
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=14U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=488U;
si0+=si1;
l5=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=492U;
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=496U;
si0+=si1;
l5=si0;
L1:;
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
goto L5;
}
si0=l2;
if(si0){
goto L7;
}
si0=0U;
l2=si0;
goto L6;
L7:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+40U);
si4=l1;
si5=44U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f7562(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L6:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l2;
si2=l6;
si3=l4;
si4=20U;
si3+=si4;
si0=f7563(i,si0,si1,si2,si3);
if(si0){
goto L14;
}
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l5;
si2=l4;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
l3=si1;
si0=f11864(i,si0,si1);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si3=l3;
si1=si3?si1:si2;
si0=f11864(i,si0,si1);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=200U;
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
goto L5;
}
si0=l5;
si1=l0;
si2=l9;
si3=1216U;
si2+=si3;
si3=17461848U;
si4=6U;
si5=l6;
si2=f9632(i,si2,si3,si4,si5);
si3=l7;
si0=f6037(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
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
goto L5;
}
si0=l5;
si1=l0;
si2=l7;
si3=1216U;
si2+=si3;
si3=17461854U;
si4=6U;
si5=l6;
si2=f9632(i,si2,si3,si4,si5);
si3=l8;
si0=f6037(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L12;
}
si0=l2;
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L15;
}
goto L5;
L16:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l6=si0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
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
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=l0;
si2=l7;
si3=1216U;
si2+=si3;
si3=17461860U;
si4=4U;
si5=l2;
si2=f9632(i,si2,si3,si4,si5);
si3=l6;
si0=f6037(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=1U;
l2=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
L17:;
si0=l2;
si1=l3;
si2=l1;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=200U;
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
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=l0;
si2=l3;
si3=1216U;
si2+=si3;
si3=17461864U;
si4=8U;
si5=l1;
si2=f9632(i,si2,si3,si4,si5);
si3=l6;
si0=f6037(i,si0,si1,si2,si3);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=17451336U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=17461744U;
si4=17461872U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=17451336U;
si1=43U;
si2=l4;
si3=47U;
si2+=si3;
si3=17451664U;
si4=17461936U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=17451336U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=17461744U;
si4=17461920U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=17451336U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=17461744U;
si4=17461904U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=17451336U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=17461744U;
si4=17461888U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f11829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l3;
si1=l2;
si0=f8028(i,si0,si1);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
f11606(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l2;
si0=si2?si0:si1;
l3=si0;
si0=l2;
si0=!(si0);
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}


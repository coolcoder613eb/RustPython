#include "w2c2_base.h"

#include "rustpython.h"

void f5230(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=17302172U;
si2=5U;
si0=f3991(i,si0,si1,si2);
si0=l0;
si1=l1;
f5231(i,si0,si1);
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=17302150U;
si2=12U;
f8911(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f4955(i,si0,si1,si2);
l6=si0;
si0=l1;
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
goto L2;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L2:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l5=si1;
si2=l3;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
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
goto L3;
}
si0=l4;
f5522(i,si0);
L3:;
si0=l1;
si1=0U;
si2=l1;
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
goto L4;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L4:;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=18661092U;
f6698(i,si0);
L6:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l3=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5579(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L7;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l4;
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
si2=l1;
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
goto L5;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L5:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L10;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L10:;
si0=l2;
si1=l5;
si2=l6;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l4;
f5522(i,si0);
L11:;
si0=l1;
si1=0U;
si2=l1;
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
goto L9;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
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
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5231(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=3U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17306058U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17306056U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17302280U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
si2=0U;
si0=f4939(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=17306056U;
si2=3U;
si0=f3991(i,si0,si1,si2);
l6=si0;
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
goto L4;
}
si0=l4;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l8=si1;
si2=l6;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
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
goto L6;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=9U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17306067U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306059U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17302304U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
si2=0U;
si0=f4939(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=17306059U;
si2=9U;
si0=f3991(i,si0,si1,si2);
l4=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+376U);
l0=si1;
si2=8U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l2;
si1=l8;
si2=l4;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
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
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+376U);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l0;
if(si0){
goto L9;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5232(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=17302177U;
si2=6U;
si0=f3991(i,si0,si1,si2);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=17301119U;
si2=388U;
f8911(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=0U;
si0=f4955(i,si0,si1,si2);
l6=si0;
si0=l1;
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
goto L2;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L2:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=384U;
si1+=si2;
l5=si1;
si2=l3;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
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
goto L3;
}
si0=l4;
f5522(i,si0);
L3:;
si0=l1;
si1=0U;
si2=l1;
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
goto L4;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L4:;
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=17302139U;
si2=4U;
f8911(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si1=40U;
si0+=si1;
si1=l4;
si2=0U;
si0=f4955(i,si0,si1,si2);
l3=si0;
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
goto L5;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L5:;
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l4;
f5522(i,si0);
L6:;
si0=l1;
si1=0U;
si2=l1;
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
goto L7;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L7:;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=18661092U;
f6698(i,si0);
L9:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l3=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
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
si1=l3;
si2=1320U;
si1+=si2;
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
si1=l4;
si2=0U;
si0=f5579(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L10;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L10:;
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l4;
f5522(i,si0);
L11:;
si0=l1;
si1=0U;
si2=l1;
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
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L13;
}
si0=l1;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L13:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l6;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
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
goto L14;
}
si0=l4;
f5522(i,si0);
L14:;
si0=l1;
si1=0U;
si2=l1;
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
goto L12;
}
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L12:;
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
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=520U;
si1+=si2;
si2=l2;
f4142(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L2;
default:
goto L6;
}
L6:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l4;
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
si0=l3;
si1=40U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=68U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17306496U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
switch(si0){
case 0:
goto L7;
case 1:
goto L10;
case 2:
goto L9;
case 3:
goto L8;
default:
goto L11;
}
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=l1;
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
goto L7;
}
si0=l1;
f1354(i,si0);
goto L7;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=0U;
si2=l1;
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
goto L7;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L7;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=0U;
si2=l1;
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
goto L7;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L7;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=l1;
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
goto L7;
}
si0=l1;
f1354(i,si0);
L7:;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+56U,sj1);
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
goto L3;
}
si0=l2;
si1=l1;
si2=l3;
si3=56U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
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
goto L12;
}
si0=l4;
f5522(i,si0);
L12:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l5=si1;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L13:;
si0=l1;
si1=496U;
si0+=si1;
l9=si0;
si0=l1;
si1=64U;
si0+=si1;
l10=si0;
si0=l1;
si1=508U;
si0+=si1;
l11=si0;
si0=0U;
l5=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+504U);
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+516U);
l15=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l3;
si1=56U;
si0+=si1;
si1=l10;
si2=l7;
si3=l13;
si2+=si3;
si3=l6;
si4=l13;
si3-=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+496U);
si5=l12;
si4+=si5;
si5=l14;
si6=l12;
si5-=si6;
si6=l1;
si6=i32_load(&i->m0,(U64)si6+508U);
si7=l5;
si8=2U;
si7<<=(si8&31);
si6+=si7;
si7=l15;
si8=l5;
si7-=si8;
f742(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l5;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l13;
si0+=si1;
l13=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L15;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L23;
default:
goto L15;
}
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+504U);
l15=si0;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L27;
}
si0=l1;
si1=l15;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+504U,si1);
goto L15;
L27:;
si0=l15;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+500U);
si1=l15;
si0-=si1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l9;
si1=l15;
si2=l15;
f4875(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+504U);
l16=si0;
L28:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l16;
si0+=si1;
l18=si0;
si0=l15;
si1=2U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l18;
si1=0U;
si2=l15;
si3=-1U;
si2+=si3;
l15=si2;
si0=f15145(i,si0,si1,si2);
si0=l17;
si1=l16;
si2=l15;
si1+=si2;
l16=si1;
si0+=si1;
l18=si0;
L29:;
si0=l18;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l16;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+504U,si1);
goto L15;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+516U);
l15=si0;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L30;
}
si0=l1;
si1=l15;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+516U,si1);
goto L15;
L30:;
si0=l15;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+512U);
si1=l15;
si0-=si1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l11;
si1=l15;
si2=l15;
f4906(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+516U);
l16=si0;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+508U);
l17=si0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l15;
si1=2U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l18;
si1=0U;
si2=l15;
si3=2U;
si2<<=(si3&31);
si3=-4U;
si2+=si3;
si0=f15145(i,si0,si1,si2);
si0=l16;
si1=l15;
si0+=si1;
l15=si0;
si1=-1U;
si0+=si1;
l16=si0;
si0=l17;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l18=si0;
L32:;
si0=l18;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l16;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+516U,si1);
goto L15;
L24:;
si0=l13;
si1=l6;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l13;
si1=l6;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si1=l13;
si0+=si1;
l12=si0;
si0=l6;
si1=l13;
si0-=si1;
l13=si0;
L34:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L35;
default:
goto L19;
}
L35:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+516U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+508U);
l13=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l13;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f3833(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l13=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
L38:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L39:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
goto L18;
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l13=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=56U;
si1+=si2;
si2=l5;
si3=0U;
si1=f5931(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
if(si0){
goto L40;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L40:;
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
f5522(i,si0);
goto L1;
L23:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L17;
L22:;
si0=l12;
si1=l14;
si2=17306236U;
f593(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
si1=l15;
si2=17306252U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l5;
si1=l13;
si2=17306268U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l3;
si1=8U;
si0+=si1;
si1=99U;
si2=0U;
f4897(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=17306284U;
si2=99U;
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l3;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l3;
si2=56U;
si1+=si2;
si0=f11875(i,si0,si1);
l5=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L17;
L18:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L17:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
if(si0){
goto L41;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L41:;
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
f5522(i,si0);
goto L1;
L16:;
si0=l13;
si1=l6;
si2=17306384U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l14;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L14;
}
}
si0=l13;
si1=l6;
si2=17306400U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5234(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f5464(i,si0,si1,si2,si3);
goto L1;
L5:;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f5464(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
si0=l1;
f1354(i,si0);
goto L1;
L4:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=1U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f5464(i,si0,si1,si2,si3);
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
f1361(i,si0,si1);
goto L1;
L3:;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f5464(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
f1361(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=4U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
f5464(i,si0,si1,si2,si3);
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
si0=l1;
f1354(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5235(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L5:;
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=l4;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=l2;
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
goto L1;
}
si0=l2;
f1354(i,si0);
goto L1;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
l5=si2;
si3=1U;
si2+=si3;
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
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
goto L1;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l4;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=0U;
si2=l2;
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
goto L1;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
l5=si2;
si3=4U;
si2+=si3;
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
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
f1354(i,si0);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5236(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
si0=l1;
f1354(i,si0);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=1U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
f1361(i,si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=4U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1354(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
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
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=28U;
si0+=si1;
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=28U;
si0+=si1;
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l6;
si2=l1;
si1-=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l6;
si2=17308080U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l6;
si2=17308096U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l5;
si3=l1;
si2+=si3;
si3=l8;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+8U);
f12872(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1354(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=0U;
si2=l6;
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=0U;
si2=l6;
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1354(i,si0);
L9:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5238(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
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
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L9;
L10:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=255U;
si0&=si1;
l8=si0;
si0=0U;
l2=si0;
L11:;
{
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L19;
}
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=l9;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
goto L15;
L19:;
si0=l9;
si1=61U;
si0=si0 == si1;
if(si0){
goto L13;
}
L18:;
si0=l2;
si1=2U;
si0+=si1;
l10=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l9;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
l12=si0;
if(si0){
goto L24;
}
si0=l9;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L24;
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
goto L23;
case 7:
goto L23;
case 8:
goto L23;
case 9:
goto L23;
case 10:
goto L23;
case 11:
goto L23;
case 12:
goto L23;
case 13:
goto L23;
case 14:
goto L23;
case 15:
goto L23;
case 16:
goto L23;
case 17:
goto L23;
case 18:
goto L23;
case 19:
goto L23;
case 20:
goto L23;
case 21:
goto L23;
case 22:
goto L23;
case 23:
goto L23;
case 24:
goto L23;
case 25:
goto L23;
case 26:
goto L23;
case 27:
goto L23;
case 28:
goto L23;
case 29:
goto L23;
case 30:
goto L23;
case 31:
goto L23;
case 32:
goto L24;
case 33:
goto L24;
case 34:
goto L24;
case 35:
goto L24;
case 36:
goto L24;
case 37:
goto L24;
default:
goto L23;
}
L24:;
si0=l5;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l13=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
l14=si0;
if(si0){
goto L22;
}
si0=l10;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L22;
case 1:
goto L22;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L22;
case 5:
goto L22;
case 6:
goto L23;
case 7:
goto L23;
case 8:
goto L23;
case 9:
goto L23;
case 10:
goto L23;
case 11:
goto L23;
case 12:
goto L23;
case 13:
goto L23;
case 14:
goto L23;
case 15:
goto L23;
case 16:
goto L23;
case 17:
goto L23;
case 18:
goto L23;
case 19:
goto L23;
case 20:
goto L23;
case 21:
goto L23;
case 22:
goto L23;
case 23:
goto L23;
case 24:
goto L23;
case 25:
goto L23;
case 26:
goto L23;
case 27:
goto L23;
case 28:
goto L23;
case 29:
goto L23;
case 30:
goto L23;
case 31:
goto L23;
case 32:
goto L22;
case 33:
goto L22;
case 34:
goto L22;
case 35:
goto L22;
case 36:
goto L22;
case 37:
goto L22;
default:
goto L23;
}
L23:;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
l2=si0;
goto L12;
L22:;
si0=1U;
l15=si0;
si0=1U;
l1=si0;
si0=l12;
if(si0){
goto L26;
}
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l9;
si1=-55U;
si0+=si1;
l11=si0;
si0=l9;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l1=si0;
goto L26;
L27:;
si0=l9;
si1=-87U;
si0+=si1;
l11=si0;
si0=1U;
l1=si0;
L26:;
si0=l14;
if(si0){
goto L28;
}
si0=l10;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l10;
si1=-55U;
si0+=si1;
l13=si0;
si0=l10;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l15=si0;
goto L28;
L29:;
si0=l10;
si1=-87U;
si0+=si1;
l13=si0;
L28:;
si0=l1;
si1=l15;
si0&=si1;
if(si0){
goto L30;
}
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
goto L12;
L30:;
si0=l13;
si1=l11;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L31:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
goto L12;
L17:;
L32:;
{
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L32;
}
}
si0=l6;
l1=si0;
goto L14;
L16:;
si0=l7;
si1=l9;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L15:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L12;
L14:;
si0=l1;
si1=l1;
si2=l6;
si1=si1 < si2;
si0+=si1;
l2=si0;
goto L12;
L13:;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
L12:;
si0=l2;
si1=l6;
si0=si0 < si1;
if(si0){
goto L11;
}
}
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
switch(si0){
case 0:
goto L35;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
default:
goto L39;
}
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L35;
}
si0=l1;
f1354(i,si0);
goto L35;
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L35;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L35;
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L35;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L35;
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L35;
}
si0=l1;
f1354(i,si0);
L35:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L0:;
}

void f5239(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l0=si1;
si2=8U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=12U;
si0+=si1;
sj1=l5;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=l3;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+16U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+12U);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
if(si0){
goto L8;
}
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
f1354(i,si0);
goto L9;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
f1354(i,si0);
L9:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5240(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
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
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L9;
L10:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l1=si0;
L18:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=l1;
si0+=si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L18;
}
L17:;
si0=-1U;
si1=l6;
si2=17303876U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l9;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=13U;
si0=si0 == si1;
if(si0){
goto L12;
}
L13:;
si0=5U;
l13=si0;
si0=1U;
l14=si0;
si0=0U;
l15=si0;
si0=2U;
l16=si0;
goto L11;
L12:;
si0=6U;
l13=si0;
si0=2U;
l14=si0;
si0=1U;
l15=si0;
si0=3U;
l16=si0;
L11:;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l1=si0;
L19:;
{
si0=l5;
si1=l1;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=126U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l7;
si1=61U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l7;
si1=95U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
L22:;
si0=l7;
si1=46U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l8;
if(si0){
goto L25;
}
si0=l1;
si1=1U;
si0+=si1;
l17=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l17;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l5;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si1=13U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=1U;
si1=l17;
si0<<=(si1&31);
si1=9217U;
si0&=si1;
if(si0){
goto L21;
}
L25:;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
if(si0){
goto L28;
}
si0=l7;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L21;
case 2:
goto L26;
case 3:
goto L26;
case 4:
goto L21;
case 5:
goto L26;
case 6:
goto L26;
case 7:
goto L26;
case 8:
goto L26;
case 9:
goto L26;
case 10:
goto L26;
case 11:
goto L26;
case 12:
goto L26;
case 13:
goto L26;
case 14:
goto L26;
case 15:
goto L26;
case 16:
goto L26;
case 17:
goto L26;
case 18:
goto L26;
case 19:
goto L26;
case 20:
goto L26;
case 21:
goto L26;
case 22:
goto L26;
case 23:
goto L27;
default:
goto L26;
}
L28:;
si0=l7;
si1=32U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l7;
si1=9U;
si0=si0 != si1;
if(si0){
goto L26;
}
L27:;
si0=l1;
si1=1U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L21;
}
L26:;
si0=l7;
si1=32U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l7;
si1=13U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l7;
si1=10U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L21;
}
si0=l7;
si1=32U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l7;
si1=9U;
si0=si0 != si1;
if(si0){
goto L21;
}
L31:;
si0=l17;
si0=!(si0);
if(si0){
goto L23;
}
si0=l7;
si1=10U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si1=1U;
si0+=si1;
l17=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l7;
si1=13U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l5;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L29;
}
goto L23;
L30:;
si0=l17;
si0=!(si0);
if(si0){
goto L23;
}
L29:;
si0=0U;
l8=si0;
si0=0U;
l17=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L32;
}
si0=2U;
si1=l2;
si2=-1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l2=si1;
si2=9U;
si1=si1 == si2;
si2=1U;
si1<<=(si2&31);
si2=l2;
si3=32U;
si2=si2 == si3;
si0=si2?si0:si1;
l17=si0;
L32:;
si0=l17;
si1=l14;
si0+=si1;
l2=si0;
si0=2U;
si1=1U;
si2=l7;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l1;
si0+=si1;
l1=si0;
goto L20;
L24:;
si0=l17;
si1=l6;
si2=17303972U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=0U;
l7=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=0U;
si1=l8;
si2=l8;
si3=-75U;
si2+=si3;
si3=-76U;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l16;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L34:;
si0=l7;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L20;
L33:;
si0=l1;
si1=l6;
si2=17303988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=3U;
si1=l8;
si2=3U;
si1+=si2;
si2=l8;
si3=-73U;
si2+=si3;
si3=-76U;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l13;
si1=3U;
si2=l7;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L20:;
si0=l2;
si1=l9;
si0+=si1;
l9=si0;
si0=l1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L19;
}
}
si0=1U;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
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
goto L8;
}
L35:;
si0=0U;
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=0U;
l2=si0;
si0=0U;
l7=si0;
si0=0U;
l9=si0;
L36:;
{
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=126U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l8;
si1=61U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=l8;
si1=95U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L49;
}
L50:;
si0=l8;
si1=46U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l2;
if(si0){
goto L51;
}
si0=0U;
l13=si0;
si0=l7;
si1=1U;
si0+=si1;
l14=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l14;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l5;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si1=13U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=1U;
si1=l14;
si0<<=(si1&31);
si1=9217U;
si0&=si1;
if(si0){
goto L40;
}
L51:;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
if(si0){
goto L54;
}
si0=l8;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L53;
case 1:
goto L49;
case 2:
goto L52;
case 3:
goto L52;
case 4:
goto L49;
case 5:
goto L52;
case 6:
goto L52;
case 7:
goto L52;
case 8:
goto L52;
case 9:
goto L52;
case 10:
goto L52;
case 11:
goto L52;
case 12:
goto L52;
case 13:
goto L52;
case 14:
goto L52;
case 15:
goto L52;
case 16:
goto L52;
case 17:
goto L52;
case 18:
goto L52;
case 19:
goto L52;
case 20:
goto L52;
case 21:
goto L52;
case 22:
goto L52;
case 23:
goto L53;
default:
goto L52;
}
L54:;
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l8;
si1=9U;
si0=si0 != si1;
if(si0){
goto L52;
}
L53:;
si0=l7;
si1=1U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L49;
}
L52:;
si0=l8;
si1=32U;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l8;
si1=13U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l8;
si1=10U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L49;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l8;
si1=9U;
si0=si0 != si1;
if(si0){
goto L49;
}
L55:;
si0=l13;
si0=!(si0);
if(si0){
goto L39;
}
si0=l8;
si1=10U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l7;
si1=1U;
si0+=si1;
l13=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l8;
si1=13U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l5;
si1=l13;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L47;
}
goto L39;
L49:;
si0=l2;
si1=-73U;
si0+=si1;
si1=-76U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l2;
l13=si0;
goto L40;
L48:;
si0=l13;
si0=!(si0);
if(si0){
goto L39;
}
L47:;
si0=l9;
if(si0){
goto L56;
}
si0=0U;
l9=si0;
goto L41;
L56:;
si0=l9;
si1=-1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l17=si0;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l13;
si1=32U;
si0=si0 != si1;
if(si0){
goto L41;
}
L57:;
si0=l13;
si1=4U;
si0>>=(si1&31);
si1=48U;
si0|=si1;
l13=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L58:;
si0=l17;
si1=l1;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=48U;
si1=87U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+20U);
l17=si2;
si3=l2;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=15U;
si2&=si3;
l13=si2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l13;
si0+=si1;
l13=si0;
si1=l13;
si2=-32U;
si1+=si2;
si2=l13;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L59:;
si0=l17;
si1=l1;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
goto L41;
L60:;
si0=l2;
si1=l1;
si2=17303956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L61:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
if(si0){
goto L62;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L42;
L62:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L63:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
goto L42;
L45:;
si0=l14;
si1=l6;
si2=17303892U;
f594(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l2;
si1=l1;
si2=17303924U;
f594(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l2;
si1=l1;
si2=17303940U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L64:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l13=si0;
goto L40;
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L65;
}
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L66:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L65:;
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L67;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L67:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=2U;
si1=1U;
si2=l8;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l7=si0;
si0=0U;
l2=si0;
goto L38;
L40:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L68:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=48U;
si1=87U;
si2=l8;
si3=160U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l8;
si2=4U;
si1>>=(si2&31);
si0+=si1;
l2=si0;
si1=l2;
si2=-32U;
si1+=si2;
si2=l2;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=48U;
si1=87U;
si2=l8;
si3=15U;
si2&=si3;
l8=si2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l8=si0;
si1=l8;
si2=-32U;
si1+=si2;
si2=l8;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L70:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l13;
si1=3U;
si0+=si1;
l2=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=3U;
si0+=si1;
l9=si0;
goto L37;
L39:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l7;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l2;
si1=-75U;
si0+=si1;
si1=-76U;
si0=si0 >= si1;
if(si0){
goto L71;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L74;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L74:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
if(si0){
goto L75;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L72;
L75:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L76:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=13U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
goto L72;
L73:;
si0=l7;
si1=l6;
si2=17303908U;
f594(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L77:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=0U;
l2=si0;
L71:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l8;
si1=32U;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=l17;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L80:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=95U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0+=si1;
l1=si0;
goto L78;
L79:;
si0=l1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L81:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0+=si1;
l1=si0;
L78:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
L38:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L37:;
si0=l7;
si1=l6;
si0=si0 < si1;
if(si0){
goto L36;
}
}
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
switch(si0){
case 0:
goto L82;
case 1:
goto L85;
case 2:
goto L84;
case 3:
goto L83;
default:
goto L86;
}
L86:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L82;
}
si0=l1;
f1354(i,si0);
goto L82;
L85:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L82;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L82;
L84:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L82;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L82;
L83:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L82;
}
si0=l1;
f1354(i,si0);
L82:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L0:;
}

void f5241(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l4;
si3=l0;
si3=i32_load(&i->m0,(U64)si3);
f4693(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
switch(si0){
case 0:
goto L8;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L12;
}
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L8;
}
si0=l0;
f1354(i,si0);
goto L8;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=0U;
si2=l0;
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
goto L8;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L8;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=0U;
si2=l0;
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
goto L8;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L8;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L8;
}
si0=l0;
f1354(i,si0);
L8:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=17301032U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17308160U;
si4=17308196U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f5242(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
goto L1;
L5:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si2=l4;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f1354(i,si0);
goto L1;
L4:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l1=si2;
si3=1U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l1;
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
f1361(i,si0,si1);
goto L1;
L3:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si2=l4;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f1361(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l1=si2;
si3=4U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
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
goto L1;
}
si0=l1;
f1354(i,si0);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=20U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=20U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=(U32)(U32)(I8)(U8)(si1);
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
l8=si1;
si0^=si1;
si1=l8;
si0-=si1;
l8=si0;
si1=-9U;
si0+=si1;
si1=255U;
si0&=si1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l8;
si1=-25U;
si0+=si1;
si1=255U;
si0&=si1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17249201U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17249196U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17249188U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17249180U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L12;
}
f14795(i);
UNREACHABLE;
L13:;
si0=l8;
si1=-16U;
si0+=si1;
l8=si0;
si0=2U;
l7=si0;
goto L9;
L12:;
si0=l1;
si1=l8;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L8;
L11:;
si0=l7;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l7=si0;
goto L9;
L10:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l7;
si2=1U;
si1&=si2;
si2=l8;
f839(i,si0,si1,si2);
goto L14;
L15:;
si0=l3;
si1=24U;
si0+=si1;
si1=l8;
f840(i,si0,si1);
L14:;
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
si4=24U;
si3+=si4;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+8U);
si4=i32_load(&i->m0,(U64)si4);
si5=0U;
si6=l3;
si7=0U;
si8=l1;
f4136(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+52U);
l9=sj0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+60U);
switch(si0){
case 0:
goto L17;
case 1:
goto L18;
case 2:
goto L19;
default:
goto L18;
}
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L16;
L18:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=f15009(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
goto L8;
L17:;
si0=l1;
si1=17245015U;
si2=4U;
si3=17249332U;
si4=5U;
si0=f11915(i,si0,si1,si2,si3,si4);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=65U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=17308212U;
si2=65U;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l3;
sj1=279172874305ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l8;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
sj0=l9;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
f15024(i,si0);
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=f15009(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L8:;
si0=l4;
switch(si0){
case 0:
goto L20;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L24;
}
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
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
goto L20;
}
si0=l2;
f1354(i,si0);
goto L20;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=0U;
si2=l2;
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
goto L20;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L20;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=0U;
si2=l2;
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
goto L20;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L20;
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
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
goto L20;
}
si0=l2;
f1354(i,si0);
L20:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=1U;
si1=65U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5244(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f4466(i,si0,si1,si2);
goto L1;
L5:;
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f4466(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L1;
}
si0=l0;
f1354(i,si0);
goto L1;
L4:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=1U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f4466(i,si0,si1,si2);
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f4466(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=0U;
si2=l0;
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
goto L1;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=4U;
si1+=si2;
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f4466(i,si0,si1,si2);
si0=l0;
si1=l0;
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
goto L1;
}
si0=l0;
f1354(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5245(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
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
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=28U;
si0+=si1;
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=28U;
si0+=si1;
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si2=l1;
si1-=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l6;
si2=17308128U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l6;
si2=17308144U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=4U;
si1+=si2;
si2=l5;
si3=l1;
si2+=si3;
si3=l8;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+8U);
f12872(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1354(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=0U;
si2=l6;
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=0U;
si2=l6;
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l6;
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
goto L9;
}
si0=l6;
f1354(i,si0);
L9:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5246(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
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
si0=l2;
si1=12U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
l4=si0;
goto L1;
L4:;
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=0U;
l4=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=48U;
si1=87U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=160U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l7;
si2=4U;
si1>>=(si2&31);
si0+=si1;
l7=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l4;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=48U;
si1=87U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=15U;
si2&=si3;
l7=si2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l7=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l4;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L13:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L14;
}
si0=l1;
f1354(i,si0);
goto L14;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L14;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L14;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L14;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L14;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L14;
}
si0=l1;
f1354(i,si0);
L14:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5247(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
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
si0=l3;
si1=12U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
l5=si0;
goto L1;
L4:;
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L7;
L8:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=255U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=0U;
l9=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l6;
si0+=si1;
l10=si0;
si0=0U;
l2=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l5=si0;
L18:;
{
si0=l12;
l13=si0;
si0=l11;
l14=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=1U;
si0+=si1;
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=61U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
l16=si0;
si0=l5;
l17=si0;
si0=l11;
l1=si0;
si0=l15;
l5=si0;
goto L20;
L25:;
si0=l13;
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
L27:;
{
si0=l11;
si1=l10;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l1=si0;
l11=si0;
si0=l12;
si1=61U;
si0=si0 == si1;
if(si0){
goto L27;
}
}
si0=1U;
l16=si0;
si0=l5;
l17=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
goto L20;
L26:;
si0=l13;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l15;
l1=si0;
goto L17;
L24:;
si0=l13;
si1=1U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L30:;
{
si0=l2;
l12=si0;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=61U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l11;
si1=17303618U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l11=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
si0=l11;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L28;
}
L32:;
si0=l12;
l2=si0;
L31:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L22;
}
L29:;
si0=0U;
l12=si0;
L33:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=1U;
l2=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l13;
si0+=si1;
si1=3U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L35;
}
goto L34;
L36:;
si0=l11;
si1=17303618U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l11=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L34;
}
si0=l11;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
goto L19;
L35:;
si0=l5;
si1=1U;
si0+=si1;
l1=si0;
goto L17;
L34:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L33;
}
L28:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l12;
l2=si0;
goto L19;
L23:;
si0=l11;
si1=l10;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L13;
L22:;
si0=l13;
l12=si0;
goto L14;
L21:;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=61U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l5;
l1=si0;
si0=l15;
l5=si0;
goto L17;
L37:;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=1U;
l16=si0;
si0=l15;
l17=si0;
L20:;
si0=l12;
si1=17303618U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l11=si0;
si1=63U;
si0=(U32)((I32)si0>(I32)si1);
si1=l11;
si2=-1U;
si1=si1 == si2;
si0|=si1;
l15=si0;
if(si0){
goto L38;
}
si0=0U;
l2=si0;
si0=l16;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
L38:;
si0=l12;
si1=61U;
si2=l15;
si0=si2?si0:si1;
l1=si0;
si0=0U;
l2=si0;
goto L9;
L19:;
si0=1U;
l12=si0;
si0=l13;
switch(si0){
case 0:
goto L39;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
default:
goto L39;
}
L42:;
si0=l11;
si1=4U;
si0=(U32)((I32)si0>>(si1&31));
si1=l14;
si2=2U;
si1<<=(si2&31);
si0|=si1;
l12=si0;
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=15U;
si0&=si1;
l11=si0;
si0=2U;
l12=si0;
goto L39;
L41:;
si0=l11;
si1=2U;
si0=(U32)((I32)si0>>(si1&31));
si1=l14;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l12=si0;
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=3U;
l12=si0;
si0=l11;
si1=3U;
si0&=si1;
l11=si0;
goto L39;
L40:;
si0=l11;
si1=l14;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l9;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l9;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l12=si0;
si0=0U;
l11=si0;
L39:;
si0=l1;
si1=l10;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L14;
}
L17:;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=61U;
l1=si0;
si0=2U;
l2=si0;
si0=l5;
l17=si0;
goto L9;
L46:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L15:;
si0=l0;
si1=15616U;
i32_store16(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L14:;
si0=l12;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
default:
goto L13;
}
L13:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L10;
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L11:;
si0=l0;
si1=2U;
i32_store16(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
si2=3U;
si1=DIV_U(si1,si2);
si2=2U;
si1<<=(si2&31);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L7;
L9:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L7:;
si0=l4;
switch(si0){
case 0:
goto L47;
case 1:
goto L50;
case 2:
goto L49;
case 3:
goto L48;
default:
goto L51;
}
L51:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L47;
}
si0=l1;
f1354(i,si0);
goto L47;
L50:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L47;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L47;
L49:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L47;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L47;
L48:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L47;
}
si0=l1;
f1354(i,si0);
L47:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5248(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=l2;
si1=16U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=20U;
si0+=si1;
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=20U;
si0+=si1;
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L7;
L8:;
si0=l1;
si1=56U;
si0+=si1;
si0=f8768(i,si0);
l0=si0;
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
goto L7;
}
si0=l1;
f5522(i,si0);
L7:;
si0=l2;
si1=l0;
si2=16U;
si1>>=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f36(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L9;
}
si0=l4;
f1354(i,si0);
goto L9;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L9;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L9;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L9;
}
si0=l4;
f1354(i,si0);
L9:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=16U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
L0:;
return si0;
}

U32 f5249(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
f740(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
goto L1;
L5:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
f740(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l2;
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
goto L1;
}
si0=l2;
f1354(i,si0);
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
si2=l0;
f740(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=l4;
si1=0U;
si2=l4;
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
goto L1;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
f740(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=0U;
si2=l2;
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
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=l0;
f740(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si0=l4;
si1=l4;
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
si0=l4;
f1354(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f5250(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
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
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=1U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=0U;
l7=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l8=si0;
L12:;
{
si0=l4;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=144U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l6;
si1=l8;
si2=1U;
si1+=si2;
l10=si1;
si2=l6;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si1=-1U;
si0+=si1;
l12=si0;
si0=l8;
si1=255U;
si0+=si1;
l13=si0;
si0=l10;
l1=si0;
L17:;
{
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l4;
si1=l1;
si0+=si1;
l14=si0;
si0=l5;
l1=si0;
si0=l14;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=l9;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
}
si0=l5;
si1=-2U;
si0+=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l11=si0;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l11;
si1=l8;
si0-=si1;
l5=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l7;
si1=l1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l10;
l8=si0;
goto L13;
L15:;
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L21:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L14:;
si0=l7;
si1=l1;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l7;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l7;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L13:;
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l3;
switch(si0){
case 0:
goto L25;
case 1:
goto L28;
case 2:
goto L27;
case 3:
goto L26;
default:
goto L29;
}
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L25;
}
si0=l1;
f1354(i,si0);
goto L25;
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L25;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L25;
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L25;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L25;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L25;
}
si0=l1;
f1354(i,si0);
L25:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5251(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l0;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
goto L1;
L5:;
si0=l0;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f1354(i,si0);
goto L1;
L4:;
si0=l0;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l1=si2;
si3=1U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l1;
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
f1361(i,si0,si1);
goto L1;
L3:;
si0=l0;
si1=l2;
si2=l4;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f1361(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l1=si2;
si3=4U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f4196(i,si0,si1,si2,si3,si4);
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
goto L1;
}
si0=l1;
f1354(i,si0);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5252(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
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
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=1U;
l1=si0;
si0=1U;
l6=si0;
L11:;
{
si0=l4;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=144U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l4;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L13;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=144U;
i32_store8(&i->m0,(U64)si0,si1);
goto L15;
L16:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L12;
L14:;
si0=l8;
si1=l5;
si2=17304020U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l7;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l8;
l6=si0;
goto L12;
L20:;
si0=l6;
si1=l5;
si2=17304036U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l4;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l6=si0;
L21:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=255U;
si0&=si1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L21;
}
}
si0=l8;
l6=si0;
L12:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
switch(si0){
case 0:
goto L23;
case 1:
goto L26;
case 2:
goto L25;
case 3:
goto L24;
default:
goto L27;
}
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L23;
}
si0=l1;
f1354(i,si0);
goto L23;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L23;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L23;
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L23;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L23;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L23;
}
si0=l1;
f1354(i,si0);
L23:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=0U;
si1=0U;
si2=17304004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L0:;
}

void f5253(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=20U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=20U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L9;
}
si0=32U;
l7=si0;
goto L8;
L9:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0+=si1;
si1=63U;
si0&=si1;
l7=si0;
if(si0){
goto L8;
}
si0=1U;
l8=si0;
si0=0U;
l7=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l8=si0;
if(si0){
goto L7;
}
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=0U;
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l5;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=-1U;
si0+=si1;
l8=si0;
L21:;
{
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l9;
si2=l8;
si3=4U;
si4=l8;
si5=4U;
si4=si4 < si5;
si2=si4?si2:si3;
l10=si2;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f3819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
goto L12;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L23;
}
L24:;
{
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si1=36U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=4U;
si0=si0 < si1;
if(si0){
goto L24;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
L23:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l11=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l12=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l13=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
f15024(i,si0);
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l13;
si1=l14;
si0|=si1;
si1=255U;
si0&=si1;
if(si0){
goto L28;
}
goto L27;
L29:;
si0=l13;
si1=240U;
si0&=si1;
si1=4U;
si0>>=(si1&31);
si1=l14;
si2=2U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L27;
L28:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l2;
si1=l6;
si2=l3;
si3=64U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L11;
L31:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L27:;
si0=l1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l12;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l2;
si1=l6;
si2=l3;
si3=64U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L11;
L33:;
si0=l12;
si1=252U;
si0&=si1;
si1=2U;
si0>>=(si1&31);
si1=l13;
si2=15U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L32:;
si0=l1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l11;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l2;
si1=l6;
si2=l3;
si3=64U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L11;
L36:;
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l11;
si0|=si1;
l6=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
L35:;
si0=l8;
si1=l10;
si0-=si1;
l8=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l7;
si1=l1;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L19:;
f14795(i);
UNREACHABLE;
L18:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l7;
si1=l1;
si0-=si1;
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l6;
f4875(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si0+=si1;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
f15024(i,si0);
L15:;
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
goto L10;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L10:;
si0=l4;
switch(si0){
case 0:
goto L39;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
default:
goto L43;
}
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
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
goto L39;
}
si0=l1;
f1354(i,si0);
goto L39;
L42:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L39;
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L39;
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
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
goto L39;
}
si0=l1;
f1354(i,si0);
L39:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5254(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L6;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
goto L1;
L5:;
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l4;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=l2;
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
goto L1;
}
si0=l2;
f1354(i,si0);
goto L1;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
l2=si2;
si3=1U;
si2+=si3;
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si1=0U;
si2=l2;
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
goto L1;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l4;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=0U;
si2=l2;
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
goto L1;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L1;
L2:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+52U);
l2=si2;
si3=4U;
si2+=si3;
si3=l4;
si4=56U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l2;
si1=l2;
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
goto L1;
}
si0=l2;
f1354(i,si0);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5255(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=8U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
sj1=l5;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
f4466(i,si0,si1,si2);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
f1354(i,si0);
goto L9;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L9;
}
si0=l1;
f1354(i,si0);
L9:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5256(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
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
si0=l4;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l4;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l6=si0;
si0=l4;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l4;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=45U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=2U;
si0+=si1;
si1=255U;
si0&=si1;
si1=3U;
si0=DIV_U(si0,si1);
si1=2U;
si0<<=(si1&31);
si1=2U;
si0|=si1;
l7=si0;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=96U;
si2=l1;
si3=32U;
si2+=si3;
l8=si2;
si3=l3;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
si2=l8;
si3=l1;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=1U;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
si0=1U;
l2=si0;
L13:;
{
si0=96U;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=2U;
si1>>=(si2&31);
si2=32U;
si1+=si2;
l8=si1;
si2=l7;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l8;
si2=l3;
si0=si2?si0:si1;
l9=si0;
si0=17304068U;
si1=l6;
si2=2U;
si1+=si2;
si2=l1;
si3=3U;
si2=si2 < si3;
l10=si2;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=17304068U;
si1=l6;
si2=1U;
si1+=si2;
si2=l1;
si3=3U;
si4=l10;
si2=si4?si2:si3;
l10=si2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=96U;
si1=l7;
si2=4U;
si1<<=(si2&31);
si2=48U;
si1&=si2;
si2=l11;
si3=240U;
si2&=si3;
si3=4U;
si2>>=(si3&31);
si1|=si2;
l7=si1;
si2=32U;
si1+=si2;
l9=si1;
si2=l7;
si0=si2?si0:si1;
si1=l9;
si2=l3;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=96U;
si1=l11;
si2=2U;
si1<<=(si2&31);
si2=60U;
si1&=si2;
si2=l8;
si3=192U;
si2&=si3;
si3=6U;
si2>>=(si3&31);
si1|=si2;
l7=si1;
si2=32U;
si1+=si2;
l11=si1;
si2=l7;
si0=si2?si0:si1;
si1=l11;
si2=l3;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L16:;
si0=l1;
si1=l10;
si0-=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=96U;
si1=l8;
si2=63U;
si1&=si2;
l7=si1;
si2=32U;
si1+=si2;
l8=si1;
si2=l7;
si0=si2?si0:si1;
si1=l8;
si2=l3;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L17:;
si0=l6;
si1=l10;
si0+=si1;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
if(si0){
goto L13;
}
}
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
f4867(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l2;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304085U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304077U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17304069U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=103079215128ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L10:;
si0=l5;
switch(si0){
case 0:
goto L18;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
default:
goto L22;
}
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L18;
}
si0=l1;
f1354(i,si0);
goto L18;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L18;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L18;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si2=l1;
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
goto L18;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L18;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
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
goto L18;
}
si0=l1;
f1354(i,si0);
L18:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5257(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
l0=si0;
goto L8;
L9:;
si0=l6;
si1=8U;
si0<<=(si1&31);
si1=65280U;
si0&=si1;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l6;
si3=8U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si1^=si2;
si2=1U;
si1<<=(si2&31);
si2=17303084U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
l6=si0;
si0=l4;
si1=1U;
si0+=si1;
l0=si0;
L8:;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si0+=si1;
l4=si0;
L11:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l6;
si2=8U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si0^=si1;
si1=1U;
si0<<=(si1&31);
si1=17303084U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0<<=(si1&31);
si1=65280U;
si0&=si1;
si1=l0;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l6;
si3=8U;
si2<<=(si3&31);
si3=l5;
si2^=si3;
si3=8U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si1^=si2;
si2=1U;
si1<<=(si2&31);
si2=17303084U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si0^=si1;
l6=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l3;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L16;
}
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L12;
}
si0=l0;
f1354(i,si0);
goto L12;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=0U;
si2=l0;
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
goto L12;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L12;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=0U;
si2=l0;
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
goto L12;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
goto L12;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L12;
}
si0=l0;
f1354(i,si0);
L12:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5258(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
goto L1;
L4:;
si0=l3;
si1=20U;
si0+=si1;
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=20U;
si0+=si1;
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l5;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L11;
L13:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
L11:;
si0=0U;
l4=si0;
L14:;
{
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=1U;
l7=si0;
si0=1U;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l8;
si1=-55U;
si0+=si1;
l9=si0;
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l6=si0;
goto L15;
L16:;
si0=l8;
si1=-87U;
si0+=si1;
l9=si0;
si0=1U;
l6=si0;
L15:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l10;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l10;
si1=-55U;
si0+=si1;
l8=si0;
si0=l10;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
l7=si0;
goto L17;
L18:;
si0=l10;
si1=-87U;
si0+=si1;
l8=si0;
L17:;
si0=l6;
si1=l7;
si0&=si1;
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=27U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17303063U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17303056U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17303048U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17303040U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=115964117019ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659148U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=18659148U;
si1=l2;
f4785(i,si0,si1);
L21:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659152U);
l1=si0;
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
goto L9;
}
si0=l2;
si1=l1;
si2=l3;
si3=36U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
goto L7;
L20:;
si0=l8;
si1=l9;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
f4867(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L22:;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=-2U;
si0+=si1;
l5=si0;
if(si0){
goto L14;
}
goto L8;
L19:;
}
si0=1U;
si1=27U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17303083U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17303075U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17303067U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=73014444049ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659148U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=18659148U;
si1=l2;
f4785(i,si0,si1);
L24:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659152U);
l1=si0;
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
goto L9;
}
si0=l2;
si1=l1;
si2=l3;
si3=36U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L7;
L23:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
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
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L25;
case 1:
goto L28;
case 2:
goto L27;
case 3:
goto L26;
default:
goto L29;
}
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
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
goto L25;
}
si0=l1;
f1354(i,si0);
goto L25;
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L25;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L25;
L27:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L25;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L25;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
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
goto L25;
}
si0=l1;
f1354(i,si0);
L25:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5259(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
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
si0=l2;
si1=20U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=20U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=24U;
si0+=si1;
l0=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=20U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=24U;
si0+=si1;
l0=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l2;
si1=28U;
si0+=si1;
si1=l1;
si2=l4;
si3=l0;
si3=i32_load(&i->m0,(U64)si3);
f838(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l0=si0;
si0=l3;
switch(si0){
case 0:
goto L8;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L12;
}
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
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
goto L8;
}
si0=l1;
f1354(i,si0);
goto L8;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
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
goto L8;
}
si0=l1;
f1354(i,si0);
L8:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L7:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=17301032U;
si1=43U;
si2=l2;
si3=40U;
si2+=si3;
si3=17308280U;
si4=17308296U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f5260(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
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
si0=l3;
si1=24U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L1;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
l5=si0;
goto L1;
L4:;
si0=l3;
si1=28U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l3;
si1=28U;
si0+=si1;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0+=si1;
l8=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=56U;
si1+=si2;
si2=l6;
si3=l7;
si2+=si3;
si3=l1;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f12872(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L9:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L7;
L8:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l4;
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
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l2;
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
goto L10;
}
si0=l2;
f1354(i,si0);
goto L10;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=0U;
si2=l2;
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
goto L10;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=0U;
si2=l2;
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
goto L10;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L10;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l2;
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
goto L10;
}
si0=l2;
f1354(i,si0);
L10:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5261(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=l4;
si2=l0;
si1+=si2;
si2=l5;
si3=l0;
si2-=si3;
si3=l2;
si4=16U;
si3+=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+20U);
si0=f12871(i,si0,si1,si2,si3,si4);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
switch(si0){
case 0:
goto L8;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L12;
}
L12:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
goto L8;
L11:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L10:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L9:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L7:;
si0=l0;
si1=l5;
si2=17308064U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f5262(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L1;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=4U;
si0+=si1;
si1=l4;
si2=l0;
si1+=si2;
si2=l5;
si3=l0;
si2-=si3;
si3=l2;
si4=16U;
si3+=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+20U);
si0=f12871(i,si0,si1,si2,si3,si4);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
switch(si0){
case 0:
goto L8;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L12;
}
L12:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
goto L8;
L11:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L10:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L8;
L9:;
si0=l1;
si1=0U;
si2=l1;
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
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L7:;
si0=l0;
si1=l5;
si2=17308112U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f5263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659364U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659368U);
l5=si0;
si1=l3;
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
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L7;
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
goto L9;
}
}
L8:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7633903491618680281ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5429282368386187848ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
goto L5;
}
goto L4;
L7:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
goto L5;
}
goto L4;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=1U;
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l6;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
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
goto L4;
}
L5:;
si0=l3;
f5522(i,si0);
L4:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5264(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659376U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9152216812325816393ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2350181552456182105ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
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
goto L2;
L7:;
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305940U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305948U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
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
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659376U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9152216812325816393ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2350181552456182105ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
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
goto L2;
L7:;
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17306032U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17306040U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
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
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=656U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=304U;
si0+=si1;
si1=l3;
si2=l2;
f3975(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+304U);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+368U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+364U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+360U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+352U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+348U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+344U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+332U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+328U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+308U);
l14=si0;
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
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l5;
si3=17306068U;
si4=5U;
f4104(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l15;
l16=si0;
si0=l15;
if(si0){
goto L10;
}
si0=l5;
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l17;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l17;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
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
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l17;
si1=4U;
si0+=si1;
l17=si0;
si0=l16;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
}
si0=l5;
l16=si0;
L10:;
si0=1024U;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=304U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=l14;
i32_store8(&i->m0,(U64)si0+580U,si1);
si0=l4;
si1=304U;
si0+=si1;
si1=l14;
si2=255U;
si1&=si2;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
si2=8U;
si1>>=(si2&31);
l3=si1;
i32_store8(&i->m0,(U64)si0+581U,si1);
si0=l4;
si1=304U;
si0+=si1;
si1=l3;
si2=255U;
si1&=si2;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=568U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+560U,sj1);
si0=l4;
si1=92U;
i32_store8(&i->m0,(U64)si0+582U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+576U,si1);
si0=l4;
si1=257U;
i32_store16(&i->m0,(U64)si0+578U,si1);
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+314U,si1);
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+317U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
si2=280U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=304U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=280U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
si2=284U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
l3=si0;
L13:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L14:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
f15024(i,si0);
L15:;
si0=l12;
si0=!(si0);
if(si0){
goto L16;
}
si0=l13;
si1=l12;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l11;
l3=si0;
L18:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L19:;
si0=l3;
si1=12U;
si0+=si1;
l17=si0;
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
goto L20;
}
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L20:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
f15024(i,si0);
L21:;
si0=l15;
si0=!(si0);
if(si0){
goto L22;
}
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
goto L22;
}
si0=l5;
f5522(i,si0);
L22:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l4;
si1=304U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=284U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+608U,si1);
si0=l4;
sj1=4398046512128ULL;
i64_store(&i->m0,(U64)si0+596U,sj1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+592U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659424U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659428U);
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
goto L5;
}
si0=0U;
l3=si0;
si0=0U;
l6=si0;
si0=l9;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+636U,si1);
si0=l6;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=648U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+640U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+628U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+624U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+620U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=620U;
si0+=si1;
si1=l17;
si2=0U;
si0=f5913(i,si0,si1,si2);
l6=si0;
L23:;
si0=l4;
si1=304U;
si0+=si1;
si1=l9;
si2=l6;
si0=f4958(i,si0,si1,si2);
l15=si0;
goto L6;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=37U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306102U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306097U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306089U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306081U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17306073U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+308U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l15;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l17;
si2=l4;
si3=304U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l15=si0;
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
l3=si0;
L25:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L26:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
f15024(i,si0);
L27:;
si0=l12;
si0=!(si0);
if(si0){
goto L28;
}
si0=l13;
si1=l12;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L29;
}
si0=l11;
l3=si0;
L30:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L31:;
si0=l3;
si1=12U;
si0+=si1;
l17=si0;
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
goto L32;
}
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L32:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l10;
si0=!(si0);
if(si0){
goto L33;
}
si0=l11;
f15024(i,si0);
L33:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
f5522(i,si0);
goto L6;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+308U);
l15=si0;
si0=1U;
l3=si0;
L6:;
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=656U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=1024U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5267(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3954(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17304948U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17304956U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5268(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=1U;
l4=si0;
si0=l3;
si1=l2;
si0=f3938(i,si0,si1);
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
l4=si0;
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
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5269(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f3903(i,si0,si1,si2);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=17307825U;
si3=8U;
si4=l2;
f5008(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L13;
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
L14:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=1U;
l6=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
l3=si0;
goto L10;
L15:;
si0=l2;
si1=17244704U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L3;
}
goto L4;
L12:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L4;
}
goto L3;
L11:;
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
goto L9;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L25;
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
L26:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L25:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L27;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
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
goto L18;
}
goto L19;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=5U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17307837U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17307833U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=21474836485ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l10;
si2=l6;
si3=0U;
si4=l4;
si5=84U;
si4+=si5;
si5=l2;
si5=i32_load(&i->m0,(U64)si5+96U);
si6=107U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
f2285(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si1=208U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=112U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=320U;
si0+=si1;
si1=l4;
si2=208U;
si1+=si2;
si2=l2;
si3=88U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=8U;
si2+=si3;
f9258(i,si0,si1,si2);
si0=l3;
si1=56U;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=320U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5946(i,si0,si1,si2);
l3=si0;
goto L20;
L28:;
si0=l4;
si1=32U;
si0+=si1;
l6=si0;
si1=l4;
si2=96U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l4;
si2=96U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l9=si0;
si1=l4;
si2=96U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si1=l4;
si2=96U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l11=si0;
si1=l4;
si2=96U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l12=si0;
si1=l4;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l13=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=208U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+216U,sj1);
si0=l2;
si1=l4;
si2=208U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=l5;
si3=i32_load(&i->m0,(U64)si3+68U);
si0=f11828(i,si0,si1,si2,si3);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+208U);
si1=5U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L29;
case 1:
goto L22;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L22;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L29;
default:
goto L22;
}
L29:;
si0=l4;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+216U);
f15024(i,si0);
goto L22;
L24:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
goto L18;
L23:;
si0=l4;
si1=208U;
si0+=si1;
f5270(i,si0);
L22:;
si0=l4;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+256U);
f15024(i,si0);
L30:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
f5522(i,si0);
goto L5;
L21:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l5;
l8=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L16;
L19:;
si0=l5;
f5522(i,si0);
L18:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L31;
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
L32:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L33;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l11;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L7;
L33:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
l3=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l8;
f5522(i,si0);
L16:;
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
goto L10;
}
si0=l7;
f5522(i,si0);
L10:;
si0=l4;
si1=220U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17307840U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l4;
si1=1896U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si1=l4;
si2=320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l4;
si1=208U;
si0+=si1;
f14781(i,si0);
si0=l3;
si1=l3;
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
si0=l3;
f5522(i,si0);
L34:;
si0=l6;
si0=!(si0);
if(si0){
goto L35;
}
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
goto L35;
}
si0=l5;
f5522(i,si0);
L35:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l11;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
L7:;
si0=l5;
f5522(i,si0);
L6:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l8;
f5522(i,si0);
L5:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l7;
f5522(i,si0);
L36:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
goto L3;
L4:;
si0=l7;
f5522(i,si0);
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l10;
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
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5270(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=8U;
si0+=si1;
f5324(i,si0);
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
si3=97U;
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
f15024(i,si0);
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
si3=97U;
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
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f5271(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
f5272(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5272(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17304760U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=17304768U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5273(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=17305388U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=17305396U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f3892(i,si0,si1,si2);
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
si2=l3;
si3=l2;
f5275(i,si0,si1,si2,si3);
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5275(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
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
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj1=l6;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=l2;
f5059(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
f5128(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
goto L5;
L6:;
si0=l1;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l1;
si1=288U;
si0+=si1;
l11=si0;
si0=0U;
l5=si0;
L7:;
{
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
si2=l10;
f4102(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L10;
default:
goto L12;
}
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l7;
f5522(i,si0);
L13:;
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
goto L14;
}
si0=l9;
f5522(i,si0);
L14:;
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+296U);
l2=si1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l1;
si1=288U;
si0+=si1;
l12=si0;
L22:;
{
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+288U);
si3=l5;
si2+=si3;
si3=l2;
si4=l5;
si3-=si4;
f745(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
if(si0){
goto L23;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+296U);
l2=si1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l4;
si1=36U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+288U);
si2=l5;
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+304U);
l14=si0;
si0=4U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l15=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l13;
si2=l2;
f8911(i,si0,si1,si2);
si0=l15;
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
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=l4;
si2=48U;
si1+=si2;
si2=l2;
si3=0U;
si1=f5980(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=100U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=0U;
si0=f3982(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=17238184U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l14;
si2=l4;
si3=48U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L24:;
si0=l1;
si1=0U;
si2=l1;
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
goto L2;
}
goto L3;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l2=si0;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L26;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l2=si0;
goto L25;
L26:;
si0=l2;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=l2;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l12;
si1=l2;
si2=l2;
f4875(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l13=si0;
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l14=si0;
si1=l13;
si0+=si1;
l15=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l15;
si1=0U;
si2=l2;
si3=-1U;
si2+=si3;
l2=si2;
si0=f15145(i,si0,si1,si2);
si0=l14;
si1=l13;
si2=l2;
si1+=si2;
l13=si1;
si0+=si1;
l15=si0;
L28:;
si0=l15;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l2=si0;
L25:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l5;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L22;
}
}
L21:;
si0=l5;
si1=l2;
si2=17307716U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17307804U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17307796U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=516U;
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
sj1=51539607564ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l2;
si2=l4;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L5;
L19:;
si0=l5;
si1=l2;
si2=17307732U;
f597(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
f14795(i);
UNREACHABLE;
L16:;
si0=17308684U;
si1=70U;
si2=l4;
si3=36U;
si2+=si3;
si3=17308756U;
si4=17308852U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=0U;
l14=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
l2=si0;
si0=0U;
l17=si0;
goto L9;
L29:;
si0=17303028U;
l18=si0;
si0=0U;
l17=si0;
sj0=l6;
sj1=-8990866679616540847ULL;
sj0^=sj1;
sj1=l16;
sj2=8450201886133083679ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l4;
si1=l7;
si2=l3;
f6040(i,si0,si1,si2);
si0=1U;
l17=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L30;
}
si0=l2;
l19=si0;
goto L9;
L30:;
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
goto L31;
}
si0=l7;
f5522(i,si0);
L31:;
si0=l2;
l7=si0;
L10:;
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
goto L5;
}
si0=l9;
f5522(i,si0);
goto L5;
L9:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l13=si0;
si0=0U;
l2=si0;
L32:;
{
si0=l13;
si1=l5;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l8;
si2=l18;
si3=l2;
si2+=si3;
si3=l14;
si4=l2;
si3-=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+288U);
si5=l5;
si4+=si5;
si5=l13;
si6=l5;
si5-=si6;
f743(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l5;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
if(si0){
goto L33;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+296U);
l2=si1;
si0=si0 > si1;
if(si0){
goto L37;
}
L38:;
{
si0=l2;
si1=l5;
si0-=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
si1=l5;
si0+=si1;
l14=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+273U);
if(si0){
goto L41;
}
si0=0U;
l15=si0;
goto L40;
L41:;
si0=l13;
if(si0){
goto L42;
}
si0=0U;
l15=si0;
goto L39;
L42:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+273U,si1);
si0=l14;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+285U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+264U);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+264U,sj1);
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
si0=1U;
l15=si0;
L40:;
si0=l13;
if(si0){
goto L36;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l2=si0;
L39:;
si0=l15;
si1=l5;
si0+=si1;
l5=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L44;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l2=si0;
goto L43;
L44:;
si0=l2;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=l2;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l11;
si1=l2;
si2=l2;
f4875(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l13=si0;
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l14=si0;
si1=l13;
si0+=si1;
l15=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l15;
si1=0U;
si2=l2;
si3=-1U;
si2+=si3;
l2=si2;
si0=f15145(i,si0,si1,si2);
si0=l14;
si1=l13;
si2=l2;
si1+=si2;
l13=si1;
si0+=si1;
l15=si0;
L46:;
si0=l15;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l2=si0;
L43:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l5;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L38;
}
}
L37:;
si0=l5;
si1=l2;
si2=17307764U;
f593(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+272U,si1);
si0=l14;
si1=l15;
si0+=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+284U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+264U);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+264U,sj1);
si0=l17;
si0=!(si0);
if(si0){
goto L34;
}
si0=l19;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l19;
f5522(i,si0);
goto L34;
L35:;
si0=l5;
si1=l13;
si2=17307748U;
f593(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l5;
si1=l15;
si0+=si1;
si1=1U;
si0+=si1;
l5=si0;
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
goto L7;
}
si0=l7;
f5522(i,si0);
goto L7;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l13=si0;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L48;
}
si0=l13;
si1=1U;
si0<<=(si1&31);
l13=si0;
goto L47;
L48:;
si0=l13;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=l13;
si0-=si1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l11;
si1=l13;
si2=l13;
f4875(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l15=si0;
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l20=si0;
si1=l15;
si0+=si1;
l12=si0;
si0=l13;
si1=2U;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l12;
si1=0U;
si2=l13;
si3=-1U;
si2+=si3;
l13=si2;
si0=f15145(i,si0,si1,si2);
si0=l20;
si1=l15;
si2=l13;
si1+=si2;
l15=si1;
si0+=si1;
l12=si0;
L50:;
si0=l12;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0+=si1;
l13=si0;
L47:;
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L32;
}
}
}
si0=l2;
si1=l14;
si2=17307780U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L4:;
si0=1U;
l5=si0;
si0=l1;
si1=0U;
si2=l1;
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
goto L2;
}
L3:;
si0=l1;
si1=0U;
f1361(i,si0,si1);
L2:;
si0=l0;
si1=l7;
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

void f5276(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=l3;
si2=l2;
f3884(i,si0,si1,si2);
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
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17307840U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=12U;
si0+=si1;
f14781(i,si0);
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
L1:;
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
L0:;
}

void f5277(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3956(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305536U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305544U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3937(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305720U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305728U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5279(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3905(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305628U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305636U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5280(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=17305128U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=17305136U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5281(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3908(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305212U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305220U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3897(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305824U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305832U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5283(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f3954(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17304852U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17304860U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5284(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=17305036U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=17305044U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5285(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=17305300U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=17305308U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5286(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=1344U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f3961(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=1024U;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=64U;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=272U;
si0+=si1;
si1=0U;
si2=70U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=346U;
si0+=si1;
si1=0U;
si2=70U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=12U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15145(i,si0,si1,si2);
si0=l4;
si1=257U;
i32_store(&i->m0,(U64)si0+426U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+424U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+421U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+342U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0+420U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+419U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+416U,si1);
si0=l4;
si1=912U;
si0+=si1;
si1=l4;
f741(i,si0,si1);
si0=l4;
si1=476U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l4;
si2=912U;
si1+=si2;
si2=432U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=4U;
si0|=si1;
si1=l4;
si2=476U;
si1+=si2;
si2=436U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
l3=si0;
L9:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L10:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
f15024(i,si0);
L11:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l13;
si1=l12;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
l3=si0;
L14:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L15:;
si0=l3;
si1=12U;
si0+=si1;
l16=si0;
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
goto L16;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L16:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l11;
f15024(i,si0);
L17:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l4;
sj1=68719476752ULL;
i64_store(&i->m0,(U64)si0+456U,sj1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+452U,si1);
si0=l4;
sj1=4398046512128ULL;
i64_store(&i->m0,(U64)si0+444U,sj1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659416U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659420U);
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
goto L1;
}
si0=0U;
l9=si0;
si0=0U;
l3=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
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
i32_store(&i->m0,(U64)si0+492U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=504U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+484U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+476U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=476U;
si0+=si1;
si1=l16;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L18:;
si0=l4;
si1=l6;
si2=l3;
si0=f4951(i,si0,si1,si2);
l3=si0;
goto L6;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l9=si0;
L6:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1344U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=1024U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=4U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
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

void f5287(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
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
f3943(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l2;
f5128(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
goto L8;
L9:;
si0=l5;
si1=56U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
L11:;
{
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si2=l9;
f4102(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L10;
default:
goto L13;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
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
goto L14;
}
si0=l3;
f5522(i,si0);
L14:;
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
goto L15;
}
si0=l8;
f5522(i,si0);
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L7;
L12:;
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
si3=l2;
f5275(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L10;
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
goto L11;
}
si0=l3;
f5522(i,si0);
goto L11;
}
L10:;
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
goto L8;
}
si0=l8;
f5522(i,si0);
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L6;
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L6:;
si0=1U;
l6=si0;
si0=l3;
if(si0){
goto L4;
}
L5:;
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
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
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
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5288(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3901(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=17304672U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l4;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=17304680U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5289(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=-44032U;
si0+=si1;
l4=si0;
si1=11172U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=17827756U;
si2=l0;
f14875(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f5289(i,si0,si1,si2);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=17777536U;
si1=l0;
si0=f14873(i,si0,si1);
l9=si0;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=-1U;
si0+=si1;
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l10;
si1=l10;
si2=0U;
si1=si1 != si2;
si0-=si1;
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l15=si0;
L8:;
{
si0=l15;
si1=l10;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l15;
si1=l14;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l16=si0;
si0=l11;
l2=si0;
si0=l12;
l5=si0;
si0=l13;
l6=si0;
L9:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=l1;
si0=si0 < si1;
l17=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=0U;
si2=l1;
si3=l17;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l17=si0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l18;
si1=l20;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=17688244U;
si1=20U;
si2=17688372U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l17;
si1=l19;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l16=si0;
L10:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l15;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l4;
l15=si0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
}
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
f5018(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l6;
si4=l1;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l9;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L3:;
si0=l2;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=17777536U;
si1=l0;
si0=f14873(i,si0,si1);
l2=si0;
si1=255U;
si0&=si1;
if(si0){
goto L15;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f14870(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l5;
f5018(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l6;
si4=l1;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L14:;
si0=l3;
si1=20U;
si0+=si1;
si1=17899676U;
si2=l0;
f14876(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L18:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=1U;
f5289(i,si0,si1,si2);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L18;
}
goto L1;
}
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
f5212(i,si0,si1,si2);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=17777536U;
si1=l4;
si2=65535U;
si1&=si2;
si2=588U;
si1=DIV_U(si1,si2);
si2=4352U;
si1|=si2;
l10=si1;
si0=f14873(i,si0,si1);
l14=si0;
si1=255U;
si0&=si1;
if(si0){
goto L19;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=-1U;
si0+=si1;
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l11;
si1=l11;
si2=0U;
si1=si1 != si2;
si0-=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l15=si0;
L21:;
{
si0=l15;
si1=l11;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l15;
si1=l12;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l15;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l16=si0;
si0=l13;
l2=si0;
si0=l8;
l5=si0;
si0=l22;
l6=si0;
L22:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L25;
}
si0=l5;
si1=l1;
si0=si0 < si1;
l17=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=0U;
si2=l1;
si3=l17;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l17=si0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l18;
si1=l20;
si0=si0 > si1;
if(si0){
goto L24;
}
goto L23;
L25:;
si0=17688244U;
si1=20U;
si2=17688372U;
f634(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l17;
si1=l19;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l16=si0;
L23:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l15;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=l7;
l15=si0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L21;
}
}
L20:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
f5018(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L26:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l6;
si4=l1;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l14;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17777536U;
si1=l4;
si2=588U;
si1=REM_U(si1,si2);
si2=28U;
si1=DIV_U(si1,si2);
si2=4449U;
si1+=si2;
l10=si1;
si0=f14873(i,si0,si1);
l14=si0;
si1=255U;
si0&=si1;
if(si0){
goto L27;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=-1U;
si0+=si1;
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l11;
si1=l11;
si2=0U;
si1=si1 != si2;
si0-=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l15=si0;
L29:;
{
si0=l15;
si1=l11;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l15;
si1=l12;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l15;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l16=si0;
si0=l13;
l2=si0;
si0=l8;
l5=si0;
si0=l22;
l6=si0;
L30:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L33;
}
si0=l5;
si1=l1;
si0=si0 < si1;
l17=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=0U;
si2=l1;
si3=l17;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l17=si0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l18;
si1=l20;
si0=si0 > si1;
if(si0){
goto L32;
}
goto L31;
L33:;
si0=17688244U;
si1=20U;
si2=17688372U;
f634(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l17;
si1=l19;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l16=si0;
L31:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l15;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L30;
}
}
si0=l7;
l15=si0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L29;
}
}
L28:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
f5018(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L34:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l6;
si4=l1;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l14;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=28U;
si0=REM_U(si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=17777536U;
si1=l5;
si2=4519U;
si1+=si2;
l7=si1;
si0=f14873(i,si0,si1);
l10=si0;
si1=255U;
si0&=si1;
if(si0){
goto L35;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L35;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si1=-1U;
si0+=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l14;
si1=l14;
si2=0U;
si1=si1 != si2;
si0-=si1;
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l15=si0;
L37:;
{
si0=l15;
si1=l14;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l15;
si1=l11;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l15;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l16=si0;
si0=l12;
l2=si0;
si0=l13;
l5=si0;
si0=l8;
l6=si0;
L38:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si1=l1;
si0=si0 < si1;
l17=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=0U;
si2=l1;
si3=l17;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l17=si0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l18;
si1=l20;
si0=si0 > si1;
if(si0){
goto L40;
}
goto L39;
L41:;
si0=17688244U;
si1=20U;
si2=17688372U;
f634(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l17;
si1=l19;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l16=si0;
L39:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l15;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
}
si0=l4;
l15=si0;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L37;
}
}
L36:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L35:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l5;
f5018(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L42:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
l1=si1;
si2=0U;
si3=l6;
si4=l1;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l10;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5290(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f5291(i,si0);
UNREACHABLE;
L0:;
}

void f5291(rustpythonInstance*i,U32 l0) {
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
si1=17302832U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f5292(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+55U);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+54U);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+54U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L5:;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
si2=1U;
si1+=si2;
l5=si1;
si2=0U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+36U);
l6=si3;
si4=l5;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14984(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=1114130U;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+54U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=24U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l8=si0;
si0=l1;
si1=53U;
si0+=si1;
l6=si0;
L8:;
{
si0=l3;
si1=l6;
si2=l2;
f4694(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
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
L15:;
sj0=l9;
si0=(U32)(sj0);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l7;
l4=si0;
si0=l5;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
f14982(i,si0,si1);
goto L1;
L14:;
si0=3U;
l1=si0;
goto L11;
L13:;
si0=2U;
l1=si0;
goto L11;
L12:;
si0=1U;
l1=si0;
L11:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
l4=si0;
L9:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
si2=l5;
f14984(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=1114130U;
si0=si0 == si1;
if(si0){
goto L8;
}
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+54U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l0;
sj1=4785151913492484ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5293(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L8;
}
si0=1U;
l6=si0;
goto L7;
L8:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L9;
}
si0=0U;
l8=si0;
goto L5;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L10:;
{
si0=l8;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si0=i32_load16_u(&i->m0,(U64)si0+270U);
l10=si0;
si1=12U;
si0*=si1;
l11=si0;
si0=-1U;
l12=si0;
L13:;
{
si0=l11;
if(si0){
goto L14;
}
si0=l10;
l12=si0;
goto L12;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l11;
si1=-12U;
si0+=si1;
l11=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l7;
si2=l13;
si3=l2;
si4=l6;
si5=l2;
si6=l6;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15142(i,si1,si2,si3);
l13=si1;
si2=l2;
si3=l6;
si2-=si3;
si3=l13;
si1=si3?si1:si2;
l6=si1;
si2=0U;
si1=si1 != si2;
si2=l6;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
}
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l8;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L10;
L11:;
}
si0=0U;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
f15024(i,si0);
goto L4;
L6:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L16;
}
si0=1U;
l1=si0;
goto L15;
L16:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
L15:;
si0=l1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=272U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store16(&i->m0,(U64)si0+270U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l0;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=144U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L18:;
si0=l5;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=56U;
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
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=68U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si2=l5;
si3=56U;
si2+=si3;
si3=l5;
si4=28U;
si3+=si4;
si4=l5;
si5=12U;
si4+=si5;
f4094(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L17:;
si0=1U;
l1=si0;
L4:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=272U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f5294(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17306208U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17303028U;
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
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f5295(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17306512U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17303028U;
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
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f5296(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
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
f3901(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L1;
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
si1=17304672U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=156U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=17304680U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5297(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3897(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305824U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305832U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5298(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305388U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305396U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5299(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305128U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305136U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5300(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f5272(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5266(i,si0,si1,si2,si3);
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

void f5302(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f3892(i,si0,si1,si2);
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
f5275(i,si0,si1,si2,si3);
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
f5522(i,si0);
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

void f5303(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5287(i,si0,si1,si2,si3);
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

void f5304(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3937(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305720U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305728U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5305(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5269(i,si0,si1,si2,si3);
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

void f5306(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5286(i,si0,si1,si2,si3);
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

void f5307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f3938(i,si0,si1);
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

void f5308(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3954(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17304852U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17304860U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5309(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3908(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305212U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305220U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5310(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=128U;
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
f3884(i,si0,si1,si2);
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
si1=104U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17307840U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1896U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l4;
si2=116U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l4;
si2=124U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=92U;
si0+=si1;
f14781(i,si0);
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
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5311(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659376U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9152216812325816393ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2350181552456182105ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
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
goto L2;
L7:;
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17305940U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17305948U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
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
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5312(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305300U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305308U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5313(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659364U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659368U);
l5=si0;
si1=l3;
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
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L7;
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
goto L9;
}
}
L8:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7633903491618680281ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5429282368386187848ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
goto L5;
}
goto L4;
L7:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
goto L5;
}
goto L4;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=1U;
l6=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l6;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
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
goto L4;
}
L5:;
si0=l3;
f5522(i,si0);
L4:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f5314(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
f3965(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305036U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305044U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5315(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3905(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305628U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305636U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5316(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3954(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17304948U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17304956U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5317(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
si1=84U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f3956(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=17305536U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=17305544U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5318(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659376U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
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
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9152216812325816393ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2350181552456182105ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l2;
si1=17244704U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
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
goto L2;
L7:;
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=17306032U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=17306040U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l2;
si1=17244700U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
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
L3:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5319(rustpythonInstance*i,U32 l0) {
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
f5522(i,si0);
L1:;
L0:;
}

void f5320(rustpythonInstance*i,U32 l0) {
L0:;
}

void f5321(rustpythonInstance*i,U32 l0) {
L0:;
}

void f5322(rustpythonInstance*i,U32 l0) {
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

void f5323(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f5324(rustpythonInstance*i,U32 l0) {
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
f5270(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f5325(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=17302916U;
si3=l5;
si4=12U;
si3+=si4;
si4=17302916U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f5326(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

void f5327(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
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
if(si0){
goto L4;
}
si0=0U;
l2=si0;
goto L3;
L4:;
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
si0=l3;
si1=116U;
si0+=si1;
si1=l1;
si2=l6;
f9261(i,si0,si1,si2);
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
goto L5;
}
si0=l6;
f5522(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+156U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=116U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si2=116U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l3;
si2=116U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+132U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+157U);
i32_store16(&i->m0,(U64)si0+85U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+120U);
l8=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+124U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=32U;
si0+=si1;
l6=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=24U;
si0+=si1;
l7=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l5;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=116U;
si0+=si1;
si1=l1;
si2=l2;
f5029(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l1=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+124U);
l9=sj0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
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
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
f5522(i,si0);
L7:;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
f15024(i,si0);
L8:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
goto L1;
L6:;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5328(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
goto L3;
L4:;
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
si0=l3;
si1=132U;
si0+=si1;
si1=l1;
si2=l6;
f9261(i,si0,si1,si2);
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
goto L5;
}
si0=l6;
f5522(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+172U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=132U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si2=132U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l3;
si2=132U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+148U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+173U);
i32_store16(&i->m0,(U64)si0+101U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+136U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+140U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=24U;
si0+=si1;
l7=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=l5;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=17291504U;
si2=8U;
si0=f13786(i,si0,si1,si2);
l2=si0;
if(si0){
goto L8;
}
si0=1U;
l6=si0;
goto L7;
L8:;
si0=l3;
si1=132U;
si0+=si1;
si1=l1;
si2=l2;
f13129(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
f5522(i,si0);
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+132U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+133U);
si1=1U;
si0&=si1;
l6=si0;
L7:;
si0=l3;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+60U);
l13=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+13U);
i32_store16(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=47U;
si0+=si1;
si1=l3;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=l2;
si2=24U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+64U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
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
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L10:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
f15024(i,si0);
L11:;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5329(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=0U;
l2=si0;
goto L4;
L5:;
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
si0=!(si0);
if(si0){
goto L8;
}
si0=2U;
l5=si0;
goto L7;
L8:;
si0=l3;
si1=132U;
si0+=si1;
si1=l1;
si2=l6;
f9261(i,si0,si1,si2);
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
goto L9;
}
si0=l6;
f5522(i,si0);
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+172U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=164U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l3;
si2=175U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+148U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+173U);
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+140U);
l7=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L7:;
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=71U;
si0+=si1;
si1=l3;
si2=100U;
si1+=si2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
l11=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+100U);
i32_store16(&i->m0,(U64)si0+69U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=60U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store8(&i->m0,(U64)si0+68U,si1);
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L2;
L10:;
si0=l2;
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
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si0=!(si0);
if(si0){
goto L12;
}
si0=2U;
l2=si0;
goto L11;
L12:;
si0=l3;
si1=132U;
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
goto L13;
}
si0=l6;
f5522(i,si0);
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+172U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=164U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l3;
si2=175U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+148U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+173U);
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+140U);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L11:;
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si1=l3;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+100U);
l8=si1;
i32_store16(&i->m0,(U64)si0+97U,si1);
si0=l3;
si1=l3;
si2=100U;
si1+=si2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l12=si1;
i32_store8(&i->m0,(U64)si0+99U,si1);
si0=l0;
si1=87U;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store16(&i->m0,(U64)si0+85U,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=76U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=4U;
l2=si0;
L4:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
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
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L15:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
f15024(i,si0);
L16:;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L1;
L14:;
si0=l3;
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
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}


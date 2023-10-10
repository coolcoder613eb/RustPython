#include "w2c2_base.h"

#include "rustpython.h"

void f12530(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
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
f7889(i,si0,si1,si2);
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
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
f13424(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=0U;
si0=si0 != si1;
l8=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+68U);
si3=l2;
si0=f13423(i,si0,si1,si2,si3);
l6=si0;
L3:;
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
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l8;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
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
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12531(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7889(i,si0,si1,si2);
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
l2=si0;
goto L1;
L2:;
si0=l4;
si1=l2;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f13195(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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

void f12532(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8152(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj0=f2070(i,sj0,si1,si2);
l5=sj0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
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
si0=l4;
si1=l2;
si2=0U;
si0=f5916(i,si0,si1,si2);
l2=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=1U;
l3=si0;
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12533(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8024(i,si0,si1,si2);
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
f6060(i,si0,si1,si2);
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

void f12534(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8105(i,si0,si1,si2);
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
l6=si0;
goto L2;
L3:;
si0=1U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f6058(i,si0,si1,si2);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12535(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
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
f8060(i,si0,si1,si2);
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
l8=si0;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
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
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L5:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+56U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l9;
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
f1354(i,si0);
L7:;
si0=0U;
si1=l8;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
l6=si1;
si2=l6;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
L4:;
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
goto L8;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L8:;
si0=l8;
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

void f12536(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8060(i,si0,si1,si2);
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

void f12537(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L4;
}
L5:;
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L7:;
{
si0=l7;
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
}
L6:;
si0=l5;
si1=l5;
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
goto L8;
}
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si2=1272U;
si3=l8;
si1=si3?si1:si2;
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

void f12538(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L4;
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
goto L3;
}
L4:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l7;
si1=20U;
si0+=si1;
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

void f12539(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
f7900(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=57U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17608740U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608732U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608724U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608716U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608708U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608700U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=244813135929ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
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
si0=l2;
si1=l3;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
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
f5522(i,si0);
L5:;
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
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=57U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12540(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7949(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l3;
si3=l5;
si4=l2;
f10050(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L5:;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l2;
si1=l5;
si0=f11843(i,si0,si1);
l5=si0;
si0=1U;
l6=si0;
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
si1=l5;
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

void f12541(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7893(i,si0,si1,si2);
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
si0=f5565(i,si0,si1,si2,si3);
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
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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

void f12542(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7900(i,si0,si1,si2);
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
f12188(i,si0,si1,si2,si3);
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

void f12543(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8105(i,si0,si1,si2);
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
l6=si0;
goto L2;
L3:;
si0=l5;
si1=56U;
si0+=si1;
si1=l3;
si2=l2;
si0=f12058(i,si0,si1,si2);
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
f5522(i,si0);
L4:;
si0=l7;
if(si0){
goto L5;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1280U;
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
f5522(i,si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12544(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l6=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=0U;
si3=l2;
si0=f12018(i,si0,si1,si2,si3);
l3=si0;
si0=l5;
si1=l5;
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
goto L3;
}
si0=l5;
f5522(i,si0);
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=0U;
l6=si0;
si0=l5;
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
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12545(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=0U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f13620(i,si0,si1,si2);
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

void f12546(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load(&i->m0,(U64)si0+28U);
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L2;
}
si0=l3;
f5522(i,si0);
L2:;
si0=l6;
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

void f12547(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7867(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l6=si0;
goto L2;
L3:;
si0=1U;
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=l2;
si0=f10052(i,si0,si1,si2);
l6=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=0U;
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
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
si1=l6;
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

void f12548(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9253(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
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
goto L6;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L6:;
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

void f12549(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7823(i,si0,si1,si2);
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
si0=f12179(i,si0,si1,si2);
l3=si0;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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

void f12550(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L4;
}
L5:;
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=0U;
l10=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L7:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=223U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l7;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l7;
si0=f733(i,si0);
if(si0){
goto L8;
}
si0=l7;
si0=f737(i,si0);
if(si0){
goto L8;
}
goto L6;
L9:;
si0=l7;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L6;
}
L8:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L7;
}
}
si0=1U;
l10=si0;
L6:;
si0=l5;
si1=l5;
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
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l10;
si1=si3?si1:si2;
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

void f12551(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=0U;
l6=si0;
si0=l3;
si1=l5;
si2=l2;
si0=f13620(i,si0,si1,si2);
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

void f12552(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7957(i,si0,si1,si2);
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
l5=si0;
goto L2;
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
goto L4;
}
si0=l3;
f5522(i,si0);
L4:;
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
f5522(i,si0);
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
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
goto L2;
}
goto L1;
L6:;
si0=l2;
si1=1304U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
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

void f12553(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L4;
}
L5:;
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L7;
}
si0=0U;
l8=si0;
goto L6;
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L8:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-9U;
si0+=si1;
l8=si0;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=0U;
l8=si0;
goto L6;
L9:;
si0=1U;
si1=l8;
si0<<=(si1&31);
si1=8388635U;
si0&=si1;
if(si0){
goto L10;
}
si0=0U;
l8=si0;
goto L6;
L10:;
si0=1U;
l8=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
L6:;
si0=l5;
si1=l5;
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
goto L11;
}
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l8;
si1=si3?si1:si2;
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

void f12554(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7811(i,si0,si1,si2);
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
si0=l5;
si1=l3;
si2=l2;
si0=f12098(i,si0,si1,si2);
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

void f12555(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8105(i,si0,si1,si2);
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
l6=si0;
goto L2;
L3:;
si0=1U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f6059(i,si0,si1,si2);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12556(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L4;
}
L5:;
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=0U;
l10=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L7:;
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
goto L8;
}
si0=l8;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si0=f733(i,si0);
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
si0=1U;
l10=si0;
L6:;
si0=l5;
si1=l5;
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
goto L9;
}
si0=l5;
si1=56U;
si0+=si1;
f1354(i,si0);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l10;
si1=si3?si1:si2;
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

void f12557(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7889(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L1;
}
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=112U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13112(i,si0,si1,si2);
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
goto L2;
}
si0=l3;
f5522(i,si0);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
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

void f12558(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8105(i,si0,si1,si2);
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
l6=si0;
goto L2;
L3:;
si0=1U;
l6=si0;
si0=l5;
si1=l3;
si2=l2;
si0=f6057(i,si0,si1,si2);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12559(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l6=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l2;
si0=f12018(i,si0,si1,si2,si3);
l3=si0;
si0=l5;
si1=l5;
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
goto L3;
}
si0=l5;
f5522(i,si0);
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=0U;
l6=si0;
si0=l5;
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
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12560(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L4;
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
goto L3;
}
L4:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l7;
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

void f12561(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8091(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=400U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12562(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
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
f8089(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
si0=l5;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l2;
si0=f12060(i,si0,si1,si2,si3);
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
f5522(i,si0);
L4:;
si0=l7;
if(si0){
goto L5;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1280U;
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
f5522(i,si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12563(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7889(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L1;
}
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=160U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13111(i,si0,si1,si2);
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
goto L2;
}
si0=l3;
f5522(i,si0);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l6;
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

void f12564(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
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
f8084(i,si0,si1,si2);
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
si1=296U;
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
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l3;
si1=60U;
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
si0=l4;
si1=28U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si0=f6082(i,si0,si1);
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
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12565(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
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
f8189(i,si0,si1,si2);
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
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9252(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
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
goto L6;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L6:;
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

void f12566(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
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
si1=l3;
si2=0U;
si3=l2;
f12093(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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

void f12567(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8189(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l6=si0;
goto L2;
L3:;
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f12129(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l5=si0;
goto L4;
L5:;
si0=0U;
l5=si0;
si0=l6;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L6;
}
si0=l6;
si1=0U;
f1352(i,si0,si1);
L6:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
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
si1=l6;
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

void f12568(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7809(i,si0,si1,si2);
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
si1=1276U;
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

void f12569(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f12570(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l4;
si1=l2;
si2=0U;
si0=f5931(i,si0,si1,si2);
l3=si0;
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

void f12571(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7823(i,si0,si1,si2);
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
si1=l3;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l4;
si2=72U;
si1+=si2;
si2=l4;
si0=f12216(i,si0,si1,si2);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
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
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12572(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8180(i,si0,si1,si2);
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
f6039(i,si0,si1,si2,si3);
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

void f12573(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8180(i,si0,si1,si2);
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
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f14795(i);
UNREACHABLE;
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

void f12574(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
f7900(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=57U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17608797U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608789U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608781U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608773U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608765U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608757U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608749U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17608741U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=244813135929ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
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
si0=l2;
si1=l3;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
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
f5522(i,si0);
L5:;
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
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=57U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12575(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f8129(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
goto L2;
L3:;
si0=1U;
l6=si0;
si0=l5;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l2;
si0=f6056(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12576(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f8189(i,si0,si1,si2);
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
f6060(i,si0,si1,si2);
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

void f12577(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f12079(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12578(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=296U;
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
sj1=-3101122357740621133ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8602203138989373742ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
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
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
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
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12579(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=296U;
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
sj1=-3101122357740621133ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8602203138989373742ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
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
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
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
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=64U;
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
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12580(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=296U;
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
sj1=-3101122357740621133ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8602203138989373742ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
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
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
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
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=60U;
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
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12581(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12582(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=92U;
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
sj1=-8500963522299580898ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1672154940885437710ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
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
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
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
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f12583(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17608016U;
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
si1=17608027U;
si2=5U;
si3=l0;
si4=17608032U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=17608048U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=17608056U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
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

void f12584(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
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
si1=96U;
si0+=si1;
si1=l4;
si2=l2;
f12585(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+104U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=2U;
si0=f15022(i,si0);
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
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
goto L2;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l1;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=84U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
f8451(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
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
f15024(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
f15024(i,si0);
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
goto L3;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=68U;
si0+=si1;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+92U);
l1=si2;
si3=17597980U;
si4=2U;
f9230(i,si0,si1,si2,si3,si4);
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
f15024(i,si0);
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
f15024(i,si0);
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
f14795(i);
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
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
goto L1;
L2:;
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=5835U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=5835U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=17608640U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L17:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12585(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
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
goto L10;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=992U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L12;
}
si0=l4;
si0=!(si0);
if(si0){
goto L13;
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
goto L16;
}
si0=l4;
f5522(i,si0);
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
goto L10;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=640U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L14;
}
si0=l4;
si0=!(si0);
if(si0){
goto L13;
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
goto L17;
}
si0=l4;
f5522(i,si0);
L17:;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si2=17314629U;
si3=35U;
si4=l1;
si5=l2;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L11;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=0U;
f8721(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
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
f5522(i,si0);
goto L6;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=3U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
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
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L13:;
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
goto L10;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=1012U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L20;
}
si0=l4;
if(si0){
goto L19;
}
si0=0U;
l5=si0;
goto L18;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L19:;
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
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L22;
}
si0=0U;
l5=si0;
goto L21;
L22:;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=0U;
f8721(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si1=l7;
si2=l8;
si0=f15143(i,si0,si1,si2);
L21:;
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
f5522(i,si0);
L18:;
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
goto L10;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=948U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11844(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L29;
}
si0=l4;
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l7=si0;
si0=0U;
l4=si0;
goto L27;
L29:;
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
f15024(i,si0);
goto L6;
L28:;
si0=l3;
si1=120U;
si0+=si1;
si1=l4;
f12586(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
if(si0){
goto L26;
}
L27:;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=17314629U;
si3=35U;
si4=l1;
si5=l2;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L25;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=0U;
f8721(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si2=l8;
si0=f15143(i,si0,si1,si2);
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
goto L30;
}
si0=l2;
f5522(i,si0);
L30:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
if(si0){
goto L23;
}
goto L4;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=8U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=8317701510555858274ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L25:;
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
goto L8;
}
goto L7;
L24:;
si0=l3;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=5835U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=17608668U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=5835U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l3;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l3;
si2=92U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
f12252(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
goto L5;
L23:;
si0=l5;
f15024(i,si0);
goto L4;
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L10:;
f14795(i);
UNREACHABLE;
L9:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l5;
f15024(i,si0);
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
f15024(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
f15024(i,si0);
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
f15024(i,si0);
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
f5522(i,si0);
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12586(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=1U;
l2=si0;
goto L4;
L5:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l2;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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
goto L6;
}
si0=l1;
f5522(i,si0);
L6:;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f12587(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f1349(i,si0,si1);
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
f1354(i,si0);
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
si0=f1349(i,si0,si1);
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
f1354(i,si0);
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
si0=f1349(i,si0,si1);
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
f1354(i,si0);
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
si0=f1349(i,si0,si1);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L16:;
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
f1354(i,si0);
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+32U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
if(si0){
goto L18;
}
L19:;
si0=l0;
si1=32U;
si0+=si1;
si1=1U;
si0=f1349(i,si0,si1);
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L20:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+32U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l0;
si1=32U;
si0+=si1;
f1354(i,si0);
L17:;
L0:;
}

void f12588(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
si1=16U;
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
goto L3;
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
goto L2;
L3:;
si0=l2;
si1=17609928U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
l5=si0;
goto L1;
L4:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
f5522(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l7;
si3=-1U;
si2+=si3;
l7=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L6;
L7:;
si0=l2;
si1=17609932U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
if(si0){
goto L6;
}
si0=0U;
l4=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
l4=si0;
goto L5;
L8:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
f5522(i,si0);
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l8;
si3=-1U;
si2+=si3;
l8=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L10;
L11:;
si0=l2;
si1=17609936U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
l7=si0;
goto L9;
L12:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
f5522(i,si0);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
si2=l9;
si3=-1U;
si2+=si3;
l9=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L14;
L15:;
si0=l2;
si1=17609905U;
si2=3U;
si0=f13786(i,si0,si1,si2);
l6=si0;
if(si0){
goto L14;
}
si0=0U;
l8=si0;
goto L13;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l6;
l8=si0;
goto L13;
L16:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
f5522(i,si0);
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
si2=l10;
si3=-1U;
si2+=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L19;
L20:;
si0=l2;
si1=17609908U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l9=si0;
if(si0){
goto L19;
}
si0=0U;
l2=si0;
goto L18;
L19:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l9;
f11734(i,si0,si1,si2);
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L21;
case 1:
goto L22;
case 2:
goto L18;
default:
goto L21;
}
L22:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L23;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l8;
f5522(i,si0);
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
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
goto L24;
}
si0=l7;
f5522(i,si0);
L24:;
si0=l4;
si0=!(si0);
if(si0){
goto L25;
}
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
goto L25;
}
si0=l4;
f5522(i,si0);
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
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
goto L17;
}
si0=l5;
f5522(i,si0);
goto L17;
L21:;
si0=l1;
l2=si0;
L18:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L17:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f12589(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
f8246(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+24U,si1);
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f8405(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
goto L3;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
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
si0=f1350(i,si0,sj1,si2);
L9:;
si0=l0;
si1=28U;
si0+=si1;
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
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
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
f1352(i,si0,si1);
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f12590(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f1350(i,si0,sj1,si2);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
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
f1352(i,si0,si1);
L3:;
L0:;
}

void f12591(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f1350(i,si0,sj1,si2);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
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
f1352(i,si0,si1);
L3:;
L0:;
}

U32 f12592(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
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
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l0;
si1=40U;
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
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=36U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L12;
}
si0=l5;
si1=16U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L11:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L13:;
si0=l4;
if(si0){
goto L6;
}
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
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L15;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l7;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+80U);
l4=si2;
si3=l4;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L14;
}
L15:;
si0=l8;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L14:;
si0=l0;
si1=84U;
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
goto L16;
}
si0=l0;
si1=80U;
si0+=si1;
f1354(i,si0);
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l3=si0;
goto L3;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
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
goto L2;
}
si0=l0;
si1=80U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L17;
}
si0=l5;
si1=16U;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+80U);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L17:;
si0=l9;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L4;
L5:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=84U;
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
goto L2;
}
si0=l0;
si1=l0;
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
goto L18;
}
si0=l0;
si1=80U;
si0+=si1;
f1354(i,si0);
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l3=si0;
L3:;
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
goto L19;
}
si0=l0;
f5522(i,si0);
L19:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f12593(rustpythonInstance*i,U32 l0) {
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
si0=i32_load(&i->m0,(U64)si0+18662244U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18662220U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6782(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662220U);
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
goto L4;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L6:;
si0=18662220U;
si1=l2;
si2=l4;
si3=l5;
si0=f5989(i,si0,si1,si2,si3);
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
goto L4;
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
f5569(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si0=f12594(i,si0,si1);
si0=l1;
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
f14795(i);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=17623824U;
si1=43U;
si2=17624280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f12594(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f5563(i,si0,si1);
l3=si0;
if(si0){
goto L5;
}
si0=l0;
si1=88U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=1U;
l7=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=l7;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=200U;
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
si0=l1;
si1=l4;
si2=1216U;
si1+=si2;
si2=17612347U;
si3=21U;
si4=l3;
si1=f9632(i,si1,si2,si3,si4);
si2=l5;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=17600272U;
si1=43U;
si2=l2;
si3=4U;
si2+=si3;
si3=17610504U;
si4=17612368U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=17600272U;
si1=43U;
si2=l2;
si3=4U;
si2+=si3;
si3=17610504U;
si4=17610588U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f12595(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
f11327(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=103U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17610604U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17607024U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967314ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17610707U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=95U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17610725U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17604312U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17610820U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=92U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17610830U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17607168U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17610922U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=61U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17610931U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17604600U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967310ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17610992U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=61U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611006U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17606736U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611067U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=78U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611079U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17604648U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967313ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611157U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=59U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611174U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17606088U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611233U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=92U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611244U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17605488U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967313ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611336U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=205U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611353U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17605200U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967330ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611558U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=168U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611592U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17607360U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967312ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=81U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611776U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17607048U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967316ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17611857U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=415U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17611877U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17606160U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17612292U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=l0;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=28U;
si1*=si2;
si0+=si1;
l0=si0;
si1=33U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=17612303U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=17606712U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17612336U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f12596(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662272U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18662248U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6649(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662248U);
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
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L7:;
si0=18662248U;
si1=l2;
si2=l4;
si3=l5;
si0=f5989(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
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
L8:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f5569(i,si0,si1,si2,si3);
si0=l5;
si1=l0;
si0=f5563(i,si0,si1);
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L6:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=17623824U;
si1=43U;
si2=17624264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17600272U;
si1=43U;
si2=l1;
si3=12U;
si2+=si3;
si3=17610504U;
si4=17612408U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f12597(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f5563(i,si0,si1);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17600272U;
si1=43U;
si2=l2;
si3=12U;
si2+=si3;
si3=17610504U;
si4=17612408U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

void f12598(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L26;
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
L26:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l0;
si1=32U;
si0+=si1;
f12822(i,si0);
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L29:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L30:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L32:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L33:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
f12603(i,si0);
si0=l2;
f15024(i,si0);
L34:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
f15024(i,si0);
L35:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L37:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L41;
case 1:
goto L40;
default:
goto L42;
}
L42:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L39;
L41:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L43:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f8275(i,si0);
goto L39;
L40:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L39:;
si0=l3;
f15024(i,si0);
L38:;
si0=l2;
si1=36U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L44:;
si0=l0;
si1=32U;
si0+=si1;
f12822(i,si0);
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L46:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L46;
}
}
L45:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L47:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L49:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L49;
}
}
L48:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L50:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
f12603(i,si0);
si0=l2;
f15024(i,si0);
L51:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l2;
f15024(i,si0);
L52:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L54:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L58;
case 1:
goto L57;
default:
goto L59;
}
L59:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L56;
L58:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L60;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L60:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
f8275(i,si0);
goto L56;
L57:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L56:;
si0=l3;
f15024(i,si0);
L55:;
si0=l2;
si1=36U;
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
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L61:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L63:;
{
si0=l2;
f8275(i,si0);
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
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L64:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L66:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L67;
}
si0=l3;
f15024(i,si0);
L67:;
si0=l2;
f8275(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L68;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L68:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L70:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L70;
}
}
L69:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L71;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L71:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L73:;
{
si0=l2;
f8275(i,si0);
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
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L74:;
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L76:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L80;
case 1:
goto L79;
default:
goto L81;
}
L81:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L78;
L80:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L82:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l3;
f8275(i,si0);
goto L78;
L79:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L78:;
si0=l3;
f15024(i,si0);
L77:;
si0=l2;
si1=36U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L84:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L84;
}
}
L83:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L86:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L86;
}
}
L85:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L87;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L87:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L89:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L93;
case 1:
goto L92;
default:
goto L94;
}
L94:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L91;
L93:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L95:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
f8275(i,si0);
goto L91;
L92:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L91:;
si0=l3;
f15024(i,si0);
L90:;
si0=l2;
si1=36U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L89;
}
}
L88:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L96;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L96:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
si0=l2;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L98:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L98;
}
}
L97:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L99:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L101:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L101;
}
}
L100:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L102;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L102:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L104:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L105;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L105:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L107:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L108;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
L108:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L110:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L110;
}
}
L109:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L111;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L111:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L113:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L113;
}
}
L112:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L115:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L115;
}
}
L114:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L116:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L118:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L118;
}
}
L117:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L120:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
L121:;
si0=l2;
si1=64U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L120;
}
}
L119:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L122;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L122:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L123;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L124:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L124;
}
}
L123:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L125:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L127:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
L128:;
si0=l2;
si1=64U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L127;
}
}
L126:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L129:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L131:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L132:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
l2=si0;
f8345(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L133;
}
si0=l0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
L133:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L135:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L136:;
si0=l0;
si1=32U;
si0+=si1;
l2=si0;
f8332(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L137;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L137:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L138;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L139:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L139;
}
}
L138:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L140;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L140:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L142:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L142;
}
}
L141:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L144:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L144;
}
}
L143:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L145;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L145:;
si0=l0;
si1=32U;
si0+=si1;
l2=si0;
f8332(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L146:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L148:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L148;
}
}
L147:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L149;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L149:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L150;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L151:;
{
si0=l2;
f8277(i,si0);
si0=l2;
si1=92U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L151;
}
}
L150:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L152;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=32U;
si0+=si1;
l2=si0;
L153:;
{
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L154;
}
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L154:;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L155;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L155;
}
si0=l3;
f15024(i,si0);
L155:;
si0=l2;
si1=40U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L153;
}
}
L152:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L156;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L156;
}
si0=l2;
f15024(i,si0);
L156:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L157;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=32U;
si0+=si1;
l2=si0;
L158:;
{
si0=l2;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L159;
}
si0=l2;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L159:;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L160;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L160;
}
si0=l3;
f15024(i,si0);
L160:;
si0=l2;
si1=40U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L158;
}
}
L157:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L162:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L163;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L163:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L162;
}
}
L161:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L165:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L166;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L166:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L165;
}
}
L164:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f12599(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l5;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l4;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=0U;
l1=si0;
si0=l7;
l5=si0;
L7:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
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
si1=l6;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l6;
si2=17615100U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
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
L4:;
si0=l8;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12600(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-40U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0+=si1;
l10=si0;
si1=32U;
si0+=si1;
l11=si0;
si0=l10;
si1=24U;
si0+=si1;
l12=si0;
si0=l10;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l14=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=l9;
si1=f13387(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=40U;
si0+=si1;
l15=si0;
l7=si0;
si0=l15;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=72U;
si0+=si1;
l7=si0;
si0=l1;
si1=40U;
si0=DIV_U(si0,si1);
l0=si0;
L5:;
{
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
f15024(i,si0);
L7:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15024(i,si0);
L8:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12601(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
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
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L4:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0+=si1;
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=l14;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f8383(i,si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5916(i,si0,si1,si2);
l0=si0;
goto L5;
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L1;
}
L5:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l5;
si1=l0;
si2=17651072U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12602(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=4U;
si0+=si1;
l10=si0;
si1=32U;
si0+=si1;
l11=si0;
si0=l10;
si1=24U;
si0+=si1;
l12=si0;
si0=l10;
si1=16U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l14=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si2=l9;
si1=f13381(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=44U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l7;
si1=44U;
si0+=si1;
l7=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0-=si1;
si1=44U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
L5:;
{
si0=l7;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
L7:;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
f15024(i,si0);
L8:;
si0=l7;
si1=44U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15024(i,si0);
L9:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12603(rustpythonInstance*i,U32 l0) {
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f8275(i,si0);
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
f15024(i,si0);
goto L0;
L29:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L28:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
f12822(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L36;
}
si0=l3;
l2=si0;
L37:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l2;
f8275(i,si0);
L38:;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
f15024(i,si0);
L39:;
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
goto L40;
}
si0=l3;
l2=si0;
L41:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
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
goto L42;
}
si0=l3;
l2=si0;
L43:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L44;
}
si0=0U;
l6=si0;
L45:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L47:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L48:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L45;
}
}
L44:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L49;
}
si0=0U;
l6=si0;
L50:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L52:;
{
si0=l2;
f8275(i,si0);
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
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L53;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L53:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L50;
}
}
L49:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L54;
}
si0=0U;
l6=si0;
L55:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L57:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L57;
}
}
L56:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L58;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L58:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L54:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L59;
}
si0=0U;
l6=si0;
L60:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L62:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L63;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L63:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L60;
}
}
L59:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L64:;
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
goto L65;
}
si0=l3;
l2=si0;
L66:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L67;
}
si0=l3;
l2=si0;
L68:;
{
si0=l2;
f8275(i,si0);
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
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l3;
f15024(i,si0);
L69:;
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
goto L70;
}
si0=l6;
l2=si0;
L71:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
f15024(i,si0);
L72:;
si0=l2;
f8275(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
goto L73;
}
si0=l3;
l2=si0;
L74:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
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
goto L78;
case 1:
goto L77;
case 2:
goto L76;
case 3:
goto L75;
default:
goto L2;
}
L78:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L77:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L76:;
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
L75:;
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
goto L79;
}
si0=l3;
l2=si0;
L80:;
{
si0=l2;
f8276(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L80;
}
}
L79:;
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
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f12603(i,si0);
si0=l2;
f15024(i,si0);
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
f15024(i,si0);
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
goto L81;
}
si0=l3;
l2=si0;
L82:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
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
goto L83;
}
si0=l3;
l2=si0;
L84:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L84;
}
}
L83:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L3:;
si0=l3;
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f12604(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l7;
si1=l6;
si0-=si1;
si1=-12U;
si0+=si1;
l9=si0;
L5:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+4U);
l11=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=l1;
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
goto L1;
}
si0=l12;
si1=1208U;
si0+=si1;
si1=l10;
sj2=l11;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l1;
si0=f9632(i,si0,si1,si2,si3);
l1=si0;
sj0=l11;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
f15024(i,si0);
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l9;
si1=12U;
si0=DIV_U(si0,si1);
l0=si0;
L7:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15024(i,si0);
L9:;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12605(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-56U;
si0+=si1;
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l11=si0;
si1=48U;
si0+=si1;
l12=si0;
si0=l11;
si1=40U;
si0+=si1;
l13=si0;
si0=l11;
si1=32U;
si0+=si1;
l14=si0;
si0=l11;
si1=24U;
si0+=si1;
l15=si0;
si0=l11;
si1=16U;
si0+=si1;
l16=si0;
si0=l11;
si1=8U;
si0+=si1;
l17=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=39U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l11;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l7;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=38U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
f14795(i);
UNREACHABLE;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l9;
si0=f13242(i,si0,si1);
l1=si0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l10;
si1=-56U;
si0+=si1;
l10=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=56U;
si0=DIV_U(si0,si1);
l0=si0;
L7:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
f12603(i,si0);
L8:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15024(i,si0);
L9:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12606(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
si1=16U;
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
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l5=si0;
L4:;
{
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L8;
}
L8:;
si0=1U;
si1=l0;
si2=l7;
si0=f13975(i,si0,si1,si2);
l6=si0;
goto L5;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=8U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
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
si0=l6;
si1=l8;
si2=l7;
si1=f8550(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l6=si0;
goto L5;
L6:;
si0=0U;
si1=l0;
si2=l7;
si0=f13975(i,si0,si1,si2);
l6=si0;
L5:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12607(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=80U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=80U;
si1*=si2;
si0+=si1;
l5=si0;
f12612(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f12603(i,si0);
si0=l1;
f15024(i,si0);
L3:;
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
L5:;
{
si0=l1;
f8277(i,si0);
si0=l1;
si1=92U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l5;
si1=64U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
L0:;
}

void f12608(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=i->g0;
si1=96U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-88U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=l7;
si2=4U;
si1+=si2;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=l9;
si1=f13385(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-88U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=88U;
si0+=si1;
l11=si0;
l7=si0;
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=164U;
si0+=si1;
l7=si0;
si0=l1;
si1=88U;
si0=DIV_U(si0,si1);
l0=si0;
L5:;
{
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15024(i,si0);
L6:;
si0=l7;
si1=-76U;
si0+=si1;
f12603(i,si0);
si0=l7;
si1=88U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15024(i,si0);
L7:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12609(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd1;
si0=i->g0;
si1=80U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-24U;
si0+=si1;
l10=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=12U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=8U;
l13=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
l15=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si1=1U;
si2=l11;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
case 6:
goto L8;
case 7:
goto L7;
case 8:
goto L5;
case 9:
goto L6;
default:
goto L14;
}
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=7U;
l13=si0;
goto L5;
L13:;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=0U;
l13=si0;
goto L5;
L12:;
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+40U);
f64_store(&i->m0,(U64)si0+64U,sd1);
si0=1U;
l13=si0;
goto L5;
L11:;
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+48U);
f64_store(&i->m0,(U64)si0+72U,sd1);
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+40U);
f64_store(&i->m0,(U64)si0+64U,sd1);
si0=2U;
l13=si0;
goto L5;
L10:;
si0=l2;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+36U);
i32_store8(&i->m0,(U64)si0+57U,si1);
si0=3U;
l13=si0;
goto L5;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=4U;
l13=si0;
goto L5;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=5U;
l13=si0;
goto L5;
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=6U;
l13=si0;
goto L5;
L6:;
si0=9U;
l13=si0;
L5:;
si0=l2;
si1=l13;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l2;
si2=56U;
si1+=si2;
si0=f13121(i,si0,si1);
l11=si0;
si0=l2;
si1=32U;
si0+=si1;
f12610(i,si0);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l10;
si1=-24U;
si0+=si1;
l10=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=24U;
si0=DIV_U(si0,si1);
l0=si0;
L15:;
{
si0=l7;
f12610(i,si0);
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L15;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15024(i,si0);
L16:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12610(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L4;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L1;
}
L6:;
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
goto L7;
}
si0=l3;
l2=si0;
L8:;
{
si0=l2;
f8291(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L5:;
si0=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L11:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L12:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
f15024(i,si0);
L13:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L15:;
{
si0=l2;
f12610(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L15;
}
}
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L17:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
}
si0=l3;
f15024(i,si0);
L16:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L20:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L20;
}
}
si0=l3;
f15024(i,si0);
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L23:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L24:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
si0=l3;
f15024(i,si0);
L22:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L26:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L26;
}
}
si0=l3;
f15024(i,si0);
L25:;
si0=l0;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f12611(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-36U;
si0+=si1;
l10=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=4U;
si0+=si1;
l11=si0;
si1=24U;
si0+=si1;
l12=si0;
si0=l11;
si1=16U;
si0+=si1;
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
l14=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l11;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L8;
}
L8:;
si0=l11;
si1=l9;
si0=f13413(i,si0,si1);
l1=si0;
goto L5;
L7:;
si0=l11;
si1=l9;
si0=f13414(i,si0,si1);
l1=si0;
goto L5;
L6:;
si0=l11;
si1=l9;
si0=f13415(i,si0,si1);
l1=si0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l10;
si1=-36U;
si0+=si1;
l10=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=36U;
si0=DIV_U(si0,si1);
l0=si0;
L9:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L14;
}
L14:;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L11;
L13:;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L15:;
si0=l7;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f12603(i,si0);
goto L11;
L12:;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L11:;
si0=l1;
f15024(i,si0);
L10:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L9;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15024(i,si0);
L16:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12612(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
default:
goto L10;
}
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l3=si0;
L12:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f12603(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=4U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L2;
}
L16:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f8276(i,si0);
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
l3=si0;
L20:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
l3=si0;
L22:;
{
si0=l3;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
f15024(i,si0);
L23:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
l3=si0;
L25:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15024(i,si0);
L26:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f12603(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f15024(i,si0);
L29:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
l3=si0;
L31:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L32:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
f15024(i,si0);
L33:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
l3=si0;
L35:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f12612(i,si0);
si0=l3;
f15024(i,si0);
L36:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
L2:;
goto L0;
L1:;
si0=l1;
f15024(i,si0);
L0:;
}

void f12613(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l8;
si1=l7;
si0-=si1;
si1=-64U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0|=si1;
l10=si0;
si1=56U;
si0+=si1;
l11=si0;
si0=l10;
si1=48U;
si0+=si1;
l12=si0;
si0=l10;
si1=40U;
si0+=si1;
l13=si0;
si0=l10;
si1=32U;
si0+=si1;
l14=si0;
si0=l10;
si1=24U;
si0+=si1;
l15=si0;
si0=l10;
si1=16U;
si0+=si1;
l16=si0;
si0=l10;
si1=8U;
si0+=si1;
l17=si0;
L4:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l7;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l7;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l7;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l7;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l9;
si1=f13389(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-64U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=64U;
si0+=si1;
l18=si0;
l7=si0;
si0=l18;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=64U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=120U;
si0+=si1;
l7=si0;
si0=l1;
si1=6U;
si0>>=(si1&31);
l3=si0;
L5:;
{
si0=l7;
si1=-56U;
si0+=si1;
f12603(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
f12603(i,si0);
si0=l0;
f15024(i,si0);
L6:;
si0=l7;
si1=64U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15024(i,si0);
L7:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12614(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=104U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+104U);
l0=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
{
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=12U;
si1*=si2;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l5;
si1=l4;
si2=l0;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l2;
si2=112U;
si1+=si2;
si2=l3;
si0=f13116(i,si0,si1,si2);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l0;
f5522(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+104U);
l0=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f12615(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
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
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l2;
si1=64U;
si0+=si1;
l9=si0;
L5:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
si2=17314629U;
si3=35U;
si4=l5;
si4=i32_load(&i->m0,(U64)si4);
si5=l7;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l6;
l0=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17616871U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17616864U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17616856U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
si0=l0;
si1=4U;
si2=l0;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l11=si2;
si3=l0;
si2-=si3;
si3=l11;
si4=l0;
si3=si3 == si4;
si1=si3?si1:si2;
l12=si1;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
si0=l12;
si1=2U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l10=si0;
L8:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=23U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l0=si0;
si0=l11;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
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
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5913(i,si0,si1,si2);
l0=si0;
L9:;
si0=l2;
si1=16U;
si0+=si1;
si1=l11;
si2=l0;
si0=f5980(i,si0,si1,si2);
l0=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
f5522(i,si0);
L6:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=23U;
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

void f12616(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=192U;
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
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=93U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=96U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l2;
si1=116U;
si0+=si1;
l9=si0;
si0=l2;
si1=176U;
si0+=si1;
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L7:;
{
si0=l7;
si1=-25U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=1U;
l1=si0;
si0=l7;
si1=-17U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l1;
si1=l5;
si2=l0;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=-1U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l0=si0;
si0=l7;
si1=-29U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=l7;
si2=-93U;
si1+=si2;
f13774(i,si0,si1);
si0=l10;
si1=l7;
si2=-13U;
si1+=si2;
f8327(i,si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l0;
i32_store16(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
si2=96U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660640U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660644U);
l5=si0;
si1=l5;
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
si0=0U;
l0=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=96U;
si0+=si1;
si1=l12;
si2=0U;
si0=f5913(i,si0,si1,si2);
l0=si0;
L9:;
si0=l8;
si1=l1;
si2=l5;
si3=l0;
si1=f5969(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=96U;
si0+=si1;
l7=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17337074U;
si1=36U;
si2=17337128U;
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

void f12617(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
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
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l6=si0;
L3:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l7;
si0=f8874(i,si0,si1);
l9=si0;
si0=l0;
si1=l8;
si2=l7;
si1=f8874(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f14167(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f12618(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l9;
si1=l7;
si2=l0;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=16U;
si2+=si3;
si3=l8;
f13454(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
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
goto L9;
}
si0=l0;
f5522(i,si0);
L9:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L3;
}
L5:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
L4:;
si0=l6;
si1=l5;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=4U;
si0+=si1;
l0=si0;
L10:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L11:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
f15024(i,si0);
L12:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f12619(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
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
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=l6;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L5:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si2=-1U;
si1=(U32)((I32)si1>(I32)si2);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
si2=l5;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l9=si2;
si1^=si2;
si2=l9;
si1-=si2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
si2=l0;
si3=0U;
si1=f5991(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
si2=-1U;
si1=(U32)((I32)si1>(I32)si2);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l6;
si2=l6;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l1=si2;
si1^=si2;
si2=l1;
si1-=si2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l0;
si3=0U;
si1=f5991(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f12620(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l11=si0;
si1=16U;
si0+=si1;
l12=si0;
si0=l11;
si1=8U;
si0+=si1;
l13=si0;
L4:;
{
si0=l7;
si1=24U;
si0+=si1;
l0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=11U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l11;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l7;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l10;
si1=f13370(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
l7=si0;
si0=l0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l0;
si0-=si1;
si1=24U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
L5:;
{
si0=l0;
si1=l1;
si2=24U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=4U;
si2=l7;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L6;
}
L12:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L8;
L11:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L6;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L6;
L9:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
l7=si0;
L14:;
{
si0=l7;
f8276(i,si0);
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
L7:;
si0=l11;
f15024(i,si0);
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
f15024(i,si0);
L15:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12621(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=44U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
L2:;
{
si0=l2;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f12603(i,si0);
si0=l1;
f15024(i,si0);
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L6:;
{
si0=l1;
f8277(i,si0);
si0=l1;
si1=92U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L7:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
L0:;
}

void f12622(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l2;
si1=4U;
si0|=si1;
l11=si0;
L4:;
{
si0=l7;
si1=128U;
si0+=si1;
l0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l11;
si1=l7;
si2=4U;
si1+=si2;
si2=124U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l10;
si1=f13376(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
l7=si0;
si0=l0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l0;
si0-=si1;
si1=7U;
si0>>=(si1&31);
l9=si0;
si0=0U;
l8=si0;
L5:;
{
si0=l0;
si1=l8;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
f12603(i,si0);
si0=l1;
si1=56U;
si0+=si1;
f12603(i,si0);
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
L7:;
{
si0=l7;
f8275(i,si0);
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l1;
si1=112U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15024(i,si0);
L9:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12623(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
L4:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l10=si0;
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l10;
si1=l9;
si2=l0;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l8;
f5522(i,si0);
L6:;
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
f15024(i,si0);
L7:;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f12624(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sj0=l7;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l6;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=1216U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l13;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+1216U);
l14=si2;
si3=l14;
si4=l12;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l14;
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l11;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L5;
L6:;
sj0=l7;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l6;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
goto L3;
L8:;
si0=17613686U;
si1=43U;
si2=17618760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
si1=1224U;
si0+=si1;
si1=l9;
si2=l8;
si0=f13119(i,si0,si1,si2);
l12=si0;
if(si0){
goto L10;
}
si0=0U;
l12=si0;
goto L9;
L10:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L9:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+1216U);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l11;
f1354(i,si0);
L11:;
si0=l12;
if(si0){
goto L3;
}
L4:;
si0=17613686U;
si1=43U;
si2=17619244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L12;
}
si0=l5;
f5522(i,si0);
L12:;
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f12625(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sj0=l7;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l6;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=1216U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l13;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+1216U);
l14=si2;
si3=l14;
si4=l12;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l14;
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l11;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L5;
L6:;
sj0=l7;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l6;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
goto L3;
L8:;
si0=17613686U;
si1=43U;
si2=17618760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
si1=1224U;
si0+=si1;
si1=l9;
si2=l8;
si0=f13119(i,si0,si1,si2);
l12=si0;
if(si0){
goto L10;
}
si0=0U;
l12=si0;
goto L9;
L10:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L9:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+1216U);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l11;
f1354(i,si0);
L11:;
si0=l12;
if(si0){
goto L3;
}
L4:;
si0=17613686U;
si1=43U;
si2=17619228U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L12;
}
si0=l5;
f5522(i,si0);
L12:;
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f12626(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L9;
}
L9:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12671(i,si0,si1,si2);
goto L1;
L8:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=l1;
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
f3547(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L10;
L11:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
L10:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=l1;
si2=l5;
f3547(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L12;
L13:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L7:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12672(i,si0,si1,si2);
goto L1;
L6:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12673(i,si0,si1,si2);
goto L1;
L5:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12674(i,si0,si1,si2);
goto L1;
L4:;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
l6=si2;
f3547(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L14;
L15:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=l1;
si2=l5;
f3547(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L17:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
L16:;
si0=l3;
sj1=l12;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12675(i,si0,si1,si2);
goto L1;
L2:;
si0=l3;
si1=l1;
si2=l2;
si3=4U;
si2+=si3;
f12672(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f12627(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
f13797(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L4;
}
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
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
si0=l3;
f5522(i,si0);
goto L2;
L5:;
si0=l3;
l4=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f7430(i,si0,si1,si2);
l4=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l0=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=0U;
l0=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f12628(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l5;
si2=17314629U;
si3=35U;
si4=l6;
si5=l3;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l5;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1985U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=17623228U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1028U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
sj0=i64_load32_u(&i->m0,(U64)si0+32U);
l7=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
L5:;
si0=l3;
if(si0){
goto L2;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f12629(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f13797(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L3;
default:
goto L4;
}
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
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
goto L6;
}
si0=l4;
f5522(i,si0);
L6:;
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
f7354(i,si0,si1,si2);
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
goto L2;
}
si0=l4;
f5522(i,si0);
goto L2;
L3:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=255U;
si0&=si1;
l1=si0;
if(si0){
goto L8;
}
si0=l4;
si1=8U;
si0>>=(si1&31);
l4=si0;
goto L7;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L9:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l1;
si0=!(si0);
l1=si0;
L1:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}


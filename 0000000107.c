#include "w2c2_base.h"

#include "rustpython.h"

void f10730(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=88U;
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
goto L1;
}
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
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
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L5:;
si0=l2;
si1=l6;
si2=l3;
si0=f5984(i,si0,si1,si2);
l2=si0;
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
L3:;
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

void f10731(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
si4=0U;
si5=2147483647U;
f10451(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1=si1 != si2;
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

void f10732(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4807U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10734(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
f7425(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=44U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
f8246(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
goto L3;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L6:;
{
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=60U;
si1+=si2;
si2=l7;
f13797(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L8;
default:
goto L10;
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l3;
f5522(i,si0);
L11:;
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
goto L12;
}
si0=l6;
f5522(i,si0);
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
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
goto L1;
}
goto L2;
L9:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=8U;
si1+=si2;
si2=l4;
si3=l3;
f7452(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l1=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l8;
l3=si0;
L8:;
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
goto L14;
}
si0=l6;
f5522(i,si0);
L14:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
goto L3;
L7:;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
f5522(i,si0);
goto L6;
}
L4:;
si0=4U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=20U;
si0+=si1;
f7741(i,si0);
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
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
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10734(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=184U;
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
goto L1;
}
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
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
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L5:;
si0=l2;
si1=l6;
si2=l3;
si0=f5922(i,si0,si1,si2);
l2=si0;
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
L3:;
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

U32 f10735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
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
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L18:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L19:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si0=si0 != si1;
l10=si0;
si0=l0;
l6=si0;
si0=l10;
if(si0){
goto L19;
}
}
si0=l7;
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
goto L8;
}
goto L9;
L17:;
si0=l6;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L20:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L21:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si0=si0 != si1;
l10=si0;
si0=l0;
l6=si0;
si0=l10;
if(si0){
goto L21;
}
}
si0=l3;
si1=0U;
si2=l3;
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
goto L13;
}
goto L14;
L16:;
si0=0U;
l9=si0;
si0=l7;
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
si0=!(si0);
if(si0){
goto L9;
}
goto L7;
L15:;
si0=0U;
l9=si0;
si0=l3;
si1=0U;
si2=l3;
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
L14:;
si0=l3;
si1=0U;
f1361(i,si0,si1);
L13:;
si0=l9;
if(si0){
goto L11;
}
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=472U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=41U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17425913U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425905U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425897U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425889U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425881U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425873U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
si2=l5;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
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
goto L3;
}
goto L2;
L11:;
si0=l9;
si1=l2;
si2=l4;
si0=f6050(i,si0,si1,si2);
l6=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l9;
f5522(i,si0);
L22:;
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
goto L3;
L10:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l7;
si1=0U;
f1361(i,si0,si1);
L8:;
si0=l9;
if(si0){
goto L5;
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=472U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
goto L4;
}
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l9;
si1=l2;
si2=l3;
si3=l4;
si0=f5556(i,si0,si1,si2,si3);
l6=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l9;
f5522(i,si0);
L23:;
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
goto L3;
}
goto L2;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=41U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17425913U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425905U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425897U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425889U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425881U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425873U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
si2=l5;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
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
goto L24;
}
si0=l3;
f5522(i,si0);
L24:;
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
L3:;
si0=l2;
f5522(i,si0);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L1:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f10736(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4814U;
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

void f10737(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f5577(i,si0,si1,si2);
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
f7436(i,si0,si1,si2,si3,sj4);
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

void f10738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
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
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f10711(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L1;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
f14795(i);
UNREACHABLE;
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
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
L0:;
}

void f10739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
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
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f10669(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L1;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
f14795(i);
UNREACHABLE;
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
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
L0:;
}

void f10740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4806U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10734(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10741(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
f8246(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
goto L4;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L7:;
{
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l7;
f13797(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l3;
f5522(i,si0);
L11:;
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
goto L12;
}
si0=l6;
f5522(i,si0);
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L9:;
si0=l3;
l2=si0;
goto L6;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si0=f7430(i,si0,si1,si2);
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
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
}
L6:;
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
goto L14;
}
si0=l6;
f5522(i,si0);
L14:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=20U;
si0+=si1;
f7741(i,si0);
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=!(si0);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
if(si0){
goto L4;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si0=f8491(i,si0,si1,si2,si3);
l5=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
if(si0){
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
si2=l2;
si0=f8497(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=0U;
si2=l0;
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
goto L1;
}
L2:;
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L1:;
si0=l5;
L0:;
return si0;
}

void f10743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4973832613023358901ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4807U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10730(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=l2;
si2=l3;
si3=l4;
si0=f10506(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l2;
si2=l4;
si0=f10650(i,si0,si1,si2);
L0:;
return si0;
}

void f10745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4973832613023358901ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4808U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10730(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l4;
f8246(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
l3=si0;
goto L4;
L5:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=l4;
f10806(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
l3=si0;
goto L4;
L6:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
l6=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l7=si2;
si3=l7;
si4=l1;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
if(si0){
goto L7;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l1;
si3=l2;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=4U;
si3<<=(si4&31);
si2+=si3;
f8411(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
f1354(i,si0);
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=0U;
l1=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
si3=l1;
si2+=si3;
l11=si2;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=f7455(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L10;
}
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
f5522(i,si0);
L13:;
si0=l10;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
f15024(i,si0);
L14:;
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
goto L15;
}
si0=l5;
si1=28U;
si0+=si1;
f7741(i,si0);
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l2;
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
goto L1;
}
goto L2;
L10:;
si0=l10;
si1=-4U;
si0+=si1;
l4=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
f5522(i,si0);
L16:;
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l11;
si1=4U;
si0+=si1;
l2=si0;
si0=l10;
si1=l1;
si0-=si1;
si1=-4U;
si0+=si1;
si1=2U;
si0>>=(si1&31);
l1=si0;
L18:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L19:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
f15024(i,si0);
L20:;
si0=l5;
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
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
f7741(i,si0);
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
si1=24U;
si0+=si1;
f7741(i,si0);
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
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
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f10479(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L1;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
f14795(i);
UNREACHABLE;
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
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
L0:;
}

void f10748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f10492(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l3;
f6046(i,si0,si1,si2);
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
f5522(i,si0);
goto L1;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10749(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4815U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4816U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10750(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=4810U;
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

void f10751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
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
si2=l3;
si3=l4;
f10632(i,si0,si1,si2,si3);
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

void f10752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f1353(i,si0,si1,sj2,si3);
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
f1354(i,si0);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

U32 f10753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=f7435(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l4;
si2=l2;
si0=f7453(i,si0,si1,si2);
L0:;
return si0;
}

void f10754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
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
si2=l3;
si3=l4;
f10513(i,si0,si1,si2,si3);
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

void f10755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4973832613023358901ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4806U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10730(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-104657993046969555ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7395730724413636963ULL;
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
si0=l4;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=17435892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=272U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
si1=l4;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
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
goto L2;
}
si0=l3;
si1=l1;
si2=l4;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=l2;
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
goto L1;
}
si0=l2;
f5522(i,si0);
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
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

void f10757(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=4566842283283303034ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2661386195423522850ULL;
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
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=l3;
f10540(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
goto L1;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
L2:;
f14795(i);
UNREACHABLE;
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

void f10758(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4817U;
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

void f10759(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l0;
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
f10555(i,si0,si1,si2,si3,si4);
L0:;
}

void f10760(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=4818U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4819U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f10761(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L7:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L12:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si0=si0 != si1;
l10=si0;
si0=l1;
l6=si0;
si0=l10;
if(si0){
goto L12;
}
}
si0=l7;
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
goto L9;
}
goto L10;
L11:;
si0=0U;
l9=si0;
si0=l7;
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
goto L8;
}
L10:;
si0=l7;
si1=0U;
f1361(i,si0,si1);
L9:;
si0=l9;
if(si0){
goto L5;
}
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=472U;
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
si0=si0 != si1;
if(si0){
goto L4;
}
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si1=l9;
si2=l3;
si3=l4;
f5548(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
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
goto L13;
}
si0=l9;
f5522(i,si0);
L13:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=41U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17425913U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425905U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425897U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425889U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425881U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17425873U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
si2=l5;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l9;
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
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10762(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l7;
si2=l1;
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
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=l3;
f6053(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
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
goto L3;
}
si0=l1;
si1=56U;
si0+=si1;
f1354(i,si0);
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10763(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
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
si2=l3;
si3=l4;
f10645(i,si0,si1,si2,si3);
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

void f10764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-104657993046969555ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7395730724413636963ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
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
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f10484(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=l3;
si2=l6;
si3=l2;
si4=9U;
f11752(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
l1=si0;
goto L4;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
l1=si0;
goto L4;
L8:;
si0=1U;
l5=si0;
si0=l3;
si1=l6;
si2=l2;
si3=17596286U;
si4=1U;
si0=f11753(i,si0,si1,si2,si3,si4);
l1=si0;
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
goto L4;
}
si0=l7;
f5522(i,si0);
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
goto L9;
}
si0=l6;
f5522(i,si0);
L9:;
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
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l6;
l1=si0;
si0=l3;
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
si1=l1;
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

void f10765(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
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
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f10441(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L1;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
f14795(i);
UNREACHABLE;
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
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
L0:;
}

void f10766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4809U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10734(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10767(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f10768(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L3;
}
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=60U;
si0+=si1;
si1=l7;
si2=l3;
f8743(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l3;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
si2=l1;
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
goto L6;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L6:;
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
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15024(i,si0);
L7:;
si0=l1;
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10768(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=47U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f8360(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
if(si0){
goto L3;
}
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
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L1;
L2:;
si0=l4;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4665093314700579932ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5450899068315262175ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=47U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f8360(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
if(si0){
goto L11;
}
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
goto L10;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L13:;
{
si0=l2;
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
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L14:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L10:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
f1354(i,si0);
goto L1;
L7:;
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
goto L18;
}
si0=l3;
si1=l2;
si2=l1;
f13902(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
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
goto L29;
}
si0=l1;
f5522(i,si0);
L29:;
si0=l4;
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
goto L18;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l4;
f11838(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l8=si0;
goto L26;
L28:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
f5522(i,si0);
goto L1;
L27:;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L26;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L30:;
{
si0=l5;
if(si0){
goto L31;
}
si0=0U;
l8=si0;
goto L26;
L31:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L30;
}
}
L26:;
si0=l8;
si1=18663056U;
si2=l8;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si3=l2;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
case 2:
goto L22;
default:
goto L23;
}
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L19;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L19;
L23:;
si0=4U;
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l5=si0;
if(si0){
goto L20;
}
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=4U;
l5=si0;
L21:;
si0=0U;
l1=si0;
L20:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l1=si0;
L36:;
{
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=l2;
f13797(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L38;
case 1:
goto L32;
default:
goto L38;
}
L38:;
si0=l5;
si0=!(si0);
if(si0){
goto L39;
}
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
goto L39;
}
si0=l5;
f5522(i,si0);
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l1=si1;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
if(si0){
goto L35;
}
si0=l2;
f15024(i,si0);
si0=4U;
l2=si0;
goto L34;
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f8723(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1U;
si0+=si1;
l1=si0;
goto L36;
}
L35:;
si0=l2;
si1=l1;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0=f15027(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L16;
}
L34:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
L33:;
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
goto L15;
L32:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L42:;
{
si0=l1;
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
goto L43;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L43:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L19:;
si0=l4;
si1=l4;
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
goto L1;
L18:;
f14795(i);
UNREACHABLE;
L17:;
f53(i);
UNREACHABLE;
L16:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
f5522(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f10727(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
si4=4808U;
si5=l3;
f10729(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=1U;
l5=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
l3=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
si0=0U;
l2=si0;
L3:;
si0=0U;
l5=si0;
L2:;
si0=l4;
si1=l5;
si2=l2;
si3=l3;
f10734(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10770(rustpythonInstance*i,U32 l0) {
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
f5522(i,si0);
L1:;
L0:;
}

void f10771(rustpythonInstance*i,U32 l0) {
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

void f10772(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f10773(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
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
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
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
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L1:;
L0:;
}

void f10774(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10775(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10776(rustpythonInstance*i,U32 l0) {
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

void f10777(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
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
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L1:;
L0:;
}

void f10778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
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
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=12U;
si0*=si1;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=128U;
si0=f15022(i,si0);
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
L7:;
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
goto L10;
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
si2=i32_load(&i->m0,(U64)si2+4U);
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
si0=f15142(i,si0,si1,si2);
l19=si0;
si1=l17;
si2=l18;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=2U;
l19=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
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
si0=f15142(i,si0,si1,si2);
l16=si0;
si1=l15;
si2=l17;
si1-=si2;
si2=l16;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
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
goto L10;
}
goto L12;
}
L11:;
si0=2U;
l19=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=l12;
si0+=si1;
l18=si0;
si0=2U;
l19=si0;
L14:;
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
si0=f15142(i,si0,si1,si2);
l16=si0;
si1=l15;
si2=l17;
si1-=si2;
si2=l16;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
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
goto L14;
}
}
si0=l14;
l19=si0;
L13:;
si0=l19;
si1=l11;
si0+=si1;
l8=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l19;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
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
L17:;
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
goto L17;
}
goto L8;
}
L16:;
si0=l11;
si1=l8;
si2=17422968U;
f683(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l8;
si1=l1;
si2=17422968U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l14;
l19=si0;
L9:;
si0=l19;
si1=l11;
si0+=si1;
l8=si0;
L8:;
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
si0=17423140U;
si1=44U;
si2=17423184U;
f604(i,si0,si1,si2);
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
goto L6;
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
f10779(i,si0,si1,si2);
L18:;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si1=4U;
si0<<=(si1&31);
l15=si0;
if(si0){
goto L25;
}
si0=4U;
si1=0U;
si0=f15030(i,si0,si1);
l15=si0;
goto L24;
L25:;
si0=l15;
si0=f15022(i,si0);
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
si0=f15143(i,si0,si1,si2);
l15=si0;
si0=l5;
f15024(i,si0);
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
goto L26;
}
L27:;
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
goto L31;
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
goto L31;
}
si0=l9;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=2U;
l9=si0;
goto L26;
L32:;
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
goto L30;
}
si0=l9;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=3U;
l9=si0;
goto L26;
L33:;
si0=l19;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l18;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L30;
}
goto L26;
L31:;
si0=l9;
si1=3U;
si0=si0 < si1;
if(si0){
goto L29;
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
L30:;
si0=l15;
si1=l17;
si0=si0 < si1;
if(si0){
goto L28;
}
L29:;
si0=l9;
si1=-2U;
si0+=si1;
l13=si0;
L28:;
si0=l9;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l9;
si1=l13;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 <= si1;
if(si0){
goto L38;
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
goto L37;
}
si0=l15;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
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
goto L40;
}
si0=l4;
si1=l17;
si2=l15;
si3=12U;
si2*=si3;
l19=si2;
si0=f15143(i,si0,si1,si2);
l14=si0;
si1=l19;
si0+=si1;
l19=si0;
si0=l20;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l15;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l6;
si1=l16;
si0+=si1;
l15=si0;
L41:;
{
si0=l15;
si1=l19;
si2=l19;
si3=-12U;
si2+=si3;
l16=si2;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l12;
si2=si4?si2:si3;
si3=l17;
si4=-12U;
si3+=si4;
l12=si3;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l12;
si5=4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l11;
si3=si5?si3:si4;
si4=l16;
si5=8U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
l16=si4;
si5=l12;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l12=si5;
si6=l16;
si7=l12;
si6=si6 < si7;
si4=si6?si4:si5;
si2=f15142(i,si2,si3,si4);
l11=si2;
si3=l16;
si4=l12;
si3-=si4;
si4=l11;
si2=si4?si2:si3;
l16=si2;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l12=si2;
si3=-1U;
si2^=si3;
si3=12U;
si2*=si3;
si1+=si2;
l19=si1;
si2=l17;
si3=l12;
si4=12U;
si3*=si4;
si2+=si3;
l17=si2;
si3=l16;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
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
goto L35;
}
si0=l15;
si1=-12U;
si0+=si1;
l15=si0;
si0=l19;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L35;
}
goto L41;
}
L40:;
si0=l4;
si1=l18;
si2=l19;
si0=f15143(i,si0,si1,si2);
l15=si0;
si1=l19;
si0+=si1;
l19=si0;
si0=l20;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L42;
}
si0=l15;
l15=si0;
goto L34;
L42:;
si0=l12;
si1=l20;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L43;
}
si0=l15;
l15=si0;
goto L34;
L43:;
si0=l0;
si1=l16;
si0+=si1;
l14=si0;
si0=l15;
l15=si0;
L44:;
{
si0=l18;
si1=l15;
si2=l17;
si3=l17;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l17;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l16;
si3=si5?si3:si4;
si4=l15;
si4=i32_load(&i->m0,(U64)si4);
l16=si4;
si5=l15;
si5=i32_load(&i->m0,(U64)si5+4U);
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
si3=f15142(i,si3,si4,si5);
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
goto L34;
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
goto L44;
}
goto L34;
}
L39:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=17422856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=17422864U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=17422984U;
f614(i,si0,si1);
UNREACHABLE;
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
si1=17422856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=17422864U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=17423000U;
f614(i,si0,si1);
UNREACHABLE;
L37:;
si0=l26;
si1=l15;
si2=17423016U;
f683(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l15;
si1=l1;
si2=17423016U;
f597(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l17;
l18=si0;
si0=l14;
l15=si0;
L34:;
si0=l18;
si1=l15;
si2=l19;
si3=l15;
si2-=si3;
si0=f15143(i,si0,si1,si2);
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
si0=f15144(i,si0,si1,si2);
si0=1U;
l9=si0;
si0=l22;
si1=1U;
si0=si0 > si1;
if(si0){
goto L27;
}
}
L26:;
si0=l8;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L7;
L22:;
}
si0=17423032U;
si1=43U;
si2=17423108U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=l8;
si2=17423124U;
f683(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=17423032U;
si1=43U;
si2=17423076U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=1U;
f10779(i,si0,si1,si2);
goto L2;
L3:;
si0=l5;
f15024(i,si0);
si0=l4;
f15024(i,si0);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=17423032U;
si1=43U;
si2=17423092U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si1=l4;
si2=-12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l8;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l9;
si1=si3?si1:si2;
si2=l4;
si3=8U;
si2+=si3;
l10=si2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l8;
si4=8U;
si3+=si4;
l11=si3;
si3=i32_load(&i->m0,(U64)si3);
l12=si3;
si4=l9;
si5=l12;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l13=si0;
si1=l9;
si2=l12;
si1-=si2;
si2=l13;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l10=si0;
si0=l3;
l4=si0;
L6:;
{
si0=l4;
si1=12U;
si0+=si1;
l8=si0;
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l12;
si1=si3?si1:si2;
si2=l9;
si3=l4;
si4=8U;
si3+=si4;
l11=si3;
si3=i32_load(&i->m0,(U64)si3);
l12=si3;
si4=l9;
si5=l12;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l13=si0;
si1=l9;
si2=l12;
si1-=si2;
si2=l13;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l8=si0;
L5:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=17423200U;
si1=46U;
si2=17423248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15144(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15143(i,si0,si1,si2);
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
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
l14=si0;
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
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l14;
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
si1=l11;
si0+=si1;
l1=si0;
si0=l14;
si1=l11;
si0+=si1;
l14=si0;
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
l15=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l14=si0;
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
si0=l15;
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
si0=l14;
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
si0=l14;
si1=l12;
si0+=si1;
l14=si0;
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

void f10781(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l16=0;
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
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15144(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
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
si1=4U;
si0+=si1;
l10=si0;
si0=l1;
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
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
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
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15143(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
if(si0){
goto L14;
}
si0=l2;
si1=1U;
si0&=si1;
l10=si0;
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
l14=sj0;
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
sj1=l14;
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
si1=l9;
si0+=si1;
l4=si0;
si0=l10;
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
l16=si1;
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
l14=sj0;
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
sj1=l14;
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
si1=l16;
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

void f10782(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=17423264U;
si3=l5;
si4=12U;
si3+=si4;
si4=17423264U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f10783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=17423280U;
si3=l5;
si4=12U;
si3+=si4;
si4=17423280U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f10784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=17423296U;
si3=l5;
si4=12U;
si3+=si4;
si4=17423296U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f10785(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=17423312U;
si3=l5;
si4=12U;
si3+=si4;
si4=17423312U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f10786(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f10787(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f10788(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10789(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
l9=si0;
L6:;
{
si0=l4;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l9;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l1;
si5=3U;
si4<<=(si5&31);
si3+=si4;
l11=si3;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l10;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L7;
L9:;
si0=l1;
if(si0){
goto L10;
}
si0=0U;
l1=si0;
goto L5;
L10:;
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l11;
si5=-4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
L8:;
si0=l1;
si1=l3;
si2=17423752U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l9;
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10789(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L2;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l4;
if(si0){
goto L6;
}
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=1U;
l7=si0;
si0=0U;
l4=si0;
goto L4;
L7:;
si0=0U;
l4=si0;
si0=1U;
l8=si0;
L8:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l8;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l1;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
l7=si0;
goto L4;
L9:;
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
l4=si0;
si0=l8;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l7=si0;
l8=si0;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L8;
L10:;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
l9=si0;
L12:;
{
si0=l8;
si1=1U;
si0>>=(si1&31);
l8=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l9;
si1=l4;
si0-=si1;
l8=si0;
goto L3;
L13:;
si0=l8;
l9=si0;
si0=l4;
if(si0){
goto L12;
}
}
si0=1U;
si1=l4;
si0-=si1;
l8=si0;
goto L3;
L11:;
si0=l4;
si1=l3;
si2=17423800U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L4:;
si0=l7;
si1=l3;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l8=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10790(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10791(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=4U;
si0+=si1;
l9=si0;
si0=l1;
l10=si0;
L6:;
{
si0=l4;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l10;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l1;
si5=2U;
si4<<=(si5&31);
si3+=si4;
l11=si3;
si3=i32_load(&i->m0,(U64)si3);
l12=si3;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l12;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L7;
L9:;
si0=l1;
if(si0){
goto L10;
}
si0=0U;
l1=si0;
goto L5;
L10:;
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l11;
si5=-4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
L8:;
si0=l1;
si1=l3;
si2=17423752U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l10;
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10791(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L2;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l4;
if(si0){
goto L6;
}
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=1U;
l7=si0;
si0=0U;
l4=si0;
goto L4;
L7:;
si0=0U;
l4=si0;
si0=1U;
l8=si0;
L8:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l8;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l1;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
l7=si0;
goto L4;
L9:;
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
l4=si0;
si0=l8;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l7=si0;
l8=si0;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L8;
L10:;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
l9=si0;
L12:;
{
si0=l8;
si1=1U;
si0>>=(si1&31);
l8=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l9;
si1=l4;
si0-=si1;
l8=si0;
goto L3;
L13:;
si0=l8;
l9=si0;
si0=l4;
if(si0){
goto L12;
}
}
si0=1U;
si1=l4;
si0-=si1;
l8=si0;
goto L3;
L11:;
si0=l4;
si1=l3;
si2=17423800U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L4:;
si0=l7;
si1=l3;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l8=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10792(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10791(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=4U;
si0+=si1;
l10=si0;
L6:;
{
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l5;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l5=si0;
goto L7;
L11:;
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l11;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
goto L5;
L10:;
si0=l5;
si1=l3;
si2=17423768U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l3;
si2=17423784U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
L7:;
si0=l5;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10793(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10789(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L4;
}
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L6:;
{
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l5;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l5=si0;
goto L7;
L11:;
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l10;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
f10433(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
goto L5;
L10:;
si0=l5;
si1=l3;
si2=17423768U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l3;
si2=17423784U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
L7:;
si0=l5;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10794(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l8=si0;
si0=l6;
si1=l7;
si0-=si1;
si1=2U;
si0>>=(si1&31);
si1=l3;
si0*=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L7:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=40U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=17423944U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=4820U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=17423952U;
si2=l4;
si3=28U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
{
si0=l1;
si1=l7;
si2=4U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=17423944U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=4820U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=17423952U;
si2=l4;
si3=28U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
l7=si0;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
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
L5:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=17423976U;
si1=43U;
si2=l4;
si3=63U;
si2+=si3;
si3=17424020U;
si4=17424136U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=17423976U;
si1=43U;
si2=l4;
si3=63U;
si2+=si3;
si3=17424020U;
si4=17424152U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f10795(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
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
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
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
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=12U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f10796(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=56U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=l6;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L1;
}
L2:;
si0=l4;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f1354(i,si0);
L3:;
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=0U;
f7458(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L11:;
{
si0=l0;
si1=l2;
si2=l5;
si3=l6;
si0=f7435(i,si0,si1,si2,si3);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L10;
}
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
f5522(i,si0);
L12:;
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l13;
f7458(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L11;
}
L10:;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
f5522(i,si0);
goto L8;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L14;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=l6;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L13;
}
L14:;
si0=l4;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L13:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
f1354(i,si0);
L15:;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=l12;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l13;
si1=l11;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L5;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=26U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17424239U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424231U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424223U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424215U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=111669149722ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=l6;
si2=l3;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L7:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l1;
f5522(i,si0);
L4:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f10797(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=39U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424207U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424200U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424192U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424184U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424176U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=167503724583ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l1;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L2:;
si0=1U;
si1=39U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f10798(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=4U;
si4=l4;
si5=l5;
f10798(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
if(si0){
goto L2;
}
si0=l0;
si1=2U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2+33U);
l2=si2;
si3=1U;
si2^=si3;
si3=l2;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l8;
si2=l1;
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
goto L4;
}
L5:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
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
goto L6;
}
si0=l1;
si1=56U;
si0+=si1;
f1354(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l7;
si1=16U;
si0+=si1;
l9=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l9;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l11=si2;
si3=l11;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
if(si0){
goto L7;
}
L8:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=56U;
si0+=si1;
f1354(i,si0);
L9:;
si0=1U;
si1=4U;
si2=2U;
si3=l8;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l8;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l3;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=l7;
si2=l1;
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
goto L11;
}
L12:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L11:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=56U;
si0+=si1;
f1354(i,si0);
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l3;
si1=16U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=l8;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L14;
}
L15:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
l8=si0;
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si1=56U;
si0+=si1;
f1354(i,si0);
L16:;
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=l8;
si3=si3 < si4;
l3=si3;
si1=si3?si1:si2;
si2=56U;
si1+=si2;
l12=si1;
si2=0U;
f7458(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=l1;
si2=l3;
si0=si2?si0:si1;
l13=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
L19:;
{
si0=l6;
si1=l13;
si2=l9;
si3=l5;
f5547(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L21;
}
si0=l8;
if(si0){
goto L20;
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L17;
L21:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L17;
L20:;
si0=l8;
si1=l3;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l4;
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
si1=4U;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l6;
si1=4U;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=0U;
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L36:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=l11;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=19U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l6;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=17432308U;
si3=13U;
si4=l6;
si5=32U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l2=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=1U;
l15=si0;
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L32;
}
L35:;
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=18U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l6;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=17432308U;
si3=13U;
si4=l6;
si5=32U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l2=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+25U);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
goto L29;
L34:;
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
goto L37;
}
si0=l3;
f5522(i,si0);
L37:;
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
goto L38;
}
si0=l3;
f5522(i,si0);
L38:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L27;
}
goto L22;
L33:;
si0=l15;
if(si0){
goto L30;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=19U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l6;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=17432308U;
si3=13U;
si4=l6;
si5=32U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l2=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+25U);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
goto L29;
L32:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+25U);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
goto L29;
L31:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=2U;
l2=si0;
goto L29;
L30:;
si0=17402954U;
l7=si0;
si0=257U;
l2=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l11=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L40;
case 1:
goto L43;
case 2:
goto L29;
case 3:
goto L39;
case 4:
goto L42;
case 5:
goto L41;
default:
goto L40;
}
L43:;
si0=1U;
l11=si0;
si0=17403154U;
l7=si0;
goto L40;
L42:;
si0=2U;
l11=si0;
si0=17416680U;
l7=si0;
goto L40;
L41:;
si0=2U;
l11=si0;
si0=17416682U;
l7=si0;
L40:;
si0=2U;
l2=si0;
si0=l5;
si1=l3;
si2=l8;
si3=l7;
si4=l11;
si0=f11753(i,si0,si1,si2,si3,si4);
l1=si0;
goto L29;
L39:;
si0=1U;
l2=si0;
L29:;
si0=l2;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L45;
}
si0=l2;
si1=8U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l2=si0;
goto L44;
L45:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
f5571(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L26;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l2=si0;
L44:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
L28:;
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
goto L46;
}
si0=l8;
f5522(i,si0);
L46:;
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
goto L47;
}
si0=l3;
f5522(i,si0);
L47:;
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
goto L22;
}
L27:;
si0=l9;
f5522(i,si0);
goto L22;
L26:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L25:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
goto L23;
L24:;
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L23:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L17;
}
si0=l8;
f5522(i,si0);
goto L17;
L22:;
si0=l6;
si1=32U;
si0+=si1;
si1=l12;
si2=l14;
f7458(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L17:;
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
goto L48;
}
si0=l3;
f5522(i,si0);
L48:;
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
goto L1;
}
si0=l9;
f5522(i,si0);
goto L1;
L10:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10799(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=l2;
si3=l3;
si4=l4;
f7457(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10800(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
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
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L3:;
si0=l4;
si1=12U;
si0*=si1;
l8=si0;
si0=0U;
l4=si0;
L4:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l4;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=l8;
si1=-12U;
si0+=si1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l8;
si1=l4;
si0-=si1;
si1=-12U;
si0+=si1;
si1=12U;
si0=DIV_U(si0,si1);
l4=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
f15024(i,si0);
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=l7;
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f7434(i,si0,si1,si2,si3);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l4=si0;
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L12:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
f15024(i,si0);
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L14:;
si0=l3;
si1=12U;
si0+=si1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=12U;
si0+=si1;
l4=si0;
L16:;
{
si0=l4;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L18:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
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
goto L17;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L17:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
goto L1;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L5;
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
goto L7;
}
}
L6:;
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
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
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l8;
si0=f5913(i,si0,si1,si2);
l1=si0;
goto L4;
L5:;
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
si2=l7;
si0=f13201(i,si0,si1,si2);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L9:;
si0=l5;
f15024(i,si0);
L4:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
L11:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L12:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L14;
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
f15024(i,si0);
L14:;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L16:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L17:;
si0=l8;
si1=12U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L18:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L19:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=64U;
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

void f10802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
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
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
f1354(i,si0);
L3:;
si0=0U;
l5=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
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
l1=si0;
si0=!(si0);
if(si0){
goto L5;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L6:;
si0=l0;
si1=l3;
si2=l4;
si3=l5;
si1=f5995(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=-5312052885499612470ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-4540282770431510161ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l2;
si1=56U;
si0+=si1;
l8=si0;
sj0=l6;
sj1=-4759791341598484124ULL;
sj0^=sj1;
sj1=l7;
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l6;
sj1=1452125608678090791ULL;
sj0^=sj1;
sj1=l7;
sj2=-2410077182553881750ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=152U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l1;
si5=i32_load(&i->m0,(U64)si5+28U);
si4=si4 != si5;
si5=l4;
f10798(i,si0,si1,si2,si3,si4,si5);
goto L1;
L9:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l1;
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
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=l1;
si3=l4;
f11758(i,si0,si1,si2,si3);
si0=l1;
si1=l1;
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
si0=l1;
f5522(i,si0);
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
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
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=l2;
si3=l4;
f11758(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
f5522(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l8;
si2=l8;
si3=l1;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
si4=l12;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+36U);
l9=si5;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si5=l3;
si6=l4;
f10804(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L14;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l2=si0;
goto L13;
L14:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
L13:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
l2=si0;
L16:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L17:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l11;
si0=!(si0);
if(si0){
goto L18;
}
si0=l12;
f15024(i,si0);
L18:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
l2=si0;
L20:;
{
si0=l2;
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
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L21:;
si0=l2;
si1=4U;
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
L19:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L12:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
l2=si0;
L23:;
{
si0=l2;
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
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L24:;
si0=l2;
si1=4U;
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
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L7:;
si0=l1;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L26;
}
si0=l10;
si1=16U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l9;
si1=l12;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+56U);
l11=si2;
si3=l11;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
if(si0){
goto L25;
}
L26:;
si0=l9;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L25:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+56U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l9;
si1=56U;
si0+=si1;
f1354(i,si0);
L27:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l4;
f10805(i,si0,si1,si2);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
si2=l4;
f10806(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
goto L4;
}
si0=0U;
l9=si0;
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
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
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l12;
si2=0U;
si0=f5913(i,si0,si1,si2);
l9=si0;
L28:;
si0=l1;
si1=l10;
si2=l9;
si0=f5922(i,si0,si1,si2);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L30;
}
sj0=l6;
sj1=-4973832613023358901ULL;
sj0^=sj1;
sj1=l7;
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L30;
}
si0=l0;
si1=512U;
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L30:;
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l8;
si3=l3;
si4=l4;
f10807(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L32;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l2=si0;
goto L31;
L32:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
L31:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L29:;
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
f5522(i,si0);
goto L1;
L6:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=17423032U;
si1=43U;
si2=17434892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10804(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=1U;
l8=si0;
si0=l5;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
case 2:
goto L10;
case 3:
goto L9;
case 4:
goto L7;
case 5:
goto L8;
default:
goto L7;
}
L10:;
si0=1U;
l9=si0;
si0=l2;
si1=l1;
si0-=si1;
si1=l4;
si2=l3;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L12;
}
L13:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=1U;
l9=si0;
goto L14;
L17:;
si0=0U;
l9=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
L16:;
si0=17364592U;
si1=65U;
si2=17364768U;
f7606(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=4U;
si4=l6;
f11425(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=1U;
si0&=si1;
l9=si0;
goto L14;
L18:;
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l6;
f5571(i,si0,si1,si2);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L4;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
l9=si0;
L14:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
}
si0=1U;
l9=si0;
L12:;
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l4=si0;
goto L1;
L11:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
goto L2;
L9:;
si0=l2;
si1=l1;
si0-=si1;
si1=l4;
si2=l3;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L20;
}
L21:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=1U;
l9=si0;
goto L22;
L24:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l4=si0;
goto L1;
L23:;
si0=l7;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=4U;
si4=l6;
f11425(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l9;
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=1U;
si0&=si1;
l9=si0;
goto L22;
L25:;
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l6;
f5571(i,si0,si1,si2);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
l9=si0;
L22:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
}
L20:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L19:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
goto L3;
L8:;
si0=0U;
l8=si0;
L7:;
si0=l2;
si1=l1;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l11=si0;
si1=l4;
si2=l3;
si1-=si2;
si2=2U;
si1>>=(si2&31);
l12=si1;
si2=l11;
si3=l12;
si2=si2 < si3;
l13=si2;
si0=si2?si0:si1;
l14=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
l15=si0;
L27:;
{
si0=l3;
si1=l15;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=l4;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l7;
si1=4U;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si1=4U;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=0U;
l4=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L31;
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
L32:;
{
si0=l4;
if(si0){
goto L33;
}
si0=0U;
l4=si0;
goto L31;
L33:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L32;
}
}
si0=l7;
si1=l19;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l7;
si2=19U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l6;
si2=17432308U;
si3=13U;
si4=l7;
si5=24U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l9=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=1U;
l4=si0;
si0=l9;
si1=2U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+41U);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+43U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l4=si0;
goto L28;
L31:;
si0=l7;
si1=l17;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l19;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l7;
si2=18U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l6;
si2=17432308U;
si3=13U;
si4=l7;
si5=24U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l9=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l9;
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+41U);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+43U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l4=si0;
goto L28;
L34:;
si0=l4;
if(si0){
goto L29;
}
si0=l7;
si1=l19;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l7;
si2=19U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l6;
si2=17432308U;
si3=13U;
si4=l7;
si5=24U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+41U);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+43U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
goto L28;
L30:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=2U;
l4=si0;
goto L28;
L29:;
si0=17402954U;
l2=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l9=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L40;
case 2:
goto L36;
case 3:
goto L35;
case 4:
goto L39;
case 5:
goto L38;
default:
goto L37;
}
L40:;
si0=1U;
l9=si0;
si0=17403154U;
l2=si0;
goto L37;
L39:;
si0=2U;
l9=si0;
si0=17416680U;
l2=si0;
goto L37;
L38:;
si0=2U;
l9=si0;
si0=17416682U;
l2=si0;
L37:;
si0=2U;
l4=si0;
si0=l6;
si1=l19;
si2=l17;
si3=l2;
si4=l9;
si0=f11753(i,si0,si1,si2,si3,si4);
l2=si0;
goto L28;
L36:;
si0=1U;
si1=257U;
si2=l17;
si3=l19;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
goto L28;
L35:;
si0=257U;
si1=1U;
si2=l17;
si3=l19;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L28:;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si1=8U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l4=si0;
goto L45;
L46:;
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
f5571(i,si0,si1,si2);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L44;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l4=si0;
L45:;
si0=l4;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L42;
}
goto L41;
L44:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
L43:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L42:;
si0=l8;
if(si0){
goto L49;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l6;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
f11898(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L49:;
si0=l7;
si1=24U;
si0+=si1;
si1=l6;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
f11897(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L47;
}
L48:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l4=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l4=si0;
goto L1;
L47:;
si0=l0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L41:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=0U;
l4=si0;
si0=l0;
si1=1U;
si2=4U;
si3=2U;
si4=l11;
si5=l12;
si4=si4 == si5;
si2=si4?si2:si3;
si3=l13;
si1=si3?si1:si2;
si2=l5;
si1&=si2;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L6:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
goto L3;
L5:;
si0=17364592U;
si1=65U;
si2=17364768U;
f7606(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
goto L2;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10805(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=l4;
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
goto L3;
}
L4:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L5:;
si0=0U;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
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
l4=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l6=si0;
L6:;
si0=l3;
si1=l5;
si2=l6;
si0=f5995(i,si0,si1,si2);
l4=si0;
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
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10806(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
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
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L5:;
{
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
si2=l6;
f13797(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l4;
f5522(i,si0);
L9:;
si0=l7;
si1=l7;
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
si0=l7;
f5522(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=0U;
l4=si0;
goto L1;
L7:;
si0=l4;
l5=si0;
goto L4;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si0=f7430(i,si0,si1,si2);
l5=si0;
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
goto L11;
}
si0=l4;
f5522(i,si0);
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l7;
si1=l7;
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
si0=l7;
f5522(i,si0);
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L13;
}
si0=l3;
si1=12U;
si0+=si1;
f7741(i,si0);
L13:;
si0=1U;
l4=si0;
goto L1;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=4U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10807(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
si3=4U;
si4=l4;
f10807(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L12;
}
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
si1=l8;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l10=si2;
si3=l10;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
if(si0){
goto L11;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si1=8U;
si0+=si1;
f1354(i,si0);
L13:;
si0=1U;
si1=4U;
si2=2U;
si3=l7;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l3;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=l3;
si3=-1U;
si2+=si3;
l11=si2;
si3=251U;
si2&=si3;
si0=si2?si0:si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=l7;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
if(si0){
goto L14;
}
L15:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L14:;
si0=l5;
si1=4U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l6;
si3=l3;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=4U;
si3<<=(si4&31);
si2+=si3;
f8411(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=8U;
si0+=si1;
f1354(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l2;
si2=l11;
si3=-5U;
si2&=si3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=0U;
l2=si0;
L18:;
{
si0=l5;
si1=4U;
si0+=si1;
si1=l8;
si2=l6;
si3=l2;
si2+=si3;
l3=si2;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l4;
f10437(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
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
goto L19;
}
si0=l1;
f5522(i,si0);
L19:;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
f15024(i,si0);
L20:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L3:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-4U;
si0+=si1;
l0=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l1;
f5522(i,si0);
L21:;
si0=l0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l3;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=l2;
si0-=si1;
si1=-4U;
si0+=si1;
si1=2U;
si0>>=(si1&31);
l2=si0;
L23:;
{
si0=l1;
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
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L24:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10808(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=1452125608678090791ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-2410077182553881750ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l2;
si1=56U;
si0+=si1;
l8=si0;
sj0=l6;
sj1=-4759791341598484124ULL;
sj0^=sj1;
sj1=l7;
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l6;
sj1=-5312052885499612470ULL;
sj0^=sj1;
sj1=l7;
sj2=-4540282770431510161ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=152U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l1;
si5=i32_load(&i->m0,(U64)si5+28U);
si4=si4 != si5;
si5=l4;
f10798(i,si0,si1,si2,si3,si4,si5);
goto L1;
L9:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l1;
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
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=l1;
si3=l4;
f11758(i,si0,si1,si2,si3);
si0=l1;
si1=l1;
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
si0=l1;
f5522(i,si0);
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
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
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=l2;
si3=l4;
f11758(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
f5522(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l8;
si2=l8;
si3=l1;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
si4=l12;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+36U);
l9=si5;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si5=l3;
si6=l4;
f10804(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L14;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l2=si0;
goto L13;
L14:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
L13:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
l2=si0;
L16:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
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
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L17:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l11;
si0=!(si0);
if(si0){
goto L18;
}
si0=l12;
f15024(i,si0);
L18:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
l2=si0;
L20:;
{
si0=l2;
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
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L21:;
si0=l2;
si1=4U;
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
L19:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L12:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
l2=si0;
L23:;
{
si0=l2;
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
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L24:;
si0=l2;
si1=4U;
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
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15024(i,si0);
goto L1;
L7:;
si0=l1;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L26;
}
si0=l10;
si1=16U;
si0+=si1;
l12=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l9;
si1=l12;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+56U);
l11=si2;
si3=l11;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
if(si0){
goto L25;
}
L26:;
si0=l9;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L25:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+56U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l9;
si1=56U;
si0+=si1;
f1354(i,si0);
L27:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l4;
f10809(i,si0,si1,si2);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
si2=l4;
f10806(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
goto L4;
}
si0=0U;
l9=si0;
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
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
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=28U;
si0+=si1;
si1=l12;
si2=0U;
si0=f5913(i,si0,si1,si2);
l9=si0;
L28:;
si0=l1;
si1=l10;
si2=l9;
si0=f5922(i,si0,si1,si2);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L30;
}
sj0=l6;
sj1=-4973832613023358901ULL;
sj0^=sj1;
sj1=l7;
sj2=-608833962105374840ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L30;
}
si0=l0;
si1=512U;
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L30:;
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l8;
si3=l3;
si4=l4;
f10807(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L32;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l2=si0;
goto L31;
L32:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
L31:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L29:;
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
f5522(i,si0);
goto L1;
L6:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=17423032U;
si1=43U;
si2=17434892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10809(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=l4;
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
goto L3;
}
L4:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L5:;
si0=0U;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
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
l4=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l6=si0;
L6:;
si0=l3;
si1=l5;
si2=l6;
si0=f5960(i,si0,si1,si2);
l4=si0;
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
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10810(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
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
goto L3;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l3;
f8246(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
f10806(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
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
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l3;
si2=l2;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
si2=l2;
si3=l1;
si4=l3;
f10733(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
f7741(i,si0);
L7:;
si0=l2;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
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
si0=0U;
l3=si0;
si0=0U;
l2=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=44U;
si0+=si1;
f7427(i,si0);
si0=l6;
si1=68U;
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L8:;
si0=l1;
si1=l5;
si2=l2;
si0=f5922(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
f7741(i,si0);
goto L2;
L4:;
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
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l1;
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

void f10811(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
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
goto L3;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l3;
f8246(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
f10806(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
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
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l3;
si2=l2;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
si2=l2;
si3=l1;
si4=l3;
f10728(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
f7741(i,si0);
L7:;
si0=l2;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
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
si0=0U;
l3=si0;
si0=0U;
l2=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=44U;
si0+=si1;
f7427(i,si0);
si0=l6;
si1=68U;
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L8:;
si0=l1;
si1=l5;
si2=l2;
si0=f5922(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
f7741(i,si0);
goto L2;
L4:;
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
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l1;
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

void f10812(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
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
goto L3;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l3;
f8246(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
f10806(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
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
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l3;
si2=l2;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
si2=l2;
si3=l1;
si4=l3;
f10746(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
f7741(i,si0);
L7:;
si0=l2;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
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
si0=0U;
l3=si0;
si0=0U;
l2=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=44U;
si0+=si1;
f7427(i,si0);
si0=l6;
si1=68U;
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L8:;
si0=l1;
si1=l5;
si2=l2;
si0=f5922(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
f7741(i,si0);
goto L2;
L4:;
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
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l1;
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

void f10813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
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
goto L3;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=l1;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l3;
f8246(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=l3;
f10806(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
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
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l3;
si2=l2;
f7782(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
si2=l2;
si3=l1;
si4=l3;
f10741(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
f7741(i,si0);
L7:;
si0=l2;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
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
si0=0U;
l3=si0;
si0=0U;
l2=si0;
si0=l5;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=44U;
si0+=si1;
f7427(i,si0);
si0=l6;
si1=68U;
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
goto L3;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L8:;
si0=l1;
si1=l5;
si2=l2;
si0=f5922(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
f7741(i,si0);
goto L2;
L4:;
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
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f5522(i,si0);
goto L2;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l1;
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

void f10814(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
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
goto L1;
}
si0=l0;
si1=1208U;
si0+=si1;
l4=si0;
si1=17424168U;
si2=4U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=168U;
si0+=si1;
si1=17426524U;
si2=370U;
f8911(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L2:;
si0=l1;
si1=160U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l6=si1;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+164U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
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
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l2;
si1=0U;
si2=l2;
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
goto L4;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L4:;
si0=l2;
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
l5=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l5;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=152U;
si0+=si1;
si1=l6;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+156U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l3;
f5522(i,si0);
L8:;
si0=l2;
si1=0U;
si2=l2;
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
goto L5;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L5:;
si0=l2;
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si1=i32_load(&i->m0,(U64)si1+376U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L10:;
si0=l1;
si1=144U;
si0+=si1;
si1=l6;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+148U);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
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
L11:;
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426244U;
si2=9U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f10815(i,si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=18661092U;
f6698(i,si0);
L13:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L14:;
si0=l1;
si1=136U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+140U);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
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
goto L15;
}
si0=l3;
f5522(i,si0);
L15:;
si0=l2;
si1=0U;
si2=l2;
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
goto L12;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L12:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l1;
si1=128U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+132U);
l3=si0;
si0=!(si0);
if(si0){
goto L18;
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
goto L18;
}
si0=l3;
f5522(i,si0);
L18:;
si0=l2;
si1=0U;
si2=l2;
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
goto L16;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L16:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426116U;
si2=16U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=18661092U;
f6698(i,si0);
L20:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L21:;
si0=l1;
si1=120U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
si0=!(si0);
if(si0){
goto L22;
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
goto L22;
}
si0=l3;
f5522(i,si0);
L22:;
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L24:;
si0=l1;
si1=112U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
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
goto L25;
}
si0=l3;
f5522(i,si0);
L25:;
si0=l2;
si1=0U;
si2=l2;
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
goto L23;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L23:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426040U;
si2=23U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=18661092U;
f6698(i,si0);
L27:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L28:;
si0=l1;
si1=104U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
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
goto L29;
}
si0=l3;
f5522(i,si0);
L29:;
si0=l2;
si1=0U;
si2=l2;
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
goto L26;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L26:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L31:;
si0=l1;
si1=96U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
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
goto L32;
}
si0=l3;
f5522(i,si0);
L32:;
si0=l2;
si1=0U;
si2=l2;
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
goto L30;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L30:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+148U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17425984U;
si2=11U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f10816(i,si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=18661092U;
f6698(i,si0);
L34:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L35:;
si0=l1;
si1=88U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
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
goto L36;
}
si0=l3;
f5522(i,si0);
L36:;
si0=l2;
si1=0U;
si2=l2;
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
goto L33;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L33:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L38:;
si0=l1;
si1=80U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=!(si0);
if(si0){
goto L39;
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
goto L39;
}
si0=l3;
f5522(i,si0);
L39:;
si0=l2;
si1=0U;
si2=l2;
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
goto L37;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L37:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426288U;
si2=18U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=18661092U;
f6698(i,si0);
L41:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L42;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L42:;
si0=l1;
si1=72U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
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
goto L43;
}
si0=l3;
f5522(i,si0);
L43:;
si0=l2;
si1=0U;
si2=l2;
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
goto L40;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L40:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L45;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L45:;
si0=l1;
si1=64U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
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
goto L46;
}
si0=l3;
f5522(i,si0);
L46:;
si0=l2;
si1=0U;
si2=l2;
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
goto L44;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L44:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426444U;
si2=25U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=18661092U;
f6698(i,si0);
L48:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L49;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L49:;
si0=l1;
si1=56U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
si0=!(si0);
if(si0){
goto L50;
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
goto L50;
}
si0=l3;
f5522(i,si0);
L50:;
si0=l2;
si1=0U;
si2=l2;
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
goto L47;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L47:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L52;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L52:;
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L53;
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
goto L53;
}
si0=l3;
f5522(i,si0);
L53:;
si0=l2;
si1=0U;
si2=l2;
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
goto L51;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L51:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426316U;
si2=10U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f10817(i,si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=18661092U;
f6698(i,si0);
L55:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L56;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L56:;
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=!(si0);
if(si0){
goto L57;
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
goto L57;
}
si0=l3;
f5522(i,si0);
L57:;
si0=l2;
si1=0U;
si2=l2;
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
goto L54;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L54:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L59;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L59:;
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L60;
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
goto L60;
}
si0=l3;
f5522(i,si0);
L60:;
si0=l2;
si1=0U;
si2=l2;
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
goto L58;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L58:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+136U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426160U;
si2=17U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=18661092U;
f6698(i,si0);
L62:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L63;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L63:;
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L64;
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
goto L64;
}
si0=l3;
f5522(i,si0);
L64:;
si0=l2;
si1=0U;
si2=l2;
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
goto L61;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L61:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L66;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L66:;
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L67;
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
goto L67;
}
si0=l3;
f5522(i,si0);
L67:;
si0=l2;
si1=0U;
si2=l2;
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
goto L65;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L65:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+140U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l4;
si1=17426360U;
si2=24U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L68;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=18661092U;
f6698(i,si0);
L69:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l3=si0;
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
si0=i32_load(&i->m0,(U64)si0+228U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l1;
si1=l3;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=168U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5579(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=376U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L70;
}
si0=l3;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L70:;
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l5;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L71;
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
goto L71;
}
si0=l4;
f5522(i,si0);
L71:;
si0=l2;
si1=0U;
si2=l2;
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
goto L68;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L68:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L73;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L73:;
si0=l1;
si1=l2;
si2=384U;
si1+=si2;
si2=l5;
si3=l4;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L74;
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
goto L74;
}
si0=l4;
f5522(i,si0);
L74:;
si0=l2;
si1=0U;
si2=l2;
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
goto L72;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L72:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l1;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10815(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434966U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434963U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=17431948U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
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
si1=56U;
si0+=si1;
si1=17434963U;
si2=7U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10816(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434966U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434963U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=17431996U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
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
si1=56U;
si0+=si1;
si1=17434963U;
si2=7U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10817(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434966U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17434963U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=17431972U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
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
si1=56U;
si0+=si1;
si1=17434963U;
si2=7U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f10818(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
sj0=0ULL;
l7=sj0;
si0=1U;
l8=si0;
goto L5;
L6:;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l3;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=0U;
l6=si0;
goto L7;
L8:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=8U;
l9=si0;
si0=0U;
l10=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l12;
l10=si0;
L9:;
si0=l9;
si1=l6;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l7=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=1U;
l6=si0;
L7:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L13:;
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
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l10;
si1=l12;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=0U;
l11=si0;
si0=l5;
si1=44U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+41U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
l3=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
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
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
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
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=60U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L14:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si0=f5972(i,si0,si1,si2);
l3=si0;
goto L10;
L11:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si2=l12;
si0=f13201(i,si0,si1,si2);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
sj0=l7;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L16;
}
si0=l9;
f15024(i,si0);
L16:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l11=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
f5522(i,si0);
L10:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l12;
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

void f10819(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=88U;
si1+=si2;
si2=l2;
f13960(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L7;
default:
goto L6;
}
L7:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=64U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=0U;
l9=si0;
goto L9;
L10:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=8U;
l11=si0;
si0=0U;
l9=si0;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l12;
l9=si0;
L11:;
si0=l11;
si1=l10;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l6=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l6;
sj0|=sj1;
l6=sj0;
si0=1U;
l9=si0;
L9:;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l3;
si2=8U;
si1+=si2;
f1135(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l7;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si0=f9908(i,si0,si1);
l11=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si1=f14167(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l0=si2;
si3=l0;
si4=8U;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
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
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10820(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l5;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si3=28U;
si2+=si3;
si3=l2;
f6047(i,si0,si1,si2,si3);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l2;
f13962(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L5;
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L4;
L5:;
si0=l6;
if(si0){
goto L7;
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
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L8:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L4;
L7:;
si0=l1;
si1=l6;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L9;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L9:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10821(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
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
goto L1;
}
si0=l0;
si1=1208U;
si0+=si1;
l5=si0;
si1=17426424U;
si2=9U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=17427522U;
si2=310U;
f8911(i,si0,si1,si2);
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
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l2;
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
goto L2;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L2:;
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l4=si1;
si2=l6;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
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
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l2;
si1=0U;
si2=l2;
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
goto L4;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L4:;
si0=l2;
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
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=40U;
si0+=si1;
si1=l4;
si2=l7;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l3;
f5522(i,si0);
L8:;
si0=l2;
si1=0U;
si2=l2;
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
goto L5;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L5:;
si0=l2;
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L10:;
si0=l1;
si1=32U;
si0+=si1;
si1=l4;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l3;
f5522(i,si0);
L11:;
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
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
goto L1;
}
si0=l5;
si1=17426264U;
si2=8U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+732U);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=17427458U;
si2=64U;
f8911(i,si0,si1,si2);
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
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l2;
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
goto L12;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l4=si1;
si2=l6;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l3;
f5522(i,si0);
L13:;
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l2;
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
l6=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l2;
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
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l1;
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L18;
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
goto L18;
}
si0=l3;
f5522(i,si0);
L18:;
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l2;
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L20:;
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
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
si0=l2;
si1=0U;
si2=l2;
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
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f5575(i,si0,si1,si2,si3);
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f10822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l5;
si0=(U32)(sj0);
l2=si0;
goto L4;
L7:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367019U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424783U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424776U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424768U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l0;
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
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L3;
L5:;
si0=l2;
si1=l6;
si2=l3;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
f5522(i,si0);
L4:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si3=60U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l2;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L8;
}
si0=l1;
f5522(i,si0);
L8:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L2:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
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
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l5;
si0=(U32)(sj0);
l6=si0;
goto L2;
L7:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367019U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
goto L3;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424783U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424776U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424768U);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l3;
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L1;
L5:;
si0=l2;
si1=l7;
si2=l3;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L4:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=l8;
si2=l2;
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
goto L8;
}
L9:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l5;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=56U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l0;
si1=l6;
si2=l7;
si3=l6;
si4=l7;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
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
goto L11;
}
si0=l1;
f5522(i,si0);
L11:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f10824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l5;
si0=(U32)(sj0);
l2=si0;
goto L4;
L7:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367019U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424783U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424776U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424768U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l0;
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
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L3;
L5:;
si0=l2;
si1=l6;
si2=l3;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
f5522(i,si0);
L4:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l2;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L8;
}
si0=l1;
f5522(i,si0);
L8:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L2:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l5;
si0=(U32)(sj0);
l6=si0;
goto L2;
L7:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367019U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=si0 != si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424783U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424776U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17424768U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
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
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
goto L1;
L5:;
si0=l2;
si1=l6;
si2=l3;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L4:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L9;
}
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L8;
L9:;
si0=l7;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l2=si0;
L8:;
si0=l0;
si1=l6;
si2=l2;
si3=l6;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
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
goto L10;
}
si0=l1;
f5522(i,si0);
L10:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f10826(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661208U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18661208U;
si1=l1;
f6661(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661212U);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si1=l4;
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
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0=f6088(i,si0,si1);
l3=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=l4;
si3=0U;
si1=f5931(i,si1,si2,si3);
si2=l1;
si0=f6084(i,si0,si1,si2);
l3=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f10827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si1=64U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si1=16U;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+64U);
l8=si2;
si3=l8;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
if(si0){
goto L9;
}
L10:;
si0=l6;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L9:;
si0=0U;
l2=si0;
si0=l5;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1+=si2;
l2=si1;
si2=0U;
si3=l5;
si4=72U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l3=si3;
si4=l2;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=2U;
si1<<=(si2&31);
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
goto L4;
}
L11:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+64U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
f1354(i,si0);
L12:;
si0=l2;
if(si0){
goto L6;
}
si0=1U;
l5=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=30U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=22U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436182U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436176U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436168U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=128849018910ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=2U;
l5=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l5=si0;
L5:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=1U;
si1=30U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=l6;
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
goto L3;
}
L4:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 > si1;
l6=si0;
if(si0){
goto L5;
}
si0=1U;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=5U;
si0+=si1;
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
l4=si1;
si2=1316U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1<<=(si2&31);
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
si0=si0 != si1;
if(si0){
goto L6;
}
f14795(i);
UNREACHABLE;
L7:;
si0=l5;
si1=l2;
si2=17374084U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L8:;
si0=l6;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
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
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L11:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L10:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L9:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si1=64U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si1=16U;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l7;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+64U);
l8=si2;
si3=l8;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
if(si0){
goto L9;
}
L10:;
si0=l6;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L9:;
si0=0U;
l2=si0;
si0=l5;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=l7;
si2=l3;
si1-=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1+=si2;
l2=si1;
si2=0U;
si3=l5;
si4=72U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l3=si3;
si4=l2;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
si2=2U;
si1<<=(si2&31);
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
goto L3;
}
L11:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+64U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
f1354(i,si0);
L12:;
si0=l2;
if(si0){
goto L6;
}
si0=1U;
l5=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=30U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=22U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436182U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436176U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436168U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17436160U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=128849018910ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l2;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=2U;
l5=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l5=si0;
L5:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=1U;
si1=30U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}


#include "w2c2_base.h"

#include "rustpython.h"

void f530(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=l3;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=12U;
si3*=si4;
si2+=si3;
f304(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
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
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f531(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
L0:;
return si0;
}

void f532(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
l4=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
si0=4U;
l6=si0;
si0=0U;
l8=si0;
goto L5;
L6:;
si0=l7;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=12U;
si0*=si1;
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si1=178956971U;
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
goto L1;
}
L5:;
si0=l6;
si1=l5;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l7;
sj0=(U64)(si0);
l10=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l10=sj0;
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=192U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f533(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
si0=4U;
l6=si0;
si0=0U;
l8=si0;
goto L5;
L6:;
si0=l7;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=12U;
si0*=si1;
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si1=178956971U;
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
goto L1;
}
L5:;
si0=l6;
si1=l5;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l7;
sj0=(U64)(si0);
l10=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l10=sj0;
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f534(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L1:;
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1093568U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f535(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L1;
L3:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
L1:;
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1093568U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f536(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L1:;
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1093568U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f537(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L1:;
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1093568U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f538(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
L1:;
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1093568U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f539(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
F64 l15=0;
F64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=l3;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
l5=si0;
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
L5:;
si0=l12;
si0=!(si0);
l5=si0;
si0=l12;
l3=si0;
L7:;
{
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
l12=si0;
goto L8;
L9:;
si0=0U;
l12=si0;
si0=l3;
si1=l11;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l12=si0;
goto L4;
L8:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
{
si0=l5;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L10;
}
si0=l5;
si1=312U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l14;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l10;
l3=si0;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
goto L4;
L10:;
si0=l14;
si1=l5;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=12U;
si1*=si2;
si0+=si1;
l11=si0;
si0=0U;
l5=si0;
goto L7;
}
L4:;
si0=l1;
si1=l2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l5;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
sd0=f15086(i,si0,si1,si2,si3);
l15=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l13;
si0=!(si0);
if(si0){
goto L13;
}
sd0=l16;
sd1=l15;
si0=sd0 < sd1;
if(si0){
goto L13;
}
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L3;
L13:;
si0=l5;
l17=si0;
si0=l3;
l13=si0;
sd0=l15;
l16=sd0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L3;
}
L2:;
si0=l5;
if(si0){
goto L15;
}
si0=0U;
l13=si0;
goto L1;
L15:;
si0=0U;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L16;
L17:;
L18:;
{
si0=l5;
si1=80U;
si0+=si1;
l3=si0;
si0=l5;
si1=72U;
si0+=si1;
l7=si0;
si0=l5;
si1=312U;
si0+=si1;
l5=si0;
si0=l1;
si1=l2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3);
l3=si3;
sd0=f15086(i,si0,si1,si2,si3);
l15=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l13;
si0=!(si0);
if(si0){
goto L20;
}
sd0=l16;
sd1=l15;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L19;
}
L20:;
si0=l3;
l17=si0;
si0=l7;
l13=si0;
sd0=l15;
l16=sd0;
L19:;
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L16:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f540(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
F64 l13=0;
F64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=192U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L6:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l10;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
{
si0=l4;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L8;
}
si0=l4;
si1=120U;
si0+=si1;
l4=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=64U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L3;
}
L12:;
{
si0=l4;
si1=156U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L11;
}
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L4;
}
L11:;
si0=l12;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
goto L7;
L8:;
si0=l4;
si1=120U;
si0+=si1;
l4=si0;
L7:;
si0=l1;
si1=l2;
si2=l3;
si3=l5;
si4=4U;
si3+=si4;
l12=si3;
si3=i32_load(&i->m0,(U64)si3);
sd0=f15086(i,si0,si1,si2,si3);
l13=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l11;
si0=!(si0);
sd1=l14;
sd2=l13;
si1=sd1 < sd2;
si0|=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sd0=l13;
l14=sd0;
goto L6;
}
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l11=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L3;
L13:;
L14:;
{
si0=l10;
l4=si0;
L16:;
{
si0=l4;
si1=156U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L15;
}
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=64U;
si0+=si1;
l12=si0;
goto L4;
L15:;
si0=l4;
si1=272U;
si0+=si1;
l10=si0;
si0=l1;
si1=l2;
si2=l5;
si3=l4;
si4=160U;
si3+=si4;
l12=si3;
si3=i32_load(&i->m0,(U64)si3);
sd0=f15086(i,si0,si1,si2,si3);
l14=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l11;
si0=!(si0);
if(si0){
goto L18;
}
sd0=l13;
sd1=l14;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sd0=l14;
l13=sd0;
L17:;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l8;
si1=l4;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L3;
L4:;
si0=l12;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=1093592U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=1093616U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=l8;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=l8;
si2=64U;
si1+=si2;
f63(i,si0,si1);
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
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=l7;
si2=312U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L21:;
{
si0=l6;
l2=si0;
si1=312U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+224U);
l4=si0;
si1=l2;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=272U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+212U);
l5=si0;
si1=l2;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=120U;
si1*=si2;
si0+=si1;
l11=si0;
si0=0U;
l3=si0;
L22:;
{
sd0=l13;
l14=sd0;
si0=l3;
l12=si0;
si0=l10;
l17=si0;
L24:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
L27:;
{
si0=l5;
si1=l11;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=120U;
si0+=si1;
l10=si0;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L27;
}
}
si0=l10;
si1=-112U;
si0+=si1;
l1=si0;
si0=l10;
l5=si0;
goto L25;
L26:;
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
L28:;
{
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l4;
si1=156U;
si0+=si1;
l5=si0;
si0=l4;
si1=272U;
si0+=si1;
l10=si0;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L28;
}
}
si0=l10;
si1=-112U;
si0+=si1;
l1=si0;
si0=0U;
l5=si0;
si0=l10;
l4=si0;
L25:;
si0=l7;
si1=l15;
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
sd0=f15086(i,si0,si1,si2,si3);
l13=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l12;
si0=!(si0);
sd1=l14;
sd2=l13;
si1=sd1 < sd2;
si0|=si1;
if(si0){
goto L22;
}
goto L24;
}
L23:;
}
si0=l12;
si0=!(si0);
if(si0){
goto L30;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l3=si0;
sj0=0ULL;
l18=sj0;
L32:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L31;
}
L33:;
sj0=l18;
sj1=4294967297ULL;
sj0+=sj1;
l18=sj0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L32;
}
goto L30;
}
L31:;
si0=l8;
si1=l17;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=4U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=1093680U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=1093616U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l8;
si1=l8;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=l8;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=176U;
si0+=si1;
si1=l8;
si2=96U;
si1+=si2;
f63(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+176U);
l4=si0;
if(si0){
goto L29;
}
L30:;
si0=l6;
si1=l16;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L20;
L29:;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+180U);
l19=sj0;
si0=l8;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
sj1=l19;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
sj1=l18;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=l8;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si2=l8;
si3=64U;
si2+=si3;
f438(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
if(si0){
goto L19;
}
L20:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L19:;
si0=l8;
si1=72U;
si0+=si1;
si1=l8;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+44U);
l19=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l19;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l8;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f541(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l20=0;
U32 l21=0;
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
si0=16U;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L5:;
{
si0=l0;
si1=l9;
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
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=l13;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l17=si3;
si4=l16;
si5=l17;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l18=si0;
si1=l16;
si2=l17;
si1-=si2;
si2=l18;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=2U;
l18=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l12;
si0+=si1;
l17=si0;
si0=2U;
l18=si0;
L10:;
{
si0=l17;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l15;
si2=l17;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l16;
si4=l12;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l15=si0;
si1=l12;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
l16=si0;
si0=l19;
l15=si0;
si0=l14;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L10;
}
L9:;
si0=2U;
l18=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l12;
si0+=si1;
l17=si0;
si0=2U;
l18=si0;
L12:;
{
si0=l17;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l15;
si2=l17;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l16;
si4=l12;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l15=si0;
si1=l12;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
l16=si0;
si0=l19;
l15=si0;
si0=l14;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l14;
l18=si0;
L11:;
si0=l18;
si1=l11;
si0+=si1;
l9=si0;
si1=l18;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l18;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l18;
si1=1U;
si0>>=(si1&31);
l12=si0;
si0=l6;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l13;
l17=si0;
L15:;
{
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l17;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l15;
si1=l16;
si2=8U;
si1+=si2;
l19=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=-12U;
si0+=si1;
l16=si0;
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L15;
}
goto L6;
}
L14:;
si0=l11;
si1=l9;
si2=1093932U;
f675(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
si1=l1;
si2=1093932U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l14;
l18=si0;
L7:;
si0=l18;
si1=l11;
si0+=si1;
l9=si0;
L6:;
si0=l9;
si1=l11;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l18;
si1=10U;
si0=si0 < si1;
if(si0){
goto L19;
}
L21:;
si0=l9;
si1=l11;
si0-=si1;
l16=si0;
goto L18;
L20:;
si0=1094120U;
si1=44U;
si2=1094164U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=10U;
si0+=si1;
l16=si0;
si1=l1;
si2=l16;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l13;
si1=l9;
si2=l11;
si1-=si2;
l16=si1;
si2=l18;
si3=1U;
si4=l18;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
f542(i,si0,si1,si2);
L18:;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=4U;
si0<<=(si1&31);
l17=si0;
if(si0){
goto L25;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l17=si0;
goto L24;
L25:;
si0=l17;
si0=f15269(i,si0);
l17=si0;
L24:;
si0=l17;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l8=si0;
si0=l17;
si1=l5;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l17=si0;
si0=l5;
f15271(i,si0);
si0=l17;
l5=si0;
L23:;
si0=l5;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l17;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
l10=si0;
si0=l21;
si1=2U;
si0=si0 < si1;
if(si0){
goto L16;
}
L26:;
{
si0=l5;
si1=l21;
l10=si1;
si2=-1U;
si1+=si2;
l21=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
l12=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l10;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=2U;
l10=si0;
goto L16;
L31:;
si0=l5;
si1=l10;
si2=-3U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l18;
si2=l16;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=3U;
l10=si0;
goto L16;
L32:;
si0=l12;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si2=l18;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L16;
}
goto L29;
L30:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l5;
si1=l10;
si2=-3U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L29:;
si0=l17;
si1=l16;
si0=si0 < si1;
if(si0){
goto L27;
}
L28:;
si0=l10;
si1=-2U;
si0+=si1;
l22=si0;
L27:;
si0=l10;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l10;
si1=l22;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l5;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l18=si0;
si1=l5;
si2=l22;
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
si0=l18;
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
l17=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=12U;
si1*=si2;
l12=si1;
si0+=si1;
l16=si0;
si0=l18;
si1=12U;
si0*=si1;
l15=si0;
si0=l18;
si1=l26;
si0-=si1;
l11=si0;
si1=l13;
si0-=si1;
l18=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l4;
si1=l16;
si2=l18;
si3=12U;
si2*=si3;
l12=si2;
si0=f15390(i,si0,si1,si2);
l19=si0;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
si0=l18;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
si0=l6;
si1=l15;
si0+=si1;
l18=si0;
L40:;
{
si0=l18;
si1=l12;
si2=-12U;
si3=0U;
si4=l12;
si5=-12U;
si4+=si5;
l15=si4;
si4=i32_load(&i->m0,(U64)si4);
si5=l16;
si6=-12U;
si5+=si6;
l11=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l15;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l15=si6;
si7=l11;
si8=8U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
l11=si7;
si8=l15;
si9=l11;
si8=si8 < si9;
si6=si8?si6:si7;
si4=f15389(i,si4,si5,si6);
l14=si4;
si5=l15;
si6=l11;
si5-=si6;
si6=l14;
si4=si6?si4:si5;
l15=si4;
si5=-1U;
si4=(U32)((I32)si4>(I32)si5);
l11=si4;
si2=si4?si2:si3;
si1+=si2;
l12=si1;
si2=l16;
si3=l15;
si4=31U;
si3=(U32)((I32)si3>>(si4&31));
si4=12U;
si3*=si4;
si2+=si3;
l16=si2;
si3=l11;
si1=si3?si1:si2;
l15=si1;
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
si0=l16;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l18;
si1=-12U;
si0+=si1;
l18=si0;
si0=l12;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L34;
}
goto L40;
}
L39:;
si0=l4;
si1=l17;
si2=l12;
si0=f15390(i,si0,si1,si2);
l18=si0;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L41;
}
si0=l18;
l18=si0;
goto L33;
L41:;
si0=l11;
si1=l13;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L42;
}
si0=l18;
l18=si0;
goto L33;
L42:;
si0=l0;
si1=l15;
si0+=si1;
l19=si0;
si0=l18;
l18=si0;
L43:;
{
si0=l17;
si1=l18;
si2=l16;
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
si4=l18;
si4=i32_load(&i->m0,(U64)si4);
si5=l16;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l15=si5;
si6=l18;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l11=si6;
si7=l15;
si8=l11;
si7=si7 < si8;
si5=si7?si5:si6;
si3=f15389(i,si3,si4,si5);
l14=si3;
si4=l15;
si5=l11;
si4-=si5;
si5=l14;
si3=si5?si3:si4;
l14=si3;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
l15=si3;
si1=si3?si1:si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l18;
si1=l15;
si2=12U;
si1*=si2;
si0+=si1;
l18=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l16;
si1=l14;
si2=31U;
si1>>=(si2&31);
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si1=l19;
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
si1=1093844U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1093852U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1093948U;
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
si1=1093844U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1093852U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1093964U;
f683(i,si0,si1);
UNREACHABLE;
L36:;
si0=l26;
si1=l18;
si2=1093980U;
f675(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l18;
si1=l1;
si2=1093980U;
f666(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l16;
l17=si0;
si0=l19;
l18=si0;
L33:;
si0=l17;
si1=l18;
si2=l12;
si3=l18;
si2-=si3;
si0=f15390(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l10;
si3=l22;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=1U;
l10=si0;
si0=l21;
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
goto L16;
}
L22:;
si0=1093996U;
si1=43U;
si2=1094072U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l11;
si1=l9;
si2=1094104U;
f675(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
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
si0=1093996U;
si1=43U;
si2=1094040U;
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
f542(i,si0,si1,si2);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1093996U;
si1=43U;
si2=1094056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f542(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si2=-12U;
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=8U;
si2+=si3;
l8=si2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l7;
si4=8U;
si3+=si4;
l10=si3;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l9;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l12=si0;
si1=l9;
si2=l11;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l5;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
si0=l3;
l5=si0;
L6:;
{
si0=l5;
si1=12U;
si0+=si1;
l7=si0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=l5;
si4=8U;
si3+=si4;
l10=si3;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l9;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l12=si0;
si1=l9;
si2=l11;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l7=si0;
L5:;
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
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
si0=1094196U;
si1=46U;
si2=1094244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f543(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U32 l16=0;
U64 l17=0;
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=32U;
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
si1=3U;
si0<<=(si1&31);
si1=2147483632U;
si0&=si1;
l4=si0;
if(si0){
goto L5;
}
si0=8U;
si1=0U;
si0=f15277(i,si0,si1);
l5=si0;
goto L4;
L5:;
si0=l4;
si0=f15269(i,si0);
l5=si0;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-16U;
si0+=si1;
l7=si0;
si0=l0;
si1=32U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=16U;
l12=si0;
L7:;
{
si0=l0;
si1=l10;
l13=si1;
si2=4U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l14=si0;
si0=l1;
si1=l13;
si0-=si1;
l4=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l14;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 < sj1;
if(si0){
goto L11;
}
si0=2U;
l16=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
si1=l2;
si0+=si1;
l2=si0;
si0=2U;
l16=si0;
L12:;
{
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
sj0=l17;
l15=sj0;
si0=l4;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L12;
}
L11:;
si0=2U;
l16=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l8;
si1=l2;
si0+=si1;
l2=si0;
si0=2U;
l16=si0;
L14:;
{
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
sj0=l17;
l15=sj0;
si0=l4;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l4;
l16=si0;
L13:;
si0=l16;
si1=l13;
si0+=si1;
l10=si0;
si1=l16;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l16;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l16;
si1=1U;
si0>>=(si1&31);
l18=si0;
si0=l7;
si1=l16;
si2=l13;
si1+=si2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l14;
l4=si0;
L17:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l19;
si1=l2;
si2=8U;
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
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
si0=l13;
si1=l10;
si2=1093932U;
f675(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l10;
si1=l1;
si2=1093932U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
l16=si0;
L9:;
si0=l16;
si1=l13;
si0+=si1;
l10=si0;
L8:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l16;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
L23:;
si0=l10;
si1=l13;
si0-=si1;
l2=si0;
goto L20;
L22:;
si0=1094120U;
si1=44U;
si2=1094164U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l13;
si1=10U;
si0+=si1;
l2=si0;
si1=l1;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l14;
si1=l10;
si2=l13;
si1-=si2;
l2=si1;
si2=l16;
si3=1U;
si4=l16;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
si3=l9;
f544(i,si0,si1,si2,si3);
L20:;
si0=l11;
si1=l12;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=4U;
si0<<=(si1&31);
l4=si0;
if(si0){
goto L27;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l4=si0;
goto L26;
L27:;
si0=l4;
si0=f15269(i,si0);
l4=si0;
L26:;
si0=l4;
si0=!(si0);
if(si0){
goto L24;
}
si0=l11;
si1=1U;
si0<<=(si1&31);
l12=si0;
si0=l4;
si1=l6;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l6;
f15271(i,si0);
si0=l4;
l6=si0;
L25:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0+=si1;
l22=si0;
l11=si0;
si0=l22;
si1=2U;
si0=si0 < si1;
if(si0){
goto L18;
}
L28:;
{
si0=l6;
si1=l22;
l11=si1;
si2=-1U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l18=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=2U;
l11=si0;
goto L18;
L33:;
si0=l6;
si1=l11;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l16;
si2=l2;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l11;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=3U;
l11=si0;
goto L18;
L34:;
si0=l18;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=l16;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L18;
}
goto L31;
L32:;
si0=l11;
si1=3U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l6;
si1=l11;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L31:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L29;
}
L30:;
si0=l11;
si1=-2U;
si0+=si1;
l14=si0;
L29:;
si0=l11;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l11;
si1=l14;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l6;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l16=si0;
si1=l6;
si2=l14;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l26=si1;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l16;
si1=l1;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l0;
si1=l26;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=4U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l2=si0;
si0=l16;
si1=4U;
si0<<=(si1&31);
l21=si0;
si0=l16;
si1=l26;
si0-=si1;
l20=si0;
si1=l13;
si0-=si1;
l19=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l5;
si1=l2;
si2=l19;
si3=4U;
si2<<=(si3&31);
l16=si2;
si0=f15390(i,si0,si1,si2);
l20=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L36;
}
si0=l19;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L36;
}
si0=l7;
si1=l21;
si0+=si1;
l18=si0;
L42:;
{
si0=l18;
si1=l2;
si2=-16U;
si3=0U;
si4=l16;
si5=-16U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
l15=sj4;
si5=l2;
si6=-16U;
si5+=si6;
sj5=i64_load(&i->m0,(U64)si5);
l17=sj5;
si4=sj4 < sj5;
l19=si4;
si2=si4?si2:si3;
si1+=si2;
l2=si1;
si2=l16;
si3=-16U;
si4=0U;
sj5=l15;
sj6=l17;
si5=sj5 >= sj6;
si3=si5?si3:si4;
si2+=si3;
l16=si2;
si3=l19;
si1=si3?si1:si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
si0=l16;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L36;
}
goto L42;
}
L41:;
si0=l5;
si1=l4;
si2=l18;
si0=f15390(i,si0,si1,si2);
l19=si0;
si1=l18;
si0+=si1;
l16=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L43;
}
si0=l19;
l18=si0;
goto L35;
L43:;
si0=l20;
si1=l13;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L44;
}
si0=l19;
l18=si0;
goto L35;
L44:;
si0=l0;
si1=l21;
si0+=si1;
l21=si0;
si0=l19;
l18=si0;
L45:;
{
si0=l4;
si1=l2;
si2=l18;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
si4=l18;
sj4=i64_load(&i->m0,(U64)si4);
l17=sj4;
si3=sj3 < sj4;
l20=si3;
si1=si3?si1:si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l18;
sj1=l15;
sj2=l17;
si1=sj1 >= sj2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l2;
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l21;
si0=si0 < si1;
if(si0){
goto L45;
}
goto L35;
}
L40:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1093844U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1093852U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1093948U;
f683(i,si0,si1);
UNREACHABLE;
L39:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1093844U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1093852U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1093964U;
f683(i,si0,si1);
UNREACHABLE;
L38:;
si0=l26;
si1=l16;
si2=1093980U;
f675(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l16;
si1=l1;
si2=1093980U;
f666(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l2;
l4=si0;
si0=l20;
l18=si0;
L35:;
si0=l4;
si1=l18;
si2=l16;
si3=l18;
si2-=si3;
si0=f15390(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l11;
si3=l14;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=1U;
l11=si0;
si0=l22;
si1=1U;
si0=si0 > si1;
if(si0){
goto L28;
}
goto L18;
}
L24:;
si0=1093996U;
si1=43U;
si2=1094072U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l13;
si1=l10;
si2=1094104U;
f675(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l10;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
}
si0=l6;
f15271(i,si0);
si0=l5;
f15271(i,si0);
goto L2;
L6:;
si0=1093996U;
si1=43U;
si2=1094040U;
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
si3=l2;
si3=i32_load(&i->m0,(U64)si3);
f544(i,si0,si1,si2,si3);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1093996U;
si1=43U;
si2=1094056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f544(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
si1=4U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l4=si0;
L3:;
{
si0=l2;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si1=l6;
si2=-16U;
si1+=si2;
l8=si1;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=l6;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l10=si0;
si0=l4;
l8=si0;
L6:;
{
sj0=l7;
si1=l8;
si2=-16U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
l8=si0;
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
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l5;
l2=si0;
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1094196U;
si1=46U;
si2=1094244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f545(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
si1=2147483646U;
si0&=si1;
l3=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=13U;
si0<<=(si1&31);
si1=l1;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
l6=si0;
si1=-1U;
si2=l1;
si3=-1U;
si2+=si3;
si2=I32_CLZ(si2);
si1>>=(si2&31);
l7=si1;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
l4=si0;
goto L1;
L3:;
si0=l6;
si1=13U;
si0<<=(si1&31);
si1=l6;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
l6=si0;
si1=l7;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si1=13U;
si0<<=(si1&31);
si1=l6;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
si1=l7;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l0=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l5;
si1=l1;
si2=1094088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
si2=1094088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f546(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=49U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
l4=si0;
si0=1U;
l5=si0;
L2:;
{
si0=l4;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l2;
si4=l7;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l3=si0;
si1=l7;
si2=l2;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l1;
si0=si0 == si1;
goto L0;
L3:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l7;
l2=si0;
si0=l6;
l3=si0;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l1;
si1=l1;
si0=si0 == si1;
goto L0;
L1:;
si0=1U;
l8=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l2;
si4=l4;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l7=si0;
si1=l4;
si2=l2;
si1-=si2;
si2=l7;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L8;
}
si0=1U;
l7=si0;
si0=1U;
l2=si0;
goto L7;
L8:;
si0=l0;
si1=20U;
si0+=si1;
l2=si0;
si0=2U;
l3=si0;
L9:;
{
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si0-=si1;
l9=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l7;
si3=l4;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
l4=si0;
si0=l10;
l6=si0;
si0=l5;
si1=l9;
si2=l5;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
}
si0=l3;
si1=-1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 < si1;
l7=si0;
L7:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=1U;
goto L0;
L5:;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si2=l4;
f547(i,si0,si1,si2);
si0=l0;
si1=l2;
f548(i,si0,si1);
L12:;
si0=0U;
l5=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l4;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l3=si0;
si1=l4;
si2=l7;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L14;
}
si0=1U;
l5=si0;
goto L13;
L14:;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l8=si0;
L15:;
{
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si0-=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l3;
si3=l4;
si4=l3;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
l4=si0;
si0=l10;
l6=si0;
si0=l5;
si1=l9;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
}
si0=l2;
si1=l1;
si0=si0 < si1;
l5=si0;
L13:;
si0=1U;
l8=si0;
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l0;
si1=l2;
si2=l4;
f547(i,si0,si1,si2);
si0=l0;
si1=l2;
f548(i,si0,si1);
L16:;
si0=0U;
l5=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l4;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l3=si0;
si1=l4;
si2=l7;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L18;
}
si0=1U;
l5=si0;
goto L17;
L18:;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
L21:;
{
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si0-=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l3;
si3=l4;
si4=l3;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
l4=si0;
si0=l10;
l6=si0;
si0=l5;
si1=l9;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
goto L21;
}
L20:;
si0=1U;
goto L0;
L19:;
si0=l2;
si1=l1;
si0=si0 < si1;
l5=si0;
L17:;
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l2;
si2=l4;
f547(i,si0,si1,si2);
si0=l0;
si1=l2;
f548(i,si0,si1);
L22:;
si0=0U;
l5=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l4;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l3=si0;
si1=l4;
si2=l7;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L24;
}
si0=1U;
l5=si0;
goto L23;
L24:;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
L27:;
{
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si0-=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l3;
si3=l4;
si4=l3;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
l4=si0;
si0=l10;
l6=si0;
si0=l5;
si1=l9;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
goto L27;
}
L26:;
si0=1U;
goto L0;
L25:;
si0=l2;
si1=l1;
si0=si0 < si1;
l5=si0;
L23:;
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l2;
si2=l4;
f547(i,si0,si1,si2);
si0=l0;
si1=l2;
f548(i,si0,si1);
L28:;
si0=0U;
l5=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l4;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l3=si0;
si1=l4;
si2=l7;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L30;
}
si0=1U;
l5=si0;
goto L29;
L30:;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
L33:;
{
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si0-=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l3;
si3=l4;
si4=l3;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
l4=si0;
si0=l10;
l6=si0;
si0=l5;
si1=l9;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L31;
}
goto L33;
}
L32:;
si0=1U;
goto L0;
L31:;
si0=l2;
si1=l1;
si0=si0 < si1;
l5=si0;
L29:;
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l7;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l8=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l2;
si2=l4;
f547(i,si0,si1,si2);
si0=l0;
si1=l2;
f548(i,si0,si1);
si0=0U;
goto L0;
L11:;
si0=l2;
si1=l1;
si2=1094180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l1;
si2=1094180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l8;
L0:;
return si0;
}

void f547(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=3U;
si0<<=(si1&31);
l3=si0;
L3:;
{
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=-8U;
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l9=si3;
si4=l8;
si5=l9;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l10=si0;
si1=l8;
si2=l9;
si1-=si2;
si2=l10;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l11=si0;
si0=l3;
l9=si0;
L6:;
{
si0=l0;
si1=l9;
si0+=si1;
l5=si0;
si1=-8U;
si0+=si1;
l7=si0;
si0=l6;
si1=l5;
si2=-16U;
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si3=l5;
si4=-12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si4=l8;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l10=si0;
si1=l8;
si2=l5;
si1-=si2;
si2=l10;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
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
l7=si0;
L5:;
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=8U;
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
si0=1094196U;
si1=46U;
si2=1094244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f548(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l0;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si4=l4;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l6=si0;
si1=l4;
si2=l5;
si1-=si2;
si2=l6;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l5;
si4=l0;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l6=si0;
si1=l0;
si2=l5;
si1-=si2;
si2=l6;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si1=-2U;
si0+=si1;
l6=si0;
L4:;
{
si0=l4;
si1=-8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0+=si1;
l0=si0;
si0=l4;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l5;
si4=l0;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l1=si0;
si1=l0;
si2=l5;
si1-=si2;
si2=l1;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
goto L4;
}
L3:;
si0=l4;
l2=si0;
L2:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f549(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=i->g0;
si1=256U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=21U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=1U;
l7=si0;
L5:;
{
si0=l1;
l8=si0;
si0=l0;
l9=si0;
si0=l6;
si1=l7;
si0&=si1;
l10=si0;
L8:;
{
si0=l4;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
f550(i,si0,si1);
goto L1;
L9:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si1=l1;
f545(i,si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
L10:;
si0=l1;
si1=2U;
si0>>=(si1&31);
l7=si0;
si1=3U;
si0*=si1;
l11=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l13=si0;
si0=l1;
si1=49U;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l0;
si2=l7;
si3=-1U;
si2+=si3;
l18=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l19=si1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l19;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l19=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l7;
l21=si0;
si0=l18;
l7=si0;
si0=l13;
l16=si0;
si0=l17;
l20=si0;
goto L12;
L13:;
si0=1U;
l15=si0;
si0=l18;
l21=si0;
L12:;
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l20;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l19=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l21;
l14=si0;
si0=l16;
l13=si0;
si0=l20;
l18=si0;
goto L14;
L15:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L14:;
si0=l18;
si1=l0;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l20=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l20;
si0=si2?si0:si1;
l17=si0;
si1=31U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
l15=si0;
si0=l12;
si1=1U;
si0|=si1;
l20=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l0;
si2=l12;
si3=-1U;
si2+=si3;
l19=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l21;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l21=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l21;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l12;
l23=si0;
si0=l19;
l12=si0;
si0=l13;
l16=si0;
si0=l22;
l18=si0;
goto L16;
L17:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l19;
l23=si0;
L16:;
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l18;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l21=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l21;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l23;
l20=si0;
si0=l16;
l13=si0;
si0=l18;
l19=si0;
goto L18;
L19:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L18:;
si0=l19;
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l18=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l18;
si0=si2?si0:si1;
l21=si0;
si1=31U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
l18=si0;
si0=l11;
si1=1U;
si0+=si1;
l15=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l0;
si2=l11;
si3=-1U;
si2+=si3;
l22=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l23=si1;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l23;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l23=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l23;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l11;
l25=si0;
si0=l22;
l11=si0;
si0=l13;
l16=si0;
si0=l24;
l19=si0;
goto L20;
L21:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l22;
l25=si0;
L20:;
si0=l17;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l22=si0;
si0=l21;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l21=si0;
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l19;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l23=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l23;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L23;
}
si0=l25;
l15=si0;
si0=l16;
l13=si0;
si0=l19;
l17=si0;
goto L22;
L23:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L22:;
si0=l7;
si1=l14;
si2=l22;
si0=si2?si0:si1;
l7=si0;
si0=l12;
si1=l20;
si2=l21;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=l15;
si2=l17;
si3=l0;
si4=l11;
si5=3U;
si4<<=(si5&31);
si3+=si4;
l16=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l13;
si5=l16;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l16=si5;
si6=l13;
si7=l16;
si6=si6 < si7;
si4=si6?si4:si5;
si2=f15389(i,si2,si3,si4);
l14=si2;
si3=l13;
si4=l16;
si3-=si4;
si4=l14;
si2=si4?si2:si3;
l16=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l11=si0;
si0=l16;
si1=31U;
si0>>=(si1&31);
si1=l18;
si0+=si1;
l13=si0;
L11:;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l0;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l15=si1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si3=l15;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l14;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l15=si0;
si1=l14;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l12;
l19=si0;
si0=l7;
l12=si0;
si0=l14;
l16=si0;
si0=l18;
l20=si0;
goto L24;
L25:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l7;
l19=si0;
L24:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l20;
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l16;
si4=l7;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l15=si0;
si1=l7;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l19;
l11=si0;
si0=l16;
l7=si0;
si0=l20;
l14=si0;
goto L26;
L27:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L26:;
si0=l14;
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l7;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l14=si0;
si1=l7;
si2=l16;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L29;
}
si0=l11;
l12=si0;
si0=l13;
si0=!(si0);
l7=si0;
goto L28;
L29:;
si0=l13;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l13;
si1=1U;
si0+=si1;
si0=!(si0);
l7=si0;
goto L28;
L30:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l11=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l0;
l16=si0;
L31:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L31;
}
}
si0=l1;
si1=l12;
si2=-1U;
si1^=si2;
si0+=si1;
l12=si0;
si0=1U;
l7=si0;
L28:;
si0=l10;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l0;
si1=l1;
si0=f546(i,si0,si1);
if(si0){
goto L1;
}
L32:;
si0=l3;
si0=!(si0);
if(si0){
goto L35;
}
si0=l12;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l16;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l13=si0;
si1=l16;
si2=l11;
si1-=si2;
si2=l13;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L33;
}
si0=l0;
l9=si0;
si0=l1;
l8=si0;
L35:;
si0=l12;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l9;
si1=l9;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=12U;
si0+=si1;
l16=si0;
si0=l8;
si1=-1U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l14=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=0U;
l23=si0;
L36:;
{
si0=l16;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l16;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l7;
si4=l11;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l12=si0;
si1=l11;
si2=l7;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L6;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l13;
si1=l23;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=l13;
l23=si0;
goto L6;
L34:;
si0=l12;
si1=l1;
si2=1094260U;
f663(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si0=l0;
si1=12U;
si0+=si1;
l19=si0;
si0=l0;
si1=8U;
si0+=si1;
l17=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=0U;
l12=si0;
si0=l1;
l13=si0;
L37:;
{
si0=l12;
si1=l13;
si2=-1U;
si1+=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l19;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L39:;
{
si0=l20;
si1=l16;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l7;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l14=si0;
si1=l7;
si2=l11;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L38;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l15;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
}
si0=l15;
l12=si0;
L38:;
si0=l18;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L41:;
{
si0=l12;
si1=l13;
si2=-1U;
si1+=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l16;
si1=4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l16;
si1=-8U;
si0+=si1;
l15=si0;
l16=si0;
si0=l20;
si1=l14;
si2=l7;
si3=l11;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l7;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l14=si0;
si1=l7;
si2=l11;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L41;
}
}
si0=l17;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l15;
si2=8U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L37;
L40:;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l12;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l1;
si1=l7;
si0-=si1;
l1=si0;
si1=21U;
si0=si0 >= si1;
if(si0){
goto L8;
}
goto L2;
L42:;
}
si0=l7;
si1=l1;
si2=1094276U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l12;
si1=l8;
si2=1094340U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l23;
si1=l13;
si2=l23;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l20=si0;
si0=l9;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l16=si0;
si0=l8;
l27=si0;
L44:;
{
si0=l27;
si1=-1U;
si0+=si1;
l27=si0;
si1=l23;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l20;
l27=si0;
goto L43;
L45:;
si0=l16;
si1=4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l12;
si1=l15;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l7;
si4=l11;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l12=si0;
si1=l11;
si2=l7;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L44;
}
}
L43:;
si0=l27;
si1=l23;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l27;
si1=l13;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l14;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si1=l27;
si2=l23;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=128U;
l6=si0;
si0=0U;
l12=si0;
si0=0U;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
l18=si0;
si0=128U;
l10=si0;
si0=l28;
l1=si0;
L46:;
{
si0=l20;
si1=l1;
si0-=si1;
l16=si0;
si1=2056U;
si0=si0 < si1;
l22=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l16;
si1=3U;
si0>>=(si1&31);
l16=si0;
si1=-128U;
si0+=si1;
si1=l16;
si2=l18;
si3=l11;
si2=si2 < si3;
l14=si2;
si3=l19;
si4=l12;
si3=si3 < si4;
si2|=si3;
l13=si2;
si0=si2?si0:si1;
l16=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L48;
}
si0=l10;
si1=l16;
si2=l14;
si0=si2?si0:si1;
l10=si0;
si0=l16;
si1=l6;
si2=l14;
si0=si2?si0:si1;
l6=si0;
goto L47;
L48:;
si0=l16;
si1=l16;
si2=1U;
si1>>=(si2&31);
l10=si1;
si0-=si1;
l6=si0;
L47:;
si0=l18;
si1=l11;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l10;
if(si0){
goto L50;
}
si0=l5;
l11=si0;
l18=si0;
goto L49;
L50:;
si0=0U;
l13=si0;
si0=l5;
l18=si0;
l11=si0;
si0=l1;
l16=si0;
L51:;
{
si0=l11;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l14=si3;
si4=l7;
si5=l14;
si6=l7;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15389(i,si1,si2,si3);
l0=si1;
si2=l14;
si3=l7;
si2-=si3;
si3=l0;
si1=si3?si1:si2;
si2=-1U;
si1^=si2;
si2=31U;
si1>>=(si2&31);
si0+=si1;
l11=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l10;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L49:;
si0=l19;
si1=l12;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l6;
if(si0){
goto L53;
}
si0=l5;
si1=128U;
si0+=si1;
l12=si0;
l19=si0;
goto L52;
L53:;
si0=l20;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l13=si0;
si0=l5;
si1=128U;
si0+=si1;
l19=si0;
l12=si0;
L54:;
{
si0=l12;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l14=si3;
si4=l7;
si5=l14;
si6=l7;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15389(i,si1,si2,si3);
l0=si1;
si2=l14;
si3=l7;
si2-=si3;
si3=l0;
si1=si3?si1:si2;
si2=31U;
si1>>=(si2&31);
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l6;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
}
L52:;
si0=l11;
si1=l18;
si0-=si1;
l16=si0;
si1=l12;
si2=l19;
si1-=si2;
l13=si1;
si2=l16;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=l18;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l14;
si1=l20;
si2=l19;
si2=i32_load8_u(&i->m0,(U64)si2);
l13=si2;
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l16;
si1=-1U;
si0+=si1;
l14=si0;
si1=1U;
si0&=si1;
l29=si0;
si0=l16;
si1=2U;
si0=si0 != si1;
if(si0){
goto L58;
}
goto L57;
L58:;
si0=l14;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l16=si0;
L59:;
{
si0=l20;
si1=l13;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si2=-2048U;
si1|=si2;
si0+=si1;
si1=l1;
si2=l18;
si3=l16;
si2+=si3;
l13=si2;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l20;
si2=l19;
si3=l16;
si2+=si3;
l0=si2;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l17=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l1;
si2=l13;
si3=2U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l20;
si2=l0;
si3=2U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l13=si2;
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=l19;
si1=l16;
si0+=si1;
l19=si0;
si0=l18;
si1=l16;
si0+=si1;
l18=si0;
L57:;
si0=l29;
si0=!(si0);
if(si0){
goto L56;
}
si0=l20;
si1=l13;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l18;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l20;
si2=l19;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L56:;
si0=l20;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l24;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L55:;
si0=l20;
si1=0U;
si2=l6;
si1-=si2;
si2=0U;
si3=l19;
si4=l12;
si3=si3 == si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l1;
si1=l10;
si2=0U;
si3=l18;
si4=l11;
si3=si3 == si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L46;
}
}
si0=l18;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l18;
si1=-1U;
si0^=si1;
l12=si0;
si0=l11;
si1=l18;
si0-=si1;
si1=1U;
si0&=si1;
if(si0){
goto L63;
}
si0=l11;
l13=si0;
si0=l20;
l16=si0;
goto L62;
L63:;
si0=l1;
si1=l11;
si2=-1U;
si1+=si2;
l13=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l14;
si1=l20;
si2=-8U;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
L62:;
si0=l12;
si1=0U;
si2=l11;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l16;
si1=-16U;
si0+=si1;
l16=si0;
si0=l13;
si1=-2U;
si0+=si1;
l11=si0;
L64:;
{
si0=l1;
si1=l11;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l16;
si2=8U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l11;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=-16U;
si0+=si1;
l16=si0;
si0=l18;
si1=l11;
si0=si0 < si1;
l12=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l12;
if(si0){
goto L64;
}
}
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
goto L60;
L61:;
si0=l19;
si1=l12;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l1;
l16=si0;
goto L60;
L65:;
si0=l19;
si1=-1U;
si0^=si1;
l11=si0;
si0=l12;
si1=l19;
si0-=si1;
si1=1U;
si0&=si1;
if(si0){
goto L67;
}
si0=l1;
l16=si0;
si0=l12;
l13=si0;
goto L66;
L67:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l1;
si1=l20;
si2=l12;
si3=-1U;
si2+=si3;
l13=si2;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l16=si0;
L66:;
si0=l11;
si1=0U;
si2=l12;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l13;
si1=-2U;
si0+=si1;
l11=si0;
L68:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l20;
si2=l11;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l20;
si2=l11;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l19;
si1=l11;
si0=si0 < si1;
l12=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l12;
if(si0){
goto L68;
}
}
L60:;
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l16;
si2=l28;
si1-=si2;
si2=3U;
si1>>=(si2&31);
si2=l23;
si1+=si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L69;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l9;
si1=l9;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l8;
si2=l1;
si1-=si2;
l16=si1;
si2=l1;
si3=l16;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=l8;
si1=3U;
si0>>=(si1&31);
l12=si0;
si0=l7;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=l16;
si2=-1U;
si1+=si2;
l16=si1;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l0;
si1=l16;
si2=l2;
si3=l7;
si4=l4;
f549(i,si0,si1,si2,si3,si4);
si0=l9;
l0=si0;
goto L70;
L71:;
si0=l9;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f549(i,si0,si1,si2,si3,si4);
si0=l7;
l3=si0;
si0=l16;
l1=si0;
L70:;
si0=l11;
si1=l12;
si0=si0 >= si1;
l6=si0;
si0=l27;
si1=l23;
si0=si0 <= si1;
l7=si0;
si0=l1;
si1=21U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
L69:;
}
si0=l1;
si1=l8;
si2=1094372U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l27;
si1=l13;
si2=1094356U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l23;
si1=l27;
si2=1094356U;
f675(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=1U;
f547(i,si0,si1,si2);
L1:;
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

void f550(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
L3:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
l5=si0;
L5:;
{
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
l4=si0;
goto L6;
L7:;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l6=si3;
si4=l3;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l7=si0;
si1=l3;
si2=l6;
si1-=si2;
si2=l7;
si0=si2?si0:si1;
si1=31U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l4=si0;
L6:;
si0=l5;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l3;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l8=si0;
si1=l6;
si2=l7;
si1-=si2;
si2=l8;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
l5=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
if(si0){
goto L3;
}
}
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l0;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
si0=1U;
l4=si0;
si0=0U;
l3=si0;
L13:;
{
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l4;
l4=si0;
goto L14;
L15:;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l8;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l8=si0;
si1=l6;
si2=l7;
si1-=si2;
si2=l8;
si0=si2?si0:si1;
si1=31U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l4=si0;
L14:;
si0=l3;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l6;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l8=si3;
si4=l7;
si5=l8;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15389(i,si0,si1,si2);
l2=si0;
si1=l7;
si2=l8;
si1-=si2;
si2=l2;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L16;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
l3=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l6=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
L16:;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l5;
si1=l1;
si2=1094292U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si1=l5;
si2=1094308U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l5;
si2=1094324U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
goto L0;
L2:;
si0=l4;
si1=l1;
si2=1094324U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l1;
si2=1094308U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f551(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f15389(i,si0,si1,si2);
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
si0=f15389(i,si0,si1,si2);
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

void f552(rustpythonInstance*i,U32 l0) {
L0:;
}

void f553(rustpythonInstance*i,U32 l0) {
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

U32 f554(rustpythonInstance*i,U32 l0,U32 l1) {
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
f573(i,si0,si1);
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
f580(i,si0,si1,si2);
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

U32 f555(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f580(i,si0,si1,si2);
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

void f556(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=75U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094583U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=47244640331ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f557(i,si0,si1,si2,si3);
si0=11U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=65U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=11U;
si2=l2;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L2:;
si0=l5;
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15271(i,si0);
L3:;
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

void f557(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=96U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l7;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=75U;
si0=f15269(i,si0);
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
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l11=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=-1U;
si0^=si1;
si1=26U;
si0>>=(si1&31);
si1=4U;
si0&=si1;
l5=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l5;
si1=l6;
si0=f15277(i,si0,si1);
l9=si0;
goto L12;
L13:;
si0=l6;
si0=f15269(i,si0);
l9=si0;
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=1U;
si0&=si1;
l12=si0;
si0=0U;
l5=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l10;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l6=si0;
si0=0U;
l5=si0;
L15:;
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
goto L15;
}
}
L14:;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l10;
si2=l3;
f576(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l11;
si3=l6;
si4=l3;
si3+=si4;
si4=0U;
si5=0U;
si6=l6;
si7=0U;
f559(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=0U;
l5=si0;
si0=0U;
l13=si0;
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l14=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=l14;
si1=l7;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+72U);
l5=si2;
si3=0U;
si4=l7;
si5=l5;
si6=l7;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l5=si2;
si1-=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l14;
si1=l9;
si0-=si1;
l6=si0;
si0=l7;
l13=si0;
goto L16;
L17:;
si0=l5;
si1=l14;
si0+=si1;
l13=si0;
L16:;
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
l9=si1;
si2=l6;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l9;
si2=l13;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
si2=l5;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=l4;
si3=80U;
si2+=si3;
f440(i,si0,si1,si2);
si0=l14;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
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
goto L19;
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
f15271(i,si0);
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
L19:;
si0=l14;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L18;
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
L22:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L23:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L22;
}
}
L18:;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
f15271(i,si0);
L24:;
si0=l1;
si1=172U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L25;
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
L25:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=76U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=0U;
l5=si0;
si0=75U;
l14=si0;
goto L26;
L27:;
si0=l4;
si1=0U;
si2=l6;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L26:;
si0=l8;
si1=l5;
si0+=si1;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l14;
si1=l6;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l4;
si1=l6;
si2=l5;
f580(i,si0,si1,si2);
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
si1=l7;
si2=l5;
si0=f15390(i,si0,si1,si2);
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
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0-=si1;
si1=12U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l4;
si1=l6;
si2=13U;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L30:;
si0=l8;
si1=l6;
si0+=si1;
l5=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094859U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094864U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l6;
si2=13U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l6;
if(si0){
goto L33;
}
si0=l8;
f15271(i,si0);
si0=1U;
l5=si0;
goto L32;
L33:;
si0=l8;
si1=l6;
si0=f15274(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L32:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L31:;
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
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
f15271(i,si0);
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15271(i,si0);
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
si0=l5;
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
f560(i,si0,si1,si2);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f558(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
f305(i,si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+48U);
l2=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f313(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
f568(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=75U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094583U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
sj1=47244640331ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l4;
si2=l3;
si3=l1;
f557(i,si0,si1,si2,si3);
si0=11U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=65U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=48U;
si0+=si1;
si1=11U;
si2=l3;
f580(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L5:;
si0=l2;
si1=l1;
si0+=si1;
si1=l4;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L7:;
si0=l5;
si1=96U;
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

void f559(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si1=256U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l7;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l9=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
si2=1U;
f576(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
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
l12=si0;
L4:;
{
si0=l12;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
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
si0=l13;
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
l14=si0;
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
si0=f15389(i,si0,si1,si2);
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
si0=l14;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L9:;
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
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l8;
si1=32U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
L13:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
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
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
L10:;
si0=l14;
si1=l12;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L5:;
si0=l13;
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
si0=l13;
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
l14=si0;
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
si0=f15389(i,si0,si1,si2);
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
si0=l14;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L18:;
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
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
si1=32U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
L22:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
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
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
L19:;
si0=l14;
si1=l12;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L14:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l14;
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
si1=l14;
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
l12=si0;
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
si0=f15389(i,si0,si1,si2);
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
si1=l14;
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
si0=l12;
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L29:;
{
si0=l12;
l7=si0;
si1=16U;
si0+=si1;
l12=si0;
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
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l8;
si1=32U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
L33:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
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
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
L30:;
si0=l12;
si1=l14;
si0=si0 != si1;
if(si0){
goto L29;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L23:;
si0=l6;
si1=8U;
si0+=si1;
l12=si0;
si0=l13;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l13;
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
l15=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=f15389(i,si0,si1,si2);
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
si0=l15;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L38:;
{
si0=l15;
l7=si0;
si1=8U;
si0+=si1;
l15=si0;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
si1=l6;
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l8;
si1=32U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
L42:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
L39:;
si0=l15;
si1=l14;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L34:;
si0=l12;
si1=l11;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0-=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l7;
si2=l9;
f576(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L2:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l7;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
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
si0=l13;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
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
si0=l12;
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
si0=f15389(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
l14=si0;
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si1=l15;
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+212U);
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l8;
si1=208U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+216U);
l9=si0;
L55:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
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
si1=i32_load(&i->m0,(U64)si1+216U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+216U,si1);
L51:;
si0=l14;
l15=si0;
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L50;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L46:;
si0=l12;
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
si0=l12;
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
si0=f15389(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
l14=si0;
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si1=l15;
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+212U);
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l8;
si1=208U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+216U);
l9=si0;
L65:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
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
si1=i32_load(&i->m0,(U64)si1+216U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+216U,si1);
L61:;
si0=l14;
l15=si0;
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L60;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L56:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l14;
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
si1=l14;
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
l13=si0;
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
si2=l13;
si0=f15389(i,si0,si1,si2);
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
si1=l14;
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
l12=si0;
L72:;
{
si0=l10;
si1=16U;
si0+=si1;
l14=si0;
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+212U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l8;
si1=208U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+216U);
l9=si0;
L77:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
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
si1=i32_load(&i->m0,(U64)si1+216U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+216U,si1);
L73:;
si0=l14;
l10=si0;
si0=l14;
si1=l12;
si0=si0 != si1;
if(si0){
goto L72;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L66:;
si0=l6;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l12;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=f15389(i,si0,si1,si2);
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
si0=l15;
si1=8U;
si0+=si1;
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
si1=l6;
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+212U);
si0=si0 != si1;
if(si0){
goto L88;
}
si0=l8;
si1=208U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+216U);
l9=si0;
L88:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
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
si1=i32_load(&i->m0,(U64)si1+216U);
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+216U,si1);
L83:;
si0=l14;
l15=si0;
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L78:;
si0=l13;
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
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0-=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L89;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l7;
si2=l5;
f576(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L89:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=0U;
l1=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l7;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+216U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L90;
}
si0=l8;
si1=32U;
si0+=si1;
si1=0U;
si2=l7;
f576(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L90:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+212U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
f15271(i,si0);
L91:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+40U);
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
si0=i32_load(&i->m0,(U64)si0+212U);
si0=!(si0);
if(si0){
goto L92;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
f15271(i,si0);
L92:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L93;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l7;
si2=l3;
f576(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L93:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l7;
si2=l3;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=l8;
si3=184U;
si2+=si3;
si3=0U;
si4=32U;
si5=l7;
si5=I32_CLZ(si5);
si4-=si5;
f549(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
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
si2=l14;
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
si0=f15389(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+24U,si1);
L94:;
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si1=i32_load(&i->m0,(U64)si1+248U);
l5=si1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l5;
si2=l7;
si3=256U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=48U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=l8;
si2=80U;
si1+=si2;
f315(i,si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L99;
}
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l8;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l8;
si1=l8;
si2=15U;
si1+=si2;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=128U;
si0+=si1;
si1=l8;
si2=208U;
si1+=si2;
f453(i,si0,si1);
goto L98;
L99:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l7;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=l8;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l8;
si1=l8;
si2=15U;
si1+=si2;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=128U;
si0+=si1;
si1=l8;
si2=208U;
si1+=si2;
f454(i,si0,si1);
L98:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+132U);
l5=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+136U);
si2=0U;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+128U);
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l8;
si1=l7;
si2=0U;
si1=si1 != si2;
l1=si1;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=144U;
si0+=si1;
si0=f451(i,si0);
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
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+240U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l8;
si1=1094388U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l8;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l7;
si1=l8;
si2=208U;
si1+=si2;
si0=f337(i,si0,si1);
if(si0){
goto L101;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+200U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+196U);
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+192U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
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
si0=i32_load(&i->m0,(U64)si0+64U);
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
si0=f15389(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+52U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l8;
si1=48U;
si0+=si1;
f628(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
L108:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+56U);
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
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L103;
L104:;
si0=l15;
si0=!(si0);
if(si0){
goto L103;
}
si0=l6;
f15271(i,si0);
L103:;
si0=l8;
si1=144U;
si0+=si1;
si0=f451(i,si0);
l7=si0;
if(si0){
goto L102;
}
goto L100;
}
L101:;
si0=1094412U;
si1=55U;
si2=l8;
si3=184U;
si2+=si3;
si3=1094468U;
si4=1094560U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L100:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L109;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L114:;
{
si0=l13;
l14=si0;
si1=8U;
si0+=si1;
l13=si0;
si0=l14;
si1=4U;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l12;
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
si0=f15389(i,si0,si1,si2);
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
si0=l12;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L124;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+248U);
l7=si0;
si0=l5;
si1=48U;
si0*=si1;
l5=si0;
L125:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L126;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=!(si0);
if(si0){
goto L127;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
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
si0=f15389(i,si0,si1,si2);
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
si0=f643(i,si0,si1,si2);
if(si0){
goto L118;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L130:;
si0=l12;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L116;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+212U);
l7=si0;
si0=l5;
si1=120U;
si0*=si1;
l5=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
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
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
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
si0=l13;
si1=l2;
si0=si0 != si1;
if(si0){
goto L114;
}
goto L109;
L117:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
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
si1=21U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l8;
si1=l8;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=1093384U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l8;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=144U;
si0+=si1;
si1=1094388U;
si2=l8;
si3=208U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L133;
}
goto L110;
L134:;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l8;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l8;
si1=66U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l8;
si1=l8;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=1093372U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l8;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=144U;
si0+=si1;
si1=1094388U;
si2=l8;
si3=208U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L110;
}
L133:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
if(si0){
goto L115;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L116:;
si0=l12;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+224U);
l7=si0;
si0=l5;
si1=272U;
si0*=si1;
l5=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
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
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
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
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+240U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l8;
si1=1094388U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l7;
si1=l8;
si2=208U;
si1+=si2;
si0=f474(i,si0,si1);
if(si0){
goto L112;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=!(si0);
if(si0){
goto L111;
}
L115:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+148U);
l17=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+52U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L138;
}
si0=l8;
si1=48U;
si0+=si1;
f628(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
L138:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+56U);
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
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l13;
si1=l2;
si0=si0 != si1;
if(si0){
goto L114;
}
goto L109;
}
L113:;
si0=1093392U;
si1=43U;
si2=1093548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=1094412U;
si1=55U;
si2=l8;
si3=184U;
si2+=si3;
si3=1094468U;
si4=1094560U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L111:;
si0=1094609U;
si1=99U;
si2=1094952U;
f703(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=1094412U;
si1=55U;
si2=l8;
si3=184U;
si2+=si3;
si3=1094468U;
si4=1094560U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L109:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L141:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+248U);
l14=si0;
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
si0=l14;
l7=si0;
L145:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=f15389(i,si0,si1,si2);
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
si1=144U;
si0+=si1;
si1=l12;
si2=l15;
si3=l1;
f270(i,si0,si1,si2,si3);
si0=l8;
si1=208U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+144U);
l1=si1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+152U);
l5=si2;
si3=1094931U;
si4=1U;
f467(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+216U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+212U);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+208U);
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
f15271(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L150;
}
si0=l1;
f15271(i,si0);
L150:;
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=1094936U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l8;
si1=66U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l8;
si1=l8;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l8;
si1=l8;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=144U;
si0+=si1;
si1=l8;
si2=208U;
si1+=si2;
f63(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+144U);
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+148U);
l16=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+192U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+200U);
l15=si0;
si0=!(si0);
if(si0){
goto L153;
}
si0=l15;
si1=12U;
si0*=si1;
l5=si0;
si0=l14;
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
si0=f15389(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+196U);
si0=si0 != si1;
if(si0){
goto L156;
}
si0=l8;
si1=192U;
si0+=si1;
si1=l15;
f567(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+192U);
l14=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+200U);
l15=si0;
L156:;
si0=l14;
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
si1=i32_load(&i->m0,(U64)si1+200U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
goto L151;
L152:;
si0=l16;
si0=!(si0);
if(si0){
goto L151;
}
si0=l6;
f15271(i,si0);
L151:;
si0=l12;
si0=!(si0);
if(si0){
goto L157;
}
si0=l10;
f15271(i,si0);
L157:;
si0=l9;
si1=l13;
si0=si0 != si1;
if(si0){
goto L141;
}
goto L140;
L143:;
si0=l9;
si1=l13;
si0=si0 != si1;
if(si0){
goto L142;
}
}
}
L140:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+192U);
l9=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+200U);
l5=si1;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+196U);
l14=si0;
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
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+52U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L162;
}
si0=l8;
si1=48U;
si0+=si1;
f628(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
L162:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+56U);
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
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
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
f15271(i,si0);
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
si0=l14;
si0=!(si0);
if(si0){
goto L139;
}
si0=l9;
f15271(i,si0);
L139:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=128U;
si0+=si1;
f470(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L165;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+64U);
f15271(i,si0);
L165:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L166;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L166:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L167;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L167:;
si0=l8;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

void f560(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=75U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=75ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
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
si1=8U;
si0+=si1;
si1=0U;
si2=l8;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L4:;
si0=l4;
si1=l7;
si0+=si1;
si1=l6;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L8:;
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L10;
}
si0=4U;
l6=si0;
goto L9;
L10:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l10=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=-1U;
si0^=si1;
si1=26U;
si0>>=(si1&31);
si1=4U;
si0&=si1;
l7=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l7;
si1=l4;
si0=f15277(i,si0,si1);
l6=si0;
goto L11;
L12:;
si0=l4;
si0=f15269(i,si0);
l6=si0;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=1U;
si0&=si1;
l11=si0;
si0=0U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l9;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l4=si0;
si0=0U;
l7=si0;
L14:;
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
goto L14;
}
}
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L9;
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
L9:;
si0=0U;
l11=si0;
si0=l6;
si1=l9;
si2=l3;
si3=144U;
si2+=si3;
si3=0U;
si4=32U;
si5=l9;
si5=I32_CLZ(si5);
si4-=si5;
f549(i,si0,si1,si2,si3,si4);
si0=l9;
l7=si0;
si0=l9;
si1=2U;
si0=si0 < si1;
if(si0){
goto L15;
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
L16:;
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
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L17:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l3;
si1=144U;
si0+=si1;
si1=l1;
si2=l6;
si3=l7;
si4=0U;
si5=0U;
si6=l4;
si7=0U;
f559(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=0U;
l4=si0;
si0=0U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+156U);
l13=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
l8=si0;
si0=l13;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+148U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+152U);
l7=si2;
si3=0U;
si4=l4;
si5=l7;
si6=l4;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l11=si2;
si1-=si2;
l7=si1;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l13;
si1=l7;
si0-=si1;
l8=si0;
goto L19;
L20:;
si0=l11;
si1=l13;
si0+=si1;
l4=si0;
L19:;
si0=l3;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+144U);
l7=si1;
si2=l8;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l7;
si2=l4;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l7;
si2=l11;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
si2=l3;
si3=56U;
si2+=si3;
f440(i,si0,si1,si2);
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
f15271(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+156U);
l13=si0;
L21:;
si0=l13;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
goto L22;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+152U);
l7=si1;
si2=0U;
si3=l6;
si4=l7;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l7=si1;
si2=l13;
si1+=si2;
si2=l13;
si3=l6;
si4=l7;
si3-=si4;
l10=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l8;
si1=l7;
si0-=si1;
l8=si0;
si0=l4;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
L25:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l13;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=0U;
si1=l13;
si2=l10;
si1-=si2;
l7=si1;
si2=l7;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
L27:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L28:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L27;
}
}
L22:;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L7:;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l10=si0;
si1=l4;
si2=120U;
si1*=si2;
si0+=si1;
l11=si0;
L30:;
{
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l10;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L34;
case 1:
goto L32;
case 2:
goto L32;
case 3:
goto L33;
default:
goto L32;
}
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L31;
}
goto L32;
L33:;
si0=l4;
si1=1094924U;
si2=7U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L31;
}
L32:;
si0=l3;
si1=144U;
si0+=si1;
si1=l1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l10;
si4=36U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f268(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l9=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+152U);
l4=si0;
si0=!(si0);
if(si0){
goto L36;
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
L37:;
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
L39:;
{
si0=l6;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L38;
}
si0=0U;
l8=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l13;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l8=si0;
L40:;
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
goto L39;
}
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
}
si0=l14;
si0=!(si0);
if(si0){
goto L31;
}
si0=l9;
f15271(i,si0);
goto L31;
L38:;
si0=l12;
si1=l15;
si0=si0 != si1;
if(si0){
goto L37;
}
}
L36:;
si0=l14;
si0=!(si0);
if(si0){
goto L35;
}
si0=l9;
f15271(i,si0);
L35:;
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=32U;
si0&=si1;
if(si0){
goto L42;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
sj1=6724797014372408096ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L41;
L42:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=10U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094587U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1094595U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=10U;
si0+=si1;
l4=si0;
L41:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L29;
L31:;
si0=l10;
si1=120U;
si0+=si1;
l10=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
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
L46:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=17U;
si0&=si1;
si0=!(si0);
if(si0){
goto L45;
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
goto L46;
}
goto L1;
}
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=10U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1094587U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1094595U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L6:;
si0=l7;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=75U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L48:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
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
L50:;
{
si0=l6;
si1=l13;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=0U;
l12=si0;
goto L49;
L51:;
si0=l6;
si1=l13;
si0=si0 < si1;
l12=si0;
si0=l8;
l4=si0;
L53:;
{
si0=l7;
l8=si0;
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L54;
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
goto L52;
}
L54:;
si0=l8;
l4=si0;
si0=l13;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L53;
}
}
si0=0U;
l12=si0;
goto L49;
L52:;
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
goto L50;
}
}
L49:;
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
L56:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L55;
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
goto L56;
}
}
si0=0U;
l8=si0;
L57:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l10;
l4=si0;
L59:;
{
si0=l7;
l10=si0;
si0=l4;
si1=l7;
si0=si0 == si1;
if(si0){
goto L60;
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
goto L58;
}
L60:;
si0=l10;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
goto L55;
}
L58:;
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
goto L57;
}
}
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L61;
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
L62:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L63;
}
L64:;
si0=l4;
si1=-63U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L55;
}
L63:;
si0=l4;
si1=312U;
si0+=si1;
l4=si0;
si0=l7;
si1=-312U;
si0+=si1;
l7=si0;
if(si0){
goto L62;
}
}
L61:;
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
goto L55;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l9;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l9;
si2=5U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
L65:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l9;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094597U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1094601U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l9;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L55:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L66;
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
L67:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l7;
l4=si0;
L69:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L70;
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
goto L68;
}
L70:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L69;
}
goto L66;
}
L68:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=16385U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l4;
si1=16U;
si0&=si1;
if(si0){
goto L67;
}
}
si0=0U;
l14=si0;
si0=0U;
l16=si0;
L77:;
{
si0=l14;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l14;
l7=si0;
si0=l10;
l4=si0;
L82:;
{
si0=l6;
l10=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L83;
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
goto L80;
}
L83:;
si0=l10;
l4=si0;
si0=l13;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L81:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=1073741824ULL;
sj0&=sj1;
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L84;
}
si0=l16;
si1=2U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L73;
}
L84:;
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l2;
if(si0){
goto L79;
}
L85:;
sj0=l18;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L86;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l2;
if(si0){
goto L75;
}
L86:;
si0=l2;
si0=!(si0);
if(si0){
goto L76;
}
si0=0U;
l13=si0;
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=0U;
l6=si0;
goto L72;
L80:;
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
goto L77;
}
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+152U);
si3=l4;
si4=156U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f268(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l19=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l8=si0;
si0=!(si0);
if(si0){
goto L88;
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
L89:;
{
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
si0=l15;
l8=si0;
si0=l22;
l4=si0;
L90:;
{
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L91;
}
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L91;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L78;
}
L91:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
if(si0){
goto L90;
}
}
si0=l17;
l9=si0;
si0=l17;
si1=l21;
si0=si0 != si1;
if(si0){
goto L89;
}
}
L88:;
si0=l20;
si0=!(si0);
if(si0){
goto L87;
}
si0=l19;
f15271(i,si0);
L87:;
si0=l7;
si1=1U;
si0+=si1;
l14=si0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
goto L77;
L79:;
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
L92:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l7;
l4=si0;
L95:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L96;
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
goto L93;
}
L96:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L95;
}
}
L94:;
si0=1094609U;
si1=99U;
si2=1094888U;
f703(i,si0,si1,si2);
UNREACHABLE;
L93:;
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
goto L92;
}
}
si0=l3;
si1=96U;
si0+=si1;
si1=l4;
f336(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=164U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1094908U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=3U;
si2=0U;
si3=l4;
si4=48U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=!(si3);
si4=l7;
si5=2U;
si4=si4 < si5;
si3|=si4;
si4=l4;
si5=188U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=2U;
si4&=si5;
si5=1U;
si4>>=(si5&31);
si3&=si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=1086931U;
si2=1086468U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L97;
}
si0=l4;
f15271(i,si0);
L97:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
goto L74;
L78:;
si0=l20;
si0=!(si0);
if(si0){
goto L77;
}
si0=l19;
f15271(i,si0);
goto L77;
}
L76:;
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
goto L100;
}
si0=0U;
l6=si0;
si0=l9;
l4=si0;
L101:;
{
si0=l8;
l7=si0;
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L103;
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
goto L102;
}
L103:;
si0=l7;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L101;
}
goto L100;
L102:;
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
goto L99;
}
si0=l10;
l6=si0;
si0=l7;
l4=si0;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L101;
}
}
L100:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L98;
L99:;
si0=l10;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L98;
}
L104:;
{
si0=l8;
l4=si0;
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L106;
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
goto L105;
}
L106:;
si0=l4;
l7=si0;
si0=l13;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L104;
}
goto L98;
L105:;
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
goto L104;
}
}
L98:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
f314(i,si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l10=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+64U);
l7=si2;
si3=1094576U;
si4=0U;
f467(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L107;
}
si0=l10;
l4=si0;
L108:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L109:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L108;
}
}
L107:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l10;
f15271(i,si0);
goto L74;
L75:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l7;
si2=l4;
si3=248U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
f318(i,si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=1094576U;
si4=0U;
f467(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si0=l3;
si1=56U;
si0+=si1;
f301(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l4;
f15271(i,si0);
L74:;
si0=l8;
si0=!(si0);
if(si0){
goto L73;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L72;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
goto L72;
L73:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=7U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L110:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094602U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094605U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L71;
L72:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L71;
}
si0=l8;
f15271(i,si0);
L71:;
si0=l12;
si1=l2;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L66;
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
L111:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L113;
}
si0=l7;
l4=si0;
L114:;
{
si0=l6;
l7=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L115;
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
goto L112;
}
L115:;
si0=l7;
l4=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L114;
}
}
L113:;
si0=1094609U;
si1=99U;
si2=1094812U;
f703(i,si0,si1,si2);
UNREACHABLE;
L112:;
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
goto L111;
}
}
si0=l12;
si1=1U;
si0&=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=0U;
l8=si0;
L118:;
{
si0=l8;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L120;
}
si0=l10;
l7=si0;
L121:;
{
si0=l6;
l10=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L122;
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
goto L119;
}
L122:;
si0=l10;
l7=si0;
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L121;
}
}
L120:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si0-=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=7U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L123:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094834U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094837U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=7U;
si0+=si1;
l7=si0;
goto L116;
L119:;
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
goto L118;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L124;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=5U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L124:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094841U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1094845U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=5U;
si0+=si1;
l7=si0;
goto L116;
L117:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si0-=si1;
si1=5U;
si0=si0 > si1;
if(si0){
goto L125;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=6U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L125:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
l8=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094828U);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1094832U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=6U;
si0+=si1;
l7=si0;
L116:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=144U;
si0+=si1;
si1=l4;
f336(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+148U);
l10=si1;
si2=l8;
si0=si2?si0:si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si0-=si1;
si1=l3;
si2=152U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L126;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l6;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L126:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
si1=l13;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l6;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L127;
}
si0=l10;
si0=!(si0);
if(si0){
goto L127;
}
si0=l8;
f15271(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L127:;
si0=l7;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L128;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
f573(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L128:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
si1=62U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1086931U;
si1=1086468U;
si2=l4;
si3=48U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=!(si2);
si3=l4;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=2U;
si3=si3 < si4;
si2|=si3;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+188U);
si4=2U;
si3&=si4;
si4=1U;
si3>>=(si4&31);
si2&=si3;
l4=si2;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l7;
si0-=si1;
si1=3U;
si2=0U;
si3=l4;
si1=si3?si1:si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L129;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l4;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L129:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
si1=l8;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l7;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
if(si0){
goto L66;
}
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L130;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
f573(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L130:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
si1=93U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L66:;
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L133;
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
L135:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L137;
}
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=1886152040U;
si0=si0 == si1;
if(si0){
goto L136;
}
L137:;
si0=l4;
si1=-63U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L134;
}
L136:;
si0=l4;
si1=312U;
si0+=si1;
l4=si0;
si0=l7;
si1=-312U;
si0+=si1;
l7=si0;
if(si0){
goto L135;
}
goto L133;
}
L134:;
si0=l2;
si0=!(si0);
if(si0){
goto L133;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l18=sj0;
goto L132;
L133:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l18=sj0;
sj1=32768ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
goto L131;
L132:;
sj0=l18;
sj1=2147483649ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L139;
}
si0=1094846U;
si1=1094859U;
sj2=l18;
sj3=130ULL;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l7=si0;
goto L138;
L139:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L140;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=5U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L140:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l7=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1094872U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1094876U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=19U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L141;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si0-=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L142;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L142:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1094859U;
l7=si0;
goto L138;
L141:;
si0=l3;
si1=144U;
si0+=si1;
si1=l1;
si2=0U;
f560(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+152U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L143;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L143:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
si1=l8;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L144;
}
si0=l8;
f15271(i,si0);
L144:;
si0=1094859U;
l7=si0;
L138:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si0-=si1;
si1=12U;
si0=si0 > si1;
if(si0){
goto L145;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=13U;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L145:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
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
i32_store(&i->m0,(U64)si0+16U,si1);
L131:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si0=si0 <= si1;
if(si0){
goto L147;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
if(si0){
goto L149;
}
si0=l7;
f15271(i,si0);
si0=1U;
l7=si0;
goto L148;
L149:;
si0=l7;
si1=l4;
si0=f15274(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L146;
}
L148:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
L147:;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L150;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L150:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L146:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f561(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l2;
if(si0){
goto L10;
}
si0=l1;
l3=si0;
goto L6;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
L11:;
si0=l1;
si1=l2;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L12;
}
L13:;
si0=l1;
si1=l2;
si0=f15277(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l5;
f15271(i,si0);
goto L5;
L12:;
si0=l5;
si1=l2;
si0=f15274(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l2;
if(si0){
goto L14;
}
si0=l1;
l3=si0;
goto L6;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
L15:;
si0=l1;
si1=l2;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f562(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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
}

void f563(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=24U;
si0*=si1;
l4=si0;
si0=l1;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=24U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f564(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=304U;
si0*=si1;
l4=si0;
si0=l1;
si1=7064091U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=304U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f565(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=312U;
si0*=si1;
l4=si0;
si0=l1;
si1=6882961U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=312U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f566(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f567(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=12U;
si0*=si1;
l4=si0;
si0=l1;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f568(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f569(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=120U;
si0*=si1;
l4=si0;
si0=l1;
si1=17895698U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=120U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f570(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f571(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=48U;
si0*=si1;
l4=si0;
si0=l1;
si1=44739243U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=48U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f572(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=272U;
si0*=si1;
l4=si0;
si0=l1;
si1=7895161U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=272U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f573(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=8U;
si2=l1;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=-1U;
si0^=si1;
si1=31U;
si0>>=(si1&31);
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l4;
si2=l1;
si3=l2;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f574(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=12U;
si0*=si1;
l4=si0;
si0=l2;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f575(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f576(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f577(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f578(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=248U;
si0*=si1;
l4=si0;
si0=l2;
si1=8659209U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=248U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f579(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=134217728U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f580(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l4;
si2=l2;
si3=l3;
si4=16U;
si3+=si4;
f561(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f581(rustpythonInstance*i,U32 l0) {
L0:;
}

void f582(rustpythonInstance*i,U32 l0) {
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

void f583(rustpythonInstance*i,U32 l0) {
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

void f584(rustpythonInstance*i,U32 l0) {
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

void f585(rustpythonInstance*i,U32 l0,U32 l1) {
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
f15271(i,si0);
L3:;
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

U32 f586(rustpythonInstance*i,U32 l0,U32 l1) {
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
f573(i,si0,si1);
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
f580(i,si0,si1,si2);
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

U32 f587(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f580(i,si0,si1,si2);
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

U32 f588(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f589(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
si1=f15017(i);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si1=f15019(i,si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=1095160U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=241U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
si2=l1;
si3=16U;
si2+=si3;
f652(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
f585(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f584(i,si0);
si0=0U;
f15040(i,si0);
UNREACHABLE;
L1:;
si0=l1;
si1=2972508U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=12U;
si1+=si2;
si1=f15023(i,si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=1095160U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=241U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
si2=l1;
si3=16U;
si2+=si3;
f651(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
f585(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f583(i,si0);
si0=1U;
f15040(i,si0);
UNREACHABLE;
L0:;
}

void f590(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l9;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
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
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=l7;
si1=72U;
si0+=si1;
si1=l5;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+56U);
f756(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=80U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
f15271(i,si0);
goto L9;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
f15271(i,si0);
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L9:;
si0=l6;
si1=2U;
si2=l6;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l7;
si1=1095284U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=0U;
l5=si0;
goto L13;
L14:;
si0=l7;
si1=1095284U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=3U;
l5=si0;
L13:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l7;
si1=6U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=l7;
si2=72U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=1U;
l1=si0;
goto L15;
L16:;
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=3U;
l1=si0;
L15:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=44U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1095330U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1095322U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1095314U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1095306U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1095298U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1095290U);
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
goto L17;
L18:;
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
si0=1U;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L19:;
si0=l3;
sj1=l10;
si1=(U32)(sj1);
si2=l5;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l7;
si1=16U;
si0+=si1;
si1=1U;
f567(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
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
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=1095336U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=241U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l7;
si1=l7;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l7;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=l7;
si2=72U;
si1+=si2;
f63(i,si0,si1);
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
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L20;
L22:;
si0=l7;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L20;
L21:;
si0=l7;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l7;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l7;
si1=3U;
i32_store(&i->m0,(U64)si0+144U,si1);
L20:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+160U);
f15271(i,si0);
L17:;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
case 2:
goto L25;
default:
goto L27;
}
L27:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1095352U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L24;
L26:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1095352U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L24;
L25:;
si0=l7;
si1=168U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1095352U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=3U;
i32_store(&i->m0,(U64)si0+160U,si1);
L24:;
si0=l7;
si1=108U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=100U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=92U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=178U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=5U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=1095244U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l7;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=l7;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=l7;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l7;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+144U);
switch(si0){
case 0:
goto L31;
case 1:
goto L30;
case 2:
goto L29;
default:
goto L32;
}
L32:;
si0=l7;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L28;
L31:;
si0=l7;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L28;
L30:;
si0=l7;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L28;
L29:;
si0=l7;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L28:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+148U);
f15271(i,si0);
L33:;
si0=l6;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
f15271(i,si0);
L34:;
si0=l7;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
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
si0=1094992U;
si1=55U;
si2=l7;
si3=144U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
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

void f591(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
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
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l6;
si1=104U;
si0+=si1;
si1=l4;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+40U);
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=112U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l5;
si1=2U;
si2=l5;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=0U;
l5=si0;
goto L5;
L6:;
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=3U;
l5=si0;
L5:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l1;
si1=l6;
si2=104U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L10;
}
si0=l6;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=2U;
l5=si0;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=84U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+92U,si1);
goto L11;
L12:;
si0=l6;
si1=84U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=3U;
l5=si0;
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+92U,si1);
L11:;
si0=l6;
si1=132U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=124U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=178U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=1095400U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l6;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=l6;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=l6;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L17;
}
L17:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L16:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L15:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L14:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L13:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
f15271(i,si0);
L18:;
si0=l6;
si1=32U;
si0+=si1;
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
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L20;
}
si0=1U;
l1=si0;
goto L19;
L20:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
L19:;
si0=l1;
si1=l2;
si2=l5;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
si0=1094992U;
si1=55U;
si2=l6;
si3=72U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f592(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
si1=256U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=112U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+112U);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l9;
si1=136U;
si0+=si1;
si1=l7;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+120U);
f756(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=144U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
goto L1;
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l8;
si1=255U;
si0&=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
sd0=f15086(i,si0,si1,si2,si3);
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L5;
L6:;
si0=l9;
si1=148U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l9;
si1=1093728U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=178U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
si1=l9;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=l9;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l9;
si1=224U;
si0+=si1;
si1=l9;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si1=40U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=224U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+224U);
i64_store(&i->m0,(U64)si0+24U,sj1);
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
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
i32_store(&i->m0,(U64)si0+112U,si1);
goto L14;
L15:;
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+112U,si1);
L14:;
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=166U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l9;
si1=1095544U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l9;
si1=l9;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l9;
si1=l9;
si2=224U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=64U;
si0+=si1;
si1=l9;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l9;
si1=48U;
si0+=si1;
si1=l1;
f567(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L17:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l9;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L13;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
L11:;
si0=l2;
si1=l1;
si2=l9;
si3=224U;
si2+=si3;
f541(i,si0,si1,si2);
si0=l9;
si1=80U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=1095432U;
si4=2U;
f467(i,si0,si1,si2,si3,si4);
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
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095284U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l9;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L18;
L20:;
si0=l9;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095284U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l9;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L18;
L19:;
si0=l9;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095284U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l9;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+208U,si1);
L18:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l9;
si1=160U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=3U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l9;
si1=32U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=l9;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l9;
si2=136U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L26;
}
si0=l9;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l9;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+240U,sj1);
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
si1=236U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095352U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+240U,si1);
goto L27;
L29:;
si0=l9;
si1=236U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095352U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l9;
si1=2U;
i32_store(&i->m0,(U64)si0+240U,si1);
goto L27;
L28:;
si0=l9;
si1=236U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+240U);
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1095352U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l9;
si1=3U;
i32_store(&i->m0,(U64)si0+240U,si1);
L27:;
si0=l9;
si1=188U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=180U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=172U;
si0+=si1;
si1=241U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=164U;
si0+=si1;
si1=241U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=156U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=178U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l9;
si1=7U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l9;
si1=1095488U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l9;
si1=l9;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l9;
si1=l9;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l9;
si1=l9;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l9;
si1=l9;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l9;
si1=l9;
si2=224U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l9;
si1=l9;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l9;
si1=l9;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l9;
si1=l9;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l9;
si1=96U;
si0+=si1;
si1=l9;
si2=112U;
si1+=si2;
f63(i,si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+224U);
switch(si0){
case 0:
goto L34;
case 1:
goto L33;
case 2:
goto L32;
default:
goto L35;
}
L35:;
si0=l9;
si1=224U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
goto L31;
L34:;
si0=l9;
si1=224U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
goto L31;
L33:;
si0=l9;
si1=224U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
goto L31;
L32:;
si0=l9;
si1=224U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
L31:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+228U);
f15271(i,si0);
L36:;
si0=l9;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l9;
si1=8U;
si0+=si1;
si1=l4;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=1U;
l16=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=1U;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
L37:;
si0=l7;
si1=l14;
si2=l2;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L22;
}
L38:;
si0=l16;
si1=l13;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
L39:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
L41:;
{
si0=l1;
si1=4U;
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
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L43:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
L44:;
si0=l11;
si0=!(si0);
if(si0){
goto L45;
}
si0=l12;
si0=!(si0);
if(si0){
goto L45;
}
si0=l11;
f15271(i,si0);
L45:;
si0=l9;
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L26:;
si0=1094992U;
si1=55U;
si2=l9;
si3=224U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
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

void f593(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
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
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=l8;
si1=56U;
si0+=si1;
si1=l1;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+40U);
f756(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L4;
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
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L1;
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l7;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=2U;
l1=si0;
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095748U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+196U,si1);
goto L5;
L6:;
si0=l8;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=3U;
l1=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095748U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+196U,si1);
L5:;
si0=l8;
si1=116U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=100U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=68U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=76U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
si1=6U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=8U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=1095684U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l8;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=l8;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
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
f63(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
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
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+24U,si1);
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
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f594(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
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
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
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
f756(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L1;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l3;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095864U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=2U;
l1=si0;
goto L5;
L6:;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=3U;
l1=si0;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095864U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
L5:;
si0=l4;
si1=92U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=68U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=76U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=6U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1095824U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
f63(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
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
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+24U,si1);
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
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f595(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l6;
si1=64U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+48U);
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l5;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=2U;
l2=si0;
goto L5;
L6:;
si0=l6;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=3U;
l2=si0;
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+116U,si1);
L5:;
si0=l6;
si1=92U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=84U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=178U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=1095924U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f596(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+40U);
f756(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l3;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=96U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=2U;
l2=si0;
goto L5;
L6:;
si0=l4;
si1=96U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=3U;
l2=si0;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+116U,si1);
L5:;
si0=l4;
si1=84U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=76U;
si0+=si1;
si1=68U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=6U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1096008U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
f63(i,si0,si1);
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
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=11U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f597(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+40U);
f756(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l3;
si1=253U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=88U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=2U;
l2=si0;
goto L5;
L6:;
si0=l4;
si1=88U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1095284U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=3U;
l2=si0;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=1095352U;
i32_store(&i->m0,(U64)si0+100U,si1);
L5:;
si0=l4;
si1=76U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=6U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1096096U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
f63(i,si0,si1);
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
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=14U;
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

void f598(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
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
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
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
f756(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L4;
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
goto L3;
}
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l7;
si1=2U;
si2=l7;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l6=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=1U;
l7=si0;
goto L5;
L6:;
si0=l8;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=3U;
l7=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+116U,si1);
L5:;
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=80U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=32U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l8;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l8;
si2=56U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L11;
}
si0=l8;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l8;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=2U;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l8;
si1=140U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
goto L12;
L13:;
si0=l8;
si1=140U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=3U;
l7=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
L12:;
si0=l8;
si1=92U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=76U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=6U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=5U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=1096196U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=112U;
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
f63(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+128U);
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L18;
}
L18:;
si0=l8;
si1=128U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L14;
L17:;
si0=l8;
si1=128U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L14;
L16:;
si0=l8;
si1=128U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L14;
L15:;
si0=l8;
si1=128U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
L14:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+132U);
f15271(i,si0);
L19:;
si0=l8;
si1=32U;
si0+=si1;
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
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=1U;
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
L20:;
si0=l3;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l6;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=32U;
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
L11:;
si0=1094992U;
si1=55U;
si2=l8;
si3=128U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f599(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=224U;
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
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
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
f756(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l7;
si1=2U;
si2=l7;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l7=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=0U;
l6=si0;
goto L5;
L6:;
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=3U;
l6=si0;
L5:;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l8;
si1=6U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=88U;
si0+=si1;
l6=si0;
si1=1094968U;
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
si0=l1;
si1=l8;
si2=64U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L12;
}
si0=l8;
si1=148U;
si0+=si1;
si1=l8;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l8;
si1=3U;
si2=1U;
si3=l7;
si4=255U;
si3&=si4;
l9=si3;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=1094968U;
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
sj0=l3;
si1=1U;
si2=l8;
si3=64U;
si2+=si3;
si0=f787(i,sj0,si1,si2);
if(si0){
goto L11;
}
si0=l8;
si1=184U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l9;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L16;
}
L16:;
si0=l8;
si1=180U;
si0+=si1;
si1=l8;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+168U,si1);
goto L13;
L15:;
si0=l8;
si1=180U;
si0+=si1;
si1=l8;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+168U,si1);
goto L13;
L14:;
si0=l8;
si1=180U;
si0+=si1;
si1=l8;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+168U,si1);
L13:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=1094968U;
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
si0=l4;
sj0=(U64)(si0);
si1=1U;
si2=l8;
si3=64U;
si2+=si3;
si0=f787(i,sj0,si1,si2);
if(si0){
goto L10;
}
si0=l8;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l8;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l7;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L18;
default:
goto L20;
}
L20:;
si0=l8;
si1=196U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=1096346U;
si2=1096344U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L17;
L19:;
si0=l8;
si1=196U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=1096346U;
si2=1096344U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L17;
L18:;
si0=l8;
si1=196U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l8;
si1=3U;
si2=2U;
si3=l4;
si4=1U;
si3=si3 > si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l8;
si1=1096346U;
si2=1096344U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+208U,si1);
L17:;
si0=l8;
si1=116U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=108U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=100U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=7U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=1096288U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l8;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=l8;
si2=200U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l8;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=120U;
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
f63(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+184U);
switch(si0){
case 0:
goto L24;
case 1:
goto L23;
case 2:
goto L22;
default:
goto L25;
}
L25:;
si0=l8;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L21;
L24:;
si0=l8;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L21;
L23:;
si0=l8;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L21;
L22:;
si0=l8;
si1=184U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
L21:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+188U);
f15271(i,si0);
L26:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+168U);
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
default:
goto L31;
}
L31:;
si0=l8;
si1=168U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L27;
L30:;
si0=l8;
si1=168U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L27;
L29:;
si0=l8;
si1=168U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L27;
L28:;
si0=l8;
si1=168U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
L27:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+172U);
f15271(i,si0);
L32:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+136U);
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
default:
goto L37;
}
L37:;
si0=l8;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L33;
L36:;
si0=l8;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L33;
L35:;
si0=l8;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
goto L33;
L34:;
si0=l8;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
L33:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+140U);
f15271(i,si0);
L38:;
si0=l8;
si1=40U;
si0+=si1;
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
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L40;
}
si0=1U;
l1=si0;
goto L39;
L40:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
L39:;
si0=l1;
si1=l2;
si2=l7;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L12:;
si0=1094992U;
si1=55U;
si2=l8;
si3=24U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1094992U;
si1=55U;
si2=l8;
si3=24U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1094992U;
si1=55U;
si2=l8;
si3=24U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
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

void f600(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si1=104U;
si0+=si1;
si1=l6;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+32U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=112U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l4;
si1=2U;
si2=l4;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l6=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si1=1095284U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l4=si0;
goto L5;
L6:;
si0=l5;
si1=1095284U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=3U;
l4=si0;
L5:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=6U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l5;
si1=128U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=32U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l1;
si1=l5;
si2=104U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L7;
}
si0=l5;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=3U;
si2=1U;
si3=l6;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=179U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1096400U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=104U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L10;
default:
goto L13;
}
L14:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
goto L8;
L13:;
si0=l5;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
goto L9;
L12:;
si0=l5;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
goto L9;
L11:;
si0=l5;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
goto L9;
L10:;
si0=l5;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
L9:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
f15271(i,si0);
L15:;
si0=l5;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+88U,sj1);
L8:;
si0=l5;
si1=124U;
si0+=si1;
si1=241U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=241U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=178U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1096368U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l5;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
f15271(i,si0);
L16:;
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=1094992U;
si1=55U;
si2=l5;
si3=24U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f601(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=48U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l10;
si1=72U;
si0+=si1;
si1=l6;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+56U);
f756(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=80U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l9;
si1=2U;
si2=l9;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l9=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l10;
si1=1095284U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=0U;
l6=si0;
goto L5;
L6:;
si0=l10;
si1=1095284U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=3U;
l6=si0;
L5:;
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l10;
si1=6U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l10;
si1=96U;
si0+=si1;
l6=si0;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l10;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l1;
si1=l10;
si2=72U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L12;
}
si0=l10;
si1=156U;
si0+=si1;
si1=l10;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l10;
si1=3U;
si2=1U;
si3=l9;
si4=255U;
si3&=si4;
l8=si3;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l10;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
sj0=l3;
si1=1U;
si2=l10;
si3=72U;
si2+=si3;
si0=f787(i,sj0,si1,si2);
if(si0){
goto L11;
}
si0=l10;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l8;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L16;
}
L16:;
si0=l10;
si1=188U;
si0+=si1;
si1=l10;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
goto L13;
L15:;
si0=l10;
si1=188U;
si0+=si1;
si1=l10;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
goto L13;
L14:;
si0=l10;
si1=188U;
si0+=si1;
si1=l10;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+192U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+176U,si1);
L13:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l10;
si1=96U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=3U;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l10;
si1=32U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l10;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
sj0=(U64)(si0);
si1=1U;
si2=l10;
si3=72U;
si2+=si3;
si0=f787(i,sj0,si1,si2);
if(si0){
goto L10;
}
si0=l10;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l10;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L18;
default:
goto L20;
}
L20:;
si0=l10;
si1=204U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l10;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L17;
L19:;
si0=l10;
si1=204U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l10;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
goto L17;
L18:;
si0=l10;
si1=204U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+208U);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1095352U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l10;
si1=3U;
i32_store(&i->m0,(U64)si0+208U,si1);
L17:;
si0=l10;
si1=124U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=116U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=108U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=100U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=92U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=178U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l10;
si1=7U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l10;
si1=1096440U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=l10;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l10;
si1=l10;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l10;
si1=l10;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l10;
si1=l10;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l10;
si1=l10;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l10;
si1=l10;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l10;
si1=l10;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l10;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=32U;
si0+=si1;
si1=l10;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+192U);
switch(si0){
case 0:
goto L24;
case 1:
goto L23;
case 2:
goto L22;
default:
goto L25;
}
L25:;
si0=l10;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L21;
L24:;
si0=l10;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L21;
L23:;
si0=l10;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L21;
L22:;
si0=l10;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L21:;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+196U);
f15271(i,si0);
L26:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+176U);
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
default:
goto L31;
}
L31:;
si0=l10;
si1=176U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L27;
L30:;
si0=l10;
si1=176U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L27;
L29:;
si0=l10;
si1=176U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L27;
L28:;
si0=l10;
si1=176U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L27:;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+180U);
f15271(i,si0);
L32:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+144U);
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
default:
goto L37;
}
L37:;
si0=l10;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L33;
L36:;
si0=l10;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L33;
L35:;
si0=l10;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
goto L33;
L34:;
si0=l10;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
L33:;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+148U);
f15271(i,si0);
L38:;
si0=l10;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
if(si0){
goto L40;
}
si0=1U;
l1=si0;
goto L39;
L40:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
L39:;
si0=l1;
si1=l2;
si2=l9;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L12:;
si0=1094992U;
si1=55U;
si2=l10;
si3=32U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1094992U;
si1=55U;
si2=l10;
si3=32U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1094992U;
si1=55U;
si2=l10;
si3=32U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f602(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
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
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l6;
si1=104U;
si0+=si1;
si1=l4;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+40U);
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=112U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l5;
si1=2U;
si2=l5;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=0U;
l5=si0;
goto L5;
L6:;
si0=l6;
si1=1095284U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=3U;
l5=si0;
L5:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=1094968U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=32U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l1;
si1=l6;
si2=104U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L10;
}
si0=l6;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=2U;
l5=si0;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=84U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+92U,si1);
goto L11;
L12:;
si0=l6;
si1=84U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=3U;
l5=si0;
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=1095352U;
i32_store(&i->m0,(U64)si0+92U,si1);
L11:;
si0=l6;
si1=132U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=124U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=179U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=178U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=1096564U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l6;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=l6;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=l6;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L17;
}
L17:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L16:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L15:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
goto L13;
L14:;
si0=l6;
si1=72U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
L13:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
f15271(i,si0);
L18:;
si0=l6;
si1=32U;
si0+=si1;
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
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L20;
}
si0=1U;
l1=si0;
goto L19;
L20:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
L19:;
si0=l1;
si1=l2;
si2=l5;
si0=f15390(i,si0,si1,si2);
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
si1=16U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=13U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
si0=1094992U;
si1=55U;
si2=l6;
si3=72U;
si2+=si3;
si3=1095048U;
si4=1095140U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f603(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l3;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l8;
si1=32U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
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
f756(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15271(i,si0);
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L7:;
si0=l7;
si1=2U;
si2=l7;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l6=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=1U;
l7=si0;
goto L11;
L12:;
si0=l8;
si1=104U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1095284U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=3U;
l7=si0;
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+116U,si1);
L11:;
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=1U;
si0=f15269(i,si0);
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
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+128U,si1);
goto L13;
L14:;
si0=l8;
si1=68U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=1095160U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=66U;
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
si1=128U;
si0+=si1;
si1=l8;
si2=56U;
si1+=si2;
f63(i,si0,si1);
L13:;
si0=2U;
l4=si0;
si0=l6;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
goto L15;
L16:;
si0=l8;
si1=1095352U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=3U;
l4=si0;
L15:;
si0=l8;
si1=92U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=84U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=76U;
si0+=si1;
si1=241U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=6U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=178U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=5U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=1096668U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l8;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=112U;
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
f63(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
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
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
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
si1=160U;
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

void f604(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
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
goto L3;
}
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
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
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l4=si0;
L2:;
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=1020U;
si0&=si1;
l4=si0;
si1=1992608U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=1992444U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+72U);
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=48U;
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15271(i,si0);
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
f15271(i,si0);
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L7:;
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
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1096708U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=178U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1095284U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
L12:;
si0=l0;
f15271(i,si0);
L11:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f605(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
goto L3;
L4:;
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l0=si0;
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
L3:;
si0=0U;
sj1=l3;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=l4;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=2972608U;
goto L0;
L1:;
si0=l1;
si1=l0;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=1992240U;
si1=18U;
si2=l1;
si3=30U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f606(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
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
l3=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=1U;
l3=si0;
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
l3=si0;
goto L1;
L2:;
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
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l0;
si2=l3;
f580(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l0;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f607(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l1=si0;
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f320(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
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
goto L9;
}
si0=l4;
f15271(i,si0);
L9:;
si0=l3;
f15271(i,si0);
L7:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f608(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f15026(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l3;
f15271(i,si0);
L6:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f609(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f14917(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l3;
f15271(i,si0);
L6:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f610(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096724U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f611(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096748U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f612(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096772U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f613(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096796U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f614(rustpythonInstance*i,U32 l0) {
L0:;
}

void f615(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f329(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L2:;
si0=l1;
f615(i,si0);
si0=l1;
f15271(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15271(i,si0);
L3:;
L0:;
}

U32 f616(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l1=si0;
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f320(i,si0,si1,si2,si3);
si0=0U;
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L9;
}
si0=l4;
f15271(i,si0);
L9:;
si0=l0;
f15271(i,si0);
L7:;
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f617(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f609(i,si0,si1);
L0:;
return si0;
}

U32 f618(rustpythonInstance*i,U32 l0,U32 l1) {
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
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
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
goto L2;
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
l0=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=1U;
l0=si0;
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
l0=si0;
goto L1;
L2:;
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
l0=si0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si2=l0;
f580(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l0;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l3;
si2=l0;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f619(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f608(i,si0,si1);
L0:;
return si0;
}

U32 f620(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096724U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f621(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096796U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f622(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096748U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f623(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1096772U;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f624(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+8U);
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
f580(i,si0,si1,si2);
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

U32 f625(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f15026(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
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
goto L4;
}
si0=l6;
f15271(i,si0);
L4:;
si0=l4;
f15271(i,si0);
L2:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f626(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l5;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f320(i,si0,si1,si2,si3);
si0=0U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L5;
}
si0=l5;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L3:;
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l2=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f627(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f14917(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
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
goto L4;
}
si0=l6;
f15271(i,si0);
L4:;
si0=l4;
f15271(i,si0);
L2:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

void f628(rustpythonInstance*i,U32 l0) {
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
f567(i,si0,si1);
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
si0=f15391(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
L1:;
L0:;
}

void f629(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
goto L4;
L5:;
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
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l2;
si2=l1;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
}


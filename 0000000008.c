#include "w2c2_base.h"

#include "rustpython.h"

void f830(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L0:;
}

U32 f831(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1168540U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1168524U;
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

U32 f832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1;
U64 sj0,sj1;
si0=0U;
l3=si0;
si0=l1;
sj0=(U64)(si0);
si1=l2;
sj1=(U64)(si1);
sj0*=sj1;
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L1;
}
sj0=l4;
si0=(U32)(sj0);
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=4U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=2147483645U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
if(si0){
goto L3;
}
si0=4U;
si1=0U;
si0=f15030(i,si0,si1);
l3=si0;
goto L2;
L3:;
si0=l2;
si0=f15022(i,si0);
l3=si0;
L2:;
si0=l3;
if(si0){
goto L4;
}
si0=0U;
goto L0;
L4:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

void f833(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=-4U;
si0+=si1;
f15024(i,si0);
L0:;
}

void f834(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=255U;
si1&=si2;
si0=f15007(i,si0,si1);
l5=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l4;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=5U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L7;
case 5:
goto L5;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L7;
}
L7:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=1168692U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=49U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l7;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l7;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=1168700U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L9;
}
goto L8;
L9:;
si0=l7;
si1=16U;
si0+=si1;
si1=l9;
si2=l9;
si2=f15152(i,si2);
f686(i,si0,si1,si2);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L8:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f835(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=255U;
si1&=si2;
si0=f14996(i,si0,si1);
l5=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l4;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=5U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
case 2:
goto L6;
case 3:
goto L2;
case 4:
goto L6;
case 5:
goto L5;
case 6:
goto L3;
default:
goto L6;
}
L6:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=1168692U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=49U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l7;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l7;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=1168732U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L4:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L8;
}
si0=0U;
l9=si0;
goto L7;
L8:;
si0=l7;
si1=16U;
si0+=si1;
si1=l9;
si2=l9;
si2=f15152(i,si2);
f686(i,si0,si1,si2);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l9=si0;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f836(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=320U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=321U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si2=l1;
si3=8U;
si4=l3;
si5=255U;
si4&=si5;
l3=si4;
si5=0U;
si6=l3;
si5-=si6;
si6=l2;
si4=si6?si4:si5;
si5=8U;
si6=0U;
si7=1169504U;
si8=56U;
si1=f14990(i,si1,si2,si3,si4,si5,si6,si7,si8);
l3=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1168748U;
si1=35U;
si2=1168880U;
f848(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l4;
si2=4U;
si1+=si2;
si2=1168548U;
si3=l4;
si4=8U;
si3+=si4;
si4=1168716U;
f855(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f837(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=320U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=321U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=l1;
si3=8U;
si4=l2;
si5=16U;
si4+=si5;
si5=255U;
si4&=si5;
si5=8U;
si6=0U;
si7=1169504U;
si8=56U;
si1=f14990(i,si1,si2,si3,si4,si5,si6,si7,si8);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1168748U;
si1=35U;
si2=1168896U;
f848(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=4U;
si1+=si2;
si2=1168548U;
si3=l3;
si4=8U;
si3+=si4;
si4=1168716U;
f855(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f838(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si2=l3;
si0=f14994(i,si0,si1,si2);
l3=si0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L4;
}
L5:;
si0=1168928U;
si1=60U;
si2=1168988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1168692U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=49U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1168912U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L6;
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l3;
si2=f15152(i,si2);
f686(i,si0,si1,si2);
si0=0U;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l3=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f839(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=320U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=321U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=l2;
si3=255U;
si2&=si3;
l2=si2;
si3=0U;
si4=l2;
si3-=si4;
si4=l1;
si2=si4?si2:si3;
si3=1169504U;
si4=56U;
si1=f15006(i,si1,si2,si3,si4);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1168748U;
si1=35U;
si2=1169004U;
f848(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=4U;
si1+=si2;
si2=1168548U;
si3=l3;
si4=8U;
si3+=si4;
si4=1168652U;
f855(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f840(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=320U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=321U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
si2=l1;
si3=16U;
si2+=si3;
si3=255U;
si2&=si3;
si3=1169504U;
si4=56U;
si1=f15006(i,si1,si2,si3,si4);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1168748U;
si1=35U;
si2=1169020U;
f848(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l2;
si2=4U;
si1+=si2;
si2=1168548U;
si3=l2;
si4=8U;
si3+=si4;
si4=1168652U;
f855(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f841(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1169372U;
si2=8U;
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
si1=1169327U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1169380U;
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

U32 f842(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1169444U;
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
si1=1169424U;
si2=3U;
si3=l2;
si4=4U;
si3+=si4;
si4=1169428U;
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

void f843(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f844(i,si0);
UNREACHABLE;
L0:;
}

void f844(rustpythonInstance*i,U32 l0) {
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
si1=1169460U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f845(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f846(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1169480U;
si2=4U;
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
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1169484U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=1169488U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L3:;
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
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
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
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f847(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f848(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
si0+=si1;
f843(i,si0);
UNREACHABLE;
L0:;
}

U32 f849(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1169544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=339U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=27U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1169589U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f850(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f851(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f852(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1169544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=339U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=29U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1169560U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f853(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
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

void f854(rustpythonInstance*i,U32 l0) {
L0:;
}

void f855(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1169512U;
si3=l5;
si4=12U;
si3+=si4;
si4=1169512U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f856(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1169616U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f857(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
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
si1=1169616U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f858(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f859(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f860(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f861(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f862(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1169632U;
si3=5U;
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
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1169637U;
si2=8U;
si3=l2;
si4=20U;
si3+=si4;
si4=1169648U;
si0=f644(i,si0,si1,si2,si3,si4);
goto L1;
L2:;
si0=l1;
si1=-2147483648U;
si0^=si1;
l0=si0;
si1=15U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=31227U;
si1=l1;
si2=65535U;
si1&=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1170352U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=1170412U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1169692U;
si2=13U;
si3=l2;
si4=28U;
si3+=si4;
si4=1169708U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=12U;
si0+=si1;
si1=1169664U;
si2=11U;
si3=l2;
si4=20U;
si3+=si4;
si4=1169676U;
si0=f644(i,si0,si1,si2,si3,si4);
goto L1;
L3:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1169724U;
si2=12U;
si3=l2;
si4=20U;
si3+=si4;
si4=1169708U;
si0=f644(i,si0,si1,si2,si3,si4);
L1:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
if(si0){
goto L5;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L4;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
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
goto L4;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L4:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f863(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1169748U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=49U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si1=-2147483648U;
si0^=si1;
l3=si0;
si1=15U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=31227U;
si1=l0;
si2=65535U;
si1&=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1170412U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1170352U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
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
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1169772U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f864(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f865(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f866(rustpythonInstance*i,U32 l0,U32 l1) {
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
l3=si0;
si1=-1114111U;
si0+=si1;
si1=0U;
si2=l3;
si3=2097150U;
si2&=si3;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L4;
}
L4:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1170764U;
si2=19U;
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
si0=1U;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=1170783U;
si2=1U;
si3=l0;
si4=1170784U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=1170800U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1170808U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L5;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L5:;
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
goto L6;
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
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1170824U;
si2=9U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1170833U;
si2=19U;
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

void f867(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l2;
if(si0){
goto L1;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L2;
case 2:
goto L4;
default:
goto L2;
}
L4:;
si0=1U;
l6=si0;
L3:;
si0=l5;
l1=si0;
si0=l4;
l2=si0;
L2:;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=30768U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=22576U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l1;
si1=2U;
si0+=si1;
l5=si0;
si0=l2;
si1=-2U;
si0+=si1;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
sj0=0ULL;
l7=sj0;
si0=0U;
l8=si0;
L16:;
{
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L20;
}
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=-1U;
si0+=si1;
l9=si0;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l9;
l4=si0;
si0=l2;
l5=si0;
goto L17;
L21:;
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
l4=si0;
si0=l2;
l5=si0;
goto L18;
L22:;
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l9;
l4=si0;
si0=l2;
l5=si0;
goto L19;
L23:;
si0=0U;
l11=si0;
goto L12;
L20:;
L25:;
{
si0=l5;
l1=si0;
si0=l4;
l2=si0;
si1=-1U;
si0+=si1;
l9=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
si1=l5;
si2=l2;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=l4;
si2=l2;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L25;
}
}
si0=1U;
l11=si0;
si0=l1;
l5=si0;
si0=l2;
l4=si0;
goto L12;
L24:;
si0=l2;
l4=si0;
si0=l1;
l5=si0;
goto L13;
L19:;
si0=l8;
si1=-55U;
si0+=si1;
l10=si0;
goto L17;
L18:;
si0=l8;
si1=-87U;
si0+=si1;
l10=si0;
L17:;
sj0=l7;
sj1=1152921504606846975ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l7;
sj1=4ULL;
sj0<<=(sj1&63);
si1=l10;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l7=sj0;
si0=1U;
l8=si0;
goto L16;
}
L15:;
si0=l4;
if(si0){
goto L26;
}
sj0=0ULL;
l7=sj0;
goto L11;
L26:;
si0=l2;
si1=-3U;
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=0U;
l11=si0;
sj0=0ULL;
l7=sj0;
goto L12;
L29:;
si0=l8;
si1=-55U;
si0+=si1;
l10=si0;
goto L27;
L28:;
si0=l8;
si1=-87U;
si0+=si1;
l10=si0;
L27:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0+=si1;
l5=si0;
si0=l2;
si1=-4U;
si0+=si1;
l1=si0;
si1=1U;
si2=l9;
si3=l9;
si1=si3?si1:si2;
si0-=si1;
l4=si0;
si0=l10;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l7=sj0;
L30:;
{
si0=l4;
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l2;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l2;
si1=-87U;
si0+=si1;
l8=si0;
goto L31;
L32:;
si0=l2;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l9;
l4=si0;
si0=l1;
l9=si0;
goto L13;
L33:;
si0=l2;
si1=-55U;
si0+=si1;
l8=si0;
L31:;
sj0=l7;
sj1=1152921504606846975ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
si0=l4;
si1=1U;
si0+=si1;
l9=si0;
sj0=l7;
sj1=4ULL;
sj0<<=(sj1&63);
si1=l8;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l7=sj0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L30;
}
L14:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=1U;
l11=si0;
L12:;
si0=0U;
l2=si0;
si0=l8;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=0U;
l12=si0;
goto L10;
L34:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l13=si0;
si0=0U;
l12=si0;
L35:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L44;
}
si0=0U;
l14=si0;
si0=l9;
l1=si0;
si0=l2;
l10=si0;
L45:;
{
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L47;
}
si0=l1;
if(si0){
goto L48;
}
si0=0U;
l13=si0;
si0=0U;
l4=si0;
si0=l10;
l5=si0;
goto L40;
L48:;
si0=l1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l2=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=0U;
l13=si0;
si0=l1;
l4=si0;
si0=l10;
l5=si0;
goto L43;
L47:;
L49:;
{
si0=l10;
l5=si0;
si0=1U;
l13=si0;
si0=l1;
l4=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l5;
si0=!(si0);
if(si0){
goto L40;
}
si0=l5;
si1=1U;
si0+=si1;
si1=l2;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=l9;
si2=l4;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l9;
l1=si0;
si0=l2;
l10=si0;
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L49;
}
goto L40;
}
L46:;
si0=l8;
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
if(si0){
goto L36;
}
si0=1U;
l13=si0;
si0=l14;
si1=1U;
si0+=si1;
l5=si0;
si1=l14;
si0=(U32)((I32)si0<(I32)si1);
l4=si0;
si0=l5;
l14=si0;
si0=l9;
l1=si0;
si0=l2;
l10=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L45;
}
goto L38;
}
L44:;
si0=l9;
if(si0){
goto L50;
}
si0=0U;
l4=si0;
si0=l2;
l5=si0;
goto L40;
L50:;
si0=l9;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l10=si0;
si0=0U;
l14=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
l5=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l9;
l4=si0;
si0=l2;
l5=si0;
si0=l1;
l9=si0;
si0=l10;
l2=si0;
goto L43;
L51:;
si0=0U;
l14=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
l9=si0;
si0=l10;
l2=si0;
goto L36;
L52:;
si0=1U;
l10=si0;
L53:;
{
si0=l1;
if(si0){
goto L54;
}
si0=l2;
si1=l10;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
si0=1U;
l13=si0;
goto L40;
L54:;
si0=l2;
si1=l10;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
l9=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l9;
si0=!(si0);
if(si0){
goto L55;
}
si0=0U;
si1=l1;
si2=-1U;
si1+=si2;
l5=si1;
si2=l5;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si1=l10;
si0+=si1;
si1=1U;
si0+=si1;
l2=si0;
si0=l10;
l14=si0;
goto L36;
L56:;
si0=0U;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=1U;
l13=si0;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
l4=si0;
si0=l10;
l14=si0;
goto L43;
L55:;
si0=l10;
si1=1U;
si0+=si1;
l14=si0;
si1=l10;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L38;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=0U;
si1=l1;
si2=-2U;
si1+=si2;
l4=si1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
l5=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l5;
if(si0){
goto L37;
}
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
si0=l9;
l1=si0;
goto L53;
L57:;
}
si0=0U;
si1=l1;
si2=-1U;
si1+=si2;
l5=si1;
si2=l5;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si0=1U;
l13=si0;
si0=l2;
si1=l10;
si0+=si1;
l2=si0;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
L43:;
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L40;
}
L42:;
si0=l8;
si1=-55U;
si0+=si1;
l4=si0;
goto L36;
L41:;
si0=1U;
l13=si0;
si0=l2;
si1=l10;
si0+=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
L40:;
si0=l13;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l2=si0;
goto L10;
L39:;
si0=l8;
si1=-87U;
si0+=si1;
l4=si0;
goto L36;
L38:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L37:;
si0=l2;
si1=l10;
si0+=si1;
si1=2U;
si0+=si1;
l2=si0;
L36:;
si0=l14;
si1=1U;
si0+=si1;
l5=si0;
si1=l14;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L60;
}
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l12;
si2=l5;
si1+=si2;
l8=si1;
si2=l12;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L59;
}
sj0=l7;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L61;
}
sj0=0ULL;
l7=sj0;
goto L58;
L61:;
si0=l5;
si1=15U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L62;
}
sj0=l7;
si1=l5;
si2=60U;
si1*=si2;
si2=60U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L62;
}
sj0=l7;
si1=l5;
si2=2U;
si1<<=(si2&31);
si2=60U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l7=sj0;
goto L58;
L62:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L60:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L59:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L58:;
sj0=l7;
si1=l4;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l7=sj0;
si0=1U;
l13=si0;
si0=l8;
l12=si0;
goto L35;
}
L11:;
si0=0U;
l11=si0;
si0=0U;
l2=si0;
si0=0U;
l12=si0;
si0=0U;
l4=si0;
L10:;
si0=l11;
if(si0){
goto L63;
}
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
L63:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=112U;
si0=si0 == si1;
if(si0){
goto L7;
}
L9:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l4;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L64;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L64:;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si0=l5;
si1=2U;
si0+=si1;
l2=si0;
si0=0U;
l10=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L66;
case 1:
goto L65;
case 2:
goto L67;
default:
goto L65;
}
L67:;
si0=1U;
l10=si0;
L66:;
si0=l2;
l5=si0;
si0=l4;
l8=si0;
L65:;
si0=l3;
si0=!(si0);
if(si0){
goto L74;
}
sj0=l7;
si0=!(sj0);
if(si0){
goto L75;
}
si0=0U;
l1=si0;
si0=0U;
l3=si0;
goto L73;
L75:;
si0=0U;
l3=si0;
L76:;
{
si0=0U;
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si1=1U;
si0+=si1;
si1=l4;
si2=l8;
si0=si2?si0:si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=l8;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=1U;
l3=si0;
si0=l4;
l5=si0;
goto L76;
L77:;
si0=l4;
l5=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L76;
}
goto L69;
}
L74:;
si0=l8;
si0=!(si0);
if(si0){
goto L69;
}
si0=l8;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L78;
}
si0=0U;
l1=si0;
L79:;
{
si0=l2;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l5=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L69;
}
si0=l1;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l15;
si1=(U32)(sj1);
l2=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l2;
si2=l5;
si1+=si2;
l1=si1;
si2=l2;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l4;
si0=!(si0);
if(si0){
goto L70;
}
si0=l8;
si1=1U;
si0+=si1;
si1=l8;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l8;
l5=si0;
si0=l8;
if(si0){
goto L79;
}
goto L70;
}
L78:;
L80:;
{
si0=l2;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L69;
}
si0=0U;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L70;
}
si0=l8;
si1=1U;
si0+=si1;
si1=l8;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l8;
l5=si0;
si0=l8;
if(si0){
goto L80;
}
goto L70;
}
L73:;
L81:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si0=!(si0);
if(si0){
goto L72;
}
si0=l5;
si1=1U;
si0+=si1;
si1=l4;
si2=l8;
si0=si2?si0:si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=l8;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l9=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l4;
l5=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L81;
}
goto L69;
L82:;
si0=l1;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l15;
si1=(U32)(sj1);
l2=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L71;
}
si0=1U;
l3=si0;
si0=l4;
l5=si0;
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l2;
si2=l9;
si1+=si2;
l1=si1;
si2=l2;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L71;
}
goto L81;
}
L72:;
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L70;
}
goto L69;
L71:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L70:;
sj0=l7;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L68;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L69:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L68:;
si0=l12;
si1=-536870912U;
si0+=si1;
si1=-1073741824U;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=0U;
si2=l1;
si1-=si2;
si2=l1;
si3=l10;
si1=si3?si1:si2;
l4=si1;
si2=l5;
si1-=si2;
l5=si1;
si2=l4;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L83;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L83:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f868(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
F64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f867(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=-65536U;
si0+=si1;
si1=-131071U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=I64_CTZ(sj0);
l6=sj0;
si0=(U32)(sj0);
si1=63U;
si0&=si1;
si1=l2;
si0+=si1;
l1=si0;
sj1=l5;
sj2=l6;
sj1>>=(sj2&63);
l5=sj1;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
si0-=si1;
l2=si0;
si1=-1137U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=-1085U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sj0=53ULL;
l6=sj0;
si0=l2;
si1=961U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
L7:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L6:;
si0=l2;
si1=50U;
si0+=si1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l6=sj0;
L5:;
sj0=l5;
sj1=l6;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l0;
sj1=l5;
sd1=(F64)(sj1);
l7=sd1;
sd1=-(sd1);
sd2=l7;
si3=l3;
sd1=si3?sd1:sd2;
sd2=1;
si3=l1;
sd2=f15126(i,sd2,si3);
sd1*=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l3=si0;
goto L1;
L8:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f869(rustpythonInstance*i,U32 l0) {
U64 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
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
U32 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U64 l30=0;
U64 l31=0;
U64 l32=0;
U64 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U64 l37=0;
U64 l38=0;
U64 l39=0;
U64 l40=0;
U64 l41=0;
U64 l42=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+192U);
l1=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+152U);
l2=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+112U);
l3=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+72U);
l4=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+32U);
l5=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+184U);
l6=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+144U);
l7=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+104U);
l8=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+64U);
l9=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+24U);
l10=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+176U);
l11=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+136U);
l12=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+96U);
l13=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+56U);
l14=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+168U);
l16=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+128U);
l17=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+88U);
l18=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+48U);
l19=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l20=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+160U);
l21=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+120U);
l22=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+80U);
l23=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+40U);
l24=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=-192U;
l26=si0;
L1:;
{
sj0=l14;
sj1=l15;
sj0^=sj1;
sj1=l13;
sj0^=sj1;
sj1=l12;
sj0^=sj1;
sj1=l11;
sj0^=sj1;
l27=sj0;
sj1=1ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l24;
sj2=l25;
sj1^=sj2;
sj2=l23;
sj1^=sj2;
sj2=l22;
sj1^=sj2;
sj2=l21;
sj1^=sj2;
l28=sj1;
sj0^=sj1;
l29=sj0;
sj1=l19;
sj0^=sj1;
l30=sj0;
sj0=l1;
sj1=l9;
sj2=l10;
sj1^=sj2;
sj2=l8;
sj1^=sj2;
sj2=l7;
sj1^=sj2;
sj2=l6;
sj1^=sj2;
l31=sj1;
sj2=l28;
sj3=1ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l28=sj1;
sj0^=sj1;
l32=sj0;
sj0=l4;
sj1=l5;
sj0^=sj1;
sj1=l3;
sj0^=sj1;
sj1=l2;
sj0^=sj1;
sj1=l1;
sj0^=sj1;
l33=sj0;
sj1=1ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l27;
sj0^=sj1;
l27=sj0;
sj1=l9;
sj0^=sj1;
sj1=55ULL;
sj0=I64_ROTL(sj0,sj1);
l34=sj0;
sj1=l31;
sj2=1ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l19;
sj3=l20;
sj2^=sj3;
sj3=l18;
sj2^=sj3;
sj3=l17;
sj2^=sj3;
sj3=l16;
sj2^=sj3;
l9=sj2;
sj1^=sj2;
l31=sj1;
sj2=l15;
sj1^=sj2;
sj2=62ULL;
sj1=I64_ROTL(sj1,sj2);
l35=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l29;
sj2=l16;
sj1^=sj2;
sj2=2ULL;
sj1=I64_ROTL(sj1,sj2);
l36=sj1;
sj0^=sj1;
l1=sj0;
sj0=l33;
sj1=l9;
sj2=1ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l15=sj0;
sj1=l22;
sj0^=sj1;
sj1=41ULL;
sj0=I64_ROTL(sj0,sj1);
l33=sj0;
sj1=l3;
sj2=l28;
sj1^=sj2;
sj2=39ULL;
sj1=I64_ROTL(sj1,sj2);
l37=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l34;
sj0^=sj1;
l16=sj0;
sj0=l27;
sj1=l6;
sj0^=sj1;
sj1=56ULL;
sj0=I64_ROTL(sj0,sj1);
l38=sj0;
sj1=l31;
sj2=l12;
sj1^=sj2;
sj2=15ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l29;
sj2=l18;
sj1^=sj2;
sj2=10ULL;
sj1=I64_ROTL(sj1,sj2);
l39=sj1;
sj0^=sj1;
l12=sj0;
sj0=l39;
sj1=l15;
sj2=l24;
sj1^=sj2;
sj2=36ULL;
sj1=I64_ROTL(sj1,sj2);
l40=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l28;
sj2=l5;
sj1^=sj2;
sj2=27ULL;
sj1=I64_ROTL(sj1,sj2);
l41=sj1;
sj0^=sj1;
l22=sj0;
sj0=l15;
sj1=l21;
sj0^=sj1;
sj1=18ULL;
sj0=I64_ROTL(sj0,sj1);
l5=sj0;
sj1=l31;
sj2=l14;
sj1^=sj2;
sj2=6ULL;
sj1=I64_ROTL(sj1,sj2);
l21=sj1;
sj2=l29;
sj3=l20;
sj2^=sj3;
sj3=1ULL;
sj2=I64_ROTL(sj2,sj3);
l42=sj2;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj0^=sj1;
l3=sj0;
sj0=l2;
sj1=l28;
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
l2=sj0;
sj1=l27;
sj2=l8;
sj1^=sj2;
sj2=25ULL;
sj1=I64_ROTL(sj1,sj2);
l8=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l21;
sj0^=sj1;
l18=sj0;
sj0=l4;
sj1=l28;
sj0^=sj1;
sj1=20ULL;
sj0=I64_ROTL(sj0,sj1);
l28=sj0;
sj1=l27;
sj2=l10;
sj1^=sj2;
sj2=28ULL;
sj1=I64_ROTL(sj1,sj2);
l10=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l31;
sj2=l11;
sj1^=sj2;
sj2=61ULL;
sj1=I64_ROTL(sj1,sj2);
l14=sj1;
sj0^=sj1;
l4=sj0;
sj0=l10;
sj1=l14;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l29;
sj2=l17;
sj1^=sj2;
sj2=45ULL;
sj1=I64_ROTL(sj1,sj2);
l29=sj1;
sj0^=sj1;
l9=sj0;
sj0=l15;
sj1=l23;
sj0^=sj1;
sj1=3ULL;
sj0=I64_ROTL(sj0,sj1);
l20=sj0;
sj1=l14;
sj2=l29;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj0^=sj1;
l14=sj0;
sj0=l29;
sj1=l20;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l28;
sj0^=sj1;
l19=sj0;
sj0=l20;
sj1=l28;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l10;
sj0^=sj1;
l24=sj0;
sj0=l27;
sj1=l7;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
l29=sj0;
sj1=l15;
sj2=l25;
sj1^=sj2;
l28=sj1;
sj2=l32;
sj3=14ULL;
sj2=I64_ROTL(sj2,sj3);
l27=sj2;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj0^=sj1;
l10=sj0;
sj0=l27;
sj1=l29;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l31;
sj2=l13;
sj1^=sj2;
sj2=43ULL;
sj1=I64_ROTL(sj1,sj2);
l31=sj1;
sj0^=sj1;
l15=sj0;
sj0=l29;
sj1=l31;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l30;
sj2=44ULL;
sj1=I64_ROTL(sj1,sj2);
l29=sj1;
sj0^=sj1;
l20=sj0;
sj0=l31;
sj1=l29;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
si1=l26;
si2=1171048U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
sj1=l28;
sj0^=sj1;
l25=sj0;
sj0=l8;
sj1=l21;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l42;
sj0^=sj1;
l31=sj0;
l23=sj0;
sj0=l37;
sj1=l34;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l35;
sj0^=sj1;
l34=sj0;
l21=sj0;
sj0=l40;
sj1=l6;
sj2=l39;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj0^=sj1;
l39=sj0;
l17=sj0;
sj0=l5;
sj1=l2;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l8;
sj0^=sj1;
l30=sj0;
l13=sj0;
sj0=l36;
sj1=l33;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l37;
sj0^=sj1;
l37=sj0;
l11=sj0;
sj0=l42;
sj1=l5;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l2;
sj0^=sj1;
l42=sj0;
l8=sj0;
sj0=l41;
sj1=l38;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l6;
sj0^=sj1;
l32=sj0;
l7=sj0;
sj0=l33;
sj1=l35;
sj2=l36;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj0^=sj1;
l35=sj0;
l6=sj0;
sj0=l29;
sj1=l28;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l27;
sj0^=sj1;
l29=sj0;
l5=sj0;
sj0=l40;
sj1=l41;
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
sj1=l38;
sj0^=sj1;
l28=sj0;
l2=sj0;
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
if(si0){
goto L1;
}
}
si0=l0;
sj1=l34;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l0;
sj1=l22;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
sj1=l31;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
sj1=l39;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l0;
sj1=l18;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
sj1=l19;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l37;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l0;
sj1=l30;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l35;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l0;
sj1=l32;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l0;
sj1=l42;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l0;
sj1=l28;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
sj1=l29;
i64_store(&i->m0,(U64)si0+32U,sj1);
L0:;
}

U32 f870(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1181632U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f871(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f872(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f873(i,si0);
UNREACHABLE;
L0:;
}

void f873(rustpythonInstance*i,U32 l0) {
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
si1=1181640U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f874(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=1181964U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=85U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1181876U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
si0+=si1;
f872(i,si0);
UNREACHABLE;
L0:;
}

U32 f875(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1181660U;
si2=2U;
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f876(rustpythonInstance*i,U32 l0) {
L0:;
}

void f877(rustpythonInstance*i,U32 l0) {
L0:;
}

void f878(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1181664U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f879(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
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
si1=1181664U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f880(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=6U;
l2=si0;
si0=l1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L5;
case 2:
goto L6;
default:
goto L1;
}
L7:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=79U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=70U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l0=si0;
si1=-32U;
si0+=si1;
si1=l0;
si2=l0;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=70U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=69U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=82U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=82U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=79U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si1=-32U;
si0+=si1;
si1=l3;
si2=l3;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=82U;
si0=si0 == si1;
if(si0){
goto L2;
}
L8:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=-68U;
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
goto L3;
default:
goto L1;
}
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=-73U;
si0+=si1;
switch(si0){
case 0:
goto L9;
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
goto L10;
default:
goto L1;
}
L10:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=65U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=82U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=2U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l0=si0;
si1=-32U;
si0+=si1;
si1=l0;
si2=l0;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=78U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L9:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=78U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=70U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=3U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l0=si0;
si1=-32U;
si0+=si1;
si1=l0;
si2=l0;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=79U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=69U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=66U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=85U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=4U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l0=si0;
si1=-32U;
si0+=si1;
si1=l0;
si2=l0;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=71U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=82U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=65U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l1=si0;
si1=-32U;
si0+=si1;
si1=l1;
si2=l1;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=67U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=5U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l0=si0;
si1=-32U;
si0+=si1;
si1=l0;
si2=l0;
si3=-97U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=69U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f881(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f882(rustpythonInstance*i,U32 l0,U32 l1) {
L0:;
}

void f883(rustpythonInstance*i,U32 l0) {
L0:;
}

void f884(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
f874(i);
UNREACHABLE;
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18656608U);
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18656604U);
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658432U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l5;
si1=48U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l6;
si1=1181876U;
si2=l7;
si3=2U;
si2=si2 == si3;
l2=si2;
si0=si2?si0:si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l3;
si3=1181680U;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f885(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1181980U;
si3=14U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=1181996U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
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
si1=1102487U;
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
si1=1101931U;
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
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f886(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f887(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f888(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f889(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1182012U;
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
si1=1182026U;
si2=8U;
si3=l0;
si4=4U;
si3+=si4;
si4=1182036U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=1182052U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1182060U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L6;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L6:;
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
goto L7;
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
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1182076U;
si2=18U;
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
si1=1182094U;
si2=19U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1182113U;
si2=17U;
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

void f890(rustpythonInstance*i,U32 l0) {
L0:;
}

void f891(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1182132U;
si3=l5;
si4=12U;
si3+=si4;
si4=1182132U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f892(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L6:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
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
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U64 f893(rustpythonInstance*i,U64 l0,U64 l1,U64 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l4;
sj1=l2;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l2;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l4;
si1=56U;
si0+=si1;
sj1=l1;
sj2=0ULL;
sj3=l0;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l0=sj0;
sj0=l2;
sj0=I64_CLZ(sj0);
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
sj1=l5;
sj2=0ULL;
sj3=l6;
sj4=0ULL;
sj5=l2;
sj6=l6;
sj7=l2;
si6=sj6 < sj7;
sj4=si6?sj4:sj5;
sj3-=sj4;
l1=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=0ULL;
sj2=l1;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l0;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+8U);
sj3+=sj4;
l1=sj3;
sj4=l0;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj2*=sj3;
sj3=l0;
sj2+=sj3;
l0=sj2;
sj3=l1;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l0;
sj0+=sj1;
l1=sj0;
sj1=0ULL;
sj2=l2;
sj3=l1;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l2=sj0;
goto L1;
L4:;
sj0=l6;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
sj0=64ULL;
sj1=l1;
sj0-=sj1;
l7=sj0;
sj0=l6;
sj1=l1;
sj0<<=(sj1&63);
l6=sj0;
sj0=l2;
sj1=l1;
sj0<<=(sj1&63);
l2=sj0;
goto L5;
L6:;
si0=l4;
si1=40U;
si0+=si1;
sj1=l5;
sj2=0ULL;
sj3=l6;
sj4=64ULL;
sj5=l1;
sj4-=sj5;
l7=sj4;
sj3>>=(sj4&63);
l8=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=l1;
sj0<<=(sj1&63);
l2=sj0;
sj1=0ULL;
sj2=l2;
sj3=l8;
si4=l4;
si5=48U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
sj3+=sj4;
sj4=l6;
sj5=l1;
sj4<<=(sj5&63);
l6=sj4;
si5=l4;
sj5=i64_load(&i->m0,(U64)si5+40U);
sj4+=sj5;
l8=sj4;
sj5=l6;
si4=sj4 < sj5;
sj4=(U64)(si4);
sj3+=sj4;
sj4=-1ULL;
sj3^=sj4;
sj2*=sj3;
sj3=l6;
sj2+=sj3;
l6=sj2;
sj3=l8;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l6;
sj0+=sj1;
l6=sj0;
sj1=0ULL;
sj2=l2;
sj3=l6;
sj4=l2;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l6=sj0;
L5:;
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=l0;
sj3=l7;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
sj1=0ULL;
sj2=l2;
sj3=l6;
si4=l4;
si5=32U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
sj3+=sj4;
sj4=l0;
sj5=l1;
sj4<<=(sj5&63);
l0=sj4;
si5=l4;
sj5=i64_load(&i->m0,(U64)si5+24U);
sj4+=sj5;
l6=sj4;
sj5=l0;
si4=sj4 < sj5;
sj4=(U64)(si4);
sj3+=sj4;
sj4=-1ULL;
sj3^=sj4;
sj2*=sj3;
sj3=l0;
sj2+=sj3;
l0=sj2;
sj3=l6;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l0;
sj0+=sj1;
l0=sj0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L2;
}
sj0=l0;
sj1=l2;
sj0-=sj1;
sj1=l1;
sj0>>=(sj1&63);
l2=sj0;
goto L1;
L3:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l4;
si2=72U;
si1+=si2;
si2=l4;
si3=80U;
si2+=si3;
si3=l4;
si4=88U;
si3+=si4;
si4=1184376U;
f891(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l2=sj0;
L1:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
sj0=l2;
L0:;
return sj0;
}

void f894(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj4,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L5;
}
sj0=l5;
si0=(U32)(sj0);
l7=si0;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l7;
si1=40U;
si0*=si1;
si1=1262528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=8U;
l8=si0;
si0=l4;
si1=l7;
si0=DIV_U(si0,si1);
l9=si0;
si1=129U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=8U;
l8=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L7:;
si0=l6;
si1=32U;
si0+=si1;
si1=l8;
si2=l7;
si3=l9;
si4=1U;
si3+=si4;
sj4=l5;
si5=2U;
f1282(i,si0,si1,si2,si3,sj4,si5);
si0=l6;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si0=l9;
si1=65U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
si1=268435456U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
if(si0){
goto L9;
}
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
si6=l10;
si7=l11;
si8=l13;
si9=8U;
si10=0U;
f895(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L8;
L9:;
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
si6=l10;
si7=l11;
si8=l13;
si9=l15;
si10=l9;
f895(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l15;
f15024(i,si0);
L8:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
f15024(i,si0);
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
f15024(i,si0);
goto L4;
L6:;
si0=1184560U;
si1=25U;
si2=1184532U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
f896(i,si0,si1,si2,si3,si4,sj5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l7;
si1=257U;
si2=1273292U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f895(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
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
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l8;
if(si0){
goto L2;
}
si0=l11;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
f896(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L2:;
si0=l8;
si1=l7;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l8;
si1=l7;
si2=1185004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l6;
si2=l8;
si3=4U;
si2<<=(si3&31);
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1+12U);
l13=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l11;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=-1U;
si8+=si9;
si9=l9;
si10=l10;
f895(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
goto L1;
L4:;
si0=l13;
si1=l4;
si2=l13;
si1-=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l14;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l11;
si1=32U;
si0+=si1;
si1=l9;
si2=l10;
si3=l3;
si4=l14;
sj5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=-1U;
si8+=si9;
si9=l1;
si10=l2;
f895(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+32U);
l16=si0;
goto L15;
L16:;
si0=l11;
si1=24U;
si0+=si1;
si1=l9;
si2=l10;
si3=l3;
si4=l14;
sj5=l5;
f896(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+24U);
l16=si0;
L15:;
si0=0U;
l4=si0;
si0=l16;
if(si0){
goto L17;
}
goto L1;
L17:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si1=l6;
si2=l8;
si3=4U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+8U);
l16=si1;
si0+=si1;
l18=si0;
si0=l15;
if(si0){
goto L19;
}
si0=l18;
si1=1U;
si0+=si1;
l12=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=0U;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
goto L18;
L19:;
si0=l2;
si1=l16;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l17;
si1=l15;
si0=si0 >= si1;
l19=si0;
if(si0){
goto L21;
}
si0=l15;
si1=l17;
si0=f1126(i,si0,si1);
l20=si0;
goto L20;
L21:;
si0=l17;
si1=l15;
si0=f1126(i,si0,si1);
l20=si0;
L20:;
si0=8U;
l21=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L22;
}
si0=l20;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l20;
si1=3U;
si0<<=(si1&31);
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l22;
si0=!(si0);
if(si0){
goto L22;
}
si0=l22;
si1=1U;
si0=f15026(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L10;
}
L22:;
si0=l15;
si1=l10;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=l16;
si0-=si1;
l22=si0;
si0=l1;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l19;
if(si0){
goto L24;
}
si0=l23;
si1=l22;
si2=l9;
si3=l15;
si4=l12;
si5=l17;
si6=l21;
si7=l20;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L23;
L24:;
si0=l23;
si1=l22;
si2=l12;
si3=l17;
si4=l9;
si5=l15;
si6=l21;
si7=l20;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L23:;
si0=l16;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=0U;
si2=l16;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L25:;
si0=l20;
si0=!(si0);
if(si0){
goto L18;
}
si0=l21;
f15024(i,si0);
L18:;
si0=l3;
si1=l14;
si0+=si1;
l3=si0;
si0=l13;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l10;
si1=l18;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=16U;
si0+=si1;
si1=l9;
si2=l14;
si3=l3;
si4=l13;
sj5=l5;
si6=l6;
si7=l7;
si8=l8;
si9=-1U;
si8+=si9;
si9=l9;
si10=l14;
si11=3U;
si10<<=(si11&31);
si9+=si10;
si10=l10;
si11=l14;
si10-=si11;
f895(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
goto L26;
L27:;
si0=l11;
si1=8U;
si0+=si1;
si1=l9;
si2=l10;
si3=l3;
si4=l13;
sj5=l5;
f896(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L26:;
si0=l8;
if(si0){
goto L28;
}
goto L1;
L28:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=l10;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=0U;
l4=si0;
si0=l7;
l6=si0;
si0=l1;
l8=si0;
L29:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l24;
si0=sj0 < sj1;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L31;
}
si0=l3;
l4=si0;
goto L30;
L31:;
si0=l3;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
l5=sj1;
si1=!(sj1);
si0|=si1;
l4=si0;
L30:;
si0=l8;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L29;
}
}
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l8;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L33:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l5;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L33;
}
L32:;
si0=1185132U;
si1=59U;
si2=1185192U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1185208U;
si1=34U;
si2=1185244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l12;
si1=l2;
si2=1185020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1185296U;
si1=35U;
si2=1185036U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=8U;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l15;
si1=l10;
si2=1185052U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1185296U;
si1=35U;
si2=1185068U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1185296U;
si1=35U;
si2=1185084U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=l10;
si2=1185100U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l18;
si1=l15;
si0+=si1;
l9=si0;
si1=-1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l8;
si1=l9;
si2=l1;
si3=l8;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l8=si0;
si0=1U;
l4=si0;
goto L1;
L34:;
si0=l8;
si1=l2;
si2=1185116U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f896(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
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
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
U64 l25=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=272U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+244U,si1);
sj0=l5;
sj1=3ULL;
si0=sj0 < sj1;
if(si0){
goto L14;
}
sj0=l5;
sj1=255ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
sj0=l5;
si0=(U32)(sj0);
l7=si0;
si1=40U;
si0*=si1;
l8=si0;
si1=1262528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=l4;
si1=-1U;
si0+=si1;
l12=si0;
si1=l12;
si2=l9;
si1=REM_U(si1,si2);
si0-=si1;
l13=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=1262520U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj0=l5;
sj1=10ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si0=0U;
l10=si0;
si0=l7;
si1=255U;
si0&=si1;
l16=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
l17=si0;
si0=0U;
l11=si0;
si0=l3;
l18=si0;
L17:;
{
si0=l18;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l12;
sj0=(U64)(si0);
l19=sj0;
si0=l17;
if(si0){
goto L21;
}
si0=1U;
l12=si0;
L22:;
{
si0=l18;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
sj0=(U64)(si0);
l20=sj0;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L20;
}
sj0=l19;
sj1=l5;
sj0*=sj1;
sj1=l20;
sj0+=sj1;
l19=sj0;
si0=l9;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L21:;
si0=l10;
si0=!(si0);
if(si0){
goto L23;
}
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l21;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l22=si0;
si1=1U;
si0+=si1;
l23=si0;
si1=3U;
si0&=si1;
l8=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
si0=l22;
si1=3U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l23;
si1=1073741820U;
si0&=si1;
l22=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L25:;
{
si0=l6;
si1=176U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+176U);
l24=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=224U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+224U);
l25=sj1;
si2=l6;
si3=176U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l24;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=208U;
si0+=si1;
si1=l12;
si2=16U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+208U);
l24=sj1;
si2=l6;
si3=224U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=192U;
si0+=si1;
si1=l12;
si2=24U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+192U);
l25=sj1;
si2=l6;
si3=208U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l24;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
si0=l6;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l22;
si1=-4U;
si0+=si1;
l22=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l8;
si0=!(si0);
if(si0){
goto L26;
}
L27:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+160U);
l24=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l19;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l19=sj0;
sj0=l25;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L28;
}
si0=l22;
si1=-8U;
si0+=si1;
l8=si0;
si0=l15;
l12=si0;
L29:;
{
si0=l8;
if(si0){
goto L30;
}
sj0=1ULL;
l19=sj0;
goto L28;
L30:;
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l24=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l24;
si0=!(sj0);
if(si0){
goto L29;
}
}
L28:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l20=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
si0=l1;
si1=l22;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
l10=si0;
goto L18;
L23:;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
l10=si0;
goto L18;
L20:;
si0=1184756U;
si1=31U;
si2=1184884U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
L18:;
si0=l18;
si1=l9;
si0+=si1;
l18=si0;
si0=l11;
si1=l9;
si0+=si1;
l11=si0;
si0=l13;
si1=l9;
si0-=si1;
l13=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L17;
}
goto L11;
}
L16:;
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l6;
si1=1185288U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=1185260U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l6;
si1=248U;
si0+=si1;
si1=1184592U;
f614(i,si0,si1);
UNREACHABLE;
L15:;
si0=1184916U;
si1=28U;
si2=1184944U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1184960U;
si1=26U;
si2=1184988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=1U;
si1=l6;
si2=244U;
si1+=si2;
si2=1184588U;
si3=l6;
si4=248U;
si3+=si4;
si4=1184900U;
f905(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si0=0U;
l10=si0;
si0=l7;
si1=255U;
si0&=si1;
l16=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
l17=si0;
si0=0U;
l11=si0;
si0=l3;
l18=si0;
L31:;
{
si0=l18;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l12;
sj0=(U64)(si0);
l19=sj0;
si0=l17;
if(si0){
goto L32;
}
si0=1U;
l12=si0;
L33:;
{
si0=l18;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
si1=9U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l19;
sj1=10ULL;
sj0*=sj1;
si1=l8;
sj1=(U64)(si1);
sj0+=sj1;
l19=sj0;
si0=l9;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L32:;
si0=l10;
si0=!(si0);
if(si0){
goto L35;
}
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l21;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l22=si0;
si1=1U;
si0+=si1;
l23=si0;
si1=3U;
si0&=si1;
l8=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
si0=l22;
si1=3U;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l23;
si1=1073741820U;
si0&=si1;
l22=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L37:;
{
si0=l6;
si1=96U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+96U);
l24=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=144U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+144U);
l25=sj1;
si2=l6;
si3=96U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l24;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l12;
si2=16U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+128U);
l24=sj1;
si2=l6;
si3=144U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=112U;
si0+=si1;
si1=l12;
si2=24U;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l23;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
l25=sj1;
si2=l6;
si3=128U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l24;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
si0=l6;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l22;
si1=-4U;
si0+=si1;
l22=si0;
if(si0){
goto L37;
}
}
L36:;
si0=l8;
si0=!(si0);
if(si0){
goto L38;
}
L39:;
{
si0=l6;
si1=80U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+80U);
l24=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L39;
}
}
L38:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l19;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l19=sj0;
sj0=l25;
sj1=l24;
si0=sj0 >= sj1;
if(si0){
goto L40;
}
si0=l22;
si1=-8U;
si0+=si1;
l8=si0;
si0=l15;
l12=si0;
L41:;
{
si0=l8;
if(si0){
goto L42;
}
sj0=1ULL;
l19=sj0;
goto L40;
L42:;
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l24=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l24;
si0=!(sj0);
if(si0){
goto L41;
}
}
L40:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l20=sj0;
si0=!(sj0);
if(si0){
goto L34;
}
si0=l1;
si1=l22;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
l10=si0;
goto L34;
L35:;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L43;
}
si0=0U;
l10=si0;
goto L34;
L43:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
L34:;
si0=l18;
si1=l9;
si0+=si1;
l18=si0;
si0=l11;
si1=l9;
si0+=si1;
l11=si0;
si0=l13;
si1=l9;
si0-=si1;
l13=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L31;
}
}
L11:;
si0=l11;
si1=l4;
si0=si0 > si1;
if(si0){
goto L9;
}
L10:;
si0=l11;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1184608U;
si1=43U;
si2=1184652U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si1=l4;
si2=1184804U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
si1=l11;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l11;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
l9=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l8;
sj0=(U64)(si0);
l24=sj0;
sj0=10ULL;
l14=sj0;
sj0=l5;
sj1=10ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=255U;
si0&=si1;
l22=si0;
sj0=10ULL;
l14=sj0;
L47:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
si1=9U;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
sj0=l14;
sj1=10ULL;
sj0*=sj1;
l14=sj0;
sj0=l24;
sj1=10ULL;
sj0*=sj1;
si1=l8;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L47;
}
goto L3;
}
L46:;
si0=l9;
if(si0){
goto L44;
}
sj0=l5;
l14=sj0;
goto L3;
L45:;
si0=1184668U;
si1=24U;
si2=1184692U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l7;
si1=255U;
si0&=si1;
l22=si0;
sj0=l5;
l14=sj0;
L48:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
sj0=(U64)(si0);
l20=sj0;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L49;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
sj0=l14;
sj1=l5;
sj0*=sj1;
l14=sj0;
sj0=l24;
sj1=l5;
sj0*=sj1;
sj1=l20;
sj0+=sj1;
l24=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L48;
L49:;
}
si0=1184756U;
si1=31U;
si2=1184788U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1184836U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1184608U;
si1=43U;
si2=1184868U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1184668U;
si1=24U;
si2=1184820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l21;
si1=l2;
si2=1184852U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l10;
if(si0){
goto L54;
}
sj0=l24;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L53;
}
si0=0U;
l23=si0;
goto L51;
L54:;
si0=l10;
si1=1U;
si0+=si1;
l23=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l23;
if(si0){
goto L52;
}
si0=1184608U;
si1=43U;
si2=1184740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l2;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l23=si0;
goto L51;
L55:;
si0=0U;
si1=0U;
si2=1184708U;
f594(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l12=si0;
si1=1U;
si0+=si1;
l8=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l12;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L57;
}
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
goto L56;
L57:;
si0=l8;
si1=1073741820U;
si0&=si1;
l8=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L58:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=64U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
l22=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l22;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+64U);
l19=sj1;
si2=l6;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l5;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l12;
si2=16U;
si1+=si2;
l22=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l22;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+48U);
l5=sj1;
si2=l6;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l19;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l12;
si2=24U;
si1+=si2;
l22=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l22;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l19=sj1;
si2=l6;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l20;
sj4=l5;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
l12=si0;
si0=l6;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l19;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L58;
}
}
L56:;
si0=l9;
si0=!(si0);
if(si0){
goto L59;
}
L60:;
{
si0=l6;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l20;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l20=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l24;
sj1+=sj2;
l24=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l5=sj0;
sj0=l24;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L61;
}
si0=l1;
si1=8U;
si0+=si1;
l12=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l9=si0;
L62:;
{
si0=l9;
if(si0){
goto L63;
}
sj0=1ULL;
l5=sj0;
goto L61;
L63:;
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L62;
}
}
L61:;
sj0=l5;
sj1=l20;
sj0+=sj1;
l14=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l10;
l23=si0;
goto L51;
L64:;
si0=l1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
L51:;
si0=1U;
l12=si0;
goto L1;
L50:;
si0=l23;
si1=l2;
si2=1184724U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l12=si0;
L1:;
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

void f897(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
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
si0=f15030(i,si0,si1);
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
si0=f15030(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l5;
f15024(i,si0);
goto L5;
L12:;
si0=l5;
si1=l2;
si0=f15027(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
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
si0=f15030(i,si0,si1);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=f15022(i,si0);
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

void f898(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f897(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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
si2=16U;
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

void f899(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f897(i,si0,si1,si2,si3);
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

void f900(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L2;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1185524U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1185532U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1185668U;
f614(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=255U;
si0&=si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L7;
case 6:
goto L5;
case 7:
goto L7;
case 8:
goto L7;
case 9:
goto L7;
case 10:
goto L7;
case 11:
goto L7;
case 12:
goto L7;
case 13:
goto L7;
case 14:
goto L6;
default:
goto L7;
}
L7:;
si0=0U;
l5=si0;
L17:;
{
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si0=I32_CLZ(si0);
si1=l1;
si1=I32_CTZ(si1);
l6=si1;
si0+=si1;
si1=-24U;
si0+=si1;
si1=255U;
si0&=si1;
si1=7U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si1=l6;
sj1=(U64)(si1);
l7=sj1;
sj2=255ULL;
sj1&=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
L20:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l1;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l1;
si1=-87U;
si0+=si1;
l10=si0;
goto L21;
L22:;
si0=l1;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=229U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l1;
si1=-55U;
si0+=si1;
l10=si0;
L21:;
si0=l9;
si1=l5;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=0U;
l2=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l9;
si1=l3;
si0+=si1;
l5=si0;
sj0=0ULL;
l11=sj0;
sj0=64ULL;
sj1=l8;
sj0=REM_U(sj0,sj1);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=0U;
l2=si0;
si0=0U;
l10=si0;
L25:;
{
sj0=0ULL;
l7=sj0;
sj0=0ULL;
l12=sj0;
L28:;
{
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=32U;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si1=I32_CLZ(si1);
si0-=si1;
si1=255U;
si0&=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
sj0=(U64)(si0);
sj1=l7;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
sj0=l7;
sj1=l8;
sj0+=sj1;
l7=sj0;
sj1=64ULL;
si0=sj0 < sj1;
if(si0){
goto L28;
}
goto L26;
}
L27:;
sj0=l7;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l10;
si1=-256U;
si0&=si1;
si1=1U;
si0|=si1;
l10=si0;
L26:;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
f898(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
L29:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L8;
}
goto L25;
}
L24:;
sj0=l7;
sj1=255ULL;
sj0&=sj1;
l13=sj0;
sj0=0ULL;
l14=sj0;
L30:;
{
sj0=l14;
sj1=65280ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L32;
}
sj0=l14;
sj1=255ULL;
sj0&=sj1;
l12=sj0;
goto L31;
L32:;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=255U;
si0&=si1;
si1=32U;
si2=l5;
si3=-1U;
si2+=si3;
l5=si2;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si2=I32_CLZ(si2);
si1-=si2;
si2=255U;
si1&=si2;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l3;
sj0=(U64)(si0);
l12=sj0;
sj1=256ULL;
sj0|=sj1;
l14=sj0;
sj0=l13;
l11=sj0;
L31:;
sj0=64ULL;
l7=sj0;
sj0=l11;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L38;
}
sj0=0ULL;
l12=sj0;
goto L37;
L38:;
sj0=0ULL;
l15=sj0;
sj0=l11;
sj1=64ULL;
si0=sj0 <= sj1;
if(si0){
goto L39;
}
sj0=0ULL;
l16=sj0;
sj0=l12;
l8=sj0;
goto L36;
L39:;
sj0=l11;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L34;
}
sj0=64ULL;
sj1=l11;
sj0-=sj1;
l7=sj0;
L37:;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L41;
}
L42:;
{
si0=l6;
si1=255U;
si0&=si1;
si1=32U;
si2=l5;
si3=-1U;
si2+=si3;
l5=si2;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si2=I32_CLZ(si2);
si1-=si2;
si2=255U;
si1&=si2;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l3;
sj0=(U64)(si0);
l8=sj0;
sj0=64ULL;
sj1=l7;
sj0-=sj1;
l16=sj0;
sj0=l7;
sj1=l13;
si0=sj0 < sj1;
if(si0){
goto L40;
}
sj0=l8;
sj1=l16;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
sj0=l7;
sj1=l13;
sj0-=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L35;
}
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L42;
}
}
sj0=l8;
sj1=256ULL;
sj0|=sj1;
l14=sj0;
L41:;
sj0=l12;
si0=!(sj0);
if(si0){
goto L8;
}
sj0=l14;
sj1=-65281ULL;
sj0&=sj1;
l14=sj0;
sj0=0ULL;
l11=sj0;
si0=l9;
l5=si0;
goto L33;
L40:;
sj0=l8;
sj1=256ULL;
sj0|=sj1;
l14=sj0;
sj0=l13;
l11=sj0;
sj0=l12;
l15=sj0;
L36:;
sj0=l14;
sj1=-256ULL;
sj0&=sj1;
sj1=l14;
si1=(U32)(sj1);
si2=255U;
si1&=si2;
sj2=l7;
si2=(U32)(sj2);
si3=7U;
si2&=si3;
si1>>=(si2&31);
sj1=(U64)(si1);
sj0|=sj1;
l14=sj0;
sj0=255ULL;
sj1=255ULL;
sj2=-1ULL;
sj3=l7;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj3=l8;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l7;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l8;
sj0&=sj1;
sj1=l16;
sj0<<=(sj1&63);
sj1=l15;
sj0|=sj1;
l12=sj0;
sj0=l11;
sj1=l7;
sj0-=sj1;
l11=sj0;
goto L33;
L35:;
sj0=l8;
sj1=256ULL;
sj0|=sj1;
l14=sj0;
L34:;
sj0=0ULL;
l11=sj0;
L33:;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l2;
f898(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
goto L30;
}
L23:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
f15024(i,si0);
L44:;
si0=l9;
f15024(i,si0);
goto L1;
L19:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
L45:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l9;
si1=-87U;
si0+=si1;
l10=si0;
goto L46;
L47:;
si0=l9;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=229U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l9;
si1=-55U;
si0+=si1;
l10=si0;
L46:;
si0=l6;
si1=l5;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=255U;
si1&=si2;
si2=40U;
si1*=si2;
si2=1262512U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=268435453U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l10;
if(si0){
goto L49;
}
si0=8U;
l2=si0;
goto L48;
L49:;
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
L48:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l5;
si3=l6;
si4=l3;
si5=l1;
sj5=(U64)(si5);
sj6=255ULL;
sj5&=sj6;
f894(i,si0,si1,si2,si3,si4,sj5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L50;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
f15024(i,si0);
si0=l6;
f15024(i,si0);
goto L1;
L50:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l4;
si2=56U;
si1+=si2;
f958(i,si0,si1);
si0=l6;
f15024(i,si0);
goto L1;
L18:;
si0=l2;
si1=l5;
si0+=si1;
l10=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l10;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L17;
}
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1186080U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1185844U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1186216U;
f614(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
f901(i,si0,si1);
UNREACHABLE;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1185844U;
si1=43U;
si2=1186024U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1185844U;
si1=43U;
si2=1186024U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=l4;
si2=56U;
si1+=si2;
f958(i,si0,si1);
si0=l9;
f15024(i,si0);
goto L1;
L6:;
si0=l0;
si1=l2;
si2=l3;
f1069(i,si0,si1,si2);
goto L1;
L5:;
si0=l0;
si1=l2;
si2=l3;
f1068(i,si0,si1,si2);
goto L1;
L4:;
si0=l0;
si1=l2;
si2=l3;
f1067(i,si0,si1,si2);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f901(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1185336U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l2;
si2=8U;
si1+=si2;
si2=1185700U;
si3=l2;
si4=12U;
si3+=si4;
si4=1185700U;
si5=l1;
si6=1185488U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f902(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L6:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
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
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f903(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f904(rustpythonInstance*i,U32 l0) {
L0:;
}

void f905(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1185684U;
si3=l5;
si4=12U;
si3+=si4;
si4=1185684U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f906(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=43U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l7;
si1=43U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
goto L5;
L7:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1185828U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l2;
l7=si0;
si0=l1;
l6=si0;
L5:;
si0=l3;
si1=16U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
if(si0){
goto L9;
}
si0=l6;
l1=si0;
goto L4;
L9:;
si0=0U;
l1=si0;
L10:;
{
si0=l6;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L11;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L11;
case 5:
goto L11;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L3;
case 9:
goto L3;
case 10:
goto L3;
case 11:
goto L3;
case 12:
goto L3;
case 13:
goto L3;
case 14:
goto L3;
case 15:
goto L3;
case 16:
goto L3;
case 17:
goto L3;
case 18:
goto L3;
case 19:
goto L3;
case 20:
goto L3;
case 21:
goto L3;
case 22:
goto L3;
case 23:
goto L3;
case 24:
goto L3;
case 25:
goto L3;
case 26:
goto L3;
case 27:
goto L3;
case 28:
goto L3;
case 29:
goto L3;
case 30:
goto L11;
case 31:
goto L3;
case 32:
goto L11;
case 33:
goto L11;
case 34:
goto L11;
case 35:
goto L11;
case 36:
goto L11;
case 37:
goto L11;
default:
goto L3;
}
L11:;
si0=l7;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L8:;
si0=l6;
l1=si0;
si0=l7;
l5=si0;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si3=l5;
f900(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L12:;
si0=l5;
if(si0){
goto L13;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L13:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=l1;
si3=l5;
si2+=si3;
f909(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
f686(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L17;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l4;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f900(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L15;
L17:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L14;
}
goto L1;
L16:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L15:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
L14:;
si0=l1;
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f907(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1186273U;
si2=1186268U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load8_u(&i->m0,(U64)si3);
l0=si3;
si1=si3?si1:si2;
si2=12U;
si3=5U;
si4=l0;
si2=si4?si2:si3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f908(rustpythonInstance*i,U32 l0) {
L0:;
}

void f909(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
L4:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=95U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L4;
}
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l6=si0;
L7:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=95U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=1U;
f899(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L9:;
si0=l5;
si1=l6;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
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
goto L1;
L5:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f910(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=45U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=248U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=366U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=0U;
si2=l1;
si3=-1U;
si2+=si3;
l0=si2;
si3=l0;
si4=l1;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1217888U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
si2=l2;
si0=f621(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f913(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f911(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1186232U;
si2=16U;
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
si1=1186248U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1186252U;
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

U32 f912(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f913(i,si0,si1);
L0:;
return si0;
}

U32 f913(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L4;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
si2=l4;
si3=3U;
si2<<=(si3&31);
si3=l3;
si2+=si3;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj2=I64_CLZ(sj2);
sj1-=sj2;
sj2=0ULL;
sj3=5553023288523357133ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967295ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l5;
si0=(U32)(sj0);
si1=1U;
si0+=si1;
l0=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
goto L1;
L12:;
si0=1U;
l0=si0;
si0=1U;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L7;
L11:;
si0=l0;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L6;
L10:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=8U;
l8=si0;
si0=0U;
l7=si0;
L6:;
si0=l0;
si1=l6;
si2=l0;
sj3=10ULL;
si4=l8;
si5=l3;
si6=l7;
si4=f15143(i,si4,si5,si6);
l9=si4;
si5=l4;
si6=2U;
si1=f1283(i,si1,si2,sj3,si4,si5,si6);
l7=si1;
si2=l0;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
l3=si0;
si0=l6;
l0=si0;
L14:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=35U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si2=87U;
si3=l7;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l7;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=28U;
si0+=si1;
si1=l6;
si2=l8;
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si2=1186288U;
si3=0U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+32U);
si5=l2;
si6=36U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
f15024(i,si0);
L15:;
si0=l6;
f15024(i,si0);
L4:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L3:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=1188652U;
si1=43U;
si2=l2;
si3=40U;
si2+=si3;
si3=1188832U;
si4=1188848U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1186400U;
si1=43U;
si2=1188864U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f914(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f915(i,si0,si1);
L0:;
return si0;
}

U32 f915(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l0=si0;
L7:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
sj1=l3;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l3;
sj1=8ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=3ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si2=1102830U;
si3=2U;
si4=l2;
si5=16U;
si4+=si5;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l0=si2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
l3=sj0;
sj1=3ULL;
sj0=DIV_U(sj0,sj1);
l6=sj0;
sj1=l6;
sj2=3ULL;
sj1*=sj2;
sj2=l3;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
sj0=l3;
si0=(U32)(sj0);
l7=si0;
if(si0){
goto L10;
}
si0=1U;
l8=si0;
goto L3;
L10:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj0=64ULL;
l3=sj0;
si0=l7;
l0=si0;
L13:;
{
si0=l8;
si1=l0;
si0+=si1;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L17;
}
sj0=l3;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L18;
}
sj0=l3;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
default:
goto L20;
}
L20:;
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l3;
sj1=3ULL;
sj0>>=(sj1&63);
l6=sj0;
sj0=61ULL;
l3=sj0;
goto L14;
L19:;
si0=l4;
si1=0U;
si2=l4;
si3=l9;
si2=si2 != si3;
l10=si2;
si0=si2?si0:si1;
l11=si0;
si1=1187552U;
si2=l11;
si0=si2?si0:si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=6ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
si0=(U32)(sj0);
l11=si0;
si1=255U;
si0&=si1;
l12=si0;
si1=35U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=48U;
si2=87U;
si3=l12;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l11;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=2ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=62ULL;
l3=sj0;
goto L14;
L18:;
si0=l4;
si1=0U;
si2=l4;
si3=l9;
si2=si2 != si3;
l10=si2;
si0=si2?si0:si1;
l11=si0;
si1=1187552U;
si2=l11;
si0=si2?si0:si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=2ULL;
sj0<<=(sj1&63);
sj1=4ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
si0=(U32)(sj0);
l11=si0;
si1=255U;
si0&=si1;
l12=si0;
si1=35U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l5;
si1=48U;
si2=87U;
si3=l12;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l11;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=1ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=63ULL;
l3=sj0;
goto L14;
L17:;
si0=l5;
sj1=l6;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l6;
sj1=3ULL;
sj0>>=(sj1&63);
l6=sj0;
sj0=l3;
sj1=-3ULL;
sj0+=sj1;
l3=sj0;
goto L14;
L16:;
si0=1186400U;
si1=43U;
si2=1188968U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1186400U;
si1=43U;
si2=1188952U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L13;
}
L12:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L9:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1186400U;
si1=43U;
si2=1188936U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=l7;
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1188916U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15024(i,si0);
L2:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1188652U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1188832U;
si4=1188920U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f916(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f917(i,si0,si1);
L0:;
return si0;
}

U32 f917(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3,sj4;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l0=si0;
L11:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
sj1=l3;
si1=(U32)(sj1);
si2=1U;
si1&=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l3;
sj1=2ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=1ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si2=1102780U;
si3=2U;
si4=l2;
si5=16U;
si4+=si5;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l0=si2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l3;
si0=(U32)(sj0);
l6=si0;
if(si0){
goto L12;
}
si0=1U;
l7=si0;
goto L3;
L12:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj0=64ULL;
l3=sj0;
si0=l6;
l0=si0;
L13:;
{
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj0=64ULL;
l3=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L14:;
si0=l7;
si1=l0;
si0+=si1;
si1=-1U;
si0+=si1;
si1=48U;
si2=49U;
sj3=l8;
sj4=1ULL;
sj3&=sj4;
si3=!(sj3);
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l3=sj0;
sj0=l8;
sj1=1ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L13;
}
L9:;
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1186400U;
si1=43U;
si2=1188900U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l7;
si2=l6;
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1188880U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15024(i,si0);
L2:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1188652U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1188832U;
si4=1188884U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f918(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f919(i,si0,si1);
L0:;
return si0;
}

U32 f919(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l0=si0;
L11:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l3;
si3=(U32)(sj3);
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
sj0=l3;
sj1=16ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=4ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=16U;
si4+=si5;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l0=si2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
si1=2U;
si2=3U;
sj0=f1010(i,sj0,si1,si2);
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l3;
si0=(U32)(sj0);
l5=si0;
if(si0){
goto L12;
}
si0=1U;
l6=si0;
goto L3;
L12:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj0=16ULL;
l3=sj0;
si0=l5;
l0=si0;
L13:;
{
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj0=16ULL;
l3=sj0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L14:;
si0=l6;
si1=l0;
si0+=si1;
si1=-1U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l9;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l3=sj0;
sj0=l9;
sj1=4ULL;
sj0>>=(sj1&63);
l9=sj0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L13;
}
L9:;
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1186400U;
si1=43U;
si2=1186568U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1186400U;
si1=43U;
si2=1189004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1188984U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15024(i,si0);
L2:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1188652U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1188832U;
si4=1188988U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=1186300U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1186288U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1186384U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f921(rustpythonInstance*i,U32 l0) {
L0:;
}

void f922(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 si0,si1;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L1;
}
L4:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
sj0=0ULL;
l2=sj0;
goto L2;
L3:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f923(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l1=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=8U;
l3=si0;
si0=0U;
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
l5=si0;
L7:;
si0=l3;
si1=l4;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l1=si0;
L5:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1044(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f924(rustpythonInstance*i,U32 l0,U64 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
sj0=l1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=l1;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l6=si0;
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L7;
}
goto L2;
}
L6:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=l3;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L0;
L3:;
sj0=l2;
sj1=l1;
sj0+=sj1;
l1=sj0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L0;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
goto L0;
L1:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=l3;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L9:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L9;
}
goto L2;
}
L8:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
si1=l5;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L2;
L5:;
sj0=l4;
sj1=l3;
sj0+=sj1;
l3=sj0;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L11;
}
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l0;
si1=l1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
f923(i,si0,si1,sj2);
goto L2;
L12:;
si0=l0;
si1=4U;
si0+=si1;
l7=si0;
si1=l1;
si2=4U;
si1+=si2;
si0=f1051(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L13:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f926(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj2=l2;
sj1+=sj2;
l2=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l6=si0;
L9:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l2=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L9;
}
goto L4;
}
L8:;
si0=1202860U;
si1=32U;
si2=1202892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=l4;
f1299(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L0;
L5:;
sj0=l3;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L11;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L0;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f1050(i,si0,si1,si2);
goto L0;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
f923(i,si0,si1,sj2);
L0:;
}

void f927(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l4;
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l1=si0;
goto L7;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l4=si0;
si0=0U;
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
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
goto L4;
}
si0=l7;
l6=si0;
L9:;
si0=l4;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l1=si0;
L7:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1053(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L12:;
{
sj0=0ULL;
l2=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L12;
}
}
si0=l4;
switch(si0){
case 0:
goto L11;
case 1:
goto L13;
default:
goto L14;
}
L14:;
sj0=l8;
si1=l4;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l4;
si3=l7;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l2=sj0;
si0=1U;
l1=si0;
goto L10;
L13:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
L11:;
si0=0U;
l1=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
f15024(i,si0);
L15:;
si0=0U;
l6=si0;
L10:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1188524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l8;
sj2=l2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f928(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l2=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
sj1=l1;
si0=sj0 < sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l3;
sj2=l1;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
goto L0;
L2:;
si0=1U;
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj2=l1;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
sj1=l1;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L4:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l1=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l7=si0;
L8:;
{
si0=l5;
si1=l6;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
goto L6;
}
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l7;
si0-=si1;
l2=si0;
L6:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
si2=l2;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L5:;
sj0=0ULL;
l1=sj0;
si0=0U;
l2=si0;
si0=l4;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
default:
goto L1;
}
L10:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
L9:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
f15024(i,si0);
L11:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
L0:;
return si0;
}

U32 f929(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
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
U32 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
sj0=l2;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
goto L0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
sj1=l2;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=1U;
si0&=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l8=si0;
si0=0U;
l9=si0;
goto L6;
L7:;
si0=l5;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l3;
l11=si0;
si0=l6;
l1=si0;
si0=0U;
l9=si0;
L8:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l13=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l12;
sj3=l13;
si2=sj2 <= sj3;
sj3=l12;
sj4=l13;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l12;
si0=sj0 <= sj1;
sj1=l15;
sj2=l12;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si2=l8;
sj2=(U64)(si2);
si3=l3;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l13=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l13;
si0=sj0 <= sj1;
sj1=l12;
sj2=l13;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L9:;
si0=l4;
si1=l5;
si0=si0 == si1;
l11=si0;
if(si0){
goto L10;
}
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L11:;
{
si0=l11;
if(si0){
goto L12;
}
si0=1U;
l1=si0;
goto L1;
L12:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l12;
si0=!(sj0);
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=1U;
l1=si0;
si0=l11;
si1=l8;
si0&=si1;
if(si0){
goto L1;
}
L5:;
si0=l4;
if(si0){
goto L13;
}
sj0=0ULL;
l12=sj0;
goto L2;
L13:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l11=si0;
L17:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
goto L15;
}
L16:;
si0=l11;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
si1=l11;
si0-=si1;
l8=si0;
L15:;
si0=l4;
si1=l8;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l0;
si1=l4;
si2=l8;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L14:;
sj0=0ULL;
l12=sj0;
si0=0U;
l1=si0;
si0=l4;
switch(si0){
case 0:
goto L2;
case 1:
goto L18;
default:
goto L1;
}
L18:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
goto L2;
L3:;
si0=l0;
sj1=l2;
si0=f928(i,si0,sj1);
goto L0;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
f15024(i,si0);
L19:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
sj0=l2;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
f15024(i,si0);
L20:;
si0=l1;
L0:;
return si0;
}


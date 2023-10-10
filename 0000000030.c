#include "w2c2_base.h"

#include "rustpython.h"

void f3030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
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
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l4;
si2=l1;
si3=l3;
si4=l3;
si5=44U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3032(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l3;
si2=l1;
si3=l2;
si4=l2;
si5=44U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=l5;
si2=l1;
si3=l4;
si4=12U;
si3+=si4;
si4=l4;
si5=56U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l4;
si2=l1;
si3=l3;
si4=12U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=48U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
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
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=38U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l8;
si1=l6;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=16U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L7;
default:
goto L6;
}
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L6;
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L6:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
sj0=l6;
sj1=0ULL;
si2=l5;
sj0=si2?sj0:sj1;
l6=sj0;
si0=l7;
si1=4U;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=4U;
si2=l5;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=84U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-84U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L30;
case 2:
goto L29;
case 3:
goto L28;
case 4:
goto L27;
case 5:
goto L26;
case 6:
goto L25;
case 7:
goto L24;
case 8:
goto L23;
case 9:
goto L22;
case 10:
goto L21;
case 11:
goto L20;
case 12:
goto L19;
case 13:
goto L18;
case 14:
goto L17;
case 15:
goto L16;
case 16:
goto L15;
case 17:
goto L14;
case 18:
goto L13;
case 19:
goto L12;
case 20:
goto L11;
case 21:
goto L10;
case 22:
goto L9;
case 23:
goto L8;
case 24:
goto L7;
case 25:
goto L6;
case 26:
goto L5;
case 27:
goto L4;
default:
goto L2;
}
L30:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
goto L1;
L29:;
si0=l14;
si1=80U;
si0+=si1;
l14=si0;
goto L1;
L28:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L27:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L26:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L25:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L24:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L23:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L22:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L21:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L20:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L19:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L18:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L17:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L16:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L15:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L14:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L13:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L12:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L11:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L10:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L9:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L8:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L7:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L6:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L5:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L4:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L3:;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l14=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l14;
si1=84U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-84U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L59;
case 1:
goto L58;
case 2:
goto L57;
case 3:
goto L56;
case 4:
goto L55;
case 5:
goto L54;
case 6:
goto L53;
case 7:
goto L52;
case 8:
goto L51;
case 9:
goto L50;
case 10:
goto L49;
case 11:
goto L48;
case 12:
goto L47;
case 13:
goto L46;
case 14:
goto L45;
case 15:
goto L44;
case 16:
goto L43;
case 17:
goto L42;
case 18:
goto L41;
case 19:
goto L40;
case 20:
goto L39;
case 21:
goto L38;
case 22:
goto L37;
case 23:
goto L36;
case 24:
goto L35;
case 25:
goto L34;
case 26:
goto L33;
case 27:
goto L32;
default:
goto L59;
}
L59:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
goto L1;
L58:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
goto L1;
L57:;
si0=l14;
si1=80U;
si0+=si1;
l14=si0;
goto L1;
L56:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L55:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L54:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L53:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L52:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L51:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L50:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L49:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L48:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L47:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L46:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L45:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L44:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L43:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L42:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L41:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L40:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L39:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L38:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L37:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L36:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L35:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L34:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L33:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L32:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L31:;
si0=l11;
si0=!(si0);
if(si0){
goto L60;
}
si0=l13;
si0=!(si0);
if(si0){
goto L60;
}
si0=l11;
si1=36U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-20U;
si0+=si1;
l14=si0;
goto L1;
L60:;
si0=17217460U;
si1=43U;
si2=17217800U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
L1:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=0U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L66;
case 1:
goto L65;
case 2:
goto L61;
case 3:
goto L61;
case 4:
goto L64;
default:
goto L61;
}
L66:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
goto L62;
L65:;
si0=l7;
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L62;
}
goto L61;
L64:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L62;
}
goto L61;
L63:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L61:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L71;
case 1:
goto L70;
case 2:
goto L68;
case 3:
goto L68;
case 4:
goto L69;
default:
goto L68;
}
L71:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L68;
}
goto L67;
L70:;
si0=l7;
si0=!(si0);
if(si0){
goto L68;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L67;
}
goto L68;
L69:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L67;
}
L68:;
goto L0;
L67:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
sj0=l6;
sj1=0ULL;
si2=l5;
sj0=si2?sj0:sj1;
l6=sj0;
si0=l7;
si1=4U;
si2=l7;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=4U;
si2=l5;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=84U;
si0*=si1;
si1=l9;
si0+=si1;
si1=-84U;
si0+=si1;
l14=si0;
goto L4;
L5:;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l14;
si1=84U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-84U;
si0+=si1;
l14=si0;
L4:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L32;
case 2:
goto L31;
case 3:
goto L30;
case 4:
goto L29;
case 5:
goto L28;
case 6:
goto L27;
case 7:
goto L26;
case 8:
goto L25;
case 9:
goto L24;
case 10:
goto L23;
case 11:
goto L22;
case 12:
goto L21;
case 13:
goto L20;
case 14:
goto L19;
case 15:
goto L18;
case 16:
goto L17;
case 17:
goto L16;
case 18:
goto L15;
case 19:
goto L14;
case 20:
goto L13;
case 21:
goto L12;
case 22:
goto L11;
case 23:
goto L10;
case 24:
goto L9;
case 25:
goto L8;
case 26:
goto L7;
case 27:
goto L6;
default:
goto L2;
}
L32:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
goto L1;
L31:;
si0=l14;
si1=80U;
si0+=si1;
l14=si0;
goto L1;
L30:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L29:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L28:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L27:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L26:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L25:;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
goto L1;
L24:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L23:;
si0=l14;
si1=40U;
si0+=si1;
l14=si0;
goto L1;
L22:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L21:;
si0=l14;
si1=36U;
si0+=si1;
l14=si0;
goto L1;
L20:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L19:;
si0=l14;
si1=32U;
si0+=si1;
l14=si0;
goto L1;
L18:;
si0=l14;
si1=24U;
si0+=si1;
l14=si0;
goto L1;
L17:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L16:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L15:;
si0=l14;
si1=56U;
si0+=si1;
l14=si0;
goto L1;
L14:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L13:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L12:;
si0=l14;
si1=28U;
si0+=si1;
l14=si0;
goto L1;
L11:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L10:;
si0=l14;
si1=20U;
si0+=si1;
l14=si0;
goto L1;
L9:;
si0=l14;
si1=12U;
si0+=si1;
l14=si0;
goto L1;
L8:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L7:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L6:;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
goto L1;
L3:;
si0=l11;
si0=!(si0);
if(si0){
goto L33;
}
si0=l13;
si0=!(si0);
if(si0){
goto L33;
}
si0=l11;
si1=36U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-20U;
si0+=si1;
l14=si0;
goto L1;
L33:;
si0=17217460U;
si1=43U;
si2=17217816U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=60U;
si0+=si1;
l14=si0;
L1:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l0;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=0U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L34;
case 3:
goto L34;
case 4:
goto L37;
default:
goto L34;
}
L39:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
goto L35;
L38:;
si0=l7;
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L35;
}
goto L34;
L37:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L35;
}
goto L34;
L36:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L41;
case 3:
goto L41;
case 4:
goto L42;
default:
goto L41;
}
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
goto L40;
L43:;
si0=l7;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
goto L41;
L42:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
L41:;
goto L0;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si1=4U;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si2=l5;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l12;
si1=84U;
si0*=si1;
si1=l7;
si0+=si1;
si1=-84U;
si0+=si1;
l4=si0;
goto L6;
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=84U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-84U;
si0+=si1;
l4=si0;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
case 3:
goto L33;
case 4:
goto L32;
case 5:
goto L31;
case 6:
goto L30;
case 7:
goto L29;
case 8:
goto L28;
case 9:
goto L27;
case 10:
goto L26;
case 11:
goto L25;
case 12:
goto L24;
case 13:
goto L23;
case 14:
goto L22;
case 15:
goto L21;
case 16:
goto L20;
case 17:
goto L19;
case 18:
goto L18;
case 19:
goto L17;
case 20:
goto L16;
case 21:
goto L15;
case 22:
goto L14;
case 23:
goto L13;
case 24:
goto L12;
case 25:
goto L11;
case 26:
goto L10;
case 27:
goto L9;
default:
goto L36;
}
L36:;
si0=l4;
si1=60U;
si0+=si1;
l4=si0;
goto L8;
L35:;
si0=l4;
si1=60U;
si0+=si1;
l4=si0;
goto L8;
L34:;
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
goto L8;
L33:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L8;
L32:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L8;
L31:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L8;
L30:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L8;
L29:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L8;
L28:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L8;
L27:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L8;
L26:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L8;
L25:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L8;
L24:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L8;
L23:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L8;
L22:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L8;
L21:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L8;
L20:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L8;
L19:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L8;
L18:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L8;
L17:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L8;
L16:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L8;
L15:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L8;
L14:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L8;
L13:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L8;
L12:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L8;
L11:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L8;
L10:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L8;
L9:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=48U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
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
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l11;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=11U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
si2=0U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L37;
default:
goto L1;
}
L39:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L38:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L37:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=17217460U;
si1=43U;
si2=17217768U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L41;
case 3:
goto L41;
case 4:
goto L42;
default:
goto L41;
}
L44:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
goto L40;
L43:;
si0=l4;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
goto L41;
L42:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
L41:;
goto L0;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l6;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
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

void f3041(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15024(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l6=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l5;
si2=l2;
si3=l4;
si4=80U;
si3+=si4;
si4=l4;
si5=124U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si4=80U;
si3+=si4;
si4=l3;
si5=124U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l9;
f15024(i,si0);
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=76U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=76U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=104U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=112U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l2;
si3=l5;
si4=76U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3046(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l2;
si3=l4;
si4=76U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l9;
f15024(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l6;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
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

void f3049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15024(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=164U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l6=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=l2;
si3=l4;
si4=128U;
si3+=si4;
si4=l4;
si5=172U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
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
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
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
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si4=128U;
si3+=si4;
si4=l3;
si5=172U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15024(i,si0);
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3053(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=124U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=124U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=160U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l6;
si2=l2;
si3=l5;
si4=124U;
si3+=si4;
si4=l5;
si5=168U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=l2;
si3=l4;
si4=124U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l4;
if(si0){
goto L9;
}
si0=0U;
l3=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
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
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l3;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L6;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L10:;
goto L0;
L7:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L8;
default:
goto L7;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
L7:;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
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
si1=28U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l3;
si4=l3;
si5=44U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3060(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l4;
si2=l1;
si3=l2;
si4=l2;
si5=44U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=l2;
si2=l1;
si3=l4;
si4=12U;
si3+=si4;
si4=l4;
si5=56U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l5;
si2=l1;
si3=l3;
si4=12U;
si3+=si4;
si4=l3;
si5=56U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
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

void f3065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15024(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=108U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
si3=l4;
si4=80U;
si3+=si4;
si4=l4;
si5=124U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l5;
f15024(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
si4=80U;
si3+=si4;
si4=l3;
si5=124U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l9;
f15024(i,si0);
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=76U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=76U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=104U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=112U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
si4=76U;
si3+=si4;
si4=l5;
si5=120U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+28U);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l8;
f15024(i,si0);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=l2;
si3=l4;
si4=76U;
si3+=si4;
si4=l4;
si5=120U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+28U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L11;
case 1:
goto L10;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L9;
default:
goto L1;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L3:;
si0=l9;
f15024(i,si0);
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=1U;
si2=l8;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f3072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=17179869189ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
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

void f3073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=36U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L11;
default:
goto L6;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=4U;
si1=36U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
default:
goto L14;
}
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
goto L15;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
f15024(i,si0);
L14:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l2;
f15024(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=164U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l5=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=l2;
si3=l4;
si4=128U;
si3+=si4;
si4=l4;
si5=172U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
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
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l5;
f15024(i,si0);
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
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
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
si4=128U;
si3+=si4;
si4=l3;
si5=172U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l3;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l7;
f15024(i,si0);
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
l10=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=124U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=124U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=160U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l5;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
si4=124U;
si3+=si4;
si4=l5;
si5=168U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=l6;
si2=l2;
si3=l4;
si4=124U;
si3+=si4;
si4=l4;
si5=168U;
si4+=si5;
f3018(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L5;
default:
goto L2;
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L8:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L3:;
si0=l6;
f15024(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+4U,sj1);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj6;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l7;
si5=i32_load(&i->m0,(U64)si5);
si6=l7;
sj6=i64_load(&i->m0,(U64)si6+4U);
f3038(i,si0,si1,si2,si3,si4,si5,sj6);
L0:;
}

void f3080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l7;
si1=84U;
si0*=si1;
si1=l6;
si0+=si1;
si1=-84U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L43;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
case 4:
goto L39;
case 5:
goto L38;
case 6:
goto L37;
case 7:
goto L36;
case 8:
goto L35;
case 9:
goto L34;
case 10:
goto L33;
case 11:
goto L32;
case 12:
goto L31;
case 13:
goto L30;
case 14:
goto L29;
case 15:
goto L28;
case 16:
goto L27;
case 17:
goto L26;
case 18:
goto L25;
case 19:
goto L24;
case 20:
goto L23;
case 21:
goto L22;
case 22:
goto L21;
case 23:
goto L20;
case 24:
goto L19;
case 25:
goto L18;
case 26:
goto L17;
case 27:
goto L16;
default:
goto L43;
}
L43:;
si0=l4;
si1=60U;
si0+=si1;
l4=si0;
goto L15;
L42:;
si0=l4;
si1=60U;
si0+=si1;
l4=si0;
goto L15;
L41:;
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
goto L15;
L40:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L39:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L38:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L15;
L37:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L15;
L36:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L15;
L35:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
goto L15;
L34:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L15;
L33:;
si0=l4;
si1=40U;
si0+=si1;
l4=si0;
goto L15;
L32:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L15;
L31:;
si0=l4;
si1=36U;
si0+=si1;
l4=si0;
goto L15;
L30:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L15;
L29:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
goto L15;
L28:;
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
goto L15;
L27:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L26:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L15;
L25:;
si0=l4;
si1=56U;
si0+=si1;
l4=si0;
goto L15;
L24:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L15;
L23:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L22:;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
goto L15;
L21:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L20:;
si0=l4;
si1=20U;
si0+=si1;
l4=si0;
goto L15;
L19:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
goto L15;
L18:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L17:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L15;
L16:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L44;
default:
goto L11;
}
L46:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L45:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L44:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L14:;
si0=17217460U;
si1=43U;
si2=17217832U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L51;
case 1:
goto L50;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L49;
default:
goto L48;
}
L51:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
goto L47;
L50:;
si0=l6;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L47;
}
goto L48;
L49:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L47;
}
L48:;
goto L0;
L47:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3081(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L11;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=60U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f3082(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-2U;
si0+=si1;
l9=si0;
si1=1U;
si2=l9;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l6;
si1=8U;
si0+=si1;
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=l4;
f3344(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l4;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3083(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-2U;
si0+=si1;
l10=si0;
si1=1U;
si2=l10;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l8;
si6=12U;
si5+=si6;
si6=l7;
si6=i32_load(&i->m0,(U64)si6);
si7=l7;
sj7=i64_load(&i->m0,(U64)si7+4U);
f3023(i,si0,si1,si2,si3,si4,si5,si6,sj7);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3084(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l9;
si6=8U;
si5+=si6;
si6=l8;
si6=i32_load(&i->m0,(U64)si6);
si7=l8;
sj7=i64_load(&i->m0,(U64)si7+4U);
f3023(i,si0,si1,si2,si3,si4,si5,si6,sj7);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si1=16U;
si0+=si1;
f3475(i,si0);
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
sj0=l10;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
f3359(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=84U;
si1*=si2;
si0+=si1;
si1=l2;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l9;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
si0=l8;
si1=99U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l7;
f15024(i,si0);
L8:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=84U;
si0*=si1;
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l2;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si1=l2;
si2=l10;
f3365(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l2;
si2=84U;
si1*=si2;
si0+=si1;
si1=l4;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l2;
si2=l10;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=16U;
si0+=si1;
f3475(i,si0);
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si1=l1;
f3359(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l11;
si1=l4;
si2=84U;
si1*=si2;
si0+=si1;
si1=l3;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=8U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
si0=l9;
si1=99U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L10;
default:
goto L8;
}
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
goto L9;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l8;
f15024(i,si0);
L8:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
l5=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
f3475(i,si0);
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
sj0=l7;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l4;
si1=l6;
f3359(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L1:;
si0=l1;
si1=l6;
si2=84U;
si1*=si2;
si0+=si1;
si1=l2;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si2=l6;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=84U;
si0*=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l8;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l8;
si2=l6;
f3365(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l8;
si2=84U;
si1*=si2;
si0+=si1;
si1=l2;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l8;
si2=l6;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=16U;
si0+=si1;
f3475(i,si0);
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
f3359(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l7;
si1=l2;
si2=84U;
si1*=si2;
si0+=si1;
si1=l3;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
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
goto L7;
case 1:
goto L6;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L5;
default:
goto L3;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
f3359(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=84U;
si1*=si2;
si0+=si1;
si1=l1;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
si1=99U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
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
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l6;
f15024(i,si0);
L6:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3090(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l7;
f3359(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=84U;
si1*=si2;
si0+=si1;
si1=l2;
si2=84U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L4;
default:
goto L2;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L2:;
si0=l3;
si1=99U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l8;
f15024(i,si0);
L7:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=56U;
si0+=si1;
l8=si0;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
l9=si0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l10=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
l12=si0;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
l13=si0;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
si1=64U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=84U;
si0*=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0+=si1;
si1=-84U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
case 4:
goto L35;
case 5:
goto L34;
case 6:
goto L33;
case 7:
goto L32;
case 8:
goto L31;
case 9:
goto L30;
case 10:
goto L29;
case 11:
goto L28;
case 12:
goto L27;
case 13:
goto L26;
case 14:
goto L25;
case 15:
goto L24;
case 16:
goto L23;
case 17:
goto L22;
case 18:
goto L21;
case 19:
goto L20;
case 20:
goto L19;
case 21:
goto L18;
case 22:
goto L17;
case 23:
goto L16;
case 24:
goto L15;
case 25:
goto L14;
case 26:
goto L13;
case 27:
goto L12;
default:
goto L39;
}
L39:;
si0=l6;
si1=60U;
si0+=si1;
l6=si0;
goto L11;
L38:;
si0=l6;
si1=60U;
si0+=si1;
l6=si0;
goto L11;
L37:;
si0=l6;
si1=80U;
si0+=si1;
l6=si0;
goto L11;
L36:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L35:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L34:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L11;
L33:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
goto L11;
L32:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L11;
L31:;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
goto L11;
L30:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L11;
L29:;
si0=l6;
si1=40U;
si0+=si1;
l6=si0;
goto L11;
L28:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L11;
L27:;
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
goto L11;
L26:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L11;
L25:;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
goto L11;
L24:;
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
goto L11;
L23:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L22:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L11;
L21:;
si0=l6;
si1=56U;
si0+=si1;
l6=si0;
goto L11;
L20:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L11;
L19:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L18:;
si0=l6;
si1=28U;
si0+=si1;
l6=si0;
goto L11;
L17:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L16:;
si0=l6;
si1=20U;
si0+=si1;
l6=si0;
goto L11;
L15:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
goto L11;
L14:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
goto L11;
L12:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L42;
case 1:
goto L41;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L40;
default:
goto L6;
}
L42:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L41:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L40:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L10:;
si0=17217460U;
si1=43U;
si2=17217896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L47;
case 1:
goto L46;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L45;
default:
goto L43;
}
L47:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
goto L44;
L46:;
si0=l0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L44;
}
goto L43;
L45:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L43:;
si0=l7;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=56U;
si0+=si1;
l9=si0;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
l11=si0;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
l12=si0;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l13=si0;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
l14=si0;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l8;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l15;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l8;
si1=64U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l8;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si1=84U;
si0*=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0+=si1;
si1=-84U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
case 4:
goto L35;
case 5:
goto L34;
case 6:
goto L33;
case 7:
goto L32;
case 8:
goto L31;
case 9:
goto L30;
case 10:
goto L29;
case 11:
goto L28;
case 12:
goto L27;
case 13:
goto L26;
case 14:
goto L25;
case 15:
goto L24;
case 16:
goto L23;
case 17:
goto L22;
case 18:
goto L21;
case 19:
goto L20;
case 20:
goto L19;
case 21:
goto L18;
case 22:
goto L17;
case 23:
goto L16;
case 24:
goto L15;
case 25:
goto L14;
case 26:
goto L13;
case 27:
goto L12;
default:
goto L39;
}
L39:;
si0=l7;
si1=60U;
si0+=si1;
l7=si0;
goto L11;
L38:;
si0=l7;
si1=60U;
si0+=si1;
l7=si0;
goto L11;
L37:;
si0=l7;
si1=80U;
si0+=si1;
l7=si0;
goto L11;
L36:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L35:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L34:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L11;
L33:;
si0=l7;
si1=28U;
si0+=si1;
l7=si0;
goto L11;
L32:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L11;
L31:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
goto L11;
L30:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L11;
L29:;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
goto L11;
L28:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L11;
L27:;
si0=l7;
si1=36U;
si0+=si1;
l7=si0;
goto L11;
L26:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L11;
L25:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
goto L11;
L24:;
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
goto L11;
L23:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L22:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L11;
L21:;
si0=l7;
si1=56U;
si0+=si1;
l7=si0;
goto L11;
L20:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L11;
L19:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L18:;
si0=l7;
si1=28U;
si0+=si1;
l7=si0;
goto L11;
L17:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L16:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
goto L11;
L15:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
goto L11;
L14:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L11;
L12:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L11:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l8;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L40;
default:
goto L6;
}
L42:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L41:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L40:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L10:;
si0=17217460U;
si1=43U;
si2=17217864U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L47;
case 1:
goto L46;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L45;
default:
goto L43;
}
L47:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
goto L44;
L46:;
si0=l0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L44;
}
goto L43;
L45:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
case 2:
goto L48;
case 3:
goto L48;
case 4:
goto L50;
default:
goto L48;
}
L52:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
goto L49;
L51:;
si0=l0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L49;
}
goto L48;
L50:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L48:;
si0=l8;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=11U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L10;
}
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=26U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=64424509444ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17217748U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17217740U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17217732U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17217724U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
sj1=111669149722ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
f15024(i,si0);
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L14;
default:
goto L13;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L1;
L15:;
si0=l0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L13;
L14:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L13:;
si0=l1;
f2999(i,si0);
goto L0;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L2;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L5;
L7:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
si0=l1;
f2999(i,si0);
L0:;
}

void f3095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=19U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l7;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l7;
si4=8U;
si3+=si4;
si4=l4;
si5=l7;
si6=28U;
si5+=si6;
si6=l7;
si7=48U;
si6+=si7;
si7=l6;
si8=l8;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l8;
si2=l1;
si3=l5;
si4=8U;
si3+=si4;
si4=l2;
si5=l5;
si6=28U;
si5+=si6;
si6=l5;
si7=48U;
si6+=si7;
si7=l4;
si8=l6;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3098(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-2U;
si0+=si1;
l13=si0;
si1=1U;
si2=l13;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l8;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l8;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=l3;
si2=l1;
si3=l8;
si4=4U;
si3+=si4;
si4=l4;
si5=l8;
si6=24U;
si5+=si6;
si6=l8;
si7=48U;
si6+=si7;
si7=l7;
si8=l9;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3099(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=l3;
si2=l1;
si3=l6;
si4=4U;
si3+=si4;
si4=l2;
si5=l6;
si6=24U;
si5+=si6;
si6=l6;
si7=48U;
si6+=si7;
si7=l5;
si8=l7;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l11=si0;
si1=1U;
si2=l11;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l6;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=99U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l6;
si4=8U;
si3+=si4;
si4=l4;
si5=l6;
si6=28U;
si5+=si6;
si6=l6;
si7=48U;
si6+=si7;
si7=l5;
si8=l7;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3101(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=99U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l7;
si2=l1;
si3=l4;
si4=8U;
si3+=si4;
si4=l2;
si5=l4;
si6=28U;
si5+=si6;
si6=l4;
si7=48U;
si6+=si7;
si7=l3;
si8=l5;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-2U;
si0+=si1;
l12=si0;
si1=1U;
si2=l12;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=99U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=l7;
si4=4U;
si3+=si4;
si4=l4;
si5=l7;
si6=24U;
si5+=si6;
si6=l7;
si7=48U;
si6+=si7;
si7=l6;
si8=l8;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=99U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l7;
si2=l1;
si3=l5;
si4=4U;
si3+=si4;
si4=l2;
si5=l5;
si6=24U;
si5+=si6;
si6=l5;
si7=48U;
si6+=si7;
si7=l4;
si8=l6;
f3017(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738404ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=22U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3106(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=41U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=64424509444ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17218118U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17218110U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17218102U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17218094U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17218086U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17218078U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
f2998(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L14;
default:
goto L12;
}
L16:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L13;
L15:;
si0=l0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L12:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3107(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l2;
si2=48U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L8;
case 1:
goto L7;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L6;
default:
goto L1;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
L10:;
goto L0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=27U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L6;
default:
goto L1;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L11;
default:
goto L10;
}
L13:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
L10:;
goto L0;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L5;
default:
goto L1;
}
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L9;
case 4:
goto L10;
default:
goto L9;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L9;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
L9:;
goto L0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3113(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=56U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f3369(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
sj1=l8;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
l8=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=26U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3114(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l2;
si2=48U;
si1*=si2;
l9=si1;
si0+=si1;
l8=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l7;
si1=l11;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=40U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=32U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l2;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
si2=2U;
f3496(i,si0,si1,si2);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l11;
si2=48U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l9;
si1=-48U;
si0+=si1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=48U;
si0+=si1;
l10=si0;
si0=l9;
si1=l11;
si0-=si1;
si1=-48U;
si0+=si1;
si1=48U;
si0=DIV_U(si0,si1);
l11=si0;
L5:;
{
si0=l10;
f3471(i,si0);
si0=l10;
si1=48U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
l8=si0;
L1:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=l7;
si1-=si2;
si2=48U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
goto L11;
case 1:
goto L10;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L9;
default:
goto L6;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L10:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3115(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l7=si0;
si1=1U;
si2=l7;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=0U;
l2=si0;
si0=l4;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=36U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=44U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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
L7:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3116(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=9U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3117(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L2;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L8;
}
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l3;
si2=1U;
f3496(i,si0,si1,si2);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-1U;
si1+=si2;
l6=si1;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l3;
si1=152U;
si0+=si1;
l2=si0;
si1=l8;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
l10=si0;
si1=l8;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
l11=si0;
si1=l8;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
l12=si0;
si1=l8;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l8;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l1=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=64U;
si0+=si1;
si1=4U;
si0|=si1;
l10=si0;
si1=8U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l12=si0;
si0=l10;
si1=24U;
si0+=si1;
l13=si0;
si0=l10;
si1=32U;
si0+=si1;
l15=si0;
si0=l10;
si1=40U;
si0+=si1;
l16=si0;
si0=l7;
l1=si0;
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
goto L4;
L12:;
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l1;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=1U;
f3496(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=52U;
si0+=si1;
si1=l6;
f3352(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l6;
si2=48U;
si1*=si2;
si0+=si1;
l2=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L3;
}
L7:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=17217460U;
si1=43U;
si2=17217596U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l8;
si1=l1;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l2=si0;
si0=l8;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
L14:;
{
si0=l1;
f3471(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
}
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
f15024(i,si0);
L15:;
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3118(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l1;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
si2=1U;
f3496(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=40U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l3=si0;
si0=l9;
si1=38U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l8;
si2=34U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L8;
default:
goto L1;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L9:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L6:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3119(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=99U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=99U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L7;
default:
goto L3;
}
L9:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L5:;
sj0=l6;
si0=(U32)(sj0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
sj0=l6;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
L4:;
si0=l4;
f15024(i,si0);
L3:;
goto L0;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=17217460U;
si1=43U;
si2=17217976U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3120(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=99U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=36U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=99U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L7;
default:
goto L3;
}
L9:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L5:;
sj0=l6;
si0=(U32)(sj0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
sj0=l6;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
L4:;
si0=l4;
f15024(i,si0);
L3:;
goto L0;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=17217460U;
si1=43U;
si2=17217960U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f3121(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L5;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L3;
default:
goto L1;
}
L5:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l3;
si1=99U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L10:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l5;
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L13;
default:
goto L12;
}
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L11;
L14:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
goto L12;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
L12:;
goto L0;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3122(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=32U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=1U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=42U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L6;
default:
goto L5;
}
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L5:;
goto L0;
L4:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3123(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=124U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f3515(i,si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+129U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l5;
si1=l5;
si2=124U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+111U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+124U);
l4=si0;
si1=-2U;
si0&=si1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l17=si0;
goto L2;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l2=si0;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+17U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+111U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
f2998(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L7;
default:
goto L5;
}
L9:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L5:;
si0=l5;
si1=8U;
si0+=si1;
f3000(i,si0);
goto L1;
L3:;
si0=0U;
l8=si0;
si0=4U;
l2=si0;
si0=0U;
l9=si0;
si0=4U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=4U;
l13=si0;
si0=0U;
l17=si0;
si0=0U;
l16=si0;
si0=0U;
l14=si0;
si0=0U;
l15=si0;
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=44U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=15U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L14;
default:
goto L1;
}
L16:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L15:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L1;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
goto L1;
L13:;
si0=4U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=1U;
si2=l4;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L17;
case 3:
goto L17;
case 4:
goto L19;
default:
goto L17;
}
L21:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
goto L18;
L20:;
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L17:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3125(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
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
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
f3430(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+44U);
l9=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f3126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L9;
default:
goto L8;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
goto L7;
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
L8:;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l4;
si1=99U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L11;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L10;
default:
goto L7;
}
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l9;
f15024(i,si0);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L14;
default:
goto L12;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
goto L13;
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L19;
default:
goto L18;
}
L21:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
goto L17;
L20:;
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L18;
L19:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
L18:;
goto L0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3128(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
sj1=34359738371ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
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
goto L4;
default:
goto L1;
}
L6:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L9;
default:
goto L7;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-2U;
si0+=si1;
l0=si0;
si1=1U;
si2=l0;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L14;
default:
goto L13;
}
L16:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L12;
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L13;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
L13:;
goto L0;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}

void f3129(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l17;
si1=34U;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l17;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l17;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
l1=si0;
si0=l16;
si1=-11U;
si0+=si1;
l3=si0;
si1=19U;
si2=l3;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L17;
case 5:
goto L4;
case 6:
goto L16;
case 7:
goto L4;
case 8:
goto L15;
case 9:
goto L15;
case 10:
goto L14;
case 11:
goto L13;
case 12:
goto L12;
case 13:
goto L5;
case 14:
goto L12;
case 15:
goto L11;
case 16:
goto L11;
case 17:
goto L10;
case 18:
goto L4;
case 19:
goto L9;
case 20:
goto L8;
case 21:
goto L7;
case 22:
goto L6;
case 23:
goto L4;
case 24:
goto L4;
case 25:
goto L4;
case 26:
goto L5;
default:
goto L4;
}
L19:;
si0=l12;
l1=si0;
goto L4;
L18:;
si0=l13;
l1=si0;
goto L4;
L17:;
si0=l12;
l1=si0;
goto L4;
L16:;
si0=l8;
l1=si0;
goto L4;
L15:;
si0=l10;
l1=si0;
goto L4;
L14:;
si0=l9;
l1=si0;
goto L4;
L13:;
si0=l10;
l1=si0;
goto L4;
L12:;
si0=l13;
l1=si0;
goto L4;
L11:;
si0=l7;
l1=si0;
goto L4;
L10:;
si0=l13;
l1=si0;
goto L4;
L9:;
si0=l9;
l1=si0;
goto L4;
L8:;
si0=l10;
l1=si0;
goto L4;
L7:;
si0=l12;
l1=si0;
goto L4;
L6:;
si0=l13;
l1=si0;
goto L4;
L5:;
si0=l14;
l1=si0;
L4:;
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l3=si0;
if(si0){
goto L20;
}
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L23;
default:
goto L22;
}
L25:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
goto L1;
L24:;
si0=l17;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L22;
L23:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L22:;
goto L0;
L3:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}


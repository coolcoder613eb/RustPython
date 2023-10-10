#include "w2c2_base.h"

#include "rustpython.h"

void f8230(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7682(i,si0,si1,si2);
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
si1=72U;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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

void f8231(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7669(i,si0,si1,si2);
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
si1=1280U;
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
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5913(i,si0,si1,si2);
l6=si0;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l6;
si0=f5954(i,si0,si1,si2);
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
f14795(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8232(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=19U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l1;
f8233(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=776U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=28U;
si4+=si5;
f11940(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L10;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l5=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l6=sj0;
goto L9;
L10:;
si0=l4;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L5;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l5=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l6=sj0;
L9:;
si0=0U;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l1;
f8233(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L11;
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
goto L13;
}
si0=l2;
f5522(i,si0);
L13:;
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
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
goto L1;
L12:;
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
f5522(i,si0);
goto L7;
L11:;
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=17361072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l4;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=100U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
switch(si0){
case 0:
goto L16;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L20;
}
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
si1=l7;
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
goto L16;
}
si0=l7;
f1354(i,si0);
goto L16;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
si1=0U;
si2=l7;
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
goto L16;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L16;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
si1=0U;
si2=l7;
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
goto L16;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L16;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l7=si0;
si1=l7;
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
goto L16;
}
si0=l7;
f1354(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
switch(si0){
case 0:
goto L21;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
default:
goto L25;
}
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
si1=l7;
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
goto L21;
}
si0=l7;
f1354(i,si0);
goto L21;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
si1=0U;
si2=l7;
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
goto L21;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L21;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
si1=0U;
si2=l7;
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
goto L21;
}
si0=l7;
si1=0U;
f1361(i,si0,si1);
goto L21;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l7=si0;
si1=l7;
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
goto L21;
}
si0=l7;
f1354(i,si0);
L21:;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=100U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
si2=32U;
si1+=si2;
si0=f11871(i,si0,si1);
l3=si0;
si0=l1;
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
goto L26;
}
si0=l1;
f5522(i,si0);
L26:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L14:;
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
goto L27;
}
si0=l2;
f5522(i,si0);
L27:;
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
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
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
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
f5522(i,si0);
goto L1;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=144U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=6911619425446520681ULL;
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
f1334(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617215U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617200U);
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
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
sj1=-6879226489707195439ULL;
sj0^=sj1;
sj1=l5;
sj2=1280318486529463543ULL;
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
f1334(i,si0,si1,si2,si3);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617215U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617200U);
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
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
f5522(i,si0);
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8234(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l4;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=27U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17361171U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17361164U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17361156U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17361148U);
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
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
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f8235(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=12U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=17360356U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17361088U;
si4=17361132U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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

void f8236(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=l2;
f13151(i,si0,si1,si2);
si0=l2;
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=100U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si2=100U;
si1+=si2;
f13202(i,si0,si1);
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
sj0=i64_load(&i->m0,(U64)si0+100U);
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
si0=f5916(i,si0,si1,si2);
l4=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
f15024(i,si0);
L6:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
L7:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=1U;
si3=l1;
f8232(i,si0,si1,si2,si3);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L8:;
si0=l0;
si1=l4;
si2=1U;
si3=l1;
f8232(i,si0,si1,si2,si3);
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
f5522(i,si0);
L2:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
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
goto L8;
}
si0=l6;
sj1=l9;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L8:;
si0=l3;
si1=104U;
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
si0=0U;
l6=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+100U);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l8;
if(si0){
goto L9;
}
si0=l3;
si1=100U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L9:;
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

void f8238(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
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

void f8239(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
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
si0=f8550(i,si0,si1);
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
si0=l7;
si1=l8;
si2=17625028U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f8240(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
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
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l5;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
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
si3=l5;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-4U;
si0+=si1;
l9=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
L12:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
si1=l8;
si0+=si1;
l7=si0;
si0=l8;
si1=-4U;
si0+=si1;
l6=si0;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l11;
si1=l6;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
L11:;
si0=17315993U;
si1=24U;
si2=l4;
si3=15U;
si2+=si3;
si3=17316020U;
si4=17316060U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
goto L8;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
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
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
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

void f8241(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l5;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l5;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f13154(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l8;
si2=l7;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si0=!(si0);
l7=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l8;
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

void f8242(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
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

void f8243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f8244(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
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
goto L2;
}
goto L1;
L4:;
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
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8870(i,si0,si1);
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
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f8245(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj1=5688902160938974233ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8897362925536672567ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=f1360(i,si0,sj1,si2);
L10:;
si0=l3;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
f5522(i,si0);
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
f1361(i,si0,si1);
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
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
f14795(i);
UNREACHABLE;
L4:;
si0=l2;
f5522(i,si0);
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
f5522(i,si0);
si0=l7;
L0:;
return si0;
}

void f8246(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
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
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L7;
}
si0=l5;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l4;
si2=l2;
f14507(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=l4;
f5522(i,si0);
goto L6;
L7:;
si0=l5;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si2=l2;
si3=l1;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
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
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
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
si0=l8;
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
si1=l4;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L8:;
si0=l3;
si1=12U;
si0+=si1;
si1=l5;
si2=l8;
si0=f5947(i,si0,si1,si2);
l1=si0;
L4:;
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
goto L2;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=l1;
f11838(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L9:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L3;
}
si0=l1;
f5522(i,si0);
L3:;
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

void f8247(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
L4:;
si0=l3;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=17432196U;
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
si1=l3;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=si0 != si1;
if(si0){
goto L2;
}
f14795(i);
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si1=l6;
si2=l3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
si0=l2;
f5522(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8248(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=448U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=424U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=20U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=3U;
i32_store(&i->m0,(U64)si0+428U,si1);
si0=l1;
si1=17444256U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=17444304U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=17444284U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1028U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=17437364U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=408U;
si0+=si1;
si1=l1;
si2=424U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si1=17362148U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l1;
si1=17362136U;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l1;
si1=17362112U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+268U,sj1);
si0=l1;
si1=17362108U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l1;
si1=17362084U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l1;
si1=17362076U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l1;
si1=17362052U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l1;
si1=17362048U;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l1;
si1=17362024U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l1;
si1=17362016U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l1;
si1=17361992U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l1;
si1=17361988U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=17361964U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l1;
si1=17361952U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l1;
si1=17361928U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l1;
si1=17361920U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l1;
si1=17361896U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l1;
sj1=4294967299ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l1;
si1=17361892U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l1;
si1=17361868U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l1;
si1=17361856U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si1=17361832U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si1=17361820U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=17361796U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l1;
si1=17361788U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=17361764U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
si1=17361752U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=17361728U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l1;
si1=17361720U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=17361696U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=17361688U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=308U;
si0+=si1;
si1=l1;
si2=416U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=85899345920ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+388U,sj1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+348U,sj1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l1;
si1=17362296U;
i32_store(&i->m0,(U64)si0+396U,si1);
si0=l1;
si1=17362288U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l1;
si1=17362264U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l1;
si1=17362256U;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l1;
si1=17362232U;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l1;
si1=17362224U;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l1;
si1=17362200U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l1;
si1=17362196U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l1;
si1=17362172U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+408U);
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l0;
si1=l1;
f13458(i,si0,si1);
si0=l1;
si1=448U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8249(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17362532U;
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
si1=17362542U;
si2=5U;
si3=l0;
si4=17362548U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17362564U;
si2=13U;
si3=l2;
si4=4U;
si3+=si4;
si4=17362580U;
si0=f644(i,si0,si1,si2,si3,si4);
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

U32 f8250(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=17363420U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=17363408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f8251(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=80U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=37U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17363180U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17363175U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17363167U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17363159U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17363151U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
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
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l3;
si2=l2;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f8252(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f14133(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L2;
}
si0=l3;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
goto L5;
L6:;
si0=l3;
si1=20U;
si0+=si1;
f166(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
sj2=0ULL;
si3=0U;
f168(i,si0,si1,sj2,si3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+56U);
l4=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
sj2=l4;
sj3=86400ULL;
sj2=I64_DIV_S(sj2,sj3);
si2=(U32)(sj2);
f158(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=2000000000U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l2;
sj1=(U64)(si1);
sj0|=sj1;
l4=sj0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=17638596U;
si1=37U;
si2=17638748U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17639407U;
si1=43U;
si2=17639556U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8253(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
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
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
f14443(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
if(si0){
goto L2;
}
si0=l3;
si1=52U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l3;
si1=16U;
si0+=si1;
f7734(i,si0);
goto L5;
L6:;
si0=l3;
si1=52U;
si0+=si1;
f166(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=68U;
si1+=si2;
sj2=0ULL;
si3=0U;
f168(i,si0,si1,sj2,si3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+76U);
sj2=l4;
sj3=86400ULL;
sj2=I64_DIV_S(sj2,sj3);
si2=(U32)(sj2);
f158(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=2000000000U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l2;
sj1=(U64)(si1);
sj0|=sj1;
l4=sj0;
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=17638596U;
si1=37U;
si2=17638748U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17639407U;
si1=43U;
si2=17639556U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=16U;
si0+=si1;
f7734(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8254(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=l0;
si1=20U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l5=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l2=si0;
goto L2;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L10:;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l6;
l2=si0;
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=4U;
si0+=si1;
l11=si0;
si0=l0;
si1=20U;
si0+=si1;
l3=si0;
si0=0U;
l8=si0;
L11:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l5=si0;
L14:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
si1=16U;
si0+=si1;
l2=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L13;
L16:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L15:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L18:;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
}
L13:;
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L19:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L21;
}
si0=l7;
si1=16U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l4;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L20;
}
L21:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L20:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L22:;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L12:;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l11;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l5=si0;
L24:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
l2=si0;
goto L2;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L26;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l4;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=l7;
si0=si0 != si1;
if(si0){
goto L26;
}
goto L25;
L27:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L23;
L26:;
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L25:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=56U;
si0+=si1;
f1354(i,si0);
L29:;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L24;
}
}
si0=l6;
l2=si0;
goto L2;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=56U;
si0+=si1;
l5=si0;
L30:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=0U;
goto L0;
L31:;
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L33;
}
si0=l7;
si1=16U;
si0+=si1;
l9=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l4;
si1=l9;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L32;
}
L33:;
si0=l5;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L32:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
f1354(i,si0);
L34:;
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L2;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=56U;
si0+=si1;
l5=si0;
L35:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=0U;
goto L0;
L36:;
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L38;
}
si0=l7;
si1=16U;
si0+=si1;
l9=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l4;
si1=l9;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L37;
}
L38:;
si0=l5;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L37:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l5;
f1354(i,si0);
L39:;
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L2:;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
L0:;
return si0;
}

void f8255(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=1U;
l4=si0;
L1:;
L4:;
{
si0=l4;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L10;
}
L11:;
si0=l2;
l5=si0;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
L12:;
si0=l2;
si1=l5;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=0U;
l7=si0;
L14:;
{
si0=l5;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L16:;
{
si0=l4;
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
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L17:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L19:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
l4=si0;
goto L4;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=4U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l12;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l12;
si1=12U;
si0*=si1;
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=4U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
L22:;
si0=l11;
si1=l12;
si2=12U;
si1*=si2;
si0+=si1;
l13=si0;
si0=l12;
l14=si0;
si0=0U;
l9=si0;
L23:;
{
si0=l9;
l15=si0;
si0=l11;
si1=l13;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L25;
}
si0=4U;
l7=si0;
goto L24;
L25:;
si0=l2;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
if(si0){
goto L27;
}
si0=4U;
l7=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
L26:;
si0=0U;
l4=si0;
si0=l2;
l10=si0;
L28:;
{
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l6;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
si0=l7;
si1=l4;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L28;
}
}
L24:;
si0=l15;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l3;
si1=l15;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L23;
}
}
L21:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l3;
si2=l12;
si3=12U;
si2*=si3;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L5;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
l5=si0;
goto L30;
L32:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L31:;
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+4U);
l16=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L29;
}
L30:;
si0=l9;
si1=l5;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=0U;
l7=si0;
L34:;
{
si0=l5;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L36:;
{
si0=l4;
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
goto L37;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L37:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L38:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L33:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L39:;
si0=0U;
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L29:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L0;
L8:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=0U;
l4=si0;
goto L4;
}
L3:;
f53(i);
UNREACHABLE;
L0:;
}

void f8256(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1;
U64 sj0,sj1;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
l4=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L3:;
sj0=0ULL;
l5=sj0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
sj1=l5;
si1=!(sj1);
si0&=si1;
l3=si0;
L1:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+16U,si1);
L0:;
}

void f8257(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=l3;
si2=1U;
si1<<=(si2&31);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l3;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l3;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L3:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L6:;
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+92U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si2=2U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=2U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+84U);
l6=si2;
si0=si2?si0:si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L18:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si1=17363464U;
si2=l6;
si0=si2?si0:si1;
l3=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
l6=si0;
L20:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l4;
l5=si0;
goto L21;
L22:;
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L21:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si1=l5;
si2=4U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l0;
si1=l4;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L23:;
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
l5=si0;
L25:;
{
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
case 2:
goto L33;
case 3:
goto L32;
case 4:
goto L31;
case 5:
goto L30;
case 6:
goto L29;
case 7:
goto L28;
case 8:
goto L26;
case 9:
goto L27;
default:
goto L35;
}
L35:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
goto L26;
L34:;
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+32U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=1U;
l3=si0;
goto L26;
L33:;
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+40U);
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+32U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=2U;
l3=si0;
goto L26;
L32:;
si0=l2;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+25U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=3U;
l3=si0;
goto L26;
L31:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l3=si0;
goto L26;
L30:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=5U;
l3=si0;
goto L26;
L29:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=6U;
l3=si0;
goto L26;
L28:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=7U;
l3=si0;
goto L26;
L27:;
si0=9U;
l3=si0;
L26:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
f8258(i,si0,si1);
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L25;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L24:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l0;
si1=l6;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L36:;
si0=l0;
si1=l6;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l6=si0;
L38:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L39:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L40:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L41:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L42;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l7=si0;
L43:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l0;
si1=l5;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L44:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L45:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l8;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l0;
si1=l5;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L46:;
si0=l0;
si1=l5;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l5=si0;
L48:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L49:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L50:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L51:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l7=si0;
L53:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l0;
si1=l5;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L54:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l0;
si1=l3;
si2=l4;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L55:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l8;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8258(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
F64 l9=0;
U32 l10=0;
F64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L10;
case 4:
goto L14;
case 5:
goto L13;
case 6:
goto L12;
case 7:
goto L11;
case 8:
goto L2;
case 9:
goto L3;
case 10:
goto L4;
case 11:
goto L5;
case 12:
goto L6;
case 13:
goto L7;
case 14:
goto L8;
default:
goto L17;
}
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L18:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=105U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L20;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
sj2=8ULL;
f9483(i,si0,si1,sj2);
goto L19;
L20:;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=l3;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj3=64ULL;
sj4=8ULL;
f9484(i,si0,si1,si2,sj3,sj4);
si0=l2;
si1=36U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f8259(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
if(si0){
goto L23;
}
si0=0U;
l1=si0;
goto L22;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l3;
si0+=si1;
si1=-1U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L25:;
{
si0=l6;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L24;
}
si0=l3;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
si0+=si1;
if(si0){
goto L25;
}
}
si0=l3;
l1=si0;
goto L22;
L24:;
si0=l3;
si1=0U;
si2=l1;
si1-=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
L22:;
si0=l2;
si1=l3;
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
L21:;
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L19:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si1=0U;
si2=l1;
si1-=si2;
si2=l4;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l0;
si1=l3;
si2=l1;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L16:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=103U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L29:;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L15:;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=121U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L32:;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L33:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=117U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l0;
si1=l1;
si2=l3;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L35:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L36:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=115U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L37:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l0;
si1=l1;
si2=l3;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L38:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L39:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=99U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
f8257(i,si0,si1);
goto L1;
L11:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L40:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=40U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L41:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L42:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
case 2:
goto L50;
case 3:
goto L49;
case 4:
goto L48;
case 5:
goto L47;
case 6:
goto L46;
case 7:
goto L45;
case 8:
goto L43;
case 9:
goto L44;
default:
goto L52;
}
L52:;
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L43;
L51:;
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L43;
L50:;
si0=2U;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l9=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L43;
L49:;
si0=3U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l4=si0;
goto L43;
L48:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=4U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L43;
L47:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=5U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L43;
L46:;
si0=6U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L43;
L45:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=7U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L43;
L44:;
si0=9U;
l3=si0;
L43:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
sd1=l9;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L42;
}
goto L1;
}
L10:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si0=!(si0);
if(si0){
goto L53;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L54:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=84U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L53:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L55:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=70U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=17363724U;
si1=21U;
si2=l2;
si3=111U;
si2+=si3;
si3=17363748U;
si4=17363832U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L56:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=123U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L57:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L58:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=8U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L68;
case 1:
goto L67;
case 2:
goto L66;
case 3:
goto L65;
case 4:
goto L64;
case 5:
goto L63;
case 6:
goto L62;
case 7:
goto L61;
case 8:
goto L59;
case 9:
goto L60;
default:
goto L68;
}
L68:;
si0=0U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
goto L59;
L67:;
si0=1U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L59;
L66:;
si0=2U;
l6=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l11=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L59;
L65:;
si0=3U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l12=si0;
goto L59;
L64:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=4U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
goto L59;
L63:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=5U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
goto L59;
L62:;
si0=6U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
goto L59;
L61:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=7U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
goto L59;
L60:;
si0=9U;
l6=si0;
L59:;
si0=l2;
sd1=l11;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l12;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
f13120(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L78;
case 1:
goto L77;
case 2:
goto L76;
case 3:
goto L75;
case 4:
goto L74;
case 5:
goto L73;
case 6:
goto L72;
case 7:
goto L71;
case 8:
goto L69;
case 9:
goto L70;
default:
goto L78;
}
L78:;
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L69;
L77:;
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l8=sj0;
goto L69;
L76:;
si0=2U;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l9=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l8=sj0;
goto L69;
L75:;
si0=3U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l13=si0;
goto L69;
L74:;
sj0=l8;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l8=sj0;
si0=4U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L69;
L73:;
sj0=l8;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l8=sj0;
si0=5U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L69;
L72:;
si0=6U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L69;
L71:;
sj0=l8;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l8=sj0;
si0=7U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L69;
L70:;
si0=9U;
l3=si0;
L69:;
si0=l2;
sd1=l9;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l13;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L58;
}
goto L1;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L79:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=62U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L80:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L81:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L91;
case 1:
goto L90;
case 2:
goto L89;
case 3:
goto L88;
case 4:
goto L87;
case 5:
goto L86;
case 6:
goto L85;
case 7:
goto L84;
case 8:
goto L82;
case 9:
goto L83;
default:
goto L91;
}
L91:;
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L82;
L90:;
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L82;
L89:;
si0=2U;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l9=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L82;
L88:;
si0=3U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l4=si0;
goto L82;
L87:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=4U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L82;
L86:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=5U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L82;
L85:;
si0=6U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L82;
L84:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=7U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L82;
L83:;
si0=9U;
l3=si0;
L82:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
sd1=l9;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L81;
}
goto L1;
}
L6:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L92:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=60U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L93:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L94:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L104;
case 1:
goto L103;
case 2:
goto L102;
case 3:
goto L101;
case 4:
goto L100;
case 5:
goto L99;
case 6:
goto L98;
case 7:
goto L97;
case 8:
goto L95;
case 9:
goto L96;
default:
goto L104;
}
L104:;
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L95;
L103:;
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L95;
L102:;
si0=2U;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l9=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L95;
L101:;
si0=3U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l4=si0;
goto L95;
L100:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=4U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L95;
L99:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=5U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L95;
L98:;
si0=6U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L95;
L97:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=7U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L95;
L96:;
si0=9U;
l3=si0;
L95:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
sd1=l9;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L94;
}
goto L1;
}
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L105;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L105:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=91U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L106;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L106:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l6=si0;
L107:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f13120(i,si0,si1);
si0=8U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L117;
case 1:
goto L116;
case 2:
goto L115;
case 3:
goto L114;
case 4:
goto L113;
case 5:
goto L112;
case 6:
goto L111;
case 7:
goto L110;
case 8:
goto L108;
case 9:
goto L109;
default:
goto L117;
}
L117:;
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L108;
L116:;
si0=1U;
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L108;
L115:;
si0=2U;
l3=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+64U);
l9=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
goto L108;
L114:;
si0=3U;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+49U);
l4=si0;
goto L108;
L113:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=4U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L108;
L112:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=5U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L108;
L111:;
si0=6U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L108;
L110:;
sj0=l7;
sj1=-4294967296ULL;
sj0&=sj1;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1+56U);
sj0|=sj1;
l7=sj0;
si0=7U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
goto L108;
L109:;
si0=9U;
l3=si0;
L108:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
sd1=l9;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
f8258(i,si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L107;
}
goto L1;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L118;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L118:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=83U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L119;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L119:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=46U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L120:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=78U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8259(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f9486(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
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
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f9486(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l5=si0;
si0=1U;
l1=si0;
L6:;
{
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 == si1;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=17452088U;
si1=43U;
si2=17451964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=28U;
si0+=si1;
si1=l1;
si2=1U;
f8716(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L7:;
si0=l4;
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f9486(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=17452088U;
si1=43U;
si2=17451964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f8260(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L3;
case 4:
goto L15;
case 5:
goto L14;
case 6:
goto L13;
case 7:
goto L12;
case 8:
goto L11;
case 9:
goto L10;
case 10:
goto L9;
case 11:
goto L8;
case 12:
goto L7;
case 13:
goto L6;
case 14:
goto L5;
default:
goto L18;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=l3;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L19:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=105U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L21;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
sj2=8ULL;
f9483(i,si0,si1,sj2);
goto L20;
L21:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=l3;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj3=64ULL;
sj4=8ULL;
f9484(i,si0,si1,si2,sj3,sj4);
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f8259(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L24;
}
si0=0U;
l1=si0;
goto L23;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si0+=si1;
si1=-1U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L26:;
{
si0=l6;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L25;
}
si0=l3;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
si0+=si1;
if(si0){
goto L26;
}
}
si0=l3;
l1=si0;
goto L23;
L25:;
si0=l3;
si1=0U;
si2=l1;
si1-=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l2;
si1=l3;
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
L22:;
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si1=0U;
si2=l1;
si1-=si2;
si2=l4;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l0;
si1=l3;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l0;
si1=l3;
si2=l1;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L28:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l6;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L1;
L17:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L29:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=103U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L30:;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L16:;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=121U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L32:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l0;
si1=l1;
si2=8U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L33:;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L15:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=117U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L35:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l0;
si1=l1;
si2=l3;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L36:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L37:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=115U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L38:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l0;
si1=l1;
si2=l3;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L39:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L40:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=99U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
f8257(i,si0,si1);
goto L2;
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L41:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=40U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L42:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L43:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l0;
si0=f6239(i,si0,si1);
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
goto L1;
}
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L44:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=78U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L45:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=46U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L46:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=83U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L47:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=91U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L48:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L49:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l0;
si0=f6239(i,si0,si1);
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L49;
}
goto L1;
}
L7:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L50:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=60U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L51:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L52:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l0;
si0=f6239(i,si0,si1);
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
goto L1;
}
L6:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L53:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=62U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L54:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L55:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l0;
si0=f6239(i,si0,si1);
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L55;
}
goto L1;
}
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L56:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=123U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l0;
si1=l1;
si2=4U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L57:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
si0<<=(si1&31);
l3=si0;
L58:;
{
si0=l3;
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l0;
si0=f6239(i,si0,si1);
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l0;
si0=f6239(i,si0,si1);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L58;
}
goto L1;
}
L4:;
si0=17363724U;
si1=21U;
si2=l2;
si3=95U;
si2+=si3;
si3=17363748U;
si4=17363832U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si0=!(si0);
if(si0){
goto L59;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L60:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=84U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L59:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l0;
si1=l1;
si2=1U;
f2315(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L61:;
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=70U;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=0U;
l1=si0;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f8261(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l1;
si1=l2;
si2=-4U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=4U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
l4=si1;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l2;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l5;
si2=l4;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
f12843(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l1;
si1=l5;
si2=-4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f12838(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l1;
si1=l7;
si2=-2U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=l7;
si2=-6U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=6U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+2U);
l11=si0;
si0=l1;
si1=l7;
si2=-10U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+6U);
l12=si0;
si0=l1;
si1=l7;
si2=-14U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=14U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+10U);
l8=si0;
si0=l1;
si1=l7;
si2=-18U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=18U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+14U);
f8262(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=f13122(i,si0,si1,si2);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l7;
si2=-4U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si1=l7;
si2=-8U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=4U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l1;
si1=l7;
si2=-12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+8U);
f8262(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=f13122(i,si0,si1,si2);
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l1;
si1=l7;
si2=-4U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L30;
}
si0=0U;
l9=si0;
goto L29;
L31:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L30:;
si0=l3;
si1=76U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l3;
si2=68U;
si1+=si2;
f12848(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l9=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
L29:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l7;
si2=-4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
f12851(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
l18=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
f8263(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l19=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l20=si0;
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
f8263(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l21=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l22=si0;
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
f8263(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l23=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l24=si0;
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
f8263(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l25=si0;
si0=l0;
si1=l10;
si2=63U;
si1&=si2;
i32_store16(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l24;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L32:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l24;
si0=!(si0);
if(si0){
goto L26;
}
si0=l23;
f15024(i,si0);
goto L26;
L28:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L27:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L26:;
si0=l22;
si0=!(si0);
if(si0){
goto L6;
}
si0=l21;
f15024(i,si0);
goto L6;
L25:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L24:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L23:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L22:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L18:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L16:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L13:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L12:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l17;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L3;
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L4;
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L4;
L8:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L5;
L7:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l20;
si0=!(si0);
if(si0){
goto L5;
}
si0=l19;
f15024(i,si0);
L5:;
si0=l3;
si1=60U;
si0+=si1;
f8264(i,si0);
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l17;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
f15024(i,si0);
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8262(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si2=l2;
f686(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=-4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
f12836(i,si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8264(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
l0=si0;
L2:;
{
si0=l0;
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
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
f15024(i,si0);
L1:;
L0:;
}

void f8265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
F64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=304U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
if(si0){
goto L4;
}
si0=0U;
l5=si0;
goto L3;
L4:;
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
f2316(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=255U;
si0&=si1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L5;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L5;
case 5:
goto L5;
case 6:
goto L23;
case 7:
goto L5;
case 8:
goto L5;
case 9:
goto L5;
case 10:
goto L5;
case 11:
goto L5;
case 12:
goto L5;
case 13:
goto L5;
case 14:
goto L5;
case 15:
goto L5;
case 16:
goto L5;
case 17:
goto L5;
case 18:
goto L5;
case 19:
goto L5;
case 20:
goto L14;
case 21:
goto L5;
case 22:
goto L13;
case 23:
goto L5;
case 24:
goto L5;
case 25:
goto L5;
case 26:
goto L5;
case 27:
goto L5;
case 28:
goto L5;
case 29:
goto L5;
case 30:
goto L26;
case 31:
goto L5;
case 32:
goto L5;
case 33:
goto L5;
case 34:
goto L5;
case 35:
goto L5;
case 36:
goto L5;
case 37:
goto L5;
case 38:
goto L27;
case 39:
goto L5;
case 40:
goto L5;
case 41:
goto L5;
case 42:
goto L5;
case 43:
goto L24;
case 44:
goto L25;
case 45:
goto L5;
case 46:
goto L5;
case 47:
goto L5;
case 48:
goto L5;
case 49:
goto L5;
case 50:
goto L5;
case 51:
goto L17;
case 52:
goto L5;
case 53:
goto L5;
case 54:
goto L5;
case 55:
goto L5;
case 56:
goto L5;
case 57:
goto L12;
case 58:
goto L5;
case 59:
goto L15;
case 60:
goto L5;
case 61:
goto L5;
case 62:
goto L5;
case 63:
goto L21;
case 64:
goto L5;
case 65:
goto L22;
case 66:
goto L5;
case 67:
goto L5;
case 68:
goto L5;
case 69:
goto L5;
case 70:
goto L5;
case 71:
goto L5;
case 72:
goto L5;
case 73:
goto L5;
case 74:
goto L5;
case 75:
goto L19;
case 76:
goto L5;
case 77:
goto L12;
case 78:
goto L5;
case 79:
goto L5;
case 80:
goto L5;
case 81:
goto L20;
case 82:
goto L5;
case 83:
goto L16;
default:
goto L18;
}
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
goto L7;
}
goto L6;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
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
goto L6;
}
goto L7;
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
goto L6;
}
goto L7;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=336U;
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
goto L6;
}
goto L7;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1300U;
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
goto L6;
}
goto L7;
L22:;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l4=si1;
si2=l4;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l7=si2;
si1^=si2;
si2=l7;
si1-=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l1;
si1=l5;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
si2=l7;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
sj1=8ULL;
si2=l6;
si3=l5;
f11977(i,si0,sj1,si2,si3);
si0=l3;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l3;
si1=96U;
si0+=si1;
si1=l4;
si2=-1U;
si1^=si2;
si2=30U;
si1>>=(si2&31);
si2=2U;
si1&=si2;
si2=l3;
si3=288U;
si2+=si3;
f8256(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si0=f9908(i,si0,si1);
l1=si0;
goto L7;
L28:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L21:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l1;
si1=l4;
si2=-9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l7;
sd1=f64_load(&i->m0,(U64)si1+1U);
si0=f10380(i,si0,sd1);
l1=si0;
goto L7;
L29:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L20:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l4;
si2=-9U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l7;
sd0=f64_load(&i->m0,(U64)si0+1U);
l8=sd0;
si0=l1;
si1=l4;
si2=-17U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=17U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
sd1=l8;
si2=l7;
sd2=f64_load(&i->m0,(U64)si2+9U);
si0=f10381(i,si0,sd1,sd2);
l1=si0;
goto L7;
L30:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L19:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
si2=l5;
si0=f10383(i,si0,si1,si2);
l1=si0;
goto L7;
L31:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L18:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12281(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
goto L7;
L33:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L32:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+97U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L17:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12284(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
goto L7;
L35:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L34:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+97U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L16:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=92U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12280(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
goto L7;
L37:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L36:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+97U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L15:;
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
f8261(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
l2=si0;
si0=l3;
si1=192U;
si0+=si1;
si1=5U;
si0+=si1;
si1=l3;
si2=96U;
si1+=si2;
si2=5U;
si1+=si2;
si2=91U;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l2;
i32_store8(&i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=192U;
si1+=si2;
si0=f10384(i,si0,si1);
l1=si0;
goto L7;
L38:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+100U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L14:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12283(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
goto L7;
L40:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L39:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+97U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L13:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=76U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12282(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
goto L7;
L42:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L41:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+97U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L12:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l4;
si2=l5;
f686(i,si0,si1,si2);
si0=2U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L43;
}
si0=l3;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l2=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=l1;
si0=f10382(i,si0,si1,si2);
l1=si0;
goto L7;
L44:;
si0=0U;
l1=si0;
L43:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L10:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L9:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L7:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L6:;
f14795(i);
UNREACHABLE;
L5:;
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=304U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
F64 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=240U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
if(si0){
goto L4;
}
si0=0U;
l5=si0;
goto L3;
L4:;
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
f2316(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=255U;
si0&=si1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L5;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L5;
case 5:
goto L5;
case 6:
goto L28;
case 7:
goto L5;
case 8:
goto L5;
case 9:
goto L5;
case 10:
goto L5;
case 11:
goto L5;
case 12:
goto L5;
case 13:
goto L5;
case 14:
goto L5;
case 15:
goto L5;
case 16:
goto L5;
case 17:
goto L5;
case 18:
goto L5;
case 19:
goto L5;
case 20:
goto L17;
case 21:
goto L5;
case 22:
goto L16;
case 23:
goto L5;
case 24:
goto L5;
case 25:
goto L5;
case 26:
goto L5;
case 27:
goto L5;
case 28:
goto L5;
case 29:
goto L5;
case 30:
goto L30;
case 31:
goto L5;
case 32:
goto L5;
case 33:
goto L5;
case 34:
goto L5;
case 35:
goto L5;
case 36:
goto L5;
case 37:
goto L5;
case 38:
goto L27;
case 39:
goto L5;
case 40:
goto L5;
case 41:
goto L5;
case 42:
goto L5;
case 43:
goto L26;
case 44:
goto L29;
case 45:
goto L5;
case 46:
goto L5;
case 47:
goto L5;
case 48:
goto L5;
case 49:
goto L5;
case 50:
goto L5;
case 51:
goto L20;
case 52:
goto L5;
case 53:
goto L5;
case 54:
goto L5;
case 55:
goto L5;
case 56:
goto L5;
case 57:
goto L15;
case 58:
goto L5;
case 59:
goto L18;
case 60:
goto L5;
case 61:
goto L5;
case 62:
goto L5;
case 63:
goto L24;
case 64:
goto L5;
case 65:
goto L25;
case 66:
goto L5;
case 67:
goto L5;
case 68:
goto L5;
case 69:
goto L5;
case 70:
goto L5;
case 71:
goto L5;
case 72:
goto L5;
case 73:
goto L5;
case 74:
goto L5;
case 75:
goto L22;
case 76:
goto L5;
case 77:
goto L15;
case 78:
goto L5;
case 79:
goto L5;
case 80:
goto L5;
case 81:
goto L23;
case 82:
goto L5;
case 83:
goto L19;
default:
goto L21;
}
L30:;
si0=l3;
si1=3U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L29:;
si0=l3;
si1=259U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L28:;
si0=l3;
si1=9U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L27:;
si0=l3;
si1=8U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L26:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L25:;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l4=si1;
si2=l4;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l7=si2;
si1^=si2;
si2=l7;
si1-=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l1;
si1=l5;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
si2=l7;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
sj1=8ULL;
si2=l6;
si3=l5;
f11977(i,si0,sj1,si2,si3);
si0=l3;
si1=224U;
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
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=-1U;
si1^=si2;
si2=30U;
si1>>=(si2&31);
si2=2U;
si1&=si2;
si2=l3;
si3=224U;
si2+=si3;
f8256(i,si0,si1,si2);
si0=l2;
si1=l3;
si2=32U;
si1+=si2;
si0=f13101(i,si0,si1);
l1=si0;
goto L6;
L31:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l1;
si1=l4;
si2=-9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
sd0=f64_load(&i->m0,(U64)si0+1U);
l8=sd0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
sd1=l8;
f64_store(&i->m0,(U64)si0+40U,sd1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L32:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L23:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l1;
si1=l4;
si2=-9U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l7;
sd0=f64_load(&i->m0,(U64)si0+1U);
l8=sd0;
si0=l1;
si1=l4;
si2=-17U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=17U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l7;
sd1=f64_load(&i->m0,(U64)si1+9U);
f64_store(&i->m0,(U64)si0,sd1);
si0=l3;
sd1=l8;
f64_store(&i->m0,(U64)si0+40U,sd1);
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L33:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=5U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L34:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L21:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l3;
si3=12U;
si2+=si3;
f12279(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
goto L6;
L36:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L35:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+33U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L20:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L19:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L18:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
f8261(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l2=si0;
si0=l3;
si1=128U;
si0+=si1;
si1=5U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=5U;
si1+=si2;
si2=91U;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l2;
i32_store8(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si0=f13102(i,si0,si1);
l1=si0;
goto L6;
L37:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+36U);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L17:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=l4;
si2=-5U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
si2=5U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=l5;
f686(i,si0,si1,si2);
si0=2U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L38;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f13100(i,si0,si1);
l1=si0;
goto L6;
L39:;
si0=0U;
l1=si0;
L38:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L14:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L13:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L12:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L10:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L9:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L7:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L5:;
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8267(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652652U;
f646(i,si0,si1,si2);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8268(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652444U;
f646(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8269(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652588U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8270(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652604U;
f646(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8271(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652492U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8272(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652428U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8273(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652460U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8274(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652476U;
f646(i,si0,si1,si2);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f8275(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l1=si0;
si1=19U;
si2=l1;
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
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
L29:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
L30:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
l1=si0;
L32:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=44U;
si0+=si1;
l1=si0;
L34:;
{
si0=l1;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L35:;
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L36:;
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
f15024(i,si0);
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L38:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L39:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=44U;
si0+=si1;
l1=si0;
L41:;
{
si0=l1;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L42:;
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L43:;
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15024(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L45:;
si0=l1;
si1=48U;
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
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L46:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15024(i,si0);
L50:;
si0=l1;
f15024(i,si0);
L47:;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=44U;
si0+=si1;
l1=si0;
L52:;
{
si0=l1;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L53:;
si0=l1;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L54:;
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
f15024(i,si0);
L55:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L56:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
f15024(i,si0);
L61:;
si0=l1;
f15024(i,si0);
L58:;
si0=l4;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
l1=si0;
L63:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l1;
f8275(i,si0);
L64:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l2;
f15024(i,si0);
L65:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
l1=si0;
L67:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l0;
si1=36U;
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
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
l1=si0;
L69:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l4=si0;
L71:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L73:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l2;
si1=112U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
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
si0=l5;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=0U;
l4=si0;
L76:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L78:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l2;
si1=112U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L79:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=0U;
l4=si0;
L81:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L83:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l2;
si1=112U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L84:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=0U;
l4=si0;
L86:;
{
si0=l5;
si1=l4;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
L88:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l2;
si1=112U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L89;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L89:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L86;
}
}
L85:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L90:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
l1=si0;
L92:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L92;
}
}
L91:;
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
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l2;
l1=si0;
L94:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f15024(i,si0);
L95:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
l1=si0;
L97:;
{
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
f15024(i,si0);
L98:;
si0=l1;
f8275(i,si0);
si0=l1;
si1=88U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
l1=si0;
L100:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
f8276(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
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
si0=l1;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
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
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8275(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L4:;
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
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l2;
l1=si0;
L102:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L102;
}
}
L101:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l2;
l1=si0;
L104:;
{
si0=l1;
f8275(i,si0);
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
L1:;
L0:;
}

void f8276(rustpythonInstance*i,U32 l0) {
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
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L6:;
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
l3=si0;
goto L2;
L5:;
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
l3=si0;
goto L2;
L4:;
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
l3=si0;
goto L2;
L3:;
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
L2:;
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f8277(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
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
si0=i32_load(&i->m0,(U64)si0);
f8278(i,si0);
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
goto L28;
}
si0=l1;
l3=si0;
L29:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si0=l1;
f15024(i,si0);
L30:;
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
goto L31;
}
si0=l1;
l3=si0;
L32:;
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
si0=l1;
f15024(i,si0);
L33:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L34:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
L35:;
si0=l0;
si1=60U;
si0+=si1;
f8279(i,si0);
goto L0;
L25:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L36:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f8278(i,si0);
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
goto L37;
}
si0=l1;
l3=si0;
L38:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
f15024(i,si0);
L39:;
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
goto L40;
}
si0=l1;
l3=si0;
L41:;
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
goto L41;
}
}
L40:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
f15024(i,si0);
L42:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L43:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15024(i,si0);
L44:;
si0=l0;
si1=60U;
si0+=si1;
f8279(i,si0);
goto L0;
L24:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L45:;
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
goto L46;
}
si0=l1;
l3=si0;
L47:;
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
goto L47;
}
}
L46:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15024(i,si0);
L48:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
l3=si0;
L50:;
{
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
f15024(i,si0);
L51:;
si0=l3;
f8275(i,si0);
si0=l3;
si1=88U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
f15024(i,si0);
L52:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
l3=si0;
L54:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
f15024(i,si0);
L55:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
l3=si0;
L57:;
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
goto L57;
}
}
L56:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
f15024(i,si0);
L58:;
si0=l0;
si1=80U;
si0+=si1;
f8279(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L22:;
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
goto L59;
}
si0=l1;
l3=si0;
L60:;
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
goto L60;
}
}
L59:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L21:;
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
goto L61;
}
si0=l1;
l3=si0;
L62:;
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
goto L62;
}
}
L61:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
f15024(i,si0);
L63:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
f8279(i,si0);
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f8275(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l1;
l3=si0;
L65:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
f15024(i,si0);
L66:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l1;
l3=si0;
L68:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
f15024(i,si0);
L69:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l1;
l3=si0;
L71:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
f15024(i,si0);
L72:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
l3=si0;
L74:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
f15024(i,si0);
L75:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
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
goto L76;
}
si0=l1;
l3=si0;
L77:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
f15024(i,si0);
L78:;
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
goto L79;
}
si0=l1;
l3=si0;
L80:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
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
goto L81;
}
si0=l1;
l3=si0;
L82:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
f15024(i,si0);
L83:;
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
goto L84;
}
si0=l1;
l3=si0;
L85:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l4;
l3=si0;
L87:;
{
si0=l3;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l2;
f8275(i,si0);
si0=l2;
f15024(i,si0);
L88:;
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L87;
}
}
L86:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
f15024(i,si0);
L89:;
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
goto L90;
}
si0=l1;
l3=si0;
L91:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l1;
f15024(i,si0);
L92:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l4;
l3=si0;
L94:;
{
si0=l3;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f8275(i,si0);
si0=l2;
f15024(i,si0);
L95:;
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
f15024(i,si0);
L96:;
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
goto L97;
}
si0=l1;
l3=si0;
L98:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L98;
}
}
L97:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
f15024(i,si0);
L99:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L11:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=0U;
l4=si0;
L101:;
{
si0=l5;
si1=l4;
si2=80U;
si1*=si2;
si0+=si1;
l1=si0;
f8280(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L102:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l3=si0;
L104:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l1;
si1=64U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L105;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L105:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L101;
}
}
L100:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l2;
f8275(i,si0);
si0=l2;
f15024(i,si0);
L106:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L9:;
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
goto L107;
}
si0=l1;
l3=si0;
L108:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L108;
}
}
L107:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
f15024(i,si0);
L109:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=0U;
l4=si0;
L111:;
{
si0=l5;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L112:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L113;
}
si0=l3;
f15024(i,si0);
L113:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L115:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L115;
}
}
L114:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L116:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L110:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L117;
}
si0=l5;
f15024(i,si0);
L117:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l1;
l3=si0;
L119:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L119;
}
}
L118:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L120;
}
si0=l1;
f15024(i,si0);
L120:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
l3=si0;
L122:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
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
goto L123;
}
si0=l1;
l3=si0;
L124:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L124;
}
}
L123:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
f15024(i,si0);
L125:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=0U;
l4=si0;
L127:;
{
si0=l5;
si1=l4;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L128:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l3;
f15024(i,si0);
L129:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L131:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L132:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L127;
}
}
L126:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l5;
f15024(i,si0);
L133:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
l3=si0;
L135:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l1;
f15024(i,si0);
L136:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
l3=si0;
L138:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f8275(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L140:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L141:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l1;
f15024(i,si0);
L142:;
si0=l3;
si1=40U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
f15024(i,si0);
L143:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l4;
si1=32U;
si0+=si1;
l3=si0;
L145:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L146:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
f15024(i,si0);
L147:;
si0=l3;
si1=40U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L145;
}
}
L144:;
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
L4:;
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
goto L148;
}
si0=l1;
l3=si0;
L149:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L150:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L3:;
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
goto L151;
}
si0=l1;
l3=si0;
L152:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L153:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f8278(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f8281(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f8281(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f8275(i,si0);
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L4:;
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si1=24U;
si0+=si1;
f8281(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f8275(i,si0);
si0=l2;
f15024(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15024(i,si0);
L8:;
si0=l1;
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f8279(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
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
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L7;
}
L7:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L6:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f8275(i,si0);
goto L4;
L5:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
si1=36U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
f15024(i,si0);
L9:;
L0:;
}

void f8280(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
case 4:
goto L4;
case 5:
goto L3;
case 6:
goto L2;
default:
goto L9;
}
L9:;
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
goto L10;
}
si0=l1;
l3=si0;
L11:;
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
goto L11;
}
}
L10:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=8U;
si0+=si1;
f8276(i,si0);
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
goto L12;
}
si0=l1;
l3=si0;
L13:;
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
goto L13;
}
}
L12:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L5:;
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
goto L14;
}
si0=l1;
l3=si0;
L15:;
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
goto L15;
}
}
L14:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
f15024(i,si0);
L16:;
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
goto L17;
}
si0=l1;
l3=si0;
L18:;
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
goto L18;
}
}
L17:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
f15024(i,si0);
L19:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8275(i,si0);
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
goto L20;
}
si0=l1;
l3=si0;
L21:;
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
goto L21;
}
}
L20:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
f15024(i,si0);
L22:;
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
goto L23;
}
si0=l1;
l3=si0;
L24:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L25:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l0;
si1=40U;
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
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
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
goto L1;
}
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
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
f8280(i,si0);
si0=l3;
f15024(i,si0);
L29:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f8281(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
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
si1=44U;
si0+=si1;
l3=si0;
L2:;
{
si0=l3;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f8275(i,si0);
si0=l4;
f15024(i,si0);
L4:;
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f8275(i,si0);
si0=l4;
f15024(i,si0);
L6:;
si0=l3;
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
L0:;
}

void f8282(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
L3:;
{
si0=l1;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
{
si0=l6;
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
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l2=si0;
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l3=si0;
L10:;
{
si0=l1;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L12:;
{
si0=l6;
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
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L14:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l0;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l2=si0;
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=0U;
l3=si0;
L17:;
{
si0=l1;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L19:;
{
si0=l6;
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
goto L20;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L20:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L16:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L15:;
L0:;
}

void f8283(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=-11U;
si0+=si1;
l1=si0;
si1=19U;
si2=l1;
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f8283(i,si0);
si0=l1;
f15024(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f8283(i,si0);
si0=l1;
f15024(i,si0);
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L27:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
l1=si0;
L32:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L32;
}
}
L31:;
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
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L34:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L35:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L36:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
f15024(i,si0);
L37:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L38:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L39:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
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
f15024(i,si0);
L42:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L43:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15024(i,si0);
L44:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L45:;
si0=l1;
si1=40U;
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
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
L46:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L48:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15024(i,si0);
L50:;
si0=l1;
f15024(i,si0);
L47:;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L52:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L53:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L54:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
f15024(i,si0);
L55:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L56:;
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L59;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L59:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L60:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
f15024(i,si0);
L61:;
si0=l1;
f15024(i,si0);
L58:;
si0=l4;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
l1=si0;
L63:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l1;
f8283(i,si0);
L64:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L65;
}
si0=l2;
f15024(i,si0);
L65:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
l1=si0;
L67:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L67;
}
}
L66:;
si0=l0;
si1=20U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
l1=si0;
L69:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L69;
}
}
L68:;
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
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l4=si0;
L71:;
{
si0=l5;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f8283(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f8283(i,si0);
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L73:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l2;
si1=96U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=0U;
l4=si0;
L76:;
{
si0=l5;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f8283(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f8283(i,si0);
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L78:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L78;
}
}
L77:;
si0=l2;
si1=96U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L79:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=0U;
l4=si0;
L81:;
{
si0=l5;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f8283(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f8283(i,si0);
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L83:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l2;
si1=96U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L84:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=0U;
l4=si0;
L86:;
{
si0=l5;
si1=l4;
si2=112U;
si1*=si2;
si0+=si1;
l2=si0;
f8283(i,si0);
si0=l2;
si1=48U;
si0+=si1;
f8283(i,si0);
si0=l2;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l1=si0;
L88:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l2;
si1=96U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L89;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L89:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L86;
}
}
L85:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L90;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L90:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
l1=si0;
L92:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L92;
}
}
L91:;
si0=l0;
si1=24U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l2;
l1=si0;
L94:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f15024(i,si0);
L95:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
l1=si0;
L97:;
{
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
f15024(i,si0);
L98:;
si0=l1;
f8283(i,si0);
si0=l1;
si1=72U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L97;
}
}
L96:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
l1=si0;
L100:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L100;
}
}
L99:;
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
L8:;
si0=l0;
f8276(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
f8283(i,si0);
si0=l1;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8283(i,si0);
si0=l1;
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
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l2;
l1=si0;
L102:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L102;
}
}
L101:;
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
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l2;
l1=si0;
L104:;
{
si0=l1;
f8283(i,si0);
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L104;
}
}
L103:;
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
L1:;
L0:;
}

void f8284(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L27:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f8285(i,si0);
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
goto L28;
}
si0=l1;
l3=si0;
L29:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f15024(i,si0);
L30:;
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
goto L31;
}
si0=l1;
l3=si0;
L32:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=36U;
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
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L34:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
f15024(i,si0);
L35:;
si0=l0;
si1=44U;
si0+=si1;
f8286(i,si0);
goto L0;
L25:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L36:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f8285(i,si0);
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
goto L37;
}
si0=l1;
l3=si0;
L38:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
f15024(i,si0);
L39:;
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
goto L40;
}
si0=l1;
l3=si0;
L41:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
goto L42;
}
si0=l1;
f15024(i,si0);
L42:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L43:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f15024(i,si0);
L44:;
si0=l0;
si1=44U;
si0+=si1;
f8286(i,si0);
goto L0;
L24:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L45:;
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
goto L46;
}
si0=l1;
l3=si0;
L47:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15024(i,si0);
L48:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
l3=si0;
L50:;
{
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
f15024(i,si0);
L51:;
si0=l3;
f8283(i,si0);
si0=l3;
si1=72U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L50;
}
}
L49:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
f15024(i,si0);
L52:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
l3=si0;
L54:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
f15024(i,si0);
L55:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
l3=si0;
L57:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L57;
}
}
L56:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
f15024(i,si0);
L58:;
si0=l0;
si1=64U;
si0+=si1;
f8286(i,si0);
goto L0;
L23:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L22:;
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
goto L59;
}
si0=l1;
l3=si0;
L60:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L60;
}
}
L59:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L21:;
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
goto L61;
}
si0=l1;
l3=si0;
L62:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
f15024(i,si0);
L63:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
f8286(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f8283(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
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
goto L64;
}
si0=l1;
l3=si0;
L65:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L66;
}
si0=l1;
f15024(i,si0);
L66:;
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
goto L67;
}
si0=l1;
l3=si0;
L68:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si0=l1;
f15024(i,si0);
L69:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
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
goto L70;
}
si0=l1;
l3=si0;
L71:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l1;
f15024(i,si0);
L72:;
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
goto L73;
}
si0=l1;
l3=si0;
L74:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
f15024(i,si0);
L75:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l1;
l3=si0;
L77:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
f15024(i,si0);
L78:;
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
goto L79;
}
si0=l1;
l3=si0;
L80:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l1;
l3=si0;
L82:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
f15024(i,si0);
L83:;
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
goto L84;
}
si0=l1;
l3=si0;
L85:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
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
si0=l1;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L86;
}
si0=l4;
l3=si0;
L87:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l2;
f8283(i,si0);
si0=l2;
f15024(i,si0);
L88:;
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L87;
}
}
L86:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
f15024(i,si0);
L89:;
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
goto L90;
}
si0=l1;
l3=si0;
L91:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L92;
}
si0=l1;
f15024(i,si0);
L92:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L93;
}
si0=l4;
l3=si0;
L94:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l2;
f8283(i,si0);
si0=l2;
f15024(i,si0);
L95:;
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L94;
}
}
L93:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
f15024(i,si0);
L96:;
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
goto L97;
}
si0=l1;
l3=si0;
L98:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L98;
}
}
L97:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
f15024(i,si0);
L99:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=0U;
l4=si0;
L101:;
{
si0=l5;
si1=l4;
si2=72U;
si1*=si2;
si0+=si1;
l1=si0;
f8287(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L102:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
L104:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L104;
}
}
L103:;
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L105;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L105:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L101;
}
}
L100:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
goto L0;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l2;
f8283(i,si0);
si0=l2;
f15024(i,si0);
L106:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L9:;
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
goto L107;
}
si0=l1;
l3=si0;
L108:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L108;
}
}
L107:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L109;
}
si0=l1;
f15024(i,si0);
L109:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=0U;
l4=si0;
L111:;
{
si0=l5;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L112;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L112:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L113;
}
si0=l3;
f15024(i,si0);
L113:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L115:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L115;
}
}
L114:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L116;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L116:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L110:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L117;
}
si0=l5;
f15024(i,si0);
L117:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l1;
l3=si0;
L119:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L119;
}
}
L118:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L120;
}
si0=l1;
f15024(i,si0);
L120:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
l3=si0;
L122:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L122;
}
}
L121:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
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
goto L123;
}
si0=l1;
l3=si0;
L124:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L124;
}
}
L123:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
f15024(i,si0);
L125:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=0U;
l4=si0;
L127:;
{
si0=l5;
si1=l4;
si2=36U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L128:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L129;
}
si0=l3;
f15024(i,si0);
L129:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L131:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L131;
}
}
L130:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L132:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L127;
}
}
L126:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L133;
}
si0=l5;
f15024(i,si0);
L133:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
l3=si0;
L135:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l1;
f15024(i,si0);
L136:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
l3=si0;
L138:;
{
si0=l3;
f8284(i,si0);
si0=l3;
si1=84U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
f8283(i,si0);
si0=l2;
f15024(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l4;
l3=si0;
L140:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L141:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L142;
}
si0=l1;
f15024(i,si0);
L142:;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L140;
}
}
L139:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L143;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l3;
f15024(i,si0);
L143:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L144;
}
si0=l4;
l3=si0;
L145:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L146;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L146:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L147;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L147;
}
si0=l1;
f15024(i,si0);
L147:;
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L145;
}
}
L144:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
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
goto L148;
}
si0=l1;
l3=si0;
L149:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L150;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L150:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L149;
}
}
L148:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
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
goto L151;
}
si0=l1;
l3=si0;
L152:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L153;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L153:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f8285(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f8292(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f8292(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
f8283(i,si0);
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L4:;
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si1=24U;
si0+=si1;
f8292(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f8283(i,si0);
si0=l2;
f15024(i,si0);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15024(i,si0);
L8:;
si0=l1;
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f8286(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
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
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L7;
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
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f8283(i,si0);
goto L4;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
si1=28U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
f15024(i,si0);
L9:;
L0:;
}

void f8287(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
case 4:
goto L4;
case 5:
goto L3;
case 6:
goto L2;
default:
goto L9;
}
L9:;
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
goto L10;
}
si0=l1;
l3=si0;
L11:;
{
si0=l3;
f8287(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=8U;
si0+=si1;
f8276(i,si0);
goto L0;
L6:;
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
goto L12;
}
si0=l1;
l3=si0;
L13:;
{
si0=l3;
f8287(i,si0);
si0=l3;
si1=56U;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
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
goto L14;
}
si0=l1;
l3=si0;
L15:;
{
si0=l3;
f8283(i,si0);
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
f15024(i,si0);
L16:;
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
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f8287(i,si0);
si0=l3;
si1=56U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
f15024(i,si0);
L19:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f8283(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
l3=si0;
L21:;
{
si0=l3;
f8287(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
f15024(i,si0);
L22:;
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
goto L23;
}
si0=l1;
l3=si0;
L24:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L25:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l0;
si1=24U;
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
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f8287(i,si0);
si0=l3;
si1=56U;
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
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
f8287(i,si0);
si0=l3;
f15024(i,si0);
L29:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f8288(rustpythonInstance*i,U32 l0) {
L0:;
}

void f8289(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L1:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L2:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
L4:;
{
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l1;
si1=32U;
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
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
f15024(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
l2=si0;
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
l1=si0;
L9:;
{
si0=l1;
f8289(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f15024(i,si0);
L10:;
L0:;
}

void f8290(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L2:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L3:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15024(i,si0);
L5:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
si0=0U;
l4=si0;
L7:;
{
si0=l3;
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L8;
case 5:
goto L11;
case 6:
goto L10;
case 7:
goto L9;
default:
goto L8;
}
L13:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L15:;
{
si0=l1;
f8291(i,si0);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L8;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L8;
L11:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L8;
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L8;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
f8290(i,si0);
si0=l1;
f15024(i,si0);
L8:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l3;
f15024(i,si0);
L6:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
l1=si0;
L17:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
si0=l4;
f15024(i,si0);
L16:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
l1=si0;
L20:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
si0=l4;
f15024(i,si0);
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
l1=si0;
L23:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L24:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L23;
}
}
si0=l4;
f15024(i,si0);
L22:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
l1=si0;
L26:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L26;
}
}
si0=l4;
f15024(i,si0);
L25:;
L0:;
}

void f8291(rustpythonInstance*i,U32 l0) {
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
l2=si0;
f8290(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f8292(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f8283(i,si0);
si0=l4;
f15024(i,si0);
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f8283(i,si0);
si0=l4;
f15024(i,si0);
L6:;
si0=l3;
si1=40U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
L0:;
}

void f8293(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L20;
L23:;
si0=l3;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
L22:;
si0=l5;
si1=l7;
si0-=si1;
l6=si0;
L21:;
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L25;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l6;
si1=31U;
si0&=si1;
l10=si0;
si0=l6;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l6=si0;
goto L24;
L26:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
goto L24;
L27:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l10;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l6=si0;
goto L24;
L25:;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
L24:;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=1U;
l4=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=2U;
l4=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L28:;
si0=l1;
si1=l4;
si2=l7;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L7;
L30:;
si0=l3;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
L29:;
si0=1U;
l4=si0;
L20:;
si0=l1;
si1=l4;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
si2=l7;
si3=l5;
si4=17364148U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
goto L9;
L18:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
l11=si1;
si0+=si1;
l4=si0;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l14=sj0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=l12;
si0-=si1;
l16=si0;
si0=1U;
si1=l13;
si0-=si1;
l17=si0;
si0=l3;
si1=l8;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l18=si1;
si0+=si1;
l19=si0;
si0=l15;
l10=si0;
L31:;
{
sj0=l14;
si1=l3;
si2=l4;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L32;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l8;
si0+=si1;
si1=l11;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L12;
}
L34:;
{
sj0=l14;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l18;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L12;
}
goto L34;
}
L33:;
si0=l8;
si1=l7;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
L32:;
si0=l13;
si1=l10;
si2=l13;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l20=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l3;
si1=l7;
si0+=si1;
l4=si0;
si0=l20;
l5=si0;
L38:;
{
si0=l7;
si1=l5;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l8;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L37:;
si0=l13;
l5=si0;
L39:;
{
si0=l10;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l5;
si1=l7;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l9;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L39;
}
}
si0=l7;
si1=l12;
si0+=si1;
l7=si0;
si0=l16;
l10=si0;
goto L35;
L36:;
si0=l17;
si1=l7;
si0+=si1;
si1=l5;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
L35:;
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L31;
}
goto L12;
}
L17:;
si0=l1;
si1=l4;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
l6=si0;
si0=l4;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
goto L3;
L16:;
si0=l13;
si1=-1U;
si0+=si1;
l5=si0;
si0=l8;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l9;
si1=-1U;
si0+=si1;
l18=si0;
si0=l3;
si1=l13;
si0+=si1;
l19=si0;
si0=l9;
si1=l13;
si0+=si1;
l20=si0;
si0=l8;
si1=l13;
si0-=si1;
l16=si0;
goto L40;
L41:;
si0=l5;
si1=l8;
si0=si0 < si1;
if(si0){
goto L43;
}
goto L42;
L43:;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
L44:;
{
sj0=l14;
si1=l3;
si2=l4;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L45;
}
si0=l3;
si1=l7;
si0+=si1;
l4=si0;
si0=l13;
l5=si0;
L47:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l5;
si0+=si1;
l10=si0;
si1=-1U;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l9;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L47;
}
}
si0=l7;
si1=l12;
si0+=si1;
l7=si0;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L44;
}
goto L12;
L46:;
si0=l10;
si1=-1U;
si0+=si1;
l4=si0;
goto L13;
L45:;
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L44;
}
goto L12;
}
L42:;
L49:;
{
sj0=l14;
si1=l3;
si2=l4;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L48;
}
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L12;
}
goto L49;
}
L48:;
si0=l13;
si0=!(si0);
if(si0){
goto L11;
}
goto L15;
L40:;
L50:;
{
sj0=l14;
si1=l3;
si2=l4;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L12;
}
goto L50;
L51:;
si0=l20;
l9=si0;
si0=l16;
l10=si0;
si0=l7;
l4=si0;
L54:;
{
si0=l13;
si1=l4;
si0+=si1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l13;
l20=si0;
goto L10;
L55:;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l4;
si1=1U;
si0+=si1;
l7=si0;
goto L53;
L56:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L54;
}
}
si0=l5;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l3;
si1=l7;
si0+=si1;
l9=si0;
si0=l13;
l4=si0;
L57:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l4;
si0+=si1;
l10=si0;
si1=-1U;
si0+=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l18;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=-1U;
si1+=si2;
l4=si1;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L57;
}
}
si0=l7;
si1=l12;
si0+=si1;
l7=si0;
L53:;
si0=l7;
si1=l11;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L50;
}
goto L12;
L52:;
}
si0=l13;
si0=!(si0);
if(si0){
goto L11;
}
L15:;
si0=l5;
si1=l8;
si2=17363928U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=-1U;
si0+=si1;
l4=si0;
L13:;
si0=l4;
si1=l6;
si2=17363944U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L8;
L11:;
si0=l1;
si1=l7;
si2=l8;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L3;
L10:;
si0=l6;
si1=l20;
si2=l7;
si1+=si2;
l7=si1;
si2=l6;
si3=l7;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l6;
si2=17363960U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L58;
}
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
L58:;
si0=l6;
si1=l5;
si0-=si1;
l7=si0;
si0=l3;
si1=l5;
si0+=si1;
l2=si0;
goto L1;
L7:;
si0=l5;
si1=l7;
si0-=si1;
l5=si0;
L6:;
si0=l5;
if(si0){
goto L59;
}
si0=0U;
l5=si0;
goto L4;
L59:;
si0=1U;
l4=si0;
si0=l3;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=-32U;
si0=si0 < si1;
L5:;
si0=l4;
si1=1U;
si0^=si1;
l5=si0;
L4:;
si0=l1;
si1=l5;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
l6=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l5;
si0-=si1;
l7=si0;
si0=l3;
si1=l5;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f8294(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f8294(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=i32_load8_u(&i->m0,(U64)si0+73U);
if(si0){
goto L1;
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l1;
si1=13U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=1U;
si0^=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
L15:;
si0=l6;
si1=l7;
si0+=si1;
l9=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l9;
si1=-2U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l5;
si1=31U;
si0&=si1;
l5=si0;
goto L18;
L19:;
si0=l9;
si1=-3U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l5;
si1=15U;
si0&=si1;
l5=si0;
goto L20;
L21:;
si0=l9;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L20:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L18:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L17:;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=-1U;
l3=si0;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=-2U;
l3=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=-3U;
si1=-4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L22:;
si0=l1;
si1=l3;
si2=l7;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
if(si0){
goto L23;
}
si0=0U;
l3=si0;
si0=0U;
l7=si0;
goto L7;
L23:;
si0=l7;
si1=l8;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L8;
L25:;
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
L24:;
si0=0U;
l3=si0;
L14:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l6;
si1=l8;
si2=0U;
si3=l7;
si4=17364316U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
goto L10;
L12:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0-=si1;
l3=si0;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l11;
si2=l15;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si1=-1U;
si0+=si1;
l17=si0;
si0=l6;
si1=l11;
si0-=si1;
l18=si0;
si0=0U;
si1=l11;
si0-=si1;
l19=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l22=sj0;
L31:;
{
sj0=1ULL;
si1=l6;
si2=l3;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l22;
sj0&=sj1;
l23=sj0;
si0=l14;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L35;
}
sj0=l23;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L36;
}
si0=l11;
l24=si0;
si0=l3;
l7=si0;
goto L32;
L36:;
L37:;
{
si0=l19;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l18;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=l11;
si0-=si1;
l7=si0;
l3=si0;
sj0=l22;
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L34;
}
goto L37;
}
L35:;
sj0=l23;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L33;
}
si0=l20;
l24=si0;
si0=l3;
l7=si0;
goto L32;
L34:;
si0=l11;
si1=l7;
si0+=si1;
l13=si0;
si0=l11;
l24=si0;
goto L32;
L33:;
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
L38:;
{
si0=l19;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l18;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=l11;
si0-=si1;
l7=si0;
l3=si0;
sj0=l22;
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L38;
}
}
si0=l11;
si1=l7;
si0+=si1;
l13=si0;
si0=l11;
l24=si0;
si0=l11;
l20=si0;
L32:;
si0=l15;
si1=l15;
si2=l20;
si3=l15;
si4=l20;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l14;
si3=-1U;
si2=si2 == si3;
l25=si2;
si0=si2?si0:si1;
l3=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l17;
si1=l3;
si0+=si1;
l5=si0;
si0=0U;
si1=l3;
si0-=si1;
l4=si0;
si0=l3;
si1=l7;
si0+=si1;
si1=-1U;
si0+=si1;
l3=si0;
L43:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=l3;
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l10;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L43;
}
}
si0=l13;
si1=l15;
si0-=si1;
si1=l4;
si0-=si1;
l13=si0;
si0=l11;
l3=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L40;
}
goto L39;
L42:;
si0=l3;
if(si0){
goto L29;
}
L41:;
si0=l24;
si1=l15;
si2=l24;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l6;
si1=l7;
si0+=si1;
l10=si0;
si0=l15;
l3=si0;
L44:;
{
si0=l9;
si1=l3;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l14;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L6;
L45:;
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l7;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l10;
si1=l3;
si0+=si1;
l4=si0;
si0=l16;
si1=l3;
si0+=si1;
l5=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L44;
}
}
si0=l13;
si1=l21;
si0-=si1;
l13=si0;
si0=l21;
l3=si0;
si0=l25;
if(si0){
goto L39;
}
L40:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
l20=si0;
L39:;
si0=l13;
si1=l11;
si0-=si1;
l3=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L31;
}
}
L30:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L9;
L29:;
si0=l4;
si1=l11;
si2=17364008U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l12;
si1=l11;
si2=17363976U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l8;
si1=l7;
si2=l15;
si1+=si2;
l3=si1;
si2=l8;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l8;
si2=17363992U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l3;
si1=l8;
si2=17364024U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=0U;
l7=si0;
si0=0U;
l13=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
L10:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+64U);
l13=si1;
si0-=si1;
l4=si0;
goto L5;
L8:;
si0=0U;
l3=si0;
si0=l6;
si1=l7;
si0+=si1;
l4=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=-2U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
L7:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
l13=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l13;
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8295(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
L4:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L5:;
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L9:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si1=l7;
si2=1U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
l11=si0;
si0=l10;
l7=si0;
si0=l11;
if(si0){
goto L9;
}
}
si0=l6;
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
goto L6;
}
goto L7;
L8:;
si0=0U;
l9=si0;
si0=l6;
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
goto L3;
}
L7:;
si0=l6;
si1=0U;
f1361(i,si0,si1);
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
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
goto L10;
}
si0=l9;
f5522(i,si0);
L10:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=0U;
l4=si0;
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L2:;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
L11:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L12;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L12:;
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L18:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=l7;
si2=1U;
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
l11=si0;
si0=l10;
l7=si0;
si0=l11;
if(si0){
goto L18;
}
}
si0=l6;
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
goto L15;
}
goto L16;
L17:;
si0=0U;
l9=si0;
si0=l6;
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
L16:;
si0=l6;
si1=0U;
f1361(i,si0,si1);
L15:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
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
goto L19;
}
si0=l9;
f5522(i,si0);
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l4;
si1-=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L13;
L14:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L1:;
si0=l0;
si1=l2;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f8296(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
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
f8719(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l4;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
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

void f8297(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=20U;
si0*=si1;
l4=si0;
si0=l1;
si1=107374183U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=20U;
si1*=si2;
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
f8719(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l4;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
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

void f8298(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l2;
si1=l1;
si0=f15027(i,si0,si1);
l2=si0;
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
L2:;
goto L0;
L1:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8299(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=1U;
f8716(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
f71(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=1U;
si0+=si1;
si1=l4;
si2=l3;
si3=l1;
si2-=si3;
si0=f15144(i,si0,si1,si2);
L2:;
si0=l4;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f8300(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l1;
si2=l3;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=l4;
f8716(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si0+=si1;
l1=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si0=f15145(i,si0,si1,si2);
si0=l5;
si1=l3;
si2=l4;
si1+=si2;
l3=si1;
si0+=si1;
l1=si0;
L3:;
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f8301(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+12U);
f12664(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L3:;
{
si0=l5;
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
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L5:;
{
si0=l5;
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
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8302(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U64 l25=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=108U;
si0+=si1;
si1=4U;
si0+=si1;
l8=si0;
si1=24U;
si0+=si1;
l9=si0;
si0=l8;
si1=16U;
si0+=si1;
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
l11=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=108U;
si2+=si3;
f12660(i,si0,si1,si2);
si0=l12;
if(si0){
goto L7;
}
si0=0U;
l12=si0;
goto L6;
L7:;
si0=l12;
si1=l7;
si0=f12866(i,si0,si1);
l12=si0;
L6:;
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l13=si0;
if(si0){
goto L2;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l6;
l5=si0;
goto L3;
L4:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l5;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f12832(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L2:;
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l1=si0;
si1=l2;
si2=64U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l8=si0;
si1=l2;
si2=64U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l2;
si2=64U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l2;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=192U;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l14;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l14;
si1=12U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=108U;
si0+=si1;
si1=4U;
si0+=si1;
l9=si0;
si1=24U;
si0+=si1;
l10=si0;
si0=l9;
si1=16U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l13=si0;
si0=1U;
l15=si0;
L11:;
{
si0=l5;
si1=40U;
si0+=si1;
l8=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L13;
}
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
goto L8;
L13:;
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=108U;
si2+=si3;
f12660(i,si0,si1,si2);
si0=l12;
if(si0){
goto L15;
}
si0=0U;
l12=si0;
goto L14;
L15:;
si0=l12;
si1=l7;
si0=f12866(i,si0,si1);
l12=si0;
L14:;
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l17=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l18=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l19=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l20=si0;
if(si0){
goto L16;
}
si0=l8;
si1=40U;
si0+=si1;
l8=si0;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L12;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l19=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l18=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l17=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l15;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l15;
si2=1U;
f8752(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
L17:;
si0=l14;
si1=l15;
si2=48U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l21;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=12U;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=20U;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=28U;
si0+=si1;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=36U;
si0+=si1;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L11;
}
L10:;
si0=4U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l6;
l8=si0;
si0=l6;
l5=si0;
L8:;
si0=l5;
si1=l6;
si2=l8;
si1-=si2;
si2=40U;
si1=DIV_U(si1,si2);
f12832(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
f15024(i,si0);
L18:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8303(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+12U);
f12665(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L3:;
{
si0=l5;
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
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L5:;
{
si0=l5;
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
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8304(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
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
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L4;
}
L7:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l5;
si2=l2;
si3=136U;
si2+=si3;
f12709(i,si0,si1,si2);
goto L3;
L6:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l5;
si2=l2;
si3=136U;
si2+=si3;
f12709(i,si0,si1,si2);
goto L3;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
f12857(i,si0);
goto L2;
L4:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l5;
si2=l2;
si3=136U;
si2+=si3;
f12687(i,si0,si1,si2);
L3:;
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
l1=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=144U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=12U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=20U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=28U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l3;
si0=(U32)(sj0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+60U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=40U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si0=1U;
l5=si0;
L9:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=4U;
si0+=si1;
l1=si0;
si0=l10;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L13;
default:
goto L15;
}
L15:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l9;
si2=l2;
si3=136U;
si2+=si3;
f12687(i,si0,si1,si2);
goto L12;
L14:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l9;
si2=l2;
si3=136U;
si2+=si3;
f12709(i,si0,si1,si2);
goto L12;
L13:;
si0=l2;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
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
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l9;
si2=l2;
si3=136U;
si2+=si3;
f12709(i,si0,si1,si2);
L12:;
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=36U;
si0+=si1;
si1=l5;
si2=1U;
f8756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
goto L10;
L11:;
si0=l4;
si1=28U;
si0+=si1;
l8=si0;
goto L8;
L10:;
si0=l7;
si1=l6;
si0+=si1;
l1=si0;
si1=-4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=36U;
si0+=si1;
l6=si0;
si0=l4;
si1=28U;
si0+=si1;
l4=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=48U;
si0+=si1;
f12857(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=144U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8305(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
l5=si0;
si1=2U;
si0>>=(si1&31);
l6=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=4U;
l1=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=715827880U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l2;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f12623(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8306(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+4U);
l10=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+12U);
f3546(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=l11;
f3546(i,si0,si1,si2);
si0=l13;
if(si0){
goto L3;
}
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=l5;
si0-=si1;
si1=5U;
si0>>=(si1&31);
l1=si0;
L8:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l13;
f15024(i,si0);
L10:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=160U;
si0=f15022(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l15;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
sj1=l10;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l15;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l15;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l15;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l15;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=32U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=1U;
l16=si0;
L12:;
{
si0=0U;
l13=si0;
L15:;
{
si0=l11;
si1=l13;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l5;
si1=4U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f3546(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si1=l1;
si2=l9;
f3546(i,si0,si1,si2);
si0=l7;
if(si0){
goto L16;
}
si0=l11;
si1=l13;
si2=32U;
si1+=si2;
l13=si1;
si0+=si1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L11;
L16:;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l16;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si1=36U;
si0+=si1;
si1=l16;
si2=1U;
f8745(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
goto L13;
L14:;
si0=l5;
si1=32U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l6;
si1=l11;
si0-=si1;
si1=l13;
si0-=si1;
si1=-32U;
si0+=si1;
si1=5U;
si0>>=(si1&31);
l1=si0;
L17:;
{
si0=l5;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l13;
f15024(i,si0);
L19:;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
goto L11;
}
L13:;
si0=l15;
si1=l16;
si2=40U;
si1*=si2;
si0+=si1;
l13=si0;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l13;
si1=l14;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l13;
sj1=l10;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l13;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=32U;
si0+=si1;
l11=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
f15024(i,si0);
L20:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=160U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8307(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
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
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
f12632(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=8U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f12863(i,si0);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=320U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=64U;
si1+=si2;
si2=80U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f12632(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=8U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=80U;
l4=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=28U;
si0+=si1;
si1=l1;
si2=1U;
f8753(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L6:;
si0=l3;
si1=l4;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=80U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=80U;
si0+=si1;
l4=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f12632(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=8U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=40U;
si0+=si1;
f12863(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=320U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8308(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f12647(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
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
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l14;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
f12827(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l9=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=224U;
si0=f15022(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l15;
si1=12U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=20U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=28U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=36U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=44U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=52U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=-48U;
si0+=si1;
l16=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0|=si1;
l9=si0;
si1=40U;
si0+=si1;
l10=si0;
si0=l9;
si1=32U;
si0+=si1;
l11=si0;
si0=l9;
si1=24U;
si0+=si1;
l12=si0;
si0=l9;
si1=16U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
si0=1U;
l18=si0;
L11:;
{
si0=l16;
si1=l5;
si0-=si1;
l14=si0;
L15:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l9;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l7;
si2=l2;
si3=192U;
si2+=si3;
f12647(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
l19=si0;
si1=l1;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l14;
si1=-48U;
si0+=si1;
l14=si0;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L10;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l25=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l19=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l18;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=48U;
si0=DIV_U(si0,si1);
l1=si0;
L18:;
{
si0=l5;
f12827(i,si0);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L10;
}
L13:;
si0=l2;
si1=12U;
si0+=si1;
si1=l18;
si2=1U;
f8746(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
L12:;
si0=l15;
si1=l18;
si2=56U;
si1*=si2;
si0+=si1;
l14=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
f15024(i,si0);
L19:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=224U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8309(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l5;
si2-=si3;
si3=2U;
si2>>=(si3&31);
l6=si2;
si3=l2;
si4=-1U;
si3+=si4;
l7=si3;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
l2=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
{
si0=l5;
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
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L2;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l8;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
l2=si0;
L9:;
{
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l8;
l5=si0;
goto L1;
L3:;
si0=l8;
l5=si0;
L2:;
si0=l4;
l2=si0;
L1:;
si0=l1;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l6=si0;
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l2=si0;
L12:;
{
si0=l5;
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
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l2=si0;
L14:;
{
si0=l5;
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
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L15:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
goto L10;
}
L11:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L16:;
L0:;
}

void f8310(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
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
U64 sj0,sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
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
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=188U;
si0+=si1;
si1=4U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=188U;
si2+=si3;
f12639(i,si0,si1,si2);
si0=l2;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
if(si0){
goto L3;
}
si0=l1;
si1=36U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l1;
si1=36U;
si0+=si1;
l4=si0;
L5:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f12859(i,si0);
goto L2;
L3:;
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l4=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l7=si0;
si1=l2;
si2=104U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=l1;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=176U;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=12U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=20U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=36U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+52U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l5=si0;
si0=l2;
si1=188U;
si0+=si1;
si1=4U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=1U;
l10=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=188U;
si2+=si3;
f12639(i,si0,si1,si2);
si0=l2;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=32U;
si0+=si1;
l13=si0;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l14=si0;
if(si0){
goto L12;
}
si0=l1;
si1=36U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L8;
L12:;
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l15=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l10;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=28U;
si0+=si1;
si1=l10;
si2=1U;
f8750(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
goto L10;
L11:;
si0=l1;
si1=36U;
si0+=si1;
l4=si0;
goto L8;
L10:;
si0=l9;
si1=l10;
si2=44U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=12U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=20U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=28U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=36U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=36U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=40U;
si0+=si1;
f12859(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=224U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=176U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8311(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+12U);
f12624(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L3:;
{
si0=l5;
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
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L5:;
{
si0=l5;
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
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8312(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=256U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=32U;
si0+=si1;
l10=si0;
si0=l8;
si1=24U;
si0+=si1;
l11=si0;
si0=l8;
si1=16U;
si0+=si1;
l12=si0;
si0=l8;
si1=8U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l14=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=208U;
si2+=si3;
f12647(i,si0,si1,si2);
si0=l14;
if(si0){
goto L9;
}
si0=0U;
l14=si0;
goto L8;
L9:;
si0=l14;
si1=l7;
si0=f12866(i,si0,si1);
l14=si0;
L8:;
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l14=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=80U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
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
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l14;
si1=39U;
si0=si0 != si1;
if(si0){
goto L3;
}
L10:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l14=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L11:;
{
si0=l5;
f12827(i,si0);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
f12827(i,si0);
si0=l1;
f15024(i,si0);
L12:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L11;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
l1=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l8=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l9=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l10=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=256U;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l12;
si1=12U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=20U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=28U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=36U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=44U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=52U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=56U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=144U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si1=4U;
si0|=si1;
l11=si0;
si1=40U;
si0+=si1;
l13=si0;
si0=l11;
si1=32U;
si0+=si1;
l15=si0;
si0=l11;
si1=24U;
si0+=si1;
l16=si0;
si0=l11;
si1=16U;
si0+=si1;
l17=si0;
si0=l11;
si1=8U;
si0+=si1;
l18=si0;
si0=1U;
l19=si0;
L14:;
{
si0=0U;
l14=si0;
L18:;
{
si0=l9;
si1=l14;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l13;
si1=l5;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l7;
si2=l2;
si3=208U;
si2+=si3;
f12647(i,si0,si1,si2);
si0=l8;
if(si0){
goto L20;
}
si0=0U;
l8=si0;
goto L19;
L20:;
si0=l8;
si1=l7;
si0=f12866(i,si0,si1);
l8=si0;
L19:;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
l8=si0;
si1=38U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l2;
si1=80U;
si0+=si1;
si1=56U;
si0+=si1;
l10=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=48U;
si0+=si1;
l20=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=32U;
si0+=si1;
l22=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l8;
si1=39U;
si0=si0 != si1;
if(si0){
goto L21;
}
L22:;
si0=l9;
si1=l14;
si2=56U;
si1+=si2;
l14=si1;
si0+=si1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L13;
L21:;
}
si0=l2;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
l9=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l10=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l19;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 == si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l5;
si1=56U;
si0+=si1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=104U;
si0+=si1;
l5=si0;
si0=l6;
si1=l9;
si0-=si1;
si1=l14;
si0-=si1;
si1=-56U;
si0+=si1;
si1=56U;
si0=DIV_U(si0,si1);
l14=si0;
L23:;
{
si0=l5;
si1=-48U;
si0+=si1;
f12827(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
f12827(i,si0);
si0=l1;
f15024(i,si0);
L24:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L23;
}
goto L13;
}
L16:;
si0=l2;
si1=4U;
si0+=si1;
si1=l19;
si2=1U;
f8740(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L15:;
si0=l12;
si1=l19;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=60U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=56U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
f15024(i,si0);
L25:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8313(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l2=si0;
i->g0=si0;
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
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
f12646(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=38U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f12856(i,si0);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=512U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=64U;
si1+=si2;
si2=128U;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f12646(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=38U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=128U;
l4=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=28U;
si0+=si1;
si1=l1;
si2=1U;
f8754(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L6:;
si0=l3;
si1=l4;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=128U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=128U;
si0+=si1;
l4=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f12646(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=38U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=40U;
si0+=si1;
f12856(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8314(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+12U);
f12625(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L3:;
{
si0=l5;
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
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l5;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l7=si0;
L5:;
{
si0=l5;
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
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8315(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=368U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=284U;
si0+=si1;
si1=4U;
si0+=si1;
l8=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0+=si1;
l9=si0;
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=28U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
si2=80U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=284U;
si2+=si3;
f12640(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=28U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=104U;
si0+=si1;
si1=l9;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=29U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l6;
l5=si0;
goto L3;
L4:;
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l5;
si1-=si2;
si2=84U;
si1=DIV_U(si1,si2);
f12831(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=368U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=4U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=284U;
si0+=si1;
si1=4U;
si0+=si1;
l9=si0;
si0=l2;
si1=192U;
si0+=si1;
si1=4U;
si0+=si1;
l11=si0;
si0=1U;
l12=si0;
L10:;
{
si0=l5;
si1=84U;
si0+=si1;
l1=si0;
L11:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=28U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
goto L7;
L12:;
si0=l9;
si1=l5;
si2=4U;
si1+=si2;
si2=80U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l2;
si1=192U;
si0+=si1;
si1=l7;
si2=l2;
si3=284U;
si2+=si3;
f12640(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l8=si0;
si1=28U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l2;
si1=104U;
si0+=si1;
si1=l11;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=29U;
si0=si0 != si1;
if(si0){
goto L13;
}
L14:;
si0=l1;
si1=84U;
si0+=si1;
l1=si0;
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L11;
L13:;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l12;
si2=1U;
f8755(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
L15:;
si0=l10;
si1=l12;
si2=92U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=84U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L10;
}
L9:;
si0=4U;
si1=368U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l6;
l1=si0;
si0=l6;
l5=si0;
L7:;
si0=l5;
si1=l6;
si2=l1;
si1-=si2;
si2=84U;
si1=DIV_U(si1,si2);
f12831(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
f15024(i,si0);
L16:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=368U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8316(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=272U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=216U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=48U;
si0+=si1;
l9=si0;
si0=l8;
si1=40U;
si0+=si1;
l10=si0;
si0=l8;
si1=32U;
si0+=si1;
l11=si0;
si0=l8;
si1=24U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l13=si0;
L7:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l5;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l5;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=216U;
si2+=si3;
f12626(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l14=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=88U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
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
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l14;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
L8:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l5;
si0-=si1;
si1=56U;
si0=DIV_U(si0,si1);
l1=si0;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
{
si0=l5;
f12829(i,si0);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
l1=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l8=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l9=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=256U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=12U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=28U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=36U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=44U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=52U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=60U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=-56U;
si0+=si1;
l16=si0;
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
si0|=si1;
l1=si0;
si0=l2;
si1=216U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si1=48U;
si0+=si1;
l11=si0;
si0=l8;
si1=40U;
si0+=si1;
l12=si0;
si0=l8;
si1=32U;
si0+=si1;
l13=si0;
si0=l8;
si1=24U;
si0+=si1;
l15=si0;
si0=l8;
si1=16U;
si0+=si1;
l17=si0;
si0=1U;
l18=si0;
L11:;
{
si0=l16;
si1=l5;
si0-=si1;
l14=si0;
L15:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l5;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l5;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l5;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l5;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l7;
si2=l2;
si3=216U;
si2+=si3;
f12626(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+152U);
l9=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=88U;
si0+=si1;
si1=56U;
si0+=si1;
l19=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=48U;
si0+=si1;
l20=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
l22=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l9;
si1=9U;
si0=si0 != si1;
if(si0){
goto L16;
}
L17:;
si0=l14;
si1=-56U;
si0+=si1;
l14=si0;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L10;
L16:;
}
si0=l2;
si1=24U;
si0+=si1;
si1=56U;
si0+=si1;
l26=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l19=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
l20=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
l22=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
l23=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l24=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l18;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l14;
si1=56U;
si0=DIV_U(si0,si1);
l1=si0;
L18:;
{
si0=l5;
f12829(i,si0);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L10;
}
L13:;
si0=l2;
si1=12U;
si0+=si1;
si1=l18;
si2=1U;
f8740(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L12:;
si0=l10;
si1=l18;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l14;
si1=12U;
si0+=si1;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=20U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=28U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=36U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=44U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=52U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=60U;
si0+=si1;
si1=l26;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=56U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
f15024(i,si0);
L19:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=272U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f8317(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652540U;
f646(i,si0,si1,si2);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8318(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652620U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8319(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652428U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8320(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652476U;
f646(i,si0,si1,si2);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8321(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0*=si1;
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652636U;
f646(i,si0,si1,si2);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8322(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652508U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8323(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652588U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f8324(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652556U;
f646(i,si0,si1,si2);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f8325(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L5;
}
si0=8U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=24U;
si0*=si1;
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=8U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=l2;
si1=24U;
si0*=si1;
l6=si0;
si0=0U;
l1=si0;
si0=l2;
l7=si0;
L7:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si0+=si1;
l4=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l8;
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
L8:;
si0=l3;
si1=l1;
si0+=si1;
l4=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8326(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=8U;
l3=si0;
si0=0U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
l4=si0;
L3:;
si0=l3;
si1=l2;
si2=l4;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8327(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L5;
}
si0=8U;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=22369621U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=96U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=8U;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l3;
si1=96U;
si0*=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l3;
l9=si0;
L7:;
{
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l6;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L9;
}
si0=1U;
l10=si0;
goto L8;
L9:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l10;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+92U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=l6;
f13774(i,si0,si1);
si0=l2;
si1=148U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
f8327(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
l13=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l14=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l15=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l16=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l17=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l18=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l19=si0;
si1=l2;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=8U;
si0+=si1;
l20=si0;
si1=l2;
si2=148U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+148U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l8;
si0+=si1;
l1=si0;
si1=76U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=72U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=68U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=64U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=92U;
si0+=si1;
si1=l11;
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=80U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=96U;
si0+=si1;
l8=si0;
si0=l6;
si1=96U;
si0+=si1;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8328(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=4U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=l2;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=0U;
l1=si0;
si0=l2;
l7=si0;
L7:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L1;
}
si0=l3;
si1=l1;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8329(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L5;
}
si0=8U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=8U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=l2;
si1=4U;
si0<<=(si1&31);
l6=si0;
si0=0U;
l1=si0;
si0=l2;
l7=si0;
L7:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si0+=si1;
l8=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
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
goto L1;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L8:;
si0=l3;
si1=l1;
si0+=si1;
l8=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}


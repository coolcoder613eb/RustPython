#include "w2c2_base.h"

#include "rustpython.h"

void f9130(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
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
f7892(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l6=sj0;
si0=l4;
si1=104U;
si0+=si1;
si1=15U;
si0+=si1;
si1=l4;
si2=84U;
si1+=si2;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+97U);
i32_store16(&i->m0,(U64)si0+117U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
l7=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
si2=l7;
si3=0U;
si4=l2;
f9092(i,si0,si1,si2,si3,si4);
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
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9131(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9132(i,si0,si1,si2,si3);
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

void f9132(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7909(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=99U;
si0+=si1;
si1=l4;
si2=55U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+53U);
i32_store16(&i->m0,(U64)si0+97U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+60U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
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
default:
goto L8;
}
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
goto L3;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
goto L3;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L3;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l5;
si1=l8;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=2147483647U;
si4=l3;
si5=2147483647U;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15039(i,si0,si1,si2);
l3=si0;
si0=0U;
sj0=i64_load32_u(&i->m0,(U64)si0+18663788U);
l9=sj0;
si0=l7;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l5;
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
goto L9;
}
si0=l5;
f1354(i,si0);
goto L9;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=0U;
si2=l5;
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
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=0U;
si2=l5;
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
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l5;
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
goto L9;
}
si0=l5;
f1354(i,si0);
L9:;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si0=f9369(i,si0,si1);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L17:;
si0=0U;
l3=si0;
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l4;
sj1=l9;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l3;
si3=-1U;
si2^=si3;
si3=29U;
si2>>=(si3&31);
si3=4U;
si2&=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si0=f8916(i,si0,si1);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=l3;
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
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L18:;
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
f15024(i,si0);
L14:;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9133(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=128U;
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
f7814(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=l4;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+104U);
si3=l3;
si4=l5;
si5=l4;
si5=i32_load(&i->m0,(U64)si5+108U);
si6=l2;
f9134(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=f8765(i,si0,si1);
l2=si0;
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l2=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
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
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9134(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
if(si0){
goto L4;
}
si0=1U;
l10=si0;
goto L3;
L4:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l10;
si1=l8;
si2=l9;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l11=si1;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
si2=l6;
f11060(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=511U;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l5;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l10;
si2=l2;
si3=l7;
si4=16U;
si3+=si4;
si0=f15070(i,si0,si1,si2,si3);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
si1=l5;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l3=si0;
si0=l5;
si1=31U;
si0>>=(si1&31);
l5=si0;
goto L6;
L8:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
f15024(i,si0);
goto L5;
L7:;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
si2=l7;
si0=f15079(i,si0,si1,si2);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
si1=l5;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l3=si0;
si0=l5;
si1=31U;
si0>>=(si1&31);
l5=si0;
L6:;
si0=l10;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
f15024(i,si0);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l7;
si1=63U;
si0+=si1;
si1=l1;
si2=15U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=l11;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+13U);
i32_store16(&i->m0,(U64)si0+61U,si1);
si0=l0;
si1=l7;
si2=40U;
si1+=si2;
si2=l6;
si1=f11064(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l9=si0;
goto L10;
L11:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
f15024(i,si0);
L10:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9135(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9136(i,si0,si1,si2,si3);
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

void f9136(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l9=si0;
goto L10;
L11:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l3;
si1=31U;
si0&=si1;
l9=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l9=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
goto L10;
L12:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l10;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l7;
si1=3U;
si0+=si1;
l7=si0;
goto L10;
L13:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L10:;
si0=0U;
l3=si0;
si0=3054U;
l11=si0;
si0=3054U;
l10=si0;
L15:;
{
si0=l11;
si1=1U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l12=si0;
si1=12U;
si0*=si1;
l11=si0;
si1=17726396U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l11;
si2=17726400U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=-1U;
si1=l13;
si2=l9;
si1=si1 > si2;
si2=l14;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l12;
l10=si0;
goto L17;
L18:;
si0=l13;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l12;
si1=1U;
si0+=si1;
l3=si0;
L17:;
si0=l10;
si1=l3;
si0-=si1;
l11=si0;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
goto L7;
L16:;
}
si0=l11;
si1=17726404U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=8U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L7;
L14:;
}
si0=17687380U;
si1=37U;
si2=17687524U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
L19:;
{
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=1U;
si0+=si1;
l15=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l3=si0;
si0=3054U;
l11=si0;
si0=3054U;
l10=si0;
L20:;
{
si0=l11;
si1=1U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l12=si0;
si1=12U;
si0*=si1;
l11=si0;
si1=17726396U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l11;
si2=17726400U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=-1U;
si1=l13;
si2=l9;
si1=si1 > si2;
si2=l14;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l12;
l10=si0;
goto L22;
L23:;
si0=l13;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
si1=1U;
si0+=si1;
l3=si0;
L22:;
si0=l10;
si1=l3;
si0-=si1;
l11=si0;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L20;
}
goto L7;
L21:;
}
si0=l15;
l7=si0;
si0=l11;
si1=17726404U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=8U;
si0=si0 == si1;
if(si0){
goto L19;
}
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l3=si0;
goto L5;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
l3=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17687380U;
si1=37U;
si2=17687524U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9137(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9138(i,si0,si1,si2,si3);
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

void f9138(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
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
U32 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=l2;
f7950(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+96U);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l16=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=17391909U;
si2=16U;
f14731(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
if(si0){
goto L15;
}
sj0=l18;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l17;
f15024(i,si0);
L16:;
si0=0U;
l3=si0;
goto L12;
L15:;
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1U;
l19=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
l19=si0;
goto L11;
L17:;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=48U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
L14:;
si0=1U;
l17=si0;
goto L3;
L13:;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l18=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=13U;
l19=si0;
si0=13U;
si0=f15022(i,si0);
l17=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l17;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17391949U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17391944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
sj0=l18;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l3;
f15024(i,si0);
L11:;
si0=l19;
l3=si0;
L18:;
{
si0=l4;
si1=32U;
si0+=si1;
si1=46U;
si2=l17;
si3=l3;
f682(i,si0,si1,si2,si3);
si0=8U;
l20=si0;
si0=17391720U;
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l17;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l17;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
l22=si0;
si0=l19;
si1=l19;
si2=l3;
si1-=si2;
l23=si1;
si2=-1U;
si1^=si2;
si0+=si1;
l20=si0;
if(si0){
goto L22;
}
si0=0U;
l20=si0;
goto L21;
L22:;
si0=l20;
si1=l19;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l23;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l17;
l21=si0;
si0=l19;
l20=si0;
si0=-1U;
l23=si0;
goto L8;
L23:;
si0=l17;
si1=l20;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
L21:;
si0=l17;
l21=si0;
goto L8;
L20:;
si0=l17;
si1=l19;
si2=0U;
si3=l20;
si4=17391928U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=l3;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L18;
}
goto L9;
}
L10:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l17;
l22=si0;
si0=l19;
l23=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l21;
si2=l20;
f8911(i,si0,si1,si2);
si0=l3;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
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
si1=l2;
si2=l4;
si3=72U;
si2+=si3;
si3=l3;
si4=0U;
si2=f5980(i,si2,si3,si4);
l3=si2;
si3=0U;
si4=0U;
f11341(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=540U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17392000U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=3638U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l4;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f64(i,si0,si1);
si0=l17;
si1=l4;
si2=140U;
si1+=si2;
si2=0U;
si3=l2;
si0=f13967(i,si0,si1,si2,si3);
l17=si0;
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
l17=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l19;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l19;
f5522(i,si0);
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L25:;
si0=0U;
l17=si0;
goto L4;
L6:;
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=17378308U;
si1=43U;
si2=l4;
si3=72U;
si2+=si3;
si3=17391364U;
si4=17392016U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l3;
si1=l3;
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
f5522(i,si0);
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l22;
si2=l23;
f8911(i,si0,si1,si2);
si0=l3;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
si2=l3;
si3=0U;
si1=f5980(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l19;
si3=l4;
si4=68U;
si3+=si4;
f11936(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l20=si0;
si1=0U;
si0=si0 != si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si1=!(si1);
si0|=si1;
l19=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=540U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l4;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17392000U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=3638U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l4;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f64(i,si0,si1);
si0=l17;
si1=l4;
si2=140U;
si1+=si2;
si2=0U;
si3=l2;
si0=f13967(i,si0,si1,si2,si3);
l17=si0;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l17=si0;
goto L27;
L28:;
si0=l4;
si1=84U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=72U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l3;
f5522(i,si0);
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L29:;
si0=l20;
if(si0){
goto L32;
}
si0=l3;
si0=!(si0);
if(si0){
goto L30;
}
si0=l19;
si1=1U;
si0^=si1;
if(si0){
goto L30;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 == si1;
if(si0){
goto L31;
}
goto L30;
L32:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
L31:;
si0=l3;
f5522(i,si0);
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
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
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L33:;
si0=l19;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l15;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
l3=si0;
L35:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L36:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l14;
si0=!(si0);
if(si0){
goto L37;
}
si0=l6;
f15024(i,si0);
L37:;
si0=l8;
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
si1=l8;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L38:;
si0=l12;
si0=!(si0);
if(si0){
goto L39;
}
si0=l10;
l3=si0;
L40:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L41:;
si0=l3;
si1=12U;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l19;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L42:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
f15024(i,si0);
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=17378308U;
si1=43U;
si2=l4;
si3=72U;
si2+=si3;
si3=17391364U;
si4=17392016U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9139(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9140(i,si0,si1,si2,si3);
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

void f9140(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
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
f7889(i,si0,si1,si2);
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
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l7;
si0+=si1;
l8=si0;
L8:;
{
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l7;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l7=si0;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
goto L9;
L11:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l3;
si1=3U;
si0+=si1;
l3=si0;
goto L9;
L12:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L9:;
si0=l7;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l7;
si0=f737(i,si0);
si0=!(si0);
if(si0){
goto L5;
}
L13:;
si0=l3;
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L6;
}
L7:;
L14:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l8;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si0=f737(i,si0);
si0=!(si0);
if(si0){
goto L5;
}
L15:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L14;
}
}
L6:;
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

void f9141(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7932(i,si0,si1,si2);
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
l6=si0;
goto L1;
L2:;
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=3640U;
si5=l2;
f8929(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l6=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l3=si0;
goto L3;
L4:;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
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
si0=l5;
f5522(i,si0);
L1:;
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
L0:;
}

void f9142(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=1U;
l7=si0;
si0=1U;
l8=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=2U;
l8=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
L1:;
si0=l8;
si1=l3;
si2=l5;
si1-=si2;
l5=si1;
si0*=si1;
si1=l2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=4U;
si0+=si1;
si1=l4;
si2=0U;
f13777(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
si2=l2;
f8716(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l8;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
si1=l4;
si2=l5;
f13777(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9143(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L4;
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
L5:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L3;
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
goto L5;
}
}
L4:;
si0=0U;
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
l6=si0;
goto L1;
L6:;
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
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
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
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9144(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd3,sd4;
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
f8160(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
sd0=f64_load(&i->m0,(U64)si0+56U);
l6=sd0;
sd0=f15135(i,sd0);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
sd3=l6;
sd4=l7;
sd3-=sd4;
sd3=fabs(sd3);
sd4=2.2204460492503131e-16;
si3=sd3 < sd4;
si1=si3?si1:si2;
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
goto L1;
}
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
L2:;
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
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9145(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9146(i,si0,si1,si2,si3);
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

void f9146(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
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
si1=20U;
si0+=si1;
f14729(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si0=f8916(i,si0,si1);
l3=si0;
sj0=l6;
sj1=255ULL;
sj0&=sj1;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
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
goto L4;
}
si0=l7;
f15024(i,si0);
L4:;
si0=l2;
f15024(i,si0);
L3:;
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=0U;
si2=l4;
si3=8U;
si2+=si3;
si3=l2;
f11059(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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

void f9147(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9148(i,si0,si1,si2,si3);
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

void f9148(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
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
f7889(i,si0,si1,si2);
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
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si0+=si1;
l8=si0;
L7:;
{
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L8;
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l7;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l7=si0;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
goto L8;
L10:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l3;
si1=3U;
si0+=si1;
l3=si0;
goto L8;
L11:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L8:;
si0=l7;
si1=-58U;
si0+=si1;
si1=-11U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l7;
si1=65535U;
si0&=si1;
l9=si0;
si1=-8304U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=1U;
si1=l7;
si0<<=(si1&31);
si1=1009U;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=l9;
si1=-178U;
si0+=si1;
l7=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l7;
si0<<=(si1&31);
si1=131U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l3;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
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

void f9149(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0;
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
f8160(i,si0,si1,si2);
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
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
l6=sd0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=80U;
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
si0=si0 == si1;
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
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
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=92U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L5:;
sd0=l6;
sd0=fabs(sd0);
si1=l8;
si2=l2;
si0=f5926(i,sd0,si1,si2);
l2=si0;
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
si1=128U;
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

void f9150(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9151(i,si0,si1,si2,si3);
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

void f9151(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
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
f7791(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L5;
}
si0=1U;
l6=si0;
goto L4;
L5:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L6;
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l6=si0;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=l8;
si3=l6;
f9238(i,si0,si1,si2,si3);
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=l5;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=l6;
f6994(i,si0,si1,si2,si3,si4);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l13=si2;
si3=l8;
si4=l9;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f9226(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L9;
}
si0=1U;
l10=si0;
goto L8;
L9:;
si0=0U;
l10=si0;
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l13;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=l13;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L1;
L12:;
si0=l12;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L11:;
si0=l6;
si1=16U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l6;
si0=f663(i,si0,si1);
l8=si0;
goto L10;
L13:;
si0=l6;
si1=3U;
si0&=si1;
l9=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=0U;
l6=si0;
goto L14;
L15:;
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=-4U;
si0&=si1;
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=8U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
si1=l6;
si0+=si1;
l6=si0;
L16:;
{
si0=l8;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L10:;
si0=l8;
si1=l11;
si0+=si1;
l8=si0;
L8:;
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
goto L17;
}
si0=l3;
f5522(i,si0);
L17:;
si0=l10;
if(si0){
goto L19;
}
si0=0U;
l6=si0;
si0=l8;
si1=l2;
si0=f8550(i,si0,si1);
l3=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=19U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=15U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17387059U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17387052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17387044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=81604378643ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l8;
si2=l4;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
L18:;
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
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
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
L3:;
si0=1U;
si1=19U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l12;
si1=l13;
si2=0U;
si3=l6;
si4=17387028U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f9152(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9153(i,si0,si1,si2,si3);
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

void f9153(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f8064(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=1U;
l5=si0;
goto L5;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
L9:;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l13=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=l11;
si4=l3;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=100U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f9226(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L11;
}
si0=1U;
l14=si0;
si0=0U;
l3=si0;
si0=0U;
l15=si0;
goto L10;
L11:;
si0=0U;
l3=si0;
si0=1U;
l14=si0;
si0=0U;
l11=si0;
L12:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si1=l3;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+104U);
si2=l11;
si1-=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l13;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L13:;
si0=l14;
si1=l3;
si0+=si1;
si1=l10;
si2=l11;
si1+=si2;
si2=l13;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l13;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l16;
si1=l3;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l5;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L14:;
si0=l14;
si1=l3;
si0+=si1;
si1=l12;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l5;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=100U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f9226(i,si0,si1);
si0=l15;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L12;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
L10:;
si0=l10;
si1=l15;
si0+=si1;
l11=si0;
si0=l13;
si1=l3;
si0-=si1;
si1=l9;
si2=l15;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l5;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L15:;
si0=l14;
si1=l3;
si0+=si1;
si1=l11;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L8:;
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l9;
if(si0){
goto L18;
}
si0=1U;
l3=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L19;
}
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L17;
}
si0=1U;
l13=si0;
goto L16;
L20:;
si0=l9;
if(si0){
goto L21;
}
si0=1U;
l3=si0;
goto L19;
L21:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L19:;
si0=l3;
si1=l10;
si2=l9;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L7;
L18:;
si0=0U;
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=32U;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=l15;
si4=l13;
f690(i,si0,si1,si2,si3,si4);
si0=0U;
l13=si0;
L23:;
{
si0=l4;
si1=l11;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=100U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f9226(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L24;
}
si0=l13;
l15=si0;
goto L22;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si1=l3;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+104U);
si2=l13;
si1-=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l11;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L25:;
si0=l14;
si1=l3;
si0+=si1;
si1=l10;
si2=l13;
si1+=si2;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l11;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l16;
si1=l3;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l5;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L26:;
si0=l14;
si1=l3;
si0+=si1;
si1=l12;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l5;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l15;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l10;
si1=l15;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l3;
si0-=si1;
si1=l9;
si2=l15;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l5;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L27:;
si0=l14;
si1=l3;
si0+=si1;
si1=l13;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L17:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L1;
}
L16:;
si0=l13;
si1=l5;
si2=l3;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L7:;
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
goto L28;
}
si0=l6;
f5522(i,si0);
L28:;
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
goto L29;
}
si0=l7;
f5522(i,si0);
L29:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l3=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l8;
f5522(i,si0);
L5:;
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
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9154(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9155(i,si0,si1,si2,si3);
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

void f9155(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
goto L5;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
l7=si0;
si0=l6;
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
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=200U;
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
goto L3;
}
si0=l7;
si1=l2;
si2=l9;
si3=1216U;
si2+=si3;
si3=17391908U;
si4=1U;
si5=l8;
si2=f9632(i,si2,si3,si4,si5);
si3=l6;
si0=f6037(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L5;
}
si0=l4;
si1=l2;
si2=17314629U;
si3=35U;
si4=l3;
si5=l2;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+37U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l2;
si0=f11547(i,si0,si1,si2);
l6=si0;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=17391908U;
si2=1U;
si3=l3;
si4=l2;
si0=f6038(i,si0,si1,si2,si3,si4);
l6=si0;
goto L4;
L7:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
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
goto L4;
}
si0=l3;
f5522(i,si0);
L4:;
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
L3:;
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
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9156(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9157(i,si0,si1,si2,si3);
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

void f9157(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
F64 l12=0;
U64 l13=0;
F64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7945(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L16:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L13;
L14:;
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L18:;
{
si0=l3;
if(si0){
goto L19;
}
sj0=1ULL;
l13=sj0;
goto L8;
L19:;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
sj0=1ULL;
l13=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L12;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+24U);
l12=sd0;
L13:;
sd0=l7;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L20;
}
sd0=INFINITY;
sd1=1;
sd2=l12;
sd1=copysign(sd1,sd2);
sd2=l12;
sd3=l12;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l14=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l3=si0;
sd0=l14;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L22;
}
sd0=l14;
si0=I32_TRUNC_S_F64(sd0);
l10=si0;
goto L21;
L22:;
si0=-2147483648U;
l10=si0;
L21:;
si0=0U;
si1=2147483647U;
si2=l10;
si3=-2147483648U;
si4=l3;
si2=si4?si2:si3;
sd3=l14;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l3=si0;
sd0=INFINITY;
sd1=1;
sd2=l7;
sd1=copysign(sd1,sd2);
sd2=l7;
sd3=l7;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l14=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l10=si0;
sd0=l14;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l14;
si0=I32_TRUNC_S_F64(sd0);
l11=si0;
goto L23;
L24:;
si0=-2147483648U;
l11=si0;
L23:;
si0=0U;
si1=2147483647U;
si2=l11;
si3=-2147483648U;
si4=l10;
si2=si4?si2:si3;
sd3=l14;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
si0=si2?si0:si1;
l10=si0;
sd0=l12;
sd1=l7;
sd0=f15124(i,sd0,sd1);
l14=sd0;
si0=l3;
switch(si0){
case 0:
goto L25;
case 1:
goto L10;
case 2:
goto L26;
default:
goto L10;
}
L26:;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L10;
L25:;
si0=l10;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L9;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17378422U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378414U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378406U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=73014444049ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l2;
si2=l10;
si3=l4;
si4=16U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
goto L8;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L7;
L11:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L27;
}
sd0=l12;
sd0=fabs(sd0);
sd1=l7;
sd1=fabs(sd1);
si0=sd0 == sd1;
if(si0){
goto L27;
}
sd0=l7;
sd1=l14;
sd0+=sd1;
sd1=l7;
sd0=copysign(sd0,sd1);
l14=sd0;
goto L9;
L27:;
sd0=l14;
sd1=l7;
sd0=copysign(sd0,sd1);
l14=sd0;
L9:;
si0=l4;
sd1=l14;
f64_store(&i->m0,(U64)si0+8U,sd1);
sj0=0ULL;
l13=sj0;
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
goto L6;
}
L7:;
si0=l5;
f5522(i,si0);
L6:;
sj0=l13;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L28;
}
sj0=l13;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L29;
case 1:
goto L28;
case 2:
goto L4;
default:
goto L29;
}
L29:;
si0=0U;
l3=si0;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
si1=l2;
si0=f9033(i,sd0,si1);
l5=si0;
goto L3;
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
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

void f9158(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9159(i,si0,si1,si2,si3);
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

void f9159(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=l3;
si2=l2;
f8123(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+136U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l2;
f8246(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+132U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l7=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
l2=si0;
si0=l6;
l3=si0;
si0=1U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f13796(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
goto L6;
L13:;
si0=l4;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
l3=si0;
si1=l4;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
sj0=l9;
si0=(U32)(sj0);
l3=si0;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj0=l8;
si0=(U32)(sj0);
l11=si0;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L21;
default:
goto L19;
}
L21:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f13964(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
L20:;
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=0U;
l3=si0;
si0=1U;
l7=si0;
goto L15;
L22:;
si0=l6;
if(si0){
goto L17;
}
si0=l3;
l6=si0;
goto L18;
L19:;
si0=l4;
si1=l4;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l11;
if(si0){
goto L16;
}
L18:;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=1U;
l11=si0;
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
L23:;
si0=l11;
si1=l12;
si2=l3;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+116U,si1);
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
goto L24;
}
si0=l6;
f5522(i,si0);
L24:;
si0=l4;
si1=128U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+128U,sj1);
L27:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l11=si0;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+148U);
l6=si0;
si0=l11;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L31;
default:
goto L29;
}
L31:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=128U;
si1+=si2;
f13964(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L30:;
si0=l6;
if(si0){
goto L32;
}
si0=l3;
l6=si0;
goto L28;
L32:;
si0=l6;
si1=2U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
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
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
f5522(i,si0);
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l11=si0;
goto L14;
L29:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+156U);
l12=si1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l11;
if(si0){
goto L26;
}
L28:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
l3=si1;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l3;
si2=l7;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l12=si0;
si1=l3;
si0+=si1;
si1=l10;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l7;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si0-=si1;
si1=l6;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l4;
si1=116U;
si0+=si1;
si1=l3;
si2=l11;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
L35:;
si0=l12;
si1=l3;
si0+=si1;
si1=l13;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l11;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
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
goto L27;
}
si0=l6;
f5522(i,si0);
goto L27;
}
L26:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l3=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
f5522(i,si0);
si0=l6;
l3=si0;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
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
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
f5522(i,si0);
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
f15024(i,si0);
goto L7;
L17:;
si0=0U;
l7=si0;
goto L15;
L16:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f5522(i,si0);
L37:;
si0=l6;
l3=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l6=si0;
goto L11;
L12:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=1U;
l7=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L38:;
si0=l7;
si1=l11;
si2=l6;
si0=f15143(i,si0,si1,si2);
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
goto L39;
}
si0=l3;
f5522(i,si0);
L39:;
si0=l6;
l11=si0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=128U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f5522(i,si0);
L40:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L3;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
l6=si0;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L4:;
si0=l2;
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
goto L41;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f5522(i,si0);
L41:;
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
L3:;
si0=l5;
f5522(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9160(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9161(i,si0,si1,si2,si3);
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

void f9161(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
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
f7986(i,si0,si1,si2);
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
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l6;
si3=l8;
si2-=si3;
l9=si2;
si1+=si2;
l10=si1;
si2=l8;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=l6;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
if(si0){
goto L7;
}
si0=l9;
l6=si0;
goto L5;
L8:;
si0=l10;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l9;
l6=si0;
goto L5;
L7:;
si0=l7;
si1=l6;
si2=0U;
si3=l9;
si4=17379648U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L3;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
L3:;
si0=l8;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
f5522(i,si0);
L11:;
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
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
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9162(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
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
f8075(i,si0,si1,si2);
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
si2=l3;
si3=l2;
f9163(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
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

void f9163(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
switch(si0){
case 0:
goto L10;
case 1:
goto L8;
default:
goto L9;
}
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
si1=1292U;
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
si0=si0 != si1;
if(si0){
goto L6;
}
goto L1;
L9:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L7;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l5=si0;
si0=l1;
l2=si0;
goto L2;
L11:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L7:;
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=l3;
si4=l2;
f11643(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l7;
if(si0){
goto L15;
}
si0=l6;
f15024(i,si0);
si0=1U;
l6=si0;
goto L14;
L15:;
si0=l6;
si1=l7;
si0=f15027(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
L14:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l6;
si0-=si1;
l8=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L18;
}
L19:;
si0=l6;
si1=-1U;
si0+=si1;
l8=si0;
si0=l7;
l2=si0;
L20:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si1=l2;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L20;
}
}
si0=1U;
l5=si0;
goto L16;
L18:;
si0=1U;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
si0=4U;
si1=l8;
si2=l2;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si1=l7;
si2=-4U;
si1+=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
L22:;
{
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L22;
}
}
L21:;
si0=l6;
si1=l8;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
L17:;
si0=0U;
l5=si0;
L16:;
si0=l4;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
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
l2=si0;
si0=l8;
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
l2=si0;
si0=!(si0);
if(si0){
goto L4;
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
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
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
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L23:;
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=l2;
si0=f5980(i,si0,si1,si2);
l2=si0;
goto L12;
L13:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L12:;
si0=l1;
si1=l1;
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
goto L3;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
f5522(i,si0);
L2:;
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
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9164(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9165(i,si0,si1,si2,si3);
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

void f9165(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
F64 l12=0;
U64 l13=0;
F64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3,sd4;
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
f7945(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L16:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L13;
L14:;
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L18:;
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
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L13:;
sd0=l7;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L19;
}
sj0=0ULL;
l13=sj0;
si0=l4;
sd1=l12;
sd2=l12;
sd3=l7;
sd2=f15124(i,sd2,sd3);
l14=sd2;
sd1-=sd2;
sd2=l7;
sd1/=sd2;
l12=sd1;
sd2=-1;
sd1+=sd2;
sd2=l12;
sd3=l14;
sj3=i64_reinterpret_f64(sd3);
sd4=l7;
sj4=i64_reinterpret_f64(sd4);
sj3^=sj4;
sj4=0ULL;
si3=(U64)((I64)sj3<(I64)sj4);
l3=si3;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0,sd1);
sd0=l14;
sd1=l7;
sd2=-0.f;
si3=l3;
sd1=si3?sd1:sd2;
sd0+=sd1;
l7=sd0;
goto L7;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=14U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378698U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=60129542158ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l2;
si2=l10;
si3=l4;
si4=8U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
sj0=2ULL;
l13=sj0;
goto L8;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
sj0=2ULL;
l13=sj0;
goto L6;
L11:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
f14795(i);
UNREACHABLE;
L9:;
sj0=1ULL;
l13=sj0;
L8:;
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
goto L5;
}
L6:;
si0=l5;
f5522(i,si0);
L5:;
sj0=l13;
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
si0=l4;
sj1=l13;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sd1=l7;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l4;
si1=l4;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si0=f10983(i,si0,si1);
l5=si0;
si0=0U;
l3=si0;
goto L3;
L4:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
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

void f9166(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
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
f8156(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l8=si0;
si0=l3;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
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
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l8;
si1=l7;
si2=l5;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=255U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si2=l4;
si3=96U;
si2+=si3;
si3=l2;
f11059(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
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

void f9167(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9168(i,si0,si1,si2,si3);
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

void f9168(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
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
f7791(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L5;
}
si0=1U;
l6=si0;
goto L4;
L5:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L7;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L6;
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l6=si0;
L6:;
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=l8;
si3=l6;
f9238(i,si0,si1,si2,si3);
si0=1U;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=l5;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=l6;
f6994(i,si0,si1,si2,si3,si4);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l13=si2;
si3=l8;
si4=l9;
f690(i,si0,si1,si2,si3,si4);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f9222(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L9;
}
si0=1U;
l10=si0;
goto L8;
L9:;
si0=0U;
l10=si0;
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l13;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=l13;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L1;
L12:;
si0=l12;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L11:;
si0=l6;
si1=16U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l6;
si0=f663(i,si0,si1);
l8=si0;
goto L10;
L13:;
si0=l6;
si1=3U;
si0&=si1;
l9=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=0U;
l6=si0;
goto L14;
L15:;
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=-4U;
si0&=si1;
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=8U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l8;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l12;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
si1=l6;
si0+=si1;
l6=si0;
L16:;
{
si0=l8;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L16;
}
}
L10:;
si0=l8;
si1=l11;
si0+=si1;
l8=si0;
L8:;
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
goto L17;
}
si0=l3;
f5522(i,si0);
L17:;
si0=l10;
if(si0){
goto L19;
}
si0=0U;
l6=si0;
si0=l8;
si1=l2;
si0=f8550(i,si0,si1);
l3=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=19U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=15U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17387059U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17387052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17387044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=81604378643ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l8;
si2=l4;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
L18:;
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
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
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
L3:;
si0=1U;
si1=19U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l12;
si1=l13;
si2=0U;
si3=l6;
si4=17387028U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f9169(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9170(i,si0,si1,si2,si3);
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

void f9170(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
F64 l12=0;
U64 l13=0;
F64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7945(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L16:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L13;
L14:;
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L18:;
{
si0=l3;
if(si0){
goto L19;
}
sj0=1ULL;
l13=sj0;
goto L8;
L19:;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
sj0=1ULL;
l13=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L12;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+24U);
l12=sd0;
L13:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L20;
}
sd0=INFINITY;
sd1=1;
sd2=l7;
sd1=copysign(sd1,sd2);
sd2=l7;
sd3=l7;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l14=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l3=si0;
sd0=l14;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L22;
}
sd0=l14;
si0=I32_TRUNC_S_F64(sd0);
l10=si0;
goto L21;
L22:;
si0=-2147483648U;
l10=si0;
L21:;
si0=0U;
si1=2147483647U;
si2=l10;
si3=-2147483648U;
si4=l3;
si2=si4?si2:si3;
sd3=l14;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l3=si0;
sd0=INFINITY;
sd1=1;
sd2=l12;
sd1=copysign(sd1,sd2);
sd2=l12;
sd3=l12;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l14=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l10=si0;
sd0=l14;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l14;
si0=I32_TRUNC_S_F64(sd0);
l11=si0;
goto L23;
L24:;
si0=-2147483648U;
l11=si0;
L23:;
si0=0U;
si1=2147483647U;
si2=l11;
si3=-2147483648U;
si4=l10;
si2=si4?si2:si3;
sd3=l14;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
si0=si2?si0:si1;
l10=si0;
sd0=l7;
sd1=l12;
sd0=f15124(i,sd0,sd1);
l14=sd0;
si0=l3;
switch(si0){
case 0:
goto L25;
case 1:
goto L10;
case 2:
goto L26;
default:
goto L10;
}
L26:;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L10;
L25:;
si0=l10;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L9;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17378422U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378414U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378406U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=73014444049ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l2;
si2=l10;
si3=l4;
si4=16U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
goto L8;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L7;
L11:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
sd0=l7;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L27;
}
sd0=l7;
sd0=fabs(sd0);
sd1=l12;
sd1=fabs(sd1);
si0=sd0 == sd1;
if(si0){
goto L27;
}
sd0=l12;
sd1=l14;
sd0+=sd1;
sd1=l12;
sd0=copysign(sd0,sd1);
l14=sd0;
goto L9;
L27:;
sd0=l14;
sd1=l12;
sd0=copysign(sd0,sd1);
l14=sd0;
L9:;
si0=l4;
sd1=l14;
f64_store(&i->m0,(U64)si0+8U,sd1);
sj0=0ULL;
l13=sj0;
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
goto L6;
}
L7:;
si0=l5;
f5522(i,si0);
L6:;
sj0=l13;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L28;
}
sj0=l13;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L29;
case 1:
goto L28;
case 2:
goto L4;
default:
goto L29;
}
L29:;
si0=0U;
l3=si0;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
si1=l2;
si0=f9033(i,sd0,si1);
l5=si0;
goto L3;
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
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

void f9171(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9172(i,si0,si1,si2,si3);
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

void f9172(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd2;
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
f8209(i,si0,si1,si2);
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
l6=si0;
goto L1;
L2:;
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
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
f2327(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
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
si2=20U;
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
si2=20U;
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
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
sd2=l7;
f2331(i,si0,si1,sd2);
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
goto L5;
L6:;
si0=0U;
l10=si0;
si0=l4;
si1=l2;
si0=f10054(i,si0,si1);
l9=si0;
L5:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
f5522(i,si0);
L7:;
si0=l10;
if(si0){
goto L9;
}
si0=l9;
l3=si0;
goto L8;
L9:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l3=si0;
si0=0U;
l6=si0;
L8:;
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
si0=l5;
f5522(i,si0);
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

void f9173(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9174(i,si0,si1,si2,si3);
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

void f9174(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f7961(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
if(si0){
goto L4;
}
L5:;
si0=l7;
if(si0){
goto L6;
}
si0=0U;
l3=si0;
goto L2;
L6:;
si0=l8;
si1=l7;
si0+=si1;
l3=si0;
L8:;
{
si0=l3;
l10=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l10;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l6;
si1=31U;
si0&=si1;
l6=si0;
goto L10;
L11:;
si0=l10;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l13=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L13;
}
si0=l6;
si1=15U;
si0&=si1;
l6=si0;
goto L12;
L13:;
si0=l10;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l13;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
L12:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
L10:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l12=si0;
goto L3;
L9:;
si0=l6;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l6;
si1=32U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=8U;
si0>>=(si1&31);
l11=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L18;
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
goto L7;
case 7:
goto L7;
case 8:
goto L7;
case 9:
goto L7;
case 10:
goto L16;
case 11:
goto L7;
case 12:
goto L7;
case 13:
goto L7;
case 14:
goto L7;
case 15:
goto L7;
case 16:
goto L7;
case 17:
goto L7;
case 18:
goto L7;
case 19:
goto L7;
case 20:
goto L7;
case 21:
goto L7;
case 22:
goto L7;
case 23:
goto L7;
case 24:
goto L7;
case 25:
goto L7;
case 26:
goto L17;
default:
goto L15;
}
L18:;
si0=l6;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L7;
L17:;
si0=l6;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L7;
L16:;
si0=l6;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
goto L7;
L15:;
si0=l11;
if(si0){
goto L7;
}
si0=l6;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
L14:;
si0=l3;
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=0U;
l12=si0;
goto L3;
L7:;
si0=l10;
si1=l8;
si0-=si1;
l12=si0;
goto L3;
L4:;
si0=l8;
si1=l7;
si0+=si1;
l3=si0;
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l9;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
L20:;
{
si0=0U;
l12=si0;
si0=l3;
l6=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l6;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L21;
}
si0=l6;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l15=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
si0=l10;
si1=31U;
si0&=si1;
l10=si0;
goto L22;
L23:;
si0=l6;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l16=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
si0=l10;
si1=15U;
si0&=si1;
l10=si0;
goto L24;
L25:;
si0=l6;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l16;
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
L24:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l15;
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
L22:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L19;
}
L21:;
si0=l10;
si1=l14;
si2=l13;
si0=f9225(i,si0,si1,si2);
if(si0){
goto L20;
}
}
si0=l6;
si1=l8;
si0-=si1;
l12=si0;
L19:;
si0=l9;
si1=l9;
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
si0=l9;
f5522(i,si0);
L3:;
si0=0U;
l3=si0;
si0=l7;
si1=l12;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=l12;
f8911(i,si0,si1,si2);
si0=l3;
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
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
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
goto L26;
}
si0=l5;
f5522(i,si0);
L26:;
si0=l6;
l5=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
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

void f9175(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9176(i,si0,si1,si2,si3);
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

void f9176(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
F64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7945(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L3;
}
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L11;
L12:;
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L16:;
{
si0=l3;
if(si0){
goto L17;
}
sj0=1ULL;
l13=sj0;
goto L10;
L17:;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
sj0=1ULL;
l13=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L9;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+24U);
l12=sd0;
L11:;
sd0=l7;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L18;
}
si0=l4;
sd1=l12;
sd2=l7;
sd1/=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
sj0=0ULL;
l13=sj0;
goto L10;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=22U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=14U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378398U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378392U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378384U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=94489280534ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l2;
si2=l10;
si3=l4;
si4=16U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
L10:;
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
goto L8;
}
goto L7;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=2ULL;
l13=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
L8:;
si0=l5;
f5522(i,si0);
L7:;
sj0=l13;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L19;
}
sj0=l13;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L5;
default:
goto L20;
}
L20:;
si0=0U;
l3=si0;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
si1=l2;
si0=f9033(i,sd0,si1);
l5=si0;
goto L4;
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l10;
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
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L4:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
f5522(i,si0);
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=22U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9177(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9178(i,si0,si1,si2,si3);
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

void f9178(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8156(i,si0,si1,si2);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
l6=si0;
goto L5;
L6:;
si0=l5;
si1=80U;
si0+=si1;
l7=si0;
si1=97U;
si0=REM_U(si0,si1);
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=18657640U;
si0+=si1;
l8=si0;
si0=l3;
si1=18657644U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L7;
}
L8:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l12=si0;
L10:;
{
si0=l12;
si1=6U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=0U;
l3=si0;
L13:;
{
si0=l3;
si1=l12;
si0>>=(si1&31);
l6=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
goto L11;
}
L12:;
si0=wasi_snapshot_preview1__sched_yield(i);
L11:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l12;
si2=11U;
si1=si1 < si2;
si0+=si1;
l12=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
}
L9:;
si0=l5;
si1=88U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l5;
sj0=i64_load32_u(&i->m0,(U64)si0+80U);
l11=sj0;
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L7:;
sj0=l11;
si0=(U32)(sj0);
if(si0){
goto L16;
}
si0=l5;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L18;
}
si0=1U;
l12=si0;
goto L17;
L18:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
L17:;
si0=l12;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=-2U;
si3=0U;
f9414(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l11=sj1;
i64_store(&i->m0,(U64)si0+160U,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=l2;
si0=f8916(i,si0,si1);
l6=si0;
sj0=l11;
sj1=255ULL;
sj0&=sj1;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
sj0=l11;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l9;
f15024(i,si0);
L21:;
si0=l3;
f15024(i,si0);
L20:;
si0=1U;
l3=si0;
goto L14;
L19:;
sj0=l11;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l10=sj0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=0U;
l12=si0;
L23:;
{
si0=l12;
si1=6U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=0U;
l3=si0;
L26:;
{
si0=l3;
si1=l12;
si0>>=(si1&31);
l6=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L26;
}
goto L24;
}
L25:;
si0=wasi_snapshot_preview1__sched_yield(i);
L24:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l12;
si2=11U;
si1=si1 < si2;
si0+=si1;
l12=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
}
L22:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=88U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
if(si0){
goto L27;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L27:;
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L16:;
si0=0U;
l3=si0;
sj0=l10;
si1=l2;
si0=f8612(i,sj0,si1);
l6=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=23U;
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
sj1=i64_load(&i->m0,(U64)si1+17617215U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17617200U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
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
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
L14:;
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
goto L5;
}
si0=l5;
f5522(i,si0);
L5:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9179(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
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
f8173(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
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
si1=68U;
si0+=si1;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=60U;
si0+=si1;
si1=l5;
si2=l2;
si0=f10825(i,si0,si1,si2);
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
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f9180(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f9181(i,si0,si1,si2,si3);
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

void f9181(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7945(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l6;
sd0=f64_load(&i->m0,(U64)si0+56U);
l7=sd0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L9:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L6;
L7:;
si0=l8;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L10;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+24U);
l12=sd0;
goto L6;
L11:;
si0=l8;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
f14795(i);
UNREACHABLE;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si1=l5;
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
L6:;
si0=l4;
si1=8U;
si0+=si1;
sd1=l12;
sd2=l7;
si3=l2;
f9206(i,si0,sd1,sd2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
L3:;
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
goto L14;
}
si0=l6;
f5522(i,si0);
L14:;
si0=l10;
l5=si0;
L1:;
si0=l0;
si1=l5;
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

void f9182(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0;
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
f8160(i,si0,si1,si2);
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
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
l6=sd0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=80U;
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
si0=si0 == si1;
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
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
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=92U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L5:;
sd0=l6;
si1=l8;
si2=l2;
si0=f5926(i,sd0,si1,si2);
l2=si0;
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
si1=128U;
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

void f9183(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si0=f8028(i,si0,si1);
l5=si0;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=15U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17392095U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17392088U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l5=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9184(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L22;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
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
l8=si0;
si0=!(si0);
if(si0){
goto L21;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L23:;
sd0=l10;
sd1=l12;
sd0/=sd1;
sd0=floor(sd0);
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=22U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=14U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378678U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378670U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=94489280534ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=l6;
si2=l4;
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
goto L1;
L21:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=22U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9185(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
F64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l4=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=80U;
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
goto L1;
}
si0=0U;
l2=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
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
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L3:;
si0=l0;
sd1=l4;
sd1=-(sd1);
si2=l1;
si3=l2;
si1=f5926(i,sd1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
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

void f9186(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=si0 == si1;
if(si0){
goto L2;
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
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f9067(i,si0,si1,si2,si3);
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

void f9187(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f14795(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f9163(i,si0,si1,si2,si3);
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

void f9188(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L21:;
sd0=l10;
sd1=l12;
sd0*=sd1;
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L20:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9189(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L21:;
sd0=l10;
sd1=l12;
sd0+=sd1;
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L20:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9190(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L2;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L2:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l4=si0;
L1:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f9191(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+56U);
si2=l2;
f8920(i,si0,sd1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
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
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si0=f8764(i,si0,si1);
l2=si0;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9192(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
F64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L22;
}
sd0=INFINITY;
sd1=1;
sd2=l10;
sd1=copysign(sd1,sd2);
sd2=l10;
sd3=l10;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l8=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L23;
L24:;
si0=-2147483648U;
l7=si0;
L23:;
si0=0U;
si1=2147483647U;
si2=l7;
si3=-2147483648U;
si4=l8;
si2=si4?si2:si3;
sd3=l13;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l13;
sd3=l13;
si2=sd2 != sd3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l8=si0;
sd0=INFINITY;
sd1=1;
sd2=l12;
sd1=copysign(sd1,sd2);
sd2=l12;
sd3=l12;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l7=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L26;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l6=si0;
goto L25;
L26:;
si0=-2147483648U;
l6=si0;
L25:;
si0=0U;
si1=2147483647U;
si2=l6;
si3=-2147483648U;
si4=l7;
si2=si4?si2:si3;
sd3=l13;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l13;
sd3=l13;
si2=sd2 != sd3;
si0=si2?si0:si1;
l7=si0;
sd0=l10;
sd1=l12;
sd0=f15124(i,sd0,sd1);
l13=sd0;
si0=l8;
switch(si0){
case 0:
goto L27;
case 1:
goto L21;
case 2:
goto L28;
default:
goto L21;
}
L28:;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L21;
L27:;
si0=l7;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L20;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17378422U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378414U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378406U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=73014444049ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=l6;
si2=l4;
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
goto L1;
L29:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
sd0=l10;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L30;
}
sd0=l10;
sd0=fabs(sd0);
sd1=l12;
sd1=fabs(sd1);
si0=sd0 == sd1;
if(si0){
goto L30;
}
sd0=l12;
sd1=l13;
sd0+=sd1;
sd1=l12;
sd0=copysign(sd0,sd1);
l13=sd0;
goto L20;
L30:;
sd0=l13;
sd1=l12;
sd0=copysign(sd0,sd1);
l13=sd0;
L20:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L31;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L32:;
sd0=l13;
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L31:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9193(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=3641U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3642U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9194(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f9090(i,si0,si1,si2,si3);
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

void f9195(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si1=f9196(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f9196(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F64 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L4;
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
goto L3;
}
goto L1;
L4:;
si0=l0;
si1=56U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l4=sd0;
si0=l1;
si1=l1;
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
si0=l1;
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l0=si0;
L5:;
sd0=l4;
si1=l1;
si2=l0;
si0=f5926(i,sd0,si1,si2);
l0=si0;
L3:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
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
return si0;
}

void f9197(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f9076(i,si0,si1,si2,si3);
L0:;
}

void f9198(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
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
si0=1U;
l5=si0;
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
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l3;
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
f8833(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l1=si0;
si0=0U;
l5=si0;
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
l5=si0;
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
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9199(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L22;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
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
l8=si0;
si0=!(si0);
if(si0){
goto L21;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L23:;
sd0=l10;
sd1=l12;
sd0/=sd1;
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=22U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=14U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378398U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378392U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378384U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=94489280534ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=l6;
si2=l4;
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
goto L1;
L21:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=22U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9200(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l10=sd0;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+16U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=80U;
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
goto L11;
}
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
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
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L21:;
sd0=l10;
sd1=l12;
sd0-=sd1;
si1=l6;
si2=l8;
si0=f5926(i,sd0,si1,si2);
l8=si0;
goto L1;
L20:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9201(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
F64 l13=0;
U32 si0,si1,si2,si4;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L5;
L6:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
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
goto L4;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
l10=sd0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
si0=1U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
L3:;
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L16;
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
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L15;
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
goto L17;
}
}
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L14;
L15:;
si0=l5;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=l2;
si2=56U;
si1+=si2;
si2=l3;
f8636(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
l12=sd0;
L14:;
si0=l11;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
L13:;
si0=l5;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L11;
L12:;
sd0=l12;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L22;
}
si0=0U;
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L21;
}
sd0=l10;
sd1=l10;
sd2=l12;
sd1=f15124(i,sd1,sd2);
l13=sd1;
sd0-=sd1;
sd1=l12;
sd0/=sd1;
l10=sd0;
sd1=-1;
sd0+=sd1;
sd1=l10;
sd2=l13;
sj2=i64_reinterpret_f64(sd2);
sd3=l12;
sj3=i64_reinterpret_f64(sd3);
sj2^=sj3;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
sd0=si2?sd0:sd1;
si1=l3;
si0=f9033(i,sd0,si1);
l9=si0;
si0=l8;
sd1=l13;
sd2=l12;
sd3=-0.f;
si4=l6;
sd2=si4?sd2:sd3;
sd1+=sd2;
si2=l3;
si1=f9033(i,sd1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l8=si0;
goto L1;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=14U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378698U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17378692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=60129542158ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=l6;
si2=l4;
si0=f11521(i,si0,si1,si2);
l8=si0;
goto L1;
L21:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=1U;
l7=si0;
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

void f9202(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=3643U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=3644U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=3645U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=3646U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3642U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9203(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=l1;
si1=56U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L2;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L2:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si0=f2076(i,si0);
l1=si0;
L1:;
si0=l3;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si0&=si1;
si1=l3;
si0+=si1;
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l3;
si0=f9207(i,si0,si1);
l1=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l5;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=3U;
l1=si0;
si0=1U;
l7=si0;
goto L9;
L12:;
si0=l5;
si1=l1;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=1U;
l7=si0;
si0=1U;
l1=si0;
goto L9;
L11:;
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=2U;
l1=si0;
si0=1U;
l7=si0;
goto L9;
L10:;
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l5;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l5;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=4U;
l1=si0;
si0=0U;
l7=si0;
L9:;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=28U;
si1+=si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si1=l3;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=l3;
si1-=si2;
si2=l1;
si1=si1 > si2;
si0|=si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L13;
}
si0=l1;
si1=l3;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
goto L13;
L14:;
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-1U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L13;
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-2U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L16;
}
si0=1U;
l8=si0;
goto L13;
L16:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-3U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L17;
}
si0=1U;
l8=si0;
goto L13;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l8=si0;
si0=l3;
si1=l1;
si2=-4U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L13;
}
si0=l6;
si1=0U;
si0=si0 != si1;
l8=si0;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
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
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
si0=0U;
l1=si0;
si0=l4;
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
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
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
l8=si1;
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
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
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
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L18:;
si0=l5;
si1=l4;
si2=l1;
si0=f5980(i,si0,si1,si2);
l1=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=18U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17385432U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17385424U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17385416U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si2=l5;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
L7:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f9204(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
F64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l4=sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=80U;
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
goto L1;
}
si0=0U;
l2=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
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
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L3:;
si0=l0;
sd1=l4;
sd1=fabs(sd1);
si2=l1;
si3=l2;
si1=f5926(i,sd1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
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

void f9205(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379072U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379064U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379056U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379048U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379040U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379024U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17379016U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l6;
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=274877907008ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l8;
si2=l5;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
goto L1;
L8:;
si0=l6;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L11;
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
L12:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+56U);
l10=sd0;
goto L9;
L10:;
si0=l6;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
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
l3=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L14:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l11;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
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
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
f8636(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+24U);
l10=sd0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L9:;
si0=1U;
l1=si0;
goto L5;
L7:;
si0=1U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
l1=si0;
L5:;
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L18;
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
L19:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+56U);
l12=sd0;
goto L16;
L17:;
si0=l6;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L20;
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
L21:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L20:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=l4;
f8636(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+24U);
l12=sd0;
L16:;
si0=l1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
L15:;
si0=l6;
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l5;
si1=8U;
si0+=si1;
sd1=l10;
sd2=l12;
si3=l4;
f9206(i,si0,sd1,sd2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f9206(rustpythonInstance*i,U32 l0,F64 l1,F64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
sd1=l1;
f64_store(&i->m0,(U64)si0,sd1);
sd0=l1;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L6;
}
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
L6:;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
sd0=l2;
sd0=floor(sd0);
sd1=l2;
sd0-=sd1;
sd0=fabs(sd0);
sd1=2.2204460492503131e-16;
si0=sd0 > sd1;
if(si0){
goto L4;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sd0=l1;
sd1=l2;
sd0=f15132(i,sd0,sd1);
l1=sd0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l7=si0;
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
goto L8;
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
si0=l5;
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
goto L2;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L8:;
sd0=l1;
si1=l6;
si2=l3;
si0=f5926(i,sd0,si1,si2);
l3=si0;
goto L3;
L5:;
si0=l4;
si1=40U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=17378744U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=369U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=356U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si1=l6;
si2=l4;
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
goto L3;
L4:;
sd0=l1;
sd1=0;
sd0=f15125(i,sd0,sd1);
l9=sd0;
sd0=0;
sd1=l1;
sd0=f15106(i,sd0,sd1);
l1=sd0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=108U;
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
goto L2;
}
sd0=l9;
sd1=l2;
sd0=f15132(i,sd0,sd1);
l10=sd0;
sd0=l1;
sd1=-0.f;
sd0*=sd1;
sd0=f15118(i,sd0);
l11=sd0;
sd0=l1;
sd1=l2;
sd0*=sd1;
sd1=l9;
sd1=f15129(i,sd1);
sd2=0;
sd1*=sd2;
sd0+=sd1;
l1=sd0;
sd0=f15137(i,sd0);
l2=sd0;
si0=0U;
l7=si0;
sd0=l1;
sd0=f15112(i,sd0);
sd1=l10;
sd2=l11;
sd1*=sd2;
l1=sd1;
sd0*=sd1;
sd1=l2;
sd2=l1;
sd1*=sd2;
si2=l3;
si3=0U;
si0=f6004(i,sd0,sd1,si2,si3);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
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

U32 f9207(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
L4:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l4=si0;
si0=l0;
si1=31U;
si0&=si1;
l5=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l0=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L5;
L7:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l0=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L5;
L8:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l5;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L5:;
si0=l0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=255U;
si0&=si1;
goto L0;
L9:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l0;
si1=31U;
si0&=si1;
l3=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
goto L0;
L10:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
goto L0;
L11:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
goto L0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l1;
si1=l2;
si2=17379332U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
goto L0;
L1:;
si0=17376247U;
si1=43U;
si2=17379316U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f9208(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
F64 sd1,sd2;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+56U);
sd2=0;
si1=sd1 == sd2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L0:;
}

void f9209(rustpythonInstance*i,U32 l0) {
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

void f9210(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
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
goto L2;
}
si0=l1;
f7737(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L1:;
L0:;
}

void f9211(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9212(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9213(rustpythonInstance*i,U32 l0) {
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

void f9214(rustpythonInstance*i,U32 l0) {
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

void f9215(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9216(rustpythonInstance*i,U32 l0) {
L0:;
}

void f9217(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f9218(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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

void f9219(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
si0=l2;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
si0=l1;
l2=si0;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
l2=si0;
L5:;
{
si0=l4;
l7=si0;
si0=l2;
l4=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
goto L6;
L7:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l8;
si1=31U;
si0&=si1;
l9=si0;
si0=l8;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l8=si0;
si0=l4;
si1=2U;
si0+=si1;
l2=si0;
goto L6;
L8:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l8;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l4;
si1=3U;
si0+=si1;
l2=si0;
goto L6;
L9:;
si0=l4;
si1=4U;
si0+=si1;
l2=si0;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=1U;
l5=si0;
si0=l7;
l4=si0;
goto L3;
L6:;
si0=l2;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
l4=si0;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
si0=l8;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
l6=si0;
goto L3;
L11:;
si0=l4;
l6=si0;
si0=l8;
si1=8U;
si0>>=(si1&31);
l9=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L3;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L3;
case 9:
goto L3;
case 10:
goto L13;
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
goto L14;
default:
goto L16;
}
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
l6=si0;
goto L3;
L15:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L14:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L13:;
si0=l8;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L12:;
si0=l8;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L10:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l6=si0;
goto L2;
L3:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
{
si0=l3;
l9=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=l9;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
goto L20;
L21:;
si0=l9;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
goto L22;
L23:;
si0=l9;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L22:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L20:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L17;
}
L19:;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l8;
si1=8U;
si0>>=(si1&31);
l10=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L29;
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
goto L27;
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
goto L24;
case 17:
goto L24;
case 18:
goto L24;
case 19:
goto L24;
case 20:
goto L24;
case 21:
goto L24;
case 22:
goto L24;
case 23:
goto L24;
case 24:
goto L24;
case 25:
goto L24;
case 26:
goto L28;
default:
goto L26;
}
L29:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L28:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L27:;
si0=l8;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L25;
}
goto L24;
L26:;
si0=l10;
if(si0){
goto L24;
}
si0=l8;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L24:;
}
si0=l4;
si1=l2;
si0-=si1;
si1=l9;
si0+=si1;
l6=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
l7=si0;
L1:;
si0=l0;
si1=l6;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9220(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l2;
si0+=si1;
l4=si0;
si0=0U;
l3=si0;
si0=l1;
l5=si0;
L4:;
{
si0=l5;
l6=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L5;
L6:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l7=si0;
si0=l6;
si1=2U;
si0+=si1;
l5=si0;
goto L5;
L7:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l6;
si1=3U;
si0+=si1;
l5=si0;
goto L5;
L8:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
L5:;
si0=l7;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l7;
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0>>=(si1&31);
l8=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L12;
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
goto L10;
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
goto L11;
default:
goto L13;
}
L13:;
si0=l8;
if(si0){
goto L1;
}
si0=l7;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
goto L1;
L12:;
si0=l7;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L11:;
si0=l7;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l7;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l3;
si1=l6;
si0-=si1;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
l3=si0;
L1:;
si0=l0;
si1=l2;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9221(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
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
f9221(i,si0,si1);
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
l3=si0;
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f9222(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L6;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+64U);
l1=si1;
si0-=si1;
l4=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l2;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0-=si1;
l4=si0;
L5:;
si0=l3;
si1=l1;
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

void f9222(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
si1=13U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=1U;
si0^=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l4;
si1=l1;
si2=52U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L9;
L11:;
si0=l5;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L10:;
si0=l5;
si1=l4;
si0+=si1;
l7=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=l7;
si1=-2U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
goto L13;
L14:;
si0=l7;
si1=-3U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
goto L15;
L16:;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L15:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L13:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l9;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L12:;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=-1U;
l3=si0;
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-2U;
l3=si0;
si0=l8;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-3U;
si1=-4U;
si2=l8;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L17:;
si0=l1;
si1=l3;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
if(si0){
goto L18;
}
si0=0U;
l3=si0;
si0=0U;
l4=si0;
goto L2;
L18:;
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L3;
L20:;
si0=l5;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
L19:;
si0=0U;
l3=si0;
L9:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l5;
si1=l6;
si2=0U;
si3=l4;
si4=17378048U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=0U;
l4=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
goto L6;
L7:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+13U,si1);
L6:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l0;
si1=l4;
si2=l8;
si3=l2;
si4=l5;
si5=l3;
si6=0U;
f9224(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L21:;
si0=l0;
si1=l4;
si2=l8;
si3=l2;
si4=l5;
si5=l3;
si6=1U;
f9224(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L3:;
si0=0U;
l3=si0;
si0=l5;
si1=l4;
si0+=si1;
l2=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=-2U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
L2:;
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+13U,si1);
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f9223(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l19=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l5;
si2=-1U;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l5;
si1=l10;
si0-=si1;
l13=si0;
si0=1U;
si1=l12;
si0-=si1;
l14=si0;
si0=l2;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si1+=si2;
l15=si1;
si0+=si1;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l17=si0;
L8:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l5;
si0+=si1;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
L11:;
{
sj0=l11;
si1=l16;
si2=l7;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L11;
}
L10:;
si0=l5;
si1=l7;
si0+=si1;
l7=si0;
si0=0U;
l17=si0;
L9:;
si0=l12;
si1=l17;
si2=l12;
si3=l17;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l2;
si1=l7;
si0+=si1;
l19=si0;
si0=l18;
l9=si0;
L15:;
{
si0=l7;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l12;
l9=si0;
L16:;
{
si0=l17;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l7;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=l19;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L16;
}
}
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
si0=l13;
l17=si0;
goto L12;
L13:;
si0=l14;
si1=l7;
si0+=si1;
si1=l9;
si0+=si1;
l7=si0;
si0=0U;
l17=si0;
L12:;
si0=l1;
si1=l17;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
goto L6;
}
L7:;
si0=l12;
si1=-1U;
si0+=si1;
l16=si0;
si0=l5;
si1=l12;
si0=si0 > si1;
if(si0){
goto L18;
}
goto L17;
L18:;
si0=l2;
si1=l12;
si0+=si1;
l15=si0;
si0=l4;
si1=l12;
si0+=si1;
l13=si0;
si0=l5;
si1=l12;
si0-=si1;
l14=si0;
L19:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l13;
l19=si0;
si0=l14;
l17=si0;
si0=l7;
l9=si0;
L22:;
{
si0=l12;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l12;
l18=si0;
goto L1;
L23:;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l9;
si1=1U;
si0+=si1;
l7=si0;
goto L21;
L24:;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L22;
}
}
si0=l2;
si1=l7;
si0+=si1;
l18=si0;
si0=l16;
l9=si0;
L25:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l7;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l18;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L25;
}
}
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
L21:;
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
L20:;
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L6;
}
L17:;
L26:;
{
sj0=l11;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
goto L26;
L27:;
si0=l2;
si1=l7;
si0+=si1;
l12=si0;
si0=l16;
l9=si0;
L28:;
{
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l16;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l7;
si1=l9;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l17=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l17;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L28;
}
}
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L26;
}
}
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L2;
L4:;
si0=l9;
si1=l5;
si2=17377356U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=17377372U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si1=l18;
si2=l7;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=17377388U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f9224(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=l5;
si0-=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l5;
si2=l9;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si1=-1U;
si0+=si1;
l11=si0;
si0=l2;
si1=l5;
si0-=si1;
l12=si0;
si0=0U;
si1=l5;
si0-=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
L6:;
{
sj0=1ULL;
si1=l2;
si2=l8;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l16;
sj0&=sj1;
l17=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L11;
}
si0=l5;
l18=si0;
si0=l8;
l19=si0;
goto L7;
L11:;
L12:;
{
si0=l13;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l12;
si1=l8;
si0+=si1;
l20=si0;
si0=l8;
si1=l5;
si0-=si1;
l19=si0;
l8=si0;
sj0=l16;
si1=l20;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
goto L12;
}
L10:;
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l14;
l18=si0;
si0=l8;
l19=si0;
goto L7;
L9:;
si0=l5;
si1=l19;
si0+=si1;
l7=si0;
si0=l5;
l18=si0;
goto L7;
L8:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
L13:;
{
si0=l13;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l12;
si1=l8;
si0+=si1;
l20=si0;
si0=l8;
si1=l5;
si0-=si1;
l19=si0;
l8=si0;
sj0=l16;
si1=l20;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
}
si0=l5;
si1=l19;
si0+=si1;
l7=si0;
si0=l5;
l18=si0;
si0=l5;
l14=si0;
L7:;
si0=l9;
si1=l9;
si2=l14;
si3=l9;
si4=l14;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l6;
si0=si2?si0:si1;
l8=si0;
si1=-1U;
si0+=si1;
l20=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l11;
si1=l8;
si0+=si1;
l21=si0;
si0=0U;
si1=l8;
si0-=si1;
l20=si0;
si0=l8;
si1=l19;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
L19:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si0=l2;
si1=l8;
si0+=si1;
l22=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
l23=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l23;
si1=l22;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L19;
}
}
si0=l7;
si1=l9;
si0-=si1;
si1=l20;
si0-=si1;
l7=si0;
si0=l5;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
goto L15;
L18:;
si0=l8;
if(si0){
goto L5;
}
L17:;
si0=l18;
si1=l9;
si2=l18;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l22=si0;
si0=l2;
si1=l19;
si0+=si1;
l23=si0;
si0=l9;
l8=si0;
L20:;
{
si0=l22;
si1=l8;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l1;
si1=l19;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L2;
L21:;
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l19;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l23;
si1=l8;
si0+=si1;
l20=si0;
si0=l4;
si1=l8;
si0+=si1;
l21=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L20;
}
}
si0=l7;
si1=l15;
si0-=si1;
l7=si0;
si0=l15;
l8=si0;
si0=l6;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
l14=si0;
L15:;
si0=l7;
si1=l5;
si0-=si1;
l8=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
goto L1;
L14:;
}
si0=l8;
si1=l3;
si2=17377452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l20;
si1=l5;
si2=17377436U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l5;
si2=17377404U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l19;
si2=l9;
si1+=si2;
l8=si1;
si2=l3;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=17377420U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f9225(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=3U;
l4=si0;
goto L2;
L8:;
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l0;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=4U;
l4=si0;
goto L2;
L7:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l4=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l1;
si0-=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l4;
si0-=si1;
l6=si0;
si0=l0;
si1=255U;
si0&=si1;
l7=si0;
si0=1U;
l8=si0;
si0=l1;
l4=si0;
L10:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
if(si0){
goto L10;
}
}
si0=l5;
si1=l2;
si2=-8U;
si1+=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L4;
L9:;
si0=l2;
if(si0){
goto L11;
}
si0=0U;
l8=si0;
goto L1;
L11:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l8=si0;
goto L1;
L6:;
si0=l3;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=2U;
l4=si0;
goto L2;
L5:;
si0=l2;
si1=-8U;
si0+=si1;
l7=si0;
si0=0U;
l5=si0;
L4:;
si0=l0;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l4=si0;
L12:;
{
si0=l1;
si1=l5;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0^=si1;
l8=si0;
si1=-1U;
si0^=si1;
si1=l8;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L3;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0^=si1;
l8=si0;
si1=-1U;
si0^=si1;
si1=l8;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L12;
}
}
L3:;
si0=0U;
l8=si0;
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l5;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
L13:;
{
si0=l1;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si0=si0 == si1;
l8=si0;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
goto L13;
}
L2:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=0U;
l8=si0;
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l8=si0;
goto L1;
L14:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f9226(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
l8=si0;
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

void f9226(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L13;
}
goto L11;
L14:;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
L13:;
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L16;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l5;
si1=31U;
si0&=si1;
l9=si0;
si0=l5;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l5=si0;
goto L15;
L17:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
goto L15;
L18:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
goto L15;
L16:;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
L15:;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=1U;
l2=si0;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=2U;
l2=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L19:;
si0=l1;
si1=l2;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L5;
L21:;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
L20:;
si0=1U;
l2=si0;
L11:;
si0=l1;
si1=l2;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
si2=l6;
si3=l4;
si4=17377896U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l1;
si1=l2;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
goto L8;
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l0;
si1=l6;
si2=l3;
si3=l2;
si4=l5;
si5=l4;
si6=0U;
f9223(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L22:;
si0=l0;
si1=l6;
si2=l3;
si3=l2;
si4=l5;
si5=l4;
si6=1U;
f9223(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L5:;
si0=l4;
si1=l6;
si0-=si1;
l4=si0;
L4:;
si0=l4;
if(si0){
goto L23;
}
si0=0U;
l4=si0;
goto L2;
L23:;
si0=1U;
l2=si0;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=-32U;
si0=si0 < si1;
L3:;
si0=l2;
si1=1U;
si0^=si1;
l4=si0;
L2:;
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f9227(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f9228(rustpythonInstance*i,U32 l0,U32 l1) {
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
f8715(i,si0,si1);
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
f8716(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

U32 f9229(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f8716(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}


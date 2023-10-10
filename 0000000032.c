#include "w2c2_base.h"

#include "rustpython.h"

void f3230(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+4U);
l7=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=8U;
si2=l2;
si0=si2?si0:si1;
l9=si0;
sj1=l7;
sj2=0ULL;
si3=l2;
sj1=si3?sj1:sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l2=si1;
si2=56U;
si1*=si2;
si0+=si1;
l10=si0;
sj0=l7;
si0=(U32)(sj0);
l11=si0;
si0=l4;
si1=68U;
si0+=si1;
l12=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
si2=l2;
f3364(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
l13=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=68U;
si0+=si1;
si1=l13;
si2=l2;
f3364(i,si0,si1,si2);
L1:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l12;
f3454(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=l7;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=20U;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L2:;
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
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3231(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l3;
si3=56U;
si2+=si3;
si3=12U;
si2+=si3;
f3454(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
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
l9=si0;
sj1=l8;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l7;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
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
goto L8;
}
goto L7;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L7:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3232(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+4U);
l7=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=8U;
si2=l2;
si0=si2?si0:si1;
l9=si0;
sj1=l7;
sj2=0ULL;
si3=l2;
sj1=si3?sj1:sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l2=si1;
si2=56U;
si1*=si2;
si0+=si1;
l10=si0;
sj0=l7;
si0=(U32)(sj0);
l11=si0;
si0=l4;
si1=68U;
si0+=si1;
l12=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=56U;
si0+=si1;
si1=0U;
si2=l2;
f3364(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
l13=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=68U;
si0+=si1;
si1=l13;
si2=l2;
f3364(i,si0,si1,si2);
L1:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l12;
f3454(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=l7;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=20U;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L2:;
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
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l3;
si3=56U;
si2+=si3;
si3=12U;
si2+=si3;
f3454(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
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
l9=si0;
sj1=l8;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l3;
si2=32U;
si1+=si2;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+44U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l7;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L8;
L10:;
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
goto L8;
}
goto L7;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L7:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3234(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
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
si0=l5;
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
l6=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=32U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=17217300U;
si1=38U;
si2=17217444U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f3235(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
l6=si0;
i->g0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=8U;
si0+=si1;
l10=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
si1=l9;
f3342(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L9:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
goto L12;
case 1:
goto L11;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L10;
default:
goto L6;
}
L12:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L11:;
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
L10:;
si0=l2;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3236(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=l8;
f3342(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l8;
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
L5:;
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
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
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
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=35U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
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
si1=l2;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
si2=0U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=0U;
si3=l2;
si1=si3?si1:si2;
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

void f3238(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
sj1=34359738403ULL;
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

void f3239(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l8;
si7=i32_load(&i->m0,(U64)si7+8U);
si8=l9;
f3130(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3240(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+8U);
si8=l10;
f3130(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3241(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
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
si0=l3;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
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
si0=l10;
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
si0=l3;
f15024(i,si0);
L11:;
si0=l7;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=36U;
si2+=si3;
si3=l7;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3242(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l9;
si1=56U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l9;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l10;
si1=88U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l4;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=68U;
si2+=si3;
si3=l10;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3244(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj5=i64_load(&i->m0,(U64)si5);
si6=l5;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l6;
si8=l7;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l7;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l8;
f3131(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3245(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-2U;
si0+=si1;
l14=si0;
si1=1U;
si2=l14;
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
si0=l13;
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
l14=si0;
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
si0=l14;
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
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l11;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
sj5=i64_load(&i->m0,(U64)si5);
si6=l7;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l8;
si8=l9;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l9;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l10;
f3131(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3246(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=64U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l12;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l12;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l12;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l12;
si1=l13;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l12;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
sj5=i64_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l9;
si8=l10;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l10;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l11;
f3131(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l12;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3247(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
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
si0=l11;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l3;
f15024(i,si0);
L11:;
si0=l8;
si1=56U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=48U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
sj1=l9;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=36U;
si2+=si3;
si3=l8;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3248(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l10;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=36U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
sj1=l14;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l10;
si2=l10;
si3=36U;
si2+=si3;
si3=l10;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3249(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l11;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=68U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=80U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l11;
sj1=l14;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l11;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l11;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=68U;
si2+=si3;
si3=l11;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l11;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3250(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3132(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3251(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3132(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3252(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3133(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3253(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3133(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3254(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
f3134(i,si0,si1,si2,si3,si4,si5,si6);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3255(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
f3134(i,si0,si1,si2,si3,si4,si5,si6);
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3256(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3135(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3257(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3135(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3258(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
si2=l3;
si3=36U;
si2+=si3;
si3=l3;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3259(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l2;
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
si0=l8;
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
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l5;
si2=l5;
si3=36U;
si2+=si3;
si3=l5;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3260(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l1=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l0;
si1=l6;
si2=32U;
si1+=si2;
si2=l6;
si3=68U;
si2+=si3;
si3=l6;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3261(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l8;
si7=i32_load(&i->m0,(U64)si7+8U);
f3136(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3262(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+8U);
f3136(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
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
si0=l3;
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
si0=l3;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
si0=l9;
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
si0=l3;
f15024(i,si0);
L11:;
si0=l6;
si1=56U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l6;
si2=4U;
si1+=si2;
si2=l6;
si3=36U;
si2+=si3;
si3=l6;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l6;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3264(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l8;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l8;
si2=l8;
si3=36U;
si2+=si3;
si3=l8;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l9;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l9;
si1=99U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=68U;
si2+=si3;
si3=l9;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l8;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj5=i64_load(&i->m0,(U64)si5);
si6=l5;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l6;
si8=l7;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l7;
si9=i32_load(&i->m0,(U64)si9+8U);
f3137(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3267(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
sj5=i64_load(&i->m0,(U64)si5);
si6=l7;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l8;
si8=l9;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l9;
si9=i32_load(&i->m0,(U64)si9+8U);
f3137(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3268(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
sj5=i64_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l9;
si8=l10;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l10;
si9=i32_load(&i->m0,(U64)si9+8U);
f3137(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3269(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l3;
f15024(i,si0);
L11:;
si0=l7;
si1=56U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
sj1=l8;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=36U;
si2+=si3;
si3=l7;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3270(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l9;
si1=56U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=52U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=48U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
sj1=l13;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l9;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3271(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l10;
si1=88U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=84U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=80U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
sj1=l13;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l10;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l10;
si1=99U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=68U;
si2+=si3;
si3=l10;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3272(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3138(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3273(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3138(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l8;
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
l9=si0;
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
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
si2=l4;
si3=l5;
f3139(i,si0,si1,si2,si3);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3275(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l7;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l7;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
f3139(i,si0,si1,si2,si3);
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3276(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3140(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3277(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3140(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3141(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3279(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3141(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3280(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si2=l2;
si3=36U;
si2+=si3;
si3=l2;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3281(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
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
si0=l7;
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
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l4;
si2=l4;
si3=36U;
si2+=si3;
si3=l4;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l5;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l5;
si1=99U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l5;
si2=32U;
si1+=si2;
si2=l5;
si3=68U;
si2+=si3;
si3=l5;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l5;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3283(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=l5;
si2=l1;
si3=l5;
si4=32U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3284(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l7;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=l7;
si2=l3;
si3=l7;
si4=32U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3285(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
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
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l8;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l1;
si3=l8;
si4=64U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3286(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
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
si0=l5;
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
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=99U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l4;
si2=l3;
si3=l4;
si4=32U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3287(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l8;
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
l9=si0;
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
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=99U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l6;
si2=l1;
si3=l6;
si4=32U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l6;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3288(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l7;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L11;
case 3:
goto L11;
case 4:
goto L13;
default:
goto L11;
}
L15:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l7;
si2=32U;
si1+=si2;
si2=l4;
si3=l7;
si4=64U;
si3+=si4;
f3014(i,si0,si1,si2,si3);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3289(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l8;
si7=i32_load(&i->m0,(U64)si7+8U);
si8=l9;
f3158(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3290(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+8U);
si8=l10;
f3158(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3291(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
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
si0=l3;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
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
si0=l10;
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
si0=l3;
f15024(i,si0);
L11:;
si0=l7;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=36U;
si2+=si3;
si3=l7;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3292(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l9;
si1=56U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l9;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3293(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l10;
si1=88U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l4;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=68U;
si2+=si3;
si3=l10;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3294(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj5=i64_load(&i->m0,(U64)si5);
si6=l5;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l6;
si8=l7;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l7;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l8;
f3159(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3295(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-2U;
si0+=si1;
l14=si0;
si1=1U;
si2=l14;
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
si0=l13;
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
l14=si0;
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
si0=l14;
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
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l11;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
sj5=i64_load(&i->m0,(U64)si5);
si6=l7;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l8;
si8=l9;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l9;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l10;
f3159(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3296(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj1,sj5;
si0=i->g0;
si1=64U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si0=l12;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l12;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l12;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l12;
si1=l13;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l12;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
sj5=i64_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l9;
si8=l10;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l10;
si9=i32_load(&i->m0,(U64)si9+8U);
si10=l11;
f3159(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l12;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3297(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
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
si0=l11;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l3;
f15024(i,si0);
L11:;
si0=l8;
si1=56U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=36U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=48U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
sj1=l9;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=36U;
si2+=si3;
si3=l8;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3298(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l10;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=36U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
sj1=l14;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l10;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l10;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l10;
si2=l10;
si3=36U;
si2+=si3;
si3=l10;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3299(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l11;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=68U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=80U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l11;
sj1=l14;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l11;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l11;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l11;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=68U;
si2+=si3;
si3=l11;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l11;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3300(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3160(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3160(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3302(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3161(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3303(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3161(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3304(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
f3162(i,si0,si1,si2,si3,si4,si5,si6);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3305(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
f3162(i,si0,si1,si2,si3,si4,si5,si6);
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3306(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3163(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3163(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3308(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
si6=l8;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l8;
si7=i32_load(&i->m0,(U64)si7+8U);
f3164(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3309(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
si6=l9;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l9;
si7=i32_load(&i->m0,(U64)si7+8U);
f3164(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3310(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
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
si0=l3;
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
si0=l3;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
si0=l9;
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
si0=l3;
f15024(i,si0);
L11:;
si0=l6;
si1=56U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l6;
si2=4U;
si1+=si2;
si2=l6;
si3=36U;
si2+=si3;
si3=l6;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l6;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3311(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l8;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l8;
si2=l8;
si3=36U;
si2+=si3;
si3=l8;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l8;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3312(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l9;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l9;
si1=99U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l9;
si3=68U;
si2+=si3;
si3=l9;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3313(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=20U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l8;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj5=i64_load(&i->m0,(U64)si5);
si6=l5;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l6;
si8=l7;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l7;
si9=i32_load(&i->m0,(U64)si9+8U);
f3165(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3314(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
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
si0=l13;
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
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
sj5=i64_load(&i->m0,(U64)si5);
si6=l7;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l8;
si8=l9;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l9;
si9=i32_load(&i->m0,(U64)si9+8U);
f3165(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3315(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj1,sj5;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l11;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l11;
si1=l13;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l11;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
sj5=i64_load(&i->m0,(U64)si5);
si6=l8;
si6=i32_load(&i->m0,(U64)si6+8U);
si7=l9;
si8=l10;
si8=i32_load(&i->m0,(U64)si8+4U);
si9=l10;
si9=i32_load(&i->m0,(U64)si9+8U);
f3165(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9);
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3316(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l5;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l3;
f15024(i,si0);
L11:;
si0=l7;
si1=56U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
sj1=l8;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=36U;
si2+=si3;
si3=l7;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3317(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l12;
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
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l5;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l5;
f15024(i,si0);
L21:;
si0=l9;
si1=56U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=52U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=48U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
sj1=l13;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l9;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l9;
si2=l9;
si3=36U;
si2+=si3;
si3=l9;
si4=64U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l9;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3318(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l10;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=l12;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L12;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
goto L20;
case 1:
goto L19;
case 2:
goto L16;
case 3:
goto L16;
case 4:
goto L18;
default:
goto L16;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
goto L17;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
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
goto L25;
case 1:
goto L24;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L23;
default:
goto L21;
}
L25:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l6;
f15024(i,si0);
L21:;
si0=l10;
si1=88U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=84U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=80U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
sj1=l13;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l10;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l10;
si1=99U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l10;
si2=32U;
si1+=si2;
si2=l10;
si3=68U;
si2+=si3;
si3=l10;
si4=96U;
si3+=si4;
f3013(i,si0,si1,si2,si3);
si0=l10;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3319(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3166(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3320(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3166(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3321(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l8;
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
l9=si0;
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
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
si2=l4;
si3=l5;
f3167(i,si0,si1,si2,si3);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3322(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l7;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l7;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
f3167(i,si0,si1,si2,si3);
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3323(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l11;
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
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
si2=l4;
si3=l5;
si4=l6;
si5=l7;
f3168(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3324(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l9;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l9;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
si5=l8;
f3168(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3325(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
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
si0=l9;
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
l10=si0;
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
si0=l10;
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
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l5;
si4=l6;
f3169(i,si0,si1,si2,si3,si4);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3326(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=28U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
l4=si0;
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
si0=l4;
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
si0=l8;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
si2=32U;
si1+=si2;
si2=l5;
si3=l6;
si4=l7;
f3169(i,si0,si1,si2,si3,si4);
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3327(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj10;
si0=i->g0;
si1=96U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l11;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
si0=l9;
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
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l8;
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
si0=l8;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+4U);
l13=sj0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l11;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l11;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l11;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l5;
si2=l11;
si3=64U;
si2+=si3;
si3=l2;
si4=l3;
si5=l4;
si6=l11;
si7=8U;
si6+=si7;
si7=l6;
si8=l7;
si9=l9;
sj10=l13;
f3009(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,sj10);
si0=l11;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3328(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj10;
si0=i->g0;
si1=96U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
si0=l8;
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
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l8;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L1:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
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
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
goto L7;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L6:;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0+4U);
l12=sj0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l4=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l10;
si1=99U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l10;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l4;
si2=l10;
si3=64U;
si2+=si3;
si3=l1;
si4=l2;
si5=l3;
si6=l10;
si7=8U;
si6+=si7;
si7=l5;
si8=l6;
si9=l8;
sj10=l12;
f3009(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,sj10);
si0=l10;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3329(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=48U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l6;
l3=si0;
L4:;
{
si0=l6;
si1=l2;
si2=24U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
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
goto L5;
case 3:
goto L5;
case 4:
goto L8;
default:
goto L5;
}
L10:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=4U;
si0+=si1;
l0=si0;
goto L6;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
goto L5;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l7;
si1=4U;
si0+=si1;
l0=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
f15024(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L1;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L12;
L13:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L12:;
goto L0;
L2:;
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L0:;
}


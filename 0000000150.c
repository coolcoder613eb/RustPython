#include "w2c2_base.h"

#include "rustpython.h"

U32 f15030(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=f15023(i,si0);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=f15029(i,si0,si1);
L0:;
return si0;
}

U32 f15031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L1;
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
si0=0U;
l1=si0;
goto L1;
L5:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si0=f15049(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L2;
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l4=sj0;
sj1=64ULL;
sj0&=sj1;
l5=sj0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+10U);
l1=si0;
sj0=l4;
sj1=16386ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l1;
si1=335544320U;
si0|=si1;
l1=si0;
goto L1;
L9:;
si0=l1;
si1=67108864U;
si0|=si1;
l1=si0;
goto L1;
L8:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=268435456U;
si0|=si1;
l1=si0;
goto L1;
L10:;
si0=l1;
si1=134217728U;
si0|=si1;
l1=si0;
goto L1;
L4:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=4095U;
si1&=si2;
si0=f15050(i,si0,si1);
l1=si0;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
goto L1;
L11:;
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L2;
L3:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
L2:;
si0=-1U;
l1=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f15032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=-1U;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L2;
}
L4:;
si0=l3;
si1=80U;
si0+=si1;
si1=0U;
si2=96U;
si0=f15145(i,si0,si1,si2);
si0=l3;
si1=144U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=2U;
si3=l3;
si4=12U;
si3+=si4;
si0=f15063(i,si0,si1,si2,si3);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L5:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=32U;
si0+=si1;
l4=si0;
L7:;
{
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L8:;
si0=l4;
si1=-6U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store32(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
goto L1;
L9:;
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L7;
}
}
L6:;
si0=0U;
l4=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
si2=80U;
si1+=si2;
si0=f15049(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L10:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+82U);
si2=65531U;
si1&=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si2=si2 != si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
l1=si1;
i32_store16(&i->m0,(U64)si0+82U,si1);
si0=l0;
si1=l1;
si0=f15050(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f15033(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=l2;
si0=f15051(i,si0,si1);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l0=si0;
goto L1;
L2:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=0U;
l0=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+56U);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
l5=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l6=sj1;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
l7=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l1;
sj1=l3;
sj2=l4;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+112U,sj1);
si0=l1;
sj1=l5;
sj2=l6;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+96U,sj1);
si0=l1;
sj1=l7;
sj2=l8;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+80U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l1;
si1=140U;
si0+=si1;
si1=l2;
si2=68U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=84U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=124U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+68U);
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si1=l9;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=18638184U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15034(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
sj1=1ULL;
si2=l2;
si3=8U;
si2+=si3;
si0=f15047(i,si0,sj1,si2);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l0=si0;
goto L1;
L2:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l3;
sj2=l4;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l0=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15035(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=f15057(i,si0);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=28U;
si2=l0;
si3=l0;
si4=76U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
L0:;
return si0;
}

U32 f15036(rustpythonInstance*i,U32 l0,U64 l1) {
U32 si0,si1;
U64 sj0,sj1;
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L2;
}
si0=28U;
l0=si0;
goto L1;
L2:;
si0=l0;
sj1=l1;
si0=f15052(i,si0,sj1);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
L0:;
return si0;
}

U64 f15037(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
sj1=l1;
si2=l2;
si3=255U;
si2&=si3;
si3=l3;
si4=8U;
si3+=si4;
si0=f15056(i,si0,sj1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=70U;
si2=l2;
si3=l2;
si4=76U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18663788U,si1);
sj0=-1ULL;
l1=sj0;
goto L1;
L2:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l1=sj0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
sj0=l1;
L0:;
return sj0;
}

U32 f15038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
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
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=1U;
si3=l3;
si4=4U;
si3+=si4;
si0=f15055(i,si0,si1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=8U;
si2=l2;
si3=l2;
si4=76U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l2=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
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

U32 f15039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
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
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=1U;
si3=l3;
si4=4U;
si3+=si4;
si0=f15058(i,si0,si1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=8U;
si2=l2;
si3=l2;
si4=76U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l2=si0;
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
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

U32 f15040(rustpythonInstance*i) {
U32 si0;
f15043(i);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657612U);
L0:;
return si0;
}

U32 f15041(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
f15085(i);
si0=l0;
si0=f15048(i,si0);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
L0:;
return si0;
}

void f15042(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15064(i,si0);
UNREACHABLE;
L0:;
}

void f15043(rustpythonInstance*i) {
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657612U);
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15044(i);
L1:;
L0:;
}

void f15044(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si0=f15046(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L3;
}
si0=18663792U;
l1=si0;
goto L1;
L3:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0=f15026(i,si0,si1);
l1=si0;
if(si0){
goto L4;
}
si0=l2;
f15024(i,si0);
L5:;
si0=70U;
f15042(i,si0);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
si0=f15045(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
si0=l1;
f15024(i,si0);
L2:;
si0=71U;
f15042(i,si0);
UNREACHABLE;
L1:;
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18657612U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15045(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__environ_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15046(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__environ_sizes_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15047(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
sj1=l1;
si2=l2;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15048(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=wasi_snapshot_preview1__fd_close(i,si0);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15049(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_fdstat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15050(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_fdstat_set_flags(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15051(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_filestat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15052(rustpythonInstance*i,U32 l0,U64 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=l1;
si0=wasi_snapshot_preview1__fd_filestat_set_size(i,si0,sj1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15053(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_prestat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si0=wasi_snapshot_preview1__fd_prestat_dir_name(i,si0,si1,si2);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15056(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
U64 sj1;
si0=l0;
sj1=l1;
si2=l2;
si3=l3;
si0=wasi_snapshot_preview1__fd_seek(i,si0,sj1,si2,si3);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15057(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=wasi_snapshot_preview1__fd_sync(i,si0);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15059(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l1;
si2=f15152(i,si2);
si0=wasi_snapshot_preview1__path_create_directory(i,si0,si1,si2);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15152(i,si3);
si4=l3;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U64 l4,U32 l5) {
U32 si0,si1,si2,si3,si6;
U64 sj4,sj5;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15152(i,si3);
sj4=l3;
sj5=l4;
si6=l5;
si0=wasi_snapshot_preview1__path_filestat_set_times(i,si0,si1,si2,si3,sj4,sj5,si6);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4,U64 l5,U32 l6,U32 l7) {
U32 si0,si1,si2,si3,si4,si7,si8;
U64 sj5,sj6;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15152(i,si3);
si4=l3;
sj5=l4;
sj6=l5;
si7=l6;
si8=l7;
si0=wasi_snapshot_preview1__path_open(i,si0,si1,si2,si3,si4,sj5,sj6,si7,si8);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=wasi_snapshot_preview1__poll_oneoff(i,si0,si1,si2,si3);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

void f15064(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
wasi_snapshot_preview1__proc_exit(i,si0);
UNREACHABLE;
L0:;
}

void f15065(rustpythonInstance*i) {
UNREACHABLE;
L0:;
}

U32 f15066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si6,si7,si8;
U64 sj0,sj1,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=503316480U;
si0&=si1;
si1=-33554432U;
si0+=si1;
si1=25U;
si0>>=(si1&31);
l4=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=1U;
si1=l4;
si0<<=(si1&31);
l4=si0;
si1=642U;
si0&=si1;
if(si0){
goto L3;
}
sj0=-4211012ULL;
l5=sj0;
si0=l4;
si1=9U;
si0&=si1;
if(si0){
goto L2;
}
L4:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L3:;
sj0=-4194626ULL;
sj1=-4211012ULL;
si2=l2;
si3=67108864U;
si2&=si3;
sj0=si2?sj0:sj1;
l5=sj0;
sj1=4194625ULL;
sj0|=sj1;
sj1=l5;
si2=l2;
si3=268435456U;
si2&=si3;
sj0=si2?sj0:sj1;
l5=sj0;
L2:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si0=f15049(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l4=si0;
goto L1;
L5:;
si0=-1U;
l4=si0;
si0=l0;
si1=l2;
si2=-1U;
si1^=si2;
si2=24U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
si2=l1;
si3=l2;
si4=12U;
si3>>=(si4&31);
si4=4095U;
si3&=si4;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+24U);
l6=sj4;
sj5=l5;
sj4&=sj5;
sj5=l6;
si6=l2;
si7=4095U;
si6&=si7;
si7=l3;
si8=4U;
si7+=si8;
si0=f15062(i,si0,si1,si2,si3,sj4,sj5,si6,si7);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L1;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f15067(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15059(i,si0,si1);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
L0:;
return si0;
}

U32 f15068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=-1U;
l5=si0;
si0=l0;
si1=l3;
si2=-1U;
si1^=si2;
si2=1U;
si1&=si2;
si2=l1;
si3=l4;
si0=f15060(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L1;
L2:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
l8=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l9=sj1;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l10=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l11=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
sj1=l6;
sj2=l7;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+112U,sj1);
si0=l2;
sj1=l8;
sj2=l9;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+96U,sj1);
si0=l2;
sj1=l10;
sj2=l11;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0+80U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=140U;
si0+=si1;
si1=l4;
si2=68U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=132U;
si0+=si1;
si1=l4;
si2=84U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=124U;
si0+=si1;
si1=l4;
si2=76U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+68U);
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=-1U;
si0+=si1;
l3=si0;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=18638212U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f15069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L4;
}
si0=10U;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
goto L3;
L4:;
si0=0U;
l5=si0;
sj0=0ULL;
l7=sj0;
sj0=0ULL;
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
default:
goto L6;
}
L7:;
sj0=0ULL;
l6=sj0;
si0=2U;
l5=si0;
goto L5;
L6:;
si0=28U;
l9=si0;
si0=l8;
si1=999999999U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=1000000000ULL;
sj4=0ULL;
si5=l4;
si6=44U;
si5+=si6;
f15159(i,si0,sj1,sj2,sj3,sj4,si5);
sj0=0ULL;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=1ULL;
sj1&=sj2;
l6=sj1;
sj0-=sj1;
sj1=l10;
sj0^=sj1;
sj1=0ULL;
si0=sj0 != sj1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=0U;
si1=si1 != si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
sj1=l11;
sj2=-512ULL;
sj1&=sj2;
sj0^=sj1;
sj1=l6;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l11;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj2=l10;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
l10=sj1;
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l11=sj0;
sj1=l10;
sj0^=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
sj0=l11;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
L5:;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L9;
default:
goto L8;
}
L9:;
si0=l5;
si1=8U;
si0|=si1;
l5=si0;
goto L3;
L8:;
si0=28U;
l9=si0;
si0=l8;
si1=999999999U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=l7;
sj2=0ULL;
sj3=1000000000ULL;
sj4=0ULL;
si5=l4;
si6=20U;
si5+=si6;
f15159(i,si0,sj1,sj2,sj3,sj4,si5);
sj0=0ULL;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=1ULL;
sj1&=sj2;
l7=sj1;
sj0-=sj1;
sj1=l10;
sj0^=sj1;
sj1=0ULL;
si0=sj0 != sj1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=0U;
si1=si1 != si2;
si0|=si1;
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l11;
sj2=-512ULL;
sj1&=sj2;
sj0^=sj1;
sj1=l7;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l11;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l7=sj1;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj2=l10;
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
l10=sj1;
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l11=sj0;
sj1=l10;
sj0^=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=l11;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
si0=l5;
si1=4U;
si0|=si1;
l5=si0;
L3:;
si0=l0;
si1=l3;
si2=-1U;
si1^=si2;
si2=1U;
si1&=si2;
si2=l1;
sj3=l6;
sj4=l7;
si5=l5;
si0=f15061(i,si0,si1,si2,sj3,sj4,si5);
l9=si0;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=0U;
si1=l9;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l2=si0;
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f15070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
si0=l0;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si2=0U;
si0=f15079(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si0=f15066(i,si0,si1,si2);
L0:;
return si0;
}

U32 f15071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l0;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si0=f15082(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=f15067(i,si0,si1);
L0:;
return si0;
}

U32 f15072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si2=l3;
si0=f15084(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f15068(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f15073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=-2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si2=l3;
si0=f15083(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f15069(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f15074(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=160U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=-1U;
l2=si0;
si0=l0;
si1=l1;
si2=156U;
si1+=si2;
si2=18663796U;
si3=18663800U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l0=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=-1U;
l2=si0;
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663796U);
si2=l1;
si3=8U;
si2+=si3;
si3=0U;
si0=f15072(i,si0,si1,si2,si3);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=57344U;
si0&=si1;
si1=16384U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
si1=54U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L1;
L2:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+156U);
l4=si0;
si0=f15152(i,si0);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663796U);
l6=si0;
si1=18632922U;
si0=f15147(i,si0,si1);
l7=si0;
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l0=si0;
l8=si0;
si0=0U;
l9=si0;
goto L3;
L4:;
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=0U;
si1=si1 != si2;
l3=si1;
si0+=si1;
l0=si0;
si0=l6;
si0=f15152(i,si0);
l9=si0;
L3:;
si0=l0;
si1=l9;
si0+=si1;
si1=1U;
si0+=si1;
si0=f15022(i,si0);
l0=si0;
if(si0){
goto L5;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L1;
L5:;
si0=l0;
si1=47U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
si1=l4;
si0=f15149(i,si0,si1);
l2=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si0+=si1;
si1=47U;
i32_store8(&i->m0,(U64)si0,si1);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si0+=si1;
si1=l3;
si0+=si1;
si1=l6;
si0=f15149(i,si0,si1);
L7:;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657616U);
l3=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18657616U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663804U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15024(i,si0);
L8:;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663804U,si1);
L1:;
si0=l1;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f15075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=47U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
l6=si0;
goto L2;
L7:;
si0=l0;
si1=18632922U;
si0=f15147(i,si0,si1);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=18632919U;
si0=f15147(i,si0,si1);
if(si0){
goto L5;
}
L6:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657616U);
l6=si0;
goto L4;
L5:;
si0=l6;
si1=46U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si2=47U;
si1=si1 == si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L8:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663808U);
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657616U);
l6=si0;
si0=f15152(i,si0);
l8=si0;
si1=l0;
si1=f15152(i,si1);
si0+=si1;
si1=l8;
si2=l6;
si1+=si2;
si2=-1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l9=si1;
si2=47U;
si1=si1 != si2;
l10=si1;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663812U);
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l7;
si1=l11;
si0=f15027(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si1=l11;
i32_store(&i->m0,(U64)si0+18663812U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+18663808U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657616U);
l6=si0;
L9:;
si0=l7;
si1=l6;
si0=f15149(i,si0,si1);
l6=si0;
si0=l9;
si1=47U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=l8;
si0+=si1;
si1=47U;
i32_store16(&i->m0,(U64)si0,si1);
L10:;
si0=l6;
si1=l8;
si0+=si1;
si1=l10;
si0+=si1;
si1=l0;
si0=f15149(i,si0,si1);
L4:;
si0=l6;
if(si0){
goto L2;
}
L3:;
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l0=si0;
goto L1;
L2:;
si0=l6;
si1=l1;
si2=l5;
si3=12U;
si2+=si3;
si0=f15088(i,si0,si1,si2);
l0=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=-1U;
l0=si0;
goto L1;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si1=f15152(i,si1);
si2=1U;
si1+=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L12;
L13:;
si0=l4;
if(si0){
goto L14;
}
si0=0U;
si1=68U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l0=si0;
goto L1;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=f15027(i,si0,si1);
l1=si0;
if(si0){
goto L15;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
l0=si0;
goto L1;
L15:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L12:;
si0=l1;
si1=l6;
si0=f15149(i,si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15076(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657616U);
l2=si0;
si0=l0;
if(si0){
goto L2;
}
si0=l2;
si0=f15150(i,si0);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=0U;
goto L0;
L2:;
si0=l2;
si0=f15152(i,si0);
si1=1U;
si0+=si1;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si0=f15149(i,si0,si1);
goto L0;
L3:;
si0=0U;
l0=si0;
si0=0U;
si1=68U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
L1:;
si0=l0;
L0:;
return si0;
}

U32 f15077(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
si0=f15049(i,si0,si1);
l0=si0;
if(si0){
goto L2;
}
si0=59U;
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=36U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663788U,si1);
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

F64 f15078(rustpythonInstance*i,F64 l0,F64 l1) {
U32 si0;
F64 sd0,sd1;
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sd0=l0;
goto L0;
L2:;
sd0=l0;
sd1=l1;
sd0=FMAX(sd0,sd1);
l1=sd0;
L1:;
sd0=l1;
L0:;
return sd0;
}

U32 f15079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l4=si0;
L1:;
si0=-1U;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l4;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15066(i,si0,si1,si2);
l0=si0;
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15080(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l3=si0;
L1:;
si0=-1U;
l0=si0;
si0=l3;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l3;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=0U;
si0=f15068(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15081(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l3=si0;
L1:;
si0=-1U;
l0=si0;
si0=l3;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l3;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=1U;
si0=f15068(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15082(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l3=si0;
L1:;
si0=-1U;
l0=si0;
si0=l3;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l3;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si0=f15067(i,si0,si1);
l0=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15083(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l4=si0;
L1:;
si0=-1U;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l4;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=l2;
si0=f15069(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15084(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si4=1U;
si0=f15075(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=18663816U;
si3=18663820U;
si3=i32_load(&i->m0,(U64)si3);
si0=f15087(i,si0,si1,si2,si3);
l4=si0;
L1:;
si0=-1U;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
goto L3;
L4:;
si0=l4;
si1=18663816U;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=l2;
si0=f15068(i,si0,si1,si2,si3);
l0=si0;
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f15085(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663832U);
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663832U);
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=3U;
l1=si0;
L4:;
{
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
si0=f15053(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663832U,si1);
goto L1;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=1U;
si0+=si1;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=l3;
si0=f15054(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si0=f15086(i,si0,si1);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L4;
}
L3:;
si0=71U;
f15042(i,si0);
UNREACHABLE;
L2:;
si0=70U;
f15042(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15086(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
default:
goto L2;
}
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663824U);
l2=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663836U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663828U);
l3=si0;
si0=8U;
si1=l2;
si2=1U;
si1<<=(si2&31);
si2=4U;
si3=l2;
si1=si3?si1:si2;
l4=si1;
si0=f15026(i,si0,si1);
l5=si0;
if(si0){
goto L4;
}
si0=-1U;
goto L0;
L4:;
si0=l5;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+18663836U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+18663828U,si1);
si0=l3;
f15024(i,si0);
L3:;
L6:;
{
si0=l1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
default:
goto L5;
}
L8:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
goto L6;
L7:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=47U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0+=si1;
l1=si0;
goto L6;
}
L5:;
si0=l3;
si0=f15150(i,si0);
l3=si0;
if(si0){
goto L9;
}
si0=-1U;
goto L0;
L9:;
si0=0U;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663824U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663828U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
goto L0;
L1:;
f15065(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f15087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=7413U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l4;
si4=12U;
si3+=si4;
si4=0U;
si0=f15075(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l2;
si0=f15088(i,si0,si1,si2);
l3=si0;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f15088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l0;
si1=-1U;
si0+=si1;
l3=si0;
f15085(i);
L1:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L1;
}
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663824U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663828U);
l6=si0;
si0=-1U;
l7=si0;
L4:;
{
si0=l6;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=f15152(i,si0);
l10=si0;
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l10;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L5;
}
L6:;
si0=l10;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=47U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l3;
si1=l9;
si2=l10;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
si0=l10;
l12=si0;
L10:;
{
si0=l12;
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=-1U;
si0+=si1;
l12=si0;
si0=l11;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=47U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
if(si0){
goto L5;
}
L7:;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l10;
l4=si0;
L5:;
si0=l5;
if(si0){
goto L4;
}
}
si0=l7;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=0U;
si1=44U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
goto L0;
L2:;
si0=l3;
si1=l4;
si0+=si1;
si1=-1U;
si0+=si1;
l0=si0;
L11:;
{
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=47U;
si0=si0 == si1;
if(si0){
goto L11;
}
}
si0=l2;
si1=l0;
si2=18632922U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
L0:;
return si0;
}

U32 f15089(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
if(si0){
goto L1;
}
si0=i->m0.pages;
si1=16U;
si0<<=(si1&31);
goto L0;
L1:;
si0=l0;
si1=65535U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0>>=(si1&31);
si0=wasmMemoryGrow(&i->m0,si0);
l0=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
goto L0;
L3:;
si0=l0;
si1=16U;
si0<<=(si1&31);
goto L0;
L2:;
f15065(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f15090(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
f15043(i);
si0=l0;
si1=61U;
si0=f15146(i,si0,si1);
l1=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
l2=si0;
si0=l0;
si1=l1;
si2=l0;
si1-=si2;
l3=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657612U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
L4:;
{
si0=l0;
si1=l1;
si2=l3;
si0=f15153(i,si0,si1,si2);
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L3;
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l1;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
L2:;
si0=l2;
L0:;
return si0;
}

U32 f15091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
f15043(i);
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657612U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l3=si0;
si0=l4;
l1=si0;
L2:;
{
si0=l0;
si1=l5;
si2=l6;
si0=f15153(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
f15092(i,si0,si1);
si0=0U;
goto L0;
L3:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=2U;
si0<<=(si1&31);
l6=si0;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663840U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si0=f15027(i,si0,si1);
l5=si0;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l5;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l4;
si2=l6;
si0=f15143(i,si0,si1,si2);
L7:;
si0=l1;
f15024(i,si0);
L5:;
si0=0U;
l1=si0;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+18663840U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+18657612U,si1);
si0=l5;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l1=si0;
si0=0U;
si1=l2;
f15092(i,si0,si1);
L8:;
si0=l1;
goto L0;
L4:;
si0=l2;
f15024(i,si0);
si0=-1U;
L0:;
return si0;
}

void f15092(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663848U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663844U);
l3=si0;
si0=l2;
l4=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
f15024(i,si0);
goto L0;
L3:;
si0=l5;
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
L4:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663844U);
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si2=4U;
si1+=si2;
si0=f15027(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+18663844U,si1);
si0=0U;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663848U,si1);
si0=l3;
si1=l4;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L5:;
L0:;
}

U32 f15093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=61U;
si0=f15146(i,si0,si1);
l3=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=l0;
si1-=si2;
l3=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
goto L0;
L1:;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=l0;
si0=f15090(i,si0);
if(si0){
goto L3;
}
L4:;
si0=l3;
si1=l1;
si1=f15152(i,si1);
l2=si1;
si0+=si1;
si1=2U;
si0+=si1;
si0=f15022(i,si0);
l4=si0;
if(si0){
goto L5;
}
si0=-1U;
goto L0;
L5:;
si0=l4;
si1=l0;
si2=l3;
si0=f15143(i,si0,si1,si2);
l0=si0;
si1=l3;
si0+=si1;
l4=si0;
si1=61U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
si2+=si3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l0;
si0=f15091(i,si0,si1,si2);
l2=si0;
L3:;
si0=l2;
L0:;
return si0;
}

U32 f15094(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si1=61U;
si0=f15146(i,si0,si1);
l1=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l0;
si1-=si2;
l2=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+18663788U,si1);
si0=-1U;
goto L0;
L1:;
f15043(i);
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657612U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l5=si0;
L4:;
{
si0=l0;
si1=l4;
si2=l2;
si0=f15153(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l4;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=0U;
f15092(i,si0,si1);
goto L5;
L6:;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l3;
l1=si0;
L5:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
}
si0=0U;
l3=si0;
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
L0:;
return si0;
}

U32 f15095(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663876U);
l1=si0;
if(si0){
goto L1;
}
si0=18663852U;
l1=si0;
si0=0U;
si1=18663852U;
i32_store(&i->m0,(U64)si0+18663876U,si1);
L1:;
si0=0U;
si1=l0;
si2=l0;
si3=76U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0<<=(si1&31);
si1=18639792U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=18638240U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=f15100(i,si0,si1);
L0:;
return si0;
}

void f15096(rustpythonInstance*i) {
L0:;
}

void f15097(rustpythonInstance*i) {
f15096(i);
f15096(i);
L0:;
}

void f15098(rustpythonInstance*i,U32 l0) {
U32 si0;
f15096(i);
f15096(i);
si0=l0;
f15042(i,si0);
UNREACHABLE;
L0:;
}

U32 f15099(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l0;
L0:;
return si0;
}

U32 f15100(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15099(i,si0,si1);
L0:;
return si0;
}

U32 f15101(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=14U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=18632913U;
si1=18632905U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
si0=si2?si0:si1;
goto L0;
L1:;
si0=l0;
si1=65535U;
si0&=si1;
l2=si0;
si0=l0;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
l3=si0;
si0=l0;
si1=393215U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=65535U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=8U;
si0+=si1;
si1=18632911U;
si2=l4;
si0=si2?si0:si1;
goto L0;
L2:;
si0=18632923U;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L3;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L3;
}
L9:;
si0=18639946U;
l5=si0;
si0=l2;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L3;
L8:;
si0=18639952U;
l5=si0;
si0=l2;
si1=49U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L3;
L7:;
si0=18632923U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
goto L3;
L6:;
si0=18640272U;
l5=si0;
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
L5:;
si0=l2;
if(si0){
goto L11;
}
si0=l5;
l4=si0;
goto L10;
L11:;
si0=l0;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L13;
}
si0=l5;
l4=si0;
si0=l2;
l7=si0;
goto L12;
L13:;
si0=0U;
l8=si0;
si0=l2;
l7=si0;
L14:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L14;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l4;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L10;
}
L15:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
l4=si0;
si0=l0;
if(si0){
goto L15;
}
L16:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L16;
}
}
L17:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
l4=si0;
si0=l0;
if(si0){
goto L17;
}
}
L18:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l0;
if(si0){
goto L18;
}
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
}
L10:;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f15100(i,si0,si1);
l4=si0;
L3:;
si0=l4;
L0:;
return si0;
}

U32 f15102(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663876U);
l1=si0;
if(si0){
goto L1;
}
si0=18663852U;
l1=si0;
si0=0U;
si1=18663852U;
i32_store(&i->m0,(U64)si0+18663876U,si1);
L1:;
si0=l0;
si1=l1;
si0=f15101(i,si0,si1);
L0:;
return si0;
}

F64 f15103(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693248U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L2;
}
sd0=0;
sd1=3.1415926535897931;
sj2=l1;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
goto L0;
L2:;
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L1:;
si0=l2;
si1=1071644671U;
si0=si0 > si1;
if(si0){
goto L4;
}
sd0=1.5707963267948966;
l3=sd0;
si0=l2;
si1=1012924417U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=6.123233995736766e-17;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l3=sd2;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=l3;
sd8=3.4793310759602117e-05;
sd7*=sd8;
sd8=0.00079153499428981453;
sd7+=sd8;
sd6*=sd7;
sd7=-0.040055534500679411;
sd6+=sd7;
sd5*=sd6;
sd6=0.20121253213486293;
sd5+=sd6;
sd4*=sd5;
sd5=-0.32556581862240092;
sd4+=sd5;
sd3*=sd4;
sd4=0.16666666666666666;
sd3+=sd4;
sd2*=sd3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=0.077038150555901935;
sd6*=sd7;
sd7=-0.68828397160545329;
sd6+=sd7;
sd5*=sd6;
sd6=2.0209457602335057;
sd5+=sd6;
sd4*=sd5;
sd5=-2.4033949117344142;
sd4+=sd5;
sd3*=sd4;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1*=sd2;
sd0-=sd1;
sd1=l0;
sd0-=sd1;
sd1=1.5707963267948966;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
sd0=1.5707963267948966;
sd1=l0;
sd2=1;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
l0=sd1;
sd1=sqrt(sd1);
l3=sd1;
sd2=l3;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=l0;
sd9=3.4793310759602117e-05;
sd8*=sd9;
sd9=0.00079153499428981453;
sd8+=sd9;
sd7*=sd8;
sd8=-0.040055534500679411;
sd7+=sd8;
sd6*=sd7;
sd7=0.20121253213486293;
sd6+=sd7;
sd5*=sd6;
sd6=-0.32556581862240092;
sd5+=sd6;
sd4*=sd5;
sd5=0.16666666666666666;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=0.077038150555901935;
sd7*=sd8;
sd8=-0.68828397160545329;
sd7+=sd8;
sd6*=sd7;
sd7=2.0209457602335057;
sd6+=sd7;
sd5*=sd6;
sd6=-2.4033949117344142;
sd5+=sd6;
sd4*=sd5;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd2*=sd3;
sd3=-6.123233995736766e-17;
sd2+=sd3;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L5:;
sd0=1;
sd1=l0;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=3.4793310759602117e-05;
sd5*=sd6;
sd6=0.00079153499428981453;
sd5+=sd6;
sd4*=sd5;
sd5=-0.040055534500679411;
sd4+=sd5;
sd3*=sd4;
sd4=0.20121253213486293;
sd3+=sd4;
sd2*=sd3;
sd3=-0.32556581862240092;
sd2+=sd3;
sd1*=sd2;
sd2=0.16666666666666666;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=0.077038150555901935;
sd4*=sd5;
sd5=-0.68828397160545329;
sd4+=sd5;
sd3*=sd4;
sd4=2.0209457602335057;
sd3+=sd4;
sd2*=sd3;
sd3=-2.4033949117344142;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
sd1=l0;
sd1=sqrt(sd1);
l4=sd1;
sd0*=sd1;
sd1=l0;
sd2=l4;
sj2=i64_reinterpret_f64(sd2);
sj3=-4294967296ULL;
sj2&=sj3;
sd2=f64_reinterpret_i64(sj2);
l3=sd2;
sd3=l3;
sd2*=sd3;
sd1-=sd2;
sd2=l4;
sd3=l3;
sd2+=sd3;
sd1/=sd2;
sd0+=sd1;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
l3=sd0;
L3:;
sd0=l3;
L0:;
return sd0;
}

F64 f15104(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693248U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L2;
}
sd0=l0;
sd1=1.5707963267948966;
sd0*=sd1;
sd1=7.5231638452626401e-37;
sd0+=sd1;
goto L0;
L2:;
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L1:;
si0=l2;
si1=1071644671U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=-1048576U;
si0+=si1;
si1=1044381696U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd2=l0;
sd1*=sd2;
l3=sd1;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=l3;
sd7=3.4793310759602117e-05;
sd6*=sd7;
sd7=0.00079153499428981453;
sd6+=sd7;
sd5*=sd6;
sd6=-0.040055534500679411;
sd5+=sd6;
sd4*=sd5;
sd5=0.20121253213486293;
sd4+=sd5;
sd3*=sd4;
sd4=-0.32556581862240092;
sd3+=sd4;
sd2*=sd3;
sd3=0.16666666666666666;
sd2+=sd3;
sd1*=sd2;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=0.077038150555901935;
sd5*=sd6;
sd6=-0.68828397160545329;
sd5+=sd6;
sd4*=sd5;
sd5=2.0209457602335057;
sd4+=sd5;
sd3*=sd4;
sd4=-2.4033949117344142;
sd3+=sd4;
sd2*=sd3;
sd3=1;
sd2+=sd3;
sd1/=sd2;
sd0*=sd1;
sd1=l0;
sd0+=sd1;
goto L0;
L4:;
sd0=1;
sd1=l0;
sd1=fabs(sd1);
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=3.4793310759602117e-05;
sd5*=sd6;
sd6=0.00079153499428981453;
sd5+=sd6;
sd4*=sd5;
sd5=-0.040055534500679411;
sd4+=sd5;
sd3*=sd4;
sd4=0.20121253213486293;
sd3+=sd4;
sd2*=sd3;
sd3=-0.32556581862240092;
sd2+=sd3;
sd1*=sd2;
sd2=0.16666666666666666;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=0.077038150555901935;
sd4*=sd5;
sd5=-0.68828397160545329;
sd4+=sd5;
sd3*=sd4;
sd4=2.0209457602335057;
sd3+=sd4;
sd2*=sd3;
sd3=-2.4033949117344142;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l4=sd0;
sd0=l0;
sd0=sqrt(sd0);
l3=sd0;
si0=l2;
si1=1072640819U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=1.5707963267948966;
sd1=l3;
sd2=l4;
sd1*=sd2;
sd2=l3;
sd1+=sd2;
l0=sd1;
sd2=l0;
sd1+=sd2;
sd2=-6.123233995736766e-17;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
goto L5;
L6:;
sd0=0.78539816339744828;
sd1=l3;
sj1=i64_reinterpret_f64(sd1);
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l5=sd1;
sd2=l5;
sd1+=sd2;
sd0-=sd1;
sd1=l3;
sd2=l3;
sd1+=sd2;
sd2=l4;
sd1*=sd2;
sd2=6.123233995736766e-17;
sd3=l0;
sd4=l5;
sd5=l5;
sd4*=sd5;
sd3-=sd4;
sd4=l3;
sd5=l5;
sd4+=sd5;
sd3/=sd4;
l0=sd3;
sd4=l0;
sd3+=sd4;
sd2-=sd3;
sd1-=sd2;
sd0-=sd1;
sd1=0.78539816339744828;
sd0+=sd1;
l0=sd0;
L5:;
sd0=l0;
sd0=-(sd0);
sd1=l0;
sj2=l1;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
L3:;
sd0=l0;
L0:;
return sd0;
}

F64 f15105(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1141899264U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L2:;
si0=l2;
si1=1071382527U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=-1U;
l3=si0;
si0=l2;
si1=1044381696U;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L1;
L4:;
sd0=l0;
sd0=fabs(sd0);
l0=sd0;
si0=l2;
si1=1072889855U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=1072037887U;
si0=si0 > si1;
if(si0){
goto L6;
}
sd0=l0;
sd1=l0;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=0U;
l3=si0;
goto L3;
L6:;
sd0=l0;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=1U;
l3=si0;
goto L3;
L5:;
si0=l2;
si1=1073971199U;
si0=si0 > si1;
if(si0){
goto L7;
}
sd0=l0;
sd1=-1.5;
sd0+=sd1;
sd1=l0;
sd2=1.5;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=2U;
l3=si0;
goto L3;
L7:;
sd0=-1;
sd1=l0;
sd0/=sd1;
l0=sd0;
si0=3U;
l3=si0;
L3:;
sd0=l0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l4;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd2=l5;
sd3=l5;
sd4=l5;
sd5=-0.036531572744216916;
sd4*=sd5;
sd5=-0.058335701337905735;
sd4+=sd5;
sd3*=sd4;
sd4=-0.0769187620504483;
sd3+=sd4;
sd2*=sd3;
sd3=-0.11111110405462356;
sd2+=sd3;
sd1*=sd2;
sd2=-0.19999999999876483;
sd1+=sd2;
sd0*=sd1;
l6=sd0;
sd0=l4;
sd1=l5;
sd2=l5;
sd3=l5;
sd4=l5;
sd5=l5;
sd6=0.016285820115365782;
sd5*=sd6;
sd6=0.049768779946159324;
sd5+=sd6;
sd4*=sd5;
sd5=0.066610731373875312;
sd4+=sd5;
sd3*=sd4;
sd4=0.090908871334365066;
sd3+=sd4;
sd2*=sd3;
sd3=0.14285714272503466;
sd2+=sd3;
sd1*=sd2;
sd2=0.33333333333332932;
sd1+=sd2;
sd0*=sd1;
l5=sd0;
si0=l2;
si1=1071382527U;
si0=si0 > si1;
if(si0){
goto L8;
}
sd0=l0;
sd1=l0;
sd2=l6;
sd3=l5;
sd2+=sd3;
sd1*=sd2;
sd0-=sd1;
goto L0;
L8:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=18640304U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l0;
sd2=l6;
sd3=l5;
sd2+=sd3;
sd1*=sd2;
si2=l2;
si3=18640336U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1-=sd2;
sd2=l0;
sd1-=sd2;
sd0-=sd1;
l0=sd0;
sd0=-(sd0);
sd1=l0;
sj2=l1;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15106(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
F64 l8=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
sd1=l0;
sd2=l0;
si1=sd1 == sd2;
si0&=si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L1:;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=-1072693248U;
si0+=si1;
sj1=l2;
si1=(U32)(sj1);
l4=si1;
si0|=si1;
if(si0){
goto L2;
}
sd0=l0;
sd0=f15105(i,sd0);
goto L0;
L2:;
si0=l3;
si1=30U;
si0>>=(si1&31);
si1=2U;
si0&=si1;
l5=si0;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
l2=sj1;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0|=si1;
l6=si0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l7=si0;
sj1=l2;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L4;
}
sd0=l0;
l8=sd0;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L3;
case 2:
goto L6;
case 3:
goto L5;
default:
goto L3;
}
L6:;
sd0=3.1415926535897931;
goto L0;
L5:;
sd0=-3.1415926535897931;
goto L0;
L4:;
si0=l3;
si1=2147483647U;
si0&=si1;
l3=si0;
si1=l4;
si0|=si1;
if(si0){
goto L7;
}
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L7:;
si0=l3;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=18640368U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
goto L0;
L9:;
si0=l7;
si1=2146435072U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=67108864U;
si0+=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L10;
}
L11:;
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
sd0=0;
l8=sd0;
si0=l7;
si1=67108864U;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L12;
}
L13:;
sd0=l0;
sd1=l1;
sd0/=sd1;
sd0=fabs(sd0);
sd0=f15105(i,sd0);
l8=sd0;
L12:;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L16;
case 2:
goto L15;
default:
goto L14;
}
L16:;
sd0=l8;
sd0=-(sd0);
goto L0;
L15:;
sd0=3.1415926535897931;
sd1=l8;
sd2=-1.2246467991473532e-16;
sd1+=sd2;
sd0-=sd1;
goto L0;
L14:;
sd0=l8;
sd1=-1.2246467991473532e-16;
sd0+=sd1;
sd1=-3.1415926535897931;
sd0+=sd1;
goto L0;
L8:;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=18640400U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l8=sd0;
L3:;
sd0=l8;
L0:;
return sd0;
}

F64 f15107(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
si0=715094163U;
l3=si0;
si0=l2;
si1=1048575U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=696219795U;
l3=si0;
sd0=l0;
sd1=18014398509481984;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l2;
si1=3U;
si0=DIV_U(si0,si1);
si1=l3;
si0+=si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=-9223372036854775808ULL;
sj1&=sj2;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sd1=l4;
sd0*=sd1;
sd1=l4;
sd2=l0;
sd1/=sd2;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd2=l5;
sd1*=sd2;
sd0*=sd1;
sd1=l5;
sd2=0.14599619288661245;
sd1*=sd2;
sd2=-0.75839793477876605;
sd1+=sd2;
sd0*=sd1;
sd1=l5;
sd2=l5;
sd3=1.6214297201053545;
sd2*=sd3;
sd3=-1.8849797954337717;
sd2+=sd3;
sd1*=sd2;
sd2=1.8759518242717701;
sd1+=sd2;
sd0+=sd1;
sd1=l4;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=-1073741824ULL;
sj0&=sj1;
sj1=2147483648ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
sd1=l0;
sd2=l5;
sd3=l5;
sd2*=sd3;
sd1/=sd2;
l0=sd1;
sd2=l5;
sd1-=sd2;
sd2=l5;
sd3=l5;
sd2+=sd3;
sd3=l0;
sd2+=sd3;
sd1/=sd2;
sd0*=sd1;
sd1=l5;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
L0:;
return sd0;
}

F64 f15108(rustpythonInstance*i,F64 l0,F64 l1) {
F64 l2=0;
F64 l3=0;
F64 l4=0;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=1;
sd1=l0;
sd2=l0;
sd1*=sd2;
l2=sd1;
sd2=0.5;
sd1*=sd2;
l3=sd1;
sd0-=sd1;
l4=sd0;
sd1=1;
sd2=l4;
sd1-=sd2;
sd2=l3;
sd1-=sd2;
sd2=l2;
sd3=l2;
sd4=l2;
sd5=l2;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l2;
sd5=l2;
sd4*=sd5;
l3=sd4;
sd5=l3;
sd4*=sd5;
sd5=l2;
sd6=l2;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l0;
sd4=l1;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
L0:;
return sd0;
}

U32 f15109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
F64 l16=0;
F64 l17=0;
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
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
F64 l36=0;
F64 l37=0;
F64 l38=0;
F64 l39=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=560U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l2;
si1=-3U;
si0+=si1;
si1=24U;
si0=I32_DIV_S(si0,si1);
l7=si0;
si1=0U;
si2=l7;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l8=si0;
si1=-24U;
si0*=si1;
si1=l2;
si0+=si1;
l9=si0;
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=18640432U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=-1U;
si1+=si2;
l11=si1;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l8;
si1=l11;
si0-=si1;
l12=si0;
si0=l10;
si1=l3;
si0+=si1;
l13=si0;
si1=1U;
si0&=si1;
l14=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=18640456U;
si0+=si1;
l7=si0;
si0=l13;
si1=-2U;
si0&=si1;
l15=si0;
si0=l5;
si1=320U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L3:;
{
sd0=0;
l16=sd0;
sd0=0;
l17=sd0;
si0=l12;
si1=l6;
si0+=si1;
l13=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l17=sd0;
L4:;
si0=l2;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l16=sd0;
L5:;
si0=l2;
si1=8U;
si0+=si1;
sd1=l16;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l15;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l12;
si1=l6;
si0+=si1;
l12=si0;
L2:;
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L7;
}
sd0=0;
l17=sd0;
goto L6;
L7:;
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=18640448U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l17=sd0;
L6:;
si0=l5;
si1=320U;
si0+=si1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
L1:;
si0=l9;
si1=-24U;
si0+=si1;
l18=si0;
si0=0U;
l2=si0;
si0=l10;
si1=0U;
si2=l10;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l19=si0;
si0=l3;
si1=-2U;
si0&=si1;
l13=si0;
si0=l3;
si1=1U;
si0&=si1;
l14=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=320U;
si1+=si2;
si0+=si1;
si1=-16U;
si0+=si1;
l15=si0;
L8:;
{
si0=l2;
l12=si0;
si0=l3;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L10;
}
sd0=0;
l17=sd0;
goto L9;
L10:;
si0=0U;
l7=si0;
sd0=0;
l17=sd0;
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l15;
l2=si0;
si0=l0;
l6=si0;
L12:;
{
si0=l6;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l13;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l14;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=320U;
si1+=si2;
si2=l12;
si3=l11;
si2+=si3;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L9:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l12;
si1=1U;
si0+=si1;
l2=si0;
si0=l12;
si1=l19;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l3;
si1=-2U;
si0&=si1;
l13=si0;
si0=l3;
si1=1U;
si0&=si1;
l20=si0;
si0=l10;
si1=-1U;
si0^=si1;
l21=si0;
si0=47U;
si1=l9;
si0-=si1;
l22=si0;
si0=48U;
si1=l9;
si0-=si1;
l23=si0;
si0=l5;
si1=480U;
si0+=si1;
si1=-4U;
si0+=si1;
l24=si0;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l5;
si1=320U;
si0+=si1;
si1=-8U;
si0+=si1;
l26=si0;
si0=l5;
si1=480U;
si0+=si1;
si1=-16U;
si0+=si1;
l27=si0;
si0=l5;
si1=-16U;
si0+=si1;
l28=si0;
si0=l9;
si1=-25U;
si0+=si1;
l29=si0;
si0=l10;
l12=si0;
L14:;
{
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l17=sd0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l30=si0;
if(si0){
goto L15;
}
si0=l12;
si1=1U;
si0&=si1;
l31=si0;
si0=0U;
l7=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l12;
l2=si0;
goto L16;
L17:;
si0=l12;
si1=-2U;
si0&=si1;
l14=si0;
si0=l28;
si1=l2;
si0+=si1;
l2=si0;
si0=0U;
l7=si0;
si0=l5;
si1=480U;
si0+=si1;
l6=si0;
L18:;
{
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L20;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L19;
L20:;
si0=-2147483648U;
l15=si0;
L19:;
si0=l15;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L22;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L21;
L22:;
si0=-2147483648U;
l15=si0;
L21:;
si0=l6;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L23;
L24:;
si0=-2147483648U;
l15=si0;
L23:;
si0=l15;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L26;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l15=si0;
goto L25;
L26:;
si0=-2147483648U;
l15=si0;
L25:;
si0=l6;
si1=4U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l14;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l12;
si1=l7;
si0-=si1;
l2=si0;
L16:;
si0=l31;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=2U;
si0<<=(si1&31);
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L28;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L27;
L28:;
si0=-2147483648U;
l7=si0;
L27:;
si0=l5;
si1=480U;
si0+=si1;
si1=l6;
si0+=si1;
l6=si0;
si0=l7;
sd0=(F64)(I32)(si0);
l16=sd0;
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L30;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L29;
L30:;
si0=-2147483648U;
l7=si0;
L29:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l16;
sd0+=sd1;
l17=sd0;
L15:;
sd0=l17;
si1=l18;
sd0=f15136(i,sd0,si1);
l17=sd0;
sd1=0.125;
sd0*=sd1;
sd0=floor(sd0);
sd1=-8;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L32;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l32=si0;
goto L31;
L32:;
si0=-2147483648U;
l32=si0;
L31:;
sd0=l17;
si1=l32;
sd1=(F64)(I32)(si1);
sd0-=sd1;
l17=sd0;
si0=l18;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l33=si0;
if(si0){
goto L37;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l2;
si3=l23;
si2=(U32)((I32)si2>>(si3&31));
l2=si2;
si3=l23;
si2<<=(si3&31);
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l22;
si0=(U32)((I32)si0>>(si1&31));
l34=si0;
si0=l2;
si1=l32;
si0+=si1;
l32=si0;
goto L36;
L37:;
si0=l18;
if(si0){
goto L35;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=23U;
si0=(U32)((I32)si0>>(si1&31));
l34=si0;
L36:;
si0=l34;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
}
goto L34;
L35:;
si0=2U;
l34=si0;
sd0=l17;
sd1=0.5;
si0=sd0 >= sd1;
if(si0){
goto L34;
}
si0=0U;
l34=si0;
goto L33;
L34:;
si0=l30;
si0=!(si0);
if(si0){
goto L39;
}
si0=0U;
l6=si0;
goto L38;
L39:;
si0=l12;
si1=1U;
si0&=si1;
l35=si0;
si0=0U;
l14=si0;
si0=0U;
l6=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l12;
si1=-2U;
si0&=si1;
l31=si0;
si0=0U;
l14=si0;
si0=l5;
si1=480U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L41:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=16777215U;
l15=si0;
si0=l6;
if(si0){
goto L43;
}
si0=16777216U;
l15=si0;
si0=l7;
if(si0){
goto L43;
}
si0=1U;
l15=si0;
goto L42;
L43:;
si0=l2;
si1=l15;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l15=si0;
L42:;
si0=l2;
si1=4U;
si0+=si1;
l30=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=16777215U;
l6=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L45;
}
si0=16777216U;
l6=si0;
si0=l7;
if(si0){
goto L45;
}
si0=0U;
l6=si0;
goto L44;
L45:;
si0=l30;
si1=l6;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
L44:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l31;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
}
L40:;
si0=l35;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si1=480U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=16777215U;
l7=si0;
si0=l6;
if(si0){
goto L46;
}
si0=16777216U;
l7=si0;
si0=l2;
if(si0){
goto L46;
}
si0=0U;
l6=si0;
goto L38;
L46:;
si0=l15;
si1=l7;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
L38:;
si0=l33;
if(si0){
goto L47;
}
si0=8388607U;
l2=si0;
si0=l29;
switch(si0){
case 0:
goto L48;
case 1:
goto L49;
default:
goto L47;
}
L49:;
si0=4194303U;
l2=si0;
L48:;
si0=l12;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L47:;
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
si0=l34;
si1=2U;
si0=si0 != si1;
if(si0){
goto L33;
}
sd0=1;
sd1=l17;
sd0-=sd1;
l17=sd0;
si0=2U;
l34=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L33;
}
sd0=l17;
sd1=1;
si2=l18;
sd1=f15136(i,sd1,si2);
sd0-=sd1;
l17=sd0;
L33:;
sd0=l17;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L50;
}
si0=l12;
si1=l10;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L51;
}
si0=l12;
si1=l10;
si0-=si1;
l2=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=0U;
l6=si0;
si0=l12;
l15=si0;
si0=l12;
si1=l21;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l2;
si1=-4U;
si0&=si1;
l14=si0;
si0=l27;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
si0=l12;
l15=si0;
L53:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si3|=si4;
si2|=si3;
si1|=si2;
si0|=si1;
l6=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l15;
si1=-4U;
si0+=si1;
l15=si0;
si0=l14;
si1=-4U;
si0+=si1;
l14=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l7;
si0=!(si0);
if(si0){
goto L54;
}
si0=l24;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L55:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0|=si1;
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l6;
si0=!(si0);
if(si0){
goto L51;
}
si0=l5;
si1=480U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si0=l18;
l9=si0;
L56:;
{
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=l9;
si1=-24U;
si0+=si1;
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L56;
}
goto L13;
}
L51:;
si0=l25;
l2=si0;
si0=l12;
l15=si0;
L57:;
{
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L57;
}
}
si0=l26;
si1=l3;
si2=l12;
si1+=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L58:;
{
si0=l5;
si1=320U;
si0+=si1;
si1=l12;
si2=l3;
si1+=si2;
l30=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si2=l8;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si2=18640448U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sd1=(F64)(I32)(si1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l3;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L60;
}
sd0=0;
l17=sd0;
goto L59;
L60:;
si0=0U;
l7=si0;
sd0=0;
l17=sd0;
si0=l11;
si0=!(si0);
if(si0){
goto L61;
}
si0=l14;
l2=si0;
si0=l0;
l6=si0;
L62:;
{
si0=l6;
si1=8U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l13;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L62;
}
}
L61:;
si0=l20;
si0=!(si0);
if(si0){
goto L59;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=320U;
si1+=si2;
si2=l30;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L59:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l12;
si1=l15;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L58;
}
}
si0=l15;
l12=si0;
goto L14;
L50:;
}
sd0=l17;
si1=24U;
si2=l9;
si1-=si2;
sd0=f15136(i,sd0,si1);
l17=sd0;
sd1=16777216;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L64;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l16=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L66;
}
sd0=l16;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L65;
L66:;
si0=-2147483648U;
l2=si0;
L65:;
si0=l5;
si1=480U;
si0+=si1;
si1=l6;
si0+=si1;
l6=si0;
si0=l2;
sd0=(F64)(I32)(si0);
sd1=-16777216;
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L68;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l7=si0;
goto L67;
L68:;
si0=-2147483648U;
l7=si0;
L67:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L63;
L64:;
sd0=l17;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L70;
}
sd0=l17;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L69;
L70:;
si0=-2147483648U;
l2=si0;
L69:;
si0=l18;
l9=si0;
L63:;
si0=l5;
si1=480U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L13:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L71;
}
sd0=1;
si1=l9;
sd0=f15136(i,sd0,si1);
l17=sd0;
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L73;
}
si0=l12;
l6=si0;
goto L72;
L73:;
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
si2=l5;
si3=480U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l12;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l17=sd0;
L72:;
si0=l12;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
l6=si0;
L75:;
{
si0=l6;
sd1=l17;
sd2=5.9604644775390625e-08;
sd1*=sd2;
l16=sd1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l6;
si1=8U;
si0+=si1;
sd1=l17;
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-16U;
si0+=si1;
l6=si0;
sd0=l16;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l17=sd0;
si0=l7;
si1=-2U;
si0+=si1;
l7=si0;
if(si0){
goto L75;
}
}
L74:;
si0=0U;
l14=si0;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L71;
}
si0=l5;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l12;
l3=si0;
L76:;
{
si0=l19;
si1=l14;
si2=l19;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=1U;
si0&=si1;
l30=si0;
si0=l2;
if(si0){
goto L78;
}
si0=0U;
l6=si0;
sd0=0;
l17=sd0;
goto L77;
L78:;
si0=l6;
si1=-2U;
si0&=si1;
l15=si0;
sd0=0;
l17=sd0;
si0=0U;
l2=si0;
si0=0U;
l6=si0;
L79:;
{
si0=l2;
si1=18643224U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l13;
si2=l2;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
si1=l2;
si2=18643216U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
si2=l7;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
sd2=l17;
sd1+=sd2;
sd0+=sd1;
l17=sd0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l15;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L77:;
si0=l12;
si1=l3;
si0-=si1;
l2=si0;
si0=l30;
si0=!(si0);
if(si0){
goto L80;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=18643216U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l5;
si2=l6;
si3=l3;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0*=sd1;
sd1=l17;
sd0+=sd1;
l17=sd0;
L80:;
si0=l5;
si1=160U;
si0+=si1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l14;
si1=l12;
si0=si0 != si1;
l2=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l2;
if(si0){
goto L76;
}
}
L71:;
si0=l4;
switch(si0){
case 0:
goto L86;
case 1:
goto L85;
case 2:
goto L85;
case 3:
goto L87;
default:
goto L81;
}
L87:;
sd0=0;
l36=sd0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=-1U;
si0+=si1;
l13=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=f64_load(&i->m0,(U64)si0);
l16=sd0;
si0=l12;
si1=1U;
si0&=si1;
if(si0){
goto L89;
}
sd0=l16;
l17=sd0;
si0=l12;
l2=si0;
goto L88;
L89:;
si0=l5;
si1=160U;
si0+=si1;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
sd1=f64_load(&i->m0,(U64)si1);
l37=sd1;
sd2=l16;
sd1+=sd2;
l17=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
sd1=l16;
sd2=l37;
sd3=l17;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l13;
l2=si0;
L88:;
si0=l13;
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-16U;
si0+=si1;
l2=si0;
L91:;
{
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
l38=sd1;
si2=l2;
si3=8U;
si2+=si3;
l7=si2;
sd2=f64_load(&i->m0,(U64)si2);
l39=sd2;
sd3=l17;
sd2+=sd3;
l16=sd2;
sd1+=sd2;
l37=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=16U;
si0+=si1;
sd1=l17;
sd2=l39;
sd3=l16;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l7;
sd1=l16;
sd2=l38;
sd3=l37;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
sd0=l37;
l17=sd0;
si0=l6;
si1=-2U;
si0+=si1;
l6=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L91;
}
}
L90:;
si0=l12;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
sd0=f64_load(&i->m0,(U64)si0);
l17=sd0;
L92:;
{
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
l37=sd1;
sd2=l17;
sd1+=sd2;
l16=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=8U;
si0+=si1;
sd1=l17;
sd2=l37;
sd3=l16;
sd2-=sd3;
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
sd0=l16;
l17=sd0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L92;
}
}
si0=l12;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L82;
}
si0=l12;
si1=-2U;
si0+=si1;
l7=si0;
si0=l13;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L84;
}
sd0=0;
l36=sd0;
goto L83;
L86:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L94;
}
sd0=0;
l17=sd0;
goto L93;
L94:;
si0=l12;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L96;
}
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
goto L95;
L96:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
L97:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L97;
}
}
L95:;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L98:;
{
sd0=l17;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L98;
}
}
L93:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0,sd1);
goto L81;
L85:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L100;
}
sd0=0;
l17=sd0;
goto L99;
L100:;
si0=l12;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L102;
}
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
goto L101;
L102:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l17=sd0;
si0=l12;
l6=si0;
L103:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L103;
}
}
L101:;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L99;
}
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L104:;
{
sd0=l17;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L104;
}
}
L99:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+160U);
sd1=l17;
sd0-=sd1;
l17=sd0;
si0=1U;
l2=si0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L105;
}
si0=l12;
si1=3U;
si0&=si1;
l6=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l12;
si1=-4U;
si0&=si1;
l13=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=32U;
si0+=si1;
l2=si0;
si0=0U;
l7=si0;
L107:;
{
sd0=l17;
si1=l2;
si2=-24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=-16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=-8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
si0=l13;
si1=l7;
si2=4U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L107;
}
}
si0=l7;
si1=1U;
si0+=si1;
l2=si0;
L106:;
si0=l6;
si0=!(si0);
if(si0){
goto L105;
}
si0=l5;
si1=160U;
si0+=si1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L108:;
{
sd0=l17;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l17=sd0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L108;
}
}
L105:;
si0=l1;
sd1=l17;
sd1=-(sd1);
sd2=l17;
si3=l34;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L81;
L84:;
si0=l5;
si1=160U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sd0=0;
l36=sd0;
L109:;
{
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
sd0=l36;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l36=sd0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L109;
}
}
L83:;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l12;
si1=4U;
si0+=si1;
l6=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l2=si0;
L110:;
{
sd0=l36;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l36=sd0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si1=5U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L110;
}
}
L82:;
si0=l5;
sd0=f64_load(&i->m0,(U64)si0+160U);
l17=sd0;
si0=l34;
if(si0){
goto L111;
}
si0=l1;
sd1=l17;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l36;
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l1;
si1=l5;
sd1=f64_load(&i->m0,(U64)si1+168U);
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L81;
L111:;
si0=l1;
sd1=l17;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l36;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l1;
si1=l5;
sd1=f64_load(&i->m0,(U64)si1+168U);
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+8U,sd1);
L81:;
si0=l5;
si1=560U;
si0+=si1;
i->g0=si0;
si0=l32;
si1=7U;
si0&=si1;
L0:;
return si0;
}

U32 f15110(rustpythonInstance*i,F64 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
F64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2147483647U;
si0&=si1;
l5=si0;
si1=1074752122U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=1048575U;
si0&=si1;
si1=598523U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=1073928572U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
si0=l1;
sd1=l0;
sd2=-1.5707963267341256;
sd1+=sd2;
l0=sd1;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=1U;
l4=si0;
goto L1;
L6:;
si0=l1;
sd1=l0;
sd2=1.5707963267341256;
sd1+=sd2;
l0=sd1;
sd2=6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=6.0771005065061922e-11;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-1U;
l4=si0;
goto L1;
L5:;
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L7;
}
si0=l1;
sd1=l0;
sd2=-3.1415926534682512;
sd1+=sd2;
l0=sd1;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=2U;
l4=si0;
goto L1;
L7:;
si0=l1;
sd1=l0;
sd2=3.1415926534682512;
sd1+=sd2;
l0=sd1;
sd2=1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=1.2154201013012384e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-2U;
l4=si0;
goto L1;
L4:;
si0=l5;
si1=1075594811U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=1075183036U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=1074977148U;
si0=si0 == si1;
if(si0){
goto L3;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
si0=l1;
sd1=l0;
sd2=-4.7123889802023768;
sd1+=sd2;
l0=sd1;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=3U;
l4=si0;
goto L1;
L10:;
si0=l1;
sd1=l0;
sd2=4.7123889802023768;
sd1+=sd2;
l0=sd1;
sd2=1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=1.8231301519518578e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-3U;
l4=si0;
goto L1;
L9:;
si0=l5;
si1=1075388923U;
si0=si0 == si1;
if(si0){
goto L3;
}
sj0=l3;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L11;
}
si0=l1;
sd1=l0;
sd2=-6.2831853069365025;
sd1+=sd2;
l0=sd1;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=4U;
l4=si0;
goto L1;
L11:;
si0=l1;
sd1=l0;
sd2=6.2831853069365025;
sd1+=sd2;
l0=sd1;
sd2=2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=2.4308402026024769e-10;
sd1+=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=-4U;
l4=si0;
goto L1;
L8:;
si0=l5;
si1=1094263290U;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
sd1=l0;
sd2=l0;
sd3=0.63661977236758138;
sd2*=sd3;
sd3=6755399441055744;
sd2+=sd3;
sd3=-6755399441055744;
sd2+=sd3;
l6=sd2;
sd3=-1.5707963267341256;
sd2*=sd3;
sd1+=sd2;
l7=sd1;
sd2=l6;
sd3=6.0771005065061922e-11;
sd2*=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
si1=20U;
si0>>=(si1&31);
l5=si0;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=17U;
si0=(U32)((I32)si0<(I32)si1);
l9=si0;
sd0=l6;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L13;
}
sd0=l6;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L12;
L13:;
si0=-2147483648U;
l4=si0;
L12:;
si0=l9;
if(si0){
goto L14;
}
si0=l1;
sd1=l7;
sd2=l6;
sd3=6.077100506303966e-11;
sd2*=sd3;
l0=sd2;
sd1-=sd2;
l10=sd1;
sd2=l6;
sd3=2.0222662487959506e-21;
sd2*=sd3;
sd3=l7;
sd4=l10;
sd3-=sd4;
sd4=l0;
sd3-=sd4;
sd2-=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l5;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=50U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
sd0=l10;
l7=sd0;
goto L14;
L15:;
si0=l1;
sd1=l10;
sd2=l6;
sd3=2.0222662487111665e-21;
sd2*=sd3;
l0=sd2;
sd1-=sd2;
l7=sd1;
sd2=l6;
sd3=8.4784276603688996e-32;
sd2*=sd3;
sd3=l10;
sd4=l7;
sd3-=sd4;
sd4=l0;
sd3-=sd4;
sd2-=sd3;
l8=sd2;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
L14:;
si0=l1;
sd1=l7;
sd2=l0;
sd1-=sd2;
sd2=l8;
sd1-=sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L2:;
si0=l5;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
sd1=l0;
sd2=l0;
sd1-=sd2;
l0=sd1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
sd1=l0;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l4=si0;
goto L1;
L16:;
sj0=l3;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4710765210229538816ULL;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L18;
}
sd0=l0;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L17;
L18:;
si0=-2147483648U;
l4=si0;
L17:;
si0=l2;
si1=l4;
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(&i->m0,(U64)si0+16U,sd1);
sd0=l0;
sd1=l6;
sd0-=sd1;
sd1=16777216;
sd0*=sd1;
l0=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L20;
}
sd0=l0;
si0=I32_TRUNC_S_F64(sd0);
l4=si0;
goto L19;
L20:;
si0=-2147483648U;
l4=si0;
L19:;
si0=l2;
si1=l4;
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
si1=32U;
si0+=si1;
l4=si0;
sd1=l0;
sd2=l6;
sd1-=sd2;
sd2=16777216;
sd1*=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=4U;
l9=si0;
L21:;
{
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0);
l0=sd0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
sd0=l0;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L21;
}
}
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=l5;
si3=20U;
si2>>=(si3&31);
si3=-1046U;
si2+=si3;
si3=l9;
si4=1U;
si0=f15109(i,si0,si1,si2,si3,si4);
l4=si0;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
l0=sd0;
sj0=l3;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L22;
}
si0=l1;
sd1=l0;
sd1=-(sd1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
si1=l4;
si0-=si1;
l4=si0;
goto L1;
L22:;
si0=l1;
sd1=l0;
f64_store(&i->m0,(U64)si0,sd1);
si0=l1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

F64 f15111(rustpythonInstance*i,F64 l0,F64 l1,U32 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=l0;
sd1=l0;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd2=l3;
sd1*=sd2;
sd0*=sd1;
sd1=l3;
sd2=1.5896909952115501e-10;
sd1*=sd2;
sd2=-2.5050760253406863e-08;
sd1+=sd2;
sd0*=sd1;
sd1=l3;
sd2=l3;
sd3=2.7557313707070068e-06;
sd2*=sd3;
sd3=-0.00019841269829857949;
sd2+=sd3;
sd1*=sd2;
sd2=0.0083333333333224895;
sd1+=sd2;
sd0+=sd1;
l4=sd0;
sd0=l3;
sd1=l0;
sd0*=sd1;
l5=sd0;
si0=l2;
if(si0){
goto L1;
}
sd0=l5;
sd1=l3;
sd2=l4;
sd1*=sd2;
sd2=-0.16666666666666632;
sd1+=sd2;
sd0*=sd1;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
sd0=l0;
sd1=l3;
sd2=l1;
sd3=0.5;
sd2*=sd3;
sd3=l4;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
sd1*=sd2;
sd2=l1;
sd1-=sd2;
sd2=l5;
sd3=0.16666666666666632;
sd2*=sd3;
sd1+=sd2;
sd0-=sd1;
L0:;
return sd0;
}

F64 f15112(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
F64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243195U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=1044816030U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd1=0;
sd0=f15108(i,sd0,sd1);
l3=sd0;
goto L1;
L2:;
si0=l2;
si1=2146435072U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=l0;
sd1=l0;
sd0-=sd1;
l3=sd0;
goto L1;
L3:;
sd0=l0;
si1=l1;
si0=f15110(i,sd0,si1);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L4;
}
L7:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15108(i,sd0,sd1);
l3=sd0;
goto L1;
L6:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15111(i,sd0,sd1,si2);
sd0=-(sd0);
l3=sd0;
goto L1;
L5:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
sd0=f15108(i,sd0,sd1);
sd0=-(sd0);
l3=sd0;
goto L1;
L4:;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
si2=1U;
sd0=f15111(i,sd0,sd1,si2);
l3=sd0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
sd0=l3;
L0:;
return sd0;
}

F64 f15113(rustpythonInstance*i,F64 l0) {
F64 sd0,sd1;
sd0=l0;
sd1=-1416.0996898839683;
sd0+=sd1;
sd0=f15118(i,sd0);
sd1=2.2471164185778949e+307;
sd0*=sd1;
sd1=2.2471164185778949e+307;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15114(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
l1=sj0;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sj0=l1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si1=1072049729U;
si0=si0 > si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=l0;
sd0=f15122(i,sd0);
l0=sd0;
sd1=l0;
sd0*=sd1;
sd1=l0;
sd2=1;
sd1+=sd2;
l0=sd1;
sd2=l0;
sd1+=sd2;
sd0/=sd1;
sd1=1;
sd0+=sd1;
goto L0;
L2:;
si0=l2;
si1=1082535489U;
si0=si0 > si1;
if(si0){
goto L3;
}
sd0=l0;
sd0=f15118(i,sd0);
l0=sd0;
sd1=1;
sd2=l0;
sd1/=sd2;
sd0+=sd1;
sd1=0.5;
sd0*=sd1;
goto L0;
L3:;
sd0=l0;
sd0=f15113(i,sd0);
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

F64 f15115(rustpythonInstance*i,U32 l0,F64 l1) {
U32 si2;
F64 sd0,sd1;
sd0=l1;
sd0=-(sd0);
sd1=l1;
si2=l0;
sd0=si2?sd0:sd1;
sd1=l1;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15116(rustpythonInstance*i,U32 l0) {
U32 si0;
F64 sd0,sd1;
si0=l0;
sd1=1.2882297539194267e-231;
sd0=f15115(i,si0,sd1);
L0:;
return sd0;
}

F64 f15117(rustpythonInstance*i,U32 l0) {
U32 si0;
F64 sd0,sd1;
si0=l0;
sd1=3.1050361846014179e+231;
sd0=f15115(i,si0,sd1);
L0:;
return sd0;
}

F64 f15118(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=-969U;
si0+=si1;
si1=63U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
l3=si0;
goto L2;
L3:;
sd0=1;
l4=sd0;
si0=l2;
si1=969U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l2;
si1=1033U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=0;
l4=sd0;
sj0=l1;
sj1=-4503599627370496ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L4;
}
sd0=l0;
sd1=1;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
sd0=f15116(i,si0);
goto L0;
L5:;
si0=0U;
sd0=f15117(i,si0);
goto L0;
L2:;
si0=0U;
sd0=f64_load(&i->m0,(U64)si0+18643280U);
sd1=l0;
sd0*=sd1;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+18643288U);
l4=sd1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd0-=sd1;
l4=sd0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+18643304U);
sd0*=sd1;
sd1=l4;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643296U);
sd1*=sd2;
sd2=l0;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l4;
sd0*=sd1;
sd1=l0;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643336U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643328U);
sd1+=sd2;
sd0*=sd1;
sd1=l4;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643320U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643312U);
sd2+=sd3;
sd1*=sd2;
sd2=l5;
sj2=i64_reinterpret_f64(sd2);
l1=sj2;
si2=(U32)(sj2);
si3=4U;
si2<<=(si3&31);
si3=2032U;
si2&=si3;
l2=si2;
si3=18643392U;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd3=l0;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
si0=l2;
si1=18643400U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l1;
sj2=45ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l6=sj0;
si0=l3;
if(si0){
goto L6;
}
sd0=l0;
sj1=l6;
sj2=l1;
sd0=f15119(i,sd0,sj1,sj2);
goto L0;
L6:;
sj0=l6;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sd1=l0;
sd0*=sd1;
sd1=l4;
sd0+=sd1;
l4=sd0;
L1:;
sd0=l4;
L0:;
return sd0;
}

F64 f15119(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
sj0=l2;
sj1=2147483648ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=-4544132024016830464ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
sd1=5.4861240687936887e+303;
sd0*=sd1;
goto L0;
L1:;
sj0=l1;
sj1=4602678819172646912ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=1;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
sd1=1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd2=l3;
sd3=l0;
sd2-=sd3;
sd1+=sd2;
sd2=l0;
sd3=1;
sd4=l5;
sd3-=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
sd1=2.2250738585072014e-308;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15120(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
si1=-969U;
si0+=si1;
si1=63U;
si0=si0 < si1;
if(si0){
goto L2;
}
sd0=1;
l3=sd0;
si0=l2;
si1=969U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=1033U;
si0=si0 < si1;
if(si0){
goto L3;
}
sd0=0;
l3=sd0;
sj0=l1;
sj1=-4503599627370496ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L4;
}
sd0=l0;
sd1=1;
sd0+=sd1;
goto L0;
L4:;
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
sd0=f15117(i,si0);
goto L0;
L5:;
sj0=l1;
sj1=-4570929321408987136ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=0U;
sd0=f15116(i,si0);
goto L0;
L3:;
si0=0U;
si1=l2;
sj2=l1;
sj3=1ULL;
sj2<<=(sj3&63);
sj3=-9143996093422370816ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
l2=si0;
L2:;
sd0=l0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+18643344U);
l3=sd1;
sd2=l0;
sd1+=sd2;
l4=sd1;
sd2=l3;
sd1-=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd0*=sd1;
sd1=l0;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643384U);
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18643376U);
sd1+=sd2;
sd0*=sd1;
sd1=l3;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643368U);
sd2*=sd3;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643360U);
sd2+=sd3;
sd1*=sd2;
sd2=l0;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18643352U);
sd2*=sd3;
sd3=l4;
sj3=i64_reinterpret_f64(sd3);
l1=sj3;
si3=(U32)(sj3);
si4=4U;
si3<<=(si4&31);
si4=2032U;
si3&=si4;
l5=si3;
si4=18643392U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
sj0=l1;
sj1=45ULL;
sj0<<=(sj1&63);
si1=l5;
si2=18643400U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
si0=l2;
if(si0){
goto L6;
}
sd0=l0;
sj1=l6;
sj2=l1;
sd0=f15121(i,sd0,sj1,sj2);
goto L0;
L6:;
sj0=l6;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

F64 f15121(rustpythonInstance*i,F64 l0,U64 l1,U64 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
sj0=l2;
sj1=2147483648ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=-4503599627370496ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L1:;
sj0=l1;
sj1=4602678819172646912ULL;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l3=sd0;
sd1=l0;
sd0*=sd1;
l4=sd0;
sd1=l3;
sd0+=sd1;
l0=sd0;
sd1=1;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
sd1=1;
sd0+=sd1;
l5=sd0;
sd1=l4;
sd2=l3;
sd3=l0;
sd2-=sd3;
sd1+=sd2;
sd2=l0;
sd3=1;
sd4=l5;
sd3-=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
sd1=2.2250738585072014e-308;
sd0*=sd1;
L0:;
return sd0;
}

F64 f15122(rustpythonInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1078159482U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L7;
}
sd0=-1;
goto L0;
L7:;
sd0=l0;
sd1=709.78271289338397;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L5;
}
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
goto L0;
L6:;
si0=l2;
si1=1071001155U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=1072734897U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
sd0=l0;
sd1=-0.69314718036912382;
sd0+=sd1;
l3=sd0;
si0=1U;
l2=si0;
sd0=1.9082149292705877e-10;
l4=sd0;
goto L4;
L8:;
sd0=l0;
sd1=0.69314718036912382;
sd0+=sd1;
l3=sd0;
si0=-1U;
l2=si0;
sd0=-1.9082149292705877e-10;
l4=sd0;
goto L4;
L5:;
sd0=l0;
sd1=1.4426950408889634;
sd0*=sd1;
sd1=0.5;
sd2=l0;
sd1=copysign(sd1,sd2);
sd0+=sd1;
l3=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L10;
}
sd0=l3;
si0=I32_TRUNC_S_F64(sd0);
l2=si0;
goto L9;
L10:;
si0=-2147483648U;
l2=si0;
L9:;
si0=l2;
sd0=(F64)(I32)(si0);
l3=sd0;
sd1=1.9082149292705877e-10;
sd0*=sd1;
l4=sd0;
sd0=l0;
sd1=l3;
sd2=-0.69314718036912382;
sd1*=sd2;
sd0+=sd1;
l3=sd0;
L4:;
sd0=l3;
sd1=l3;
sd2=l4;
sd1-=sd2;
l0=sd1;
sd0-=sd1;
sd1=l4;
sd0-=sd1;
l4=sd0;
goto L2;
L3:;
si0=l2;
si1=1016070144U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
L2:;
sd0=l0;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l5=sd1;
sd0*=sd1;
l3=sd0;
sd1=l3;
sd2=l3;
sd3=l3;
sd4=l3;
sd5=l3;
sd6=-2.0109921818362437e-07;
sd5*=sd6;
sd6=4.0082178273293624e-06;
sd5+=sd6;
sd4*=sd5;
sd5=-7.9365075786748794e-05;
sd4+=sd5;
sd3*=sd4;
sd4=0.0015873015872548146;
sd3+=sd4;
sd2*=sd3;
sd3=-0.033333333333333132;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
l6=sd1;
sd2=3;
sd3=l6;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
l5=sd2;
sd1-=sd2;
sd2=6;
sd3=l0;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
sd1/=sd2;
sd0*=sd1;
l5=sd0;
si0=l2;
if(si0){
goto L11;
}
sd0=l0;
sd1=l0;
sd2=l5;
sd1*=sd2;
sd2=l3;
sd1-=sd2;
sd0-=sd1;
goto L0;
L11:;
sd0=l0;
sd1=l5;
sd2=l4;
sd1-=sd2;
sd0*=sd1;
sd1=l4;
sd0-=sd1;
sd1=l3;
sd0-=sd1;
l3=sd0;
si0=l2;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L12;
case 2:
goto L13;
default:
goto L12;
}
L14:;
sd0=l0;
sd1=l3;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
sd1=-0.5;
sd0+=sd1;
goto L0;
L13:;
sd0=l0;
sd1=-0.25;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L15;
}
sd0=l3;
sd1=l0;
sd2=0.5;
sd1+=sd2;
sd0-=sd1;
sd1=-2;
sd0*=sd1;
goto L0;
L15:;
sd0=l0;
sd1=l3;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=1;
sd0+=sd1;
goto L0;
L12:;
si0=l2;
si1=1023U;
si0+=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
si0=l2;
si1=57U;
si0=si0 < si1;
if(si0){
goto L16;
}
sd0=l0;
sd1=l3;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=8.9884656743115795e+307;
sd0*=sd1;
sd1=l0;
sd2=l4;
sd1*=sd2;
si2=l2;
si3=1024U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
sd1=-1;
sd0+=sd1;
goto L0;
L16:;
si0=1023U;
si1=l2;
si0-=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
si0=l2;
si1=19U;
si0=si0 > si1;
if(si0){
goto L18;
}
sd0=1;
sd1=l5;
sd0-=sd1;
sd1=l0;
sd2=l3;
sd1-=sd2;
sd0+=sd1;
l0=sd0;
goto L17;
L18:;
sd0=l0;
sd1=l3;
sd2=l5;
sd1+=sd2;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
L17:;
sd0=l0;
sd1=l4;
sd0*=sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f15123(rustpythonInstance*i,F64 l0,F64 l1,F64 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F32 sf0;
F64 sd0,sd1,sd2;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2047U;
si0&=si1;
l5=si0;
if(si0){
goto L1;
}
sd0=l0;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L1:;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=2047U;
si0&=si1;
l8=si0;
if(si0){
goto L2;
}
sd0=l1;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l9=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l9;
si0=si2?si0:si1;
l8=si0;
L2:;
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
l10=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si1=2047U;
si0&=si1;
l9=si0;
if(si0){
goto L3;
}
sd0=l2;
sd1=9.2233720368547758e+18;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l10=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l9=si0;
si1=-63U;
si0+=si1;
si1=2048U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L3:;
si0=l5;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si1=2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L5:;
sd0=l0;
sd1=l1;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
goto L0;
L4:;
si0=l9;
si1=-1076U;
si0+=si1;
l12=si0;
si0=l9;
si1=2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sd0=l2;
sd1=l0;
sd2=l1;
sd1*=sd2;
sd2=l2;
sd1+=sd2;
si2=l12;
si3=971U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
goto L0;
L6:;
si0=l11;
si1=2048U;
si0&=si1;
l11=si0;
sj0=l10;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=9007199254740990ULL;
sj0&=sj1;
sj1=9007199254740992ULL;
sj0|=sj1;
l10=sj0;
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=9007199254740990ULL;
sj0&=sj1;
sj1=9007199254740992ULL;
sj0|=sj1;
l13=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l14=sj0;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
l3=sj1;
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=9007199254740992ULL;
sj1|=sj2;
l15=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l16=sj1;
sj0*=sj1;
sj1=l6;
sj2=4294967294ULL;
sj1&=sj2;
l17=sj1;
sj2=l3;
sj3=4294967294ULL;
sj2&=sj3;
l3=sj2;
sj1*=sj2;
sj2=l13;
sj3=l15;
sj2*=sj3;
l6=sj2;
si1=sj1 > sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l14;
sj2=l3;
sj1*=sj2;
sj2=l17;
sj3=l16;
sj2*=sj3;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l13=sj0;
si0=l12;
si1=l5;
si2=l8;
si1+=si2;
si2=-2152U;
si1+=si2;
l5=si1;
si0-=si1;
l8=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l8;
si1=63U;
si0=si0 > si1;
if(si0){
goto L9;
}
sj0=l10;
si1=l8;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
sj0=l10;
si1=64U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l10=sj0;
goto L7;
L9:;
si0=l9;
si1=-1140U;
si0+=si1;
l5=si0;
si0=l8;
si1=-64U;
si0+=si1;
l9=si0;
if(si0){
goto L10;
}
sj0=0ULL;
l3=sj0;
goto L7;
L10:;
si0=l8;
si1=127U;
si0=si0 <= si1;
if(si0){
goto L11;
}
sj0=1ULL;
l6=sj0;
sj0=0ULL;
l13=sj0;
sj0=0ULL;
l3=sj0;
goto L7;
L11:;
sj0=0ULL;
l3=sj0;
sj0=l13;
si1=128U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
l14=sj1;
sj0<<=(sj1&63);
sj1=l6;
si2=l9;
sj2=(U64)(si2);
l15=sj2;
sj1>>=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=l14;
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l6=sj0;
sj0=l13;
sj1=l15;
sj0>>=(sj1&63);
l13=sj0;
goto L7;
L8:;
si0=l12;
si1=l5;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l12;
l5=si0;
sj0=l10;
l3=sj0;
sj0=0ULL;
l10=sj0;
goto L7;
L12:;
sj0=1ULL;
l3=sj0;
si0=l8;
si1=-63U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L13;
}
sj0=0ULL;
l10=sj0;
goto L7;
L13:;
sj0=l10;
si1=0U;
si2=l8;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l3=sj0;
sj0=l10;
si1=l8;
si2=64U;
si1+=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l14=sj0;
sj0=0ULL;
l10=sj0;
sj0=l3;
sj1=l14;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l3=sj0;
L7:;
si0=l7;
si1=l4;
si0^=si1;
l8=si0;
si1=2048U;
si0&=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L17;
}
sj0=l10;
sj1=l13;
sj0+=sj1;
sj1=l3;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
goto L16;
L17:;
sj0=l6;
sj1=l3;
sj0-=sj1;
l14=sj0;
sj0=l13;
sj1=l10;
sj0-=sj1;
sj1=l6;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l3=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L19;
}
sj0=l14;
l6=sj0;
si0=l9;
l11=si0;
goto L18;
L19:;
sj0=0ULL;
sj1=l14;
sj0-=sj1;
l6=sj0;
si0=l8;
si1=11U;
si0>>=(si1&31);
si1=1U;
si0^=si1;
l11=si0;
sj0=-1ULL;
sj1=0ULL;
sj2=l14;
sj3=0ULL;
si2=sj2 != sj3;
sj0=si2?sj0:sj1;
sj1=l3;
sj0-=sj1;
l3=sj0;
L18:;
sj0=l3;
si0=!(sj0);
if(si0){
goto L15;
}
L16:;
sj0=l3;
sj1=l3;
sj1=I64_CLZ(sj1);
l10=sj1;
si1=(U32)(sj1);
si2=-1U;
si1+=si2;
l9=si1;
sj1=(U64)(si1);
l13=sj1;
sj0<<=(sj1&63);
sj1=l6;
sj2=65ULL;
sj3=l10;
sj2-=sj3;
sj1>>=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=l13;
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l3=sj0;
si0=l5;
si1=64U;
si0+=si1;
l5=si0;
goto L14;
L15:;
sj0=l6;
si0=!(sj0);
if(si0){
goto L21;
}
sj0=l6;
sj0=I64_CLZ(sj0);
si0=(U32)(sj0);
l9=si0;
if(si0){
goto L20;
}
sj0=l6;
sj1=1ULL;
sj0>>=(sj1&63);
sj1=l6;
sj2=1ULL;
sj1&=sj2;
sj0|=sj1;
l3=sj0;
si0=-1U;
l9=si0;
goto L14;
L21:;
sd0=l0;
sd1=l1;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
goto L0;
L20:;
sj0=l6;
si1=l9;
si2=-1U;
si1+=si2;
l9=si1;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
L14:;
sj0=0ULL;
sj1=l3;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
si0=l5;
si1=l9;
si0-=si1;
l5=si0;
si1=-1085U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L22;
}
si0=l5;
si1=-1085U;
si0=si0 != si1;
if(si0){
goto L23;
}
sd0=-9.2233720368547758e+18;
sd1=9.2233720368547758e+18;
si2=l11;
sd0=si2?sd0:sd1;
l0=sd0;
sd1=l2;
si0=sd0 == sd1;
if(si0){
goto L24;
}
sj0=l3;
sj1=2047ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L22;
}
sj0=0ULL;
sj1=l3;
sj2=1ULL;
sj1&=sj2;
sj2=l3;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
sj2=4611686018427387904ULL;
sj1|=sj2;
l3=sj1;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
sd1=l2;
sd0+=sd1;
sd1=l0;
sd0-=sd1;
l2=sd0;
sd1=1.8928834978668395e-270;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
sd1=l2;
sd2=l2;
sd1-=sd2;
sd0*=sd1;
sd1=l2;
sd0+=sd1;
si1=l5;
sd0=f15136(i,sd0,si1);
goto L0;
L24:;
sd0=l2;
sd1=1.2744734909236908e-57;
sd0*=sd1;
sf0=(F32)(sd0);
sd0=(F64)(sf0);
sd1=1.8928834978668395e-270;
sd0*=sd1;
goto L0;
L23:;
sj0=0ULL;
sj1=l3;
sj2=1023ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj2=10ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=-1024ULL;
sj2&=sj3;
sj1|=sj2;
l3=sj1;
sj0-=sj1;
sj1=l3;
si2=l11;
sj0=si2?sj0:sj1;
sd0=(F64)(I64)(sj0);
l2=sd0;
L22:;
sd0=l2;
si1=l5;
sd0=f15136(i,sd0,si1);
L0:;
return sd0;
}

F64 f15124(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
sd0=l1;
sd1=l1;
si0=sd0 != sd1;
if(si0){
goto L2;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l4=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
sd0=l0;
sd1=l1;
sd0*=sd1;
l1=sd0;
sd1=l1;
sd0/=sd1;
goto L0;
L1:;
sj0=l4;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sd0=l0;
sd1=0;
sd0*=sd1;
sd1=l0;
sj2=l6;
sj3=l3;
si2=sj2 == sj3;
sd0=si2?sd0:sd1;
goto L0;
L3:;
sj0=l2;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l7=si0;
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
sj0=l4;
sj1=12ULL;
sj0<<=(sj1&63);
l3=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
L7:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
}
L6:;
sj0=l4;
si1=1U;
si2=l5;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
goto L4;
L5:;
sj0=l4;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4503599627370496ULL;
sj0|=sj1;
l3=sj0;
L4:;
si0=l7;
if(si0){
goto L9;
}
si0=0U;
l7=si0;
sj0=l2;
sj1=12ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
L11:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
sj0=l6;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L11;
}
}
L10:;
sj0=l2;
si1=1U;
si2=l7;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l2=sj0;
goto L8;
L9:;
sj0=l2;
sj1=4503599627370495ULL;
sj0&=sj1;
sj1=4503599627370496ULL;
sj0|=sj1;
l2=sj0;
L8:;
si0=l5;
si1=l7;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
L13:;
{
sj0=l3;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L14;
}
sj0=l6;
l3=sj0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sd0=l0;
sd1=0;
sd0*=sd1;
goto L0;
L14:;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l7;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
}
si0=l7;
l5=si0;
L12:;
sj0=l3;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L15;
}
sj0=l6;
l3=sj0;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
sd0=l0;
sd1=0;
sd0*=sd1;
goto L0;
L15:;
sj0=l3;
sj1=4503599627370495ULL;
si0=sj0 <= sj1;
if(si0){
goto L17;
}
sj0=l3;
l6=sj0;
goto L16;
L17:;
L18:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=2251799813685248ULL;
si0=sj0 < sj1;
l7=si0;
sj0=l3;
sj1=1ULL;
sj0<<=(sj1&63);
l6=sj0;
l3=sj0;
si0=l7;
if(si0){
goto L18;
}
}
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
sj0&=sj1;
l3=sj0;
si0=l5;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
sj0=l6;
sj1=-4503599627370496ULL;
sj0+=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l6=sj0;
goto L19;
L20:;
sj0=l6;
si1=1U;
si2=l5;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l6=sj0;
L19:;
sj0=l6;
sj1=l3;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
L0:;
return sd0;
}

F64 f15125(rustpythonInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
l2=sj0;
sd1=l1;
sj1=i64_reinterpret_f64(sd1);
sj2=9223372036854775807ULL;
sj1&=sj2;
l3=sj1;
sj2=l2;
sj3=l3;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l4=sj0;
sd0=f64_reinterpret_i64(sj0);
l1=sd0;
sj0=l4;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
goto L1;
}
sj0=l2;
sj1=l3;
sj2=l2;
sj3=l3;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
l2=sj0;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
sd0=l0;
goto L0;
L2:;
sj0=l2;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L3;
}
sd0=l0;
goto L0;
L3:;
si0=l6;
si1=l5;
si0-=si1;
si1=65U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L4:;
si0=l6;
si1=1534U;
si0=si0 < si1;
if(si0){
goto L6;
}
sd0=l1;
sd1=1.9010915662951598e-211;
sd0*=sd1;
l1=sd0;
sd0=l0;
sd1=1.9010915662951598e-211;
sd0*=sd1;
l0=sd0;
sd0=5.2601359015483735e+210;
l7=sd0;
goto L5;
L6:;
sd0=1;
l7=sd0;
si0=l5;
si1=572U;
si0=si0 > si1;
if(si0){
goto L5;
}
sd0=l1;
sd1=5.2601359015483735e+210;
sd0*=sd1;
l1=sd0;
sd0=l0;
sd1=5.2601359015483735e+210;
sd0*=sd1;
l0=sd0;
sd0=1.9010915662951598e-211;
l7=sd0;
L5:;
sd0=l7;
sd1=l0;
sd2=l0;
sd1*=sd2;
l8=sd1;
sd2=l1;
sd3=l1;
sd2*=sd3;
l9=sd2;
sd3=l1;
sd4=l1;
sd5=134217729;
sd4*=sd5;
l10=sd4;
sd5=l1;
sd6=l10;
sd5-=sd6;
sd4+=sd5;
l10=sd4;
sd3-=sd4;
l1=sd3;
sd4=l1;
sd3*=sd4;
sd4=l10;
sd5=l10;
sd4+=sd5;
sd5=l1;
sd4*=sd5;
sd5=l10;
sd6=l10;
sd5*=sd6;
sd6=l9;
sd5-=sd6;
sd4+=sd5;
sd3+=sd4;
sd4=l0;
sd5=l0;
sd6=134217729;
sd5*=sd6;
l1=sd5;
sd6=l0;
sd7=l1;
sd6-=sd7;
sd5+=sd6;
l1=sd5;
sd4-=sd5;
l0=sd4;
sd5=l0;
sd4*=sd5;
sd5=l1;
sd6=l1;
sd5+=sd6;
sd6=l0;
sd5*=sd6;
sd6=l1;
sd7=l1;
sd6*=sd7;
sd7=l8;
sd6-=sd7;
sd5+=sd6;
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0*=sd1;
l1=sd0;
L1:;
sd0=l1;
L0:;
return sd0;
}

F64 f15126(rustpythonInstance*i,F64 l0,U32 l1) {
U32 si1;
F64 sd0;
sd0=l0;
si1=l1;
sd0=f15136(i,sd0,si1);
L0:;
return sd0;
}

F64 f15127(rustpythonInstance*i,U32 l0) {
U32 si2;
F64 sd0,sd1;
sd0=-INFINITY;
sd1=INFINITY;
si2=l0;
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

F64 f15128(rustpythonInstance*i,F64 l0) {
F64 sd0,sd1;
sd0=l0;
sd1=l0;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0/=sd1;
L0:;
return sd0;
}

F64 f15129(rustpythonInstance*i,F64 l0) {
U64 l1=0;
F64 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=-4606619468846596096ULL;
sj0+=sj1;
sj1=854320534781951ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
sd0=l0;
sd1=-1;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd2=l0;
sd3=134217728;
sd2*=sd3;
l2=sd2;
sd1+=sd2;
sd2=l2;
sd1-=sd2;
l2=sd1;
sd2=l2;
sd1*=sd2;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+18647688U);
l3=sd2;
sd1*=sd2;
l4=sd1;
sd0+=sd1;
l5=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l6=sd2;
sd1*=sd2;
l7=sd1;
sd2=l7;
sd3=l7;
sd4=l7;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18647768U);
sd4*=sd5;
sd5=l6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+18647760U);
sd5*=sd6;
sd6=l0;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+18647752U);
sd6*=sd7;
si7=0U;
sd7=f64_load(&i->m0,(U64)si7+18647744U);
sd6+=sd7;
sd5+=sd6;
sd4+=sd5;
sd3*=sd4;
sd4=l6;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18647736U);
sd4*=sd5;
sd5=l0;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+18647728U);
sd5*=sd6;
si6=0U;
sd6=f64_load(&i->m0,(U64)si6+18647720U);
sd5+=sd6;
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l6;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647712U);
sd3*=sd4;
sd4=l0;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18647704U);
sd4*=sd5;
si5=0U;
sd5=f64_load(&i->m0,(U64)si5+18647696U);
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l0;
sd3=l2;
sd2-=sd3;
sd3=l3;
sd2*=sd3;
sd3=l0;
sd4=l2;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l0;
sd5=l5;
sd4-=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
goto L0;
L1:;
sj0=l1;
sj1=48ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si1=-32752U;
si0+=si1;
si1=-32737U;
si0=si0 > si1;
if(si0){
goto L3;
}
sj0=l1;
sj1=9223372036854775807ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=1U;
sd0=f15127(i,si0);
goto L0;
L4:;
sj0=l1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l8;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=32752U;
si0&=si1;
si1=32752U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
sd0=l0;
sd0=f15128(i,sd0);
goto L0;
L5:;
sd0=l0;
sd1=4503599627370496;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
sj1=-234187180623265792ULL;
sj0+=sj1;
l1=sj0;
L3:;
sj0=l1;
sj1=-4604367669032910848ULL;
sj0+=sj1;
l9=sj0;
sj1=52ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
si0=(U32)(sj0);
sd0=(F64)(I32)(si0);
l6=sd0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+18647632U);
sd0*=sd1;
sj1=l9;
sj2=45ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=127U;
si1&=si2;
si2=4U;
si1<<=(si2&31);
l8=si1;
si2=18647784U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0+=sd1;
l7=sd0;
si1=l8;
si2=18647776U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
sj2=l1;
sj3=l9;
sj4=-4503599627370496ULL;
sj3&=sj4;
sj2-=sj3;
sd2=f64_reinterpret_i64(sj2);
si3=l8;
si4=18649824U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2-=sd3;
si3=l8;
si4=18649832U;
si3+=si4;
sd3=f64_load(&i->m0,(U64)si3);
sd2-=sd3;
sd1*=sd2;
l0=sd1;
sd0+=sd1;
l3=sd0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l2=sd2;
sd1*=sd2;
sd2=l2;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647680U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647672U);
sd3+=sd4;
sd2*=sd3;
sd3=l0;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647664U);
sd3*=sd4;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647656U);
sd3+=sd4;
sd2+=sd3;
sd1*=sd2;
sd2=l2;
si3=0U;
sd3=f64_load(&i->m0,(U64)si3+18647648U);
sd2*=sd3;
sd3=l6;
si4=0U;
sd4=f64_load(&i->m0,(U64)si4+18647640U);
sd3*=sd4;
sd4=l0;
sd5=l7;
sd6=l3;
sd5-=sd6;
sd4+=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
L2:;
sd0=l0;
L0:;
return sd0;
}


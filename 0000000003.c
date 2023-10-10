#include "w2c2_base.h"

#include "rustpython.h"

void f330(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
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
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l3=si0;
L4:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
L0:;
}

void f331(rustpythonInstance*i,U32 l0) {
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

void f332(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
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
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15024(i,si0);
L5:;
L0:;
}

void f333(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f304(i,si0);
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
f15024(i,si0);
L2:;
si0=l1;
f333(i,si0);
si0=l1;
f15024(i,si0);
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
f15024(i,si0);
L3:;
L0:;
}

void f334(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
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
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si1=4U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si2=l3;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=7U;
si0+=si1;
si1=0U;
si2=l4;
si1-=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L4;
}
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si1=4U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L4;
}
si0=l3;
si1=4U;
si2=l3;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=7U;
si0+=si1;
si1=0U;
si2=l4;
si1-=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=92U;
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
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
L0:;
}

void f335(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f332(i,si0);
si0=l0;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
f334(i,si0);
L0:;
}

void f336(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f332(i,si0);
si0=l0;
f334(i,si0);
L0:;
}

U32 f337(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f322(i,si0,si1);
L0:;
return si0;
}

U32 f338(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f320(i,si0,si1);
L0:;
return si0;
}

U32 f339(rustpythonInstance*i,U32 l0,U32 l1) {
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
f530(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

U32 f340(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f321(i,si0,si1);
L0:;
return si0;
}

U32 f341(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088840U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f342(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088792U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f343(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088816U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f344(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1088864U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f345(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
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
f14666(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
sj1=l4;
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

U32 f346(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f530(i,si0,si1,si2);
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

U32 f347(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
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
f14779(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
sj1=l4;
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

U32 f348(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15143(i,si0,si1,si2);
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
f317(i,si0,si1,si2,si3);
si0=0U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
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
goto L4;
}
si0=l5;
f15024(i,si0);
L4:;
si0=l2;
f15024(i,si0);
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

U32 f349(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f350(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
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
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
l1=si0;
goto L2;
L4:;
si0=l0;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=l3;
si2=1U;
si1+=si2;
l5=si1;
si2=l0;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si2=l6;
f528(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
si0=l5;
si1=l0;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=3U;
si0&=si1;
l5=si0;
si0=l3;
si1=l0;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=-4U;
si0&=si1;
l6=si0;
si0=l7;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L8:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l5;
si0+=si1;
l6=si0;
si0=l7;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L9:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
}
si0=l6;
l1=si0;
L6:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f454(i,si0);
goto L1;
L10:;
si0=1089004U;
si1=15U;
si2=1089036U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si1=l1;
si2=1088988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L13;
L14:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si1=20U;
si0+=si1;
f454(i,si0);
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L15:;
si0=1089004U;
si1=15U;
si2=1089020U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
L0:;
return si0;
}

U32 f351(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
l5=si0;
goto L2;
L4:;
si0=l0;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=l3;
si2=1U;
si1+=si2;
l6=si1;
si2=l0;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si2=l7;
f528(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L5:;
si0=l6;
si1=l0;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=3U;
si0&=si1;
l6=si0;
si0=l3;
si1=l0;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=-4U;
si0&=si1;
l7=si0;
si0=l8;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L8:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si0+=si1;
l7=si0;
si0=l8;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L9:;
{
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
si0=l7;
l5=si0;
L6:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
f453(i,si0);
goto L1;
L10:;
si0=1089004U;
si1=15U;
si2=1089036U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si2=1088988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0+4U);
l9=sj0;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l9;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L13;
L14:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l2;
si1=4U;
si0+=si1;
f453(i,si0);
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
L15:;
si0=1089004U;
si1=15U;
si2=1089020U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
L0:;
return si0;
}

U32 f352(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
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
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f14779(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
sj1=l4;
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

U32 f353(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l4;
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
si1=l4;
si2=l1;
si3=l2;
f317(i,si0,si1,si2,si3);
si0=0U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
f15024(i,si0);
L4:;
si0=l2;
f15024(i,si0);
L3:;
si0=l0;
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

U32 f354(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
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
f530(i,si0,si1,si2);
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

U32 f355(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
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
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f14666(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
sj1=l4;
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

void f356(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l5;
sj2=(U64)(si2);
l7=sj2;
sj3=l6;
sj4=l7;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
si1=l8;
si0=si0 != si1;
l5=si0;
if(si0){
goto L2;
}
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
si2=l5;
sj2=(U64)(si2);
l7=sj2;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l2;
sj2=l7;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L0;
L1:;
si0=l8;
si1=l5;
si2=1093652U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f357(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1089052U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f358(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1089176U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f359(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=1056U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
f14741(i,si0);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
f194(i,si0);
si0=l1;
f192(i,si0);
si0=l1;
f193(i,si0);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=68719476736ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
si0=0U;
si0=f482(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+748U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+740U,sj1);
si0=l2;
si1=1091720U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+760U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l1;
si1=17U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
si0=0U;
l3=si0;
L9:;
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+102U,si1);
si0=l2;
si1=6U;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=512U;
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=384U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f14749(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+384U);
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+392U);
l3=si0;
if(si0){
goto L12;
}
si0=1U;
l7=si0;
goto L11;
L12:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l2;
si1=72U;
si0+=si1;
si1=l7;
si2=l6;
si3=l3;
si1=f15143(i,si1,si2,si3);
l6=si1;
si2=l3;
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
if(si0){
goto L4;
}
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l8=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L14;
}
si0=1U;
l9=si0;
goto L13;
L14:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
L13:;
si0=l9;
si1=l8;
si2=l7;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l1;
si1=92U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
goto L4;
L8:;
si0=1092772U;
si1=70U;
si2=l2;
si3=728U;
si2+=si3;
si3=1092844U;
si4=1092940U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
f15024(i,si0);
L3:;
sj0=l4;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
L2:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=l2;
si3=736U;
si2+=si3;
si3=l2;
si4=384U;
si3+=si4;
f200(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
si1=20U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
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
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
l3=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
f15024(i,si0);
L22:;
si0=l2;
si1=736U;
si0+=si1;
f333(i,si0);
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=312U;
si0=f15143(i,si0,si1,si2);
goto L20;
L21:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+384U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+388U);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
f15024(i,si0);
L23:;
si0=l1;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L25;
}
si0=4U;
l9=si0;
goto L24;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+260U);
l10=si0;
si0=0U;
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l8;
si1=1U;
si0&=si1;
l11=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l8;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l6=si0;
si0=l9;
l3=si0;
si0=l10;
l5=si0;
L27:;
{
si0=l3;
si1=l5;
si2=200U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=504U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l5;
si1=608U;
si0+=si1;
l5=si0;
si0=l7;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=l11;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l6;
si3=304U;
si2*=si3;
si1+=si2;
si2=200U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L24:;
si0=0U;
si0=f302(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1088560U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=l9;
si2=l8;
si3=l2;
si4=72U;
si3+=si4;
f308(i,si0,si1,si2,si3);
si0=l2;
si1=72U;
si0+=si1;
f304(i,si0);
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=736U;
si1+=si2;
si2=4U;
si1|=si2;
l3=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=768U;
si1+=si2;
l5=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+736U);
l3=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
f15024(i,si0);
L28:;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l3;
if(si0){
goto L19;
}
L20:;
si0=l2;
si1=688U;
si0+=si1;
si1=24U;
si0+=si1;
l3=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=688U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=688U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l2;
si1=672U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l4=sj0;
si0=l2;
si1=384U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
l6=si1;
si2=288U;
si0=f15143(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-17U;
si0+=si1;
si1=-2U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l2;
si1=18663156U;
i32_store(&i->m0,(U64)si0+716U,si1);
si0=l2;
si1=748U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+740U,si1);
si0=l2;
si1=1089304U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=203U;
i32_store(&i->m0,(U64)si0+1052U,si1);
si0=l2;
si1=l2;
si2=1048U;
si1+=si2;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l2;
si1=l2;
si2=688U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l2;
si1=l2;
si2=716U;
si1+=si2;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l2;
si1=728U;
si0+=si1;
si1=l2;
si2=720U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+728U);
l3=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+732U);
l3=si0;
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
goto L29;
}
si0=l6;
f15024(i,si0);
L29:;
si0=l3;
f15024(i,si0);
goto L15;
L19:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
f329(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l6;
si1=l3;
si0=si0 == si1;
if(si0){
goto L30;
}
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
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L33:;
si0=l2;
si1=1056U;
si0+=si1;
i->g0=si0;
goto L0;
L18:;
si0=4U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1092772U;
si1=70U;
si2=l2;
si3=728U;
si2+=si3;
si3=1092844U;
si4=1092940U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l2;
si1=736U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=288U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=736U;
si0+=si1;
f329(i,si0);
si0=l2;
si1=688U;
si0+=si1;
f563(i,si0);
UNREACHABLE;
L15:;
sj0=l4;
sj1=64ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L34;
}
si0=l2;
si1=18663156U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l2;
si1=748U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+740U,si1);
si0=l2;
si1=1089364U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l2;
si1=1088744U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l2;
si1=l2;
si2=720U;
si1+=si2;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l2;
si1=1048U;
si0+=si1;
si1=l2;
si2=728U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1048U);
l3=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1052U);
l3=si0;
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
goto L36;
}
si0=l6;
f15024(i,si0);
L36:;
si0=l3;
f15024(i,si0);
L35:;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663116U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l2;
si1=18663092U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l2;
si1=l2;
si2=728U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1052U,si1);
si0=l2;
si1=1048U;
si0+=si1;
f14765(i,si0);
L37:;
si0=l2;
si1=18663092U;
i32_store(&i->m0,(U64)si0+716U,si1);
si0=l2;
si1=l2;
si2=716U;
si1+=si2;
f14766(i,si0,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
l5=si1;
i32_store8(&i->m0,(U64)si0+732U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l2;
si1=720U;
si0+=si1;
si1=l2;
si2=728U;
si1+=si2;
si2=l2;
si3=736U;
si2+=si3;
f14768(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+720U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
si0=f14767(i);
if(si0){
goto L39;
}
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L39:;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+740U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+736U);
f15024(i,si0);
goto L34;
L38:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+720U);
i64_store(&i->m0,(U64)si0+1048U,sj1);
si0=1089372U;
si1=43U;
si2=l2;
si3=1048U;
si2+=si3;
si3=1089416U;
si4=1089532U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L34:;
si0=l2;
si1=736U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=672U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+672U);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+752U,sj1);
si0=l2;
si1=736U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=288U;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=736U;
si0+=si1;
f329(i,si0);
si0=l5;
si1=l2;
si2=688U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=736U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=688U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
si2=688U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+688U);
i64_store(&i->m0,(U64)si0+736U,sj1);
si0=l2;
si1=736U;
si0+=si1;
f330(i,si0);
si0=1U;
f14793(i,si0);
UNREACHABLE;
L0:;
}

void f360(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U64 l39=0;
U64 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=400U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L10;
L11:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l5;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L13;
}
si0=0U;
l8=si0;
goto L12;
L13:;
si0=l1;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L14;
L15:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L14:;
si0=l8;
si1=l5;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l9=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
L12:;
si0=l1;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L17;
}
goto L16;
L17:;
si0=4U;
l7=si0;
si0=0U;
l24=si0;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=12U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l25;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l25;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l25;
l24=si0;
L18:;
si0=l7;
si1=l5;
si2=l24;
si0=f15143(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l26=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l26;
sj0|=sj1;
l26=sj0;
L16:;
si0=l1;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L20;
}
si0=0U;
l29=si0;
goto L19;
L20:;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L22;
}
si0=1U;
l29=si0;
goto L21;
L22:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l29=si0;
si0=!(si0);
if(si0){
goto L5;
}
L21:;
si0=l29;
si1=l5;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l30=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l30;
sj0|=sj1;
l30=sj0;
L19:;
si0=l1;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l1;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l34=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l1;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l38=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l39=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l40=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l41=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=212U;
si1+=si2;
f238(i,si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=l1;
si2=224U;
si1+=si2;
f231(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l42=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
f234(i,si0,si1);
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l43=si0;
if(si0){
goto L24;
}
si0=8U;
l24=si0;
goto L23;
L24:;
si0=l43;
si1=6882960U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l43;
si1=312U;
si0*=si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+236U);
l44=si0;
si0=l3;
if(si0){
goto L26;
}
si0=8U;
l24=si0;
goto L25;
L26:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l24=si0;
si0=!(si0);
if(si0){
goto L4;
}
L25:;
si0=l43;
si1=312U;
si0*=si1;
l25=si0;
si0=0U;
l3=si0;
si0=l43;
l5=si0;
L27:;
{
si0=l25;
si1=l3;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l44;
si2=l3;
si1+=si2;
f360(i,si0,si1);
si0=l24;
si1=l3;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=312U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L27;
}
}
L23:;
si0=l2;
si1=76U;
si0+=si1;
si1=l1;
si2=248U;
si1+=si2;
f230(i,si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
si2=260U;
si1+=si2;
f235(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l45=si0;
si0=4U;
l44=si0;
si0=0U;
l46=si0;
si0=0U;
l25=si0;
si0=4U;
l5=si0;
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l47=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
l25=si0;
si0=4U;
l5=si0;
si0=l47;
si0=!(si0);
if(si0){
goto L28;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l47;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l47;
l25=si0;
L28:;
si0=l5;
si1=l45;
si2=l25;
si0=f15143(i,si0,si1,si2);
l45=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+284U);
l47=si0;
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l25;
si0=!(si0);
if(si0){
goto L29;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l25;
si0=f15022(i,si0);
l44=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l25;
l46=si0;
L29:;
si0=l44;
si1=l47;
si2=l46;
si0=f15143(i,si0,si1,si2);
l47=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+296U);
l48=si0;
si0=0U;
l44=si0;
si0=l1;
si1=304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
if(si0){
goto L31;
}
si0=4U;
l49=si0;
goto L30;
L31:;
si0=l25;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l25;
si1=4U;
si0<<=(si1&31);
l46=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l46;
if(si0){
goto L32;
}
si0=4U;
l49=si0;
goto L30;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l46;
si0=f15022(i,si0);
l49=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l46;
l44=si0;
L30:;
si0=l49;
si1=l48;
si2=l44;
si0=f15143(i,si0,si1,si2);
l44=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l46=si0;
if(si0){
goto L34;
}
goto L33;
L34:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l48=si0;
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l49=si0;
if(si0){
goto L36;
}
goto L35;
L36:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l50=si0;
L35:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+208U);
l51=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+204U);
l52=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l53=si0;
if(si0){
goto L38;
}
goto L37;
L38:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l54=si0;
L37:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+76U);
i64_store(&i->m0,(U64)si0+248U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=232U;
si0+=si1;
si1=l2;
si2=52U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=256U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+308U);
l1=si0;
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l0;
si1=l44;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l0;
si1=l45;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l51;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l0;
si1=l52;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l0;
si1=l31;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l0;
si1=l32;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l0;
si1=l36;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l0;
si1=l37;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l0;
si1=l38;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l0;
sj1=l30;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l0;
si1=l29;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l0;
si1=l27;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l0;
si1=l28;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l0;
sj1=l26;
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l33;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l34;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l35;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l41;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l54;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l53;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l50;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l49;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l48;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l46;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l39;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l40;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l42;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l43;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l0;
si1=l43;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l0;
si1=l24;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l0;
si1=l47;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l0;
si1=220U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+212U,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+260U,sj1);
si0=l0;
si1=268U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=400U;
si0+=si1;
i->g0=si0;
goto L0;
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
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=4U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l47;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=4U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l46;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f361(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1088744U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f362(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f363(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f364(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1089656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1089604U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1089664U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f365(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f366(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f367(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f368(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

U32 f369(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f370(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f371(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f372(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f373(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f374(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f375(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l3;
si3=l1;
si4=160U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=12U;
si3*=si4;
si2+=si3;
f243(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
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
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
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

U32 f376(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1089680U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=203U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
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

void f377(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l0;
si1=184U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
l2=si1;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=276U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=264U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=252U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=236U;
si0+=si1;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=224U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=216U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=204U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1088744U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+168U);
l3=sj0;
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l1;
si1=176U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si1=180U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=160U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=168U;
si0+=si1;
si1=l1;
si2=184U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=192U;
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l4;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=176U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=152U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f332(i,si0);
si0=l1;
f334(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15024(i,si0);
L2:;
L0:;
}

U32 f378(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1089689U;
si2=1089688U;
si3=l0;
si4=220U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l3=si3;
si4=8192U;
si3&=si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l0;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1089692U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=19U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1089712U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=1089728U;
si1=43U;
si2=1089888U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=32U;
l1=si0;
si0=l3;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
si0=1U;
l9=si0;
L11:;
{
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L7;
}
L15:;
{
si0=l8;
l10=si0;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
L16:;
si0=l10;
l1=si0;
si0=l7;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L7;
}
L14:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
l11=si0;
si0=l10;
l1=si0;
goto L12;
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
L12:;
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1090024U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=147U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=0U;
l9=si0;
si0=l4;
si1=l7;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=0U;
l11=si0;
goto L11;
L17:;
si0=l1;
l11=si0;
L19:;
{
si0=l8;
l10=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l11;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l1;
l10=si0;
L20:;
si0=l10;
l11=si0;
si0=l7;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
si0=0U;
l11=si0;
si0=l7;
l4=si0;
goto L11;
L18:;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1089680U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=19U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L11;
}
L10:;
si0=l0;
si1=184U;
si0+=si1;
l1=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj0=0ULL;
l13=sj0;
sj0=2ULL;
l14=sj0;
L23:;
{
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L22;
}
sj0=l14;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
default:
goto L24;
}
L25:;
sj0=l13;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
L24:;
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1090024U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
sj0=0ULL;
l14=sj0;
sj0=l13;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L23;
}
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1089680U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=19U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
sj0=1ULL;
l14=sj0;
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
goto L23;
}
L22:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
sj0=l12;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1090044U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1088744U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L21:;
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=50U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1090024U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
si2=30U;
si1<<=(si2&31);
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1&=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1090040U;
si2=1088744U;
si3=l3;
si4=2U;
si3&=si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L8:;
si0=1089904U;
si1=99U;
si2=1090004U;
f634(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1090044U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1088744U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L2;
}
L6:;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f379(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f380(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=244U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=236U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f381(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=268U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=260U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f382(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=208U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f383(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=224U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f384(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f385(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1090220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f386(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f387(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=220U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=(U32)(U32)(I8)(U8)(si2);
si3=2U;
si2<<=(si3&31);
si3=1090220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f388(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f389(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f390(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f391(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+116U);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f392(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=64U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+64U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f393(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=72U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=si2?si0:si1;
L0:;
return si0;
}

void f394(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f395(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
L0:;
return si0;
}

void f396(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f397(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
L0:;
return si0;
}

void f398(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=192U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f399(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=200U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f400(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f401(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=24U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f402(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=136U;
si1+=si2;
l1=si1;
si2=0U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f403(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l3;
si3=l1;
si4=172U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=12U;
si3*=si4;
si2+=si3;
f243(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
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
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
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

U32 f404(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
L0:;
return si0;
}

void f405(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=236U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=152U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
l3=si1;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=276U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=264U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=252U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=236U;
si0+=si1;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=224U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=216U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=204U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1088744U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l0;
si1=l1;
si2=152U;
si0=f15143(i,si0,si1,si2);
l0=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+240U,sj1);
si0=l3;
f332(i,si0);
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
f15024(i,si0);
L3:;
si0=l1;
f334(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
f15024(i,si0);
L4:;
L0:;
}

void f406(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=32U;
l3=si0;
si0=l1;
si1=189U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=3U;
l3=si0;
goto L2;
L6:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l2;
si1=l3;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=4U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=4U;
si0+=si1;
si1=0U;
f515(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L4:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=2U;
l3=si0;
goto L2;
L3:;
si0=1089904U;
si1=99U;
si2=1090172U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=4U;
si0+=si1;
si1=0U;
si2=l3;
f530(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L12:;
{
si0=l4;
l1=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L9;
}
si0=l3;
si1=8U;
si0+=si1;
l1=si0;
L13:;
si0=l1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L11:;
si0=1089904U;
si1=99U;
si2=1090188U;
f634(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f242(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
l1=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f437(i,si0,si1,si2,si3,si4);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
l3=si0;
L15:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L16:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15024(i,si0);
goto L7;
L9:;
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+4U,sj1);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L17:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f407(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=32U;
l3=si0;
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+74U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=3U;
l3=si0;
goto L2;
L6:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+75U,si1);
si0=l2;
si1=l3;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+74U,si1);
si0=l2;
si1=l3;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=4U;
l3=si0;
goto L2;
L5:;
si0=l2;
si1=4U;
si0+=si1;
si1=0U;
f515(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L4:;
si0=l2;
si1=l3;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l2;
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=2U;
l3=si0;
goto L2;
L3:;
si0=1089904U;
si1=99U;
si2=1090204U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=4U;
si0+=si1;
si1=0U;
si2=l3;
f530(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l0;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
si2=l0;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f242(i,si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
l7=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+44U);
l3=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f437(i,si0,si1,si2,si3,si4);
si0=l2;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=203U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1089680U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l5;
si2=l2;
si3=72U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
l0=si0;
L14:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L15:;
si0=l0;
si1=12U;
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
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
f15024(i,si0);
L16:;
si0=l8;
if(si0){
goto L9;
}
si0=l4;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L8;
L11:;
si0=l2;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1090024U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l5;
si2=l2;
si3=72U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l4;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L10:;
si0=l2;
si1=84U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1090044U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=1088744U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=l5;
si2=l2;
si3=72U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L17:;
si0=1U;
l0=si0;
goto L7;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L18:;
si0=0U;
l0=si0;
L7:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f408(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f409(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=212U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=204U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f410(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=236U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=228U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f411(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=184U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=176U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f412(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=200U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=192U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f413(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f414(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1090220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f415(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=188U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=(U32)(U32)(I8)(U8)(si2);
si3=2U;
si2<<=(si3&31);
si3=1090220U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f416(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f417(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f418(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f419(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f420(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+116U);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f421(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=64U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+64U);
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f422(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=72U;
si0+=si1;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=si2?si0:si1;
L0:;
return si0;
}

void f423(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f424(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

void f425(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f426(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
L0:;
return si0;
}

void f427(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f428(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f429(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si2=96U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=l1;
si3=24U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}


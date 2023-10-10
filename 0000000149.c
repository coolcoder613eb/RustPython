#include "w2c2_base.h"

#include "rustpython.h"

void f14930(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14931(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14932(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14933(rustpythonInstance*i,U32 l0) {
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

void f14934(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
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
goto L2;
}
si0=l2;
f15271(i,si0);
L2:;
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

void f14935(rustpythonInstance*i,U32 l0) {
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

void f14936(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
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
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

void f14937(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f14938(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
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

void f14939(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f14940(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
L0:;
}

void f14941(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-6931449026641491584ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=2733281550818661709ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f14942(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
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
si0=0U;
si1=l2;
si2=1986224U;
si3=l2;
si4=4U;
si3+=si4;
si4=1986224U;
si5=l2;
si6=8U;
si5+=si6;
si6=1991716U;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f14943(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1991264U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
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
si0=1U;
si1=l2;
si2=1986240U;
si3=l2;
si4=4U;
si3+=si4;
si4=1986240U;
si5=l2;
si6=8U;
si5+=si6;
si6=1991268U;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f14944(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
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
l1=si0;
L1:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f14919(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14945(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14916(i,si0,si1);
L0:;
return si0;
}

U32 f14946(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14922(i,si0,si1);
si0=0U;
L0:;
return si0;
}

U32 f14947(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
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
l1=si0;
L1:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f14921(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14948(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
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
f14949(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
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
f14923(i,si0,si1,si2);
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

void f14949(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14963(i,si0,si1,si2,si3);
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

U32 f14950(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1985952U;
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

U32 f14951(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1985928U;
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

U32 f14952(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1985976U;
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

U32 f14953(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1986024U;
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

U32 f14954(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1986000U;
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

U32 f14955(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
f14923(i,si0,si1,si2);
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

U32 f14956(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f14919(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14957(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f14923(i,si0,si1,si2);
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

U32 f14958(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f14921(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14959(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f14960(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

void f14961(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f15271(i,si0);
L2:;
L0:;
}

void f14962(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
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
f15271(i,si0);
L1:;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f15271(i,si0);
L2:;
L0:;
}

void f14963(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f14964(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14963(i,si0,si1,si2,si3);
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

void f14965(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14963(i,si0,si1,si2,si3);
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

U32 f14966(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f14967(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1986388U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1986396U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1986390U;
si3=3U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1986412U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
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
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
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
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102923U;
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
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f14968(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972440U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l0;
si1=15U;
si0+=si1;
f14969(i,si0);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14969(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972440U);
switch(si0){
case 0:
goto L7;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L6;
default:
goto L7;
}
L7:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+2972440U,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+39U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=2972472U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l1;
si2=39U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=8U;
si0+=si1;
f15082(i,si0);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+39U);
if(si0){
goto L8;
}
L9:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972472U);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972500U);
l2=si0;
si0=1U;
l0=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972500U,si1);
si0=l2;
if(si0){
goto L8;
}
si0=0U;
si1=2972584U;
i32_store(&i->m0,(U64)si0+2972472U,si1);
goto L10;
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972476U);
si1=1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
L10:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972476U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972480U);
if(si0){
goto L2;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2972480U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972496U);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si1=2972484U;
f15000(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L12;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L14;
}
si0=l3;
f15271(i,si0);
L14:;
si0=l2;
f15271(i,si0);
L12:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972488U);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972484U);
f15271(i,si0);
L15:;
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2972488U,sj1);
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+2972484U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972480U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972480U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972476U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+2972476U,si1);
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2972496U,si1);
si0=l0;
if(si0){
goto L8;
}
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2972500U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972472U,si1);
L8:;
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+2972440U,si1);
L6:;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1992372U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1986532U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=1985880U;
si1=43U;
si2=1989332U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1988380U;
si1=16U;
si2=l1;
si3=40U;
si2+=si3;
si3=1988396U;
si4=1988440U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1992436U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1986532U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14970(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=1986428U;
si2=4U;
f60(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=24U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972560U);
l9=sj0;
L6:;
{
sj0=l9;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
si0=0U;
sj1=l10;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+2972560U);
l11=sj2;
sj3=l11;
sj4=l9;
si3=sj3 == sj4;
l6=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+2972560U,sj1);
sj0=l11;
l9=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972576U);
if(si0){
goto L1;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2972576U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972580U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1989876U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
si2=l5;
si3=40U;
si2+=si3;
f14971(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
f14937(i,si0,si1);
f14972(i);
UNREACHABLE;
L5:;
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1986492U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=7279U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=l5;
si3=40U;
si2+=si3;
f14971(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
f14937(i,si0,si1);
f14972(i);
UNREACHABLE;
L4:;
si0=0U;
si1=l8;
i32_store(&i->m0,(U64)si0+2972580U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972576U,si1);
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972440U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=40U;
si0+=si1;
f14969(i,si0);
L7:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L3:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14973(i);
UNREACHABLE;
L1:;
si0=1988380U;
si1=16U;
si2=l5;
si3=32U;
si2+=si3;
si3=1988396U;
si4=1989884U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f14971(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=1989008U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1988948U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
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
goto L1;
}
L4:;
si0=l0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14972(rustpythonInstance*i) {
f15312(i);
UNREACHABLE;
L0:;
}

void f14973(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=1986852U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1986860U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14974(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1986644U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14975(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972576U);
if(si0){
goto L4;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2972576U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972580U);
l1=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972560U);
l2=sj0;
L6:;
{
sj0=l2;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=0U;
sj1=l3;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+2972560U);
l4=sj2;
sj3=l4;
sj4=l2;
si3=sj3 == sj4;
l5=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+2972560U,sj1);
sj0=l4;
l2=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972580U,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
UNREACHABLE;
L4:;
si0=1988380U;
si1=16U;
si2=l0;
si3=8U;
si2+=si3;
si3=1988396U;
si4=1989796U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972576U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972576U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L2:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14973(i);
UNREACHABLE;
L0:;
return si0;
}

void f14976(rustpythonInstance*i,U64 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
sj1=l0;
sj2=0ULL;
sj3=1000000000ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l0=sj1;
si2=l1;
sj2=(U64)(si2);
sj1+=sj2;
l3=sj1;
sj2=l0;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=64U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=305419896ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=1U;
si3=l2;
si4=104U;
si3+=si4;
si0=wasi_snapshot_preview1__poll_oneoff(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+72U);
sj1=305419896ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=65535U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+82U);
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1992064U;
si1=43U;
si2=1992108U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=1992004U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=1992048U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14977(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=512U;
l2=si0;
si0=512U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=512U;
si0=f15323(i,si0,si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973140U);
l2=si0;
si1=68U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=512U;
l2=si0;
goto L6;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
L8:;
{
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
si2=1U;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si0=f15323(i,si0,si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973140U);
l4=si0;
si1=68U;
si0=si0 == si1;
if(si0){
goto L8;
}
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l3;
f15271(i,si0);
goto L2;
L4:;
si0=1U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l3;
si1=f15399(i,si1);
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l4;
if(si0){
goto L11;
}
si0=l3;
f15271(i,si0);
si0=1U;
l3=si0;
goto L10;
L11:;
si0=l3;
si1=l4;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L9:;
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
L2:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14978(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=f15287(i);
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
l4=si0;
si0=l2;
if(si0){
goto L7;
}
si0=0U;
l5=si0;
goto L6;
L7:;
si0=0U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=4U;
l7=si0;
si0=0U;
l3=si0;
L8:;
{
si0=l2;
l8=si0;
si0=l6;
si0=f15399(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=-1U;
si0+=si1;
l10=si0;
si0=l9;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l2;
si1=l5;
si0-=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l2=si0;
L15:;
{
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
si0=l4;
si1=l9;
si2=-9U;
si1+=si2;
l11=si1;
si0=si0 <= si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l9;
si1=-9U;
si0+=si1;
l11=si0;
si0=0U;
l4=si0;
L13:;
L16:;
{
si0=l6;
si1=l4;
si0+=si1;
l12=si0;
si1=1U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=1027423549U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L12;
}
si0=l12;
si1=5U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=1027423549U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L16;
}
}
L12:;
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L9;
}
L17:;
{
si0=l5;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
l2=si0;
goto L10;
L18:;
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L9;
}
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l2=si0;
L19:;
{
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l10;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L9;
}
L10:;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
if(si0){
goto L21;
}
si0=1U;
l5=si0;
goto L20;
L21:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L20:;
si0=l5;
si1=l6;
si2=l4;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l2;
si1=2U;
si0+=si1;
l5=si0;
si0=l4;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
si1=l5;
si0-=si1;
l2=si0;
si0=1U;
l12=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L22;
}
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
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
L22:;
si0=l12;
si1=l6;
si2=l5;
si1+=si2;
si2=l2;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
si1=l3;
f14965(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L23:;
si0=l7;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
L9:;
si0=l8;
si1=4U;
si0+=si1;
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L8;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l3;
si3=24U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l4;
si1=l9;
si2=1991904U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l5;
si1=l9;
si2=1991920U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14979(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=4U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+404U);
si0=f15337(i,si0);
l2=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L3:;
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
l4=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
sj0=l4;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f14980(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
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
goto L7;
}
si0=l5;
f15271(i,si0);
L7:;
si0=l2;
f15271(i,si0);
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=f15399(i,si0);
l1=si0;
if(si0){
goto L12;
}
si0=1U;
l5=si0;
goto L11;
L12:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l5;
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
goto L4;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14980(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15337(i,si0);
l4=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14981(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=832U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=383U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l0;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=416U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l1;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+416U);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+420U);
l1=si0;
si0=l3;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=432U;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=432U;
si0+=si1;
si1=l3;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=816U;
si0+=si1;
si1=l4;
si2=432U;
si1+=si2;
si2=l3;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+816U);
if(si0){
goto L5;
}
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+820U);
si2=1U;
si0=f15340(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l4;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+2973140U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L5:;
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L4:;
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
f14982(i,si0,si1,si2,si3,si4);
goto L1;
L2:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
si3=l1;
f14983(i,si0,si1,si2,si3);
L1:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+816U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=452U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=432U;
si0+=si1;
si1=12U;
si0+=si1;
si1=7280U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1987020U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=7280U;
i32_store(&i->m0,(U64)si0+436U,si1);
si0=l4;
si1=l4;
si2=432U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=816U;
si1+=si2;
i32_store(&i->m0,(U64)si0+448U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=1987044U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=l4;
si1=832U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14982(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L5;
}
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=1U;
si0=f15340(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+2973140U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L5:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l3;
si2=l4;
si3=l2;
f14983(i,si0,si1,si2,si3);
L2:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
L1:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14983(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si2=1U;
si0=f15340(i,si0,si1,si2);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+2973140U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15271(i,si0);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14984(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
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
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
f15006(i,si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=7281U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1988340U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l0=si0;
si0=l2;
si1=298U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1992444U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=1992608U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1987284U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f713(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l0=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14985(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f761(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f14986(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=432U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=416U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l1;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+416U);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+420U);
si0=f15341(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=4U;
l1=si0;
si0=l2;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=0U;
l1=si0;
si0=l2;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+2973140U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L1;
L3:;
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
l3=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l3;
si0=(U32)(sj0);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l1;
f14987(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=416U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1987100U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=7280U;
i32_store(&i->m0,(U64)si0+420U,si1);
si0=l2;
si1=l2;
si2=416U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=1987116U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l2;
si1=432U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14987(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15341(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l0;
si1=0U;
sj1=i64_load32_u(&i->m0,(U64)si1+2973140U);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14988(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si1=l1;
si0=wasi_snapshot_preview1__args_sizes_get(i,si0,si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L9;
}
si0=4U;
l4=si0;
goto L8;
L9:;
si0=l3;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l3;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L11;
}
si0=l6;
l4=si0;
goto L10;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L10;
L12:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L10:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
if(si0){
goto L16;
}
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1U;
l7=si0;
si0=l4;
si1=1U;
si0=wasi_snapshot_preview1__args_get(i,si0,si1);
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
L16:;
si0=l4;
si1=l7;
si0=wasi_snapshot_preview1__args_get(i,si0,si1);
if(si0){
goto L14;
}
L15:;
si0=l3;
if(si0){
goto L19;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l5=si0;
goto L18;
L19:;
si0=l3;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l3;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L21;
}
si0=l6;
l8=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l8=si0;
goto L20;
L22:;
si0=l5;
si0=f15269(i,si0);
l8=si0;
L20:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=0U;
l6=si0;
si0=0U;
l3=si0;
L23:;
{
si0=1U;
l10=si0;
si0=l4;
si1=l6;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=f15399(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L24;
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
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
L24:;
si0=l10;
si1=l11;
si2=l5;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l1;
si1=l3;
f14964(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L25:;
si0=l8;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l10=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l6;
si2=4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L23;
}
}
si0=l4;
f15271(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L18:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+4U);
l12=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
f15271(i,si0);
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l12;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
sj0=l12;
si0=(U32)(sj0);
l3=si0;
goto L1;
L14:;
si0=l7;
f15271(i,si0);
L13:;
si0=4U;
l5=si0;
si0=0U;
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15271(i,si0);
goto L2;
L7:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l6;
si1=l5;
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
si0=4U;
l5=si0;
si0=0U;
l6=si0;
L2:;
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l6;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14989(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=55U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
si2=l2;
si3=l3;
si4=16U;
si3+=si4;
f14990(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L11;
L12:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
L11:;
si0=l4;
si1=l3;
si2=16U;
si1+=si2;
si0=wasi_snapshot_preview1__fd_filestat_get(i,si0,si1);
l6=si0;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
if(si0){
goto L9;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l8=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=1024U;
l2=si0;
goto L6;
L10:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=l2;
si2=24U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
if(si0){
goto L7;
}
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=0U;
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
goto L5;
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=1024U;
si0+=si1;
l9=si0;
si1=8191U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l7;
si1=l2;
si0-=si1;
si1=9216U;
si0+=si1;
l9=si0;
L5:;
si0=0U;
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
l10=si0;
si0=l3;
si1=32U;
si0+=si1;
l11=si0;
si0=l3;
si1=24U;
si0+=si1;
l12=si0;
si0=l7;
l13=si0;
si0=0U;
l14=si0;
L15:;
{
si0=l2;
si1=l13;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=l13;
si2=32U;
f14923(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L16:;
si0=l3;
si1=l8;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l13;
si2=l2;
si1-=si2;
l1=si1;
si2=l1;
si3=l9;
si4=l1;
si5=l9;
si4=si4 < si5;
si2=si4?si2:si3;
si3=l6;
si1=si3?si1:si2;
l15=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si2=16U;
si1+=si2;
si2=1U;
si3=l3;
si4=80U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l1=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L15;
}
goto L3;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l1=si0;
if(si0){
goto L18;
}
si0=4U;
l13=si0;
si0=l2;
l1=si0;
goto L2;
L18:;
si0=l14;
si1=l1;
si2=l14;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l14=si0;
si1=l15;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l1;
si1=l15;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l14;
si1=l1;
si0-=si1;
l14=si0;
si0=l3;
si1=l1;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l7;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l13;
si1=l2;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l10;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
L21:;
{
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
si2=80U;
si1+=si2;
si2=1U;
si3=l3;
si4=92U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
if(si0){
goto L20;
}
si0=4U;
l13=si0;
si0=l7;
l1=si0;
goto L2;
L22:;
si0=l2;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L21;
}
L20:;
si0=l2;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l3;
si1=l7;
si2=l2;
f14923(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L15;
L19:;
}
si0=l14;
si1=l15;
si2=1988648U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=l15;
si2=1987468U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l2;
si1=32U;
si2=1988664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=0U;
l13=si0;
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L24;
}
si0=1987224U;
si1=l1;
si2=l13;
si3=4U;
si2=si2 == si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
si0=2U;
si1=l13;
si2=l2;
si0=si2?si0:si1;
l13=si0;
goto L23;
L24:;
si0=l13;
si1=4U;
si0=si0 != si1;
if(si0){
goto L23;
}
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
si0=l4;
si0=f15288(i,si0);
goto L1;
L23:;
si0=l0;
si1=l13;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l8;
f15271(i,si0);
L25:;
si0=l4;
si0=f15288(i,si0);
L1:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14990(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=400U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l4;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l4;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+4U);
l5=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
sj2=l5;
si2=(U32)(sj2);
l1=si2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
si4=l3;
f15069(i,si0,si1,si2,si3,si4);
sj0=l5;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
goto L4;
L5:;
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l4;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f14991(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=40U;
l1=si0;
si0=l0;
si1=65535U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=2U;
l1=si0;
si0=l0;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L9;
case 2:
goto L10;
case 3:
goto L16;
case 4:
goto L3;
case 5:
goto L16;
case 6:
goto L16;
case 7:
goto L16;
case 8:
goto L16;
case 9:
goto L16;
case 10:
goto L16;
case 11:
goto L11;
case 12:
goto L1;
case 13:
goto L15;
case 14:
goto L16;
case 15:
goto L16;
case 16:
goto L16;
case 17:
goto L16;
case 18:
goto L4;
case 19:
goto L16;
case 20:
goto L16;
case 21:
goto L16;
case 22:
goto L16;
case 23:
goto L16;
case 24:
goto L16;
case 25:
goto L7;
case 26:
goto L6;
case 27:
goto L16;
case 28:
goto L16;
case 29:
goto L16;
case 30:
goto L16;
case 31:
goto L16;
case 32:
goto L16;
case 33:
goto L16;
case 34:
goto L16;
case 35:
goto L16;
case 36:
goto L16;
case 37:
goto L16;
case 38:
goto L16;
case 39:
goto L16;
case 40:
goto L16;
case 41:
goto L16;
case 42:
goto L8;
case 43:
goto L16;
case 44:
goto L16;
case 45:
goto L16;
case 46:
goto L16;
case 47:
goto L16;
case 48:
goto L16;
case 49:
goto L16;
case 50:
goto L2;
case 51:
goto L12;
case 52:
goto L16;
case 53:
goto L16;
case 54:
goto L16;
case 55:
goto L16;
case 56:
goto L16;
case 57:
goto L16;
case 58:
goto L16;
case 59:
goto L16;
case 60:
goto L16;
case 61:
goto L14;
case 62:
goto L13;
case 63:
goto L16;
case 64:
goto L16;
case 65:
goto L16;
case 66:
goto L16;
case 67:
goto L16;
case 68:
goto L16;
case 69:
goto L16;
case 70:
goto L16;
case 71:
goto L5;
default:
goto L16;
}
L16:;
si0=38U;
si1=40U;
si2=l0;
si3=48U;
si2=si2 == si3;
si0=si2?si0:si1;
goto L0;
L15:;
si0=3U;
goto L0;
L14:;
si0=1U;
goto L0;
L13:;
si0=11U;
goto L0;
L12:;
si0=7U;
goto L0;
L11:;
si0=6U;
goto L0;
L10:;
si0=9U;
goto L0;
L9:;
si0=8U;
goto L0;
L8:;
si0=0U;
goto L0;
L7:;
si0=35U;
goto L0;
L6:;
si0=20U;
goto L0;
L5:;
si0=22U;
goto L0;
L4:;
si0=12U;
goto L0;
L3:;
si0=13U;
goto L0;
L2:;
si0=36U;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f14992(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
L1:;
{
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=0ULL;
l6=sj0;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
si0=!(sj0);
l3=si0;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+28U);
l7=si2;
sj3=l8;
si4=l1;
sj4=i64_load(&i->m0,(U64)si4+8U);
l5=sj4;
si5=l3;
sj3=si5?sj3:sj4;
l8=sj3;
si4=l2;
si5=12U;
si4+=si5;
si0=wasi_snapshot_preview1__fd_readdir(i,si0,si1,si2,sj3,si4);
l3=si0;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=0U;
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
if(si0){
goto L11;
}
sj0=0ULL;
l6=sj0;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L12:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
sj0=l8;
l5=sj0;
L11:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=l4;
si0-=si1;
l9=si0;
si1=24U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si1=-24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l10=si1;
si2=l4;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1+16U);
l11=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=24U;
si0+=si1;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
si2=l11;
si1+=si2;
si2=24U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L18;
default:
goto L17;
}
L18:;
sj0=l5;
l8=sj0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=11822U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L15;
L17:;
si0=l11;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
f53(i);
UNREACHABLE;
L16:;
sj0=l5;
l8=sj0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si0=f15269(i,si0);
l3=si0;
if(si0){
goto L13;
}
si0=1U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=1U;
l3=si0;
L13:;
si0=l3;
si1=l7;
si2=l11;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
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
si1=16U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L19:;
UNREACHABLE;
L10:;
si0=l0;
si1=44U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
L9:;
sj0=1ULL;
l6=sj0;
L8:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=l4;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=l7;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l1;
si1=20U;
si0+=si1;
si1=l7;
si2=l3;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
goto L22;
L23:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l10;
si1=l7;
si0+=si1;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
si0=l7;
si1=l3;
si0+=si1;
l7=si0;
L21:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
L20:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
goto L2;
L24:;
si0=1991332U;
si1=39U;
si2=1991372U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L3;
}
si0=l7;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1991388U;
si1=47U;
si2=1991436U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l3;
si2=1991316U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l7;
si2=1991316U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1991332U;
si1=39U;
si2=1991452U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
l4=si0;
sj0=l5;
l8=sj0;
goto L1;
}
L0:;
}

void f14993(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
goto L3;
L4:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
l6=si0;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l6;
if(si0){
goto L8;
}
si0=l2;
l1=si0;
goto L5;
L8:;
si0=l5;
si1=l2;
si2=1U;
f14923(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0+=si1;
si1=47U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L6:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L5:;
si0=l2;
si1=l1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l5;
si1=l1;
si2=l4;
f14923(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L9:;
si0=l7;
si1=l1;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14994(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l3;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
sj1=l4;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
f756(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si2=l3;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_create_directory(i,si0,si1,si2);
l2=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l2;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15271(i,si0);
goto L4;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14995(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=47U;
si1=si1 == si2;
l4=si1;
i32_store8(&i->m0,(U64)si0+38U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+134U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f14996(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
{
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14996(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l6=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=-6U;
si0+=si1;
si1=255U;
si0&=si1;
l7=si0;
si1=1U;
si0+=si1;
si1=0U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=0U;
si2=l6;
si3=-6U;
si2+=si3;
si3=255U;
si2&=si3;
l7=si2;
si3=1U;
si2+=si3;
si3=l7;
si4=3U;
si3=si3 > si4;
si1=si3?si1:si2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l12=si0;
si0=l8;
switch(si0){
case 0:
goto L9;
case 1:
goto L6;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L8;
default:
goto L6;
}
L9:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l15=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
l8=si0;
si0=l5;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L7;
case 3:
goto L12;
case 4:
goto L11;
case 5:
goto L10;
default:
goto L14;
}
L14:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L13:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l7;
si1=l13;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l15;
si1=l14;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L12:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L11:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l7;
si1=l13;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l15;
si1=l14;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L10:;
si0=l8;
si1=255U;
si0&=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L8:;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
si1=l10;
si2=l11;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L6;
L7:;
si0=l8;
si1=255U;
si0&=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f14996(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14996(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=10U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f14994(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l5;
switch(si0){
case 0:
goto L20;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l7=si0;
goto L16;
L19:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l7=si0;
goto L16;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
goto L16;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l7=si0;
L16:;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
f14997(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
if(si0){
goto L27;
}
si0=260U;
si1=4U;
si2=l3;
si3=128U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l6=si0;
goto L26;
L27:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+108U);
l16=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
sj0=l16;
si0=(U32)(sj0);
l7=si0;
L26:;
si0=l7;
si1=255U;
si0&=si1;
l11=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l11;
si1=3U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
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
goto L28;
}
si0=l7;
f15271(i,si0);
L28:;
si0=l6;
f15271(i,si0);
goto L23;
L25:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l6;
f15271(i,si0);
L30:;
si0=l5;
f15271(i,si0);
L29:;
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+134U,si1);
si0=l3;
si1=6U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=512U;
i32_store16(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
f14996(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l5;
si1=-6U;
si0+=si1;
si1=255U;
si0&=si1;
l5=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
f14998(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L21;
}
L31:;
si0=l0;
si1=1987176U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L24:;
si0=l7;
si1=65280U;
si0&=si1;
if(si0){
goto L22;
}
L23:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L22:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l6;
f15271(i,si0);
L32:;
si0=l5;
f15271(i,si0);
goto L1;
L21:;
si0=l3;
si1=104U;
si0+=si1;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+4U);
f14995(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l1;
si2=l2;
f14994(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+104U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L34:;
si0=l1;
si1=l2;
si0=f14999(i,si0,si1);
if(si0){
goto L35;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L35:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
f14934(i,si0,si1);
goto L1;
L33:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+105U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14996(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=255U;
si0&=si1;
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=0U;
si1=l1;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
l6=si2;
si3=6U;
si2=si2 == si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
si1=-1U;
si2=l3;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=5U;
si0|=si1;
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
l11=si0;
si0=l3;
if(si0){
goto L12;
}
si0=l1;
si1=29U;
si0+=si1;
l12=si0;
si0=l9;
si1=-1U;
si0=si0 == si1;
l13=si0;
L13:;
{
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L14;
case 2:
goto L15;
default:
goto L8;
}
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l13;
if(si0){
goto L17;
}
si0=0U;
l3=si0;
si0=0U;
l14=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
L17:;
si0=l1;
si0=f15037(i,si0);
l14=si0;
si0=l11;
l3=si0;
L16:;
si0=0U;
l4=si0;
si0=l7;
if(si0){
goto L18;
}
si0=6U;
l4=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L19;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L21;
case 4:
goto L22;
case 5:
goto L23;
default:
goto L19;
}
L23:;
si0=2U;
l4=si0;
goto L18;
L22:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l4=si0;
goto L18;
L21:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l4=si0;
goto L18;
L20:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
goto L18;
L19:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
l4=si0;
L18:;
si0=l5;
si1=l14;
si2=l3;
si3=255U;
si2&=si3;
si1+=si2;
si2=l4;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=1U;
l4=si0;
si0=l12;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L13;
L24:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f15038(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l10;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si0-=si1;
l14=si0;
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=2U;
l4=si0;
goto L13;
L14:;
si0=l12;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L26;
}
si0=0U;
l4=si0;
si0=l6;
switch(si0){
case 0:
goto L13;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L13;
case 6:
goto L25;
default:
goto L7;
}
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L11;
L25:;
si0=l1;
si0=f15037(i,si0);
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L6;
L12:;
si0=l9;
si1=255U;
si0&=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l9;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l7;
if(si0){
goto L27;
}
L28:;
si0=l11;
si1=255U;
si0&=si1;
l11=si0;
si0=l1;
si1=29U;
si0+=si1;
l12=si0;
si0=l9;
si1=-1U;
si0=si0 == si1;
l9=si0;
L29:;
{
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L31;
case 2:
goto L32;
default:
goto L8;
}
L32:;
si0=l9;
if(si0){
goto L34;
}
si0=0U;
l4=si0;
si0=l7;
if(si0){
goto L33;
}
L34:;
si0=l1;
si0=f15037(i,si0);
l4=si0;
L33:;
si0=l5;
si1=l4;
si2=l11;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=1U;
l4=si0;
si0=l12;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L30;
L35:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f15038(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l10;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si0-=si1;
l14=si0;
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=2U;
l4=si0;
si0=l14;
l5=si0;
goto L30;
L31:;
si0=l12;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L11;
}
si0=0U;
l4=si0;
si0=l6;
switch(si0){
case 0:
goto L30;
case 1:
goto L30;
case 2:
goto L30;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L30;
case 6:
goto L36;
default:
goto L7;
}
L36:;
si0=l1;
si0=f15037(i,si0);
if(si0){
goto L6;
}
L30:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L29;
}
goto L9;
}
L27:;
si0=l11;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=29U;
si0+=si1;
l14=si0;
si0=l5;
l11=si0;
L37:;
{
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l4;
switch(si0){
case 0:
goto L8;
case 1:
goto L39;
default:
goto L8;
}
L39:;
si0=l1;
si1=29U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L11;
L38:;
si0=l11;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f15038(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l10;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l4;
si0-=si1;
l5=si0;
si0=l11;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l5;
l14=si0;
si0=l11;
l5=si0;
goto L5;
L42:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=2U;
l4=si0;
si0=l5;
l11=si0;
goto L40;
L41:;
si0=1U;
l4=si0;
si0=l14;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
L40:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L37;
}
goto L9;
}
L11:;
si0=l5;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L43;
}
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L43:;
si0=l4;
si1=0U;
si2=1989272U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l1;
si1=29U;
si0+=si1;
l14=si0;
si0=l5;
l11=si0;
L44:;
{
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L46;
case 2:
goto L47;
default:
goto L8;
}
L47:;
si0=l11;
if(si0){
goto L48;
}
si0=1U;
l4=si0;
si0=l14;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
goto L45;
L48:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f15038(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=l10;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l4;
si0-=si1;
l5=si0;
si0=l11;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l5;
l14=si0;
si0=l11;
l5=si0;
goto L5;
L49:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l4=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=2U;
l4=si0;
si0=l5;
l11=si0;
goto L45;
L46:;
si0=0U;
l4=si0;
si0=l14;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
switch(si0){
case 0:
goto L45;
case 1:
goto L45;
case 2:
goto L45;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L45;
case 6:
goto L50;
default:
goto L7;
}
L50:;
si0=l1;
si0=f15037(i,si0);
if(si0){
goto L6;
}
L45:;
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L44;
}
}
L9:;
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l6;
si1=6U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L52;
case 1:
goto L53;
case 2:
goto L51;
case 3:
goto L55;
case 4:
goto L54;
case 5:
goto L51;
default:
goto L52;
}
L55:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
si0=!(si0);
if(si0){
goto L2;
}
goto L51;
L54:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
si0=!(si0);
if(si0){
goto L2;
}
goto L51;
L53:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l4;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
if(si0){
goto L51;
}
goto L2;
L52:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0+=si1;
si0=!(si0);
if(si0){
goto L2;
}
L51:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=29U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=l1;
si2=9U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1U,sj1);
si0=l0;
si1=9U;
si0+=si1;
si1=l1;
si2=17U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l5;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l14;
si1=l5;
si2=1989288U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1U,sj1);
si0=l0;
si1=9U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=17U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=23U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si1=0U;
si2=1989256U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=29U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14997(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=464U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=384U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+384U);
if(si0){
goto L3;
}
si0=l1;
si1=400U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+388U);
si2=l1;
si3=392U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+404U,sj1);
goto L1;
L2:;
si0=l3;
si1=400U;
si0+=si1;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+404U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
sj1=l4;
si1=(U32)(sj1);
l2=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+412U);
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si2=l5;
si3=l3;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
l1=si0;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=456U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=448U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=440U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=432U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=424U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=416U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=408U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
l12=sj1;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=52U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L9:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L6;
L8:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L4;
L7:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1989068U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L5:;
sj0=l4;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l3;
si1=464U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14998(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=47U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=17U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si2=9U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
L1:;
si0=l2;
si1=9U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=17U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=47U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+30U);
l6=si1;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+29U);
l7=si1;
i32_store8(&i->m0,(U64)si0+29U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
l8=si1;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L5;
}
L7:;
{
si0=0U;
l1=si0;
L9:;
{
si0=l4;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=1U;
l9=si0;
goto L8;
L10:;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=0U;
l9=si0;
si0=l3;
l1=si0;
L8:;
si0=l1;
switch(si0){
case 0:
goto L11;
case 1:
goto L12;
default:
goto L4;
}
L12:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L4;
}
L11:;
si0=l3;
si1=l1;
si2=l9;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si0+=si1;
l4=si0;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
if(si0){
goto L7;
}
}
si0=0U;
l3=si0;
goto L4;
L6:;
si0=l1;
si1=l3;
si2=1989224U;
f662(i,si0,si1,si2);
UNREACHABLE;
L5:;
L13:;
{
si0=0U;
l1=si0;
L15:;
{
si0=l4;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=1U;
l9=si0;
goto L14;
L16:;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
si0=0U;
l9=si0;
si0=l3;
l1=si0;
L14:;
si0=l1;
if(si0){
goto L4;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l3;
si1=l9;
si0-=si1;
l3=si0;
if(si0){
goto L13;
}
}
si0=0U;
l3=si0;
L4:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l7;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
l1=si0;
goto L18;
L19:;
si0=l8;
si1=1U;
si0=si0 != si1;
si1=-1U;
si2=l8;
si0=si2?si0:si1;
l1=si0;
si0=l8;
if(si0){
goto L21;
}
si0=l5;
si1=6U;
si0=si0 == si1;
l9=si0;
if(si0){
goto L20;
}
si0=16U;
si1=l2;
si2=24U;
si1+=si2;
si2=l9;
si0=si2?si0:si1;
l10=si0;
si0=8U;
si1=l2;
si2=16U;
si1+=si2;
si2=l9;
si0=si2?si0:si1;
l11=si0;
si0=l1;
si1=255U;
si0&=si1;
l12=si0;
si0=l1;
si1=-1U;
si0=si0 == si1;
l7=si0;
L22:;
{
si0=l7;
if(si0){
goto L24;
}
si0=0U;
l9=si0;
si0=0U;
l8=si0;
si0=l12;
if(si0){
goto L23;
}
L24:;
si0=l2;
si0=f15037(i,si0);
l8=si0;
si0=l6;
l9=si0;
L23:;
si0=6U;
l1=si0;
si0=l5;
switch(si0){
case 0:
goto L26;
case 1:
goto L27;
case 2:
goto L25;
case 3:
goto L28;
case 4:
goto L29;
case 5:
goto L30;
default:
goto L26;
}
L30:;
si0=2U;
l1=si0;
goto L25;
L29:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l1;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l1=si0;
goto L25;
L28:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l1=si0;
goto L25;
L27:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l1;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
goto L25;
L26:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l1=si0;
L25:;
si0=l3;
si1=l8;
si2=l9;
si1+=si2;
si2=l1;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l3;
l1=si0;
goto L18;
L31:;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l3;
l1=si0;
goto L18;
L32:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
goto L22;
}
L21:;
si0=l1;
si1=255U;
si0&=si1;
l9=si0;
si0=l1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l9;
if(si0){
goto L33;
}
L34:;
si0=l1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l9;
if(si0){
goto L35;
}
L36:;
si0=l3;
si1=l2;
si1=f15037(i,si1);
si2=l6;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l3;
l1=si0;
goto L18;
L37:;
L38:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l3;
l1=si0;
goto L18;
L39:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
si1=l2;
si1=f15037(i,si1);
si2=l6;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L38;
}
goto L18;
}
L35:;
si0=l3;
si1=l6;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l3;
l1=si0;
goto L18;
L40:;
L41:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l3;
l1=si0;
goto L18;
L42:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L18;
}
goto L41;
}
L33:;
si0=0U;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
L43:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l3;
l1=si0;
goto L18;
L44:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l6=si1;
si0-=si1;
l9=si0;
si0=l3;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l9;
l1=si0;
goto L17;
L45:;
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
l3=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L18;
}
goto L43;
}
L20:;
si0=l1;
si1=255U;
si0&=si1;
l9=si0;
si0=l1;
si1=-1U;
si0=si0 == si1;
l1=si0;
if(si0){
goto L47;
}
si0=l9;
if(si0){
goto L46;
}
L47:;
si0=l1;
if(si0){
goto L49;
}
si0=l9;
if(si0){
goto L48;
}
L49:;
si0=l3;
si1=l2;
si1=f15037(i,si1);
si2=l6;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l3;
l1=si0;
goto L18;
L50:;
L51:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l3;
l1=si0;
goto L18;
L52:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
si1=l2;
si1=f15037(i,si1);
si2=l6;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L51;
}
goto L18;
}
L48:;
si0=l3;
si1=l6;
si0=si0 > si1;
if(si0){
goto L53;
}
si0=l3;
l1=si0;
goto L18;
L53:;
L54:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l3;
l1=si0;
goto L18;
L55:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l9=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
l3=si0;
si0=l1;
si1=l6;
si0=si0 > si1;
if(si0){
goto L54;
}
goto L18;
}
L46:;
si0=0U;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
L56:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
f15038(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=10U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l3;
l1=si0;
goto L18;
L57:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+32U);
l6=si1;
si0-=si1;
l9=si0;
si0=l3;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l9;
l1=si0;
goto L17;
L58:;
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
l3=si0;
si0=l9;
if(si0){
goto L56;
}
}
L18:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L17:;
si0=l1;
si1=l3;
si2=1989240U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f14999(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f14997(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=260U;
si1=4U;
si2=l2;
si3=32U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+12U);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
sj0=l4;
si0=(U32)(sj0);
l1=si0;
L1:;
si0=l1;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
goto L4;
}
si0=l5;
f15271(i,si0);
L4:;
si0=l3;
f15271(i,si0);
L3:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=4U;
si0=si0 == si1;
si1=l1;
si2=65280U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0&=si1;
L0:;
return si0;
}

void f15000(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
L6:;
{
si0=l2;
si1=l3;
si2=l5;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
si2=l5;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
si1=l2;
si2=1U;
si3=l2;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l8=si0;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
goto L10;
L11:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l6;
l9=si0;
si0=l8;
si1=65535U;
si0&=si1;
l8=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L9;
}
L10:;
si0=l9;
if(si0){
goto L8;
}
si0=l0;
si1=1987272U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L9:;
si0=l8;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L8:;
si0=l9;
si1=l5;
si0+=si1;
l5=si0;
L7:;
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l7;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L12:;
si0=l5;
si1=l3;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si2=l5;
si1+=si2;
si2=l3;
si3=l5;
si2-=si3;
l5=si2;
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l3;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f15001(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
f15000(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L2;
L3:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
si1=l4;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
sj0=4ULL;
l6=sj0;
goto L6;
L7:;
sj0=0ULL;
l6=sj0;
sj0=4ULL;
l7=sj0;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l5;
l3=si0;
sj0=l6;
l7=sj0;
L5:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15002(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
f15000(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L2;
L3:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
sj0=4ULL;
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
si1=l4;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L11;
}
si0=1988880U;
l5=si0;
sj0=2ULL;
l6=sj0;
goto L5;
L11:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L8;
L10:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=0ULL;
l6=sj0;
si0=l5;
si1=8U;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=4ULL;
l6=sj0;
goto L6;
L9:;
si0=l5;
si1=l3;
si2=1988892U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l3;
if(si0){
goto L7;
}
}
si0=1988880U;
l5=si0;
goto L5;
L6:;
L5:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15003(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15004(i,si0,si1);
L0:;
return si0;
}

U32 f15004(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
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
goto L6;
}
L6:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1988233U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1988235U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1988240U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=f14991(i,si1);
si2=255U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l1;
si1=1988256U;
si2=4U;
si3=l2;
si4=31U;
si3+=si4;
si4=1988260U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
f15006(i,si0,si1);
si0=l1;
si1=1988276U;
si2=7U;
si3=l2;
si4=32U;
si3+=si4;
si4=1988284U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L8;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L8:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L9:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L1;
L5:;
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1988300U;
si3=4U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=1988260U;
si0=f716(i,si0,si1,si2);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L11:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L13:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103467U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L12:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1988304U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=1988256U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=1988260U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1988276U;
si2=7U;
si3=l0;
si4=1988312U;
si0=f715(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L15;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L15:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L17;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1103462U;
si3=2U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L16:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1990672U;
si2=6U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=1988256U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=1988260U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
si1=1990678U;
si2=5U;
si3=l2;
si4=16U;
si3+=si4;
si4=1990684U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L18;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L18:;
si0=1U;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103462U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103461U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1102923U;
si3=1U;
si4=l3;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f15005(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l4=si0;
if(si0){
goto L1;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15006(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=1056U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l2;
si2=0U;
si3=1024U;
si1=f15392(i,si1,si2,si3);
l2=si1;
si2=1024U;
si0=f15398(i,si0,si1,si2);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=1024U;
si0+=si1;
si1=l2;
si2=l2;
si2=f15399(i,si2);
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1024U);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+1028U);
l3=si0;
si0=l2;
si1=1032U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L6;
}
si0=1U;
l4=si0;
goto L5;
L6:;
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
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l4;
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
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
si0=l2;
si1=1056U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+1028U);
i64_store(&i->m0,(U64)si0+1048U,sj1);
si0=1986890U;
si1=43U;
si2=l2;
si3=1048U;
si2+=si3;
si3=1991788U;
si4=1991836U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=1036U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+1028U,si1);
si0=l2;
si1=1991872U;
i32_store(&i->m0,(U64)si0+1024U,si1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l2;
si1=1024U;
si0+=si1;
si1=1991880U;
f683(i,si0,si1);
UNREACHABLE;
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

void f15007(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=l3;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f15008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l3;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=3U;
si0&=si1;
l5=si0;
si0=l3;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l2;
si1=28U;
si0+=si1;
l7=si0;
si0=0U;
l4=si0;
si0=l3;
si1=-4U;
si0&=si1;
l6=si0;
l8=si0;
L5:;
{
si0=l7;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l7;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l7;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L5;
}
}
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=4U;
si0+=si1;
l7=si0;
L7:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l1;
si1=l7;
si2=l4;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L8:;
si0=l2;
si1=l5;
si0+=si1;
l3=si0;
L9:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l1;
si1=l7;
si2=l5;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L1:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

U32 f15009(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f15010(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=l3;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f15011(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f15012(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972468U);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
default:
goto L1;
}
L5:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+2972468U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8192U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=8192ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+2972468U,si1);
L4:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1985880U;
si1=43U;
si2=1989364U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=8192U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1992436U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1989348U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15013(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=f15014(i);
si1=1U;
si0^=si1;
l3=si0;
L2:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=7U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f15014(rustpythonInstance*i) {
U32 si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972568U);
si0=!(si0);
L0:;
return si0;
}

void f15015(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=4U;
si1+=si2;
si2=10U;
si3=l2;
f15016(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si1+=si2;
si2=l1;
si3=l4;
si2-=si3;
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
l4=si0;
goto L2;
L3:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=1987224U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=2U;
l1=si0;
goto L4;
L5:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l1;
si2=1988632U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f15016(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
l5=si0;
si1=16843009U;
si0*=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=0U;
l12=si0;
L4:;
{
si0=l11;
si1=l10;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l9;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
si0+=si1;
si1=0U;
si2=l9;
si3=l7;
si2-=si3;
l13=si2;
si0=f15392(i,si0,si1,si2);
l14=si0;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l4;
si2=16U;
si1+=si2;
si2=1U;
si3=l4;
si4=28U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l10=si0;
si0=l2;
si1=65535U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
L10:;
{
si0=l4;
sj1=0ULL;
i64_store8(&i->m0,(U64)si0+15U,sj1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
si2=24U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+9U,si1);
si0=l4;
si1=l2;
si2=65535U;
si1&=si2;
l2=si1;
si2=8U;
si1>>=(si2&31);
sj1=(U64)(si1);
i64_store16(&i->m0,(U64)si0+13U,sj1);
si0=l2;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L11:;
si0=l14;
si1=0U;
si2=l13;
si0=f15392(i,si0,si1,si2);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l4;
si2=16U;
si1+=si2;
si2=1U;
si3=l4;
si4=28U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_read(i,si0,si1,si2,si3);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=65535U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L10;
}
L9:;
si0=l7;
si1=l9;
si2=1988364U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
l7=si0;
goto L6;
L7:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si2=l9;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
L6:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l11=si0;
L5:;
si0=l8;
si1=l11;
si0+=si1;
l14=si0;
si0=l10;
si1=l11;
si0-=si1;
l15=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l14;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l14;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=l14;
si0-=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
l2=si0;
L19:;
{
si0=l14;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l13;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
si0=l13;
si1=l15;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l15;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l13=si0;
L17:;
L20:;
{
si0=l14;
si1=l13;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L20;
}
}
L16:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L14;
}
L21:;
{
si0=l14;
si1=l13;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l13;
l2=si0;
goto L13;
L22:;
si0=l15;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L14;
}
L15:;
si0=l15;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l2=si0;
L23:;
{
si0=l14;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l15;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L23;
}
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l3;
si1=l2;
si2=l15;
f14923(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l14;
si2=l15;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l15;
si0+=si1;
l2=si0;
si0=0U;
l13=si0;
goto L12;
L13:;
si0=l2;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0+=si1;
l17=si0;
si0=l2;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l13=si1;
si0-=si1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l3;
si1=l13;
si2=l17;
f14923(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si0+=si1;
si1=l14;
si2=l17;
si0=f15390(i,si0,si1,si2);
si0=l13;
si1=l17;
si0+=si1;
l2=si0;
si0=1U;
l13=si0;
si0=l17;
l15=si0;
L12:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l15;
si2=l11;
si1+=si2;
l2=si1;
si2=l10;
si3=l2;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l11=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l15;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
if(si0){
goto L26;
}
si0=l15;
if(si0){
goto L4;
}
L26:;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1989032U;
f754(i,si0);
UNREACHABLE;
L1:;
si0=l17;
si1=l15;
si2=1989032U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f15017(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=2972472U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
f15018(i,si0);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=2972472U;
L0:;
return si0;
}

void f15018(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
default:
goto L1;
}
L5:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+2972504U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=1024U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+2972504U,si1);
L4:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1985880U;
si1=43U;
si2=1989364U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=1024U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1992436U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1989348U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f15019(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L1:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f15020(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=10U;
si2=l2;
si3=l3;
f753(i,si0,si1,si2,si3);
si0=l1;
si1=12U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
goto L6;
L7:;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
f15000(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0-=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l5;
si2=l2;
si3=l3;
f15001(i,si0,si1,si2,si3);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l6;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
f15000(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=1988380U;
si1=16U;
si2=l4;
si3=40U;
si2+=si3;
si3=1988396U;
si4=1988456U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l4;
si2=24U;
si1+=si2;
si2=1U;
si3=l4;
si4=36U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l7=si0;
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
goto L15;
L16:;
si0=l6;
l5=si0;
si0=l7;
si1=65535U;
si0&=si1;
l7=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L13;
}
L15:;
si0=l5;
if(si0){
goto L17;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L17:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l6;
si1=l5;
si0-=si1;
l6=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l2;
si1=l5;
si0+=si1;
l7=si0;
goto L18;
L20:;
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l5;
si0+=si1;
l7=si0;
si0=l3;
si1=l5;
si0-=si1;
l6=si0;
goto L18;
L19:;
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l8;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
si1=10U;
si2=l2;
si3=l5;
si2+=si3;
l7=si2;
si3=l8;
f753(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L21;
}
si0=l8;
l6=si0;
goto L18;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L9;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si2=20U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0+=si1;
si1=l7;
si2=l1;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si2-=si3;
l2=si2;
si3=l6;
si4=l2;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
l2=si2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l6;
si1=l3;
si2=1987340U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l5;
si1=l3;
si2=1987404U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=l3;
si2=1987356U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si1=l3;
si2=1987372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l6;
si1=l8;
si2=1987388U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15021(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
f15000(i,si0,si1);
si0=l0;
sj1=4ULL;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+8U);
si4=4U;
si3=si3 == si4;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
if(si0){
goto L6;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=7U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L2:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1988380U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1988396U;
si4=1988472U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f15022(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1988984U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=1988948U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
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
goto L5;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l2;
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
si0=l0;
f15271(i,si0);
L9:;
si0=l2;
f15271(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1991652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L1:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f15023(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L1:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f15024(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
si1=l4;
si2=1U;
si3=l4;
si4=28U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l2=si0;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
sj0=4ULL;
l6=sj0;
goto L8;
L9:;
sj0=0ULL;
l6=sj0;
si0=l2;
si1=65535U;
si0&=si1;
l2=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
L8:;
si0=l0;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L7:;
si0=1988380U;
si1=16U;
si2=l4;
si3=1988396U;
si4=1988504U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
L10:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1991652U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
f14942(i,si0,si1);
UNREACHABLE;
L1:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f15025(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l4=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1988960U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=1988948U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
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
goto L5;
}
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l2;
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
si0=l0;
f15271(i,si0);
L9:;
si0=l2;
f15271(i,si0);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1991652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L1:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f15026(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=4U;
l6=si0;
si0=l3;
if(si0){
goto L4;
}
goto L3;
L4:;
L5:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2U;
si1=l4;
si2=8U;
si1+=si2;
si2=1U;
si3=l4;
si4=20U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
if(si0){
goto L9;
}
si0=1988880U;
l1=si0;
si0=2U;
l6=si0;
goto L3;
L9:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
goto L6;
L8:;
si0=l1;
si1=65535U;
si0&=si1;
l1=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=l1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l1;
si1=l3;
si2=1988892U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
if(si0){
goto L5;
}
}
si0=1988880U;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1988380U;
si1=16U;
si2=l4;
si3=24U;
si2+=si3;
si3=1988396U;
si4=1988520U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f15027(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972441U);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972588U);
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972588U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972592U,si1);
goto L2;
L3:;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972592U);
l3=si0;
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972592U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=f15014(i);
l4=si0;
L4:;
si0=l1;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1988908U;
si2=l0;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L7:;
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
goto L8;
}
si0=l5;
f15271(i,si0);
L8:;
si0=l0;
f15271(i,si0);
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L9:;
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
goto L10;
}
si0=l5;
f15271(i,si0);
L10:;
si0=l0;
f15271(i,si0);
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=f15014(i);
if(si0){
goto L11;
}
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+9U,si1);
L11:;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972592U);
l0=si0;
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2972592U,si1);
si0=l0;
if(si0){
goto L12;
}
si0=1U;
l2=si0;
goto L2;
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f14962(i,si0);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L1:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f15028(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1988592U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=56U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2972472U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=56U;
si0+=si1;
f15018(i,si0);
L3:;
si0=l1;
si1=2972472U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si2=l1;
si3=56U;
si2+=si3;
f15022(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=1988560U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=298U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15029(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1988598U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si1=l0;
si2=16U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l0;
si2=8U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=56U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L2;
}
si0=l1;
si1=2972508U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=l1;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si2=l1;
si3=56U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=1988560U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=298U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=56U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}


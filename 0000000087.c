#include "w2c2_base.h"

#include "rustpython.h"

void f8730(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=24U;
si0*=si1;
l4=si0;
si0=l1;
si1=89478486U;
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
si2=24U;
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

void f8731(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f8732(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=134217728U;
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
si2=4U;
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
f8719(i,si0,si1,si2,si3);
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

void f8733(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=48U;
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

void f8734(rustpythonInstance*i,U32 l0,U32 l1) {
f53(i);
UNREACHABLE;
L0:;
}

void f8735(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=56U;
si0*=si1;
l4=si0;
si0=l1;
si1=38347923U;
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
si2=56U;
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

void f8736(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=24U;
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

void f8737(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=72U;
si0*=si1;
l4=si0;
si0=l1;
si1=29826162U;
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
si2=72U;
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

void f8738(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f8739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=6U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=33554432U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=6U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8741(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=5U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=67108864U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=5U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=40U;
si0*=si1;
l4=si0;
si0=l2;
si1=53687092U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=40U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=56U;
si0*=si1;
l4=si0;
si0=l2;
si1=38347923U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=56U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
l4=si0;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=l2;
si2=l1;
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
si1=1073741824U;
si0=si0 < si1;
l5=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=l4;
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
si1=l5;
si2=l6;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8749(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=20U;
si0*=si1;
l4=si0;
si0=l2;
si1=107374183U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=20U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8750(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=44U;
si0*=si1;
l4=si0;
si0=l2;
si1=48806447U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=44U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=24U;
si0*=si1;
l4=si0;
si0=l2;
si1=89478486U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=24U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=48U;
si0*=si1;
l4=si0;
si0=l2;
si1=44739243U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=48U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=80U;
si0*=si1;
l4=si0;
si0=l2;
si1=26843546U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=80U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=7U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=16777216U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=7U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=92U;
si0*=si1;
l4=si0;
si0=l2;
si1=23342214U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=92U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=36U;
si0*=si1;
l4=si0;
si0=l2;
si1=59652324U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=36U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8757(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=88U;
si0*=si1;
l4=si0;
si0=l2;
si1=24403224U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=88U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

void f8758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=96U;
si0*=si1;
l4=si0;
si0=l2;
si1=22369622U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=96U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f8719(i,si0,si1,si2,si3);
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

U32 f8759(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17366372U;
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
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=17366377U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=17366496U;
si0=f644(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17366372U;
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
si1=17366377U;
si2=4U;
si3=17365304U;
si4=17366384U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L1;
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1102482U;
si3=2U;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+24U);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l3=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L9:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f8760(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17366372U;
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
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=17366377U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=17366512U;
si0=f644(i,si0,si1,si2,si3,si4);
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17366372U;
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
si1=17366377U;
si2=4U;
si3=17365304U;
si4=17366384U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L6;
}
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L1;
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1102482U;
si3=2U;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+24U);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l3=si1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L7:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L9:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f8761(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
si1=l1;
si0=f14575(i,si0,si1);
L0:;
return si0;
}

U32 f8762(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f8763(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
si1=l2;
si2=-4U;
si1+=si2;
l5=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si2=-1U;
si1+=si2;
l5=si1;
si2=l6;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L10:;
{
si0=l5;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l5;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L10;
}
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
L9:;
si0=l2;
si1=l7;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=1114112U;
l6=si0;
si0=l2;
si1=l7;
si0-=si1;
l9=si0;
if(si0){
goto L11;
}
si0=0U;
l5=si0;
goto L4;
L11:;
si0=l4;
si1=l7;
si0+=si1;
l10=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=0U;
l11=si0;
si0=12U;
l3=si0;
si0=0U;
l5=si0;
L13:;
{
si0=l9;
si1=l5;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l9;
l5=si0;
goto L4;
L14:;
si0=l10;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=63U;
si0&=si1;
si1=l11;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
goto L15;
L16:;
si0=255U;
si1=l4;
si0>>=(si1&31);
si1=l8;
si0&=si1;
l11=si0;
L15:;
si0=l3;
si1=l4;
si0+=si1;
l3=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L13;
case 5:
goto L13;
case 6:
goto L13;
case 7:
goto L13;
case 8:
goto L13;
case 9:
goto L13;
case 10:
goto L13;
case 11:
goto L13;
case 12:
goto L17;
default:
goto L13;
}
L17:;
}
si0=l11;
l6=si0;
goto L4;
L12:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
goto L4;
L8:;
si0=l5;
si1=l2;
si2=17365784U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l5=si0;
goto L4;
L6:;
si0=l3;
si1=108U;
si2=17366180U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=l2;
si2=17365800U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
l3=si0;
si0=l5;
si1=l7;
si0+=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
l3=si0;
si0=l6;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=65533U;
l6=si0;
L1:;
si0=l3;
if(si0){
goto L18;
}
si0=l0;
si1=1114112U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L18:;
si0=l2;
si1=l3;
si0-=si1;
l5=si0;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
si2=l3;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L19:;
si0=l5;
si1=l2;
si2=17366680U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f8764(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f11345(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=5U;
si0+=si1;
l3=si0;
si1=262U;
si0=si0 < si1;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L7:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si0=f5991(i,si0,si1,si2);
l3=si0;
goto L4;
L5:;
si0=l3;
si1=l0;
si2=1308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1300U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L4:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l3;
si1=l5;
si2=17374084U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f8765(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=5U;
si0+=si1;
l3=si0;
si1=262U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=-1U;
si1=(U32)((I32)si1>(I32)si2);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si2=l1;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l6=si2;
si1^=si2;
si2=l6;
si1-=si2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
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
goto L3;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=28U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L6:;
si0=l2;
si1=l3;
si2=l5;
si0=f5991(i,si0,si1,si2);
l1=si0;
goto L4;
L5:;
si0=l3;
si1=l0;
si2=1308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1300U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L2;
}
L4:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l3;
si1=l1;
si2=17374084U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f8766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=176U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=!(si0);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
f5555(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L22;
default:
goto L21;
}
L22:;
si0=l5;
si1=164U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l5;
si1=17372768U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=1723U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l5;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si2=152U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L17;
}
si0=l4;
si1=l8;
si2=l5;
si3=80U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L20;
L21:;
si0=l7;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l7;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=4294967295ULL;
si1=sj1 > sj2;
si0|=si1;
if(si0){
goto L25;
}
sj0=l9;
si0=(U32)(sj0);
l8=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l8;
si1=37U;
si0=si0 < si1;
if(si0){
goto L24;
}
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=39U;
si0=f15022(i,si0);
l8=si0;
if(si0){
goto L23;
}
si0=1U;
si1=39U;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l7;
si1=l7;
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
si0=l7;
f5522(i,si0);
L26:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l2;
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
goto L17;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L29;
}
sj0=l9;
sj1=-7528524892399901228ULL;
sj0^=sj1;
sj1=l11;
sj2=3498177934775739267ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L28;
}
sj0=l9;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l11;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
f2071(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L12;
L29:;
si0=l5;
si1=80U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
f2071(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L11;
L28:;
si0=l5;
si1=152U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f12290(i,si0,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+156U);
si2=l5;
si3=160U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
f2071(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+152U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l8;
f1354(i,si0);
L30:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L11;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=49U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=48U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17367296U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367288U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367280U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367264U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367248U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=210453397553ULL;
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l5;
si2=152U;
si1+=si2;
si0=f11871(i,si0,si1);
l7=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
f5522(i,si0);
goto L10;
L23:;
si0=l8;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366958U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366951U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366943U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366935U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366927U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=167503724583ULL;
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si1=l10;
si2=l5;
si3=152U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l7;
f5522(i,si0);
L31:;
si0=l4;
l7=si0;
L20:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
f5522(i,si0);
L32:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l2;
f5522(i,si0);
L33:;
si0=l7;
l2=si0;
goto L5;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L18:;
si0=l3;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366919U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366914U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366906U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17366898U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+156U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si1=l7;
si2=l5;
si3=152U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=1U;
l6=si0;
goto L5;
L34:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+43U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
sj0=0ULL;
l9=sj0;
si0=1U;
l12=si0;
goto L4;
L17:;
f14795(i);
UNREACHABLE;
L16:;
si0=1U;
si1=49U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
l8=si0;
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
si0=!(sj0);
if(si0){
goto L5;
}
si0=l5;
si1=164U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l5;
si1=17372676U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=17365304U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=152U;
si0+=si1;
si1=17372708U;
f614(i,si0,si1);
UNREACHABLE;
L13:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l4;
f6030(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L38;
}
si0=l10;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L40;
}
si0=l10;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=0U;
l8=si0;
goto L39;
L40:;
si0=l10;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=8U;
l7=si0;
si0=0U;
l14=si0;
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=l15;
si0=!(si0);
if(si0){
goto L41;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l15;
l14=si0;
L41:;
si0=l7;
si1=l13;
si2=l14;
si0=f15143(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l9=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
si0=1U;
l8=si0;
L39:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l10;
f5522(i,si0);
L42:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+152U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=155U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+43U,si1);
goto L37;
L38:;
si0=2U;
l8=si0;
si0=l10;
l7=si0;
L37:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L36:;
f53(i);
UNREACHABLE;
L35:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l2;
f5522(i,si0);
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l8=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
si2=17314629U;
si3=35U;
si4=l2;
si5=l4;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L10;
}
si0=l5;
si1=132U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1985U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l5;
si1=17367232U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l5;
si2=148U;
si1+=si2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
si1=l5;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l5;
si1=l5;
si2=132U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=l5;
si2=152U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+148U);
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
goto L43;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+148U);
f5522(i,si0);
L43:;
si0=l5;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l4;
si1=l5;
si2=104U;
si1+=si2;
si0=f11875(i,si0,si1);
l7=si0;
goto L8;
L10:;
si0=2U;
l8=si0;
goto L8;
L9:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+97U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+43U,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l12=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+88U);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
f5522(i,si0);
L44:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l2;
f5522(i,si0);
L6:;
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=1U;
l8=si0;
si0=l7;
l2=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l5;
si1=68U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+43U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+65U,si1);
si0=l5;
si1=l12;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si3=48U;
si2+=si3;
si3=l4;
f8767(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
goto L1;
L3:;
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
goto L2;
}
si0=l3;
f5522(i,si0);
L2:;
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
goto L1;
}
si0=l1;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8767(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L8:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l12;
si1=l6;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=0U;
l11=si0;
si0=0U;
l10=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
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
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
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
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
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
si0=l4;
si1=12U;
si0+=si1;
si1=l12;
si2=0U;
si0=f5913(i,si0,si1,si2);
l10=si0;
L9:;
si0=l2;
si1=l1;
si2=l10;
si0=f5991(i,si0,si1,si2);
l10=si0;
goto L3;
L7:;
si0=l3;
si1=l4;
si2=8U;
si1+=si2;
si2=l6;
si0=f13201(i,si0,si1,si2);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l11=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15024(i,si0);
goto L3;
L6:;
si0=l5;
si1=1272U;
si2=1276U;
si3=1272U;
si4=l2;
sj4=i64_load(&i->m0,(U64)si4+8U);
l13=sj4;
si4=!(sj4);
si2=si4?si2:si3;
si3=l8;
si1=si3?si1:si2;
si2=1272U;
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+16U);
si1=si3?si1:si2;
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
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l13;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l7;
f15024(i,si0);
goto L4;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si0=f8764(i,si0,si1);
l10=si0;
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f5522(i,si0);
L3:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
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

U32 f8768(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
if(si0){
goto L2;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
sj0=l4;
si0=(U32)(sj0);
l5=si0;
goto L1;
L2:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f11345(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L1;
L3:;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
sj0=(U64)(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
si2=l2;
sj0=si2?sj0:sj1;
l4=sj0;
si0=(U32)(sj0);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
sj0=l8;
l10=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l9;
si2=-1U;
si1+=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
L10:;
si0=-1U;
si1=0U;
sj2=l10;
sj3=4294967296ULL;
si2=sj2 < sj3;
si0=si2?si0:si1;
l6=si0;
L9:;
si0=l6;
si1=l9;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
sj0=0ULL;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
l10=sj1;
sj2=l10;
sj3=l4;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
l10=sj0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
l9=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
sj0=0ULL;
l4=sj0;
si0=0U;
l0=si0;
si0=0U;
l5=si0;
L11:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l0=si0;
si0=l12;
l2=si0;
goto L12;
L13:;
si0=l9;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l4;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l7;
sj1=l4;
si1=(U32)(sj1);
l0=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l9;
si1=0U;
sj2=l4;
sj3=l10;
si2=sj2 != sj3;
l2=si2;
si0=si2?si0:si1;
l9=si0;
sj0=l4;
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
si0=l11;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=(U32)(sj0);
l2=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=1U;
l0=si0;
L12:;
si0=l2;
si1=l5;
si0|=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L11;
}
goto L4;
}
L8:;
si0=l6;
si1=l7;
si2=17365212U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1201623U;
si1=43U;
si2=1201788U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l7;
si2=1202556U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
sj0=l8;
si0=(U32)(sj0);
l7=si0;
sj0=0ULL;
l4=sj0;
si0=0U;
l0=si0;
si0=0U;
l5=si0;
L14:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l0=si0;
si0=l12;
l2=si0;
goto L15;
L16:;
si0=l9;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=0U;
sj2=l4;
sj3=l10;
si2=sj2 != sj3;
l0=si2;
si0=si2?si0:si1;
l9=si0;
sj0=l4;
si1=l0;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
si0=1U;
l0=si0;
si0=l7;
l2=si0;
L15:;
si0=l2;
si1=l5;
si0|=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
}
L4:;
si0=l5;
si1=0U;
si2=l5;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
l5=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f8769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
f11345(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
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
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367049U;
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
goto L1;
}
si0=l0;
si1=l2;
si2=l4;
si3=l3;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
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
si1=17367026U;
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
goto L1;
}
si0=l0;
si1=l2;
si2=l4;
si3=l3;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8771(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
l4=si0;
if(si0){
goto L3;
}
si0=l0;
sj1=l5;
si1=(U32)(sj1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l4=si0;
goto L2;
L3:;
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
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367016U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l1;
si3=l3;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8772(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
sj1=65535ULL;
si0=sj0 > sj1;
l4=si0;
if(si0){
goto L3;
}
si0=l0;
sj1=l5;
si1=(U32)(sj1);
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=0U;
l4=si0;
goto L2;
L3:;
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
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367042U;
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l1;
si3=l3;
si4=12U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=l4;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8773(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
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
si1=17370256U;
si2=3U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f8774(i,si0,si1);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
si1=17370324U;
si2=605U;
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
si1=24U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
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
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L2:;
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l4=si1;
si2=l5;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
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
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l5;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
si3=l5;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
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
l6=si0;
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
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L10:;
si0=l1;
si1=l4;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8774(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=1818322290U;
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
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17372436U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=17179869188ULL;
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
l5=si0;
si1=17374834U;
si2=4U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1734438249U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17372508U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=17374838U;
si2=4U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=9U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17374850U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17374842U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372292U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=17374842U;
si2=9U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
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
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17374858U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17374851U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372484U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=17374851U;
si2=11U;
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
L5:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=368U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5968383067144272154ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l4;
si1=232U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f8776(i,si0,si1);
goto L1;
L2:;
si0=l4;
si1=144U;
si0+=si1;
si1=l3;
si2=l2;
f13151(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=188U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=188U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=188U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=188U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=188U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+148U);
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+185U);
i32_store16(&i->m0,(U64)si0+229U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+228U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=232U;
si0+=si1;
si1=l4;
si2=188U;
si1+=si2;
si2=l3;
f8777(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
si1=2U;
i32_store8(&i->m0,(U64)si0+360U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+232U,si1);
L1:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+232U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+360U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l4;
si2=232U;
si1+=si2;
si2=4U;
si1|=si2;
si2=124U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=132U;
si0+=si1;
si1=l4;
si2=232U;
si1+=si2;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+361U);
i32_store(&i->m0,(U64)si0+137U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si1=232U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=136U;
si0=f15143(i,si0,si1,si2);
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=216U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=188U;
si0+=si1;
si1=l9;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L12:;
si0=l4;
si1=232U;
si0+=si1;
si1=l1;
si2=l5;
si0=f5979(i,si0,si1,si2);
l5=si0;
goto L8;
L9:;
si0=l3;
si1=l4;
si2=144U;
si1+=si2;
si2=l8;
si0=f13201(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
f5522(i,si0);
L13:;
si0=l4;
si1=8U;
si0+=si1;
f8709(i,si0);
L8:;
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
goto L6;
}
si0=l2;
f5522(i,si0);
goto L6;
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
f5522(i,si0);
L14:;
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
goto L6;
}
si0=l1;
f5522(i,si0);
L6:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=368U;
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

void f8776(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l27=0;
U32 l28=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L7;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=92U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l10=si0;
goto L8;
L9:;
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L11;
}
si0=1U;
l10=si0;
goto L10;
L11:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
L10:;
si0=l10;
si1=l4;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l9;
l8=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l11=si0;
si0=4U;
l12=si0;
si0=0U;
l4=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
if(si0){
goto L13;
}
si0=4U;
l14=si0;
goto L12;
L13:;
si0=l13;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l13;
si1=12U;
si0*=si1;
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=4U;
l14=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
l4=si0;
L12:;
si0=l14;
si1=l11;
si2=l4;
si0=f15143(i,si0,si1,si2);
l16=si0;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l19=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l20;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l20;
si1=4U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=4U;
l12=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l14;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
L15:;
si0=l20;
si1=4U;
si0<<=(si1&31);
l21=si0;
si0=0U;
l14=si0;
si0=l20;
l11=si0;
L16:;
{
si0=l21;
si1=l14;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l23=si0;
si0=l12;
si1=l14;
si0+=si1;
l15=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=12U;
si0+=si1;
si1=l23;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=8U;
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L16;
}
}
L14:;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L18;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=0U;
l15=si0;
goto L17;
L18:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
if(si0){
goto L20;
}
si0=1U;
l15=si0;
goto L19;
L20:;
si0=l14;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l14;
si0=f15022(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L2;
}
L19:;
si0=l15;
si1=l4;
si2=l14;
si0=f15143(i,si0,si1,si2);
si0=l14;
l27=si0;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l28=si0;
si0=4U;
l11=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L22;
}
si0=0U;
l1=si0;
goto L21;
L22:;
si0=l4;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0*=si1;
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L21;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l22;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l22;
l1=si0;
L21:;
si0=l11;
si1=l28;
si2=l1;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=104U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=108U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=92U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=84U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=76U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l21;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=132U;
si0+=si1;
si1=l27;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=124U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=116U;
si0+=si1;
si1=l24;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+140U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l19;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1+12U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=136U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
f14795(i);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=4U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l1;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l4;
si1=si3?si1:si2;
si2=l1;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l2;
f12869(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l7=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+29U);
i32_store16(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=47U;
si0+=si1;
si1=l3;
si2=31U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
if(si0){
goto L7;
}
si0=0U;
l11=si0;
goto L6;
L7:;
si0=l6;
if(si0){
goto L9;
}
si0=1U;
l11=si0;
goto L8;
L9:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l11;
si1=l4;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l6;
l5=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=4U;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=0U;
l15=si0;
goto L10;
L11:;
si0=l4;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0*=si1;
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
l15=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l16;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l16;
l15=si0;
L10:;
si0=l13;
si1=l12;
si2=l15;
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=76U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=84U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=92U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+132U,si1);
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+108U,si1);
goto L4;
L5:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
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
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
f15024(i,si0);
L13:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L4:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=256U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=120U;
si0+=si1;
si1=l1;
si2=l4;
f8777(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+248U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l5;
si2=164U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=148U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=140U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=120U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=180U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=188U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l5;
si2=196U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l5;
si2=204U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l5;
si2=212U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+124U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+172U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=244U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+236U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+249U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si2=252U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+3U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+224U);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+232U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+220U);
l11=si0;
si0=l9;
si1=12U;
si0*=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+216U);
l12=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
L6:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l12;
si1=l4;
si0+=si1;
l1=si0;
si0=l4;
si1=-12U;
si0+=si1;
l14=si0;
l4=si0;
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l12;
si1=l14;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=l13;
si3=l2;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l13;
si1=l2;
si0*=si1;
si1=l8;
si0+=si1;
l8=si0;
L4:;
si0=0U;
l13=si0;
si0=l12;
si1=0U;
si2=l3;
si3=l2;
si2-=si3;
l4=si2;
si3=l4;
si4=l3;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=3U;
si0&=si1;
l14=si0;
si0=l9;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=1U;
l1=si0;
goto L7;
L8:;
si0=l9;
si1=-4U;
si0&=si1;
l3=si0;
si0=0U;
l13=si0;
si0=1U;
l1=si0;
si0=l12;
l4=si0;
L9:;
{
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si3*=si4;
si2*=si3;
si1*=si2;
si0*=si1;
l1=si0;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l3;
si1=l13;
si2=4U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L7:;
si0=l14;
si0=!(si0);
if(si0){
goto L10;
}
si0=l12;
si1=l13;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
L11:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0*=si1;
l1=si0;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+129U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=132U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+3U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l1;
si2=l10;
si1*=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=92U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=84U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=76U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l0;
si1=124U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+128U,si1);
goto L2;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=17367732U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f8779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=52U;
si1+=si2;
si2=l1;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
case 4:
goto L2;
default:
goto L6;
}
L6:;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
goto L1;
L4:;
si0=l4;
si1=28U;
si0+=si1;
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=4U;
si0+=si1;
l6=si0;
si0=l4;
si1=24U;
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=28U;
si0+=si1;
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L1:;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si2=l6;
si3=l2;
si2+=si3;
si3=l7;
si4=l3;
f12872(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l2=si0;
goto L10;
L11:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
l2=si0;
goto L10;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L7;
}
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
goto L10;
}
si0=l1;
f5522(i,si0);
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L13;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
default:
goto L17;
}
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l1;
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
goto L13;
}
si0=l1;
f1354(i,si0);
goto L13;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=0U;
si2=l1;
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
goto L13;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L13;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=0U;
si2=l1;
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
goto L13;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L13;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l1;
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
goto L13;
}
si0=l1;
f1354(i,si0);
L13:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=l2;
si1=l8;
si2=17367644U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l5;
si2=17367644U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f8780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367545U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367540U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367532U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367524U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=480U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
goto L2;
L6:;
si0=l1;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l0;
si1=i32_load(&i->m0,(U64)si1+96U);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0&=si1;
si1=l1;
si0+=si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=18U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17367506U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367498U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367490U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l4;
si3=4U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
goto L2;
L7:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si1*=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si1+=si2;
si2=l2;
si3=l3;
si0=f8781(i,si0,si1,si2,si3);
l0=si0;
goto L1;
L5:;
si0=1U;
si1=29U;
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
L2:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f5522(i,si0);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f8781(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si1=l0;
si2=52U;
si1+=si2;
si2=l0;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=24U;
si0+=si1;
l6=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=l5;
si3=l4;
si4=28U;
si3+=si4;
si4=l3;
si0=f12871(i,si0,si1,si2,si3,si4);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f15024(i,si0);
goto L3;
L11:;
si0=1U;
l2=si0;
si0=l6;
si1=1U;
si2=0U;
si3=l4;
si4=28U;
si3+=si4;
si4=l3;
si0=f12871(i,si0,si1,si2,si3,si4);
l6=si0;
if(si0){
goto L3;
}
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
case 4:
goto L13;
default:
goto L17;
}
L17:;
si0=l4;
si1=8U;
si0+=si1;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
goto L12;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l6=si0;
goto L12;
L15:;
si0=l4;
si1=12U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L12;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l6=si0;
goto L12;
L13:;
si0=l4;
si1=12U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L12:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si0+=si1;
l3=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l8;
si1=l1;
si0+=si1;
si1=l2;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
f15024(i,si0);
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l7;
switch(si0){
case 0:
goto L19;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
default:
goto L23;
}
L23:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=8U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
si0=0U;
l0=si0;
goto L2;
L22:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
si0=0U;
l0=si0;
goto L2;
L21:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
si0=0U;
l0=si0;
goto L2;
L20:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=8U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L19;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L19:;
si0=0U;
l0=si0;
goto L2;
L9:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=l1;
si1=l3;
si2=17367556U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l6;
si2=17367556U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l5;
si2=17367572U;
f685(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=40U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=17367628U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=3432U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l0;
si2=116U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l3;
si1=l0;
si2=l4;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l6;
f5522(i,si0);
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L2;
case 1:
goto L27;
case 2:
goto L26;
case 3:
goto L25;
default:
goto L28;
}
L28:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
f1352(i,si0,si1);
goto L2;
L27:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L2;
L26:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L2;
L25:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
f1352(i,si0,si1);
L2:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f8782(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=l0;
si2=l1;
si3=l2;
si4=l4;
f8783(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l3;
si3=l4;
si0=f8781(i,si0,si1,si2,si3);
l2=si0;
goto L1;
L2:;
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
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f8783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=-1U;
si1=l1;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l3;
si1=si1 != si2;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367545U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367540U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367532U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367524U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=480U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=l1;
si3=l5;
si4=16U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L7:;
si0=l5;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=17367708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l0;
si1=l4;
si2=l3;
si3=l5;
si4=4U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L6:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
si2=l2;
si3=l3;
si4=l4;
f13221(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=1U;
l3=si0;
goto L1;
L4:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj4,sj5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=l1;
si2=l3;
f9428(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si0=0U;
l12=si0;
si0=l9;
if(si0){
goto L7;
}
si0=0U;
l13=si0;
si0=0U;
l9=si0;
goto L3;
L7:;
sj0=l10;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
si0=0U;
si1=l2;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l9;
si3=2147483647U;
si4=l9;
si5=2147483647U;
si4=si4 < si5;
si2=si4?si2:si3;
l3=si2;
si1&=si2;
si2=l2;
si1+=si2;
l2=si1;
si2=l3;
si3=l2;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l13=si0;
sj0=l10;
si0=(U32)(sj0);
l2=si0;
goto L5;
L8:;
si0=l9;
l13=si0;
sj0=l10;
si0=(U32)(sj0);
l3=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
si1=2147483647U;
si2=l3;
si3=1U;
si2+=si3;
l1=si2;
si3=l1;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l1=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l9;
si3=2147483647U;
si4=l9;
si5=2147483647U;
si4=si4 < si5;
si2=si4?si2:si3;
l3=si2;
si1&=si2;
si2=l1;
si1+=si2;
l1=si1;
si2=l3;
si3=l1;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l1;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l13=si0;
L9:;
si0=l2;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=2147483647U;
si1=l2;
si2=1U;
si1+=si2;
l3=si1;
si2=l3;
si3=l2;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l2=si0;
si0=l9;
si1=2147483647U;
si2=l9;
si3=2147483647U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
goto L5;
L6:;
si0=l2;
si1=l5;
si2=17367748U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=l2;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l3;
si1&=si2;
si2=l2;
si1+=si2;
l2=si1;
si2=l3;
si3=l2;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l9=si0;
L4:;
si0=l13;
si1=l9;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l13;
l9=si0;
goto L3;
L10:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l13;
si2=-1U;
si1^=si2;
si0+=si1;
si1=l11;
si2=l11;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l2=si2;
si1^=si2;
si2=l2;
si1-=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l12=si0;
L3:;
si0=l7;
si1=4U;
si0+=si1;
l14=si0;
si0=l5;
si1=12U;
si0*=si1;
l2=si0;
L13:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l2;
si0+=si1;
l3=si0;
si0=l2;
si1=-12U;
si0+=si1;
l1=si0;
l2=si0;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l6;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=l13;
si3=l8;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l9;
si3=-1U;
si2+=si3;
si3=l13;
sj4=l10;
sj5=0ULL;
si4=(U64)((I64)sj4<(I64)sj5);
si2=si4?si2:si3;
si3=l8;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L11:;
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si1*=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L1:;
si0=17379408U;
si1=25U;
si2=17385704U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f8785(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=1U;
si0+=si1;
l13=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l12;
si0=!(si0);
if(si0){
goto L13;
}
si0=l12;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l5;
if(si0){
goto L17;
}
si0=4U;
l8=si0;
goto L5;
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l8=si0;
if(si0){
goto L5;
}
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l12;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l5;
if(si0){
goto L14;
}
si0=4U;
l8=si0;
goto L10;
L15:;
f53(i);
UNREACHABLE;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l8=si0;
if(si0){
goto L10;
}
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L4;
L12:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
goto L9;
L11:;
si0=l5;
si1=l8;
si2=17367764U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
l14=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l4;
si0+=si1;
l9=si0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L18:;
{
si0=l9;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l5=si1;
si0+=si1;
l13=si0;
si1=l9;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+112U);
l4=si2;
si3=l5;
si2+=si3;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=l10;
si2=l2;
si3=l13;
si2+=si3;
si3=l4;
si4=l6;
f12872(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
l14=si0;
goto L19;
L20:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l14;
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
goto L2;
}
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
goto L19;
}
si0=l5;
f5522(i,si0);
L19:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l7;
si1=20U;
si0+=si1;
si1=l5;
f8723(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
L21:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l9;
si1=l11;
si0+=si1;
l9=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
}
L9:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l7;
si1=44U;
si0+=si1;
si1=l7;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=0U;
l9=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=32U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5931(i,si0,si1,si2);
l5=si0;
goto L1;
L8:;
si0=l14;
si0=!(si0);
if(si0){
goto L22;
}
L23:;
{
si0=l8;
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
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L24:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L23;
}
}
L22:;
si0=1U;
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L1;
L7:;
si0=l13;
si1=l5;
si2=17367780U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=l3;
si2=17367780U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
l9=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l4;
si0+=si1;
l14=si0;
L25:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l14;
si5=l13;
si6=l6;
f8785(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l9;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
si1=20U;
si0+=si1;
si1=l9;
f8723(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
L26:;
si0=l8;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l14;
si1=l11;
si0+=si1;
l14=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L25;
}
}
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l7;
si1=44U;
si0+=si1;
si1=l7;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=0U;
l9=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=32U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5931(i,si0,si1,si2);
l5=si0;
goto L1;
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
L28:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L29:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
L30:;
si0=1U;
l9=si0;
goto L1;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8786(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L11;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5968383067144272154ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
L30:;
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=l2;
f13151(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l4;
si2=60U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
sj1=l5;
si1=(U32)(sj1);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=152U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
L32:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l10;
if(si0){
goto L32;
}
}
L31:;
si0=l1;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=60U;
si0+=si1;
si1=l4;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l4;
si3=48U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si1=si3?si1:si2;
si2=l4;
si3=52U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f12869(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
l9=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l4;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
si1=23U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=23U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+81U);
i32_store16(&i->m0,(U64)si0+125U,si1);
si0=l4;
si1=l9;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+160U);
if(si0){
goto L20;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l1;
si2=108U;
si1+=si2;
si2=l1;
si3=112U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
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
default:
goto L26;
}
L29:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L28:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L27:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L26:;
si0=l4;
si1=68U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
goto L21;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=68U;
si0+=si1;
l2=si0;
goto L21;
L24:;
si0=l4;
si1=72U;
si0+=si1;
l2=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
goto L21;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si1=68U;
si0+=si1;
l2=si0;
goto L21;
L22:;
si0=l4;
si1=72U;
si0+=si1;
l2=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L21:;
si0=l7;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=80U;
si1+=si2;
si2=l9;
si3=l7;
si4=l3;
f8787(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
f8711(i,si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+20U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L16;
case 4:
goto L15;
default:
goto L19;
}
L20:;
si0=l4;
si1=256U;
i32_store16(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=l1;
si2=108U;
si1+=si2;
si2=l1;
si3=112U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+20U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l1;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=156U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l6;
si2=0U;
si3=l4;
si4=60U;
si3+=si4;
f13227(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+128U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+160U);
f8711(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+140U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+144U);
f8711(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15024(i,si0);
L33:;
si0=l4;
si1=16U;
si0+=si1;
f8708(i,si0);
goto L1;
L19:;
si0=l4;
si1=68U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
goto L14;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=68U;
si0+=si1;
l1=si0;
goto L14;
L17:;
si0=l4;
si1=72U;
si0+=si1;
l1=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L14;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=4U;
si0+=si1;
l7=si0;
si0=l4;
si1=68U;
si0+=si1;
l1=si0;
goto L14;
L15:;
si0=l4;
si1=72U;
si0+=si1;
l1=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L14:;
si0=l10;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
si2=l7;
si3=l10;
si4=l3;
f8787(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L34;
}
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
f8711(i,si0,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+175U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=0U;
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L37:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l7;
si1=l10;
si0=si0 != si1;
if(si0){
goto L37;
}
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=17372784U;
si3=13U;
si4=l4;
si5=60U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+156U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l8=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L35;
}
L36:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=175U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=17372784U;
si3=13U;
si4=l4;
si5=60U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+156U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+157U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+159U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L5;
L38:;
si0=l8;
if(si0){
goto L6;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l3;
si2=17372784U;
si3=13U;
si4=l4;
si5=60U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+156U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+157U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+159U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L5;
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+157U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+159U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l1=si0;
goto L5;
L34:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
f8711(i,si0,si1);
goto L4;
L13:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
goto L1;
L12:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l7;
si1=l2;
si2=17367796U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l10;
si1=l1;
si2=17367812U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
f8711(i,si0,si1);
goto L3;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l2=si0;
si0=2U;
l1=si0;
goto L5;
L6:;
si0=17402954U;
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+175U);
l7=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L41;
case 1:
goto L44;
case 2:
goto L40;
case 3:
goto L39;
case 4:
goto L43;
case 5:
goto L42;
default:
goto L41;
}
L44:;
si0=1U;
l7=si0;
si0=17403154U;
l2=si0;
goto L41;
L43:;
si0=2U;
l7=si0;
si0=17416680U;
l2=si0;
goto L41;
L42:;
si0=2U;
l7=si0;
si0=17416682U;
l2=si0;
L41:;
si0=2U;
l1=si0;
si0=l3;
si1=l9;
si2=l6;
si3=l2;
si4=l7;
si0=f11753(i,si0,si1,si2,si3,si4);
l2=si0;
goto L5;
L40:;
si0=1U;
si1=257U;
si2=l6;
si3=l9;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
goto L5;
L39:;
si0=257U;
si1=1U;
si2=l6;
si3=l9;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
L5:;
si0=l1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L47;
}
si0=l0;
si1=l2;
si2=l3;
f5571(i,si0,si1,si2);
goto L45;
L47:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L45;
L46:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L45:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
f5522(i,si0);
L4:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l9;
f5522(i,si0);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15024(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
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
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f5522(i,si0);
L48:;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l1;
f15024(i,si0);
L49:;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
f15024(i,si0);
L1:;
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f12872(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
l3=si0;
goto L2;
L3:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
l3=si0;
goto L2;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L1;
}
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
goto L2;
}
si0=l4;
f5522(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
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

void f8788(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
{
si0=l5;
si1=l4;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L3;
}
L6:;
si0=l8;
si1=l6;
si0*=si1;
l6=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=52U;
si1+=si2;
si2=l0;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
si2=l0;
f11350(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
goto L2;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L10;
case 4:
goto L9;
default:
goto L12;
}
L12:;
si0=l8;
l0=si0;
goto L8;
L11:;
si0=l8;
si1=1U;
si0+=si1;
l0=si0;
goto L8;
L10:;
si0=l8;
si1=4U;
si0+=si1;
l0=si0;
goto L8;
L9:;
si0=l4;
l0=si0;
si0=l7;
l4=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=l7;
si2=l4;
f8716(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l0;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l7;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
switch(si0){
case 0:
goto L1;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
default:
goto L17;
}
L17:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f1354(i,si0);
goto L1;
L16:;
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L1;
L15:;
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L1;
L14:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f1354(i,si0);
goto L1;
L3:;
si0=l2;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=l4;
si2=l3;
f8716(i,si0,si1,si2);
L18:;
si0=l0;
si1=96U;
si0+=si1;
l4=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=52U;
si1+=si2;
si2=l0;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L24;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
case 4:
goto L23;
default:
goto L24;
}
L24:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
si2=l2;
si3=32U;
si2+=si3;
f13222(i,si0,si1,si2);
goto L19;
L23:;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
si2=l2;
si3=32U;
si2+=si3;
f13222(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l4;
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
goto L19;
}
si0=l4;
f1354(i,si0);
goto L19;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
si2=l2;
si3=32U;
si2+=si3;
f13222(i,si0,si1,si2);
si0=l6;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L19;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L19;
L21:;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
si2=l2;
si3=32U;
si2+=si3;
f13222(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=0U;
si2=l4;
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
goto L19;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L19;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
si2=l2;
si3=32U;
si2+=si3;
f13222(i,si0,si1,si2);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l6;
f1354(i,si0);
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
switch(si0){
case 0:
goto L1;
case 1:
goto L27;
case 2:
goto L26;
case 3:
goto L25;
default:
goto L28;
}
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l4;
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
goto L1;
}
si0=l4;
f1354(i,si0);
goto L1;
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=0U;
si2=l4;
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
goto L1;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L1;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=0U;
si2=l4;
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
goto L1;
}
si0=l4;
si1=0U;
f1361(i,si0,si1);
goto L1;
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l4;
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
goto L1;
}
si0=l4;
f1354(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f8789(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l4=si0;
si0=l3;
si1=12U;
si0*=si1;
l3=si0;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l4;
si1=l3;
si0+=si1;
l6=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
L6:;
si0=l7;
si1=l5;
si0*=si1;
l5=si0;
si0=l3;
si1=-12U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=52U;
si1+=si2;
si2=l0;
si3=56U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l0;
f11350(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
f8788(i,si0,si1);
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
sj0=f2068(i,si0,si1,si2);
l8=sj0;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l5;
switch(si0){
case 0:
goto L11;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L10;
default:
goto L11;
}
L11:;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l3;
si2=l7;
sj0=f2068(i,si0,si1,si2);
l8=sj0;
goto L1;
L10:;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l7;
si2=l6;
sj0=f2068(i,si0,si1,si2);
l8=sj0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f1354(i,si0);
goto L1;
L9:;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
si2=l7;
sj0=f2068(i,si0,si1,si2);
l8=sj0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L1;
L8:;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l7;
si2=l6;
sj0=f2068(i,si0,si1,si2);
l8=sj0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L1;
L7:;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l3;
si2=4U;
si1+=si2;
si2=l7;
sj0=f2068(i,si0,si1,si2);
l8=sj0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f1354(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l8;
L0:;
return sj0;
}

void f8790(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l3;
f8788(i,si0,si1);
si0=l1;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L13;
}
si0=l3;
si1=39U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+31U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=35U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662524U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662528U);
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
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
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
l5=si0;
si0=!(si0);
if(si0){
goto L11;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
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
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L14:;
si0=l3;
si1=12U;
si0+=si1;
si1=l6;
si2=l5;
si0=f5949(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L16;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l7=si0;
goto L15;
L16:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L18;
}
si0=1U;
l7=si0;
goto L17;
L18:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
L17:;
si0=l7;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l6;
l11=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l12=si0;
si0=4U;
l4=si0;
si0=0U;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=12U;
si0*=si1;
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
l13=si0;
L19:;
si0=l4;
si1=l12;
si2=l13;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17638580U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L13:;
si0=l4;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si0=l5;
if(si0){
goto L20;
}
si0=4U;
l7=si0;
goto L8;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l7=si0;
if(si0){
goto L8;
}
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=17624512U;
si1=36U;
si2=17624564U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=4U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=l6;
si2=l5;
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l13;
si1=l4;
si2=-1U;
si1+=si2;
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si1=12U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-20U;
si0+=si1;
l5=si0;
L22:;
{
si0=l6;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si1*=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l1;
si1=128U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l10=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L24;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l1=si0;
goto L23;
L24:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L26;
}
si0=1U;
l1=si0;
goto L25;
L26:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
L25:;
si0=l1;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l6;
l11=si0;
L23:;
si0=l3;
si1=39U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+31U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=35U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+13U,sj1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662524U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662528U);
l7=si0;
si1=l7;
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
si0=0U;
l5=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
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
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
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
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L27:;
si0=l3;
si1=12U;
si0+=si1;
si1=l7;
si2=l5;
si0=f5949(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17638580U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L7:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l6;
si1=l4;
si2=17367876U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
f14795(i);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=17624512U;
si1=36U;
si2=17624564U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8791(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=3775906874357198593ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=7023080588516176058ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l4;
sj1=8080311700465507813ULL;
sj0^=sj1;
sj1=l5;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L13:;
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=17367026U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l6;
si2=l3;
si3=68U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L12:;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f5555(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L16;
case 1:
goto L17;
case 2:
goto L18;
default:
goto L16;
}
L18:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=17372768U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=24U;
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
goto L9;
}
si0=l1;
si1=l6;
si2=l3;
si3=68U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l8=si0;
L17:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l6=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
L20:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L21:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3775906874357198593ULL;
sj0^=sj1;
si1=l10;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7023080588516176058ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L21;
}
}
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l6=si0;
if(si0){
goto L10;
}
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l3;
si1=l8;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=5U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=17367026U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l6;
si2=l3;
si3=68U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l8;
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
si0=l8;
f5522(i,si0);
goto L2;
L15:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l6;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=68U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f8396(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
goto L7;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+76U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=44U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17367932U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367924U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367916U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367908U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367900U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367892U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=480U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=188978561068ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l7;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L6;
L11:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l6;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367957U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367952U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367936U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l7;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l8;
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
f14795(i);
UNREACHABLE;
L8:;
si0=1U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l8;
si1=l8;
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
si0=l8;
f5522(i,si0);
goto L2;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l8;
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
L4:;
si0=l8;
f5522(i,si0);
L3:;
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
goto L1;
L2:;
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
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8792(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
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
goto L1;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=49U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=48U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17367417U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367409U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367401U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367393U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367385U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367377U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17367369U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=210453397553ULL;
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
si1=2U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l1;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L10;
}
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l5=si0;
goto L9;
L10:;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L12;
}
si0=1U;
l5=si0;
goto L11;
L12:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L11:;
si0=l5;
si1=l2;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l4;
l9=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
l10=si0;
si0=4U;
l11=si0;
si0=0U;
l12=si0;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0*=si1;
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l13;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l13;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l13;
l12=si0;
L13:;
si0=l11;
si1=l10;
si2=l12;
si0=f15143(i,si0,si1,si2);
l11=si0;
si0=l1;
si1=108U;
si0+=si1;
si1=l1;
si2=112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+12U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17367968U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1U;
si1=49U;
f52(i,si0,si1);
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
si0=4U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8793(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=52U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+132U);
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=84U;
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
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f8794(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L5;
}
L5:;
si0=l5;
si1=l3;
si2=-1U;
si1+=si2;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
l3=si1;
si2=17376112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l3;
si2=17376088U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l5;
si1=68U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17368032U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=12U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+96U);
switch(si0){
case 0:
goto L6;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
default:
goto L10;
}
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
f1354(i,si0);
goto L6;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L6;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L6;
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+100U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
f1354(i,si0);
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
switch(si0){
case 0:
goto L11;
case 1:
goto L14;
case 2:
goto L13;
case 3:
goto L12;
default:
goto L15;
}
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
f1354(i,si0);
goto L11;
L14:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L11;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L11;
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
f1354(i,si0);
L11:;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l4;
si1=l3;
si2=l5;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l5;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
f8786(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
if(si0){
goto L16;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+49U);
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l5;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
f8786(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
if(si0){
goto L18;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+49U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l3=si0;
goto L17;
L18:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
L17:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8795(rustpythonInstance*i,U32 l0) {
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
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
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
si1=17370220U;
si2=10U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f8796(i,si0,si1);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=40U;
si0+=si1;
si1=17370929U;
si2=65U;
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
si1=40U;
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
si1=32U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l4=si1;
si2=l6;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
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
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l6;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=40U;
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
si1=24U;
si0+=si1;
si1=l4;
si2=l7;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
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
si0=i32_load(&i->m0,(U64)si0+164U);
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
si1=17370268U;
si2=15U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
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
l4=si0;
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
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l4;
si2=1320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=40U;
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
goto L14;
}
si0=l4;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L14:;
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l6;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
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
si0=l2;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L17:;
si0=l1;
si1=l2;
si2=384U;
si1+=si2;
si2=l7;
si3=l3;
f13785(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L18;
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
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8796(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=3U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17375636U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17375634U);
i32_store16(&i->m0,(U64)si0,si1);
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
si1=17372268U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=12884901891ULL;
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
l3=si0;
si1=17375634U;
si2=3U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=10U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17375645U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17375637U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372532U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=42949672970ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375637U;
si2=10U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=5U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17375651U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375647U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372244U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=21474836485ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375647U;
si2=5U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375655U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375652U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372604U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375652U;
si2=7U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=6U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17375663U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375659U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372460U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=25769803782ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375659U;
si2=6U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=10U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17375673U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17375665U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372556U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=42949672970ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375665U;
si2=10U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=8749489600778560882ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17372316U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375675U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375691U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17375683U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372412U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=51539607564ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375683U;
si2=12U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=6U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17375699U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375695U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372340U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=25769803782ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375695U;
si2=6U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17375709U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17375701U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=17372580U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=51539607564ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375701U;
si2=12U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
sj1=7312272889466942569ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17372364U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375713U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=1835623534U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17372388U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
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
si1=17375721U;
si2=4U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L13:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1U;
si1=10U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=10U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f8797(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L8;
}
si0=l1;
si1=l1;
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
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l7=si0;
si0=l1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l4;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=17372676U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=17365304U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=17372708U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si3=l7;
si4=664U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L8;
default:
goto L13;
}
L13:;
si0=1U;
l7=si0;
goto L10;
L12:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L15;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l9=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l10=sj0;
goto L14;
L15:;
si0=l4;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l7=si0;
if(si0){
goto L9;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l9=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
L14:;
si0=l4;
si1=72U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l8;
si2=l4;
si3=16U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L17;
}
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
f5522(i,si0);
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l7=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L16;
}
L19:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l11;
f7353(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l11;
f5522(i,si0);
L20:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
f5522(i,si0);
goto L7;
L17:;
si0=1U;
l7=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l8;
f5522(i,si0);
L16:;
si0=l11;
l8=si0;
L10:;
si0=1U;
l11=si0;
goto L6;
L9:;
si0=l4;
si1=l7;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=80U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=84U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=l3;
f8798(i,si0,si1,si2);
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l11=si0;
if(si0){
goto L5;
}
si0=1U;
l7=si0;
si0=0U;
l11=si0;
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
f5522(i,si0);
L21:;
si0=l11;
if(si0){
goto L4;
}
si0=l8;
l1=si0;
goto L1;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L24:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L24;
}
}
L23:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=0U;
l7=si0;
si0=0U;
l1=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L25:;
si0=l4;
si1=84U;
si0+=si1;
si1=l2;
si2=l1;
si0=f5916(i,si0,si1,si2);
l1=si0;
goto L1;
L22:;
si0=l3;
si1=l4;
si2=80U;
si1+=si2;
si2=l7;
si0=f13201(i,si0,si1,si2);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f5522(i,si0);
L26:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15024(i,si0);
goto L1;
L4:;
si0=l1;
si0=!(si0);
if(si0){
goto L27;
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
goto L27;
}
si0=l1;
f5522(i,si0);
L27:;
si0=l6;
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l6;
f5522(i,si0);
L28:;
si0=l5;
if(si0){
goto L29;
}
si0=l8;
l1=si0;
goto L1;
L29:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l8;
l1=si0;
goto L1;
L30:;
si0=l5;
f5522(i,si0);
si0=l8;
l1=si0;
goto L1;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8798(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
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
si0=!(sj0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l1;
si3=l5;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l4;
si6=l2;
f12895(i,si0,si1,si2,si3,si4,si5,si6);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
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
goto L24;
}
si0=l5;
f5522(i,si0);
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
l6=si0;
goto L2;
L23:;
si0=1U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=17368186U;
l8=si0;
si0=34U;
l6=si0;
si0=1U;
l9=si0;
goto L7;
L22:;
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=1U;
l7=si0;
si0=17368220U;
l8=si0;
si0=35U;
l6=si0;
si0=1U;
l9=si0;
goto L7;
L21:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=1U;
l8=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
L25:;
si0=l8;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
l9=si0;
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
goto L26;
}
si0=l2;
f5522(i,si0);
L26:;
si0=0U;
l7=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
l2=si0;
goto L10;
L20:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l1;
f5522(i,si0);
L27:;
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
goto L28;
}
si0=l5;
f5522(i,si0);
L28:;
si0=0U;
l7=si0;
si0=l4;
if(si0){
goto L29;
}
si0=17368186U;
l8=si0;
si0=34U;
l6=si0;
goto L8;
L29:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=17368186U;
l8=si0;
si0=34U;
l6=si0;
si0=l4;
l11=si0;
si0=0U;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L9;
L19:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L31;
}
sj0=l12;
sj1=8080311700465507813ULL;
sj0^=sj1;
sj1=l13;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=l3;
si1=l1;
si2=56U;
si1+=si2;
f11349(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=44U;
si0=f15022(i,si0);
l7=si0;
if(si0){
goto L33;
}
si0=1U;
si1=44U;
f52(i,si0,si1);
UNREACHABLE;
L34:;
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=1U;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si1=1U;
si0=f34(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
L36:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l2=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L13;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=14U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368134U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368128U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=60129542158ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=20U;
si1+=si2;
si0=f11875(i,si0,si1);
l2=si0;
goto L32;
L33:;
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17368182U);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368174U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368166U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368158U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368150U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368142U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=188978561068ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=20U;
si1+=si2;
si0=f11879(i,si0,si1);
l2=si0;
L32:;
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
goto L11;
}
si0=0U;
l8=si0;
goto L13;
L31:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=0U;
l9=si0;
si0=17368220U;
l8=si0;
si0=35U;
l6=si0;
si0=l1;
l11=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L7;
L30:;
si0=l3;
si1=20U;
si0+=si1;
si1=l2;
si2=l1;
f7353(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
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
goto L37;
}
si0=l1;
f5522(i,si0);
L37:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l7=si0;
goto L10;
L18:;
si0=l4;
si0=!(si0);
if(si0){
goto L38;
}
si0=17368255U;
l8=si0;
si0=32U;
l6=si0;
si0=1U;
l9=si0;
goto L7;
L38:;
si0=0U;
l6=si0;
si0=0U;
l2=si0;
si0=1U;
l8=si0;
goto L10;
L17:;
f53(i);
UNREACHABLE;
L16:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l1;
f5522(i,si0);
L12:;
si0=1U;
l7=si0;
si0=l8;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
l9=si0;
goto L6;
L9:;
si0=l5;
si0=!(si0);
l7=si0;
si0=l11;
f5522(i,si0);
L8:;
si0=0U;
l9=si0;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l8;
si2=l3;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l1;
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
si0=l1;
f5522(i,si0);
goto L3;
L5:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l5;
si1=0U;
si0=si0 != si1;
si1=l7;
si0&=si1;
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
si0=l4;
si1=0U;
si0=si0 != si1;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
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
goto L1;
}
si0=l4;
f5522(i,si0);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8799(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L9;
}
si0=1U;
l7=si0;
goto L8;
L9:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l7;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
goto L2;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=1U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=256ULL;
si0=sj0 < sj1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404241U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404236U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404228U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404220U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L10;
}
f14795(i);
UNREACHABLE;
L11:;
si0=l7;
sj1=l8;
i64_store8(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f5522(i,si0);
goto L2;
L10:;
si0=l3;
si1=l2;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
f15024(i,si0);
si0=l5;
si1=l5;
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
si0=l5;
f5522(i,si0);
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
f5522(i,si0);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
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
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l2;
f9238(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8800(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l1;
f7353(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
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
goto L7;
}
si0=l1;
f5522(i,si0);
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=256U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
f15024(i,si0);
goto L10;
L11:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
f5522(i,si0);
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=45U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L8;
}
si0=1U;
si1=45U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=256U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=256U;
l5=si0;
si0=l8;
si1=l7;
si2=256U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
f15024(i,si0);
goto L5;
L8:;
si0=l1;
si1=37U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368393U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368388U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368380U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368372U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368364U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368356U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=193273528365ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L4;
}
f14795(i);
UNREACHABLE;
L6:;
si0=0U;
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=256U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l1=si0;
L12:;
{
si0=l8;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=255U;
si0&=si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
l1=si0;
si0=l6;
si1=255U;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l8;
si1=l5;
si0+=si1;
si1=-1U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
L5:;
si0=l2;
if(si0){
goto L15;
}
si0=1U;
l1=si0;
si0=0U;
l7=si0;
si0=0U;
l6=si0;
goto L14;
L15:;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f7353(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
f5522(i,si0);
L16:;
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=256U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L13:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
f15024(i,si0);
goto L3;
L4:;
si0=l3;
si1=l7;
si2=l4;
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
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l2;
f5522(i,si0);
L3:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=3U;
l8=si0;
si0=0U;
l1=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l8;
l11=si0;
si0=l6;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=l9;
si2=!(si2);
si3=l10;
si4=0U;
si3=si3 != si4;
si2&=si3;
l12=si2;
si0=si2?si0:si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l1;
si1+=si2;
l1=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L7;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=1U;
l8=si0;
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l12;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=-3U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=5U;
si0+=si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l1;
si1+=si2;
l1=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=0U;
l11=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
si2=l3;
f8716(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
L11:;
si0=l8;
si1=l11;
si0+=si1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l11;
si2=l3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
f8715(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
L12:;
si0=l8;
si1=l11;
si0+=si1;
si1=40U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l11;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si0=f8895(i,si0,si1);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
f8715(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si0+=si1;
si1=41U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L9:;
si0=2U;
l8=si0;
si0=l7;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L14;
case 2:
goto L17;
case 3:
goto L17;
case 4:
goto L14;
case 5:
goto L17;
case 6:
goto L17;
case 7:
goto L17;
case 8:
goto L17;
case 9:
goto L17;
case 10:
goto L17;
case 11:
goto L17;
case 12:
goto L17;
case 13:
goto L17;
case 14:
goto L17;
case 15:
goto L17;
case 16:
goto L17;
case 17:
goto L17;
case 18:
goto L17;
case 19:
goto L17;
case 20:
goto L17;
case 21:
goto L17;
case 22:
goto L17;
case 23:
goto L17;
case 24:
goto L17;
case 25:
goto L15;
case 26:
goto L17;
case 27:
goto L17;
case 28:
goto L17;
case 29:
goto L17;
case 30:
goto L16;
default:
goto L18;
}
L18:;
si0=l12;
si1=92U;
si0=si0 == si1;
if(si0){
goto L14;
}
L17:;
si0=1U;
si1=4U;
si2=l12;
si3=-32U;
si2+=si3;
si3=255U;
si2&=si3;
si3=95U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
goto L14;
L16:;
si0=1U;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L14;
L15:;
si0=1U;
l8=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L14:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l8;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l8;
si1+=si2;
l8=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=38U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368425U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368417U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368409U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368401U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l8;
si2=l5;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=17368439U;
si1=43U;
si2=l5;
si3=47U;
si2+=si3;
si3=17365580U;
si4=17368504U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=3U;
l6=si0;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
si0=0U;
l8=si0;
L8:;
{
si0=l6;
l9=si0;
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=l8;
si2=l7;
si2=!(si2);
si3=l8;
si4=0U;
si3=si3 != si4;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l1;
si1+=si2;
l1=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L7;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=1U;
l9=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
si2=-3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si0=f8895(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L9:;
si0=2U;
l6=si0;
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L11;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L11;
case 5:
goto L14;
case 6:
goto L14;
case 7:
goto L14;
case 8:
goto L14;
case 9:
goto L14;
case 10:
goto L14;
case 11:
goto L14;
case 12:
goto L14;
case 13:
goto L14;
case 14:
goto L14;
case 15:
goto L14;
case 16:
goto L14;
case 17:
goto L14;
case 18:
goto L14;
case 19:
goto L14;
case 20:
goto L14;
case 21:
goto L14;
case 22:
goto L14;
case 23:
goto L14;
case 24:
goto L14;
case 25:
goto L12;
case 26:
goto L14;
case 27:
goto L14;
case 28:
goto L14;
case 29:
goto L14;
case 30:
goto L13;
default:
goto L15;
}
L15:;
si0=l10;
si1=92U;
si0=si0 == si1;
if(si0){
goto L11;
}
L14:;
si0=1U;
si1=4U;
si2=l10;
si3=-32U;
si2+=si3;
si3=255U;
si2&=si3;
si3=95U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
goto L11;
L13:;
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L11;
L12:;
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L11:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l6;
si1+=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 == si1;
if(si0){
goto L8;
}
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=38U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368431U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368425U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368417U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368409U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368401U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l6;
si2=l3;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=17368439U;
si1=43U;
si2=l3;
si3=47U;
si2+=si3;
si3=17365580U;
si4=17368520U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=1U;
si2=l5;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
f1324(i,si0,si1,si2,si3);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=l1;
si3=l3;
f1323(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15024(i,si0);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=256ULL;
si0=sj0 < sj1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=29U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404241U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404236U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404228U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17404220U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
si2=l4;
si3=8U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
sj0=l6;
si0=(U32)(sj0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l7=si0;
si0=l8;
si1=255U;
si0&=si1;
l10=si0;
si0=1U;
l1=si0;
L14:;
{
si0=l3;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l2;
si1=l9;
si2=-8U;
si1+=si2;
l11=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L7;
L13:;
si0=l9;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
goto L5;
L15:;
si0=1U;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l1=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l1=si0;
goto L5;
L16:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=2U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l1=si0;
goto L5;
L17:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=3U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l1=si0;
goto L5;
L18:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=4U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l1=si0;
goto L5;
L19:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=5U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=0U;
l1=si0;
goto L5;
L20:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l9;
si1=6U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
l1=si0;
goto L5;
L10:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l9;
si1=-8U;
si0+=si1;
l11=si0;
si0=0U;
l2=si0;
L7:;
si0=l8;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l1=si0;
L21:;
{
si0=l3;
si1=l2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L21;
}
}
L6:;
si0=0U;
l1=si0;
si0=l2;
si1=l9;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=255U;
si0&=si1;
l7=si0;
L22:;
{
si0=l3;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L5;
L23:;
si0=l9;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L5:;
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
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8804(rustpythonInstance*i,U32 l0) {
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
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l0=si0;
si0=0U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=0U;
l4=si0;
si0=1499U;
l5=si0;
si0=1499U;
l6=si0;
L8:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si2=1135012U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l3;
si1=si1 != si2;
si2=l5;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
L9:;
si0=l6;
si1=l4;
si0-=si1;
l5=si0;
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L8;
}
}
si0=0U;
l6=si0;
si0=l3;
l4=si0;
goto L5;
L7:;
si0=0U;
l6=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=1135016U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L5;
}
L11:;
si0=l4;
si1=4194303U;
si0&=si1;
l5=si0;
si0=l3;
l4=si0;
si0=l5;
si1=12U;
si0*=si1;
si1=1147004U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=4785083194015744ULL;
si0=sj0 == sj1;
l6=si0;
si0=l7;
l4=si0;
goto L5;
L6:;
si0=l0;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l3;
si0^=si1;
l4=si0;
si0=0U;
l6=si0;
L5:;
si0=l6;
if(si0){
goto L3;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=0U;
l0=si0;
si0=1407U;
l6=si0;
si0=1407U;
l4=si0;
L18:;
{
si0=-1U;
si1=l6;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=1123756U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l3;
si1=si1 != si2;
si2=l6;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
l4=si0;
goto L19;
L20:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l5;
si1=1U;
si0+=si1;
l0=si0;
L19:;
si0=l4;
si1=l0;
si0-=si1;
l6=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L18;
}
goto L13;
}
L17:;
si0=l0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l0=si0;
goto L15;
L16:;
si0=105U;
si1=105U;
si2=l5;
si3=3U;
si2<<=(si3&31);
si3=1123760U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=55296U;
si3^=si4;
si4=-1114112U;
si3+=si4;
si4=-1112064U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l0;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l0=si0;
L15:;
si0=l0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L13;
}
L14:;
si0=0U;
l4=si0;
si0=l7;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=l8;
si0=f738(i,si0);
if(si0){
goto L2;
}
goto L12;
L13:;
si0=0U;
l4=si0;
si0=l7;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=0U;
l5=si0;
si0=0U;
l4=si0;
si0=l8;
si0=f736(i,si0);
if(si0){
goto L2;
}
L12:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l0=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l0;
l3=si0;
si0=l5;
l4=si0;
goto L4;
L21:;
si0=l2;
si1=l1;
si0+=si1;
l9=si0;
si0=l2;
si1=2U;
si0+=si1;
l6=si0;
si0=l5;
l4=si0;
L22:;
{
si0=l6;
l1=si0;
si0=l4;
l10=si0;
si0=l0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l8=si0;
if(si0){
goto L24;
}
si0=0U;
l3=si0;
si0=1499U;
l6=si0;
si0=1499U;
l4=si0;
L26:;
{
si0=-1U;
si1=l6;
si2=1U;
si1>>=(si2&31);
si2=l3;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
l7=si1;
si2=1135012U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l0;
si1=si1 != si2;
si2=l6;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l5;
l4=si0;
goto L27;
L28:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si1=1U;
si0+=si1;
l3=si0;
L27:;
si0=l4;
si1=l3;
si0-=si1;
l6=si0;
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L26;
}
}
si0=1114113U;
l4=si0;
si0=l0;
l3=si0;
goto L23;
L25:;
si0=1114113U;
l4=si0;
si0=l7;
si1=1135016U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l3;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L23;
}
L29:;
si0=l3;
si1=4194303U;
si0&=si1;
l6=si0;
si0=l0;
l3=si0;
si0=l6;
si1=12U;
si0*=si1;
l6=si0;
si1=1147004U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l6;
si1=1147008U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
if(si0){
goto L30;
}
si0=1114112U;
si1=1114113U;
sj2=l11;
si2=(U32)(sj2);
si0=si2?si0:si1;
l4=si0;
L30:;
si0=l5;
l3=si0;
goto L23;
L24:;
si0=l0;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l0;
si0^=si1;
l3=si0;
si0=1114113U;
l4=si0;
L23:;
si0=l4;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l2=si0;
si0=l3;
si1=l0;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l8;
if(si0){
goto L36;
}
si0=0U;
l3=si0;
si0=1407U;
l6=si0;
si0=1407U;
l4=si0;
L37:;
{
si0=-1U;
si1=l6;
si2=1U;
si1>>=(si2&31);
si2=l3;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
l7=si1;
si2=1123756U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l0;
si1=si1 != si2;
si2=l6;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l5;
l4=si0;
goto L38;
L39:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l5;
si1=1U;
si0+=si1;
l3=si0;
L38:;
si0=l4;
si1=l3;
si0-=si1;
l6=si0;
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L37;
}
goto L32;
}
L36:;
si0=l0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l0;
si0|=si1;
l3=si0;
goto L34;
L35:;
si0=105U;
si1=105U;
si2=l7;
si3=1123760U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=55296U;
si3^=si4;
si4=-1114112U;
si3+=si4;
si4=-1112064U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L34:;
si0=l3;
si1=l0;
si0=si0 == si1;
if(si0){
goto L32;
}
L33:;
si0=l2;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=1U;
l4=si0;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
si0=1U;
l4=si0;
si0=l12;
si0=f738(i,si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l10;
si1=1U;
si0^=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
goto L0;
L40:;
si0=1U;
l4=si0;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L31;
}
si0=0U;
goto L0;
L32:;
si0=l2;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=0U;
goto L0;
L41:;
si0=0U;
l4=si0;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
si0=0U;
l4=si0;
si0=l12;
si0=f736(i,si0);
if(si0){
goto L2;
}
L31:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L4:;
si0=l0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si0=f738(i,si0);
si0=!(si0);
if(si0){
goto L2;
}
L42:;
si0=l4;
si1=1U;
si0^=si1;
goto L0;
L3:;
si0=17364924U;
si1=43U;
si2=17368536U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
L0:;
return si0;
}

void f8805(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L3;
L4:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l1;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=-1U;
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l1=si0;
si0=1U;
l3=si0;
L5:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=l3;
si0+=si1;
si1=l5;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
L3:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8806(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L4:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L5:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L9:;
si0=l5;
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L6;
L8:;
si0=l6;
si1=32U;
si0^=si1;
l6=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l6;
si1=32U;
si0|=si1;
l6=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L3:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f8807(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=1U;
l9=si0;
si0=1U;
si1=l6;
si2=l5;
si0=si2?si0:si1;
l5=si0;
if(si0){
goto L33;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l3;
si1=1U;
si0=f15026(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L29;
}
L35:;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l3;
f6995(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L34:;
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l3;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L31;
}
L36:;
si0=l8;
si1=l1;
si2=l2;
si3=l6;
si4=l3;
f6995(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l4;
si1=64U;
si2=68U;
si3=l3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369363U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369358U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369350U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si1=l6;
si2=l8;
si3=52U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
goto L37;
L38:;
si0=l4;
si1=56U;
si2=64U;
si3=l3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L39;
}
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L40;
}
si0=1U;
l11=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l2;
si2=l5;
si3=l2;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0=DIV_U(si0,si1);
l12=si0;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L25;
}
L41:;
si0=l2;
si1=l12;
si2=l5;
si1*=si2;
l3=si1;
si0-=si1;
l13=si0;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l13;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l8;
si1=40U;
si0+=si1;
si1=l1;
si2=l13;
si3=l11;
si4=l3;
f6995(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=0U;
l6=si0;
L42:;
{
si0=l6;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l11;
si1=l3;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
si0*=si1;
si1=l13;
si0+=si1;
l9=si0;
si1=l5;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l15;
si1=l2;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l3;
si1=l3;
si2=1U;
si1+=si2;
l16=si1;
si2=l14;
si1+=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l15;
si1=l7;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l6;
si1=l6;
si2=l12;
si1=si1 < si2;
si0+=si1;
l6=si0;
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l5;
si3=l11;
si4=l16;
si3+=si4;
si4=l14;
f6995(i,si0,si1,si2,si3,si4);
si0=l15;
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L42;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369188U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L40:;
si0=0U;
l6=si0;
si0=1U;
l11=si0;
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
si1=l2;
si2=0U;
si3=l5;
si2-=si3;
l5=si2;
si3=l2;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l15=si1;
si0=DIV_U(si0,si1);
l14=si0;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
if(si0){
goto L13;
}
goto L12;
L39:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=18U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17369348U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369340U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369332U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si1=l6;
si2=l8;
si3=52U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
L37:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L32:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L1;
default:
goto L15;
}
L31:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L30:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369092U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L29:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L28:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369092U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L26:;
f14795(i);
UNREACHABLE;
L25:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l13;
si1=l2;
si2=17369108U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l3;
si1=l7;
si2=17369124U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369204U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=l9;
si1=l15;
si2=17369156U;
f683(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l15;
si1=l2;
si2=17369156U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l16;
si1=l15;
si2=17369172U;
f683(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l15;
si1=l7;
si2=17369172U;
f597(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l3;
si1=l7;
si2=17369140U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
si1=l4;
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
L14:;
si0=l4;
si1=l4;
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
L13:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=1U;
si0=f34(i,si0,si1);
l11=si0;
if(si0){
goto L12;
}
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l15;
si1=l3;
si0=si0 <= si1;
l3=si0;
si0=l11;
si1=l15;
si2=1U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l16=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L47:;
{
si0=l5;
si1=l15;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l12;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
si2=l15;
si3=l11;
si4=l6;
si3+=si4;
si4=l12;
f6995(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l9;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l16;
si1=l6;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
si0*=si1;
l5=si0;
si0=l9;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=l14;
si0=si0 >= si1;
l9=si0;
si0=l3;
si1=l3;
si2=l14;
si1=si1 < si2;
si0+=si1;
l3=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L47;
}
}
L46:;
si0=l2;
si1=l14;
si2=l15;
si1*=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l6;
si1=l2;
si2=l3;
si1-=si2;
l5=si1;
si2=1U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si2=l5;
si3=l11;
si4=l6;
si3+=si4;
si4=l9;
f6995(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369236U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L45:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=17368439U;
si1=43U;
si2=l8;
si3=52U;
si2+=si3;
si3=17369076U;
si4=17369316U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L44:;
si0=l3;
si1=l2;
si2=17369252U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l9;
si1=l7;
si2=17369300U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
goto L2;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l5;
si1=l9;
si2=17369268U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
si1=l2;
si2=17369268U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si1=l9;
si2=17369284U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l7;
si2=17369284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=l2;
si2=17369220U;
f683(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l7;
si2=17369220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L1;
}
L2:;
si0=l4;
f5522(i,si0);
L1:;
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8808(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l2;
si1=1U;
si0>>=(si1&31);
l6=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L5:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l1;
si1=l2;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l2=si0;
L6:;
{
si0=l2;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l10;
si1=32U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l10;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l10;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l10;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L9;
L12:;
si0=l10;
si1=-87U;
si0+=si1;
l11=si0;
goto L10;
L11:;
si0=l10;
si1=-55U;
si0+=si1;
l11=si0;
L10:;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L9;
L13:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
si1=-48U;
si0+=si1;
l6=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l10;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l10;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L9;
L16:;
si0=l10;
si1=-55U;
si0+=si1;
l6=si0;
goto L14;
L15:;
si0=l10;
si1=-87U;
si0+=si1;
l6=si0;
L14:;
si0=l6;
si1=l11;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l8;
f8715(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L17:;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l5;
si1=l8;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L7;
L9:;
si0=l4;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17368612U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
goto L18;
}
si0=l3;
si1=l1;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
goto L1;
L18:;
f14795(i);
UNREACHABLE;
L8:;
si0=l9;
l2=si0;
si0=l6;
l1=si0;
L7:;
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8809(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=17368620U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
if(si0){
goto L6;
}
si0=32U;
l7=si0;
goto L5;
L6:;
si0=l3;
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
goto L3;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=-7528524892399901228ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=3498177934775739267ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L12;
}
sj0=l8;
sj1=-6879226489707195439ULL;
sj0^=sj1;
sj1=l9;
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L13:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
l10=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l7;
si1=16U;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l3;
si1=l10;
si2=l3;
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
goto L14;
}
L15:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L14:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L16:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
L17:;
si0=l10;
si1=1U;
si0=si0 == si1;
l10=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L9;
L11:;
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
goto L8;
}
si0=2U;
l10=si0;
si0=l3;
f5522(i,si0);
goto L9;
L10:;
si0=l3;
f5522(i,si0);
L9:;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
L8:;
si0=l6;
si1=64U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=17368340U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=12U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L18;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
default:
goto L22;
}
L22:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
f1354(i,si0);
goto L18;
L21:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L18;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L18;
L20:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L18;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L18;
L19:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
f1354(i,si0);
L18:;
si0=l6;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L3;
}
si0=l5;
si1=l1;
si2=l6;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
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
goto L23;
}
si0=l3;
f5522(i,si0);
L23:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L7:;
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
goto L5;
}
si0=l3;
f5522(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l2;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L25;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
si4=l7;
si5=l3;
si6=l4;
TF(i->t0,si6,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5);
goto L24;
L25:;
si0=l3;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
goto L26;
L27:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L26:;
si0=l1;
si1=l5;
si2=l3;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
L24:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
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
L4:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f14795(i);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8810(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l5=si2;
si3=l3;
f8799(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l8=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=104U;
si0+=si1;
si1=1U;
si2=l2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+16U);
l1=si3;
f1324(i,si0,si1,si2,si3);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=l7;
si2=l8;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=l8;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+140U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l1=si0;
si0=-1U;
l3=si0;
L5:;
{
si0=l4;
si1=l1;
f1320(i,si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15024(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l7;
si1=l5;
si2=17369004U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f8811(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=1U;
l9=si0;
si0=0U;
l10=si0;
L7:;
{
si0=l10;
l11=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l10;
si2=l7;
si3=l8;
f1334(i,si0,si1,si2,si3);
si0=l10;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
L8:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
f8715(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L9:;
si0=l9;
si1=l3;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=255U;
si0&=si1;
si1=1U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L5;
}
goto L4;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=50U;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=48U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17368692U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368676U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368668U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368660U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368652U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368644U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=214748364850ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l11;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=50U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l11;
si1=l6;
si2=17368628U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f8812(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
f8800(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
if(si0){
goto L6;
}
si0=l4;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L7:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L5;
L8:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1U;
l12=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=7U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l11;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
L12:;
{
si0=l9;
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
f8715(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L13:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l12;
si1=l1;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L12;
}
goto L2;
}
L11:;
si0=0U;
l1=si0;
si0=l11;
si1=2U;
si0=si0 == si1;
l2=si0;
si0=l11;
si1=3U;
si0=si0 == si1;
l14=si0;
si0=l11;
si1=4U;
si0=si0 == si1;
l15=si0;
si0=l11;
si1=5U;
si0=si0 == si1;
l16=si0;
si0=l11;
si1=6U;
si0=si0 == si1;
l17=si0;
L14:;
{
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l14;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l15;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l16;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l17;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
f8715(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L17:;
si0=l12;
si1=l1;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L15:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L14;
}
goto L2;
}
L10:;
si0=l8;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l8;
si0=si0 == si1;
si1=l1;
si2=l8;
si1-=si2;
l18=si1;
si1=!(si1);
si0|=si1;
l17=si0;
si0=l11;
si1=-8U;
si0+=si1;
l15=si0;
si0=l13;
si1=l4;
si0+=si1;
l19=si0;
si0=l8;
si1=l1;
si0-=si1;
l20=si0;
si0=0U;
l16=si0;
L18:;
{
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l1=si0;
si0=l8;
l4=si0;
si0=l20;
l2=si0;
si0=l17;
if(si0){
goto L21;
}
L22:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
si0=l18;
l1=si0;
si0=l18;
si1=l15;
si0=si0 > si1;
if(si0){
goto L20;
}
L21:;
si0=l3;
si1=16843009U;
si0*=si1;
l4=si0;
L23:;
{
si0=l8;
si1=l1;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
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
goto L20;
}
si0=l14;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
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
goto L20;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l15;
si0=si0 <= si1;
if(si0){
goto L23;
}
}
L20:;
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l11;
si1=l1;
si0-=si1;
l2=si0;
si0=l8;
si1=l1;
si0+=si1;
l4=si0;
L25:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l16;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l16;
f8715(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
L26:;
si0=l12;
si1=l16;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L19:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l19;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L18;
}
L9:;
si0=l3;
si1=l9;
si2=17368696U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
f15024(i,si0);
L27:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L12;
}
L13:;
si0=l4;
si1=l5;
si2=l4;
si1=f100(i,si1,si2);
l2=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=l2;
si0+=si1;
l7=si0;
si1=l4;
si2=l2;
si1-=si2;
l2=si1;
si0=f101(i,si0,si1);
l8=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l8;
si1=l2;
si2=17366348U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=17365304U;
l7=si0;
si0=l4;
if(si0){
goto L14;
}
si0=0U;
l11=si0;
goto L2;
L14:;
si0=l10;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l6;
si0=si0 == si1;
si1=l2;
si2=l6;
si1-=si2;
l2=si1;
si2=l10;
si3=l2;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l12=si1;
si1=!(si1);
si0|=si1;
l13=si0;
si0=l10;
si1=-8U;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
si0=l5;
l16=si0;
si0=l4;
l17=si0;
L15:;
{
si0=l16;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=0U;
l1=si0;
si0=12U;
l2=si0;
si0=0U;
l18=si0;
L19:;
{
si0=l17;
si1=l18;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=65533U;
l1=si0;
si0=l17;
l18=si0;
goto L17;
L20:;
si0=l16;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l19=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l19;
si1=63U;
si0&=si1;
si1=l1;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L21;
L22:;
si0=255U;
si1=l8;
si0>>=(si1&31);
si1=l19;
si0&=si1;
l1=si0;
L21:;
si0=l2;
si1=l8;
si0+=si1;
l2=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L23;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L19;
case 12:
goto L17;
default:
goto L19;
}
L23:;
}
si0=l18;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si0=65533U;
l1=si0;
goto L16;
L18:;
si0=l2;
si1=255U;
si0&=si1;
l1=si0;
si0=1U;
l18=si0;
goto L16;
L17:;
si0=l18;
if(si0){
goto L16;
}
si0=0U;
l11=si0;
goto L2;
L16:;
si0=l17;
si1=l18;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l19=si0;
si0=l6;
l2=si0;
si0=l12;
l8=si0;
si0=l13;
if(si0){
goto L26;
}
L27:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L27;
}
}
si0=l12;
l19=si0;
si0=l12;
si1=l14;
si0=si0 > si1;
if(si0){
goto L25;
}
L26:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l2=si0;
L28:;
{
si0=l6;
si1=l19;
si0+=si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
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
goto L25;
}
si0=l20;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
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
goto L25;
}
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L28;
}
}
L25:;
si0=l10;
si1=l19;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l10;
si1=l19;
si0-=si1;
l8=si0;
si0=l6;
si1=l19;
si0+=si1;
l2=si0;
L29:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L29;
}
L24:;
si0=l16;
si1=l18;
si0+=si1;
l16=si0;
si0=l18;
si1=l15;
si0+=si1;
l15=si0;
si0=0U;
l11=si0;
si0=l17;
si1=l18;
si0-=si1;
l17=si0;
if(si0){
goto L15;
}
goto L2;
}
L11:;
si0=l2;
si1=l4;
si2=17366300U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l15=si0;
si0=l5;
l19=si0;
si0=l4;
l17=si0;
L30:;
{
si0=l19;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L33;
}
si0=0U;
l8=si0;
si0=12U;
l2=si0;
si0=0U;
l18=si0;
L34:;
{
si0=l17;
si1=l18;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=65533U;
l8=si0;
si0=l17;
l18=si0;
goto L32;
L35:;
si0=l19;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l20=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l20;
si1=63U;
si0&=si1;
si1=l8;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L36;
L37:;
si0=255U;
si1=l1;
si0>>=(si1&31);
si1=l20;
si0&=si1;
l8=si0;
L36:;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L38;
case 1:
goto L34;
case 2:
goto L34;
case 3:
goto L34;
case 4:
goto L34;
case 5:
goto L34;
case 6:
goto L34;
case 7:
goto L34;
case 8:
goto L34;
case 9:
goto L34;
case 10:
goto L34;
case 11:
goto L34;
case 12:
goto L32;
default:
goto L34;
}
L38:;
}
si0=l18;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si0=65533U;
l8=si0;
goto L31;
L33:;
si0=l2;
si1=255U;
si0&=si1;
l8=si0;
si0=1U;
l18=si0;
goto L31;
L32:;
si0=l18;
if(si0){
goto L31;
}
si0=0U;
l11=si0;
goto L2;
L31:;
si0=l17;
si1=l18;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l18;
si1=l15;
si0+=si1;
l20=si0;
si0=l19;
si1=l18;
si0+=si1;
l19=si0;
si0=l17;
si1=l18;
si0-=si1;
l17=si0;
si0=l6;
l2=si0;
si0=l10;
l1=si0;
L40:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L40;
}
goto L9;
}
L39:;
si0=0U;
l11=si0;
si0=l20;
l15=si0;
si0=l17;
if(si0){
goto L30;
}
goto L2;
}
L9:;
si0=l15;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l15;
si1=l4;
si2=17366332U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1U;
l18=si0;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=0U;
l19=si0;
si0=12U;
l2=si0;
si0=0U;
l18=si0;
L41:;
{
si0=l4;
si1=l18;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l4;
l18=si0;
goto L6;
L42:;
si0=l5;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l8;
si1=63U;
si0&=si1;
si1=l19;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l19=si0;
goto L43;
L44:;
si0=255U;
si1=l1;
si0>>=(si1&31);
si1=l8;
si0&=si1;
l19=si0;
L43:;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L45;
case 1:
goto L41;
case 2:
goto L41;
case 3:
goto L41;
case 4:
goto L41;
case 5:
goto L41;
case 6:
goto L41;
case 7:
goto L41;
case 8:
goto L41;
case 9:
goto L41;
case 10:
goto L41;
case 11:
goto L41;
case 12:
goto L6;
default:
goto L41;
}
L45:;
}
si0=l18;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
goto L5;
L7:;
si0=l2;
si1=108U;
si2=17366180U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l18;
if(si0){
goto L5;
}
si0=0U;
l11=si0;
goto L2;
L5:;
si0=0U;
l15=si0;
si0=l18;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
l17=si0;
L4:;
si0=l18;
si1=l17;
si2=17366656U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l15;
si0+=si1;
l7=si0;
si0=l4;
si1=l15;
si0-=si1;
l11=si0;
L2:;
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=8U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l10;
si1=-8U;
si0+=si1;
l4=si0;
si0=l6;
si1=l6;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l2=si1;
si0-=si1;
l5=si0;
si0=l2;
si1=l6;
si0-=si1;
l17=si0;
L50:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
l2=si0;
si0=l5;
l18=si0;
si0=l17;
if(si0){
goto L54;
}
si0=0U;
l2=si0;
goto L53;
L54:;
L55:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
if(si0){
goto L55;
}
}
si0=l17;
l2=si0;
si0=l17;
si1=l4;
si0=si0 > si1;
if(si0){
goto L52;
}
L53:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l18=si0;
L56:;
{
si0=l6;
si1=l2;
si0+=si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si0^=si1;
l19=si0;
si1=-1U;
si0^=si1;
si1=l19;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L52;
}
si0=l20;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si0^=si1;
l19=si0;
si1=-1U;
si0^=si1;
si1=l19;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L52;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L56;
}
}
L52:;
si0=l10;
si1=l2;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l10;
si1=l2;
si0-=si1;
l18=si0;
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
L57:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L48;
}
goto L57;
}
L51:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L50;
}
goto L47;
}
L49:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l18=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L58;
}
si0=l18;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L47;
}
L59:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
l2=si0;
si0=l10;
l1=si0;
L61:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L61;
}
goto L48;
}
L60:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l18=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L59;
}
goto L47;
}
L58:;
si0=l18;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
L48:;
si0=l8;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l8;
si1=l11;
si2=17366316U;
f597(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=17365304U;
l7=si0;
si0=0U;
l8=si0;
L46:;
sj0=l9;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l8;
if(si0){
goto L65;
}
si0=1U;
l2=si0;
goto L64;
L65:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L63;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L62;
}
L64:;
si0=l2;
si1=l7;
si2=l8;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L63:;
f53(i);
UNREACHABLE;
L62:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f8814(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L12;
}
L13:;
si0=l3;
si1=l4;
si2=l3;
si1=f100(i,si1,si2);
l2=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l2;
si0+=si1;
l6=si0;
si0=l3;
si1=l2;
si0-=si1;
l2=si0;
goto L1;
L12:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=17365304U;
l6=si0;
si0=l3;
if(si0){
goto L14;
}
si0=0U;
l2=si0;
goto L2;
L14:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l5;
si0=si0 == si1;
si1=l2;
si2=l5;
si1-=si2;
l2=si1;
si2=l8;
si3=l2;
si4=l8;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si1=!(si1);
si0|=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l11=si0;
si0=0U;
l12=si0;
si0=l4;
l13=si0;
si0=l3;
l14=si0;
L15:;
{
si0=l13;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=0U;
l1=si0;
si0=12U;
l2=si0;
si0=0U;
l15=si0;
L19:;
{
si0=l14;
si1=l15;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=65533U;
l1=si0;
si0=l14;
l15=si0;
goto L17;
L20:;
si0=l13;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l16=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l16;
si1=63U;
si0&=si1;
si1=l1;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L21;
L22:;
si0=255U;
si1=l17;
si0>>=(si1&31);
si1=l16;
si0&=si1;
l1=si0;
L21:;
si0=l2;
si1=l17;
si0+=si1;
l2=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L23;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L19;
case 12:
goto L17;
default:
goto L19;
}
L23:;
}
si0=l15;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=65533U;
l1=si0;
goto L16;
L18:;
si0=l2;
si1=255U;
si0&=si1;
l1=si0;
si0=1U;
l15=si0;
goto L16;
L17:;
si0=l15;
if(si0){
goto L16;
}
si0=0U;
l2=si0;
goto L2;
L16:;
si0=l14;
si1=l15;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l16=si0;
si0=l5;
l2=si0;
si0=l9;
l17=si0;
si0=l10;
if(si0){
goto L26;
}
L27:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L27;
}
}
si0=l9;
l16=si0;
si0=l9;
si1=l11;
si0=si0 > si1;
if(si0){
goto L25;
}
L26:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l2=si0;
L28:;
{
si0=l5;
si1=l16;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L25;
}
si0=l18;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L25;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L28;
}
}
L25:;
si0=l8;
si1=l16;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
si1=l16;
si0-=si1;
l17=si0;
si0=l5;
si1=l16;
si0+=si1;
l2=si0;
L29:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L29;
}
L24:;
si0=l13;
si1=l15;
si0+=si1;
l13=si0;
si0=l15;
si1=l12;
si0+=si1;
l12=si0;
si0=0U;
l2=si0;
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
if(si0){
goto L15;
}
goto L2;
}
L11:;
si0=l2;
si1=l3;
si2=17366300U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l12=si0;
si0=l4;
l16=si0;
si0=l3;
l14=si0;
L30:;
{
si0=l16;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L33;
}
si0=0U;
l17=si0;
si0=12U;
l2=si0;
si0=0U;
l15=si0;
L34:;
{
si0=l14;
si1=l15;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=65533U;
l17=si0;
si0=l14;
l15=si0;
goto L32;
L35:;
si0=l16;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l18=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l18;
si1=63U;
si0&=si1;
si1=l17;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
goto L36;
L37:;
si0=255U;
si1=l1;
si0>>=(si1&31);
si1=l18;
si0&=si1;
l17=si0;
L36:;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L38;
case 1:
goto L34;
case 2:
goto L34;
case 3:
goto L34;
case 4:
goto L34;
case 5:
goto L34;
case 6:
goto L34;
case 7:
goto L34;
case 8:
goto L34;
case 9:
goto L34;
case 10:
goto L34;
case 11:
goto L34;
case 12:
goto L32;
default:
goto L34;
}
L38:;
}
si0=l15;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=65533U;
l17=si0;
goto L31;
L33:;
si0=l2;
si1=255U;
si0&=si1;
l17=si0;
si0=1U;
l15=si0;
goto L31;
L32:;
si0=l15;
if(si0){
goto L31;
}
si0=0U;
l2=si0;
goto L2;
L31:;
si0=l14;
si1=l15;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l15;
si1=l12;
si0+=si1;
l18=si0;
si0=l16;
si1=l15;
si0+=si1;
l16=si0;
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
si0=l5;
l2=si0;
si0=l8;
l1=si0;
L40:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l17;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L40;
}
goto L9;
}
L39:;
si0=0U;
l2=si0;
si0=l18;
l12=si0;
si0=l14;
if(si0){
goto L30;
}
goto L2;
}
L9:;
si0=l12;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l3;
si2=17366332U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1U;
l15=si0;
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=0U;
l16=si0;
si0=12U;
l2=si0;
si0=0U;
l15=si0;
L41:;
{
si0=l3;
si1=l15;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l3;
l15=si0;
goto L6;
L42:;
si0=l4;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si1=17365816U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=12U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l17;
si1=63U;
si0&=si1;
si1=l16;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l16=si0;
goto L43;
L44:;
si0=255U;
si1=l1;
si0>>=(si1&31);
si1=l17;
si0&=si1;
l16=si0;
L43:;
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l2;
si1=17366072U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
switch(si0){
case 0:
goto L45;
case 1:
goto L41;
case 2:
goto L41;
case 3:
goto L41;
case 4:
goto L41;
case 5:
goto L41;
case 6:
goto L41;
case 7:
goto L41;
case 8:
goto L41;
case 9:
goto L41;
case 10:
goto L41;
case 11:
goto L41;
case 12:
goto L6;
default:
goto L41;
}
L45:;
}
si0=l15;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
goto L5;
L7:;
si0=l2;
si1=108U;
si2=17366180U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l15;
if(si0){
goto L5;
}
si0=0U;
l2=si0;
goto L2;
L5:;
si0=0U;
l12=si0;
si0=l15;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l3;
l14=si0;
L4:;
si0=l15;
si1=l14;
si2=17366656U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l12;
si0+=si1;
l6=si0;
si0=l3;
si1=l12;
si0-=si1;
l2=si0;
L2:;
sj0=l7;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15024(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f8815(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L2;
}
L3:;
si0=l5;
si1=l4;
si0=f101(i,si0,si1);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l4;
si2=17366348U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=-8U;
si0+=si1;
l11=si0;
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L9;
}
L10:;
{
si0=l10;
si1=255U;
si0&=si1;
l12=si0;
si1=16843009U;
si0*=si1;
l1=si0;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L12:;
{
si0=l6;
si1=l2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L12;
}
}
L11:;
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l2;
si0-=si1;
l1=si0;
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
L14:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L14;
}
goto L6;
}
L13:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L5;
}
L9:;
si0=l2;
si1=l6;
si0-=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l2;
si0-=si1;
l15=si0;
L15:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l6;
l2=si0;
si0=l15;
l1=si0;
L17:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=255U;
si1&=si2;
l13=si1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
}
si0=l14;
l2=si0;
si0=l14;
si1=l11;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l13;
si1=16843009U;
si0*=si1;
l1=si0;
si0=l14;
l2=si0;
L19:;
{
si0=l6;
si1=l2;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=l12;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L19;
}
}
L18:;
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l2;
si0-=si1;
l1=si0;
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
L20:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L20;
}
goto L6;
}
L16:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L5;
}
L8:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l13=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
si0=l13;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
L22:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l6;
l2=si0;
si0=l9;
l1=si0;
L24:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L24;
}
goto L6;
}
L23:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l13=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L5;
}
L21:;
si0=l13;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
goto L6;
L7:;
L25:;
{
si0=l10;
si1=255U;
si0&=si1;
l12=si0;
si1=16843009U;
si0*=si1;
l1=si0;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
L27:;
{
si0=l6;
si1=l2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L27;
}
}
L26:;
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l2;
si0-=si1;
l1=si0;
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
L29:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
f8763(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L25;
}
goto L5;
}
L6:;
si0=l7;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l7;
si1=l4;
si2=17366316U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=17365304U;
l5=si0;
si0=0U;
l7=si0;
L4:;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8816(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l5=si0;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
L4:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
l1=si0;
si0=l5;
si1=9U;
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=1U;
l5=si0;
L6:;
{
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
L9:;
{
si0=l2;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
l2=si0;
si0=l1;
si1=9U;
si0=si0 == si1;
if(si0){
goto L9;
}
}
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=20U;
si0+=si1;
si1=l5;
si2=1U;
f8716(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
goto L7;
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
L7:;
si0=l7;
si1=l5;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
l2=si0;
goto L6;
}
L5:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l8=si0;
si0=1U;
l7=si0;
si0=0U;
l2=si0;
si0=0U;
l5=si0;
L12:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f8715(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L15:;
si0=l7;
si1=l2;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=0U;
si2=l5;
si3=1U;
si2+=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3);
l5=si3;
si4=10U;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l5;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L13;
L14:;
si0=l8;
si1=l5;
si2=l8;
si1=REM_U(si1,si2);
si0-=si1;
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
f8716(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l2;
si0+=si1;
si1=32U;
si2=l6;
si0=f15145(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=l6;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l5;
si0+=si1;
l5=si0;
L13:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L12;
}
goto L10;
}
L11:;
f53(i);
UNREACHABLE;
L10:;
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
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=1U;
l8=si0;
si0=l6;
si1=112U;
si0+=si1;
si1=1U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
l10=si3;
f1324(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
f1320(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l1;
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L14;
L15:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l11;
si1=l10;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l10;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l12;
si1=l11;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L16:;
si0=l6;
si1=112U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=96U;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0+=si1;
si1=-2U;
si2=l4;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=128U;
si0+=si1;
l4=si0;
L17:;
{
si0=l6;
si1=l4;
f1320(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l10;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l12;
si1=l7;
si0+=si1;
si1=l13;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L17;
}
goto L3;
}
L13:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l11;
si1=l7;
si2=17368828U;
f683(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l7;
si1=l1;
si2=17368828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=l7;
si2=17368844U;
f685(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l11;
si2=17368860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l11;
si1=l1;
si2=17368860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
L18:;
si0=l8;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
L6:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L2;
}
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
f15024(i,si0);
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l9;
f15024(i,si0);
L1:;
si0=l6;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8818(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
si1=l5;
si2=0U;
si1=(U32)((I32)si1<(I32)si2);
si0|=si1;
l9=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
goto L27;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l4;
if(si0){
goto L29;
}
si0=l10;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
goto L32;
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
if(si0){
goto L31;
}
L32:;
si0=1U;
l8=si0;
si0=0U;
l4=si0;
goto L30;
L31:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L23;
}
L30:;
si0=l8;
si1=l10;
si2=l4;
si0=f15143(i,si0,si1,si2);
goto L3;
L29:;
si0=1U;
l8=si0;
si0=l4;
si1=l10;
si0|=si1;
si0=!(si0);
if(si0){
goto L26;
}
L27:;
si0=l10;
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L35;
}
si0=1U;
l8=si0;
si0=1U;
si1=l10;
si2=l4;
si0=f15143(i,si0,si1,si2);
goto L3;
L36:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
if(si0){
goto L25;
}
si0=0U;
l4=si0;
si0=1U;
l8=si0;
goto L3;
L35:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
si1=l10;
si2=l4;
si0=f15143(i,si0,si1,si2);
goto L3;
L34:;
si0=1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si1=1U;
si0+=si1;
l4=si0;
si1=l5;
si2=l4;
si3=l5;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l9;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l8;
si0*=si1;
si1=l14;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L21;
}
L37:;
si0=0U;
l10=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
si2=l8;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
L38:;
si0=l6;
si1=l10;
si0+=si1;
si1=l11;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l10;
si2=l8;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l14;
si1=l1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l1;
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
l3=si0;
si0=l12;
l10=si0;
L40:;
{
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l4;
f8715(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L41:;
si0=l6;
si1=l4;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l4;
si0-=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l4;
si2=l8;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L42:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si1=l4;
si0+=si1;
si1=l11;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l4;
si2=l8;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l12;
si1=l1;
si0+=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l4;
si0-=si1;
si1=l14;
si2=l1;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l4;
si2=l8;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L43:;
si0=l6;
si1=l4;
si0+=si1;
si1=l10;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l4;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l13;
si0=!(si0);
if(si0){
goto L44;
}
si0=l11;
f15024(i,si0);
L44:;
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L26:;
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
goto L2;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
if(si0){
goto L45;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l11;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l10;
si4=l8;
si5=l5;
si0=f8819(i,si0,si1,si2,si3,si4,si5);
l2=si0;
if(si0){
goto L46;
}
si0=l11;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si1=l1;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l15;
si0=!(si0);
if(si0){
goto L47;
}
si0=l13;
f15024(i,si0);
L47:;
si0=l11;
l4=si0;
goto L6;
L46:;
si0=l11;
si1=l2;
si2=l10;
si1*=si2;
l4=si1;
si0-=si1;
l8=si0;
si0=1U;
l14=si0;
si0=l11;
si1=l4;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L18;
}
L48:;
si0=0U;
l4=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l14;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=1U;
si2=l13;
si3=l10;
f1324(i,si0,si1,si2,si3);
si0=l7;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=104U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=112U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=120U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=60U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si0=0U;
l8=si0;
L49:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l12;
f1320(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l6;
si1=l11;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0-=si1;
si1=l6;
si2=l8;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=l5;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l14=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
L50:;
si0=l14;
si1=l4;
si0+=si1;
si1=l1;
si2=l8;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l4;
si2=l5;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l10;
si0+=si1;
l8=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L49;
}
goto L7;
}
L45:;
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l11;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l15=si2;
si3=l10;
si4=l8;
si5=l5;
si0=f8819(i,si0,si1,si2,si3,si4,si5);
l2=si0;
if(si0){
goto L52;
}
si0=l11;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=l14;
si2=l11;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L52:;
si0=l2;
si1=l11;
si0&=si1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l9;
si1=l10;
si0-=si1;
l4=si0;
si1=l11;
si2=2147483647U;
si1^=si2;
si2=l2;
si1=I32_DIV_S(si1,si2);
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=1U;
l1=si0;
si0=l2;
si1=l4;
si0*=si1;
si1=l11;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si1=1U;
si0=f32(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
L53:;
si0=0U;
l4=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=1U;
si2=l15;
si3=l10;
f1324(i,si0,si1,si2,si3);
si0=l7;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=104U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=112U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=120U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=60U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l14;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
l13=si0;
si0=0U;
l8=si0;
L54:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
f1320(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=l11;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0-=si1;
si1=l6;
si2=l8;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=l5;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
L55:;
si0=l1;
si1=l4;
si0+=si1;
si1=l14;
si2=l8;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l4;
si2=l5;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0-=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=l9;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
L56:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l4;
si0+=si1;
si1=l12;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l4;
si2=l9;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l10;
si0+=si1;
l8=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L54;
}
goto L9;
}
L51:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l8;
si5=l5;
f8817(i,si0,si1,si2,si3,si4,si5);
goto L1;
L24:;
f53(i);
UNREACHABLE;
L23:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l1;
si1=l14;
si2=17368780U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l8;
si1=l6;
si2=17368796U;
f683(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=l11;
si2=17368796U;
f597(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=17368896U;
si1=31U;
si2=17368876U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l8;
si1=l6;
si2=17368928U;
f683(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l6;
si1=l11;
si2=17368928U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=25U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17368984U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368976U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368968U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17368960U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l6;
si1=l8;
si2=l7;
si3=40U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L8;
L58:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L57:;
f14795(i);
UNREACHABLE;
L9:;
si0=l7;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l7;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L59;
}
si0=l7;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L59:;
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l14;
si1=l8;
si0+=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0-=si1;
si1=l11;
si2=l8;
si1-=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=l8;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
L61:;
si0=l1;
si1=l4;
si0+=si1;
si1=l10;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si0=!(si0);
if(si0){
goto L62;
}
si0=l12;
f15024(i,si0);
L62:;
si0=l17;
si0=!(si0);
if(si0){
goto L5;
}
si0=l15;
f15024(i,si0);
goto L5;
L60:;
si0=l8;
si1=l11;
si2=17368944U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l16;
si0=!(si0);
if(si0){
goto L63;
}
si0=l12;
f15024(i,si0);
L63:;
si0=l17;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
f15024(i,si0);
goto L1;
L7:;
si0=l7;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L64:;
si0=l11;
si1=l8;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l11;
si1=l8;
si0-=si1;
l10=si0;
si0=l1;
si1=l8;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si1=l4;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l7;
si1=28U;
si0+=si1;
si1=l4;
si2=l10;
f8716(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
L65:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si1=l4;
si0+=si1;
si1=l6;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l10;
si0+=si1;
l4=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L6;
}
si0=l13;
f15024(i,si0);
L6:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=l9;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L1;
L4:;
si0=l8;
si1=l11;
si2=17368812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l7;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8819(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=176U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=72U;
si0+=si1;
si1=1U;
si2=l2;
si3=l3;
f1324(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l12=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l14=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=48U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=0U;
si0=si0 != si1;
l17=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=144U;
si0+=si1;
l4=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=152U;
si0+=si1;
l7=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l16=si0;
si0=l5;
l3=si0;
L5:;
{
si0=l6;
si1=l9;
f1320(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
si0=0U;
l3=si0;
si0=l5;
l16=si0;
L4:;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+168U,si1);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l16;
si1=l5;
si2=l16;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
goto L1;
L2:;
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=144U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=152U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=-1U;
l16=si0;
L7:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
f1320(i,si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l6;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l6;
si1=176U;
si0+=si1;
i->g0=si0;
si0=l16;
L0:;
return si0;
}

void f8820(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=1U;
l5=si0;
si0=1U;
l6=si0;
L2:;
{
si0=l6;
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=223U;
si0&=si1;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
l6=si0;
if(si0){
goto L5;
}
si0=l7;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l8;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l8=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L6:;
si0=l5;
si1=l3;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l3;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l8;
si1=96U;
si0=si0 > si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0^=si1;
l8=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
f8715(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l3;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
L3:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L2;
}
}
L1:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8821(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l1;
si2=l5;
f2344(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
if(si0){
goto L6;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=84U;
si0+=si1;
si1=17365500U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si0=f2337(i,si0,si1);
si0=!(si0);
if(si0){
goto L5;
}
si0=17365524U;
si1=55U;
si2=l4;
si3=32U;
si2+=si3;
si3=17365580U;
si4=17365672U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
if(si0){
goto L11;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L10;
L11:;
si0=l5;
si1=44U;
si0*=si1;
l11=si0;
si0=l6;
si1=24U;
si0+=si1;
l1=si0;
si0=0U;
l10=si0;
si0=0U;
l12=si0;
L12:;
{
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l10;
if(si0){
goto L14;
}
si0=l13;
si1=0U;
si0=si0 != si1;
l12=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L13;
L14:;
si0=l12;
si1=l13;
si2=0U;
si1=si1 != si2;
si0^=si1;
si1=1U;
si0&=si1;
if(si0){
goto L15;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L13;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=25U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17369890U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369882U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369874U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369866U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l11;
si2=l4;
si3=60U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L9;
L16:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l11;
si1=-44U;
si0+=si1;
l11=si0;
if(si0){
goto L12;
}
}
si0=l12;
si1=1U;
si0&=si1;
l9=si0;
L10:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=800U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f13834(i,si0,si1);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L19:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l14;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L21:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L17;
}
L20:;
si0=l14;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L22:;
{
si0=l1;
si0=!(si0);
l8=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L17:;
si0=l10;
if(si0){
goto L27;
}
si0=l8;
if(si0){
goto L28;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=51U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=47U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17369938U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369931U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369923U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369915U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369907U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369899U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369891U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=219043332147ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l11;
si2=l4;
si3=60U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L23;
L28:;
si0=l5;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si1=44U;
si0*=si1;
l13=si0;
si0=l6;
si1=16U;
si0+=si1;
l1=si0;
si0=1U;
l12=si0;
si0=0U;
l11=si0;
L32:;
{
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l11;
si0-=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l11;
si2=l10;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
L33:;
si0=l12;
si1=l11;
si0+=si1;
si1=l3;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
si2=l10;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l13;
si1=-44U;
si0+=si1;
l13=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L30:;
si0=17369942U;
si1=40U;
si2=17369984U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si0=!(si0);
if(si0){
goto L25;
}
si0=l5;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si1=44U;
si0*=si1;
l2=si0;
si0=0U;
l11=si0;
si0=1U;
l12=si0;
si0=0U;
l10=si0;
L35:;
{
si0=l6;
si1=l11;
si0+=si1;
l1=si0;
si1=4U;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l10;
si0-=si1;
si1=l1;
si2=16U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l10;
si2=l1;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
L38:;
si0=l12;
si1=l10;
si0+=si1;
si1=l13;
si2=l1;
si0=f15143(i,si0,si1,si2);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l10;
si2=l1;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L36;
L37:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L43;
}
si0=1U;
l8=si0;
goto L42;
L43:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L41;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L40;
}
L42:;
si0=l8;
si1=l10;
si2=l1;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l12;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l12;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5916(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l3;
f5548(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L45;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l1;
f5522(i,si0);
L46:;
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=l13;
si3=l10;
f8822(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l13=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l10;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L47:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si1=l1;
si0+=si1;
si1=l13;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l1;
si2=l10;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L36;
}
si0=l13;
f15024(i,si0);
goto L36;
L45:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
f5522(i,si0);
goto L23;
L44:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L23;
L41:;
f53(i);
UNREACHABLE;
L40:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L39:;
si0=17369942U;
si1=40U;
si2=17370000U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l2;
si1=l11;
si2=44U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L26:;
si0=1U;
si1=51U;
f52(i,si0,si1);
UNREACHABLE;
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=25U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17369890U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369882U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369874U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369866U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l11;
si2=l4;
si3=60U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L23;
L48:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l11=si1;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l11;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l11;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L51:;
{
si0=l1;
if(si0){
goto L52;
}
si0=1U;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l15=si0;
goto L49;
L52:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l10;
si1=l13;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L50:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L53;
}
si0=1U;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l15=si0;
goto L49;
L53:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l15=si0;
L49:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l15;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si1=44U;
si0*=si1;
l10=si0;
si0=l6;
si1=36U;
si0+=si1;
l1=si0;
si0=1U;
l14=si0;
si0=0U;
l11=si0;
L55:;
{
si0=l1;
si1=-32U;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l1;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l11;
si0-=si1;
si1=l1;
si2=-20U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l11;
si2=l13;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
L58:;
si0=l14;
si1=l11;
si0+=si1;
si1=l12;
si2=l13;
si0=f15143(i,si0,si1,si2);
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
si2=l13;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L56;
L57:;
si0=l3;
si1=l4;
si2=32U;
si1+=si2;
si2=l13;
si3=l1;
si0=f8823(i,si0,si1,si2,si3);
l12=si0;
if(si0){
goto L59;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l1;
si1=-24U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=0U;
si3=l11;
si4=l11;
si5=l2;
si4=si4 == si5;
l12=si4;
si2=si4?si2:si3;
f8824(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=4U;
si1+=si2;
si2=l12;
si0=si2?si0:si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l14=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l9;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
goto L60;
L61:;
si0=l12;
if(si0){
goto L59;
}
L60:;
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L63;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=38U;
si0=f15022(i,si0);
l1=si0;
if(si0){
goto L62;
}
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L63:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
si2=4U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=60U;
si0+=si1;
si1=l3;
si2=l13;
si3=l12;
f8822(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l9=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l11=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l11;
si2=l13;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
L64:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l14=si0;
si1=l11;
si0+=si1;
si1=l9;
si2=l13;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l11;
si2=l13;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L56;
}
si0=l9;
f15024(i,si0);
goto L56;
L62:;
si0=l1;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369847U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369841U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369833U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369825U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369817U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l4;
si2=60U;
si1+=si2;
si0=f11871(i,si0,si1);
l12=si0;
L59:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L23;
L56:;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l10;
si1=-44U;
si0+=si1;
l10=si0;
if(si0){
goto L55;
}
}
L54:;
si0=l8;
si1=l15;
si2=l2;
si1=si1 == si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L67;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L66;
L67:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=51U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l1;
si1=47U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17369938U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369931U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369923U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369915U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369907U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369899U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369891U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=219043332147ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l11;
si2=l4;
si3=60U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L66;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L66:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=24U;
si0+=si1;
l1=si0;
si0=0U;
l11=si0;
goto L8;
L65:;
si0=1U;
si1=51U;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L68;
}
si0=l6;
si1=24U;
si0+=si1;
l1=si0;
si0=0U;
l11=si0;
L69:;
{
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l1;
si1=-16U;
si0+=si1;
l10=si0;
goto L71;
L72:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L70;
}
si0=l6;
si1=l11;
si2=44U;
si1*=si2;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
L71:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L70;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L70:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
f15024(i,si0);
goto L4;
L8:;
L73:;
{
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l1;
si1=-16U;
si0+=si1;
l10=si0;
goto L75;
L76:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si1=l11;
si2=44U;
si1*=si2;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
L75:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L73;
}
}
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L77;
}
si0=l6;
f15024(i,si0);
L77:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L2;
L5:;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
goto L3;
}
si0=l3;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd1,sd2;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si1=-3U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=255U;
si2&=si3;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L15;
default:
goto L18;
}
L18:;
si0=l3;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l2;
si1=37U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l5=si0;
si1=2U;
si2=l5;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L10;
}
sj0=l7;
sj1=8080311700465507813ULL;
sj0^=sj1;
sj1=l6;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l2;
si2=l3;
si3=56U;
si2+=si3;
f2341(i,si0,si1,si2);
goto L3;
L19:;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=17369464U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L20;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L24;
}
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
f1354(i,si0);
goto L20;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L20;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L20;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L20;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L20;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l2;
f1354(i,si0);
L20:;
si0=l4;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=156U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+156U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si2=l4;
si3=88U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si1=l8;
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
goto L9;
}
si0=l4;
si1=176U;
si0+=si1;
si1=l1;
si2=l3;
f10335(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+180U);
l10=si1;
si1=i32_load(&i->m0,(U64)si1+28U);
l2=si1;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L28:;
{
si0=l3;
if(si0){
goto L29;
}
si0=l10;
l3=si0;
goto L26;
L29:;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L27:;
si0=l4;
si1=32U;
si0+=si1;
si1=l8;
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=17369676U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L30;
case 1:
goto L33;
case 2:
goto L32;
case 3:
goto L31;
default:
goto L34;
}
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
f1354(i,si0);
goto L30;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L30;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L30;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L30;
}
si0=l3;
si1=0U;
f1361(i,si0,si1);
goto L30;
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
f1354(i,si0);
L30:;
si0=l4;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=156U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+156U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
goto L9;
}
si0=l1;
si1=l3;
si2=l4;
si3=88U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l3=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l10;
f5522(i,si0);
L26:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f5522(i,si0);
goto L1;
L25:;
si0=l0;
si1=l2;
si2=l4;
sd2=f64_load(&i->m0,(U64)si2+184U);
f2342(i,si0,si1,sd2);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l8;
f5522(i,si0);
goto L1;
L16:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l7;
sj1=-6879226489707195439ULL;
sj0^=sj1;
sj1=l6;
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L36;
}
sj0=l7;
sj1=-7528524892399901228ULL;
sj0^=sj1;
sj1=l6;
sj2=3498177934775739267ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L38;
}
si0=l5;
si1=16U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l3;
si1=l9;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
if(si0){
goto L37;
}
L38:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L37:;
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L35;
}
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
goto L12;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
goto L12;
L36:;
si0=1U;
l5=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L39;
}
si0=l4;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l1;
si1=192U;
si0&=si1;
si1=6U;
si0>>=(si1&31);
si1=-64U;
si0|=si1;
l1=si0;
si0=2U;
l5=si0;
L39:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l4;
si2=32U;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l2;
si2=l4;
si3=88U;
si2+=si3;
si3=l4;
si4=32U;
si3+=si4;
f2339(i,si0,si1,si2,si3);
goto L2;
L35:;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L40;
}
si0=l4;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l1;
si1=192U;
si0&=si1;
si1=6U;
si0>>=(si1&31);
si1=-64U;
si0|=si1;
l1=si0;
si0=2U;
l5=si0;
L40:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=l4;
si2=32U;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l2;
si2=l4;
si3=88U;
si2+=si3;
si3=l4;
si4=32U;
si3+=si4;
f2339(i,si0,si1,si2,si3);
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
goto L2;
}
si0=l3;
si1=56U;
si0+=si1;
f1354(i,si0);
goto L2;
L15:;
si0=l2;
si1=37U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=l3;
f13151(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=664U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
f13162(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
switch(si0){
case 0:
goto L45;
case 1:
goto L44;
case 2:
goto L42;
default:
goto L45;
}
L47:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=17314629U;
si3=35U;
si4=l3;
si5=l1;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L51;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2078(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l2;
f5522(i,si0);
L52:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L50;
}
goto L49;
L51:;
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
goto L48;
}
si0=0U;
l5=si0;
si0=l2;
l1=si0;
L50:;
si0=l3;
f5522(i,si0);
L49:;
si0=l5;
if(si0){
goto L43;
}
si0=l1;
l2=si0;
L48:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L46:;
si0=l4;
si1=88U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=32U;
si0+=si1;
l5=si0;
si1=l4;
si2=32U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
si1=l4;
si2=88U;
si1+=si2;
si2=l2;
f13220(i,si0,si1,si2);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+92U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
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
goto L53;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
f5522(i,si0);
L53:;
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
f15024(i,si0);
L54:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
f15024(i,si0);
goto L3;
L45:;
si0=l4;
si1=176U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=843U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=17369628U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
switch(si0){
case 0:
goto L55;
case 1:
goto L58;
case 2:
goto L57;
case 3:
goto L56;
default:
goto L59;
}
L59:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l2;
f1354(i,si0);
goto L55;
L58:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L55;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L55;
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l2=si0;
si1=0U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L55;
}
si0=l2;
si1=0U;
f1361(i,si0,si1);
goto L55;
L56:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l2;
f1354(i,si0);
L55:;
si0=l4;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=156U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+156U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si2=l4;
si3=88U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L41;
L44:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+96U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=l1;
f13170(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L60;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L41;
L60:;
si0=l4;
si1=88U;
si0+=si1;
si1=l1;
si2=l5;
f7353(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l9=si0;
si0=l0;
si1=l2;
si2=l1;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+96U);
f2340(i,si0,si1,si2,si3);
si0=l9;
si0=!(si0);
if(si0){
goto L63;
}
si0=l1;
f15024(i,si0);
L63:;
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
goto L64;
}
si0=l5;
f5522(i,si0);
L64:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f5522(i,si0);
goto L3;
L62:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L41;
}
si0=l5;
f5522(i,si0);
goto L41;
L61:;
si0=l4;
si1=32U;
si0+=si1;
f8708(i,si0);
goto L3;
L43:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L42:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
L41:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
goto L66;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f5522(i,si0);
L66:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
f15024(i,si0);
L67:;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
f15024(i,si0);
goto L2;
L65:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f5522(i,si0);
goto L2;
L14:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=53U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
si1=45U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369542U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369537U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369529U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369521U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369513U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369505U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369497U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=227633266741ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l5;
si2=l4;
si3=88U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L68:;
si0=1U;
si1=53U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L72;
}
si0=l3;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=256ULL;
si0=sj0 < sj1;
if(si0){
goto L71;
}
L72:;
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=17367040U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=156U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f64(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si2=l4;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369700U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=103079215128ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l9;
si2=l4;
si3=88U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
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
goto L73;
}
si0=l5;
f5522(i,si0);
L73:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L71:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l5=si0;
sj0=l7;
si0=(U32)(sj0);
si0=(U32)(U32)(I8)(U8)(si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L74;
}
si0=l4;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+33U,si1);
si0=l1;
si1=192U;
si0&=si1;
si1=6U;
si0>>=(si1&31);
si1=-64U;
si0|=si1;
l1=si0;
si0=2U;
l5=si0;
L74:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l1;
si1=l4;
si2=32U;
si1+=si2;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l2;
si2=l4;
si3=88U;
si2+=si3;
si3=l4;
si4=32U;
si3+=si4;
f2339(i,si0,si1,si2,si3);
goto L2;
L70:;
si0=1U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L69:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L10:;
sj0=l7;
sj1=8080311700465507813ULL;
sj0^=sj1;
sj1=l6;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l7;
sj1=-5931764594261734995ULL;
sj0^=sj1;
sj1=l6;
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l3;
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
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=868U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L75;
case 1:
goto L76;
case 2:
goto L4;
default:
goto L76;
}
L76:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L75:;
si0=l4;
si1=88U;
si0+=si1;
f7772(i,si0);
si0=l4;
si1=l5;
si2=l4;
si3=88U;
si2+=si3;
si3=l1;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L2;
}
si0=l5;
f5522(i,si0);
goto L2;
L7:;
si0=l4;
si1=88U;
si0+=si1;
si1=l3;
sd1=f64_load(&i->m0,(U64)si1+56U);
si2=l1;
f8920(i,si0,sd1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+92U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l2;
si2=l4;
si3=32U;
si2+=si3;
f2341(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
goto L3;
L77:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L6:;
si0=l0;
si1=l2;
si2=l3;
si3=56U;
si2+=si3;
f2341(i,si0,si1,si2);
goto L3;
L5:;
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
goto L78;
}
si0=l5;
f5522(i,si0);
L78:;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L79;
}
si0=l0;
si1=l2;
si2=l9;
si3=56U;
si2+=si3;
f2341(i,si0,si1,si2);
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
goto L2;
}
si0=l9;
f5522(i,si0);
goto L2;
L79:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l9;
f5522(i,si0);
L4:;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=17369408U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f8718(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
f8711(i,si0,si1);
si0=l1;
si1=l4;
si2=156U;
si1+=si2;
si0=f11871(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
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
goto L1;
}
si0=l3;
f5522(i,si0);
goto L1;
L2:;
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
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=38U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369847U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369841U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369833U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369825U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369817U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l4;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L4;
L5:;
si0=l1;
si1=l6;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L8;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f11345(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=29U;
si2>>=(si3&31);
si3=4U;
si2&=si3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l0;
si2=l6;
f8824(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
l5=si0;
goto L4;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
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
si1=i32_load(&i->m0,(U64)si1+17369862U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369855U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l4;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L4;
L7:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17367008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=17367049U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l0;
si1=l5;
si2=l4;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L4;
L6:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L3:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f8824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=38U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369847U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369841U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369833U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369825U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369817U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17369862U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17369855U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l4;
si2=l3;
si3=24U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l3;
si1=l2;
si2=56U;
si1+=si2;
f11345(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
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
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17367049U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L4;
}
si0=l1;
si1=l2;
si2=l3;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l1;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l2=si2;
si1^=si2;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=l2;
f13151(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=12U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=20U;
si0+=si1;
l5=si0;
si1=l4;
si2=56U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+97U);
i32_store16(&i->m0,(U64)si0+53U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
si1=12U;
si0*=si1;
l2=si0;
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L10:;
{
si0=l6;
si1=l2;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
L11:;
si0=l5;
si1=l3;
si0*=si1;
l3=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
l7=si0;
si0=l3;
switch(si0){
case 0:
goto L12;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L12;
case 4:
goto L13;
default:
goto L12;
}
L13:;
si0=l8;
l7=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l7;
si1=l2;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
si0=1U;
l9=si0;
goto L14;
L15:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
L14:;
si0=0U;
l10=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l4;
si1=100U;
si0+=si1;
si1=0U;
si2=l2;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l10=si0;
L16:;
si0=l9;
si1=l10;
si0+=si1;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l10;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L19;
case 4:
goto L18;
default:
goto L21;
}
L21:;
si0=l6;
l7=si0;
goto L17;
L20:;
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
goto L17;
L19:;
si0=l6;
si1=4U;
si0+=si1;
l7=si0;
goto L17;
L18:;
si0=l5;
l7=si0;
si0=l8;
l5=si0;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l2;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l4;
si1=100U;
si0+=si1;
si1=l2;
si2=l5;
f8716(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l2=si0;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l2;
si0+=si1;
si1=l7;
si2=l5;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
switch(si0){
case 0:
goto L6;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
default:
goto L26;
}
L26:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
f1354(i,si0);
goto L6;
L25:;
si0=l6;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L6;
L24:;
si0=l6;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L6;
L23:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
f1354(i,si0);
goto L6;
L8:;
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+56U,si1);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L28;
}
si0=1U;
l5=si0;
goto L27;
L28:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L27:;
si0=l5;
si1=l3;
si2=l2;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=100U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=100U;
si1+=si2;
f13202(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
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
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L29:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
f15024(i,si0);
L30:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L1;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8826(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=272U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=0U;
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=38U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=46U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+30U,sj1);
si0=l6;
si1=49U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
l9=si0;
si0=l6;
si1=29U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16843009U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
l10=si0;
goto L5;
L6:;
si0=l6;
si1=25U;
si0+=si1;
l11=si0;
si0=l1;
si1=l2;
si0+=si1;
l12=si0;
si0=l6;
si1=30U;
si0+=si1;
l13=si0;
si1=16U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
si0=4U;
l15=si0;
L9:;
{
si0=l2;
l10=si0;
si0=0U;
l16=si0;
L11:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l16;
si1+=si2;
l17=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0+=si1;
si1=l12;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=l16;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l16;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l16;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l16;
si0=f15022(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l12;
si1=l1;
si2=l16;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l12;
si2=0U;
si0=f6007(i,si0,si1,si2);
l12=si0;
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l7;
f8723(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L13:;
si0=l15;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
L12:;
si0=l13;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
si0=l11;
si1=4U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l10;
si0+=si1;
l12=si0;
si0=l17;
si1=1U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0^=si1;
si1=l10;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
}
si0=l16;
si1=-1U;
si0^=si1;
si1=l10;
si0+=si1;
l10=si0;
si0=l17;
si1=1U;
si0+=si1;
l1=si0;
goto L5;
L8:;
si0=l16;
si1=l10;
si2=17369020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l16;
si1=l1;
si2=l10;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l16;
si2=0U;
si0=f6007(i,si0,si1,si2);
l16=si0;
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l7;
f8723(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=272U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=38U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=46U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+30U,sj1);
si0=l5;
si1=49U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=29U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=16843009U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
l9=si0;
goto L1;
L2:;
si0=l5;
si1=25U;
si0+=si1;
l10=si0;
si0=l1;
si1=l2;
si0+=si1;
l11=si0;
si0=l5;
si1=30U;
si0+=si1;
l12=si0;
si1=16U;
si0+=si1;
l13=si0;
si0=0U;
l6=si0;
si0=4U;
l14=si0;
L4:;
{
si0=l2;
l9=si0;
si0=0U;
l15=si0;
L6:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l15;
si1+=si2;
l16=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0+=si1;
si1=l11;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L1;
}
L5:;
si0=l15;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l15;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=l15;
si0=f8828(i,si0,si1,si2);
l11=si0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
f8723(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L8:;
si0=l14;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
L7:;
si0=l12;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l8;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
si0=l10;
si1=4U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l9;
si0+=si1;
l11=si0;
si0=l16;
si1=1U;
si0+=si1;
l1=si0;
si0=l15;
si1=-1U;
si0^=si1;
si1=l9;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
}
si0=l16;
si1=1U;
si0+=si1;
l1=si0;
si0=l15;
si1=-1U;
si0^=si1;
si1=l9;
si0+=si1;
l9=si0;
goto L1;
L3:;
si0=l15;
si1=l9;
si2=17369020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l1;
si2=l9;
si0=f8828(i,si0,si1,si2);
l15=si0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=4U;
si0+=si1;
si1=l6;
f8723(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L9:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f8828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
if(si0){
goto L6;
}
si0=1U;
si1=0U;
si0=f15030(i,si0,si1);
l4=si0;
goto L5;
L6:;
si0=l2;
si0=f15022(i,si0);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l4;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
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
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l1;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L7:;
si0=l3;
si1=l4;
si2=l2;
si0=f5980(i,si0,si1,si2);
l2=si0;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l2;
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

void f8829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=272U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=0U;
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=38U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=46U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+30U,sj1);
si0=l6;
si1=49U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
l9=si0;
si0=l6;
si1=29U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16843009U;
i32_store(&i->m0,(U64)si0+25U,si1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
l10=si0;
goto L5;
L6:;
si0=l6;
si1=25U;
si0+=si1;
l11=si0;
si0=l1;
si1=l2;
si0+=si1;
l12=si0;
si0=l6;
si1=30U;
si0+=si1;
l13=si0;
si1=16U;
si0+=si1;
l14=si0;
si0=l5;
si1=88U;
si0+=si1;
l15=si0;
si0=0U;
l7=si0;
si0=4U;
l16=si0;
L9:;
{
si0=l2;
l10=si0;
si0=0U;
l17=si0;
L11:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l17;
si1+=si2;
l18=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0+=si1;
si1=l12;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=l17;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l17;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l17;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l17;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si2=l17;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l12;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l19;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l12;
si2=0U;
si0=f5916(i,si0,si1,si2);
l12=si0;
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l7;
f8723(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L13:;
si0=l16;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
L12:;
si0=l13;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=0U;
si2=223U;
si0=f15145(i,si0,si1,si2);
si0=l11;
si1=4U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l10;
si0+=si1;
l12=si0;
si0=l18;
si1=1U;
si0+=si1;
l1=si0;
si0=l17;
si1=-1U;
si0^=si1;
si1=l10;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
}
si0=l17;
si1=-1U;
si0^=si1;
si1=l10;
si0+=si1;
l10=si0;
si0=l18;
si1=1U;
si0+=si1;
l1=si0;
goto L5;
L8:;
si0=l17;
si1=l10;
si2=17369020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
si1=l1;
si2=l10;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l17;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l17;
si2=0U;
si0=f5916(i,si0,si1,si2);
l17=si0;
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l7;
f8723(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}


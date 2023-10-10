#include "w2c2_base.h"

#include "rustpython.h"

U32 f930(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f931(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f932(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1170676U;
si3=5U;
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
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170681U;
si2=8U;
si3=l2;
si4=16U;
si3+=si4;
si4=1170692U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si2=1171396U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=1171456U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170736U;
si2=13U;
si3=l2;
si4=28U;
si3+=si4;
si4=1170752U;
si0=f715(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=1170708U;
si2=11U;
si3=l2;
si4=16U;
si3+=si4;
si4=1170720U;
si0=f715(i,si0,si1,si2,si3,si4);
goto L1;
L3:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170768U;
si2=12U;
si3=l2;
si4=16U;
si3+=si4;
si4=1170752U;
si0=f715(i,si0,si1,si2,si3,si4);
L1:;
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
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
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
goto L4;
L6:;
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
L4:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f933(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=55U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1170792U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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
si2=1171456U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1171396U;
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
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1170816U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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

U32 f934(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f935(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f936(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1171808U;
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
si1=1171827U;
si2=1U;
si3=l0;
si4=1171828U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1171844U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1171852U;
si0=f715(i,si0,si1,si2,si3,si4);
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
L6:;
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
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1171868U;
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
si1=1171877U;
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

void f937(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l16=0;
U32 l17=0;
U64 l18=0;
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
si0=l4;
l2=si0;
si0=l5;
l1=si0;
L2:;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=30768U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=22576U;
si0=si0 != si1;
if(si0){
goto L14;
}
L15:;
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si0=l2;
si1=-2U;
si0+=si1;
l7=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
sj0=0ULL;
l8=sj0;
si0=0U;
l5=si0;
L16:;
{
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
l2=si0;
L22:;
{
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l2;
si0+=si1;
l9=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l7=si0;
goto L17;
L23:;
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L22;
L24:;
}
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l7=si0;
si0=l5;
si1=-87U;
si0+=si1;
l1=si0;
goto L17;
L21:;
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l7=si0;
goto L18;
L20:;
si0=l4;
si1=l2;
si0+=si1;
si1=-1U;
si0+=si1;
l4=si0;
si0=1U;
l10=si0;
si0=l7;
si1=l2;
si0-=si1;
si1=1U;
si0+=si1;
l7=si0;
goto L11;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l9;
l4=si0;
si0=l2;
l7=si0;
goto L17;
L25:;
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l9;
l4=si0;
si0=l2;
l7=si0;
si0=l5;
si1=-87U;
si0+=si1;
l1=si0;
goto L17;
L26:;
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l9;
l4=si0;
si0=l2;
l7=si0;
goto L18;
L27:;
si0=0U;
l10=si0;
goto L11;
L18:;
si0=l5;
si1=-55U;
si0+=si1;
l1=si0;
L17:;
sj0=l8;
sj1=1152921504606846975ULL;
si0=sj0 > sj1;
if(si0){
goto L10;
}
sj0=l8;
sj1=4ULL;
sj0<<=(sj1&63);
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l8=sj0;
si0=1U;
l5=si0;
goto L16;
}
L14:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l7;
if(si0){
goto L28;
}
sj0=0ULL;
l8=sj0;
goto L12;
L28:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 <= si1;
if(si0){
goto L31;
}
sj0=0ULL;
l8=sj0;
si0=0U;
l10=si0;
goto L11;
L31:;
si0=l5;
si1=-55U;
si0+=si1;
l9=si0;
goto L29;
L30:;
si0=l5;
si1=-87U;
si0+=si1;
l9=si0;
L29:;
si0=l2;
si1=-3U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=3U;
si0+=si1;
l4=si0;
si0=l9;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l8=sj0;
L32:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l5;
si1=-87U;
si0+=si1;
l2=si0;
goto L33;
L34:;
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=1U;
l10=si0;
goto L11;
L35:;
si0=l5;
si1=-55U;
si0+=si1;
l2=si0;
L33:;
sj0=l8;
sj1=1152921504606846975ULL;
si0=sj0 > sj1;
if(si0){
goto L10;
}
sj0=l8;
sj1=4ULL;
sj0<<=(sj1&63);
si1=l2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l8=sj0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
goto L32;
}
L12:;
si0=0U;
l10=si0;
si0=0U;
l2=si0;
si0=0U;
l11=si0;
si0=0U;
l1=si0;
goto L8;
L11:;
si0=0U;
l2=si0;
si0=l5;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l11=si0;
si0=l7;
l1=si0;
goto L8;
L10:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l2=si0;
si0=0U;
l11=si0;
L40:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L51;
}
si0=0U;
l9=si0;
L52:;
{
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L54;
}
si0=l7;
si1=-1U;
si0+=si1;
l1=si0;
si0=0U;
l2=si0;
L57:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l4;
si1=l2;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l12;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l7=si0;
goto L53;
L59:;
si0=l4;
si1=l7;
si0+=si1;
si1=-1U;
si0+=si1;
l4=si0;
si0=0U;
l1=si0;
goto L37;
L58:;
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L55;
}
goto L57;
L60:;
}
si0=l12;
si1=1U;
si0+=si1;
l13=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l1=si0;
goto L49;
L56:;
si0=l12;
si1=1U;
si0+=si1;
l13=si0;
si0=l2;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l1=si0;
goto L48;
L55:;
si0=l7;
si1=l2;
si0-=si1;
l1=si0;
si0=l4;
si1=l2;
si0+=si1;
si1=-1U;
si0+=si1;
l4=si0;
goto L37;
L54:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L61;
}
si0=0U;
l2=si0;
si0=0U;
l1=si0;
goto L36;
L61:;
si0=l4;
si1=1U;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l13;
l4=si0;
goto L53;
L62:;
si0=0U;
l2=si0;
si0=l7;
l1=si0;
goto L50;
L53:;
si0=l5;
si1=-48U;
si0+=si1;
l12=si0;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L63;
}
si0=l7;
l1=si0;
si0=l4;
l13=si0;
goto L46;
L63:;
si0=1U;
l2=si0;
si0=l9;
si1=1U;
si0+=si1;
l5=si0;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
l1=si0;
si0=l5;
l9=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L52;
}
goto L45;
}
L51:;
si0=l7;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L64;
}
si0=0U;
l1=si0;
goto L36;
L64:;
si0=l4;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l9=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l12=si0;
si1=255U;
si0&=si1;
l14=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=0U;
l9=si0;
si0=l14;
if(si0){
goto L46;
}
si0=l7;
si1=-2U;
si0+=si1;
l13=si0;
si0=l7;
si1=-3U;
si0+=si1;
l15=si0;
si0=0U;
l1=si0;
L65:;
{
si0=l13;
si1=l1;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l4;
si1=l1;
si0+=si1;
l14=si0;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l12=si0;
si1=255U;
si0&=si1;
l2=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L66;
}
si0=l7;
si1=l1;
si0-=si1;
si1=-2U;
si0+=si1;
l1=si0;
si0=l14;
si1=2U;
si0+=si1;
l13=si0;
si0=l5;
l9=si0;
goto L46;
L67:;
si0=1U;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
si0=l7;
si1=l1;
si0-=si1;
si1=-2U;
si0+=si1;
l1=si0;
si0=l14;
si1=2U;
si0+=si1;
l13=si0;
si0=l14;
si1=1U;
si0+=si1;
l4=si0;
goto L50;
L66:;
si0=l5;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L45;
}
si0=l15;
si1=l1;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l14;
si1=2U;
si0+=si1;
l16=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-48U;
si0+=si1;
l12=si0;
si1=255U;
si0&=si1;
l2=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=l2;
if(si0){
goto L47;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L65;
L68:;
}
si0=l7;
si1=l1;
si0-=si1;
si1=-3U;
si0+=si1;
l1=si0;
si0=l14;
si1=3U;
si0+=si1;
l13=si0;
si0=1U;
l2=si0;
si0=l16;
l4=si0;
L50:;
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l5;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L36;
}
goto L48;
L49:;
si0=l5;
si1=-87U;
si0+=si1;
l12=si0;
goto L46;
L48:;
si0=l5;
si1=-55U;
si0+=si1;
l12=si0;
goto L46;
L47:;
si0=l7;
si1=l1;
si0-=si1;
si1=-3U;
si0+=si1;
l1=si0;
si0=l14;
si1=3U;
si0+=si1;
l13=si0;
L46:;
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
l5=si0;
if(si0){
goto L44;
}
si0=l17;
si1=l4;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l5;
si1+=si2;
l7=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L43;
}
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L42;
}
sj0=0ULL;
l8=sj0;
goto L41;
L45:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L44:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L43:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L42:;
si0=l5;
si1=15U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L39;
}
sj0=l8;
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
goto L39;
}
sj0=l8;
si1=l5;
si2=2U;
si1<<=(si2&31);
si2=60U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l8=sj0;
L41:;
sj0=l8;
si1=l12;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0|=sj1;
l8=sj0;
si0=1U;
l2=si0;
si0=l4;
l17=si0;
si0=l7;
l11=si0;
si0=l1;
l7=si0;
si0=l13;
l4=si0;
goto L40;
}
L39:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L38:;
si0=l4;
si1=l7;
si0+=si1;
si1=-1U;
si0+=si1;
l4=si0;
si0=0U;
l1=si0;
L37:;
si0=1U;
l2=si0;
L36:;
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l2=si0;
L8:;
si0=l10;
if(si0){
goto L69;
}
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
L69:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=112U;
si0=si0 == si1;
if(si0){
goto L5;
}
L7:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
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
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L70;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L70:;
si0=l1;
si1=-2U;
si0+=si1;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l12=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L72;
case 1:
goto L71;
case 2:
goto L73;
default:
goto L71;
}
L73:;
si0=1U;
l12=si0;
L72:;
si0=l7;
l5=si0;
si0=l4;
l2=si0;
L71:;
si0=l3;
si0=!(si0);
if(si0){
goto L80;
}
sj0=l8;
si0=!(sj0);
if(si0){
goto L81;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L79;
L81:;
si0=0U;
l10=si0;
L82:;
{
si0=0U;
l9=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L78;
}
si0=l2;
si0=!(si0);
if(si0){
goto L78;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=l7;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=l4;
si2=l5;
si0=si2?si0:si1;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=1U;
l10=si0;
si0=l7;
l5=si0;
si0=l4;
l2=si0;
goto L82;
L83:;
si0=l7;
l5=si0;
si0=l4;
l2=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L82;
}
goto L75;
}
L80:;
si0=l5;
si0=!(si0);
if(si0){
goto L75;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L84;
}
si0=0U;
l9=si0;
L85:;
{
si0=l7;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l2=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l9;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l18=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l18;
si1=(U32)(sj1);
l7=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l7;
si2=l2;
si1+=si2;
l9=si1;
si2=l7;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l5;
si0=!(si0);
if(si0){
goto L76;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l4;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l4;
l2=si0;
si0=l4;
if(si0){
goto L85;
}
goto L76;
}
L84:;
L86:;
{
si0=l7;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=0U;
l9=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L76;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l4;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l4;
l2=si0;
si0=l4;
if(si0){
goto L86;
}
goto L76;
}
L79:;
L87:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L78;
}
si0=l2;
si0=!(si0);
if(si0){
goto L78;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=l7;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=l4;
si2=l5;
si0=si2?si0:si1;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l3=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L88;
}
si0=l7;
l5=si0;
si0=l4;
l2=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L87;
}
goto L75;
L88:;
si0=l9;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l18=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l18;
si1=(U32)(sj1);
l1=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L77;
}
si0=1U;
l10=si0;
si0=l7;
l5=si0;
si0=l4;
l2=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l1;
si2=l3;
si1+=si2;
l9=si1;
si2=l1;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L77;
}
goto L87;
}
L78:;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L76;
}
goto L75;
L77:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L76:;
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L74;
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
L75:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L74:;
si0=l11;
si1=-536870912U;
si0+=si1;
si1=-1073741824U;
si0=si0 < si1;
if(si0){
goto L89;
}
si0=l11;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=0U;
si2=l9;
si1-=si2;
si2=l9;
si3=l12;
si1=si3?si1:si2;
l2=si1;
si2=l5;
si1-=si2;
l5=si1;
si2=l2;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L89;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L89:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f938(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
F64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
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
f937(i,si0,si1,si2,si3);
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
sj0=i64_load32_u(&i->m0,(U64)si0+1U);
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1+7U);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l4;
sj2=i64_load16_u(&i->m0,(U64)si2+5U);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
si1=l4;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0|=sj1;
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
si1=63U;
si0+=si1;
l2=si0;
si1=-1074U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
sj0=53ULL;
l6=sj0;
si0=l2;
si1=1024U;
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
si1=51U;
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
sd2=f15373(i,sd2,si3);
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

void f939(rustpythonInstance*i,U32 l0) {
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
si2=1172088U;
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

U32 f940(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1182672U;
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

void f941(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f942(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f943(i,si0);
UNREACHABLE;
L0:;
}

void f943(rustpythonInstance*i,U32 l0) {
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
si1=1182680U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f944(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=1183020U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=85U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1182932U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
f942(i,si0);
UNREACHABLE;
L0:;
}

U32 f945(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1182700U;
si2=2U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f946(rustpythonInstance*i,U32 l0) {
L0:;
}

void f947(rustpythonInstance*i,U32 l0) {
L0:;
}

void f948(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1182704U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f949(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
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
si1=1182704U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f950(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f951(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f952(rustpythonInstance*i,U32 l0,U32 l1) {
L0:;
}

void f953(rustpythonInstance*i,U32 l0) {
L0:;
}

void f954(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f944(i);
UNREACHABLE;
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
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
si1=44U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=60U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l6;
si1=1182932U;
si2=l7;
si3=2U;
si2=si2 == si3;
l2=si2;
si0=si2?si0:si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l3;
si3=1182732U;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f955(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1183036U;
si3=14U;
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
si2=1183052U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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
L3:;
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

U32 f956(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f957(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f958(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f959(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1183084U;
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
si1=1183098U;
si2=8U;
si3=l0;
si4=4U;
si3+=si4;
si4=1183108U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1183124U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1183068U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L7;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L7:;
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
goto L8;
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
L8:;
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
L5:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1183130U;
si2=23U;
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
si1=1183098U;
si2=8U;
si3=l0;
si4=4U;
si3+=si4;
si4=1183108U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1183124U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=1183068U;
si0=f715(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L9;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L9:;
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
goto L1;
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
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1183153U;
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
si1=1183171U;
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
si1=1183190U;
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

U64 f960(rustpythonInstance*i,U64 l0,U64 l1,U64 l2,U32 l3) {
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
si4=1185432U;
f963(i,si0,si1,si2,si3,si4);
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

U32 f961(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f962(rustpythonInstance*i,U32 l0) {
L0:;
}

void f963(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1185448U;
si3=l5;
si4=4U;
si3+=si4;
si4=1185448U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f964(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=144U;
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
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1185652U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1185660U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=1185796U;
f683(i,si0,si1);
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
L19:;
{
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L18;
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
goto L21;
}
si0=l4;
si1=l6;
sj1=(U64)(si1);
l7=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
L22:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l1;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l1;
si1=-87U;
si0+=si1;
l9=si0;
goto L23;
L24:;
si0=l1;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=229U;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l1;
si1=-55U;
si0+=si1;
l9=si0;
L23:;
si0=l8;
si1=l5;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l8;
si1=l3;
si0+=si1;
l5=si0;
si0=64U;
si1=l6;
si0=REM_U(si0,si1);
if(si0){
goto L26;
}
si0=l4;
si1=120U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=100U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+96U,si1);
sj0=2ULL;
l7=sj0;
goto L25;
L26:;
si0=l4;
si1=128U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=124U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+96U,sj1);
sj0=3ULL;
l7=sj0;
L25:;
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f977(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l10=sj0;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=8U;
l2=si0;
si0=0U;
l9=si0;
si0=0U;
l1=si0;
goto L9;
L27:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l7=sj0;
L29:;
{
sj0=l10;
si0=(U32)(sj0);
l5=si0;
si0=!(si0);
if(si0){
goto L28;
}
sj0=l7;
sj1=l11;
si2=l5;
sj0=si2?sj0:sj1;
l10=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
f975(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
L30:;
sj0=l7;
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f977(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
goto L29;
}
L28:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
goto L8;
L21:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
L31:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l8;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l8;
si1=-87U;
si0+=si1;
l9=si0;
goto L32;
L33:;
si0=l8;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=229U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l8;
si1=-55U;
si0+=si1;
l9=si0;
L32:;
si0=l6;
si1=l5;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=255U;
si1&=si2;
si2=40U;
si1*=si2;
si2=1206512U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=56U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=268435453U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l5;
si1=2U;
si0+=si1;
l9=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l5;
si1=268435454U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l2;
if(si0){
goto L36;
}
si0=l8;
l5=si0;
goto L35;
L36:;
si0=l8;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l8;
si1=l2;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=0U;
si2=l2;
si0=f15392(i,si0,si1,si2);
goto L34;
L37:;
si0=l2;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L35:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
L34:;
si0=l4;
si1=40U;
si0+=si1;
si1=l5;
si2=l9;
si3=l6;
si4=l3;
si5=l1;
sj5=(U64)(si5);
sj6=255ULL;
sj5&=sj6;
f979(i,si0,si1,si2,si3,si4,sj5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L38;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
f15271(i,si0);
si0=l6;
f15271(i,si0);
goto L1;
L38:;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l4;
si2=88U;
si1+=si2;
f1026(i,si0,si1);
si0=l6;
f15271(i,si0);
goto L1;
L20:;
si0=l2;
si1=l5;
si0+=si1;
l9=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l9;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L19;
}
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l4;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1186264U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1186028U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=1186400U;
f683(i,si0,si1);
UNREACHABLE;
L17:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l4;
si2=64U;
si1+=si2;
si2=1185464U;
si3=l4;
si4=88U;
si3+=si4;
si4=1185616U;
f965(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
f53(i);
UNREACHABLE;
L15:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=1186028U;
si1=43U;
si2=1186208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1186028U;
si1=43U;
si2=1186208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l8;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
L9:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=-1U;
l3=si0;
L41:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=l2;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L41;
}
}
si0=l9;
si1=l3;
si0-=si1;
l5=si0;
switch(si0){
case 0:
goto L40;
case 1:
goto L42;
default:
goto L43;
}
L43:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=l5;
si3=l9;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
f15271(i,si0);
goto L1;
L42:;
si0=l9;
si0=!(si0);
if(si0){
goto L44;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L39;
L44:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L39:;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15271(i,si0);
si0=l8;
f15271(i,si0);
goto L1;
L8:;
si0=l8;
f15271(i,si0);
goto L1;
L6:;
si0=l0;
si1=l2;
si2=l3;
f1075(i,si0,si1,si2);
goto L1;
L5:;
si0=l0;
si1=l2;
si2=l3;
f1074(i,si0,si1,si2);
goto L1;
L4:;
si0=l0;
si1=l2;
si2=l3;
f1073(i,si0,si1,si2);
L1:;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f965(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1185828U;
si3=l5;
si4=4U;
si3+=si4;
si4=1185828U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f966(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f967(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1186013U;
si2=1186008U;
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

U32 f968(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f969(rustpythonInstance*i,U32 l0) {
L0:;
}

void f970(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1185812U;
si3=l5;
si4=4U;
si3+=si4;
si4=1185812U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f971(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=382U;
i32_store(&i->m0,(U64)si0+4U,si1);
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f983(i,si0,si1);
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

void f972(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si4=1185956U;
f737(i,si0,si1,si2,si3,si4);
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
f964(i,si0,si1,si2,si3);
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
si1=l1;
si2=l1;
si3=l5;
si2+=si3;
f978(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
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
f964(i,si0,si1,si2,si3);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L14:;
si0=l1;
f15271(i,si0);
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

U32 f973(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1185972U;
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
si1=1185988U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1185992U;
si0=f715(i,si0,si1,si2,si3,si4);
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
L3:;
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
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f974(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f975(rustpythonInstance*i,U32 l0,U32 l1) {
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
f974(i,si0,si1,si2,si3);
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

void f976(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f974(i,si0,si1,si2,si3);
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

void f977(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=32U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
si0=sj0 >= sj1;
sj0=(U64)(si0);
l3=sj0;
si0=l1;
sj0=(U64)(si0);
l4=sj0;
goto L1;
L19:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=32U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=(U32)(sj0);
l6=si0;
goto L5;
L18:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L21;
}
sj0=0ULL;
l4=sj0;
sj0=0ULL;
l5=sj0;
goto L6;
L21:;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l8=si2;
si1-=si2;
sj1=(U64)(si1);
sj0*=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l5=sj0;
sj0=0ULL;
l4=sj0;
L22:;
{
si0=l2;
si1=1U;
si0+=si1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l3;
si1=32U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l6;
sj0=(U64)(si0);
sj1=l5;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
sj0=l5;
sj1=l3;
sj0+=sj1;
l5=sj0;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
goto L22;
}
L17:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=41U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
goto L23;
L24:;
si0=l8;
si1=l2;
si0=si0 != si1;
if(si0){
goto L25;
}
sj0=0ULL;
l4=sj0;
goto L9;
L25:;
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
sj0=l5;
si1=32U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+40U,si1);
sj0=l5;
l3=sj0;
L23:;
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L26;
}
sj0=0ULL;
l4=sj0;
sj0=l9;
l7=sj0;
goto L14;
L26:;
si0=l6;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l4=sj0;
sj0=0ULL;
l10=sj0;
sj0=l9;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
sj0=l9;
l7=sj0;
sj0=0ULL;
l9=sj0;
sj0=l3;
l5=sj0;
sj0=l4;
l11=sj0;
goto L13;
L27:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l9;
sj1=l3;
sj0-=sj1;
l7=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
goto L4;
L16:;
si0=l1;
si1=48U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l1;
si3=32U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l5=sj2;
si2=(U32)(sj2);
l6=si2;
si3=7U;
si2&=si3;
si1>>=(si2&31);
l2=si1;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L15:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
sj0=l9;
l5=sj0;
goto L6;
L14:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l9;
sj1=l7;
sj0-=sj1;
l9=sj0;
sj0=0ULL;
l3=sj0;
L28:;
{
sj0=l5;
si1=32U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si2=I32_CLZ(si2);
si1-=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
si0=sj0 < sj1;
if(si0){
goto L8;
}
si0=l6;
sj0=(U64)(si0);
l11=sj0;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+40U,si1);
sj0=l7;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L29;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l11;
sj1=l9;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
sj0=l7;
sj1=l5;
si0=sj0 != sj1;
if(si0){
goto L30;
}
sj0=1ULL;
l3=sj0;
si0=1U;
l6=si0;
goto L7;
L30:;
sj0=l7;
sj1=l5;
sj0-=sj1;
l7=sj0;
sj0=l9;
sj1=l5;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=l8;
si0=si0 == si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L28;
}
goto L11;
L29:;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
sj0=l9;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
sj0=l4;
l10=sj0;
L13:;
si0=l1;
sj1=l5;
sj2=l7;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l6;
si2=255U;
si1&=si2;
sj2=l7;
si2=(U32)(sj2);
si3=7U;
si2&=si3;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0+40U,si1);
sj0=255ULL;
sj1=255ULL;
sj2=-1ULL;
sj3=l7;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l7;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l11;
sj0&=sj1;
sj1=l9;
sj0<<=(sj1&63);
sj1=l10;
sj0|=sj1;
l4=sj0;
goto L4;
L12:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l3=sj0;
L31:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L8;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l8;
si0=si0 == si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L31;
}
}
L11:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
L10:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+41U,si1);
L9:;
sj0=2ULL;
sj1=1ULL;
sj2=l4;
si2=!(sj2);
sj0=si2?sj0:sj1;
l3=sj0;
goto L1;
L8:;
si0=0U;
l6=si0;
L7:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L1;
L6:;
sj0=2ULL;
sj1=1ULL;
sj2=l5;
si2=!(sj2);
sj0=si2?sj0:sj1;
l3=sj0;
goto L1;
L5:;
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=-1U;
si1=-1U;
si2=l6;
si3=255U;
si2&=si3;
si1<<=(si2&31);
si2=-1U;
si1^=si2;
si2=-1U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=7ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
si1=l2;
si0&=si1;
sj0=(U64)(si0);
l4=sj0;
L4:;
sj0=1ULL;
l3=sj0;
goto L1;
L3:;
sj0=0ULL;
l3=sj0;
goto L1;
L2:;
sj0=2ULL;
l3=sj0;
L1:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f978(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
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
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=l6;
si2=1U;
f976(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
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

void f979(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
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
goto L6;
}
sj0=l5;
si0=(U32)(sj0);
l7=si0;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l7;
si1=40U;
si0*=si1;
si1=1206528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
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
goto L8;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L10;
}
si0=l11;
l8=si0;
goto L9;
L10:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L8;
L11:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l8=si0;
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
L8:;
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
f1149(i,si0,si1,si2,si3,sj4,si5);
si0=l6;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l10=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
si0=l9;
si1=65U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l15;
si1=l16;
si0=f15277(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=0U;
si2=l16;
si0=f15392(i,si0,si1,si2);
goto L13;
L15:;
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
si6=l10;
si7=l12;
si8=l14;
si9=8U;
si10=l9;
f980(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
goto L12;
L14:;
si0=l16;
si1=1U;
si0=f15273(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
L13:;
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
si6=l10;
si7=l12;
si8=l14;
si9=l11;
si10=l9;
f980(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l11;
f15271(i,si0);
L12:;
si0=l13;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
f15271(i,si0);
L16:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
f15271(i,si0);
goto L5;
L7:;
si0=1186576U;
si1=25U;
si2=1186556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
f981(i,si0,si1,si2,si3,si4,sj5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
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
L4:;
si0=l7;
si1=257U;
si2=1224404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l15;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f980(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
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
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l8;
if(si0){
goto L2;
}
si0=l11;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
f981(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L1;
L2:;
si0=l8;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l6;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l4;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l11;
si1=56U;
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
f980(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
goto L1;
L15:;
si0=l13;
si1=l4;
si2=l13;
si1-=si2;
l14=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l14;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l11;
si1=40U;
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
f980(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+44U);
l15=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+40U);
l16=si0;
goto L16;
L17:;
si0=l11;
si1=32U;
si0+=si1;
si1=l9;
si2=l10;
si3=l3;
si4=l14;
sj5=l5;
f981(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+32U);
l16=si0;
L16:;
si0=0U;
l4=si0;
si0=l16;
if(si0){
goto L18;
}
goto L1;
L18:;
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
goto L20;
}
si0=l18;
si1=1U;
si0+=si1;
l12=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l12;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=0U;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
goto L19;
L20:;
si0=l16;
si1=l2;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l17;
si1=l15;
si0=si0 >= si1;
l19=si0;
if(si0){
goto L22;
}
si0=l15;
si1=l17;
si0=f1359(i,si0,si1);
l20=si0;
goto L21;
L22:;
si0=l17;
si1=l15;
si0=f1359(i,si0,si1);
l20=si0;
L21:;
si0=l20;
if(si0){
goto L24;
}
si0=8U;
l21=si0;
goto L23;
L24:;
si0=l20;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l20;
si1=3U;
si0<<=(si1&31);
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l20;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l23=si0;
si0=l22;
if(si0){
goto L26;
}
si0=l23;
l21=si0;
goto L25;
L26:;
si0=l23;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l23;
si1=l22;
si0=f15277(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l21;
si1=0U;
si2=l22;
si0=f15392(i,si0,si1,si2);
goto L23;
L27:;
si0=l22;
si1=1U;
si0=f15273(i,si0,si1);
l21=si0;
L25:;
si0=l21;
si0=!(si0);
if(si0){
goto L9;
}
L23:;
si0=l15;
si1=l10;
si0=si0 > si1;
if(si0){
goto L8;
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
goto L29;
}
si0=l23;
si1=l22;
si2=l9;
si3=l15;
si4=l12;
si5=l17;
si6=l21;
si7=l20;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L28;
L29:;
si0=l23;
si1=l22;
si2=l12;
si3=l17;
si4=l9;
si5=l15;
si6=l21;
si7=l20;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L28:;
si0=l16;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
si1=0U;
si2=l16;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L30:;
si0=l20;
si0=!(si0);
if(si0){
goto L19;
}
si0=l21;
f15271(i,si0);
L19:;
si0=l3;
si1=l14;
si0+=si1;
l3=si0;
si0=l13;
si1=7100U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l18;
si1=1U;
si0+=si1;
l14=si0;
si1=l10;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l11;
si1=24U;
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
f980(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
goto L31;
L32:;
si0=l11;
si1=16U;
si0+=si1;
si1=l9;
si2=l10;
si3=l3;
si4=l13;
sj5=l5;
f981(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
L31:;
si0=l8;
if(si0){
goto L33;
}
goto L1;
L33:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=l10;
si0=si0 > si1;
if(si0){
goto L5;
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
L34:;
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
goto L36;
}
si0=l3;
l4=si0;
goto L35;
L36:;
si0=l3;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
l5=sj1;
si1=!(sj1);
si0|=si1;
l4=si0;
L35:;
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
goto L34;
}
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L37;
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
goto L3;
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
L38:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L37;
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
goto L3;
}
goto L38;
}
L37:;
si0=1187148U;
si1=59U;
si2=1187208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l11;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l5;
f981(i,si0,si1,si2,si3,si4,sj5);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
goto L1;
L13:;
si0=1187224U;
si1=34U;
si2=1187260U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l12;
si1=l2;
si2=1187036U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1187312U;
si1=35U;
si2=1187052U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l23;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l15;
si1=l10;
si2=1187068U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1187312U;
si1=35U;
si2=1187084U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1187312U;
si1=35U;
si2=1187100U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=l10;
si2=1187116U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l8;
si1=l7;
si2=1187020U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
goto L39;
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
L39:;
si0=l8;
si1=l2;
si2=1187132U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f981(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
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
goto L13;
}
sj0=l5;
sj1=255ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
sj0=l5;
si0=(U32)(sj0);
l7=si0;
si1=40U;
si0*=si1;
l8=si0;
si1=1206528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
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
goto L9;
}
si0=l8;
si1=1206520U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj0=l5;
sj1=10ULL;
si0=sj0 == sj1;
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si0=l7;
si1=255U;
si0&=si1;
l16=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
l17=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=l3;
l18=si0;
L16:;
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
goto L20;
}
si0=1U;
l12=si0;
L21:;
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
goto L19;
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
goto L21;
}
}
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
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
goto L23;
}
si0=l23;
si1=1073741820U;
si0&=si1;
l22=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L24:;
{
si0=l6;
si1=176U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L24;
}
}
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L25;
}
L26:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L26;
}
}
L25:;
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
goto L27;
}
si0=l22;
si1=-8U;
si0+=si1;
l8=si0;
si0=l15;
l12=si0;
L28:;
{
si0=l8;
if(si0){
goto L29;
}
sj0=1ULL;
l19=sj0;
goto L27;
L29:;
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
goto L28;
}
}
L27:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l20=sj0;
si0=!(sj0);
if(si0){
goto L17;
}
si0=l1;
si1=l22;
si0+=si1;
si1=0U;
si2=l21;
si0=si2?si0:si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
l10=si0;
goto L17;
L22:;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
l10=si0;
goto L17;
L19:;
si0=1186788U;
si1=31U;
si2=1186900U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
L17:;
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
goto L16;
}
goto L10;
}
L15:;
si0=l6;
si1=260U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l6;
si1=1187304U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l6;
si1=1187276U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l6;
si1=248U;
si0+=si1;
si1=1186608U;
f683(i,si0,si1);
UNREACHABLE;
L14:;
si0=1186932U;
si1=28U;
si2=1186960U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1186976U;
si1=26U;
si2=1187004U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=1U;
si1=l6;
si2=244U;
si1+=si2;
si2=1186604U;
si3=l6;
si4=248U;
si3+=si4;
si4=1186916U;
f970(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si0=l7;
si1=255U;
si0&=si1;
l16=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
l17=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=l3;
l18=si0;
L30:;
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
goto L31;
}
si0=1U;
l12=si0;
L32:;
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
goto L6;
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
goto L32;
}
}
L31:;
si0=l10;
si0=!(si0);
if(si0){
goto L34;
}
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
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
goto L35;
}
si0=l23;
si1=1073741820U;
si0&=si1;
l22=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L36:;
{
si0=l6;
si1=96U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L36;
}
}
L35:;
si0=l8;
si0=!(si0);
if(si0){
goto L37;
}
L38:;
{
si0=l6;
si1=80U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L38;
}
}
L37:;
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
goto L39;
}
si0=l22;
si1=-8U;
si0+=si1;
l8=si0;
si0=l15;
l12=si0;
L40:;
{
si0=l8;
if(si0){
goto L41;
}
sj0=1ULL;
l19=sj0;
goto L39;
L41:;
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
goto L40;
}
}
L39:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l20=sj0;
si0=!(sj0);
if(si0){
goto L33;
}
si0=l1;
si1=l22;
si0+=si1;
si1=0U;
si2=l21;
si0=si2?si0:si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
l10=si0;
goto L33;
L34:;
sj0=l19;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L42;
}
si0=0U;
l10=si0;
goto L33;
L42:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
L33:;
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
goto L30;
}
}
L10:;
si0=l11;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l11;
si1=l4;
si2=1186624U;
f662(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l11;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si2=255U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
sj0=(U64)(si0);
l24=sj0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l11;
si2=-1U;
si1^=si2;
si2=l4;
si1+=si2;
l9=si1;
si0+=si1;
l8=si0;
sj0=10ULL;
l14=sj0;
sj0=l5;
sj1=10ULL;
si0=sj0 != sj1;
if(si0){
goto L45;
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
L46:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
si1=9U;
si0=si0 > si1;
if(si0){
goto L44;
}
sj0=l14;
sj1=10ULL;
sj0*=sj1;
l14=sj0;
sj0=l24;
sj1=10ULL;
sj0*=sj1;
si1=l9;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L46;
}
goto L3;
}
L45:;
si0=l9;
if(si0){
goto L43;
}
sj0=l5;
l14=sj0;
goto L3;
L44:;
si0=1186700U;
si1=24U;
si2=1186724U;
f673(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l7;
si1=255U;
si0&=si1;
l22=si0;
sj0=l5;
l14=sj0;
L47:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l9;
sj0=(U64)(si0);
l20=sj0;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L48;
}
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
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L47;
L48:;
}
si0=1186788U;
si1=31U;
si2=1186820U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1186640U;
si1=43U;
si2=1186884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1186640U;
si1=43U;
si2=1186684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1186700U;
si1=24U;
si2=1186836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l21;
si1=l2;
si2=1186868U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1186852U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l10;
if(si0){
goto L53;
}
sj0=l24;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L52;
}
si0=0U;
l23=si0;
si0=1U;
l12=si0;
goto L1;
L53:;
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
goto L51;
}
si0=1186640U;
si1=43U;
si2=1186772U;
f673(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l2;
si0=!(si0);
if(si0){
goto L49;
}
si0=l1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l23=si0;
si0=1U;
l12=si0;
goto L1;
L51:;
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
goto L55;
}
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
goto L54;
L55:;
si0=l8;
si1=1073741820U;
si0&=si1;
l8=si0;
sj0=0ULL;
l20=sj0;
si0=l1;
l12=si0;
L56:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L56;
}
}
L54:;
si0=l9;
si0=!(si0);
if(si0){
goto L57;
}
L58:;
{
si0=l6;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L58;
}
}
L57:;
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
goto L59;
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
L60:;
{
si0=l9;
if(si0){
goto L61;
}
sj0=1ULL;
l5=sj0;
goto L59;
L61:;
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
goto L60;
}
}
L59:;
sj0=l5;
sj1=l20;
sj0+=sj1;
l14=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L62;
}
si0=l10;
l23=si0;
si0=1U;
l12=si0;
goto L1;
L62:;
si0=l1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l23;
si0=si2?si0:si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l12=si0;
goto L1;
L50:;
si0=l23;
si1=l2;
si2=1186756U;
f666(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=0U;
si1=0U;
si2=1186740U;
f663(i,si0,si1,si2);
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

U32 f982(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f983(i,si0,si1);
L0:;
return si0;
}

U32 f983(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L8;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L7;
L8:;
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
goto L11;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=4294967295ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
sj0=l5;
si0=(U32)(sj0);
si1=1U;
si0+=si1;
l0=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
goto L1;
L11:;
si0=1U;
l0=si0;
si0=1U;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=8U;
l7=si0;
si0=0U;
l8=si0;
goto L9;
L10:;
si0=l0;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
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
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
if(si0){
goto L13;
}
si0=l9;
l7=si0;
goto L12;
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l7=si0;
goto L12;
L14:;
si0=l8;
si0=f15269(i,si0);
l7=si0;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l0;
si1=l6;
si2=l0;
sj3=10ULL;
si4=l7;
si5=l3;
si6=l8;
si4=f15390(i,si4,si5,si6);
l9=si4;
si5=l4;
si6=2U;
si1=f1150(i,si1,si2,sj3,si4,si5,si6);
l8=si1;
si2=l0;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
l3=si0;
si0=l6;
l0=si0;
L16:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=35U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si2=87U;
si3=l8;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l8;
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
goto L16;
}
}
L15:;
si0=l2;
si1=24U;
si0+=si1;
si1=l6;
si2=l7;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si2=1187348U;
si3=0U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+28U);
si5=l2;
si6=32U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
f15271(i,si0);
L17:;
si0=l6;
f15271(i,si0);
L7:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L6:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+28U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=1189604U;
si1=43U;
si2=l2;
si3=40U;
si2+=si3;
si3=1189784U;
si4=1189800U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1187348U;
si1=43U;
si2=1189816U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f984(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f985(i,si0,si1);
L0:;
return si0;
}

U32 f985(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L11;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L6;
}
sj0=l3;
si0=(U32)(sj0);
l7=si0;
if(si0){
goto L12;
}
si0=1U;
l8=si0;
goto L3;
L12:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l8=si0;
if(si0){
goto L8;
}
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l1;
si1=1U;
si2=1103808U;
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
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L8:;
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
si1=1188504U;
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
si1=1188504U;
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
si0=1187348U;
si1=43U;
si2=1189920U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1187348U;
si1=43U;
si2=1189904U;
f673(i,si0,si1,si2);
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
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1187348U;
si1=43U;
si2=1189888U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=l7;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1189868U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
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
si0=1189604U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1189784U;
si4=1189872U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f986(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f987(i,si0,si1);
L0:;
return si0;
}

U32 f987(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
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
goto L6;
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
goto L5;
}
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
if(si0){
goto L8;
}
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l1;
si1=1U;
si2=1103806U;
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
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L8:;
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
goto L4;
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
L7:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1187348U;
si1=43U;
si2=1189852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l7;
si2=l6;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1189832U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15271(i,si0);
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
si0=1189604U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1189784U;
si4=1189836U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f988(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f989(i,si0,si1);
L0:;
return si0;
}

U32 f989(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
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
sj0=f1304(i,sj0,si1,si2);
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
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
goto L5;
}
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
if(si0){
goto L8;
}
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l1;
si1=1U;
si2=1103804U;
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
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L2;
L8:;
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
goto L4;
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
L7:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1187348U;
si1=43U;
si2=1189956U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1189936U;
si3=2U;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+20U);
si5=l2;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
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
si0=1189604U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1189784U;
si4=1189940U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f990(rustpythonInstance*i,U32 l0) {
L0:;
}

void f991(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
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
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
L0:;
}

void f992(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
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
l3=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L8;
}
si0=8U;
l1=si0;
si0=0U;
l5=si0;
goto L7;
L8:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L10;
}
si0=l6;
l1=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l1=si0;
goto L9;
L11:;
si0=l5;
si0=f15269(i,si0);
l1=si0;
L9:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L7:;
si0=l1;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l3=si0;
L5:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
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
f1076(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L12:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L13;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
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
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f993(rustpythonInstance*i,U32 l0,U64 l1) {
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
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
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
f1193(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
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

void f994(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
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
f1193(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
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
f992(i,si0,si1,sj2);
goto L2;
L12:;
si0=l0;
si1=4U;
si0+=si1;
l7=si0;
si1=l1;
si2=4U;
si1+=si2;
si0=f1083(i,si0,si1);
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
f15271(i,si0);
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
f15271(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f995(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
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
f1193(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
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
f1082(i,si0,si1,si2);
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
f992(i,si0,si1,sj2);
L0:;
}

void f996(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
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
l4=si0;
goto L7;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L10;
}
si0=8U;
l1=si0;
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L12;
}
si0=l7;
l1=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l1=si0;
goto L11;
L13:;
si0=l6;
si0=f15269(i,si0);
l1=si0;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l4=si0;
L7:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
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
f1323(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L16:;
{
sj0=0ULL;
l2=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L15;
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
goto L16;
}
}
si0=l4;
switch(si0){
case 0:
goto L15;
case 1:
goto L17;
default:
goto L18;
}
L18:;
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
si3=l5;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l2=sj0;
si0=1U;
l1=si0;
goto L14;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
L15:;
si0=0U;
l1=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
f15271(i,si0);
L19:;
si0=0U;
l6=si0;
L14:;
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
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L20;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L20:;
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

U32 f997(rustpythonInstance*i,U32 l0,U64 l1) {
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
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
f15271(i,si0);
L11:;
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
L0:;
return si0;
}

U32 f998(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f997(i,si0,sj1);
goto L0;
L2:;
si0=l0;
si1=8U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
f15271(i,si0);
L19:;
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
sj0=l2;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
f15271(i,si0);
L20:;
si0=l1;
L0:;
return si0;
}

U32 f999(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L3;
}
si0=l0;
sj1=l2;
si0=f997(i,si0,sj1);
goto L0;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
si0=0U;
goto L0;
L3:;
si0=1U;
l3=si0;
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
l5=si0;
sj1=l2;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si1=1U;
si0&=si1;
l9=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=0U;
l10=si0;
goto L6;
L7:;
si0=l6;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l4=si0;
si0=l8;
l3=si0;
si0=l7;
l1=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l2;
sj3=l12;
si2=sj2 <= sj3;
sj3=l2;
sj4=l12;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l3;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l2=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l2;
si0=sj0 <= sj1;
sj1=l14;
sj2=l2;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l8;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
sj1=l12;
si0=sj0 <= sj1;
sj1=l2;
sj2=l12;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L9:;
si0=l5;
si1=l6;
si0=si0 == si1;
l1=si0;
if(si0){
goto L10;
}
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L11:;
{
si0=l3;
if(si0){
goto L12;
}
si0=1U;
goto L0;
L12:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l2;
si0=!(sj0);
if(si0){
goto L11;
}
goto L5;
}
L10:;
si0=1U;
l3=si0;
si0=l1;
si1=l4;
si0&=si1;
if(si0){
goto L1;
}
L5:;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
if(si0){
goto L14;
}
sj0=0ULL;
l2=sj0;
goto L13;
L14:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l3=si0;
L18:;
{
si0=l4;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L16;
}
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si1=l3;
si0-=si1;
l13=si0;
L16:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=l10;
si2=l13;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L15:;
sj0=0ULL;
l2=sj0;
si0=0U;
l3=si0;
si0=l10;
switch(si0){
case 0:
goto L13;
case 1:
goto L19;
default:
goto L1;
}
L19:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
L13:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
f15271(i,si0);
L20:;
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
L0:;
return si0;
}

U32 f1000(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L8;
}
L9:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
sj2=l3;
f996(i,si0,si1,sj2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L10:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l4=si0;
goto L11;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L14;
}
si0=8U;
l1=si0;
si0=0U;
l6=si0;
goto L13;
L14:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L16;
}
si0=l7;
l1=si0;
goto L15;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l1=si0;
goto L15;
L17:;
si0=l6;
si0=f15269(i,si0);
l1=si0;
L15:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L13:;
si0=l1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l4=si0;
L11:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
sj0=l3;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L18:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L6:;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=l0;
si3=4U;
si2+=si3;
si0=f1328(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L19;
}
sj0=0ULL;
l3=sj0;
goto L3;
L19:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l4=si0;
L23:;
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
goto L22;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
goto L21;
}
L22:;
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
si1=l4;
si0-=si1;
l7=si0;
L21:;
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l0;
si1=l5;
si2=l7;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L20:;
sj0=0ULL;
l3=sj0;
si0=0U;
l4=si0;
si0=l5;
switch(si0){
case 0:
goto L3;
case 1:
goto L24;
default:
goto L1;
}
L24:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
goto L3;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
f15271(i,si0);
L25:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=0U;
l4=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f1001(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=0U;
l1=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L12;
}
si0=8U;
l2=si0;
si0=0U;
l6=si0;
goto L11;
L12:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L14;
}
si0=l7;
l2=si0;
goto L13;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l2=si0;
goto L13;
L15:;
si0=l6;
si0=f15269(i,si0);
l2=si0;
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L11:;
si0=l2;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L9:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
l5=si2;
si3=l2;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l2=si3;
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=l6;
si2=l1;
si3=l5;
si4=l2;
f1324(i,si0,si1,si2,si3,si4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L19:;
{
sj0=0ULL;
l4=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L19;
}
}
si0=l1;
switch(si0){
case 0:
goto L18;
case 1:
goto L20;
default:
goto L21;
}
L21:;
sj0=l8;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l1;
si3=l5;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l4=sj0;
si0=1U;
l2=si0;
goto L17;
L20:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
L18:;
si0=0U;
l2=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
f15271(i,si0);
L22:;
si0=0U;
l6=si0;
L17:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l1;
sj2=l4;
f996(i,si0,si1,sj2);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1002(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
sj0=l1;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
default:
goto L3;
}
L3:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1187740U;
f683(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
sj2=l1;
f1345(i,si0,si1,sj2);
si0=l4;
if(si0){
goto L6;
}
sj0=0ULL;
l1=sj0;
goto L4;
L6:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l3;
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L10;
}
goto L8;
}
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si1=l7;
si0-=si1;
l6=si0;
L8:;
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=l4;
si2=l6;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L7:;
sj0=0ULL;
l1=sj0;
si0=l4;
switch(si0){
case 0:
goto L4;
case 1:
goto L11;
default:
goto L1;
}
L11:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
goto L4;
L5:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l1;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l0;
si1=8U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
f15271(i,si0);
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1003(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
if(si0){
goto L14;
}
goto L2;
L19:;
si0=l5;
if(si0){
goto L16;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L17;
L18:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si0=sj0 == sj1;
if(si0){
goto L2;
}
L17:;
sj0=l6;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L13;
}
sj0=l6;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
default:
goto L12;
}
L16:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L15:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l5;
f1352(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L20:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L20;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
default:
goto L9;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l6;
f1343(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L24:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L24;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L23;
case 1:
goto L25;
default:
goto L26;
}
L26:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L27:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L22;
L28:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l6;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L12:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187756U;
f683(i,si0,si1);
UNREACHABLE;
L11:;
si0=l4;
if(si0){
goto L30;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=0U;
l2=si0;
goto L29;
L30:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L32;
}
si0=8U;
l1=si0;
si0=0U;
l4=si0;
goto L31;
L32:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
if(si0){
goto L34;
}
si0=l7;
l1=si0;
goto L33;
L34:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l7;
si1=l4;
si0=f15277(i,si0,si1);
l1=si0;
goto L33;
L35:;
si0=l4;
si0=f15269(i,si0);
l1=si0;
L33:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
L31:;
si0=l1;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l6=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l6;
sj0|=sj1;
l6=sj0;
si0=1U;
l2=si0;
L29:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L36:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L37;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L37:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l7;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1004(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L9;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
f15271(i,si0);
L12:;
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L11:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l4;
if(si0){
goto L7;
}
L8:;
sj0=l8;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L13;
case 1:
goto L1;
default:
goto L13;
}
L13:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1187772U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj1=l8;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l3=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=8U;
l4=si0;
si0=l1;
si1=l3;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l7;
if(si0){
goto L17;
}
si0=l10;
l4=si0;
goto L16;
L17:;
si0=l10;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l10;
si1=l7;
si0=f15277(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L15;
L18:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
L16:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
si0=l4;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l11=si2;
si3=l1;
si4=l5;
si5=l3;
f1353(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L21;
}
sj0=0ULL;
l12=sj0;
goto L20;
L21:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l3=si0;
L25:;
{
si0=l4;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L25;
}
goto L23;
}
L24:;
si0=l6;
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
si1=l3;
si0-=si1;
l7=si0;
L23:;
si0=l6;
l1=si0;
si0=l6;
si1=l7;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l6;
si2=l7;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L22:;
sj0=0ULL;
l12=sj0;
si0=l1;
switch(si0){
case 0:
goto L26;
case 1:
goto L27;
default:
goto L19;
}
L27:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L26:;
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
f15271(i,si0);
L20:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L19:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
f15271(i,si0);
goto L2;
L14:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L28:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L6:;
si0=l0;
sj1=l8;
f1002(i,si0,sj1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l10;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1005(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
f15271(i,si0);
goto L2;
L13:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
if(si0){
goto L2;
}
goto L3;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L11:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=8U;
l6=si0;
si0=l4;
si1=l5;
si0-=si1;
l7=si0;
si1=1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l9;
if(si0){
goto L9;
}
si0=l10;
l6=si0;
goto L8;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l10;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l10;
si1=l9;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=0U;
si2=l9;
si0=f15392(i,si0,si1,si2);
goto L7;
L14:;
si0=l9;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l6;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l10=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l5;
f1354(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L17;
}
sj0=0ULL;
l11=sj0;
goto L16;
L17:;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
L21:;
{
si0=l6;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l8;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si1=l4;
si0-=si1;
l5=si0;
L19:;
si0=l8;
l1=si0;
si0=l8;
si1=l5;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l8;
si2=l5;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L22:;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
L18:;
sj0=0ULL;
l11=sj0;
si0=l1;
switch(si0){
case 0:
goto L23;
case 1:
goto L24;
default:
goto L15;
}
L24:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
L23:;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15271(i,si0);
L16:;
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L15:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
f15271(i,si0);
goto L1;
L6:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L25:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l10;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L27;
}
sj0=l11;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L26;
case 1:
goto L1;
default:
goto L26;
}
L27:;
si0=l0;
sj1=l11;
f1002(i,si0,sj1);
goto L1;
L26:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1187788U;
f683(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1006(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
sj0=l2;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187932U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l4=si0;
goto L7;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L10;
}
si0=8U;
l1=si0;
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L12;
}
si0=l7;
l1=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l1=si0;
goto L11;
L13:;
si0=l6;
si0=f15269(i,si0);
l1=si0;
L11:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l4=si0;
L7:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1278(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L17:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=1U;
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
goto L17;
}
}
si0=l5;
si1=l4;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L16;
case 1:
goto L18;
default:
goto L19;
}
L19:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L20:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L15;
L21:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l2;
sj1=DIV_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1007(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
goto L1;
L2:;
si0=l5;
if(si0){
goto L15;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L13;
}
L15:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l4;
if(si0){
goto L11;
}
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L14:;
si0=l4;
if(si0){
goto L10;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187948U;
f683(i,si0,si1);
UNREACHABLE;
L12:;
si0=l4;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=0U;
l4=si0;
goto L16;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L19;
}
si0=8U;
l1=si0;
si0=0U;
l5=si0;
goto L18;
L19:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l5;
if(si0){
goto L21;
}
si0=l2;
l1=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l2;
si1=l5;
si0=f15277(i,si0,si1);
l1=si0;
goto L20;
L22:;
si0=l5;
si0=f15269(i,si0);
l1=si0;
L20:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
L18:;
si0=l1;
si1=l6;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l8=sj0;
si0=1U;
l4=si0;
L16:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
sj1=l8;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=8U;
l6=si0;
si0=l5;
si1=l4;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L26;
}
si0=l11;
l6=si0;
goto L25;
L26:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L24;
L27:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
L24:;
si0=l6;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l5;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l4;
f1287(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=2U;
si0+=si1;
l4=si0;
L29:;
{
si0=l1;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l6;
si1=l1;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L29;
}
}
si0=l4;
switch(si0){
case 0:
goto L28;
case 1:
goto L30;
default:
goto L31;
}
L31:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=l4;
si3=l7;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L30:;
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
f15271(i,si0);
goto L5;
L32:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15271(i,si0);
goto L5;
L23:;
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187984U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188008U;
f683(i,si0,si1);
UNREACHABLE;
L10:;
si0=l0;
si1=l1;
sj2=l8;
f1006(i,si0,si1,sj2);
goto L1;
L9:;
si0=l2;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187984U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1187992U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
if(si0){
goto L2;
}
L3:;
si0=l5;
if(si0){
goto L13;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=l7;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L11;
}
L14:;
si0=l4;
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L12;
}
L15:;
si0=l0;
si1=l1;
sj2=l7;
f1006(i,si0,si1,sj2);
goto L1;
L13:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l4;
if(si0){
goto L9;
}
sj0=l7;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188024U;
f683(i,si0,si1);
UNREACHABLE;
L10:;
si0=l4;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=0U;
l2=si0;
goto L16;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L19;
}
si0=8U;
l1=si0;
si0=0U;
l4=si0;
goto L18;
L19:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
if(si0){
goto L21;
}
si0=l6;
l1=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l6;
si1=l4;
si0=f15277(i,si0,si1);
l1=si0;
goto L20;
L22:;
si0=l4;
si0=f15269(i,si0);
l1=si0;
L20:;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
L18:;
si0=l1;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l7=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=1U;
l2=si0;
L16:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l8=si1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=8U;
l5=si0;
si0=l8;
si1=l4;
si0-=si1;
l9=si0;
si1=1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L27;
}
si0=l11;
l5=si0;
goto L26;
L27:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L25;
L28:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L26:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
L25:;
si0=l5;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l8;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l4;
f1288(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l9;
si1=2U;
si0+=si1;
l2=si0;
L30:;
{
si0=l1;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l5;
si1=l1;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L30;
}
}
si0=l2;
switch(si0){
case 0:
goto L29;
case 1:
goto L31;
default:
goto L23;
}
L31:;
si0=l6;
si0=!(si0);
if(si0){
goto L32;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
f15271(i,si0);
goto L1;
L32:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L24:;
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187984U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188056U;
f683(i,si0,si1);
UNREACHABLE;
L23:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l2;
si3=l6;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L8:;
si0=l6;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187984U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188040U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1009(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
l5=si0;
goto L4;
L20:;
si0=l5;
if(si0){
goto L17;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L18;
L19:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si0=sj0 == sj1;
if(si0){
goto L5;
}
L18:;
sj0=l6;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l6;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
default:
goto L14;
}
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L16:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
si0=8U;
l2=si0;
goto L10;
L15:;
si0=l4;
if(si0){
goto L22;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
sj1=l7;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l7=sj1;
sj2=l6;
sj1*=sj2;
sj0-=sj1;
l6=sj0;
si0=0U;
l1=si0;
goto L21;
L22:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l6;
f1230(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+12U);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L24:;
{
sj0=0ULL;
l7=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L24;
}
}
si0=l2;
switch(si0){
case 0:
goto L23;
case 1:
goto L25;
default:
goto L26;
}
L26:;
sj0=l8;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l2;
si3=l5;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l7=sj0;
si0=1U;
l1=si0;
goto L21;
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
L23:;
si0=0U;
l1=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
f15271(i,si0);
L27:;
si0=0U;
l4=si0;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L14:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188200U;
f683(i,si0,si1);
UNREACHABLE;
L13:;
si0=l4;
if(si0){
goto L29;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=0U;
l2=si0;
goto L28;
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L31;
}
si0=8U;
l1=si0;
si0=0U;
l4=si0;
goto L30;
L31:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l4;
if(si0){
goto L33;
}
si0=l9;
l1=si0;
goto L32;
L33:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l9;
si1=l4;
si0=f15277(i,si0,si1);
l1=si0;
goto L32;
L34:;
si0=l4;
si0=f15269(i,si0);
l1=si0;
L32:;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
L30:;
si0=l1;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l7=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=1U;
l2=si0;
L28:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L11:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l1;
if(si0){
goto L36;
}
si0=l9;
l2=si0;
goto L35;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l9;
si1=l1;
si0=f15277(i,si0,si1);
l2=si0;
goto L35;
L37:;
si0=l1;
si0=f15269(i,si0);
l2=si0;
L35:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=l2;
si1=l5;
si2=l1;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
sj1=(U64)(si1);
l7=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l9;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l5;
f1241(i,si0,si1,si2,si3,si4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+12U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L40:;
{
sj0=0ULL;
l7=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L40;
}
}
si0=l2;
switch(si0){
case 0:
goto L39;
case 1:
goto L41;
default:
goto L42;
}
L42:;
sj0=l6;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l2;
si3=l9;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l7=sj0;
si0=1U;
l10=si0;
goto L38;
L41:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
L39:;
si0=0U;
l10=si0;
sj0=l6;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l4;
f15271(i,si0);
L43:;
si0=0U;
l4=si0;
L38:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
L46:;
{
sj0=0ULL;
l6=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L45;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L46;
}
}
si0=l2;
switch(si0){
case 0:
goto L45;
case 1:
goto L47;
default:
goto L48;
}
L48:;
sj0=l8;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l2;
si3=l9;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l6=sj0;
si0=1U;
l1=si0;
goto L44;
L47:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
L45:;
si0=0U;
l1=si0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l5;
f15271(i,si0);
L49:;
si0=0U;
l5=si0;
L44:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1010(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15271(i,si0);
goto L2;
L11:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
if(si0){
goto L2;
}
goto L3;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si2=l5;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l6;
f1241(i,si0,si1,si2,si3,si4);
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l12=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L7;
}
sj0=0ULL;
l14=sj0;
goto L5;
L8:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l12;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l15=si0;
si0=0U;
l5=si0;
L15:;
{
si0=l7;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si1=l5;
si0-=si1;
l15=si0;
L13:;
si0=l12;
si1=l15;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=l12;
si2=l15;
si1-=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L16:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L12:;
sj0=0ULL;
l14=sj0;
si0=l12;
switch(si0){
case 0:
goto L5;
case 1:
goto L17;
default:
goto L4;
}
L17:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
goto L5;
L6:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l11;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
f15271(i,si0);
L18:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
L22:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L22;
}
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L21;
case 1:
goto L23;
default:
goto L24;
}
L24:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=l2;
si3=l9;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L19;
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L20;
L25:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
si0=l6;
f15271(i,si0);
L19:;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
goto L1;
L3:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L30;
}
sj0=l14;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L29;
case 1:
goto L28;
default:
goto L29;
}
L30:;
si0=l4;
if(si0){
goto L31;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l16=sj1;
sj2=l14;
sj1=DIV_U(sj1,sj2);
l17=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l16;
sj1=l17;
sj2=l14;
sj1*=sj2;
sj0-=sj1;
l14=sj0;
goto L26;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
sj2=l14;
sj0=f1232(i,si0,si1,sj2);
l14=sj0;
si0=l7;
if(si0){
goto L32;
}
sj0=0ULL;
l16=sj0;
goto L27;
L32:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
L36:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L36;
}
}
si0=l4;
l5=si0;
goto L34;
L35:;
si0=l5;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l1;
si1=l7;
si2=l5;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L33:;
sj0=0ULL;
l16=sj0;
si0=l7;
switch(si0){
case 0:
goto L27;
case 1:
goto L37;
default:
goto L26;
}
L37:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
goto L27;
L29:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188216U;
f683(i,si0,si1);
UNREACHABLE;
L28:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L27:;
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
f15271(i,si0);
L38:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
L26:;
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1011(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L4:;
si0=l4;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f1009(i,si0,si1,si2);
si0=l4;
si1=16U;
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
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l6=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l6;
si0=(U32)(sj0);
l7=si0;
if(si0){
goto L11;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L10;
}
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L6;
case 4:
goto L7;
default:
goto L9;
}
L10:;
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
L9:;
si0=1187532U;
si1=40U;
si2=1188456U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l6=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l6;
si0=(U32)(sj0);
if(si0){
goto L14;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l6=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
goto L12;
L14:;
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l4;
si1=48U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l1=si0;
L17:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l6;
si0=!(sj0);
if(si0){
goto L17;
}
goto L12;
}
L16:;
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=l4;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=l3;
f1193(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L12;
L13:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L12;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+48U,si1);
L12:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L7:;
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=382U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1188424U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=382U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=1188440U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
si1=l4;
si2=16U;
si1+=si2;
si2=l4;
si3=32U;
si2+=si3;
si3=l2;
f1317(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
L5:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
f1003(i,si0,si1,si2);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1012(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f1010(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L5;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L1;
}
L5:;
si0=l2;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L9;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L8;
}
L9:;
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
si2=24U;
si1+=si2;
f994(i,si0,si1);
goto L2;
L8:;
si0=1187532U;
si1=40U;
si2=1188488U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=l1;
f1318(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L2;
L6:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1188260U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1188472U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l3;
si1=24U;
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
si2=24U;
si1+=si2;
f1004(i,si0,si1);
goto L1;
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L1:;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L10;
default:
goto L11;
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L10:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1013(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=1U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L5;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
L5:;
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l1;
if(si0){
goto L7;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l2;
sj1=l3;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
goto L0;
L7:;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
sj0=l3;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l4=si0;
sj0=-1ULL;
sj1=-1ULL;
sj2=l3;
sj2=I64_CTZ(sj2);
l5=sj2;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l2=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l2;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
sj0>>=(sj1&63);
l3=sj0;
L8:;
si0=l0;
si1=l1;
sj2=l3;
sj3=0ULL;
sj0=f1099(i,si0,si1,sj2,sj3);
si0=!(sj0);
l4=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1100(i,si0,si1,si2,si3);
goto L0;
L3:;
si0=1202574U;
si1=30U;
si2=1202604U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
goto L0;
L1:;
si0=l4;
L0:;
return si0;
}

void f1014(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
sj0=l4;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L4;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l4;
sj0=f1355(i,si0,si1,sj2);
l4=sj0;
goto L6;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0=REM_U(sj0,sj1);
l4=sj0;
L6:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188776U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
sj1=l4;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=l5;
si4=l6;
f1357(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L13:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L13;
}
}
si0=l7;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L14;
default:
goto L15;
}
L15:;
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L16:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L11;
L17:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
goto L8;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
if(si0){
goto L21;
}
si0=8U;
l6=si0;
si0=0U;
l1=si0;
goto L20;
L21:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l1;
if(si0){
goto L23;
}
si0=l8;
l6=si0;
goto L22;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l8;
si1=l1;
si0=f15277(i,si0,si1);
l6=si0;
goto L22;
L24:;
si0=l1;
si0=f15269(i,si0);
l6=si0;
L22:;
si0=l6;
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=l0;
si1=l6;
si2=l7;
si3=l1;
si1=f15390(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=(U64)(si1);
l9=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=l8;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
L8:;
sj0=l4;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1015(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1188792U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l4;
sj0=f1355(i,si0,si1,sj2);
l4=sj0;
goto L7;
L8:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0=REM_U(sj0,sj1);
l4=sj0;
L7:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l5;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l6;
f1357(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L15;
}
}
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
default:
goto L17;
}
L17:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
L18:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L13;
L19:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
if(si0){
goto L21;
}
si0=8U;
l1=si0;
si0=0U;
l2=si0;
goto L20;
L21:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l2;
if(si0){
goto L23;
}
si0=l7;
l1=si0;
goto L22;
L23:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l7;
si1=l2;
si0=f15277(i,si0,si1);
l1=si0;
goto L22;
L24:;
si0=l2;
si0=f15269(i,si0);
l1=si0;
L22:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
L20:;
si0=l0;
si1=l1;
si2=l6;
si3=l2;
si1=f15390(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
l4=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l4;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l7;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1016(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
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
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l3;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L4;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
sj2=l3;
sj0=f1355(i,si0,si1,sj2);
l3=sj0;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f15271(i,si0);
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l3;
sj1=REM_U(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1187608U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1188808U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
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
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=8U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L13;
}
si0=l8;
l6=si0;
goto L12;
L13:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L11;
L14:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l6;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l8=si2;
si3=l4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+4U);
si5=l5;
f1358(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L17;
}
sj0=0ULL;
l3=sj0;
goto L16;
L17:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
L21:;
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
goto L20;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l5;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si1=l4;
si0-=si1;
l9=si0;
L19:;
si0=l5;
l1=si0;
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l0;
si1=l5;
si2=l9;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L18:;
sj0=0ULL;
l3=sj0;
si0=l1;
switch(si0){
case 0:
goto L22;
case 1:
goto L23;
default:
goto L15;
}
L23:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L22:;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15271(i,si0);
L16:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L15:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
goto L1;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1017(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L11;
}
sj0=l4;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
L11:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L12;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L9;
}
L12:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L13;
}
sj0=l8;
si0=!(sj0);
if(si0){
goto L8;
}
L13:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=(U32)(sj0);
l11=si0;
si0=l7;
if(si0){
goto L14;
}
sj0=l6;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
L14:;
si0=l9;
if(si0){
goto L4;
}
sj0=l8;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L10:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L7:;
si0=l9;
if(si0){
goto L16;
}
si0=0U;
l2=si0;
goto L15;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l11;
if(si0){
goto L18;
}
si0=8U;
l3=si0;
si0=0U;
l2=si0;
goto L17;
L18:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L20;
}
si0=l5;
l3=si0;
goto L19;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l5;
si1=l2;
si0=f15277(i,si0,si1);
l3=si0;
goto L19;
L21:;
si0=l2;
si0=f15269(i,si0);
l3=si0;
L19:;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
L17:;
si0=l3;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
sj0=l8;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l10;
sj0|=sj1;
l8=sj0;
si0=1U;
l2=si0;
L15:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l7;
si1=l5;
si0|=si1;
if(si0){
goto L4;
}
si0=l0;
sj1=l8;
sj2=l6;
sj3=l4;
sj1=f1316(i,sj1,sj2,sj3);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l5;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
if(si0){
goto L29;
}
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L28;
}
goto L23;
L29:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l13;
if(si0){
goto L31;
}
si0=l3;
l14=si0;
goto L30;
L31:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l3;
si1=l13;
si0=f15277(i,si0,si1);
l14=si0;
goto L30;
L32:;
si0=l13;
si0=f15269(i,si0);
l14=si0;
L30:;
si0=l14;
if(si0){
goto L27;
}
si0=l3;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L28:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
l13=si0;
si0=8U;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l14;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l12=si0;
goto L26;
L27:;
si0=l14;
si1=l5;
si2=l13;
si0=f15390(i,si0,si1,si2);
L26:;
si0=0U;
l15=si0;
si0=l13;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L24;
}
goto L22;
L25:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=0U;
l12=si0;
si0=8U;
l14=si0;
si0=1U;
l15=si0;
si0=8U;
l5=si0;
L22:;
si0=l9;
if(si0){
goto L37;
}
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L36;
}
si0=8U;
l3=si0;
si0=0U;
l11=si0;
goto L35;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l11;
if(si0){
goto L38;
}
si0=8U;
l3=si0;
si0=8U;
si1=l9;
si2=0U;
si0=f15390(i,si0,si1,si2);
goto L35;
L38:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l1;
if(si0){
goto L40;
}
si0=l13;
l3=si0;
goto L39;
L40:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l13;
si1=l1;
si0=f15277(i,si0,si1);
l3=si0;
goto L39;
L41:;
si0=l1;
si0=f15269(i,si0);
l3=si0;
L39:;
si0=l3;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
si1=l9;
si2=l1;
si0=f15390(i,si0,si1,si2);
goto L35;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l11=si0;
L35:;
si0=l7;
if(si0){
goto L46;
}
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L45;
}
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=8U;
si5=0U;
si6=l14;
si7=l12;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L42;
L46:;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L47;
}
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=8U;
si5=l1;
si6=l14;
si7=l12;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L42;
L47:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l7;
if(si0){
goto L49;
}
si0=l9;
l2=si0;
goto L48;
L49:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L50;
}
si0=l9;
si1=l7;
si0=f15277(i,si0,si1);
l2=si0;
goto L48;
L50:;
si0=l7;
si0=f15269(i,si0);
l2=si0;
L48:;
si0=l2;
if(si0){
goto L44;
}
si0=l9;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L45:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=l2;
si5=1U;
si6=l14;
si7=l12;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L43;
L44:;
si0=l5;
si1=l12;
si2=l3;
si3=l11;
si4=l2;
si5=l13;
si6=l7;
si4=f15390(i,si4,si5,si6);
si5=l1;
si6=l14;
si7=l12;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
L43:;
si0=l2;
f15271(i,si0);
L42:;
si0=l11;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
f15271(i,si0);
L51:;
si0=l12;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=-1U;
l2=si0;
L55:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L55;
}
}
si0=l12;
si1=l2;
si0-=si1;
l3=si0;
switch(si0){
case 0:
goto L54;
case 1:
goto L56;
default:
goto L57;
}
L57:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
si2=l3;
si3=l12;
si4=l3;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L52;
L56:;
si0=l15;
if(si0){
goto L58;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L53;
L58:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
if(si0){
goto L52;
}
L53:;
si0=l5;
f15271(i,si0);
L52:;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
f15271(i,si0);
goto L0;
L34:;
si0=l13;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L33:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
L0:;
}

void f1018(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
sj0=l3;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L3;
}
L6:;
si0=l6;
si0=!(si0);
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l7;
si0=!(si0);
sj1=l5;
sj2=1ULL;
si1=sj1 == sj2;
si0&=si1;
if(si0){
goto L1;
}
si0=l6;
if(si0){
goto L2;
}
sj0=l8;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l7;
si1=l4;
si0|=si1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
sj1=l8;
sj2=l5;
sj3=l3;
sj1=f1316(i,sj1,sj2,sj3);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L8:;
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1187576U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l4;
if(si0){
goto L19;
}
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L18;
}
goto L13;
L19:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l10;
if(si0){
goto L21;
}
si0=l2;
l11=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l2;
si1=l10;
si0=f15277(i,si0,si1);
l11=si0;
goto L20;
L22:;
si0=l10;
si0=f15269(i,si0);
l11=si0;
L20:;
si0=l11;
if(si0){
goto L17;
}
si0=l2;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
l10=si0;
si0=8U;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l9=si0;
goto L16;
L17:;
si0=l11;
si1=l4;
si2=l10;
si0=f15390(i,si0,si1,si2);
L16:;
si0=0U;
l12=si0;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
goto L12;
L15:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=0U;
l9=si0;
si0=8U;
l11=si0;
si0=1U;
l12=si0;
si0=8U;
l4=si0;
L12:;
si0=l6;
si0=!(si0);
if(si0){
goto L25;
}
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L24;
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
L24:;
si0=l7;
if(si0){
goto L30;
}
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=8U;
si5=0U;
si6=l11;
si7=l9;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L26;
L30:;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
if(si0){
goto L31;
}
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=8U;
si5=l6;
si6=l11;
si7=l9;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L26;
L31:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l7;
if(si0){
goto L33;
}
si0=l14;
l1=si0;
goto L32;
L33:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l14;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l14;
si1=l7;
si0=f15277(i,si0,si1);
l1=si0;
goto L32;
L34:;
si0=l7;
si0=f15269(i,si0);
l1=si0;
L32:;
si0=l1;
if(si0){
goto L28;
}
si0=l14;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=l1;
si5=1U;
si6=l11;
si7=l9;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L27;
L28:;
si0=l4;
si1=l9;
si2=l2;
si3=l10;
si4=l1;
si5=l13;
si6=l7;
si4=f15390(i,si4,si5,si6);
si5=l6;
si6=l11;
si7=l9;
f1089(i,si0,si1,si2,si3,si4,si5,si6,si7);
L27:;
si0=l1;
f15271(i,si0);
L26:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l9;
sj0=(U64)(si0);
l5=sj0;
si0=-1U;
l1=si0;
L37:;
{
sj0=0ULL;
l3=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L37;
}
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L36;
case 1:
goto L38;
default:
goto L39;
}
L39:;
si0=l9;
si1=l2;
si2=l9;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l5;
sj0|=sj1;
l3=sj0;
si0=1U;
l2=si0;
goto L35;
L38:;
si0=l12;
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L36:;
si0=0U;
l2=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
f15271(i,si0);
L40:;
si0=0U;
l4=si0;
L35:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L41:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15271(i,si0);
goto L0;
L23:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f1019(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f1020(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=l4;
si2=l2;
si3=l5;
si4=l1;
f1366(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l3;
si1=l5;
si2=l1;
si3=l4;
si4=l2;
f1366(i,si0,si1,si2,si3,si4);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L12:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
f1020(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1020(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L8;
}
sj0=l2;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
default:
goto L9;
}
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=0U;
l5=si0;
goto L5;
L9:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
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
f1197(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L14;
}
si0=8U;
l1=si0;
si0=0U;
l7=si0;
goto L13;
L14:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L16;
}
si0=l8;
l1=si0;
goto L15;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l1=si0;
goto L15;
L17:;
si0=l7;
si0=f15269(i,si0);
l1=si0;
L15:;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l1;
si1=l6;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l4=sj0;
si0=1U;
l5=si0;
goto L5;
L12:;
f53(i);
UNREACHABLE;
L11:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L19;
}
si0=0U;
l5=si0;
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L5;
case 1:
goto L18;
default:
goto L5;
}
L19:;
si0=l3;
sj1=l4;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
goto L3;
L18:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
sj0=8589934594ULL;
l2=sj0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1021(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si2=l6;
si3=l4;
si4=l5;
f1366(i,si0,si1,si2,si3,si4);
goto L6;
L7:;
si0=l2;
si1=l4;
si2=l5;
si3=l3;
si4=l6;
f1366(i,si0,si1,si2,si3,si4);
L6:;
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L8;
L9:;
si0=l4;
f15271(i,si0);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
if(si0){
goto L10;
}
sj0=0ULL;
l7=sj0;
goto L3;
L10:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L14:;
{
si0=l5;
si1=l3;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L14;
}
goto L12;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si1=l4;
si0-=si1;
l8=si0;
L12:;
si0=l6;
si1=l8;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l6;
si2=l8;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L11:;
sj0=0ULL;
l7=sj0;
si0=l6;
switch(si0){
case 0:
goto L3;
case 1:
goto L15;
default:
goto L2;
}
L15:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
goto L3;
L5:;
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
f1022(i,si0,sj1);
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
f1022(i,si0,sj1);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
f15271(i,si0);
L16:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
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
f15271(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1022(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
sj0=l1;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
default:
goto L3;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
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
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l5=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l5;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L7;
}
sj0=0ULL;
l8=sj0;
si0=l4;
l5=si0;
goto L6;
L7:;
si0=l6;
si1=1073741820U;
si0&=si1;
l6=si0;
sj0=0ULL;
l8=sj0;
si0=l4;
l5=si0;
L8:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
l9=sj1;
sj2=l8;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
l11=sj1;
si2=l2;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+64U);
l9=sj1;
si2=l2;
si3=80U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+48U);
l11=sj1;
si2=l2;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
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
L10:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
l9=sj1;
sj2=l8;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
L9:;
sj0=l8;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L11:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L1;
case 1:
goto L13;
default:
goto L1;
}
L13:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l2;
sj1=l8;
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=!(sj0);
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l5=si0;
if(si0){
goto L15;
}
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l5;
sj1=l8;
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
goto L1;
L14:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1023(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
si0=l0;
si1=l1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
f1020(i,si0,si1,sj2);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l3;
si2=l1;
si3=l4;
si4=l5;
f1366(i,si0,si1,si2,si3,si4);
goto L4;
L5:;
si0=l2;
si1=l4;
si2=l5;
si3=l3;
si4=l1;
f1366(i,si0,si1,si2,si3,si4);
L4:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l4;
f15271(i,si0);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L9;
}
sj0=0ULL;
l6=sj0;
goto L8;
L9:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l4=si0;
L13:;
{
si0=l3;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L13;
}
goto L11;
}
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=l4;
si0-=si1;
l7=si0;
L11:;
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l0;
si1=l5;
si2=l7;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L10:;
sj0=0ULL;
l6=sj0;
si0=l5;
switch(si0){
case 0:
goto L8;
case 1:
goto L14;
default:
goto L1;
}
L14:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
L8:;
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
f15271(i,si0);
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
f1022(i,si0,sj1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1024(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj1=f1246(i,sj1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f1381(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l3;
si1=l4;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1025(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L7;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l0=si0;
goto L1;
L6:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l1;
si2=1188232U;
si3=l2;
si4=8U;
si3+=si4;
si4=1189316U;
f1215(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l4;
if(si0){
goto L8;
}
si0=l6;
if(si0){
goto L12;
}
si0=255U;
l0=si0;
si0=-1U;
sj1=l3;
sj1=I64_CLZ(sj1);
l8=sj1;
si1=(U32)(sj1);
l1=si1;
sj2=l5;
sj2=I64_CLZ(sj2);
l9=sj2;
si2=(U32)(sj2);
l4=si2;
si1=si1 != si2;
si2=l1;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
default:
goto L11;
}
L12:;
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=1U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1203(i,si0,si1,si2,si3);
l0=si0;
goto L1;
L11:;
si0=-1U;
sj1=l3;
sj2=l5;
sj3=l9;
sj4=l8;
sj3-=sj4;
sj2<<=(sj3&63);
l5=sj2;
si1=sj1 != sj2;
sj2=l3;
sj3=l5;
si2=sj2 < sj3;
si0=si2?si0:si1;
l0=si0;
goto L1;
L10:;
si0=-1U;
sj1=l3;
sj2=l8;
sj3=l9;
sj2-=sj3;
sj1<<=(sj2&63);
l3=sj1;
sj2=l5;
si1=sj1 != sj2;
sj2=l3;
sj3=l5;
si2=sj2 < sj3;
si0=si2?si0:si1;
l0=si0;
goto L1;
L9:;
sj0=l3;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l5;
si0=sj0 != sj1;
l0=si0;
goto L1;
L8:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1203(i,si0,si1,si2,si3);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l0;
si2=1188232U;
si3=l2;
si4=8U;
si3+=si4;
si4=1189332U;
f1215(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
si2=l2;
si3=8U;
si2+=si3;
si3=1U;
si0=f1203(i,si0,si1,si2,si3);
l0=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1026(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=-1U;
l5=si0;
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L4;
}
}
si0=l2;
si1=l5;
si0-=si1;
l3=si0;
switch(si0){
case 0:
goto L3;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L7:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L8:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L2:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f1027(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
F64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L12;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L11;
}
L12:;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=253U;
si0&=si1;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=-2U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=-3U;
si0+=si1;
l5=si0;
si0=l7;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l3;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
sj1=52ULL;
sj0|=sj1;
l10=sj0;
si0=1U;
l11=si0;
sj0=192ULL;
l12=sj0;
si0=l6;
if(si0){
goto L15;
}
sj0=l8;
l13=sj0;
goto L8;
L20:;
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=255U;
l5=si0;
si0=1U;
l1=si0;
sj0=52ULL;
l13=sj0;
si0=-1U;
sj1=l4;
sj1=I64_CLZ(sj1);
l10=sj1;
sj2=11ULL;
si1=sj1 != sj2;
sj2=l4;
sj3=9007199254740991ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L2;
case 1:
goto L13;
default:
goto L14;
}
L19:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=52ULL;
l10=sj0;
si0=1U;
l11=si0;
sj0=128ULL;
l12=sj0;
sj0=0ULL;
l8=sj0;
sj0=l9;
l13=sj0;
goto L8;
L18:;
si0=l5;
si1=0U;
si2=1189492U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l5;
si1=1U;
si2=1189508U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l5;
si1=0U;
si2=1189524U;
f663(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=-24U;
si0+=si1;
l5=si0;
L21:;
{
si0=l5;
if(si0){
goto L22;
}
sj0=l8;
l13=sj0;
goto L8;
L22:;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L21;
}
}
si0=l2;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l11=si0;
sj0=l8;
l13=sj0;
si0=l7;
si1=3U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=-1U;
si1=3U;
si2=1189540U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
sj0=l4;
sj1=4503599627370495ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
sj0=11ULL;
sj1=l10;
sj0-=sj1;
l13=sj0;
sj0=52ULL;
l10=sj0;
si0=1U;
l11=si0;
sj0=0ULL;
l8=sj0;
sj0=0ULL;
l9=sj0;
goto L7;
L13:;
sj0=l4;
sj1=9007199254740992ULL;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
sj0=l10;
sj1=-11ULL;
sj0+=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l12;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L23;
}
sj0=l4;
sj1=l12;
sj0<<=(sj1&63);
l4=sj0;
sj0=63ULL;
sj1=l10;
sj0-=sj1;
l13=sj0;
goto L2;
L23:;
si0=1237680U;
si1=36U;
si2=1241700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l1;
si2=1188232U;
si3=l3;
si4=40U;
si3+=si4;
si4=1189588U;
f1215(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1187348U;
si1=43U;
si2=1187516U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
sj0=l12;
sj1=l13;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=-53ULL;
sj0+=sj1;
l13=sj0;
L7:;
si0=255U;
l5=si0;
si0=l6;
if(si0){
goto L25;
}
si0=l11;
l1=si0;
goto L24;
L25:;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=2U;
l1=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L28;
}
L29:;
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
si1=l1;
si2=6U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
goto L26;
L28:;
si0=1187348U;
si1=43U;
si2=1189556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
sj0=l4;
sj0=I64_CTZ(sj0);
l4=sj0;
L26:;
sj0=l4;
sj1=l13;
si0=sj0 < sj1;
if(si0){
goto L30;
}
si0=l11;
l1=si0;
goto L24;
L30:;
si0=255U;
l5=si0;
si0=0U;
l1=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L31;
case 1:
goto L6;
default:
goto L24;
}
L31:;
si0=0U;
l1=si0;
si0=l11;
sj1=l4;
sj2=l13;
sj3=-1ULL;
sj2+=sj3;
l12=sj2;
si1=sj1 == sj2;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l5=si0;
goto L24;
L32:;
sj0=l12;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=-1U;
si1=1U;
si2=l3;
sj3=l12;
sj4=6ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=1ULL;
sj4=l12;
sj3<<=(sj4&63);
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
L24:;
sj0=l13;
l4=sj0;
sj0=l13;
sj1=64ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l13;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l3;
si2=l7;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
si2=24U;
si3=l7;
si2-=si3;
si0=f15391(i,si0,si1,si2);
sj0=l13;
sj1=63ULL;
sj0&=sj1;
l4=sj0;
goto L3;
L6:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=1198692U;
si1=43U;
si2=1199188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=3U;
si2=1189572U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
sj0=l13;
sj1=l10;
sj0+=sj1;
l13=sj0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L33;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
goto L2;
L33:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
sj2=l4;
sj1-=sj2;
sj0<<=(sj1&63);
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1>>=(sj2&63);
sj0|=sj1;
l4=sj0;
L2:;
sj0=-1ULL;
sj1=4503599627370495ULL;
sj2=l4;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l4;
sj0&=sj1;
l10=sj0;
sj1=4503599627370496ULL;
si0=sj0 >= sj1;
if(si0){
goto L37;
}
sd0=INFINITY;
sj1=l10;
sj2=4607182418800017408ULL;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l14=sd1;
sd2=l14;
sd3=l14;
si2=sd2 != sd3;
l7=si2;
sd0=si2?sd0:sd1;
l14=sd0;
si0=l1;
if(si0){
goto L34;
}
si0=l2;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L38;
case 1:
goto L34;
case 2:
goto L38;
case 3:
goto L39;
default:
goto L34;
}
L39:;
si0=l5;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L40;
case 1:
goto L38;
default:
goto L34;
}
L40:;
sj0=l4;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L34;
}
L38:;
si0=l3;
sd1=l14;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l7;
if(si0){
goto L36;
}
sj0=-1ULL;
l4=sj0;
sd0=l14;
sj0=i64_reinterpret_f64(sd0);
l10=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L42;
}
sd0=l14;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L41;
}
sd0=0;
l14=sd0;
goto L34;
L42:;
si0=l3;
sj1=9218868437227405312ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
sd0=l14;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L35;
}
sj0=1ULL;
l4=sj0;
L41:;
sj0=l4;
sj1=l10;
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l14=sd0;
sd1=2;
si0=sd0 != sd1;
if(si0){
goto L34;
}
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
sd0=1;
l14=sd0;
goto L34;
L37:;
si0=1233345U;
si1=70U;
si2=1233416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1243080U;
si1=32U;
si2=1243112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l3;
si2=24U;
si1+=si2;
si2=l3;
si3=32U;
si2+=si3;
si3=l3;
si4=40U;
si3+=si4;
si4=1243064U;
f1216(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L34:;
si0=l0;
sd1=l14;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1028(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
goto L5;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l4;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l5;
si2=l2;
si3=l5;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
f1268(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1205800U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L14:;
si0=0U;
si1=0U;
si2=1205800U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1029(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=0U;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l4;
f1293(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=1U;
l2=si0;
L3:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
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
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1297(i,si0,si1,si2,si3,si4);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
f1293(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}


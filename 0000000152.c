#include "w2c2_base.h"

#include "rustpython.h"

U32 f15230(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=2940412U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=2940380U;
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

void f15231(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f15224(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
L5:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1U;
l5=si0;
si0=1U;
l6=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=l6;
si1=l4;
si2=l0;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l5;
si1=l4;
si2=l3;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
si2=l2;
si3=64U;
si2+=si3;
si3=l2;
si4=80U;
si3+=si4;
f15225(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
f15271(i,si0);
L8:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f15224(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15232(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
f15176(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+12U);
l3=si2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=l2;
si0-=si1;
l5=si0;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=l5;
si1-=si2;
l3=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l3;
si3=2U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L1:;
L0:;
}

U32 f15233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=65535U;
si0&=si1;
l3=si0;
si0=l0;
si1=16U;
si0>>=(si1&31);
l4=si0;
si0=1U;
l0=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l0=si0;
si1=-65521U;
si0+=si1;
si1=l0;
si2=l0;
si3=65520U;
si2=si2 > si3;
si0=si2?si0:si1;
l0=si0;
si1=l4;
si0+=si1;
l5=si0;
si1=16U;
si0<<=(si1&31);
l3=si0;
si1=983040U;
si0+=si1;
si1=l3;
si2=l5;
si3=65520U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l0;
si0|=si1;
goto L0;
L1:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=5552U;
si0=si0 < si1;
if(si0){
goto L7;
}
L8:;
{
si0=l2;
si1=-5552U;
si0+=si1;
l2=si0;
si0=0U;
l5=si0;
L9:;
{
si0=l3;
si1=l1;
si2=l5;
si1+=si2;
l0=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si1=l4;
si0+=si1;
si1=l3;
si2=l0;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=2U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=3U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=4U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=5U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=6U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=7U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=9U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=10U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=11U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=13U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=14U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
si1=l3;
si2=l0;
si3=15U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0+=si1;
l4=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si1=5552U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l4;
si1=65521U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si1=65521U;
si0=REM_U(si0,si1);
l3=si0;
si0=l1;
si1=5552U;
si0+=si1;
l1=si0;
si0=l2;
si1=5551U;
si0=si0 > si1;
if(si0){
goto L8;
}
}
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L6;
}
L7:;
L10:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l0=si0;
si1=l4;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+2U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+3U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+5U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+6U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+7U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+9U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+10U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+11U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+12U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+13U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+14U);
si1+=si2;
l0=si1;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+15U);
si1+=si2;
l3=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L10;
}
}
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=-1U;
si0+=si1;
l6=si0;
si0=l2;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l0=si0;
L12:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si1=l4;
si0+=si1;
l4=si0;
si0=l0;
si1=1U;
si0+=si1;
l1=si0;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l6;
si1=3U;
si0=si0 < si1;
if(si0){
goto L5;
}
L13:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l0=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
l5=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si0+=si1;
l6=si0;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si1=l6;
si2=l5;
si3=l0;
si4=l4;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
}
L5:;
si0=l4;
si1=65521U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si1=65521U;
si0=REM_U(si0,si1);
l3=si0;
L4:;
si0=l4;
si1=16U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
goto L0;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L16;
}
si0=l2;
l0=si0;
goto L15;
L16:;
si0=l2;
l0=si0;
si0=l1;
l5=si0;
L17:;
{
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si1=l4;
si0+=si1;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l1=si0;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
L15:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
L18:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l5=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
l2=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si0+=si1;
l6=si0;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si1=l6;
si2=l2;
si3=l5;
si4=l4;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l0;
si1=-4U;
si0+=si1;
l0=si0;
if(si0){
goto L18;
}
}
L14:;
si0=l4;
si1=65521U;
si0=REM_U(si0,si1);
si1=16U;
si0<<=(si1&31);
si1=l3;
si2=-65521U;
si1+=si2;
si2=l3;
si3=l3;
si4=65520U;
si3=si3 > si4;
si1=si3?si1:si2;
si0|=si1;
l0=si0;
L2:;
si0=l0;
L0:;
return si0;
}

U32 f15234(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si0=f15233(i,si0,si1,si2);
L0:;
return si0;
}

U32 f15235(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
si0=l1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=-1U;
si0^=si1;
l0=si0;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L2;
}
L3:;
{
si0=l1;
si1=7U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l1;
si3=5U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si5=3U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=l1;
si6=2U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si6=l1;
si7=1U;
si6+=si7;
si6=i32_load8_u(&i->m0,(U64)si6);
si7=l1;
si7=i32_load8_u(&i->m0,(U64)si7);
si8=l0;
si7^=si8;
si8=255U;
si7&=si8;
si8=2U;
si7<<=(si8&31);
si8=2940576U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
si8=l0;
si9=8U;
si8>>=(si9&31);
si7^=si8;
l0=si7;
si6^=si7;
si7=255U;
si6&=si7;
si7=2U;
si6<<=(si7&31);
si7=2940576U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si7=l0;
si8=8U;
si7>>=(si8&31);
si6^=si7;
l0=si6;
si5^=si6;
si6=255U;
si5&=si6;
si6=2U;
si5<<=(si6&31);
si6=2940576U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si7=8U;
si6>>=(si7&31);
si5^=si6;
l0=si5;
si4^=si5;
si5=255U;
si4&=si5;
si5=2U;
si4<<=(si5&31);
si5=2940576U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l0;
si6=8U;
si5>>=(si6&31);
si4^=si5;
l0=si4;
si3^=si4;
si4=255U;
si3&=si4;
si4=2U;
si3<<=(si4&31);
si4=2940576U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l0;
si5=8U;
si4>>=(si5&31);
si3^=si4;
l0=si3;
si2^=si3;
si3=255U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si3=2940576U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=8U;
si3>>=(si4&31);
si2^=si3;
l0=si2;
si1^=si2;
si2=255U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si2=2940576U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=8U;
si2>>=(si3&31);
si1^=si2;
l0=si1;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=2940576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L3;
}
}
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
l3=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=2940576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L5:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
L7:;
{
si0=l1;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l0;
si1^=si2;
si2=255U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si2=2940576U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=8U;
si2>>=(si3&31);
si1^=si2;
l0=si1;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=2940576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l0=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l3;
si1=-2U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=-1U;
si0^=si1;
L0:;
return si0;
}

U32 f15236(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si0=f15235(i,si0,si1,si2);
L0:;
return si0;
}

U32 f15237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=-6U;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=56U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=49U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=-2U;
l8=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=0U;
l9=si0;
si0=0U;
si1=l3;
si0-=si1;
l3=si0;
goto L3;
L4:;
si0=l3;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=1U;
l9=si0;
si0=0U;
l7=si0;
goto L2;
L5:;
si0=l3;
si1=-16U;
si0+=si1;
l3=si0;
si0=2U;
l9=si0;
L3:;
si0=1U;
l7=si0;
L2:;
si0=l5;
si1=4U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=6U;
si1=l1;
si2=l1;
si3=-1U;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si1=-10U;
si0+=si1;
si1=-9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=15U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0=si0 == si1;
si1=l7;
si0&=si1;
if(si0){
goto L1;
}
si0=-4U;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=1U;
si2=5828U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=42U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l4;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=128U;
si2=l4;
si1<<=(si2&31);
l8=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=9U;
si2=l3;
si3=l3;
si4=8U;
si3=si3 == si4;
si1=si3?si1:si2;
l7=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l8;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=1U;
si2=l7;
si1<<=(si2&31);
l8=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l4;
si2=9U;
si1+=si2;
si2=255U;
si1&=si2;
si2=3U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l8;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l8;
si3=2U;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+32U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=2U;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+32U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+76U);
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+32U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l8=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+5824U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=64U;
si2=l4;
si1<<=(si2&31);
l8=si1;
i32_store(&i->m0,(U64)si0+5788U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=l8;
si3=4U;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+32U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+5788U);
l7=si1;
si2=2U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=666U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2947536U;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=f15238(i,si0);
si0=-4U;
goto L0;
L6:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=8U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l8;
si2=l7;
si3=3U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+5784U,si1);
si0=l6;
si1=l8;
si2=l7;
si3=-2U;
si2&=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+5796U,si1);
si0=l0;
si0=f15239(i,si0);
l8=si0;
L1:;
si0=l8;
L0:;
return si0;
}

U32 f15238(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=-2U;
l1=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=-57U;
si0+=si1;
switch(si0){
case 0:
goto L2;
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
goto L2;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L1;
case 16:
goto L2;
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
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L2;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L1;
case 39:
goto L1;
case 40:
goto L1;
case 41:
goto L1;
case 42:
goto L1;
case 43:
goto L1;
case 44:
goto L1;
case 45:
goto L1;
case 46:
goto L2;
case 47:
goto L1;
case 48:
goto L1;
case 49:
goto L1;
case 50:
goto L1;
case 51:
goto L1;
case 52:
goto L1;
case 53:
goto L1;
case 54:
goto L1;
case 55:
goto L1;
case 56:
goto L2;
default:
goto L3;
}
L3:;
si0=l4;
si1=666U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=42U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=-3U;
si1=0U;
si2=l4;
si3=113U;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f15239(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=f15240(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+76U);
si2=1U;
si1<<=(si2&31);
si2=-2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
f15268(i,si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l0;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l0;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+132U);
si2=12U;
si1*=si2;
l2=si1;
si2=2941604U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l0;
si1=l2;
si2=2941600U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l0;
si1=l2;
si2=2941602U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l2;
si2=2941606U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+124U,si1);
L1:;
si0=l1;
L0:;
return si0;
}

U32 f15240(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=-2U;
l1=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=-57U;
si0+=si1;
switch(si0){
case 0:
goto L2;
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
goto L2;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L1;
case 16:
goto L2;
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
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L2;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L1;
case 39:
goto L1;
case 40:
goto L1;
case 41:
goto L1;
case 42:
goto L1;
case 43:
goto L1;
case 44:
goto L1;
case 45:
goto L1;
case 46:
goto L2;
case 47:
goto L1;
case 48:
goto L1;
case 49:
goto L1;
case 50:
goto L1;
case 51:
goto L1;
case 52:
goto L1;
case 53:
goto L1;
case 54:
goto L1;
case 55:
goto L1;
case 56:
goto L2;
default:
goto L3;
}
L3:;
si0=l3;
si1=666U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=42U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
si2=l1;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
L4:;
si0=l2;
si1=57U;
si2=42U;
si3=113U;
si4=l1;
si2=si4?si2:si3;
si3=l1;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
si1=0U;
si2=0U;
si0=f15236(i,si0,si1,si2);
l3=si0;
goto L5;
L6:;
si0=0U;
si1=0U;
si2=0U;
si0=f15234(i,si0,si1,si2);
l3=si0;
L5:;
si0=0U;
l1=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
f15258(i,si0);
L1:;
si0=l1;
L0:;
return si0;
}

U32 f15241(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=-2U;
l3=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=-57U;
si0+=si1;
switch(si0){
case 0:
goto L2;
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
goto L2;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L1;
case 16:
goto L2;
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
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L2;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L1;
case 39:
goto L1;
case 40:
goto L1;
case 41:
goto L1;
case 42:
goto L1;
case 43:
goto L1;
case 44:
goto L1;
case 45:
goto L1;
case 46:
goto L2;
case 47:
goto L1;
case 48:
goto L1;
case 49:
goto L1;
case 50:
goto L1;
case 51:
goto L1;
case 52:
goto L1;
case 53:
goto L1;
case 54:
goto L1;
case 55:
goto L1;
case 56:
goto L2;
default:
goto L3;
}
L3:;
si0=l5;
si1=666U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=42U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L1;
default:
goto L6;
}
L7:;
si0=l5;
si1=42U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si2=l2;
si0=f15234(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l2;
l3=si0;
goto L4;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l2;
l3=si0;
goto L4;
L8:;
si0=l6;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+76U);
si2=1U;
si1<<=(si2&31);
si2=-2U;
si1+=si2;
l5=si1;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
f15268(i,si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
L5:;
si0=l1;
si1=l2;
si2=l3;
si1-=si2;
si0+=si1;
l1=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
f15242(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l1=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
L10:;
{
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=2U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
L11:;
{
si0=l11;
si1=l10;
si2=l3;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l1;
si3=l14;
si2<<=(si3&31);
si3=l9;
si4=l3;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l13;
si2&=si3;
l1=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
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
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
f15242(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l1=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l4;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+108U,si1);
L1:;
si0=l3;
L0:;
return si0;
}

void f15242(rustpythonInstance*i,U32 l0) {
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
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si1=-262U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
L1:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
l4=si2;
si1+=si2;
si0-=si1;
l5=si0;
si0=l4;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+44U);
si1+=si2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=l6;
si2=l1;
si1+=si2;
si2=l1;
si3=l5;
si2-=si3;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l1;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si1=-1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l7;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l7;
si1=3U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
{
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
si1=0U;
si2=l9;
si2=i32_load16_u(&i->m0,(U64)si2);
l3=si2;
si3=l6;
si2-=si3;
l11=si2;
si3=l11;
si4=l3;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
L6:;
{
si0=l9;
si1=0U;
si2=l9;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=6U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=2U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=-1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l6;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l6;
si1=3U;
si0&=si1;
l10=si0;
if(si0){
goto L8;
}
si0=l6;
l7=si0;
goto L7;
L8:;
si0=l6;
l7=si0;
L9:;
{
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
si1=0U;
si2=l9;
si2=i32_load16_u(&i->m0,(U64)si2);
l3=si2;
si3=l6;
si2-=si3;
l11=si2;
si3=l11;
si4=l3;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
L7:;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
L11:;
{
si0=l9;
si1=0U;
si2=l9;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=6U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=2U;
si0+=si1;
l10=si0;
si1=0U;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l10=si2;
si3=l6;
si2-=si3;
l3=si2;
si3=l3;
si4=l10;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=l1;
si0+=si1;
l5=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l7;
si1=l5;
si2=l7;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=l6;
si1=l7;
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si0+=si1;
si1=l10;
si0+=si1;
l7=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
f15267(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+24U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
default:
goto L14;
}
L16:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l7;
si3=l9;
si1=f15234(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
goto L14;
L15:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l7;
si3=l9;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L14:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
L13:;
si0=l0;
si1=l10;
si2=l9;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5812U);
l9=si0;
si1=l3;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l10=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l9;
si2-=si3;
l6=si2;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+88U);
l11=si2;
si1<<=(si2&31);
si2=l7;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1^=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+84U);
l5=si2;
si1&=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=2U;
si0+=si1;
l4=si0;
L18:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l6;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l7;
si3=l11;
si2<<=(si3&31);
si3=l4;
si4=l6;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l5;
si2&=si3;
l7=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l10=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=-1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l10;
si1=l6;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=l9;
si0+=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L18;
}
}
L17:;
si0=l3;
si1=261U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
L12:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5824U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si1+=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l9;
si0+=si1;
si1=l7;
si2=l9;
si1-=si2;
l6=si1;
si2=258U;
si3=l6;
si4=258U;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
f15268(i,si0,si1);
si0=l6;
si1=l9;
si0+=si1;
l6=si0;
goto L20;
L21:;
si0=l9;
si1=258U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l6;
si0+=si1;
si1=l9;
si2=l6;
si1-=si2;
l9=si1;
si2=l7;
si3=l6;
si2-=si3;
l6=si2;
si3=l9;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
f15268(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5824U);
si1=l6;
si0+=si1;
l6=si0;
L20:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+5824U,si1);
L19:;
L0:;
}

U32 f15243(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=-2U;
l2=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=-57U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L4;
case 5:
goto L4;
case 6:
goto L4;
case 7:
goto L4;
case 8:
goto L4;
case 9:
goto L4;
case 10:
goto L4;
case 11:
goto L4;
case 12:
goto L5;
case 13:
goto L4;
case 14:
goto L4;
case 15:
goto L4;
case 16:
goto L5;
case 17:
goto L4;
case 18:
goto L4;
case 19:
goto L4;
case 20:
goto L4;
case 21:
goto L4;
case 22:
goto L4;
case 23:
goto L4;
case 24:
goto L4;
case 25:
goto L4;
case 26:
goto L4;
case 27:
goto L4;
case 28:
goto L4;
case 29:
goto L4;
case 30:
goto L4;
case 31:
goto L4;
case 32:
goto L4;
case 33:
goto L4;
case 34:
goto L5;
case 35:
goto L4;
case 36:
goto L4;
case 37:
goto L4;
case 38:
goto L4;
case 39:
goto L4;
case 40:
goto L4;
case 41:
goto L4;
case 42:
goto L4;
case 43:
goto L4;
case 44:
goto L4;
case 45:
goto L4;
case 46:
goto L5;
case 47:
goto L4;
case 48:
goto L4;
case 49:
goto L4;
case 50:
goto L4;
case 51:
goto L4;
case 52:
goto L4;
case 53:
goto L4;
case 54:
goto L4;
case 55:
goto L4;
case 56:
goto L5;
default:
goto L6;
}
L6:;
si0=l4;
si1=666U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=42U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l1;
si1=5U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=666U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l0;
si1=2947536U;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-2U;
goto L0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L10;
}
si0=l0;
si1=2947536U;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-5U;
goto L0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=l6;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=l2;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L11;
L14:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L12:;
si0=0U;
l6=si0;
si0=l2;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=-9U;
si1=0U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=-9U;
si2=0U;
si3=l5;
si4=4U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l5;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l0;
si1=2947536U;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-5U;
goto L0;
L11:;
si0=l4;
si1=42U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l4;
si1=666U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=2947536U;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-5U;
goto L0;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=12U;
si0<<=(si1&31);
si1=-30720U;
si0+=si1;
l4=si0;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l5=si0;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
si0=64U;
l2=si0;
si0=l5;
si1=6U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=128U;
si1=192U;
si2=l5;
si3=6U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
L20:;
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0+=si1;
si1=l2;
si2=l4;
si1|=si2;
l2=si1;
si2=32U;
si1|=si2;
si2=l2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+108U);
si1=si3?si1:si2;
l2=si1;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=31U;
si1=REM_U(si1,si2);
si2=l2;
si1|=si2;
si2=31U;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
l2=si1;
si2=24U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
l2=si1;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L21:;
si0=0U;
si1=0U;
si2=0U;
si0=f15234(i,si0,si1,si2);
l2=si0;
si0=l3;
si1=113U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
f15244(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L18:;
si0=l4;
si1=57U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l0;
si1=0U;
si2=0U;
si3=0U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=31U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=139U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=8U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
if(si0){
goto L27;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=2U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l4=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=4U;
si1=l4;
si2=2U;
si1=(U32)((I32)si1<(I32)si2);
si2=2U;
si1<<=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
si3=1U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l2=si0;
L30:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=113U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
f15244(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L29:;
si0=l4;
si1=-69U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L22;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L25;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L24;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L22;
case 26:
goto L22;
case 27:
goto L22;
case 28:
goto L22;
case 29:
goto L22;
case 30:
goto L22;
case 31:
goto L22;
case 32:
goto L22;
case 33:
goto L22;
case 34:
goto L23;
default:
goto L22;
}
L28:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L27:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=2U;
l4=si0;
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=0U;
si1=si1 != si2;
si2=1U;
si1<<=(si2&31);
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si2=si2 != si3;
si1|=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=0U;
si2=si2 != si3;
si3=2U;
si2<<=(si3&31);
si1|=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=0U;
si2=si2 != si3;
si3=3U;
si2<<=(si3&31);
si1|=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=0U;
si2=si2 != si3;
si3=4U;
si2<<=(si3&31);
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+4U);
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=6U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=7U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=4U;
si1=l2;
si2=2U;
si1=(U32)((I32)si1<(I32)si2);
si2=2U;
si1<<=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
si3=1U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l4=si0;
L31:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+20U);
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+20U);
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L33:;
si0=l3;
si1=69U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+20U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+32U);
l6=si2;
si1-=si2;
l5=si1;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l4;
si2=l6;
si1+=si2;
si2=l7;
si3=l2;
si2-=si3;
l6=si2;
f15267(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l2;
si2+=si3;
si3=l4;
si4=l2;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L36:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
f15261(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L1;
}
si0=l5;
si1=l6;
si0-=si1;
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L38;
}
L39:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+32U);
si1+=si2;
si2=l6;
f15267(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si0=!(si0);
if(si0){
goto L40;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l2;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L40:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
f15261(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l7=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L1;
}
si0=l5;
si1=l6;
si0-=si1;
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L39;
}
}
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=0U;
l2=si0;
L35:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l4;
si2=l6;
si1+=si2;
si2=l5;
f15267(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l5;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l2;
si2+=si3;
si3=l4;
si4=l2;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L42:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L34:;
si0=l3;
si1=73U;
i32_store(&i->m0,(U64)si0+4U,si1);
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L44:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l6;
si2+=si3;
si3=l2;
si4=l6;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L46:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
f15261(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si2=l4;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l4;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L47:;
si0=0U;
l2=si0;
si0=0U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L45:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+28U);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L44;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l6;
si2+=si3;
si3=l2;
si4=l6;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L48:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L43:;
si0=l3;
si1=91U;
i32_store(&i->m0,(U64)si0+4U,si1);
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L50:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L52;
}
si0=l2;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L52;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l6;
si2+=si3;
si3=l2;
si4=l6;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L52:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
f15261(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si2=l4;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l4;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L53:;
si0=0U;
l2=si0;
si0=0U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L51:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=i32_load(&i->m0,(U64)si1+36U);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L50;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L49;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l6;
si2+=si3;
si3=l2;
si4=l6;
si3-=si4;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L49:;
si0=l3;
si1=103U;
i32_store(&i->m0,(U64)si0+4U,si1);
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L54;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=2U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 <= si1;
if(si0){
goto L55;
}
si0=l0;
f15244(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
L55:;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=0U;
si3=0U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L54:;
si0=l3;
si1=113U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
f15244(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L16;
}
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L16;
}
si0=l1;
if(si0){
goto L56;
}
si0=0U;
goto L0;
L56:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=666U;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l2=si0;
if(si0){
goto L58;
}
si0=l3;
si1=l1;
si0=f15245(i,si0,si1);
l2=si0;
goto L57;
L58:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L61;
case 1:
goto L60;
default:
goto L59;
}
L61:;
si0=l3;
si1=l1;
si0=f15246(i,si0,si1);
l2=si0;
goto L57;
L60:;
si0=l3;
si1=l1;
si0=f15247(i,si0,si1);
l2=si0;
goto L57;
L59:;
si0=l3;
si1=l1;
si2=l2;
si3=12U;
si2*=si3;
si3=2941608U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l2=si0;
L57:;
si0=l2;
si1=-2U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l3;
si1=666U;
i32_store(&i->m0,(U64)si0+4U,si1);
L62:;
si0=l2;
si1=-3U;
si0&=si1;
if(si0){
goto L63;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L63:;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L66;
case 1:
goto L65;
case 2:
goto L65;
case 3:
goto L65;
case 4:
goto L64;
default:
goto L65;
}
L66:;
si0=l3;
f15262(i,si0);
goto L64;
L65:;
si0=l3;
si1=0U;
si2=0U;
si3=0U;
f15260(i,si0,si1,si2,si3);
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+76U);
si2=1U;
si1<<=(si2&31);
si2=-2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
f15268(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L64;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
L64:;
si0=l0;
f15244(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L15;
}
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L15:;
si0=0U;
l2=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=50U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=51U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=10U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=11U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L67;
L68:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=24U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+48U);
l2=si1;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L67:;
si0=l0;
f15244(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L69;
}
si0=l3;
si1=0U;
si2=l0;
si1-=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
l2=si0;
L4:;
si0=l2;
goto L0;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L2:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
goto L0;
L1:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
L0:;
return si0;
}

void f15244(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
f15261(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si2=l2;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l0=si1;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L1:;
L0:;
}

U32 f15245(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-5U;
si0+=si1;
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l3=si1;
si2=l2;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
l6=si0;
L2:;
{
si0=1U;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5820U);
si2=42U;
si1+=si2;
si2=3U;
si1=(U32)((I32)si1>>(si2&31));
l9=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l10=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
l11=si1;
si0-=si1;
l12=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
l3=si0;
si1=l2;
si2=l9;
si1-=si2;
l2=si1;
si2=l3;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=65535U;
si2=l2;
si3=65535U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l2;
si1=!(si1);
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=0U;
si2=0U;
si3=l1;
si4=4U;
si3=si3 == si4;
si4=l2;
si5=l3;
si4=si4 == si5;
si3&=si4;
l7=si3;
f15260(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=-4U;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=-3U;
si0+=si1;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=-2U;
si0+=si1;
si1=l2;
si2=-1U;
si1^=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=-1U;
si0+=si1;
si1=l3;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
f15261(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l13=si1;
si2=l9;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l9;
f15267(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l9;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l10;
si1=l11;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+92U);
si1+=si2;
si2=l12;
si3=l2;
si4=l12;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
l3=si2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si1=l2;
si2=l10;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l10;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
f15267(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+24U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L8;
}
L10:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l9;
si3=l8;
si1=f15234(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
goto L8;
L9:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l9;
si3=l8;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
L7:;
si0=l3;
si1=l9;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l7=si0;
L1:;
si0=l5;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l2=si0;
goto L11;
L12:;
si0=l5;
si1=l2;
si0-=si1;
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l2=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+5808U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1-=si2;
si2=l2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l8=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l8;
l2=si0;
goto L13;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
l8=si1;
si0-=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
si1=l8;
si2=l2;
si1-=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=l9;
si2=l2;
si1+=si2;
si2=l8;
f15267(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5808U);
l2=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5808U,si1);
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1-=si2;
si2=l3;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l3;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
L13:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l3;
si2=l8;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5812U);
l9=si3;
si2-=si3;
l8=si2;
si3=l3;
si4=l8;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+5812U,si1);
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5824U);
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+5824U,si1);
L16:;
si0=3U;
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
switch(si0){
case 0:
goto L18;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L18;
default:
goto L19;
}
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L18;
}
si0=1U;
l3=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=l2;
si3=-1U;
si2^=si3;
si1+=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l11=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l10=si1;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
si0=l0;
si1=l2;
si2=l10;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l11;
si2=l10;
si1-=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=l3;
si2=l10;
si1+=si2;
si2=l2;
f15267(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5808U);
l2=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5808U,si1);
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l9;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L20:;
si0=l9;
si1=l8;
si2=l9;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
if(si0){
goto L23;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l2=si0;
goto L22;
L23:;
si0=l3;
si1=l8;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si0+=si1;
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
f15267(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=i32_load(&i->m0,(U64)si0+24U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L25;
default:
goto L24;
}
L26:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l8;
si3=l2;
si1=f15234(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
goto L24;
L25:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l8;
si3=l2;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+48U,si1);
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5824U);
si1=l2;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+5824U,si1);
L27:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
l11=si1;
si0-=si1;
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5820U);
si3=42U;
si2+=si3;
si3=3U;
si2=(U32)((I32)si2>>(si3&31));
si1-=si2;
l3=si1;
si2=65535U;
si3=l3;
si4=65535U;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+44U);
l3=si2;
si3=l8;
si4=l3;
si3=si3 < si4;
si1=si3?si1:si2;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=0U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=4U;
si0=si0 == si1;
si1=l2;
si2=l11;
si1=si1 != si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L17;
}
si0=l9;
si1=l8;
si0=si0 > si1;
if(si0){
goto L17;
}
L28:;
si0=l9;
si1=l8;
si2=l9;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=0U;
l10=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
si1=l9;
si2=l8;
si1=si1 <= si2;
si0&=si1;
l10=si0;
L29:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l11;
si1+=si2;
si2=l2;
si3=l10;
f15260(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
f15261(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
si2=l3;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l0=si1;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L30:;
si0=2U;
si1=0U;
si2=l10;
si0=si2?si0:si1;
l3=si0;
L17:;
si0=l3;
L0:;
return si0;
}

U32 f15246(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L3;
}
si0=l0;
f15242(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
if(si0){
goto L3;
}
si0=l1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=148U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5788U);
si2=-1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si0+=si1;
l2=si0;
L4:;
si0=l0;
si1=l2;
si2=l3;
si3=l4;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
}
si0=0U;
goto L0;
L1:;
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l2=si0;
L7:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l3;
si2-=si3;
si3=1U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L8:;
si0=3U;
si1=2U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
goto L0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l2=si0;
L10:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l3;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L9;
}
si0=0U;
goto L0;
L9:;
si0=1U;
L0:;
return si0;
}

U32 f15247(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
L1:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si1=259U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L4;
L5:;
si0=l0;
f15242(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=l1;
if(si0){
goto L6;
}
si0=l2;
si1=259U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
goto L3;
L7:;
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l2=si0;
L9:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l3;
si2-=si3;
si3=1U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L10:;
si0=3U;
si1=2U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l2=si0;
L12:;
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l3;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L11;
}
si0=0U;
goto L0;
L11:;
si0=1U;
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
if(si0){
goto L14;
}
si0=0U;
l3=si0;
goto L3;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l6=si0;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=258U;
si0+=si1;
l7=si0;
si0=-1U;
l8=si0;
L17:;
{
si0=l4;
si1=l6;
si2=l8;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
si1=l5;
si2=5U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=6U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=7U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=9U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=10U;
si1+=si2;
l9=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l8;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=l5;
si2=11U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l8;
si1=247U;
si0=(U32)((I32)si0<(I32)si1);
l5=si0;
si0=l9;
l8=si0;
si0=l5;
if(si0){
goto L17;
}
L18:;
}
si0=l6;
si1=l9;
si0+=si1;
si1=3U;
si0+=si1;
l9=si0;
goto L15;
L16:;
si0=l5;
si1=4U;
si0+=si1;
l9=si0;
L15:;
si0=l0;
si1=l9;
si2=l7;
si1-=si2;
si2=258U;
si1+=si2;
l4=si1;
si2=l2;
si3=l4;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l3;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
si2=-3U;
si1+=si2;
l4=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+2944800U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2440U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=2945312U;
si1=l4;
si2=255U;
si1&=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=1176U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5788U);
si2=-1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=148U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5788U);
si2=-1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si0+=si1;
l2=si0;
L19:;
si0=l0;
si1=l2;
si2=l3;
si3=l4;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
}
si0=0U;
L0:;
return si0;
}

U32 f15248(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=261U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
f15242(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=l1;
if(si0){
goto L6;
}
si0=l2;
si1=262U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
l2=si2;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+88U);
si2<<=(si3&31);
si3=l2;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+56U);
si3+=si4;
si4=2U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+84U);
si2&=si3;
l3=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
l5=si1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si0-=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=-262U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si2=l5;
si1=f15249(i,si1,si2);
l2=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
L3:;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l5;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+112U);
si1-=si2;
l3=si1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
si2=-3U;
si1+=si2;
l5=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+96U);
l2=si2;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=2945312U;
si1=l5;
si2=255U;
si1&=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=1176U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2944800U;
si2=l3;
si3=-1U;
si2+=si3;
si3=65535U;
si2&=si3;
l5=si2;
si3=l5;
si4=7U;
si3>>=(si4&31);
si4=256U;
si3+=si4;
si4=l5;
si5=256U;
si4=si4 < si5;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2440U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5788U);
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
l7=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+128U);
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l12=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l13=si0;
L10:;
{
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l9;
si1=l8;
si2=l2;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l3;
si3=l13;
si2<<=(si3&31);
si3=l12;
si4=l2;
si3+=si4;
si4=2U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l11;
si2&=si3;
l3=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l7;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L7;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+88U);
si1<<=(si2&31);
si2=l5;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1^=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+84U);
si1&=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L7;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l2=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=148U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5788U);
si2=-1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L2;
}
L7:;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l5=si0;
L11:;
si0=l0;
si1=l5;
si2=l2;
si3=l3;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
f15261(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=l3;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
l2=si1;
si2=2U;
si3=l2;
si4=2U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l5=si0;
L14:;
si0=l0;
si1=l5;
si2=l2;
si3=l3;
si2-=si3;
si3=1U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
f15261(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=l3;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L15:;
si0=3U;
si1=2U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l3;
si0+=si1;
l5=si0;
L17:;
si0=l0;
si1=l5;
si2=l2;
si3=l3;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
f15261(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
si2=l3;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L16;
}
si0=0U;
goto L0;
L16:;
si0=1U;
L0:;
return si0;
}

U32 f15249(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si1=l2;
si2=2U;
si1>>=(si2&31);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+120U);
l3=si2;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+140U);
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
l2=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+44U);
si1-=si2;
si2=262U;
si1+=si2;
l5=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
l7=si1;
si2=l5;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=l2;
si0+=si1;
l10=si0;
si1=258U;
si0+=si1;
l11=si0;
si0=l10;
si1=l3;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l15=si0;
L2:;
{
si0=l9;
si1=l1;
si0+=si1;
l16=si0;
si1=l3;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l16;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l16;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l17=si0;
L5:;
{
si0=l10;
si1=l17;
si0+=si1;
l2=si0;
si1=3U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l16;
si2=l17;
si1+=si2;
l5=si1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=5U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=5U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=6U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=7U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=7U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=9U;
si0+=si1;
l18=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=9U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l17;
si1=8U;
si0+=si1;
l18=si0;
si0=l2;
si1=10U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=10U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l17;
si1=2U;
si0+=si1;
l2=si0;
si0=l18;
l17=si0;
si0=l2;
si1=250U;
si0=si0 < si1;
if(si0){
goto L5;
}
L6:;
}
si0=l10;
si1=l18;
si0+=si1;
si1=2U;
si0+=si1;
l18=si0;
L4:;
si0=l18;
si1=l11;
si0-=si1;
l5=si0;
si1=258U;
si0+=si1;
l2=si0;
si1=l3;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l8;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l2;
l3=si0;
goto L1;
L7:;
si0=l10;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l10;
si0+=si1;
si1=257U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l2;
l3=si0;
L3:;
si0=l6;
si1=l15;
si2=l1;
si3=l14;
si2&=si3;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=l7;
si2=l3;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f15250(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=261U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
f15242(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l2=si0;
si0=l1;
if(si0){
goto L5;
}
si0=l2;
si1=262U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=0U;
goto L0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+96U);
l2=si1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+112U);
i32_store(&i->m0,(U64)si0+100U,si1);
si0=2U;
l3=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L3;
L4:;
si0=2U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
l4=si2;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+88U);
si2<<=(si3&31);
si3=l4;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+56U);
si3+=si4;
si4=2U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+84U);
si2&=si3;
l5=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l6=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
l7=si1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+112U);
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l4;
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l3=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+128U);
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=l7;
si0-=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=-262U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
si2=l7;
si1=f15249(i,si1,si2);
l3=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=5U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=3U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+112U);
si0-=si1;
si1=4097U;
si0=si0 < si1;
if(si0){
goto L6;
}
L7:;
si0=2U;
l3=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
L3:;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l3;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
l4=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+100U);
si3=-1U;
si2^=si3;
si1+=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
si2=-3U;
si1+=si2;
l2=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+120U);
l3=si1;
si2=-2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=l3;
si1-=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=2945312U;
si1=l2;
si2=255U;
si1&=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=1176U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2944800U;
si2=l7;
si3=-1U;
si2+=si3;
si3=65535U;
si2&=si3;
l2=si2;
si3=l2;
si4=7U;
si3>>=(si4&31);
si4=256U;
si3+=si4;
si4=l2;
si5=256U;
si4=si4 < si5;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2440U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si0+=si1;
si1=-3U;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=-3U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5788U);
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
l8=si0;
L9:;
{
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l2;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+72U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+88U);
si2<<=(si3&31);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+56U);
si4=l2;
si3+=si4;
si4=2U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2^=si3;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+84U);
si2&=si3;
l7=si2;
si3=1U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
L10:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=l6;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si0+=si1;
l3=si0;
L11:;
si0=l0;
si1=l3;
si2=l2;
si3=l4;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=0U;
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=148U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5788U);
si2=-1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l2;
si0+=si1;
l3=si0;
L15:;
si0=l0;
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+108U);
si3=l2;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L14:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=0U;
goto L0;
L13:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+116U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+116U,si1);
goto L2;
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
l3=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5792U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5784U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=148U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
L16:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
l2=si1;
si2=2U;
si3=l2;
si4=2U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+5812U,si1);
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si0+=si1;
l3=si0;
L18:;
si0=l0;
si1=l3;
si2=l2;
si3=l4;
si2-=si3;
si3=1U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L19:;
si0=3U;
si1=2U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
goto L0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
si0=!(si0);
if(si0){
goto L20;
}
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si0+=si1;
l3=si0;
L21:;
si0=l0;
si1=l3;
si2=l2;
si3=l4;
si2-=si3;
si3=0U;
f15263(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+108U);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
f15261(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=l4;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
f15267(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+16U,si1);
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L20;
}
si0=0U;
goto L0;
L20:;
si0=1U;
L0:;
return si0;
}

void f15251(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l29=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l3=si1;
si0+=si1;
l4=si0;
si1=l1;
si2=-1U;
si1^=si2;
si0+=si1;
l5=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si1=i32_load(&i->m0,(U64)si1+52U);
l7=si1;
si2=-1U;
si1^=si2;
si0+=si1;
si1=l1;
si0-=si1;
l8=si0;
si0=l7;
si1=7U;
si0&=si1;
l9=si0;
si0=l4;
si1=-257U;
si0+=si1;
l10=si0;
si0=l3;
si1=l2;
si2=l1;
si1-=si2;
si0+=si1;
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0+=si1;
si1=-5U;
si0+=si1;
l13=si0;
si0=-1U;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+92U);
si0<<=(si1&31);
si1=-1U;
si0^=si1;
l14=si0;
si0=-1U;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+88U);
si0<<=(si1&31);
si1=-1U;
si0^=si1;
l15=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si1=l7;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
l17=si2;
si1+=si2;
l18=si1;
si2=l1;
si1+=si2;
si2=l2;
si1-=si2;
si2=l3;
si1-=si2;
si0+=si1;
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+84U);
l20=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l21=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+48U);
l22=si0;
L1:;
{
si0=l2;
si1=14U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si2=l2;
si3=8U;
si2+=si3;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l12;
si1=2U;
si0+=si1;
l12=si0;
L2:;
si0=l2;
si1=l21;
si2=l1;
si3=l15;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l23=si1;
si0-=si1;
l2=si0;
si0=l1;
si1=l23;
si0>>=(si1&31);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l23=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
L9:;
{
si0=l4;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l23;
si1=65535U;
si0&=si1;
l24=si0;
si0=l4;
si1=15U;
si0&=si1;
l23=si0;
if(si0){
goto L12;
}
si0=l1;
l4=si0;
si0=l12;
l25=si0;
goto L11;
L12:;
si0=l2;
si1=l23;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
l4=si0;
si0=l12;
l25=si0;
goto L13;
L14:;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=l12;
si1=1U;
si0+=si1;
l25=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si0<<=(si1&31);
si1=l1;
si0+=si1;
l1=si0;
L13:;
si0=l4;
si1=l23;
si0-=si1;
l2=si0;
si0=l1;
si1=l23;
si0>>=(si1&31);
l4=si0;
si0=l1;
si1=-1U;
si2=l23;
si1<<=(si2&31);
si2=-1U;
si1^=si2;
si0&=si1;
si1=l24;
si0+=si1;
l24=si0;
L11:;
si0=l2;
si1=14U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l25;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=l25;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si2=l2;
si3=8U;
si2+=si3;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l25;
si1=2U;
si0+=si1;
l25=si0;
L15:;
si0=l2;
si1=l20;
si2=l4;
si3=l14;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l26=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l1=si1;
si0-=si1;
l2=si0;
si0=l4;
si1=l1;
si0>>=(si1&31);
l1=si0;
si0=l26;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l23=si0;
si0=l26;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=16U;
si0&=si1;
if(si0){
goto L8;
}
L17:;
{
si0=l4;
si1=64U;
si0&=si1;
if(si0){
goto L16;
}
si0=l2;
si1=l20;
si2=l1;
si3=-1U;
si4=l4;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
si2&=si3;
si3=l23;
si4=65535U;
si3&=si4;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l23=si1;
si0-=si1;
l2=si0;
si0=l1;
si1=l23;
si0>>=(si1&31);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l23=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=16U;
si0&=si1;
if(si0){
goto L8;
}
goto L17;
}
L16:;
si0=2942237U;
l21=si0;
si0=l25;
l12=si0;
goto L7;
L10:;
si0=l4;
si1=255U;
si0&=si1;
l25=si0;
si1=64U;
si0&=si1;
if(si0){
goto L18;
}
si0=l2;
si1=l21;
si2=l1;
si3=-1U;
si4=l25;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
si2&=si3;
si3=l23;
si4=65535U;
si3&=si4;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l23=si1;
si0-=si1;
l2=si0;
si0=l1;
si1=l23;
si0>>=(si1&31);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l23=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L9;
L18:;
}
si0=16191U;
l23=si0;
si0=2942209U;
l21=si0;
si0=l4;
si1=32U;
si0&=si1;
if(si0){
goto L6;
}
goto L7;
L8:;
si0=l23;
si1=65535U;
si0&=si1;
l27=si0;
si0=l2;
si1=l4;
si2=15U;
si1&=si2;
l4=si1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l2;
l23=si0;
si0=l25;
l12=si0;
goto L19;
L20:;
si0=l25;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si0<<=(si1&31);
si1=l1;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l23=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l25;
si1=1U;
si0+=si1;
l12=si0;
goto L19;
L21:;
si0=l25;
si1=2U;
si0+=si1;
l12=si0;
si0=l25;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l23;
si0<<=(si1&31);
si1=l1;
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l23=si0;
L19:;
si0=l1;
si1=-1U;
si2=l4;
si1<<=(si2&31);
si2=-1U;
si1^=si2;
si0&=si1;
l25=si0;
si0=l23;
si1=l4;
si0-=si1;
l2=si0;
si0=l1;
si1=l4;
si0>>=(si1&31);
l1=si0;
si0=l25;
si1=l27;
si0+=si1;
l28=si0;
si1=l3;
si2=l11;
si1-=si2;
l4=si1;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l28;
si1=l4;
si0-=si1;
l26=si0;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+7108U);
si0=!(si0);
if(si0){
goto L25;
}
si0=2942120U;
l21=si0;
goto L7;
L25:;
si0=l7;
if(si0){
goto L28;
}
si0=l16;
si1=l17;
si2=l26;
si1-=si2;
si0+=si1;
l4=si0;
si0=l24;
si1=l26;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l5;
si1=l25;
si0+=si1;
si1=l27;
si0+=si1;
si1=l3;
si0-=si1;
l27=si0;
si0=l26;
si1=7U;
si0&=si1;
l25=si0;
if(si0){
goto L30;
}
si0=l26;
l25=si0;
goto L29;
L30:;
si0=0U;
l23=si0;
L31:;
{
si0=l3;
si1=l23;
si0+=si1;
si1=l4;
si2=l23;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l25;
si1=l23;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=l4;
si1=l23;
si0+=si1;
l4=si0;
si0=l26;
si1=l23;
si0-=si1;
l25=si0;
si0=l3;
si1=l23;
si0+=si1;
l3=si0;
L29:;
si0=l27;
si1=7U;
si0=si0 < si1;
if(si0){
goto L27;
}
L32:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l25;
si1=-8U;
si0+=si1;
l25=si0;
if(si0){
goto L32;
}
goto L27;
}
L28:;
si0=l7;
si1=l26;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l16;
si1=l18;
si2=l26;
si1-=si2;
si0+=si1;
l4=si0;
si0=l24;
si1=l26;
si2=l7;
si1-=si2;
l26=si1;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l8;
si1=l25;
si0+=si1;
si1=l27;
si0+=si1;
si1=l3;
si0-=si1;
l29=si0;
si0=l26;
si1=7U;
si0&=si1;
l23=si0;
if(si0){
goto L35;
}
si0=l26;
l23=si0;
goto L34;
L35:;
si0=l19;
si1=l3;
si2=l25;
si1-=si2;
si2=l27;
si1-=si2;
si0+=si1;
l25=si0;
si0=0U;
l4=si0;
L36:;
{
si0=l3;
si1=l4;
si0+=si1;
si1=l25;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l23;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=l26;
si1=l4;
si0-=si1;
l23=si0;
si0=l3;
si1=l4;
si0+=si1;
l3=si0;
si0=l25;
si1=l4;
si0+=si1;
l4=si0;
L34:;
si0=l29;
si1=7U;
si0=si0 < si1;
if(si0){
goto L37;
}
L38:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l23;
si1=-8U;
si0+=si1;
l23=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l24;
si1=l26;
si0-=si1;
l24=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l16;
l4=si0;
goto L26;
L39:;
si0=l9;
if(si0){
goto L41;
}
si0=l7;
l23=si0;
si0=l16;
l4=si0;
goto L40;
L41:;
si0=l9;
l25=si0;
si0=l7;
l23=si0;
si0=l16;
l4=si0;
L42:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L42;
}
}
L40:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L43;
}
L44:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l23;
si1=-8U;
si0+=si1;
l23=si0;
if(si0){
goto L44;
}
}
L43:;
si0=l3;
si1=l28;
si0-=si1;
l4=si0;
si0=l24;
si1=l7;
si0-=si1;
l24=si0;
goto L26;
L33:;
si0=l16;
si1=l7;
si2=l26;
si1-=si2;
si0+=si1;
l4=si0;
si0=l24;
si1=l26;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l5;
si1=l25;
si0+=si1;
si1=l27;
si0+=si1;
si1=l3;
si0-=si1;
l27=si0;
si0=l26;
si1=7U;
si0&=si1;
l25=si0;
if(si0){
goto L46;
}
si0=l26;
l25=si0;
goto L45;
L46:;
si0=0U;
l23=si0;
L47:;
{
si0=l3;
si1=l23;
si0+=si1;
si1=l4;
si2=l23;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l25;
si1=l23;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L47;
}
}
si0=l4;
si1=l23;
si0+=si1;
l4=si0;
si0=l26;
si1=l23;
si0-=si1;
l25=si0;
si0=l3;
si1=l23;
si0+=si1;
l3=si0;
L45:;
si0=l27;
si1=7U;
si0=si0 < si1;
if(si0){
goto L27;
}
L48:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l25;
si1=-8U;
si0+=si1;
l25=si0;
if(si0){
goto L48;
}
}
L27:;
si0=l3;
si1=l28;
si0-=si1;
l4=si0;
si0=l24;
si1=l26;
si0-=si1;
l24=si0;
L26:;
si0=l24;
si1=3U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l24;
si1=-3U;
si0+=si1;
l25=si0;
si1=3U;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l23=si0;
si0=!(si0);
if(si0){
goto L50;
}
L51:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=3U;
si0+=si1;
l3=si0;
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
si0=l24;
si1=-3U;
si0+=si1;
l24=si0;
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l25;
si1=9U;
si0=si0 < si1;
if(si0){
goto L49;
}
L52:;
{
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l24;
si1=-12U;
si0+=si1;
l24=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L52;
}
}
L49:;
si0=l24;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l24;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L24:;
si0=l3;
si1=l28;
si0-=si1;
l27=si0;
si0=0U;
l26=si0;
si0=0U;
l4=si0;
L53:;
{
si0=l3;
si1=l4;
si0+=si1;
l23=si0;
si1=l27;
si2=l4;
si1+=si2;
l25=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l23;
si1=1U;
si0+=si1;
si1=l25;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l23;
si1=2U;
si0+=si1;
si1=l25;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
si0=l24;
si1=l26;
si2=-3U;
si1+=si2;
l26=si1;
si0+=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L53;
}
}
si0=l3;
si1=l4;
si0+=si1;
l3=si0;
si0=l24;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l27;
si2=l4;
si1+=si2;
l23=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l24;
si1=-1U;
si0+=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L54:;
si0=l3;
si1=1U;
si0+=si1;
si1=l23;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L22;
L23:;
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
L22:;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
goto L4;
L7:;
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=16209U;
l23=si0;
L6:;
si0=l6;
si1=l23;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L5:;
si0=l3;
si1=l23;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L4:;
si0=l12;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
si1=l10;
si0=si0 < si1;
if(si0){
goto L1;
}
L3:;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l2;
si2=7U;
si1&=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l12;
si2=l2;
si3=3U;
si2>>=(si3&31);
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
si2=l3;
si1-=si2;
si2=257U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l13;
si2=l2;
si1-=si2;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l1;
si2=-1U;
si3=l4;
si2<<=(si3&31);
si3=-1U;
si2^=si3;
si1&=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
L0:;
}

U32 f15252(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=-2U;
l2=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-16180U;
si0+=si1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=0U;
si1=l1;
si0-=si1;
l6=si0;
goto L2;
L3:;
si0=l1;
si1=15U;
si0&=si1;
si1=l1;
si2=l1;
si3=48U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=4U;
si0>>=(si1&31);
si1=5U;
si0+=si1;
l5=si0;
L2:;
si0=l6;
si1=-8U;
si0+=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
if(si0){
goto L1;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l3;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-16180U;
si0+=si1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=0U;
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si2=1U;
si1&=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L8:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=32768U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
sj1=16180ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
sj1=-4294967295ULL;
i64_store(&i->m0,(U64)si0+7108U,sj1);
si0=l1;
si1=l1;
si2=1332U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+80U,si1);
L1:;
si0=l2;
L0:;
return si0;
}

U32 f15253(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=-6U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=56U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=49U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=-2U;
l4=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=1U;
si2=7120U;
si3=l2;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
if(si0){
goto L2;
}
si0=-4U;
goto L0;
L2:;
si0=0U;
l4=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=16180U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0=f15252(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

U32 f15254(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=-2U;
l3=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=-16180U;
si0+=si1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
L2:;
si0=l4;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
si1=16191U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=16192U;
l5=si0;
si0=l8;
si1=16192U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=122U;
si0+=si1;
l9=si0;
si0=l4;
si1=116U;
si0+=si1;
l10=si0;
si0=l1;
si1=-5U;
si0+=si1;
l11=si0;
si0=l4;
si1=92U;
si0+=si1;
l12=si0;
si0=l4;
si1=756U;
si0+=si1;
l13=si0;
si0=l4;
si1=88U;
si0+=si1;
l14=si0;
si0=l4;
si1=112U;
si0+=si1;
l15=si0;
si0=l4;
si1=1332U;
si0+=si1;
l16=si0;
si0=l4;
si1=28U;
si0+=si1;
l17=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l18=si0;
si0=0U;
l19=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l22=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l23=si0;
l24=si0;
L9:;
{
si0=-3U;
l25=si0;
si0=1U;
l26=si0;
si0=l5;
si1=-16180U;
si0+=si1;
switch(si0){
case 0:
goto L66;
case 1:
goto L67;
case 2:
goto L63;
case 3:
goto L60;
case 4:
goto L57;
case 5:
goto L15;
case 6:
goto L14;
case 7:
goto L13;
case 8:
goto L12;
case 9:
goto L68;
case 10:
goto L52;
case 11:
goto L51;
case 12:
goto L50;
case 13:
goto L49;
case 14:
goto L48;
case 15:
goto L47;
case 16:
goto L69;
case 17:
goto L44;
case 18:
goto L71;
case 19:
goto L35;
case 20:
goto L34;
case 21:
goto L72;
case 22:
goto L32;
case 23:
goto L73;
case 24:
goto L30;
case 25:
goto L42;
case 26:
goto L41;
case 27:
goto L70;
case 28:
goto L5;
case 29:
goto L6;
case 30:
goto L4;
default:
goto L1;
}
L73:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l27=si0;
si0=l7;
l26=si0;
si0=l21;
l5=si0;
goto L31;
L72:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l25=si0;
goto L33;
L71:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l27=si0;
goto L36;
L70:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L10;
L69:;
si0=l18;
si1=14U;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l25=si0;
si0=l21;
si1=-1U;
si0+=si1;
l26=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=5U;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l25;
l7=si0;
si0=l26;
l21=si0;
si0=l5;
l18=si0;
goto L45;
L68:;
si0=l18;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=1U;
si0+=si1;
l26=si0;
si0=l21;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L54;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L53;
L67:;
si0=l18;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l25=si0;
si0=l21;
si1=-1U;
si0+=si1;
l26=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L65;
}
si0=l25;
l7=si0;
si0=l26;
l21=si0;
si0=l5;
l18=si0;
goto L64;
L66:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l18;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l26=si0;
si0=l7;
si1=1U;
si0+=si1;
l28=si0;
si0=l21;
si1=-1U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L75;
}
si0=l28;
l7=si0;
si0=l25;
l21=si0;
si0=l26;
l18=si0;
goto L74;
L75:;
si0=l25;
if(si0){
goto L76;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l26;
l18=si0;
goto L7;
L76:;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l26;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
L74:;
si0=l5;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L77;
}
si0=l22;
si1=35615U;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L78;
}
si0=l4;
si1=15U;
i32_store(&i->m0,(U64)si0+40U,si1);
L78:;
si0=0U;
l22=si0;
si0=l17;
si1=0U;
si2=0U;
si3=0U;
si1=f15236(i,si1,si2,si3);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=35615U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
si2=12U;
si1+=si2;
si2=2U;
si0=f15236(i,si0,si1,si2);
l5=si0;
si0=l8;
si1=16181U;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l18=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L77:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l26=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l26;
si1=-1U;
i32_store(&i->m0,(U64)si0+48U,si1);
L79:;
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L81;
}
si0=l22;
si1=8U;
si0<<=(si1&31);
si1=65280U;
si0&=si1;
si1=l22;
si2=8U;
si1>>=(si2&31);
si0+=si1;
si1=31U;
si0=REM_U(si0,si1);
si0=!(si0);
if(si0){
goto L80;
}
L81:;
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942053U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L80:;
si0=l22;
si1=15U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L82;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942259U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L82:;
si0=l22;
si1=4U;
si0>>=(si1&31);
l28=si0;
si1=15U;
si0&=si1;
l5=si0;
si1=8U;
si0+=si1;
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l25=si0;
if(si0){
goto L83;
}
si0=l4;
si1=l26;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l26;
l25=si0;
L83:;
si0=l5;
si1=7U;
si0=si0 > si1;
if(si0){
goto L85;
}
si0=l26;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L84;
}
L85:;
si0=l18;
si1=-4U;
si0+=si1;
l18=si0;
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942170U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l28;
l22=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L84:;
si0=l4;
si1=256U;
si2=l5;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l18=si0;
si0=l0;
si1=0U;
si2=0U;
si3=0U;
si1=f15234(i,si1,si2,si3);
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=16189U;
si2=16191U;
si3=l22;
si4=8192U;
si3&=si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l22=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L65:;
si0=l26;
if(si0){
goto L86;
}
si0=l25;
l7=si0;
si0=0U;
l21=si0;
si0=l5;
l18=si0;
goto L7;
L86:;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
L64:;
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l22;
si1=255U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L87;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942259U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L87:;
si0=l22;
si1=57344U;
si0&=si1;
si0=!(si0);
if(si0){
goto L88;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941809U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L88:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l5;
si1=l22;
si2=8U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L89:;
si0=l22;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L90;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=l22;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si3=2U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L90:;
si0=l8;
si1=16182U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l18=si0;
si0=0U;
l22=si0;
goto L62;
L63:;
si0=l18;
si1=31U;
si0=si0 > si1;
if(si0){
goto L61;
}
L62:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=1U;
si0+=si1;
l26=si0;
si0=l21;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L91;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L61;
L91:;
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
si0=l5;
if(si0){
goto L92;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L92:;
si0=l7;
si1=2U;
si0+=si1;
l26=si0;
si0=l21;
si1=-2U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L93;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L61;
L93:;
si0=l18;
si1=16U;
si0+=si1;
l25=si0;
si0=l5;
if(si0){
goto L94;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L94:;
si0=l7;
si1=3U;
si0+=si1;
l26=si0;
si0=l21;
si1=-3U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L95;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L61;
L95:;
si0=l18;
si1=24U;
si0+=si1;
l18=si0;
si0=l5;
if(si0){
goto L96;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l18;
l18=si0;
goto L7;
L96:;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L61:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si1=l22;
i32_store(&i->m0,(U64)si0+4U,si1);
L97:;
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L98;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
si1=l22;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si3=4U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L98:;
si0=l8;
si1=16183U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l18=si0;
si0=0U;
l22=si0;
goto L59;
L60:;
si0=l18;
si1=15U;
si0=si0 > si1;
if(si0){
goto L58;
}
L59:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=1U;
si0+=si1;
l26=si0;
si0=l21;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L99;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L58;
L99:;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l5;
if(si0){
goto L100;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l18;
l18=si0;
goto L7;
L100:;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
L58:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l5;
si1=l22;
si2=8U;
si1>>=(si2&31);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l22;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L101:;
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L102;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L102;
}
si0=l2;
si1=l22;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si3=2U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L102:;
si0=l4;
si1=16184U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l5=si0;
si0=0U;
l18=si0;
si0=0U;
l22=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l26=si0;
si1=1024U;
si0&=si1;
if(si0){
goto L56;
}
goto L17;
L57:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l26=si0;
si1=1024U;
si0&=si1;
if(si0){
goto L103;
}
si0=l18;
l5=si0;
goto L17;
L103:;
si0=l22;
l5=si0;
si0=l18;
si1=15U;
si0=si0 > si1;
if(si0){
goto L55;
}
L56:;
si0=l21;
if(si0){
goto L104;
}
si0=0U;
l21=si0;
si0=l5;
l22=si0;
goto L7;
L104:;
si0=l7;
si1=1U;
si0+=si1;
l28=si0;
si0=l21;
si1=-1U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l5;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L105;
}
si0=l28;
l7=si0;
si0=l25;
l21=si0;
goto L55;
L105:;
si0=l18;
si1=8U;
si0+=si1;
l5=si0;
si0=l25;
if(si0){
goto L106;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l5;
l18=si0;
goto L7;
L106:;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
L55:;
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l5;
si1=l22;
i32_store(&i->m0,(U64)si0+20U,si1);
L107:;
si0=0U;
l18=si0;
si0=l26;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=l2;
si1=l22;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=12U;
si2+=si3;
si3=2U;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L108:;
si0=0U;
l22=si0;
goto L16;
L54:;
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
si0=l5;
if(si0){
goto L109;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L109:;
si0=l7;
si1=2U;
si0+=si1;
l26=si0;
si0=l21;
si1=-2U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L110;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L53;
L110:;
si0=l18;
si1=16U;
si0+=si1;
l25=si0;
si0=l5;
if(si0){
goto L111;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L111:;
si0=l7;
si1=3U;
si0+=si1;
l26=si0;
si0=l21;
si1=-3U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L112;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L53;
L112:;
si0=l18;
si1=24U;
si0+=si1;
l18=si0;
si0=l5;
if(si0){
goto L113;
}
si0=l26;
l7=si0;
si0=0U;
l21=si0;
si0=l18;
l18=si0;
goto L7;
L113:;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L53:;
si0=l8;
si1=16190U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l22;
si2=24U;
si1<<=(si2&31);
si2=l22;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l22;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l22;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l22=si0;
si0=0U;
l18=si0;
L52:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L114;
}
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=2U;
l3=si0;
goto L1;
L114:;
si0=l0;
si1=0U;
si2=0U;
si3=0U;
si1=f15234(i,si1,si2,si3);
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16191U;
i32_store(&i->m0,(U64)si0,si1);
L51:;
si0=l11;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l19;
l26=si0;
goto L5;
L50:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L117;
}
si0=l18;
si1=3U;
si0=si0 < si1;
if(si0){
goto L116;
}
si0=l18;
l26=si0;
goto L115;
L117:;
si0=l8;
si1=16206U;
i32_store(&i->m0,(U64)si0,si1);
si0=l22;
si1=l18;
si2=7U;
si1&=si2;
si0>>=(si1&31);
l22=si0;
si0=l18;
si1=-8U;
si0&=si1;
l18=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L116:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l26=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L115:;
si0=l4;
si1=l22;
si2=1U;
si1&=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=16193U;
l5=si0;
si0=l22;
si1=1U;
si0>>=(si1&31);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L119;
case 1:
goto L122;
case 2:
goto L121;
case 3:
goto L120;
default:
goto L119;
}
L122:;
si0=l4;
si1=2942368U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj1=21474836489ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=2944416U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=16199U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L118;
}
si0=l26;
si1=-3U;
si0+=si1;
l18=si0;
si0=l22;
si1=3U;
si0>>=(si1&31);
l22=si0;
si0=l19;
l26=si0;
goto L5;
L121:;
si0=16196U;
l5=si0;
goto L119;
L120:;
si0=l0;
si1=2942190U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=16209U;
l5=si0;
L119:;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L118:;
si0=l26;
si1=-3U;
si0+=si1;
l18=si0;
si0=l22;
si1=3U;
si0>>=(si1&31);
l22=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L49:;
si0=l22;
si1=l18;
si2=7U;
si1&=si2;
si0>>=(si1&31);
l22=si0;
si0=l18;
si1=-8U;
si0&=si1;
l18=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l25=si0;
si0=l21;
si1=-1U;
si0+=si1;
l26=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L124;
}
si0=l25;
l7=si0;
si0=l26;
l21=si0;
si0=l5;
l18=si0;
goto L123;
L124:;
si0=l26;
if(si0){
goto L125;
}
si0=l25;
l7=si0;
si0=0U;
l21=si0;
si0=l5;
l18=si0;
goto L7;
L125:;
si0=l18;
si1=16U;
si0+=si1;
l26=si0;
si0=l7;
si1=2U;
si0+=si1;
l28=si0;
si0=l21;
si1=-2U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L126;
}
si0=l28;
l7=si0;
si0=l25;
l21=si0;
si0=l26;
l18=si0;
goto L123;
L126:;
si0=l25;
if(si0){
goto L127;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l26;
l18=si0;
goto L7;
L127:;
si0=l18;
si1=24U;
si0+=si1;
l25=si0;
si0=l7;
si1=3U;
si0+=si1;
l28=si0;
si0=l21;
si1=-3U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l26;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L128;
}
si0=l28;
l7=si0;
si0=l5;
l21=si0;
si0=l25;
l18=si0;
goto L123;
L128:;
si0=l5;
if(si0){
goto L129;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L129:;
si0=l18;
si1=32U;
si0+=si1;
l18=si0;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L123:;
si0=l22;
si1=65535U;
si0&=si1;
l5=si0;
si1=l22;
si2=-1U;
si1^=si2;
si2=16U;
si1>>=(si2&31);
si0=si0 == si1;
if(si0){
goto L130;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941918U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L130:;
si0=l4;
si1=16194U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=0U;
l22=si0;
si0=0U;
l18=si0;
si0=l1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=0U;
l18=si0;
si0=l19;
l26=si0;
goto L5;
L48:;
si0=l8;
si1=16195U;
i32_store(&i->m0,(U64)si0,si1);
L47:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si0=!(si0);
if(si0){
goto L131;
}
si0=l5;
si1=l21;
si2=l5;
si3=l21;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=l23;
si2=l5;
si3=l23;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
if(si0){
goto L132;
}
si0=l19;
l26=si0;
goto L5;
L132:;
si0=l6;
si1=l7;
si2=l5;
f15267(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=l5;
si0+=si1;
l6=si0;
si0=l23;
si1=l5;
si0-=si1;
l23=si0;
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
si0=l21;
si1=l5;
si0-=si1;
l21=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L131:;
si0=l8;
si1=16191U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L46:;
si0=l26;
if(si0){
goto L133;
}
si0=l25;
l7=si0;
si0=0U;
l21=si0;
si0=l5;
l18=si0;
goto L7;
L133:;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
L45:;
si0=l4;
si1=l22;
si2=31U;
si1&=si2;
l5=si1;
si2=257U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l22;
si2=5U;
si1>>=(si2&31);
si2=31U;
si1&=si2;
l26=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l22;
si2=10U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=4U;
si1+=si2;
l28=si1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l18;
si1=-14U;
si0+=si1;
l18=si0;
si0=l22;
si1=14U;
si0>>=(si1&31);
l22=si0;
si0=l5;
si1=29U;
si0=si0 > si1;
if(si0){
goto L135;
}
si0=l26;
si1=30U;
si0=si0 < si1;
if(si0){
goto L134;
}
L135:;
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941882U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L134:;
si0=l4;
si1=16197U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
goto L43;
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+96U);
l28=si1;
si0=si0 >= si1;
if(si0){
goto L37;
}
L43:;
si0=l5;
si1=1U;
si0<<=(si1&31);
si1=2942320U;
si0+=si1;
l26=si0;
L136:;
{
si0=l18;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L138;
}
si0=l18;
l25=si0;
goto L137;
L138:;
si0=l21;
si0=!(si0);
if(si0){
goto L11;
}
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L137:;
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l26;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=116U;
si0+=si1;
si1=l22;
si2=7U;
si1&=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l26;
si1=2U;
si0+=si1;
l26=si0;
si0=l25;
si1=-3U;
si0+=si1;
l18=si0;
si0=l22;
si1=3U;
si0>>=(si1&31);
l22=si0;
si0=l28;
si1=l5;
si0=si0 != si1;
if(si0){
goto L136;
}
}
si0=l28;
l5=si0;
goto L37;
L42:;
si0=l23;
si0=!(si0);
if(si0){
goto L29;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16200U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L41:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L139;
}
si0=0U;
l5=si0;
goto L38;
L139:;
si0=l18;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L141;
}
si0=l7;
l28=si0;
goto L140;
L141:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
si0=l7;
si1=1U;
si0+=si1;
l28=si0;
si0=l21;
si1=-1U;
si0+=si1;
l27=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L142;
}
si0=l27;
l21=si0;
si0=l25;
l18=si0;
goto L140;
L142:;
si0=l27;
if(si0){
goto L143;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L143:;
si0=l18;
si1=16U;
si0+=si1;
l29=si0;
si0=l7;
si1=2U;
si0+=si1;
l28=si0;
si0=l21;
si1=-2U;
si0+=si1;
l27=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L144;
}
si0=l27;
l21=si0;
si0=l29;
l18=si0;
goto L140;
L144:;
si0=l27;
if(si0){
goto L145;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l29;
l18=si0;
goto L7;
L145:;
si0=l18;
si1=24U;
si0+=si1;
l25=si0;
si0=l7;
si1=3U;
si0+=si1;
l28=si0;
si0=l21;
si1=-3U;
si0+=si1;
l27=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l29;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L146;
}
si0=l27;
l21=si0;
si0=l25;
l18=si0;
goto L140;
L146:;
si0=l27;
if(si0){
goto L147;
}
si0=l28;
l7=si0;
si0=0U;
l21=si0;
si0=l25;
l18=si0;
goto L7;
L147:;
si0=l18;
si1=32U;
si0+=si1;
l18=si0;
si0=l7;
si1=4U;
si0+=si1;
l28=si0;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
L140:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l24;
si3=l23;
si2-=si3;
l7=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=4U;
si0&=si1;
l25=si0;
si0=!(si0);
if(si0){
goto L148;
}
si0=l24;
si1=l23;
si0=si0 == si1;
if(si0){
goto L148;
}
si0=l6;
si1=l7;
si0-=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l25=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L150;
}
si0=l25;
si1=l5;
si2=l7;
si0=f15236(i,si0,si1,si2);
l5=si0;
goto L149;
L150:;
si0=l25;
si1=l5;
si2=l7;
si0=f15234(i,si0,si1,si2);
l5=si0;
L149:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=4U;
si0&=si1;
l25=si0;
L148:;
si0=l25;
si0=!(si0);
if(si0){
goto L39;
}
si0=l22;
si1=l22;
si2=24U;
si1<<=(si2&31);
si2=l22;
si3=65280U;
si2&=si3;
si3=8U;
si2<<=(si3&31);
si1|=si2;
si2=l22;
si3=8U;
si2>>=(si3&31);
si3=65280U;
si2&=si3;
si3=l22;
si4=24U;
si3>>=(si4&31);
si2|=si3;
si1|=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+20U);
si0=si2?si0:si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942099U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l28;
l7=si0;
si0=l23;
l24=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L40:;
si0=l8;
si1=16192U;
i32_store(&i->m0,(U64)si0,si1);
goto L27;
L39:;
si0=l28;
l7=si0;
si0=0U;
l22=si0;
si0=0U;
l18=si0;
si0=l23;
l24=si0;
L38:;
si0=l8;
si1=16207U;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L37:;
si0=l5;
si1=18U;
si0=si0 > si1;
if(si0){
goto L151;
}
si0=l5;
l25=si0;
si0=3U;
si1=l5;
si0-=si1;
si1=3U;
si0&=si1;
l28=si0;
si0=!(si0);
if(si0){
goto L152;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
si1=2942320U;
si0+=si1;
l26=si0;
si0=l5;
l25=si0;
L153:;
{
si0=l4;
si1=l26;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=116U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l26;
si1=2U;
si0+=si1;
l26=si0;
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
si0=l28;
si1=-1U;
si0+=si1;
l28=si0;
if(si0){
goto L153;
}
}
L152:;
si0=l5;
si1=-16U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L154;
}
si0=l25;
si1=-19U;
si0+=si1;
l28=si0;
si0=l25;
si1=1U;
si0<<=(si1&31);
si1=2942320U;
si0+=si1;
l5=si0;
L155:;
{
si0=l4;
si1=116U;
si0+=si1;
l26=si0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l26;
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l26;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l26;
si1=l5;
si2=6U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l28;
si1=4U;
si0+=si1;
l28=si0;
if(si0){
goto L155;
}
}
L154:;
si0=l4;
si1=19U;
i32_store(&i->m0,(U64)si0+108U,si1);
L151:;
si0=l4;
si1=7U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=0U;
l27=si0;
si0=0U;
si1=l10;
si2=19U;
si3=l15;
si4=l14;
si5=l13;
si0=f15257(i,si0,si1,si2,si3,si4,si5);
l19=si0;
si0=!(si0);
if(si0){
goto L156;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941784U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L156:;
si0=l4;
si1=16198U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=0U;
l19=si0;
L36:;
si0=l27;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+104U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+100U);
l30=si2;
si1+=si2;
l31=si1;
si0=si0 >= si1;
if(si0){
goto L157;
}
si0=-1U;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si0<<=(si1&31);
si1=-1U;
si0^=si1;
l32=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l33=si0;
L158:;
{
si0=l18;
si1=l33;
si2=l22;
si3=l32;
si2&=si3;
l34=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l29=si1;
si0=si0 < si1;
if(si0){
goto L160;
}
si0=l18;
l5=si0;
goto L159;
L160:;
si0=l18;
l28=si0;
si0=l21;
l26=si0;
si0=l7;
l25=si0;
L161:;
{
si0=l26;
si0=!(si0);
if(si0){
goto L26;
}
si0=l25;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l28;
si0<<=(si1&31);
l29=si0;
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
si0=l28;
si1=8U;
si0+=si1;
l5=si0;
l28=si0;
si0=l5;
si1=l33;
si2=l29;
si3=l22;
si2+=si3;
l22=si2;
si3=l32;
si2&=si3;
l34=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l29=si1;
si0=si0 < si1;
if(si0){
goto L161;
}
}
si0=l25;
l7=si0;
si0=l26;
l21=si0;
L159:;
si0=l33;
si1=l34;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l26=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L163;
}
si0=l4;
si1=l27;
si2=1U;
si1+=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l27;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=116U;
si0+=si1;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l29;
si0-=si1;
l18=si0;
si0=l22;
si1=l29;
si0>>=(si1&31);
l22=si0;
si0=l25;
l27=si0;
goto L162;
L163:;
si0=l26;
si1=-16U;
si0+=si1;
switch(si0){
case 0:
goto L168;
case 1:
goto L167;
default:
goto L166;
}
L168:;
si0=l5;
si1=l29;
si2=2U;
si1+=si2;
l26=si1;
si0=si0 >= si1;
if(si0){
goto L169;
}
L170:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L18;
}
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L170;
}
}
L169:;
si0=l5;
si1=l29;
si0-=si1;
l18=si0;
si0=l22;
si1=l29;
si0>>=(si1&31);
l5=si0;
si0=l27;
if(si0){
goto L171;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
l22=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L171:;
si0=l18;
si1=-2U;
si0+=si1;
l18=si0;
si0=l5;
si1=2U;
si0>>=(si1&31);
l22=si0;
si0=l5;
si1=3U;
si0&=si1;
si1=3U;
si0+=si1;
l25=si0;
si0=l27;
si1=1U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=114U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l26=si0;
goto L164;
L167:;
si0=l5;
si1=l29;
si2=3U;
si1+=si2;
l26=si1;
si0=si0 >= si1;
if(si0){
goto L172;
}
L173:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L18;
}
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L173;
}
}
L172:;
si0=l5;
si1=l29;
si0-=si1;
si1=-3U;
si0+=si1;
l18=si0;
si0=l22;
si1=l29;
si0>>=(si1&31);
l5=si0;
si1=3U;
si0>>=(si1&31);
l22=si0;
si0=l5;
si1=7U;
si0&=si1;
si1=3U;
si0+=si1;
l25=si0;
goto L165;
L166:;
si0=l5;
si1=l29;
si2=7U;
si1+=si2;
l26=si1;
si0=si0 >= si1;
if(si0){
goto L174;
}
L175:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L18;
}
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L175;
}
}
L174:;
si0=l5;
si1=l29;
si0-=si1;
si1=-7U;
si0+=si1;
l18=si0;
si0=l22;
si1=l29;
si0>>=(si1&31);
l5=si0;
si1=7U;
si0>>=(si1&31);
l22=si0;
si0=l5;
si1=127U;
si0&=si1;
si1=11U;
si0+=si1;
l25=si0;
L165:;
si0=0U;
l26=si0;
L164:;
si0=l25;
si1=l27;
si0+=si1;
si1=l31;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l25;
si1=-1U;
si0+=si1;
l29=si0;
si0=l25;
si1=3U;
si0&=si1;
l28=si0;
si0=!(si0);
if(si0){
goto L176;
}
si0=l10;
si1=l27;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L177:;
{
si0=l5;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
si0=l27;
si1=1U;
si0+=si1;
l27=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
si0=l28;
si1=-1U;
si0+=si1;
l28=si0;
if(si0){
goto L177;
}
}
L176:;
si0=l29;
si1=3U;
si0=si0 < si1;
if(si0){
goto L178;
}
si0=l9;
si1=l27;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L179:;
{
si0=l5;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=-2U;
si0+=si1;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=-4U;
si0+=si1;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=-6U;
si0+=si1;
si1=l26;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l27;
si1=4U;
si0+=si1;
l27=si0;
si0=l25;
si1=-4U;
si0+=si1;
l25=si0;
if(si0){
goto L179;
}
}
L178:;
si0=l4;
si1=l27;
i32_store(&i->m0,(U64)si0+108U,si1);
L162:;
si0=l27;
si1=l31;
si0=si0 < si1;
if(si0){
goto L158;
}
}
L157:;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+628U);
if(si0){
goto L180;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942016U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L180:;
si0=l4;
si1=9U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=1U;
si1=l10;
si2=l30;
si3=l15;
si4=l14;
si5=l13;
si0=f15257(i,si0,si1,si2,si3,si4,si5);
l19=si0;
si0=!(si0);
if(si0){
goto L181;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941756U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L181:;
si0=l4;
si1=6U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+112U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=2U;
si1=l10;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+100U);
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+104U);
si3=l15;
si4=l12;
si5=l13;
si0=f15257(i,si0,si1,si2,si3,si4,si5);
l19=si0;
si0=!(si0);
if(si0){
goto L182;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941834U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L182:;
si0=l8;
si1=16199U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l19=si0;
si0=l1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=0U;
l26=si0;
goto L5;
L35:;
si0=l8;
si1=16200U;
i32_store(&i->m0,(U64)si0,si1);
L34:;
si0=l21;
si1=6U;
si0=si0 < si1;
if(si0){
goto L183;
}
si0=l23;
si1=258U;
si0=si0 < si1;
if(si0){
goto L183;
}
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l24;
f15251(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l22=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l23=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=16191U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L183:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l18;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
l29=si1;
si2=l22;
si3=-1U;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+88U);
si3<<=(si4&31);
si4=-1U;
si3^=si4;
l34=si3;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l33=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l27=si1;
si0=si0 < si1;
if(si0){
goto L185;
}
si0=l7;
l26=si0;
si0=l21;
l5=si0;
si0=l18;
l28=si0;
goto L184;
L185:;
si0=l18;
l25=si0;
si0=l21;
l5=si0;
si0=l7;
l26=si0;
L186:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
si0=l26;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l25;
si0<<=(si1&31);
l27=si0;
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l25;
si1=8U;
si0+=si1;
l28=si0;
l25=si0;
si0=l28;
si1=l29;
si2=l27;
si3=l22;
si2+=si3;
l22=si2;
si3=l34;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l33=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l27=si1;
si0=si0 < si1;
if(si0){
goto L186;
}
}
L184:;
si0=l33;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l34=si0;
si0=l33;
si0=i32_load8_u(&i->m0,(U64)si0);
l25=si0;
si1=-1U;
si0+=si1;
si1=255U;
si0&=si1;
si1=14U;
si0=si0 <= si1;
if(si0){
goto L188;
}
si0=l27;
l33=si0;
si0=0U;
l27=si0;
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L187;
L188:;
si0=l27;
si1=l29;
si2=l22;
si3=-1U;
si4=l27;
si5=l25;
si4+=si5;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
l31=si3;
si2&=si3;
si3=l27;
si2>>=(si3&31);
si3=l34;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l32=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l33=si1;
si0+=si1;
si1=l28;
si0=si0 > si1;
if(si0){
goto L190;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
si0=l28;
l25=si0;
goto L189;
L190:;
si0=l28;
l18=si0;
si0=l5;
l21=si0;
si0=l26;
l7=si0;
L191:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
l33=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
l18=si0;
si0=l27;
si1=l29;
si2=l33;
si3=l22;
si2+=si3;
l22=si2;
si3=l31;
si2&=si3;
si3=l27;
si2>>=(si3&31);
si3=l34;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l32=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l33=si1;
si0+=si1;
si1=l25;
si0=si0 > si1;
if(si0){
goto L191;
}
}
L189:;
si0=l25;
si1=l27;
si0-=si1;
l28=si0;
si0=l22;
si1=l27;
si0>>=(si1&31);
l22=si0;
si0=l32;
si0=i32_load8_u(&i->m0,(U64)si0);
l25=si0;
si0=l32;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l34=si0;
L187:;
si0=l4;
si1=l34;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l27;
si2=l33;
si1+=si2;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l28;
si1=l33;
si0-=si1;
l18=si0;
si0=l22;
si1=l33;
si0>>=(si1&31);
l22=si0;
si0=l25;
si1=255U;
si0&=si1;
l5=si0;
if(si0){
goto L192;
}
si0=l8;
si1=16205U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L192:;
si0=l5;
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L193;
}
si0=l4;
si1=16191U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L193:;
si0=l5;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L194;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942209U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L194:;
si0=l4;
si1=16201U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
si2=15U;
si1&=si2;
l25=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
L33:;
si0=l7;
l27=si0;
si0=l21;
l28=si0;
si0=l25;
if(si0){
goto L196;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l26=si0;
si0=l27;
l7=si0;
si0=l28;
l21=si0;
goto L195;
L196:;
si0=l18;
si1=l25;
si0=si0 < si1;
if(si0){
goto L198;
}
si0=l27;
l7=si0;
si0=l28;
l21=si0;
si0=l18;
l5=si0;
goto L197;
L198:;
si0=l18;
l5=si0;
si0=l28;
l21=si0;
si0=l27;
l26=si0;
L199:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L22;
}
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l26;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l26;
si1=1U;
si0+=si1;
l7=si0;
l26=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l25;
si0=si0 < si1;
if(si0){
goto L199;
}
}
L197:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+7112U);
si2=l25;
si1+=si2;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l22;
si3=-1U;
si4=l25;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
si2&=si3;
si1+=si2;
l26=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l25;
si0-=si1;
l18=si0;
si0=l22;
si1=l25;
si0>>=(si1&31);
l22=si0;
L195:;
si0=l4;
si1=16202U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l26;
i32_store(&i->m0,(U64)si0+7116U,si1);
L32:;
si0=l18;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+84U);
l29=si1;
si2=l22;
si3=-1U;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+92U);
si3<<=(si4&31);
si4=-1U;
si3^=si4;
l34=si3;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l33=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l27=si1;
si0=si0 < si1;
if(si0){
goto L201;
}
si0=l7;
l26=si0;
si0=l21;
l5=si0;
si0=l18;
l28=si0;
goto L200;
L201:;
si0=l18;
l25=si0;
si0=l21;
l5=si0;
si0=l7;
l26=si0;
L202:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=l26;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l25;
si0<<=(si1&31);
l27=si0;
si0=l26;
si1=1U;
si0+=si1;
l26=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l25;
si1=8U;
si0+=si1;
l28=si0;
l25=si0;
si0=l28;
si1=l29;
si2=l27;
si3=l22;
si2+=si3;
l22=si2;
si3=l34;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l33=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l27=si1;
si0=si0 < si1;
if(si0){
goto L202;
}
}
L200:;
si0=l33;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l34=si0;
si0=l33;
si0=i32_load8_u(&i->m0,(U64)si0);
l21=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L204;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+7112U);
l7=si0;
si0=l27;
l33=si0;
goto L203;
L204:;
si0=l27;
si1=l29;
si2=l22;
si3=-1U;
si4=l27;
si5=l21;
si4+=si5;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
l31=si3;
si2&=si3;
si3=l27;
si2>>=(si3&31);
si3=l34;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l32=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l33=si1;
si0+=si1;
si1=l28;
si0=si0 > si1;
if(si0){
goto L206;
}
si0=l28;
l25=si0;
goto L205;
L206:;
si0=l28;
l18=si0;
si0=l5;
l21=si0;
si0=l26;
l7=si0;
L207:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
l33=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l18;
si1=8U;
si0+=si1;
l25=si0;
l18=si0;
si0=l27;
si1=l29;
si2=l33;
si3=l22;
si2+=si3;
l22=si2;
si3=l31;
si2&=si3;
si3=l27;
si2>>=(si3&31);
si3=l34;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l32=si1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l33=si1;
si0+=si1;
si1=l25;
si0=si0 > si1;
if(si0){
goto L207;
}
}
si0=l7;
l26=si0;
si0=l21;
l5=si0;
L205:;
si0=l25;
si1=l27;
si0-=si1;
l28=si0;
si0=l22;
si1=l27;
si0>>=(si1&31);
l22=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+7112U);
si1=l27;
si0+=si1;
l7=si0;
si0=l32;
si0=i32_load8_u(&i->m0,(U64)si0);
l21=si0;
si0=l32;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l34=si0;
L203:;
si0=l4;
si1=l7;
si2=l33;
si1+=si2;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l28;
si1=l33;
si0-=si1;
l18=si0;
si0=l22;
si1=l33;
si0>>=(si1&31);
l22=si0;
si0=l21;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L208;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942237U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l26;
l7=si0;
si0=l5;
l21=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L208:;
si0=l4;
si1=16203U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l21;
si2=255U;
si1&=si2;
si2=15U;
si1&=si2;
l27=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l34;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
L31:;
si0=l27;
if(si0){
goto L210;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
goto L209;
L210:;
si0=l18;
si1=l27;
si0=si0 < si1;
if(si0){
goto L212;
}
si0=l26;
l7=si0;
si0=l5;
l21=si0;
si0=l18;
l25=si0;
goto L211;
L212:;
si0=l18;
l25=si0;
si0=l5;
l21=si0;
si0=l26;
l28=si0;
L213:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L25;
}
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l28;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l28;
si1=1U;
si0+=si1;
l7=si0;
l28=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si1=l27;
si0=si0 < si1;
if(si0){
goto L213;
}
}
L211:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+7112U);
si2=l27;
si1+=si2;
i32_store(&i->m0,(U64)si0+7112U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=l22;
si3=-1U;
si4=l27;
si3<<=(si4&31);
si4=-1U;
si3^=si4;
si2&=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l25;
si1=l27;
si0-=si1;
l18=si0;
si0=l22;
si1=l27;
si0>>=(si1&31);
l22=si0;
L209:;
si0=l8;
si1=16204U;
i32_store(&i->m0,(U64)si0,si1);
L30:;
si0=l23;
if(si0){
goto L28;
}
L29:;
si0=0U;
l23=si0;
si0=l19;
l26=si0;
goto L5;
L28:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si1=l24;
si2=l23;
si1-=si2;
l26=si1;
si0=si0 <= si1;
if(si0){
goto L215;
}
si0=l5;
si1=l26;
si0-=si1;
l26=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=si0 <= si1;
if(si0){
goto L216;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+7108U);
si0=!(si0);
if(si0){
goto L216;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942120U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L216:;
si0=l26;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L218;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l26;
si3=l5;
si2-=si3;
l26=si2;
si1-=si2;
si0+=si1;
l5=si0;
goto L217;
L218:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l5;
si2=l26;
si1-=si2;
si0+=si1;
l5=si0;
L217:;
si0=l26;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
l25=si1;
si2=l26;
si3=l25;
si2=si2 < si3;
si0=si2?si0:si1;
l26=si0;
goto L214;
L215:;
si0=l6;
si1=l5;
si0-=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l25=si0;
l26=si0;
L214:;
si0=l4;
si1=l25;
si2=l26;
si3=l23;
si4=l26;
si5=l23;
si4=si4 < si5;
si2=si4?si2:si3;
l28=si2;
si1-=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l28;
si1=-1U;
si0+=si1;
l27=si0;
si0=l28;
l26=si0;
si0=l28;
si1=7U;
si0&=si1;
l25=si0;
si0=!(si0);
if(si0){
goto L219;
}
L220:;
{
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L220;
}
}
L219:;
si0=l27;
si1=7U;
si0=si0 < si1;
if(si0){
goto L221;
}
L222:;
{
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l6;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
if(si0){
goto L222;
}
}
L221:;
si0=l23;
si1=l28;
si0-=si1;
l23=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
if(si0){
goto L27;
}
si0=l8;
si1=16200U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L27:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L26:;
si0=l7;
si1=l21;
si0+=si1;
l7=si0;
si0=l18;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
goto L11;
L25:;
si0=l26;
si1=l5;
si0+=si1;
l7=si0;
si0=l18;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
goto L11;
L24:;
si0=l26;
si1=l5;
si0+=si1;
l7=si0;
si0=l28;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
goto L11;
L23:;
si0=l7;
si1=l21;
si0+=si1;
l7=si0;
si0=l18;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
goto L11;
L22:;
si0=l27;
si1=l28;
si0+=si1;
l7=si0;
si0=l18;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
goto L11;
L21:;
si0=l28;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l26;
si1=l5;
si0+=si1;
l7=si0;
goto L11;
L20:;
si0=l18;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l7;
si1=l21;
si0+=si1;
l7=si0;
goto L11;
L19:;
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2941856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L18:;
si0=0U;
l21=si0;
si0=l5;
l18=si0;
si0=l19;
l26=si0;
goto L5;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l26=si0;
si0=!(si0);
if(si0){
goto L223;
}
si0=l26;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
L223:;
si0=l5;
l18=si0;
L16:;
si0=l8;
si1=16185U;
i32_store(&i->m0,(U64)si0,si1);
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l25=si0;
si1=1024U;
si0&=si1;
si0=!(si0);
if(si0){
goto L224;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
si1=l21;
si2=l5;
si3=l21;
si2=si2 < si3;
si0=si2?si0:si1;
l26=si0;
si0=!(si0);
if(si0){
goto L225;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l28=si0;
si0=!(si0);
if(si0){
goto L226;
}
si0=l28;
si0=i32_load(&i->m0,(U64)si0+16U);
l27=si0;
si0=!(si0);
if(si0){
goto L226;
}
si0=l27;
si1=l28;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l5;
si1-=si2;
l5=si1;
si0+=si1;
si1=l7;
si2=l28;
si2=i32_load(&i->m0,(U64)si2+24U);
l25=si2;
si3=l5;
si2-=si3;
si3=l26;
si4=l5;
si5=l26;
si4+=si5;
si5=l25;
si4=si4 > si5;
si2=si4?si2:si3;
f15267(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l25=si0;
L226:;
si0=l25;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L227;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L227;
}
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l26;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L227:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l26;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l7;
si1=l26;
si0+=si1;
l7=si0;
si0=l21;
si1=l26;
si0-=si1;
l21=si0;
L225:;
si0=l5;
si0=!(si0);
if(si0){
goto L224;
}
si0=l19;
l26=si0;
goto L5;
L224:;
si0=l4;
si1=16186U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
L14:;
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L229;
}
si0=l21;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l5=si0;
L230:;
{
si0=l7;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l25=si0;
si0=!(si0);
if(si0){
goto L231;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0+28U);
l28=si0;
si0=!(si0);
if(si0){
goto L231;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l27=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 >= si1;
if(si0){
goto L231;
}
si0=l4;
si1=l27;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l28;
si1=l27;
si0+=si1;
si1=l26;
i32_store8(&i->m0,(U64)si0,si1);
L231:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L232;
}
si0=l21;
si1=l5;
si0=si0 > si1;
if(si0){
goto L230;
}
L232:;
}
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L233;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L233;
}
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l5;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L233:;
si0=l26;
si1=255U;
si0&=si1;
if(si0){
goto L234;
}
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
si0=l21;
si1=l5;
si0-=si1;
l21=si0;
goto L228;
L234:;
si0=l21;
si1=l5;
si0-=si1;
l21=si0;
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
si0=l19;
l26=si0;
goto L5;
L229:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L228;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
L228:;
si0=l4;
si1=16187U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
L13:;
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L236;
}
si0=l21;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l5=si0;
L237:;
{
si0=l7;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l25=si0;
si0=!(si0);
if(si0){
goto L238;
}
si0=l25;
si0=i32_load(&i->m0,(U64)si0+36U);
l28=si0;
si0=!(si0);
if(si0){
goto L238;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l27=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1+40U);
si0=si0 >= si1;
if(si0){
goto L238;
}
si0=l4;
si1=l27;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l28;
si1=l27;
si0+=si1;
si1=l26;
i32_store8(&i->m0,(U64)si0,si1);
L238:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L239;
}
si0=l21;
si1=l5;
si0=si0 > si1;
if(si0){
goto L237;
}
L239:;
}
si0=l4;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L240;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L240;
}
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l5;
si1=f15236(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0,si1);
L240:;
si0=l26;
si1=255U;
si0&=si1;
if(si0){
goto L241;
}
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
si0=l21;
si1=l5;
si0-=si1;
l21=si0;
goto L235;
L241:;
si0=l21;
si1=l5;
si0-=si1;
l21=si0;
si0=l7;
si1=l5;
si0+=si1;
l7=si0;
si0=l19;
l26=si0;
goto L5;
L236:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L235;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
L235:;
si0=l8;
si1=16188U;
i32_store(&i->m0,(U64)si0,si1);
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l26=si0;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L242;
}
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L244;
}
si0=l7;
l5=si0;
goto L243;
L244:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l28=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=l21;
si1=-1U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L245;
}
si0=l25;
l21=si0;
si0=l28;
l18=si0;
goto L243;
L245:;
si0=l25;
if(si0){
goto L246;
}
si0=l5;
l7=si0;
si0=0U;
l21=si0;
si0=l28;
l18=si0;
goto L7;
L246:;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
si0=l21;
si1=-2U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l28;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
L243:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L247;
}
si0=l22;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L247;
}
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942150U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L247:;
si0=l5;
l7=si0;
si0=0U;
l22=si0;
si0=0U;
l18=si0;
L242:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=!(si0);
if(si0){
goto L248;
}
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l26;
si2=9U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
L248:;
si0=l0;
si1=0U;
si2=0U;
si3=0U;
si1=f15236(i,si1,si2,si3);
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l17;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16191U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
L11:;
si0=0U;
l21=si0;
si0=l19;
l26=si0;
goto L5;
L10:;
si0=l5;
if(si0){
goto L251;
}
si0=l22;
l3=si0;
goto L250;
L251:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
if(si0){
goto L252;
}
si0=l22;
l3=si0;
goto L250;
L252:;
si0=l18;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L254;
}
si0=l7;
l5=si0;
goto L253;
L254:;
si0=l21;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=8U;
si0+=si1;
l28=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=l21;
si1=-1U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L255;
}
si0=l25;
l21=si0;
si0=l28;
l18=si0;
goto L253;
L255:;
si0=l25;
if(si0){
goto L256;
}
si0=l5;
l7=si0;
si0=0U;
l21=si0;
si0=l28;
l18=si0;
goto L7;
L256:;
si0=l18;
si1=16U;
si0+=si1;
l27=si0;
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
si0=l21;
si1=-2U;
si0+=si1;
l25=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l28;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L257;
}
si0=l25;
l21=si0;
si0=l22;
l22=si0;
si0=l27;
l18=si0;
goto L253;
L257:;
si0=l25;
if(si0){
goto L258;
}
si0=l5;
l7=si0;
si0=0U;
l21=si0;
si0=l22;
l22=si0;
si0=l27;
l18=si0;
goto L7;
L258:;
si0=l18;
si1=24U;
si0+=si1;
l25=si0;
si0=l7;
si1=3U;
si0+=si1;
l5=si0;
si0=l21;
si1=-3U;
si0+=si1;
l28=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l27;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
si0=l18;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L259;
}
si0=l28;
l21=si0;
si0=l22;
l22=si0;
si0=l25;
l18=si0;
goto L253;
L259:;
si0=l28;
if(si0){
goto L260;
}
si0=l5;
l7=si0;
si0=0U;
l21=si0;
si0=l22;
l22=si0;
si0=l25;
l18=si0;
goto L7;
L260:;
si0=l18;
si1=32U;
si0+=si1;
l18=si0;
si0=l7;
si1=4U;
si0+=si1;
l5=si0;
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l25;
si0<<=(si1&31);
si1=l22;
si0+=si1;
l22=si0;
L253:;
si0=l22;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L249;
}
si0=0U;
l3=si0;
si0=l5;
l7=si0;
si0=0U;
l18=si0;
L250:;
si0=l8;
si1=16208U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l22=si0;
goto L5;
L249:;
si0=l8;
si1=16209U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2942076U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L9;
}
L8:;
si0=0U;
l21=si0;
L7:;
si0=l19;
l25=si0;
L6:;
si0=l25;
l26=si0;
L5:;
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l22;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
if(si0){
goto L263;
}
si0=l24;
si1=l23;
si0=si0 != si1;
if(si0){
goto L264;
}
si0=l21;
l3=si0;
goto L262;
L264:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=16208U;
si0=si0 <= si1;
if(si0){
goto L265;
}
si0=l21;
l3=si0;
goto L262;
L265:;
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L263;
}
si0=l3;
si1=16205U;
si0=si0 <= si1;
if(si0){
goto L263;
}
si0=l21;
l3=si0;
goto L262;
L263:;
si0=l0;
si1=l6;
si2=l24;
si3=l23;
si2-=si3;
si0=f15255(i,si0,si1,si2);
if(si0){
goto L261;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l23=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L262:;
si0=l0;
si1=l20;
si2=l3;
si1-=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l24;
si3=l23;
si2-=si3;
l6=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L266;
}
si0=l24;
si1=l23;
si0=si0 == si1;
if(si0){
goto L266;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si0-=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L268;
}
si0=l21;
si1=l5;
si2=l6;
si0=f15236(i,si0,si1,si2);
l6=si0;
goto L267;
L268:;
si0=l21;
si1=l5;
si2=l6;
si0=f15234(i,si0,si1,si2);
l6=si0;
L267:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l17;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L266:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=0U;
si1=si1 != si2;
si2=6U;
si1<<=(si2&31);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l4=si2;
si3=16191U;
si2=si2 == si3;
si3=7U;
si2<<=(si3&31);
si1+=si2;
si2=256U;
si3=l4;
si4=16194U;
si3=si3 == si4;
si4=8U;
si3<<=(si4&31);
si4=l4;
si5=16199U;
si4=si4 == si5;
si2=si4?si2:si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l26;
si1=-5U;
si2=l26;
si0=si2?si0:si1;
l0=si0;
si1=l0;
si2=l26;
si3=l24;
si4=l23;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l26;
si3=l20;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l1;
si3=4U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
goto L1;
L261:;
si0=l8;
si1=16210U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=-4U;
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f15255(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+40U);
si2<<=(si3&31);
si3=1U;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+32U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
l4=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l0=si0;
if(si0){
goto L3;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=1U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si1<<=(si2&31);
l0=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
L3:;
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si2=l0;
si1-=si2;
si2=l0;
f15267(i,si0,si1,si2);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
goto L0;
L4:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
l5=si1;
si0+=si1;
si1=l1;
si2=l2;
si1-=si2;
si2=l0;
si3=l5;
si2-=si3;
l0=si2;
si3=l2;
si4=l0;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
l4=si2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l1;
si2=l2;
si3=l4;
si2-=si3;
l2=si2;
si1-=si2;
si2=l2;
f15267(i,si0,si1,si2);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
goto L0;
L5:;
si0=0U;
l5=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+52U);
si3=l4;
si2+=si3;
l2=si2;
si3=l2;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+44U);
l0=si4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
L1:;
si0=l5;
L0:;
return si0;
}

U32 f15256(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=-2U;
l1=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-16180U;
si0+=si1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l1;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l3;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
L1:;
si0=l1;
L0:;
return si0;
}

U32 f15257(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l6=si0;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0&=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=-4U;
si0&=si1;
l9=si0;
si0=0U;
l8=si0;
si0=l1;
l10=si0;
L8:;
{
si0=l6;
si1=32U;
si0+=si1;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=l10;
si2=2U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=l10;
si2=6U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=l8;
si2=4U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l8;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L10:;
{
si0=l6;
si1=32U;
si0+=si1;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=15U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+62U);
l12=si0;
if(si0){
goto L4;
}
goto L5;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L5:;
si0=14U;
l8=si0;
si0=0U;
l12=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+60U);
if(si0){
goto L4;
}
si0=13U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+58U);
if(si0){
goto L4;
}
si0=12U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+56U);
if(si0){
goto L4;
}
si0=11U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+54U);
if(si0){
goto L4;
}
si0=10U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+52U);
if(si0){
goto L4;
}
si0=9U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+50U);
if(si0){
goto L4;
}
si0=8U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+48U);
if(si0){
goto L4;
}
si0=7U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+46U);
if(si0){
goto L4;
}
si0=6U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+44U);
if(si0){
goto L4;
}
si0=5U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+42U);
if(si0){
goto L4;
}
si0=4U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+40U);
if(si0){
goto L4;
}
si0=3U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+38U);
if(si0){
goto L4;
}
si0=2U;
l8=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+36U);
if(si0){
goto L4;
}
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+34U);
if(si0){
goto L11;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=320U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=320U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l13=si0;
goto L2;
L11:;
si0=0U;
l9=si0;
si0=l10;
si1=0U;
si0=si0 != si1;
l14=si0;
si0=1U;
l8=si0;
si0=0U;
l12=si0;
si0=1U;
l7=si0;
goto L3;
L4:;
si0=l10;
si1=l8;
si2=l10;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=l6;
si1=32U;
si0+=si1;
si1=2U;
si0|=si1;
l10=si0;
si0=1U;
l9=si0;
si0=1U;
l7=si0;
L12:;
{
si0=l10;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
si0=l8;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=1U;
l9=si0;
si0=l8;
l7=si0;
L3:;
si0=-1U;
l10=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+34U);
l11=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l11;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+36U);
l15=si1;
si0+=si1;
l16=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+38U);
l17=si1;
si0+=si1;
l16=si0;
si1=8U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+40U);
l18=si1;
si0+=si1;
l16=si0;
si1=16U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
si0=32U;
si1=l16;
si2=1U;
si1<<=(si2&31);
si2=l6;
si2=i32_load16_u(&i->m0,(U64)si2+42U);
l19=si2;
si1+=si2;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+44U);
l13=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+46U);
l20=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+48U);
l21=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+50U);
l22=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+52U);
l23=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+54U);
l24=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+56U);
l25=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+58U);
l26=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+60U);
l27=si1;
si0-=si1;
l16=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l16;
si1=1U;
si0<<=(si1&31);
l16=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l16;
si1=l12;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l0;
si0=!(si0);
si1=l9;
si0|=si1;
if(si0){
goto L1;
}
L13:;
si0=l14;
si1=l7;
si0=si0 > si1;
l12=si0;
si0=0U;
l9=si0;
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l6;
si1=l11;
i32_store16(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l15;
si2=l11;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l6;
si1=l17;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l18;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l6;
si1=l19;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l13;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+14U,si1);
si0=l6;
si1=l20;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l21;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+18U,si1);
si0=l6;
si1=l22;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l23;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+22U,si1);
si0=l6;
si1=l24;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l25;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+26U,si1);
si0=l6;
si1=l26;
si2=l10;
si1+=si2;
l10=si1;
i32_store16(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l27;
si2=l10;
si1+=si2;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=1U;
si0&=si1;
l16=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l9=si0;
si0=l1;
l10=si0;
L16:;
{
si0=l10;
si0=i32_load16_u(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=l11;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l11;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store16(&i->m0,(U64)si0,si1);
L17:;
si0=l10;
si1=2U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si1=l11;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l11;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
L18:;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l2;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l16;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l9;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=l10;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=l10;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store16(&i->m0,(U64)si0,si1);
L14:;
si0=l14;
si1=l7;
si2=l12;
si0=si2?si0:si1;
l13=si0;
si0=20U;
l19=si0;
si0=0U;
l27=si0;
si0=l5;
l23=si0;
si0=l5;
l24=si0;
si0=0U;
l26=si0;
si0=l0;
switch(si0){
case 0:
goto L19;
case 1:
goto L21;
default:
goto L20;
}
L21:;
si0=1U;
l10=si0;
si0=l13;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=257U;
l19=si0;
si0=2944608U;
l24=si0;
si0=2944544U;
l23=si0;
si0=0U;
l27=si0;
si0=1U;
l26=si0;
goto L19;
L20:;
si0=l0;
si1=2U;
si0=si0 == si1;
l27=si0;
si0=0U;
l19=si0;
si0=2944736U;
l24=si0;
si0=2944672U;
l23=si0;
si0=l0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=0U;
l26=si0;
goto L19;
L22:;
si0=1U;
l10=si0;
si0=0U;
l26=si0;
si0=l13;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
L19:;
si0=1U;
si1=l13;
si0<<=(si1&31);
l25=si0;
si1=-1U;
si0+=si1;
l22=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=0U;
l15=si0;
si0=l13;
l0=si0;
si0=0U;
l17=si0;
si0=0U;
l9=si0;
si0=-1U;
l21=si0;
L23:;
{
si0=1U;
si1=l0;
si0<<=(si1&31);
l18=si0;
L25:;
{
si0=l7;
si1=l17;
si0-=si1;
l12=si0;
si0=0U;
l14=si0;
si0=l5;
si1=l15;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
si1=1U;
si0+=si1;
si1=l19;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l19;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=96U;
l14=si0;
si0=0U;
l2=si0;
goto L26;
L27:;
si0=l23;
si1=l2;
si2=l19;
si1-=si2;
si2=1U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
si0=l24;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
L26:;
si0=l20;
si1=l18;
si2=l9;
si3=l17;
si2>>=(si3&31);
si1+=si2;
si2=-1U;
si3=l12;
si2<<=(si3&31);
l0=si2;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l0;
si1=2U;
si0<<=(si1&31);
l16=si0;
si0=l18;
l11=si0;
L28:;
{
si0=l10;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=2U;
si0+=si1;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l16;
si0+=si1;
l10=si0;
si0=l11;
si1=l0;
si0+=si1;
l11=si0;
if(si0){
goto L28;
}
}
si0=1U;
si1=l7;
si2=-1U;
si1+=si2;
si0<<=(si1&31);
l11=si0;
L29:;
{
si0=l11;
l10=si0;
si1=1U;
si0>>=(si1&31);
l11=si0;
si0=l10;
si1=l9;
si0&=si1;
if(si0){
goto L29;
}
}
si0=l6;
si1=32U;
si0+=si1;
si1=l7;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l11=si1;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0+=si1;
si1=l9;
si0&=si1;
si1=l10;
si0+=si1;
si1=0U;
si2=l10;
si0=si2?si0:si1;
l9=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l11;
si1=65535U;
si0&=si1;
if(si0){
goto L30;
}
si0=l7;
si1=l8;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l1;
si1=l5;
si2=l15;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l7=si0;
L30:;
si0=l7;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l9;
si1=l22;
si0&=si1;
l11=si0;
si1=l21;
si0=si0 == si1;
if(si0){
goto L25;
}
}
si0=1U;
si1=l7;
si2=l17;
si3=l13;
si4=l17;
si2=si4?si2:si3;
l17=si2;
si1-=si2;
l0=si1;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l8;
si1=l17;
si0-=si1;
l0=si0;
si0=l6;
si1=32U;
si0+=si1;
si1=l7;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l7;
l12=si0;
L34:;
{
si0=l2;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
si0-=si1;
l2=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
}
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l2=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L34;
}
goto L32;
}
L33:;
si0=l12;
si1=l17;
si0-=si1;
l0=si0;
L32:;
si0=1U;
si1=l0;
si0<<=(si1&31);
l2=si0;
L31:;
si0=1U;
l10=si0;
si0=l26;
si1=l2;
si2=l25;
si1+=si2;
l25=si1;
si2=852U;
si1=si1 > si2;
si0&=si1;
if(si0){
goto L1;
}
si0=l27;
si1=l25;
si2=592U;
si1=si1 > si2;
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l13;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si1=l0;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l20;
si2=l18;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l20=si1;
si2=l2;
si1-=si2;
si2=2U;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l11;
l21=si0;
goto L23;
L24:;
}
si0=l9;
si0=!(si0);
if(si0){
goto L35;
}
si0=l20;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=0U;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l6;
si1=l12;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l6;
si1=64U;
i32_store8(&i->m0,(U64)si0,si1);
L35:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l25;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
L1:;
si0=l10;
L0:;
return si0;
}

void f15258(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=2872U;
si0+=si1;
si1=2945608U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=2684U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2864U,si1);
si0=l0;
si1=2860U;
si0+=si1;
si1=2945588U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=2440U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2852U,si1);
si0=l0;
si1=2848U;
si0+=si1;
si1=2945568U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=148U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2840U,si1);
si0=l0;
f15259(i,si0);
L0:;
}

void f15259(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=0U;
l1=si0;
L1:;
{
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si1=152U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=148U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=1144U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+2684U,si1);
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+2440U,si1);
si0=l0;
si1=2756U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2752U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2748U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2744U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2740U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2736U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2732U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2728U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2724U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2720U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2716U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2712U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2708U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2704U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2700U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2696U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2692U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2688U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2556U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2552U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2548U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2544U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2540U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2536U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2532U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2528U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2524U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2520U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2516U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2512U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2508U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2504U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2500U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2496U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2492U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2488U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2484U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2480U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2476U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2472U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2468U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2464U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2460U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2456U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2452U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2448U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=2444U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+5804U,sj1);
si0=l0;
si1=1172U;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5800U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5792U,si1);
L0:;
}

void f15260(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l4=si0;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l3;
si3=l4;
si2<<=(si3&31);
si1|=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l3=si3;
si2-=si3;
si1>>=(si2&31);
l5=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l3;
si1=-13U;
si0+=si1;
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l3;
si3=l4;
si2<<=(si3&31);
si1|=si2;
l5=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l4;
si1=3U;
si0+=si1;
l3=si0;
L1:;
si0=l3;
si1=9U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l3;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
si2=-1U;
si1^=si2;
l3=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
si2=8U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si0+=si1;
si1=l1;
si2=l2;
f15267(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L0:;
}

void f15261(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l1=si0;
si1=16U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+5816U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
goto L2;
L3:;
si0=l1;
si1=8U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+5816U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
si1=-8U;
si0+=si1;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+5820U,si1);
L1:;
L0:;
}

void f15262(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l1=si3;
si2<<=(si3&31);
si1|=si2;
l2=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l1;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l1=si3;
si2-=si3;
si1>>=(si2&31);
l2=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l1;
si1=-13U;
si0+=si1;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l1;
si1=10U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
si1=-9U;
si0+=si1;
l1=si0;
goto L3;
L4:;
si0=l1;
si1=7U;
si0+=si1;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
goto L6;
L7:;
si0=l1;
si1=8U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
si1=-8U;
si0+=si1;
l2=si0;
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+5820U,si1);
L5:;
L0:;
}

void f15263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+148U);
if(si0){
goto L4;
}
si0=l0;
si1=152U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=160U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=164U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=168U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=172U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=204U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=208U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=212U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=216U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=224U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=228U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=236U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=240U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=248U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=260U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=264U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=268U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=272U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l0;
si1=184U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=188U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=200U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=0U;
l6=si0;
L6:;
{
si0=l0;
si1=l6;
si0+=si1;
l5=si0;
si1=276U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=280U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=284U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=0U;
l5=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si1=896U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=1U;
l5=si0;
L4:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
L3:;
si0=l0;
si1=l0;
si2=2840U;
si1+=si2;
f15264(i,si0,si1);
si0=l0;
si1=l0;
si2=2852U;
si1+=si2;
f15264(i,si0,si1);
si0=l0;
si1=150U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=l0;
si2=2844U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=154U;
si0+=si1;
si1=65535U;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=7U;
si1=138U;
si2=l4;
si0=si2?si0:si1;
l8=si0;
si0=4U;
si1=3U;
si2=l4;
si0=si2?si0:si1;
l9=si0;
si0=l0;
si1=154U;
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l10=si0;
si0=-1U;
l11=si0;
L8:;
{
si0=l4;
l5=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L10;
}
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l12;
l7=si0;
goto L9;
L10:;
si0=l12;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L12;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2684U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=l12;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
goto L11;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l11;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2684U;
si0+=si1;
l12=si0;
si1=l12;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
L14:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2748U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2748U,si1);
goto L11;
L13:;
si0=l7;
si1=9U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2752U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2752U,si1);
goto L11;
L15:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2756U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2756U,si1);
L11:;
si0=0U;
l7=si0;
si0=l4;
if(si0){
goto L17;
}
si0=3U;
l9=si0;
si0=138U;
l8=si0;
goto L16;
L17:;
si0=3U;
si1=4U;
si2=l5;
si3=l4;
si2=si2 == si3;
l12=si2;
si0=si2?si0:si1;
l9=si0;
si0=6U;
si1=7U;
si2=l12;
si0=si2?si0:si1;
l8=si0;
L16:;
si0=l5;
l11=si0;
L9:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=2442U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=l0;
si2=2856U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2446U;
si0+=si1;
si1=65535U;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=7U;
si1=138U;
si2=l4;
si0=si2?si0:si1;
l8=si0;
si0=4U;
si1=3U;
si2=l4;
si0=si2?si0:si1;
l9=si0;
si0=l0;
si1=2446U;
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l10=si0;
si0=-1U;
l11=si0;
L19:;
{
si0=l4;
l5=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L21;
}
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
l7=si0;
goto L20;
L21:;
si0=l12;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L23;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2684U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=l12;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
goto L22;
L23:;
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=l11;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2684U;
si0+=si1;
l12=si0;
si1=l12;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
L25:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2748U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2748U,si1);
goto L22;
L24:;
si0=l7;
si1=9U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L26;
}
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2752U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2752U,si1);
goto L22;
L26:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2756U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+2756U,si1);
L22:;
si0=0U;
l7=si0;
si0=l4;
if(si0){
goto L28;
}
si0=3U;
l9=si0;
si0=138U;
l8=si0;
goto L27;
L28:;
si0=3U;
si1=4U;
si2=l5;
si3=l4;
si2=si2 == si3;
l12=si2;
si0=si2?si0:si1;
l9=si0;
si0=6U;
si1=7U;
si2=l12;
si0=si2?si0:si1;
l8=si0;
L27:;
si0=l5;
l11=si0;
L20:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l0;
si1=l0;
si2=2864U;
si1+=si2;
f15264(i,si0,si1);
si0=18U;
l7=si0;
si0=l0;
si1=2746U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=17U;
l7=si0;
si0=l0;
si1=2690U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=16U;
l7=si0;
si0=l0;
si1=2742U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=15U;
l7=si0;
si0=l0;
si1=2694U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=14U;
l7=si0;
si0=l0;
si1=2738U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=13U;
l7=si0;
si0=l0;
si1=2698U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=12U;
l7=si0;
si0=l0;
si1=2734U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=11U;
l7=si0;
si0=l0;
si1=2702U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=10U;
l7=si0;
si0=l0;
si1=2730U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=9U;
l7=si0;
si0=l0;
si1=2706U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=8U;
l7=si0;
si0=l0;
si1=2726U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=7U;
l7=si0;
si0=l0;
si1=2710U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=6U;
l7=si0;
si0=l0;
si1=2722U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=5U;
l7=si0;
si0=l0;
si1=2714U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=4U;
l7=si0;
si0=l0;
si1=2718U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=3U;
si1=2U;
si2=l0;
si3=2686U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si0=si2?si0:si1;
l7=si0;
L29:;
si0=l0;
si1=l7;
si2=3U;
si1*=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5800U);
si1+=si2;
l4=si1;
si2=17U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5800U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5804U);
si1=10U;
si0+=si1;
si1=3U;
si0>>=(si1&31);
l5=si0;
si1=l4;
si2=27U;
si1+=si2;
si2=3U;
si1>>=(si2&31);
l4=si1;
si2=l5;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
goto L1;
L2:;
si0=0U;
l7=si0;
si0=l2;
si1=5U;
si0+=si1;
l5=si0;
l4=si0;
L1:;
si0=l1;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
f15260(i,si0,si1,si2,si3);
goto L30;
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L32;
}
L33:;
si0=l3;
si1=2U;
si0+=si1;
l4=si0;
si0=l6;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l4;
si3=l6;
si2<<=(si3&31);
si1|=si2;
l5=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l4=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l4;
si1=-13U;
si0+=si1;
l4=si0;
goto L34;
L35:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l4;
si3=l6;
si2<<=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l6;
si1=3U;
si0+=si1;
l4=si0;
L34:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l0;
si1=2945632U;
si2=2946784U;
f15265(i,si0,si1,si2);
goto L30;
L32:;
si0=l3;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L37;
}
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l5;
si3=l6;
si2<<=(si3&31);
si1|=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=65535U;
si0&=si1;
si1=16U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5820U);
l4=si2;
si1-=si2;
si0>>=(si1&31);
l12=si0;
si0=l4;
si1=-13U;
si0+=si1;
l4=si0;
goto L36;
L37:;
si0=l6;
si1=3U;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+5816U);
si1=l5;
si2=l6;
si1<<=(si2&31);
si0|=si1;
l12=si0;
L36:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l0;
si1=2844U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=65280U;
si0+=si1;
l6=si0;
si0=l0;
si1=2856U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=12U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L39;
}
si0=l0;
si1=l12;
si2=l6;
si3=l4;
si2<<=(si3&31);
si1|=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=65535U;
si0&=si1;
si1=16U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5820U);
l5=si2;
si1-=si2;
si0>>=(si1&31);
l4=si0;
si0=l5;
si1=-11U;
si0+=si1;
l5=si0;
goto L38;
L39:;
si0=l4;
si1=5U;
si0+=si1;
l5=si0;
si0=l12;
si1=l6;
si2=l4;
si1<<=(si2&31);
si0|=si1;
l4=si0;
L38:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l5;
si1=12U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L41;
}
si0=l0;
si1=l4;
si2=l8;
si3=l5;
si2<<=(si3&31);
si1|=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=65535U;
si0&=si1;
si1=16U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5820U);
l4=si2;
si1-=si2;
si0>>=(si1&31);
l12=si0;
si0=l4;
si1=-11U;
si0+=si1;
l6=si0;
goto L40;
L41:;
si0=l5;
si1=5U;
si0+=si1;
l6=si0;
si0=l4;
si1=l8;
si2=l5;
si1<<=(si2&31);
si0|=si1;
l12=si0;
L40:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l7;
si1=65533U;
si0+=si1;
l5=si0;
si0=l6;
si1=13U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L43;
}
si0=l0;
si1=l12;
si2=l5;
si3=l6;
si2<<=(si3&31);
si1|=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=65535U;
si0&=si1;
si1=16U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5820U);
l4=si2;
si1-=si2;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
goto L42;
L43:;
si0=l6;
si1=4U;
si0+=si1;
l4=si0;
si0=l12;
si1=l5;
si2=l6;
si1<<=(si2&31);
si0|=si1;
l5=si0;
L42:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=-1U;
l6=si0;
si0=l0;
si1=5817U;
si0+=si1;
l10=si0;
L44:;
{
si0=l0;
si1=l5;
si2=l0;
si3=l6;
si4=2947249U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=2686U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
l12=si2;
si3=l4;
si2<<=(si3&31);
si1|=si2;
l5=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l4;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L46;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l4=si3;
si2-=si3;
si1>>=(si2&31);
l5=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l4;
si1=-13U;
si0+=si1;
l4=si0;
goto L45;
L46:;
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
L45:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l7;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
si0=l0;
si1=l0;
si2=148U;
si1+=si2;
l4=si1;
si2=l9;
f15266(i,si0,si1,si2);
si0=l0;
si1=l0;
si2=2440U;
si1+=si2;
l5=si1;
si2=l8;
f15266(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l5;
f15265(i,si0,si1,si2);
L30:;
si0=l0;
f15259(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L47;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l4=si0;
si1=9U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L49;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+5816U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L48;
L49:;
si0=l4;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L48;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+5816U);
i32_store8(&i->m0,(U64)si0,si1);
L48:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+5816U,si1);
L47:;
L0:;
}

void f15264(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
si0=l0;
sj1=2461016260608ULL;
i64_store(&i->m0,(U64)si0+5200U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=-1U;
l6=si0;
si0=0U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=5208U;
si0+=si1;
l9=si0;
si0=-1U;
l6=si0;
si0=l3;
l4=si0;
si0=0U;
l7=si0;
L3:;
{
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5200U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+5200U,si1);
si0=l0;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l7;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
L4:;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l8;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5200U);
l7=si0;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
L2:;
L6:;
{
si0=l0;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+5200U,si1);
si0=l0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l6;
si2=1U;
si1+=si2;
l4=si1;
si2=0U;
si3=l6;
si4=2U;
si3=(U32)((I32)si3<(I32)si4);
l10=si3;
si1=si3?si1:si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si0+=si1;
si1=5208U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5800U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5800U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5804U);
si2=l5;
si3=l9;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2+2U);
si1-=si2;
i32_store(&i->m0,(U64)si0+5804U,si1);
L7:;
si0=l4;
si1=l6;
si2=l10;
si0=si2?si0:si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5200U);
l7=si0;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
}
L1:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=1U;
si0>>=(si1&31);
l7=si0;
L8:;
{
si0=l0;
si1=l7;
l11=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l11;
l7=si0;
si0=l11;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5200U);
l10=si1;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=l12;
si0+=si1;
si1=5208U;
si0+=si1;
l13=si0;
si0=l3;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
l5=si0;
L10:;
{
si0=l4;
si1=l10;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
si0=l4;
l7=si0;
goto L11;
L12:;
si0=l3;
si1=l0;
si2=2908U;
si1+=si2;
l7=si1;
si2=l4;
si3=1U;
si2|=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l9=si0;
si1=l3;
si2=l7;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
l7=si0;
goto L11;
L14:;
si0=l4;
l7=si0;
si0=l0;
si1=5208U;
si0+=si1;
l4=si0;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l16;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L11;
}
L13:;
si0=l10;
l7=si0;
L11:;
si0=l14;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=l0;
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=2908U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l5;
l7=si0;
goto L9;
L15:;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si1+=si2;
si2=5208U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l5;
l7=si0;
goto L9;
L16:;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5200U);
l10=si1;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-1U;
si0+=si1;
l7=si0;
si0=l11;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5200U);
l4=si0;
L17:;
{
si0=l8;
l11=si0;
si0=l0;
si1=l4;
si2=-1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+5200U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+2912U);
l12=si0;
si0=l0;
si1=l0;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=2908U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0+2912U,si1);
si0=1U;
l7=si0;
si0=l4;
si1=3U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l0;
si1=l8;
si0+=si1;
si1=5208U;
si0+=si1;
l13=si0;
si0=2U;
l4=si0;
si0=l3;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=1U;
l5=si0;
L19:;
{
si0=l4;
si1=l10;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l4;
l7=si0;
goto L20;
L21:;
si0=l3;
si1=l0;
si2=2908U;
si1+=si2;
l7=si1;
si2=l4;
si3=1U;
si2|=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l9=si0;
si1=l3;
si2=l7;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l4;
l7=si0;
goto L20;
L23:;
si0=l4;
l7=si0;
si0=l0;
si1=5208U;
si0+=si1;
l4=si0;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l16;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L20;
}
L22:;
si0=l10;
l7=si0;
L20:;
si0=l14;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=l0;
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=2908U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l5;
l7=si0;
goto L18;
L24:;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si1+=si2;
si2=5208U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l5;
l7=si0;
goto L18;
L25:;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5200U);
l10=si1;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
}
L18:;
si0=l0;
si1=2908U;
si0+=si1;
l14=si0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5204U);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+5204U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+2912U);
l7=si0;
si0=l14;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5204U);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+5204U,si1);
si0=l14;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si1=l3;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=l3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
l10=si2;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=5208U;
si0+=si1;
l16=si0;
si1=l11;
si0+=si1;
l13=si0;
si1=l16;
si2=l12;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=l16;
si3=l7;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l5;
si4=l7;
si3=si3 > si4;
si1=si3?si1:si2;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l10;
si1=l11;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+2912U,si1);
si0=1U;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5200U);
l10=si0;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L26;
}
si0=1U;
l5=si0;
si0=2U;
l4=si0;
L27:;
{
si0=l4;
si1=l10;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L29;
}
si0=l4;
l7=si0;
goto L28;
L29:;
si0=l3;
si1=l14;
si2=l4;
si3=1U;
si2|=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si2=l14;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l7;
si1=l9;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l4;
l7=si0;
goto L28;
L31:;
si0=l4;
l7=si0;
si0=l16;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l16;
si2=l8;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L28;
}
L30:;
si0=l10;
l7=si0;
L28:;
si0=l15;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si1=l3;
si2=l0;
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=2908U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l5;
l7=si0;
goto L26;
L32:;
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si1+=si2;
si2=5208U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l5;
l7=si0;
goto L26;
L33:;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5200U);
l10=si1;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
}
L26:;
si0=l11;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=2908U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5200U);
l4=si0;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5204U);
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+5204U,si1);
si0=l0;
si1=2908U;
si0+=si1;
l4=si0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+2912U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=2900U;
si0+=si1;
l1=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2892U;
si0+=si1;
l20=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2884U;
si0+=si1;
l21=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=2876U;
si0+=si1;
l22=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5204U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5204U);
l7=si0;
si1=571U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L34;
}
si0=l7;
si1=-572U;
si0+=si1;
l15=si0;
si0=l7;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=2912U;
si0+=si1;
l7=si0;
si0=0U;
l14=si0;
L35:;
{
si0=l11;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l10=si0;
si1=l9;
si2=l11;
si3=l10;
si3=i32_load16_u(&i->m0,(U64)si3+2U);
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2+2U);
l16=si2;
si3=1U;
si2+=si3;
si3=l9;
si4=l16;
si3=(U32)((I32)si3<=(I32)si4);
l16=si3;
si1=si3?si1:si2;
l13=si1;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l5;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L36;
}
si0=l0;
si1=l13;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=2876U;
si0+=si1;
l12=si0;
si1=l12;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
l12=si0;
si0=l4;
si1=l19;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L37;
}
si0=l18;
si1=l4;
si2=l19;
si1-=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L37:;
si0=l0;
si1=l12;
si2=l13;
si1+=si2;
si2=l10;
si2=i32_load16_u(&i->m0,(U64)si2);
l4=si2;
si1*=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5800U);
si1+=si2;
i32_store(&i->m0,(U64)si0+5800U,si1);
si0=l17;
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=l12;
si2=l17;
si3=l8;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2+2U);
si1+=si2;
si2=l4;
si1*=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5804U);
si1+=si2;
i32_store(&i->m0,(U64)si0+5804U,si1);
L36:;
si0=l14;
si1=l16;
si0+=si1;
l14=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
if(si0){
goto L35;
}
}
si0=l14;
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
l7=si0;
si1=2878U;
si0+=si1;
l16=si0;
si0=l7;
si1=2876U;
si0+=si1;
l15=si0;
L38:;
{
si0=l16;
l7=si0;
L39:;
{
si0=l7;
si1=-4U;
si0+=si1;
l4=si0;
si0=l7;
si1=-2U;
si0+=si1;
l10=si0;
l7=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L39;
}
}
si0=l10;
si1=-2U;
si0+=si1;
si1=l4;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=l10;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l15;
si1=l15;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l14;
si1=2U;
si0=(U32)((I32)si0>(I32)si1);
l7=si0;
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si0=l7;
if(si0){
goto L38;
}
}
si0=l9;
si0=!(si0);
if(si0){
goto L34;
}
si0=l0;
si1=2904U;
si0+=si1;
l15=si0;
si0=573U;
l4=si0;
L40:;
{
si0=l0;
si1=l9;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=2876U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
{
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L43:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l10;
si1=l5;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L43;
}
}
si0=l9;
si1=l11;
si2=l10;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
si1=i32_load16_u(&i->m0,(U64)si1+2U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l0;
si1=l9;
si2=l10;
si1-=si2;
si2=l7;
si2=i32_load16_u(&i->m0,(U64)si2);
si1*=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+5800U);
si1+=si2;
i32_store(&i->m0,(U64)si0+5800U,si1);
si0=l7;
si1=2U;
si0+=si1;
si1=l9;
i32_store16(&i->m0,(U64)si0,si1);
L44:;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L40;
}
}
L34:;
si0=l0;
si1=2878U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l22;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
l4=si1;
i32_store16(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l4;
si2=l7;
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2880U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2882U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l7;
si2=l21;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2886U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2888U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2890U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l7;
si2=l20;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+18U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2894U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2896U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+22U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2898U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=l7;
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+26U,si1);
si0=l2;
si1=l0;
si2=2902U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
si2=l7;
si1+=si2;
si2=1U;
si1<<=(si2&31);
l7=si1;
i32_store16(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l7;
si2=l0;
si3=2904U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
si1+=si2;
si2=1U;
si1<<=(si2&31);
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L45;
}
si0=0U;
l9=si0;
L46:;
{
si0=l3;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l5=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si1=l5;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
si0&=si1;
l10=si0;
si0=0U;
l4=si0;
si0=l5;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L49;
}
goto L48;
L49:;
si0=l5;
si1=65532U;
si0&=si1;
l0=si0;
si0=0U;
l4=si0;
L50:;
{
si0=l4;
si1=l7;
si2=1U;
si1&=si2;
si0|=si1;
si1=2U;
si0<<=(si1&31);
si1=l7;
si2=2U;
si1&=si2;
si0|=si1;
si1=l7;
si2=2U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
si0|=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=4U;
si0>>=(si1&31);
l7=si0;
si0=l0;
si1=-4U;
si0+=si1;
l0=si0;
if(si0){
goto L50;
}
}
L48:;
si0=l10;
si0=!(si0);
if(si0){
goto L51;
}
L52:;
{
si0=l4;
si1=l7;
si2=1U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=1U;
si0>>=(si1&31);
l7=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l14;
si1=l5;
i32_store16(&i->m0,(U64)si0,si1);
L47:;
si0=l9;
si1=l6;
si0=si0 != si1;
l7=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l7;
if(si0){
goto L46;
}
}
L45:;
L0:;
}

void f15265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5792U);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l3=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
si0=l0;
si1=5817U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
L3:;
{
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5784U);
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5796U);
si1=l4;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l3=si0;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l6;
si2=i32_load16_u(&i->m0,(U64)si2);
l8=si2;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l6=si3;
si2<<=(si3&31);
si1|=si2;
l9=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l6;
si1=16U;
si2=l3;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l6=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l3;
si1=l6;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
goto L5;
L7:;
si0=l6;
si1=l3;
si0+=si1;
l3=si0;
goto L5;
L6:;
si0=l8;
si1=2945312U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=2U;
si0<<=(si1&31);
l11=si0;
si1=l1;
si0+=si1;
l6=si0;
si1=1030U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l6;
si3=1028U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
l12=si2;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l13=si3;
si2<<=(si3&31);
si1|=si2;
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l13;
si1=16U;
si2=l3;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l13;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l13=si3;
si2-=si3;
si1>>=(si2&31);
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l3;
si1=l13;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
goto L8;
L9:;
si0=l13;
si1=l3;
si0+=si1;
l3=si0;
L8:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l10;
si1=-28U;
si0+=si1;
si1=-20U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l11;
si2=2947280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
l8=si0;
si0=l3;
si1=16U;
si2=l11;
si3=2946912U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l0;
si1=l6;
si2=l8;
si3=l3;
si2<<=(si3&31);
si1|=si2;
l3=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l3=si3;
si2-=si3;
si1>>=(si2&31);
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l13;
si1=l3;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
goto L11;
L12:;
si0=l0;
si1=l6;
si2=l8;
si3=l3;
si2<<=(si3&31);
si1|=si2;
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l13;
si1=l3;
si0+=si1;
l3=si0;
L11:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+5820U,si1);
L10:;
si0=l2;
si1=l9;
si2=-1U;
si1+=si2;
l13=si1;
si2=l13;
si3=7U;
si2>>=(si3&31);
si3=256U;
si2+=si3;
si3=l9;
si4=257U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=2944800U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l9=si1;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l11=si0;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l0;
si1=l6;
si2=l11;
si2=i32_load16_u(&i->m0,(U64)si2);
l11=si2;
si3=l3;
si2<<=(si3&31);
si1|=si2;
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l3;
si1=16U;
si2=l8;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l3=si3;
si2-=si3;
si1>>=(si2&31);
l6=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l8;
si1=l3;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
goto L13;
L14:;
si0=l3;
si1=l8;
si0+=si1;
l3=si0;
L13:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l13;
si1=l10;
si2=2947408U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
l8=si0;
si0=l3;
si1=16U;
si2=l10;
si3=2947040U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l0;
si1=l6;
si2=l8;
si3=l3;
si2<<=(si3&31);
si1|=si2;
l3=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l3=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=l3;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
goto L5;
L15:;
si0=l0;
si1=l6;
si2=l8;
si3=l3;
si2<<=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=l3;
si0+=si1;
l3=si0;
L5:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+5820U,si1);
L4:;
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
si0=l7;
l6=si0;
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5792U);
si0=si0 < si1;
if(si0){
goto L3;
}
}
L1:;
si0=l1;
si1=1026U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l1;
si2=i32_load16_u(&i->m0,(U64)si2+1024U);
l6=si2;
si3=l3;
si2<<=(si3&31);
si1|=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l3;
si1=16U;
si2=l4;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l0;
si2=5817U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l3=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l4;
si2=l3;
si1+=si2;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+5820U,si1);
goto L0;
L16:;
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+5820U,si1);
L0:;
}

void f15266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=4U;
si1=3U;
si2=l1;
si2=i32_load16_u(&i->m0,(U64)si2+2U);
l4=si2;
si0=si2?si0:si1;
l5=si0;
si0=7U;
si1=138U;
si2=l4;
si0=si2?si0:si1;
l6=si0;
si0=l0;
si1=5817U;
si0+=si1;
l7=si0;
si0=-1U;
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l4;
l10=si0;
si0=l1;
si1=l3;
l11=si1;
si2=1U;
si1+=si2;
l3=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l4=si0;
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si1=l6;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=l10;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l12;
l9=si0;
goto L3;
L4:;
si0=l12;
si1=l5;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L6;
}
si0=l0;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=2686U;
si0+=si1;
l13=si0;
si0=l9;
si1=2684U;
si0+=si1;
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l9=si0;
L7:;
{
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l14;
si2=i32_load16_u(&i->m0,(U64)si2);
l5=si2;
si3=l9;
si2<<=(si3&31);
si1|=si2;
l8=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=16U;
si2=l13;
si2=i32_load16_u(&i->m0,(U64)si2);
l6=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l9=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l6;
si1=l9;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
goto L8;
L9:;
si0=l9;
si1=l6;
si0+=si1;
l9=si0;
L8:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l6=si0;
si0=l12;
l9=si0;
goto L12;
L13:;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+5816U);
si2=l0;
si3=l10;
si4=2U;
si3<<=(si4&31);
si2+=si3;
l6=si2;
si3=2684U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
l5=si2;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l12=si3;
si2<<=(si3&31);
si1|=si2;
l8=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l12;
si1=16U;
si2=l6;
si3=2686U;
si2+=si3;
si2=i32_load16_u(&i->m0,(U64)si2);
l6=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l12=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l6;
si1=l12;
si0+=si1;
si1=-16U;
si0+=si1;
l6=si0;
goto L14;
L15:;
si0=l12;
si1=l6;
si0+=si1;
l6=si0;
L14:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+5820U,si1);
L12:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+5816U);
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2748U);
l8=si1;
si2=l6;
si1<<=(si2&31);
si0|=si1;
l5=si0;
si0=l6;
si1=16U;
si2=l0;
si2=i32_load16_u(&i->m0,(U64)si2+2750U);
l12=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l0;
si1=l5;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5820U);
l6=si1;
si0+=si1;
si1=-16U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si2=l6;
si1-=si2;
si0>>=(si1&31);
l5=si0;
goto L16;
L17:;
si0=l6;
si1=l12;
si0+=si1;
l12=si0;
L16:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l9;
si1=65533U;
si0+=si1;
l9=si0;
si0=l12;
si1=15U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l0;
si1=l5;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
l12=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l9=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=-14U;
si0+=si1;
l9=si0;
goto L10;
L18:;
si0=l0;
si1=l5;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l12;
si1=2U;
si0+=si1;
l9=si0;
goto L10;
L11:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+5816U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+5820U);
l12=si0;
si0=l9;
si1=9U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=l6;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2752U);
l8=si1;
si2=l12;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l12;
si1=16U;
si2=l0;
si2=i32_load16_u(&i->m0,(U64)si2+2754U);
l5=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l0;
si1=l6;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5820U);
l6=si1;
si0+=si1;
si1=-16U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si2=l6;
si1-=si2;
si0>>=(si1&31);
l6=si0;
goto L20;
L21:;
si0=l12;
si1=l5;
si0+=si1;
l12=si0;
L20:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l9;
si1=65534U;
si0+=si1;
l9=si0;
si0=l12;
si1=14U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L22;
}
si0=l0;
si1=l6;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
l12=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l9=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=-13U;
si0+=si1;
l9=si0;
goto L10;
L22:;
si0=l0;
si1=l6;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l12;
si1=3U;
si0+=si1;
l9=si0;
goto L10;
L19:;
si0=l6;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+2756U);
l8=si1;
si2=l12;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l12;
si1=16U;
si2=l0;
si2=i32_load16_u(&i->m0,(U64)si2+2758U);
l5=si2;
si1-=si2;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=l0;
si1=l6;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+5820U);
l6=si1;
si0+=si1;
si1=-16U;
si0+=si1;
l12=si0;
si0=l8;
si1=16U;
si2=l6;
si1-=si2;
si0>>=(si1&31);
l6=si0;
goto L23;
L24:;
si0=l12;
si1=l5;
si0+=si1;
l12=si0;
L23:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+5820U,si1);
si0=l9;
si1=65526U;
si0+=si1;
l9=si0;
si0=l12;
si1=10U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
si0=l0;
si1=l6;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
l12=si1;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l12=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0+=si1;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si2=65535U;
si1&=si2;
si2=16U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+5820U);
l9=si3;
si2-=si3;
si1>>=(si2&31);
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l9;
si1=-9U;
si0+=si1;
l9=si0;
goto L10;
L25:;
si0=l0;
si1=l6;
si2=l9;
si3=l12;
si2<<=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0+5816U,si1);
si0=l12;
si1=7U;
si0+=si1;
l9=si0;
L10:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+5820U,si1);
L5:;
si0=0U;
l9=si0;
si0=l4;
if(si0){
goto L27;
}
si0=138U;
l6=si0;
si0=3U;
l5=si0;
goto L26;
L27:;
si0=6U;
si1=7U;
si2=l10;
si3=l4;
si2=si2 == si3;
l12=si2;
si0=si2?si0:si1;
l6=si0;
si0=3U;
si1=4U;
si2=l12;
si0=si2?si0:si1;
l5=si0;
L26:;
si0=l10;
l8=si0;
L3:;
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f15267(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=7U;
si0&=si1;
l3=si0;
if(si0){
goto L3;
}
si0=l2;
l4=si0;
goto L2;
L3:;
si0=l2;
l4=si0;
L4:;
{
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=1U;
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
L2:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L1;
}
L5:;
{
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L1:;
L0:;
}

void f15268(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
L1:;
L0:;
}

U32 f15269(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=f15270(i,si0);
L0:;
return si0;
}

U32 f15270(rustpythonInstance*i,U32 l0) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972668U);
l2=si0;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973116U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973120U);
l4=si0;
goto L2;
L3:;
si0=0U;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+2973128U,sj1);
si0=0U;
sj1=281474976776192ULL;
i64_store(&i->m0,(U64)si0+2973120U,sj1);
si0=0U;
si1=l1;
si2=8U;
si1+=si2;
si2=-16U;
si1&=si2;
si2=1431655768U;
si1^=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+2973116U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973136U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973088U,si1);
si0=65536U;
l4=si0;
L2:;
si0=0U;
l2=si0;
si0=3014656U;
si1=2973232U;
si2=l4;
si1+=si2;
si2=-1U;
si1+=si2;
si2=0U;
si3=l4;
si2-=si3;
si1&=si2;
si2=3014656U;
si0=si2?si0:si1;
si1=2973232U;
si0-=si1;
l5=si0;
si1=89U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2973096U,si1);
si0=0U;
si1=2973232U;
i32_store(&i->m0,(U64)si0+2973092U,si1);
si0=0U;
si1=2973232U;
i32_store(&i->m0,(U64)si0+2972660U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2972680U,si1);
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2972676U,si1);
L4:;
{
si0=l4;
si1=2972704U;
si0+=si1;
si1=l4;
si2=2972692U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=2972684U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972696U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972712U;
si0+=si1;
si1=l4;
si2=2972700U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972720U;
si0+=si1;
si1=l4;
si2=2972708U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972716U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si1=256U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=2973232U;
si1=-8U;
si2=2973232U;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=2973232U;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l2=si0;
si1=4U;
si0+=si1;
si1=l5;
si2=-56U;
si1+=si2;
l3=si1;
si2=l4;
si1-=si2;
l4=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973132U);
i32_store(&i->m0,(U64)si0+2972672U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=2973232U;
si1=l3;
si0+=si1;
si1=56U;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=236U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l7=si0;
si1=16U;
si2=l0;
si3=19U;
si2+=si3;
si3=-16U;
si2&=si3;
si3=l0;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si2=3U;
si1>>=(si2&31);
l3=si1;
si0>>=(si1&31);
l4=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=1U;
si0&=si1;
si1=l3;
si0|=si1;
si1=1U;
si0^=si1;
l6=si0;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=2972684U;
si0+=si1;
l4=si0;
si1=l3;
si2=2972692U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
si1=l7;
si2=-2U;
si3=l6;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L18;
L19:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
L18:;
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si2=3U;
si1<<=(si2&31);
l6=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L17:;
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972652U);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=l3;
si0<<=(si1&31);
si1=2U;
si2=l3;
si1<<=(si2&31);
l4=si1;
si2=0U;
si3=l4;
si2-=si3;
si1|=si2;
si0&=si1;
l4=si0;
si1=0U;
si2=l4;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
l3=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=2972684U;
si0+=si1;
l6=si0;
si1=l4;
si2=2972692U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=0U;
si1=l7;
si2=-2U;
si3=l3;
si2=I32_ROTL(si2,si3);
si1&=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L21;
L22:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
L21:;
si0=l4;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l3;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l3;
si2=l5;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si0+=si1;
l0=si0;
si1=l6;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L23;
}
si0=l8;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972664U);
l3=si0;
si0=l7;
si1=1U;
si2=l8;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l9=si1;
si0&=si1;
if(si0){
goto L25;
}
si0=0U;
si1=l7;
si2=l9;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l5;
l9=si0;
goto L24;
L25:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L24:;
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
L23:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2972652U,si1);
goto L5;
L20:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l10=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=0U;
si2=l10;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l5;
si0-=si1;
l3=si0;
si0=l0;
l6=si0;
L27:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L28;
}
si0=l6;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L26;
}
L28:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l5;
si0-=si1;
l6=si0;
si1=l3;
si2=l6;
si3=l3;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l3=si0;
si0=l4;
si1=l0;
si2=l6;
si0=si2?si0:si1;
l0=si0;
si0=l4;
l6=si0;
goto L27;
}
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L6;
L29:;
si0=l0;
si1=20U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=16U;
si0+=si1;
l6=si0;
L30:;
L31:;
{
si0=l6;
l2=si0;
si0=l4;
l9=si0;
si1=20U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L31;
}
si0=l9;
si1=16U;
si0+=si1;
l6=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L31;
}
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L16:;
si0=-1U;
l5=si0;
si0=l0;
si1=-65U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
si1=19U;
si0+=si1;
l4=si0;
si1=-16U;
si0&=si1;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l10=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=l5;
si1=256U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=31U;
l8=si0;
si0=l5;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l5;
si1=38U;
si2=l4;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l4=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l4;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l8=si0;
L32:;
si0=0U;
si1=l5;
si0-=si1;
l3=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L36;
}
si0=0U;
l4=si0;
si0=0U;
l9=si0;
goto L35;
L36:;
si0=0U;
l4=si0;
si0=l5;
si1=0U;
si2=25U;
si3=l8;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l8;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l0=si0;
si0=0U;
l9=si0;
L37:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l5;
si0-=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l7;
l3=si0;
si0=l6;
l9=si0;
si0=l7;
if(si0){
goto L38;
}
si0=0U;
l3=si0;
si0=l6;
l9=si0;
si0=l6;
l4=si0;
goto L34;
L38:;
si0=l4;
si1=l6;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l7;
si3=l6;
si4=l0;
si5=29U;
si4>>=(si5&31);
si5=4U;
si4&=si5;
si3+=si4;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l6=si3;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l4;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si1=1U;
si0<<=(si1&31);
l0=si0;
si0=l6;
if(si0){
goto L37;
}
}
L35:;
si0=l4;
si1=l9;
si0|=si1;
if(si0){
goto L39;
}
si0=0U;
l9=si0;
si0=2U;
si1=l8;
si0<<=(si1&31);
l4=si0;
si1=0U;
si2=l4;
si1-=si2;
si0|=si1;
si1=l10;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=0U;
si2=l4;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L39:;
si0=l4;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
L40:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l5;
si0-=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
l0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L41;
}
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L41:;
si0=l7;
si1=l3;
si2=l0;
si0=si2?si0:si1;
l3=si0;
si0=l4;
si1=l9;
si2=l0;
si0=si2?si0:si1;
l9=si0;
si0=l6;
l4=si0;
si0=l6;
if(si0){
goto L40;
}
}
L33:;
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972652U);
si2=l5;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L7;
L42:;
si0=l9;
si1=20U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L43;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si1=16U;
si0+=si1;
l6=si0;
L43:;
L44:;
{
si0=l6;
l7=si0;
si0=l4;
l0=si0;
si1=20U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L44;
}
si0=l0;
si1=16U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L44;
}
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L7;
L15:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972652U);
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972664U);
l3=si0;
si0=l4;
si1=l5;
si0-=si1;
l6=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l3;
si1=l5;
si0+=si1;
l0=si0;
si1=l6;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=l3;
si1=l4;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L46;
L47:;
si0=l3;
si1=l4;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972652U,si1);
L46:;
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
goto L5;
L45:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972656U);
l6=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=l2;
si1=l5;
si0+=si1;
l4=si0;
si1=l6;
si2=l5;
si1-=si2;
l3=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=l2;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
goto L5;
L48:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973116U);
si0=!(si0);
if(si0){
goto L50;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973124U);
l3=si0;
goto L49;
L50:;
si0=0U;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+2973128U,sj1);
si0=0U;
sj1=281474976776192ULL;
i64_store(&i->m0,(U64)si0+2973120U,sj1);
si0=0U;
si1=l1;
si2=12U;
si1+=si2;
si2=-16U;
si1&=si2;
si2=1431655768U;
si1^=si2;
i32_store(&i->m0,(U64)si0+2973116U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973136U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973088U,si1);
si0=65536U;
l3=si0;
L49:;
si0=0U;
l4=si0;
si0=l3;
si1=l5;
si2=71U;
si1+=si2;
l8=si1;
si0+=si1;
l0=si0;
si1=0U;
si2=l3;
si1-=si2;
l7=si1;
si0&=si1;
l9=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L5;
L51:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973084U);
l4=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973076U);
l3=si0;
si1=l9;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L53;
}
si0=l10;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L52;
}
L53:;
si0=0U;
l4=si0;
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L5;
L52:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2973088U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si0=!(si0);
if(si0){
goto L56;
}
si0=2973092U;
l4=si0;
L57:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L55;
}
L58:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L57;
}
}
L56:;
si0=0U;
si0=f15336(i,si0);
l0=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973120U);
l4=si0;
si1=-1U;
si0+=si1;
l3=si0;
si1=l0;
si0&=si1;
si0=!(si0);
if(si0){
goto L59;
}
si0=l9;
si1=l0;
si0-=si1;
si1=l3;
si2=l0;
si1+=si2;
si2=0U;
si3=l4;
si2-=si3;
si1&=si2;
si0+=si1;
l7=si0;
L59:;
si0=l7;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973084U);
l4=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973076U);
l3=si0;
si1=l7;
si0+=si1;
l6=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L11;
}
L60:;
si0=l7;
si0=f15336(i,si0);
l4=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L54;
}
goto L9;
L55:;
si0=l0;
si1=l6;
si0-=si1;
si1=l7;
si0&=si1;
l7=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l7;
si0=f15336(i,si0);
l0=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
l4=si0;
L54:;
si0=l4;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l5;
si1=72U;
si0+=si1;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L61;
}
si0=l8;
si1=l7;
si0-=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973124U);
l3=si1;
si0+=si1;
si1=0U;
si2=l3;
si1-=si2;
si0&=si1;
l3=si0;
si1=2147483646U;
si0=si0 <= si1;
if(si0){
goto L62;
}
si0=l4;
l0=si0;
goto L9;
L62:;
si0=l3;
si0=f15336(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l3;
si1=l7;
si0+=si1;
l7=si0;
si0=l4;
l0=si0;
goto L9;
L63:;
si0=0U;
si1=l7;
si0-=si1;
si0=f15336(i,si0);
goto L11;
L61:;
si0=l4;
l0=si0;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L11;
L14:;
si0=0U;
l9=si0;
goto L6;
L13:;
si0=0U;
l0=si0;
goto L7;
L12:;
si0=l0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L9;
}
L11:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973088U);
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+2973088U,si1);
L10:;
si0=l9;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l9;
si0=f15336(i,si0);
l0=si0;
si0=0U;
si0=f15336(i,si0);
l4=si0;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l0;
si0-=si1;
l7=si0;
si1=l5;
si2=56U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L8;
}
L9:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973076U);
si2=l7;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+2973076U,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973080U);
si0=si0 <= si1;
if(si0){
goto L64;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2973080U,si1);
L64:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972668U);
l3=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=2973092U;
l4=si0;
L69:;
{
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l9=si2;
si1+=si2;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L69;
}
goto L66;
}
L68:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972660U);
l4=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L70;
}
L71:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972660U,si1);
L70:;
si0=0U;
l4=si0;
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+2973096U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973092U,si1);
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2972676U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973116U);
i32_store(&i->m0,(U64)si0+2972680U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973104U,si1);
L72:;
{
si0=l4;
si1=2972704U;
si0+=si1;
si1=l4;
si2=2972692U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=2972684U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972696U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972712U;
si0+=si1;
si1=l4;
si2=2972700U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972720U;
si0+=si1;
si1=l4;
si2=2972708U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2972716U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si1=256U;
si0=si0 != si1;
if(si0){
goto L72;
}
}
si0=l0;
si1=-8U;
si2=l0;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=l0;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l3=si0;
si1=l7;
si2=-56U;
si1+=si2;
l6=si1;
si2=l4;
si1-=si2;
l4=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973132U);
i32_store(&i->m0,(U64)si0+2972672U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=l0;
si1=l6;
si0+=si1;
si1=56U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L65;
L67:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=8U;
si0&=si1;
if(si0){
goto L66;
}
si0=l3;
si1=l6;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l3;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l3;
si1=-8U;
si2=l3;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=l3;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
l6=si1;
si0+=si1;
l0=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972656U);
si2=l7;
si1+=si2;
l2=si1;
si2=l6;
si1-=si2;
l6=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l9;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973132U);
i32_store(&i->m0,(U64)si0+2972672U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=l3;
si1=l2;
si0+=si1;
si1=56U;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L65;
L66:;
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972660U,si1);
si0=l0;
l9=si0;
L73:;
si0=l0;
si1=l7;
si0+=si1;
l6=si0;
si0=2973092U;
l4=si0;
L81:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L81;
}
goto L79;
}
L80:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L78;
}
L79:;
si0=2973092U;
l4=si0;
L82:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L83;
}
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L77;
}
L83:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L82;
}
L78:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=-8U;
si2=l0;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=l0;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
l2=si0;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=-8U;
si2=l6;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=l6;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
l7=si0;
si1=l2;
si2=l5;
si1+=si2;
l5=si1;
si0-=si1;
l4=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L84;
}
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972656U);
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=l5;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L75;
L84:;
si0=l7;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L85;
}
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972652U);
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l5;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L75;
L85:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=3U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L86;
}
si0=l3;
si1=-8U;
si0&=si1;
l8=si0;
si0=l3;
si1=255U;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l0=si1;
si0=si0 == si1;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L89;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l9;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L87;
L89:;
si0=l3;
si1=l0;
si0=si0 == si1;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L87;
L88:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L91;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l9;
si0=si0 < si1;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L90;
L91:;
si0=l7;
si1=20U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L92;
}
si0=l7;
si1=16U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L92;
}
si0=0U;
l0=si0;
goto L90;
L92:;
L93:;
{
si0=l3;
l9=si0;
si0=l6;
l0=si0;
si1=20U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L93;
}
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L93;
}
}
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L90:;
si0=l10;
si0=!(si0);
if(si0){
goto L87;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L95;
}
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L94;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l6;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L87;
L95:;
si0=l10;
si1=16U;
si2=20U;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L87;
}
L94:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
L96:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l0;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
L87:;
si0=l8;
si1=l4;
si0+=si1;
l4=si0;
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L86:;
si0=l7;
si1=l3;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=255U;
si0=si0 > si1;
if(si0){
goto L97;
}
si0=l4;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l6=si0;
si1=1U;
si2=l4;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l4=si1;
si0&=si1;
if(si0){
goto L99;
}
si0=0U;
si1=l6;
si2=l4;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l3;
l4=si0;
goto L98;
L99:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L98:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L75;
L97:;
si0=31U;
l3=si0;
si0=l4;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L100;
}
si0=l4;
si1=38U;
si2=l4;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l3=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l3;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l3=si0;
L100:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l0=si0;
si1=1U;
si2=l3;
si1<<=(si2&31);
l9=si1;
si0&=si1;
if(si0){
goto L101;
}
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l0;
si2=l9;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L75;
L101:;
si0=l4;
si1=0U;
si2=25U;
si3=l3;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l3;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L102:;
{
si0=l0;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l3;
si1=29U;
si0>>=(si1&31);
l0=si0;
si0=l3;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=l0;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L102;
}
}
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L75;
L77:;
si0=l0;
si1=-8U;
si2=l0;
si1-=si2;
si2=15U;
si1&=si2;
si2=0U;
si3=l0;
si4=8U;
si3+=si4;
si4=15U;
si3&=si4;
si1=si3?si1:si2;
l4=si1;
si0+=si1;
l2=si0;
si1=l7;
si2=-56U;
si1+=si2;
l9=si1;
si2=l4;
si1-=si2;
l4=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si0+=si1;
si1=56U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
si2=55U;
si3=l6;
si2-=si3;
si3=15U;
si2&=si3;
si3=0U;
si4=l6;
si5=-55U;
si4+=si5;
si5=15U;
si4&=si5;
si2=si4?si2:si3;
si1+=si2;
si2=-63U;
si1+=si2;
l9=si1;
si2=l9;
si3=l3;
si4=16U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si1=35U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973132U);
i32_store(&i->m0,(U64)si0+2972672U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=l9;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+2973100U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+2973092U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
si1=l9;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2973100U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+2973096U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973092U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2973104U,si1);
si0=l9;
si1=36U;
si0+=si1;
l4=si0;
L103:;
{
si0=l4;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L103;
}
}
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l9;
si2=l3;
si1-=si2;
l0=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L104;
}
si0=l0;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l6=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l0=si1;
si0&=si1;
if(si0){
goto L106;
}
si0=0U;
si1=l6;
si2=l0;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l4;
l6=si0;
goto L105;
L106:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L105:;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L65;
L104:;
si0=31U;
l4=si0;
si0=l0;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L107;
}
si0=l0;
si1=38U;
si2=l0;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l4=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l4;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l4=si0;
L107:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
l6=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l9=si0;
si1=1U;
si2=l4;
si1<<=(si2&31);
l7=si1;
si0&=si1;
if(si0){
goto L108;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l9;
si2=l7;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L65;
L108:;
si0=l0;
si1=0U;
si2=25U;
si3=l4;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l4;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L109:;
{
si0=l9;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l0;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l4;
si1=29U;
si0>>=(si1&31);
l9=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l6;
si1=l9;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L109;
}
}
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L65;
L76:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L75:;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
goto L5;
L74:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L65:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972656U);
l4=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972668U);
l3=si0;
si1=l5;
si0+=si1;
l6=si0;
si1=l4;
si2=l5;
si1-=si2;
l4=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=l3;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
goto L5;
L8:;
si0=0U;
l4=si0;
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L5;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L110;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L112;
}
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L111;
}
si0=0U;
si1=l10;
si2=-2U;
si3=l6;
si2=I32_ROTL(si2,si3);
si1&=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L110;
L112:;
si0=l2;
si1=16U;
si2=20U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L110;
}
L111:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
L113:;
si0=l9;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
L110:;
si0=l3;
si1=15U;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l9;
si1=l3;
si2=l5;
si1+=si2;
l4=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l4;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L114;
L115:;
si0=l9;
si1=l5;
si0+=si1;
l0=si0;
si1=l3;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=255U;
si0=si0 > si1;
if(si0){
goto L116;
}
si0=l3;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l6=si0;
si1=1U;
si2=l3;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l3=si1;
si0&=si1;
if(si0){
goto L118;
}
si0=0U;
si1=l6;
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l4;
l3=si0;
goto L117;
L118:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L117:;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L114;
L116:;
si0=31U;
l4=si0;
si0=l3;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L119;
}
si0=l3;
si1=38U;
si2=l3;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l4=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l4;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l4=si0;
L119:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
l6=si0;
si0=l10;
si1=1U;
si2=l4;
si1<<=(si2&31);
l5=si1;
si0&=si1;
if(si0){
goto L120;
}
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l10;
si2=l5;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L114;
L120:;
si0=l3;
si1=0U;
si2=25U;
si3=l4;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l4;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L122:;
{
si0=l5;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L121;
}
si0=l4;
si1=29U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l6;
si1=l5;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L122;
}
}
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L114;
L121:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L114:;
si0=l9;
si1=8U;
si0+=si1;
l4=si0;
goto L5;
L6:;
si0=l11;
si0=!(si0);
if(si0){
goto L123;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L125;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L124;
}
si0=0U;
si1=l10;
si2=-2U;
si3=l6;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L123;
L125:;
si0=l11;
si1=16U;
si2=20U;
si3=l11;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l0;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L123;
}
L124:;
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
L126:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L123;
}
si0=l9;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
L123:;
si0=l3;
si1=15U;
si0=si0 > si1;
if(si0){
goto L128;
}
si0=l0;
si1=l3;
si2=l5;
si1+=si2;
l4=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L127;
L128:;
si0=l0;
si1=l5;
si0+=si1;
l6=si0;
si1=l3;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L129;
}
si0=l8;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972664U);
l4=si0;
si0=1U;
si1=l8;
si2=3U;
si1>>=(si2&31);
si0<<=(si1&31);
l9=si0;
si1=l7;
si0&=si1;
if(si0){
goto L131;
}
si0=0U;
si1=l9;
si2=l7;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l5;
l9=si0;
goto L130;
L131:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L130:;
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
L129:;
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2972652U,si1);
L127:;
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
L5:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f15271(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15272(i,si0);
L0:;
}

void f15272(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-8U;
si0+=si1;
l1=si0;
si1=l0;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-8U;
si1&=si2;
l0=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si0+=si1;
l0=si0;
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=255U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L2;
L5:;
si0=l2;
si1=l6;
si0=si0 == si1;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si0=si0 < si1;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L6;
L7:;
si0=l1;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L6;
L8:;
L9:;
{
si0=l2;
l5=si0;
si0=l4;
l6=si0;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L9;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L10;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L2;
L11:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L10:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972668U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972656U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972664U,si1);
goto L0;
L15:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972652U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L16:;
si0=l2;
si1=-8U;
si0&=si1;
si1=l0;
si0+=si1;
l0=si0;
si0=l2;
si1=255U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L17;
L19:;
si0=l2;
si1=l6;
si0=si0 == si1;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L17;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L20;
L21:;
si0=l3;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L22;
}
si0=l3;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L22;
}
si0=0U;
l6=si0;
goto L20;
L22:;
L23:;
{
si0=l2;
l5=si0;
si0=l4;
l6=si0;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L23;
}
si0=l6;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L23;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L24;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L17;
L25:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
L24:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L17:;
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972652U,si1);
goto L0;
L14:;
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L13:;
si0=l0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l0;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l4=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l0=si1;
si0&=si1;
if(si0){
goto L29;
}
si0=0U;
si1=l4;
si2=l0;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l2;
l0=si0;
goto L28;
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L28:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L27:;
si0=31U;
l2=si0;
si0=l0;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l0;
si1=38U;
si2=l0;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l2=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l2=si0;
L30:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l6=si0;
si1=1U;
si2=l2;
si1<<=(si2&31);
l3=si1;
si0&=si1;
if(si0){
goto L32;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l6;
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L31;
L32:;
si0=l0;
si1=0U;
si2=25U;
si3=l2;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l2;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L34:;
{
si0=l6;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l0;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l2;
si1=29U;
si0>>=(si1&31);
l6=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=l6;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L34;
}
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L31;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
L31:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972676U);
si2=-1U;
si1+=si2;
l1=si1;
si2=-1U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+2972676U,si1);
L1:;
L0:;
}

U32 f15273(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l0;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj0*=sj1;
l3=sj0;
si0=(U32)(sj0);
l2=si0;
si0=l1;
si1=l0;
si0|=si1;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=-1U;
si1=l2;
sj2=l3;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=0U;
si2=si2 != si3;
si0=si2?si0:si1;
l2=si0;
L1:;
si0=l2;
si0=f15270(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=0U;
si2=l2;
si0=f15392(i,si0,si1,si2);
L3:;
si0=l0;
L0:;
return si0;
}

U32 f15274(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
if(si0){
goto L1;
}
si0=l1;
si0=f15270(i,si0);
goto L0;
L1:;
si0=l1;
si1=-64U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=0U;
goto L0;
L2:;
si0=16U;
si1=l1;
si2=19U;
si1+=si2;
si2=-16U;
si1&=si2;
si2=l1;
si3=11U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l0;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-8U;
si0&=si1;
l5=si0;
si0=l4;
si1=3U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
si1=256U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l2;
si2=4U;
si1|=si2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l2;
si0-=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973124U);
si2=1U;
si1<<=(si2&31);
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L4;
L5:;
si0=l0;
si1=-8U;
si0+=si1;
l6=si0;
si1=l5;
si0+=si1;
l7=si0;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l2;
si2=l4;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
si1=l1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
f15275(i,si0,si1);
si0=l0;
goto L0;
L6:;
si0=l7;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972668U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972656U);
si1=l5;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si2=l4;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l6;
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=0U;
si1=l5;
si2=l2;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=l1;
si1=l2;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
goto L0;
L7:;
si0=l7;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972652U);
si1=l5;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l2;
si2=l4;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
si0+=si1;
l5=si0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L9;
L10:;
si0=l3;
si1=l4;
si2=1U;
si1&=si2;
si2=l5;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L9:;
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l0;
goto L0;
L8:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=2U;
si0&=si1;
if(si0){
goto L4;
}
si0=l8;
si1=-8U;
si0&=si1;
si1=l5;
si0+=si1;
l9=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l9;
si1=l2;
si0-=si1;
l10=si0;
si0=l8;
si1=255U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l8;
si2=3U;
si1>>=(si2&31);
l11=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l8=si1;
si0=si0 == si1;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l11;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L11;
L13:;
si0=l5;
si1=l8;
si0=si0 == si1;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L11;
L12:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L14;
L15:;
si0=l7;
si1=20U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L16;
}
si0=l7;
si1=16U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L14;
L16:;
L17:;
{
si0=l1;
l11=si0;
si0=l5;
l8=si0;
si1=20U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L17;
}
si0=l8;
si1=16U;
si0+=si1;
l1=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L17;
}
}
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L18;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L11;
L19:;
si0=l12;
si1=16U;
si2=20U;
si3=l12;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
L18:;
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
L20:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
L11:;
si0=l10;
si1=15U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l3;
si1=l4;
si2=1U;
si1&=si2;
si2=l9;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
goto L0;
L21:;
si0=l3;
si1=l2;
si2=l4;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si0+=si1;
l1=si0;
si1=l10;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l9;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l10;
f15275(i,si0,si1);
si0=l0;
goto L0;
L4:;
si0=l1;
si0=f15270(i,si0);
l2=si0;
if(si0){
goto L22;
}
si0=0U;
goto L0;
L22:;
si0=l2;
si1=l0;
si2=-4U;
si3=-8U;
si4=l3;
si4=i32_load(&i->m0,(U64)si4);
l5=si4;
si5=3U;
si4&=si5;
si2=si4?si2:si3;
si3=l5;
si4=-8U;
si3&=si4;
si2+=si3;
l5=si2;
si3=l1;
si4=l5;
si5=l1;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l0;
f15272(i,si0);
si0=l1;
l0=si0;
L3:;
si0=l0;
L0:;
return si0;
}

void f15275(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si0+=si1;
l1=si0;
si0=l0;
si1=l3;
si0-=si1;
l0=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=255U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L2;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L6;
L7:;
si0=l0;
si1=20U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L6;
L8:;
L9:;
{
si0=l3;
l5=si0;
si0=l4;
l6=si0;
si1=20U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L9;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L10;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L2;
L11:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l0;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L10:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L2;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L3:;
si0=l3;
si1=l6;
si0=si0 == si1;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972668U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972668U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972656U);
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+2972656U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972664U,si1);
goto L0;
L15:;
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2972664U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972652U);
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L16:;
si0=l3;
si1=-8U;
si0&=si1;
si1=l1;
si0+=si1;
l1=si0;
si0=l3;
si1=255U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l3;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=2972684U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972644U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
goto L17;
L19:;
si0=l3;
si1=l6;
si0=si0 == si1;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L17;
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972660U);
si0=si0 < si1;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L20;
L21:;
si0=l2;
si1=20U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L22;
}
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L22;
}
si0=0U;
l6=si0;
goto L20;
L22:;
L23:;
{
si0=l4;
l5=si0;
si0=l3;
l6=si0;
si1=20U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L23;
}
si0=l6;
si1=16U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L23;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=2972948U;
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L24;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972648U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
goto L17;
L25:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
L24:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L17:;
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972664U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2972652U,si1);
goto L0;
L14:;
si0=l2;
si1=l3;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L13:;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l1;
si1=-8U;
si0&=si1;
si1=2972684U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972644U);
l4=si0;
si1=1U;
si2=l1;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l1=si1;
si0&=si1;
if(si0){
goto L29;
}
si0=0U;
si1=l4;
si2=l1;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972644U,si1);
si0=l3;
l1=si0;
goto L28;
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L28:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L27:;
si0=31U;
l3=si0;
si0=l1;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l1;
si1=38U;
si2=l1;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l3=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l3;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l3=si0;
L30:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=2972948U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972648U);
l6=si0;
si1=1U;
si2=l3;
si1<<=(si2&31);
l2=si1;
si0&=si1;
if(si0){
goto L31;
}
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l6;
si2=l2;
si1|=si2;
i32_store(&i->m0,(U64)si0+2972648U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L0;
L31:;
si0=l1;
si1=0U;
si2=25U;
si3=l3;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l3;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L33:;
{
si0=l6;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l3;
si1=29U;
si0>>=(si1&31);
l6=si0;
si0=l3;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=l4;
si1=l6;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L33;
}
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
L0:;
}

U32 f15276(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si1=16U;
si2=l0;
si3=16U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=l2;
si2=-1U;
si1+=si2;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
l0=si0;
goto L1;
L2:;
si0=32U;
l3=si0;
L3:;
{
si0=l3;
l0=si0;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=l0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
}
L1:;
si0=-64U;
si1=l0;
si0-=si1;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=0U;
goto L0;
L4:;
si0=l0;
si1=16U;
si2=l1;
si3=19U;
si2+=si3;
si3=-16U;
si2&=si3;
si3=l1;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
si0+=si1;
si1=12U;
si0+=si1;
si0=f15270(i,si0);
l3=si0;
if(si0){
goto L5;
}
si0=0U;
goto L0;
L5:;
si0=l3;
si1=-8U;
si0+=si1;
l2=si0;
si0=l0;
si1=-1U;
si0+=si1;
si1=l3;
si0&=si1;
if(si0){
goto L7;
}
si0=l2;
l0=si0;
goto L6;
L7:;
si0=l3;
si1=-4U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-8U;
si0&=si1;
si1=l3;
si2=l0;
si1+=si2;
si2=-1U;
si1+=si2;
si2=0U;
si3=l0;
si2-=si3;
si1&=si2;
si2=-8U;
si1+=si2;
l3=si1;
si2=0U;
si3=l0;
si4=l3;
si5=l2;
si4-=si5;
si5=15U;
si4=si4 > si5;
si2=si4?si2:si3;
si1+=si2;
l0=si1;
si2=l2;
si1-=si2;
l3=si1;
si0-=si1;
l6=si0;
si0=l5;
si1=3U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L8:;
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
f15275(i,si0,si1);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=-8U;
si0&=si1;
l2=si0;
si1=l1;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si2=l3;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
l3=si0;
si1=l2;
si2=l1;
si1-=si2;
l1=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
f15275(i,si0,si1);
L9:;
si0=l0;
si1=8U;
si0+=si1;
L0:;
return si0;
}

U32 f15277(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=f15270(i,si0);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=f15276(i,si0,si1);
L0:;
return si0;
}

U32 f15278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15296(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15297(i,si0,si1);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L2;
L3:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15279(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15392(i,si0,si1,si2);
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
si0=f15310(i,si0,si1,si2,si3);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15296(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15297(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
l4=si0;
goto L1;
L2:;
si0=0U;
si1=28U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
L1:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f15280(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f15298(i,si0,si1);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si2=24U;
si1<<=(si2&31);
si2=24U;
si1=(U32)((I32)si1>>(si2&31));
si2=2U;
si1<<=(si2&31);
si2=2947576U;
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

U32 f15281(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f15294(i,si0,sj1,si2);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15282(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=f15304(i,si0);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
L0:;
return si0;
}

U32 f15283(rustpythonInstance*i,U32 l0,U64 l1) {
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
si0=f15299(i,si0,sj1);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
L0:;
return si0;
}

U64 f15284(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
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
si0=f15303(i,si0,sj1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15285(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15302(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15286(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15305(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15287(rustpythonInstance*i) {
U32 si0;
f15290(i);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967004U);
L0:;
return si0;
}

U32 f15288(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
f15332(i);
si0=l0;
si0=f15295(i,si0);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
L0:;
return si0;
}

void f15289(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15311(i,si0);
UNREACHABLE;
L0:;
}

void f15290(rustpythonInstance*i) {
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967004U);
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
f15291(i);
L1:;
L0:;
}

void f15291(rustpythonInstance*i) {
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
si0=f15293(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L3;
}
si0=2973144U;
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
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0=f15273(i,si0,si1);
l1=si0;
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L5:;
si0=70U;
f15289(i,si0);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
si0=f15292(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
si0=l1;
f15271(i,si0);
L2:;
si0=71U;
f15289(i,si0);
UNREACHABLE;
L1:;
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2967004U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15292(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__environ_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15293(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__environ_sizes_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15294(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
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

U32 f15295(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=wasi_snapshot_preview1__fd_close(i,si0);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15296(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_fdstat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15297(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_fdstat_set_flags(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15298(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_filestat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15299(rustpythonInstance*i,U32 l0,U64 l1) {
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

U32 f15300(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=wasi_snapshot_preview1__fd_prestat_get(i,si0,si1);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f15302(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

U32 f15303(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
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

U32 f15304(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=wasi_snapshot_preview1__fd_sync(i,si0);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15305(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

U32 f15306(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l1;
si2=f15399(i,si2);
si0=wasi_snapshot_preview1__path_create_directory(i,si0,si1,si2);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15399(i,si3);
si4=l3;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15308(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U64 l4,U32 l5) {
U32 si0,si1,si2,si3,si6;
U64 sj4,sj5;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15399(i,si3);
sj4=l3;
sj5=l4;
si6=l5;
si0=wasi_snapshot_preview1__path_filestat_set_times(i,si0,si1,si2,si3,sj4,sj5,si6);
si1=65535U;
si0&=si1;
L0:;
return si0;
}

U32 f15309(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4,U64 l5,U32 l6,U32 l7) {
U32 si0,si1,si2,si3,si4,si7,si8;
U64 sj5,sj6;
si0=l0;
si1=l1;
si2=l2;
si3=l2;
si3=f15399(i,si3);
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

U32 f15310(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f15311(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
wasi_snapshot_preview1__proc_exit(i,si0);
UNREACHABLE;
L0:;
}

void f15312(rustpythonInstance*i) {
UNREACHABLE;
L0:;
}

U32 f15313(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15296(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15309(i,si0,si1,si2,si3,sj4,sj5,si6,si7);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15314(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f15306(i,si0,si1);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
L0:;
return si0;
}

U32 f15315(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f15307(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si2=24U;
si1<<=(si2&31);
si2=24U;
si1=(U32)((I32)si1>>(si2&31));
si2=2U;
si1<<=(si2&31);
si2=2947604U;
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

U32 f15316(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f15405(i,si0,sj1,sj2,sj3,sj4,si5);
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
f15405(i,si0,sj1,sj2,sj3,sj4,si5);
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
si0=f15308(i,si0,si1,si2,sj3,sj4,si5);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
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

U32 f15317(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f15326(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si0=f15313(i,si0,si1,si2);
L0:;
return si0;
}

U32 f15318(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f15329(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=f15314(i,si0,si1);
L0:;
return si0;
}

U32 f15319(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f15331(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f15315(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f15320(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f15330(i,si0,si1,si2);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f15316(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f15321(rustpythonInstance*i,U32 l0) {
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
si2=2973148U;
si3=2973152U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
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
si1=i32_load(&i->m0,(U64)si1+2973148U);
si2=l1;
si3=8U;
si2+=si3;
si3=0U;
si0=f15319(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L1;
L2:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+156U);
l4=si0;
si0=f15399(i,si0);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973148U);
l6=si0;
si1=2942314U;
si0=f15394(i,si0,si1);
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
si0=f15399(i,si0);
l9=si0;
L3:;
si0=l0;
si1=l9;
si0+=si1;
si1=1U;
si0+=si1;
si0=f15269(i,si0);
l0=si0;
if(si0){
goto L5;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L1;
L5:;
si0=l0;
si1=47U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
si1=l4;
si0=f15396(i,si0,si1);
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
si0=f15396(i,si0,si1);
L7:;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967008U);
l3=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2967008U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2973156U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
L8:;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2973156U,si1);
L1:;
si0=l1;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f15322(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=2942314U;
si0=f15394(i,si0,si1);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=2942311U;
si0=f15394(i,si0,si1);
if(si0){
goto L5;
}
L6:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967008U);
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
si0=i32_load(&i->m0,(U64)si0+2973160U);
l7=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967008U);
l6=si0;
si0=f15399(i,si0);
l8=si0;
si1=l0;
si1=f15399(i,si1);
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
si1=i32_load(&i->m0,(U64)si1+2973164U);
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l7;
si1=l11;
si0=f15274(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si1=l11;
i32_store(&i->m0,(U64)si0+2973164U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+2973160U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967008U);
l6=si0;
L9:;
si0=l7;
si1=l6;
si0=f15396(i,si0,si1);
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
si0=f15396(i,si0,si1);
L4:;
si0=l6;
if(si0){
goto L2;
}
L3:;
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
l0=si0;
goto L1;
L2:;
si0=l6;
si1=l1;
si2=l5;
si3=12U;
si2+=si3;
si0=f15335(i,si0,si1,si2);
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
si1=f15399(i,si1);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=-1U;
l0=si0;
goto L1;
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=f15274(i,si0,si1);
l1=si0;
if(si0){
goto L15;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
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
si0=f15396(i,si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f15323(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967008U);
l2=si0;
si0=l0;
if(si0){
goto L2;
}
si0=l2;
si0=f15397(i,si0);
l0=si0;
if(si0){
goto L1;
}
si0=0U;
si1=48U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
si0=0U;
goto L0;
L2:;
si0=l2;
si0=f15399(i,si0);
si1=1U;
si0+=si1;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si0=f15396(i,si0,si1);
goto L0;
L3:;
si0=0U;
l0=si0;
si0=0U;
si1=68U;
i32_store(&i->m0,(U64)si0+2973140U,si1);
L1:;
si0=l0;
L0:;
return si0;
}

U32 f15324(rustpythonInstance*i,U32 l0) {
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
si0=f15296(i,si0,si1);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

F64 f15325(rustpythonInstance*i,F64 l0,F64 l1) {
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

U32 f15326(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si2=l1;
si0=f15313(i,si0,si1,si2);
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

U32 f15327(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si2=l1;
si3=0U;
si0=f15315(i,si0,si1,si2,si3);
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

U32 f15328(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si2=l1;
si3=1U;
si0=f15315(i,si0,si1,si2,si3);
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

U32 f15329(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=7410U;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=2973172U;
si4=1U;
si0=f15322(i,si0,si1,si2,si3,si4);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=2973168U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+2973172U);
si0=f15334(i,si0,si1,si2,si3);
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
i32_store(&i->m0,(U64)si0+2973140U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2973168U);
si0=f15314(i,si0,si1);
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


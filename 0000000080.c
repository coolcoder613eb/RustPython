#include "w2c2_base.h"

#include "rustpython.h"

void f8030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f13642(i,si0,si1,si2);
L0:;
}

void f8031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f9962(i,si0,si1,si2);
L0:;
}

void f8032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f8033(i,si0,si1,si2);
L0:;
}

void f8033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+36U);
l6=si2;
si3=l6;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l0;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=36U;
si0+=si1;
f1433(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
L5:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L7;
}
L8:;
si0=l4;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L9:;
si0=l4;
si1=l4;
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
goto L6;
}
si0=l4;
f1433(i,si0);
L6:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l1;
si2=l2;
si3=l4;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L10:;
L0:;
}

void f8034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f10150(i,si0,si1);
L3:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L7:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f6361(i,si0,si1);
L3:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L7:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=12U;
si0+=si1;
l3=si0;
L5:;
{
si0=l3;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l6=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L6:;
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
f1433(i,si0);
L1:;
L0:;
}

void f8037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f11106(i,si0,si1);
L3:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L7:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
l3=si0;
si0=l6;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
l3=si0;
L6:;
{
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L7:;
{
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
f1433(i,si0);
L1:;
L0:;
}

void f8039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l3=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=60U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+60U);
l6=si2;
si3=l6;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
if(si0){
goto L2;
}
L3:;
si0=l4;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=l3;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+60U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=60U;
si0+=si1;
f1433(i,si0);
L1:;
L0:;
}

void f8040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
goto L1;
L2:;
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l2=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L1:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L3:;
L0:;
}

void f8041(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f8033(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f8042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
l3=si0;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f8033(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f8043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f11997(i,si0,si1,si2);
L0:;
}

void f8044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+60U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f9401(i,si0,si1);
L3:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+60U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L7:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f14839(i,si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L5:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L6;
}
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8046(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f12416(i,si0,si1,si2);
L0:;
}

void f8047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

void f8048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l3=si1;
si2=1U;
si3=l3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l4;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L1:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L2:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L3;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L3:;
L0:;
}

void f8049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
l5=si2;
si3=l5;
si4=l0;
si3=si3 == si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=1U;
si0&=si1;
l7=si0;
si0=0U;
l4=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=28U;
si0+=si1;
l0=si0;
si0=l5;
si1=-2U;
si0&=si1;
l8=si0;
si0=0U;
l4=si0;
L6:;
{
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L8:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si0=l8;
si1=l4;
si2=2U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l0;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l0=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
f1433(i,si0);
L1:;
L0:;
}

void f8050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

void f8051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l2=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l0;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

void f8052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
{
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
si1=255U;
si0&=si1;
l5=si0;
si0=l0;
si1=l4;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l4;
f10150(i,si0,si1);
L3:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=3U;
si0&=si1;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=0U;
l2=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=-4U;
si0&=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l6;
l4=si0;
L6:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L7:;
{
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f8053(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l0=si0;
si0=l3;
si1=3U;
si0&=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
l0=si0;
L3:;
{
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L4:;
{
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L1:;
L0:;
}

void f8054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=1U;
si0=f1428(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l0;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l3=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=l3;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si1=l0;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=56U;
si0+=si1;
f1433(i,si0);
L1:;
L0:;
}

void f8055(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f9947(i,si0,si1,si2);
L0:;
}

void f8056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f8033(i,si0,si1,si2);
L0:;
}

U32 f8057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=20U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l8;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L6;
}
si0=l8;
l7=si0;
goto L5;
L6:;
si0=l8;
f15271(i,si0);
L5:;
si0=l4;
si0=!(si0);
si1=l3;
si0&=si1;
l3=si0;
si0=l7;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si3=l0;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
sj1=l9;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
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
si0=l7;
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
goto L8;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
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
goto L1;
}
si0=l2;
f7690(i,si0);
goto L1;
L4:;
si0=4U;
si1=20U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L16;
}
si0=4U;
l1=si0;
goto L15;
L16:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l0;
if(si0){
goto L18;
}
si0=l10;
l1=si0;
goto L17;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l0;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l10;
si1=l0;
si0=f15277(i,si0,si1);
l1=si0;
goto L17;
L19:;
si0=l0;
si0=f15269(i,si0);
l1=si0;
L17:;
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=0U;
si2=l0;
si0=f15392(i,si0,si1,si2);
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
sj1=-7153801361348233433ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=1805848U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=-3921248104688026672ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l5;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l0;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
L20:;
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=8U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L10;
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=l10;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=8U;
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1669272U;
f12252(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l7;
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
goto L1;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f8058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-5513286823014271601ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805128U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-469778534030269325ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4593854388444827484ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805140U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6049870093725666663ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4052645416475884584ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805152U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2470913788035654428ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2174991154754609563ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805164U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-8815740060872058926ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-253121378747331932ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805188U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=7250414187978004369ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-9154816648712387004ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805200U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-35459604691587403ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=152U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-7215485279141357787ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805224U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=2151535569456304994ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=96U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=152U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=2187663559702001040ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805236U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4730935401355693026ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3832962934010373511ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805248U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2306385848716959580ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8433930480299741807ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805260U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1156462258252325731ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-5486069740732658306ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805272U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5263161827807995631ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=152U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6783778230620724248ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805284U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4350209299226825820ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=96U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=152U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8070(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l0;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=7007490213338204018ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805296U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-3411299441178436723ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=242224988891964786ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805308U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2298570134161043991ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3898019102480328733ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805320U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-658055710957078173ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-5757043361995030740ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805332U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=1625469189142421281ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-7991598859829275278ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805344U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=1415387282674118076ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-5645585280188618189ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805356U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=624637840886277312ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=5416430769165163171ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805368U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6413089843220384395ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4356300177700950365ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805380U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=289381155511592051ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1851977428690684601ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805392U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-786598182489054301ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-9151968658207135397ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805404U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5667480115245674966ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6328808079949154614ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805416U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-9035662525533999570ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8081(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-5933649855443852542ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805428U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=7308632103748173835ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8082(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=3806378391372854927ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805440U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-2345574490600401742ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8083(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3591423224278582933ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805452U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5531878634185942147ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8084(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3089202042899992187ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805464U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4451017273785968783ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6200305950221648001ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805476U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=29133077723413100ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2552335700810442878ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805488U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5095604218408327037ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8604045573327700528ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805500U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-3099815236214414649ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6563204960748917889ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805512U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-5868401260867604329ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-4655076564838057917ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805524U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-7196235888942362557ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8090(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1769100459552711927ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805536U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1090696483142669598ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=192U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=160744431480201187ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805548U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6017406491275292924ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=136U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=3859588675308600337ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805560U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1482790174399264825ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=9182784079481018905ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805572U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=2611284166599458126ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6853603845811815909ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805584U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=7356056383356521210ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8695207031385672171ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805596U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-9007735271045040070ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-7475072822715764688ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805608U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-3137045272658287990ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-5063891382290364191ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805620U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=7362346016008874515ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8098(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=917829462180078157ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805632U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1556244773417043998ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8099(rustpythonInstance*i,F64 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
F64 sd1;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-653005602437147053ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
sd1=l1;
f64_store(&i->m0,(U64)si0+64U,sd1);
si0=l6;
sd1=l0;
f64_store(&i->m0,(U64)si0+56U,sd1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805644U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-4170606783940748660ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=5776485299507707401ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805656U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-4815600577594439655ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8101(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l0;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-4528259794526796364ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805668U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-4037320690625656156ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-6657944620309943875ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805680U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-3372623485965446192ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8366049975716690578ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805692U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3731494303565330322ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3950471222460184187ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805704U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6093807855246377156ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=128U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6654878835304983675ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805716U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6060419710178097712ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8106(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l0;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-5647883775983416143ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805728U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=1569655123884046800ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8107(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l0;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-1150294630945587619ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805740U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=3674331755524773163ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1111651080360061664ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805752U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6365191050473875025ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2333347719287225807ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805764U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4400137812776578147ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=128U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2107831292826120692ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805776U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3044701271088271634ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6017036804142198610ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805788U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-731611843373874850ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8999910300027678653ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805800U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-8621670557023078337ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8113(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=5743334363218442881ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805812U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4024939521048349606ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8114(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=112U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=7824762428631794743ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805824U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5026423977985682956ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=96U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=104U;
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=112U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8115(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l0;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l5;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=-3234247368611769753ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1805836U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
sj1=5536188366205077709ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8116(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=9024503573531541330ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805860U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2795553761968856952ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8117(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3562009076545496884ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-7202733091973278047ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8118(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=8355996640393723862ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805884U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1717414143408698133ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8119(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=136U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4069283891877766178ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=7265653079111867781ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=80U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=136U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8120(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-9157965384341838050ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805908U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2098177044151079607ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8121(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=7109097938613701040ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805920U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=5116033385763904124ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=136U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-7259629743280276639ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805932U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6175240624422745213ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=80U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=136U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8123(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3246337464250354192ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805944U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=2901193367420597744ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-2245972845737696611ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1805956U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=859681906830690501ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8125(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6790666268617223989ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805968U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-4194886400264065274ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=96U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=2178613045928566244ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805980U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6045686839737550963ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
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
si1=96U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6646571237258841598ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sj1=l7;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805992U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3588277603459401014ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8128(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8404288153036991356ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1806004U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-397097805146821884ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=68U;
si0=f15390(i,si0,si1,si2);
si0=l5;
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
si1=128U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f8129(rustpythonInstance*i,F64 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
F64 sd1;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
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
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6979522882521804547ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
sd1=l0;
f64_store(&i->m0,(U64)si0+56U,sd1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1806016U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-3115833051707837487ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
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
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}


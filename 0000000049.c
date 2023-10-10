#include "w2c2_base.h"

#include "rustpython.h"

void f4930(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si2=360U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

void f4931(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f3559(i,si0,si1);
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
f1361(i,si0,si1);
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
f15024(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4932(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=520U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
f5875(i,si0,si1,si2);
L0:;
}

void f4933(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

void f4934(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f4075(i,si0,si1,si2);
L0:;
}

void f4935(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l0;
si1=68U;
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
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L2:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L3:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si2=l2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L4:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
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

void f4936(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f11056(i,si0,si1);
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
f1361(i,si0,si1);
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
f15024(i,si0);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4937(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
}

U32 f4938(rustpythonInstance*i,F64 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
F64 sd1;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
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
sj1=-5931764594261734995ULL;
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
si1=17291616U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6370977829563918538ULL;
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
L2:;
si0=4U;
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

U32 f4939(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=88U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=5989187252420257853ULL;
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
si1=17291628U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4505252388225656942ULL;
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
L2:;
si0=4U;
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

U32 f4940(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=88U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6707021100152805024ULL;
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
si1=17291640U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1710244385285670643ULL;
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
L2:;
si0=4U;
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

U32 f4941(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=88U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1990017652305753703ULL;
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
si1=17291652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-3752079026291939265ULL;
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
L2:;
si0=4U;
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

U32 f4942(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=112U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-7513839195807229949ULL;
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
si1=17291664U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2590667664831664125ULL;
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
L2:;
si0=4U;
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

U32 f4943(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=104U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=5865824282761049569ULL;
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
si1=17291676U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2897120682922822562ULL;
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
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=104U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f4944(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=88U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4331136751969614377ULL;
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
si1=17291688U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3115202592026495962ULL;
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
L2:;
si0=4U;
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

U32 f4945(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-7665285106442039526ULL;
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
si1=17291700U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-4353642522867048687ULL;
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
L2:;
si0=4U;
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

U32 f4946(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=80U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-3542049472942220806ULL;
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
si1=17291712U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3144458157665682352ULL;
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
L2:;
si0=4U;
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

U32 f4947(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
si0=4U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l6;
if(si0){
goto L6;
}
si0=4U;
l5=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
si1=0U;
si2=l6;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=-196514206920042317ULL;
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
si1=17291724U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
sj1=-8563692070758448421ULL;
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
L2:;
si0=4U;
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

U32 f4948(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=464U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=6478474432156379417ULL;
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
si1=17291736U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-6838515368171685945ULL;
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
si2=408U;
si0=f15143(i,si0,si1,si2);
si0=l5;
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=464U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f4949(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
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
sj1=-2133218343929928874ULL;
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
si1=17291748U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-8233134555926709670ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=60U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l5;
goto L0;
L2:;
si0=4U;
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

U32 f4950(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=80U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=8080311700465507813ULL;
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
si1=17291760U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=3405249472825529671ULL;
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
L2:;
si0=4U;
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

U32 f4951(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=528U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=2014905729419835706ULL;
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
si1=17291784U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=8544920917130990862ULL;
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
si2=472U;
si0=f15143(i,si0,si1,si2);
si0=l5;
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=528U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f4952(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=128U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-5804192813691954056ULL;
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
si1=17291796U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-3846334253327133609ULL;
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
si0=f15143(i,si0,si1,si2);
si0=l5;
goto L0;
L2:;
si0=4U;
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

U32 f4953(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1072820170293401612ULL;
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
si1=17291808U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=2896637344846649340ULL;
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
L2:;
si0=4U;
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

U32 f4954(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-8493562945316227466ULL;
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
si1=17291820U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=4398921213670170678ULL;
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
L2:;
si0=4U;
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

U32 f4955(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=80U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2295367307525992740ULL;
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
si1=17291832U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6911619425446520681ULL;
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
L2:;
si0=4U;
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

U32 f4956(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=96U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-4018323822537366835ULL;
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
si1=17291844U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1572493452524604859ULL;
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
L2:;
si0=4U;
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

U32 f4957(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6879226489707195439ULL;
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
si1=17291856U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=1280318486529463543ULL;
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
L2:;
si0=4U;
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

U32 f4958(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
if(si0){
goto L6;
}
si0=4U;
l4=si0;
goto L5;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=368U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=258249825855146024ULL;
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
si1=17291868U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=101427454313011083ULL;
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
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l5;
goto L0;
L2:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=368U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f4959(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4960(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=520U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+520U);
f5522(i,si0);
L5:;
si0=l0;
si1=500U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=496U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=512U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4961(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
si1=84U;
si0+=si1;
l1=si0;
si1=l0;
si2=88U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
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
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=116U;
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
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4962(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4963(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+360U);
f5522(i,si0);
L5:;
si0=l0;
si1=348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4964(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=80U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=f15009(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L5:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+100U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4965(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L6:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L7:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L9:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L10:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4966(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4967(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L15;
case 4:
goto L14;
case 5:
goto L13;
case 6:
goto L12;
case 7:
goto L11;
case 8:
goto L10;
case 9:
goto L9;
case 10:
goto L8;
case 11:
goto L7;
default:
goto L19;
}
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L18:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L17:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L16:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L15:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L14:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L13:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L12:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L11:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L10:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L9:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L8:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4968(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4969(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L6:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
f5522(i,si0);
L8:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4970(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4971(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4972(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15024(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4973(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=452U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=448U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4974(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4975(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
si0=l0;
f15024(i,si0);
L0:;
}

void f4976(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l0;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
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
si0=l1;
si1=l0;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4977(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=80U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=f14991(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f4978(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

U32 f4979(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1700U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4980(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1701U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4981(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1702U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4982(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1703U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4983(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1704U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4984(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1705U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4985(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1706U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4986(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1707U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4987(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1708U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4988(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1709U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4989(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1710U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4990(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1711U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4991(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1712U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4992(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1713U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4993(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=44U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=17437896U;
si2=17437900U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+16U);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=17437864U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1714U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=17437896U;
si2=17437900U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f4994(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1715U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4995(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1716U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4996(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1717U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4997(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1718U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4998(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1719U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f4999(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1720U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f5000(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1721U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f5001(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17292228U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1722U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f5002(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
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
goto L9;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L10;
}
L13:;
si0=l8;
si1=17292244U;
si2=3U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=0U;
l8=si0;
goto L2;
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1129006670U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
goto L2;
L14:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1145783886U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=3U;
l8=si0;
goto L2;
L11:;
si0=l8;
si1=17292247U;
si2=3U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=2U;
l8=si0;
goto L2;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=26U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17292274U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17292266U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17292258U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17292250U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=111669149722ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l2;
si2=l9;
si3=l4;
si4=4U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l0;
si1=l3;
si2=17244704U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L6:;
si0=l0;
si1=l3;
si2=17244700U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f11342(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L5:;
si0=1U;
si1=26U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=1U;
l8=si0;
goto L1;
L2:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f5003(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
{
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l5;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L5;
L7:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l7;
si1=18661100U;
si2=l7;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
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
goto L1;
}
si0=l0;
si1=l5;
si2=l1;
si3=l2;
si4=l3;
si5=l6;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
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
goto L2;
}
si0=l1;
f5522(i,si0);
goto L2;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L9;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l5;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L9;
L12:;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
L9:;
si0=l7;
si1=18663056U;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L16;
case 1:
goto L14;
case 2:
goto L17;
default:
goto L16;
}
L17:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17291976U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=857U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
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
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L13;
L16:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f4227(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L18;
L19:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17263128U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=842U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=17263136U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=l4;
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
L18:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
f5522(i,si0);
L20:;
si0=l1;
if(si0){
goto L13;
}
si0=l0;
si1=l7;
si2=l5;
si3=l2;
si4=l3;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l5=si0;
goto L2;
L15:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=17292200U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=857U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=40U;
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
si3=28U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
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
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L14:;
si0=l6;
l5=si0;
L13:;
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
goto L2;
}
si0=l2;
f5522(i,si0);
goto L2;
L3:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f3988(i,si0,si1,si2,si3);
l5=si0;
L2:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5004(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f13772(i,si0,si1);
L0:;
return si0;
}

U32 f5005(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L8;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L9:;
{
si0=l6;
if(si0){
goto L10;
}
si0=0U;
l8=si0;
goto L8;
L10:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si1=18661100U;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
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
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L12:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
si2=l5;
si3=12U;
si2+=si3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f8912(i,si2,si3);
l6=si2;
si3=l3;
si4=l4;
si5=l8;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l0=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
f5522(i,si0);
goto L5;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l8=si0;
goto L13;
L14:;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L13;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L15:;
{
si0=l6;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L13;
L16:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L13:;
si0=l8;
si1=18663056U;
si2=l8;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342076U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342068U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
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
si0=l5;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L1;
L18:;
si0=l5;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=17292200U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=857U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l4;
si1=l0;
si2=l5;
si0=f11521(i,si0,si1,si2);
l0=si0;
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
goto L5;
}
si0=l3;
f5522(i,si0);
goto L5;
L17:;
si0=l4;
si1=l6;
si2=l5;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
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
goto L5;
}
si0=l3;
f5522(i,si0);
goto L5;
L6:;
si0=l0;
si1=56U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
si4=l3;
si0=f3990(i,si0,si1,si2,si3,si4);
l0=si0;
L5:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
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
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f5006(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
if(si0){
goto L1;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
si2=l2;
si1=f8550(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l4=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f5007(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=52U;
si0+=si1;
si1=l1;
si2=l0;
f13151(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=20U;
si0+=si1;
l5=si0;
si1=l3;
si2=52U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+93U);
i32_store16(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l0;
si1=12U;
si0*=si1;
l0=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l6;
si1=l0;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
L8:;
si0=l5;
si1=l4;
si0*=si1;
l4=si0;
si0=l0;
si1=-12U;
si0+=si1;
l0=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=l4;
switch(si0){
case 0:
goto L15;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L14;
default:
goto L15;
}
L15:;
si0=l2;
si1=l0;
si2=l5;
f3641(i,si0,si1,si2);
si0=0U;
l0=si0;
goto L4;
L14:;
si0=l2;
si1=l5;
si2=l7;
f3641(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L9;
L13:;
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
si2=l5;
f3641(i,si0,si1,si2);
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
goto L9;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
si0=0U;
l0=si0;
goto L4;
L12:;
si0=l2;
si1=l5;
si2=l7;
f3641(i,si0,si1,si2);
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
goto L9;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
si0=0U;
l0=si0;
goto L4;
L11:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
si2=l5;
f3641(i,si0,si1,si2);
si0=l0;
si1=l0;
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
goto L9;
}
L10:;
si0=l0;
f1354(i,si0);
L9:;
si0=0U;
l0=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291920U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291912U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291904U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291896U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291888U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17291880U);
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
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=l3;
si3=52U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l0=si0;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L16:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
f15024(i,si0);
L17:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L3:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f5008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si0=f3991(i,si0,si1,si2);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L3;
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
L4:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l7;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l5;
si1=l1;
si2=l6;
si3=l4;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
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
goto L1;
}
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si2=l1;
si3=l6;
f11937(i,si0,si1,si2,si3);
L5:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17291992U;
si1=43U;
si2=17292100U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5009(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f5009(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
goto L1;
L13:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f3987(i,si0,si1,si2,si3);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L1;
}
si0=0U;
l6=si0;
si0=l5;
if(si0){
goto L1;
}
si0=l1;
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
goto L7;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=940U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f11942(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
l5=si0;
goto L1;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=f8550(i,si0,si1);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=164U;
si1+=si2;
f3983(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=96U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
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
goto L16;
}
si0=l1;
f5522(i,si0);
L16:;
si0=l6;
switch(si0){
case 0:
goto L17;
case 1:
goto L1;
case 2:
goto L14;
default:
goto L17;
}
L17:;
si0=0U;
l6=si0;
goto L1;
L14:;
si0=1U;
l6=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1=f8550(i,si1,si2);
si0=f11876(i,si0,si1);
l5=si0;
goto L1;
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=f8550(i,si0,si1);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L28;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L29:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l2;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L29;
}
}
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L26;
}
L27:;
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=17432196U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=164U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=l1;
si2=l3;
f14507(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l1=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l7;
si2=l3;
f5555(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
switch(si0){
case 0:
goto L24;
case 1:
goto L21;
case 2:
goto L25;
default:
goto L24;
}
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L30;
}
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=17432232U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=1723U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=164U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
si0=0U;
l3=si0;
goto L3;
L30:;
si0=l4;
si1=80U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=l3;
si5=l5;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l6=si0;
goto L3;
L25:;
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=17291976U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=857U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=164U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L20;
L24:;
si0=l4;
si1=64U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f4227(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l10=si0;
goto L31;
L32:;
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=17263128U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=842U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=17263136U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
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
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si2=l4;
si3=164U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l10=si0;
L31:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
f5522(i,si0);
L33:;
si0=l9;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
l5=si0;
goto L20;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L35:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L34:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=1U;
l8=si0;
si0=l1;
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
goto L7;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=688U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f4105(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
l5=si0;
goto L20;
L22:;
si0=l4;
si1=56U;
si0+=si1;
si1=l6;
si2=l1;
si3=l10;
si4=l3;
f14512(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
if(si0){
goto L4;
}
goto L5;
L21:;
si0=1U;
l8=si0;
L20:;
si0=1U;
l6=si0;
goto L6;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l7;
f5010(i,si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l9;
si2=l4;
si3=96U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
f5522(i,si0);
goto L6;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l5;
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
goto L7;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l5;
si2=l7;
si3=l3;
f12298(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si1=296U;
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
goto L7;
}
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
goto L36;
}
si0=l1;
si1=8U;
si0+=si1;
si0=f10795(i,si0);
l3=si0;
L36:;
si0=l6;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L38;
}
si0=4U;
l9=si0;
goto L37;
L38:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L41;
}
si0=l5;
if(si0){
goto L40;
}
si0=4U;
l9=si0;
goto L39;
L41:;
f53(i);
UNREACHABLE;
L40:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
L39:;
si0=l9;
si1=0U;
si2=l5;
si0=f15145(i,si0,si1,si2);
L37:;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=72U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
sj1=-3101122357740621133ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=17291772U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-8602203138989373742ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
goto L6;
L11:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=17292148U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=857U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f64(i,si0,si1);
si0=1U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L7;
}
si0=l3;
si1=l5;
si2=l4;
si3=164U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l5=si0;
goto L5;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
if(si0){
goto L42;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
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
goto L42;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L42:;
si0=l8;
si0=!(si0);
if(si0){
goto L43;
}
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
goto L43;
}
si0=l7;
f5522(i,si0);
L43:;
si0=l2;
si1=l2;
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
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
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
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L4:;
si0=1U;
l3=si0;
L3:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l7;
f5522(i,si0);
L44:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
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
L2:;
si0=l2;
f5522(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5010(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
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
goto L2;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=f3982(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l0;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=17238184U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=17308684U;
si1=70U;
si2=l2;
si3=15U;
si2+=si3;
si3=17308756U;
si4=17308852U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f5011(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+24U);
si2=i32_load(&i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f5012(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f3725(i,si0,si1);
L0:;
return si0;
}

U32 f5013(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f9263(i,si0,si1);
L0:;
return si0;
}

U32 f5014(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si0=f620(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f5015(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17578919U;
si2=7U;
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
si1=17578926U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=17578932U;
si0=f644(i,si0,si1,si2,si3,si4);
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

U32 f5016(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1169396U;
si2=10U;
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
si1=1169327U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1169408U;
si0=f644(i,si0,si1,si2,si3,si4);
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

void f5017(rustpythonInstance*i,U32 l0) {
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
f4900(i,si0,si1);
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
si0=f15144(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
L1:;
L0:;
}

void f5018(rustpythonInstance*i,U32 l0) {
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
f4898(i,si0,si1);
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
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L1:;
L0:;
}

void f5019(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659376U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9152216812325816393ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2350181552456182105ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5020(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658944U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658948U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6478474432156379417ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6838515368171685945ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17252708U;
si1=36U;
si2=17252796U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5021(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659284U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659288U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4331136751969614377ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3115202592026495962ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17292356U;
si1=36U;
si2=17292444U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5022(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658864U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658868U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7513839195807229949ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2590667664831664125ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17244711U;
si1=36U;
si2=17244800U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5023(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658656U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658660U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7665285106442039526ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4353642522867048687ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17230260U;
si1=36U;
si2=17230348U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5024(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658648U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658652U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3542049472942220806ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3144458157665682352ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17230260U;
si1=36U;
si2=17230348U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5025(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658872U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658876U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5865824282761049569ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2897120682922822562ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17244711U;
si1=36U;
si2=17244800U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5026(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659320U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659324U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2133218343929928874ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8233134555926709670ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17292356U;
si1=36U;
si2=17292444U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5027(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5028(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659424U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18659428U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=258249825855146024ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=101427454313011083ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17300928U;
si1=36U;
si2=17301016U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5029(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
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
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17244704U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17244700U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

